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
  FIX::Account Account_0("STRING_618101279");
  msg.set(Account_0);
  AssignmentReport_0.insert(Account_0.getString());
  FIX::AccountType AccountType_0(6);
  msg.set(AccountType_0);
  AssignmentReport_0.insert(AccountType_0.getString());
  FIX::AsgnRptID AsgnRptID_0("STRING_1429713226");
  msg.set(AsgnRptID_0);
  AssignmentReport_0.insert(AsgnRptID_0.getString());
  FIX::AssignmentMethod AssignmentMethod_0('P');
  msg.set(AssignmentMethod_0);
  AssignmentReport_0.insert(AssignmentMethod_0.getString());
  FIX::AssignmentUnit AssignmentUnit_0;
  AssignmentUnit_0.setString("17418606");
  msg.set(AssignmentUnit_0);
  AssignmentReport_0.insert(AssignmentUnit_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_5("LOCALMKTDATE_627967250");
  msg.set(ClearingBusinessDate_5);
  AssignmentReport_0.insert(ClearingBusinessDate_5.getString());
  FIX::Currency Currency_4("GBP");
  msg.set(Currency_4);
  AssignmentReport_0.insert(Currency_4.getString());
  FIX::EncodedText EncodedText_9("DATA_2058430269");
  msg.set(EncodedText_9);
  AssignmentReport_0.insert(EncodedText_9.getString());
  FIX::EncodedTextLen EncodedTextLen_9(903210541);
  msg.set(EncodedTextLen_9);
  AssignmentReport_0.insert(EncodedTextLen_9.getString());
  FIX::ExerciseMethod ExerciseMethod_0('A');
  msg.set(ExerciseMethod_0);
  AssignmentReport_0.insert(ExerciseMethod_0.getString());
  FIX::ExpireDate ExpireDate_0("LOCALMKTDATE_876656323");
  msg.set(ExpireDate_0);
  AssignmentReport_0.insert(ExpireDate_0.getString());
  FIX::LastRptRequested LastRptRequested_0(true);
  msg.set(LastRptRequested_0);
  AssignmentReport_0.insert(LastRptRequested_0.getString());
  FIX::OpenInterest OpenInterest_0;
  OpenInterest_0.setString("14395946");
  msg.set(OpenInterest_0);
  AssignmentReport_0.insert(OpenInterest_0.getString());
  FIX::PosReqID PosReqID_0("STRING_2091301323");
  msg.set(PosReqID_0);
  AssignmentReport_0.insert(PosReqID_0.getString());
  FIX::PriorSettlPrice PriorSettlPrice_1;
  PriorSettlPrice_1.setString("13911030");
  msg.set(PriorSettlPrice_1);
  AssignmentReport_0.insert(PriorSettlPrice_1.getString());
  FIX::SettlPrice SettlPrice_1;
  SettlPrice_1.setString("19120768");
  msg.set(SettlPrice_1);
  AssignmentReport_0.insert(SettlPrice_1.getString());
  FIX::SettlPriceType SettlPriceType_0(1);
  msg.set(SettlPriceType_0);
  AssignmentReport_0.insert(SettlPriceType_0.getString());
  FIX::SettlSessID SettlSessID_1("STRING_ETH");
  msg.set(SettlSessID_1);
  AssignmentReport_0.insert(SettlSessID_1.getString());
  FIX::SettlSessSubID SettlSessSubID_0("STRING_1901305841");
  msg.set(SettlSessSubID_0);
  AssignmentReport_0.insert(SettlSessSubID_0.getString());
  FIX::Text Text_9("STRING_1068010502");
  msg.set(Text_9);
  AssignmentReport_0.insert(Text_9.getString());
  FIX::ThresholdAmount ThresholdAmount_0;
  ThresholdAmount_0.setString("18699805");
  msg.set(ThresholdAmount_0);
  AssignmentReport_0.insert(ThresholdAmount_0.getString());
  FIX::TotNumAssignmentReports TotNumAssignmentReports_0(1975937568);
  msg.set(TotNumAssignmentReports_0);
  AssignmentReport_0.insert(TotNumAssignmentReports_0.getString());
  FIX::UnderlyingSettlPrice UnderlyingSettlPrice_0;
  UnderlyingSettlPrice_0.setString("20762642");
  msg.set(UnderlyingSettlPrice_0);
  AssignmentReport_0.insert(UnderlyingSettlPrice_0.getString());
  all_values.push_back(AssignmentReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_0;
  FIX::ApplID ApplID_0("STRING_1713142975");
  msg.set(ApplID_0);
  ApplicationSequenceControl_0.insert(ApplID_0.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_0(1122707461);
  msg.set(ApplLastSeqNum_0);
  ApplicationSequenceControl_0.insert(ApplLastSeqNum_0.getString());
  FIX::ApplResendFlag ApplResendFlag_0(true);
  msg.set(ApplResendFlag_0);
  ApplicationSequenceControl_0.insert(ApplResendFlag_0.getString());
  FIX::ApplSeqNum ApplSeqNum_0(132082250);
  msg.set(ApplSeqNum_0);
  ApplicationSequenceControl_0.insert(ApplSeqNum_0.getString());
  all_values.push_back(ApplicationSequenceControl_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_6;
    FIX::EncodedLegIssuer EncodedLegIssuer_6("DATA_785531554");
    noLegs_0_0.set(EncodedLegIssuer_6);
    InstrumentLeg_6.insert(EncodedLegIssuer_6.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_6(138624176);
    noLegs_0_0.set(EncodedLegIssuerLen_6);
    InstrumentLeg_6.insert(EncodedLegIssuerLen_6.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_6("DATA_2005607874");
    noLegs_0_0.set(EncodedLegSecurityDesc_6);
    InstrumentLeg_6.insert(EncodedLegSecurityDesc_6.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_6(1444192904);
    noLegs_0_0.set(EncodedLegSecurityDescLen_6);
    InstrumentLeg_6.insert(EncodedLegSecurityDescLen_6.getString());
    FIX::LegCFICode LegCFICode_6("STRING_1568337402");
    noLegs_0_0.set(LegCFICode_6);
    InstrumentLeg_6.insert(LegCFICode_6.getString());
    FIX::LegContractMultiplier LegContractMultiplier_6;
    LegContractMultiplier_6.setString("2332410");
    noLegs_0_0.set(LegContractMultiplier_6);
    InstrumentLeg_6.insert(LegContractMultiplier_6.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_6(1038569870);
    noLegs_0_0.set(LegContractMultiplierUnit_6);
    InstrumentLeg_6.insert(LegContractMultiplierUnit_6.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_6("MONTHYEAR_48821004");
    noLegs_0_0.set(LegContractSettlMonth_6);
    InstrumentLeg_6.insert(LegContractSettlMonth_6.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_6("COUNTRY_619544604");
    noLegs_0_0.set(LegCountryOfIssue_6);
    InstrumentLeg_6.insert(LegCountryOfIssue_6.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_6("LOCALMKTDATE_1064509708");
    noLegs_0_0.set(LegCouponPaymentDate_6);
    InstrumentLeg_6.insert(LegCouponPaymentDate_6.getString());
    FIX::LegCouponRate LegCouponRate_6;
    LegCouponRate_6.setString("12.730000");
    noLegs_0_0.set(LegCouponRate_6);
    InstrumentLeg_6.insert(LegCouponRate_6.getString());
    FIX::LegCreditRating LegCreditRating_6("STRING_1522755145");
    noLegs_0_0.set(LegCreditRating_6);
    InstrumentLeg_6.insert(LegCreditRating_6.getString());
    FIX::LegCurrency LegCurrency_6("GBP");
    noLegs_0_0.set(LegCurrency_6);
    InstrumentLeg_6.insert(LegCurrency_6.getString());
    FIX::LegDatedDate LegDatedDate_6("LOCALMKTDATE_1830832308");
    noLegs_0_0.set(LegDatedDate_6);
    InstrumentLeg_6.insert(LegDatedDate_6.getString());
    FIX::LegExerciseStyle LegExerciseStyle_6(2004423986);
    noLegs_0_0.set(LegExerciseStyle_6);
    InstrumentLeg_6.insert(LegExerciseStyle_6.getString());
    FIX::LegFactor LegFactor_6;
    LegFactor_6.setString("7802416");
    noLegs_0_0.set(LegFactor_6);
    InstrumentLeg_6.insert(LegFactor_6.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_6(1074451683);
    noLegs_0_0.set(LegFlowScheduleType_6);
    InstrumentLeg_6.insert(LegFlowScheduleType_6.getString());
    FIX::LegInstrRegistry LegInstrRegistry_6("STRING_1769017232");
    noLegs_0_0.set(LegInstrRegistry_6);
    InstrumentLeg_6.insert(LegInstrRegistry_6.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_6("LOCALMKTDATE_1720256425");
    noLegs_0_0.set(LegInterestAccrualDate_6);
    InstrumentLeg_6.insert(LegInterestAccrualDate_6.getString());
    FIX::LegIssueDate LegIssueDate_6("LOCALMKTDATE_418569302");
    noLegs_0_0.set(LegIssueDate_6);
    InstrumentLeg_6.insert(LegIssueDate_6.getString());
    FIX::LegIssuer LegIssuer_6("STRING_1522839425");
    noLegs_0_0.set(LegIssuer_6);
    InstrumentLeg_6.insert(LegIssuer_6.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_6("STRING_640783279");
    noLegs_0_0.set(LegLocaleOfIssue_6);
    InstrumentLeg_6.insert(LegLocaleOfIssue_6.getString());
    FIX::LegMaturityDate LegMaturityDate_6("LOCALMKTDATE_141066183");
    noLegs_0_0.set(LegMaturityDate_6);
    InstrumentLeg_6.insert(LegMaturityDate_6.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_6("MONTHYEAR_1351293345");
    noLegs_0_0.set(LegMaturityMonthYear_6);
    InstrumentLeg_6.insert(LegMaturityMonthYear_6.getString());
    FIX::LegMaturityTime LegMaturityTime_6("TZTIMEONLY_569563901");
    noLegs_0_0.set(LegMaturityTime_6);
    InstrumentLeg_6.insert(LegMaturityTime_6.getString());
    FIX::LegOptAttribute LegOptAttribute_6('1');
    noLegs_0_0.set(LegOptAttribute_6);
    InstrumentLeg_6.insert(LegOptAttribute_6.getString());
    FIX::LegOptionRatio LegOptionRatio_6;
    LegOptionRatio_6.setString("3265171");
    noLegs_0_0.set(LegOptionRatio_6);
    InstrumentLeg_6.insert(LegOptionRatio_6.getString());
    FIX::LegPool LegPool_6("STRING_1000030484");
    noLegs_0_0.set(LegPool_6);
    InstrumentLeg_6.insert(LegPool_6.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_6("STRING_1986291408");
    noLegs_0_0.set(LegPriceUnitOfMeasure_6);
    InstrumentLeg_6.insert(LegPriceUnitOfMeasure_6.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_6;
    LegPriceUnitOfMeasureQty_6.setString("17140237");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_6);
    InstrumentLeg_6.insert(LegPriceUnitOfMeasureQty_6.getString());
    FIX::LegProduct LegProduct_6(1785562038);
    noLegs_0_0.set(LegProduct_6);
    InstrumentLeg_6.insert(LegProduct_6.getString());
    FIX::LegPutOrCall LegPutOrCall_6(2124915584);
    noLegs_0_0.set(LegPutOrCall_6);
    InstrumentLeg_6.insert(LegPutOrCall_6.getString());
    FIX::LegRatioQty LegRatioQty_6;
    LegRatioQty_6.setString("15721479");
    noLegs_0_0.set(LegRatioQty_6);
    InstrumentLeg_6.insert(LegRatioQty_6.getString());
    FIX::LegRedemptionDate LegRedemptionDate_6("LOCALMKTDATE_1082271295");
    noLegs_0_0.set(LegRedemptionDate_6);
    InstrumentLeg_6.insert(LegRedemptionDate_6.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_6("STRING_1545769338");
    noLegs_0_0.set(LegRepoCollateralSecurityType_6);
    InstrumentLeg_6.insert(LegRepoCollateralSecurityType_6.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_6;
    LegRepurchaseRate_6.setString("90.710000");
    noLegs_0_0.set(LegRepurchaseRate_6);
    InstrumentLeg_6.insert(LegRepurchaseRate_6.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_6(2120841165);
    noLegs_0_0.set(LegRepurchaseTerm_6);
    InstrumentLeg_6.insert(LegRepurchaseTerm_6.getString());
    FIX::LegSecurityDesc LegSecurityDesc_6("STRING_1594590342");
    noLegs_0_0.set(LegSecurityDesc_6);
    InstrumentLeg_6.insert(LegSecurityDesc_6.getString());
    FIX::LegSecurityExchange LegSecurityExchange_6("EXCHANGE_277450027");
    noLegs_0_0.set(LegSecurityExchange_6);
    InstrumentLeg_6.insert(LegSecurityExchange_6.getString());
    FIX::LegSecurityID LegSecurityID_6("STRING_1037867225");
    noLegs_0_0.set(LegSecurityID_6);
    InstrumentLeg_6.insert(LegSecurityID_6.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_6("STRING_1554357967");
    noLegs_0_0.set(LegSecurityIDSource_6);
    InstrumentLeg_6.insert(LegSecurityIDSource_6.getString());
    FIX::LegSecuritySubType LegSecuritySubType_6("STRING_1800205172");
    noLegs_0_0.set(LegSecuritySubType_6);
    InstrumentLeg_6.insert(LegSecuritySubType_6.getString());
    FIX::LegSecurityType LegSecurityType_6("STRING_1602696548");
    noLegs_0_0.set(LegSecurityType_6);
    InstrumentLeg_6.insert(LegSecurityType_6.getString());
    FIX::LegSide LegSide_6('2');
    noLegs_0_0.set(LegSide_6);
    InstrumentLeg_6.insert(LegSide_6.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_6("STRING_1483553832");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_6);
    InstrumentLeg_6.insert(LegStateOrProvinceOfIssue_6.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_6("CAN");
    noLegs_0_0.set(LegStrikeCurrency_6);
    InstrumentLeg_6.insert(LegStrikeCurrency_6.getString());
    FIX::LegStrikePrice LegStrikePrice_6;
    LegStrikePrice_6.setString("4105218");
    noLegs_0_0.set(LegStrikePrice_6);
    InstrumentLeg_6.insert(LegStrikePrice_6.getString());
    FIX::LegSymbol LegSymbol_6("STRING_1081170470");
    noLegs_0_0.set(LegSymbol_6);
    InstrumentLeg_6.insert(LegSymbol_6.getString());
    FIX::LegSymbolSfx LegSymbolSfx_6("STRING_596312669");
    noLegs_0_0.set(LegSymbolSfx_6);
    InstrumentLeg_6.insert(LegSymbolSfx_6.getString());
    FIX::LegTimeUnit LegTimeUnit_6("STRING_829091170");
    noLegs_0_0.set(LegTimeUnit_6);
    InstrumentLeg_6.insert(LegTimeUnit_6.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_6("STRING_456526247");
    noLegs_0_0.set(LegUnitOfMeasure_6);
    InstrumentLeg_6.insert(LegUnitOfMeasure_6.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_6;
    LegUnitOfMeasureQty_6.setString("12370959");
    noLegs_0_0.set(LegUnitOfMeasureQty_6);
    InstrumentLeg_6.insert(LegUnitOfMeasureQty_6.getString());
    all_values.push_back(InstrumentLeg_6);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_14;
      FIX::LegSecurityAltID LegSecurityAltID_14("STRING_1807819593");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_14);
      LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltID_14.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_14("STRING_1806659850");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_14);
      LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltIDSource_14.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_14);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_15;
      FIX::LegSecurityAltID LegSecurityAltID_15("STRING_676882863");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_15);
      LegSecAltIDGrp_NoLegSecurityAltID_15.insert(LegSecurityAltID_15.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_15("STRING_2134336751");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_15);
      LegSecAltIDGrp_NoLegSecurityAltID_15.insert(LegSecurityAltIDSource_15.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_15);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_7;
    FIX::EncodedLegIssuer EncodedLegIssuer_7("DATA_659206686");
    noLegs_0_1.set(EncodedLegIssuer_7);
    InstrumentLeg_7.insert(EncodedLegIssuer_7.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_7(515690624);
    noLegs_0_1.set(EncodedLegIssuerLen_7);
    InstrumentLeg_7.insert(EncodedLegIssuerLen_7.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_7("DATA_1700876857");
    noLegs_0_1.set(EncodedLegSecurityDesc_7);
    InstrumentLeg_7.insert(EncodedLegSecurityDesc_7.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_7(297285076);
    noLegs_0_1.set(EncodedLegSecurityDescLen_7);
    InstrumentLeg_7.insert(EncodedLegSecurityDescLen_7.getString());
    FIX::LegCFICode LegCFICode_7("STRING_493122560");
    noLegs_0_1.set(LegCFICode_7);
    InstrumentLeg_7.insert(LegCFICode_7.getString());
    FIX::LegContractMultiplier LegContractMultiplier_7;
    LegContractMultiplier_7.setString("11255411");
    noLegs_0_1.set(LegContractMultiplier_7);
    InstrumentLeg_7.insert(LegContractMultiplier_7.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_7(1379556371);
    noLegs_0_1.set(LegContractMultiplierUnit_7);
    InstrumentLeg_7.insert(LegContractMultiplierUnit_7.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_7("MONTHYEAR_2038891899");
    noLegs_0_1.set(LegContractSettlMonth_7);
    InstrumentLeg_7.insert(LegContractSettlMonth_7.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_7("COUNTRY_783446612");
    noLegs_0_1.set(LegCountryOfIssue_7);
    InstrumentLeg_7.insert(LegCountryOfIssue_7.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_7("LOCALMKTDATE_1352913888");
    noLegs_0_1.set(LegCouponPaymentDate_7);
    InstrumentLeg_7.insert(LegCouponPaymentDate_7.getString());
    FIX::LegCouponRate LegCouponRate_7;
    LegCouponRate_7.setString("85.930000");
    noLegs_0_1.set(LegCouponRate_7);
    InstrumentLeg_7.insert(LegCouponRate_7.getString());
    FIX::LegCreditRating LegCreditRating_7("STRING_1060896639");
    noLegs_0_1.set(LegCreditRating_7);
    InstrumentLeg_7.insert(LegCreditRating_7.getString());
    FIX::LegCurrency LegCurrency_7("EUR");
    noLegs_0_1.set(LegCurrency_7);
    InstrumentLeg_7.insert(LegCurrency_7.getString());
    FIX::LegDatedDate LegDatedDate_7("LOCALMKTDATE_713618163");
    noLegs_0_1.set(LegDatedDate_7);
    InstrumentLeg_7.insert(LegDatedDate_7.getString());
    FIX::LegExerciseStyle LegExerciseStyle_7(1845994014);
    noLegs_0_1.set(LegExerciseStyle_7);
    InstrumentLeg_7.insert(LegExerciseStyle_7.getString());
    FIX::LegFactor LegFactor_7;
    LegFactor_7.setString("11361711");
    noLegs_0_1.set(LegFactor_7);
    InstrumentLeg_7.insert(LegFactor_7.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_7(49688348);
    noLegs_0_1.set(LegFlowScheduleType_7);
    InstrumentLeg_7.insert(LegFlowScheduleType_7.getString());
    FIX::LegInstrRegistry LegInstrRegistry_7("STRING_1158147252");
    noLegs_0_1.set(LegInstrRegistry_7);
    InstrumentLeg_7.insert(LegInstrRegistry_7.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_7("LOCALMKTDATE_12227424");
    noLegs_0_1.set(LegInterestAccrualDate_7);
    InstrumentLeg_7.insert(LegInterestAccrualDate_7.getString());
    FIX::LegIssueDate LegIssueDate_7("LOCALMKTDATE_460210216");
    noLegs_0_1.set(LegIssueDate_7);
    InstrumentLeg_7.insert(LegIssueDate_7.getString());
    FIX::LegIssuer LegIssuer_7("STRING_91834074");
    noLegs_0_1.set(LegIssuer_7);
    InstrumentLeg_7.insert(LegIssuer_7.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_7("STRING_608540093");
    noLegs_0_1.set(LegLocaleOfIssue_7);
    InstrumentLeg_7.insert(LegLocaleOfIssue_7.getString());
    FIX::LegMaturityDate LegMaturityDate_7("LOCALMKTDATE_1289301386");
    noLegs_0_1.set(LegMaturityDate_7);
    InstrumentLeg_7.insert(LegMaturityDate_7.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_7("MONTHYEAR_548360321");
    noLegs_0_1.set(LegMaturityMonthYear_7);
    InstrumentLeg_7.insert(LegMaturityMonthYear_7.getString());
    FIX::LegMaturityTime LegMaturityTime_7("TZTIMEONLY_1845636042");
    noLegs_0_1.set(LegMaturityTime_7);
    InstrumentLeg_7.insert(LegMaturityTime_7.getString());
    FIX::LegOptAttribute LegOptAttribute_7('1');
    noLegs_0_1.set(LegOptAttribute_7);
    InstrumentLeg_7.insert(LegOptAttribute_7.getString());
    FIX::LegOptionRatio LegOptionRatio_7;
    LegOptionRatio_7.setString("2086962");
    noLegs_0_1.set(LegOptionRatio_7);
    InstrumentLeg_7.insert(LegOptionRatio_7.getString());
    FIX::LegPool LegPool_7("STRING_1504812244");
    noLegs_0_1.set(LegPool_7);
    InstrumentLeg_7.insert(LegPool_7.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_7("STRING_788857954");
    noLegs_0_1.set(LegPriceUnitOfMeasure_7);
    InstrumentLeg_7.insert(LegPriceUnitOfMeasure_7.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_7;
    LegPriceUnitOfMeasureQty_7.setString("1955493");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_7);
    InstrumentLeg_7.insert(LegPriceUnitOfMeasureQty_7.getString());
    FIX::LegProduct LegProduct_7(16535282);
    noLegs_0_1.set(LegProduct_7);
    InstrumentLeg_7.insert(LegProduct_7.getString());
    FIX::LegPutOrCall LegPutOrCall_7(1304548578);
    noLegs_0_1.set(LegPutOrCall_7);
    InstrumentLeg_7.insert(LegPutOrCall_7.getString());
    FIX::LegRatioQty LegRatioQty_7;
    LegRatioQty_7.setString("18964262");
    noLegs_0_1.set(LegRatioQty_7);
    InstrumentLeg_7.insert(LegRatioQty_7.getString());
    FIX::LegRedemptionDate LegRedemptionDate_7("LOCALMKTDATE_313820358");
    noLegs_0_1.set(LegRedemptionDate_7);
    InstrumentLeg_7.insert(LegRedemptionDate_7.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_7("STRING_1797671139");
    noLegs_0_1.set(LegRepoCollateralSecurityType_7);
    InstrumentLeg_7.insert(LegRepoCollateralSecurityType_7.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_7;
    LegRepurchaseRate_7.setString("37.680000");
    noLegs_0_1.set(LegRepurchaseRate_7);
    InstrumentLeg_7.insert(LegRepurchaseRate_7.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_7(1693376730);
    noLegs_0_1.set(LegRepurchaseTerm_7);
    InstrumentLeg_7.insert(LegRepurchaseTerm_7.getString());
    FIX::LegSecurityDesc LegSecurityDesc_7("STRING_1689079390");
    noLegs_0_1.set(LegSecurityDesc_7);
    InstrumentLeg_7.insert(LegSecurityDesc_7.getString());
    FIX::LegSecurityExchange LegSecurityExchange_7("EXCHANGE_1657930380");
    noLegs_0_1.set(LegSecurityExchange_7);
    InstrumentLeg_7.insert(LegSecurityExchange_7.getString());
    FIX::LegSecurityID LegSecurityID_7("STRING_898806970");
    noLegs_0_1.set(LegSecurityID_7);
    InstrumentLeg_7.insert(LegSecurityID_7.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_7("STRING_1027594335");
    noLegs_0_1.set(LegSecurityIDSource_7);
    InstrumentLeg_7.insert(LegSecurityIDSource_7.getString());
    FIX::LegSecuritySubType LegSecuritySubType_7("STRING_571343371");
    noLegs_0_1.set(LegSecuritySubType_7);
    InstrumentLeg_7.insert(LegSecuritySubType_7.getString());
    FIX::LegSecurityType LegSecurityType_7("STRING_1142104436");
    noLegs_0_1.set(LegSecurityType_7);
    InstrumentLeg_7.insert(LegSecurityType_7.getString());
    FIX::LegSide LegSide_7('1');
    noLegs_0_1.set(LegSide_7);
    InstrumentLeg_7.insert(LegSide_7.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_7("STRING_1284961534");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_7);
    InstrumentLeg_7.insert(LegStateOrProvinceOfIssue_7.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_7("CAN");
    noLegs_0_1.set(LegStrikeCurrency_7);
    InstrumentLeg_7.insert(LegStrikeCurrency_7.getString());
    FIX::LegStrikePrice LegStrikePrice_7;
    LegStrikePrice_7.setString("13346498");
    noLegs_0_1.set(LegStrikePrice_7);
    InstrumentLeg_7.insert(LegStrikePrice_7.getString());
    FIX::LegSymbol LegSymbol_7("STRING_1998762054");
    noLegs_0_1.set(LegSymbol_7);
    InstrumentLeg_7.insert(LegSymbol_7.getString());
    FIX::LegSymbolSfx LegSymbolSfx_7("STRING_921382206");
    noLegs_0_1.set(LegSymbolSfx_7);
    InstrumentLeg_7.insert(LegSymbolSfx_7.getString());
    FIX::LegTimeUnit LegTimeUnit_7("STRING_1794860098");
    noLegs_0_1.set(LegTimeUnit_7);
    InstrumentLeg_7.insert(LegTimeUnit_7.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_7("STRING_2090596128");
    noLegs_0_1.set(LegUnitOfMeasure_7);
    InstrumentLeg_7.insert(LegUnitOfMeasure_7.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_7;
    LegUnitOfMeasureQty_7.setString("15299222");
    noLegs_0_1.set(LegUnitOfMeasureQty_7);
    InstrumentLeg_7.insert(LegUnitOfMeasureQty_7.getString());
    all_values.push_back(InstrumentLeg_7);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_16;
      FIX::LegSecurityAltID LegSecurityAltID_16("STRING_491472802");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_16);
      LegSecAltIDGrp_NoLegSecurityAltID_16.insert(LegSecurityAltID_16.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_16("STRING_1228074693");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_16);
      LegSecAltIDGrp_NoLegSecurityAltID_16.insert(LegSecurityAltIDSource_16.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_16);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_17;
      FIX::LegSecurityAltID LegSecurityAltID_17("STRING_1048652927");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_17);
      LegSecAltIDGrp_NoLegSecurityAltID_17.insert(LegSecurityAltID_17.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_17("STRING_700169068");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_17);
      LegSecAltIDGrp_NoLegSecurityAltID_17.insert(LegSecurityAltIDSource_17.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_17);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_6;
  FIX::AttachmentPoint AttachmentPoint_6;
  AttachmentPoint_6.setString("32.890000");
  msg.set(AttachmentPoint_6);
  Instrument_6.insert(AttachmentPoint_6.getString());
  FIX::CFICode CFICode_6("STRING_1837510882");
  msg.set(CFICode_6);
  Instrument_6.insert(CFICode_6.getString());
  FIX::CPProgram CPProgram_6(99);
  msg.set(CPProgram_6);
  Instrument_6.insert(CPProgram_6.getString());
  FIX::CPRegType CPRegType_6("STRING_601938571");
  msg.set(CPRegType_6);
  Instrument_6.insert(CPRegType_6.getString());
  FIX::CapPrice CapPrice_6;
  CapPrice_6.setString("9945758");
  msg.set(CapPrice_6);
  Instrument_6.insert(CapPrice_6.getString());
  FIX::ContractMultiplier ContractMultiplier_6;
  ContractMultiplier_6.setString("6446610");
  msg.set(ContractMultiplier_6);
  Instrument_6.insert(ContractMultiplier_6.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_6(2);
  msg.set(ContractMultiplierUnit_6);
  Instrument_6.insert(ContractMultiplierUnit_6.getString());
  FIX::ContractSettlMonth ContractSettlMonth_6("MONTHYEAR_644763303");
  msg.set(ContractSettlMonth_6);
  Instrument_6.insert(ContractSettlMonth_6.getString());
  FIX::CountryOfIssue CountryOfIssue_6("COUNTRY_1519144785");
  msg.set(CountryOfIssue_6);
  Instrument_6.insert(CountryOfIssue_6.getString());
  FIX::CouponPaymentDate CouponPaymentDate_6("LOCALMKTDATE_461652012");
  msg.set(CouponPaymentDate_6);
  Instrument_6.insert(CouponPaymentDate_6.getString());
  FIX::CouponRate CouponRate_6;
  CouponRate_6.setString("90.450000");
  msg.set(CouponRate_6);
  Instrument_6.insert(CouponRate_6.getString());
  FIX::CreditRating CreditRating_6("STRING_1029591517");
  msg.set(CreditRating_6);
  Instrument_6.insert(CreditRating_6.getString());
  FIX::DatedDate DatedDate_6("LOCALMKTDATE_1360458982");
  msg.set(DatedDate_6);
  Instrument_6.insert(DatedDate_6.getString());
  FIX::DetachmentPoint DetachmentPoint_6;
  DetachmentPoint_6.setString("33.810000");
  msg.set(DetachmentPoint_6);
  Instrument_6.insert(DetachmentPoint_6.getString());
  FIX::EncodedIssuer EncodedIssuer_6("DATA_1600934888");
  msg.set(EncodedIssuer_6);
  Instrument_6.insert(EncodedIssuer_6.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_6(355079771);
  msg.set(EncodedIssuerLen_6);
  Instrument_6.insert(EncodedIssuerLen_6.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_6("DATA_986936981");
  msg.set(EncodedSecurityDesc_6);
  Instrument_6.insert(EncodedSecurityDesc_6.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_6(738412775);
  msg.set(EncodedSecurityDescLen_6);
  Instrument_6.insert(EncodedSecurityDescLen_6.getString());
  FIX::ExerciseStyle ExerciseStyle_6(2);
  msg.set(ExerciseStyle_6);
  Instrument_6.insert(ExerciseStyle_6.getString());
  FIX::Factor Factor_6;
  Factor_6.setString("18960917");
  msg.set(Factor_6);
  Instrument_6.insert(Factor_6.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_6(false);
  msg.set(FlexProductEligibilityIndicator_6);
  Instrument_6.insert(FlexProductEligibilityIndicator_6.getString());
  FIX::FlexibleIndicator FlexibleIndicator_6(true);
  msg.set(FlexibleIndicator_6);
  Instrument_6.insert(FlexibleIndicator_6.getString());
  FIX::FloorPrice FloorPrice_6;
  FloorPrice_6.setString("6699903");
  msg.set(FloorPrice_6);
  Instrument_6.insert(FloorPrice_6.getString());
  FIX::FlowScheduleType FlowScheduleType_6(3);
  msg.set(FlowScheduleType_6);
  Instrument_6.insert(FlowScheduleType_6.getString());
  FIX::InstrRegistry InstrRegistry_6("STRING_990085460");
  msg.set(InstrRegistry_6);
  Instrument_6.insert(InstrRegistry_6.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_6('5');
  msg.set(InstrmtAssignmentMethod_6);
  Instrument_6.insert(InstrmtAssignmentMethod_6.getString());
  FIX::InterestAccrualDate InterestAccrualDate_6("LOCALMKTDATE_509633296");
  msg.set(InterestAccrualDate_6);
  Instrument_6.insert(InterestAccrualDate_6.getString());
  FIX::IssueDate IssueDate_6("LOCALMKTDATE_1481558262");
  msg.set(IssueDate_6);
  Instrument_6.insert(IssueDate_6.getString());
  FIX::Issuer Issuer_6("STRING_1280503666");
  msg.set(Issuer_6);
  Instrument_6.insert(Issuer_6.getString());
  FIX::ListMethod ListMethod_6(0);
  msg.set(ListMethod_6);
  Instrument_6.insert(ListMethod_6.getString());
  FIX::LocaleOfIssue LocaleOfIssue_6("STRING_34243683");
  msg.set(LocaleOfIssue_6);
  Instrument_6.insert(LocaleOfIssue_6.getString());
  FIX::MaturityDate MaturityDate_6("LOCALMKTDATE_1865906955");
  msg.set(MaturityDate_6);
  Instrument_6.insert(MaturityDate_6.getString());
  FIX::MaturityMonthYear MaturityMonthYear_6("MONTHYEAR_1248313458");
  msg.set(MaturityMonthYear_6);
  Instrument_6.insert(MaturityMonthYear_6.getString());
  FIX::MaturityTime MaturityTime_6("TZTIMEONLY_929962121");
  msg.set(MaturityTime_6);
  Instrument_6.insert(MaturityTime_6.getString());
  FIX::MinPriceIncrement MinPriceIncrement_6;
  MinPriceIncrement_6.setString("3203618");
  msg.set(MinPriceIncrement_6);
  Instrument_6.insert(MinPriceIncrement_6.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_6;
  MinPriceIncrementAmount_6.setString("954056");
  msg.set(MinPriceIncrementAmount_6);
  Instrument_6.insert(MinPriceIncrementAmount_6.getString());
  FIX::NTPositionLimit NTPositionLimit_6(1574623139);
  msg.set(NTPositionLimit_6);
  Instrument_6.insert(NTPositionLimit_6.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_6;
  NotionalPercentageOutstanding_6.setString("8.090000");
  msg.set(NotionalPercentageOutstanding_6);
  Instrument_6.insert(NotionalPercentageOutstanding_6.getString());
  FIX::OptAttribute OptAttribute_6('7');
  msg.set(OptAttribute_6);
  Instrument_6.insert(OptAttribute_6.getString());
  FIX::OptPayoutAmount OptPayoutAmount_6;
  OptPayoutAmount_6.setString("9462842");
  msg.set(OptPayoutAmount_6);
  Instrument_6.insert(OptPayoutAmount_6.getString());
  FIX::OptPayoutType OptPayoutType_6(3);
  msg.set(OptPayoutType_6);
  Instrument_6.insert(OptPayoutType_6.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_6;
  OriginalNotionalPercentageOutstanding_6.setString("79.710000");
  msg.set(OriginalNotionalPercentageOutstanding_6);
  Instrument_6.insert(OriginalNotionalPercentageOutstanding_6.getString());
  FIX::Pool Pool_6("STRING_1975875794");
  msg.set(Pool_6);
  Instrument_6.insert(Pool_6.getString());
  FIX::PositionLimit PositionLimit_6(910748155);
  msg.set(PositionLimit_6);
  Instrument_6.insert(PositionLimit_6.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_6("STRING_STD");
  msg.set(PriceQuoteMethod_6);
  Instrument_6.insert(PriceQuoteMethod_6.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_6("STRING_1429327034");
  msg.set(PriceUnitOfMeasure_6);
  Instrument_6.insert(PriceUnitOfMeasure_6.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_6;
  PriceUnitOfMeasureQty_6.setString("12658279");
  msg.set(PriceUnitOfMeasureQty_6);
  Instrument_6.insert(PriceUnitOfMeasureQty_6.getString());
  FIX::Product Product_8(4);
  msg.set(Product_8);
  Instrument_6.insert(Product_8.getString());
  FIX::ProductComplex ProductComplex_6("STRING_20256161");
  msg.set(ProductComplex_6);
  Instrument_6.insert(ProductComplex_6.getString());
  FIX::PutOrCall PutOrCall_6(0);
  msg.set(PutOrCall_6);
  Instrument_6.insert(PutOrCall_6.getString());
  FIX::RedemptionDate RedemptionDate_6("LOCALMKTDATE_728542801");
  msg.set(RedemptionDate_6);
  Instrument_6.insert(RedemptionDate_6.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_6("STRING_2093318819");
  msg.set(RepoCollateralSecurityType_6);
  Instrument_6.insert(RepoCollateralSecurityType_6.getString());
  FIX::RepurchaseRate RepurchaseRate_6;
  RepurchaseRate_6.setString("18.320000");
  msg.set(RepurchaseRate_6);
  Instrument_6.insert(RepurchaseRate_6.getString());
  FIX::RepurchaseTerm RepurchaseTerm_6(1398533122);
  msg.set(RepurchaseTerm_6);
  Instrument_6.insert(RepurchaseTerm_6.getString());
  FIX::RestructuringType RestructuringType_6("STRING_XR");
  msg.set(RestructuringType_6);
  Instrument_6.insert(RestructuringType_6.getString());
  FIX::SecurityDesc SecurityDesc_6("STRING_203613644");
  msg.set(SecurityDesc_6);
  Instrument_6.insert(SecurityDesc_6.getString());
  FIX::SecurityExchange SecurityExchange_6("EXCHANGE_1450962094");
  msg.set(SecurityExchange_6);
  Instrument_6.insert(SecurityExchange_6.getString());
  FIX::SecurityGroup SecurityGroup_6("STRING_28423927");
  msg.set(SecurityGroup_6);
  Instrument_6.insert(SecurityGroup_6.getString());
  FIX::SecurityID SecurityID_6("STRING_1685171907");
  msg.set(SecurityID_6);
  Instrument_6.insert(SecurityID_6.getString());
  FIX::SecurityIDSource SecurityIDSource_6("STRING_B");
  msg.set(SecurityIDSource_6);
  Instrument_6.insert(SecurityIDSource_6.getString());
  FIX::SecurityStatus SecurityStatus_6("STRING_2");
  msg.set(SecurityStatus_6);
  Instrument_6.insert(SecurityStatus_6.getString());
  FIX::SecuritySubType SecuritySubType_6("STRING_1719415590");
  msg.set(SecuritySubType_6);
  Instrument_6.insert(SecuritySubType_6.getString());
  FIX::SecurityType SecurityType_8("STRING_COFP");
  msg.set(SecurityType_8);
  Instrument_6.insert(SecurityType_8.getString());
  FIX::Seniority Seniority_6("STRING_SD");
  msg.set(Seniority_6);
  Instrument_6.insert(Seniority_6.getString());
  FIX::SettlMethod SettlMethod_6('P');
  msg.set(SettlMethod_6);
  Instrument_6.insert(SettlMethod_6.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_6("STRING_622767299");
  msg.set(SettleOnOpenFlag_6);
  Instrument_6.insert(SettleOnOpenFlag_6.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_6("STRING_782945584");
  msg.set(StateOrProvinceOfIssue_6);
  Instrument_6.insert(StateOrProvinceOfIssue_6.getString());
  FIX::StrikeCurrency StrikeCurrency_6("JPY");
  msg.set(StrikeCurrency_6);
  Instrument_6.insert(StrikeCurrency_6.getString());
  FIX::StrikeMultiplier StrikeMultiplier_6;
  StrikeMultiplier_6.setString("15231145");
  msg.set(StrikeMultiplier_6);
  Instrument_6.insert(StrikeMultiplier_6.getString());
  FIX::StrikePrice StrikePrice_6;
  StrikePrice_6.setString("8753178");
  msg.set(StrikePrice_6);
  Instrument_6.insert(StrikePrice_6.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_6(2);
  msg.set(StrikePriceBoundaryMethod_6);
  Instrument_6.insert(StrikePriceBoundaryMethod_6.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_6;
  StrikePriceBoundaryPrecision_6.setString("88.330000");
  msg.set(StrikePriceBoundaryPrecision_6);
  Instrument_6.insert(StrikePriceBoundaryPrecision_6.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_6(2);
  msg.set(StrikePriceDeterminationMethod_6);
  Instrument_6.insert(StrikePriceDeterminationMethod_6.getString());
  FIX::StrikeValue StrikeValue_6;
  StrikeValue_6.setString("1724417");
  msg.set(StrikeValue_6);
  Instrument_6.insert(StrikeValue_6.getString());
  FIX::Symbol Symbol_6("STRING_295156538");
  msg.set(Symbol_6);
  Instrument_6.insert(Symbol_6.getString());
  FIX::SymbolSfx SymbolSfx_6("STRING_WI");
  msg.set(SymbolSfx_6);
  Instrument_6.insert(SymbolSfx_6.getString());
  FIX::TimeUnit TimeUnit_6("STRING_Min");
  msg.set(TimeUnit_6);
  Instrument_6.insert(TimeUnit_6.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_6(1);
  msg.set(UnderlyingPriceDeterminationMethod_6);
  Instrument_6.insert(UnderlyingPriceDeterminationMethod_6.getString());
  FIX::UnitOfMeasure UnitOfMeasure_6("STRING_Gal");
  msg.set(UnitOfMeasure_6);
  Instrument_6.insert(UnitOfMeasure_6.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_6;
  UnitOfMeasureQty_6.setString("17523085");
  msg.set(UnitOfMeasureQty_6);
  Instrument_6.insert(UnitOfMeasureQty_6.getString());
  FIX::ValuationMethod ValuationMethod_6("STRING_EQTY");
  msg.set(ValuationMethod_6);
  Instrument_6.insert(ValuationMethod_6.getString());
  all_values.push_back(Instrument_6);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_15;
    FIX::ComplexEventCondition ComplexEventCondition_15(2);
    noComplexEvents_0_0.set(ComplexEventCondition_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventCondition_15.getString());
    FIX::ComplexEventPrice ComplexEventPrice_15;
    ComplexEventPrice_15.setString("12546834");
    noComplexEvents_0_0.set(ComplexEventPrice_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPrice_15.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_15(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceBoundaryMethod_15.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_15;
    ComplexEventPriceBoundaryPrecision_15.setString("3.950000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceBoundaryPrecision_15.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_15(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceTimeType_15.getString());
    FIX::ComplexEventType ComplexEventType_15(2);
    noComplexEvents_0_0.set(ComplexEventType_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventType_15.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_15;
    ComplexOptPayoutAmount_15.setString("7071386");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexOptPayoutAmount_15.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_15);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_35;
      FIX::ComplexEventEndDate ComplexEventEndDate_35(FIX::UTCTIMESTAMP(12, 38, 47, 0, 2, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_35);
      ComplexEventDates_NoComplexEventDates_35.insert(ComplexEventEndDate_35.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_35(FIX::UTCTIMESTAMP(21, 33, 5, 26, 12, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_35);
      ComplexEventDates_NoComplexEventDates_35.insert(ComplexEventStartDate_35.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_35);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_72;
        FIX::ComplexEventEndTime ComplexEventEndTime_72(FIX::UTCTIMEONLY(18, 25, 1));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_72);
        ComplexEventTimes_NoComplexEventTimes_72.insert(ComplexEventEndTime_72.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_72(FIX::UTCTIMEONLY(4, 18, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_72);
        ComplexEventTimes_NoComplexEventTimes_72.insert(ComplexEventStartTime_72.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_72);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_73;
        FIX::ComplexEventEndTime ComplexEventEndTime_73(FIX::UTCTIMEONLY(13, 14, 3));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_73);
        ComplexEventTimes_NoComplexEventTimes_73.insert(ComplexEventEndTime_73.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_73(FIX::UTCTIMEONLY(4, 17, 4));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_73);
        ComplexEventTimes_NoComplexEventTimes_73.insert(ComplexEventStartTime_73.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_73);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_74;
        FIX::ComplexEventEndTime ComplexEventEndTime_74(FIX::UTCTIMEONLY(18, 42, 34));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_74);
        ComplexEventTimes_NoComplexEventTimes_74.insert(ComplexEventEndTime_74.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_74(FIX::UTCTIMEONLY(23, 9, 0));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_74);
        ComplexEventTimes_NoComplexEventTimes_74.insert(ComplexEventStartTime_74.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_74);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_14;
    FIX::EventDate EventDate_14("LOCALMKTDATE_2105296783");
    noEvents_0_0.set(EventDate_14);
    EvntGrp_NoEvents_14.insert(EventDate_14.getString());
    FIX::EventPx EventPx_14;
    EventPx_14.setString("20112756");
    noEvents_0_0.set(EventPx_14);
    EvntGrp_NoEvents_14.insert(EventPx_14.getString());
    FIX::EventText EventText_14("STRING_61332762");
    noEvents_0_0.set(EventText_14);
    EvntGrp_NoEvents_14.insert(EventText_14.getString());
    FIX::EventTime EventTime_14(FIX::UTCTIMESTAMP(8, 21, 11, 14, 11, 2006));
    noEvents_0_0.set(EventTime_14);
    EvntGrp_NoEvents_14.insert(EventTime_14.getString());
    FIX::EventType EventType_14(14);
    noEvents_0_0.set(EventType_14);
    EvntGrp_NoEvents_14.insert(EventType_14.getString());
    all_values.push_back(EvntGrp_NoEvents_14);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AssignmentReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_9;
    FIX::InstrumentPartyID InstrumentPartyID_9("STRING_1447575922");
    noInstrumentParties_0_0.set(InstrumentPartyID_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyID_9.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_9('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyIDSource_9.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_9(813120538);
    noInstrumentParties_0_0.set(InstrumentPartyRole_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyRole_9.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_9);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22;
      FIX::InstrumentPartySubID InstrumentPartySubID_22("STRING_2052354286");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_22);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22.insert(InstrumentPartySubID_22.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_22(909391681);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_22);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22.insert(InstrumentPartySubIDType_22.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23;
      FIX::InstrumentPartySubID InstrumentPartySubID_23("STRING_1098172197");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_23);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23.insert(InstrumentPartySubID_23.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_23(1106198827);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_23);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23.insert(InstrumentPartySubIDType_23.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24;
      FIX::InstrumentPartySubID InstrumentPartySubID_24("STRING_1712801479");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_24);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubID_24.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_24(1270953542);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_24);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubIDType_24.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_13;
    FIX::SecurityAltID SecurityAltID_13("STRING_647798225");
    noSecurityAltID_0_0.set(SecurityAltID_13);
    SecAltIDGrp_NoSecurityAltID_13.insert(SecurityAltID_13.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_13("STRING_740800716");
    noSecurityAltID_0_0.set(SecurityAltIDSource_13);
    SecAltIDGrp_NoSecurityAltID_13.insert(SecurityAltIDSource_13.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_13);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_14;
    FIX::SecurityAltID SecurityAltID_14("STRING_1010652439");
    noSecurityAltID_0_1.set(SecurityAltID_14);
    SecAltIDGrp_NoSecurityAltID_14.insert(SecurityAltID_14.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_14("STRING_363759631");
    noSecurityAltID_0_1.set(SecurityAltIDSource_14);
    SecAltIDGrp_NoSecurityAltID_14.insert(SecurityAltIDSource_14.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_14);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_15;
    FIX::SecurityAltID SecurityAltID_15("STRING_130481020");
    noSecurityAltID_0_2.set(SecurityAltID_15);
    SecAltIDGrp_NoSecurityAltID_15.insert(SecurityAltID_15.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_15("STRING_1184263409");
    noSecurityAltID_0_2.set(SecurityAltIDSource_15);
    SecAltIDGrp_NoSecurityAltID_15.insert(SecurityAltIDSource_15.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_15);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_12;
  FIX::SecurityXML SecurityXML_13("XMLDATA_789719251");
  msg.set(SecurityXML_13);
  FIX::SecurityXMLLen SecurityXMLLen_6(1298882560);
  msg.set(SecurityXMLLen_6);
  FIX::SecurityXMLSchema SecurityXMLSchema_6("STRING_1142076544");
  msg.set(SecurityXMLSchema_6);
  SecurityXML_12.insert(SecurityXMLSchema_6.getString());
  all_values.push_back(SecurityXML_12);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_15;
    FIX::PartyID PartyID_15("STRING_1360215323");
    noPartyIDs_0_0.set(PartyID_15);
    Parties_NoPartyIDs_15.insert(PartyID_15.getString());
    FIX::PartyIDSource PartyIDSource_15('4');
    noPartyIDs_0_0.set(PartyIDSource_15);
    Parties_NoPartyIDs_15.insert(PartyIDSource_15.getString());
    FIX::PartyRole PartyRole_15(64);
    noPartyIDs_0_0.set(PartyRole_15);
    Parties_NoPartyIDs_15.insert(PartyRole_15.getString());
    all_values.push_back(Parties_NoPartyIDs_15);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_28;
      FIX::PartySubID PartySubID_28("STRING_1611942349");
      noPartySubIDs_0_1_0.set(PartySubID_28);
      PtysSubGrp_NoPartySubIDs_28.insert(PartySubID_28.getString());
      FIX::PartySubIDType PartySubIDType_28(11);
      noPartySubIDs_0_1_0.set(PartySubIDType_28);
      PtysSubGrp_NoPartySubIDs_28.insert(PartySubIDType_28.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_28);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_16;
    FIX::PartyID PartyID_16("STRING_117269594");
    noPartyIDs_0_1.set(PartyID_16);
    Parties_NoPartyIDs_16.insert(PartyID_16.getString());
    FIX::PartyIDSource PartyIDSource_16('H');
    noPartyIDs_0_1.set(PartyIDSource_16);
    Parties_NoPartyIDs_16.insert(PartyIDSource_16.getString());
    FIX::PartyRole PartyRole_16(52);
    noPartyIDs_0_1.set(PartyRole_16);
    Parties_NoPartyIDs_16.insert(PartyRole_16.getString());
    all_values.push_back(Parties_NoPartyIDs_16);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_29;
      FIX::PartySubID PartySubID_29("STRING_846851407");
      noPartySubIDs_1_1_0.set(PartySubID_29);
      PtysSubGrp_NoPartySubIDs_29.insert(PartySubID_29.getString());
      FIX::PartySubIDType PartySubIDType_29(8);
      noPartySubIDs_1_1_0.set(PartySubIDType_29);
      PtysSubGrp_NoPartySubIDs_29.insert(PartySubIDType_29.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_29);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_30;
      FIX::PartySubID PartySubID_30("STRING_669206276");
      noPartySubIDs_1_1_1.set(PartySubID_30);
      PtysSubGrp_NoPartySubIDs_30.insert(PartySubID_30.getString());
      FIX::PartySubIDType PartySubIDType_30(29);
      noPartySubIDs_1_1_1.set(PartySubIDType_30);
      PtysSubGrp_NoPartySubIDs_30.insert(PartySubIDType_30.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_30);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_31;
      FIX::PartySubID PartySubID_31("STRING_1311367177");
      noPartySubIDs_1_1_2.set(PartySubID_31);
      PtysSubGrp_NoPartySubIDs_31.insert(PartySubID_31.getString());
      FIX::PartySubIDType PartySubIDType_31(25);
      noPartySubIDs_1_1_2.set(PartySubIDType_31);
      PtysSubGrp_NoPartySubIDs_31.insert(PartySubIDType_31.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_31);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_17;
    FIX::PartyID PartyID_17("STRING_1865074867");
    noPartyIDs_0_2.set(PartyID_17);
    Parties_NoPartyIDs_17.insert(PartyID_17.getString());
    FIX::PartyIDSource PartyIDSource_17('2');
    noPartyIDs_0_2.set(PartyIDSource_17);
    Parties_NoPartyIDs_17.insert(PartyIDSource_17.getString());
    FIX::PartyRole PartyRole_17(9);
    noPartyIDs_0_2.set(PartyRole_17);
    Parties_NoPartyIDs_17.insert(PartyRole_17.getString());
    all_values.push_back(Parties_NoPartyIDs_17);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_32;
      FIX::PartySubID PartySubID_32("STRING_1515695129");
      noPartySubIDs_2_1_0.set(PartySubID_32);
      PtysSubGrp_NoPartySubIDs_32.insert(PartySubID_32.getString());
      FIX::PartySubIDType PartySubIDType_32(2);
      noPartySubIDs_2_1_0.set(PartySubIDType_32);
      PtysSubGrp_NoPartySubIDs_32.insert(PartySubIDType_32.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_32);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_33;
      FIX::PartySubID PartySubID_33("STRING_1729345478");
      noPartySubIDs_2_1_1.set(PartySubID_33);
      PtysSubGrp_NoPartySubIDs_33.insert(PartySubID_33.getString());
      FIX::PartySubIDType PartySubIDType_33(30);
      noPartySubIDs_2_1_1.set(PartySubIDType_33);
      PtysSubGrp_NoPartySubIDs_33.insert(PartySubIDType_33.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_33);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_5;
    FIX::PosAmt PosAmt_5;
    PosAmt_5.setString("18598264");
    noPosAmt_0_0.set(PosAmt_5);
    PositionAmountData_NoPosAmt_5.insert(PosAmt_5.getString());
    FIX::PosAmtType PosAmtType_5("STRING_PREM");
    noPosAmt_0_0.set(PosAmtType_5);
    PositionAmountData_NoPosAmt_5.insert(PosAmtType_5.getString());
    FIX::PositionCurrency PositionCurrency_5("STRING_797709248");
    noPosAmt_0_0.set(PositionCurrency_5);
    PositionAmountData_NoPosAmt_5.insert(PositionCurrency_5.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_5);

    msg.addGroup(noPosAmt_0_0);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_2;
    FIX::LongQty LongQty_2;
    LongQty_2.setString("5577202");
    noPositions_0_0.set(LongQty_2);
    PositionQty_NoPositions_2.insert(LongQty_2.getString());
    FIX::PosQtyStatus PosQtyStatus_2(1);
    noPositions_0_0.set(PosQtyStatus_2);
    PositionQty_NoPositions_2.insert(PosQtyStatus_2.getString());
    FIX::PosType PosType_2("STRING_PNTN");
    noPositions_0_0.set(PosType_2);
    PositionQty_NoPositions_2.insert(PosType_2.getString());
    FIX::QuantityDate QuantityDate_2("LOCALMKTDATE_1743970904");
    noPositions_0_0.set(QuantityDate_2);
    PositionQty_NoPositions_2.insert(QuantityDate_2.getString());
    FIX::ShortQty ShortQty_2;
    ShortQty_2.setString("21100661");
    noPositions_0_0.set(ShortQty_2);
    PositionQty_NoPositions_2.insert(ShortQty_2.getString());
    all_values.push_back(PositionQty_NoPositions_2);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_24;
      FIX::NestedPartyID NestedPartyID_24("STRING_1208429605");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyID_24.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_24('7');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyIDSource_24.getString());
      FIX::NestedPartyRole NestedPartyRole_24(828147776);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyRole_24.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_24);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_46;
        FIX::NestedPartySubID NestedPartySubID_46("STRING_1810469510");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_46);
        NstdPtysSubGrp_NoNestedPartySubIDs_46.insert(NestedPartySubID_46.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_46(684233513);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_46);
        NstdPtysSubGrp_NoNestedPartySubIDs_46.insert(NestedPartySubIDType_46.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_46);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_47;
        FIX::NestedPartySubID NestedPartySubID_47("STRING_1454556497");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_47);
        NstdPtysSubGrp_NoNestedPartySubIDs_47.insert(NestedPartySubID_47.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_47(1069482400);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_47);
        NstdPtysSubGrp_NoNestedPartySubIDs_47.insert(NestedPartySubIDType_47.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_47);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_25;
      FIX::NestedPartyID NestedPartyID_25("STRING_1353439789");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyID_25.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_25('7');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyIDSource_25.getString());
      FIX::NestedPartyRole NestedPartyRole_25(233365929);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyRole_25.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_25);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_48;
        FIX::NestedPartySubID NestedPartySubID_48("STRING_1939050386");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_48);
        NstdPtysSubGrp_NoNestedPartySubIDs_48.insert(NestedPartySubID_48.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_48(503448285);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_48);
        NstdPtysSubGrp_NoNestedPartySubIDs_48.insert(NestedPartySubIDType_48.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_48);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_26;
      FIX::NestedPartyID NestedPartyID_26("STRING_1928469887");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyID_26.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_26('7');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyIDSource_26.getString());
      FIX::NestedPartyRole NestedPartyRole_26(2019143415);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyRole_26.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_26);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_49;
        FIX::NestedPartySubID NestedPartySubID_49("STRING_361973330");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_49);
        NstdPtysSubGrp_NoNestedPartySubIDs_49.insert(NestedPartySubID_49.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_49(250523688);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_49);
        NstdPtysSubGrp_NoNestedPartySubIDs_49.insert(NestedPartySubIDType_49.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_49);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_50;
        FIX::NestedPartySubID NestedPartySubID_50("STRING_1580690249");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_50);
        NstdPtysSubGrp_NoNestedPartySubIDs_50.insert(NestedPartySubID_50.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_50(74316180);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_50);
        NstdPtysSubGrp_NoNestedPartySubIDs_50.insert(NestedPartySubIDType_50.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_50);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_51;
        FIX::NestedPartySubID NestedPartySubID_51("STRING_1813651018");
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubID_51);
        NstdPtysSubGrp_NoNestedPartySubIDs_51.insert(NestedPartySubID_51.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_51(230915849);
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubIDType_51);
        NstdPtysSubGrp_NoNestedPartySubIDs_51.insert(NestedPartySubIDType_51.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_51);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_3;
    FIX::LongQty LongQty_3;
    LongQty_3.setString("10855415");
    noPositions_0_1.set(LongQty_3);
    PositionQty_NoPositions_3.insert(LongQty_3.getString());
    FIX::PosQtyStatus PosQtyStatus_3(2);
    noPositions_0_1.set(PosQtyStatus_3);
    PositionQty_NoPositions_3.insert(PosQtyStatus_3.getString());
    FIX::PosType PosType_3("STRING_CEA");
    noPositions_0_1.set(PosType_3);
    PositionQty_NoPositions_3.insert(PosType_3.getString());
    FIX::QuantityDate QuantityDate_3("LOCALMKTDATE_1309498676");
    noPositions_0_1.set(QuantityDate_3);
    PositionQty_NoPositions_3.insert(QuantityDate_3.getString());
    FIX::ShortQty ShortQty_3;
    ShortQty_3.setString("19678585");
    noPositions_0_1.set(ShortQty_3);
    PositionQty_NoPositions_3.insert(ShortQty_3.getString());
    all_values.push_back(PositionQty_NoPositions_3);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_27;
      FIX::NestedPartyID NestedPartyID_27("STRING_2020376857");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyID_27.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_27('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyIDSource_27.getString());
      FIX::NestedPartyRole NestedPartyRole_27(251093574);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyRole_27.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_27);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_52;
        FIX::NestedPartySubID NestedPartySubID_52("STRING_1636509547");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_52);
        NstdPtysSubGrp_NoNestedPartySubIDs_52.insert(NestedPartySubID_52.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_52(2061563084);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_52);
        NstdPtysSubGrp_NoNestedPartySubIDs_52.insert(NestedPartySubIDType_52.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_52);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_53;
        FIX::NestedPartySubID NestedPartySubID_53("STRING_1385274499");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_53);
        NstdPtysSubGrp_NoNestedPartySubIDs_53.insert(NestedPartySubID_53.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_53(943582396);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_53);
        NstdPtysSubGrp_NoNestedPartySubIDs_53.insert(NestedPartySubIDType_53.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_53);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_28;
      FIX::NestedPartyID NestedPartyID_28("STRING_983561837");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyID_28.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_28('5');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyIDSource_28.getString());
      FIX::NestedPartyRole NestedPartyRole_28(1017557915);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyRole_28.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_28);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_54;
        FIX::NestedPartySubID NestedPartySubID_54("STRING_1375784739");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_54);
        NstdPtysSubGrp_NoNestedPartySubIDs_54.insert(NestedPartySubID_54.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_54(809124653);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_54);
        NstdPtysSubGrp_NoNestedPartySubIDs_54.insert(NestedPartySubIDType_54.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_54);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_55;
        FIX::NestedPartySubID NestedPartySubID_55("STRING_1720376052");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_55);
        NstdPtysSubGrp_NoNestedPartySubIDs_55.insert(NestedPartySubID_55.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_55(1156770979);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_55);
        NstdPtysSubGrp_NoNestedPartySubIDs_55.insert(NestedPartySubIDType_55.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_55);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_56;
        FIX::NestedPartySubID NestedPartySubID_56("STRING_1589236153");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_56);
        NstdPtysSubGrp_NoNestedPartySubIDs_56.insert(NestedPartySubID_56.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_56(1592035819);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_56);
        NstdPtysSubGrp_NoNestedPartySubIDs_56.insert(NestedPartySubIDType_56.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_56);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_29;
      FIX::NestedPartyID NestedPartyID_29("STRING_581987584");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyID_29.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_29('1');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyIDSource_29.getString());
      FIX::NestedPartyRole NestedPartyRole_29(1842559507);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyRole_29.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_29);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_57;
        FIX::NestedPartySubID NestedPartySubID_57("STRING_2025525663");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_57);
        NstdPtysSubGrp_NoNestedPartySubIDs_57.insert(NestedPartySubID_57.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_57(1508726877);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_57);
        NstdPtysSubGrp_NoNestedPartySubIDs_57.insert(NestedPartySubIDType_57.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_57);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_58;
        FIX::NestedPartySubID NestedPartySubID_58("STRING_246110035");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_58);
        NstdPtysSubGrp_NoNestedPartySubIDs_58.insert(NestedPartySubID_58.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_58(963583606);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_58);
        NstdPtysSubGrp_NoNestedPartySubIDs_58.insert(NestedPartySubIDType_58.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_58);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_4;
    FIX::LongQty LongQty_4;
    LongQty_4.setString("17326144");
    noPositions_0_2.set(LongQty_4);
    PositionQty_NoPositions_4.insert(LongQty_4.getString());
    FIX::PosQtyStatus PosQtyStatus_4(2);
    noPositions_0_2.set(PosQtyStatus_4);
    PositionQty_NoPositions_4.insert(PosQtyStatus_4.getString());
    FIX::PosType PosType_4("STRING_IAS");
    noPositions_0_2.set(PosType_4);
    PositionQty_NoPositions_4.insert(PosType_4.getString());
    FIX::QuantityDate QuantityDate_4("LOCALMKTDATE_1552989325");
    noPositions_0_2.set(QuantityDate_4);
    PositionQty_NoPositions_4.insert(QuantityDate_4.getString());
    FIX::ShortQty ShortQty_4;
    ShortQty_4.setString("14254816");
    noPositions_0_2.set(ShortQty_4);
    PositionQty_NoPositions_4.insert(ShortQty_4.getString());
    all_values.push_back(PositionQty_NoPositions_4);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_30;
      FIX::NestedPartyID NestedPartyID_30("STRING_434310134");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyID_30.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_30('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyIDSource_30.getString());
      FIX::NestedPartyRole NestedPartyRole_30(699532829);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyRole_30.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_30);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_59;
        FIX::NestedPartySubID NestedPartySubID_59("STRING_1590654663");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_59);
        NstdPtysSubGrp_NoNestedPartySubIDs_59.insert(NestedPartySubID_59.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_59(2084807328);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_59);
        NstdPtysSubGrp_NoNestedPartySubIDs_59.insert(NestedPartySubIDType_59.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_59);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_31;
      FIX::NestedPartyID NestedPartyID_31("STRING_866918429");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyID_31.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_31('4');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyIDSource_31.getString());
      FIX::NestedPartyRole NestedPartyRole_31(528554320);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyRole_31.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_31);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_60;
        FIX::NestedPartySubID NestedPartySubID_60("STRING_1643660619");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_60);
        NstdPtysSubGrp_NoNestedPartySubIDs_60.insert(NestedPartySubID_60.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_60(1904339060);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_60);
        NstdPtysSubGrp_NoNestedPartySubIDs_60.insert(NestedPartySubIDType_60.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_60);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_61;
        FIX::NestedPartySubID NestedPartySubID_61("STRING_546117349");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_61);
        NstdPtysSubGrp_NoNestedPartySubIDs_61.insert(NestedPartySubID_61.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_61(1216553023);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_61);
        NstdPtysSubGrp_NoNestedPartySubIDs_61.insert(NestedPartySubIDType_61.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_61);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_32;
      FIX::NestedPartyID NestedPartyID_32("STRING_913626391");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyID_32.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_32('2');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyIDSource_32.getString());
      FIX::NestedPartyRole NestedPartyRole_32(661105194);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyRole_32.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_32);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_62;
        FIX::NestedPartySubID NestedPartySubID_62("STRING_1939079338");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_62);
        NstdPtysSubGrp_NoNestedPartySubIDs_62.insert(NestedPartySubID_62.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_62(356181053);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_62);
        NstdPtysSubGrp_NoNestedPartySubIDs_62.insert(NestedPartySubIDType_62.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_62);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_63;
        FIX::NestedPartySubID NestedPartySubID_63("STRING_1510808160");
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubID_63);
        NstdPtysSubGrp_NoNestedPartySubIDs_63.insert(NestedPartySubID_63.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_63(1817121354);
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubIDType_63);
        NstdPtysSubGrp_NoNestedPartySubIDs_63.insert(NestedPartySubIDType_63.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_63);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_64;
        FIX::NestedPartySubID NestedPartySubID_64("STRING_1864907930");
        noNestedPartySubIDs_2_2_2_2.set(NestedPartySubID_64);
        NstdPtysSubGrp_NoNestedPartySubIDs_64.insert(NestedPartySubID_64.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_64(1756918195);
        noNestedPartySubIDs_2_2_2_2.set(NestedPartySubIDType_64);
        NstdPtysSubGrp_NoNestedPartySubIDs_64.insert(NestedPartySubIDType_64.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_64);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_2);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noPositions_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_8;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_8("DATA_1450038755");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingIssuer_8.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_8(1537680949);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingIssuerLen_8.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_8("DATA_758819946");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingSecurityDesc_8.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_8(855544432);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingSecurityDescLen_8.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_8;
    UnderlyingAdjustedQuantity_8.setString("8156789");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_8);
    UnderlyingInstrument_8.insert(UnderlyingAdjustedQuantity_8.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_8;
    UnderlyingAllocationPercent_8.setString("17.890000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_8);
    UnderlyingInstrument_8.insert(UnderlyingAllocationPercent_8.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_8;
    UnderlyingAttachmentPoint_8.setString("45.660000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_8);
    UnderlyingInstrument_8.insert(UnderlyingAttachmentPoint_8.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_8("STRING_344770533");
    noUnderlyings_0_0.set(UnderlyingCFICode_8);
    UnderlyingInstrument_8.insert(UnderlyingCFICode_8.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_8("STRING_1456844618");
    noUnderlyings_0_0.set(UnderlyingCPProgram_8);
    UnderlyingInstrument_8.insert(UnderlyingCPProgram_8.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_8("STRING_1213190599");
    noUnderlyings_0_0.set(UnderlyingCPRegType_8);
    UnderlyingInstrument_8.insert(UnderlyingCPRegType_8.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_8;
    UnderlyingCapValue_8.setString("19354251");
    noUnderlyings_0_0.set(UnderlyingCapValue_8);
    UnderlyingInstrument_8.insert(UnderlyingCapValue_8.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_8;
    UnderlyingCashAmount_8.setString("13941682");
    noUnderlyings_0_0.set(UnderlyingCashAmount_8);
    UnderlyingInstrument_8.insert(UnderlyingCashAmount_8.getString());
    FIX::UnderlyingCashType UnderlyingCashType_8("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_8);
    UnderlyingInstrument_8.insert(UnderlyingCashType_8.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_8;
    UnderlyingContractMultiplier_8.setString("2146744");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_8);
    UnderlyingInstrument_8.insert(UnderlyingContractMultiplier_8.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_8(1922722619);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_8);
    UnderlyingInstrument_8.insert(UnderlyingContractMultiplierUnit_8.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_8("COUNTRY_1817101724");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingCountryOfIssue_8.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_8("LOCALMKTDATE_1858335020");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_8);
    UnderlyingInstrument_8.insert(UnderlyingCouponPaymentDate_8.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_8;
    UnderlyingCouponRate_8.setString("80.310000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_8);
    UnderlyingInstrument_8.insert(UnderlyingCouponRate_8.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_8("STRING_215735425");
    noUnderlyings_0_0.set(UnderlyingCreditRating_8);
    UnderlyingInstrument_8.insert(UnderlyingCreditRating_8.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_8("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_8);
    UnderlyingInstrument_8.insert(UnderlyingCurrency_8.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_8;
    UnderlyingCurrentValue_8.setString("2036052");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_8);
    UnderlyingInstrument_8.insert(UnderlyingCurrentValue_8.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_8;
    UnderlyingDetachmentPoint_8.setString("95.890000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_8);
    UnderlyingInstrument_8.insert(UnderlyingDetachmentPoint_8.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_8;
    UnderlyingDirtyPrice_8.setString("19413347");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_8);
    UnderlyingInstrument_8.insert(UnderlyingDirtyPrice_8.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_8;
    UnderlyingEndPrice_8.setString("21426846");
    noUnderlyings_0_0.set(UnderlyingEndPrice_8);
    UnderlyingInstrument_8.insert(UnderlyingEndPrice_8.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_8;
    UnderlyingEndValue_8.setString("19446906");
    noUnderlyings_0_0.set(UnderlyingEndValue_8);
    UnderlyingInstrument_8.insert(UnderlyingEndValue_8.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_8(1304659261);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_8);
    UnderlyingInstrument_8.insert(UnderlyingExerciseStyle_8.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_8;
    UnderlyingFXRate_8.setString("18123223");
    noUnderlyings_0_0.set(UnderlyingFXRate_8);
    UnderlyingInstrument_8.insert(UnderlyingFXRate_8.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_8('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_8);
    UnderlyingInstrument_8.insert(UnderlyingFXRateCalc_8.getString());
    FIX::UnderlyingFactor UnderlyingFactor_8;
    UnderlyingFactor_8.setString("9140938");
    noUnderlyings_0_0.set(UnderlyingFactor_8);
    UnderlyingInstrument_8.insert(UnderlyingFactor_8.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_8(298059989);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_8);
    UnderlyingInstrument_8.insert(UnderlyingFlowScheduleType_8.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_8("STRING_964670031");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_8);
    UnderlyingInstrument_8.insert(UnderlyingInstrRegistry_8.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_8("LOCALMKTDATE_304291110");
    noUnderlyings_0_0.set(UnderlyingIssueDate_8);
    UnderlyingInstrument_8.insert(UnderlyingIssueDate_8.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_8("STRING_1056879935");
    noUnderlyings_0_0.set(UnderlyingIssuer_8);
    UnderlyingInstrument_8.insert(UnderlyingIssuer_8.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_8("STRING_1820214463");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingLocaleOfIssue_8.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_8("LOCALMKTDATE_1119970064");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityDate_8.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_8("MONTHYEAR_1814191724");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityMonthYear_8.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_8("TZTIMEONLY_962585381");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityTime_8.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_8;
    UnderlyingNotionalPercentageOutstanding_8.setString("5.970000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_8);
    UnderlyingInstrument_8.insert(UnderlyingNotionalPercentageOutstanding_8.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_8('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_8);
    UnderlyingInstrument_8.insert(UnderlyingOptAttribute_8.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_8;
    UnderlyingOriginalNotionalPercentageOutstanding_8.setString("23.320000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_8);
    UnderlyingInstrument_8.insert(UnderlyingOriginalNotionalPercentageOutstanding_8.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_8("STRING_1252682146");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_8);
    UnderlyingInstrument_8.insert(UnderlyingPriceUnitOfMeasure_8.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_8;
    UnderlyingPriceUnitOfMeasureQty_8.setString("3702373");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_8);
    UnderlyingInstrument_8.insert(UnderlyingPriceUnitOfMeasureQty_8.getString());
    FIX::UnderlyingProduct UnderlyingProduct_8(2108401360);
    noUnderlyings_0_0.set(UnderlyingProduct_8);
    UnderlyingInstrument_8.insert(UnderlyingProduct_8.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_8(1467356547);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_8);
    UnderlyingInstrument_8.insert(UnderlyingPutOrCall_8.getString());
    FIX::UnderlyingPx UnderlyingPx_8;
    UnderlyingPx_8.setString("1454763");
    noUnderlyings_0_0.set(UnderlyingPx_8);
    UnderlyingInstrument_8.insert(UnderlyingPx_8.getString());
    FIX::UnderlyingQty UnderlyingQty_8;
    UnderlyingQty_8.setString("17780194");
    noUnderlyings_0_0.set(UnderlyingQty_8);
    UnderlyingInstrument_8.insert(UnderlyingQty_8.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_8("LOCALMKTDATE_1178207919");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_8);
    UnderlyingInstrument_8.insert(UnderlyingRedemptionDate_8.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_8("STRING_1825054347");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_8);
    UnderlyingInstrument_8.insert(UnderlyingRepoCollateralSecurityType_8.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_8;
    UnderlyingRepurchaseRate_8.setString("48.610000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_8);
    UnderlyingInstrument_8.insert(UnderlyingRepurchaseRate_8.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_8(2105612314);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_8);
    UnderlyingInstrument_8.insert(UnderlyingRepurchaseTerm_8.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_8("STRING_123291473");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_8);
    UnderlyingInstrument_8.insert(UnderlyingRestructuringType_8.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_8("STRING_49876494");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityDesc_8.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_8("EXCHANGE_1546638255");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityExchange_8.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_8("STRING_2064626222");
    noUnderlyings_0_0.set(UnderlyingSecurityID_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityID_8.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_8("STRING_45077465");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityIDSource_8.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_8("STRING_1343845249");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_8);
    UnderlyingInstrument_8.insert(UnderlyingSecuritySubType_8.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_8("STRING_1221801836");
    noUnderlyings_0_0.set(UnderlyingSecurityType_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityType_8.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_8("STRING_1857399790");
    noUnderlyings_0_0.set(UnderlyingSeniority_8);
    UnderlyingInstrument_8.insert(UnderlyingSeniority_8.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_8("STRING_858476525");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_8);
    UnderlyingInstrument_8.insert(UnderlyingSettlMethod_8.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_8(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_8);
    UnderlyingInstrument_8.insert(UnderlyingSettlementType_8.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_8;
    UnderlyingStartValue_8.setString("79761");
    noUnderlyings_0_0.set(UnderlyingStartValue_8);
    UnderlyingInstrument_8.insert(UnderlyingStartValue_8.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_8("STRING_1823146556");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingStateOrProvinceOfIssue_8.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_8("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_8);
    UnderlyingInstrument_8.insert(UnderlyingStrikeCurrency_8.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_8;
    UnderlyingStrikePrice_8.setString("14958773");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_8);
    UnderlyingInstrument_8.insert(UnderlyingStrikePrice_8.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_8("STRING_1412673172");
    noUnderlyings_0_0.set(UnderlyingSymbol_8);
    UnderlyingInstrument_8.insert(UnderlyingSymbol_8.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_8("STRING_731564142");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_8);
    UnderlyingInstrument_8.insert(UnderlyingSymbolSfx_8.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_8("STRING_310979104");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_8);
    UnderlyingInstrument_8.insert(UnderlyingTimeUnit_8.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_8("STRING_729930121");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_8);
    UnderlyingInstrument_8.insert(UnderlyingUnitOfMeasure_8.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_8;
    UnderlyingUnitOfMeasureQty_8.setString("18551168");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_8);
    UnderlyingInstrument_8.insert(UnderlyingUnitOfMeasureQty_8.getString());
    all_values.push_back(UnderlyingInstrument_8);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_18;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_18("STRING_1982612267");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_18);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_18.insert(UnderlyingSecurityAltID_18.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_18("STRING_77870535");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_18);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_18.insert(UnderlyingSecurityAltIDSource_18.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_19;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_19("STRING_300189148");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_19);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_19.insert(UnderlyingSecurityAltID_19.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_19("STRING_1302485166");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_19);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_19.insert(UnderlyingSecurityAltIDSource_19.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_20;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_20("STRING_223346851");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_20);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_20.insert(UnderlyingSecurityAltID_20.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_20("STRING_2078208584");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_20);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_20.insert(UnderlyingSecurityAltIDSource_20.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_17;
      FIX::UnderlyingStipType UnderlyingStipType_17("STRING_2048401199");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_17);
      UnderlyingStipulations_NoUnderlyingStips_17.insert(UnderlyingStipType_17.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_17("STRING_1924479797");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_17);
      UnderlyingStipulations_NoUnderlyingStips_17.insert(UnderlyingStipValue_17.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_17);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_18;
      FIX::UnderlyingStipType UnderlyingStipType_18("STRING_291338103");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_18);
      UnderlyingStipulations_NoUnderlyingStips_18.insert(UnderlyingStipType_18.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_18("STRING_24209024");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_18);
      UnderlyingStipulations_NoUnderlyingStips_18.insert(UnderlyingStipValue_18.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_18);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_16;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_16("STRING_1837976358");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyID_16.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_16('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyIDSource_16.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_16(2019433756);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyRole_16.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_16);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_32("STRING_1163153435");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_32);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32.insert(UnderlyingInstrumentPartySubID_32.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_32(1729349898);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_32);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32.insert(UnderlyingInstrumentPartySubIDType_32.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_33("STRING_1892814484");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_33);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33.insert(UnderlyingInstrumentPartySubID_33.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_33(1151565432);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_33);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33.insert(UnderlyingInstrumentPartySubIDType_33.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_34("STRING_1737326029");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_34);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34.insert(UnderlyingInstrumentPartySubID_34.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_34(1568477392);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_34);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34.insert(UnderlyingInstrumentPartySubIDType_34.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_17;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_17("STRING_1444268539");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyID_17.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_17('6');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyIDSource_17.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_17(916871115);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyRole_17.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_17);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_35("STRING_1386262590");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_35);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35.insert(UnderlyingInstrumentPartySubID_35.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_35(1227850219);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_35);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35.insert(UnderlyingInstrumentPartySubIDType_35.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_18;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_18("STRING_1439388185");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyID_18.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_18('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyIDSource_18.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_18(1567121655);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyRole_18.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_18);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_36("STRING_1171766314");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_36);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36.insert(UnderlyingInstrumentPartySubID_36.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_36(1867310803);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_36);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36.insert(UnderlyingInstrumentPartySubIDType_36.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_37("STRING_429518323");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_37);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37.insert(UnderlyingInstrumentPartySubID_37.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_37(1395113166);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_37);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37.insert(UnderlyingInstrumentPartySubIDType_37.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_38("STRING_1798035739");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_38);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38.insert(UnderlyingInstrumentPartySubID_38.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_38(762727760);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_38);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38.insert(UnderlyingInstrumentPartySubIDType_38.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_9;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_9("DATA_1296030717");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingIssuer_9.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_9(1575031889);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingIssuerLen_9.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_9("DATA_1054065864");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingSecurityDesc_9.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_9(1320239741);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingSecurityDescLen_9.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_9;
    UnderlyingAdjustedQuantity_9.setString("14019045");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_9);
    UnderlyingInstrument_9.insert(UnderlyingAdjustedQuantity_9.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_9;
    UnderlyingAllocationPercent_9.setString("85.740000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_9);
    UnderlyingInstrument_9.insert(UnderlyingAllocationPercent_9.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_9;
    UnderlyingAttachmentPoint_9.setString("13.400000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_9);
    UnderlyingInstrument_9.insert(UnderlyingAttachmentPoint_9.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_9("STRING_1273854641");
    noUnderlyings_0_1.set(UnderlyingCFICode_9);
    UnderlyingInstrument_9.insert(UnderlyingCFICode_9.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_9("STRING_1778896534");
    noUnderlyings_0_1.set(UnderlyingCPProgram_9);
    UnderlyingInstrument_9.insert(UnderlyingCPProgram_9.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_9("STRING_277261127");
    noUnderlyings_0_1.set(UnderlyingCPRegType_9);
    UnderlyingInstrument_9.insert(UnderlyingCPRegType_9.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_9;
    UnderlyingCapValue_9.setString("8557208");
    noUnderlyings_0_1.set(UnderlyingCapValue_9);
    UnderlyingInstrument_9.insert(UnderlyingCapValue_9.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_9;
    UnderlyingCashAmount_9.setString("15242273");
    noUnderlyings_0_1.set(UnderlyingCashAmount_9);
    UnderlyingInstrument_9.insert(UnderlyingCashAmount_9.getString());
    FIX::UnderlyingCashType UnderlyingCashType_9("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_9);
    UnderlyingInstrument_9.insert(UnderlyingCashType_9.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_9;
    UnderlyingContractMultiplier_9.setString("4455632");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_9);
    UnderlyingInstrument_9.insert(UnderlyingContractMultiplier_9.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_9(945221115);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_9);
    UnderlyingInstrument_9.insert(UnderlyingContractMultiplierUnit_9.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_9("COUNTRY_725611451");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingCountryOfIssue_9.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_9("LOCALMKTDATE_1100261720");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_9);
    UnderlyingInstrument_9.insert(UnderlyingCouponPaymentDate_9.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_9;
    UnderlyingCouponRate_9.setString("22.300000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_9);
    UnderlyingInstrument_9.insert(UnderlyingCouponRate_9.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_9("STRING_1435069514");
    noUnderlyings_0_1.set(UnderlyingCreditRating_9);
    UnderlyingInstrument_9.insert(UnderlyingCreditRating_9.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_9("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_9);
    UnderlyingInstrument_9.insert(UnderlyingCurrency_9.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_9;
    UnderlyingCurrentValue_9.setString("7269740");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_9);
    UnderlyingInstrument_9.insert(UnderlyingCurrentValue_9.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_9;
    UnderlyingDetachmentPoint_9.setString("64.420000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_9);
    UnderlyingInstrument_9.insert(UnderlyingDetachmentPoint_9.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_9;
    UnderlyingDirtyPrice_9.setString("3620968");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_9);
    UnderlyingInstrument_9.insert(UnderlyingDirtyPrice_9.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_9;
    UnderlyingEndPrice_9.setString("20014908");
    noUnderlyings_0_1.set(UnderlyingEndPrice_9);
    UnderlyingInstrument_9.insert(UnderlyingEndPrice_9.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_9;
    UnderlyingEndValue_9.setString("4572191");
    noUnderlyings_0_1.set(UnderlyingEndValue_9);
    UnderlyingInstrument_9.insert(UnderlyingEndValue_9.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_9(81923965);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_9);
    UnderlyingInstrument_9.insert(UnderlyingExerciseStyle_9.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_9;
    UnderlyingFXRate_9.setString("2835255");
    noUnderlyings_0_1.set(UnderlyingFXRate_9);
    UnderlyingInstrument_9.insert(UnderlyingFXRate_9.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_9('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_9);
    UnderlyingInstrument_9.insert(UnderlyingFXRateCalc_9.getString());
    FIX::UnderlyingFactor UnderlyingFactor_9;
    UnderlyingFactor_9.setString("18799597");
    noUnderlyings_0_1.set(UnderlyingFactor_9);
    UnderlyingInstrument_9.insert(UnderlyingFactor_9.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_9(1046253291);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_9);
    UnderlyingInstrument_9.insert(UnderlyingFlowScheduleType_9.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_9("STRING_1000879343");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_9);
    UnderlyingInstrument_9.insert(UnderlyingInstrRegistry_9.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_9("LOCALMKTDATE_1307507945");
    noUnderlyings_0_1.set(UnderlyingIssueDate_9);
    UnderlyingInstrument_9.insert(UnderlyingIssueDate_9.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_9("STRING_2100319155");
    noUnderlyings_0_1.set(UnderlyingIssuer_9);
    UnderlyingInstrument_9.insert(UnderlyingIssuer_9.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_9("STRING_173635437");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingLocaleOfIssue_9.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_9("LOCALMKTDATE_561928830");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityDate_9.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_9("MONTHYEAR_697394082");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityMonthYear_9.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_9("TZTIMEONLY_1435226777");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityTime_9.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_9;
    UnderlyingNotionalPercentageOutstanding_9.setString("34.710000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_9);
    UnderlyingInstrument_9.insert(UnderlyingNotionalPercentageOutstanding_9.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_9('3');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_9);
    UnderlyingInstrument_9.insert(UnderlyingOptAttribute_9.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_9;
    UnderlyingOriginalNotionalPercentageOutstanding_9.setString("79.050000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_9);
    UnderlyingInstrument_9.insert(UnderlyingOriginalNotionalPercentageOutstanding_9.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_9("STRING_544020714");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_9);
    UnderlyingInstrument_9.insert(UnderlyingPriceUnitOfMeasure_9.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_9;
    UnderlyingPriceUnitOfMeasureQty_9.setString("18530343");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_9);
    UnderlyingInstrument_9.insert(UnderlyingPriceUnitOfMeasureQty_9.getString());
    FIX::UnderlyingProduct UnderlyingProduct_9(993830816);
    noUnderlyings_0_1.set(UnderlyingProduct_9);
    UnderlyingInstrument_9.insert(UnderlyingProduct_9.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_9(989583987);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_9);
    UnderlyingInstrument_9.insert(UnderlyingPutOrCall_9.getString());
    FIX::UnderlyingPx UnderlyingPx_9;
    UnderlyingPx_9.setString("6507718");
    noUnderlyings_0_1.set(UnderlyingPx_9);
    UnderlyingInstrument_9.insert(UnderlyingPx_9.getString());
    FIX::UnderlyingQty UnderlyingQty_9;
    UnderlyingQty_9.setString("17194422");
    noUnderlyings_0_1.set(UnderlyingQty_9);
    UnderlyingInstrument_9.insert(UnderlyingQty_9.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_9("LOCALMKTDATE_2089845708");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_9);
    UnderlyingInstrument_9.insert(UnderlyingRedemptionDate_9.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_9("STRING_365380388");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_9);
    UnderlyingInstrument_9.insert(UnderlyingRepoCollateralSecurityType_9.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_9;
    UnderlyingRepurchaseRate_9.setString("81.340000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_9);
    UnderlyingInstrument_9.insert(UnderlyingRepurchaseRate_9.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_9(281402722);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_9);
    UnderlyingInstrument_9.insert(UnderlyingRepurchaseTerm_9.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_9("STRING_1307839190");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_9);
    UnderlyingInstrument_9.insert(UnderlyingRestructuringType_9.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_9("STRING_1734002185");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityDesc_9.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_9("EXCHANGE_1714339164");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityExchange_9.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_9("STRING_1669935999");
    noUnderlyings_0_1.set(UnderlyingSecurityID_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityID_9.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_9("STRING_1588009393");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityIDSource_9.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_9("STRING_24074625");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_9);
    UnderlyingInstrument_9.insert(UnderlyingSecuritySubType_9.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_9("STRING_1751859964");
    noUnderlyings_0_1.set(UnderlyingSecurityType_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityType_9.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_9("STRING_1871534924");
    noUnderlyings_0_1.set(UnderlyingSeniority_9);
    UnderlyingInstrument_9.insert(UnderlyingSeniority_9.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_9("STRING_1876406899");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_9);
    UnderlyingInstrument_9.insert(UnderlyingSettlMethod_9.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_9(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_9);
    UnderlyingInstrument_9.insert(UnderlyingSettlementType_9.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_9;
    UnderlyingStartValue_9.setString("7703045");
    noUnderlyings_0_1.set(UnderlyingStartValue_9);
    UnderlyingInstrument_9.insert(UnderlyingStartValue_9.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_9("STRING_729802595");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingStateOrProvinceOfIssue_9.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_9("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_9);
    UnderlyingInstrument_9.insert(UnderlyingStrikeCurrency_9.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_9;
    UnderlyingStrikePrice_9.setString("9034380");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_9);
    UnderlyingInstrument_9.insert(UnderlyingStrikePrice_9.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_9("STRING_1206289148");
    noUnderlyings_0_1.set(UnderlyingSymbol_9);
    UnderlyingInstrument_9.insert(UnderlyingSymbol_9.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_9("STRING_1420534157");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_9);
    UnderlyingInstrument_9.insert(UnderlyingSymbolSfx_9.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_9("STRING_191181161");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_9);
    UnderlyingInstrument_9.insert(UnderlyingTimeUnit_9.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_9("STRING_894588971");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_9);
    UnderlyingInstrument_9.insert(UnderlyingUnitOfMeasure_9.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_9;
    UnderlyingUnitOfMeasureQty_9.setString("17493411");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_9);
    UnderlyingInstrument_9.insert(UnderlyingUnitOfMeasureQty_9.getString());
    all_values.push_back(UnderlyingInstrument_9);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_21;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_21("STRING_1438609686");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_21);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_21.insert(UnderlyingSecurityAltID_21.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_21("STRING_1454891816");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_21);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_21.insert(UnderlyingSecurityAltIDSource_21.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_22;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_22("STRING_750016235");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_22);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_22.insert(UnderlyingSecurityAltID_22.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_22("STRING_280710025");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_22);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_22.insert(UnderlyingSecurityAltIDSource_22.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_19;
      FIX::UnderlyingStipType UnderlyingStipType_19("STRING_321974854");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_19);
      UnderlyingStipulations_NoUnderlyingStips_19.insert(UnderlyingStipType_19.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_19("STRING_223072085");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_19);
      UnderlyingStipulations_NoUnderlyingStips_19.insert(UnderlyingStipValue_19.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_19);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_20;
      FIX::UnderlyingStipType UnderlyingStipType_20("STRING_323560361");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_20);
      UnderlyingStipulations_NoUnderlyingStips_20.insert(UnderlyingStipType_20.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_20("STRING_1329002988");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_20);
      UnderlyingStipulations_NoUnderlyingStips_20.insert(UnderlyingStipValue_20.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_20);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_21;
      FIX::UnderlyingStipType UnderlyingStipType_21("STRING_504474808");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_21);
      UnderlyingStipulations_NoUnderlyingStips_21.insert(UnderlyingStipType_21.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_21("STRING_1631399551");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_21);
      UnderlyingStipulations_NoUnderlyingStips_21.insert(UnderlyingStipValue_21.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_21);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_19;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_19("STRING_71330324");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyID_19.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_19('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyIDSource_19.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_19(356047271);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyRole_19.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_19);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_39("STRING_758228219");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_39);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39.insert(UnderlyingInstrumentPartySubID_39.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_39(80098548);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_39);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39.insert(UnderlyingInstrumentPartySubIDType_39.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_40("STRING_1971811849");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_40);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40.insert(UnderlyingInstrumentPartySubID_40.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_40(95080592);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_40);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40.insert(UnderlyingInstrumentPartySubIDType_40.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_41("STRING_850403116");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_41);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41.insert(UnderlyingInstrumentPartySubID_41.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_41(554130796);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_41);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41.insert(UnderlyingInstrumentPartySubIDType_41.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_10;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_10("DATA_739440911");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingIssuer_10.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_10(1573543191);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingIssuerLen_10.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_10("DATA_1457568828");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingSecurityDesc_10.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_10(1945730059);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingSecurityDescLen_10.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_10;
    UnderlyingAdjustedQuantity_10.setString("8465937");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_10);
    UnderlyingInstrument_10.insert(UnderlyingAdjustedQuantity_10.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_10;
    UnderlyingAllocationPercent_10.setString("99.890000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_10);
    UnderlyingInstrument_10.insert(UnderlyingAllocationPercent_10.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_10;
    UnderlyingAttachmentPoint_10.setString("53.830000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_10);
    UnderlyingInstrument_10.insert(UnderlyingAttachmentPoint_10.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_10("STRING_448451178");
    noUnderlyings_0_2.set(UnderlyingCFICode_10);
    UnderlyingInstrument_10.insert(UnderlyingCFICode_10.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_10("STRING_1404935408");
    noUnderlyings_0_2.set(UnderlyingCPProgram_10);
    UnderlyingInstrument_10.insert(UnderlyingCPProgram_10.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_10("STRING_2131445069");
    noUnderlyings_0_2.set(UnderlyingCPRegType_10);
    UnderlyingInstrument_10.insert(UnderlyingCPRegType_10.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_10;
    UnderlyingCapValue_10.setString("19033429");
    noUnderlyings_0_2.set(UnderlyingCapValue_10);
    UnderlyingInstrument_10.insert(UnderlyingCapValue_10.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_10;
    UnderlyingCashAmount_10.setString("74679");
    noUnderlyings_0_2.set(UnderlyingCashAmount_10);
    UnderlyingInstrument_10.insert(UnderlyingCashAmount_10.getString());
    FIX::UnderlyingCashType UnderlyingCashType_10("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_10);
    UnderlyingInstrument_10.insert(UnderlyingCashType_10.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_10;
    UnderlyingContractMultiplier_10.setString("18615229");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_10);
    UnderlyingInstrument_10.insert(UnderlyingContractMultiplier_10.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_10(329442849);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_10);
    UnderlyingInstrument_10.insert(UnderlyingContractMultiplierUnit_10.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_10("COUNTRY_487743532");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingCountryOfIssue_10.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_10("LOCALMKTDATE_37599681");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_10);
    UnderlyingInstrument_10.insert(UnderlyingCouponPaymentDate_10.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_10;
    UnderlyingCouponRate_10.setString("58.380000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_10);
    UnderlyingInstrument_10.insert(UnderlyingCouponRate_10.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_10("STRING_992218340");
    noUnderlyings_0_2.set(UnderlyingCreditRating_10);
    UnderlyingInstrument_10.insert(UnderlyingCreditRating_10.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_10("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_10);
    UnderlyingInstrument_10.insert(UnderlyingCurrency_10.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_10;
    UnderlyingCurrentValue_10.setString("10635486");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_10);
    UnderlyingInstrument_10.insert(UnderlyingCurrentValue_10.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_10;
    UnderlyingDetachmentPoint_10.setString("74.880000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_10);
    UnderlyingInstrument_10.insert(UnderlyingDetachmentPoint_10.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_10;
    UnderlyingDirtyPrice_10.setString("7825309");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_10);
    UnderlyingInstrument_10.insert(UnderlyingDirtyPrice_10.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_10;
    UnderlyingEndPrice_10.setString("11589536");
    noUnderlyings_0_2.set(UnderlyingEndPrice_10);
    UnderlyingInstrument_10.insert(UnderlyingEndPrice_10.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_10;
    UnderlyingEndValue_10.setString("14335957");
    noUnderlyings_0_2.set(UnderlyingEndValue_10);
    UnderlyingInstrument_10.insert(UnderlyingEndValue_10.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_10(862629535);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_10);
    UnderlyingInstrument_10.insert(UnderlyingExerciseStyle_10.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_10;
    UnderlyingFXRate_10.setString("9832818");
    noUnderlyings_0_2.set(UnderlyingFXRate_10);
    UnderlyingInstrument_10.insert(UnderlyingFXRate_10.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_10('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_10);
    UnderlyingInstrument_10.insert(UnderlyingFXRateCalc_10.getString());
    FIX::UnderlyingFactor UnderlyingFactor_10;
    UnderlyingFactor_10.setString("17130326");
    noUnderlyings_0_2.set(UnderlyingFactor_10);
    UnderlyingInstrument_10.insert(UnderlyingFactor_10.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_10(1537412611);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_10);
    UnderlyingInstrument_10.insert(UnderlyingFlowScheduleType_10.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_10("STRING_120633563");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_10);
    UnderlyingInstrument_10.insert(UnderlyingInstrRegistry_10.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_10("LOCALMKTDATE_1139092195");
    noUnderlyings_0_2.set(UnderlyingIssueDate_10);
    UnderlyingInstrument_10.insert(UnderlyingIssueDate_10.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_10("STRING_847497791");
    noUnderlyings_0_2.set(UnderlyingIssuer_10);
    UnderlyingInstrument_10.insert(UnderlyingIssuer_10.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_10("STRING_2066363622");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingLocaleOfIssue_10.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_10("LOCALMKTDATE_1985685896");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityDate_10.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_10("MONTHYEAR_348764132");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityMonthYear_10.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_10("TZTIMEONLY_611715357");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityTime_10.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_10;
    UnderlyingNotionalPercentageOutstanding_10.setString("34.260000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_10);
    UnderlyingInstrument_10.insert(UnderlyingNotionalPercentageOutstanding_10.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_10('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_10);
    UnderlyingInstrument_10.insert(UnderlyingOptAttribute_10.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_10;
    UnderlyingOriginalNotionalPercentageOutstanding_10.setString("67.780000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_10);
    UnderlyingInstrument_10.insert(UnderlyingOriginalNotionalPercentageOutstanding_10.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_10("STRING_42512773");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_10);
    UnderlyingInstrument_10.insert(UnderlyingPriceUnitOfMeasure_10.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_10;
    UnderlyingPriceUnitOfMeasureQty_10.setString("17611675");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_10);
    UnderlyingInstrument_10.insert(UnderlyingPriceUnitOfMeasureQty_10.getString());
    FIX::UnderlyingProduct UnderlyingProduct_10(860348225);
    noUnderlyings_0_2.set(UnderlyingProduct_10);
    UnderlyingInstrument_10.insert(UnderlyingProduct_10.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_10(1904035741);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_10);
    UnderlyingInstrument_10.insert(UnderlyingPutOrCall_10.getString());
    FIX::UnderlyingPx UnderlyingPx_10;
    UnderlyingPx_10.setString("20906103");
    noUnderlyings_0_2.set(UnderlyingPx_10);
    UnderlyingInstrument_10.insert(UnderlyingPx_10.getString());
    FIX::UnderlyingQty UnderlyingQty_10;
    UnderlyingQty_10.setString("13480917");
    noUnderlyings_0_2.set(UnderlyingQty_10);
    UnderlyingInstrument_10.insert(UnderlyingQty_10.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_10("LOCALMKTDATE_1941635422");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_10);
    UnderlyingInstrument_10.insert(UnderlyingRedemptionDate_10.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_10("STRING_1601572575");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_10);
    UnderlyingInstrument_10.insert(UnderlyingRepoCollateralSecurityType_10.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_10;
    UnderlyingRepurchaseRate_10.setString("64.490000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_10);
    UnderlyingInstrument_10.insert(UnderlyingRepurchaseRate_10.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_10(1463151007);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_10);
    UnderlyingInstrument_10.insert(UnderlyingRepurchaseTerm_10.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_10("STRING_2028056291");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_10);
    UnderlyingInstrument_10.insert(UnderlyingRestructuringType_10.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_10("STRING_1256375113");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityDesc_10.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_10("EXCHANGE_2138518495");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityExchange_10.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_10("STRING_663103630");
    noUnderlyings_0_2.set(UnderlyingSecurityID_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityID_10.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_10("STRING_267845079");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityIDSource_10.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_10("STRING_1424630555");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_10);
    UnderlyingInstrument_10.insert(UnderlyingSecuritySubType_10.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_10("STRING_1525733166");
    noUnderlyings_0_2.set(UnderlyingSecurityType_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityType_10.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_10("STRING_1251126894");
    noUnderlyings_0_2.set(UnderlyingSeniority_10);
    UnderlyingInstrument_10.insert(UnderlyingSeniority_10.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_10("STRING_805823207");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_10);
    UnderlyingInstrument_10.insert(UnderlyingSettlMethod_10.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_10(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_10);
    UnderlyingInstrument_10.insert(UnderlyingSettlementType_10.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_10;
    UnderlyingStartValue_10.setString("6410558");
    noUnderlyings_0_2.set(UnderlyingStartValue_10);
    UnderlyingInstrument_10.insert(UnderlyingStartValue_10.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_10("STRING_926456770");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingStateOrProvinceOfIssue_10.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_10("JPY");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_10);
    UnderlyingInstrument_10.insert(UnderlyingStrikeCurrency_10.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_10;
    UnderlyingStrikePrice_10.setString("8453367");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_10);
    UnderlyingInstrument_10.insert(UnderlyingStrikePrice_10.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_10("STRING_2068576612");
    noUnderlyings_0_2.set(UnderlyingSymbol_10);
    UnderlyingInstrument_10.insert(UnderlyingSymbol_10.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_10("STRING_1837317781");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_10);
    UnderlyingInstrument_10.insert(UnderlyingSymbolSfx_10.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_10("STRING_1457052102");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_10);
    UnderlyingInstrument_10.insert(UnderlyingTimeUnit_10.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_10("STRING_207746391");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_10);
    UnderlyingInstrument_10.insert(UnderlyingUnitOfMeasure_10.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_10;
    UnderlyingUnitOfMeasureQty_10.setString("14435336");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_10);
    UnderlyingInstrument_10.insert(UnderlyingUnitOfMeasureQty_10.getString());
    all_values.push_back(UnderlyingInstrument_10);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_23;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_23("STRING_250259164");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_23);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_23.insert(UnderlyingSecurityAltID_23.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_23("STRING_1057217561");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_23);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_23.insert(UnderlyingSecurityAltIDSource_23.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_22;
      FIX::UnderlyingStipType UnderlyingStipType_22("STRING_6811257");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_22);
      UnderlyingStipulations_NoUnderlyingStips_22.insert(UnderlyingStipType_22.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_22("STRING_1000344298");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_22);
      UnderlyingStipulations_NoUnderlyingStips_22.insert(UnderlyingStipValue_22.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_22);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_20;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_20("STRING_1948446679");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyID_20.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_20('4');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyIDSource_20.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_20(159028015);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyRole_20.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_20);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_42("STRING_335005868");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_42);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42.insert(UnderlyingInstrumentPartySubID_42.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_42(1415403129);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_42);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42.insert(UnderlyingInstrumentPartySubIDType_42.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_43("STRING_1255148886");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_43);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43.insert(UnderlyingInstrumentPartySubID_43.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_43(998109498);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_43);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43.insert(UnderlyingInstrumentPartySubIDType_43.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);

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
