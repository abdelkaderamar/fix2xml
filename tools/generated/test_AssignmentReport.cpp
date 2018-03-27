#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AssignmentReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AssignmentReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AssignmentReport msg;

  list<multiset<string>> all_values;
  multiset<string> AssignmentReport_0;
  FIX::Account Account_0("STRING_152602666");
  msg.set(Account_0);
  AssignmentReport_0.insert(Account_0.getString());
  FIX::AccountType AccountType_0(3);
  msg.set(AccountType_0);
  AssignmentReport_0.insert(AccountType_0.getString());
  FIX::AsgnRptID AsgnRptID_0("STRING_1570596713");
  msg.set(AsgnRptID_0);
  AssignmentReport_0.insert(AsgnRptID_0.getString());
  FIX::AssignmentMethod AssignmentMethod_0('R');
  msg.set(AssignmentMethod_0);
  AssignmentReport_0.insert(AssignmentMethod_0.getString());
  FIX::AssignmentUnit AssignmentUnit_0;
  AssignmentUnit_0.setString("267781");
  msg.set(AssignmentUnit_0);
  AssignmentReport_0.insert(AssignmentUnit_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_5("LOCALMKTDATE_804828055");
  msg.set(ClearingBusinessDate_5);
  AssignmentReport_0.insert(ClearingBusinessDate_5.getString());
  FIX::Currency Currency_4("JPY");
  msg.set(Currency_4);
  AssignmentReport_0.insert(Currency_4.getString());
  FIX::EncodedText EncodedText_9("DATA_539402909");
  msg.set(EncodedText_9);
  AssignmentReport_0.insert(EncodedText_9.getString());
  FIX::EncodedTextLen EncodedTextLen_9(108855254);
  msg.set(EncodedTextLen_9);
  AssignmentReport_0.insert(EncodedTextLen_9.getString());
  FIX::ExerciseMethod ExerciseMethod_0('M');
  msg.set(ExerciseMethod_0);
  AssignmentReport_0.insert(ExerciseMethod_0.getString());
  FIX::ExpireDate ExpireDate_0("LOCALMKTDATE_177444480");
  msg.set(ExpireDate_0);
  AssignmentReport_0.insert(ExpireDate_0.getString());
  FIX::LastRptRequested LastRptRequested_0(true);
  msg.set(LastRptRequested_0);
  AssignmentReport_0.insert(LastRptRequested_0.getString());
  FIX::OpenInterest OpenInterest_0;
  OpenInterest_0.setString("20910739");
  msg.set(OpenInterest_0);
  AssignmentReport_0.insert(OpenInterest_0.getString());
  FIX::PosReqID PosReqID_0("STRING_1662503494");
  msg.set(PosReqID_0);
  AssignmentReport_0.insert(PosReqID_0.getString());
  FIX::PriorSettlPrice PriorSettlPrice_1;
  PriorSettlPrice_1.setString("12462340");
  msg.set(PriorSettlPrice_1);
  AssignmentReport_0.insert(PriorSettlPrice_1.getString());
  FIX::SettlPrice SettlPrice_1;
  SettlPrice_1.setString("545497");
  msg.set(SettlPrice_1);
  AssignmentReport_0.insert(SettlPrice_1.getString());
  FIX::SettlPriceType SettlPriceType_0(1);
  msg.set(SettlPriceType_0);
  AssignmentReport_0.insert(SettlPriceType_0.getString());
  FIX::SettlSessID SettlSessID_1("STRING_EOD");
  msg.set(SettlSessID_1);
  AssignmentReport_0.insert(SettlSessID_1.getString());
  FIX::SettlSessSubID SettlSessSubID_0("STRING_1792775914");
  msg.set(SettlSessSubID_0);
  AssignmentReport_0.insert(SettlSessSubID_0.getString());
  FIX::Text Text_9("STRING_1125480051");
  msg.set(Text_9);
  AssignmentReport_0.insert(Text_9.getString());
  FIX::ThresholdAmount ThresholdAmount_0;
  ThresholdAmount_0.setString("10645336");
  msg.set(ThresholdAmount_0);
  AssignmentReport_0.insert(ThresholdAmount_0.getString());
  FIX::TotNumAssignmentReports TotNumAssignmentReports_0(1439240589);
  msg.set(TotNumAssignmentReports_0);
  AssignmentReport_0.insert(TotNumAssignmentReports_0.getString());
  FIX::UnderlyingSettlPrice UnderlyingSettlPrice_0;
  UnderlyingSettlPrice_0.setString("13849659");
  msg.set(UnderlyingSettlPrice_0);
  AssignmentReport_0.insert(UnderlyingSettlPrice_0.getString());
  all_values.push_back(AssignmentReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_0;
  FIX::ApplID ApplID_0("STRING_1028593042");
  msg.set(ApplID_0);
  ApplicationSequenceControl_0.insert(ApplID_0.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_0(474103661);
  msg.set(ApplLastSeqNum_0);
  ApplicationSequenceControl_0.insert(ApplLastSeqNum_0.getString());
  FIX::ApplResendFlag ApplResendFlag_0(false);
  msg.set(ApplResendFlag_0);
  ApplicationSequenceControl_0.insert(ApplResendFlag_0.getString());
  FIX::ApplSeqNum ApplSeqNum_0(138598131);
  msg.set(ApplSeqNum_0);
  ApplicationSequenceControl_0.insert(ApplSeqNum_0.getString());
  all_values.push_back(ApplicationSequenceControl_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_9;
    FIX::EncodedLegIssuer EncodedLegIssuer_9("DATA_674542347");
    noLegs_0_0.set(EncodedLegIssuer_9);
    InstrumentLeg_9.insert(EncodedLegIssuer_9.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_9(803246444);
    noLegs_0_0.set(EncodedLegIssuerLen_9);
    InstrumentLeg_9.insert(EncodedLegIssuerLen_9.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_9("DATA_99059280");
    noLegs_0_0.set(EncodedLegSecurityDesc_9);
    InstrumentLeg_9.insert(EncodedLegSecurityDesc_9.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_9(260879665);
    noLegs_0_0.set(EncodedLegSecurityDescLen_9);
    InstrumentLeg_9.insert(EncodedLegSecurityDescLen_9.getString());
    FIX::LegCFICode LegCFICode_9("STRING_226359509");
    noLegs_0_0.set(LegCFICode_9);
    InstrumentLeg_9.insert(LegCFICode_9.getString());
    FIX::LegContractMultiplier LegContractMultiplier_9;
    LegContractMultiplier_9.setString("158865");
    noLegs_0_0.set(LegContractMultiplier_9);
    InstrumentLeg_9.insert(LegContractMultiplier_9.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_9(287657824);
    noLegs_0_0.set(LegContractMultiplierUnit_9);
    InstrumentLeg_9.insert(LegContractMultiplierUnit_9.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_9("MONTHYEAR_1031187564");
    noLegs_0_0.set(LegContractSettlMonth_9);
    InstrumentLeg_9.insert(LegContractSettlMonth_9.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_9("COUNTRY_1029858975");
    noLegs_0_0.set(LegCountryOfIssue_9);
    InstrumentLeg_9.insert(LegCountryOfIssue_9.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_9("LOCALMKTDATE_29292618");
    noLegs_0_0.set(LegCouponPaymentDate_9);
    InstrumentLeg_9.insert(LegCouponPaymentDate_9.getString());
    FIX::LegCouponRate LegCouponRate_9;
    LegCouponRate_9.setString("4.730000");
    noLegs_0_0.set(LegCouponRate_9);
    InstrumentLeg_9.insert(LegCouponRate_9.getString());
    FIX::LegCreditRating LegCreditRating_9("STRING_1138714230");
    noLegs_0_0.set(LegCreditRating_9);
    InstrumentLeg_9.insert(LegCreditRating_9.getString());
    FIX::LegCurrency LegCurrency_9("USD");
    noLegs_0_0.set(LegCurrency_9);
    InstrumentLeg_9.insert(LegCurrency_9.getString());
    FIX::LegDatedDate LegDatedDate_9("LOCALMKTDATE_1350438312");
    noLegs_0_0.set(LegDatedDate_9);
    InstrumentLeg_9.insert(LegDatedDate_9.getString());
    FIX::LegExerciseStyle LegExerciseStyle_9(1279911343);
    noLegs_0_0.set(LegExerciseStyle_9);
    InstrumentLeg_9.insert(LegExerciseStyle_9.getString());
    FIX::LegFactor LegFactor_9;
    LegFactor_9.setString("12630548");
    noLegs_0_0.set(LegFactor_9);
    InstrumentLeg_9.insert(LegFactor_9.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_9(449188726);
    noLegs_0_0.set(LegFlowScheduleType_9);
    InstrumentLeg_9.insert(LegFlowScheduleType_9.getString());
    FIX::LegInstrRegistry LegInstrRegistry_9("STRING_1334461138");
    noLegs_0_0.set(LegInstrRegistry_9);
    InstrumentLeg_9.insert(LegInstrRegistry_9.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_9("LOCALMKTDATE_1585116773");
    noLegs_0_0.set(LegInterestAccrualDate_9);
    InstrumentLeg_9.insert(LegInterestAccrualDate_9.getString());
    FIX::LegIssueDate LegIssueDate_9("LOCALMKTDATE_1729793105");
    noLegs_0_0.set(LegIssueDate_9);
    InstrumentLeg_9.insert(LegIssueDate_9.getString());
    FIX::LegIssuer LegIssuer_9("STRING_979753404");
    noLegs_0_0.set(LegIssuer_9);
    InstrumentLeg_9.insert(LegIssuer_9.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_9("STRING_563113176");
    noLegs_0_0.set(LegLocaleOfIssue_9);
    InstrumentLeg_9.insert(LegLocaleOfIssue_9.getString());
    FIX::LegMaturityDate LegMaturityDate_9("LOCALMKTDATE_646843124");
    noLegs_0_0.set(LegMaturityDate_9);
    InstrumentLeg_9.insert(LegMaturityDate_9.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_9("MONTHYEAR_271510346");
    noLegs_0_0.set(LegMaturityMonthYear_9);
    InstrumentLeg_9.insert(LegMaturityMonthYear_9.getString());
    FIX::LegMaturityTime LegMaturityTime_9("TZTIMEONLY_1948079125");
    noLegs_0_0.set(LegMaturityTime_9);
    InstrumentLeg_9.insert(LegMaturityTime_9.getString());
    FIX::LegOptAttribute LegOptAttribute_9('1');
    noLegs_0_0.set(LegOptAttribute_9);
    InstrumentLeg_9.insert(LegOptAttribute_9.getString());
    FIX::LegOptionRatio LegOptionRatio_9;
    LegOptionRatio_9.setString("7456140");
    noLegs_0_0.set(LegOptionRatio_9);
    InstrumentLeg_9.insert(LegOptionRatio_9.getString());
    FIX::LegPool LegPool_9("STRING_1921303278");
    noLegs_0_0.set(LegPool_9);
    InstrumentLeg_9.insert(LegPool_9.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_9("STRING_1814034297");
    noLegs_0_0.set(LegPriceUnitOfMeasure_9);
    InstrumentLeg_9.insert(LegPriceUnitOfMeasure_9.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_9;
    LegPriceUnitOfMeasureQty_9.setString("6920706");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_9);
    InstrumentLeg_9.insert(LegPriceUnitOfMeasureQty_9.getString());
    FIX::LegProduct LegProduct_9(448361978);
    noLegs_0_0.set(LegProduct_9);
    InstrumentLeg_9.insert(LegProduct_9.getString());
    FIX::LegPutOrCall LegPutOrCall_9(469797093);
    noLegs_0_0.set(LegPutOrCall_9);
    InstrumentLeg_9.insert(LegPutOrCall_9.getString());
    FIX::LegRatioQty LegRatioQty_9;
    LegRatioQty_9.setString("7911299");
    noLegs_0_0.set(LegRatioQty_9);
    InstrumentLeg_9.insert(LegRatioQty_9.getString());
    FIX::LegRedemptionDate LegRedemptionDate_9("LOCALMKTDATE_709241643");
    noLegs_0_0.set(LegRedemptionDate_9);
    InstrumentLeg_9.insert(LegRedemptionDate_9.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_9("STRING_696156602");
    noLegs_0_0.set(LegRepoCollateralSecurityType_9);
    InstrumentLeg_9.insert(LegRepoCollateralSecurityType_9.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_9;
    LegRepurchaseRate_9.setString("64.710000");
    noLegs_0_0.set(LegRepurchaseRate_9);
    InstrumentLeg_9.insert(LegRepurchaseRate_9.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_9(996899467);
    noLegs_0_0.set(LegRepurchaseTerm_9);
    InstrumentLeg_9.insert(LegRepurchaseTerm_9.getString());
    FIX::LegSecurityDesc LegSecurityDesc_9("STRING_1727344166");
    noLegs_0_0.set(LegSecurityDesc_9);
    InstrumentLeg_9.insert(LegSecurityDesc_9.getString());
    FIX::LegSecurityExchange LegSecurityExchange_9("EXCHANGE_1836875446");
    noLegs_0_0.set(LegSecurityExchange_9);
    InstrumentLeg_9.insert(LegSecurityExchange_9.getString());
    FIX::LegSecurityID LegSecurityID_9("STRING_1026192085");
    noLegs_0_0.set(LegSecurityID_9);
    InstrumentLeg_9.insert(LegSecurityID_9.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_9("STRING_1150450992");
    noLegs_0_0.set(LegSecurityIDSource_9);
    InstrumentLeg_9.insert(LegSecurityIDSource_9.getString());
    FIX::LegSecuritySubType LegSecuritySubType_9("STRING_828106028");
    noLegs_0_0.set(LegSecuritySubType_9);
    InstrumentLeg_9.insert(LegSecuritySubType_9.getString());
    FIX::LegSecurityType LegSecurityType_9("STRING_215029517");
    noLegs_0_0.set(LegSecurityType_9);
    InstrumentLeg_9.insert(LegSecurityType_9.getString());
    FIX::LegSide LegSide_9('7');
    noLegs_0_0.set(LegSide_9);
    InstrumentLeg_9.insert(LegSide_9.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_9("STRING_31060693");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_9);
    InstrumentLeg_9.insert(LegStateOrProvinceOfIssue_9.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_9("USD");
    noLegs_0_0.set(LegStrikeCurrency_9);
    InstrumentLeg_9.insert(LegStrikeCurrency_9.getString());
    FIX::LegStrikePrice LegStrikePrice_9;
    LegStrikePrice_9.setString("4802494");
    noLegs_0_0.set(LegStrikePrice_9);
    InstrumentLeg_9.insert(LegStrikePrice_9.getString());
    FIX::LegSymbol LegSymbol_9("STRING_681918351");
    noLegs_0_0.set(LegSymbol_9);
    InstrumentLeg_9.insert(LegSymbol_9.getString());
    FIX::LegSymbolSfx LegSymbolSfx_9("STRING_1451690223");
    noLegs_0_0.set(LegSymbolSfx_9);
    InstrumentLeg_9.insert(LegSymbolSfx_9.getString());
    FIX::LegTimeUnit LegTimeUnit_9("STRING_62558877");
    noLegs_0_0.set(LegTimeUnit_9);
    InstrumentLeg_9.insert(LegTimeUnit_9.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_9("STRING_1661671755");
    noLegs_0_0.set(LegUnitOfMeasure_9);
    InstrumentLeg_9.insert(LegUnitOfMeasure_9.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_9;
    LegUnitOfMeasureQty_9.setString("20148034");
    noLegs_0_0.set(LegUnitOfMeasureQty_9);
    InstrumentLeg_9.insert(LegUnitOfMeasureQty_9.getString());
    all_values.push_back(InstrumentLeg_9);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_13;
      FIX::LegSecurityAltID LegSecurityAltID_13("STRING_1933182101");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_13);
      LegSecAltIDGrp_NoLegSecurityAltID_13.insert(LegSecurityAltID_13.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_13("STRING_1815398877");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_13);
      LegSecAltIDGrp_NoLegSecurityAltID_13.insert(LegSecurityAltIDSource_13.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_13);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_14;
      FIX::LegSecurityAltID LegSecurityAltID_14("STRING_237354519");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_14);
      LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltID_14.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_14("STRING_531312460");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_14);
      LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltIDSource_14.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_14);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_15;
      FIX::LegSecurityAltID LegSecurityAltID_15("STRING_1589218507");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_15);
      LegSecAltIDGrp_NoLegSecurityAltID_15.insert(LegSecurityAltID_15.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_15("STRING_2051388816");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_15);
      LegSecAltIDGrp_NoLegSecurityAltID_15.insert(LegSecurityAltIDSource_15.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_15);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_10;
    FIX::EncodedLegIssuer EncodedLegIssuer_10("DATA_1223383081");
    noLegs_0_1.set(EncodedLegIssuer_10);
    InstrumentLeg_10.insert(EncodedLegIssuer_10.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_10(2037580485);
    noLegs_0_1.set(EncodedLegIssuerLen_10);
    InstrumentLeg_10.insert(EncodedLegIssuerLen_10.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_10("DATA_373702261");
    noLegs_0_1.set(EncodedLegSecurityDesc_10);
    InstrumentLeg_10.insert(EncodedLegSecurityDesc_10.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_10(2014512983);
    noLegs_0_1.set(EncodedLegSecurityDescLen_10);
    InstrumentLeg_10.insert(EncodedLegSecurityDescLen_10.getString());
    FIX::LegCFICode LegCFICode_10("STRING_599338480");
    noLegs_0_1.set(LegCFICode_10);
    InstrumentLeg_10.insert(LegCFICode_10.getString());
    FIX::LegContractMultiplier LegContractMultiplier_10;
    LegContractMultiplier_10.setString("10698588");
    noLegs_0_1.set(LegContractMultiplier_10);
    InstrumentLeg_10.insert(LegContractMultiplier_10.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_10(674045806);
    noLegs_0_1.set(LegContractMultiplierUnit_10);
    InstrumentLeg_10.insert(LegContractMultiplierUnit_10.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_10("MONTHYEAR_1596237947");
    noLegs_0_1.set(LegContractSettlMonth_10);
    InstrumentLeg_10.insert(LegContractSettlMonth_10.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_10("COUNTRY_649719381");
    noLegs_0_1.set(LegCountryOfIssue_10);
    InstrumentLeg_10.insert(LegCountryOfIssue_10.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_10("LOCALMKTDATE_363437604");
    noLegs_0_1.set(LegCouponPaymentDate_10);
    InstrumentLeg_10.insert(LegCouponPaymentDate_10.getString());
    FIX::LegCouponRate LegCouponRate_10;
    LegCouponRate_10.setString("63.850000");
    noLegs_0_1.set(LegCouponRate_10);
    InstrumentLeg_10.insert(LegCouponRate_10.getString());
    FIX::LegCreditRating LegCreditRating_10("STRING_1800170373");
    noLegs_0_1.set(LegCreditRating_10);
    InstrumentLeg_10.insert(LegCreditRating_10.getString());
    FIX::LegCurrency LegCurrency_10("JPY");
    noLegs_0_1.set(LegCurrency_10);
    InstrumentLeg_10.insert(LegCurrency_10.getString());
    FIX::LegDatedDate LegDatedDate_10("LOCALMKTDATE_403689023");
    noLegs_0_1.set(LegDatedDate_10);
    InstrumentLeg_10.insert(LegDatedDate_10.getString());
    FIX::LegExerciseStyle LegExerciseStyle_10(1222604326);
    noLegs_0_1.set(LegExerciseStyle_10);
    InstrumentLeg_10.insert(LegExerciseStyle_10.getString());
    FIX::LegFactor LegFactor_10;
    LegFactor_10.setString("374331");
    noLegs_0_1.set(LegFactor_10);
    InstrumentLeg_10.insert(LegFactor_10.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_10(270262474);
    noLegs_0_1.set(LegFlowScheduleType_10);
    InstrumentLeg_10.insert(LegFlowScheduleType_10.getString());
    FIX::LegInstrRegistry LegInstrRegistry_10("STRING_1702853745");
    noLegs_0_1.set(LegInstrRegistry_10);
    InstrumentLeg_10.insert(LegInstrRegistry_10.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_10("LOCALMKTDATE_719351466");
    noLegs_0_1.set(LegInterestAccrualDate_10);
    InstrumentLeg_10.insert(LegInterestAccrualDate_10.getString());
    FIX::LegIssueDate LegIssueDate_10("LOCALMKTDATE_1721952697");
    noLegs_0_1.set(LegIssueDate_10);
    InstrumentLeg_10.insert(LegIssueDate_10.getString());
    FIX::LegIssuer LegIssuer_10("STRING_1765412622");
    noLegs_0_1.set(LegIssuer_10);
    InstrumentLeg_10.insert(LegIssuer_10.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_10("STRING_233539574");
    noLegs_0_1.set(LegLocaleOfIssue_10);
    InstrumentLeg_10.insert(LegLocaleOfIssue_10.getString());
    FIX::LegMaturityDate LegMaturityDate_10("LOCALMKTDATE_1589272449");
    noLegs_0_1.set(LegMaturityDate_10);
    InstrumentLeg_10.insert(LegMaturityDate_10.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_10("MONTHYEAR_327330975");
    noLegs_0_1.set(LegMaturityMonthYear_10);
    InstrumentLeg_10.insert(LegMaturityMonthYear_10.getString());
    FIX::LegMaturityTime LegMaturityTime_10("TZTIMEONLY_19238027");
    noLegs_0_1.set(LegMaturityTime_10);
    InstrumentLeg_10.insert(LegMaturityTime_10.getString());
    FIX::LegOptAttribute LegOptAttribute_10('1');
    noLegs_0_1.set(LegOptAttribute_10);
    InstrumentLeg_10.insert(LegOptAttribute_10.getString());
    FIX::LegOptionRatio LegOptionRatio_10;
    LegOptionRatio_10.setString("5646854");
    noLegs_0_1.set(LegOptionRatio_10);
    InstrumentLeg_10.insert(LegOptionRatio_10.getString());
    FIX::LegPool LegPool_10("STRING_550550488");
    noLegs_0_1.set(LegPool_10);
    InstrumentLeg_10.insert(LegPool_10.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_10("STRING_698922538");
    noLegs_0_1.set(LegPriceUnitOfMeasure_10);
    InstrumentLeg_10.insert(LegPriceUnitOfMeasure_10.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_10;
    LegPriceUnitOfMeasureQty_10.setString("4685906");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_10);
    InstrumentLeg_10.insert(LegPriceUnitOfMeasureQty_10.getString());
    FIX::LegProduct LegProduct_10(1773933569);
    noLegs_0_1.set(LegProduct_10);
    InstrumentLeg_10.insert(LegProduct_10.getString());
    FIX::LegPutOrCall LegPutOrCall_10(589019375);
    noLegs_0_1.set(LegPutOrCall_10);
    InstrumentLeg_10.insert(LegPutOrCall_10.getString());
    FIX::LegRatioQty LegRatioQty_10;
    LegRatioQty_10.setString("8422929");
    noLegs_0_1.set(LegRatioQty_10);
    InstrumentLeg_10.insert(LegRatioQty_10.getString());
    FIX::LegRedemptionDate LegRedemptionDate_10("LOCALMKTDATE_1640962904");
    noLegs_0_1.set(LegRedemptionDate_10);
    InstrumentLeg_10.insert(LegRedemptionDate_10.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_10("STRING_1188357856");
    noLegs_0_1.set(LegRepoCollateralSecurityType_10);
    InstrumentLeg_10.insert(LegRepoCollateralSecurityType_10.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_10;
    LegRepurchaseRate_10.setString("17.860000");
    noLegs_0_1.set(LegRepurchaseRate_10);
    InstrumentLeg_10.insert(LegRepurchaseRate_10.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_10(167525062);
    noLegs_0_1.set(LegRepurchaseTerm_10);
    InstrumentLeg_10.insert(LegRepurchaseTerm_10.getString());
    FIX::LegSecurityDesc LegSecurityDesc_10("STRING_637112155");
    noLegs_0_1.set(LegSecurityDesc_10);
    InstrumentLeg_10.insert(LegSecurityDesc_10.getString());
    FIX::LegSecurityExchange LegSecurityExchange_10("EXCHANGE_414387520");
    noLegs_0_1.set(LegSecurityExchange_10);
    InstrumentLeg_10.insert(LegSecurityExchange_10.getString());
    FIX::LegSecurityID LegSecurityID_10("STRING_530962667");
    noLegs_0_1.set(LegSecurityID_10);
    InstrumentLeg_10.insert(LegSecurityID_10.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_10("STRING_1112058540");
    noLegs_0_1.set(LegSecurityIDSource_10);
    InstrumentLeg_10.insert(LegSecurityIDSource_10.getString());
    FIX::LegSecuritySubType LegSecuritySubType_10("STRING_67074245");
    noLegs_0_1.set(LegSecuritySubType_10);
    InstrumentLeg_10.insert(LegSecuritySubType_10.getString());
    FIX::LegSecurityType LegSecurityType_10("STRING_1722506300");
    noLegs_0_1.set(LegSecurityType_10);
    InstrumentLeg_10.insert(LegSecurityType_10.getString());
    FIX::LegSide LegSide_10('1');
    noLegs_0_1.set(LegSide_10);
    InstrumentLeg_10.insert(LegSide_10.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_10("STRING_470763269");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_10);
    InstrumentLeg_10.insert(LegStateOrProvinceOfIssue_10.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_10("GBP");
    noLegs_0_1.set(LegStrikeCurrency_10);
    InstrumentLeg_10.insert(LegStrikeCurrency_10.getString());
    FIX::LegStrikePrice LegStrikePrice_10;
    LegStrikePrice_10.setString("7410257");
    noLegs_0_1.set(LegStrikePrice_10);
    InstrumentLeg_10.insert(LegStrikePrice_10.getString());
    FIX::LegSymbol LegSymbol_10("STRING_352997075");
    noLegs_0_1.set(LegSymbol_10);
    InstrumentLeg_10.insert(LegSymbol_10.getString());
    FIX::LegSymbolSfx LegSymbolSfx_10("STRING_411335377");
    noLegs_0_1.set(LegSymbolSfx_10);
    InstrumentLeg_10.insert(LegSymbolSfx_10.getString());
    FIX::LegTimeUnit LegTimeUnit_10("STRING_315494792");
    noLegs_0_1.set(LegTimeUnit_10);
    InstrumentLeg_10.insert(LegTimeUnit_10.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_10("STRING_2118409698");
    noLegs_0_1.set(LegUnitOfMeasure_10);
    InstrumentLeg_10.insert(LegUnitOfMeasure_10.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_10;
    LegUnitOfMeasureQty_10.setString("6448749");
    noLegs_0_1.set(LegUnitOfMeasureQty_10);
    InstrumentLeg_10.insert(LegUnitOfMeasureQty_10.getString());
    all_values.push_back(InstrumentLeg_10);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_16;
      FIX::LegSecurityAltID LegSecurityAltID_16("STRING_298257025");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_16);
      LegSecAltIDGrp_NoLegSecurityAltID_16.insert(LegSecurityAltID_16.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_16("STRING_664112978");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_16);
      LegSecAltIDGrp_NoLegSecurityAltID_16.insert(LegSecurityAltIDSource_16.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_16);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_6;
  FIX::AttachmentPoint AttachmentPoint_6;
  AttachmentPoint_6.setString("12.720000");
  msg.set(AttachmentPoint_6);
  Instrument_6.insert(AttachmentPoint_6.getString());
  FIX::CFICode CFICode_6("STRING_862942520");
  msg.set(CFICode_6);
  Instrument_6.insert(CFICode_6.getString());
  FIX::CPProgram CPProgram_6(1);
  msg.set(CPProgram_6);
  Instrument_6.insert(CPProgram_6.getString());
  FIX::CPRegType CPRegType_6("STRING_1713393810");
  msg.set(CPRegType_6);
  Instrument_6.insert(CPRegType_6.getString());
  FIX::CapPrice CapPrice_6;
  CapPrice_6.setString("13315331");
  msg.set(CapPrice_6);
  Instrument_6.insert(CapPrice_6.getString());
  FIX::ContractMultiplier ContractMultiplier_6;
  ContractMultiplier_6.setString("8411133");
  msg.set(ContractMultiplier_6);
  Instrument_6.insert(ContractMultiplier_6.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_6(1);
  msg.set(ContractMultiplierUnit_6);
  Instrument_6.insert(ContractMultiplierUnit_6.getString());
  FIX::ContractSettlMonth ContractSettlMonth_6("MONTHYEAR_26342458");
  msg.set(ContractSettlMonth_6);
  Instrument_6.insert(ContractSettlMonth_6.getString());
  FIX::CountryOfIssue CountryOfIssue_6("COUNTRY_334592644");
  msg.set(CountryOfIssue_6);
  Instrument_6.insert(CountryOfIssue_6.getString());
  FIX::CouponPaymentDate CouponPaymentDate_6("LOCALMKTDATE_1343287394");
  msg.set(CouponPaymentDate_6);
  Instrument_6.insert(CouponPaymentDate_6.getString());
  FIX::CouponRate CouponRate_6;
  CouponRate_6.setString("42.440000");
  msg.set(CouponRate_6);
  Instrument_6.insert(CouponRate_6.getString());
  FIX::CreditRating CreditRating_6("STRING_502117707");
  msg.set(CreditRating_6);
  Instrument_6.insert(CreditRating_6.getString());
  FIX::DatedDate DatedDate_6("LOCALMKTDATE_1980399549");
  msg.set(DatedDate_6);
  Instrument_6.insert(DatedDate_6.getString());
  FIX::DetachmentPoint DetachmentPoint_6;
  DetachmentPoint_6.setString("81.160000");
  msg.set(DetachmentPoint_6);
  Instrument_6.insert(DetachmentPoint_6.getString());
  FIX::EncodedIssuer EncodedIssuer_6("DATA_1033080374");
  msg.set(EncodedIssuer_6);
  Instrument_6.insert(EncodedIssuer_6.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_6(944974442);
  msg.set(EncodedIssuerLen_6);
  Instrument_6.insert(EncodedIssuerLen_6.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_6("DATA_272472362");
  msg.set(EncodedSecurityDesc_6);
  Instrument_6.insert(EncodedSecurityDesc_6.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_6(608103026);
  msg.set(EncodedSecurityDescLen_6);
  Instrument_6.insert(EncodedSecurityDescLen_6.getString());
  FIX::ExerciseStyle ExerciseStyle_6(2);
  msg.set(ExerciseStyle_6);
  Instrument_6.insert(ExerciseStyle_6.getString());
  FIX::Factor Factor_6;
  Factor_6.setString("7432356");
  msg.set(Factor_6);
  Instrument_6.insert(Factor_6.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_6(true);
  msg.set(FlexProductEligibilityIndicator_6);
  Instrument_6.insert(FlexProductEligibilityIndicator_6.getString());
  FIX::FlexibleIndicator FlexibleIndicator_6(false);
  msg.set(FlexibleIndicator_6);
  Instrument_6.insert(FlexibleIndicator_6.getString());
  FIX::FloorPrice FloorPrice_6;
  FloorPrice_6.setString("14842613");
  msg.set(FloorPrice_6);
  Instrument_6.insert(FloorPrice_6.getString());
  FIX::FlowScheduleType FlowScheduleType_6(4);
  msg.set(FlowScheduleType_6);
  Instrument_6.insert(FlowScheduleType_6.getString());
  FIX::InstrRegistry InstrRegistry_6("STRING_702844524");
  msg.set(InstrRegistry_6);
  Instrument_6.insert(InstrRegistry_6.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_6('1');
  msg.set(InstrmtAssignmentMethod_6);
  Instrument_6.insert(InstrmtAssignmentMethod_6.getString());
  FIX::InterestAccrualDate InterestAccrualDate_6("LOCALMKTDATE_1729653129");
  msg.set(InterestAccrualDate_6);
  Instrument_6.insert(InterestAccrualDate_6.getString());
  FIX::IssueDate IssueDate_6("LOCALMKTDATE_1347719475");
  msg.set(IssueDate_6);
  Instrument_6.insert(IssueDate_6.getString());
  FIX::Issuer Issuer_6("STRING_1557039760");
  msg.set(Issuer_6);
  Instrument_6.insert(Issuer_6.getString());
  FIX::ListMethod ListMethod_6(1);
  msg.set(ListMethod_6);
  Instrument_6.insert(ListMethod_6.getString());
  FIX::LocaleOfIssue LocaleOfIssue_6("STRING_2011832454");
  msg.set(LocaleOfIssue_6);
  Instrument_6.insert(LocaleOfIssue_6.getString());
  FIX::MaturityDate MaturityDate_6("LOCALMKTDATE_424027385");
  msg.set(MaturityDate_6);
  Instrument_6.insert(MaturityDate_6.getString());
  FIX::MaturityMonthYear MaturityMonthYear_6("MONTHYEAR_743369027");
  msg.set(MaturityMonthYear_6);
  Instrument_6.insert(MaturityMonthYear_6.getString());
  FIX::MaturityTime MaturityTime_6("TZTIMEONLY_1079012272");
  msg.set(MaturityTime_6);
  Instrument_6.insert(MaturityTime_6.getString());
  FIX::MinPriceIncrement MinPriceIncrement_6;
  MinPriceIncrement_6.setString("21374211");
  msg.set(MinPriceIncrement_6);
  Instrument_6.insert(MinPriceIncrement_6.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_6;
  MinPriceIncrementAmount_6.setString("20749022");
  msg.set(MinPriceIncrementAmount_6);
  Instrument_6.insert(MinPriceIncrementAmount_6.getString());
  FIX::NTPositionLimit NTPositionLimit_6(1920125660);
  msg.set(NTPositionLimit_6);
  Instrument_6.insert(NTPositionLimit_6.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_6;
  NotionalPercentageOutstanding_6.setString("70.850000");
  msg.set(NotionalPercentageOutstanding_6);
  Instrument_6.insert(NotionalPercentageOutstanding_6.getString());
  FIX::OptAttribute OptAttribute_6('2');
  msg.set(OptAttribute_6);
  Instrument_6.insert(OptAttribute_6.getString());
  FIX::OptPayoutAmount OptPayoutAmount_6;
  OptPayoutAmount_6.setString("1072346");
  msg.set(OptPayoutAmount_6);
  Instrument_6.insert(OptPayoutAmount_6.getString());
  FIX::OptPayoutType OptPayoutType_6(1);
  msg.set(OptPayoutType_6);
  Instrument_6.insert(OptPayoutType_6.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_6;
  OriginalNotionalPercentageOutstanding_6.setString("52.640000");
  msg.set(OriginalNotionalPercentageOutstanding_6);
  Instrument_6.insert(OriginalNotionalPercentageOutstanding_6.getString());
  FIX::Pool Pool_6("STRING_609352364");
  msg.set(Pool_6);
  Instrument_6.insert(Pool_6.getString());
  FIX::PositionLimit PositionLimit_6(1321070381);
  msg.set(PositionLimit_6);
  Instrument_6.insert(PositionLimit_6.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_6("STRING_STD");
  msg.set(PriceQuoteMethod_6);
  Instrument_6.insert(PriceQuoteMethod_6.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_6("STRING_1642432738");
  msg.set(PriceUnitOfMeasure_6);
  Instrument_6.insert(PriceUnitOfMeasure_6.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_6;
  PriceUnitOfMeasureQty_6.setString("1185611");
  msg.set(PriceUnitOfMeasureQty_6);
  Instrument_6.insert(PriceUnitOfMeasureQty_6.getString());
  FIX::Product Product_8(13);
  msg.set(Product_8);
  Instrument_6.insert(Product_8.getString());
  FIX::ProductComplex ProductComplex_6("STRING_103052116");
  msg.set(ProductComplex_6);
  Instrument_6.insert(ProductComplex_6.getString());
  FIX::PutOrCall PutOrCall_6(0);
  msg.set(PutOrCall_6);
  Instrument_6.insert(PutOrCall_6.getString());
  FIX::RedemptionDate RedemptionDate_6("LOCALMKTDATE_965877725");
  msg.set(RedemptionDate_6);
  Instrument_6.insert(RedemptionDate_6.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_6("STRING_1508782120");
  msg.set(RepoCollateralSecurityType_6);
  Instrument_6.insert(RepoCollateralSecurityType_6.getString());
  FIX::RepurchaseRate RepurchaseRate_6;
  RepurchaseRate_6.setString("55.590000");
  msg.set(RepurchaseRate_6);
  Instrument_6.insert(RepurchaseRate_6.getString());
  FIX::RepurchaseTerm RepurchaseTerm_6(302655451);
  msg.set(RepurchaseTerm_6);
  Instrument_6.insert(RepurchaseTerm_6.getString());
  FIX::RestructuringType RestructuringType_6("STRING_XR");
  msg.set(RestructuringType_6);
  Instrument_6.insert(RestructuringType_6.getString());
  FIX::SecurityDesc SecurityDesc_6("STRING_1712440084");
  msg.set(SecurityDesc_6);
  Instrument_6.insert(SecurityDesc_6.getString());
  FIX::SecurityExchange SecurityExchange_6("EXCHANGE_2102411618");
  msg.set(SecurityExchange_6);
  Instrument_6.insert(SecurityExchange_6.getString());
  FIX::SecurityGroup SecurityGroup_6("STRING_702195033");
  msg.set(SecurityGroup_6);
  Instrument_6.insert(SecurityGroup_6.getString());
  FIX::SecurityID SecurityID_6("STRING_912675911");
  msg.set(SecurityID_6);
  Instrument_6.insert(SecurityID_6.getString());
  FIX::SecurityIDSource SecurityIDSource_6("STRING_L");
  msg.set(SecurityIDSource_6);
  Instrument_6.insert(SecurityIDSource_6.getString());
  FIX::SecurityStatus SecurityStatus_6("STRING_1");
  msg.set(SecurityStatus_6);
  Instrument_6.insert(SecurityStatus_6.getString());
  FIX::SecuritySubType SecuritySubType_6("STRING_777024717");
  msg.set(SecuritySubType_6);
  Instrument_6.insert(SecuritySubType_6.getString());
  FIX::SecurityType SecurityType_8("STRING_SECPLEDGE");
  msg.set(SecurityType_8);
  Instrument_6.insert(SecurityType_8.getString());
  FIX::Seniority Seniority_6("STRING_SB");
  msg.set(Seniority_6);
  Instrument_6.insert(Seniority_6.getString());
  FIX::SettlMethod SettlMethod_6('C');
  msg.set(SettlMethod_6);
  Instrument_6.insert(SettlMethod_6.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_6("STRING_1925932663");
  msg.set(SettleOnOpenFlag_6);
  Instrument_6.insert(SettleOnOpenFlag_6.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_6("STRING_1253409128");
  msg.set(StateOrProvinceOfIssue_6);
  Instrument_6.insert(StateOrProvinceOfIssue_6.getString());
  FIX::StrikeCurrency StrikeCurrency_6("GBP");
  msg.set(StrikeCurrency_6);
  Instrument_6.insert(StrikeCurrency_6.getString());
  FIX::StrikeMultiplier StrikeMultiplier_6;
  StrikeMultiplier_6.setString("12071701");
  msg.set(StrikeMultiplier_6);
  Instrument_6.insert(StrikeMultiplier_6.getString());
  FIX::StrikePrice StrikePrice_6;
  StrikePrice_6.setString("17359136");
  msg.set(StrikePrice_6);
  Instrument_6.insert(StrikePrice_6.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_6(1);
  msg.set(StrikePriceBoundaryMethod_6);
  Instrument_6.insert(StrikePriceBoundaryMethod_6.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_6;
  StrikePriceBoundaryPrecision_6.setString("17.640000");
  msg.set(StrikePriceBoundaryPrecision_6);
  Instrument_6.insert(StrikePriceBoundaryPrecision_6.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_6(4);
  msg.set(StrikePriceDeterminationMethod_6);
  Instrument_6.insert(StrikePriceDeterminationMethod_6.getString());
  FIX::StrikeValue StrikeValue_6;
  StrikeValue_6.setString("5850573");
  msg.set(StrikeValue_6);
  Instrument_6.insert(StrikeValue_6.getString());
  FIX::Symbol Symbol_6("STRING_902111496");
  msg.set(Symbol_6);
  Instrument_6.insert(Symbol_6.getString());
  FIX::SymbolSfx SymbolSfx_6("STRING_WI");
  msg.set(SymbolSfx_6);
  Instrument_6.insert(SymbolSfx_6.getString());
  FIX::TimeUnit TimeUnit_6("STRING_Yr");
  msg.set(TimeUnit_6);
  Instrument_6.insert(TimeUnit_6.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_6(4);
  msg.set(UnderlyingPriceDeterminationMethod_6);
  Instrument_6.insert(UnderlyingPriceDeterminationMethod_6.getString());
  FIX::UnitOfMeasure UnitOfMeasure_6("STRING_Gal");
  msg.set(UnitOfMeasure_6);
  Instrument_6.insert(UnitOfMeasure_6.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_6;
  UnitOfMeasureQty_6.setString("14217049");
  msg.set(UnitOfMeasureQty_6);
  Instrument_6.insert(UnitOfMeasureQty_6.getString());
  FIX::ValuationMethod ValuationMethod_6("STRING_FUT");
  msg.set(ValuationMethod_6);
  Instrument_6.insert(ValuationMethod_6.getString());
  all_values.push_back(Instrument_6);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_13;
    FIX::ComplexEventCondition ComplexEventCondition_13(2);
    noComplexEvents_0_0.set(ComplexEventCondition_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventCondition_13.getString());
    FIX::ComplexEventPrice ComplexEventPrice_13;
    ComplexEventPrice_13.setString("2458031");
    noComplexEvents_0_0.set(ComplexEventPrice_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPrice_13.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_13(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceBoundaryMethod_13.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_13;
    ComplexEventPriceBoundaryPrecision_13.setString("68.950000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceBoundaryPrecision_13.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_13(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceTimeType_13.getString());
    FIX::ComplexEventType ComplexEventType_13(3);
    noComplexEvents_0_0.set(ComplexEventType_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventType_13.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_13;
    ComplexOptPayoutAmount_13.setString("7614491");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexOptPayoutAmount_13.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_13);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_26;
      FIX::ComplexEventEndDate ComplexEventEndDate_26(FIX::UTCTIMESTAMP(4, 28, 17, 10, 42007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventEndDate_26.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_26(FIX::UTCTIMESTAMP(3, 45, 4, 7, 22000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventStartDate_26.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_26);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_47;
        FIX::ComplexEventEndTime ComplexEventEndTime_47(FIX::UTCTIMEONLY(9, 36, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_47);
        ComplexEventTimes_NoComplexEventTimes_47.insert(ComplexEventEndTime_47.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_47(FIX::UTCTIMEONLY(20, 37, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_47);
        ComplexEventTimes_NoComplexEventTimes_47.insert(ComplexEventStartTime_47.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_47);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_27;
      FIX::ComplexEventEndDate ComplexEventEndDate_27(FIX::UTCTIMESTAMP(5, 33, 27, 7, 42016));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_27);
      ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventEndDate_27.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_27(FIX::UTCTIMESTAMP(17, 55, 0, 26, 102007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_27);
      ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventStartDate_27.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_27);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_48;
        FIX::ComplexEventEndTime ComplexEventEndTime_48(FIX::UTCTIMEONLY(22, 53, 43));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_48);
        ComplexEventTimes_NoComplexEventTimes_48.insert(ComplexEventEndTime_48.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_48(FIX::UTCTIMEONLY(11, 43, 14));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_48);
        ComplexEventTimes_NoComplexEventTimes_48.insert(ComplexEventStartTime_48.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_48);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_49;
        FIX::ComplexEventEndTime ComplexEventEndTime_49(FIX::UTCTIMEONLY(20, 43, 14));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_49);
        ComplexEventTimes_NoComplexEventTimes_49.insert(ComplexEventEndTime_49.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_49(FIX::UTCTIMEONLY(3, 43, 36));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_49);
        ComplexEventTimes_NoComplexEventTimes_49.insert(ComplexEventStartTime_49.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_49);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_50;
        FIX::ComplexEventEndTime ComplexEventEndTime_50(FIX::UTCTIMEONLY(17, 1, 31));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_50);
        ComplexEventTimes_NoComplexEventTimes_50.insert(ComplexEventEndTime_50.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_50(FIX::UTCTIMEONLY(17, 9, 44));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_50);
        ComplexEventTimes_NoComplexEventTimes_50.insert(ComplexEventStartTime_50.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_50);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_28;
      FIX::ComplexEventEndDate ComplexEventEndDate_28(FIX::UTCTIMESTAMP(20, 36, 29, 26, 82013));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_28);
      ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventEndDate_28.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_28(FIX::UTCTIMESTAMP(10, 22, 55, 12, 22000));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_28);
      ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventStartDate_28.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_28);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_51;
        FIX::ComplexEventEndTime ComplexEventEndTime_51(FIX::UTCTIMEONLY(15, 45, 40));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_51);
        ComplexEventTimes_NoComplexEventTimes_51.insert(ComplexEventEndTime_51.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_51(FIX::UTCTIMEONLY(17, 24, 26));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_51);
        ComplexEventTimes_NoComplexEventTimes_51.insert(ComplexEventStartTime_51.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_51);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_52;
        FIX::ComplexEventEndTime ComplexEventEndTime_52(FIX::UTCTIMEONLY(21, 28, 55));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_52);
        ComplexEventTimes_NoComplexEventTimes_52.insert(ComplexEventEndTime_52.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_52(FIX::UTCTIMEONLY(13, 57, 58));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_52);
        ComplexEventTimes_NoComplexEventTimes_52.insert(ComplexEventStartTime_52.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_52);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_53;
        FIX::ComplexEventEndTime ComplexEventEndTime_53(FIX::UTCTIMEONLY(5, 34, 24));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_53);
        ComplexEventTimes_NoComplexEventTimes_53.insert(ComplexEventEndTime_53.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_53(FIX::UTCTIMEONLY(22, 53, 40));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_53);
        ComplexEventTimes_NoComplexEventTimes_53.insert(ComplexEventStartTime_53.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_53);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_14;
    FIX::ComplexEventCondition ComplexEventCondition_14(1);
    noComplexEvents_0_1.set(ComplexEventCondition_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventCondition_14.getString());
    FIX::ComplexEventPrice ComplexEventPrice_14;
    ComplexEventPrice_14.setString("1469659");
    noComplexEvents_0_1.set(ComplexEventPrice_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPrice_14.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_14(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceBoundaryMethod_14.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_14;
    ComplexEventPriceBoundaryPrecision_14.setString("45.280000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceBoundaryPrecision_14.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_14(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceTimeType_14.getString());
    FIX::ComplexEventType ComplexEventType_14(5);
    noComplexEvents_0_1.set(ComplexEventType_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventType_14.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_14;
    ComplexOptPayoutAmount_14.setString("9914383");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexOptPayoutAmount_14.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_14);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_29;
      FIX::ComplexEventEndDate ComplexEventEndDate_29(FIX::UTCTIMESTAMP(12, 12, 31, 25, 52004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_29);
      ComplexEventDates_NoComplexEventDates_29.insert(ComplexEventEndDate_29.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_29(FIX::UTCTIMESTAMP(1, 18, 37, 3, 82010));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_29);
      ComplexEventDates_NoComplexEventDates_29.insert(ComplexEventStartDate_29.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_29);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_54;
        FIX::ComplexEventEndTime ComplexEventEndTime_54(FIX::UTCTIMEONLY(7, 7, 3));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_54);
        ComplexEventTimes_NoComplexEventTimes_54.insert(ComplexEventEndTime_54.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_54(FIX::UTCTIMEONLY(17, 48, 27));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_54);
        ComplexEventTimes_NoComplexEventTimes_54.insert(ComplexEventStartTime_54.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_54);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_55;
        FIX::ComplexEventEndTime ComplexEventEndTime_55(FIX::UTCTIMEONLY(20, 46, 25));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_55);
        ComplexEventTimes_NoComplexEventTimes_55.insert(ComplexEventEndTime_55.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_55(FIX::UTCTIMEONLY(20, 36, 18));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_55);
        ComplexEventTimes_NoComplexEventTimes_55.insert(ComplexEventStartTime_55.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_55);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_56;
        FIX::ComplexEventEndTime ComplexEventEndTime_56(FIX::UTCTIMEONLY(12, 30, 49));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_56);
        ComplexEventTimes_NoComplexEventTimes_56.insert(ComplexEventEndTime_56.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_56(FIX::UTCTIMEONLY(15, 39, 22));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_56);
        ComplexEventTimes_NoComplexEventTimes_56.insert(ComplexEventStartTime_56.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_56);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_30;
      FIX::ComplexEventEndDate ComplexEventEndDate_30(FIX::UTCTIMESTAMP(9, 51, 11, 12, 62014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_30);
      ComplexEventDates_NoComplexEventDates_30.insert(ComplexEventEndDate_30.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_30(FIX::UTCTIMESTAMP(13, 44, 5, 12, 62000));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_30);
      ComplexEventDates_NoComplexEventDates_30.insert(ComplexEventStartDate_30.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_30);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_57;
        FIX::ComplexEventEndTime ComplexEventEndTime_57(FIX::UTCTIMEONLY(6, 21, 24));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_57);
        ComplexEventTimes_NoComplexEventTimes_57.insert(ComplexEventEndTime_57.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_57(FIX::UTCTIMEONLY(18, 0, 46));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_57);
        ComplexEventTimes_NoComplexEventTimes_57.insert(ComplexEventStartTime_57.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_57);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_58;
        FIX::ComplexEventEndTime ComplexEventEndTime_58(FIX::UTCTIMEONLY(4, 17, 4));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_58);
        ComplexEventTimes_NoComplexEventTimes_58.insert(ComplexEventEndTime_58.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_58(FIX::UTCTIMEONLY(12, 35, 12));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_58);
        ComplexEventTimes_NoComplexEventTimes_58.insert(ComplexEventStartTime_58.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_58);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_59;
        FIX::ComplexEventEndTime ComplexEventEndTime_59(FIX::UTCTIMEONLY(8, 55, 24));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_59);
        ComplexEventTimes_NoComplexEventTimes_59.insert(ComplexEventEndTime_59.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_59(FIX::UTCTIMEONLY(1, 8, 7));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_59);
        ComplexEventTimes_NoComplexEventTimes_59.insert(ComplexEventStartTime_59.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_59);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_31;
      FIX::ComplexEventEndDate ComplexEventEndDate_31(FIX::UTCTIMESTAMP(16, 12, 58, 18, 112003));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_31);
      ComplexEventDates_NoComplexEventDates_31.insert(ComplexEventEndDate_31.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_31(FIX::UTCTIMESTAMP(17, 54, 57, 9, 52008));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_31);
      ComplexEventDates_NoComplexEventDates_31.insert(ComplexEventStartDate_31.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_31);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_60;
        FIX::ComplexEventEndTime ComplexEventEndTime_60(FIX::UTCTIMEONLY(18, 5, 4));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_60);
        ComplexEventTimes_NoComplexEventTimes_60.insert(ComplexEventEndTime_60.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_60(FIX::UTCTIMEONLY(5, 40, 0));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_60);
        ComplexEventTimes_NoComplexEventTimes_60.insert(ComplexEventStartTime_60.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_60);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_61;
        FIX::ComplexEventEndTime ComplexEventEndTime_61(FIX::UTCTIMEONLY(16, 47, 49));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_61);
        ComplexEventTimes_NoComplexEventTimes_61.insert(ComplexEventEndTime_61.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_61(FIX::UTCTIMEONLY(12, 50, 8));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_61);
        ComplexEventTimes_NoComplexEventTimes_61.insert(ComplexEventStartTime_61.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_61);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_62;
        FIX::ComplexEventEndTime ComplexEventEndTime_62(FIX::UTCTIMEONLY(10, 20, 40));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventEndTime_62.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_62(FIX::UTCTIMEONLY(11, 5, 33));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventStartTime_62.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_62);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_15;
    FIX::ComplexEventCondition ComplexEventCondition_15(1);
    noComplexEvents_0_2.set(ComplexEventCondition_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventCondition_15.getString());
    FIX::ComplexEventPrice ComplexEventPrice_15;
    ComplexEventPrice_15.setString("11769247");
    noComplexEvents_0_2.set(ComplexEventPrice_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPrice_15.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_15(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceBoundaryMethod_15.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_15;
    ComplexEventPriceBoundaryPrecision_15.setString("8.130000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceBoundaryPrecision_15.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_15(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceTimeType_15.getString());
    FIX::ComplexEventType ComplexEventType_15(3);
    noComplexEvents_0_2.set(ComplexEventType_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventType_15.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_15;
    ComplexOptPayoutAmount_15.setString("14972570");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexOptPayoutAmount_15.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_15);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_32;
      FIX::ComplexEventEndDate ComplexEventEndDate_32(FIX::UTCTIMESTAMP(18, 49, 59, 11, 62015));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_32);
      ComplexEventDates_NoComplexEventDates_32.insert(ComplexEventEndDate_32.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_32(FIX::UTCTIMESTAMP(9, 39, 58, 26, 82012));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_32);
      ComplexEventDates_NoComplexEventDates_32.insert(ComplexEventStartDate_32.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_32);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_63;
        FIX::ComplexEventEndTime ComplexEventEndTime_63(FIX::UTCTIMEONLY(11, 47, 46));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_63);
        ComplexEventTimes_NoComplexEventTimes_63.insert(ComplexEventEndTime_63.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_63(FIX::UTCTIMEONLY(10, 52, 49));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_63);
        ComplexEventTimes_NoComplexEventTimes_63.insert(ComplexEventStartTime_63.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_63);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_64;
        FIX::ComplexEventEndTime ComplexEventEndTime_64(FIX::UTCTIMEONLY(20, 12, 35));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_64);
        ComplexEventTimes_NoComplexEventTimes_64.insert(ComplexEventEndTime_64.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_64(FIX::UTCTIMEONLY(21, 17, 21));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_64);
        ComplexEventTimes_NoComplexEventTimes_64.insert(ComplexEventStartTime_64.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_64);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_33;
      FIX::ComplexEventEndDate ComplexEventEndDate_33(FIX::UTCTIMESTAMP(15, 10, 4, 27, 82013));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_33);
      ComplexEventDates_NoComplexEventDates_33.insert(ComplexEventEndDate_33.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_33(FIX::UTCTIMESTAMP(20, 26, 2, 3, 112003));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_33);
      ComplexEventDates_NoComplexEventDates_33.insert(ComplexEventStartDate_33.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_33);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_65;
        FIX::ComplexEventEndTime ComplexEventEndTime_65(FIX::UTCTIMEONLY(2, 44, 50));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_65);
        ComplexEventTimes_NoComplexEventTimes_65.insert(ComplexEventEndTime_65.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_65(FIX::UTCTIMEONLY(18, 42, 18));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_65);
        ComplexEventTimes_NoComplexEventTimes_65.insert(ComplexEventStartTime_65.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_65);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_12;
    FIX::EventDate EventDate_12("LOCALMKTDATE_302965398");
    noEvents_0_0.set(EventDate_12);
    EvntGrp_NoEvents_12.insert(EventDate_12.getString());
    FIX::EventPx EventPx_12;
    EventPx_12.setString("1474845");
    noEvents_0_0.set(EventPx_12);
    EvntGrp_NoEvents_12.insert(EventPx_12.getString());
    FIX::EventText EventText_12("STRING_1375212292");
    noEvents_0_0.set(EventText_12);
    EvntGrp_NoEvents_12.insert(EventText_12.getString());
    FIX::EventTime EventTime_12(FIX::UTCTIMESTAMP(7, 1, 8, 8, 52016));
    noEvents_0_0.set(EventTime_12);
    EvntGrp_NoEvents_12.insert(EventTime_12.getString());
    FIX::EventType EventType_12(9);
    noEvents_0_0.set(EventType_12);
    EvntGrp_NoEvents_12.insert(EventType_12.getString());
    all_values.push_back(EvntGrp_NoEvents_12);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AssignmentReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_11;
    FIX::InstrumentPartyID InstrumentPartyID_11("STRING_1789741781");
    noInstrumentParties_0_0.set(InstrumentPartyID_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyID_11.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_11('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyIDSource_11.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_11(982323655);
    noInstrumentParties_0_0.set(InstrumentPartyRole_11);
    InstrumentParties_NoInstrumentParties_11.insert(InstrumentPartyRole_11.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_11);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18;
      FIX::InstrumentPartySubID InstrumentPartySubID_18("STRING_861293522");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_18);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18.insert(InstrumentPartySubID_18.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_18(2132716318);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_18);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18.insert(InstrumentPartySubIDType_18.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19;
      FIX::InstrumentPartySubID InstrumentPartySubID_19("STRING_2011839060");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_19);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19.insert(InstrumentPartySubID_19.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_19(1092568380);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_19);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19.insert(InstrumentPartySubIDType_19.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_13;
    FIX::SecurityAltID SecurityAltID_13("STRING_2125754998");
    noSecurityAltID_0_0.set(SecurityAltID_13);
    SecAltIDGrp_NoSecurityAltID_13.insert(SecurityAltID_13.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_13("STRING_630788644");
    noSecurityAltID_0_0.set(SecurityAltIDSource_13);
    SecAltIDGrp_NoSecurityAltID_13.insert(SecurityAltIDSource_13.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_13);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_14;
    FIX::SecurityAltID SecurityAltID_14("STRING_1473813167");
    noSecurityAltID_0_1.set(SecurityAltID_14);
    SecAltIDGrp_NoSecurityAltID_14.insert(SecurityAltID_14.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_14("STRING_226155694");
    noSecurityAltID_0_1.set(SecurityAltIDSource_14);
    SecAltIDGrp_NoSecurityAltID_14.insert(SecurityAltIDSource_14.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_14);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_15;
    FIX::SecurityAltID SecurityAltID_15("STRING_1269043854");
    noSecurityAltID_0_2.set(SecurityAltID_15);
    SecAltIDGrp_NoSecurityAltID_15.insert(SecurityAltID_15.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_15("STRING_1718391676");
    noSecurityAltID_0_2.set(SecurityAltIDSource_15);
    SecAltIDGrp_NoSecurityAltID_15.insert(SecurityAltIDSource_15.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_15);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_12;
  FIX::SecurityXML SecurityXML_13("XMLDATA_1453642937");
  msg.set(SecurityXML_13);
  FIX::SecurityXMLLen SecurityXMLLen_6(1151191769);
  msg.set(SecurityXMLLen_6);
  FIX::SecurityXMLSchema SecurityXMLSchema_6("STRING_2069324315");
  msg.set(SecurityXMLSchema_6);
  SecurityXML_12.insert(SecurityXMLSchema_6.getString());
  all_values.push_back(SecurityXML_12);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_21;
    FIX::PartyID PartyID_21("STRING_1454157167");
    noPartyIDs_0_0.set(PartyID_21);
    Parties_NoPartyIDs_21.insert(PartyID_21.getString());
    FIX::PartyIDSource PartyIDSource_21('3');
    noPartyIDs_0_0.set(PartyIDSource_21);
    Parties_NoPartyIDs_21.insert(PartyIDSource_21.getString());
    FIX::PartyRole PartyRole_21(31);
    noPartyIDs_0_0.set(PartyRole_21);
    Parties_NoPartyIDs_21.insert(PartyRole_21.getString());
    all_values.push_back(Parties_NoPartyIDs_21);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_46;
      FIX::PartySubID PartySubID_46("STRING_841041261");
      noPartySubIDs_0_1_0.set(PartySubID_46);
      PtysSubGrp_NoPartySubIDs_46.insert(PartySubID_46.getString());
      FIX::PartySubIDType PartySubIDType_46(1);
      noPartySubIDs_0_1_0.set(PartySubIDType_46);
      PtysSubGrp_NoPartySubIDs_46.insert(PartySubIDType_46.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_46);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_47;
      FIX::PartySubID PartySubID_47("STRING_1667097214");
      noPartySubIDs_0_1_1.set(PartySubID_47);
      PtysSubGrp_NoPartySubIDs_47.insert(PartySubID_47.getString());
      FIX::PartySubIDType PartySubIDType_47(25);
      noPartySubIDs_0_1_1.set(PartySubIDType_47);
      PtysSubGrp_NoPartySubIDs_47.insert(PartySubIDType_47.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_47);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_5;
    FIX::PosAmt PosAmt_5;
    PosAmt_5.setString("6623441");
    noPosAmt_0_0.set(PosAmt_5);
    PositionAmountData_NoPosAmt_5.insert(PosAmt_5.getString());
    FIX::PosAmtType PosAmtType_5("STRING_ICPN");
    noPosAmt_0_0.set(PosAmtType_5);
    PositionAmountData_NoPosAmt_5.insert(PosAmtType_5.getString());
    FIX::PositionCurrency PositionCurrency_5("STRING_1548357374");
    noPosAmt_0_0.set(PositionCurrency_5);
    PositionAmountData_NoPosAmt_5.insert(PositionCurrency_5.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_5);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_6;
    FIX::PosAmt PosAmt_6;
    PosAmt_6.setString("3046023");
    noPosAmt_0_1.set(PosAmt_6);
    PositionAmountData_NoPosAmt_6.insert(PosAmt_6.getString());
    FIX::PosAmtType PosAmtType_6("STRING_CASH");
    noPosAmt_0_1.set(PosAmtType_6);
    PositionAmountData_NoPosAmt_6.insert(PosAmtType_6.getString());
    FIX::PositionCurrency PositionCurrency_6("STRING_383197382");
    noPosAmt_0_1.set(PositionCurrency_6);
    PositionAmountData_NoPosAmt_6.insert(PositionCurrency_6.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_6);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_7;
    FIX::PosAmt PosAmt_7;
    PosAmt_7.setString("2521980");
    noPosAmt_0_2.set(PosAmt_7);
    PositionAmountData_NoPosAmt_7.insert(PosAmt_7.getString());
    FIX::PosAmtType PosAmtType_7("STRING_FMTM");
    noPosAmt_0_2.set(PosAmtType_7);
    PositionAmountData_NoPosAmt_7.insert(PosAmtType_7.getString());
    FIX::PositionCurrency PositionCurrency_7("STRING_368430052");
    noPosAmt_0_2.set(PositionCurrency_7);
    PositionAmountData_NoPosAmt_7.insert(PositionCurrency_7.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_7);

    msg.addGroup(noPosAmt_0_2);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_1;
    FIX::LongQty LongQty_1;
    LongQty_1.setString("3203811");
    noPositions_0_0.set(LongQty_1);
    PositionQty_NoPositions_1.insert(LongQty_1.getString());
    FIX::PosQtyStatus PosQtyStatus_1(0);
    noPositions_0_0.set(PosQtyStatus_1);
    PositionQty_NoPositions_1.insert(PosQtyStatus_1.getString());
    FIX::PosType PosType_1("STRING_XM");
    noPositions_0_0.set(PosType_1);
    PositionQty_NoPositions_1.insert(PosType_1.getString());
    FIX::QuantityDate QuantityDate_1("LOCALMKTDATE_951169750");
    noPositions_0_0.set(QuantityDate_1);
    PositionQty_NoPositions_1.insert(QuantityDate_1.getString());
    FIX::ShortQty ShortQty_1;
    ShortQty_1.setString("12744831");
    noPositions_0_0.set(ShortQty_1);
    PositionQty_NoPositions_1.insert(ShortQty_1.getString());
    all_values.push_back(PositionQty_NoPositions_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_32;
      FIX::NestedPartyID NestedPartyID_32("STRING_72729957");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyID_32.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_32('8');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyIDSource_32.getString());
      FIX::NestedPartyRole NestedPartyRole_32(1774623433);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyRole_32.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_32);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_58;
        FIX::NestedPartySubID NestedPartySubID_58("STRING_767231807");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_58);
        NstdPtysSubGrp_NoNestedPartySubIDs_58.insert(NestedPartySubID_58.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_58(996410258);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_58);
        NstdPtysSubGrp_NoNestedPartySubIDs_58.insert(NestedPartySubIDType_58.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_58);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_59;
        FIX::NestedPartySubID NestedPartySubID_59("STRING_530595245");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_59);
        NstdPtysSubGrp_NoNestedPartySubIDs_59.insert(NestedPartySubID_59.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_59(836556997);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_59);
        NstdPtysSubGrp_NoNestedPartySubIDs_59.insert(NestedPartySubIDType_59.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_59);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_60;
        FIX::NestedPartySubID NestedPartySubID_60("STRING_1593409376");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_60);
        NstdPtysSubGrp_NoNestedPartySubIDs_60.insert(NestedPartySubID_60.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_60(344117732);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_60);
        NstdPtysSubGrp_NoNestedPartySubIDs_60.insert(NestedPartySubIDType_60.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_60);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_33;
      FIX::NestedPartyID NestedPartyID_33("STRING_1677598258");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_33);
      NestedParties_NoNestedPartyIDs_33.insert(NestedPartyID_33.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_33('8');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_33);
      NestedParties_NoNestedPartyIDs_33.insert(NestedPartyIDSource_33.getString());
      FIX::NestedPartyRole NestedPartyRole_33(2011214946);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_33);
      NestedParties_NoNestedPartyIDs_33.insert(NestedPartyRole_33.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_33);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_61;
        FIX::NestedPartySubID NestedPartySubID_61("STRING_1514745509");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_61);
        NstdPtysSubGrp_NoNestedPartySubIDs_61.insert(NestedPartySubID_61.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_61(526075475);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_61);
        NstdPtysSubGrp_NoNestedPartySubIDs_61.insert(NestedPartySubIDType_61.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_61);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_62;
        FIX::NestedPartySubID NestedPartySubID_62("STRING_1627033592");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_62);
        NstdPtysSubGrp_NoNestedPartySubIDs_62.insert(NestedPartySubID_62.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_62(915619236);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_62);
        NstdPtysSubGrp_NoNestedPartySubIDs_62.insert(NestedPartySubIDType_62.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_62);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_34;
      FIX::NestedPartyID NestedPartyID_34("STRING_830677784");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_34);
      NestedParties_NoNestedPartyIDs_34.insert(NestedPartyID_34.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_34('2');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_34);
      NestedParties_NoNestedPartyIDs_34.insert(NestedPartyIDSource_34.getString());
      FIX::NestedPartyRole NestedPartyRole_34(1298816618);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_34);
      NestedParties_NoNestedPartyIDs_34.insert(NestedPartyRole_34.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_34);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_63;
        FIX::NestedPartySubID NestedPartySubID_63("STRING_1368849171");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_63);
        NstdPtysSubGrp_NoNestedPartySubIDs_63.insert(NestedPartySubID_63.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_63(1667246670);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_63);
        NstdPtysSubGrp_NoNestedPartySubIDs_63.insert(NestedPartySubIDType_63.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_63);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_64;
        FIX::NestedPartySubID NestedPartySubID_64("STRING_1199429275");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_64);
        NstdPtysSubGrp_NoNestedPartySubIDs_64.insert(NestedPartySubID_64.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_64(1689230277);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_64);
        NstdPtysSubGrp_NoNestedPartySubIDs_64.insert(NestedPartySubIDType_64.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_64);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_65;
        FIX::NestedPartySubID NestedPartySubID_65("STRING_1467916615");
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubID_65);
        NstdPtysSubGrp_NoNestedPartySubIDs_65.insert(NestedPartySubID_65.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_65(1294254076);
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubIDType_65);
        NstdPtysSubGrp_NoNestedPartySubIDs_65.insert(NestedPartySubIDType_65.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_65);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_2;
    FIX::LongQty LongQty_2;
    LongQty_2.setString("4929163");
    noPositions_0_1.set(LongQty_2);
    PositionQty_NoPositions_2.insert(LongQty_2.getString());
    FIX::PosQtyStatus PosQtyStatus_2(2);
    noPositions_0_1.set(PosQtyStatus_2);
    PositionQty_NoPositions_2.insert(PosQtyStatus_2.getString());
    FIX::PosType PosType_2("STRING_XM");
    noPositions_0_1.set(PosType_2);
    PositionQty_NoPositions_2.insert(PosType_2.getString());
    FIX::QuantityDate QuantityDate_2("LOCALMKTDATE_565646337");
    noPositions_0_1.set(QuantityDate_2);
    PositionQty_NoPositions_2.insert(QuantityDate_2.getString());
    FIX::ShortQty ShortQty_2;
    ShortQty_2.setString("14403072");
    noPositions_0_1.set(ShortQty_2);
    PositionQty_NoPositions_2.insert(ShortQty_2.getString());
    all_values.push_back(PositionQty_NoPositions_2);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_35;
      FIX::NestedPartyID NestedPartyID_35("STRING_1789568063");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_35);
      NestedParties_NoNestedPartyIDs_35.insert(NestedPartyID_35.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_35('6');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_35);
      NestedParties_NoNestedPartyIDs_35.insert(NestedPartyIDSource_35.getString());
      FIX::NestedPartyRole NestedPartyRole_35(91300968);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_35);
      NestedParties_NoNestedPartyIDs_35.insert(NestedPartyRole_35.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_35);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_66;
        FIX::NestedPartySubID NestedPartySubID_66("STRING_896612376");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_66);
        NstdPtysSubGrp_NoNestedPartySubIDs_66.insert(NestedPartySubID_66.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_66(1684710344);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_66);
        NstdPtysSubGrp_NoNestedPartySubIDs_66.insert(NestedPartySubIDType_66.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_66);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_67;
        FIX::NestedPartySubID NestedPartySubID_67("STRING_516797392");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_67);
        NstdPtysSubGrp_NoNestedPartySubIDs_67.insert(NestedPartySubID_67.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_67(426726986);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_67);
        NstdPtysSubGrp_NoNestedPartySubIDs_67.insert(NestedPartySubIDType_67.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_67);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_68;
        FIX::NestedPartySubID NestedPartySubID_68("STRING_1764722030");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_68);
        NstdPtysSubGrp_NoNestedPartySubIDs_68.insert(NestedPartySubID_68.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_68(380528691);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_68);
        NstdPtysSubGrp_NoNestedPartySubIDs_68.insert(NestedPartySubIDType_68.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_68);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_36;
      FIX::NestedPartyID NestedPartyID_36("STRING_146992273");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_36);
      NestedParties_NoNestedPartyIDs_36.insert(NestedPartyID_36.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_36('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_36);
      NestedParties_NoNestedPartyIDs_36.insert(NestedPartyIDSource_36.getString());
      FIX::NestedPartyRole NestedPartyRole_36(906604166);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_36);
      NestedParties_NoNestedPartyIDs_36.insert(NestedPartyRole_36.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_36);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_69;
        FIX::NestedPartySubID NestedPartySubID_69("STRING_2047603128");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_69);
        NstdPtysSubGrp_NoNestedPartySubIDs_69.insert(NestedPartySubID_69.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_69(1737281950);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_69);
        NstdPtysSubGrp_NoNestedPartySubIDs_69.insert(NestedPartySubIDType_69.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_69);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_37;
      FIX::NestedPartyID NestedPartyID_37("STRING_1767578661");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_37);
      NestedParties_NoNestedPartyIDs_37.insert(NestedPartyID_37.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_37('1');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_37);
      NestedParties_NoNestedPartyIDs_37.insert(NestedPartyIDSource_37.getString());
      FIX::NestedPartyRole NestedPartyRole_37(672674126);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_37);
      NestedParties_NoNestedPartyIDs_37.insert(NestedPartyRole_37.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_37);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_70;
        FIX::NestedPartySubID NestedPartySubID_70("STRING_718699120");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_70);
        NstdPtysSubGrp_NoNestedPartySubIDs_70.insert(NestedPartySubID_70.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_70(1872103401);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_70);
        NstdPtysSubGrp_NoNestedPartySubIDs_70.insert(NestedPartySubIDType_70.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_70);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_71;
        FIX::NestedPartySubID NestedPartySubID_71("STRING_530690814");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_71);
        NstdPtysSubGrp_NoNestedPartySubIDs_71.insert(NestedPartySubID_71.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_71(39132087);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_71);
        NstdPtysSubGrp_NoNestedPartySubIDs_71.insert(NestedPartySubIDType_71.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_71);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noPositions_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_5;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_5("DATA_1023607194");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingIssuer_5.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_5(634048166);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingIssuerLen_5.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_5("DATA_486624754");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingSecurityDesc_5.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_5(1589253531);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingSecurityDescLen_5.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_5;
    UnderlyingAdjustedQuantity_5.setString("20743553");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_5);
    UnderlyingInstrument_5.insert(UnderlyingAdjustedQuantity_5.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_5;
    UnderlyingAllocationPercent_5.setString("91.110000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_5);
    UnderlyingInstrument_5.insert(UnderlyingAllocationPercent_5.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_5;
    UnderlyingAttachmentPoint_5.setString("79.460000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_5);
    UnderlyingInstrument_5.insert(UnderlyingAttachmentPoint_5.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_5("STRING_2134410764");
    noUnderlyings_0_0.set(UnderlyingCFICode_5);
    UnderlyingInstrument_5.insert(UnderlyingCFICode_5.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_5("STRING_1820300079");
    noUnderlyings_0_0.set(UnderlyingCPProgram_5);
    UnderlyingInstrument_5.insert(UnderlyingCPProgram_5.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_5("STRING_1404017606");
    noUnderlyings_0_0.set(UnderlyingCPRegType_5);
    UnderlyingInstrument_5.insert(UnderlyingCPRegType_5.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_5;
    UnderlyingCapValue_5.setString("8835394");
    noUnderlyings_0_0.set(UnderlyingCapValue_5);
    UnderlyingInstrument_5.insert(UnderlyingCapValue_5.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_5;
    UnderlyingCashAmount_5.setString("13575267");
    noUnderlyings_0_0.set(UnderlyingCashAmount_5);
    UnderlyingInstrument_5.insert(UnderlyingCashAmount_5.getString());
    FIX::UnderlyingCashType UnderlyingCashType_5("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_5);
    UnderlyingInstrument_5.insert(UnderlyingCashType_5.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_5;
    UnderlyingContractMultiplier_5.setString("13102664");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_5);
    UnderlyingInstrument_5.insert(UnderlyingContractMultiplier_5.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_5(974765158);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_5);
    UnderlyingInstrument_5.insert(UnderlyingContractMultiplierUnit_5.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_5("COUNTRY_153860042");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingCountryOfIssue_5.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_5("LOCALMKTDATE_1457258751");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_5);
    UnderlyingInstrument_5.insert(UnderlyingCouponPaymentDate_5.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_5;
    UnderlyingCouponRate_5.setString("90.500000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_5);
    UnderlyingInstrument_5.insert(UnderlyingCouponRate_5.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_5("STRING_1060464208");
    noUnderlyings_0_0.set(UnderlyingCreditRating_5);
    UnderlyingInstrument_5.insert(UnderlyingCreditRating_5.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_5("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_5);
    UnderlyingInstrument_5.insert(UnderlyingCurrency_5.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_5;
    UnderlyingCurrentValue_5.setString("6502625");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_5);
    UnderlyingInstrument_5.insert(UnderlyingCurrentValue_5.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_5;
    UnderlyingDetachmentPoint_5.setString("59.820000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_5);
    UnderlyingInstrument_5.insert(UnderlyingDetachmentPoint_5.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_5;
    UnderlyingDirtyPrice_5.setString("10583209");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_5);
    UnderlyingInstrument_5.insert(UnderlyingDirtyPrice_5.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_5;
    UnderlyingEndPrice_5.setString("13229366");
    noUnderlyings_0_0.set(UnderlyingEndPrice_5);
    UnderlyingInstrument_5.insert(UnderlyingEndPrice_5.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_5;
    UnderlyingEndValue_5.setString("16928401");
    noUnderlyings_0_0.set(UnderlyingEndValue_5);
    UnderlyingInstrument_5.insert(UnderlyingEndValue_5.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_5(1777020100);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_5);
    UnderlyingInstrument_5.insert(UnderlyingExerciseStyle_5.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_5;
    UnderlyingFXRate_5.setString("10475563");
    noUnderlyings_0_0.set(UnderlyingFXRate_5);
    UnderlyingInstrument_5.insert(UnderlyingFXRate_5.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_5('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_5);
    UnderlyingInstrument_5.insert(UnderlyingFXRateCalc_5.getString());
    FIX::UnderlyingFactor UnderlyingFactor_5;
    UnderlyingFactor_5.setString("18161521");
    noUnderlyings_0_0.set(UnderlyingFactor_5);
    UnderlyingInstrument_5.insert(UnderlyingFactor_5.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_5(2066430219);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_5);
    UnderlyingInstrument_5.insert(UnderlyingFlowScheduleType_5.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_5("STRING_1099654526");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_5);
    UnderlyingInstrument_5.insert(UnderlyingInstrRegistry_5.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_5("LOCALMKTDATE_302716705");
    noUnderlyings_0_0.set(UnderlyingIssueDate_5);
    UnderlyingInstrument_5.insert(UnderlyingIssueDate_5.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_5("STRING_405571325");
    noUnderlyings_0_0.set(UnderlyingIssuer_5);
    UnderlyingInstrument_5.insert(UnderlyingIssuer_5.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_5("STRING_541424409");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingLocaleOfIssue_5.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_5("LOCALMKTDATE_229588442");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityDate_5.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_5("MONTHYEAR_2134570436");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityMonthYear_5.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_5("TZTIMEONLY_1772762355");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityTime_5.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_5;
    UnderlyingNotionalPercentageOutstanding_5.setString("55.590000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_5);
    UnderlyingInstrument_5.insert(UnderlyingNotionalPercentageOutstanding_5.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_5('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_5);
    UnderlyingInstrument_5.insert(UnderlyingOptAttribute_5.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_5;
    UnderlyingOriginalNotionalPercentageOutstanding_5.setString("63.140000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_5);
    UnderlyingInstrument_5.insert(UnderlyingOriginalNotionalPercentageOutstanding_5.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_5("STRING_1100055051");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_5);
    UnderlyingInstrument_5.insert(UnderlyingPriceUnitOfMeasure_5.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_5;
    UnderlyingPriceUnitOfMeasureQty_5.setString("10174299");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_5);
    UnderlyingInstrument_5.insert(UnderlyingPriceUnitOfMeasureQty_5.getString());
    FIX::UnderlyingProduct UnderlyingProduct_5(802627665);
    noUnderlyings_0_0.set(UnderlyingProduct_5);
    UnderlyingInstrument_5.insert(UnderlyingProduct_5.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_5(262837882);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_5);
    UnderlyingInstrument_5.insert(UnderlyingPutOrCall_5.getString());
    FIX::UnderlyingPx UnderlyingPx_5;
    UnderlyingPx_5.setString("19921951");
    noUnderlyings_0_0.set(UnderlyingPx_5);
    UnderlyingInstrument_5.insert(UnderlyingPx_5.getString());
    FIX::UnderlyingQty UnderlyingQty_5;
    UnderlyingQty_5.setString("9564877");
    noUnderlyings_0_0.set(UnderlyingQty_5);
    UnderlyingInstrument_5.insert(UnderlyingQty_5.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_5("LOCALMKTDATE_1720096633");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_5);
    UnderlyingInstrument_5.insert(UnderlyingRedemptionDate_5.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_5("STRING_1951460555");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_5);
    UnderlyingInstrument_5.insert(UnderlyingRepoCollateralSecurityType_5.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_5;
    UnderlyingRepurchaseRate_5.setString("19.150000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_5);
    UnderlyingInstrument_5.insert(UnderlyingRepurchaseRate_5.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_5(656413954);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_5);
    UnderlyingInstrument_5.insert(UnderlyingRepurchaseTerm_5.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_5("STRING_1810845437");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_5);
    UnderlyingInstrument_5.insert(UnderlyingRestructuringType_5.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_5("STRING_519730777");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityDesc_5.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_5("EXCHANGE_1360309936");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityExchange_5.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_5("STRING_721682769");
    noUnderlyings_0_0.set(UnderlyingSecurityID_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityID_5.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_5("STRING_1842667414");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityIDSource_5.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_5("STRING_905666454");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_5);
    UnderlyingInstrument_5.insert(UnderlyingSecuritySubType_5.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_5("STRING_351219221");
    noUnderlyings_0_0.set(UnderlyingSecurityType_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityType_5.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_5("STRING_742740155");
    noUnderlyings_0_0.set(UnderlyingSeniority_5);
    UnderlyingInstrument_5.insert(UnderlyingSeniority_5.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_5("STRING_981713787");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_5);
    UnderlyingInstrument_5.insert(UnderlyingSettlMethod_5.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_5(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_5);
    UnderlyingInstrument_5.insert(UnderlyingSettlementType_5.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_5;
    UnderlyingStartValue_5.setString("6616867");
    noUnderlyings_0_0.set(UnderlyingStartValue_5);
    UnderlyingInstrument_5.insert(UnderlyingStartValue_5.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_5("STRING_2081368313");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingStateOrProvinceOfIssue_5.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_5("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_5);
    UnderlyingInstrument_5.insert(UnderlyingStrikeCurrency_5.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_5;
    UnderlyingStrikePrice_5.setString("4753090");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_5);
    UnderlyingInstrument_5.insert(UnderlyingStrikePrice_5.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_5("STRING_552192908");
    noUnderlyings_0_0.set(UnderlyingSymbol_5);
    UnderlyingInstrument_5.insert(UnderlyingSymbol_5.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_5("STRING_1054344840");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_5);
    UnderlyingInstrument_5.insert(UnderlyingSymbolSfx_5.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_5("STRING_100587782");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_5);
    UnderlyingInstrument_5.insert(UnderlyingTimeUnit_5.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_5("STRING_768708467");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_5);
    UnderlyingInstrument_5.insert(UnderlyingUnitOfMeasure_5.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_5;
    UnderlyingUnitOfMeasureQty_5.setString("7142480");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_5);
    UnderlyingInstrument_5.insert(UnderlyingUnitOfMeasureQty_5.getString());
    all_values.push_back(UnderlyingInstrument_5);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_9;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_9("STRING_1868763518");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_9);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_9.insert(UnderlyingSecurityAltID_9.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_9("STRING_1731678055");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_9);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_9.insert(UnderlyingSecurityAltIDSource_9.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_7;
      FIX::UnderlyingStipType UnderlyingStipType_7("STRING_2131601400");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_7);
      UnderlyingStipulations_NoUnderlyingStips_7.insert(UnderlyingStipType_7.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_7("STRING_1576389561");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_7);
      UnderlyingStipulations_NoUnderlyingStips_7.insert(UnderlyingStipValue_7.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_7);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_10;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_10("STRING_1704214386");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyID_10.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_10('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyIDSource_10.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_10(610984087);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_10);
      UndlyInstrumentParties_NoUndlyInstrumentParties_10.insert(UnderlyingInstrumentPartyRole_10.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_10);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_18("STRING_1043728258");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_18);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18.insert(UnderlyingInstrumentPartySubID_18.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_18(1130714865);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_18);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18.insert(UnderlyingInstrumentPartySubIDType_18.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_19("STRING_1573454628");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_19);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19.insert(UnderlyingInstrumentPartySubID_19.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_19(1765411027);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_19);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19.insert(UnderlyingInstrumentPartySubIDType_19.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_20("STRING_825898631");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_20);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20.insert(UnderlyingInstrumentPartySubID_20.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_20(331637434);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_20);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20.insert(UnderlyingInstrumentPartySubIDType_20.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_6;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_6("DATA_2116630249");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingIssuer_6.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_6(1568638786);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingIssuerLen_6.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_6("DATA_1313351221");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingSecurityDesc_6.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_6(2136518009);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingSecurityDescLen_6.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_6;
    UnderlyingAdjustedQuantity_6.setString("828418");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_6);
    UnderlyingInstrument_6.insert(UnderlyingAdjustedQuantity_6.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_6;
    UnderlyingAllocationPercent_6.setString("58.870000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_6);
    UnderlyingInstrument_6.insert(UnderlyingAllocationPercent_6.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_6;
    UnderlyingAttachmentPoint_6.setString("88.270000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_6);
    UnderlyingInstrument_6.insert(UnderlyingAttachmentPoint_6.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_6("STRING_1150099916");
    noUnderlyings_0_1.set(UnderlyingCFICode_6);
    UnderlyingInstrument_6.insert(UnderlyingCFICode_6.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_6("STRING_1722544962");
    noUnderlyings_0_1.set(UnderlyingCPProgram_6);
    UnderlyingInstrument_6.insert(UnderlyingCPProgram_6.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_6("STRING_863831735");
    noUnderlyings_0_1.set(UnderlyingCPRegType_6);
    UnderlyingInstrument_6.insert(UnderlyingCPRegType_6.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_6;
    UnderlyingCapValue_6.setString("569611");
    noUnderlyings_0_1.set(UnderlyingCapValue_6);
    UnderlyingInstrument_6.insert(UnderlyingCapValue_6.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_6;
    UnderlyingCashAmount_6.setString("18231327");
    noUnderlyings_0_1.set(UnderlyingCashAmount_6);
    UnderlyingInstrument_6.insert(UnderlyingCashAmount_6.getString());
    FIX::UnderlyingCashType UnderlyingCashType_6("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_6);
    UnderlyingInstrument_6.insert(UnderlyingCashType_6.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_6;
    UnderlyingContractMultiplier_6.setString("7712091");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_6);
    UnderlyingInstrument_6.insert(UnderlyingContractMultiplier_6.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_6(805533193);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_6);
    UnderlyingInstrument_6.insert(UnderlyingContractMultiplierUnit_6.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_6("COUNTRY_1353820072");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingCountryOfIssue_6.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_6("LOCALMKTDATE_355403576");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_6);
    UnderlyingInstrument_6.insert(UnderlyingCouponPaymentDate_6.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_6;
    UnderlyingCouponRate_6.setString("13.060000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_6);
    UnderlyingInstrument_6.insert(UnderlyingCouponRate_6.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_6("STRING_1337937825");
    noUnderlyings_0_1.set(UnderlyingCreditRating_6);
    UnderlyingInstrument_6.insert(UnderlyingCreditRating_6.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_6("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_6);
    UnderlyingInstrument_6.insert(UnderlyingCurrency_6.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_6;
    UnderlyingCurrentValue_6.setString("8946685");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_6);
    UnderlyingInstrument_6.insert(UnderlyingCurrentValue_6.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_6;
    UnderlyingDetachmentPoint_6.setString("59.570000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_6);
    UnderlyingInstrument_6.insert(UnderlyingDetachmentPoint_6.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_6;
    UnderlyingDirtyPrice_6.setString("19430612");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_6);
    UnderlyingInstrument_6.insert(UnderlyingDirtyPrice_6.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_6;
    UnderlyingEndPrice_6.setString("11078132");
    noUnderlyings_0_1.set(UnderlyingEndPrice_6);
    UnderlyingInstrument_6.insert(UnderlyingEndPrice_6.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_6;
    UnderlyingEndValue_6.setString("609205");
    noUnderlyings_0_1.set(UnderlyingEndValue_6);
    UnderlyingInstrument_6.insert(UnderlyingEndValue_6.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_6(926292431);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_6);
    UnderlyingInstrument_6.insert(UnderlyingExerciseStyle_6.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_6;
    UnderlyingFXRate_6.setString("5337842");
    noUnderlyings_0_1.set(UnderlyingFXRate_6);
    UnderlyingInstrument_6.insert(UnderlyingFXRate_6.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_6('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_6);
    UnderlyingInstrument_6.insert(UnderlyingFXRateCalc_6.getString());
    FIX::UnderlyingFactor UnderlyingFactor_6;
    UnderlyingFactor_6.setString("17521910");
    noUnderlyings_0_1.set(UnderlyingFactor_6);
    UnderlyingInstrument_6.insert(UnderlyingFactor_6.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_6(865421669);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_6);
    UnderlyingInstrument_6.insert(UnderlyingFlowScheduleType_6.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_6("STRING_1795478196");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_6);
    UnderlyingInstrument_6.insert(UnderlyingInstrRegistry_6.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_6("LOCALMKTDATE_1173346201");
    noUnderlyings_0_1.set(UnderlyingIssueDate_6);
    UnderlyingInstrument_6.insert(UnderlyingIssueDate_6.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_6("STRING_31289243");
    noUnderlyings_0_1.set(UnderlyingIssuer_6);
    UnderlyingInstrument_6.insert(UnderlyingIssuer_6.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_6("STRING_1784512557");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingLocaleOfIssue_6.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_6("LOCALMKTDATE_1256188066");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityDate_6.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_6("MONTHYEAR_1278525130");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityMonthYear_6.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_6("TZTIMEONLY_2096151384");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityTime_6.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_6;
    UnderlyingNotionalPercentageOutstanding_6.setString("43.340000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_6);
    UnderlyingInstrument_6.insert(UnderlyingNotionalPercentageOutstanding_6.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_6('8');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_6);
    UnderlyingInstrument_6.insert(UnderlyingOptAttribute_6.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_6;
    UnderlyingOriginalNotionalPercentageOutstanding_6.setString("94.710000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_6);
    UnderlyingInstrument_6.insert(UnderlyingOriginalNotionalPercentageOutstanding_6.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_6("STRING_315765443");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_6);
    UnderlyingInstrument_6.insert(UnderlyingPriceUnitOfMeasure_6.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_6;
    UnderlyingPriceUnitOfMeasureQty_6.setString("5292355");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_6);
    UnderlyingInstrument_6.insert(UnderlyingPriceUnitOfMeasureQty_6.getString());
    FIX::UnderlyingProduct UnderlyingProduct_6(297556025);
    noUnderlyings_0_1.set(UnderlyingProduct_6);
    UnderlyingInstrument_6.insert(UnderlyingProduct_6.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_6(1086974611);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_6);
    UnderlyingInstrument_6.insert(UnderlyingPutOrCall_6.getString());
    FIX::UnderlyingPx UnderlyingPx_6;
    UnderlyingPx_6.setString("13347687");
    noUnderlyings_0_1.set(UnderlyingPx_6);
    UnderlyingInstrument_6.insert(UnderlyingPx_6.getString());
    FIX::UnderlyingQty UnderlyingQty_6;
    UnderlyingQty_6.setString("16513760");
    noUnderlyings_0_1.set(UnderlyingQty_6);
    UnderlyingInstrument_6.insert(UnderlyingQty_6.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_6("LOCALMKTDATE_1442378187");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_6);
    UnderlyingInstrument_6.insert(UnderlyingRedemptionDate_6.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_6("STRING_1925330040");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_6);
    UnderlyingInstrument_6.insert(UnderlyingRepoCollateralSecurityType_6.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_6;
    UnderlyingRepurchaseRate_6.setString("2.750000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_6);
    UnderlyingInstrument_6.insert(UnderlyingRepurchaseRate_6.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_6(1226687676);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_6);
    UnderlyingInstrument_6.insert(UnderlyingRepurchaseTerm_6.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_6("STRING_1109923519");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_6);
    UnderlyingInstrument_6.insert(UnderlyingRestructuringType_6.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_6("STRING_1736498838");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityDesc_6.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_6("EXCHANGE_243879986");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityExchange_6.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_6("STRING_905501085");
    noUnderlyings_0_1.set(UnderlyingSecurityID_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityID_6.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_6("STRING_696828445");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityIDSource_6.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_6("STRING_304800553");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_6);
    UnderlyingInstrument_6.insert(UnderlyingSecuritySubType_6.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_6("STRING_1831793517");
    noUnderlyings_0_1.set(UnderlyingSecurityType_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityType_6.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_6("STRING_1230612680");
    noUnderlyings_0_1.set(UnderlyingSeniority_6);
    UnderlyingInstrument_6.insert(UnderlyingSeniority_6.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_6("STRING_2131132148");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_6);
    UnderlyingInstrument_6.insert(UnderlyingSettlMethod_6.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_6(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_6);
    UnderlyingInstrument_6.insert(UnderlyingSettlementType_6.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_6;
    UnderlyingStartValue_6.setString("20960343");
    noUnderlyings_0_1.set(UnderlyingStartValue_6);
    UnderlyingInstrument_6.insert(UnderlyingStartValue_6.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_6("STRING_1779126696");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingStateOrProvinceOfIssue_6.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_6("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_6);
    UnderlyingInstrument_6.insert(UnderlyingStrikeCurrency_6.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_6;
    UnderlyingStrikePrice_6.setString("14161556");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_6);
    UnderlyingInstrument_6.insert(UnderlyingStrikePrice_6.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_6("STRING_1718551550");
    noUnderlyings_0_1.set(UnderlyingSymbol_6);
    UnderlyingInstrument_6.insert(UnderlyingSymbol_6.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_6("STRING_1258365074");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_6);
    UnderlyingInstrument_6.insert(UnderlyingSymbolSfx_6.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_6("STRING_1364823342");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_6);
    UnderlyingInstrument_6.insert(UnderlyingTimeUnit_6.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_6("STRING_1977355885");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_6);
    UnderlyingInstrument_6.insert(UnderlyingUnitOfMeasure_6.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_6;
    UnderlyingUnitOfMeasureQty_6.setString("21119515");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_6);
    UnderlyingInstrument_6.insert(UnderlyingUnitOfMeasureQty_6.getString());
    all_values.push_back(UnderlyingInstrument_6);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_10;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_10("STRING_145637680");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_10);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_10.insert(UnderlyingSecurityAltID_10.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_10("STRING_493703411");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_10);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_10.insert(UnderlyingSecurityAltIDSource_10.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_11;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_11("STRING_327395191");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_11);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_11.insert(UnderlyingSecurityAltID_11.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_11("STRING_1232612291");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_11);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_11.insert(UnderlyingSecurityAltIDSource_11.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_12;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_12("STRING_1828472144");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_12);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_12.insert(UnderlyingSecurityAltID_12.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_12("STRING_1978771289");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_12);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_12.insert(UnderlyingSecurityAltIDSource_12.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_8;
      FIX::UnderlyingStipType UnderlyingStipType_8("STRING_1606318536");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_8);
      UnderlyingStipulations_NoUnderlyingStips_8.insert(UnderlyingStipType_8.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_8("STRING_673117916");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_8);
      UnderlyingStipulations_NoUnderlyingStips_8.insert(UnderlyingStipValue_8.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_8);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_9;
      FIX::UnderlyingStipType UnderlyingStipType_9("STRING_1754194507");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_9);
      UnderlyingStipulations_NoUnderlyingStips_9.insert(UnderlyingStipType_9.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_9("STRING_568758407");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_9);
      UnderlyingStipulations_NoUnderlyingStips_9.insert(UnderlyingStipValue_9.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_9);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_11;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_11("STRING_1998074493");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyID_11.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_11('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyIDSource_11.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_11(958961551);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyRole_11.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_11);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_21("STRING_1158569362");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_21);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21.insert(UnderlyingInstrumentPartySubID_21.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_21(42090583);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_21);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21.insert(UnderlyingInstrumentPartySubIDType_21.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_7;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_7("DATA_139039899");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingIssuer_7.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_7(447586645);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingIssuerLen_7.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_7("DATA_2138124933");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingSecurityDesc_7.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_7(1918166596);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingSecurityDescLen_7.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_7;
    UnderlyingAdjustedQuantity_7.setString("9099501");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_7);
    UnderlyingInstrument_7.insert(UnderlyingAdjustedQuantity_7.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_7;
    UnderlyingAllocationPercent_7.setString("48.770000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_7);
    UnderlyingInstrument_7.insert(UnderlyingAllocationPercent_7.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_7;
    UnderlyingAttachmentPoint_7.setString("85.540000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_7);
    UnderlyingInstrument_7.insert(UnderlyingAttachmentPoint_7.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_7("STRING_481018032");
    noUnderlyings_0_2.set(UnderlyingCFICode_7);
    UnderlyingInstrument_7.insert(UnderlyingCFICode_7.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_7("STRING_1228846304");
    noUnderlyings_0_2.set(UnderlyingCPProgram_7);
    UnderlyingInstrument_7.insert(UnderlyingCPProgram_7.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_7("STRING_404178248");
    noUnderlyings_0_2.set(UnderlyingCPRegType_7);
    UnderlyingInstrument_7.insert(UnderlyingCPRegType_7.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_7;
    UnderlyingCapValue_7.setString("3108902");
    noUnderlyings_0_2.set(UnderlyingCapValue_7);
    UnderlyingInstrument_7.insert(UnderlyingCapValue_7.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_7;
    UnderlyingCashAmount_7.setString("11933141");
    noUnderlyings_0_2.set(UnderlyingCashAmount_7);
    UnderlyingInstrument_7.insert(UnderlyingCashAmount_7.getString());
    FIX::UnderlyingCashType UnderlyingCashType_7("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_7);
    UnderlyingInstrument_7.insert(UnderlyingCashType_7.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_7;
    UnderlyingContractMultiplier_7.setString("4565279");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_7);
    UnderlyingInstrument_7.insert(UnderlyingContractMultiplier_7.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_7(1687017585);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_7);
    UnderlyingInstrument_7.insert(UnderlyingContractMultiplierUnit_7.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_7("COUNTRY_761412606");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingCountryOfIssue_7.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_7("LOCALMKTDATE_1689140241");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_7);
    UnderlyingInstrument_7.insert(UnderlyingCouponPaymentDate_7.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_7;
    UnderlyingCouponRate_7.setString("60.820000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_7);
    UnderlyingInstrument_7.insert(UnderlyingCouponRate_7.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_7("STRING_592700247");
    noUnderlyings_0_2.set(UnderlyingCreditRating_7);
    UnderlyingInstrument_7.insert(UnderlyingCreditRating_7.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_7("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_7);
    UnderlyingInstrument_7.insert(UnderlyingCurrency_7.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_7;
    UnderlyingCurrentValue_7.setString("12658181");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_7);
    UnderlyingInstrument_7.insert(UnderlyingCurrentValue_7.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_7;
    UnderlyingDetachmentPoint_7.setString("79.310000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_7);
    UnderlyingInstrument_7.insert(UnderlyingDetachmentPoint_7.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_7;
    UnderlyingDirtyPrice_7.setString("13955993");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_7);
    UnderlyingInstrument_7.insert(UnderlyingDirtyPrice_7.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_7;
    UnderlyingEndPrice_7.setString("15279512");
    noUnderlyings_0_2.set(UnderlyingEndPrice_7);
    UnderlyingInstrument_7.insert(UnderlyingEndPrice_7.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_7;
    UnderlyingEndValue_7.setString("16739487");
    noUnderlyings_0_2.set(UnderlyingEndValue_7);
    UnderlyingInstrument_7.insert(UnderlyingEndValue_7.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_7(722375223);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_7);
    UnderlyingInstrument_7.insert(UnderlyingExerciseStyle_7.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_7;
    UnderlyingFXRate_7.setString("3394291");
    noUnderlyings_0_2.set(UnderlyingFXRate_7);
    UnderlyingInstrument_7.insert(UnderlyingFXRate_7.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_7('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_7);
    UnderlyingInstrument_7.insert(UnderlyingFXRateCalc_7.getString());
    FIX::UnderlyingFactor UnderlyingFactor_7;
    UnderlyingFactor_7.setString("18809445");
    noUnderlyings_0_2.set(UnderlyingFactor_7);
    UnderlyingInstrument_7.insert(UnderlyingFactor_7.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_7(381519757);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_7);
    UnderlyingInstrument_7.insert(UnderlyingFlowScheduleType_7.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_7("STRING_1968380075");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_7);
    UnderlyingInstrument_7.insert(UnderlyingInstrRegistry_7.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_7("LOCALMKTDATE_181047582");
    noUnderlyings_0_2.set(UnderlyingIssueDate_7);
    UnderlyingInstrument_7.insert(UnderlyingIssueDate_7.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_7("STRING_372161042");
    noUnderlyings_0_2.set(UnderlyingIssuer_7);
    UnderlyingInstrument_7.insert(UnderlyingIssuer_7.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_7("STRING_1739063023");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingLocaleOfIssue_7.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_7("LOCALMKTDATE_1090997712");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityDate_7.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_7("MONTHYEAR_342642272");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityMonthYear_7.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_7("TZTIMEONLY_778417929");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityTime_7.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_7;
    UnderlyingNotionalPercentageOutstanding_7.setString("57.450000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_7);
    UnderlyingInstrument_7.insert(UnderlyingNotionalPercentageOutstanding_7.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_7('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_7);
    UnderlyingInstrument_7.insert(UnderlyingOptAttribute_7.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_7;
    UnderlyingOriginalNotionalPercentageOutstanding_7.setString("61.780000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_7);
    UnderlyingInstrument_7.insert(UnderlyingOriginalNotionalPercentageOutstanding_7.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_7("STRING_1882906014");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_7);
    UnderlyingInstrument_7.insert(UnderlyingPriceUnitOfMeasure_7.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_7;
    UnderlyingPriceUnitOfMeasureQty_7.setString("6173191");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_7);
    UnderlyingInstrument_7.insert(UnderlyingPriceUnitOfMeasureQty_7.getString());
    FIX::UnderlyingProduct UnderlyingProduct_7(1616613592);
    noUnderlyings_0_2.set(UnderlyingProduct_7);
    UnderlyingInstrument_7.insert(UnderlyingProduct_7.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_7(191950316);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_7);
    UnderlyingInstrument_7.insert(UnderlyingPutOrCall_7.getString());
    FIX::UnderlyingPx UnderlyingPx_7;
    UnderlyingPx_7.setString("1568530");
    noUnderlyings_0_2.set(UnderlyingPx_7);
    UnderlyingInstrument_7.insert(UnderlyingPx_7.getString());
    FIX::UnderlyingQty UnderlyingQty_7;
    UnderlyingQty_7.setString("2305425");
    noUnderlyings_0_2.set(UnderlyingQty_7);
    UnderlyingInstrument_7.insert(UnderlyingQty_7.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_7("LOCALMKTDATE_1881090557");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_7);
    UnderlyingInstrument_7.insert(UnderlyingRedemptionDate_7.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_7("STRING_1524859122");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_7);
    UnderlyingInstrument_7.insert(UnderlyingRepoCollateralSecurityType_7.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_7;
    UnderlyingRepurchaseRate_7.setString("27.980000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_7);
    UnderlyingInstrument_7.insert(UnderlyingRepurchaseRate_7.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_7(1950253981);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_7);
    UnderlyingInstrument_7.insert(UnderlyingRepurchaseTerm_7.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_7("STRING_204216444");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_7);
    UnderlyingInstrument_7.insert(UnderlyingRestructuringType_7.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_7("STRING_2089060962");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityDesc_7.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_7("EXCHANGE_1626128264");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityExchange_7.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_7("STRING_1599815822");
    noUnderlyings_0_2.set(UnderlyingSecurityID_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityID_7.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_7("STRING_1469528584");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityIDSource_7.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_7("STRING_1152593393");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_7);
    UnderlyingInstrument_7.insert(UnderlyingSecuritySubType_7.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_7("STRING_174707397");
    noUnderlyings_0_2.set(UnderlyingSecurityType_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityType_7.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_7("STRING_1808957758");
    noUnderlyings_0_2.set(UnderlyingSeniority_7);
    UnderlyingInstrument_7.insert(UnderlyingSeniority_7.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_7("STRING_834449921");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_7);
    UnderlyingInstrument_7.insert(UnderlyingSettlMethod_7.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_7(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_7);
    UnderlyingInstrument_7.insert(UnderlyingSettlementType_7.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_7;
    UnderlyingStartValue_7.setString("429938");
    noUnderlyings_0_2.set(UnderlyingStartValue_7);
    UnderlyingInstrument_7.insert(UnderlyingStartValue_7.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_7("STRING_655346349");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingStateOrProvinceOfIssue_7.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_7("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_7);
    UnderlyingInstrument_7.insert(UnderlyingStrikeCurrency_7.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_7;
    UnderlyingStrikePrice_7.setString("2469257");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_7);
    UnderlyingInstrument_7.insert(UnderlyingStrikePrice_7.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_7("STRING_1180213629");
    noUnderlyings_0_2.set(UnderlyingSymbol_7);
    UnderlyingInstrument_7.insert(UnderlyingSymbol_7.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_7("STRING_757797182");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_7);
    UnderlyingInstrument_7.insert(UnderlyingSymbolSfx_7.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_7("STRING_1025343654");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_7);
    UnderlyingInstrument_7.insert(UnderlyingTimeUnit_7.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_7("STRING_604745726");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_7);
    UnderlyingInstrument_7.insert(UnderlyingUnitOfMeasure_7.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_7;
    UnderlyingUnitOfMeasureQty_7.setString("1818021");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_7);
    UnderlyingInstrument_7.insert(UnderlyingUnitOfMeasureQty_7.getString());
    all_values.push_back(UnderlyingInstrument_7);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_13;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_13("STRING_340168093");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_13);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_13.insert(UnderlyingSecurityAltID_13.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_13("STRING_799121213");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_13);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_13.insert(UnderlyingSecurityAltIDSource_13.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_14;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_14("STRING_1677069776");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_14);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_14.insert(UnderlyingSecurityAltID_14.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_14("STRING_532118409");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_14);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_14.insert(UnderlyingSecurityAltIDSource_14.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_10;
      FIX::UnderlyingStipType UnderlyingStipType_10("STRING_1907612327");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_10);
      UnderlyingStipulations_NoUnderlyingStips_10.insert(UnderlyingStipType_10.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_10("STRING_265725318");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_10);
      UnderlyingStipulations_NoUnderlyingStips_10.insert(UnderlyingStipValue_10.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_10);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_11;
      FIX::UnderlyingStipType UnderlyingStipType_11("STRING_333349727");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_11);
      UnderlyingStipulations_NoUnderlyingStips_11.insert(UnderlyingStipType_11.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_11("STRING_583371477");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_11);
      UnderlyingStipulations_NoUnderlyingStips_11.insert(UnderlyingStipValue_11.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_11);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_12;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_12("STRING_537566171");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyID_12.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_12('5');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyIDSource_12.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_12(1694623915);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyRole_12.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_12);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_22("STRING_1994477375");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_22);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22.insert(UnderlyingInstrumentPartySubID_22.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_22(699733661);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_22);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22.insert(UnderlyingInstrumentPartySubIDType_22.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_23("STRING_164605743");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_23);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23.insert(UnderlyingInstrumentPartySubID_23.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_23(1655951486);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_23);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23.insert(UnderlyingInstrumentPartySubIDType_23.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_24("STRING_1534183582");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_24);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubID_24.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_24(72774078);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_24);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubIDType_24.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_13;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_13("STRING_1698945354");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyID_13.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_13('4');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyIDSource_13.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_13(161989995);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyRole_13.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_13);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_25("STRING_288972008");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_25);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25.insert(UnderlyingInstrumentPartySubID_25.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_25(1342203624);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_25);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25.insert(UnderlyingInstrumentPartySubIDType_25.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_14;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_14("STRING_724413799");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyID_14.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_14('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyIDSource_14.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_14(1946949351);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyRole_14.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_14);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_26("STRING_1374771846");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubID_26.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_26(139633796);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubIDType_26.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_27("STRING_1705337122");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubID_27.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_27(904357974);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubIDType_27.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_28("STRING_671752205");
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubID_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubID_28.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_28(513827727);
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubIDType_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubIDType_28.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
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
