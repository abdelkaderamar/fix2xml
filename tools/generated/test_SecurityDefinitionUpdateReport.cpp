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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionUpdateReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_21("LOCALMKTDATE_1417642494");
  msg.set(ClearingBusinessDate_21);
  SecurityDefinitionUpdateReport_0.insert(ClearingBusinessDate_21.getString());
  FIX::CorporateAction CorporateAction_8("MULTIPLECHARVALUE_M");
  msg.set(CorporateAction_8);
  SecurityDefinitionUpdateReport_0.insert(CorporateAction_8.getString());
  FIX::Currency Currency_65("CAN");
  msg.set(Currency_65);
  SecurityDefinitionUpdateReport_0.insert(Currency_65.getString());
  FIX::EncodedText EncodedText_84("DATA_1324932229");
  msg.set(EncodedText_84);
  SecurityDefinitionUpdateReport_0.insert(EncodedText_84.getString());
  FIX::EncodedTextLen EncodedTextLen_84(679952471);
  msg.set(EncodedTextLen_84);
  SecurityDefinitionUpdateReport_0.insert(EncodedTextLen_84.getString());
  FIX::SecurityReportID SecurityReportID_2(1764575624);
  msg.set(SecurityReportID_2);
  SecurityDefinitionUpdateReport_0.insert(SecurityReportID_2.getString());
  FIX::SecurityReqID SecurityReqID_5("STRING_223528602");
  msg.set(SecurityReqID_5);
  SecurityDefinitionUpdateReport_0.insert(SecurityReqID_5.getString());
  FIX::SecurityResponseID SecurityResponseID_3("STRING_1185031849");
  msg.set(SecurityResponseID_3);
  SecurityDefinitionUpdateReport_0.insert(SecurityResponseID_3.getString());
  FIX::SecurityResponseType SecurityResponseType_1(1);
  msg.set(SecurityResponseType_1);
  SecurityDefinitionUpdateReport_0.insert(SecurityResponseType_1.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_1('D');
  msg.set(SecurityUpdateAction_1);
  SecurityDefinitionUpdateReport_0.insert(SecurityUpdateAction_1.getString());
  FIX::Text Text_84("STRING_15049001");
  msg.set(Text_84);
  SecurityDefinitionUpdateReport_0.insert(Text_84.getString());
  FIX::TransactTime TransactTime_64(FIX::UTCTIMESTAMP(14, 30, 59, 0, 3, 2007));
  msg.set(TransactTime_64);
  SecurityDefinitionUpdateReport_0.insert(TransactTime_64.getString());
  all_values.push_back(SecurityDefinitionUpdateReport_0);

  all_compo_names.insert("SecurityDefinitionUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_13;
  FIX::ApplID ApplID_13("STRING_2037540054");
  msg.set(ApplID_13);
  ApplicationSequenceControl_13.insert(ApplID_13.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_13(618977247);
  msg.set(ApplLastSeqNum_13);
  ApplicationSequenceControl_13.insert(ApplLastSeqNum_13.getString());
  FIX::ApplResendFlag ApplResendFlag_13(false);
  msg.set(ApplResendFlag_13);
  ApplicationSequenceControl_13.insert(ApplResendFlag_13.getString());
  FIX::ApplSeqNum ApplSeqNum_13(2005519058);
  msg.set(ApplSeqNum_13);
  ApplicationSequenceControl_13.insert(ApplSeqNum_13.getString());
  all_values.push_back(ApplicationSequenceControl_13);
  all_compo_names.insert("ApplicationSequenceControl");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_131;
    FIX::EncodedLegIssuer EncodedLegIssuer_131("DATA_503575346");
    noLegs_0_0.set(EncodedLegIssuer_131);
    InstrumentLeg_131.insert(EncodedLegIssuer_131.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_131(888024239);
    noLegs_0_0.set(EncodedLegIssuerLen_131);
    InstrumentLeg_131.insert(EncodedLegIssuerLen_131.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_131("DATA_1681086319");
    noLegs_0_0.set(EncodedLegSecurityDesc_131);
    InstrumentLeg_131.insert(EncodedLegSecurityDesc_131.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_131(1382827662);
    noLegs_0_0.set(EncodedLegSecurityDescLen_131);
    InstrumentLeg_131.insert(EncodedLegSecurityDescLen_131.getString());
    FIX::LegCFICode LegCFICode_131("STRING_500728961");
    noLegs_0_0.set(LegCFICode_131);
    InstrumentLeg_131.insert(LegCFICode_131.getString());
    FIX::LegContractMultiplier LegContractMultiplier_131;
    LegContractMultiplier_131.setString("535804");
    noLegs_0_0.set(LegContractMultiplier_131);
    InstrumentLeg_131.insert(LegContractMultiplier_131.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_131(2024422210);
    noLegs_0_0.set(LegContractMultiplierUnit_131);
    InstrumentLeg_131.insert(LegContractMultiplierUnit_131.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_131("MONTHYEAR_1918371455");
    noLegs_0_0.set(LegContractSettlMonth_131);
    InstrumentLeg_131.insert(LegContractSettlMonth_131.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_131("COUNTRY_1121210091");
    noLegs_0_0.set(LegCountryOfIssue_131);
    InstrumentLeg_131.insert(LegCountryOfIssue_131.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_131("LOCALMKTDATE_1673503073");
    noLegs_0_0.set(LegCouponPaymentDate_131);
    InstrumentLeg_131.insert(LegCouponPaymentDate_131.getString());
    FIX::LegCouponRate LegCouponRate_131;
    LegCouponRate_131.setString("66.800000");
    noLegs_0_0.set(LegCouponRate_131);
    InstrumentLeg_131.insert(LegCouponRate_131.getString());
    FIX::LegCreditRating LegCreditRating_131("STRING_298658672");
    noLegs_0_0.set(LegCreditRating_131);
    InstrumentLeg_131.insert(LegCreditRating_131.getString());
    FIX::LegCurrency LegCurrency_131("JPY");
    noLegs_0_0.set(LegCurrency_131);
    InstrumentLeg_131.insert(LegCurrency_131.getString());
    FIX::LegDatedDate LegDatedDate_131("LOCALMKTDATE_522187275");
    noLegs_0_0.set(LegDatedDate_131);
    InstrumentLeg_131.insert(LegDatedDate_131.getString());
    FIX::LegExerciseStyle LegExerciseStyle_131(1391003745);
    noLegs_0_0.set(LegExerciseStyle_131);
    InstrumentLeg_131.insert(LegExerciseStyle_131.getString());
    FIX::LegFactor LegFactor_131;
    LegFactor_131.setString("4729270");
    noLegs_0_0.set(LegFactor_131);
    InstrumentLeg_131.insert(LegFactor_131.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_131(1686922342);
    noLegs_0_0.set(LegFlowScheduleType_131);
    InstrumentLeg_131.insert(LegFlowScheduleType_131.getString());
    FIX::LegInstrRegistry LegInstrRegistry_131("STRING_1406052747");
    noLegs_0_0.set(LegInstrRegistry_131);
    InstrumentLeg_131.insert(LegInstrRegistry_131.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_131("LOCALMKTDATE_1108809879");
    noLegs_0_0.set(LegInterestAccrualDate_131);
    InstrumentLeg_131.insert(LegInterestAccrualDate_131.getString());
    FIX::LegIssueDate LegIssueDate_131("LOCALMKTDATE_2129922852");
    noLegs_0_0.set(LegIssueDate_131);
    InstrumentLeg_131.insert(LegIssueDate_131.getString());
    FIX::LegIssuer LegIssuer_131("STRING_1958237757");
    noLegs_0_0.set(LegIssuer_131);
    InstrumentLeg_131.insert(LegIssuer_131.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_131("STRING_62856331");
    noLegs_0_0.set(LegLocaleOfIssue_131);
    InstrumentLeg_131.insert(LegLocaleOfIssue_131.getString());
    FIX::LegMaturityDate LegMaturityDate_131("LOCALMKTDATE_1228070165");
    noLegs_0_0.set(LegMaturityDate_131);
    InstrumentLeg_131.insert(LegMaturityDate_131.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_131("MONTHYEAR_109933287");
    noLegs_0_0.set(LegMaturityMonthYear_131);
    InstrumentLeg_131.insert(LegMaturityMonthYear_131.getString());
    FIX::LegMaturityTime LegMaturityTime_131("TZTIMEONLY_1892319584");
    noLegs_0_0.set(LegMaturityTime_131);
    InstrumentLeg_131.insert(LegMaturityTime_131.getString());
    FIX::LegOptAttribute LegOptAttribute_131('1');
    noLegs_0_0.set(LegOptAttribute_131);
    InstrumentLeg_131.insert(LegOptAttribute_131.getString());
    FIX::LegOptionRatio LegOptionRatio_131;
    LegOptionRatio_131.setString("7289105");
    noLegs_0_0.set(LegOptionRatio_131);
    InstrumentLeg_131.insert(LegOptionRatio_131.getString());
    FIX::LegPool LegPool_131("STRING_409182683");
    noLegs_0_0.set(LegPool_131);
    InstrumentLeg_131.insert(LegPool_131.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_131("STRING_976161981");
    noLegs_0_0.set(LegPriceUnitOfMeasure_131);
    InstrumentLeg_131.insert(LegPriceUnitOfMeasure_131.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_131;
    LegPriceUnitOfMeasureQty_131.setString("17723905");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_131);
    InstrumentLeg_131.insert(LegPriceUnitOfMeasureQty_131.getString());
    FIX::LegProduct LegProduct_131(912758029);
    noLegs_0_0.set(LegProduct_131);
    InstrumentLeg_131.insert(LegProduct_131.getString());
    FIX::LegPutOrCall LegPutOrCall_131(1864186221);
    noLegs_0_0.set(LegPutOrCall_131);
    InstrumentLeg_131.insert(LegPutOrCall_131.getString());
    FIX::LegRatioQty LegRatioQty_131;
    LegRatioQty_131.setString("13059931");
    noLegs_0_0.set(LegRatioQty_131);
    InstrumentLeg_131.insert(LegRatioQty_131.getString());
    FIX::LegRedemptionDate LegRedemptionDate_131("LOCALMKTDATE_148102043");
    noLegs_0_0.set(LegRedemptionDate_131);
    InstrumentLeg_131.insert(LegRedemptionDate_131.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_131("STRING_217431534");
    noLegs_0_0.set(LegRepoCollateralSecurityType_131);
    InstrumentLeg_131.insert(LegRepoCollateralSecurityType_131.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_131;
    LegRepurchaseRate_131.setString("36.150000");
    noLegs_0_0.set(LegRepurchaseRate_131);
    InstrumentLeg_131.insert(LegRepurchaseRate_131.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_131(25040605);
    noLegs_0_0.set(LegRepurchaseTerm_131);
    InstrumentLeg_131.insert(LegRepurchaseTerm_131.getString());
    FIX::LegSecurityDesc LegSecurityDesc_131("STRING_2135802989");
    noLegs_0_0.set(LegSecurityDesc_131);
    InstrumentLeg_131.insert(LegSecurityDesc_131.getString());
    FIX::LegSecurityExchange LegSecurityExchange_131("EXCHANGE_333300058");
    noLegs_0_0.set(LegSecurityExchange_131);
    InstrumentLeg_131.insert(LegSecurityExchange_131.getString());
    FIX::LegSecurityID LegSecurityID_131("STRING_1698543678");
    noLegs_0_0.set(LegSecurityID_131);
    InstrumentLeg_131.insert(LegSecurityID_131.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_131("STRING_2051806021");
    noLegs_0_0.set(LegSecurityIDSource_131);
    InstrumentLeg_131.insert(LegSecurityIDSource_131.getString());
    FIX::LegSecuritySubType LegSecuritySubType_131("STRING_631958731");
    noLegs_0_0.set(LegSecuritySubType_131);
    InstrumentLeg_131.insert(LegSecuritySubType_131.getString());
    FIX::LegSecurityType LegSecurityType_131("STRING_1904515574");
    noLegs_0_0.set(LegSecurityType_131);
    InstrumentLeg_131.insert(LegSecurityType_131.getString());
    FIX::LegSide LegSide_131('1');
    noLegs_0_0.set(LegSide_131);
    InstrumentLeg_131.insert(LegSide_131.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_131("STRING_1154146006");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_131);
    InstrumentLeg_131.insert(LegStateOrProvinceOfIssue_131.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_131("CAN");
    noLegs_0_0.set(LegStrikeCurrency_131);
    InstrumentLeg_131.insert(LegStrikeCurrency_131.getString());
    FIX::LegStrikePrice LegStrikePrice_131;
    LegStrikePrice_131.setString("6935847");
    noLegs_0_0.set(LegStrikePrice_131);
    InstrumentLeg_131.insert(LegStrikePrice_131.getString());
    FIX::LegSymbol LegSymbol_131("STRING_406604771");
    noLegs_0_0.set(LegSymbol_131);
    InstrumentLeg_131.insert(LegSymbol_131.getString());
    FIX::LegSymbolSfx LegSymbolSfx_131("STRING_1019154336");
    noLegs_0_0.set(LegSymbolSfx_131);
    InstrumentLeg_131.insert(LegSymbolSfx_131.getString());
    FIX::LegTimeUnit LegTimeUnit_131("STRING_676023904");
    noLegs_0_0.set(LegTimeUnit_131);
    InstrumentLeg_131.insert(LegTimeUnit_131.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_131("STRING_217358880");
    noLegs_0_0.set(LegUnitOfMeasure_131);
    InstrumentLeg_131.insert(LegUnitOfMeasure_131.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_131;
    LegUnitOfMeasureQty_131.setString("10820106");
    noLegs_0_0.set(LegUnitOfMeasureQty_131);
    InstrumentLeg_131.insert(LegUnitOfMeasureQty_131.getString());
    all_values.push_back(InstrumentLeg_131);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_258;
      FIX::LegSecurityAltID LegSecurityAltID_258("STRING_327292168");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_258);
      LegSecAltIDGrp_NoLegSecurityAltID_258.insert(LegSecurityAltID_258.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_258("STRING_826846604");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_258);
      LegSecAltIDGrp_NoLegSecurityAltID_258.insert(LegSecurityAltIDSource_258.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_258);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_132;
    FIX::EncodedLegIssuer EncodedLegIssuer_132("DATA_874736992");
    noLegs_0_1.set(EncodedLegIssuer_132);
    InstrumentLeg_132.insert(EncodedLegIssuer_132.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_132(1056202703);
    noLegs_0_1.set(EncodedLegIssuerLen_132);
    InstrumentLeg_132.insert(EncodedLegIssuerLen_132.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_132("DATA_1236029287");
    noLegs_0_1.set(EncodedLegSecurityDesc_132);
    InstrumentLeg_132.insert(EncodedLegSecurityDesc_132.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_132(1850898974);
    noLegs_0_1.set(EncodedLegSecurityDescLen_132);
    InstrumentLeg_132.insert(EncodedLegSecurityDescLen_132.getString());
    FIX::LegCFICode LegCFICode_132("STRING_681109560");
    noLegs_0_1.set(LegCFICode_132);
    InstrumentLeg_132.insert(LegCFICode_132.getString());
    FIX::LegContractMultiplier LegContractMultiplier_132;
    LegContractMultiplier_132.setString("13036");
    noLegs_0_1.set(LegContractMultiplier_132);
    InstrumentLeg_132.insert(LegContractMultiplier_132.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_132(1567601547);
    noLegs_0_1.set(LegContractMultiplierUnit_132);
    InstrumentLeg_132.insert(LegContractMultiplierUnit_132.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_132("MONTHYEAR_1987102737");
    noLegs_0_1.set(LegContractSettlMonth_132);
    InstrumentLeg_132.insert(LegContractSettlMonth_132.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_132("COUNTRY_149405712");
    noLegs_0_1.set(LegCountryOfIssue_132);
    InstrumentLeg_132.insert(LegCountryOfIssue_132.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_132("LOCALMKTDATE_1785033081");
    noLegs_0_1.set(LegCouponPaymentDate_132);
    InstrumentLeg_132.insert(LegCouponPaymentDate_132.getString());
    FIX::LegCouponRate LegCouponRate_132;
    LegCouponRate_132.setString("27.040000");
    noLegs_0_1.set(LegCouponRate_132);
    InstrumentLeg_132.insert(LegCouponRate_132.getString());
    FIX::LegCreditRating LegCreditRating_132("STRING_174446318");
    noLegs_0_1.set(LegCreditRating_132);
    InstrumentLeg_132.insert(LegCreditRating_132.getString());
    FIX::LegCurrency LegCurrency_132("CHF");
    noLegs_0_1.set(LegCurrency_132);
    InstrumentLeg_132.insert(LegCurrency_132.getString());
    FIX::LegDatedDate LegDatedDate_132("LOCALMKTDATE_1872989996");
    noLegs_0_1.set(LegDatedDate_132);
    InstrumentLeg_132.insert(LegDatedDate_132.getString());
    FIX::LegExerciseStyle LegExerciseStyle_132(1677674795);
    noLegs_0_1.set(LegExerciseStyle_132);
    InstrumentLeg_132.insert(LegExerciseStyle_132.getString());
    FIX::LegFactor LegFactor_132;
    LegFactor_132.setString("169678");
    noLegs_0_1.set(LegFactor_132);
    InstrumentLeg_132.insert(LegFactor_132.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_132(1630021923);
    noLegs_0_1.set(LegFlowScheduleType_132);
    InstrumentLeg_132.insert(LegFlowScheduleType_132.getString());
    FIX::LegInstrRegistry LegInstrRegistry_132("STRING_1115092176");
    noLegs_0_1.set(LegInstrRegistry_132);
    InstrumentLeg_132.insert(LegInstrRegistry_132.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_132("LOCALMKTDATE_1171113852");
    noLegs_0_1.set(LegInterestAccrualDate_132);
    InstrumentLeg_132.insert(LegInterestAccrualDate_132.getString());
    FIX::LegIssueDate LegIssueDate_132("LOCALMKTDATE_630573947");
    noLegs_0_1.set(LegIssueDate_132);
    InstrumentLeg_132.insert(LegIssueDate_132.getString());
    FIX::LegIssuer LegIssuer_132("STRING_1025436633");
    noLegs_0_1.set(LegIssuer_132);
    InstrumentLeg_132.insert(LegIssuer_132.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_132("STRING_1864698552");
    noLegs_0_1.set(LegLocaleOfIssue_132);
    InstrumentLeg_132.insert(LegLocaleOfIssue_132.getString());
    FIX::LegMaturityDate LegMaturityDate_132("LOCALMKTDATE_1037178718");
    noLegs_0_1.set(LegMaturityDate_132);
    InstrumentLeg_132.insert(LegMaturityDate_132.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_132("MONTHYEAR_2044590969");
    noLegs_0_1.set(LegMaturityMonthYear_132);
    InstrumentLeg_132.insert(LegMaturityMonthYear_132.getString());
    FIX::LegMaturityTime LegMaturityTime_132("TZTIMEONLY_393238808");
    noLegs_0_1.set(LegMaturityTime_132);
    InstrumentLeg_132.insert(LegMaturityTime_132.getString());
    FIX::LegOptAttribute LegOptAttribute_132('1');
    noLegs_0_1.set(LegOptAttribute_132);
    InstrumentLeg_132.insert(LegOptAttribute_132.getString());
    FIX::LegOptionRatio LegOptionRatio_132;
    LegOptionRatio_132.setString("9791179");
    noLegs_0_1.set(LegOptionRatio_132);
    InstrumentLeg_132.insert(LegOptionRatio_132.getString());
    FIX::LegPool LegPool_132("STRING_149849230");
    noLegs_0_1.set(LegPool_132);
    InstrumentLeg_132.insert(LegPool_132.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_132("STRING_1581829766");
    noLegs_0_1.set(LegPriceUnitOfMeasure_132);
    InstrumentLeg_132.insert(LegPriceUnitOfMeasure_132.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_132;
    LegPriceUnitOfMeasureQty_132.setString("18059645");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_132);
    InstrumentLeg_132.insert(LegPriceUnitOfMeasureQty_132.getString());
    FIX::LegProduct LegProduct_132(1024586222);
    noLegs_0_1.set(LegProduct_132);
    InstrumentLeg_132.insert(LegProduct_132.getString());
    FIX::LegPutOrCall LegPutOrCall_132(490548821);
    noLegs_0_1.set(LegPutOrCall_132);
    InstrumentLeg_132.insert(LegPutOrCall_132.getString());
    FIX::LegRatioQty LegRatioQty_132;
    LegRatioQty_132.setString("8945102");
    noLegs_0_1.set(LegRatioQty_132);
    InstrumentLeg_132.insert(LegRatioQty_132.getString());
    FIX::LegRedemptionDate LegRedemptionDate_132("LOCALMKTDATE_728001548");
    noLegs_0_1.set(LegRedemptionDate_132);
    InstrumentLeg_132.insert(LegRedemptionDate_132.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_132("STRING_1171658382");
    noLegs_0_1.set(LegRepoCollateralSecurityType_132);
    InstrumentLeg_132.insert(LegRepoCollateralSecurityType_132.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_132;
    LegRepurchaseRate_132.setString("39.010000");
    noLegs_0_1.set(LegRepurchaseRate_132);
    InstrumentLeg_132.insert(LegRepurchaseRate_132.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_132(148119447);
    noLegs_0_1.set(LegRepurchaseTerm_132);
    InstrumentLeg_132.insert(LegRepurchaseTerm_132.getString());
    FIX::LegSecurityDesc LegSecurityDesc_132("STRING_1011277471");
    noLegs_0_1.set(LegSecurityDesc_132);
    InstrumentLeg_132.insert(LegSecurityDesc_132.getString());
    FIX::LegSecurityExchange LegSecurityExchange_132("EXCHANGE_1045219614");
    noLegs_0_1.set(LegSecurityExchange_132);
    InstrumentLeg_132.insert(LegSecurityExchange_132.getString());
    FIX::LegSecurityID LegSecurityID_132("STRING_1933152528");
    noLegs_0_1.set(LegSecurityID_132);
    InstrumentLeg_132.insert(LegSecurityID_132.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_132("STRING_62986527");
    noLegs_0_1.set(LegSecurityIDSource_132);
    InstrumentLeg_132.insert(LegSecurityIDSource_132.getString());
    FIX::LegSecuritySubType LegSecuritySubType_132("STRING_1219665932");
    noLegs_0_1.set(LegSecuritySubType_132);
    InstrumentLeg_132.insert(LegSecuritySubType_132.getString());
    FIX::LegSecurityType LegSecurityType_132("STRING_1559021302");
    noLegs_0_1.set(LegSecurityType_132);
    InstrumentLeg_132.insert(LegSecurityType_132.getString());
    FIX::LegSide LegSide_132('1');
    noLegs_0_1.set(LegSide_132);
    InstrumentLeg_132.insert(LegSide_132.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_132("STRING_945172280");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_132);
    InstrumentLeg_132.insert(LegStateOrProvinceOfIssue_132.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_132("GBP");
    noLegs_0_1.set(LegStrikeCurrency_132);
    InstrumentLeg_132.insert(LegStrikeCurrency_132.getString());
    FIX::LegStrikePrice LegStrikePrice_132;
    LegStrikePrice_132.setString("4277105");
    noLegs_0_1.set(LegStrikePrice_132);
    InstrumentLeg_132.insert(LegStrikePrice_132.getString());
    FIX::LegSymbol LegSymbol_132("STRING_56820977");
    noLegs_0_1.set(LegSymbol_132);
    InstrumentLeg_132.insert(LegSymbol_132.getString());
    FIX::LegSymbolSfx LegSymbolSfx_132("STRING_636077340");
    noLegs_0_1.set(LegSymbolSfx_132);
    InstrumentLeg_132.insert(LegSymbolSfx_132.getString());
    FIX::LegTimeUnit LegTimeUnit_132("STRING_1058284502");
    noLegs_0_1.set(LegTimeUnit_132);
    InstrumentLeg_132.insert(LegTimeUnit_132.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_132("STRING_1082257610");
    noLegs_0_1.set(LegUnitOfMeasure_132);
    InstrumentLeg_132.insert(LegUnitOfMeasure_132.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_132;
    LegUnitOfMeasureQty_132.setString("3532922");
    noLegs_0_1.set(LegUnitOfMeasureQty_132);
    InstrumentLeg_132.insert(LegUnitOfMeasureQty_132.getString());
    all_values.push_back(InstrumentLeg_132);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_259;
      FIX::LegSecurityAltID LegSecurityAltID_259("STRING_979364932");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_259);
      LegSecAltIDGrp_NoLegSecurityAltID_259.insert(LegSecurityAltID_259.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_259("STRING_746531053");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_259);
      LegSecAltIDGrp_NoLegSecurityAltID_259.insert(LegSecurityAltIDSource_259.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_259);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_133;
    FIX::EncodedLegIssuer EncodedLegIssuer_133("DATA_1202517171");
    noLegs_0_2.set(EncodedLegIssuer_133);
    InstrumentLeg_133.insert(EncodedLegIssuer_133.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_133(1958482921);
    noLegs_0_2.set(EncodedLegIssuerLen_133);
    InstrumentLeg_133.insert(EncodedLegIssuerLen_133.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_133("DATA_896380283");
    noLegs_0_2.set(EncodedLegSecurityDesc_133);
    InstrumentLeg_133.insert(EncodedLegSecurityDesc_133.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_133(636863289);
    noLegs_0_2.set(EncodedLegSecurityDescLen_133);
    InstrumentLeg_133.insert(EncodedLegSecurityDescLen_133.getString());
    FIX::LegCFICode LegCFICode_133("STRING_1616963866");
    noLegs_0_2.set(LegCFICode_133);
    InstrumentLeg_133.insert(LegCFICode_133.getString());
    FIX::LegContractMultiplier LegContractMultiplier_133;
    LegContractMultiplier_133.setString("19209665");
    noLegs_0_2.set(LegContractMultiplier_133);
    InstrumentLeg_133.insert(LegContractMultiplier_133.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_133(1127412111);
    noLegs_0_2.set(LegContractMultiplierUnit_133);
    InstrumentLeg_133.insert(LegContractMultiplierUnit_133.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_133("MONTHYEAR_363990450");
    noLegs_0_2.set(LegContractSettlMonth_133);
    InstrumentLeg_133.insert(LegContractSettlMonth_133.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_133("COUNTRY_501484406");
    noLegs_0_2.set(LegCountryOfIssue_133);
    InstrumentLeg_133.insert(LegCountryOfIssue_133.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_133("LOCALMKTDATE_151586845");
    noLegs_0_2.set(LegCouponPaymentDate_133);
    InstrumentLeg_133.insert(LegCouponPaymentDate_133.getString());
    FIX::LegCouponRate LegCouponRate_133;
    LegCouponRate_133.setString("43.520000");
    noLegs_0_2.set(LegCouponRate_133);
    InstrumentLeg_133.insert(LegCouponRate_133.getString());
    FIX::LegCreditRating LegCreditRating_133("STRING_649603853");
    noLegs_0_2.set(LegCreditRating_133);
    InstrumentLeg_133.insert(LegCreditRating_133.getString());
    FIX::LegCurrency LegCurrency_133("JPY");
    noLegs_0_2.set(LegCurrency_133);
    InstrumentLeg_133.insert(LegCurrency_133.getString());
    FIX::LegDatedDate LegDatedDate_133("LOCALMKTDATE_435272734");
    noLegs_0_2.set(LegDatedDate_133);
    InstrumentLeg_133.insert(LegDatedDate_133.getString());
    FIX::LegExerciseStyle LegExerciseStyle_133(1225850843);
    noLegs_0_2.set(LegExerciseStyle_133);
    InstrumentLeg_133.insert(LegExerciseStyle_133.getString());
    FIX::LegFactor LegFactor_133;
    LegFactor_133.setString("13772062");
    noLegs_0_2.set(LegFactor_133);
    InstrumentLeg_133.insert(LegFactor_133.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_133(1994294036);
    noLegs_0_2.set(LegFlowScheduleType_133);
    InstrumentLeg_133.insert(LegFlowScheduleType_133.getString());
    FIX::LegInstrRegistry LegInstrRegistry_133("STRING_673846486");
    noLegs_0_2.set(LegInstrRegistry_133);
    InstrumentLeg_133.insert(LegInstrRegistry_133.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_133("LOCALMKTDATE_174894882");
    noLegs_0_2.set(LegInterestAccrualDate_133);
    InstrumentLeg_133.insert(LegInterestAccrualDate_133.getString());
    FIX::LegIssueDate LegIssueDate_133("LOCALMKTDATE_936022838");
    noLegs_0_2.set(LegIssueDate_133);
    InstrumentLeg_133.insert(LegIssueDate_133.getString());
    FIX::LegIssuer LegIssuer_133("STRING_138809974");
    noLegs_0_2.set(LegIssuer_133);
    InstrumentLeg_133.insert(LegIssuer_133.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_133("STRING_602605438");
    noLegs_0_2.set(LegLocaleOfIssue_133);
    InstrumentLeg_133.insert(LegLocaleOfIssue_133.getString());
    FIX::LegMaturityDate LegMaturityDate_133("LOCALMKTDATE_992843815");
    noLegs_0_2.set(LegMaturityDate_133);
    InstrumentLeg_133.insert(LegMaturityDate_133.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_133("MONTHYEAR_774887315");
    noLegs_0_2.set(LegMaturityMonthYear_133);
    InstrumentLeg_133.insert(LegMaturityMonthYear_133.getString());
    FIX::LegMaturityTime LegMaturityTime_133("TZTIMEONLY_1660889940");
    noLegs_0_2.set(LegMaturityTime_133);
    InstrumentLeg_133.insert(LegMaturityTime_133.getString());
    FIX::LegOptAttribute LegOptAttribute_133('2');
    noLegs_0_2.set(LegOptAttribute_133);
    InstrumentLeg_133.insert(LegOptAttribute_133.getString());
    FIX::LegOptionRatio LegOptionRatio_133;
    LegOptionRatio_133.setString("11281795");
    noLegs_0_2.set(LegOptionRatio_133);
    InstrumentLeg_133.insert(LegOptionRatio_133.getString());
    FIX::LegPool LegPool_133("STRING_1608869513");
    noLegs_0_2.set(LegPool_133);
    InstrumentLeg_133.insert(LegPool_133.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_133("STRING_906982710");
    noLegs_0_2.set(LegPriceUnitOfMeasure_133);
    InstrumentLeg_133.insert(LegPriceUnitOfMeasure_133.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_133;
    LegPriceUnitOfMeasureQty_133.setString("18747106");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_133);
    InstrumentLeg_133.insert(LegPriceUnitOfMeasureQty_133.getString());
    FIX::LegProduct LegProduct_133(663903036);
    noLegs_0_2.set(LegProduct_133);
    InstrumentLeg_133.insert(LegProduct_133.getString());
    FIX::LegPutOrCall LegPutOrCall_133(717981983);
    noLegs_0_2.set(LegPutOrCall_133);
    InstrumentLeg_133.insert(LegPutOrCall_133.getString());
    FIX::LegRatioQty LegRatioQty_133;
    LegRatioQty_133.setString("6236072");
    noLegs_0_2.set(LegRatioQty_133);
    InstrumentLeg_133.insert(LegRatioQty_133.getString());
    FIX::LegRedemptionDate LegRedemptionDate_133("LOCALMKTDATE_1300766325");
    noLegs_0_2.set(LegRedemptionDate_133);
    InstrumentLeg_133.insert(LegRedemptionDate_133.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_133("STRING_187462201");
    noLegs_0_2.set(LegRepoCollateralSecurityType_133);
    InstrumentLeg_133.insert(LegRepoCollateralSecurityType_133.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_133;
    LegRepurchaseRate_133.setString("1.050000");
    noLegs_0_2.set(LegRepurchaseRate_133);
    InstrumentLeg_133.insert(LegRepurchaseRate_133.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_133(280694788);
    noLegs_0_2.set(LegRepurchaseTerm_133);
    InstrumentLeg_133.insert(LegRepurchaseTerm_133.getString());
    FIX::LegSecurityDesc LegSecurityDesc_133("STRING_551452651");
    noLegs_0_2.set(LegSecurityDesc_133);
    InstrumentLeg_133.insert(LegSecurityDesc_133.getString());
    FIX::LegSecurityExchange LegSecurityExchange_133("EXCHANGE_898574511");
    noLegs_0_2.set(LegSecurityExchange_133);
    InstrumentLeg_133.insert(LegSecurityExchange_133.getString());
    FIX::LegSecurityID LegSecurityID_133("STRING_432281633");
    noLegs_0_2.set(LegSecurityID_133);
    InstrumentLeg_133.insert(LegSecurityID_133.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_133("STRING_1811257003");
    noLegs_0_2.set(LegSecurityIDSource_133);
    InstrumentLeg_133.insert(LegSecurityIDSource_133.getString());
    FIX::LegSecuritySubType LegSecuritySubType_133("STRING_1548178364");
    noLegs_0_2.set(LegSecuritySubType_133);
    InstrumentLeg_133.insert(LegSecuritySubType_133.getString());
    FIX::LegSecurityType LegSecurityType_133("STRING_1595145949");
    noLegs_0_2.set(LegSecurityType_133);
    InstrumentLeg_133.insert(LegSecurityType_133.getString());
    FIX::LegSide LegSide_133('1');
    noLegs_0_2.set(LegSide_133);
    InstrumentLeg_133.insert(LegSide_133.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_133("STRING_1983451098");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_133);
    InstrumentLeg_133.insert(LegStateOrProvinceOfIssue_133.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_133("CHF");
    noLegs_0_2.set(LegStrikeCurrency_133);
    InstrumentLeg_133.insert(LegStrikeCurrency_133.getString());
    FIX::LegStrikePrice LegStrikePrice_133;
    LegStrikePrice_133.setString("18302614");
    noLegs_0_2.set(LegStrikePrice_133);
    InstrumentLeg_133.insert(LegStrikePrice_133.getString());
    FIX::LegSymbol LegSymbol_133("STRING_1347359631");
    noLegs_0_2.set(LegSymbol_133);
    InstrumentLeg_133.insert(LegSymbol_133.getString());
    FIX::LegSymbolSfx LegSymbolSfx_133("STRING_1373414806");
    noLegs_0_2.set(LegSymbolSfx_133);
    InstrumentLeg_133.insert(LegSymbolSfx_133.getString());
    FIX::LegTimeUnit LegTimeUnit_133("STRING_618800677");
    noLegs_0_2.set(LegTimeUnit_133);
    InstrumentLeg_133.insert(LegTimeUnit_133.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_133("STRING_1486169605");
    noLegs_0_2.set(LegUnitOfMeasure_133);
    InstrumentLeg_133.insert(LegUnitOfMeasure_133.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_133;
    LegUnitOfMeasureQty_133.setString("19760202");
    noLegs_0_2.set(LegUnitOfMeasureQty_133);
    InstrumentLeg_133.insert(LegUnitOfMeasureQty_133.getString());
    all_values.push_back(InstrumentLeg_133);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_260;
      FIX::LegSecurityAltID LegSecurityAltID_260("STRING_113573272");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_260);
      LegSecAltIDGrp_NoLegSecurityAltID_260.insert(LegSecurityAltID_260.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_260("STRING_1489426536");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_260);
      LegSecAltIDGrp_NoLegSecurityAltID_260.insert(LegSecurityAltIDSource_260.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_260);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_261;
      FIX::LegSecurityAltID LegSecurityAltID_261("STRING_1539262270");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_261);
      LegSecAltIDGrp_NoLegSecurityAltID_261.insert(LegSecurityAltID_261.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_261("STRING_1241752832");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_261);
      LegSecAltIDGrp_NoLegSecurityAltID_261.insert(LegSecurityAltIDSource_261.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_261);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_262;
      FIX::LegSecurityAltID LegSecurityAltID_262("STRING_950812401");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_262);
      LegSecAltIDGrp_NoLegSecurityAltID_262.insert(LegSecurityAltID_262.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_262("STRING_298761332");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_262);
      LegSecAltIDGrp_NoLegSecurityAltID_262.insert(LegSecurityAltIDSource_262.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_262);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_82;
  FIX::AttachmentPoint AttachmentPoint_82;
  AttachmentPoint_82.setString("97.960000");
  msg.set(AttachmentPoint_82);
  Instrument_82.insert(AttachmentPoint_82.getString());
  FIX::CFICode CFICode_82("STRING_1614715437");
  msg.set(CFICode_82);
  Instrument_82.insert(CFICode_82.getString());
  FIX::CPProgram CPProgram_82(2);
  msg.set(CPProgram_82);
  Instrument_82.insert(CPProgram_82.getString());
  FIX::CPRegType CPRegType_82("STRING_1592587044");
  msg.set(CPRegType_82);
  Instrument_82.insert(CPRegType_82.getString());
  FIX::CapPrice CapPrice_82;
  CapPrice_82.setString("7679981");
  msg.set(CapPrice_82);
  Instrument_82.insert(CapPrice_82.getString());
  FIX::ContractMultiplier ContractMultiplier_82;
  ContractMultiplier_82.setString("12042055");
  msg.set(ContractMultiplier_82);
  Instrument_82.insert(ContractMultiplier_82.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_82(1);
  msg.set(ContractMultiplierUnit_82);
  Instrument_82.insert(ContractMultiplierUnit_82.getString());
  FIX::ContractSettlMonth ContractSettlMonth_82("MONTHYEAR_1048692903");
  msg.set(ContractSettlMonth_82);
  Instrument_82.insert(ContractSettlMonth_82.getString());
  FIX::CountryOfIssue CountryOfIssue_82("COUNTRY_1755658168");
  msg.set(CountryOfIssue_82);
  Instrument_82.insert(CountryOfIssue_82.getString());
  FIX::CouponPaymentDate CouponPaymentDate_82("LOCALMKTDATE_740768012");
  msg.set(CouponPaymentDate_82);
  Instrument_82.insert(CouponPaymentDate_82.getString());
  FIX::CouponRate CouponRate_82;
  CouponRate_82.setString("45.370000");
  msg.set(CouponRate_82);
  Instrument_82.insert(CouponRate_82.getString());
  FIX::CreditRating CreditRating_82("STRING_1419431523");
  msg.set(CreditRating_82);
  Instrument_82.insert(CreditRating_82.getString());
  FIX::DatedDate DatedDate_82("LOCALMKTDATE_141462728");
  msg.set(DatedDate_82);
  Instrument_82.insert(DatedDate_82.getString());
  FIX::DetachmentPoint DetachmentPoint_82;
  DetachmentPoint_82.setString("68.380000");
  msg.set(DetachmentPoint_82);
  Instrument_82.insert(DetachmentPoint_82.getString());
  FIX::EncodedIssuer EncodedIssuer_82("DATA_1240745197");
  msg.set(EncodedIssuer_82);
  Instrument_82.insert(EncodedIssuer_82.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_82(2124913827);
  msg.set(EncodedIssuerLen_82);
  Instrument_82.insert(EncodedIssuerLen_82.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_82("DATA_1602149983");
  msg.set(EncodedSecurityDesc_82);
  Instrument_82.insert(EncodedSecurityDesc_82.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_82(291781472);
  msg.set(EncodedSecurityDescLen_82);
  Instrument_82.insert(EncodedSecurityDescLen_82.getString());
  FIX::ExerciseStyle ExerciseStyle_82(2);
  msg.set(ExerciseStyle_82);
  Instrument_82.insert(ExerciseStyle_82.getString());
  FIX::Factor Factor_82;
  Factor_82.setString("8020259");
  msg.set(Factor_82);
  Instrument_82.insert(Factor_82.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_82(true);
  msg.set(FlexProductEligibilityIndicator_82);
  Instrument_82.insert(FlexProductEligibilityIndicator_82.getString());
  FIX::FlexibleIndicator FlexibleIndicator_82(false);
  msg.set(FlexibleIndicator_82);
  Instrument_82.insert(FlexibleIndicator_82.getString());
  FIX::FloorPrice FloorPrice_82;
  FloorPrice_82.setString("1407119");
  msg.set(FloorPrice_82);
  Instrument_82.insert(FloorPrice_82.getString());
  FIX::FlowScheduleType FlowScheduleType_82(4);
  msg.set(FlowScheduleType_82);
  Instrument_82.insert(FlowScheduleType_82.getString());
  FIX::InstrRegistry InstrRegistry_82("STRING_1890653187");
  msg.set(InstrRegistry_82);
  Instrument_82.insert(InstrRegistry_82.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_82('2');
  msg.set(InstrmtAssignmentMethod_82);
  Instrument_82.insert(InstrmtAssignmentMethod_82.getString());
  FIX::InterestAccrualDate InterestAccrualDate_82("LOCALMKTDATE_835675763");
  msg.set(InterestAccrualDate_82);
  Instrument_82.insert(InterestAccrualDate_82.getString());
  FIX::IssueDate IssueDate_82("LOCALMKTDATE_1282431810");
  msg.set(IssueDate_82);
  Instrument_82.insert(IssueDate_82.getString());
  FIX::Issuer Issuer_82("STRING_1496038028");
  msg.set(Issuer_82);
  Instrument_82.insert(Issuer_82.getString());
  FIX::ListMethod ListMethod_82(0);
  msg.set(ListMethod_82);
  Instrument_82.insert(ListMethod_82.getString());
  FIX::LocaleOfIssue LocaleOfIssue_82("STRING_1581193142");
  msg.set(LocaleOfIssue_82);
  Instrument_82.insert(LocaleOfIssue_82.getString());
  FIX::MaturityDate MaturityDate_82("LOCALMKTDATE_317534177");
  msg.set(MaturityDate_82);
  Instrument_82.insert(MaturityDate_82.getString());
  FIX::MaturityMonthYear MaturityMonthYear_82("MONTHYEAR_1253719954");
  msg.set(MaturityMonthYear_82);
  Instrument_82.insert(MaturityMonthYear_82.getString());
  FIX::MaturityTime MaturityTime_82("TZTIMEONLY_450452810");
  msg.set(MaturityTime_82);
  Instrument_82.insert(MaturityTime_82.getString());
  FIX::MinPriceIncrement MinPriceIncrement_82;
  MinPriceIncrement_82.setString("19101212");
  msg.set(MinPriceIncrement_82);
  Instrument_82.insert(MinPriceIncrement_82.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_82;
  MinPriceIncrementAmount_82.setString("20217180");
  msg.set(MinPriceIncrementAmount_82);
  Instrument_82.insert(MinPriceIncrementAmount_82.getString());
  FIX::NTPositionLimit NTPositionLimit_82(1654658326);
  msg.set(NTPositionLimit_82);
  Instrument_82.insert(NTPositionLimit_82.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_82;
  NotionalPercentageOutstanding_82.setString("47.220000");
  msg.set(NotionalPercentageOutstanding_82);
  Instrument_82.insert(NotionalPercentageOutstanding_82.getString());
  FIX::OptAttribute OptAttribute_82('9');
  msg.set(OptAttribute_82);
  Instrument_82.insert(OptAttribute_82.getString());
  FIX::OptPayoutAmount OptPayoutAmount_82;
  OptPayoutAmount_82.setString("12628328");
  msg.set(OptPayoutAmount_82);
  Instrument_82.insert(OptPayoutAmount_82.getString());
  FIX::OptPayoutType OptPayoutType_82(2);
  msg.set(OptPayoutType_82);
  Instrument_82.insert(OptPayoutType_82.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_82;
  OriginalNotionalPercentageOutstanding_82.setString("82.130000");
  msg.set(OriginalNotionalPercentageOutstanding_82);
  Instrument_82.insert(OriginalNotionalPercentageOutstanding_82.getString());
  FIX::Pool Pool_82("STRING_534780722");
  msg.set(Pool_82);
  Instrument_82.insert(Pool_82.getString());
  FIX::PositionLimit PositionLimit_82(487061814);
  msg.set(PositionLimit_82);
  Instrument_82.insert(PositionLimit_82.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_82("STRING_STD");
  msg.set(PriceQuoteMethod_82);
  Instrument_82.insert(PriceQuoteMethod_82.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_82("STRING_1775525919");
  msg.set(PriceUnitOfMeasure_82);
  Instrument_82.insert(PriceUnitOfMeasure_82.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_82;
  PriceUnitOfMeasureQty_82.setString("4644919");
  msg.set(PriceUnitOfMeasureQty_82);
  Instrument_82.insert(PriceUnitOfMeasureQty_82.getString());
  FIX::Product Product_84(7);
  msg.set(Product_84);
  Instrument_82.insert(Product_84.getString());
  FIX::ProductComplex ProductComplex_82("STRING_2067307391");
  msg.set(ProductComplex_82);
  Instrument_82.insert(ProductComplex_82.getString());
  FIX::PutOrCall PutOrCall_82(1);
  msg.set(PutOrCall_82);
  Instrument_82.insert(PutOrCall_82.getString());
  FIX::RedemptionDate RedemptionDate_82("LOCALMKTDATE_1441747354");
  msg.set(RedemptionDate_82);
  Instrument_82.insert(RedemptionDate_82.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_82("STRING_1585020022");
  msg.set(RepoCollateralSecurityType_82);
  Instrument_82.insert(RepoCollateralSecurityType_82.getString());
  FIX::RepurchaseRate RepurchaseRate_82;
  RepurchaseRate_82.setString("87.060000");
  msg.set(RepurchaseRate_82);
  Instrument_82.insert(RepurchaseRate_82.getString());
  FIX::RepurchaseTerm RepurchaseTerm_82(1582459278);
  msg.set(RepurchaseTerm_82);
  Instrument_82.insert(RepurchaseTerm_82.getString());
  FIX::RestructuringType RestructuringType_82("STRING_FR");
  msg.set(RestructuringType_82);
  Instrument_82.insert(RestructuringType_82.getString());
  FIX::SecurityDesc SecurityDesc_82("STRING_146878246");
  msg.set(SecurityDesc_82);
  Instrument_82.insert(SecurityDesc_82.getString());
  FIX::SecurityExchange SecurityExchange_82("EXCHANGE_1836744474");
  msg.set(SecurityExchange_82);
  Instrument_82.insert(SecurityExchange_82.getString());
  FIX::SecurityGroup SecurityGroup_82("STRING_1766945011");
  msg.set(SecurityGroup_82);
  Instrument_82.insert(SecurityGroup_82.getString());
  FIX::SecurityID SecurityID_82("STRING_1429310056");
  msg.set(SecurityID_82);
  Instrument_82.insert(SecurityID_82.getString());
  FIX::SecurityIDSource SecurityIDSource_82("STRING_G");
  msg.set(SecurityIDSource_82);
  Instrument_82.insert(SecurityIDSource_82.getString());
  FIX::SecurityStatus SecurityStatus_82("STRING_1");
  msg.set(SecurityStatus_82);
  Instrument_82.insert(SecurityStatus_82.getString());
  FIX::SecuritySubType SecuritySubType_83("STRING_863019550");
  msg.set(SecuritySubType_83);
  Instrument_82.insert(SecuritySubType_83.getString());
  FIX::SecurityType SecurityType_84("STRING_CDS");
  msg.set(SecurityType_84);
  Instrument_82.insert(SecurityType_84.getString());
  FIX::Seniority Seniority_82("STRING_SR");
  msg.set(Seniority_82);
  Instrument_82.insert(Seniority_82.getString());
  FIX::SettlMethod SettlMethod_82('C');
  msg.set(SettlMethod_82);
  Instrument_82.insert(SettlMethod_82.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_82("STRING_1265470605");
  msg.set(SettleOnOpenFlag_82);
  Instrument_82.insert(SettleOnOpenFlag_82.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_82("STRING_386420255");
  msg.set(StateOrProvinceOfIssue_82);
  Instrument_82.insert(StateOrProvinceOfIssue_82.getString());
  FIX::StrikeCurrency StrikeCurrency_82("CAN");
  msg.set(StrikeCurrency_82);
  Instrument_82.insert(StrikeCurrency_82.getString());
  FIX::StrikeMultiplier StrikeMultiplier_82;
  StrikeMultiplier_82.setString("13093475");
  msg.set(StrikeMultiplier_82);
  Instrument_82.insert(StrikeMultiplier_82.getString());
  FIX::StrikePrice StrikePrice_82;
  StrikePrice_82.setString("20834798");
  msg.set(StrikePrice_82);
  Instrument_82.insert(StrikePrice_82.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_82(1);
  msg.set(StrikePriceBoundaryMethod_82);
  Instrument_82.insert(StrikePriceBoundaryMethod_82.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_82;
  StrikePriceBoundaryPrecision_82.setString("57.930000");
  msg.set(StrikePriceBoundaryPrecision_82);
  Instrument_82.insert(StrikePriceBoundaryPrecision_82.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_82(4);
  msg.set(StrikePriceDeterminationMethod_82);
  Instrument_82.insert(StrikePriceDeterminationMethod_82.getString());
  FIX::StrikeValue StrikeValue_82;
  StrikeValue_82.setString("17029625");
  msg.set(StrikeValue_82);
  Instrument_82.insert(StrikeValue_82.getString());
  FIX::Symbol Symbol_82("STRING_603337197");
  msg.set(Symbol_82);
  Instrument_82.insert(Symbol_82.getString());
  FIX::SymbolSfx SymbolSfx_82("STRING_CD");
  msg.set(SymbolSfx_82);
  Instrument_82.insert(SymbolSfx_82.getString());
  FIX::TimeUnit TimeUnit_82("STRING_S");
  msg.set(TimeUnit_82);
  Instrument_82.insert(TimeUnit_82.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_82(1);
  msg.set(UnderlyingPriceDeterminationMethod_82);
  Instrument_82.insert(UnderlyingPriceDeterminationMethod_82.getString());
  FIX::UnitOfMeasure UnitOfMeasure_82("STRING_Alw");
  msg.set(UnitOfMeasure_82);
  Instrument_82.insert(UnitOfMeasure_82.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_82;
  UnitOfMeasureQty_82.setString("1446709");
  msg.set(UnitOfMeasureQty_82);
  Instrument_82.insert(UnitOfMeasureQty_82.getString());
  FIX::ValuationMethod ValuationMethod_82("STRING_EQTY");
  msg.set(ValuationMethod_82);
  Instrument_82.insert(ValuationMethod_82.getString());
  all_values.push_back(Instrument_82);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_167;
    FIX::ComplexEventCondition ComplexEventCondition_167(2);
    noComplexEvents_0_0.set(ComplexEventCondition_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventCondition_167.getString());
    FIX::ComplexEventPrice ComplexEventPrice_167;
    ComplexEventPrice_167.setString("21197815");
    noComplexEvents_0_0.set(ComplexEventPrice_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventPrice_167.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_167(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceBoundaryMethod_167.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_167;
    ComplexEventPriceBoundaryPrecision_167.setString("78.890000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceBoundaryPrecision_167.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_167(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceTimeType_167.getString());
    FIX::ComplexEventType ComplexEventType_167(4);
    noComplexEvents_0_0.set(ComplexEventType_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventType_167.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_167;
    ComplexOptPayoutAmount_167.setString("21245679");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexOptPayoutAmount_167.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_167);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_337;
      FIX::ComplexEventEndDate ComplexEventEndDate_337(FIX::UTCTIMESTAMP(23, 26, 42, 12, 12, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_337);
      ComplexEventDates_NoComplexEventDates_337.insert(ComplexEventEndDate_337.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_337(FIX::UTCTIMESTAMP(14, 48, 56, 11, 2, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_337);
      ComplexEventDates_NoComplexEventDates_337.insert(ComplexEventStartDate_337.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_337);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_684;
        FIX::ComplexEventEndTime ComplexEventEndTime_684(FIX::UTCTIMEONLY(10, 3, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_684);
        ComplexEventTimes_NoComplexEventTimes_684.insert(ComplexEventEndTime_684.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_684(FIX::UTCTIMEONLY(20, 37, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_684);
        ComplexEventTimes_NoComplexEventTimes_684.insert(ComplexEventStartTime_684.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_684);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_338;
      FIX::ComplexEventEndDate ComplexEventEndDate_338(FIX::UTCTIMESTAMP(6, 5, 24, 13, 6, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_338);
      ComplexEventDates_NoComplexEventDates_338.insert(ComplexEventEndDate_338.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_338(FIX::UTCTIMESTAMP(17, 48, 33, 3, 5, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_338);
      ComplexEventDates_NoComplexEventDates_338.insert(ComplexEventStartDate_338.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_338);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_685;
        FIX::ComplexEventEndTime ComplexEventEndTime_685(FIX::UTCTIMEONLY(2, 36, 36));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_685);
        ComplexEventTimes_NoComplexEventTimes_685.insert(ComplexEventEndTime_685.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_685(FIX::UTCTIMEONLY(6, 12, 35));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_685);
        ComplexEventTimes_NoComplexEventTimes_685.insert(ComplexEventStartTime_685.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_685);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
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
    multiset<string> EvntGrp_NoEvents_165;
    FIX::EventDate EventDate_165("LOCALMKTDATE_906304730");
    noEvents_0_0.set(EventDate_165);
    EvntGrp_NoEvents_165.insert(EventDate_165.getString());
    FIX::EventPx EventPx_165;
    EventPx_165.setString("3766075");
    noEvents_0_0.set(EventPx_165);
    EvntGrp_NoEvents_165.insert(EventPx_165.getString());
    FIX::EventText EventText_165("STRING_563878851");
    noEvents_0_0.set(EventText_165);
    EvntGrp_NoEvents_165.insert(EventText_165.getString());
    FIX::EventTime EventTime_165(FIX::UTCTIMESTAMP(3, 29, 11, 6, 4, 2016));
    noEvents_0_0.set(EventTime_165);
    EvntGrp_NoEvents_165.insert(EventTime_165.getString());
    FIX::EventType EventType_165(11);
    noEvents_0_0.set(EventType_165);
    EvntGrp_NoEvents_165.insert(EventType_165.getString());
    all_values.push_back(EvntGrp_NoEvents_165);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_166;
    FIX::EventDate EventDate_166("LOCALMKTDATE_1406088024");
    noEvents_0_1.set(EventDate_166);
    EvntGrp_NoEvents_166.insert(EventDate_166.getString());
    FIX::EventPx EventPx_166;
    EventPx_166.setString("11655826");
    noEvents_0_1.set(EventPx_166);
    EvntGrp_NoEvents_166.insert(EventPx_166.getString());
    FIX::EventText EventText_166("STRING_1452964331");
    noEvents_0_1.set(EventText_166);
    EvntGrp_NoEvents_166.insert(EventText_166.getString());
    FIX::EventTime EventTime_166(FIX::UTCTIMESTAMP(18, 51, 48, 9, 9, 2000));
    noEvents_0_1.set(EventTime_166);
    EvntGrp_NoEvents_166.insert(EventTime_166.getString());
    FIX::EventType EventType_166(18);
    noEvents_0_1.set(EventType_166);
    EvntGrp_NoEvents_166.insert(EventType_166.getString());
    all_values.push_back(EvntGrp_NoEvents_166);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_170;
    FIX::InstrumentPartyID InstrumentPartyID_170("STRING_835382934");
    noInstrumentParties_0_0.set(InstrumentPartyID_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyID_170.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_170('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyIDSource_170.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_170(1604442935);
    noInstrumentParties_0_0.set(InstrumentPartyRole_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyRole_170.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_170);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332;
      FIX::InstrumentPartySubID InstrumentPartySubID_332("STRING_498038568");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_332);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332.insert(InstrumentPartySubID_332.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_332(1178415639);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_332);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332.insert(InstrumentPartySubIDType_332.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333;
      FIX::InstrumentPartySubID InstrumentPartySubID_333("STRING_810513878");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_333);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333.insert(InstrumentPartySubID_333.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_333(471393632);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_333);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333.insert(InstrumentPartySubIDType_333.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334;
      FIX::InstrumentPartySubID InstrumentPartySubID_334("STRING_2084720370");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_334);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334.insert(InstrumentPartySubID_334.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_334(1187121429);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_334);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334.insert(InstrumentPartySubIDType_334.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_171;
    FIX::InstrumentPartyID InstrumentPartyID_171("STRING_1035272484");
    noInstrumentParties_0_1.set(InstrumentPartyID_171);
    InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyID_171.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_171('4');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_171);
    InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyIDSource_171.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_171(542762512);
    noInstrumentParties_0_1.set(InstrumentPartyRole_171);
    InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyRole_171.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_171);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335;
      FIX::InstrumentPartySubID InstrumentPartySubID_335("STRING_963983236");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_335);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335.insert(InstrumentPartySubID_335.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_335(1573300418);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_335);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335.insert(InstrumentPartySubIDType_335.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_172;
    FIX::InstrumentPartyID InstrumentPartyID_172("STRING_1223899044");
    noInstrumentParties_0_2.set(InstrumentPartyID_172);
    InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyID_172.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_172('9');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_172);
    InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyIDSource_172.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_172(679025740);
    noInstrumentParties_0_2.set(InstrumentPartyRole_172);
    InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyRole_172.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_172);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336;
      FIX::InstrumentPartySubID InstrumentPartySubID_336("STRING_2093635598");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_336);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336.insert(InstrumentPartySubID_336.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_336(2131990071);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_336);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336.insert(InstrumentPartySubIDType_336.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337;
      FIX::InstrumentPartySubID InstrumentPartySubID_337("STRING_1349668143");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_337);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337.insert(InstrumentPartySubID_337.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_337(1578623329);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_337);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337.insert(InstrumentPartySubIDType_337.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_152;
    FIX::SecurityAltID SecurityAltID_152("STRING_1880116551");
    noSecurityAltID_0_0.set(SecurityAltID_152);
    SecAltIDGrp_NoSecurityAltID_152.insert(SecurityAltID_152.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_152("STRING_1308061478");
    noSecurityAltID_0_0.set(SecurityAltIDSource_152);
    SecAltIDGrp_NoSecurityAltID_152.insert(SecurityAltIDSource_152.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_152);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_153;
    FIX::SecurityAltID SecurityAltID_153("STRING_1721137975");
    noSecurityAltID_0_1.set(SecurityAltID_153);
    SecAltIDGrp_NoSecurityAltID_153.insert(SecurityAltID_153.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_153("STRING_1394042587");
    noSecurityAltID_0_1.set(SecurityAltIDSource_153);
    SecAltIDGrp_NoSecurityAltID_153.insert(SecurityAltIDSource_153.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_153);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_154;
    FIX::SecurityAltID SecurityAltID_154("STRING_1445931976");
    noSecurityAltID_0_2.set(SecurityAltID_154);
    SecAltIDGrp_NoSecurityAltID_154.insert(SecurityAltID_154.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_154("STRING_690153706");
    noSecurityAltID_0_2.set(SecurityAltIDSource_154);
    SecAltIDGrp_NoSecurityAltID_154.insert(SecurityAltIDSource_154.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_154);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_164;
  FIX::SecurityXML SecurityXML_165("XMLDATA_81941873");
  msg.set(SecurityXML_165);
  FIX::SecurityXMLLen SecurityXMLLen_82(1318080682);
  msg.set(SecurityXMLLen_82);
  FIX::SecurityXMLSchema SecurityXMLSchema_82("STRING_147112994");
  msg.set(SecurityXMLSchema_82);
  SecurityXML_164.insert(SecurityXMLSchema_82.getString());
  all_values.push_back(SecurityXML_164);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_11;
  FIX::DeliveryForm DeliveryForm_11(1);
  msg.set(DeliveryForm_11);
  InstrumentExtension_11.insert(DeliveryForm_11.getString());
  FIX::PctAtRisk PctAtRisk_11;
  PctAtRisk_11.setString("92.500000");
  msg.set(PctAtRisk_11);
  InstrumentExtension_11.insert(PctAtRisk_11.getString());
  all_values.push_back(InstrumentExtension_11);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_20;
    FIX::InstrAttribType InstrAttribType_20(5);
    noInstrAttrib_0_0.set(InstrAttribType_20);
    AttrbGrp_NoInstrAttrib_20.insert(InstrAttribType_20.getString());
    FIX::InstrAttribValue InstrAttribValue_20("STRING_140029234");
    noInstrAttrib_0_0.set(InstrAttribValue_20);
    AttrbGrp_NoInstrAttrib_20.insert(InstrAttribValue_20.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_20);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_21;
    FIX::InstrAttribType InstrAttribType_21(16);
    noInstrAttrib_0_1.set(InstrAttribType_21);
    AttrbGrp_NoInstrAttrib_21.insert(InstrAttribType_21.getString());
    FIX::InstrAttribValue InstrAttribValue_21("STRING_1347846104");
    noInstrAttrib_0_1.set(InstrAttribValue_21);
    AttrbGrp_NoInstrAttrib_21.insert(InstrAttribValue_21.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_21);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_22;
    FIX::InstrAttribType InstrAttribType_22(29);
    noInstrAttrib_0_2.set(InstrAttribType_22);
    AttrbGrp_NoInstrAttrib_22.insert(InstrAttribType_22.getString());
    FIX::InstrAttribValue InstrAttribValue_22("STRING_1309798160");
    noInstrAttrib_0_2.set(InstrAttribValue_22);
    AttrbGrp_NoInstrAttrib_22.insert(InstrAttribValue_22.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_22);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_2);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_9;
    FIX::MarketID MarketID_19("EXCHANGE_1754815483");
    noMarketSegments_0_0.set(MarketID_19);
    MarketSegmentGrp_NoMarketSegments_9.insert(MarketID_19.getString());
    FIX::MarketSegmentID MarketSegmentID_19("STRING_126297749");
    noMarketSegments_0_0.set(MarketSegmentID_19);
    MarketSegmentGrp_NoMarketSegments_9.insert(MarketSegmentID_19.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_9);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_11;
    FIX::ExpirationCycle ExpirationCycle_12(1);
    noMarketSegments_0_0.set(ExpirationCycle_12);
    BaseTradingRules_11.insert(ExpirationCycle_12.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_11(3);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_11);
    BaseTradingRules_11.insert(ImpliedMarketIndicator_11.getString());
    FIX::MaxPriceVariation MaxPriceVariation_11;
    MaxPriceVariation_11.setString("10543507");
    noMarketSegments_0_0.set(MaxPriceVariation_11);
    BaseTradingRules_11.insert(MaxPriceVariation_11.getString());
    FIX::MaxTradeVol MaxTradeVol_11;
    MaxTradeVol_11.setString("19954511");
    noMarketSegments_0_0.set(MaxTradeVol_11);
    BaseTradingRules_11.insert(MaxTradeVol_11.getString());
    FIX::MinTradeVol MinTradeVol_11;
    MinTradeVol_11.setString("13137342");
    noMarketSegments_0_0.set(MinTradeVol_11);
    BaseTradingRules_11.insert(MinTradeVol_11.getString());
    FIX::MultilegModel MultilegModel_13(0);
    noMarketSegments_0_0.set(MultilegModel_13);
    BaseTradingRules_11.insert(MultilegModel_13.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_13(1);
    noMarketSegments_0_0.set(MultilegPriceMethod_13);
    BaseTradingRules_11.insert(MultilegPriceMethod_13.getString());
    FIX::PriceType PriceType_45(5);
    noMarketSegments_0_0.set(PriceType_45);
    BaseTradingRules_11.insert(PriceType_45.getString());
    FIX::RoundLot RoundLot_11;
    RoundLot_11.setString("4316423");
    noMarketSegments_0_0.set(RoundLot_11);
    BaseTradingRules_11.insert(RoundLot_11.getString());
    FIX::TradingCurrency TradingCurrency_11("CAN");
    noMarketSegments_0_0.set(TradingCurrency_11);
    BaseTradingRules_11.insert(TradingCurrency_11.getString());
    all_values.push_back(BaseTradingRules_11);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_21;
      FIX::LotType LotType_25('2');
      noLotTypeRules_0_1_0.set(LotType_25);
      LotTypeRules_NoLotTypeRules_21.insert(LotType_25.getString());
      FIX::MinLotSize MinLotSize_21;
      MinLotSize_21.setString("16425942");
      noLotTypeRules_0_1_0.set(MinLotSize_21);
      LotTypeRules_NoLotTypeRules_21.insert(MinLotSize_21.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_21);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_22;
      FIX::LotType LotType_26('1');
      noLotTypeRules_0_1_1.set(LotType_26);
      LotTypeRules_NoLotTypeRules_22.insert(LotType_26.getString());
      FIX::MinLotSize MinLotSize_22;
      MinLotSize_22.setString("4261282");
      noLotTypeRules_0_1_1.set(MinLotSize_22);
      LotTypeRules_NoLotTypeRules_22.insert(MinLotSize_22.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_22);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_23;
      FIX::LotType LotType_27('2');
      noLotTypeRules_0_1_2.set(LotType_27);
      LotTypeRules_NoLotTypeRules_23.insert(LotType_27.getString());
      FIX::MinLotSize MinLotSize_23;
      MinLotSize_23.setString("2087491");
      noLotTypeRules_0_1_2.set(MinLotSize_23);
      LotTypeRules_NoLotTypeRules_23.insert(MinLotSize_23.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_23);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_11;
    FIX::HighLimitPrice HighLimitPrice_11;
    HighLimitPrice_11.setString("5732412");
    noMarketSegments_0_0.set(HighLimitPrice_11);
    PriceLimits_11.insert(HighLimitPrice_11.getString());
    FIX::LowLimitPrice LowLimitPrice_11;
    LowLimitPrice_11.setString("10747469");
    noMarketSegments_0_0.set(LowLimitPrice_11);
    PriceLimits_11.insert(LowLimitPrice_11.getString());
    FIX::PriceLimitType PriceLimitType_11(1);
    noMarketSegments_0_0.set(PriceLimitType_11);
    PriceLimits_11.insert(PriceLimitType_11.getString());
    FIX::TradingReferencePrice TradingReferencePrice_11;
    TradingReferencePrice_11.setString("18987698");
    noMarketSegments_0_0.set(TradingReferencePrice_11);
    PriceLimits_11.insert(TradingReferencePrice_11.getString());
    all_values.push_back(PriceLimits_11);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_24;
      FIX::EndTickPriceRange EndTickPriceRange_24;
      EndTickPriceRange_24.setString("174140");
      noTickRules_0_1_0.set(EndTickPriceRange_24);
      TickRules_NoTickRules_24.insert(EndTickPriceRange_24.getString());
      FIX::StartTickPriceRange StartTickPriceRange_24;
      StartTickPriceRange_24.setString("10140515");
      noTickRules_0_1_0.set(StartTickPriceRange_24);
      TickRules_NoTickRules_24.insert(StartTickPriceRange_24.getString());
      FIX::TickIncrement TickIncrement_24;
      TickIncrement_24.setString("4358340");
      noTickRules_0_1_0.set(TickIncrement_24);
      TickRules_NoTickRules_24.insert(TickIncrement_24.getString());
      FIX::TickRuleType TickRuleType_24(1);
      noTickRules_0_1_0.set(TickRuleType_24);
      TickRules_NoTickRules_24.insert(TickRuleType_24.getString());
      all_values.push_back(TickRules_NoTickRules_24);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_19;
      FIX::NestedInstrAttribType NestedInstrAttribType_19(178959052);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_19);
      NestedInstrumentAttribute_NoNestedInstrAttrib_19.insert(NestedInstrAttribType_19.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_19("STRING_800047576");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_19);
      NestedInstrumentAttribute_NoNestedInstrAttrib_19.insert(NestedInstrAttribValue_19.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_19);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_20;
      FIX::NestedInstrAttribType NestedInstrAttribType_20(302663848);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_20);
      NestedInstrumentAttribute_NoNestedInstrAttrib_20.insert(NestedInstrAttribType_20.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_20("STRING_1495384439");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_20);
      NestedInstrumentAttribute_NoNestedInstrAttrib_20.insert(NestedInstrAttribValue_20.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_20);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_21;
      FIX::NestedInstrAttribType NestedInstrAttribType_21(1631278456);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_21);
      NestedInstrumentAttribute_NoNestedInstrAttrib_21.insert(NestedInstrAttribType_21.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_21("STRING_1357014562");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_21);
      NestedInstrumentAttribute_NoNestedInstrAttrib_21.insert(NestedInstrAttribValue_21.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_21);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_19;
      FIX::TradingSessionID TradingSessionID_101("STRING_6");
      noTradingSessionRules_0_1_0.set(TradingSessionID_101);
      TradingSessionRulesGrp_NoTradingSessionRules_19.insert(TradingSessionID_101.getString());
      FIX::TradingSessionSubID TradingSessionSubID_101("STRING_7");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_101);
      TradingSessionRulesGrp_NoTradingSessionRules_19.insert(TradingSessionSubID_101.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_19);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_38;
        FIX::ExecInstValue ExecInstValue_38('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_38);
        ExecInstRules_NoExecInstRules_38.insert(ExecInstValue_38.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_38);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_39;
        FIX::ExecInstValue ExecInstValue_39('6');
        noExecInstRules_0_0_2_1.set(ExecInstValue_39);
        ExecInstRules_NoExecInstRules_39.insert(ExecInstValue_39.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_39);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_40;
        FIX::ExecInstValue ExecInstValue_40('1');
        noExecInstRules_0_0_2_2.set(ExecInstValue_40);
        ExecInstRules_NoExecInstRules_40.insert(ExecInstValue_40.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_40);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_36;
        FIX::MDBookType MDBookType_38(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_38);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MDBookType_38.getString());
        FIX::MDFeedType MDFeedType_38("STRING_1074120585");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_38);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MDFeedType_38.getString());
        FIX::MarketDepth MarketDepth_39(1057110236);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_39);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MarketDepth_39.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_36);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_40;
        FIX::MatchAlgorithm MatchAlgorithm_40("STRING_1500248836");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_40);
        MatchRules_NoMatchRules_40.insert(MatchAlgorithm_40.getString());
        FIX::MatchType MatchType_45("STRING_S4");
        noMatchRules_0_0_2_0.set(MatchType_45);
        MatchRules_NoMatchRules_40.insert(MatchType_45.getString());
        all_values.push_back(MatchRules_NoMatchRules_40);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_40;
        FIX::OrdType OrdType_73('3');
        noOrdTypeRules_0_0_2_0.set(OrdType_73);
        OrdTypeRules_NoOrdTypeRules_40.insert(OrdType_73.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_40);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_40;
        FIX::TimeInForce TimeInForce_53('6');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_53);
        TimeInForceRules_NoTimeInForceRules_40.insert(TimeInForce_53.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_40);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_41;
        FIX::TimeInForce TimeInForce_54('3');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_54);
        TimeInForceRules_NoTimeInForceRules_41.insert(TimeInForce_54.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_41);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_15;
      FIX::EndStrikePxRange EndStrikePxRange_15;
      EndStrikePxRange_15.setString("13755962");
      noStrikeRules_0_1_0.set(EndStrikePxRange_15);
      StrikeRules_NoStrikeRules_15.insert(EndStrikePxRange_15.getString());
      FIX::StartStrikePxRange StartStrikePxRange_15;
      StartStrikePxRange_15.setString("6913442");
      noStrikeRules_0_1_0.set(StartStrikePxRange_15);
      StrikeRules_NoStrikeRules_15.insert(StartStrikePxRange_15.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_15(1232731763);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeExerciseStyle_15.getString());
      FIX::StrikeIncrement StrikeIncrement_15;
      StrikeIncrement_15.setString("4208283");
      noStrikeRules_0_1_0.set(StrikeIncrement_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeIncrement_15.getString());
      FIX::StrikeRuleID StrikeRuleID_15("STRING_867710350");
      noStrikeRules_0_1_0.set(StrikeRuleID_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeRuleID_15.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_15);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_31;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_31("MONTHYEAR_1220875918");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_31);
        MaturityRules_NoMaturityRules_31.insert(EndMaturityMonthYear_31.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_31(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearFormat_31.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_31(759591607);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearIncrement_31.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_31(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearIncrementUnits_31.getString());
        FIX::MaturityRuleID MaturityRuleID_31("STRING_379905112");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityRuleID_31.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_31("MONTHYEAR_2102943526");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_31);
        MaturityRules_NoMaturityRules_31.insert(StartMaturityMonthYear_31.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_31);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_16;
      FIX::EndStrikePxRange EndStrikePxRange_16;
      EndStrikePxRange_16.setString("15021998");
      noStrikeRules_0_1_1.set(EndStrikePxRange_16);
      StrikeRules_NoStrikeRules_16.insert(EndStrikePxRange_16.getString());
      FIX::StartStrikePxRange StartStrikePxRange_16;
      StartStrikePxRange_16.setString("5899386");
      noStrikeRules_0_1_1.set(StartStrikePxRange_16);
      StrikeRules_NoStrikeRules_16.insert(StartStrikePxRange_16.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_16(1131285700);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeExerciseStyle_16.getString());
      FIX::StrikeIncrement StrikeIncrement_16;
      StrikeIncrement_16.setString("6681640");
      noStrikeRules_0_1_1.set(StrikeIncrement_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeIncrement_16.getString());
      FIX::StrikeRuleID StrikeRuleID_16("STRING_1231614615");
      noStrikeRules_0_1_1.set(StrikeRuleID_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeRuleID_16.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_16);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_32;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_32("MONTHYEAR_82680039");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_32);
        MaturityRules_NoMaturityRules_32.insert(EndMaturityMonthYear_32.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_32(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearFormat_32.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_32(1396068677);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearIncrement_32.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_32(3);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearIncrementUnits_32.getString());
        FIX::MaturityRuleID MaturityRuleID_32("STRING_590075319");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityRuleID_32.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_32("MONTHYEAR_748833865");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_32);
        MaturityRules_NoMaturityRules_32.insert(StartMaturityMonthYear_32.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_32);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_33;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_33("MONTHYEAR_1773953020");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_33);
        MaturityRules_NoMaturityRules_33.insert(EndMaturityMonthYear_33.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_33(0);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearFormat_33.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_33(674840299);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearIncrement_33.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_33(3);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearIncrementUnits_33.getString());
        FIX::MaturityRuleID MaturityRuleID_33("STRING_1281571335");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityRuleID_33.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_33("MONTHYEAR_352132964");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_33);
        MaturityRules_NoMaturityRules_33.insert(StartMaturityMonthYear_33.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_33);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_34;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_34("MONTHYEAR_2132276750");
        noMaturityRules_0_1_2_2.set(EndMaturityMonthYear_34);
        MaturityRules_NoMaturityRules_34.insert(EndMaturityMonthYear_34.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_34(0);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearFormat_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearFormat_34.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_34(1043477216);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrement_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearIncrement_34.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_34(1);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrementUnits_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearIncrementUnits_34.getString());
        FIX::MaturityRuleID MaturityRuleID_34("STRING_930512277");
        noMaturityRules_0_1_2_2.set(MaturityRuleID_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityRuleID_34.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_34("MONTHYEAR_1911187566");
        noMaturityRules_0_1_2_2.set(StartMaturityMonthYear_34);
        MaturityRules_NoMaturityRules_34.insert(StartMaturityMonthYear_34.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_34);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_17;
      FIX::EndStrikePxRange EndStrikePxRange_17;
      EndStrikePxRange_17.setString("4817320");
      noStrikeRules_0_1_2.set(EndStrikePxRange_17);
      StrikeRules_NoStrikeRules_17.insert(EndStrikePxRange_17.getString());
      FIX::StartStrikePxRange StartStrikePxRange_17;
      StartStrikePxRange_17.setString("39045");
      noStrikeRules_0_1_2.set(StartStrikePxRange_17);
      StrikeRules_NoStrikeRules_17.insert(StartStrikePxRange_17.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_17(934078117);
      noStrikeRules_0_1_2.set(StrikeExerciseStyle_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeExerciseStyle_17.getString());
      FIX::StrikeIncrement StrikeIncrement_17;
      StrikeIncrement_17.setString("12413236");
      noStrikeRules_0_1_2.set(StrikeIncrement_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeIncrement_17.getString());
      FIX::StrikeRuleID StrikeRuleID_17("STRING_708575273");
      noStrikeRules_0_1_2.set(StrikeRuleID_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeRuleID_17.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_17);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_35;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_35("MONTHYEAR_1196783518");
        noMaturityRules_0_2_2_0.set(EndMaturityMonthYear_35);
        MaturityRules_NoMaturityRules_35.insert(EndMaturityMonthYear_35.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_35(2);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearFormat_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearFormat_35.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_35(1903921920);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrement_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearIncrement_35.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_35(2);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrementUnits_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearIncrementUnits_35.getString());
        FIX::MaturityRuleID MaturityRuleID_35("STRING_731455546");
        noMaturityRules_0_2_2_0.set(MaturityRuleID_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityRuleID_35.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_35("MONTHYEAR_988052887");
        noMaturityRules_0_2_2_0.set(StartMaturityMonthYear_35);
        MaturityRules_NoMaturityRules_35.insert(StartMaturityMonthYear_35.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_35);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_36;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_36("MONTHYEAR_502533662");
        noMaturityRules_0_2_2_1.set(EndMaturityMonthYear_36);
        MaturityRules_NoMaturityRules_36.insert(EndMaturityMonthYear_36.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_36(1);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearFormat_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearFormat_36.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_36(306079954);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrement_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearIncrement_36.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_36(3);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrementUnits_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearIncrementUnits_36.getString());
        FIX::MaturityRuleID MaturityRuleID_36("STRING_1953925860");
        noMaturityRules_0_2_2_1.set(MaturityRuleID_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityRuleID_36.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_36("MONTHYEAR_896155273");
        noMaturityRules_0_2_2_1.set(StartMaturityMonthYear_36);
        MaturityRules_NoMaturityRules_36.insert(StartMaturityMonthYear_36.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_36);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_37;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_37("MONTHYEAR_499952556");
        noMaturityRules_0_2_2_2.set(EndMaturityMonthYear_37);
        MaturityRules_NoMaturityRules_37.insert(EndMaturityMonthYear_37.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_37(2);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearFormat_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearFormat_37.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_37(819544382);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrement_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearIncrement_37.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_37(0);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrementUnits_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearIncrementUnits_37.getString());
        FIX::MaturityRuleID MaturityRuleID_37("STRING_768290656");
        noMaturityRules_0_2_2_2.set(MaturityRuleID_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityRuleID_37.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_37("MONTHYEAR_2101115717");
        noMaturityRules_0_2_2_2.set(StartMaturityMonthYear_37);
        MaturityRules_NoMaturityRules_37.insert(StartMaturityMonthYear_37.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_37);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_2);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_29;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_29("JPY");
  msg.set(BenchmarkCurveCurrency_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurveCurrency_29.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_29("STRING_EUREPO");
  msg.set(BenchmarkCurveName_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurveName_29.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_29("STRING_422919388");
  msg.set(BenchmarkCurvePoint_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurvePoint_29.getString());
  FIX::BenchmarkPrice BenchmarkPrice_29;
  BenchmarkPrice_29.setString("19706086");
  msg.set(BenchmarkPrice_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkPrice_29.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_29(1393828282);
  msg.set(BenchmarkPriceType_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkPriceType_29.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_29("STRING_186623307");
  msg.set(BenchmarkSecurityID_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkSecurityID_29.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_29("STRING_304857009");
  msg.set(BenchmarkSecurityIDSource_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkSecurityIDSource_29.getString());
  FIX::Spread Spread_29;
  Spread_29.setString("13977328");
  msg.set(Spread_29);
  SpreadOrBenchmarkCurveData_29.insert(Spread_29.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_29);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_49;
    FIX::StipulationType StipulationType_49("STRING_INSURED");
    noStipulations_0_0.set(StipulationType_49);
    Stipulations_NoStipulations_49.insert(StipulationType_49.getString());
    FIX::StipulationValue StipulationValue_49("STRING_2106308102");
    noStipulations_0_0.set(StipulationValue_49);
    Stipulations_NoStipulations_49.insert(StipulationValue_49.getString());
    all_values.push_back(Stipulations_NoStipulations_49);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_50;
    FIX::StipulationType StipulationType_50("STRING_WAL");
    noStipulations_0_1.set(StipulationType_50);
    Stipulations_NoStipulations_50.insert(StipulationType_50.getString());
    FIX::StipulationValue StipulationValue_50("STRING_595480519");
    noStipulations_0_1.set(StipulationValue_50);
    Stipulations_NoStipulations_50.insert(StipulationValue_50.getString());
    all_values.push_back(Stipulations_NoStipulations_50);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_127;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_127("DATA_43639278");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingIssuer_127.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_127(776066089);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingIssuerLen_127.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_127("DATA_753571458");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingSecurityDesc_127.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_127(1031692165);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_127);
    UnderlyingInstrument_127.insert(EncodedUnderlyingSecurityDescLen_127.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_127;
    UnderlyingAdjustedQuantity_127.setString("12785997");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_127);
    UnderlyingInstrument_127.insert(UnderlyingAdjustedQuantity_127.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_127;
    UnderlyingAllocationPercent_127.setString("70.430000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_127);
    UnderlyingInstrument_127.insert(UnderlyingAllocationPercent_127.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_127;
    UnderlyingAttachmentPoint_127.setString("21.200000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_127);
    UnderlyingInstrument_127.insert(UnderlyingAttachmentPoint_127.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_127("STRING_1029718442");
    noUnderlyings_0_0.set(UnderlyingCFICode_127);
    UnderlyingInstrument_127.insert(UnderlyingCFICode_127.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_127("STRING_1374149255");
    noUnderlyings_0_0.set(UnderlyingCPProgram_127);
    UnderlyingInstrument_127.insert(UnderlyingCPProgram_127.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_127("STRING_86443745");
    noUnderlyings_0_0.set(UnderlyingCPRegType_127);
    UnderlyingInstrument_127.insert(UnderlyingCPRegType_127.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_127;
    UnderlyingCapValue_127.setString("15296709");
    noUnderlyings_0_0.set(UnderlyingCapValue_127);
    UnderlyingInstrument_127.insert(UnderlyingCapValue_127.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_127;
    UnderlyingCashAmount_127.setString("8070608");
    noUnderlyings_0_0.set(UnderlyingCashAmount_127);
    UnderlyingInstrument_127.insert(UnderlyingCashAmount_127.getString());
    FIX::UnderlyingCashType UnderlyingCashType_127("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_127);
    UnderlyingInstrument_127.insert(UnderlyingCashType_127.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_127;
    UnderlyingContractMultiplier_127.setString("5569802");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_127);
    UnderlyingInstrument_127.insert(UnderlyingContractMultiplier_127.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_127(1575351496);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_127);
    UnderlyingInstrument_127.insert(UnderlyingContractMultiplierUnit_127.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_127("COUNTRY_859620197");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingCountryOfIssue_127.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_127("LOCALMKTDATE_2083906027");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_127);
    UnderlyingInstrument_127.insert(UnderlyingCouponPaymentDate_127.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_127;
    UnderlyingCouponRate_127.setString("16.060000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_127);
    UnderlyingInstrument_127.insert(UnderlyingCouponRate_127.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_127("STRING_1322936202");
    noUnderlyings_0_0.set(UnderlyingCreditRating_127);
    UnderlyingInstrument_127.insert(UnderlyingCreditRating_127.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_127("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_127);
    UnderlyingInstrument_127.insert(UnderlyingCurrency_127.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_127;
    UnderlyingCurrentValue_127.setString("5692808");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_127);
    UnderlyingInstrument_127.insert(UnderlyingCurrentValue_127.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_127;
    UnderlyingDetachmentPoint_127.setString("50.740000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_127);
    UnderlyingInstrument_127.insert(UnderlyingDetachmentPoint_127.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_127;
    UnderlyingDirtyPrice_127.setString("3089335");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_127);
    UnderlyingInstrument_127.insert(UnderlyingDirtyPrice_127.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_127;
    UnderlyingEndPrice_127.setString("19670136");
    noUnderlyings_0_0.set(UnderlyingEndPrice_127);
    UnderlyingInstrument_127.insert(UnderlyingEndPrice_127.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_127;
    UnderlyingEndValue_127.setString("16666664");
    noUnderlyings_0_0.set(UnderlyingEndValue_127);
    UnderlyingInstrument_127.insert(UnderlyingEndValue_127.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_127(1855114240);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_127);
    UnderlyingInstrument_127.insert(UnderlyingExerciseStyle_127.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_127;
    UnderlyingFXRate_127.setString("19258381");
    noUnderlyings_0_0.set(UnderlyingFXRate_127);
    UnderlyingInstrument_127.insert(UnderlyingFXRate_127.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_127('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_127);
    UnderlyingInstrument_127.insert(UnderlyingFXRateCalc_127.getString());
    FIX::UnderlyingFactor UnderlyingFactor_127;
    UnderlyingFactor_127.setString("3031111");
    noUnderlyings_0_0.set(UnderlyingFactor_127);
    UnderlyingInstrument_127.insert(UnderlyingFactor_127.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_127(1947954032);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_127);
    UnderlyingInstrument_127.insert(UnderlyingFlowScheduleType_127.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_127("STRING_1997506782");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_127);
    UnderlyingInstrument_127.insert(UnderlyingInstrRegistry_127.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_127("LOCALMKTDATE_1079177200");
    noUnderlyings_0_0.set(UnderlyingIssueDate_127);
    UnderlyingInstrument_127.insert(UnderlyingIssueDate_127.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_127("STRING_554041842");
    noUnderlyings_0_0.set(UnderlyingIssuer_127);
    UnderlyingInstrument_127.insert(UnderlyingIssuer_127.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_127("STRING_881715299");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingLocaleOfIssue_127.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_127("LOCALMKTDATE_210293303");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityDate_127.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_127("MONTHYEAR_2121748886");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityMonthYear_127.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_127("TZTIMEONLY_72003771");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_127);
    UnderlyingInstrument_127.insert(UnderlyingMaturityTime_127.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_127;
    UnderlyingNotionalPercentageOutstanding_127.setString("17.450000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_127);
    UnderlyingInstrument_127.insert(UnderlyingNotionalPercentageOutstanding_127.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_127('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_127);
    UnderlyingInstrument_127.insert(UnderlyingOptAttribute_127.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_127;
    UnderlyingOriginalNotionalPercentageOutstanding_127.setString("75.170000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_127);
    UnderlyingInstrument_127.insert(UnderlyingOriginalNotionalPercentageOutstanding_127.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_127("STRING_622199096");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_127);
    UnderlyingInstrument_127.insert(UnderlyingPriceUnitOfMeasure_127.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_127;
    UnderlyingPriceUnitOfMeasureQty_127.setString("79916");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_127);
    UnderlyingInstrument_127.insert(UnderlyingPriceUnitOfMeasureQty_127.getString());
    FIX::UnderlyingProduct UnderlyingProduct_127(1064435645);
    noUnderlyings_0_0.set(UnderlyingProduct_127);
    UnderlyingInstrument_127.insert(UnderlyingProduct_127.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_127(1179179302);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_127);
    UnderlyingInstrument_127.insert(UnderlyingPutOrCall_127.getString());
    FIX::UnderlyingPx UnderlyingPx_127;
    UnderlyingPx_127.setString("15833431");
    noUnderlyings_0_0.set(UnderlyingPx_127);
    UnderlyingInstrument_127.insert(UnderlyingPx_127.getString());
    FIX::UnderlyingQty UnderlyingQty_127;
    UnderlyingQty_127.setString("19240558");
    noUnderlyings_0_0.set(UnderlyingQty_127);
    UnderlyingInstrument_127.insert(UnderlyingQty_127.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_127("LOCALMKTDATE_1115601681");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_127);
    UnderlyingInstrument_127.insert(UnderlyingRedemptionDate_127.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_127("STRING_1764294788");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_127);
    UnderlyingInstrument_127.insert(UnderlyingRepoCollateralSecurityType_127.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_127;
    UnderlyingRepurchaseRate_127.setString("83.970000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_127);
    UnderlyingInstrument_127.insert(UnderlyingRepurchaseRate_127.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_127(1474943449);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_127);
    UnderlyingInstrument_127.insert(UnderlyingRepurchaseTerm_127.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_127("STRING_1768371370");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_127);
    UnderlyingInstrument_127.insert(UnderlyingRestructuringType_127.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_127("STRING_1668789233");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityDesc_127.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_127("EXCHANGE_2020908523");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityExchange_127.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_127("STRING_2077304962");
    noUnderlyings_0_0.set(UnderlyingSecurityID_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityID_127.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_127("STRING_1488319251");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityIDSource_127.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_127("STRING_1540091374");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_127);
    UnderlyingInstrument_127.insert(UnderlyingSecuritySubType_127.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_127("STRING_1784935554");
    noUnderlyings_0_0.set(UnderlyingSecurityType_127);
    UnderlyingInstrument_127.insert(UnderlyingSecurityType_127.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_127("STRING_1266673722");
    noUnderlyings_0_0.set(UnderlyingSeniority_127);
    UnderlyingInstrument_127.insert(UnderlyingSeniority_127.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_127("STRING_1346475230");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_127);
    UnderlyingInstrument_127.insert(UnderlyingSettlMethod_127.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_127(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_127);
    UnderlyingInstrument_127.insert(UnderlyingSettlementType_127.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_127;
    UnderlyingStartValue_127.setString("10671441");
    noUnderlyings_0_0.set(UnderlyingStartValue_127);
    UnderlyingInstrument_127.insert(UnderlyingStartValue_127.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_127("STRING_1196498364");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_127);
    UnderlyingInstrument_127.insert(UnderlyingStateOrProvinceOfIssue_127.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_127("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_127);
    UnderlyingInstrument_127.insert(UnderlyingStrikeCurrency_127.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_127;
    UnderlyingStrikePrice_127.setString("20782136");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_127);
    UnderlyingInstrument_127.insert(UnderlyingStrikePrice_127.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_127("STRING_1230033522");
    noUnderlyings_0_0.set(UnderlyingSymbol_127);
    UnderlyingInstrument_127.insert(UnderlyingSymbol_127.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_127("STRING_1595451187");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_127);
    UnderlyingInstrument_127.insert(UnderlyingSymbolSfx_127.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_127("STRING_2733787");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_127);
    UnderlyingInstrument_127.insert(UnderlyingTimeUnit_127.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_127("STRING_322561619");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_127);
    UnderlyingInstrument_127.insert(UnderlyingUnitOfMeasure_127.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_127;
    UnderlyingUnitOfMeasureQty_127.setString("7963820");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_127);
    UnderlyingInstrument_127.insert(UnderlyingUnitOfMeasureQty_127.getString());
    all_values.push_back(UnderlyingInstrument_127);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_252;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_252("STRING_944760715");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_252);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_252.insert(UnderlyingSecurityAltID_252.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_252("STRING_804373718");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_252);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_252.insert(UnderlyingSecurityAltIDSource_252.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_253;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_253("STRING_1225616949");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_253);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_253.insert(UnderlyingSecurityAltID_253.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_253("STRING_2123940018");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_253);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_253.insert(UnderlyingSecurityAltIDSource_253.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_250;
      FIX::UnderlyingStipType UnderlyingStipType_250("STRING_1002189143");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_250);
      UnderlyingStipulations_NoUnderlyingStips_250.insert(UnderlyingStipType_250.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_250("STRING_1092058051");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_250);
      UnderlyingStipulations_NoUnderlyingStips_250.insert(UnderlyingStipValue_250.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_250);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_251;
      FIX::UnderlyingStipType UnderlyingStipType_251("STRING_2004528039");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_251);
      UnderlyingStipulations_NoUnderlyingStips_251.insert(UnderlyingStipType_251.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_251("STRING_2101697540");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_251);
      UnderlyingStipulations_NoUnderlyingStips_251.insert(UnderlyingStipValue_251.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_251);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_245;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_245("STRING_1625415762");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyID_245.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_245('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyIDSource_245.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_245(292942728);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyRole_245.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_245);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_489("STRING_963838729");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_489);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489.insert(UnderlyingInstrumentPartySubID_489.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_489(1833034102);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_489);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489.insert(UnderlyingInstrumentPartySubIDType_489.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_490("STRING_1192688982");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_490);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490.insert(UnderlyingInstrumentPartySubID_490.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_490(83028803);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_490);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490.insert(UnderlyingInstrumentPartySubIDType_490.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_491("STRING_1032025684");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_491);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491.insert(UnderlyingInstrumentPartySubID_491.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_491(1133252000);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_491);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491.insert(UnderlyingInstrumentPartySubIDType_491.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_128;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_128("DATA_1150172910");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingIssuer_128.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_128(81040400);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingIssuerLen_128.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_128("DATA_5508571");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingSecurityDesc_128.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_128(623875211);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingSecurityDescLen_128.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_128;
    UnderlyingAdjustedQuantity_128.setString("117704");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_128);
    UnderlyingInstrument_128.insert(UnderlyingAdjustedQuantity_128.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_128;
    UnderlyingAllocationPercent_128.setString("20.930000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_128);
    UnderlyingInstrument_128.insert(UnderlyingAllocationPercent_128.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_128;
    UnderlyingAttachmentPoint_128.setString("27.500000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_128);
    UnderlyingInstrument_128.insert(UnderlyingAttachmentPoint_128.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_128("STRING_14504202");
    noUnderlyings_0_1.set(UnderlyingCFICode_128);
    UnderlyingInstrument_128.insert(UnderlyingCFICode_128.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_128("STRING_1558103712");
    noUnderlyings_0_1.set(UnderlyingCPProgram_128);
    UnderlyingInstrument_128.insert(UnderlyingCPProgram_128.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_128("STRING_868224782");
    noUnderlyings_0_1.set(UnderlyingCPRegType_128);
    UnderlyingInstrument_128.insert(UnderlyingCPRegType_128.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_128;
    UnderlyingCapValue_128.setString("1756855");
    noUnderlyings_0_1.set(UnderlyingCapValue_128);
    UnderlyingInstrument_128.insert(UnderlyingCapValue_128.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_128;
    UnderlyingCashAmount_128.setString("3553807");
    noUnderlyings_0_1.set(UnderlyingCashAmount_128);
    UnderlyingInstrument_128.insert(UnderlyingCashAmount_128.getString());
    FIX::UnderlyingCashType UnderlyingCashType_128("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_128);
    UnderlyingInstrument_128.insert(UnderlyingCashType_128.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_128;
    UnderlyingContractMultiplier_128.setString("14013024");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_128);
    UnderlyingInstrument_128.insert(UnderlyingContractMultiplier_128.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_128(331837150);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_128);
    UnderlyingInstrument_128.insert(UnderlyingContractMultiplierUnit_128.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_128("COUNTRY_1912831752");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingCountryOfIssue_128.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_128("LOCALMKTDATE_256007951");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_128);
    UnderlyingInstrument_128.insert(UnderlyingCouponPaymentDate_128.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_128;
    UnderlyingCouponRate_128.setString("52.010000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_128);
    UnderlyingInstrument_128.insert(UnderlyingCouponRate_128.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_128("STRING_1769876143");
    noUnderlyings_0_1.set(UnderlyingCreditRating_128);
    UnderlyingInstrument_128.insert(UnderlyingCreditRating_128.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_128("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_128);
    UnderlyingInstrument_128.insert(UnderlyingCurrency_128.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_128;
    UnderlyingCurrentValue_128.setString("12478082");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_128);
    UnderlyingInstrument_128.insert(UnderlyingCurrentValue_128.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_128;
    UnderlyingDetachmentPoint_128.setString("49.690000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_128);
    UnderlyingInstrument_128.insert(UnderlyingDetachmentPoint_128.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_128;
    UnderlyingDirtyPrice_128.setString("21363557");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_128);
    UnderlyingInstrument_128.insert(UnderlyingDirtyPrice_128.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_128;
    UnderlyingEndPrice_128.setString("6555616");
    noUnderlyings_0_1.set(UnderlyingEndPrice_128);
    UnderlyingInstrument_128.insert(UnderlyingEndPrice_128.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_128;
    UnderlyingEndValue_128.setString("6495800");
    noUnderlyings_0_1.set(UnderlyingEndValue_128);
    UnderlyingInstrument_128.insert(UnderlyingEndValue_128.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_128(1821906236);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_128);
    UnderlyingInstrument_128.insert(UnderlyingExerciseStyle_128.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_128;
    UnderlyingFXRate_128.setString("18482506");
    noUnderlyings_0_1.set(UnderlyingFXRate_128);
    UnderlyingInstrument_128.insert(UnderlyingFXRate_128.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_128('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_128);
    UnderlyingInstrument_128.insert(UnderlyingFXRateCalc_128.getString());
    FIX::UnderlyingFactor UnderlyingFactor_128;
    UnderlyingFactor_128.setString("7064482");
    noUnderlyings_0_1.set(UnderlyingFactor_128);
    UnderlyingInstrument_128.insert(UnderlyingFactor_128.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_128(834019020);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_128);
    UnderlyingInstrument_128.insert(UnderlyingFlowScheduleType_128.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_128("STRING_1882781764");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_128);
    UnderlyingInstrument_128.insert(UnderlyingInstrRegistry_128.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_128("LOCALMKTDATE_787488672");
    noUnderlyings_0_1.set(UnderlyingIssueDate_128);
    UnderlyingInstrument_128.insert(UnderlyingIssueDate_128.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_128("STRING_839527591");
    noUnderlyings_0_1.set(UnderlyingIssuer_128);
    UnderlyingInstrument_128.insert(UnderlyingIssuer_128.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_128("STRING_359173327");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingLocaleOfIssue_128.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_128("LOCALMKTDATE_799259087");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityDate_128.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_128("MONTHYEAR_2075069684");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityMonthYear_128.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_128("TZTIMEONLY_431016077");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityTime_128.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_128;
    UnderlyingNotionalPercentageOutstanding_128.setString("32.900000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_128);
    UnderlyingInstrument_128.insert(UnderlyingNotionalPercentageOutstanding_128.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_128('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_128);
    UnderlyingInstrument_128.insert(UnderlyingOptAttribute_128.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_128;
    UnderlyingOriginalNotionalPercentageOutstanding_128.setString("8.590000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_128);
    UnderlyingInstrument_128.insert(UnderlyingOriginalNotionalPercentageOutstanding_128.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_128("STRING_989448796");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_128);
    UnderlyingInstrument_128.insert(UnderlyingPriceUnitOfMeasure_128.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_128;
    UnderlyingPriceUnitOfMeasureQty_128.setString("18410705");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_128);
    UnderlyingInstrument_128.insert(UnderlyingPriceUnitOfMeasureQty_128.getString());
    FIX::UnderlyingProduct UnderlyingProduct_128(824355712);
    noUnderlyings_0_1.set(UnderlyingProduct_128);
    UnderlyingInstrument_128.insert(UnderlyingProduct_128.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_128(243267604);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_128);
    UnderlyingInstrument_128.insert(UnderlyingPutOrCall_128.getString());
    FIX::UnderlyingPx UnderlyingPx_128;
    UnderlyingPx_128.setString("254240");
    noUnderlyings_0_1.set(UnderlyingPx_128);
    UnderlyingInstrument_128.insert(UnderlyingPx_128.getString());
    FIX::UnderlyingQty UnderlyingQty_128;
    UnderlyingQty_128.setString("5897038");
    noUnderlyings_0_1.set(UnderlyingQty_128);
    UnderlyingInstrument_128.insert(UnderlyingQty_128.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_128("LOCALMKTDATE_499275555");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_128);
    UnderlyingInstrument_128.insert(UnderlyingRedemptionDate_128.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_128("STRING_1449319232");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_128);
    UnderlyingInstrument_128.insert(UnderlyingRepoCollateralSecurityType_128.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_128;
    UnderlyingRepurchaseRate_128.setString("63.110000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_128);
    UnderlyingInstrument_128.insert(UnderlyingRepurchaseRate_128.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_128(709497398);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_128);
    UnderlyingInstrument_128.insert(UnderlyingRepurchaseTerm_128.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_128("STRING_1145248638");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_128);
    UnderlyingInstrument_128.insert(UnderlyingRestructuringType_128.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_128("STRING_1459904569");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityDesc_128.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_128("EXCHANGE_395238720");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityExchange_128.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_128("STRING_1134120772");
    noUnderlyings_0_1.set(UnderlyingSecurityID_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityID_128.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_128("STRING_2115466254");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityIDSource_128.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_128("STRING_1044818770");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_128);
    UnderlyingInstrument_128.insert(UnderlyingSecuritySubType_128.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_128("STRING_808543360");
    noUnderlyings_0_1.set(UnderlyingSecurityType_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityType_128.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_128("STRING_1816233274");
    noUnderlyings_0_1.set(UnderlyingSeniority_128);
    UnderlyingInstrument_128.insert(UnderlyingSeniority_128.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_128("STRING_1777427624");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_128);
    UnderlyingInstrument_128.insert(UnderlyingSettlMethod_128.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_128(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_128);
    UnderlyingInstrument_128.insert(UnderlyingSettlementType_128.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_128;
    UnderlyingStartValue_128.setString("5027686");
    noUnderlyings_0_1.set(UnderlyingStartValue_128);
    UnderlyingInstrument_128.insert(UnderlyingStartValue_128.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_128("STRING_1512725740");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingStateOrProvinceOfIssue_128.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_128("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_128);
    UnderlyingInstrument_128.insert(UnderlyingStrikeCurrency_128.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_128;
    UnderlyingStrikePrice_128.setString("18718990");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_128);
    UnderlyingInstrument_128.insert(UnderlyingStrikePrice_128.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_128("STRING_954255744");
    noUnderlyings_0_1.set(UnderlyingSymbol_128);
    UnderlyingInstrument_128.insert(UnderlyingSymbol_128.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_128("STRING_1269882275");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_128);
    UnderlyingInstrument_128.insert(UnderlyingSymbolSfx_128.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_128("STRING_155431496");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_128);
    UnderlyingInstrument_128.insert(UnderlyingTimeUnit_128.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_128("STRING_1768019034");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_128);
    UnderlyingInstrument_128.insert(UnderlyingUnitOfMeasure_128.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_128;
    UnderlyingUnitOfMeasureQty_128.setString("6080883");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_128);
    UnderlyingInstrument_128.insert(UnderlyingUnitOfMeasureQty_128.getString());
    all_values.push_back(UnderlyingInstrument_128);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_254;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_254("STRING_609984182");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_254);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_254.insert(UnderlyingSecurityAltID_254.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_254("STRING_301675257");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_254);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_254.insert(UnderlyingSecurityAltIDSource_254.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_255;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_255("STRING_131544420");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_255);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_255.insert(UnderlyingSecurityAltID_255.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_255("STRING_853251786");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_255);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_255.insert(UnderlyingSecurityAltIDSource_255.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_252;
      FIX::UnderlyingStipType UnderlyingStipType_252("STRING_721248236");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_252);
      UnderlyingStipulations_NoUnderlyingStips_252.insert(UnderlyingStipType_252.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_252("STRING_1352527341");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_252);
      UnderlyingStipulations_NoUnderlyingStips_252.insert(UnderlyingStipValue_252.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_252);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_246;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_246("STRING_933344547");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyID_246.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_246('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyIDSource_246.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_246(774183511);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyRole_246.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_246);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_492("STRING_309779812");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_492);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492.insert(UnderlyingInstrumentPartySubID_492.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_492(1908304283);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_492);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492.insert(UnderlyingInstrumentPartySubIDType_492.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_493("STRING_213748075");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_493);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493.insert(UnderlyingInstrumentPartySubID_493.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_493(1354598582);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_493);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493.insert(UnderlyingInstrumentPartySubIDType_493.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_494("STRING_569363996");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_494);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494.insert(UnderlyingInstrumentPartySubID_494.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_494(2029981349);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_494);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494.insert(UnderlyingInstrumentPartySubIDType_494.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_247;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_247("STRING_984542559");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyID_247.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_247('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyIDSource_247.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_247(385266348);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyRole_247.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_495("STRING_91868637");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_495);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495.insert(UnderlyingInstrumentPartySubID_495.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_495(1727562587);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_495);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495.insert(UnderlyingInstrumentPartySubIDType_495.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_496("STRING_74200071");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_496);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496.insert(UnderlyingInstrumentPartySubID_496.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_496(1046124381);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_496);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496.insert(UnderlyingInstrumentPartySubIDType_496.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_497("STRING_849961214");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_497);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497.insert(UnderlyingInstrumentPartySubID_497.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_497(229631567);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_497);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497.insert(UnderlyingInstrumentPartySubIDType_497.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_248;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_248("STRING_666659767");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyID_248.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_248('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyIDSource_248.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_248(1684303923);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyRole_248.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_498("STRING_1759724847");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_498);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498.insert(UnderlyingInstrumentPartySubID_498.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_498(1815848343);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_498);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498.insert(UnderlyingInstrumentPartySubIDType_498.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_129;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_129("DATA_2129895736");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingIssuer_129.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_129(2086824135);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingIssuerLen_129.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_129("DATA_389612931");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingSecurityDesc_129.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_129(1334939429);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingSecurityDescLen_129.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_129;
    UnderlyingAdjustedQuantity_129.setString("17157590");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_129);
    UnderlyingInstrument_129.insert(UnderlyingAdjustedQuantity_129.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_129;
    UnderlyingAllocationPercent_129.setString("74.790000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_129);
    UnderlyingInstrument_129.insert(UnderlyingAllocationPercent_129.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_129;
    UnderlyingAttachmentPoint_129.setString("5.210000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_129);
    UnderlyingInstrument_129.insert(UnderlyingAttachmentPoint_129.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_129("STRING_342458870");
    noUnderlyings_0_2.set(UnderlyingCFICode_129);
    UnderlyingInstrument_129.insert(UnderlyingCFICode_129.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_129("STRING_1568722947");
    noUnderlyings_0_2.set(UnderlyingCPProgram_129);
    UnderlyingInstrument_129.insert(UnderlyingCPProgram_129.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_129("STRING_1559260333");
    noUnderlyings_0_2.set(UnderlyingCPRegType_129);
    UnderlyingInstrument_129.insert(UnderlyingCPRegType_129.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_129;
    UnderlyingCapValue_129.setString("1032795");
    noUnderlyings_0_2.set(UnderlyingCapValue_129);
    UnderlyingInstrument_129.insert(UnderlyingCapValue_129.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_129;
    UnderlyingCashAmount_129.setString("17824710");
    noUnderlyings_0_2.set(UnderlyingCashAmount_129);
    UnderlyingInstrument_129.insert(UnderlyingCashAmount_129.getString());
    FIX::UnderlyingCashType UnderlyingCashType_129("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_129);
    UnderlyingInstrument_129.insert(UnderlyingCashType_129.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_129;
    UnderlyingContractMultiplier_129.setString("6726435");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_129);
    UnderlyingInstrument_129.insert(UnderlyingContractMultiplier_129.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_129(1664968724);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_129);
    UnderlyingInstrument_129.insert(UnderlyingContractMultiplierUnit_129.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_129("COUNTRY_1750917827");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingCountryOfIssue_129.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_129("LOCALMKTDATE_609515482");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_129);
    UnderlyingInstrument_129.insert(UnderlyingCouponPaymentDate_129.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_129;
    UnderlyingCouponRate_129.setString("50.720000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_129);
    UnderlyingInstrument_129.insert(UnderlyingCouponRate_129.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_129("STRING_2100702478");
    noUnderlyings_0_2.set(UnderlyingCreditRating_129);
    UnderlyingInstrument_129.insert(UnderlyingCreditRating_129.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_129("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_129);
    UnderlyingInstrument_129.insert(UnderlyingCurrency_129.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_129;
    UnderlyingCurrentValue_129.setString("274189");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_129);
    UnderlyingInstrument_129.insert(UnderlyingCurrentValue_129.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_129;
    UnderlyingDetachmentPoint_129.setString("85.000000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_129);
    UnderlyingInstrument_129.insert(UnderlyingDetachmentPoint_129.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_129;
    UnderlyingDirtyPrice_129.setString("3327915");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_129);
    UnderlyingInstrument_129.insert(UnderlyingDirtyPrice_129.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_129;
    UnderlyingEndPrice_129.setString("2570504");
    noUnderlyings_0_2.set(UnderlyingEndPrice_129);
    UnderlyingInstrument_129.insert(UnderlyingEndPrice_129.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_129;
    UnderlyingEndValue_129.setString("2666846");
    noUnderlyings_0_2.set(UnderlyingEndValue_129);
    UnderlyingInstrument_129.insert(UnderlyingEndValue_129.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_129(1790841167);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_129);
    UnderlyingInstrument_129.insert(UnderlyingExerciseStyle_129.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_129;
    UnderlyingFXRate_129.setString("19413543");
    noUnderlyings_0_2.set(UnderlyingFXRate_129);
    UnderlyingInstrument_129.insert(UnderlyingFXRate_129.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_129('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_129);
    UnderlyingInstrument_129.insert(UnderlyingFXRateCalc_129.getString());
    FIX::UnderlyingFactor UnderlyingFactor_129;
    UnderlyingFactor_129.setString("14030823");
    noUnderlyings_0_2.set(UnderlyingFactor_129);
    UnderlyingInstrument_129.insert(UnderlyingFactor_129.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_129(1609719088);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_129);
    UnderlyingInstrument_129.insert(UnderlyingFlowScheduleType_129.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_129("STRING_1525740657");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_129);
    UnderlyingInstrument_129.insert(UnderlyingInstrRegistry_129.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_129("LOCALMKTDATE_1342422853");
    noUnderlyings_0_2.set(UnderlyingIssueDate_129);
    UnderlyingInstrument_129.insert(UnderlyingIssueDate_129.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_129("STRING_1999332019");
    noUnderlyings_0_2.set(UnderlyingIssuer_129);
    UnderlyingInstrument_129.insert(UnderlyingIssuer_129.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_129("STRING_713196438");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingLocaleOfIssue_129.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_129("LOCALMKTDATE_910698213");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityDate_129.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_129("MONTHYEAR_1174805850");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityMonthYear_129.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_129("TZTIMEONLY_1962676960");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityTime_129.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_129;
    UnderlyingNotionalPercentageOutstanding_129.setString("70.830000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_129);
    UnderlyingInstrument_129.insert(UnderlyingNotionalPercentageOutstanding_129.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_129('5');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_129);
    UnderlyingInstrument_129.insert(UnderlyingOptAttribute_129.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_129;
    UnderlyingOriginalNotionalPercentageOutstanding_129.setString("36.450000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_129);
    UnderlyingInstrument_129.insert(UnderlyingOriginalNotionalPercentageOutstanding_129.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_129("STRING_1356436589");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_129);
    UnderlyingInstrument_129.insert(UnderlyingPriceUnitOfMeasure_129.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_129;
    UnderlyingPriceUnitOfMeasureQty_129.setString("2310325");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_129);
    UnderlyingInstrument_129.insert(UnderlyingPriceUnitOfMeasureQty_129.getString());
    FIX::UnderlyingProduct UnderlyingProduct_129(2140828913);
    noUnderlyings_0_2.set(UnderlyingProduct_129);
    UnderlyingInstrument_129.insert(UnderlyingProduct_129.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_129(2029080091);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_129);
    UnderlyingInstrument_129.insert(UnderlyingPutOrCall_129.getString());
    FIX::UnderlyingPx UnderlyingPx_129;
    UnderlyingPx_129.setString("18960012");
    noUnderlyings_0_2.set(UnderlyingPx_129);
    UnderlyingInstrument_129.insert(UnderlyingPx_129.getString());
    FIX::UnderlyingQty UnderlyingQty_129;
    UnderlyingQty_129.setString("17442630");
    noUnderlyings_0_2.set(UnderlyingQty_129);
    UnderlyingInstrument_129.insert(UnderlyingQty_129.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_129("LOCALMKTDATE_491111926");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_129);
    UnderlyingInstrument_129.insert(UnderlyingRedemptionDate_129.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_129("STRING_1798752673");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_129);
    UnderlyingInstrument_129.insert(UnderlyingRepoCollateralSecurityType_129.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_129;
    UnderlyingRepurchaseRate_129.setString("19.230000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_129);
    UnderlyingInstrument_129.insert(UnderlyingRepurchaseRate_129.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_129(1192496045);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_129);
    UnderlyingInstrument_129.insert(UnderlyingRepurchaseTerm_129.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_129("STRING_1281583036");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_129);
    UnderlyingInstrument_129.insert(UnderlyingRestructuringType_129.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_129("STRING_1724900824");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityDesc_129.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_129("EXCHANGE_792520898");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityExchange_129.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_129("STRING_1614374614");
    noUnderlyings_0_2.set(UnderlyingSecurityID_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityID_129.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_129("STRING_1981951293");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityIDSource_129.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_129("STRING_1059205517");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_129);
    UnderlyingInstrument_129.insert(UnderlyingSecuritySubType_129.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_129("STRING_1257732133");
    noUnderlyings_0_2.set(UnderlyingSecurityType_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityType_129.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_129("STRING_1775822038");
    noUnderlyings_0_2.set(UnderlyingSeniority_129);
    UnderlyingInstrument_129.insert(UnderlyingSeniority_129.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_129("STRING_455050438");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_129);
    UnderlyingInstrument_129.insert(UnderlyingSettlMethod_129.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_129(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_129);
    UnderlyingInstrument_129.insert(UnderlyingSettlementType_129.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_129;
    UnderlyingStartValue_129.setString("12380574");
    noUnderlyings_0_2.set(UnderlyingStartValue_129);
    UnderlyingInstrument_129.insert(UnderlyingStartValue_129.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_129("STRING_1980791095");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingStateOrProvinceOfIssue_129.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_129("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_129);
    UnderlyingInstrument_129.insert(UnderlyingStrikeCurrency_129.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_129;
    UnderlyingStrikePrice_129.setString("5465038");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_129);
    UnderlyingInstrument_129.insert(UnderlyingStrikePrice_129.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_129("STRING_618968270");
    noUnderlyings_0_2.set(UnderlyingSymbol_129);
    UnderlyingInstrument_129.insert(UnderlyingSymbol_129.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_129("STRING_117228052");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_129);
    UnderlyingInstrument_129.insert(UnderlyingSymbolSfx_129.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_129("STRING_361697198");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_129);
    UnderlyingInstrument_129.insert(UnderlyingTimeUnit_129.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_129("STRING_1872125354");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_129);
    UnderlyingInstrument_129.insert(UnderlyingUnitOfMeasure_129.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_129;
    UnderlyingUnitOfMeasureQty_129.setString("7132732");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_129);
    UnderlyingInstrument_129.insert(UnderlyingUnitOfMeasureQty_129.getString());
    all_values.push_back(UnderlyingInstrument_129);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_256;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_256("STRING_1081078295");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_256);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_256.insert(UnderlyingSecurityAltID_256.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_256("STRING_944305726");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_256);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_256.insert(UnderlyingSecurityAltIDSource_256.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_257;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_257("STRING_1729496109");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_257);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_257.insert(UnderlyingSecurityAltID_257.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_257("STRING_962674739");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_257);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_257.insert(UnderlyingSecurityAltIDSource_257.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_258;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_258("STRING_692823327");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_258);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_258.insert(UnderlyingSecurityAltID_258.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_258("STRING_1326275553");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_258);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_258.insert(UnderlyingSecurityAltIDSource_258.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_253;
      FIX::UnderlyingStipType UnderlyingStipType_253("STRING_344092352");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_253);
      UnderlyingStipulations_NoUnderlyingStips_253.insert(UnderlyingStipType_253.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_253("STRING_876273828");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_253);
      UnderlyingStipulations_NoUnderlyingStips_253.insert(UnderlyingStipValue_253.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_253);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_249;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_249("STRING_1625675388");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyID_249.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_249('4');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyIDSource_249.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_249(1291319960);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyRole_249.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_499("STRING_288158650");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_499);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499.insert(UnderlyingInstrumentPartySubID_499.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_499(203041830);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_499);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499.insert(UnderlyingInstrumentPartySubIDType_499.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_500("STRING_202814840");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_500);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500.insert(UnderlyingInstrumentPartySubID_500.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_500(2063980688);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_500);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500.insert(UnderlyingInstrumentPartySubIDType_500.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_501("STRING_658092268");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_501);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501.insert(UnderlyingInstrumentPartySubID_501.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_501(716145692);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_501);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501.insert(UnderlyingInstrumentPartySubIDType_501.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_24;
  FIX::Yield Yield_24;
  Yield_24.setString("45.180000");
  msg.set(Yield_24);
  YieldData_24.insert(Yield_24.getString());
  FIX::YieldCalcDate YieldCalcDate_24("LOCALMKTDATE_491399716");
  msg.set(YieldCalcDate_24);
  YieldData_24.insert(YieldCalcDate_24.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_24("LOCALMKTDATE_424415749");
  msg.set(YieldRedemptionDate_24);
  YieldData_24.insert(YieldRedemptionDate_24.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_24;
  YieldRedemptionPrice_24.setString("969767");
  msg.set(YieldRedemptionPrice_24);
  YieldData_24.insert(YieldRedemptionPrice_24.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_24(1037903602);
  msg.set(YieldRedemptionPriceType_24);
  YieldData_24.insert(YieldRedemptionPriceType_24.getString());
  FIX::YieldType YieldType_24("STRING_GOVTEQUIV");
  msg.set(YieldType_24);
  YieldData_24.insert(YieldType_24.getString());
  all_values.push_back(YieldData_24);
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
