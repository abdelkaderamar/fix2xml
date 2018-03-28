#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/DontKnowTrade.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DontKnowTrade, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DontKnowTrade msg;

  list<multiset<string>> all_values;
  multiset<string> DontKnowTrade_0;
  FIX::DKReason DKReason_0('F');
  msg.set(DKReason_0);
  DontKnowTrade_0.insert(DKReason_0.getString());
  FIX::EncodedText EncodedText_32("DATA_1739855986");
  msg.set(EncodedText_32);
  DontKnowTrade_0.insert(EncodedText_32.getString());
  FIX::EncodedTextLen EncodedTextLen_32(1006325024);
  msg.set(EncodedTextLen_32);
  DontKnowTrade_0.insert(EncodedTextLen_32.getString());
  FIX::ExecID ExecID_15("STRING_1252792932");
  msg.set(ExecID_15);
  DontKnowTrade_0.insert(ExecID_15.getString());
  FIX::LastPx LastPx_6;
  LastPx_6.setString("1907204");
  msg.set(LastPx_6);
  DontKnowTrade_0.insert(LastPx_6.getString());
  FIX::LastQty LastQty_6;
  LastQty_6.setString("19273998");
  msg.set(LastQty_6);
  DontKnowTrade_0.insert(LastQty_6.getString());
  FIX::OrderID OrderID_19("STRING_101580559");
  msg.set(OrderID_19);
  DontKnowTrade_0.insert(OrderID_19.getString());
  FIX::SecondaryOrderID SecondaryOrderID_17("STRING_427085013");
  msg.set(SecondaryOrderID_17);
  DontKnowTrade_0.insert(SecondaryOrderID_17.getString());
  FIX::Side Side_14('G');
  msg.set(Side_14);
  DontKnowTrade_0.insert(Side_14.getString());
  FIX::Text Text_32("STRING_1787992399");
  msg.set(Text_32);
  DontKnowTrade_0.insert(Text_32.getString());
  all_values.push_back(DontKnowTrade_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::DontKnowTrade::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_39;
    FIX::EncodedLegIssuer EncodedLegIssuer_39("DATA_205113290");
    noLegs_0_0.set(EncodedLegIssuer_39);
    InstrumentLeg_39.insert(EncodedLegIssuer_39.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_39(1264813253);
    noLegs_0_0.set(EncodedLegIssuerLen_39);
    InstrumentLeg_39.insert(EncodedLegIssuerLen_39.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_39("DATA_217520643");
    noLegs_0_0.set(EncodedLegSecurityDesc_39);
    InstrumentLeg_39.insert(EncodedLegSecurityDesc_39.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_39(1041483156);
    noLegs_0_0.set(EncodedLegSecurityDescLen_39);
    InstrumentLeg_39.insert(EncodedLegSecurityDescLen_39.getString());
    FIX::LegCFICode LegCFICode_39("STRING_1773236850");
    noLegs_0_0.set(LegCFICode_39);
    InstrumentLeg_39.insert(LegCFICode_39.getString());
    FIX::LegContractMultiplier LegContractMultiplier_39;
    LegContractMultiplier_39.setString("907263");
    noLegs_0_0.set(LegContractMultiplier_39);
    InstrumentLeg_39.insert(LegContractMultiplier_39.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_39(1239238223);
    noLegs_0_0.set(LegContractMultiplierUnit_39);
    InstrumentLeg_39.insert(LegContractMultiplierUnit_39.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_39("MONTHYEAR_1090189921");
    noLegs_0_0.set(LegContractSettlMonth_39);
    InstrumentLeg_39.insert(LegContractSettlMonth_39.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_39("COUNTRY_479795137");
    noLegs_0_0.set(LegCountryOfIssue_39);
    InstrumentLeg_39.insert(LegCountryOfIssue_39.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_39("LOCALMKTDATE_1749669669");
    noLegs_0_0.set(LegCouponPaymentDate_39);
    InstrumentLeg_39.insert(LegCouponPaymentDate_39.getString());
    FIX::LegCouponRate LegCouponRate_39;
    LegCouponRate_39.setString("6.820000");
    noLegs_0_0.set(LegCouponRate_39);
    InstrumentLeg_39.insert(LegCouponRate_39.getString());
    FIX::LegCreditRating LegCreditRating_39("STRING_1562322401");
    noLegs_0_0.set(LegCreditRating_39);
    InstrumentLeg_39.insert(LegCreditRating_39.getString());
    FIX::LegCurrency LegCurrency_39("CHF");
    noLegs_0_0.set(LegCurrency_39);
    InstrumentLeg_39.insert(LegCurrency_39.getString());
    FIX::LegDatedDate LegDatedDate_39("LOCALMKTDATE_497023286");
    noLegs_0_0.set(LegDatedDate_39);
    InstrumentLeg_39.insert(LegDatedDate_39.getString());
    FIX::LegExerciseStyle LegExerciseStyle_39(1050463897);
    noLegs_0_0.set(LegExerciseStyle_39);
    InstrumentLeg_39.insert(LegExerciseStyle_39.getString());
    FIX::LegFactor LegFactor_39;
    LegFactor_39.setString("4280931");
    noLegs_0_0.set(LegFactor_39);
    InstrumentLeg_39.insert(LegFactor_39.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_39(507490321);
    noLegs_0_0.set(LegFlowScheduleType_39);
    InstrumentLeg_39.insert(LegFlowScheduleType_39.getString());
    FIX::LegInstrRegistry LegInstrRegistry_39("STRING_1394160329");
    noLegs_0_0.set(LegInstrRegistry_39);
    InstrumentLeg_39.insert(LegInstrRegistry_39.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_39("LOCALMKTDATE_707322074");
    noLegs_0_0.set(LegInterestAccrualDate_39);
    InstrumentLeg_39.insert(LegInterestAccrualDate_39.getString());
    FIX::LegIssueDate LegIssueDate_39("LOCALMKTDATE_1037437478");
    noLegs_0_0.set(LegIssueDate_39);
    InstrumentLeg_39.insert(LegIssueDate_39.getString());
    FIX::LegIssuer LegIssuer_39("STRING_986532668");
    noLegs_0_0.set(LegIssuer_39);
    InstrumentLeg_39.insert(LegIssuer_39.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_39("STRING_1713647099");
    noLegs_0_0.set(LegLocaleOfIssue_39);
    InstrumentLeg_39.insert(LegLocaleOfIssue_39.getString());
    FIX::LegMaturityDate LegMaturityDate_39("LOCALMKTDATE_142746762");
    noLegs_0_0.set(LegMaturityDate_39);
    InstrumentLeg_39.insert(LegMaturityDate_39.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_39("MONTHYEAR_1177253095");
    noLegs_0_0.set(LegMaturityMonthYear_39);
    InstrumentLeg_39.insert(LegMaturityMonthYear_39.getString());
    FIX::LegMaturityTime LegMaturityTime_39("TZTIMEONLY_1493563343");
    noLegs_0_0.set(LegMaturityTime_39);
    InstrumentLeg_39.insert(LegMaturityTime_39.getString());
    FIX::LegOptAttribute LegOptAttribute_39('2');
    noLegs_0_0.set(LegOptAttribute_39);
    InstrumentLeg_39.insert(LegOptAttribute_39.getString());
    FIX::LegOptionRatio LegOptionRatio_39;
    LegOptionRatio_39.setString("16043381");
    noLegs_0_0.set(LegOptionRatio_39);
    InstrumentLeg_39.insert(LegOptionRatio_39.getString());
    FIX::LegPool LegPool_39("STRING_629624766");
    noLegs_0_0.set(LegPool_39);
    InstrumentLeg_39.insert(LegPool_39.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_39("STRING_2032319721");
    noLegs_0_0.set(LegPriceUnitOfMeasure_39);
    InstrumentLeg_39.insert(LegPriceUnitOfMeasure_39.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_39;
    LegPriceUnitOfMeasureQty_39.setString("10682991");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_39);
    InstrumentLeg_39.insert(LegPriceUnitOfMeasureQty_39.getString());
    FIX::LegProduct LegProduct_39(834738057);
    noLegs_0_0.set(LegProduct_39);
    InstrumentLeg_39.insert(LegProduct_39.getString());
    FIX::LegPutOrCall LegPutOrCall_39(1149649326);
    noLegs_0_0.set(LegPutOrCall_39);
    InstrumentLeg_39.insert(LegPutOrCall_39.getString());
    FIX::LegRatioQty LegRatioQty_39;
    LegRatioQty_39.setString("12858197");
    noLegs_0_0.set(LegRatioQty_39);
    InstrumentLeg_39.insert(LegRatioQty_39.getString());
    FIX::LegRedemptionDate LegRedemptionDate_39("LOCALMKTDATE_1876221213");
    noLegs_0_0.set(LegRedemptionDate_39);
    InstrumentLeg_39.insert(LegRedemptionDate_39.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_39("STRING_775402529");
    noLegs_0_0.set(LegRepoCollateralSecurityType_39);
    InstrumentLeg_39.insert(LegRepoCollateralSecurityType_39.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_39;
    LegRepurchaseRate_39.setString("60.750000");
    noLegs_0_0.set(LegRepurchaseRate_39);
    InstrumentLeg_39.insert(LegRepurchaseRate_39.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_39(967975789);
    noLegs_0_0.set(LegRepurchaseTerm_39);
    InstrumentLeg_39.insert(LegRepurchaseTerm_39.getString());
    FIX::LegSecurityDesc LegSecurityDesc_39("STRING_1865592450");
    noLegs_0_0.set(LegSecurityDesc_39);
    InstrumentLeg_39.insert(LegSecurityDesc_39.getString());
    FIX::LegSecurityExchange LegSecurityExchange_39("EXCHANGE_1856341212");
    noLegs_0_0.set(LegSecurityExchange_39);
    InstrumentLeg_39.insert(LegSecurityExchange_39.getString());
    FIX::LegSecurityID LegSecurityID_39("STRING_570161810");
    noLegs_0_0.set(LegSecurityID_39);
    InstrumentLeg_39.insert(LegSecurityID_39.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_39("STRING_1622529485");
    noLegs_0_0.set(LegSecurityIDSource_39);
    InstrumentLeg_39.insert(LegSecurityIDSource_39.getString());
    FIX::LegSecuritySubType LegSecuritySubType_39("STRING_1271179965");
    noLegs_0_0.set(LegSecuritySubType_39);
    InstrumentLeg_39.insert(LegSecuritySubType_39.getString());
    FIX::LegSecurityType LegSecurityType_39("STRING_1301784151");
    noLegs_0_0.set(LegSecurityType_39);
    InstrumentLeg_39.insert(LegSecurityType_39.getString());
    FIX::LegSide LegSide_39('2');
    noLegs_0_0.set(LegSide_39);
    InstrumentLeg_39.insert(LegSide_39.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_39("STRING_1768203251");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_39);
    InstrumentLeg_39.insert(LegStateOrProvinceOfIssue_39.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_39("USD");
    noLegs_0_0.set(LegStrikeCurrency_39);
    InstrumentLeg_39.insert(LegStrikeCurrency_39.getString());
    FIX::LegStrikePrice LegStrikePrice_39;
    LegStrikePrice_39.setString("1282099");
    noLegs_0_0.set(LegStrikePrice_39);
    InstrumentLeg_39.insert(LegStrikePrice_39.getString());
    FIX::LegSymbol LegSymbol_39("STRING_1598924729");
    noLegs_0_0.set(LegSymbol_39);
    InstrumentLeg_39.insert(LegSymbol_39.getString());
    FIX::LegSymbolSfx LegSymbolSfx_39("STRING_1357202684");
    noLegs_0_0.set(LegSymbolSfx_39);
    InstrumentLeg_39.insert(LegSymbolSfx_39.getString());
    FIX::LegTimeUnit LegTimeUnit_39("STRING_1165647403");
    noLegs_0_0.set(LegTimeUnit_39);
    InstrumentLeg_39.insert(LegTimeUnit_39.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_39("STRING_437973749");
    noLegs_0_0.set(LegUnitOfMeasure_39);
    InstrumentLeg_39.insert(LegUnitOfMeasure_39.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_39;
    LegUnitOfMeasureQty_39.setString("9233661");
    noLegs_0_0.set(LegUnitOfMeasureQty_39);
    InstrumentLeg_39.insert(LegUnitOfMeasureQty_39.getString());
    all_values.push_back(InstrumentLeg_39);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_71;
      FIX::LegSecurityAltID LegSecurityAltID_71("STRING_1615226845");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_71);
      LegSecAltIDGrp_NoLegSecurityAltID_71.insert(LegSecurityAltID_71.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_71("STRING_269445831");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_71);
      LegSecAltIDGrp_NoLegSecurityAltID_71.insert(LegSecurityAltIDSource_71.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_71);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_72;
      FIX::LegSecurityAltID LegSecurityAltID_72("STRING_1552721487");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_72);
      LegSecAltIDGrp_NoLegSecurityAltID_72.insert(LegSecurityAltID_72.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_72("STRING_1072081305");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_72);
      LegSecAltIDGrp_NoLegSecurityAltID_72.insert(LegSecurityAltIDSource_72.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_72);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_23;
  FIX::AttachmentPoint AttachmentPoint_23;
  AttachmentPoint_23.setString("5.970000");
  msg.set(AttachmentPoint_23);
  Instrument_23.insert(AttachmentPoint_23.getString());
  FIX::CFICode CFICode_23("STRING_1437557560");
  msg.set(CFICode_23);
  Instrument_23.insert(CFICode_23.getString());
  FIX::CPProgram CPProgram_23(1);
  msg.set(CPProgram_23);
  Instrument_23.insert(CPProgram_23.getString());
  FIX::CPRegType CPRegType_23("STRING_1733808654");
  msg.set(CPRegType_23);
  Instrument_23.insert(CPRegType_23.getString());
  FIX::CapPrice CapPrice_23;
  CapPrice_23.setString("4397232");
  msg.set(CapPrice_23);
  Instrument_23.insert(CapPrice_23.getString());
  FIX::ContractMultiplier ContractMultiplier_23;
  ContractMultiplier_23.setString("12787165");
  msg.set(ContractMultiplier_23);
  Instrument_23.insert(ContractMultiplier_23.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_23(2);
  msg.set(ContractMultiplierUnit_23);
  Instrument_23.insert(ContractMultiplierUnit_23.getString());
  FIX::ContractSettlMonth ContractSettlMonth_23("MONTHYEAR_1215125768");
  msg.set(ContractSettlMonth_23);
  Instrument_23.insert(ContractSettlMonth_23.getString());
  FIX::CountryOfIssue CountryOfIssue_23("COUNTRY_507778968");
  msg.set(CountryOfIssue_23);
  Instrument_23.insert(CountryOfIssue_23.getString());
  FIX::CouponPaymentDate CouponPaymentDate_23("LOCALMKTDATE_283038361");
  msg.set(CouponPaymentDate_23);
  Instrument_23.insert(CouponPaymentDate_23.getString());
  FIX::CouponRate CouponRate_23;
  CouponRate_23.setString("45.700000");
  msg.set(CouponRate_23);
  Instrument_23.insert(CouponRate_23.getString());
  FIX::CreditRating CreditRating_23("STRING_216636532");
  msg.set(CreditRating_23);
  Instrument_23.insert(CreditRating_23.getString());
  FIX::DatedDate DatedDate_23("LOCALMKTDATE_853200171");
  msg.set(DatedDate_23);
  Instrument_23.insert(DatedDate_23.getString());
  FIX::DetachmentPoint DetachmentPoint_23;
  DetachmentPoint_23.setString("4.070000");
  msg.set(DetachmentPoint_23);
  Instrument_23.insert(DetachmentPoint_23.getString());
  FIX::EncodedIssuer EncodedIssuer_23("DATA_1487816497");
  msg.set(EncodedIssuer_23);
  Instrument_23.insert(EncodedIssuer_23.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_23(7500674);
  msg.set(EncodedIssuerLen_23);
  Instrument_23.insert(EncodedIssuerLen_23.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_23("DATA_630067822");
  msg.set(EncodedSecurityDesc_23);
  Instrument_23.insert(EncodedSecurityDesc_23.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_23(1108536101);
  msg.set(EncodedSecurityDescLen_23);
  Instrument_23.insert(EncodedSecurityDescLen_23.getString());
  FIX::ExerciseStyle ExerciseStyle_23(2);
  msg.set(ExerciseStyle_23);
  Instrument_23.insert(ExerciseStyle_23.getString());
  FIX::Factor Factor_23;
  Factor_23.setString("12799484");
  msg.set(Factor_23);
  Instrument_23.insert(Factor_23.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_23(false);
  msg.set(FlexProductEligibilityIndicator_23);
  Instrument_23.insert(FlexProductEligibilityIndicator_23.getString());
  FIX::FlexibleIndicator FlexibleIndicator_23(true);
  msg.set(FlexibleIndicator_23);
  Instrument_23.insert(FlexibleIndicator_23.getString());
  FIX::FloorPrice FloorPrice_23;
  FloorPrice_23.setString("4896674");
  msg.set(FloorPrice_23);
  Instrument_23.insert(FloorPrice_23.getString());
  FIX::FlowScheduleType FlowScheduleType_23(0);
  msg.set(FlowScheduleType_23);
  Instrument_23.insert(FlowScheduleType_23.getString());
  FIX::InstrRegistry InstrRegistry_23("STRING_101679905");
  msg.set(InstrRegistry_23);
  Instrument_23.insert(InstrRegistry_23.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_23('1');
  msg.set(InstrmtAssignmentMethod_23);
  Instrument_23.insert(InstrmtAssignmentMethod_23.getString());
  FIX::InterestAccrualDate InterestAccrualDate_23("LOCALMKTDATE_1563303946");
  msg.set(InterestAccrualDate_23);
  Instrument_23.insert(InterestAccrualDate_23.getString());
  FIX::IssueDate IssueDate_23("LOCALMKTDATE_1716906750");
  msg.set(IssueDate_23);
  Instrument_23.insert(IssueDate_23.getString());
  FIX::Issuer Issuer_23("STRING_1682479435");
  msg.set(Issuer_23);
  Instrument_23.insert(Issuer_23.getString());
  FIX::ListMethod ListMethod_23(1);
  msg.set(ListMethod_23);
  Instrument_23.insert(ListMethod_23.getString());
  FIX::LocaleOfIssue LocaleOfIssue_23("STRING_641504408");
  msg.set(LocaleOfIssue_23);
  Instrument_23.insert(LocaleOfIssue_23.getString());
  FIX::MaturityDate MaturityDate_23("LOCALMKTDATE_434066384");
  msg.set(MaturityDate_23);
  Instrument_23.insert(MaturityDate_23.getString());
  FIX::MaturityMonthYear MaturityMonthYear_23("MONTHYEAR_258615698");
  msg.set(MaturityMonthYear_23);
  Instrument_23.insert(MaturityMonthYear_23.getString());
  FIX::MaturityTime MaturityTime_23("TZTIMEONLY_634401186");
  msg.set(MaturityTime_23);
  Instrument_23.insert(MaturityTime_23.getString());
  FIX::MinPriceIncrement MinPriceIncrement_23;
  MinPriceIncrement_23.setString("203913");
  msg.set(MinPriceIncrement_23);
  Instrument_23.insert(MinPriceIncrement_23.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_23;
  MinPriceIncrementAmount_23.setString("6983389");
  msg.set(MinPriceIncrementAmount_23);
  Instrument_23.insert(MinPriceIncrementAmount_23.getString());
  FIX::NTPositionLimit NTPositionLimit_23(1913117727);
  msg.set(NTPositionLimit_23);
  Instrument_23.insert(NTPositionLimit_23.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_23;
  NotionalPercentageOutstanding_23.setString("76.110000");
  msg.set(NotionalPercentageOutstanding_23);
  Instrument_23.insert(NotionalPercentageOutstanding_23.getString());
  FIX::OptAttribute OptAttribute_23('1');
  msg.set(OptAttribute_23);
  Instrument_23.insert(OptAttribute_23.getString());
  FIX::OptPayoutAmount OptPayoutAmount_23;
  OptPayoutAmount_23.setString("2734130");
  msg.set(OptPayoutAmount_23);
  Instrument_23.insert(OptPayoutAmount_23.getString());
  FIX::OptPayoutType OptPayoutType_23(2);
  msg.set(OptPayoutType_23);
  Instrument_23.insert(OptPayoutType_23.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_23;
  OriginalNotionalPercentageOutstanding_23.setString("56.270000");
  msg.set(OriginalNotionalPercentageOutstanding_23);
  Instrument_23.insert(OriginalNotionalPercentageOutstanding_23.getString());
  FIX::Pool Pool_23("STRING_490049580");
  msg.set(Pool_23);
  Instrument_23.insert(Pool_23.getString());
  FIX::PositionLimit PositionLimit_23(471692495);
  msg.set(PositionLimit_23);
  Instrument_23.insert(PositionLimit_23.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_23("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_23);
  Instrument_23.insert(PriceQuoteMethod_23.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_23("STRING_1977866078");
  msg.set(PriceUnitOfMeasure_23);
  Instrument_23.insert(PriceUnitOfMeasure_23.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_23;
  PriceUnitOfMeasureQty_23.setString("4791931");
  msg.set(PriceUnitOfMeasureQty_23);
  Instrument_23.insert(PriceUnitOfMeasureQty_23.getString());
  FIX::Product Product_25(4);
  msg.set(Product_25);
  Instrument_23.insert(Product_25.getString());
  FIX::ProductComplex ProductComplex_23("STRING_938918531");
  msg.set(ProductComplex_23);
  Instrument_23.insert(ProductComplex_23.getString());
  FIX::PutOrCall PutOrCall_23(0);
  msg.set(PutOrCall_23);
  Instrument_23.insert(PutOrCall_23.getString());
  FIX::RedemptionDate RedemptionDate_23("LOCALMKTDATE_870028641");
  msg.set(RedemptionDate_23);
  Instrument_23.insert(RedemptionDate_23.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_23("STRING_28180908");
  msg.set(RepoCollateralSecurityType_23);
  Instrument_23.insert(RepoCollateralSecurityType_23.getString());
  FIX::RepurchaseRate RepurchaseRate_23;
  RepurchaseRate_23.setString("44.000000");
  msg.set(RepurchaseRate_23);
  Instrument_23.insert(RepurchaseRate_23.getString());
  FIX::RepurchaseTerm RepurchaseTerm_23(1359696109);
  msg.set(RepurchaseTerm_23);
  Instrument_23.insert(RepurchaseTerm_23.getString());
  FIX::RestructuringType RestructuringType_23("STRING_MR");
  msg.set(RestructuringType_23);
  Instrument_23.insert(RestructuringType_23.getString());
  FIX::SecurityDesc SecurityDesc_23("STRING_456844306");
  msg.set(SecurityDesc_23);
  Instrument_23.insert(SecurityDesc_23.getString());
  FIX::SecurityExchange SecurityExchange_23("EXCHANGE_625246065");
  msg.set(SecurityExchange_23);
  Instrument_23.insert(SecurityExchange_23.getString());
  FIX::SecurityGroup SecurityGroup_23("STRING_1846394635");
  msg.set(SecurityGroup_23);
  Instrument_23.insert(SecurityGroup_23.getString());
  FIX::SecurityID SecurityID_23("STRING_26267408");
  msg.set(SecurityID_23);
  Instrument_23.insert(SecurityID_23.getString());
  FIX::SecurityIDSource SecurityIDSource_23("STRING_D");
  msg.set(SecurityIDSource_23);
  Instrument_23.insert(SecurityIDSource_23.getString());
  FIX::SecurityStatus SecurityStatus_23("STRING_1");
  msg.set(SecurityStatus_23);
  Instrument_23.insert(SecurityStatus_23.getString());
  FIX::SecuritySubType SecuritySubType_24("STRING_667771816");
  msg.set(SecuritySubType_24);
  Instrument_23.insert(SecuritySubType_24.getString());
  FIX::SecurityType SecurityType_25("STRING_RETIRED");
  msg.set(SecurityType_25);
  Instrument_23.insert(SecurityType_25.getString());
  FIX::Seniority Seniority_23("STRING_SD");
  msg.set(Seniority_23);
  Instrument_23.insert(Seniority_23.getString());
  FIX::SettlMethod SettlMethod_23('C');
  msg.set(SettlMethod_23);
  Instrument_23.insert(SettlMethod_23.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_23("STRING_614699628");
  msg.set(SettleOnOpenFlag_23);
  Instrument_23.insert(SettleOnOpenFlag_23.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_23("STRING_1624407407");
  msg.set(StateOrProvinceOfIssue_23);
  Instrument_23.insert(StateOrProvinceOfIssue_23.getString());
  FIX::StrikeCurrency StrikeCurrency_23("CHF");
  msg.set(StrikeCurrency_23);
  Instrument_23.insert(StrikeCurrency_23.getString());
  FIX::StrikeMultiplier StrikeMultiplier_23;
  StrikeMultiplier_23.setString("13903884");
  msg.set(StrikeMultiplier_23);
  Instrument_23.insert(StrikeMultiplier_23.getString());
  FIX::StrikePrice StrikePrice_23;
  StrikePrice_23.setString("13412201");
  msg.set(StrikePrice_23);
  Instrument_23.insert(StrikePrice_23.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_23(4);
  msg.set(StrikePriceBoundaryMethod_23);
  Instrument_23.insert(StrikePriceBoundaryMethod_23.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_23;
  StrikePriceBoundaryPrecision_23.setString("40.920000");
  msg.set(StrikePriceBoundaryPrecision_23);
  Instrument_23.insert(StrikePriceBoundaryPrecision_23.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_23(3);
  msg.set(StrikePriceDeterminationMethod_23);
  Instrument_23.insert(StrikePriceDeterminationMethod_23.getString());
  FIX::StrikeValue StrikeValue_23;
  StrikeValue_23.setString("403384");
  msg.set(StrikeValue_23);
  Instrument_23.insert(StrikeValue_23.getString());
  FIX::Symbol Symbol_23("STRING_1049616479");
  msg.set(Symbol_23);
  Instrument_23.insert(Symbol_23.getString());
  FIX::SymbolSfx SymbolSfx_23("STRING_CD");
  msg.set(SymbolSfx_23);
  Instrument_23.insert(SymbolSfx_23.getString());
  FIX::TimeUnit TimeUnit_23("STRING_Min");
  msg.set(TimeUnit_23);
  Instrument_23.insert(TimeUnit_23.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_23(1);
  msg.set(UnderlyingPriceDeterminationMethod_23);
  Instrument_23.insert(UnderlyingPriceDeterminationMethod_23.getString());
  FIX::UnitOfMeasure UnitOfMeasure_23("STRING_Alw");
  msg.set(UnitOfMeasure_23);
  Instrument_23.insert(UnitOfMeasure_23.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_23;
  UnitOfMeasureQty_23.setString("12109898");
  msg.set(UnitOfMeasureQty_23);
  Instrument_23.insert(UnitOfMeasureQty_23.getString());
  FIX::ValuationMethod ValuationMethod_23("STRING_CDSD");
  msg.set(ValuationMethod_23);
  Instrument_23.insert(ValuationMethod_23.getString());
  all_values.push_back(Instrument_23);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::DontKnowTrade::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_40;
    FIX::ComplexEventCondition ComplexEventCondition_40(2);
    noComplexEvents_0_0.set(ComplexEventCondition_40);
    ComplexEvents_NoComplexEvents_40.insert(ComplexEventCondition_40.getString());
    FIX::ComplexEventPrice ComplexEventPrice_40;
    ComplexEventPrice_40.setString("7219377");
    noComplexEvents_0_0.set(ComplexEventPrice_40);
    ComplexEvents_NoComplexEvents_40.insert(ComplexEventPrice_40.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_40(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_40);
    ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceBoundaryMethod_40.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_40;
    ComplexEventPriceBoundaryPrecision_40.setString("85.310000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_40);
    ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceBoundaryPrecision_40.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_40(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_40);
    ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceTimeType_40.getString());
    FIX::ComplexEventType ComplexEventType_40(9);
    noComplexEvents_0_0.set(ComplexEventType_40);
    ComplexEvents_NoComplexEvents_40.insert(ComplexEventType_40.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_40;
    ComplexOptPayoutAmount_40.setString("20492659");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_40);
    ComplexEvents_NoComplexEvents_40.insert(ComplexOptPayoutAmount_40.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_40);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_76;
      FIX::ComplexEventEndDate ComplexEventEndDate_76(FIX::UTCTIMESTAMP(4, 5, 31, 23, 10, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_76);
      ComplexEventDates_NoComplexEventDates_76.insert(ComplexEventEndDate_76.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_76(FIX::UTCTIMESTAMP(4, 7, 15, 7, 4, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_76);
      ComplexEventDates_NoComplexEventDates_76.insert(ComplexEventStartDate_76.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_76);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_149;
        FIX::ComplexEventEndTime ComplexEventEndTime_149(FIX::UTCTIMEONLY(22, 2, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_149);
        ComplexEventTimes_NoComplexEventTimes_149.insert(ComplexEventEndTime_149.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_149(FIX::UTCTIMEONLY(23, 59, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_149);
        ComplexEventTimes_NoComplexEventTimes_149.insert(ComplexEventStartTime_149.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_149);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_150;
        FIX::ComplexEventEndTime ComplexEventEndTime_150(FIX::UTCTIMEONLY(21, 58, 8));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_150);
        ComplexEventTimes_NoComplexEventTimes_150.insert(ComplexEventEndTime_150.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_150(FIX::UTCTIMEONLY(6, 20, 18));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_150);
        ComplexEventTimes_NoComplexEventTimes_150.insert(ComplexEventStartTime_150.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_150);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_42;
    FIX::EventDate EventDate_42("LOCALMKTDATE_1624131109");
    noEvents_0_0.set(EventDate_42);
    EvntGrp_NoEvents_42.insert(EventDate_42.getString());
    FIX::EventPx EventPx_42;
    EventPx_42.setString("10061250");
    noEvents_0_0.set(EventPx_42);
    EvntGrp_NoEvents_42.insert(EventPx_42.getString());
    FIX::EventText EventText_42("STRING_238270702");
    noEvents_0_0.set(EventText_42);
    EvntGrp_NoEvents_42.insert(EventText_42.getString());
    FIX::EventTime EventTime_42(FIX::UTCTIMESTAMP(1, 32, 57, 25, 8, 2016));
    noEvents_0_0.set(EventTime_42);
    EvntGrp_NoEvents_42.insert(EventTime_42.getString());
    FIX::EventType EventType_42(2);
    noEvents_0_0.set(EventType_42);
    EvntGrp_NoEvents_42.insert(EventType_42.getString());
    all_values.push_back(EvntGrp_NoEvents_42);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_43;
    FIX::EventDate EventDate_43("LOCALMKTDATE_1119860962");
    noEvents_0_1.set(EventDate_43);
    EvntGrp_NoEvents_43.insert(EventDate_43.getString());
    FIX::EventPx EventPx_43;
    EventPx_43.setString("17957852");
    noEvents_0_1.set(EventPx_43);
    EvntGrp_NoEvents_43.insert(EventPx_43.getString());
    FIX::EventText EventText_43("STRING_162532143");
    noEvents_0_1.set(EventText_43);
    EvntGrp_NoEvents_43.insert(EventText_43.getString());
    FIX::EventTime EventTime_43(FIX::UTCTIMESTAMP(7, 5, 14, 17, 10, 2017));
    noEvents_0_1.set(EventTime_43);
    EvntGrp_NoEvents_43.insert(EventTime_43.getString());
    FIX::EventType EventType_43(19);
    noEvents_0_1.set(EventType_43);
    EvntGrp_NoEvents_43.insert(EventType_43.getString());
    all_values.push_back(EvntGrp_NoEvents_43);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::DontKnowTrade::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_44;
    FIX::EventDate EventDate_44("LOCALMKTDATE_1798556990");
    noEvents_0_2.set(EventDate_44);
    EvntGrp_NoEvents_44.insert(EventDate_44.getString());
    FIX::EventPx EventPx_44;
    EventPx_44.setString("9688629");
    noEvents_0_2.set(EventPx_44);
    EvntGrp_NoEvents_44.insert(EventPx_44.getString());
    FIX::EventText EventText_44("STRING_1616907117");
    noEvents_0_2.set(EventText_44);
    EvntGrp_NoEvents_44.insert(EventText_44.getString());
    FIX::EventTime EventTime_44(FIX::UTCTIMESTAMP(8, 55, 11, 22, 7, 2004));
    noEvents_0_2.set(EventTime_44);
    EvntGrp_NoEvents_44.insert(EventTime_44.getString());
    FIX::EventType EventType_44(3);
    noEvents_0_2.set(EventType_44);
    EvntGrp_NoEvents_44.insert(EventType_44.getString());
    all_values.push_back(EvntGrp_NoEvents_44);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_50;
    FIX::InstrumentPartyID InstrumentPartyID_50("STRING_535983436");
    noInstrumentParties_0_0.set(InstrumentPartyID_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyID_50.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_50('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyIDSource_50.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_50(1006884101);
    noInstrumentParties_0_0.set(InstrumentPartyRole_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyRole_50.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_50);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104;
      FIX::InstrumentPartySubID InstrumentPartySubID_104("STRING_1945598132");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_104);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104.insert(InstrumentPartySubID_104.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_104(1408005192);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_104);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104.insert(InstrumentPartySubIDType_104.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105;
      FIX::InstrumentPartySubID InstrumentPartySubID_105("STRING_507653401");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_105);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105.insert(InstrumentPartySubID_105.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_105(1980042433);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_105);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105.insert(InstrumentPartySubIDType_105.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106;
      FIX::InstrumentPartySubID InstrumentPartySubID_106("STRING_380382507");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_106);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106.insert(InstrumentPartySubID_106.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_106(155954986);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_106);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106.insert(InstrumentPartySubIDType_106.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_51;
    FIX::InstrumentPartyID InstrumentPartyID_51("STRING_2142574576");
    noInstrumentParties_0_1.set(InstrumentPartyID_51);
    InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyID_51.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_51('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_51);
    InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyIDSource_51.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_51(1135481802);
    noInstrumentParties_0_1.set(InstrumentPartyRole_51);
    InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyRole_51.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_51);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107;
      FIX::InstrumentPartySubID InstrumentPartySubID_107("STRING_2122419226");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_107);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107.insert(InstrumentPartySubID_107.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_107(1751837223);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_107);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107.insert(InstrumentPartySubIDType_107.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108;
      FIX::InstrumentPartySubID InstrumentPartySubID_108("STRING_1326519659");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_108);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108.insert(InstrumentPartySubID_108.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_108(599049703);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_108);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108.insert(InstrumentPartySubIDType_108.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109;
      FIX::InstrumentPartySubID InstrumentPartySubID_109("STRING_338805533");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_109);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109.insert(InstrumentPartySubID_109.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_109(977593001);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_109);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109.insert(InstrumentPartySubIDType_109.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_49;
    FIX::SecurityAltID SecurityAltID_49("STRING_1955712650");
    noSecurityAltID_0_0.set(SecurityAltID_49);
    SecAltIDGrp_NoSecurityAltID_49.insert(SecurityAltID_49.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_49("STRING_1781461051");
    noSecurityAltID_0_0.set(SecurityAltIDSource_49);
    SecAltIDGrp_NoSecurityAltID_49.insert(SecurityAltIDSource_49.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_49);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_50;
    FIX::SecurityAltID SecurityAltID_50("STRING_2081224747");
    noSecurityAltID_0_1.set(SecurityAltID_50);
    SecAltIDGrp_NoSecurityAltID_50.insert(SecurityAltID_50.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_50("STRING_623377238");
    noSecurityAltID_0_1.set(SecurityAltIDSource_50);
    SecAltIDGrp_NoSecurityAltID_50.insert(SecurityAltIDSource_50.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_50);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_46;
  FIX::SecurityXML SecurityXML_47("XMLDATA_1492422454");
  msg.set(SecurityXML_47);
  FIX::SecurityXMLLen SecurityXMLLen_23(1498927933);
  msg.set(SecurityXMLLen_23);
  FIX::SecurityXMLSchema SecurityXMLSchema_23("STRING_1767488972");
  msg.set(SecurityXMLSchema_23);
  SecurityXML_46.insert(SecurityXMLSchema_23.getString());
  all_values.push_back(SecurityXML_46);

  // OrderQtyData
  multiset<string> OrderQtyData_3;
  FIX::CashOrderQty CashOrderQty_3;
  CashOrderQty_3.setString("6800313");
  msg.set(CashOrderQty_3);
  OrderQtyData_3.insert(CashOrderQty_3.getString());
  FIX::OrderPercent OrderPercent_3;
  OrderPercent_3.setString("61.950000");
  msg.set(OrderPercent_3);
  OrderQtyData_3.insert(OrderPercent_3.getString());
  FIX::OrderQty OrderQty_14;
  OrderQty_14.setString("10023877");
  msg.set(OrderQty_14);
  OrderQtyData_3.insert(OrderQty_14.getString());
  FIX::RoundingDirection RoundingDirection_3('1');
  msg.set(RoundingDirection_3);
  OrderQtyData_3.insert(RoundingDirection_3.getString());
  FIX::RoundingModulus RoundingModulus_3;
  RoundingModulus_3.setString("17741758");
  msg.set(RoundingModulus_3);
  OrderQtyData_3.insert(RoundingModulus_3.getString());
  all_values.push_back(OrderQtyData_3);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_36;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_36("DATA_1744939659");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingIssuer_36.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_36(1572290295);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingIssuerLen_36.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_36("DATA_1269793406");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingSecurityDesc_36.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_36(105109412);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingSecurityDescLen_36.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_36;
    UnderlyingAdjustedQuantity_36.setString("14048490");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_36);
    UnderlyingInstrument_36.insert(UnderlyingAdjustedQuantity_36.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_36;
    UnderlyingAllocationPercent_36.setString("59.130000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_36);
    UnderlyingInstrument_36.insert(UnderlyingAllocationPercent_36.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_36;
    UnderlyingAttachmentPoint_36.setString("43.990000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_36);
    UnderlyingInstrument_36.insert(UnderlyingAttachmentPoint_36.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_36("STRING_1399940009");
    noUnderlyings_0_0.set(UnderlyingCFICode_36);
    UnderlyingInstrument_36.insert(UnderlyingCFICode_36.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_36("STRING_623808437");
    noUnderlyings_0_0.set(UnderlyingCPProgram_36);
    UnderlyingInstrument_36.insert(UnderlyingCPProgram_36.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_36("STRING_1396546201");
    noUnderlyings_0_0.set(UnderlyingCPRegType_36);
    UnderlyingInstrument_36.insert(UnderlyingCPRegType_36.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_36;
    UnderlyingCapValue_36.setString("576988");
    noUnderlyings_0_0.set(UnderlyingCapValue_36);
    UnderlyingInstrument_36.insert(UnderlyingCapValue_36.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_36;
    UnderlyingCashAmount_36.setString("5987440");
    noUnderlyings_0_0.set(UnderlyingCashAmount_36);
    UnderlyingInstrument_36.insert(UnderlyingCashAmount_36.getString());
    FIX::UnderlyingCashType UnderlyingCashType_36("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_36);
    UnderlyingInstrument_36.insert(UnderlyingCashType_36.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_36;
    UnderlyingContractMultiplier_36.setString("13842185");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_36);
    UnderlyingInstrument_36.insert(UnderlyingContractMultiplier_36.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_36(1197793718);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_36);
    UnderlyingInstrument_36.insert(UnderlyingContractMultiplierUnit_36.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_36("COUNTRY_1339705309");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingCountryOfIssue_36.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_36("LOCALMKTDATE_214327867");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_36);
    UnderlyingInstrument_36.insert(UnderlyingCouponPaymentDate_36.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_36;
    UnderlyingCouponRate_36.setString("27.610000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_36);
    UnderlyingInstrument_36.insert(UnderlyingCouponRate_36.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_36("STRING_1147934312");
    noUnderlyings_0_0.set(UnderlyingCreditRating_36);
    UnderlyingInstrument_36.insert(UnderlyingCreditRating_36.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_36("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_36);
    UnderlyingInstrument_36.insert(UnderlyingCurrency_36.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_36;
    UnderlyingCurrentValue_36.setString("17713115");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_36);
    UnderlyingInstrument_36.insert(UnderlyingCurrentValue_36.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_36;
    UnderlyingDetachmentPoint_36.setString("77.250000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_36);
    UnderlyingInstrument_36.insert(UnderlyingDetachmentPoint_36.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_36;
    UnderlyingDirtyPrice_36.setString("20508917");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_36);
    UnderlyingInstrument_36.insert(UnderlyingDirtyPrice_36.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_36;
    UnderlyingEndPrice_36.setString("13913168");
    noUnderlyings_0_0.set(UnderlyingEndPrice_36);
    UnderlyingInstrument_36.insert(UnderlyingEndPrice_36.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_36;
    UnderlyingEndValue_36.setString("20207590");
    noUnderlyings_0_0.set(UnderlyingEndValue_36);
    UnderlyingInstrument_36.insert(UnderlyingEndValue_36.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_36(1826164341);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_36);
    UnderlyingInstrument_36.insert(UnderlyingExerciseStyle_36.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_36;
    UnderlyingFXRate_36.setString("2462209");
    noUnderlyings_0_0.set(UnderlyingFXRate_36);
    UnderlyingInstrument_36.insert(UnderlyingFXRate_36.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_36('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_36);
    UnderlyingInstrument_36.insert(UnderlyingFXRateCalc_36.getString());
    FIX::UnderlyingFactor UnderlyingFactor_36;
    UnderlyingFactor_36.setString("14528565");
    noUnderlyings_0_0.set(UnderlyingFactor_36);
    UnderlyingInstrument_36.insert(UnderlyingFactor_36.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_36(108009201);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_36);
    UnderlyingInstrument_36.insert(UnderlyingFlowScheduleType_36.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_36("STRING_686746161");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_36);
    UnderlyingInstrument_36.insert(UnderlyingInstrRegistry_36.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_36("LOCALMKTDATE_877663150");
    noUnderlyings_0_0.set(UnderlyingIssueDate_36);
    UnderlyingInstrument_36.insert(UnderlyingIssueDate_36.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_36("STRING_1377802608");
    noUnderlyings_0_0.set(UnderlyingIssuer_36);
    UnderlyingInstrument_36.insert(UnderlyingIssuer_36.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_36("STRING_791855574");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingLocaleOfIssue_36.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_36("LOCALMKTDATE_135028583");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityDate_36.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_36("MONTHYEAR_880494873");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityMonthYear_36.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_36("TZTIMEONLY_1052919973");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityTime_36.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_36;
    UnderlyingNotionalPercentageOutstanding_36.setString("85.920000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_36);
    UnderlyingInstrument_36.insert(UnderlyingNotionalPercentageOutstanding_36.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_36('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_36);
    UnderlyingInstrument_36.insert(UnderlyingOptAttribute_36.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_36;
    UnderlyingOriginalNotionalPercentageOutstanding_36.setString("25.260000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_36);
    UnderlyingInstrument_36.insert(UnderlyingOriginalNotionalPercentageOutstanding_36.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_36("STRING_1592667447");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_36);
    UnderlyingInstrument_36.insert(UnderlyingPriceUnitOfMeasure_36.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_36;
    UnderlyingPriceUnitOfMeasureQty_36.setString("21030473");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_36);
    UnderlyingInstrument_36.insert(UnderlyingPriceUnitOfMeasureQty_36.getString());
    FIX::UnderlyingProduct UnderlyingProduct_36(1302882302);
    noUnderlyings_0_0.set(UnderlyingProduct_36);
    UnderlyingInstrument_36.insert(UnderlyingProduct_36.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_36(829402313);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_36);
    UnderlyingInstrument_36.insert(UnderlyingPutOrCall_36.getString());
    FIX::UnderlyingPx UnderlyingPx_36;
    UnderlyingPx_36.setString("11533573");
    noUnderlyings_0_0.set(UnderlyingPx_36);
    UnderlyingInstrument_36.insert(UnderlyingPx_36.getString());
    FIX::UnderlyingQty UnderlyingQty_36;
    UnderlyingQty_36.setString("4951039");
    noUnderlyings_0_0.set(UnderlyingQty_36);
    UnderlyingInstrument_36.insert(UnderlyingQty_36.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_36("LOCALMKTDATE_1043730180");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_36);
    UnderlyingInstrument_36.insert(UnderlyingRedemptionDate_36.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_36("STRING_1771580157");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_36);
    UnderlyingInstrument_36.insert(UnderlyingRepoCollateralSecurityType_36.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_36;
    UnderlyingRepurchaseRate_36.setString("82.750000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_36);
    UnderlyingInstrument_36.insert(UnderlyingRepurchaseRate_36.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_36(892035450);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_36);
    UnderlyingInstrument_36.insert(UnderlyingRepurchaseTerm_36.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_36("STRING_176060369");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_36);
    UnderlyingInstrument_36.insert(UnderlyingRestructuringType_36.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_36("STRING_1266866177");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityDesc_36.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_36("EXCHANGE_85279527");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityExchange_36.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_36("STRING_79468514");
    noUnderlyings_0_0.set(UnderlyingSecurityID_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityID_36.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_36("STRING_510699404");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityIDSource_36.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_36("STRING_2106038571");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_36);
    UnderlyingInstrument_36.insert(UnderlyingSecuritySubType_36.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_36("STRING_1905632855");
    noUnderlyings_0_0.set(UnderlyingSecurityType_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityType_36.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_36("STRING_756920391");
    noUnderlyings_0_0.set(UnderlyingSeniority_36);
    UnderlyingInstrument_36.insert(UnderlyingSeniority_36.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_36("STRING_1047845073");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_36);
    UnderlyingInstrument_36.insert(UnderlyingSettlMethod_36.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_36(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_36);
    UnderlyingInstrument_36.insert(UnderlyingSettlementType_36.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_36;
    UnderlyingStartValue_36.setString("8649295");
    noUnderlyings_0_0.set(UnderlyingStartValue_36);
    UnderlyingInstrument_36.insert(UnderlyingStartValue_36.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_36("STRING_1734591234");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingStateOrProvinceOfIssue_36.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_36("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_36);
    UnderlyingInstrument_36.insert(UnderlyingStrikeCurrency_36.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_36;
    UnderlyingStrikePrice_36.setString("3789631");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_36);
    UnderlyingInstrument_36.insert(UnderlyingStrikePrice_36.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_36("STRING_76213796");
    noUnderlyings_0_0.set(UnderlyingSymbol_36);
    UnderlyingInstrument_36.insert(UnderlyingSymbol_36.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_36("STRING_975743426");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_36);
    UnderlyingInstrument_36.insert(UnderlyingSymbolSfx_36.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_36("STRING_1431883133");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_36);
    UnderlyingInstrument_36.insert(UnderlyingTimeUnit_36.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_36("STRING_1611182388");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_36);
    UnderlyingInstrument_36.insert(UnderlyingUnitOfMeasure_36.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_36;
    UnderlyingUnitOfMeasureQty_36.setString("3325630");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_36);
    UnderlyingInstrument_36.insert(UnderlyingUnitOfMeasureQty_36.getString());
    all_values.push_back(UnderlyingInstrument_36);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_74;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_74("STRING_1056366187");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_74);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_74.insert(UnderlyingSecurityAltID_74.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_74("STRING_288126766");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_74);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_74.insert(UnderlyingSecurityAltIDSource_74.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_75;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_75("STRING_889264313");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_75);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_75.insert(UnderlyingSecurityAltID_75.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_75("STRING_1885768500");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_75);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_75.insert(UnderlyingSecurityAltIDSource_75.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_76;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_76("STRING_1441484162");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_76);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_76.insert(UnderlyingSecurityAltID_76.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_76("STRING_1384368277");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_76);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_76.insert(UnderlyingSecurityAltIDSource_76.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_65;
      FIX::UnderlyingStipType UnderlyingStipType_65("STRING_1065580671");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_65);
      UnderlyingStipulations_NoUnderlyingStips_65.insert(UnderlyingStipType_65.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_65("STRING_879922904");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_65);
      UnderlyingStipulations_NoUnderlyingStips_65.insert(UnderlyingStipValue_65.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_65);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_66;
      FIX::UnderlyingStipType UnderlyingStipType_66("STRING_1674050483");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_66);
      UnderlyingStipulations_NoUnderlyingStips_66.insert(UnderlyingStipType_66.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_66("STRING_1241641040");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_66);
      UnderlyingStipulations_NoUnderlyingStips_66.insert(UnderlyingStipValue_66.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_66);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_75;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_75("STRING_1759330010");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyID_75.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_75('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyIDSource_75.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_75(510004838);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyRole_75.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_75);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_149("STRING_1079258762");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_149);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149.insert(UnderlyingInstrumentPartySubID_149.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_149(1266925229);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_149);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149.insert(UnderlyingInstrumentPartySubIDType_149.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_76;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_76("STRING_618246358");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyID_76.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_76('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyIDSource_76.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_76(2131854822);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyRole_76.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_76);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_150("STRING_83966039");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_150);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150.insert(UnderlyingInstrumentPartySubID_150.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_150(79619727);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_150);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150.insert(UnderlyingInstrumentPartySubIDType_150.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_77;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_77("STRING_584317105");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyID_77.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_77('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyIDSource_77.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_77(1055363154);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyRole_77.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_77);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_151("STRING_1771362224");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_151);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151.insert(UnderlyingInstrumentPartySubID_151.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_151(1387926243);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_151);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151.insert(UnderlyingInstrumentPartySubIDType_151.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_152("STRING_1602582250");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_152);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152.insert(UnderlyingInstrumentPartySubID_152.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_152(680244763);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_152);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152.insert(UnderlyingInstrumentPartySubIDType_152.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::DontKnowTrade::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_37;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_37("DATA_1676053009");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingIssuer_37.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_37(344362916);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingIssuerLen_37.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_37("DATA_418529616");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingSecurityDesc_37.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_37(970053524);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingSecurityDescLen_37.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_37;
    UnderlyingAdjustedQuantity_37.setString("17287311");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_37);
    UnderlyingInstrument_37.insert(UnderlyingAdjustedQuantity_37.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_37;
    UnderlyingAllocationPercent_37.setString("46.480000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_37);
    UnderlyingInstrument_37.insert(UnderlyingAllocationPercent_37.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_37;
    UnderlyingAttachmentPoint_37.setString("41.950000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_37);
    UnderlyingInstrument_37.insert(UnderlyingAttachmentPoint_37.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_37("STRING_461170449");
    noUnderlyings_0_1.set(UnderlyingCFICode_37);
    UnderlyingInstrument_37.insert(UnderlyingCFICode_37.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_37("STRING_727111483");
    noUnderlyings_0_1.set(UnderlyingCPProgram_37);
    UnderlyingInstrument_37.insert(UnderlyingCPProgram_37.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_37("STRING_1129791588");
    noUnderlyings_0_1.set(UnderlyingCPRegType_37);
    UnderlyingInstrument_37.insert(UnderlyingCPRegType_37.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_37;
    UnderlyingCapValue_37.setString("4604758");
    noUnderlyings_0_1.set(UnderlyingCapValue_37);
    UnderlyingInstrument_37.insert(UnderlyingCapValue_37.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_37;
    UnderlyingCashAmount_37.setString("3389578");
    noUnderlyings_0_1.set(UnderlyingCashAmount_37);
    UnderlyingInstrument_37.insert(UnderlyingCashAmount_37.getString());
    FIX::UnderlyingCashType UnderlyingCashType_37("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_37);
    UnderlyingInstrument_37.insert(UnderlyingCashType_37.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_37;
    UnderlyingContractMultiplier_37.setString("9704807");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_37);
    UnderlyingInstrument_37.insert(UnderlyingContractMultiplier_37.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_37(2056842779);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_37);
    UnderlyingInstrument_37.insert(UnderlyingContractMultiplierUnit_37.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_37("COUNTRY_1382676257");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingCountryOfIssue_37.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_37("LOCALMKTDATE_89922303");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_37);
    UnderlyingInstrument_37.insert(UnderlyingCouponPaymentDate_37.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_37;
    UnderlyingCouponRate_37.setString("54.900000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_37);
    UnderlyingInstrument_37.insert(UnderlyingCouponRate_37.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_37("STRING_1525457083");
    noUnderlyings_0_1.set(UnderlyingCreditRating_37);
    UnderlyingInstrument_37.insert(UnderlyingCreditRating_37.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_37("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_37);
    UnderlyingInstrument_37.insert(UnderlyingCurrency_37.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_37;
    UnderlyingCurrentValue_37.setString("16094231");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_37);
    UnderlyingInstrument_37.insert(UnderlyingCurrentValue_37.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_37;
    UnderlyingDetachmentPoint_37.setString("32.050000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_37);
    UnderlyingInstrument_37.insert(UnderlyingDetachmentPoint_37.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_37;
    UnderlyingDirtyPrice_37.setString("13172765");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_37);
    UnderlyingInstrument_37.insert(UnderlyingDirtyPrice_37.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_37;
    UnderlyingEndPrice_37.setString("17696029");
    noUnderlyings_0_1.set(UnderlyingEndPrice_37);
    UnderlyingInstrument_37.insert(UnderlyingEndPrice_37.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_37;
    UnderlyingEndValue_37.setString("12092763");
    noUnderlyings_0_1.set(UnderlyingEndValue_37);
    UnderlyingInstrument_37.insert(UnderlyingEndValue_37.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_37(1185993131);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_37);
    UnderlyingInstrument_37.insert(UnderlyingExerciseStyle_37.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_37;
    UnderlyingFXRate_37.setString("13934815");
    noUnderlyings_0_1.set(UnderlyingFXRate_37);
    UnderlyingInstrument_37.insert(UnderlyingFXRate_37.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_37('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_37);
    UnderlyingInstrument_37.insert(UnderlyingFXRateCalc_37.getString());
    FIX::UnderlyingFactor UnderlyingFactor_37;
    UnderlyingFactor_37.setString("6410917");
    noUnderlyings_0_1.set(UnderlyingFactor_37);
    UnderlyingInstrument_37.insert(UnderlyingFactor_37.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_37(2073726297);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_37);
    UnderlyingInstrument_37.insert(UnderlyingFlowScheduleType_37.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_37("STRING_2125771963");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_37);
    UnderlyingInstrument_37.insert(UnderlyingInstrRegistry_37.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_37("LOCALMKTDATE_985454650");
    noUnderlyings_0_1.set(UnderlyingIssueDate_37);
    UnderlyingInstrument_37.insert(UnderlyingIssueDate_37.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_37("STRING_344772265");
    noUnderlyings_0_1.set(UnderlyingIssuer_37);
    UnderlyingInstrument_37.insert(UnderlyingIssuer_37.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_37("STRING_948341839");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingLocaleOfIssue_37.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_37("LOCALMKTDATE_566702195");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityDate_37.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_37("MONTHYEAR_1545316913");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityMonthYear_37.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_37("TZTIMEONLY_836492387");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityTime_37.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_37;
    UnderlyingNotionalPercentageOutstanding_37.setString("26.440000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_37);
    UnderlyingInstrument_37.insert(UnderlyingNotionalPercentageOutstanding_37.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_37('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_37);
    UnderlyingInstrument_37.insert(UnderlyingOptAttribute_37.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_37;
    UnderlyingOriginalNotionalPercentageOutstanding_37.setString("39.750000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_37);
    UnderlyingInstrument_37.insert(UnderlyingOriginalNotionalPercentageOutstanding_37.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_37("STRING_1488348528");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_37);
    UnderlyingInstrument_37.insert(UnderlyingPriceUnitOfMeasure_37.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_37;
    UnderlyingPriceUnitOfMeasureQty_37.setString("4639025");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_37);
    UnderlyingInstrument_37.insert(UnderlyingPriceUnitOfMeasureQty_37.getString());
    FIX::UnderlyingProduct UnderlyingProduct_37(122217822);
    noUnderlyings_0_1.set(UnderlyingProduct_37);
    UnderlyingInstrument_37.insert(UnderlyingProduct_37.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_37(311345601);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_37);
    UnderlyingInstrument_37.insert(UnderlyingPutOrCall_37.getString());
    FIX::UnderlyingPx UnderlyingPx_37;
    UnderlyingPx_37.setString("3732617");
    noUnderlyings_0_1.set(UnderlyingPx_37);
    UnderlyingInstrument_37.insert(UnderlyingPx_37.getString());
    FIX::UnderlyingQty UnderlyingQty_37;
    UnderlyingQty_37.setString("15048940");
    noUnderlyings_0_1.set(UnderlyingQty_37);
    UnderlyingInstrument_37.insert(UnderlyingQty_37.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_37("LOCALMKTDATE_401267904");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_37);
    UnderlyingInstrument_37.insert(UnderlyingRedemptionDate_37.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_37("STRING_900867216");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_37);
    UnderlyingInstrument_37.insert(UnderlyingRepoCollateralSecurityType_37.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_37;
    UnderlyingRepurchaseRate_37.setString("75.140000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_37);
    UnderlyingInstrument_37.insert(UnderlyingRepurchaseRate_37.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_37(475561382);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_37);
    UnderlyingInstrument_37.insert(UnderlyingRepurchaseTerm_37.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_37("STRING_1633826651");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_37);
    UnderlyingInstrument_37.insert(UnderlyingRestructuringType_37.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_37("STRING_344806988");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityDesc_37.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_37("EXCHANGE_629474587");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityExchange_37.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_37("STRING_803619544");
    noUnderlyings_0_1.set(UnderlyingSecurityID_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityID_37.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_37("STRING_2114409946");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityIDSource_37.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_37("STRING_1838750946");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_37);
    UnderlyingInstrument_37.insert(UnderlyingSecuritySubType_37.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_37("STRING_1989612675");
    noUnderlyings_0_1.set(UnderlyingSecurityType_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityType_37.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_37("STRING_1360407831");
    noUnderlyings_0_1.set(UnderlyingSeniority_37);
    UnderlyingInstrument_37.insert(UnderlyingSeniority_37.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_37("STRING_140986252");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_37);
    UnderlyingInstrument_37.insert(UnderlyingSettlMethod_37.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_37(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_37);
    UnderlyingInstrument_37.insert(UnderlyingSettlementType_37.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_37;
    UnderlyingStartValue_37.setString("12866504");
    noUnderlyings_0_1.set(UnderlyingStartValue_37);
    UnderlyingInstrument_37.insert(UnderlyingStartValue_37.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_37("STRING_119274567");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingStateOrProvinceOfIssue_37.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_37("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_37);
    UnderlyingInstrument_37.insert(UnderlyingStrikeCurrency_37.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_37;
    UnderlyingStrikePrice_37.setString("10676164");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_37);
    UnderlyingInstrument_37.insert(UnderlyingStrikePrice_37.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_37("STRING_2035377606");
    noUnderlyings_0_1.set(UnderlyingSymbol_37);
    UnderlyingInstrument_37.insert(UnderlyingSymbol_37.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_37("STRING_1029256011");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_37);
    UnderlyingInstrument_37.insert(UnderlyingSymbolSfx_37.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_37("STRING_1904108794");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_37);
    UnderlyingInstrument_37.insert(UnderlyingTimeUnit_37.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_37("STRING_915766603");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_37);
    UnderlyingInstrument_37.insert(UnderlyingUnitOfMeasure_37.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_37;
    UnderlyingUnitOfMeasureQty_37.setString("11542007");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_37);
    UnderlyingInstrument_37.insert(UnderlyingUnitOfMeasureQty_37.getString());
    all_values.push_back(UnderlyingInstrument_37);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_77;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_77("STRING_256631483");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_77);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_77.insert(UnderlyingSecurityAltID_77.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_77("STRING_1618103355");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_77);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_77.insert(UnderlyingSecurityAltIDSource_77.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_78;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_78("STRING_1845126943");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_78);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_78.insert(UnderlyingSecurityAltID_78.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_78("STRING_567977084");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_78);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_78.insert(UnderlyingSecurityAltIDSource_78.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_67;
      FIX::UnderlyingStipType UnderlyingStipType_67("STRING_1202537374");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_67);
      UnderlyingStipulations_NoUnderlyingStips_67.insert(UnderlyingStipType_67.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_67("STRING_969244989");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_67);
      UnderlyingStipulations_NoUnderlyingStips_67.insert(UnderlyingStipValue_67.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_67);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_68;
      FIX::UnderlyingStipType UnderlyingStipType_68("STRING_744748650");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_68);
      UnderlyingStipulations_NoUnderlyingStips_68.insert(UnderlyingStipType_68.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_68("STRING_2085404889");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_68);
      UnderlyingStipulations_NoUnderlyingStips_68.insert(UnderlyingStipValue_68.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_68);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_78;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_78("STRING_231091653");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyID_78.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_78('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyIDSource_78.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_78(2074280958);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyRole_78.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_78);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_153("STRING_249654527");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_153);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153.insert(UnderlyingInstrumentPartySubID_153.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_153(1765548256);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_153);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153.insert(UnderlyingInstrumentPartySubIDType_153.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_154("STRING_876840225");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_154);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154.insert(UnderlyingInstrumentPartySubID_154.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_154(1610062359);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_154);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154.insert(UnderlyingInstrumentPartySubIDType_154.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_79;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_79("STRING_1906534508");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyID_79.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_79('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyIDSource_79.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_79(749229191);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyRole_79.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_79);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_155("STRING_681252750");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_155);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155.insert(UnderlyingInstrumentPartySubID_155.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_155(233168289);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_155);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155.insert(UnderlyingInstrumentPartySubIDType_155.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_156("STRING_945941834");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_156);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156.insert(UnderlyingInstrumentPartySubID_156.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_156(569146708);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_156);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156.insert(UnderlyingInstrumentPartySubIDType_156.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_157("STRING_1262424300");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_157);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157.insert(UnderlyingInstrumentPartySubID_157.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_157(702566980);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_157);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157.insert(UnderlyingInstrumentPartySubIDType_157.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_80;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_80("STRING_1484913311");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyID_80.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_80('2');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyIDSource_80.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_80(277992453);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyRole_80.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_80);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_158("STRING_1887244767");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_158);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158.insert(UnderlyingInstrumentPartySubID_158.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_158(2123119396);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_158);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158.insert(UnderlyingInstrumentPartySubIDType_158.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::DontKnowTrade::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_159("STRING_162038231");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_159);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159.insert(UnderlyingInstrumentPartySubID_159.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_159(1731126200);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_159);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159.insert(UnderlyingInstrumentPartySubIDType_159.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
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
