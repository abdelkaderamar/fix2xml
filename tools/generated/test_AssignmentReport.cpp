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
  multiset<string> all_compo_names;
  multiset<string> AssignmentReport_0;
  FIX::Account Account_0("STRING_1679784572");
  msg.set(Account_0);
  AssignmentReport_0.insert(Account_0.getString());
  FIX::AccountType AccountType_0(2);
  msg.set(AccountType_0);
  AssignmentReport_0.insert(AccountType_0.getString());
  FIX::AsgnRptID AsgnRptID_0("STRING_614078973");
  msg.set(AsgnRptID_0);
  AssignmentReport_0.insert(AsgnRptID_0.getString());
  FIX::AssignmentMethod AssignmentMethod_0('P');
  msg.set(AssignmentMethod_0);
  AssignmentReport_0.insert(AssignmentMethod_0.getString());
  FIX::AssignmentUnit AssignmentUnit_0;
  AssignmentUnit_0.setString("8560403");
  msg.set(AssignmentUnit_0);
  AssignmentReport_0.insert(AssignmentUnit_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_5("LOCALMKTDATE_606238739");
  msg.set(ClearingBusinessDate_5);
  AssignmentReport_0.insert(ClearingBusinessDate_5.getString());
  FIX::Currency Currency_4("CAN");
  msg.set(Currency_4);
  AssignmentReport_0.insert(Currency_4.getString());
  FIX::EncodedText EncodedText_9("DATA_645718697");
  msg.set(EncodedText_9);
  AssignmentReport_0.insert(EncodedText_9.getString());
  FIX::EncodedTextLen EncodedTextLen_9(182993795);
  msg.set(EncodedTextLen_9);
  AssignmentReport_0.insert(EncodedTextLen_9.getString());
  FIX::ExerciseMethod ExerciseMethod_0('M');
  msg.set(ExerciseMethod_0);
  AssignmentReport_0.insert(ExerciseMethod_0.getString());
  FIX::ExpireDate ExpireDate_0("LOCALMKTDATE_169043469");
  msg.set(ExpireDate_0);
  AssignmentReport_0.insert(ExpireDate_0.getString());
  FIX::LastRptRequested LastRptRequested_0(true);
  msg.set(LastRptRequested_0);
  AssignmentReport_0.insert(LastRptRequested_0.getString());
  FIX::OpenInterest OpenInterest_0;
  OpenInterest_0.setString("16150821");
  msg.set(OpenInterest_0);
  AssignmentReport_0.insert(OpenInterest_0.getString());
  FIX::PosReqID PosReqID_0("STRING_1433249215");
  msg.set(PosReqID_0);
  AssignmentReport_0.insert(PosReqID_0.getString());
  FIX::PriorSettlPrice PriorSettlPrice_1;
  PriorSettlPrice_1.setString("17926235");
  msg.set(PriorSettlPrice_1);
  AssignmentReport_0.insert(PriorSettlPrice_1.getString());
  FIX::SettlPrice SettlPrice_1;
  SettlPrice_1.setString("11385197");
  msg.set(SettlPrice_1);
  AssignmentReport_0.insert(SettlPrice_1.getString());
  FIX::SettlPriceType SettlPriceType_0(1);
  msg.set(SettlPriceType_0);
  AssignmentReport_0.insert(SettlPriceType_0.getString());
  FIX::SettlSessID SettlSessID_1("STRING_ETH");
  msg.set(SettlSessID_1);
  AssignmentReport_0.insert(SettlSessID_1.getString());
  FIX::SettlSessSubID SettlSessSubID_0("STRING_732526808");
  msg.set(SettlSessSubID_0);
  AssignmentReport_0.insert(SettlSessSubID_0.getString());
  FIX::Text Text_9("STRING_1072763110");
  msg.set(Text_9);
  AssignmentReport_0.insert(Text_9.getString());
  FIX::ThresholdAmount ThresholdAmount_0;
  ThresholdAmount_0.setString("15124421");
  msg.set(ThresholdAmount_0);
  AssignmentReport_0.insert(ThresholdAmount_0.getString());
  FIX::TotNumAssignmentReports TotNumAssignmentReports_0(193993217);
  msg.set(TotNumAssignmentReports_0);
  AssignmentReport_0.insert(TotNumAssignmentReports_0.getString());
  FIX::UnderlyingSettlPrice UnderlyingSettlPrice_0;
  UnderlyingSettlPrice_0.setString("840975");
  msg.set(UnderlyingSettlPrice_0);
  AssignmentReport_0.insert(UnderlyingSettlPrice_0.getString());
  all_values.push_back(AssignmentReport_0);

  all_compo_names.insert("AssignmentReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_0;
  FIX::ApplID ApplID_0("STRING_860380194");
  msg.set(ApplID_0);
  ApplicationSequenceControl_0.insert(ApplID_0.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_0(251687324);
  msg.set(ApplLastSeqNum_0);
  ApplicationSequenceControl_0.insert(ApplLastSeqNum_0.getString());
  FIX::ApplResendFlag ApplResendFlag_0(true);
  msg.set(ApplResendFlag_0);
  ApplicationSequenceControl_0.insert(ApplResendFlag_0.getString());
  FIX::ApplSeqNum ApplSeqNum_0(1704739487);
  msg.set(ApplSeqNum_0);
  ApplicationSequenceControl_0.insert(ApplSeqNum_0.getString());
  all_values.push_back(ApplicationSequenceControl_0);
  all_compo_names.insert("ApplicationSequenceControl");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AssignmentReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_11;
    FIX::EncodedLegIssuer EncodedLegIssuer_11("DATA_622098971");
    noLegs_0_0.set(EncodedLegIssuer_11);
    InstrumentLeg_11.insert(EncodedLegIssuer_11.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_11(881887357);
    noLegs_0_0.set(EncodedLegIssuerLen_11);
    InstrumentLeg_11.insert(EncodedLegIssuerLen_11.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_11("DATA_1885845578");
    noLegs_0_0.set(EncodedLegSecurityDesc_11);
    InstrumentLeg_11.insert(EncodedLegSecurityDesc_11.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_11(504649673);
    noLegs_0_0.set(EncodedLegSecurityDescLen_11);
    InstrumentLeg_11.insert(EncodedLegSecurityDescLen_11.getString());
    FIX::LegCFICode LegCFICode_11("STRING_1495966330");
    noLegs_0_0.set(LegCFICode_11);
    InstrumentLeg_11.insert(LegCFICode_11.getString());
    FIX::LegContractMultiplier LegContractMultiplier_11;
    LegContractMultiplier_11.setString("5025355");
    noLegs_0_0.set(LegContractMultiplier_11);
    InstrumentLeg_11.insert(LegContractMultiplier_11.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_11(1360690036);
    noLegs_0_0.set(LegContractMultiplierUnit_11);
    InstrumentLeg_11.insert(LegContractMultiplierUnit_11.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_11("MONTHYEAR_2102205069");
    noLegs_0_0.set(LegContractSettlMonth_11);
    InstrumentLeg_11.insert(LegContractSettlMonth_11.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_11("COUNTRY_1196807374");
    noLegs_0_0.set(LegCountryOfIssue_11);
    InstrumentLeg_11.insert(LegCountryOfIssue_11.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_11("LOCALMKTDATE_334135147");
    noLegs_0_0.set(LegCouponPaymentDate_11);
    InstrumentLeg_11.insert(LegCouponPaymentDate_11.getString());
    FIX::LegCouponRate LegCouponRate_11;
    LegCouponRate_11.setString("1.180000");
    noLegs_0_0.set(LegCouponRate_11);
    InstrumentLeg_11.insert(LegCouponRate_11.getString());
    FIX::LegCreditRating LegCreditRating_11("STRING_1379801169");
    noLegs_0_0.set(LegCreditRating_11);
    InstrumentLeg_11.insert(LegCreditRating_11.getString());
    FIX::LegCurrency LegCurrency_11("CHF");
    noLegs_0_0.set(LegCurrency_11);
    InstrumentLeg_11.insert(LegCurrency_11.getString());
    FIX::LegDatedDate LegDatedDate_11("LOCALMKTDATE_1267481277");
    noLegs_0_0.set(LegDatedDate_11);
    InstrumentLeg_11.insert(LegDatedDate_11.getString());
    FIX::LegExerciseStyle LegExerciseStyle_11(473215586);
    noLegs_0_0.set(LegExerciseStyle_11);
    InstrumentLeg_11.insert(LegExerciseStyle_11.getString());
    FIX::LegFactor LegFactor_11;
    LegFactor_11.setString("552491");
    noLegs_0_0.set(LegFactor_11);
    InstrumentLeg_11.insert(LegFactor_11.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_11(912621211);
    noLegs_0_0.set(LegFlowScheduleType_11);
    InstrumentLeg_11.insert(LegFlowScheduleType_11.getString());
    FIX::LegInstrRegistry LegInstrRegistry_11("STRING_1611735355");
    noLegs_0_0.set(LegInstrRegistry_11);
    InstrumentLeg_11.insert(LegInstrRegistry_11.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_11("LOCALMKTDATE_905244039");
    noLegs_0_0.set(LegInterestAccrualDate_11);
    InstrumentLeg_11.insert(LegInterestAccrualDate_11.getString());
    FIX::LegIssueDate LegIssueDate_11("LOCALMKTDATE_1244771909");
    noLegs_0_0.set(LegIssueDate_11);
    InstrumentLeg_11.insert(LegIssueDate_11.getString());
    FIX::LegIssuer LegIssuer_11("STRING_196778515");
    noLegs_0_0.set(LegIssuer_11);
    InstrumentLeg_11.insert(LegIssuer_11.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_11("STRING_1978007150");
    noLegs_0_0.set(LegLocaleOfIssue_11);
    InstrumentLeg_11.insert(LegLocaleOfIssue_11.getString());
    FIX::LegMaturityDate LegMaturityDate_11("LOCALMKTDATE_609730389");
    noLegs_0_0.set(LegMaturityDate_11);
    InstrumentLeg_11.insert(LegMaturityDate_11.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_11("MONTHYEAR_390771732");
    noLegs_0_0.set(LegMaturityMonthYear_11);
    InstrumentLeg_11.insert(LegMaturityMonthYear_11.getString());
    FIX::LegMaturityTime LegMaturityTime_11("TZTIMEONLY_2062104739");
    noLegs_0_0.set(LegMaturityTime_11);
    InstrumentLeg_11.insert(LegMaturityTime_11.getString());
    FIX::LegOptAttribute LegOptAttribute_11('1');
    noLegs_0_0.set(LegOptAttribute_11);
    InstrumentLeg_11.insert(LegOptAttribute_11.getString());
    FIX::LegOptionRatio LegOptionRatio_11;
    LegOptionRatio_11.setString("6424590");
    noLegs_0_0.set(LegOptionRatio_11);
    InstrumentLeg_11.insert(LegOptionRatio_11.getString());
    FIX::LegPool LegPool_11("STRING_2082731811");
    noLegs_0_0.set(LegPool_11);
    InstrumentLeg_11.insert(LegPool_11.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_11("STRING_1027366423");
    noLegs_0_0.set(LegPriceUnitOfMeasure_11);
    InstrumentLeg_11.insert(LegPriceUnitOfMeasure_11.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_11;
    LegPriceUnitOfMeasureQty_11.setString("8485200");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_11);
    InstrumentLeg_11.insert(LegPriceUnitOfMeasureQty_11.getString());
    FIX::LegProduct LegProduct_11(557347135);
    noLegs_0_0.set(LegProduct_11);
    InstrumentLeg_11.insert(LegProduct_11.getString());
    FIX::LegPutOrCall LegPutOrCall_11(1909253780);
    noLegs_0_0.set(LegPutOrCall_11);
    InstrumentLeg_11.insert(LegPutOrCall_11.getString());
    FIX::LegRatioQty LegRatioQty_11;
    LegRatioQty_11.setString("5868819");
    noLegs_0_0.set(LegRatioQty_11);
    InstrumentLeg_11.insert(LegRatioQty_11.getString());
    FIX::LegRedemptionDate LegRedemptionDate_11("LOCALMKTDATE_1061996808");
    noLegs_0_0.set(LegRedemptionDate_11);
    InstrumentLeg_11.insert(LegRedemptionDate_11.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_11("STRING_1257736462");
    noLegs_0_0.set(LegRepoCollateralSecurityType_11);
    InstrumentLeg_11.insert(LegRepoCollateralSecurityType_11.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_11;
    LegRepurchaseRate_11.setString("75.190000");
    noLegs_0_0.set(LegRepurchaseRate_11);
    InstrumentLeg_11.insert(LegRepurchaseRate_11.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_11(275203197);
    noLegs_0_0.set(LegRepurchaseTerm_11);
    InstrumentLeg_11.insert(LegRepurchaseTerm_11.getString());
    FIX::LegSecurityDesc LegSecurityDesc_11("STRING_1212457883");
    noLegs_0_0.set(LegSecurityDesc_11);
    InstrumentLeg_11.insert(LegSecurityDesc_11.getString());
    FIX::LegSecurityExchange LegSecurityExchange_11("EXCHANGE_138741245");
    noLegs_0_0.set(LegSecurityExchange_11);
    InstrumentLeg_11.insert(LegSecurityExchange_11.getString());
    FIX::LegSecurityID LegSecurityID_11("STRING_609338344");
    noLegs_0_0.set(LegSecurityID_11);
    InstrumentLeg_11.insert(LegSecurityID_11.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_11("STRING_1812898002");
    noLegs_0_0.set(LegSecurityIDSource_11);
    InstrumentLeg_11.insert(LegSecurityIDSource_11.getString());
    FIX::LegSecuritySubType LegSecuritySubType_11("STRING_1518542414");
    noLegs_0_0.set(LegSecuritySubType_11);
    InstrumentLeg_11.insert(LegSecuritySubType_11.getString());
    FIX::LegSecurityType LegSecurityType_11("STRING_1614955381");
    noLegs_0_0.set(LegSecurityType_11);
    InstrumentLeg_11.insert(LegSecurityType_11.getString());
    FIX::LegSide LegSide_11('4');
    noLegs_0_0.set(LegSide_11);
    InstrumentLeg_11.insert(LegSide_11.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_11("STRING_638540044");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_11);
    InstrumentLeg_11.insert(LegStateOrProvinceOfIssue_11.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_11("JPY");
    noLegs_0_0.set(LegStrikeCurrency_11);
    InstrumentLeg_11.insert(LegStrikeCurrency_11.getString());
    FIX::LegStrikePrice LegStrikePrice_11;
    LegStrikePrice_11.setString("15511612");
    noLegs_0_0.set(LegStrikePrice_11);
    InstrumentLeg_11.insert(LegStrikePrice_11.getString());
    FIX::LegSymbol LegSymbol_11("STRING_1552422674");
    noLegs_0_0.set(LegSymbol_11);
    InstrumentLeg_11.insert(LegSymbol_11.getString());
    FIX::LegSymbolSfx LegSymbolSfx_11("STRING_1395391136");
    noLegs_0_0.set(LegSymbolSfx_11);
    InstrumentLeg_11.insert(LegSymbolSfx_11.getString());
    FIX::LegTimeUnit LegTimeUnit_11("STRING_648449516");
    noLegs_0_0.set(LegTimeUnit_11);
    InstrumentLeg_11.insert(LegTimeUnit_11.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_11("STRING_1749201189");
    noLegs_0_0.set(LegUnitOfMeasure_11);
    InstrumentLeg_11.insert(LegUnitOfMeasure_11.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_11;
    LegUnitOfMeasureQty_11.setString("12259146");
    noLegs_0_0.set(LegUnitOfMeasureQty_11);
    InstrumentLeg_11.insert(LegUnitOfMeasureQty_11.getString());
    all_values.push_back(InstrumentLeg_11);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_23;
      FIX::LegSecurityAltID LegSecurityAltID_23("STRING_2139972921");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltID_23.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_23("STRING_1140535729");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltIDSource_23.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_23);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_5;
  FIX::AttachmentPoint AttachmentPoint_5;
  AttachmentPoint_5.setString("68.420000");
  msg.set(AttachmentPoint_5);
  Instrument_5.insert(AttachmentPoint_5.getString());
  FIX::CFICode CFICode_5("STRING_634948329");
  msg.set(CFICode_5);
  Instrument_5.insert(CFICode_5.getString());
  FIX::CPProgram CPProgram_5(1);
  msg.set(CPProgram_5);
  Instrument_5.insert(CPProgram_5.getString());
  FIX::CPRegType CPRegType_5("STRING_1608173265");
  msg.set(CPRegType_5);
  Instrument_5.insert(CPRegType_5.getString());
  FIX::CapPrice CapPrice_5;
  CapPrice_5.setString("14834683");
  msg.set(CapPrice_5);
  Instrument_5.insert(CapPrice_5.getString());
  FIX::ContractMultiplier ContractMultiplier_5;
  ContractMultiplier_5.setString("16331310");
  msg.set(ContractMultiplier_5);
  Instrument_5.insert(ContractMultiplier_5.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_5(1);
  msg.set(ContractMultiplierUnit_5);
  Instrument_5.insert(ContractMultiplierUnit_5.getString());
  FIX::ContractSettlMonth ContractSettlMonth_5("MONTHYEAR_2070350383");
  msg.set(ContractSettlMonth_5);
  Instrument_5.insert(ContractSettlMonth_5.getString());
  FIX::CountryOfIssue CountryOfIssue_5("COUNTRY_547644188");
  msg.set(CountryOfIssue_5);
  Instrument_5.insert(CountryOfIssue_5.getString());
  FIX::CouponPaymentDate CouponPaymentDate_5("LOCALMKTDATE_480196212");
  msg.set(CouponPaymentDate_5);
  Instrument_5.insert(CouponPaymentDate_5.getString());
  FIX::CouponRate CouponRate_5;
  CouponRate_5.setString("42.550000");
  msg.set(CouponRate_5);
  Instrument_5.insert(CouponRate_5.getString());
  FIX::CreditRating CreditRating_5("STRING_822847385");
  msg.set(CreditRating_5);
  Instrument_5.insert(CreditRating_5.getString());
  FIX::DatedDate DatedDate_5("LOCALMKTDATE_1692654096");
  msg.set(DatedDate_5);
  Instrument_5.insert(DatedDate_5.getString());
  FIX::DetachmentPoint DetachmentPoint_5;
  DetachmentPoint_5.setString("55.000000");
  msg.set(DetachmentPoint_5);
  Instrument_5.insert(DetachmentPoint_5.getString());
  FIX::EncodedIssuer EncodedIssuer_5("DATA_1432185730");
  msg.set(EncodedIssuer_5);
  Instrument_5.insert(EncodedIssuer_5.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_5(1358068450);
  msg.set(EncodedIssuerLen_5);
  Instrument_5.insert(EncodedIssuerLen_5.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_5("DATA_522084267");
  msg.set(EncodedSecurityDesc_5);
  Instrument_5.insert(EncodedSecurityDesc_5.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_5(899657463);
  msg.set(EncodedSecurityDescLen_5);
  Instrument_5.insert(EncodedSecurityDescLen_5.getString());
  FIX::ExerciseStyle ExerciseStyle_5(2);
  msg.set(ExerciseStyle_5);
  Instrument_5.insert(ExerciseStyle_5.getString());
  FIX::Factor Factor_5;
  Factor_5.setString("11606243");
  msg.set(Factor_5);
  Instrument_5.insert(Factor_5.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_5(true);
  msg.set(FlexProductEligibilityIndicator_5);
  Instrument_5.insert(FlexProductEligibilityIndicator_5.getString());
  FIX::FlexibleIndicator FlexibleIndicator_5(true);
  msg.set(FlexibleIndicator_5);
  Instrument_5.insert(FlexibleIndicator_5.getString());
  FIX::FloorPrice FloorPrice_5;
  FloorPrice_5.setString("5643019");
  msg.set(FloorPrice_5);
  Instrument_5.insert(FloorPrice_5.getString());
  FIX::FlowScheduleType FlowScheduleType_5(3);
  msg.set(FlowScheduleType_5);
  Instrument_5.insert(FlowScheduleType_5.getString());
  FIX::InstrRegistry InstrRegistry_5("STRING_1531020976");
  msg.set(InstrRegistry_5);
  Instrument_5.insert(InstrRegistry_5.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_5('1');
  msg.set(InstrmtAssignmentMethod_5);
  Instrument_5.insert(InstrmtAssignmentMethod_5.getString());
  FIX::InterestAccrualDate InterestAccrualDate_5("LOCALMKTDATE_1994484997");
  msg.set(InterestAccrualDate_5);
  Instrument_5.insert(InterestAccrualDate_5.getString());
  FIX::IssueDate IssueDate_5("LOCALMKTDATE_609451966");
  msg.set(IssueDate_5);
  Instrument_5.insert(IssueDate_5.getString());
  FIX::Issuer Issuer_5("STRING_323447692");
  msg.set(Issuer_5);
  Instrument_5.insert(Issuer_5.getString());
  FIX::ListMethod ListMethod_5(0);
  msg.set(ListMethod_5);
  Instrument_5.insert(ListMethod_5.getString());
  FIX::LocaleOfIssue LocaleOfIssue_5("STRING_1749987695");
  msg.set(LocaleOfIssue_5);
  Instrument_5.insert(LocaleOfIssue_5.getString());
  FIX::MaturityDate MaturityDate_5("LOCALMKTDATE_904254534");
  msg.set(MaturityDate_5);
  Instrument_5.insert(MaturityDate_5.getString());
  FIX::MaturityMonthYear MaturityMonthYear_5("MONTHYEAR_474438951");
  msg.set(MaturityMonthYear_5);
  Instrument_5.insert(MaturityMonthYear_5.getString());
  FIX::MaturityTime MaturityTime_5("TZTIMEONLY_678287940");
  msg.set(MaturityTime_5);
  Instrument_5.insert(MaturityTime_5.getString());
  FIX::MinPriceIncrement MinPriceIncrement_5;
  MinPriceIncrement_5.setString("3649441");
  msg.set(MinPriceIncrement_5);
  Instrument_5.insert(MinPriceIncrement_5.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_5;
  MinPriceIncrementAmount_5.setString("19579073");
  msg.set(MinPriceIncrementAmount_5);
  Instrument_5.insert(MinPriceIncrementAmount_5.getString());
  FIX::NTPositionLimit NTPositionLimit_5(163935320);
  msg.set(NTPositionLimit_5);
  Instrument_5.insert(NTPositionLimit_5.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_5;
  NotionalPercentageOutstanding_5.setString("75.500000");
  msg.set(NotionalPercentageOutstanding_5);
  Instrument_5.insert(NotionalPercentageOutstanding_5.getString());
  FIX::OptAttribute OptAttribute_5('1');
  msg.set(OptAttribute_5);
  Instrument_5.insert(OptAttribute_5.getString());
  FIX::OptPayoutAmount OptPayoutAmount_5;
  OptPayoutAmount_5.setString("7115795");
  msg.set(OptPayoutAmount_5);
  Instrument_5.insert(OptPayoutAmount_5.getString());
  FIX::OptPayoutType OptPayoutType_5(2);
  msg.set(OptPayoutType_5);
  Instrument_5.insert(OptPayoutType_5.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_5;
  OriginalNotionalPercentageOutstanding_5.setString("46.840000");
  msg.set(OriginalNotionalPercentageOutstanding_5);
  Instrument_5.insert(OriginalNotionalPercentageOutstanding_5.getString());
  FIX::Pool Pool_5("STRING_1534426894");
  msg.set(Pool_5);
  Instrument_5.insert(Pool_5.getString());
  FIX::PositionLimit PositionLimit_5(1760254210);
  msg.set(PositionLimit_5);
  Instrument_5.insert(PositionLimit_5.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_5("STRING_INX");
  msg.set(PriceQuoteMethod_5);
  Instrument_5.insert(PriceQuoteMethod_5.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_5("STRING_819128976");
  msg.set(PriceUnitOfMeasure_5);
  Instrument_5.insert(PriceUnitOfMeasure_5.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_5;
  PriceUnitOfMeasureQty_5.setString("9708390");
  msg.set(PriceUnitOfMeasureQty_5);
  Instrument_5.insert(PriceUnitOfMeasureQty_5.getString());
  FIX::Product Product_7(5);
  msg.set(Product_7);
  Instrument_5.insert(Product_7.getString());
  FIX::ProductComplex ProductComplex_5("STRING_1718786439");
  msg.set(ProductComplex_5);
  Instrument_5.insert(ProductComplex_5.getString());
  FIX::PutOrCall PutOrCall_5(0);
  msg.set(PutOrCall_5);
  Instrument_5.insert(PutOrCall_5.getString());
  FIX::RedemptionDate RedemptionDate_5("LOCALMKTDATE_1431825115");
  msg.set(RedemptionDate_5);
  Instrument_5.insert(RedemptionDate_5.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_5("STRING_411647573");
  msg.set(RepoCollateralSecurityType_5);
  Instrument_5.insert(RepoCollateralSecurityType_5.getString());
  FIX::RepurchaseRate RepurchaseRate_5;
  RepurchaseRate_5.setString("15.960000");
  msg.set(RepurchaseRate_5);
  Instrument_5.insert(RepurchaseRate_5.getString());
  FIX::RepurchaseTerm RepurchaseTerm_5(1996127033);
  msg.set(RepurchaseTerm_5);
  Instrument_5.insert(RepurchaseTerm_5.getString());
  FIX::RestructuringType RestructuringType_5("STRING_MR");
  msg.set(RestructuringType_5);
  Instrument_5.insert(RestructuringType_5.getString());
  FIX::SecurityDesc SecurityDesc_5("STRING_135488924");
  msg.set(SecurityDesc_5);
  Instrument_5.insert(SecurityDesc_5.getString());
  FIX::SecurityExchange SecurityExchange_5("EXCHANGE_1061394819");
  msg.set(SecurityExchange_5);
  Instrument_5.insert(SecurityExchange_5.getString());
  FIX::SecurityGroup SecurityGroup_5("STRING_503932730");
  msg.set(SecurityGroup_5);
  Instrument_5.insert(SecurityGroup_5.getString());
  FIX::SecurityID SecurityID_5("STRING_744940890");
  msg.set(SecurityID_5);
  Instrument_5.insert(SecurityID_5.getString());
  FIX::SecurityIDSource SecurityIDSource_5("STRING_L");
  msg.set(SecurityIDSource_5);
  Instrument_5.insert(SecurityIDSource_5.getString());
  FIX::SecurityStatus SecurityStatus_5("STRING_1");
  msg.set(SecurityStatus_5);
  Instrument_5.insert(SecurityStatus_5.getString());
  FIX::SecuritySubType SecuritySubType_5("STRING_347444937");
  msg.set(SecuritySubType_5);
  Instrument_5.insert(SecuritySubType_5.getString());
  FIX::SecurityType SecurityType_7("STRING_CL");
  msg.set(SecurityType_7);
  Instrument_5.insert(SecurityType_7.getString());
  FIX::Seniority Seniority_5("STRING_SB");
  msg.set(Seniority_5);
  Instrument_5.insert(Seniority_5.getString());
  FIX::SettlMethod SettlMethod_5('C');
  msg.set(SettlMethod_5);
  Instrument_5.insert(SettlMethod_5.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_5("STRING_506557550");
  msg.set(SettleOnOpenFlag_5);
  Instrument_5.insert(SettleOnOpenFlag_5.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_5("STRING_628285997");
  msg.set(StateOrProvinceOfIssue_5);
  Instrument_5.insert(StateOrProvinceOfIssue_5.getString());
  FIX::StrikeCurrency StrikeCurrency_5("USD");
  msg.set(StrikeCurrency_5);
  Instrument_5.insert(StrikeCurrency_5.getString());
  FIX::StrikeMultiplier StrikeMultiplier_5;
  StrikeMultiplier_5.setString("3615764");
  msg.set(StrikeMultiplier_5);
  Instrument_5.insert(StrikeMultiplier_5.getString());
  FIX::StrikePrice StrikePrice_5;
  StrikePrice_5.setString("19012477");
  msg.set(StrikePrice_5);
  Instrument_5.insert(StrikePrice_5.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_5(3);
  msg.set(StrikePriceBoundaryMethod_5);
  Instrument_5.insert(StrikePriceBoundaryMethod_5.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_5;
  StrikePriceBoundaryPrecision_5.setString("11.110000");
  msg.set(StrikePriceBoundaryPrecision_5);
  Instrument_5.insert(StrikePriceBoundaryPrecision_5.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_5(3);
  msg.set(StrikePriceDeterminationMethod_5);
  Instrument_5.insert(StrikePriceDeterminationMethod_5.getString());
  FIX::StrikeValue StrikeValue_5;
  StrikeValue_5.setString("19218157");
  msg.set(StrikeValue_5);
  Instrument_5.insert(StrikeValue_5.getString());
  FIX::Symbol Symbol_5("STRING_856267648");
  msg.set(Symbol_5);
  Instrument_5.insert(Symbol_5.getString());
  FIX::SymbolSfx SymbolSfx_5("STRING_CD");
  msg.set(SymbolSfx_5);
  Instrument_5.insert(SymbolSfx_5.getString());
  FIX::TimeUnit TimeUnit_5("STRING_S");
  msg.set(TimeUnit_5);
  Instrument_5.insert(TimeUnit_5.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_5(1);
  msg.set(UnderlyingPriceDeterminationMethod_5);
  Instrument_5.insert(UnderlyingPriceDeterminationMethod_5.getString());
  FIX::UnitOfMeasure UnitOfMeasure_5("STRING_tn");
  msg.set(UnitOfMeasure_5);
  Instrument_5.insert(UnitOfMeasure_5.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_5;
  UnitOfMeasureQty_5.setString("13614928");
  msg.set(UnitOfMeasureQty_5);
  Instrument_5.insert(UnitOfMeasureQty_5.getString());
  FIX::ValuationMethod ValuationMethod_5("STRING_CDSD");
  msg.set(ValuationMethod_5);
  Instrument_5.insert(ValuationMethod_5.getString());
  all_values.push_back(Instrument_5);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AssignmentReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_12;
    FIX::ComplexEventCondition ComplexEventCondition_12(1);
    noComplexEvents_0_0.set(ComplexEventCondition_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventCondition_12.getString());
    FIX::ComplexEventPrice ComplexEventPrice_12;
    ComplexEventPrice_12.setString("2604533");
    noComplexEvents_0_0.set(ComplexEventPrice_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPrice_12.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_12(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceBoundaryMethod_12.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_12;
    ComplexEventPriceBoundaryPrecision_12.setString("97.700000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceBoundaryPrecision_12.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_12(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventPriceTimeType_12.getString());
    FIX::ComplexEventType ComplexEventType_12(2);
    noComplexEvents_0_0.set(ComplexEventType_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexEventType_12.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_12;
    ComplexOptPayoutAmount_12.setString("8463906");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_12);
    ComplexEvents_NoComplexEvents_12.insert(ComplexOptPayoutAmount_12.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_12);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_32;
      FIX::ComplexEventEndDate ComplexEventEndDate_32(FIX::UTCTIMESTAMP(21, 46, 7, 3, 2, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_32);
      ComplexEventDates_NoComplexEventDates_32.insert(ComplexEventEndDate_32.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_32(FIX::UTCTIMESTAMP(13, 12, 45, 20, 12, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_32);
      ComplexEventDates_NoComplexEventDates_32.insert(ComplexEventStartDate_32.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_32);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_63;
        FIX::ComplexEventEndTime ComplexEventEndTime_63(FIX::UTCTIMEONLY(10, 28, 56));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_63);
        ComplexEventTimes_NoComplexEventTimes_63.insert(ComplexEventEndTime_63.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_63(FIX::UTCTIMEONLY(14, 28, 3));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_63);
        ComplexEventTimes_NoComplexEventTimes_63.insert(ComplexEventStartTime_63.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_63);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_64;
        FIX::ComplexEventEndTime ComplexEventEndTime_64(FIX::UTCTIMEONLY(4, 24, 54));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_64);
        ComplexEventTimes_NoComplexEventTimes_64.insert(ComplexEventEndTime_64.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_64(FIX::UTCTIMEONLY(8, 54, 16));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_64);
        ComplexEventTimes_NoComplexEventTimes_64.insert(ComplexEventStartTime_64.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_64);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_65;
        FIX::ComplexEventEndTime ComplexEventEndTime_65(FIX::UTCTIMEONLY(7, 3, 35));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_65);
        ComplexEventTimes_NoComplexEventTimes_65.insert(ComplexEventEndTime_65.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_65(FIX::UTCTIMEONLY(8, 0, 29));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_65);
        ComplexEventTimes_NoComplexEventTimes_65.insert(ComplexEventStartTime_65.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_65);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_33;
      FIX::ComplexEventEndDate ComplexEventEndDate_33(FIX::UTCTIMESTAMP(4, 14, 50, 16, 7, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_33);
      ComplexEventDates_NoComplexEventDates_33.insert(ComplexEventEndDate_33.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_33(FIX::UTCTIMESTAMP(4, 36, 32, 8, 7, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_33);
      ComplexEventDates_NoComplexEventDates_33.insert(ComplexEventStartDate_33.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_33);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_66;
        FIX::ComplexEventEndTime ComplexEventEndTime_66(FIX::UTCTIMEONLY(9, 48, 16));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_66);
        ComplexEventTimes_NoComplexEventTimes_66.insert(ComplexEventEndTime_66.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_66(FIX::UTCTIMEONLY(12, 2, 50));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_66);
        ComplexEventTimes_NoComplexEventTimes_66.insert(ComplexEventStartTime_66.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_66);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_67;
        FIX::ComplexEventEndTime ComplexEventEndTime_67(FIX::UTCTIMEONLY(13, 53, 27));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_67);
        ComplexEventTimes_NoComplexEventTimes_67.insert(ComplexEventEndTime_67.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_67(FIX::UTCTIMEONLY(13, 20, 37));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_67);
        ComplexEventTimes_NoComplexEventTimes_67.insert(ComplexEventStartTime_67.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_67);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_68;
        FIX::ComplexEventEndTime ComplexEventEndTime_68(FIX::UTCTIMEONLY(12, 44, 28));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_68);
        ComplexEventTimes_NoComplexEventTimes_68.insert(ComplexEventEndTime_68.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_68(FIX::UTCTIMEONLY(18, 36, 40));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_68);
        ComplexEventTimes_NoComplexEventTimes_68.insert(ComplexEventStartTime_68.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_68);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_8;
    FIX::EventDate EventDate_8("LOCALMKTDATE_488786944");
    noEvents_0_0.set(EventDate_8);
    EvntGrp_NoEvents_8.insert(EventDate_8.getString());
    FIX::EventPx EventPx_8;
    EventPx_8.setString("1350740");
    noEvents_0_0.set(EventPx_8);
    EvntGrp_NoEvents_8.insert(EventPx_8.getString());
    FIX::EventText EventText_8("STRING_969021342");
    noEvents_0_0.set(EventText_8);
    EvntGrp_NoEvents_8.insert(EventText_8.getString());
    FIX::EventTime EventTime_8(FIX::UTCTIMESTAMP(17, 5, 32, 2, 10, 2004));
    noEvents_0_0.set(EventTime_8);
    EvntGrp_NoEvents_8.insert(EventTime_8.getString());
    FIX::EventType EventType_8(5);
    noEvents_0_0.set(EventType_8);
    EvntGrp_NoEvents_8.insert(EventType_8.getString());
    all_values.push_back(EvntGrp_NoEvents_8);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_9;
    FIX::EventDate EventDate_9("LOCALMKTDATE_950545689");
    noEvents_0_1.set(EventDate_9);
    EvntGrp_NoEvents_9.insert(EventDate_9.getString());
    FIX::EventPx EventPx_9;
    EventPx_9.setString("11068532");
    noEvents_0_1.set(EventPx_9);
    EvntGrp_NoEvents_9.insert(EventPx_9.getString());
    FIX::EventText EventText_9("STRING_1725840794");
    noEvents_0_1.set(EventText_9);
    EvntGrp_NoEvents_9.insert(EventText_9.getString());
    FIX::EventTime EventTime_9(FIX::UTCTIMESTAMP(8, 59, 21, 0, 1, 2011));
    noEvents_0_1.set(EventTime_9);
    EvntGrp_NoEvents_9.insert(EventTime_9.getString());
    FIX::EventType EventType_9(19);
    noEvents_0_1.set(EventType_9);
    EvntGrp_NoEvents_9.insert(EventType_9.getString());
    all_values.push_back(EvntGrp_NoEvents_9);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AssignmentReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_9;
    FIX::InstrumentPartyID InstrumentPartyID_9("STRING_1005772677");
    noInstrumentParties_0_0.set(InstrumentPartyID_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyID_9.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_9('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyIDSource_9.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_9(1259325683);
    noInstrumentParties_0_0.set(InstrumentPartyRole_9);
    InstrumentParties_NoInstrumentParties_9.insert(InstrumentPartyRole_9.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_9);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19;
      FIX::InstrumentPartySubID InstrumentPartySubID_19("STRING_835110256");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_19);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19.insert(InstrumentPartySubID_19.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_19(2136901439);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_19);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19.insert(InstrumentPartySubIDType_19.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_9;
    FIX::SecurityAltID SecurityAltID_9("STRING_526208790");
    noSecurityAltID_0_0.set(SecurityAltID_9);
    SecAltIDGrp_NoSecurityAltID_9.insert(SecurityAltID_9.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_9("STRING_478204736");
    noSecurityAltID_0_0.set(SecurityAltIDSource_9);
    SecAltIDGrp_NoSecurityAltID_9.insert(SecurityAltIDSource_9.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_9);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_10;
    FIX::SecurityAltID SecurityAltID_10("STRING_1680886839");
    noSecurityAltID_0_1.set(SecurityAltID_10);
    SecAltIDGrp_NoSecurityAltID_10.insert(SecurityAltID_10.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_10("STRING_1495230132");
    noSecurityAltID_0_1.set(SecurityAltIDSource_10);
    SecAltIDGrp_NoSecurityAltID_10.insert(SecurityAltIDSource_10.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_10);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_10;
  FIX::SecurityXML SecurityXML_11("XMLDATA_1774616346");
  msg.set(SecurityXML_11);
  FIX::SecurityXMLLen SecurityXMLLen_5(1292959057);
  msg.set(SecurityXMLLen_5);
  FIX::SecurityXMLSchema SecurityXMLSchema_5("STRING_1184677029");
  msg.set(SecurityXMLSchema_5);
  SecurityXML_10.insert(SecurityXMLSchema_5.getString());
  all_values.push_back(SecurityXML_10);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_16;
    FIX::PartyID PartyID_16("STRING_957527779");
    noPartyIDs_0_0.set(PartyID_16);
    Parties_NoPartyIDs_16.insert(PartyID_16.getString());
    FIX::PartyIDSource PartyIDSource_16('7');
    noPartyIDs_0_0.set(PartyIDSource_16);
    Parties_NoPartyIDs_16.insert(PartyIDSource_16.getString());
    FIX::PartyRole PartyRole_16(25);
    noPartyIDs_0_0.set(PartyRole_16);
    Parties_NoPartyIDs_16.insert(PartyRole_16.getString());
    all_values.push_back(Parties_NoPartyIDs_16);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_36;
      FIX::PartySubID PartySubID_36("STRING_734799596");
      noPartySubIDs_0_1_0.set(PartySubID_36);
      PtysSubGrp_NoPartySubIDs_36.insert(PartySubID_36.getString());
      FIX::PartySubIDType PartySubIDType_36(31);
      noPartySubIDs_0_1_0.set(PartySubIDType_36);
      PtysSubGrp_NoPartySubIDs_36.insert(PartySubIDType_36.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_36);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_37;
      FIX::PartySubID PartySubID_37("STRING_2812961");
      noPartySubIDs_0_1_1.set(PartySubID_37);
      PtysSubGrp_NoPartySubIDs_37.insert(PartySubID_37.getString());
      FIX::PartySubIDType PartySubIDType_37(9);
      noPartySubIDs_0_1_1.set(PartySubIDType_37);
      PtysSubGrp_NoPartySubIDs_37.insert(PartySubIDType_37.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_37);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_38;
      FIX::PartySubID PartySubID_38("STRING_928218906");
      noPartySubIDs_0_1_2.set(PartySubID_38);
      PtysSubGrp_NoPartySubIDs_38.insert(PartySubID_38.getString());
      FIX::PartySubIDType PartySubIDType_38(20);
      noPartySubIDs_0_1_2.set(PartySubIDType_38);
      PtysSubGrp_NoPartySubIDs_38.insert(PartySubIDType_38.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_38);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_17;
    FIX::PartyID PartyID_17("STRING_1440614531");
    noPartyIDs_0_1.set(PartyID_17);
    Parties_NoPartyIDs_17.insert(PartyID_17.getString());
    FIX::PartyIDSource PartyIDSource_17('8');
    noPartyIDs_0_1.set(PartyIDSource_17);
    Parties_NoPartyIDs_17.insert(PartyIDSource_17.getString());
    FIX::PartyRole PartyRole_17(58);
    noPartyIDs_0_1.set(PartyRole_17);
    Parties_NoPartyIDs_17.insert(PartyRole_17.getString());
    all_values.push_back(Parties_NoPartyIDs_17);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_39;
      FIX::PartySubID PartySubID_39("STRING_1019118016");
      noPartySubIDs_1_1_0.set(PartySubID_39);
      PtysSubGrp_NoPartySubIDs_39.insert(PartySubID_39.getString());
      FIX::PartySubIDType PartySubIDType_39(16);
      noPartySubIDs_1_1_0.set(PartySubIDType_39);
      PtysSubGrp_NoPartySubIDs_39.insert(PartySubIDType_39.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_39);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_40;
      FIX::PartySubID PartySubID_40("STRING_73224753");
      noPartySubIDs_1_1_1.set(PartySubID_40);
      PtysSubGrp_NoPartySubIDs_40.insert(PartySubID_40.getString());
      FIX::PartySubIDType PartySubIDType_40(9);
      noPartySubIDs_1_1_1.set(PartySubIDType_40);
      PtysSubGrp_NoPartySubIDs_40.insert(PartySubIDType_40.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_40);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_41;
      FIX::PartySubID PartySubID_41("STRING_1863152174");
      noPartySubIDs_1_1_2.set(PartySubID_41);
      PtysSubGrp_NoPartySubIDs_41.insert(PartySubID_41.getString());
      FIX::PartySubIDType PartySubIDType_41(25);
      noPartySubIDs_1_1_2.set(PartySubIDType_41);
      PtysSubGrp_NoPartySubIDs_41.insert(PartySubIDType_41.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_41);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
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
    PosAmt_5.setString("18525699");
    noPosAmt_0_0.set(PosAmt_5);
    PositionAmountData_NoPosAmt_5.insert(PosAmt_5.getString());
    FIX::PosAmtType PosAmtType_5("STRING_IACPN");
    noPosAmt_0_0.set(PosAmtType_5);
    PositionAmountData_NoPosAmt_5.insert(PosAmtType_5.getString());
    FIX::PositionCurrency PositionCurrency_5("STRING_860204548");
    noPosAmt_0_0.set(PositionCurrency_5);
    PositionAmountData_NoPosAmt_5.insert(PositionCurrency_5.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_5);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_6;
    FIX::PosAmt PosAmt_6;
    PosAmt_6.setString("1832910");
    noPosAmt_0_1.set(PosAmt_6);
    PositionAmountData_NoPosAmt_6.insert(PosAmt_6.getString());
    FIX::PosAmtType PosAmtType_6("STRING_DLV");
    noPosAmt_0_1.set(PosAmtType_6);
    PositionAmountData_NoPosAmt_6.insert(PosAmtType_6.getString());
    FIX::PositionCurrency PositionCurrency_6("STRING_207951032");
    noPosAmt_0_1.set(PositionCurrency_6);
    PositionAmountData_NoPosAmt_6.insert(PositionCurrency_6.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_6);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AssignmentReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_1;
    FIX::LongQty LongQty_1;
    LongQty_1.setString("8706080");
    noPositions_0_0.set(LongQty_1);
    PositionQty_NoPositions_1.insert(LongQty_1.getString());
    FIX::PosQtyStatus PosQtyStatus_1(0);
    noPositions_0_0.set(PosQtyStatus_1);
    PositionQty_NoPositions_1.insert(PosQtyStatus_1.getString());
    FIX::PosType PosType_1("STRING_SOD");
    noPositions_0_0.set(PosType_1);
    PositionQty_NoPositions_1.insert(PosType_1.getString());
    FIX::QuantityDate QuantityDate_1("LOCALMKTDATE_1828135822");
    noPositions_0_0.set(QuantityDate_1);
    PositionQty_NoPositions_1.insert(QuantityDate_1.getString());
    FIX::ShortQty ShortQty_1;
    ShortQty_1.setString("11768819");
    noPositions_0_0.set(ShortQty_1);
    PositionQty_NoPositions_1.insert(ShortQty_1.getString());
    all_values.push_back(PositionQty_NoPositions_1);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_26;
      FIX::NestedPartyID NestedPartyID_26("STRING_105107989");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyID_26.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_26('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyIDSource_26.getString());
      FIX::NestedPartyRole NestedPartyRole_26(1123537820);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyRole_26.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_26);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_52;
        FIX::NestedPartySubID NestedPartySubID_52("STRING_98490367");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_52);
        NstdPtysSubGrp_NoNestedPartySubIDs_52.insert(NestedPartySubID_52.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_52(2051756726);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_52);
        NstdPtysSubGrp_NoNestedPartySubIDs_52.insert(NestedPartySubIDType_52.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_52);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_53;
        FIX::NestedPartySubID NestedPartySubID_53("STRING_810410351");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_53);
        NstdPtysSubGrp_NoNestedPartySubIDs_53.insert(NestedPartySubID_53.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_53(1539104898);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_53);
        NstdPtysSubGrp_NoNestedPartySubIDs_53.insert(NestedPartySubIDType_53.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_53);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_27;
      FIX::NestedPartyID NestedPartyID_27("STRING_1136820345");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyID_27.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_27('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyIDSource_27.getString());
      FIX::NestedPartyRole NestedPartyRole_27(606556974);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyRole_27.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_27);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_54;
        FIX::NestedPartySubID NestedPartySubID_54("STRING_1860022799");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_54);
        NstdPtysSubGrp_NoNestedPartySubIDs_54.insert(NestedPartySubID_54.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_54(679781728);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_54);
        NstdPtysSubGrp_NoNestedPartySubIDs_54.insert(NestedPartySubIDType_54.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_54);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_55;
        FIX::NestedPartySubID NestedPartySubID_55("STRING_1654823864");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_55);
        NstdPtysSubGrp_NoNestedPartySubIDs_55.insert(NestedPartySubID_55.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_55(1575691325);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_55);
        NstdPtysSubGrp_NoNestedPartySubIDs_55.insert(NestedPartySubIDType_55.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_55);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_56;
        FIX::NestedPartySubID NestedPartySubID_56("STRING_1325698375");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_56);
        NstdPtysSubGrp_NoNestedPartySubIDs_56.insert(NestedPartySubID_56.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_56(1988819622);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_56);
        NstdPtysSubGrp_NoNestedPartySubIDs_56.insert(NestedPartySubIDType_56.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_56);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_8;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_8("DATA_1369944169");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingIssuer_8.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_8(701540523);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingIssuerLen_8.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_8("DATA_1464068696");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingSecurityDesc_8.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_8(947593155);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingSecurityDescLen_8.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_8;
    UnderlyingAdjustedQuantity_8.setString("9094915");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_8);
    UnderlyingInstrument_8.insert(UnderlyingAdjustedQuantity_8.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_8;
    UnderlyingAllocationPercent_8.setString("24.480000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_8);
    UnderlyingInstrument_8.insert(UnderlyingAllocationPercent_8.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_8;
    UnderlyingAttachmentPoint_8.setString("11.970000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_8);
    UnderlyingInstrument_8.insert(UnderlyingAttachmentPoint_8.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_8("STRING_154635969");
    noUnderlyings_0_0.set(UnderlyingCFICode_8);
    UnderlyingInstrument_8.insert(UnderlyingCFICode_8.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_8("STRING_1830975851");
    noUnderlyings_0_0.set(UnderlyingCPProgram_8);
    UnderlyingInstrument_8.insert(UnderlyingCPProgram_8.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_8("STRING_1498853371");
    noUnderlyings_0_0.set(UnderlyingCPRegType_8);
    UnderlyingInstrument_8.insert(UnderlyingCPRegType_8.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_8;
    UnderlyingCapValue_8.setString("13315179");
    noUnderlyings_0_0.set(UnderlyingCapValue_8);
    UnderlyingInstrument_8.insert(UnderlyingCapValue_8.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_8;
    UnderlyingCashAmount_8.setString("10438179");
    noUnderlyings_0_0.set(UnderlyingCashAmount_8);
    UnderlyingInstrument_8.insert(UnderlyingCashAmount_8.getString());
    FIX::UnderlyingCashType UnderlyingCashType_8("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_8);
    UnderlyingInstrument_8.insert(UnderlyingCashType_8.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_8;
    UnderlyingContractMultiplier_8.setString("10957158");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_8);
    UnderlyingInstrument_8.insert(UnderlyingContractMultiplier_8.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_8(19872170);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_8);
    UnderlyingInstrument_8.insert(UnderlyingContractMultiplierUnit_8.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_8("COUNTRY_1711882312");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingCountryOfIssue_8.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_8("LOCALMKTDATE_1194206223");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_8);
    UnderlyingInstrument_8.insert(UnderlyingCouponPaymentDate_8.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_8;
    UnderlyingCouponRate_8.setString("88.960000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_8);
    UnderlyingInstrument_8.insert(UnderlyingCouponRate_8.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_8("STRING_374809015");
    noUnderlyings_0_0.set(UnderlyingCreditRating_8);
    UnderlyingInstrument_8.insert(UnderlyingCreditRating_8.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_8("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_8);
    UnderlyingInstrument_8.insert(UnderlyingCurrency_8.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_8;
    UnderlyingCurrentValue_8.setString("16310053");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_8);
    UnderlyingInstrument_8.insert(UnderlyingCurrentValue_8.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_8;
    UnderlyingDetachmentPoint_8.setString("44.480000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_8);
    UnderlyingInstrument_8.insert(UnderlyingDetachmentPoint_8.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_8;
    UnderlyingDirtyPrice_8.setString("10694203");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_8);
    UnderlyingInstrument_8.insert(UnderlyingDirtyPrice_8.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_8;
    UnderlyingEndPrice_8.setString("13435444");
    noUnderlyings_0_0.set(UnderlyingEndPrice_8);
    UnderlyingInstrument_8.insert(UnderlyingEndPrice_8.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_8;
    UnderlyingEndValue_8.setString("18721661");
    noUnderlyings_0_0.set(UnderlyingEndValue_8);
    UnderlyingInstrument_8.insert(UnderlyingEndValue_8.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_8(576760523);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_8);
    UnderlyingInstrument_8.insert(UnderlyingExerciseStyle_8.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_8;
    UnderlyingFXRate_8.setString("7717521");
    noUnderlyings_0_0.set(UnderlyingFXRate_8);
    UnderlyingInstrument_8.insert(UnderlyingFXRate_8.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_8('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_8);
    UnderlyingInstrument_8.insert(UnderlyingFXRateCalc_8.getString());
    FIX::UnderlyingFactor UnderlyingFactor_8;
    UnderlyingFactor_8.setString("4180964");
    noUnderlyings_0_0.set(UnderlyingFactor_8);
    UnderlyingInstrument_8.insert(UnderlyingFactor_8.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_8(2052529794);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_8);
    UnderlyingInstrument_8.insert(UnderlyingFlowScheduleType_8.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_8("STRING_272841425");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_8);
    UnderlyingInstrument_8.insert(UnderlyingInstrRegistry_8.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_8("LOCALMKTDATE_1119637020");
    noUnderlyings_0_0.set(UnderlyingIssueDate_8);
    UnderlyingInstrument_8.insert(UnderlyingIssueDate_8.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_8("STRING_1369114842");
    noUnderlyings_0_0.set(UnderlyingIssuer_8);
    UnderlyingInstrument_8.insert(UnderlyingIssuer_8.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_8("STRING_1220434580");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingLocaleOfIssue_8.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_8("LOCALMKTDATE_2029128576");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityDate_8.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_8("MONTHYEAR_496123642");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityMonthYear_8.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_8("TZTIMEONLY_891152130");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityTime_8.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_8;
    UnderlyingNotionalPercentageOutstanding_8.setString("8.970000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_8);
    UnderlyingInstrument_8.insert(UnderlyingNotionalPercentageOutstanding_8.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_8('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_8);
    UnderlyingInstrument_8.insert(UnderlyingOptAttribute_8.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_8;
    UnderlyingOriginalNotionalPercentageOutstanding_8.setString("18.530000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_8);
    UnderlyingInstrument_8.insert(UnderlyingOriginalNotionalPercentageOutstanding_8.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_8("STRING_1367798836");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_8);
    UnderlyingInstrument_8.insert(UnderlyingPriceUnitOfMeasure_8.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_8;
    UnderlyingPriceUnitOfMeasureQty_8.setString("12234338");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_8);
    UnderlyingInstrument_8.insert(UnderlyingPriceUnitOfMeasureQty_8.getString());
    FIX::UnderlyingProduct UnderlyingProduct_8(1846483214);
    noUnderlyings_0_0.set(UnderlyingProduct_8);
    UnderlyingInstrument_8.insert(UnderlyingProduct_8.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_8(316031044);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_8);
    UnderlyingInstrument_8.insert(UnderlyingPutOrCall_8.getString());
    FIX::UnderlyingPx UnderlyingPx_8;
    UnderlyingPx_8.setString("12433060");
    noUnderlyings_0_0.set(UnderlyingPx_8);
    UnderlyingInstrument_8.insert(UnderlyingPx_8.getString());
    FIX::UnderlyingQty UnderlyingQty_8;
    UnderlyingQty_8.setString("14108818");
    noUnderlyings_0_0.set(UnderlyingQty_8);
    UnderlyingInstrument_8.insert(UnderlyingQty_8.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_8("LOCALMKTDATE_1510237267");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_8);
    UnderlyingInstrument_8.insert(UnderlyingRedemptionDate_8.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_8("STRING_1167451261");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_8);
    UnderlyingInstrument_8.insert(UnderlyingRepoCollateralSecurityType_8.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_8;
    UnderlyingRepurchaseRate_8.setString("8.940000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_8);
    UnderlyingInstrument_8.insert(UnderlyingRepurchaseRate_8.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_8(2096064741);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_8);
    UnderlyingInstrument_8.insert(UnderlyingRepurchaseTerm_8.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_8("STRING_80933206");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_8);
    UnderlyingInstrument_8.insert(UnderlyingRestructuringType_8.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_8("STRING_1269212569");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityDesc_8.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_8("EXCHANGE_1140965542");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityExchange_8.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_8("STRING_1150353513");
    noUnderlyings_0_0.set(UnderlyingSecurityID_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityID_8.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_8("STRING_465273396");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityIDSource_8.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_8("STRING_865648070");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_8);
    UnderlyingInstrument_8.insert(UnderlyingSecuritySubType_8.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_8("STRING_1727114036");
    noUnderlyings_0_0.set(UnderlyingSecurityType_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityType_8.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_8("STRING_1237025547");
    noUnderlyings_0_0.set(UnderlyingSeniority_8);
    UnderlyingInstrument_8.insert(UnderlyingSeniority_8.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_8("STRING_1916028974");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_8);
    UnderlyingInstrument_8.insert(UnderlyingSettlMethod_8.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_8(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_8);
    UnderlyingInstrument_8.insert(UnderlyingSettlementType_8.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_8;
    UnderlyingStartValue_8.setString("11420716");
    noUnderlyings_0_0.set(UnderlyingStartValue_8);
    UnderlyingInstrument_8.insert(UnderlyingStartValue_8.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_8("STRING_41386752");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingStateOrProvinceOfIssue_8.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_8("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_8);
    UnderlyingInstrument_8.insert(UnderlyingStrikeCurrency_8.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_8;
    UnderlyingStrikePrice_8.setString("12618213");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_8);
    UnderlyingInstrument_8.insert(UnderlyingStrikePrice_8.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_8("STRING_999008834");
    noUnderlyings_0_0.set(UnderlyingSymbol_8);
    UnderlyingInstrument_8.insert(UnderlyingSymbol_8.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_8("STRING_859826529");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_8);
    UnderlyingInstrument_8.insert(UnderlyingSymbolSfx_8.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_8("STRING_5489814");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_8);
    UnderlyingInstrument_8.insert(UnderlyingTimeUnit_8.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_8("STRING_1035289732");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_8);
    UnderlyingInstrument_8.insert(UnderlyingUnitOfMeasure_8.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_8;
    UnderlyingUnitOfMeasureQty_8.setString("10394423");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_8);
    UnderlyingInstrument_8.insert(UnderlyingUnitOfMeasureQty_8.getString());
    all_values.push_back(UnderlyingInstrument_8);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_19;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_19("STRING_255604920");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_19);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_19.insert(UnderlyingSecurityAltID_19.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_19("STRING_115392569");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_19);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_19.insert(UnderlyingSecurityAltIDSource_19.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_10;
      FIX::UnderlyingStipType UnderlyingStipType_10("STRING_571635964");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_10);
      UnderlyingStipulations_NoUnderlyingStips_10.insert(UnderlyingStipType_10.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_10("STRING_1358698581");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_10);
      UnderlyingStipulations_NoUnderlyingStips_10.insert(UnderlyingStipValue_10.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_10);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_11;
      FIX::UnderlyingStipType UnderlyingStipType_11("STRING_1357893113");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_11);
      UnderlyingStipulations_NoUnderlyingStips_11.insert(UnderlyingStipType_11.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_11("STRING_2081873231");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_11);
      UnderlyingStipulations_NoUnderlyingStips_11.insert(UnderlyingStipValue_11.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_11);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_12;
      FIX::UnderlyingStipType UnderlyingStipType_12("STRING_378666194");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_12);
      UnderlyingStipulations_NoUnderlyingStips_12.insert(UnderlyingStipType_12.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_12("STRING_996100359");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_12);
      UnderlyingStipulations_NoUnderlyingStips_12.insert(UnderlyingStipValue_12.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_12);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_15;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_15("STRING_459599401");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyID_15.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_15('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyIDSource_15.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_15(1023936219);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyRole_15.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_26("STRING_583102676");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubID_26.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_26(1889584289);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubIDType_26.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_27("STRING_1189583303");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubID_27.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_27(1820128224);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubIDType_27.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_16;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_16("STRING_1658129616");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyID_16.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_16('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyIDSource_16.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_16(814716269);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyRole_16.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_28("STRING_157190447");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubID_28.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_28(1178419157);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_28);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28.insert(UnderlyingInstrumentPartySubIDType_28.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_9;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_9("DATA_813854052");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingIssuer_9.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_9(1156199282);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingIssuerLen_9.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_9("DATA_2038245686");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingSecurityDesc_9.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_9(819343867);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_9);
    UnderlyingInstrument_9.insert(EncodedUnderlyingSecurityDescLen_9.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_9;
    UnderlyingAdjustedQuantity_9.setString("440053");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_9);
    UnderlyingInstrument_9.insert(UnderlyingAdjustedQuantity_9.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_9;
    UnderlyingAllocationPercent_9.setString("44.130000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_9);
    UnderlyingInstrument_9.insert(UnderlyingAllocationPercent_9.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_9;
    UnderlyingAttachmentPoint_9.setString("55.350000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_9);
    UnderlyingInstrument_9.insert(UnderlyingAttachmentPoint_9.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_9("STRING_299610286");
    noUnderlyings_0_1.set(UnderlyingCFICode_9);
    UnderlyingInstrument_9.insert(UnderlyingCFICode_9.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_9("STRING_1045596982");
    noUnderlyings_0_1.set(UnderlyingCPProgram_9);
    UnderlyingInstrument_9.insert(UnderlyingCPProgram_9.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_9("STRING_1014366769");
    noUnderlyings_0_1.set(UnderlyingCPRegType_9);
    UnderlyingInstrument_9.insert(UnderlyingCPRegType_9.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_9;
    UnderlyingCapValue_9.setString("8712462");
    noUnderlyings_0_1.set(UnderlyingCapValue_9);
    UnderlyingInstrument_9.insert(UnderlyingCapValue_9.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_9;
    UnderlyingCashAmount_9.setString("2568119");
    noUnderlyings_0_1.set(UnderlyingCashAmount_9);
    UnderlyingInstrument_9.insert(UnderlyingCashAmount_9.getString());
    FIX::UnderlyingCashType UnderlyingCashType_9("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_9);
    UnderlyingInstrument_9.insert(UnderlyingCashType_9.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_9;
    UnderlyingContractMultiplier_9.setString("8056358");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_9);
    UnderlyingInstrument_9.insert(UnderlyingContractMultiplier_9.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_9(635478110);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_9);
    UnderlyingInstrument_9.insert(UnderlyingContractMultiplierUnit_9.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_9("COUNTRY_1220876593");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingCountryOfIssue_9.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_9("LOCALMKTDATE_688606510");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_9);
    UnderlyingInstrument_9.insert(UnderlyingCouponPaymentDate_9.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_9;
    UnderlyingCouponRate_9.setString("75.110000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_9);
    UnderlyingInstrument_9.insert(UnderlyingCouponRate_9.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_9("STRING_1338705874");
    noUnderlyings_0_1.set(UnderlyingCreditRating_9);
    UnderlyingInstrument_9.insert(UnderlyingCreditRating_9.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_9("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_9);
    UnderlyingInstrument_9.insert(UnderlyingCurrency_9.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_9;
    UnderlyingCurrentValue_9.setString("19218085");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_9);
    UnderlyingInstrument_9.insert(UnderlyingCurrentValue_9.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_9;
    UnderlyingDetachmentPoint_9.setString("33.710000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_9);
    UnderlyingInstrument_9.insert(UnderlyingDetachmentPoint_9.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_9;
    UnderlyingDirtyPrice_9.setString("17471300");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_9);
    UnderlyingInstrument_9.insert(UnderlyingDirtyPrice_9.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_9;
    UnderlyingEndPrice_9.setString("15944531");
    noUnderlyings_0_1.set(UnderlyingEndPrice_9);
    UnderlyingInstrument_9.insert(UnderlyingEndPrice_9.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_9;
    UnderlyingEndValue_9.setString("9652893");
    noUnderlyings_0_1.set(UnderlyingEndValue_9);
    UnderlyingInstrument_9.insert(UnderlyingEndValue_9.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_9(786956621);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_9);
    UnderlyingInstrument_9.insert(UnderlyingExerciseStyle_9.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_9;
    UnderlyingFXRate_9.setString("2616857");
    noUnderlyings_0_1.set(UnderlyingFXRate_9);
    UnderlyingInstrument_9.insert(UnderlyingFXRate_9.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_9('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_9);
    UnderlyingInstrument_9.insert(UnderlyingFXRateCalc_9.getString());
    FIX::UnderlyingFactor UnderlyingFactor_9;
    UnderlyingFactor_9.setString("9441470");
    noUnderlyings_0_1.set(UnderlyingFactor_9);
    UnderlyingInstrument_9.insert(UnderlyingFactor_9.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_9(1440104905);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_9);
    UnderlyingInstrument_9.insert(UnderlyingFlowScheduleType_9.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_9("STRING_1331176111");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_9);
    UnderlyingInstrument_9.insert(UnderlyingInstrRegistry_9.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_9("LOCALMKTDATE_2100346351");
    noUnderlyings_0_1.set(UnderlyingIssueDate_9);
    UnderlyingInstrument_9.insert(UnderlyingIssueDate_9.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_9("STRING_1330866943");
    noUnderlyings_0_1.set(UnderlyingIssuer_9);
    UnderlyingInstrument_9.insert(UnderlyingIssuer_9.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_9("STRING_3036330");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingLocaleOfIssue_9.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_9("LOCALMKTDATE_2144351717");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityDate_9.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_9("MONTHYEAR_113587708");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityMonthYear_9.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_9("TZTIMEONLY_1070391865");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_9);
    UnderlyingInstrument_9.insert(UnderlyingMaturityTime_9.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_9;
    UnderlyingNotionalPercentageOutstanding_9.setString("83.550000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_9);
    UnderlyingInstrument_9.insert(UnderlyingNotionalPercentageOutstanding_9.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_9('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_9);
    UnderlyingInstrument_9.insert(UnderlyingOptAttribute_9.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_9;
    UnderlyingOriginalNotionalPercentageOutstanding_9.setString("86.350000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_9);
    UnderlyingInstrument_9.insert(UnderlyingOriginalNotionalPercentageOutstanding_9.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_9("STRING_1167724605");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_9);
    UnderlyingInstrument_9.insert(UnderlyingPriceUnitOfMeasure_9.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_9;
    UnderlyingPriceUnitOfMeasureQty_9.setString("14159966");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_9);
    UnderlyingInstrument_9.insert(UnderlyingPriceUnitOfMeasureQty_9.getString());
    FIX::UnderlyingProduct UnderlyingProduct_9(162051221);
    noUnderlyings_0_1.set(UnderlyingProduct_9);
    UnderlyingInstrument_9.insert(UnderlyingProduct_9.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_9(1973360438);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_9);
    UnderlyingInstrument_9.insert(UnderlyingPutOrCall_9.getString());
    FIX::UnderlyingPx UnderlyingPx_9;
    UnderlyingPx_9.setString("20514747");
    noUnderlyings_0_1.set(UnderlyingPx_9);
    UnderlyingInstrument_9.insert(UnderlyingPx_9.getString());
    FIX::UnderlyingQty UnderlyingQty_9;
    UnderlyingQty_9.setString("13829278");
    noUnderlyings_0_1.set(UnderlyingQty_9);
    UnderlyingInstrument_9.insert(UnderlyingQty_9.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_9("LOCALMKTDATE_514483301");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_9);
    UnderlyingInstrument_9.insert(UnderlyingRedemptionDate_9.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_9("STRING_999068579");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_9);
    UnderlyingInstrument_9.insert(UnderlyingRepoCollateralSecurityType_9.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_9;
    UnderlyingRepurchaseRate_9.setString("0.410000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_9);
    UnderlyingInstrument_9.insert(UnderlyingRepurchaseRate_9.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_9(79542382);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_9);
    UnderlyingInstrument_9.insert(UnderlyingRepurchaseTerm_9.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_9("STRING_1556615356");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_9);
    UnderlyingInstrument_9.insert(UnderlyingRestructuringType_9.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_9("STRING_348474943");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityDesc_9.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_9("EXCHANGE_1534185753");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityExchange_9.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_9("STRING_1156261789");
    noUnderlyings_0_1.set(UnderlyingSecurityID_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityID_9.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_9("STRING_1942928070");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityIDSource_9.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_9("STRING_351991444");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_9);
    UnderlyingInstrument_9.insert(UnderlyingSecuritySubType_9.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_9("STRING_1943218410");
    noUnderlyings_0_1.set(UnderlyingSecurityType_9);
    UnderlyingInstrument_9.insert(UnderlyingSecurityType_9.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_9("STRING_57130170");
    noUnderlyings_0_1.set(UnderlyingSeniority_9);
    UnderlyingInstrument_9.insert(UnderlyingSeniority_9.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_9("STRING_869313503");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_9);
    UnderlyingInstrument_9.insert(UnderlyingSettlMethod_9.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_9(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_9);
    UnderlyingInstrument_9.insert(UnderlyingSettlementType_9.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_9;
    UnderlyingStartValue_9.setString("14972350");
    noUnderlyings_0_1.set(UnderlyingStartValue_9);
    UnderlyingInstrument_9.insert(UnderlyingStartValue_9.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_9("STRING_53005967");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_9);
    UnderlyingInstrument_9.insert(UnderlyingStateOrProvinceOfIssue_9.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_9("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_9);
    UnderlyingInstrument_9.insert(UnderlyingStrikeCurrency_9.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_9;
    UnderlyingStrikePrice_9.setString("560422");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_9);
    UnderlyingInstrument_9.insert(UnderlyingStrikePrice_9.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_9("STRING_689612603");
    noUnderlyings_0_1.set(UnderlyingSymbol_9);
    UnderlyingInstrument_9.insert(UnderlyingSymbol_9.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_9("STRING_794206079");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_9);
    UnderlyingInstrument_9.insert(UnderlyingSymbolSfx_9.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_9("STRING_1126434163");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_9);
    UnderlyingInstrument_9.insert(UnderlyingTimeUnit_9.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_9("STRING_986090958");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_9);
    UnderlyingInstrument_9.insert(UnderlyingUnitOfMeasure_9.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_9;
    UnderlyingUnitOfMeasureQty_9.setString("19533907");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_9);
    UnderlyingInstrument_9.insert(UnderlyingUnitOfMeasureQty_9.getString());
    all_values.push_back(UnderlyingInstrument_9);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_20;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_20("STRING_6331915");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_20);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_20.insert(UnderlyingSecurityAltID_20.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_20("STRING_1221903727");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_20);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_20.insert(UnderlyingSecurityAltIDSource_20.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_21;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_21("STRING_1225760371");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_21);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_21.insert(UnderlyingSecurityAltID_21.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_21("STRING_1979692354");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_21);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_21.insert(UnderlyingSecurityAltIDSource_21.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_22;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_22("STRING_1125894795");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_22);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_22.insert(UnderlyingSecurityAltID_22.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_22("STRING_461204538");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_22);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_22.insert(UnderlyingSecurityAltIDSource_22.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_22);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_13;
      FIX::UnderlyingStipType UnderlyingStipType_13("STRING_2124963374");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_13);
      UnderlyingStipulations_NoUnderlyingStips_13.insert(UnderlyingStipType_13.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_13("STRING_1035354579");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_13);
      UnderlyingStipulations_NoUnderlyingStips_13.insert(UnderlyingStipValue_13.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_13);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_14;
      FIX::UnderlyingStipType UnderlyingStipType_14("STRING_426234389");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_14);
      UnderlyingStipulations_NoUnderlyingStips_14.insert(UnderlyingStipType_14.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_14("STRING_1534095083");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_14);
      UnderlyingStipulations_NoUnderlyingStips_14.insert(UnderlyingStipValue_14.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_14);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_17;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_17("STRING_1960420143");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyID_17.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_17('5');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyIDSource_17.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_17(1179273945);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_17);
      UndlyInstrumentParties_NoUndlyInstrumentParties_17.insert(UnderlyingInstrumentPartyRole_17.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_29("STRING_338607986");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_29);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29.insert(UnderlyingInstrumentPartySubID_29.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_29(1236404115);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_29);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29.insert(UnderlyingInstrumentPartySubIDType_29.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_30("STRING_1034241443");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_30);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30.insert(UnderlyingInstrumentPartySubID_30.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_30(1078489818);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_30);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30.insert(UnderlyingInstrumentPartySubIDType_30.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_31("STRING_586155542");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_31);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31.insert(UnderlyingInstrumentPartySubID_31.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_31(1087247410);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_31);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31.insert(UnderlyingInstrumentPartySubIDType_31.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_18;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_18("STRING_1771234352");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyID_18.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_18('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyIDSource_18.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_18(1143289707);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_18);
      UndlyInstrumentParties_NoUndlyInstrumentParties_18.insert(UnderlyingInstrumentPartyRole_18.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_32("STRING_2060979991");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_32);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32.insert(UnderlyingInstrumentPartySubID_32.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_32(122240222);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_32);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32.insert(UnderlyingInstrumentPartySubIDType_32.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_19;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_19("STRING_1299454266");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyID_19.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_19('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyIDSource_19.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_19(1185949372);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_19);
      UndlyInstrumentParties_NoUndlyInstrumentParties_19.insert(UnderlyingInstrumentPartyRole_19.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_19);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_33("STRING_941307192");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_33);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33.insert(UnderlyingInstrumentPartySubID_33.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_33(264226096);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_33);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33.insert(UnderlyingInstrumentPartySubIDType_33.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_34("STRING_1137994888");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_34);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34.insert(UnderlyingInstrumentPartySubID_34.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_34(2067201988);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_34);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34.insert(UnderlyingInstrumentPartySubIDType_34.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_35("STRING_725430634");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_35);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35.insert(UnderlyingInstrumentPartySubID_35.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_35(1484686895);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_35);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35.insert(UnderlyingInstrumentPartySubIDType_35.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_35);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AssignmentReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_10;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_10("DATA_2044681714");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingIssuer_10.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_10(1760785214);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingIssuerLen_10.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_10("DATA_1910921284");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingSecurityDesc_10.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_10(1431293149);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_10);
    UnderlyingInstrument_10.insert(EncodedUnderlyingSecurityDescLen_10.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_10;
    UnderlyingAdjustedQuantity_10.setString("9971310");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_10);
    UnderlyingInstrument_10.insert(UnderlyingAdjustedQuantity_10.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_10;
    UnderlyingAllocationPercent_10.setString("77.790000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_10);
    UnderlyingInstrument_10.insert(UnderlyingAllocationPercent_10.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_10;
    UnderlyingAttachmentPoint_10.setString("63.730000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_10);
    UnderlyingInstrument_10.insert(UnderlyingAttachmentPoint_10.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_10("STRING_28921386");
    noUnderlyings_0_2.set(UnderlyingCFICode_10);
    UnderlyingInstrument_10.insert(UnderlyingCFICode_10.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_10("STRING_1888785719");
    noUnderlyings_0_2.set(UnderlyingCPProgram_10);
    UnderlyingInstrument_10.insert(UnderlyingCPProgram_10.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_10("STRING_165290712");
    noUnderlyings_0_2.set(UnderlyingCPRegType_10);
    UnderlyingInstrument_10.insert(UnderlyingCPRegType_10.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_10;
    UnderlyingCapValue_10.setString("12653255");
    noUnderlyings_0_2.set(UnderlyingCapValue_10);
    UnderlyingInstrument_10.insert(UnderlyingCapValue_10.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_10;
    UnderlyingCashAmount_10.setString("7755435");
    noUnderlyings_0_2.set(UnderlyingCashAmount_10);
    UnderlyingInstrument_10.insert(UnderlyingCashAmount_10.getString());
    FIX::UnderlyingCashType UnderlyingCashType_10("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_10);
    UnderlyingInstrument_10.insert(UnderlyingCashType_10.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_10;
    UnderlyingContractMultiplier_10.setString("18514810");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_10);
    UnderlyingInstrument_10.insert(UnderlyingContractMultiplier_10.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_10(1862790924);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_10);
    UnderlyingInstrument_10.insert(UnderlyingContractMultiplierUnit_10.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_10("COUNTRY_867531234");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingCountryOfIssue_10.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_10("LOCALMKTDATE_970771307");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_10);
    UnderlyingInstrument_10.insert(UnderlyingCouponPaymentDate_10.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_10;
    UnderlyingCouponRate_10.setString("69.830000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_10);
    UnderlyingInstrument_10.insert(UnderlyingCouponRate_10.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_10("STRING_1180894542");
    noUnderlyings_0_2.set(UnderlyingCreditRating_10);
    UnderlyingInstrument_10.insert(UnderlyingCreditRating_10.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_10("JPY");
    noUnderlyings_0_2.set(UnderlyingCurrency_10);
    UnderlyingInstrument_10.insert(UnderlyingCurrency_10.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_10;
    UnderlyingCurrentValue_10.setString("3328651");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_10);
    UnderlyingInstrument_10.insert(UnderlyingCurrentValue_10.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_10;
    UnderlyingDetachmentPoint_10.setString("11.160000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_10);
    UnderlyingInstrument_10.insert(UnderlyingDetachmentPoint_10.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_10;
    UnderlyingDirtyPrice_10.setString("193029");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_10);
    UnderlyingInstrument_10.insert(UnderlyingDirtyPrice_10.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_10;
    UnderlyingEndPrice_10.setString("16386513");
    noUnderlyings_0_2.set(UnderlyingEndPrice_10);
    UnderlyingInstrument_10.insert(UnderlyingEndPrice_10.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_10;
    UnderlyingEndValue_10.setString("15449783");
    noUnderlyings_0_2.set(UnderlyingEndValue_10);
    UnderlyingInstrument_10.insert(UnderlyingEndValue_10.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_10(283529026);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_10);
    UnderlyingInstrument_10.insert(UnderlyingExerciseStyle_10.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_10;
    UnderlyingFXRate_10.setString("6291625");
    noUnderlyings_0_2.set(UnderlyingFXRate_10);
    UnderlyingInstrument_10.insert(UnderlyingFXRate_10.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_10('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_10);
    UnderlyingInstrument_10.insert(UnderlyingFXRateCalc_10.getString());
    FIX::UnderlyingFactor UnderlyingFactor_10;
    UnderlyingFactor_10.setString("10089596");
    noUnderlyings_0_2.set(UnderlyingFactor_10);
    UnderlyingInstrument_10.insert(UnderlyingFactor_10.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_10(2113849478);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_10);
    UnderlyingInstrument_10.insert(UnderlyingFlowScheduleType_10.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_10("STRING_1361894715");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_10);
    UnderlyingInstrument_10.insert(UnderlyingInstrRegistry_10.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_10("LOCALMKTDATE_622261227");
    noUnderlyings_0_2.set(UnderlyingIssueDate_10);
    UnderlyingInstrument_10.insert(UnderlyingIssueDate_10.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_10("STRING_1877287114");
    noUnderlyings_0_2.set(UnderlyingIssuer_10);
    UnderlyingInstrument_10.insert(UnderlyingIssuer_10.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_10("STRING_645704216");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingLocaleOfIssue_10.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_10("LOCALMKTDATE_1619392316");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityDate_10.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_10("MONTHYEAR_1453661246");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityMonthYear_10.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_10("TZTIMEONLY_472386942");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_10);
    UnderlyingInstrument_10.insert(UnderlyingMaturityTime_10.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_10;
    UnderlyingNotionalPercentageOutstanding_10.setString("37.020000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_10);
    UnderlyingInstrument_10.insert(UnderlyingNotionalPercentageOutstanding_10.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_10('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_10);
    UnderlyingInstrument_10.insert(UnderlyingOptAttribute_10.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_10;
    UnderlyingOriginalNotionalPercentageOutstanding_10.setString("76.540000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_10);
    UnderlyingInstrument_10.insert(UnderlyingOriginalNotionalPercentageOutstanding_10.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_10("STRING_766155555");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_10);
    UnderlyingInstrument_10.insert(UnderlyingPriceUnitOfMeasure_10.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_10;
    UnderlyingPriceUnitOfMeasureQty_10.setString("19705068");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_10);
    UnderlyingInstrument_10.insert(UnderlyingPriceUnitOfMeasureQty_10.getString());
    FIX::UnderlyingProduct UnderlyingProduct_10(1881458184);
    noUnderlyings_0_2.set(UnderlyingProduct_10);
    UnderlyingInstrument_10.insert(UnderlyingProduct_10.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_10(470152950);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_10);
    UnderlyingInstrument_10.insert(UnderlyingPutOrCall_10.getString());
    FIX::UnderlyingPx UnderlyingPx_10;
    UnderlyingPx_10.setString("16858141");
    noUnderlyings_0_2.set(UnderlyingPx_10);
    UnderlyingInstrument_10.insert(UnderlyingPx_10.getString());
    FIX::UnderlyingQty UnderlyingQty_10;
    UnderlyingQty_10.setString("6015057");
    noUnderlyings_0_2.set(UnderlyingQty_10);
    UnderlyingInstrument_10.insert(UnderlyingQty_10.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_10("LOCALMKTDATE_1440924257");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_10);
    UnderlyingInstrument_10.insert(UnderlyingRedemptionDate_10.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_10("STRING_396927442");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_10);
    UnderlyingInstrument_10.insert(UnderlyingRepoCollateralSecurityType_10.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_10;
    UnderlyingRepurchaseRate_10.setString("3.130000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_10);
    UnderlyingInstrument_10.insert(UnderlyingRepurchaseRate_10.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_10(177708260);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_10);
    UnderlyingInstrument_10.insert(UnderlyingRepurchaseTerm_10.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_10("STRING_1377764648");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_10);
    UnderlyingInstrument_10.insert(UnderlyingRestructuringType_10.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_10("STRING_2115265474");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityDesc_10.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_10("EXCHANGE_781379376");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityExchange_10.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_10("STRING_1397067579");
    noUnderlyings_0_2.set(UnderlyingSecurityID_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityID_10.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_10("STRING_1606433169");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityIDSource_10.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_10("STRING_178874037");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_10);
    UnderlyingInstrument_10.insert(UnderlyingSecuritySubType_10.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_10("STRING_1680596605");
    noUnderlyings_0_2.set(UnderlyingSecurityType_10);
    UnderlyingInstrument_10.insert(UnderlyingSecurityType_10.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_10("STRING_88112104");
    noUnderlyings_0_2.set(UnderlyingSeniority_10);
    UnderlyingInstrument_10.insert(UnderlyingSeniority_10.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_10("STRING_1643570685");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_10);
    UnderlyingInstrument_10.insert(UnderlyingSettlMethod_10.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_10(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_10);
    UnderlyingInstrument_10.insert(UnderlyingSettlementType_10.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_10;
    UnderlyingStartValue_10.setString("544779");
    noUnderlyings_0_2.set(UnderlyingStartValue_10);
    UnderlyingInstrument_10.insert(UnderlyingStartValue_10.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_10("STRING_857981752");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_10);
    UnderlyingInstrument_10.insert(UnderlyingStateOrProvinceOfIssue_10.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_10("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_10);
    UnderlyingInstrument_10.insert(UnderlyingStrikeCurrency_10.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_10;
    UnderlyingStrikePrice_10.setString("15036859");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_10);
    UnderlyingInstrument_10.insert(UnderlyingStrikePrice_10.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_10("STRING_636242513");
    noUnderlyings_0_2.set(UnderlyingSymbol_10);
    UnderlyingInstrument_10.insert(UnderlyingSymbol_10.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_10("STRING_1237942646");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_10);
    UnderlyingInstrument_10.insert(UnderlyingSymbolSfx_10.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_10("STRING_1976072911");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_10);
    UnderlyingInstrument_10.insert(UnderlyingTimeUnit_10.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_10("STRING_137072567");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_10);
    UnderlyingInstrument_10.insert(UnderlyingUnitOfMeasure_10.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_10;
    UnderlyingUnitOfMeasureQty_10.setString("2854223");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_10);
    UnderlyingInstrument_10.insert(UnderlyingUnitOfMeasureQty_10.getString());
    all_values.push_back(UnderlyingInstrument_10);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_23;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_23("STRING_903228122");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_23);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_23.insert(UnderlyingSecurityAltID_23.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_23("STRING_108445498");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_23);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_23.insert(UnderlyingSecurityAltIDSource_23.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_23);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_24;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_24("STRING_200241453");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_24);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltID_24.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_24("STRING_1373381072");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_24);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltIDSource_24.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_25;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_25("STRING_1794259605");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_25);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_25.insert(UnderlyingSecurityAltID_25.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_25("STRING_801747223");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_25);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_25.insert(UnderlyingSecurityAltIDSource_25.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_15;
      FIX::UnderlyingStipType UnderlyingStipType_15("STRING_43703400");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_15);
      UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipType_15.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_15("STRING_436663888");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_15);
      UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipValue_15.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_15);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_20;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_20("STRING_1421468048");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyID_20.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_20('4');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyIDSource_20.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_20(1625909319);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_20);
      UndlyInstrumentParties_NoUndlyInstrumentParties_20.insert(UnderlyingInstrumentPartyRole_20.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_20);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_36("STRING_2010878883");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_36);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36.insert(UnderlyingInstrumentPartySubID_36.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_36(1804783356);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_36);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36.insert(UnderlyingInstrumentPartySubIDType_36.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_36);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_21;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_21("STRING_204164937");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyID_21.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_21('2');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyIDSource_21.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_21(1300870393);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyRole_21.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_21);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_37("STRING_5985273");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_37);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37.insert(UnderlyingInstrumentPartySubID_37.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_37(11368498);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_37);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37.insert(UnderlyingInstrumentPartySubIDType_37.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_37);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_38("STRING_1910571401");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_38);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38.insert(UnderlyingInstrumentPartySubID_38.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_38(1937750322);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_38);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38.insert(UnderlyingInstrumentPartySubIDType_38.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_38);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_39("STRING_1515054467");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_39);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39.insert(UnderlyingInstrumentPartySubID_39.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_39(399330266);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_39);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39.insert(UnderlyingInstrumentPartySubIDType_39.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_39);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_22;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_22("STRING_1028209320");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyID_22.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_22('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyIDSource_22.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_22(536402834);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyRole_22.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_22);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AssignmentReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_40("STRING_1809910647");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_40);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40.insert(UnderlyingInstrumentPartySubID_40.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_40(1439630956);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_40);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40.insert(UnderlyingInstrumentPartySubIDType_40.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_40);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
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
