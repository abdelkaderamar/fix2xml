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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AssignmentReport msg;

  list<multiset<string>> all_values;
  multiset<string> AssignmentReport_0;
  FIX::Account Account_0("STRING_758252186");
  msg.set(Account_0);
  AssignmentReport_0.insert(Account_0.getString());
  FIX::AccountType AccountType_0(6);
  msg.set(AccountType_0);
  AssignmentReport_0.insert(AccountType_0.getString());
  FIX::AsgnRptID AsgnRptID_0("STRING_1351420116");
  msg.set(AsgnRptID_0);
  AssignmentReport_0.insert(AsgnRptID_0.getString());
  FIX::AssignmentMethod AssignmentMethod_0('P');
  msg.set(AssignmentMethod_0);
  AssignmentReport_0.insert(AssignmentMethod_0.getString());
  FIX::AssignmentUnit AssignmentUnit_0;
  AssignmentUnit_0.setString("7471309");
  msg.set(AssignmentUnit_0);
  AssignmentReport_0.insert(AssignmentUnit_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_5("LOCALMKTDATE_755995156");
  msg.set(ClearingBusinessDate_5);
  AssignmentReport_0.insert(ClearingBusinessDate_5.getString());
  FIX::Currency Currency_4("GBP");
  msg.set(Currency_4);
  AssignmentReport_0.insert(Currency_4.getString());
  FIX::EncodedText EncodedText_9("DATA_2092727175");
  msg.set(EncodedText_9);
  AssignmentReport_0.insert(EncodedText_9.getString());
  FIX::EncodedTextLen EncodedTextLen_9(734411969);
  msg.set(EncodedTextLen_9);
  AssignmentReport_0.insert(EncodedTextLen_9.getString());
  FIX::ExerciseMethod ExerciseMethod_0('A');
  msg.set(ExerciseMethod_0);
  AssignmentReport_0.insert(ExerciseMethod_0.getString());
  FIX::ExpireDate ExpireDate_0("LOCALMKTDATE_2026270171");
  msg.set(ExpireDate_0);
  AssignmentReport_0.insert(ExpireDate_0.getString());
  FIX::LastRptRequested LastRptRequested_0(false);
  msg.set(LastRptRequested_0);
  AssignmentReport_0.insert(LastRptRequested_0.getString());
  FIX::OpenInterest OpenInterest_0;
  OpenInterest_0.setString("5987505");
  msg.set(OpenInterest_0);
  AssignmentReport_0.insert(OpenInterest_0.getString());
  FIX::PosReqID PosReqID_0("STRING_1746777960");
  msg.set(PosReqID_0);
  AssignmentReport_0.insert(PosReqID_0.getString());
  FIX::PriorSettlPrice PriorSettlPrice_1;
  PriorSettlPrice_1.setString("4779116");
  msg.set(PriorSettlPrice_1);
  AssignmentReport_0.insert(PriorSettlPrice_1.getString());
  FIX::SettlPrice SettlPrice_1;
  SettlPrice_1.setString("6122582");
  msg.set(SettlPrice_1);
  AssignmentReport_0.insert(SettlPrice_1.getString());
  FIX::SettlPriceType SettlPriceType_0(2);
  msg.set(SettlPriceType_0);
  AssignmentReport_0.insert(SettlPriceType_0.getString());
  FIX::SettlSessID SettlSessID_1("STRING_ITD");
  msg.set(SettlSessID_1);
  AssignmentReport_0.insert(SettlSessID_1.getString());
  FIX::SettlSessSubID SettlSessSubID_0("STRING_1822907078");
  msg.set(SettlSessSubID_0);
  AssignmentReport_0.insert(SettlSessSubID_0.getString());
  FIX::Text Text_9("STRING_27673552");
  msg.set(Text_9);
  AssignmentReport_0.insert(Text_9.getString());
  FIX::ThresholdAmount ThresholdAmount_0;
  ThresholdAmount_0.setString("18030830");
  msg.set(ThresholdAmount_0);
  AssignmentReport_0.insert(ThresholdAmount_0.getString());
  FIX::TotNumAssignmentReports TotNumAssignmentReports_0(900904005);
  msg.set(TotNumAssignmentReports_0);
  AssignmentReport_0.insert(TotNumAssignmentReports_0.getString());
  FIX::UnderlyingSettlPrice UnderlyingSettlPrice_0;
  UnderlyingSettlPrice_0.setString("17275169");
  msg.set(UnderlyingSettlPrice_0);
  AssignmentReport_0.insert(UnderlyingSettlPrice_0.getString());
  all_values.push_back(AssignmentReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_0;
  FIX::ApplID ApplID_0("STRING_1364463829");
  msg.set(ApplID_0);
  ApplicationSequenceControl_0.insert(ApplID_0.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_0(852583594);
  msg.set(ApplLastSeqNum_0);
  ApplicationSequenceControl_0.insert(ApplLastSeqNum_0.getString());
  FIX::ApplResendFlag ApplResendFlag_0(false);
  msg.set(ApplResendFlag_0);
  ApplicationSequenceControl_0.insert(ApplResendFlag_0.getString());
  FIX::ApplSeqNum ApplSeqNum_0(2075592772);
  msg.set(ApplSeqNum_0);
  ApplicationSequenceControl_0.insert(ApplSeqNum_0.getString());
  all_values.push_back(ApplicationSequenceControl_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_7;
    FIX::EncodedLegIssuer EncodedLegIssuer_7("DATA_15365303");
    noLegs_0_0.set(EncodedLegIssuer_7);
    InstrumentLeg_7.insert(EncodedLegIssuer_7.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_7(2135624475);
    noLegs_0_0.set(EncodedLegIssuerLen_7);
    InstrumentLeg_7.insert(EncodedLegIssuerLen_7.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_7("DATA_1789246291");
    noLegs_0_0.set(EncodedLegSecurityDesc_7);
    InstrumentLeg_7.insert(EncodedLegSecurityDesc_7.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_7(650574098);
    noLegs_0_0.set(EncodedLegSecurityDescLen_7);
    InstrumentLeg_7.insert(EncodedLegSecurityDescLen_7.getString());
    FIX::LegCFICode LegCFICode_7("STRING_1339560943");
    noLegs_0_0.set(LegCFICode_7);
    InstrumentLeg_7.insert(LegCFICode_7.getString());
    FIX::LegContractMultiplier LegContractMultiplier_7;
    LegContractMultiplier_7.setString("20901050");
    noLegs_0_0.set(LegContractMultiplier_7);
    InstrumentLeg_7.insert(LegContractMultiplier_7.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_7(1397705083);
    noLegs_0_0.set(LegContractMultiplierUnit_7);
    InstrumentLeg_7.insert(LegContractMultiplierUnit_7.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_7("MONTHYEAR_2095556099");
    noLegs_0_0.set(LegContractSettlMonth_7);
    InstrumentLeg_7.insert(LegContractSettlMonth_7.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_7("COUNTRY_1365258483");
    noLegs_0_0.set(LegCountryOfIssue_7);
    InstrumentLeg_7.insert(LegCountryOfIssue_7.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_7("LOCALMKTDATE_409553161");
    noLegs_0_0.set(LegCouponPaymentDate_7);
    InstrumentLeg_7.insert(LegCouponPaymentDate_7.getString());
    FIX::LegCouponRate LegCouponRate_7;
    LegCouponRate_7.setString("96.260000");
    noLegs_0_0.set(LegCouponRate_7);
    InstrumentLeg_7.insert(LegCouponRate_7.getString());
    FIX::LegCreditRating LegCreditRating_7("STRING_2099670453");
    noLegs_0_0.set(LegCreditRating_7);
    InstrumentLeg_7.insert(LegCreditRating_7.getString());
    FIX::LegCurrency LegCurrency_7("USD");
    noLegs_0_0.set(LegCurrency_7);
    InstrumentLeg_7.insert(LegCurrency_7.getString());
    FIX::LegDatedDate LegDatedDate_7("LOCALMKTDATE_1546357430");
    noLegs_0_0.set(LegDatedDate_7);
    InstrumentLeg_7.insert(LegDatedDate_7.getString());
    FIX::LegExerciseStyle LegExerciseStyle_7(307957954);
    noLegs_0_0.set(LegExerciseStyle_7);
    InstrumentLeg_7.insert(LegExerciseStyle_7.getString());
    FIX::LegFactor LegFactor_7;
    LegFactor_7.setString("15188804");
    noLegs_0_0.set(LegFactor_7);
    InstrumentLeg_7.insert(LegFactor_7.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_7(2024269053);
    noLegs_0_0.set(LegFlowScheduleType_7);
    InstrumentLeg_7.insert(LegFlowScheduleType_7.getString());
    FIX::LegInstrRegistry LegInstrRegistry_7("STRING_920216167");
    noLegs_0_0.set(LegInstrRegistry_7);
    InstrumentLeg_7.insert(LegInstrRegistry_7.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_7("LOCALMKTDATE_1400604121");
    noLegs_0_0.set(LegInterestAccrualDate_7);
    InstrumentLeg_7.insert(LegInterestAccrualDate_7.getString());
    FIX::LegIssueDate LegIssueDate_7("LOCALMKTDATE_157621833");
    noLegs_0_0.set(LegIssueDate_7);
    InstrumentLeg_7.insert(LegIssueDate_7.getString());
    FIX::LegIssuer LegIssuer_7("STRING_595639597");
    noLegs_0_0.set(LegIssuer_7);
    InstrumentLeg_7.insert(LegIssuer_7.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_7("STRING_1428277673");
    noLegs_0_0.set(LegLocaleOfIssue_7);
    InstrumentLeg_7.insert(LegLocaleOfIssue_7.getString());
    FIX::LegMaturityDate LegMaturityDate_7("LOCALMKTDATE_1960704855");
    noLegs_0_0.set(LegMaturityDate_7);
    InstrumentLeg_7.insert(LegMaturityDate_7.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_7("MONTHYEAR_1496543602");
    noLegs_0_0.set(LegMaturityMonthYear_7);
    InstrumentLeg_7.insert(LegMaturityMonthYear_7.getString());
    FIX::LegMaturityTime LegMaturityTime_7("TZTIMEONLY_1008311014");
    noLegs_0_0.set(LegMaturityTime_7);
    InstrumentLeg_7.insert(LegMaturityTime_7.getString());
    FIX::LegOptAttribute LegOptAttribute_7('1');
    noLegs_0_0.set(LegOptAttribute_7);
    InstrumentLeg_7.insert(LegOptAttribute_7.getString());
    FIX::LegOptionRatio LegOptionRatio_7;
    LegOptionRatio_7.setString("2016435");
    noLegs_0_0.set(LegOptionRatio_7);
    InstrumentLeg_7.insert(LegOptionRatio_7.getString());
    FIX::LegPool LegPool_7("STRING_1154206401");
    noLegs_0_0.set(LegPool_7);
    InstrumentLeg_7.insert(LegPool_7.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_7("STRING_1105794160");
    noLegs_0_0.set(LegPriceUnitOfMeasure_7);
    InstrumentLeg_7.insert(LegPriceUnitOfMeasure_7.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_7;
    LegPriceUnitOfMeasureQty_7.setString("12326376");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_7);
    InstrumentLeg_7.insert(LegPriceUnitOfMeasureQty_7.getString());
    FIX::LegProduct LegProduct_7(1169571704);
    noLegs_0_0.set(LegProduct_7);
    InstrumentLeg_7.insert(LegProduct_7.getString());
    FIX::LegPutOrCall LegPutOrCall_7(1093934987);
    noLegs_0_0.set(LegPutOrCall_7);
    InstrumentLeg_7.insert(LegPutOrCall_7.getString());
    FIX::LegRatioQty LegRatioQty_7;
    LegRatioQty_7.setString("8744002");
    noLegs_0_0.set(LegRatioQty_7);
    InstrumentLeg_7.insert(LegRatioQty_7.getString());
    FIX::LegRedemptionDate LegRedemptionDate_7("LOCALMKTDATE_1820145803");
    noLegs_0_0.set(LegRedemptionDate_7);
    InstrumentLeg_7.insert(LegRedemptionDate_7.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_7("STRING_286012283");
    noLegs_0_0.set(LegRepoCollateralSecurityType_7);
    InstrumentLeg_7.insert(LegRepoCollateralSecurityType_7.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_7;
    LegRepurchaseRate_7.setString("17.380000");
    noLegs_0_0.set(LegRepurchaseRate_7);
    InstrumentLeg_7.insert(LegRepurchaseRate_7.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_7(1070367238);
    noLegs_0_0.set(LegRepurchaseTerm_7);
    InstrumentLeg_7.insert(LegRepurchaseTerm_7.getString());
    FIX::LegSecurityDesc LegSecurityDesc_7("STRING_234084734");
    noLegs_0_0.set(LegSecurityDesc_7);
    InstrumentLeg_7.insert(LegSecurityDesc_7.getString());
    FIX::LegSecurityExchange LegSecurityExchange_7("EXCHANGE_34796573");
    noLegs_0_0.set(LegSecurityExchange_7);
    InstrumentLeg_7.insert(LegSecurityExchange_7.getString());
    FIX::LegSecurityID LegSecurityID_7("STRING_1479920399");
    noLegs_0_0.set(LegSecurityID_7);
    InstrumentLeg_7.insert(LegSecurityID_7.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_7("STRING_127400713");
    noLegs_0_0.set(LegSecurityIDSource_7);
    InstrumentLeg_7.insert(LegSecurityIDSource_7.getString());
    FIX::LegSecuritySubType LegSecuritySubType_7("STRING_2134467026");
    noLegs_0_0.set(LegSecuritySubType_7);
    InstrumentLeg_7.insert(LegSecuritySubType_7.getString());
    FIX::LegSecurityType LegSecurityType_7("STRING_1189127790");
    noLegs_0_0.set(LegSecurityType_7);
    InstrumentLeg_7.insert(LegSecurityType_7.getString());
    FIX::LegSide LegSide_7('2');
    noLegs_0_0.set(LegSide_7);
    InstrumentLeg_7.insert(LegSide_7.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_7("STRING_1533340809");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_7);
    InstrumentLeg_7.insert(LegStateOrProvinceOfIssue_7.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_7("CHF");
    noLegs_0_0.set(LegStrikeCurrency_7);
    InstrumentLeg_7.insert(LegStrikeCurrency_7.getString());
    FIX::LegStrikePrice LegStrikePrice_7;
    LegStrikePrice_7.setString("14101262");
    noLegs_0_0.set(LegStrikePrice_7);
    InstrumentLeg_7.insert(LegStrikePrice_7.getString());
    FIX::LegSymbol LegSymbol_7("STRING_269818263");
    noLegs_0_0.set(LegSymbol_7);
    InstrumentLeg_7.insert(LegSymbol_7.getString());
    FIX::LegSymbolSfx LegSymbolSfx_7("STRING_671504151");
    noLegs_0_0.set(LegSymbolSfx_7);
    InstrumentLeg_7.insert(LegSymbolSfx_7.getString());
    FIX::LegTimeUnit LegTimeUnit_7("STRING_1567748048");
    noLegs_0_0.set(LegTimeUnit_7);
    InstrumentLeg_7.insert(LegTimeUnit_7.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_7("STRING_865457860");
    noLegs_0_0.set(LegUnitOfMeasure_7);
    InstrumentLeg_7.insert(LegUnitOfMeasure_7.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_7;
    LegUnitOfMeasureQty_7.setString("20997818");
    noLegs_0_0.set(LegUnitOfMeasureQty_7);
    InstrumentLeg_7.insert(LegUnitOfMeasureQty_7.getString());
    all_values.push_back(InstrumentLeg_7);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_13;
      FIX::LegSecurityAltID LegSecurityAltID_13("STRING_214517815");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_13);
      LegSecAltIDGrp_NoLegSecurityAltID_13.insert(LegSecurityAltID_13.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_13("STRING_960609190");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_13);
      LegSecAltIDGrp_NoLegSecurityAltID_13.insert(LegSecurityAltIDSource_13.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_13);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_8;
    FIX::EncodedLegIssuer EncodedLegIssuer_8("DATA_411170643");
    noLegs_0_1.set(EncodedLegIssuer_8);
    InstrumentLeg_8.insert(EncodedLegIssuer_8.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_8(416161364);
    noLegs_0_1.set(EncodedLegIssuerLen_8);
    InstrumentLeg_8.insert(EncodedLegIssuerLen_8.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_8("DATA_2114815592");
    noLegs_0_1.set(EncodedLegSecurityDesc_8);
    InstrumentLeg_8.insert(EncodedLegSecurityDesc_8.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_8(1516964803);
    noLegs_0_1.set(EncodedLegSecurityDescLen_8);
    InstrumentLeg_8.insert(EncodedLegSecurityDescLen_8.getString());
    FIX::LegCFICode LegCFICode_8("STRING_1648799018");
    noLegs_0_1.set(LegCFICode_8);
    InstrumentLeg_8.insert(LegCFICode_8.getString());
    FIX::LegContractMultiplier LegContractMultiplier_8;
    LegContractMultiplier_8.setString("11369036");
    noLegs_0_1.set(LegContractMultiplier_8);
    InstrumentLeg_8.insert(LegContractMultiplier_8.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_8(463416142);
    noLegs_0_1.set(LegContractMultiplierUnit_8);
    InstrumentLeg_8.insert(LegContractMultiplierUnit_8.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_8("MONTHYEAR_375715667");
    noLegs_0_1.set(LegContractSettlMonth_8);
    InstrumentLeg_8.insert(LegContractSettlMonth_8.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_8("COUNTRY_809565803");
    noLegs_0_1.set(LegCountryOfIssue_8);
    InstrumentLeg_8.insert(LegCountryOfIssue_8.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_8("LOCALMKTDATE_749428425");
    noLegs_0_1.set(LegCouponPaymentDate_8);
    InstrumentLeg_8.insert(LegCouponPaymentDate_8.getString());
    FIX::LegCouponRate LegCouponRate_8;
    LegCouponRate_8.setString("74.050000");
    noLegs_0_1.set(LegCouponRate_8);
    InstrumentLeg_8.insert(LegCouponRate_8.getString());
    FIX::LegCreditRating LegCreditRating_8("STRING_1879933041");
    noLegs_0_1.set(LegCreditRating_8);
    InstrumentLeg_8.insert(LegCreditRating_8.getString());
    FIX::LegCurrency LegCurrency_8("GBP");
    noLegs_0_1.set(LegCurrency_8);
    InstrumentLeg_8.insert(LegCurrency_8.getString());
    FIX::LegDatedDate LegDatedDate_8("LOCALMKTDATE_1212369792");
    noLegs_0_1.set(LegDatedDate_8);
    InstrumentLeg_8.insert(LegDatedDate_8.getString());
    FIX::LegExerciseStyle LegExerciseStyle_8(1110913873);
    noLegs_0_1.set(LegExerciseStyle_8);
    InstrumentLeg_8.insert(LegExerciseStyle_8.getString());
    FIX::LegFactor LegFactor_8;
    LegFactor_8.setString("12145173");
    noLegs_0_1.set(LegFactor_8);
    InstrumentLeg_8.insert(LegFactor_8.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_8(254013935);
    noLegs_0_1.set(LegFlowScheduleType_8);
    InstrumentLeg_8.insert(LegFlowScheduleType_8.getString());
    FIX::LegInstrRegistry LegInstrRegistry_8("STRING_1010417088");
    noLegs_0_1.set(LegInstrRegistry_8);
    InstrumentLeg_8.insert(LegInstrRegistry_8.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_8("LOCALMKTDATE_600374518");
    noLegs_0_1.set(LegInterestAccrualDate_8);
    InstrumentLeg_8.insert(LegInterestAccrualDate_8.getString());
    FIX::LegIssueDate LegIssueDate_8("LOCALMKTDATE_1751099679");
    noLegs_0_1.set(LegIssueDate_8);
    InstrumentLeg_8.insert(LegIssueDate_8.getString());
    FIX::LegIssuer LegIssuer_8("STRING_281317117");
    noLegs_0_1.set(LegIssuer_8);
    InstrumentLeg_8.insert(LegIssuer_8.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_8("STRING_2010500732");
    noLegs_0_1.set(LegLocaleOfIssue_8);
    InstrumentLeg_8.insert(LegLocaleOfIssue_8.getString());
    FIX::LegMaturityDate LegMaturityDate_8("LOCALMKTDATE_2020917943");
    noLegs_0_1.set(LegMaturityDate_8);
    InstrumentLeg_8.insert(LegMaturityDate_8.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_8("MONTHYEAR_952821268");
    noLegs_0_1.set(LegMaturityMonthYear_8);
    InstrumentLeg_8.insert(LegMaturityMonthYear_8.getString());
    FIX::LegMaturityTime LegMaturityTime_8("TZTIMEONLY_1430765132");
    noLegs_0_1.set(LegMaturityTime_8);
    InstrumentLeg_8.insert(LegMaturityTime_8.getString());
    FIX::LegOptAttribute LegOptAttribute_8('7');
    noLegs_0_1.set(LegOptAttribute_8);
    InstrumentLeg_8.insert(LegOptAttribute_8.getString());
    FIX::LegOptionRatio LegOptionRatio_8;
    LegOptionRatio_8.setString("9051194");
    noLegs_0_1.set(LegOptionRatio_8);
    InstrumentLeg_8.insert(LegOptionRatio_8.getString());
    FIX::LegPool LegPool_8("STRING_664250739");
    noLegs_0_1.set(LegPool_8);
    InstrumentLeg_8.insert(LegPool_8.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_8("STRING_953409970");
    noLegs_0_1.set(LegPriceUnitOfMeasure_8);
    InstrumentLeg_8.insert(LegPriceUnitOfMeasure_8.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_8;
    LegPriceUnitOfMeasureQty_8.setString("18657286");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_8);
    InstrumentLeg_8.insert(LegPriceUnitOfMeasureQty_8.getString());
    FIX::LegProduct LegProduct_8(1075421382);
    noLegs_0_1.set(LegProduct_8);
    InstrumentLeg_8.insert(LegProduct_8.getString());
    FIX::LegPutOrCall LegPutOrCall_8(1369571334);
    noLegs_0_1.set(LegPutOrCall_8);
    InstrumentLeg_8.insert(LegPutOrCall_8.getString());
    FIX::LegRatioQty LegRatioQty_8;
    LegRatioQty_8.setString("18330605");
    noLegs_0_1.set(LegRatioQty_8);
    InstrumentLeg_8.insert(LegRatioQty_8.getString());
    FIX::LegRedemptionDate LegRedemptionDate_8("LOCALMKTDATE_444902537");
    noLegs_0_1.set(LegRedemptionDate_8);
    InstrumentLeg_8.insert(LegRedemptionDate_8.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_8("STRING_870886704");
    noLegs_0_1.set(LegRepoCollateralSecurityType_8);
    InstrumentLeg_8.insert(LegRepoCollateralSecurityType_8.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_8;
    LegRepurchaseRate_8.setString("5.800000");
    noLegs_0_1.set(LegRepurchaseRate_8);
    InstrumentLeg_8.insert(LegRepurchaseRate_8.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_8(908318680);
    noLegs_0_1.set(LegRepurchaseTerm_8);
    InstrumentLeg_8.insert(LegRepurchaseTerm_8.getString());
    FIX::LegSecurityDesc LegSecurityDesc_8("STRING_1246602371");
    noLegs_0_1.set(LegSecurityDesc_8);
    InstrumentLeg_8.insert(LegSecurityDesc_8.getString());
    FIX::LegSecurityExchange LegSecurityExchange_8("EXCHANGE_1632046383");
    noLegs_0_1.set(LegSecurityExchange_8);
    InstrumentLeg_8.insert(LegSecurityExchange_8.getString());
    FIX::LegSecurityID LegSecurityID_8("STRING_1657747105");
    noLegs_0_1.set(LegSecurityID_8);
    InstrumentLeg_8.insert(LegSecurityID_8.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_8("STRING_291856128");
    noLegs_0_1.set(LegSecurityIDSource_8);
    InstrumentLeg_8.insert(LegSecurityIDSource_8.getString());
    FIX::LegSecuritySubType LegSecuritySubType_8("STRING_1364495777");
    noLegs_0_1.set(LegSecuritySubType_8);
    InstrumentLeg_8.insert(LegSecuritySubType_8.getString());
    FIX::LegSecurityType LegSecurityType_8("STRING_493776617");
    noLegs_0_1.set(LegSecurityType_8);
    InstrumentLeg_8.insert(LegSecurityType_8.getString());
    FIX::LegSide LegSide_8('1');
    noLegs_0_1.set(LegSide_8);
    InstrumentLeg_8.insert(LegSide_8.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_8("STRING_429381921");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_8);
    InstrumentLeg_8.insert(LegStateOrProvinceOfIssue_8.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_8("JPY");
    noLegs_0_1.set(LegStrikeCurrency_8);
    InstrumentLeg_8.insert(LegStrikeCurrency_8.getString());
    FIX::LegStrikePrice LegStrikePrice_8;
    LegStrikePrice_8.setString("6833958");
    noLegs_0_1.set(LegStrikePrice_8);
    InstrumentLeg_8.insert(LegStrikePrice_8.getString());
    FIX::LegSymbol LegSymbol_8("STRING_467623930");
    noLegs_0_1.set(LegSymbol_8);
    InstrumentLeg_8.insert(LegSymbol_8.getString());
    FIX::LegSymbolSfx LegSymbolSfx_8("STRING_1186798334");
    noLegs_0_1.set(LegSymbolSfx_8);
    InstrumentLeg_8.insert(LegSymbolSfx_8.getString());
    FIX::LegTimeUnit LegTimeUnit_8("STRING_287011888");
    noLegs_0_1.set(LegTimeUnit_8);
    InstrumentLeg_8.insert(LegTimeUnit_8.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_8("STRING_748941048");
    noLegs_0_1.set(LegUnitOfMeasure_8);
    InstrumentLeg_8.insert(LegUnitOfMeasure_8.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_8;
    LegUnitOfMeasureQty_8.setString("10498154");
    noLegs_0_1.set(LegUnitOfMeasureQty_8);
    InstrumentLeg_8.insert(LegUnitOfMeasureQty_8.getString());
    all_values.push_back(InstrumentLeg_8);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_14;
      FIX::LegSecurityAltID LegSecurityAltID_14("STRING_1701762316");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_14);
      LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltID_14.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_14("STRING_333096903");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_14);
      LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltIDSource_14.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_14);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_9;
    FIX::EncodedLegIssuer EncodedLegIssuer_9("DATA_899338338");
    noLegs_0_2.set(EncodedLegIssuer_9);
    InstrumentLeg_9.insert(EncodedLegIssuer_9.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_9(459398113);
    noLegs_0_2.set(EncodedLegIssuerLen_9);
    InstrumentLeg_9.insert(EncodedLegIssuerLen_9.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_9("DATA_997347642");
    noLegs_0_2.set(EncodedLegSecurityDesc_9);
    InstrumentLeg_9.insert(EncodedLegSecurityDesc_9.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_9(1852748309);
    noLegs_0_2.set(EncodedLegSecurityDescLen_9);
    InstrumentLeg_9.insert(EncodedLegSecurityDescLen_9.getString());
    FIX::LegCFICode LegCFICode_9("STRING_177643101");
    noLegs_0_2.set(LegCFICode_9);
    InstrumentLeg_9.insert(LegCFICode_9.getString());
    FIX::LegContractMultiplier LegContractMultiplier_9;
    LegContractMultiplier_9.setString("20727690");
    noLegs_0_2.set(LegContractMultiplier_9);
    InstrumentLeg_9.insert(LegContractMultiplier_9.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_9(1074835995);
    noLegs_0_2.set(LegContractMultiplierUnit_9);
    InstrumentLeg_9.insert(LegContractMultiplierUnit_9.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_9("MONTHYEAR_2010703680");
    noLegs_0_2.set(LegContractSettlMonth_9);
    InstrumentLeg_9.insert(LegContractSettlMonth_9.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_9("COUNTRY_370187914");
    noLegs_0_2.set(LegCountryOfIssue_9);
    InstrumentLeg_9.insert(LegCountryOfIssue_9.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_9("LOCALMKTDATE_1945722700");
    noLegs_0_2.set(LegCouponPaymentDate_9);
    InstrumentLeg_9.insert(LegCouponPaymentDate_9.getString());
    FIX::LegCouponRate LegCouponRate_9;
    LegCouponRate_9.setString("6.120000");
    noLegs_0_2.set(LegCouponRate_9);
    InstrumentLeg_9.insert(LegCouponRate_9.getString());
    FIX::LegCreditRating LegCreditRating_9("STRING_1278506594");
    noLegs_0_2.set(LegCreditRating_9);
    InstrumentLeg_9.insert(LegCreditRating_9.getString());
    FIX::LegCurrency LegCurrency_9("JPY");
    noLegs_0_2.set(LegCurrency_9);
    InstrumentLeg_9.insert(LegCurrency_9.getString());
    FIX::LegDatedDate LegDatedDate_9("LOCALMKTDATE_788770052");
    noLegs_0_2.set(LegDatedDate_9);
    InstrumentLeg_9.insert(LegDatedDate_9.getString());
    FIX::LegExerciseStyle LegExerciseStyle_9(1336697552);
    noLegs_0_2.set(LegExerciseStyle_9);
    InstrumentLeg_9.insert(LegExerciseStyle_9.getString());
    FIX::LegFactor LegFactor_9;
    LegFactor_9.setString("15347591");
    noLegs_0_2.set(LegFactor_9);
    InstrumentLeg_9.insert(LegFactor_9.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_9(1282546669);
    noLegs_0_2.set(LegFlowScheduleType_9);
    InstrumentLeg_9.insert(LegFlowScheduleType_9.getString());
    FIX::LegInstrRegistry LegInstrRegistry_9("STRING_708604011");
    noLegs_0_2.set(LegInstrRegistry_9);
    InstrumentLeg_9.insert(LegInstrRegistry_9.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_9("LOCALMKTDATE_1964141046");
    noLegs_0_2.set(LegInterestAccrualDate_9);
    InstrumentLeg_9.insert(LegInterestAccrualDate_9.getString());
    FIX::LegIssueDate LegIssueDate_9("LOCALMKTDATE_739753512");
    noLegs_0_2.set(LegIssueDate_9);
    InstrumentLeg_9.insert(LegIssueDate_9.getString());
    FIX::LegIssuer LegIssuer_9("STRING_1295027827");
    noLegs_0_2.set(LegIssuer_9);
    InstrumentLeg_9.insert(LegIssuer_9.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_9("STRING_500053255");
    noLegs_0_2.set(LegLocaleOfIssue_9);
    InstrumentLeg_9.insert(LegLocaleOfIssue_9.getString());
    FIX::LegMaturityDate LegMaturityDate_9("LOCALMKTDATE_1207377442");
    noLegs_0_2.set(LegMaturityDate_9);
    InstrumentLeg_9.insert(LegMaturityDate_9.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_9("MONTHYEAR_334342513");
    noLegs_0_2.set(LegMaturityMonthYear_9);
    InstrumentLeg_9.insert(LegMaturityMonthYear_9.getString());
    FIX::LegMaturityTime LegMaturityTime_9("TZTIMEONLY_787065143");
    noLegs_0_2.set(LegMaturityTime_9);
    InstrumentLeg_9.insert(LegMaturityTime_9.getString());
    FIX::LegOptAttribute LegOptAttribute_9('1');
    noLegs_0_2.set(LegOptAttribute_9);
    InstrumentLeg_9.insert(LegOptAttribute_9.getString());
    FIX::LegOptionRatio LegOptionRatio_9;
    LegOptionRatio_9.setString("13841579");
    noLegs_0_2.set(LegOptionRatio_9);
    InstrumentLeg_9.insert(LegOptionRatio_9.getString());
    FIX::LegPool LegPool_9("STRING_947511326");
    noLegs_0_2.set(LegPool_9);
    InstrumentLeg_9.insert(LegPool_9.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_9("STRING_1510597159");
    noLegs_0_2.set(LegPriceUnitOfMeasure_9);
    InstrumentLeg_9.insert(LegPriceUnitOfMeasure_9.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_9;
    LegPriceUnitOfMeasureQty_9.setString("17172548");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_9);
    InstrumentLeg_9.insert(LegPriceUnitOfMeasureQty_9.getString());
    FIX::LegProduct LegProduct_9(1846849664);
    noLegs_0_2.set(LegProduct_9);
    InstrumentLeg_9.insert(LegProduct_9.getString());
    FIX::LegPutOrCall LegPutOrCall_9(1969995272);
    noLegs_0_2.set(LegPutOrCall_9);
    InstrumentLeg_9.insert(LegPutOrCall_9.getString());
    FIX::LegRatioQty LegRatioQty_9;
    LegRatioQty_9.setString("5671188");
    noLegs_0_2.set(LegRatioQty_9);
    InstrumentLeg_9.insert(LegRatioQty_9.getString());
    FIX::LegRedemptionDate LegRedemptionDate_9("LOCALMKTDATE_1552114325");
    noLegs_0_2.set(LegRedemptionDate_9);
    InstrumentLeg_9.insert(LegRedemptionDate_9.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_9("STRING_154725");
    noLegs_0_2.set(LegRepoCollateralSecurityType_9);
    InstrumentLeg_9.insert(LegRepoCollateralSecurityType_9.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_9;
    LegRepurchaseRate_9.setString("42.060000");
    noLegs_0_2.set(LegRepurchaseRate_9);
    InstrumentLeg_9.insert(LegRepurchaseRate_9.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_9(479466673);
    noLegs_0_2.set(LegRepurchaseTerm_9);
    InstrumentLeg_9.insert(LegRepurchaseTerm_9.getString());
    FIX::LegSecurityDesc LegSecurityDesc_9("STRING_2010858406");
    noLegs_0_2.set(LegSecurityDesc_9);
    InstrumentLeg_9.insert(LegSecurityDesc_9.getString());
    FIX::LegSecurityExchange LegSecurityExchange_9("EXCHANGE_862592120");
    noLegs_0_2.set(LegSecurityExchange_9);
    InstrumentLeg_9.insert(LegSecurityExchange_9.getString());
    FIX::LegSecurityID LegSecurityID_9("STRING_277705725");
    noLegs_0_2.set(LegSecurityID_9);
    InstrumentLeg_9.insert(LegSecurityID_9.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_9("STRING_549075370");
    noLegs_0_2.set(LegSecurityIDSource_9);
    InstrumentLeg_9.insert(LegSecurityIDSource_9.getString());
    FIX::LegSecuritySubType LegSecuritySubType_9("STRING_2141098715");
    noLegs_0_2.set(LegSecuritySubType_9);
    InstrumentLeg_9.insert(LegSecuritySubType_9.getString());
    FIX::LegSecurityType LegSecurityType_9("STRING_1322547148");
    noLegs_0_2.set(LegSecurityType_9);
    InstrumentLeg_9.insert(LegSecurityType_9.getString());
    FIX::LegSide LegSide_9('7');
    noLegs_0_2.set(LegSide_9);
    InstrumentLeg_9.insert(LegSide_9.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_9("STRING_782385119");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_9);
    InstrumentLeg_9.insert(LegStateOrProvinceOfIssue_9.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_9("CHF");
    noLegs_0_2.set(LegStrikeCurrency_9);
    InstrumentLeg_9.insert(LegStrikeCurrency_9.getString());
    FIX::LegStrikePrice LegStrikePrice_9;
    LegStrikePrice_9.setString("20649317");
    noLegs_0_2.set(LegStrikePrice_9);
    InstrumentLeg_9.insert(LegStrikePrice_9.getString());
    FIX::LegSymbol LegSymbol_9("STRING_1220365063");
    noLegs_0_2.set(LegSymbol_9);
    InstrumentLeg_9.insert(LegSymbol_9.getString());
    FIX::LegSymbolSfx LegSymbolSfx_9("STRING_2070755242");
    noLegs_0_2.set(LegSymbolSfx_9);
    InstrumentLeg_9.insert(LegSymbolSfx_9.getString());
    FIX::LegTimeUnit LegTimeUnit_9("STRING_657201652");
    noLegs_0_2.set(LegTimeUnit_9);
    InstrumentLeg_9.insert(LegTimeUnit_9.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_9("STRING_367909242");
    noLegs_0_2.set(LegUnitOfMeasure_9);
    InstrumentLeg_9.insert(LegUnitOfMeasure_9.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_9;
    LegUnitOfMeasureQty_9.setString("4233248");
    noLegs_0_2.set(LegUnitOfMeasureQty_9);
    InstrumentLeg_9.insert(LegUnitOfMeasureQty_9.getString());
    all_values.push_back(InstrumentLeg_9);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_15;
      FIX::LegSecurityAltID LegSecurityAltID_15("STRING_702251755");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_15);
      LegSecAltIDGrp_NoLegSecurityAltID_15.insert(LegSecurityAltID_15.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_15("STRING_1210389992");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_15);
      LegSecAltIDGrp_NoLegSecurityAltID_15.insert(LegSecurityAltIDSource_15.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_15);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_7;
  FIX::AttachmentPoint AttachmentPoint_7;
  AttachmentPoint_7.setString("39.370000");
  msg.set(AttachmentPoint_7);
  Instrument_7.insert(AttachmentPoint_7.getString());
  FIX::CFICode CFICode_7("STRING_2086409687");
  msg.set(CFICode_7);
  Instrument_7.insert(CFICode_7.getString());
  FIX::CPProgram CPProgram_7(99);
  msg.set(CPProgram_7);
  Instrument_7.insert(CPProgram_7.getString());
  FIX::CPRegType CPRegType_7("STRING_1036527448");
  msg.set(CPRegType_7);
  Instrument_7.insert(CPRegType_7.getString());
  FIX::CapPrice CapPrice_7;
  CapPrice_7.setString("16561808");
  msg.set(CapPrice_7);
  Instrument_7.insert(CapPrice_7.getString());
  FIX::ContractMultiplier ContractMultiplier_7;
  ContractMultiplier_7.setString("18572673");
  msg.set(ContractMultiplier_7);
  Instrument_7.insert(ContractMultiplier_7.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_7(2);
  msg.set(ContractMultiplierUnit_7);
  Instrument_7.insert(ContractMultiplierUnit_7.getString());
  FIX::ContractSettlMonth ContractSettlMonth_7("MONTHYEAR_75816054");
  msg.set(ContractSettlMonth_7);
  Instrument_7.insert(ContractSettlMonth_7.getString());
  FIX::CountryOfIssue CountryOfIssue_7("COUNTRY_1261898012");
  msg.set(CountryOfIssue_7);
  Instrument_7.insert(CountryOfIssue_7.getString());
  FIX::CouponPaymentDate CouponPaymentDate_7("LOCALMKTDATE_859193798");
  msg.set(CouponPaymentDate_7);
  Instrument_7.insert(CouponPaymentDate_7.getString());
  FIX::CouponRate CouponRate_7;
  CouponRate_7.setString("2.600000");
  msg.set(CouponRate_7);
  Instrument_7.insert(CouponRate_7.getString());
  FIX::CreditRating CreditRating_7("STRING_1741364685");
  msg.set(CreditRating_7);
  Instrument_7.insert(CreditRating_7.getString());
  FIX::DatedDate DatedDate_7("LOCALMKTDATE_722568556");
  msg.set(DatedDate_7);
  Instrument_7.insert(DatedDate_7.getString());
  FIX::DetachmentPoint DetachmentPoint_7;
  DetachmentPoint_7.setString("23.810000");
  msg.set(DetachmentPoint_7);
  Instrument_7.insert(DetachmentPoint_7.getString());
  FIX::EncodedIssuer EncodedIssuer_7("DATA_2019070410");
  msg.set(EncodedIssuer_7);
  Instrument_7.insert(EncodedIssuer_7.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_7(1271643927);
  msg.set(EncodedIssuerLen_7);
  Instrument_7.insert(EncodedIssuerLen_7.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_7("DATA_1424427448");
  msg.set(EncodedSecurityDesc_7);
  Instrument_7.insert(EncodedSecurityDesc_7.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_7(1194133910);
  msg.set(EncodedSecurityDescLen_7);
  Instrument_7.insert(EncodedSecurityDescLen_7.getString());
  FIX::ExerciseStyle ExerciseStyle_7(2);
  msg.set(ExerciseStyle_7);
  Instrument_7.insert(ExerciseStyle_7.getString());
  FIX::Factor Factor_7;
  Factor_7.setString("593289");
  msg.set(Factor_7);
  Instrument_7.insert(Factor_7.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_7(false);
  msg.set(FlexProductEligibilityIndicator_7);
  Instrument_7.insert(FlexProductEligibilityIndicator_7.getString());
  FIX::FlexibleIndicator FlexibleIndicator_7(false);
  msg.set(FlexibleIndicator_7);
  Instrument_7.insert(FlexibleIndicator_7.getString());
  FIX::FloorPrice FloorPrice_7;
  FloorPrice_7.setString("21242607");
  msg.set(FloorPrice_7);
  Instrument_7.insert(FloorPrice_7.getString());
  FIX::FlowScheduleType FlowScheduleType_7(3);
  msg.set(FlowScheduleType_7);
  Instrument_7.insert(FlowScheduleType_7.getString());
  FIX::InstrRegistry InstrRegistry_7("STRING_2020868435");
  msg.set(InstrRegistry_7);
  Instrument_7.insert(InstrRegistry_7.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_7('6');
  msg.set(InstrmtAssignmentMethod_7);
  Instrument_7.insert(InstrmtAssignmentMethod_7.getString());
  FIX::InterestAccrualDate InterestAccrualDate_7("LOCALMKTDATE_1146685621");
  msg.set(InterestAccrualDate_7);
  Instrument_7.insert(InterestAccrualDate_7.getString());
  FIX::IssueDate IssueDate_7("LOCALMKTDATE_296709636");
  msg.set(IssueDate_7);
  Instrument_7.insert(IssueDate_7.getString());
  FIX::Issuer Issuer_7("STRING_351074159");
  msg.set(Issuer_7);
  Instrument_7.insert(Issuer_7.getString());
  FIX::ListMethod ListMethod_7(0);
  msg.set(ListMethod_7);
  Instrument_7.insert(ListMethod_7.getString());
  FIX::LocaleOfIssue LocaleOfIssue_7("STRING_1507099628");
  msg.set(LocaleOfIssue_7);
  Instrument_7.insert(LocaleOfIssue_7.getString());
  FIX::MaturityDate MaturityDate_7("LOCALMKTDATE_2024488096");
  msg.set(MaturityDate_7);
  Instrument_7.insert(MaturityDate_7.getString());
  FIX::MaturityMonthYear MaturityMonthYear_7("MONTHYEAR_1787863415");
  msg.set(MaturityMonthYear_7);
  Instrument_7.insert(MaturityMonthYear_7.getString());
  FIX::MaturityTime MaturityTime_7("TZTIMEONLY_1517517298");
  msg.set(MaturityTime_7);
  Instrument_7.insert(MaturityTime_7.getString());
  FIX::MinPriceIncrement MinPriceIncrement_7;
  MinPriceIncrement_7.setString("9135318");
  msg.set(MinPriceIncrement_7);
  Instrument_7.insert(MinPriceIncrement_7.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_7;
  MinPriceIncrementAmount_7.setString("12965606");
  msg.set(MinPriceIncrementAmount_7);
  Instrument_7.insert(MinPriceIncrementAmount_7.getString());
  FIX::NTPositionLimit NTPositionLimit_7(1227300984);
  msg.set(NTPositionLimit_7);
  Instrument_7.insert(NTPositionLimit_7.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_7;
  NotionalPercentageOutstanding_7.setString("9.700000");
  msg.set(NotionalPercentageOutstanding_7);
  Instrument_7.insert(NotionalPercentageOutstanding_7.getString());
  FIX::OptAttribute OptAttribute_7('1');
  msg.set(OptAttribute_7);
  Instrument_7.insert(OptAttribute_7.getString());
  FIX::OptPayoutAmount OptPayoutAmount_7;
  OptPayoutAmount_7.setString("3417153");
  msg.set(OptPayoutAmount_7);
  Instrument_7.insert(OptPayoutAmount_7.getString());
  FIX::OptPayoutType OptPayoutType_7(1);
  msg.set(OptPayoutType_7);
  Instrument_7.insert(OptPayoutType_7.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_7;
  OriginalNotionalPercentageOutstanding_7.setString("69.560000");
  msg.set(OriginalNotionalPercentageOutstanding_7);
  Instrument_7.insert(OriginalNotionalPercentageOutstanding_7.getString());
  FIX::Pool Pool_7("STRING_2083080033");
  msg.set(Pool_7);
  Instrument_7.insert(Pool_7.getString());
  FIX::PositionLimit PositionLimit_7(1206849677);
  msg.set(PositionLimit_7);
  Instrument_7.insert(PositionLimit_7.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_7("STRING_INX");
  msg.set(PriceQuoteMethod_7);
  Instrument_7.insert(PriceQuoteMethod_7.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_7("STRING_1954666795");
  msg.set(PriceUnitOfMeasure_7);
  Instrument_7.insert(PriceUnitOfMeasure_7.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_7;
  PriceUnitOfMeasureQty_7.setString("3310099");
  msg.set(PriceUnitOfMeasureQty_7);
  Instrument_7.insert(PriceUnitOfMeasureQty_7.getString());
  FIX::Product Product_9(4);
  msg.set(Product_9);
  Instrument_7.insert(Product_9.getString());
  FIX::ProductComplex ProductComplex_7("STRING_1001317058");
  msg.set(ProductComplex_7);
  Instrument_7.insert(ProductComplex_7.getString());
  FIX::PutOrCall PutOrCall_7(1);
  msg.set(PutOrCall_7);
  Instrument_7.insert(PutOrCall_7.getString());
  FIX::RedemptionDate RedemptionDate_7("LOCALMKTDATE_560198408");
  msg.set(RedemptionDate_7);
  Instrument_7.insert(RedemptionDate_7.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_7("STRING_559728373");
  msg.set(RepoCollateralSecurityType_7);
  Instrument_7.insert(RepoCollateralSecurityType_7.getString());
  FIX::RepurchaseRate RepurchaseRate_7;
  RepurchaseRate_7.setString("21.460000");
  msg.set(RepurchaseRate_7);
  Instrument_7.insert(RepurchaseRate_7.getString());
  FIX::RepurchaseTerm RepurchaseTerm_7(536975467);
  msg.set(RepurchaseTerm_7);
  Instrument_7.insert(RepurchaseTerm_7.getString());
  FIX::RestructuringType RestructuringType_7("STRING_XR");
  msg.set(RestructuringType_7);
  Instrument_7.insert(RestructuringType_7.getString());
  FIX::SecurityDesc SecurityDesc_7("STRING_2145490581");
  msg.set(SecurityDesc_7);
  Instrument_7.insert(SecurityDesc_7.getString());
  FIX::SecurityExchange SecurityExchange_7("EXCHANGE_1170954179");
  msg.set(SecurityExchange_7);
  Instrument_7.insert(SecurityExchange_7.getString());
  FIX::SecurityGroup SecurityGroup_7("STRING_337706724");
  msg.set(SecurityGroup_7);
  Instrument_7.insert(SecurityGroup_7.getString());
  FIX::SecurityID SecurityID_7("STRING_294716569");
  msg.set(SecurityID_7);
  Instrument_7.insert(SecurityID_7.getString());
  FIX::SecurityIDSource SecurityIDSource_7("STRING_7");
  msg.set(SecurityIDSource_7);
  Instrument_7.insert(SecurityIDSource_7.getString());
  FIX::SecurityStatus SecurityStatus_7("STRING_2");
  msg.set(SecurityStatus_7);
  Instrument_7.insert(SecurityStatus_7.getString());
  FIX::SecuritySubType SecuritySubType_7("STRING_1801816197");
  msg.set(SecuritySubType_7);
  Instrument_7.insert(SecuritySubType_7.getString());
  FIX::SecurityType SecurityType_9("STRING_CORP");
  msg.set(SecurityType_9);
  Instrument_7.insert(SecurityType_9.getString());
  FIX::Seniority Seniority_7("STRING_SD");
  msg.set(Seniority_7);
  Instrument_7.insert(Seniority_7.getString());
  FIX::SettlMethod SettlMethod_7('P');
  msg.set(SettlMethod_7);
  Instrument_7.insert(SettlMethod_7.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_7("STRING_165081036");
  msg.set(SettleOnOpenFlag_7);
  Instrument_7.insert(SettleOnOpenFlag_7.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_7("STRING_976100861");
  msg.set(StateOrProvinceOfIssue_7);
  Instrument_7.insert(StateOrProvinceOfIssue_7.getString());
  FIX::StrikeCurrency StrikeCurrency_7("USD");
  msg.set(StrikeCurrency_7);
  Instrument_7.insert(StrikeCurrency_7.getString());
  FIX::StrikeMultiplier StrikeMultiplier_7;
  StrikeMultiplier_7.setString("2009939");
  msg.set(StrikeMultiplier_7);
  Instrument_7.insert(StrikeMultiplier_7.getString());
  FIX::StrikePrice StrikePrice_7;
  StrikePrice_7.setString("5933825");
  msg.set(StrikePrice_7);
  Instrument_7.insert(StrikePrice_7.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_7(4);
  msg.set(StrikePriceBoundaryMethod_7);
  Instrument_7.insert(StrikePriceBoundaryMethod_7.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_7;
  StrikePriceBoundaryPrecision_7.setString("8.650000");
  msg.set(StrikePriceBoundaryPrecision_7);
  Instrument_7.insert(StrikePriceBoundaryPrecision_7.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_7(3);
  msg.set(StrikePriceDeterminationMethod_7);
  Instrument_7.insert(StrikePriceDeterminationMethod_7.getString());
  FIX::StrikeValue StrikeValue_7;
  StrikeValue_7.setString("14812991");
  msg.set(StrikeValue_7);
  Instrument_7.insert(StrikeValue_7.getString());
  FIX::Symbol Symbol_7("STRING_1218032906");
  msg.set(Symbol_7);
  Instrument_7.insert(Symbol_7.getString());
  FIX::SymbolSfx SymbolSfx_7("STRING_WI");
  msg.set(SymbolSfx_7);
  Instrument_7.insert(SymbolSfx_7.getString());
  FIX::TimeUnit TimeUnit_7("STRING_Wk");
  msg.set(TimeUnit_7);
  Instrument_7.insert(TimeUnit_7.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_7(4);
  msg.set(UnderlyingPriceDeterminationMethod_7);
  Instrument_7.insert(UnderlyingPriceDeterminationMethod_7.getString());
  FIX::UnitOfMeasure UnitOfMeasure_7("STRING_lbs");
  msg.set(UnitOfMeasure_7);
  Instrument_7.insert(UnitOfMeasure_7.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_7;
  UnitOfMeasureQty_7.setString("19868180");
  msg.set(UnitOfMeasureQty_7);
  Instrument_7.insert(UnitOfMeasureQty_7.getString());
  FIX::ValuationMethod ValuationMethod_7("STRING_EQTY");
  msg.set(ValuationMethod_7);
  Instrument_7.insert(ValuationMethod_7.getString());
  all_values.push_back(Instrument_7);

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
    ComplexEventPrice_13.setString("6685926");
    noComplexEvents_0_0.set(ComplexEventPrice_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPrice_13.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_13(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceBoundaryMethod_13.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_13;
    ComplexEventPriceBoundaryPrecision_13.setString("71.450000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceBoundaryPrecision_13.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_13(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventPriceTimeType_13.getString());
    FIX::ComplexEventType ComplexEventType_13(3);
    noComplexEvents_0_0.set(ComplexEventType_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexEventType_13.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_13;
    ComplexOptPayoutAmount_13.setString("2566800");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_13);
    ComplexEvents_NoComplexEvents_13.insert(ComplexOptPayoutAmount_13.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_13);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_22;
      FIX::ComplexEventEndDate ComplexEventEndDate_22(FIX::UTCTIMESTAMP(16, 11, 38, 11, 12, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_22);
      ComplexEventDates_NoComplexEventDates_22.insert(ComplexEventEndDate_22.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_22(FIX::UTCTIMESTAMP(9, 40, 40, 20, 2, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_22);
      ComplexEventDates_NoComplexEventDates_22.insert(ComplexEventStartDate_22.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_22);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_42;
        FIX::ComplexEventEndTime ComplexEventEndTime_42(FIX::UTCTIMEONLY(19, 43, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_42);
        ComplexEventTimes_NoComplexEventTimes_42.insert(ComplexEventEndTime_42.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_42(FIX::UTCTIMEONLY(12, 25, 27));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_42);
        ComplexEventTimes_NoComplexEventTimes_42.insert(ComplexEventStartTime_42.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_42);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_14;
    FIX::ComplexEventCondition ComplexEventCondition_14(2);
    noComplexEvents_0_1.set(ComplexEventCondition_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventCondition_14.getString());
    FIX::ComplexEventPrice ComplexEventPrice_14;
    ComplexEventPrice_14.setString("17580157");
    noComplexEvents_0_1.set(ComplexEventPrice_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPrice_14.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_14(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceBoundaryMethod_14.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_14;
    ComplexEventPriceBoundaryPrecision_14.setString("86.000000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceBoundaryPrecision_14.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_14(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventPriceTimeType_14.getString());
    FIX::ComplexEventType ComplexEventType_14(4);
    noComplexEvents_0_1.set(ComplexEventType_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexEventType_14.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_14;
    ComplexOptPayoutAmount_14.setString("18633986");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_14);
    ComplexEvents_NoComplexEvents_14.insert(ComplexOptPayoutAmount_14.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_14);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_23;
      FIX::ComplexEventEndDate ComplexEventEndDate_23(FIX::UTCTIMESTAMP(11, 18, 43, 10, 6, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_23);
      ComplexEventDates_NoComplexEventDates_23.insert(ComplexEventEndDate_23.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_23(FIX::UTCTIMESTAMP(3, 35, 18, 27, 2, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_23);
      ComplexEventDates_NoComplexEventDates_23.insert(ComplexEventStartDate_23.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_23);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_43;
        FIX::ComplexEventEndTime ComplexEventEndTime_43(FIX::UTCTIMEONLY(19, 53, 19));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_43);
        ComplexEventTimes_NoComplexEventTimes_43.insert(ComplexEventEndTime_43.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_43(FIX::UTCTIMEONLY(5, 44, 46));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_43);
        ComplexEventTimes_NoComplexEventTimes_43.insert(ComplexEventStartTime_43.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_43);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_15;
    FIX::ComplexEventCondition ComplexEventCondition_15(2);
    noComplexEvents_0_2.set(ComplexEventCondition_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventCondition_15.getString());
    FIX::ComplexEventPrice ComplexEventPrice_15;
    ComplexEventPrice_15.setString("16267367");
    noComplexEvents_0_2.set(ComplexEventPrice_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPrice_15.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_15(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceBoundaryMethod_15.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_15;
    ComplexEventPriceBoundaryPrecision_15.setString("53.810000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceBoundaryPrecision_15.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_15(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventPriceTimeType_15.getString());
    FIX::ComplexEventType ComplexEventType_15(9);
    noComplexEvents_0_2.set(ComplexEventType_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexEventType_15.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_15;
    ComplexOptPayoutAmount_15.setString("6581504");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_15);
    ComplexEvents_NoComplexEvents_15.insert(ComplexOptPayoutAmount_15.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_15);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_24;
      FIX::ComplexEventEndDate ComplexEventEndDate_24(FIX::UTCTIMESTAMP(11, 35, 30, 22, 5, 2013));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_24);
      ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventEndDate_24.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_24(FIX::UTCTIMESTAMP(23, 1, 22, 10, 3, 2004));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_24);
      ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventStartDate_24.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_24);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_44;
        FIX::ComplexEventEndTime ComplexEventEndTime_44(FIX::UTCTIMEONLY(17, 54, 33));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_44);
        ComplexEventTimes_NoComplexEventTimes_44.insert(ComplexEventEndTime_44.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_44(FIX::UTCTIMEONLY(16, 10, 30));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_44);
        ComplexEventTimes_NoComplexEventTimes_44.insert(ComplexEventStartTime_44.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_44);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_45;
        FIX::ComplexEventEndTime ComplexEventEndTime_45(FIX::UTCTIMEONLY(14, 47, 22));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_45);
        ComplexEventTimes_NoComplexEventTimes_45.insert(ComplexEventEndTime_45.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_45(FIX::UTCTIMEONLY(5, 43, 2));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_45);
        ComplexEventTimes_NoComplexEventTimes_45.insert(ComplexEventStartTime_45.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_45);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_25;
      FIX::ComplexEventEndDate ComplexEventEndDate_25(FIX::UTCTIMESTAMP(22, 37, 46, 24, 10, 2012));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_25);
      ComplexEventDates_NoComplexEventDates_25.insert(ComplexEventEndDate_25.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_25(FIX::UTCTIMESTAMP(1, 5, 10, 27, 12, 2008));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_25);
      ComplexEventDates_NoComplexEventDates_25.insert(ComplexEventStartDate_25.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_25);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_46;
        FIX::ComplexEventEndTime ComplexEventEndTime_46(FIX::UTCTIMEONLY(2, 55, 59));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_46);
        ComplexEventTimes_NoComplexEventTimes_46.insert(ComplexEventEndTime_46.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_46(FIX::UTCTIMEONLY(23, 1, 48));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_46);
        ComplexEventTimes_NoComplexEventTimes_46.insert(ComplexEventStartTime_46.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_46);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_47;
        FIX::ComplexEventEndTime ComplexEventEndTime_47(FIX::UTCTIMEONLY(15, 35, 10));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_47);
        ComplexEventTimes_NoComplexEventTimes_47.insert(ComplexEventEndTime_47.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_47(FIX::UTCTIMEONLY(8, 45, 14));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_47);
        ComplexEventTimes_NoComplexEventTimes_47.insert(ComplexEventStartTime_47.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_47);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_48;
        FIX::ComplexEventEndTime ComplexEventEndTime_48(FIX::UTCTIMEONLY(8, 43, 51));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_48);
        ComplexEventTimes_NoComplexEventTimes_48.insert(ComplexEventEndTime_48.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_48(FIX::UTCTIMEONLY(5, 55, 29));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_48);
        ComplexEventTimes_NoComplexEventTimes_48.insert(ComplexEventStartTime_48.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_48);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
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
    multiset<string> EvntGrp_NoEvents_15;
    FIX::EventDate EventDate_15("LOCALMKTDATE_1384911060");
    noEvents_0_0.set(EventDate_15);
    EvntGrp_NoEvents_15.insert(EventDate_15.getString());
    FIX::EventPx EventPx_15;
    EventPx_15.setString("13899498");
    noEvents_0_0.set(EventPx_15);
    EvntGrp_NoEvents_15.insert(EventPx_15.getString());
    FIX::EventText EventText_15("STRING_978908065");
    noEvents_0_0.set(EventText_15);
    EvntGrp_NoEvents_15.insert(EventText_15.getString());
    FIX::EventTime EventTime_15(FIX::UTCTIMESTAMP(4, 34, 28, 22, 6, 2007));
    noEvents_0_0.set(EventTime_15);
    EvntGrp_NoEvents_15.insert(EventTime_15.getString());
    FIX::EventType EventType_15(13);
    noEvents_0_0.set(EventType_15);
    EvntGrp_NoEvents_15.insert(EventType_15.getString());
    all_values.push_back(EvntGrp_NoEvents_15);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AssignmentReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_14;
    FIX::InstrumentPartyID InstrumentPartyID_14("STRING_1110847220");
    noInstrumentParties_0_0.set(InstrumentPartyID_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyID_14.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_14('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyIDSource_14.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_14(140037944);
    noInstrumentParties_0_0.set(InstrumentPartyRole_14);
    InstrumentParties_NoInstrumentParties_14.insert(InstrumentPartyRole_14.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_14);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27;
      FIX::InstrumentPartySubID InstrumentPartySubID_27("STRING_16675219");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_27);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubID_27.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_27(561546294);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_27);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubIDType_27.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_15;
    FIX::InstrumentPartyID InstrumentPartyID_15("STRING_805017592");
    noInstrumentParties_0_1.set(InstrumentPartyID_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyID_15.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_15('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyIDSource_15.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_15(740277640);
    noInstrumentParties_0_1.set(InstrumentPartyRole_15);
    InstrumentParties_NoInstrumentParties_15.insert(InstrumentPartyRole_15.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_15);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28;
      FIX::InstrumentPartySubID InstrumentPartySubID_28("STRING_1471962868");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_28);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubID_28.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_28(961310016);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_28);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28.insert(InstrumentPartySubIDType_28.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_28);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29;
      FIX::InstrumentPartySubID InstrumentPartySubID_29("STRING_797052042");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_29);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29.insert(InstrumentPartySubID_29.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_29(1786491979);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_29);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29.insert(InstrumentPartySubIDType_29.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_29);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30;
      FIX::InstrumentPartySubID InstrumentPartySubID_30("STRING_72027908");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_30);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30.insert(InstrumentPartySubID_30.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_30(1509423695);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_30);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30.insert(InstrumentPartySubIDType_30.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_30);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_16;
    FIX::InstrumentPartyID InstrumentPartyID_16("STRING_1980427814");
    noInstrumentParties_0_2.set(InstrumentPartyID_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyID_16.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_16('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyIDSource_16.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_16(100240725);
    noInstrumentParties_0_2.set(InstrumentPartyRole_16);
    InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyRole_16.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_16);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31;
      FIX::InstrumentPartySubID InstrumentPartySubID_31("STRING_354085449");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_31);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31.insert(InstrumentPartySubID_31.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_31(1079148791);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_31);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31.insert(InstrumentPartySubIDType_31.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_31);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_15;
    FIX::SecurityAltID SecurityAltID_15("STRING_502551253");
    noSecurityAltID_0_0.set(SecurityAltID_15);
    SecAltIDGrp_NoSecurityAltID_15.insert(SecurityAltID_15.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_15("STRING_976808917");
    noSecurityAltID_0_0.set(SecurityAltIDSource_15);
    SecAltIDGrp_NoSecurityAltID_15.insert(SecurityAltIDSource_15.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_15);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_14;
  FIX::SecurityXML SecurityXML_15("XMLDATA_663754650");
  msg.set(SecurityXML_15);
  FIX::SecurityXMLLen SecurityXMLLen_7(597415499);
  msg.set(SecurityXMLLen_7);
  FIX::SecurityXMLSchema SecurityXMLSchema_7("STRING_923779858");
  msg.set(SecurityXMLSchema_7);
  SecurityXML_14.insert(SecurityXMLSchema_7.getString());
  all_values.push_back(SecurityXML_14);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_17;
    FIX::PartyID PartyID_17("STRING_146883663");
    noPartyIDs_0_0.set(PartyID_17);
    Parties_NoPartyIDs_17.insert(PartyID_17.getString());
    FIX::PartyIDSource PartyIDSource_17('6');
    noPartyIDs_0_0.set(PartyIDSource_17);
    Parties_NoPartyIDs_17.insert(PartyIDSource_17.getString());
    FIX::PartyRole PartyRole_17(52);
    noPartyIDs_0_0.set(PartyRole_17);
    Parties_NoPartyIDs_17.insert(PartyRole_17.getString());
    all_values.push_back(Parties_NoPartyIDs_17);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_33;
      FIX::PartySubID PartySubID_33("STRING_2028903638");
      noPartySubIDs_0_1_0.set(PartySubID_33);
      PtysSubGrp_NoPartySubIDs_33.insert(PartySubID_33.getString());
      FIX::PartySubIDType PartySubIDType_33(33);
      noPartySubIDs_0_1_0.set(PartySubIDType_33);
      PtysSubGrp_NoPartySubIDs_33.insert(PartySubIDType_33.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_33);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_34;
      FIX::PartySubID PartySubID_34("STRING_876415514");
      noPartySubIDs_0_1_1.set(PartySubID_34);
      PtysSubGrp_NoPartySubIDs_34.insert(PartySubID_34.getString());
      FIX::PartySubIDType PartySubIDType_34(25);
      noPartySubIDs_0_1_1.set(PartySubIDType_34);
      PtysSubGrp_NoPartySubIDs_34.insert(PartySubIDType_34.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_34);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_18;
    FIX::PartyID PartyID_18("STRING_644234494");
    noPartyIDs_0_1.set(PartyID_18);
    Parties_NoPartyIDs_18.insert(PartyID_18.getString());
    FIX::PartyIDSource PartyIDSource_18('6');
    noPartyIDs_0_1.set(PartyIDSource_18);
    Parties_NoPartyIDs_18.insert(PartyIDSource_18.getString());
    FIX::PartyRole PartyRole_18(17);
    noPartyIDs_0_1.set(PartyRole_18);
    Parties_NoPartyIDs_18.insert(PartyRole_18.getString());
    all_values.push_back(Parties_NoPartyIDs_18);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_35;
      FIX::PartySubID PartySubID_35("STRING_487884291");
      noPartySubIDs_1_1_0.set(PartySubID_35);
      PtysSubGrp_NoPartySubIDs_35.insert(PartySubID_35.getString());
      FIX::PartySubIDType PartySubIDType_35(2);
      noPartySubIDs_1_1_0.set(PartySubIDType_35);
      PtysSubGrp_NoPartySubIDs_35.insert(PartySubIDType_35.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_35);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_5;
    FIX::PosAmt PosAmt_5;
    PosAmt_5.setString("1268926");
    noPosAmt_0_0.set(PosAmt_5);
    PositionAmountData_NoPosAmt_5.insert(PosAmt_5.getString());
    FIX::PosAmtType PosAmtType_5("STRING_COLAT");
    noPosAmt_0_0.set(PosAmtType_5);
    PositionAmountData_NoPosAmt_5.insert(PosAmtType_5.getString());
    FIX::PositionCurrency PositionCurrency_5("STRING_1280952583");
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
    PosAmt_6.setString("21073204");
    noPosAmt_0_1.set(PosAmt_6);
    PositionAmountData_NoPosAmt_6.insert(PosAmt_6.getString());
    FIX::PosAmtType PosAmtType_6("STRING_CASH");
    noPosAmt_0_1.set(PosAmtType_6);
    PositionAmountData_NoPosAmt_6.insert(PosAmtType_6.getString());
    FIX::PositionCurrency PositionCurrency_6("STRING_1381193309");
    noPosAmt_0_1.set(PositionCurrency_6);
    PositionAmountData_NoPosAmt_6.insert(PositionCurrency_6.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_6);

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_1;
    FIX::LongQty LongQty_1;
    LongQty_1.setString("15348028");
    noPositions_0_0.set(LongQty_1);
    PositionQty_NoPositions_1.insert(LongQty_1.getString());
    FIX::PosQtyStatus PosQtyStatus_1(2);
    noPositions_0_0.set(PosQtyStatus_1);
    PositionQty_NoPositions_1.insert(PosQtyStatus_1.getString());
    FIX::PosType PosType_1("STRING_ASF");
    noPositions_0_0.set(PosType_1);
    PositionQty_NoPositions_1.insert(PosType_1.getString());
    FIX::QuantityDate QuantityDate_1("LOCALMKTDATE_2037354100");
    noPositions_0_0.set(QuantityDate_1);
    PositionQty_NoPositions_1.insert(QuantityDate_1.getString());
    FIX::ShortQty ShortQty_1;
    ShortQty_1.setString("12896673");
    noPositions_0_0.set(ShortQty_1);
    PositionQty_NoPositions_1.insert(ShortQty_1.getString());
    all_values.push_back(PositionQty_NoPositions_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_34;
      FIX::NestedPartyID NestedPartyID_34("STRING_487285951");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_34);
      NestedParties_NoNestedPartyIDs_34.insert(NestedPartyID_34.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_34('6');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_34);
      NestedParties_NoNestedPartyIDs_34.insert(NestedPartyIDSource_34.getString());
      FIX::NestedPartyRole NestedPartyRole_34(612166708);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_34);
      NestedParties_NoNestedPartyIDs_34.insert(NestedPartyRole_34.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_34);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_68;
        FIX::NestedPartySubID NestedPartySubID_68("STRING_1954829273");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_68);
        NstdPtysSubGrp_NoNestedPartySubIDs_68.insert(NestedPartySubID_68.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_68(1100802990);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_68);
        NstdPtysSubGrp_NoNestedPartySubIDs_68.insert(NestedPartySubIDType_68.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_68);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_69;
        FIX::NestedPartySubID NestedPartySubID_69("STRING_1493909909");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_69);
        NstdPtysSubGrp_NoNestedPartySubIDs_69.insert(NestedPartySubID_69.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_69(1836249263);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_69);
        NstdPtysSubGrp_NoNestedPartySubIDs_69.insert(NestedPartySubIDType_69.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_69);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_35;
      FIX::NestedPartyID NestedPartyID_35("STRING_940019892");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_35);
      NestedParties_NoNestedPartyIDs_35.insert(NestedPartyID_35.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_35('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_35);
      NestedParties_NoNestedPartyIDs_35.insert(NestedPartyIDSource_35.getString());
      FIX::NestedPartyRole NestedPartyRole_35(131731899);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_35);
      NestedParties_NoNestedPartyIDs_35.insert(NestedPartyRole_35.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_35);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_70;
        FIX::NestedPartySubID NestedPartySubID_70("STRING_1386246846");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_70);
        NstdPtysSubGrp_NoNestedPartySubIDs_70.insert(NestedPartySubID_70.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_70(1314975824);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_70);
        NstdPtysSubGrp_NoNestedPartySubIDs_70.insert(NestedPartySubIDType_70.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_70);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_71;
        FIX::NestedPartySubID NestedPartySubID_71("STRING_558731232");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_71);
        NstdPtysSubGrp_NoNestedPartySubIDs_71.insert(NestedPartySubID_71.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_71(1874131137);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_71);
        NstdPtysSubGrp_NoNestedPartySubIDs_71.insert(NestedPartySubIDType_71.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_71);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_72;
        FIX::NestedPartySubID NestedPartySubID_72("STRING_1312046116");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_72);
        NstdPtysSubGrp_NoNestedPartySubIDs_72.insert(NestedPartySubID_72.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_72(330260120);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_72);
        NstdPtysSubGrp_NoNestedPartySubIDs_72.insert(NestedPartySubIDType_72.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_72);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_36;
      FIX::NestedPartyID NestedPartyID_36("STRING_2001023760");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_36);
      NestedParties_NoNestedPartyIDs_36.insert(NestedPartyID_36.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_36('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_36);
      NestedParties_NoNestedPartyIDs_36.insert(NestedPartyIDSource_36.getString());
      FIX::NestedPartyRole NestedPartyRole_36(1611212704);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_36);
      NestedParties_NoNestedPartyIDs_36.insert(NestedPartyRole_36.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_36);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_73;
        FIX::NestedPartySubID NestedPartySubID_73("STRING_414378068");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_73);
        NstdPtysSubGrp_NoNestedPartySubIDs_73.insert(NestedPartySubID_73.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_73(844922365);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_73);
        NstdPtysSubGrp_NoNestedPartySubIDs_73.insert(NestedPartySubIDType_73.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_73);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noPositions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_10;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_10("DATA_1949180915");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingIssuer_10.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_10(1157780817);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingIssuerLen_10.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_10("DATA_1561691913");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingSecurityDesc_10.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_10(1839051368);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingSecurityDescLen_10.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_10;
    UnderlyingAdjustedQuantity_10.setString("2999645");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_10);
    UnderlyingInstrument_10.insert(UnderlyingAdjustedQuantity_10.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_10;
    UnderlyingAllocationPercent_10.setString("59.120000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_10);
    UnderlyingInstrument_10.insert(UnderlyingAllocationPercent_10.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_10;
    UnderlyingAttachmentPoint_10.setString("36.710000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_10);
    UnderlyingInstrument_10.insert(UnderlyingAttachmentPoint_10.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_10("STRING_365928117");
    noUnderlyings_0_0.set(UnderlyingCFICode_10);
    UnderlyingInstrument_10.insert(UnderlyingCFICode_10.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_10("STRING_1260752621");
    noUnderlyings_0_0.set(UnderlyingCPProgram_10);
    UnderlyingInstrument_10.insert(UnderlyingCPProgram_10.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_10("STRING_813023286");
    noUnderlyings_0_0.set(UnderlyingCPRegType_10);
    UnderlyingInstrument_10.insert(UnderlyingCPRegType_10.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_10;
    UnderlyingCapValue_10.setString("1732737");
    noUnderlyings_0_0.set(UnderlyingCapValue_10);
    UnderlyingInstrument_10.insert(UnderlyingCapValue_10.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_10;
    UnderlyingCashAmount_10.setString("2140719");
    noUnderlyings_0_0.set(UnderlyingCashAmount_10);
    UnderlyingInstrument_10.insert(UnderlyingCashAmount_10.getString());
    FIX::UnderlyingCashType UnderlyingCashType_10("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_10);
    UnderlyingInstrument_10.insert(UnderlyingCashType_10.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_10;
    UnderlyingContractMultiplier_10.setString("20095230");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_10);
    UnderlyingInstrument_10.insert(UnderlyingContractMultiplier_10.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_10(1154091856);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_10);
    UnderlyingInstrument_10.insert(UnderlyingContractMultiplierUnit_10.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_10("COUNTRY_382291323");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingCountryOfIssue_10.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_10("LOCALMKTDATE_2141254904");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_10);
    UnderlyingInstrument_10.insert(UnderlyingCouponPaymentDate_10.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_10;
    UnderlyingCouponRate_10.setString("25.950000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_10);
    UnderlyingInstrument_10.insert(UnderlyingCouponRate_10.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_10("STRING_1768538170");
    noUnderlyings_0_0.set(UnderlyingCreditRating_10);
    UnderlyingInstrument_10.insert(UnderlyingCreditRating_10.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_10("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_10);
    UnderlyingInstrument_10.insert(UnderlyingCurrency_10.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_10;
    UnderlyingCurrentValue_10.setString("14951856");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_10);
    UnderlyingInstrument_10.insert(UnderlyingCurrentValue_10.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_10;
    UnderlyingDetachmentPoint_10.setString("95.490000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_10);
    UnderlyingInstrument_10.insert(UnderlyingDetachmentPoint_10.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_10;
    UnderlyingDirtyPrice_10.setString("14798539");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_10);
    UnderlyingInstrument_10.insert(UnderlyingDirtyPrice_10.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_10;
    UnderlyingEndPrice_10.setString("13487257");
    noUnderlyings_0_0.set(UnderlyingEndPrice_10);
    UnderlyingInstrument_10.insert(UnderlyingEndPrice_10.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_10;
    UnderlyingEndValue_10.setString("18544538");
    noUnderlyings_0_0.set(UnderlyingEndValue_10);
    UnderlyingInstrument_10.insert(UnderlyingEndValue_10.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_10(943583004);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_10);
    UnderlyingInstrument_10.insert(UnderlyingExerciseStyle_10.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_10;
    UnderlyingFXRate_10.setString("11621026");
    noUnderlyings_0_0.set(UnderlyingFXRate_10);
    UnderlyingInstrument_10.insert(UnderlyingFXRate_10.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_10('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_10);
    UnderlyingInstrument_10.insert(UnderlyingFXRateCalc_10.getString());
    FIX::UnderlyingFactor UnderlyingFactor_10;
    UnderlyingFactor_10.setString("17885053");
    noUnderlyings_0_0.set(UnderlyingFactor_10);
    UnderlyingInstrument_10.insert(UnderlyingFactor_10.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_10(5687941);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_10);
    UnderlyingInstrument_10.insert(UnderlyingFlowScheduleType_10.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_10("STRING_2070529202");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_10);
    UnderlyingInstrument_10.insert(UnderlyingInstrRegistry_10.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_10("LOCALMKTDATE_798802538");
    noUnderlyings_0_0.set(UnderlyingIssueDate_10);
    UnderlyingInstrument_10.insert(UnderlyingIssueDate_10.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_10("STRING_1567379854");
    noUnderlyings_0_0.set(UnderlyingIssuer_10);
    UnderlyingInstrument_10.insert(UnderlyingIssuer_10.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_10("STRING_1762096922");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingLocaleOfIssue_10.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_10("LOCALMKTDATE_1098767076");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityDate_10.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_10("MONTHYEAR_68482119");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityMonthYear_10.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_10("TZTIMEONLY_1940950593");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityTime_10.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_10;
    UnderlyingNotionalPercentageOutstanding_10.setString("51.930000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_10);
    UnderlyingInstrument_10.insert(UnderlyingNotionalPercentageOutstanding_10.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_10('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_10);
    UnderlyingInstrument_10.insert(UnderlyingOptAttribute_10.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_10;
    UnderlyingOriginalNotionalPercentageOutstanding_10.setString("2.310000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_10);
    UnderlyingInstrument_10.insert(UnderlyingOriginalNotionalPercentageOutstanding_10.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_10("STRING_1637968935");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_10);
    UnderlyingInstrument_10.insert(UnderlyingPriceUnitOfMeasure_10.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_10;
    UnderlyingPriceUnitOfMeasureQty_10.setString("15433067");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_10);
    UnderlyingInstrument_10.insert(UnderlyingPriceUnitOfMeasureQty_10.getString());
    FIX::UnderlyingProduct UnderlyingProduct_10(765939779);
    noUnderlyings_0_0.set(UnderlyingProduct_10);
    UnderlyingInstrument_10.insert(UnderlyingProduct_10.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_10(1500008292);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_10);
    UnderlyingInstrument_10.insert(UnderlyingPutOrCall_10.getString());
    FIX::UnderlyingPx UnderlyingPx_10;
    UnderlyingPx_10.setString("5499149");
    noUnderlyings_0_0.set(UnderlyingPx_10);
    UnderlyingInstrument_10.insert(UnderlyingPx_10.getString());
    FIX::UnderlyingQty UnderlyingQty_10;
    UnderlyingQty_10.setString("11482311");
    noUnderlyings_0_0.set(UnderlyingQty_10);
    UnderlyingInstrument_10.insert(UnderlyingQty_10.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_10("LOCALMKTDATE_1493779548");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_10);
    UnderlyingInstrument_10.insert(UnderlyingRedemptionDate_10.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_10("STRING_1140777506");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_10);
    UnderlyingInstrument_10.insert(UnderlyingRepoCollateralSecurityType_10.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_10;
    UnderlyingRepurchaseRate_10.setString("56.240000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_10);
    UnderlyingInstrument_10.insert(UnderlyingRepurchaseRate_10.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_10(655042981);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_10);
    UnderlyingInstrument_10.insert(UnderlyingRepurchaseTerm_10.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_10("STRING_142887686");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_10);
    UnderlyingInstrument_10.insert(UnderlyingRestructuringType_10.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_10("STRING_116987636");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityDesc_10.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_10("EXCHANGE_1128352530");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityExchange_10.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_10("STRING_1622741634");
    noUnderlyings_0_0.set(UnderlyingSecurityID_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityID_10.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_10("STRING_1465713407");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityIDSource_10.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_10("STRING_835322748");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_10);
    UnderlyingInstrument_10.insert(UnderlyingSecuritySubType_10.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_10("STRING_418840990");
    noUnderlyings_0_0.set(UnderlyingSecurityType_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityType_10.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_10("STRING_480332432");
    noUnderlyings_0_0.set(UnderlyingSeniority_10);
    UnderlyingInstrument_10.insert(UnderlyingSeniority_10.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_10("STRING_956671035");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_10);
    UnderlyingInstrument_10.insert(UnderlyingSettlMethod_10.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_10(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_10);
    UnderlyingInstrument_10.insert(UnderlyingSettlementType_10.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_10;
    UnderlyingStartValue_10.setString("4860203");
    noUnderlyings_0_0.set(UnderlyingStartValue_10);
    UnderlyingInstrument_10.insert(UnderlyingStartValue_10.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_10("STRING_879716589");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingStateOrProvinceOfIssue_10.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_10("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_10);
    UnderlyingInstrument_10.insert(UnderlyingStrikeCurrency_10.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_10;
    UnderlyingStrikePrice_10.setString("4943298");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_10);
    UnderlyingInstrument_10.insert(UnderlyingStrikePrice_10.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_10("STRING_1957432325");
    noUnderlyings_0_0.set(UnderlyingSymbol_10);
    UnderlyingInstrument_10.insert(UnderlyingSymbol_10.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_10("STRING_2121882346");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_10);
    UnderlyingInstrument_10.insert(UnderlyingSymbolSfx_10.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_10("STRING_287796808");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_10);
    UnderlyingInstrument_10.insert(UnderlyingTimeUnit_10.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_10("STRING_1274643870");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_10);
    UnderlyingInstrument_10.insert(UnderlyingUnitOfMeasure_10.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_10;
    UnderlyingUnitOfMeasureQty_10.setString("13036334");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_10);
    UnderlyingInstrument_10.insert(UnderlyingUnitOfMeasureQty_10.getString());
    all_values.push_back(UnderlyingInstrument_10);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_20;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_20("STRING_765129157");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_20);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_20.insert(UnderlyingSecurityAltID_20.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_20("STRING_699456494");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_20);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_20.insert(UnderlyingSecurityAltIDSource_20.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_18;
      FIX::UnderlyingStipType UnderlyingStipType_18("STRING_117653801");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_18);
      UnderlyingStipulations_NoUnderlyingStips_18.insert(UnderlyingStipType_18.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_18("STRING_1249371405");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_18);
      UnderlyingStipulations_NoUnderlyingStips_18.insert(UnderlyingStipValue_18.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_18);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_19;
      FIX::UnderlyingStipType UnderlyingStipType_19("STRING_660974273");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_19);
      UnderlyingStipulations_NoUnderlyingStips_19.insert(UnderlyingStipType_19.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_19("STRING_1611433349");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_19);
      UnderlyingStipulations_NoUnderlyingStips_19.insert(UnderlyingStipValue_19.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_19);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_20;
      FIX::UnderlyingStipType UnderlyingStipType_20("STRING_242665264");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_20);
      UnderlyingStipulations_NoUnderlyingStips_20.insert(UnderlyingStipType_20.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_20("STRING_1430259898");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_20);
      UnderlyingStipulations_NoUnderlyingStips_20.insert(UnderlyingStipValue_20.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_20);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_20;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_20("STRING_385552950");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyID_20.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_20('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyIDSource_20.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_20(1247345212);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyRole_20.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_20);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_37("STRING_865477293");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_37);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37.insert(UnderlyingInstrumentPartySubID_37.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_37(2082667961);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_37);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37.insert(UnderlyingInstrumentPartySubIDType_37.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_21;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_21("STRING_279651926");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyID_21.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_21('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyIDSource_21.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_21(891855348);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyRole_21.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_21);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_38("STRING_1831830098");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_38);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38.insert(UnderlyingInstrumentPartySubID_38.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_38(1771571937);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_38);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38.insert(UnderlyingInstrumentPartySubIDType_38.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_39("STRING_1198179886");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_39);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39.insert(UnderlyingInstrumentPartySubID_39.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_39(1737746678);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_39);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39.insert(UnderlyingInstrumentPartySubIDType_39.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_40("STRING_118418152");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_40);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40.insert(UnderlyingInstrumentPartySubID_40.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_40(1008128563);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_40);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40.insert(UnderlyingInstrumentPartySubIDType_40.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_11;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_11("DATA_1712145376");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingIssuer_11.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_11(406214960);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingIssuerLen_11.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_11("DATA_135288785");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingSecurityDesc_11.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_11(868295167);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingSecurityDescLen_11.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_11;
    UnderlyingAdjustedQuantity_11.setString("13005020");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_11);
    UnderlyingInstrument_11.insert(UnderlyingAdjustedQuantity_11.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_11;
    UnderlyingAllocationPercent_11.setString("79.420000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_11);
    UnderlyingInstrument_11.insert(UnderlyingAllocationPercent_11.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_11;
    UnderlyingAttachmentPoint_11.setString("16.610000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_11);
    UnderlyingInstrument_11.insert(UnderlyingAttachmentPoint_11.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_11("STRING_813245171");
    noUnderlyings_0_1.set(UnderlyingCFICode_11);
    UnderlyingInstrument_11.insert(UnderlyingCFICode_11.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_11("STRING_1018071743");
    noUnderlyings_0_1.set(UnderlyingCPProgram_11);
    UnderlyingInstrument_11.insert(UnderlyingCPProgram_11.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_11("STRING_669639418");
    noUnderlyings_0_1.set(UnderlyingCPRegType_11);
    UnderlyingInstrument_11.insert(UnderlyingCPRegType_11.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_11;
    UnderlyingCapValue_11.setString("14742194");
    noUnderlyings_0_1.set(UnderlyingCapValue_11);
    UnderlyingInstrument_11.insert(UnderlyingCapValue_11.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_11;
    UnderlyingCashAmount_11.setString("4820214");
    noUnderlyings_0_1.set(UnderlyingCashAmount_11);
    UnderlyingInstrument_11.insert(UnderlyingCashAmount_11.getString());
    FIX::UnderlyingCashType UnderlyingCashType_11("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_11);
    UnderlyingInstrument_11.insert(UnderlyingCashType_11.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_11;
    UnderlyingContractMultiplier_11.setString("7569956");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_11);
    UnderlyingInstrument_11.insert(UnderlyingContractMultiplier_11.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_11(601014127);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_11);
    UnderlyingInstrument_11.insert(UnderlyingContractMultiplierUnit_11.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_11("COUNTRY_1297857632");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingCountryOfIssue_11.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_11("LOCALMKTDATE_156759581");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_11);
    UnderlyingInstrument_11.insert(UnderlyingCouponPaymentDate_11.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_11;
    UnderlyingCouponRate_11.setString("93.390000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_11);
    UnderlyingInstrument_11.insert(UnderlyingCouponRate_11.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_11("STRING_1158668568");
    noUnderlyings_0_1.set(UnderlyingCreditRating_11);
    UnderlyingInstrument_11.insert(UnderlyingCreditRating_11.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_11("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_11);
    UnderlyingInstrument_11.insert(UnderlyingCurrency_11.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_11;
    UnderlyingCurrentValue_11.setString("14383204");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_11);
    UnderlyingInstrument_11.insert(UnderlyingCurrentValue_11.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_11;
    UnderlyingDetachmentPoint_11.setString("29.520000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_11);
    UnderlyingInstrument_11.insert(UnderlyingDetachmentPoint_11.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_11;
    UnderlyingDirtyPrice_11.setString("5279153");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_11);
    UnderlyingInstrument_11.insert(UnderlyingDirtyPrice_11.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_11;
    UnderlyingEndPrice_11.setString("17778351");
    noUnderlyings_0_1.set(UnderlyingEndPrice_11);
    UnderlyingInstrument_11.insert(UnderlyingEndPrice_11.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_11;
    UnderlyingEndValue_11.setString("20523930");
    noUnderlyings_0_1.set(UnderlyingEndValue_11);
    UnderlyingInstrument_11.insert(UnderlyingEndValue_11.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_11(152003641);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_11);
    UnderlyingInstrument_11.insert(UnderlyingExerciseStyle_11.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_11;
    UnderlyingFXRate_11.setString("8285313");
    noUnderlyings_0_1.set(UnderlyingFXRate_11);
    UnderlyingInstrument_11.insert(UnderlyingFXRate_11.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_11('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_11);
    UnderlyingInstrument_11.insert(UnderlyingFXRateCalc_11.getString());
    FIX::UnderlyingFactor UnderlyingFactor_11;
    UnderlyingFactor_11.setString("2704217");
    noUnderlyings_0_1.set(UnderlyingFactor_11);
    UnderlyingInstrument_11.insert(UnderlyingFactor_11.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_11(1836659932);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_11);
    UnderlyingInstrument_11.insert(UnderlyingFlowScheduleType_11.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_11("STRING_1207317809");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_11);
    UnderlyingInstrument_11.insert(UnderlyingInstrRegistry_11.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_11("LOCALMKTDATE_676636754");
    noUnderlyings_0_1.set(UnderlyingIssueDate_11);
    UnderlyingInstrument_11.insert(UnderlyingIssueDate_11.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_11("STRING_1971948717");
    noUnderlyings_0_1.set(UnderlyingIssuer_11);
    UnderlyingInstrument_11.insert(UnderlyingIssuer_11.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_11("STRING_2075612976");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingLocaleOfIssue_11.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_11("LOCALMKTDATE_1977138754");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityDate_11.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_11("MONTHYEAR_724883011");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityMonthYear_11.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_11("TZTIMEONLY_1495880989");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityTime_11.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_11;
    UnderlyingNotionalPercentageOutstanding_11.setString("2.780000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_11);
    UnderlyingInstrument_11.insert(UnderlyingNotionalPercentageOutstanding_11.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_11('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_11);
    UnderlyingInstrument_11.insert(UnderlyingOptAttribute_11.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_11;
    UnderlyingOriginalNotionalPercentageOutstanding_11.setString("67.590000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_11);
    UnderlyingInstrument_11.insert(UnderlyingOriginalNotionalPercentageOutstanding_11.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_11("STRING_2117119723");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_11);
    UnderlyingInstrument_11.insert(UnderlyingPriceUnitOfMeasure_11.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_11;
    UnderlyingPriceUnitOfMeasureQty_11.setString("774925");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_11);
    UnderlyingInstrument_11.insert(UnderlyingPriceUnitOfMeasureQty_11.getString());
    FIX::UnderlyingProduct UnderlyingProduct_11(930341442);
    noUnderlyings_0_1.set(UnderlyingProduct_11);
    UnderlyingInstrument_11.insert(UnderlyingProduct_11.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_11(726631770);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_11);
    UnderlyingInstrument_11.insert(UnderlyingPutOrCall_11.getString());
    FIX::UnderlyingPx UnderlyingPx_11;
    UnderlyingPx_11.setString("6785066");
    noUnderlyings_0_1.set(UnderlyingPx_11);
    UnderlyingInstrument_11.insert(UnderlyingPx_11.getString());
    FIX::UnderlyingQty UnderlyingQty_11;
    UnderlyingQty_11.setString("807154");
    noUnderlyings_0_1.set(UnderlyingQty_11);
    UnderlyingInstrument_11.insert(UnderlyingQty_11.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_11("LOCALMKTDATE_883391351");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_11);
    UnderlyingInstrument_11.insert(UnderlyingRedemptionDate_11.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_11("STRING_379382369");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_11);
    UnderlyingInstrument_11.insert(UnderlyingRepoCollateralSecurityType_11.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_11;
    UnderlyingRepurchaseRate_11.setString("39.950000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_11);
    UnderlyingInstrument_11.insert(UnderlyingRepurchaseRate_11.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_11(1905628225);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_11);
    UnderlyingInstrument_11.insert(UnderlyingRepurchaseTerm_11.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_11("STRING_15442374");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_11);
    UnderlyingInstrument_11.insert(UnderlyingRestructuringType_11.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_11("STRING_530220841");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityDesc_11.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_11("EXCHANGE_2126191177");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityExchange_11.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_11("STRING_543357726");
    noUnderlyings_0_1.set(UnderlyingSecurityID_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityID_11.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_11("STRING_160572325");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityIDSource_11.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_11("STRING_2031100580");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_11);
    UnderlyingInstrument_11.insert(UnderlyingSecuritySubType_11.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_11("STRING_695361368");
    noUnderlyings_0_1.set(UnderlyingSecurityType_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityType_11.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_11("STRING_989103694");
    noUnderlyings_0_1.set(UnderlyingSeniority_11);
    UnderlyingInstrument_11.insert(UnderlyingSeniority_11.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_11("STRING_1526273012");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_11);
    UnderlyingInstrument_11.insert(UnderlyingSettlMethod_11.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_11(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_11);
    UnderlyingInstrument_11.insert(UnderlyingSettlementType_11.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_11;
    UnderlyingStartValue_11.setString("6782799");
    noUnderlyings_0_1.set(UnderlyingStartValue_11);
    UnderlyingInstrument_11.insert(UnderlyingStartValue_11.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_11("STRING_586107173");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingStateOrProvinceOfIssue_11.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_11("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_11);
    UnderlyingInstrument_11.insert(UnderlyingStrikeCurrency_11.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_11;
    UnderlyingStrikePrice_11.setString("5142365");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_11);
    UnderlyingInstrument_11.insert(UnderlyingStrikePrice_11.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_11("STRING_1472075022");
    noUnderlyings_0_1.set(UnderlyingSymbol_11);
    UnderlyingInstrument_11.insert(UnderlyingSymbol_11.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_11("STRING_1227628060");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_11);
    UnderlyingInstrument_11.insert(UnderlyingSymbolSfx_11.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_11("STRING_2010117490");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_11);
    UnderlyingInstrument_11.insert(UnderlyingTimeUnit_11.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_11("STRING_2114975300");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_11);
    UnderlyingInstrument_11.insert(UnderlyingUnitOfMeasure_11.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_11;
    UnderlyingUnitOfMeasureQty_11.setString("8230991");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_11);
    UnderlyingInstrument_11.insert(UnderlyingUnitOfMeasureQty_11.getString());
    all_values.push_back(UnderlyingInstrument_11);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_21;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_21("STRING_2084611375");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_21);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_21.insert(UnderlyingSecurityAltID_21.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_21("STRING_900591717");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_21);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_21.insert(UnderlyingSecurityAltIDSource_21.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_22;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_22("STRING_811012044");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_22);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_22.insert(UnderlyingSecurityAltID_22.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_22("STRING_663759497");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_22);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_22.insert(UnderlyingSecurityAltIDSource_22.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_23;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_23("STRING_1579098395");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_23);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_23.insert(UnderlyingSecurityAltID_23.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_23("STRING_891727470");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_23);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_23.insert(UnderlyingSecurityAltIDSource_23.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_21;
      FIX::UnderlyingStipType UnderlyingStipType_21("STRING_1958480765");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_21);
      UnderlyingStipulations_NoUnderlyingStips_21.insert(UnderlyingStipType_21.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_21("STRING_2131111465");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_21);
      UnderlyingStipulations_NoUnderlyingStips_21.insert(UnderlyingStipValue_21.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_21);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_22;
      FIX::UnderlyingStipType UnderlyingStipType_22("STRING_1305295425");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_22);
      UnderlyingStipulations_NoUnderlyingStips_22.insert(UnderlyingStipType_22.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_22("STRING_1973923139");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_22);
      UnderlyingStipulations_NoUnderlyingStips_22.insert(UnderlyingStipValue_22.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_22);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_22;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_22("STRING_1284002955");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyID_22.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_22('3');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyIDSource_22.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_22(674420984);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyRole_22.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_22);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_41("STRING_1065158585");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_41);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41.insert(UnderlyingInstrumentPartySubID_41.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_41(1663524678);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_41);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41.insert(UnderlyingInstrumentPartySubIDType_41.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_41);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_23;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_23("STRING_546409251");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyID_23.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_23('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyIDSource_23.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_23(194321009);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyRole_23.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_23);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_42("STRING_1525878014");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_42);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42.insert(UnderlyingInstrumentPartySubID_42.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_42(697066058);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_42);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42.insert(UnderlyingInstrumentPartySubIDType_42.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_42);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
