#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/IOI.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( IOI, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::IOI msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> IOI_0;
  FIX::Currency Currency_21("GBP");
  msg.set(Currency_21);
  IOI_0.insert(Currency_21.getString());
  FIX::EncodedText EncodedText_40("DATA_161647180");
  msg.set(EncodedText_40);
  IOI_0.insert(EncodedText_40.getString());
  FIX::EncodedTextLen EncodedTextLen_40(532694626);
  msg.set(EncodedTextLen_40);
  IOI_0.insert(EncodedTextLen_40.getString());
  FIX::IOIID IOIID_1("STRING_1725353440");
  msg.set(IOIID_1);
  IOI_0.insert(IOIID_1.getString());
  FIX::IOINaturalFlag IOINaturalFlag_0(true);
  msg.set(IOINaturalFlag_0);
  IOI_0.insert(IOINaturalFlag_0.getString());
  FIX::IOIQltyInd IOIQltyInd_0('M');
  msg.set(IOIQltyInd_0);
  IOI_0.insert(IOIQltyInd_0.getString());
  FIX::IOIQty IOIQty_0("STRING_S");
  msg.set(IOIQty_0);
  IOI_0.insert(IOIQty_0.getString());
  FIX::IOIRefID IOIRefID_0("STRING_1360185922");
  msg.set(IOIRefID_0);
  IOI_0.insert(IOIRefID_0.getString());
  FIX::IOITransType IOITransType_0('C');
  msg.set(IOITransType_0);
  IOI_0.insert(IOITransType_0.getString());
  FIX::Price Price_11;
  Price_11.setString("5594762");
  msg.set(Price_11);
  IOI_0.insert(Price_11.getString());
  FIX::PriceType PriceType_21(13);
  msg.set(PriceType_21);
  IOI_0.insert(PriceType_21.getString());
  FIX::QtyType QtyType_15(2);
  msg.set(QtyType_15);
  IOI_0.insert(QtyType_15.getString());
  FIX::Side Side_22('8');
  msg.set(Side_22);
  IOI_0.insert(Side_22.getString());
  FIX::Text Text_40("STRING_1234450038");
  msg.set(Text_40);
  IOI_0.insert(Text_40.getString());
  FIX::TransactTime TransactTime_19(FIX::UTCTIMESTAMP(12, 19, 21, 4, 9, 2012));
  msg.set(TransactTime_19);
  IOI_0.insert(TransactTime_19.getString());
  FIX::URLLink URLLink_1("STRING_2000644333");
  msg.set(URLLink_1);
  IOI_0.insert(URLLink_1.getString());
  FIX::ValidUntilTime ValidUntilTime_0(FIX::UTCTIMESTAMP(9, 53, 41, 10, 2, 2008));
  msg.set(ValidUntilTime_0);
  IOI_0.insert(ValidUntilTime_0.getString());
  all_values.push_back(IOI_0);

  all_compo_names.insert("IOI");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_5;
  FIX::ApplID ApplID_5("STRING_1771640869");
  msg.set(ApplID_5);
  ApplicationSequenceControl_5.insert(ApplID_5.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_5(1570611637);
  msg.set(ApplLastSeqNum_5);
  ApplicationSequenceControl_5.insert(ApplLastSeqNum_5.getString());
  FIX::ApplResendFlag ApplResendFlag_5(false);
  msg.set(ApplResendFlag_5);
  ApplicationSequenceControl_5.insert(ApplResendFlag_5.getString());
  FIX::ApplSeqNum ApplSeqNum_5(1933288049);
  msg.set(ApplSeqNum_5);
  ApplicationSequenceControl_5.insert(ApplSeqNum_5.getString());
  all_values.push_back(ApplicationSequenceControl_5);
  all_compo_names.insert("ApplicationSequenceControl");

  // FinancingDetails
  multiset<string> FinancingDetails_11;
  FIX::AgreementCurrency AgreementCurrency_11("EUR");
  msg.set(AgreementCurrency_11);
  FinancingDetails_11.insert(AgreementCurrency_11.getString());
  FIX::AgreementDate AgreementDate_11("LOCALMKTDATE_1701609522");
  msg.set(AgreementDate_11);
  FinancingDetails_11.insert(AgreementDate_11.getString());
  FIX::AgreementDesc AgreementDesc_11("STRING_1058269220");
  msg.set(AgreementDesc_11);
  FinancingDetails_11.insert(AgreementDesc_11.getString());
  FIX::AgreementID AgreementID_11("STRING_156227709");
  msg.set(AgreementID_11);
  FinancingDetails_11.insert(AgreementID_11.getString());
  FIX::DeliveryType DeliveryType_11(0);
  msg.set(DeliveryType_11);
  FinancingDetails_11.insert(DeliveryType_11.getString());
  FIX::EndDate EndDate_11("LOCALMKTDATE_723492839");
  msg.set(EndDate_11);
  FinancingDetails_11.insert(EndDate_11.getString());
  FIX::MarginRatio MarginRatio_11;
  MarginRatio_11.setString("39.970000");
  msg.set(MarginRatio_11);
  FinancingDetails_11.insert(MarginRatio_11.getString());
  FIX::StartDate StartDate_11("LOCALMKTDATE_741729102");
  msg.set(StartDate_11);
  FinancingDetails_11.insert(StartDate_11.getString());
  FIX::TerminationType TerminationType_11(2);
  msg.set(TerminationType_11);
  FinancingDetails_11.insert(TerminationType_11.getString());
  all_values.push_back(FinancingDetails_11);
  all_compo_names.insert("FinancingDetails");

  // IOIQualGrp
  // Group IOIQualGrp.NoIOIQualifiers
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_0;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_0;
    FIX::IOIQualifier IOIQualifier_0('A');
    noIOIQualifiers_0_0.set(IOIQualifier_0);
    IOIQualGrp_NoIOIQualifiers_0.insert(IOIQualifier_0.getString());
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_0);
    all_compo_names.insert("IOIQualGrp.NoIOIQualifiers");

    msg.addGroup(noIOIQualifiers_0_0);
  }
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_1;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_1;
    FIX::IOIQualifier IOIQualifier_1('V');
    noIOIQualifiers_0_1.set(IOIQualifier_1);
    IOIQualGrp_NoIOIQualifiers_1.insert(IOIQualifier_1.getString());
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_1);
    all_compo_names.insert("IOIQualGrp.NoIOIQualifiers");

    msg.addGroup(noIOIQualifiers_0_1);
  }
  // InstrmtLegIOIGrp
  // Group InstrmtLegIOIGrp.NoLegs
  {
    FIX50SP2::IOI::NoLegs noLegs_0_0;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_0;
    FIX::LegIOIQty LegIOIQty_0("STRING_2142357620");
    noLegs_0_0.set(LegIOIQty_0);
    InstrmtLegIOIGrp_NoLegs_0.insert(LegIOIQty_0.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_0);
    all_compo_names.insert("InstrmtLegIOIGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_46;
    FIX::EncodedLegIssuer EncodedLegIssuer_46("DATA_1955662222");
    noLegs_0_0.set(EncodedLegIssuer_46);
    InstrumentLeg_46.insert(EncodedLegIssuer_46.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_46(2052938917);
    noLegs_0_0.set(EncodedLegIssuerLen_46);
    InstrumentLeg_46.insert(EncodedLegIssuerLen_46.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_46("DATA_1974780380");
    noLegs_0_0.set(EncodedLegSecurityDesc_46);
    InstrumentLeg_46.insert(EncodedLegSecurityDesc_46.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_46(1721010110);
    noLegs_0_0.set(EncodedLegSecurityDescLen_46);
    InstrumentLeg_46.insert(EncodedLegSecurityDescLen_46.getString());
    FIX::LegCFICode LegCFICode_46("STRING_1906099602");
    noLegs_0_0.set(LegCFICode_46);
    InstrumentLeg_46.insert(LegCFICode_46.getString());
    FIX::LegContractMultiplier LegContractMultiplier_46;
    LegContractMultiplier_46.setString("1350560");
    noLegs_0_0.set(LegContractMultiplier_46);
    InstrumentLeg_46.insert(LegContractMultiplier_46.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_46(1151108344);
    noLegs_0_0.set(LegContractMultiplierUnit_46);
    InstrumentLeg_46.insert(LegContractMultiplierUnit_46.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_46("MONTHYEAR_450863067");
    noLegs_0_0.set(LegContractSettlMonth_46);
    InstrumentLeg_46.insert(LegContractSettlMonth_46.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_46("COUNTRY_1897267173");
    noLegs_0_0.set(LegCountryOfIssue_46);
    InstrumentLeg_46.insert(LegCountryOfIssue_46.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_46("LOCALMKTDATE_1102082102");
    noLegs_0_0.set(LegCouponPaymentDate_46);
    InstrumentLeg_46.insert(LegCouponPaymentDate_46.getString());
    FIX::LegCouponRate LegCouponRate_46;
    LegCouponRate_46.setString("5.480000");
    noLegs_0_0.set(LegCouponRate_46);
    InstrumentLeg_46.insert(LegCouponRate_46.getString());
    FIX::LegCreditRating LegCreditRating_46("STRING_385993029");
    noLegs_0_0.set(LegCreditRating_46);
    InstrumentLeg_46.insert(LegCreditRating_46.getString());
    FIX::LegCurrency LegCurrency_46("JPY");
    noLegs_0_0.set(LegCurrency_46);
    InstrumentLeg_46.insert(LegCurrency_46.getString());
    FIX::LegDatedDate LegDatedDate_46("LOCALMKTDATE_1961646710");
    noLegs_0_0.set(LegDatedDate_46);
    InstrumentLeg_46.insert(LegDatedDate_46.getString());
    FIX::LegExerciseStyle LegExerciseStyle_46(512043725);
    noLegs_0_0.set(LegExerciseStyle_46);
    InstrumentLeg_46.insert(LegExerciseStyle_46.getString());
    FIX::LegFactor LegFactor_46;
    LegFactor_46.setString("4685111");
    noLegs_0_0.set(LegFactor_46);
    InstrumentLeg_46.insert(LegFactor_46.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_46(967686536);
    noLegs_0_0.set(LegFlowScheduleType_46);
    InstrumentLeg_46.insert(LegFlowScheduleType_46.getString());
    FIX::LegInstrRegistry LegInstrRegistry_46("STRING_66169599");
    noLegs_0_0.set(LegInstrRegistry_46);
    InstrumentLeg_46.insert(LegInstrRegistry_46.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_46("LOCALMKTDATE_1526780374");
    noLegs_0_0.set(LegInterestAccrualDate_46);
    InstrumentLeg_46.insert(LegInterestAccrualDate_46.getString());
    FIX::LegIssueDate LegIssueDate_46("LOCALMKTDATE_1123914245");
    noLegs_0_0.set(LegIssueDate_46);
    InstrumentLeg_46.insert(LegIssueDate_46.getString());
    FIX::LegIssuer LegIssuer_46("STRING_980481395");
    noLegs_0_0.set(LegIssuer_46);
    InstrumentLeg_46.insert(LegIssuer_46.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_46("STRING_102789565");
    noLegs_0_0.set(LegLocaleOfIssue_46);
    InstrumentLeg_46.insert(LegLocaleOfIssue_46.getString());
    FIX::LegMaturityDate LegMaturityDate_46("LOCALMKTDATE_1839618243");
    noLegs_0_0.set(LegMaturityDate_46);
    InstrumentLeg_46.insert(LegMaturityDate_46.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_46("MONTHYEAR_1722210497");
    noLegs_0_0.set(LegMaturityMonthYear_46);
    InstrumentLeg_46.insert(LegMaturityMonthYear_46.getString());
    FIX::LegMaturityTime LegMaturityTime_46("TZTIMEONLY_1567417010");
    noLegs_0_0.set(LegMaturityTime_46);
    InstrumentLeg_46.insert(LegMaturityTime_46.getString());
    FIX::LegOptAttribute LegOptAttribute_46('7');
    noLegs_0_0.set(LegOptAttribute_46);
    InstrumentLeg_46.insert(LegOptAttribute_46.getString());
    FIX::LegOptionRatio LegOptionRatio_46;
    LegOptionRatio_46.setString("15509059");
    noLegs_0_0.set(LegOptionRatio_46);
    InstrumentLeg_46.insert(LegOptionRatio_46.getString());
    FIX::LegPool LegPool_46("STRING_574448803");
    noLegs_0_0.set(LegPool_46);
    InstrumentLeg_46.insert(LegPool_46.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_46("STRING_1590637129");
    noLegs_0_0.set(LegPriceUnitOfMeasure_46);
    InstrumentLeg_46.insert(LegPriceUnitOfMeasure_46.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_46;
    LegPriceUnitOfMeasureQty_46.setString("15457799");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_46);
    InstrumentLeg_46.insert(LegPriceUnitOfMeasureQty_46.getString());
    FIX::LegProduct LegProduct_46(382627377);
    noLegs_0_0.set(LegProduct_46);
    InstrumentLeg_46.insert(LegProduct_46.getString());
    FIX::LegPutOrCall LegPutOrCall_46(1496092398);
    noLegs_0_0.set(LegPutOrCall_46);
    InstrumentLeg_46.insert(LegPutOrCall_46.getString());
    FIX::LegRatioQty LegRatioQty_46;
    LegRatioQty_46.setString("13730766");
    noLegs_0_0.set(LegRatioQty_46);
    InstrumentLeg_46.insert(LegRatioQty_46.getString());
    FIX::LegRedemptionDate LegRedemptionDate_46("LOCALMKTDATE_2103637488");
    noLegs_0_0.set(LegRedemptionDate_46);
    InstrumentLeg_46.insert(LegRedemptionDate_46.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_46("STRING_1254708353");
    noLegs_0_0.set(LegRepoCollateralSecurityType_46);
    InstrumentLeg_46.insert(LegRepoCollateralSecurityType_46.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_46;
    LegRepurchaseRate_46.setString("27.860000");
    noLegs_0_0.set(LegRepurchaseRate_46);
    InstrumentLeg_46.insert(LegRepurchaseRate_46.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_46(1107262184);
    noLegs_0_0.set(LegRepurchaseTerm_46);
    InstrumentLeg_46.insert(LegRepurchaseTerm_46.getString());
    FIX::LegSecurityDesc LegSecurityDesc_46("STRING_1705571420");
    noLegs_0_0.set(LegSecurityDesc_46);
    InstrumentLeg_46.insert(LegSecurityDesc_46.getString());
    FIX::LegSecurityExchange LegSecurityExchange_46("EXCHANGE_1257916311");
    noLegs_0_0.set(LegSecurityExchange_46);
    InstrumentLeg_46.insert(LegSecurityExchange_46.getString());
    FIX::LegSecurityID LegSecurityID_46("STRING_61860638");
    noLegs_0_0.set(LegSecurityID_46);
    InstrumentLeg_46.insert(LegSecurityID_46.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_46("STRING_647648321");
    noLegs_0_0.set(LegSecurityIDSource_46);
    InstrumentLeg_46.insert(LegSecurityIDSource_46.getString());
    FIX::LegSecuritySubType LegSecuritySubType_46("STRING_1643909340");
    noLegs_0_0.set(LegSecuritySubType_46);
    InstrumentLeg_46.insert(LegSecuritySubType_46.getString());
    FIX::LegSecurityType LegSecurityType_46("STRING_788099961");
    noLegs_0_0.set(LegSecurityType_46);
    InstrumentLeg_46.insert(LegSecurityType_46.getString());
    FIX::LegSide LegSide_46('1');
    noLegs_0_0.set(LegSide_46);
    InstrumentLeg_46.insert(LegSide_46.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_46("STRING_1458072403");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_46);
    InstrumentLeg_46.insert(LegStateOrProvinceOfIssue_46.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_46("JPY");
    noLegs_0_0.set(LegStrikeCurrency_46);
    InstrumentLeg_46.insert(LegStrikeCurrency_46.getString());
    FIX::LegStrikePrice LegStrikePrice_46;
    LegStrikePrice_46.setString("2782752");
    noLegs_0_0.set(LegStrikePrice_46);
    InstrumentLeg_46.insert(LegStrikePrice_46.getString());
    FIX::LegSymbol LegSymbol_46("STRING_1366313285");
    noLegs_0_0.set(LegSymbol_46);
    InstrumentLeg_46.insert(LegSymbol_46.getString());
    FIX::LegSymbolSfx LegSymbolSfx_46("STRING_1008144738");
    noLegs_0_0.set(LegSymbolSfx_46);
    InstrumentLeg_46.insert(LegSymbolSfx_46.getString());
    FIX::LegTimeUnit LegTimeUnit_46("STRING_1402189536");
    noLegs_0_0.set(LegTimeUnit_46);
    InstrumentLeg_46.insert(LegTimeUnit_46.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_46("STRING_199311033");
    noLegs_0_0.set(LegUnitOfMeasure_46);
    InstrumentLeg_46.insert(LegUnitOfMeasure_46.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_46;
    LegUnitOfMeasureQty_46.setString("11109343");
    noLegs_0_0.set(LegUnitOfMeasureQty_46);
    InstrumentLeg_46.insert(LegUnitOfMeasureQty_46.getString());
    all_values.push_back(InstrumentLeg_46);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_89;
      FIX::LegSecurityAltID LegSecurityAltID_89("STRING_1921521530");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_89);
      LegSecAltIDGrp_NoLegSecurityAltID_89.insert(LegSecurityAltID_89.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_89("STRING_530867666");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_89);
      LegSecAltIDGrp_NoLegSecurityAltID_89.insert(LegSecurityAltIDSource_89.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_89);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_90;
      FIX::LegSecurityAltID LegSecurityAltID_90("STRING_1794466875");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_90);
      LegSecAltIDGrp_NoLegSecurityAltID_90.insert(LegSecurityAltID_90.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_90("STRING_1324943872");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_90);
      LegSecAltIDGrp_NoLegSecurityAltID_90.insert(LegSecurityAltIDSource_90.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_90);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_1;
      FIX::LegStipulationType LegStipulationType_1("STRING_1237620356");
      noLegStipulations_0_1_0.set(LegStipulationType_1);
      LegStipulations_NoLegStipulations_1.insert(LegStipulationType_1.getString());
      FIX::LegStipulationValue LegStipulationValue_1("STRING_723240186");
      noLegStipulations_0_1_0.set(LegStipulationValue_1);
      LegStipulations_NoLegStipulations_1.insert(LegStipulationValue_1.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_1);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_1;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_1;
    FIX::LegIOIQty LegIOIQty_1("STRING_1487943847");
    noLegs_0_1.set(LegIOIQty_1);
    InstrmtLegIOIGrp_NoLegs_1.insert(LegIOIQty_1.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_1);
    all_compo_names.insert("InstrmtLegIOIGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_47;
    FIX::EncodedLegIssuer EncodedLegIssuer_47("DATA_586229107");
    noLegs_0_1.set(EncodedLegIssuer_47);
    InstrumentLeg_47.insert(EncodedLegIssuer_47.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_47(2096316881);
    noLegs_0_1.set(EncodedLegIssuerLen_47);
    InstrumentLeg_47.insert(EncodedLegIssuerLen_47.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_47("DATA_1444097687");
    noLegs_0_1.set(EncodedLegSecurityDesc_47);
    InstrumentLeg_47.insert(EncodedLegSecurityDesc_47.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_47(1840937460);
    noLegs_0_1.set(EncodedLegSecurityDescLen_47);
    InstrumentLeg_47.insert(EncodedLegSecurityDescLen_47.getString());
    FIX::LegCFICode LegCFICode_47("STRING_1456966019");
    noLegs_0_1.set(LegCFICode_47);
    InstrumentLeg_47.insert(LegCFICode_47.getString());
    FIX::LegContractMultiplier LegContractMultiplier_47;
    LegContractMultiplier_47.setString("4038762");
    noLegs_0_1.set(LegContractMultiplier_47);
    InstrumentLeg_47.insert(LegContractMultiplier_47.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_47(1399025232);
    noLegs_0_1.set(LegContractMultiplierUnit_47);
    InstrumentLeg_47.insert(LegContractMultiplierUnit_47.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_47("MONTHYEAR_567398682");
    noLegs_0_1.set(LegContractSettlMonth_47);
    InstrumentLeg_47.insert(LegContractSettlMonth_47.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_47("COUNTRY_465736861");
    noLegs_0_1.set(LegCountryOfIssue_47);
    InstrumentLeg_47.insert(LegCountryOfIssue_47.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_47("LOCALMKTDATE_2046673553");
    noLegs_0_1.set(LegCouponPaymentDate_47);
    InstrumentLeg_47.insert(LegCouponPaymentDate_47.getString());
    FIX::LegCouponRate LegCouponRate_47;
    LegCouponRate_47.setString("43.740000");
    noLegs_0_1.set(LegCouponRate_47);
    InstrumentLeg_47.insert(LegCouponRate_47.getString());
    FIX::LegCreditRating LegCreditRating_47("STRING_1253836822");
    noLegs_0_1.set(LegCreditRating_47);
    InstrumentLeg_47.insert(LegCreditRating_47.getString());
    FIX::LegCurrency LegCurrency_47("CAN");
    noLegs_0_1.set(LegCurrency_47);
    InstrumentLeg_47.insert(LegCurrency_47.getString());
    FIX::LegDatedDate LegDatedDate_47("LOCALMKTDATE_406496861");
    noLegs_0_1.set(LegDatedDate_47);
    InstrumentLeg_47.insert(LegDatedDate_47.getString());
    FIX::LegExerciseStyle LegExerciseStyle_47(540891129);
    noLegs_0_1.set(LegExerciseStyle_47);
    InstrumentLeg_47.insert(LegExerciseStyle_47.getString());
    FIX::LegFactor LegFactor_47;
    LegFactor_47.setString("18001720");
    noLegs_0_1.set(LegFactor_47);
    InstrumentLeg_47.insert(LegFactor_47.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_47(1772810146);
    noLegs_0_1.set(LegFlowScheduleType_47);
    InstrumentLeg_47.insert(LegFlowScheduleType_47.getString());
    FIX::LegInstrRegistry LegInstrRegistry_47("STRING_1549035867");
    noLegs_0_1.set(LegInstrRegistry_47);
    InstrumentLeg_47.insert(LegInstrRegistry_47.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_47("LOCALMKTDATE_1054877957");
    noLegs_0_1.set(LegInterestAccrualDate_47);
    InstrumentLeg_47.insert(LegInterestAccrualDate_47.getString());
    FIX::LegIssueDate LegIssueDate_47("LOCALMKTDATE_1972121179");
    noLegs_0_1.set(LegIssueDate_47);
    InstrumentLeg_47.insert(LegIssueDate_47.getString());
    FIX::LegIssuer LegIssuer_47("STRING_512486523");
    noLegs_0_1.set(LegIssuer_47);
    InstrumentLeg_47.insert(LegIssuer_47.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_47("STRING_1718440");
    noLegs_0_1.set(LegLocaleOfIssue_47);
    InstrumentLeg_47.insert(LegLocaleOfIssue_47.getString());
    FIX::LegMaturityDate LegMaturityDate_47("LOCALMKTDATE_1746159062");
    noLegs_0_1.set(LegMaturityDate_47);
    InstrumentLeg_47.insert(LegMaturityDate_47.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_47("MONTHYEAR_1043354189");
    noLegs_0_1.set(LegMaturityMonthYear_47);
    InstrumentLeg_47.insert(LegMaturityMonthYear_47.getString());
    FIX::LegMaturityTime LegMaturityTime_47("TZTIMEONLY_1796185316");
    noLegs_0_1.set(LegMaturityTime_47);
    InstrumentLeg_47.insert(LegMaturityTime_47.getString());
    FIX::LegOptAttribute LegOptAttribute_47('9');
    noLegs_0_1.set(LegOptAttribute_47);
    InstrumentLeg_47.insert(LegOptAttribute_47.getString());
    FIX::LegOptionRatio LegOptionRatio_47;
    LegOptionRatio_47.setString("11870");
    noLegs_0_1.set(LegOptionRatio_47);
    InstrumentLeg_47.insert(LegOptionRatio_47.getString());
    FIX::LegPool LegPool_47("STRING_886322024");
    noLegs_0_1.set(LegPool_47);
    InstrumentLeg_47.insert(LegPool_47.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_47("STRING_1646859473");
    noLegs_0_1.set(LegPriceUnitOfMeasure_47);
    InstrumentLeg_47.insert(LegPriceUnitOfMeasure_47.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_47;
    LegPriceUnitOfMeasureQty_47.setString("14891308");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_47);
    InstrumentLeg_47.insert(LegPriceUnitOfMeasureQty_47.getString());
    FIX::LegProduct LegProduct_47(1472551131);
    noLegs_0_1.set(LegProduct_47);
    InstrumentLeg_47.insert(LegProduct_47.getString());
    FIX::LegPutOrCall LegPutOrCall_47(1595692706);
    noLegs_0_1.set(LegPutOrCall_47);
    InstrumentLeg_47.insert(LegPutOrCall_47.getString());
    FIX::LegRatioQty LegRatioQty_47;
    LegRatioQty_47.setString("7857448");
    noLegs_0_1.set(LegRatioQty_47);
    InstrumentLeg_47.insert(LegRatioQty_47.getString());
    FIX::LegRedemptionDate LegRedemptionDate_47("LOCALMKTDATE_1166004943");
    noLegs_0_1.set(LegRedemptionDate_47);
    InstrumentLeg_47.insert(LegRedemptionDate_47.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_47("STRING_905175077");
    noLegs_0_1.set(LegRepoCollateralSecurityType_47);
    InstrumentLeg_47.insert(LegRepoCollateralSecurityType_47.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_47;
    LegRepurchaseRate_47.setString("11.190000");
    noLegs_0_1.set(LegRepurchaseRate_47);
    InstrumentLeg_47.insert(LegRepurchaseRate_47.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_47(417546528);
    noLegs_0_1.set(LegRepurchaseTerm_47);
    InstrumentLeg_47.insert(LegRepurchaseTerm_47.getString());
    FIX::LegSecurityDesc LegSecurityDesc_47("STRING_1472573759");
    noLegs_0_1.set(LegSecurityDesc_47);
    InstrumentLeg_47.insert(LegSecurityDesc_47.getString());
    FIX::LegSecurityExchange LegSecurityExchange_47("EXCHANGE_1655357980");
    noLegs_0_1.set(LegSecurityExchange_47);
    InstrumentLeg_47.insert(LegSecurityExchange_47.getString());
    FIX::LegSecurityID LegSecurityID_47("STRING_316736433");
    noLegs_0_1.set(LegSecurityID_47);
    InstrumentLeg_47.insert(LegSecurityID_47.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_47("STRING_1536398133");
    noLegs_0_1.set(LegSecurityIDSource_47);
    InstrumentLeg_47.insert(LegSecurityIDSource_47.getString());
    FIX::LegSecuritySubType LegSecuritySubType_47("STRING_761711155");
    noLegs_0_1.set(LegSecuritySubType_47);
    InstrumentLeg_47.insert(LegSecuritySubType_47.getString());
    FIX::LegSecurityType LegSecurityType_47("STRING_1376263198");
    noLegs_0_1.set(LegSecurityType_47);
    InstrumentLeg_47.insert(LegSecurityType_47.getString());
    FIX::LegSide LegSide_47('9');
    noLegs_0_1.set(LegSide_47);
    InstrumentLeg_47.insert(LegSide_47.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_47("STRING_1168208016");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_47);
    InstrumentLeg_47.insert(LegStateOrProvinceOfIssue_47.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_47("CAN");
    noLegs_0_1.set(LegStrikeCurrency_47);
    InstrumentLeg_47.insert(LegStrikeCurrency_47.getString());
    FIX::LegStrikePrice LegStrikePrice_47;
    LegStrikePrice_47.setString("7935345");
    noLegs_0_1.set(LegStrikePrice_47);
    InstrumentLeg_47.insert(LegStrikePrice_47.getString());
    FIX::LegSymbol LegSymbol_47("STRING_1318706546");
    noLegs_0_1.set(LegSymbol_47);
    InstrumentLeg_47.insert(LegSymbol_47.getString());
    FIX::LegSymbolSfx LegSymbolSfx_47("STRING_1618377640");
    noLegs_0_1.set(LegSymbolSfx_47);
    InstrumentLeg_47.insert(LegSymbolSfx_47.getString());
    FIX::LegTimeUnit LegTimeUnit_47("STRING_618172046");
    noLegs_0_1.set(LegTimeUnit_47);
    InstrumentLeg_47.insert(LegTimeUnit_47.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_47("STRING_1831193069");
    noLegs_0_1.set(LegUnitOfMeasure_47);
    InstrumentLeg_47.insert(LegUnitOfMeasure_47.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_47;
    LegUnitOfMeasureQty_47.setString("16200960");
    noLegs_0_1.set(LegUnitOfMeasureQty_47);
    InstrumentLeg_47.insert(LegUnitOfMeasureQty_47.getString());
    all_values.push_back(InstrumentLeg_47);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_91;
      FIX::LegSecurityAltID LegSecurityAltID_91("STRING_727063610");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_91);
      LegSecAltIDGrp_NoLegSecurityAltID_91.insert(LegSecurityAltID_91.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_91("STRING_1268797749");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_91);
      LegSecAltIDGrp_NoLegSecurityAltID_91.insert(LegSecurityAltIDSource_91.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_91);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_92;
      FIX::LegSecurityAltID LegSecurityAltID_92("STRING_1140466746");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_92);
      LegSecAltIDGrp_NoLegSecurityAltID_92.insert(LegSecurityAltID_92.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_92("STRING_728250621");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_92);
      LegSecAltIDGrp_NoLegSecurityAltID_92.insert(LegSecurityAltIDSource_92.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_92);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_93;
      FIX::LegSecurityAltID LegSecurityAltID_93("STRING_7636125");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_93);
      LegSecAltIDGrp_NoLegSecurityAltID_93.insert(LegSecurityAltID_93.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_93("STRING_639842571");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_93);
      LegSecAltIDGrp_NoLegSecurityAltID_93.insert(LegSecurityAltIDSource_93.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_93);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_2;
      FIX::LegStipulationType LegStipulationType_2("STRING_1480187257");
      noLegStipulations_1_1_0.set(LegStipulationType_2);
      LegStipulations_NoLegStipulations_2.insert(LegStipulationType_2.getString());
      FIX::LegStipulationValue LegStipulationValue_2("STRING_88051629");
      noLegStipulations_1_1_0.set(LegStipulationValue_2);
      LegStipulations_NoLegStipulations_2.insert(LegStipulationValue_2.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_2);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_3;
      FIX::LegStipulationType LegStipulationType_3("STRING_855642727");
      noLegStipulations_1_1_1.set(LegStipulationType_3);
      LegStipulations_NoLegStipulations_3.insert(LegStipulationType_3.getString());
      FIX::LegStipulationValue LegStipulationValue_3("STRING_498708552");
      noLegStipulations_1_1_1.set(LegStipulationValue_3);
      LegStipulations_NoLegStipulations_3.insert(LegStipulationValue_3.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_3);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_4;
      FIX::LegStipulationType LegStipulationType_4("STRING_993226706");
      noLegStipulations_1_1_2.set(LegStipulationType_4);
      LegStipulations_NoLegStipulations_4.insert(LegStipulationType_4.getString());
      FIX::LegStipulationValue LegStipulationValue_4("STRING_2045263846");
      noLegStipulations_1_1_2.set(LegStipulationValue_4);
      LegStipulations_NoLegStipulations_4.insert(LegStipulationValue_4.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_4);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_2;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_2;
    FIX::LegIOIQty LegIOIQty_2("STRING_916255080");
    noLegs_0_2.set(LegIOIQty_2);
    InstrmtLegIOIGrp_NoLegs_2.insert(LegIOIQty_2.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_2);
    all_compo_names.insert("InstrmtLegIOIGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_48;
    FIX::EncodedLegIssuer EncodedLegIssuer_48("DATA_318316817");
    noLegs_0_2.set(EncodedLegIssuer_48);
    InstrumentLeg_48.insert(EncodedLegIssuer_48.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_48(1553138179);
    noLegs_0_2.set(EncodedLegIssuerLen_48);
    InstrumentLeg_48.insert(EncodedLegIssuerLen_48.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_48("DATA_1232991514");
    noLegs_0_2.set(EncodedLegSecurityDesc_48);
    InstrumentLeg_48.insert(EncodedLegSecurityDesc_48.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_48(1854714951);
    noLegs_0_2.set(EncodedLegSecurityDescLen_48);
    InstrumentLeg_48.insert(EncodedLegSecurityDescLen_48.getString());
    FIX::LegCFICode LegCFICode_48("STRING_167365686");
    noLegs_0_2.set(LegCFICode_48);
    InstrumentLeg_48.insert(LegCFICode_48.getString());
    FIX::LegContractMultiplier LegContractMultiplier_48;
    LegContractMultiplier_48.setString("4617710");
    noLegs_0_2.set(LegContractMultiplier_48);
    InstrumentLeg_48.insert(LegContractMultiplier_48.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_48(618042566);
    noLegs_0_2.set(LegContractMultiplierUnit_48);
    InstrumentLeg_48.insert(LegContractMultiplierUnit_48.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_48("MONTHYEAR_1335573702");
    noLegs_0_2.set(LegContractSettlMonth_48);
    InstrumentLeg_48.insert(LegContractSettlMonth_48.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_48("COUNTRY_231441743");
    noLegs_0_2.set(LegCountryOfIssue_48);
    InstrumentLeg_48.insert(LegCountryOfIssue_48.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_48("LOCALMKTDATE_1181542249");
    noLegs_0_2.set(LegCouponPaymentDate_48);
    InstrumentLeg_48.insert(LegCouponPaymentDate_48.getString());
    FIX::LegCouponRate LegCouponRate_48;
    LegCouponRate_48.setString("82.160000");
    noLegs_0_2.set(LegCouponRate_48);
    InstrumentLeg_48.insert(LegCouponRate_48.getString());
    FIX::LegCreditRating LegCreditRating_48("STRING_1550148289");
    noLegs_0_2.set(LegCreditRating_48);
    InstrumentLeg_48.insert(LegCreditRating_48.getString());
    FIX::LegCurrency LegCurrency_48("GBP");
    noLegs_0_2.set(LegCurrency_48);
    InstrumentLeg_48.insert(LegCurrency_48.getString());
    FIX::LegDatedDate LegDatedDate_48("LOCALMKTDATE_1233857711");
    noLegs_0_2.set(LegDatedDate_48);
    InstrumentLeg_48.insert(LegDatedDate_48.getString());
    FIX::LegExerciseStyle LegExerciseStyle_48(125048675);
    noLegs_0_2.set(LegExerciseStyle_48);
    InstrumentLeg_48.insert(LegExerciseStyle_48.getString());
    FIX::LegFactor LegFactor_48;
    LegFactor_48.setString("8166440");
    noLegs_0_2.set(LegFactor_48);
    InstrumentLeg_48.insert(LegFactor_48.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_48(1960921321);
    noLegs_0_2.set(LegFlowScheduleType_48);
    InstrumentLeg_48.insert(LegFlowScheduleType_48.getString());
    FIX::LegInstrRegistry LegInstrRegistry_48("STRING_1393846424");
    noLegs_0_2.set(LegInstrRegistry_48);
    InstrumentLeg_48.insert(LegInstrRegistry_48.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_48("LOCALMKTDATE_1957110821");
    noLegs_0_2.set(LegInterestAccrualDate_48);
    InstrumentLeg_48.insert(LegInterestAccrualDate_48.getString());
    FIX::LegIssueDate LegIssueDate_48("LOCALMKTDATE_541688294");
    noLegs_0_2.set(LegIssueDate_48);
    InstrumentLeg_48.insert(LegIssueDate_48.getString());
    FIX::LegIssuer LegIssuer_48("STRING_1401482549");
    noLegs_0_2.set(LegIssuer_48);
    InstrumentLeg_48.insert(LegIssuer_48.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_48("STRING_449469744");
    noLegs_0_2.set(LegLocaleOfIssue_48);
    InstrumentLeg_48.insert(LegLocaleOfIssue_48.getString());
    FIX::LegMaturityDate LegMaturityDate_48("LOCALMKTDATE_611586125");
    noLegs_0_2.set(LegMaturityDate_48);
    InstrumentLeg_48.insert(LegMaturityDate_48.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_48("MONTHYEAR_734186158");
    noLegs_0_2.set(LegMaturityMonthYear_48);
    InstrumentLeg_48.insert(LegMaturityMonthYear_48.getString());
    FIX::LegMaturityTime LegMaturityTime_48("TZTIMEONLY_537521374");
    noLegs_0_2.set(LegMaturityTime_48);
    InstrumentLeg_48.insert(LegMaturityTime_48.getString());
    FIX::LegOptAttribute LegOptAttribute_48('1');
    noLegs_0_2.set(LegOptAttribute_48);
    InstrumentLeg_48.insert(LegOptAttribute_48.getString());
    FIX::LegOptionRatio LegOptionRatio_48;
    LegOptionRatio_48.setString("12328947");
    noLegs_0_2.set(LegOptionRatio_48);
    InstrumentLeg_48.insert(LegOptionRatio_48.getString());
    FIX::LegPool LegPool_48("STRING_1530748080");
    noLegs_0_2.set(LegPool_48);
    InstrumentLeg_48.insert(LegPool_48.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_48("STRING_1365009050");
    noLegs_0_2.set(LegPriceUnitOfMeasure_48);
    InstrumentLeg_48.insert(LegPriceUnitOfMeasure_48.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_48;
    LegPriceUnitOfMeasureQty_48.setString("16661");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_48);
    InstrumentLeg_48.insert(LegPriceUnitOfMeasureQty_48.getString());
    FIX::LegProduct LegProduct_48(1849064898);
    noLegs_0_2.set(LegProduct_48);
    InstrumentLeg_48.insert(LegProduct_48.getString());
    FIX::LegPutOrCall LegPutOrCall_48(770663581);
    noLegs_0_2.set(LegPutOrCall_48);
    InstrumentLeg_48.insert(LegPutOrCall_48.getString());
    FIX::LegRatioQty LegRatioQty_48;
    LegRatioQty_48.setString("12346576");
    noLegs_0_2.set(LegRatioQty_48);
    InstrumentLeg_48.insert(LegRatioQty_48.getString());
    FIX::LegRedemptionDate LegRedemptionDate_48("LOCALMKTDATE_1556296201");
    noLegs_0_2.set(LegRedemptionDate_48);
    InstrumentLeg_48.insert(LegRedemptionDate_48.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_48("STRING_938029267");
    noLegs_0_2.set(LegRepoCollateralSecurityType_48);
    InstrumentLeg_48.insert(LegRepoCollateralSecurityType_48.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_48;
    LegRepurchaseRate_48.setString("87.210000");
    noLegs_0_2.set(LegRepurchaseRate_48);
    InstrumentLeg_48.insert(LegRepurchaseRate_48.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_48(26855119);
    noLegs_0_2.set(LegRepurchaseTerm_48);
    InstrumentLeg_48.insert(LegRepurchaseTerm_48.getString());
    FIX::LegSecurityDesc LegSecurityDesc_48("STRING_126119321");
    noLegs_0_2.set(LegSecurityDesc_48);
    InstrumentLeg_48.insert(LegSecurityDesc_48.getString());
    FIX::LegSecurityExchange LegSecurityExchange_48("EXCHANGE_1927870464");
    noLegs_0_2.set(LegSecurityExchange_48);
    InstrumentLeg_48.insert(LegSecurityExchange_48.getString());
    FIX::LegSecurityID LegSecurityID_48("STRING_1208397368");
    noLegs_0_2.set(LegSecurityID_48);
    InstrumentLeg_48.insert(LegSecurityID_48.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_48("STRING_107743890");
    noLegs_0_2.set(LegSecurityIDSource_48);
    InstrumentLeg_48.insert(LegSecurityIDSource_48.getString());
    FIX::LegSecuritySubType LegSecuritySubType_48("STRING_1330535106");
    noLegs_0_2.set(LegSecuritySubType_48);
    InstrumentLeg_48.insert(LegSecuritySubType_48.getString());
    FIX::LegSecurityType LegSecurityType_48("STRING_1860833610");
    noLegs_0_2.set(LegSecurityType_48);
    InstrumentLeg_48.insert(LegSecurityType_48.getString());
    FIX::LegSide LegSide_48('7');
    noLegs_0_2.set(LegSide_48);
    InstrumentLeg_48.insert(LegSide_48.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_48("STRING_416909169");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_48);
    InstrumentLeg_48.insert(LegStateOrProvinceOfIssue_48.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_48("EUR");
    noLegs_0_2.set(LegStrikeCurrency_48);
    InstrumentLeg_48.insert(LegStrikeCurrency_48.getString());
    FIX::LegStrikePrice LegStrikePrice_48;
    LegStrikePrice_48.setString("2303468");
    noLegs_0_2.set(LegStrikePrice_48);
    InstrumentLeg_48.insert(LegStrikePrice_48.getString());
    FIX::LegSymbol LegSymbol_48("STRING_1232245061");
    noLegs_0_2.set(LegSymbol_48);
    InstrumentLeg_48.insert(LegSymbol_48.getString());
    FIX::LegSymbolSfx LegSymbolSfx_48("STRING_1333811752");
    noLegs_0_2.set(LegSymbolSfx_48);
    InstrumentLeg_48.insert(LegSymbolSfx_48.getString());
    FIX::LegTimeUnit LegTimeUnit_48("STRING_772035137");
    noLegs_0_2.set(LegTimeUnit_48);
    InstrumentLeg_48.insert(LegTimeUnit_48.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_48("STRING_486243963");
    noLegs_0_2.set(LegUnitOfMeasure_48);
    InstrumentLeg_48.insert(LegUnitOfMeasure_48.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_48;
    LegUnitOfMeasureQty_48.setString("17832814");
    noLegs_0_2.set(LegUnitOfMeasureQty_48);
    InstrumentLeg_48.insert(LegUnitOfMeasureQty_48.getString());
    all_values.push_back(InstrumentLeg_48);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_94;
      FIX::LegSecurityAltID LegSecurityAltID_94("STRING_1220430121");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_94);
      LegSecAltIDGrp_NoLegSecurityAltID_94.insert(LegSecurityAltID_94.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_94("STRING_173319222");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_94);
      LegSecAltIDGrp_NoLegSecurityAltID_94.insert(LegSecurityAltIDSource_94.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_94);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_95;
      FIX::LegSecurityAltID LegSecurityAltID_95("STRING_703366466");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_95);
      LegSecAltIDGrp_NoLegSecurityAltID_95.insert(LegSecurityAltID_95.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_95("STRING_305841184");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_95);
      LegSecAltIDGrp_NoLegSecurityAltID_95.insert(LegSecurityAltIDSource_95.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_95);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_5;
      FIX::LegStipulationType LegStipulationType_5("STRING_2068375516");
      noLegStipulations_2_1_0.set(LegStipulationType_5);
      LegStipulations_NoLegStipulations_5.insert(LegStipulationType_5.getString());
      FIX::LegStipulationValue LegStipulationValue_5("STRING_307507328");
      noLegStipulations_2_1_0.set(LegStipulationValue_5);
      LegStipulations_NoLegStipulations_5.insert(LegStipulationValue_5.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_5);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_6;
      FIX::LegStipulationType LegStipulationType_6("STRING_1405648553");
      noLegStipulations_2_1_1.set(LegStipulationType_6);
      LegStipulations_NoLegStipulations_6.insert(LegStipulationType_6.getString());
      FIX::LegStipulationValue LegStipulationValue_6("STRING_691555450");
      noLegStipulations_2_1_1.set(LegStipulationValue_6);
      LegStipulations_NoLegStipulations_6.insert(LegStipulationValue_6.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_6);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_26;
  FIX::AttachmentPoint AttachmentPoint_26;
  AttachmentPoint_26.setString("49.850000");
  msg.set(AttachmentPoint_26);
  Instrument_26.insert(AttachmentPoint_26.getString());
  FIX::CFICode CFICode_26("STRING_814461106");
  msg.set(CFICode_26);
  Instrument_26.insert(CFICode_26.getString());
  FIX::CPProgram CPProgram_26(99);
  msg.set(CPProgram_26);
  Instrument_26.insert(CPProgram_26.getString());
  FIX::CPRegType CPRegType_26("STRING_1091110059");
  msg.set(CPRegType_26);
  Instrument_26.insert(CPRegType_26.getString());
  FIX::CapPrice CapPrice_26;
  CapPrice_26.setString("8413162");
  msg.set(CapPrice_26);
  Instrument_26.insert(CapPrice_26.getString());
  FIX::ContractMultiplier ContractMultiplier_26;
  ContractMultiplier_26.setString("17557040");
  msg.set(ContractMultiplier_26);
  Instrument_26.insert(ContractMultiplier_26.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_26(1);
  msg.set(ContractMultiplierUnit_26);
  Instrument_26.insert(ContractMultiplierUnit_26.getString());
  FIX::ContractSettlMonth ContractSettlMonth_26("MONTHYEAR_2049713593");
  msg.set(ContractSettlMonth_26);
  Instrument_26.insert(ContractSettlMonth_26.getString());
  FIX::CountryOfIssue CountryOfIssue_26("COUNTRY_1863447929");
  msg.set(CountryOfIssue_26);
  Instrument_26.insert(CountryOfIssue_26.getString());
  FIX::CouponPaymentDate CouponPaymentDate_26("LOCALMKTDATE_54548333");
  msg.set(CouponPaymentDate_26);
  Instrument_26.insert(CouponPaymentDate_26.getString());
  FIX::CouponRate CouponRate_26;
  CouponRate_26.setString("35.560000");
  msg.set(CouponRate_26);
  Instrument_26.insert(CouponRate_26.getString());
  FIX::CreditRating CreditRating_26("STRING_423504785");
  msg.set(CreditRating_26);
  Instrument_26.insert(CreditRating_26.getString());
  FIX::DatedDate DatedDate_26("LOCALMKTDATE_471457502");
  msg.set(DatedDate_26);
  Instrument_26.insert(DatedDate_26.getString());
  FIX::DetachmentPoint DetachmentPoint_26;
  DetachmentPoint_26.setString("21.930000");
  msg.set(DetachmentPoint_26);
  Instrument_26.insert(DetachmentPoint_26.getString());
  FIX::EncodedIssuer EncodedIssuer_26("DATA_1947689364");
  msg.set(EncodedIssuer_26);
  Instrument_26.insert(EncodedIssuer_26.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_26(701804345);
  msg.set(EncodedIssuerLen_26);
  Instrument_26.insert(EncodedIssuerLen_26.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_26("DATA_686223607");
  msg.set(EncodedSecurityDesc_26);
  Instrument_26.insert(EncodedSecurityDesc_26.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_26(1134017468);
  msg.set(EncodedSecurityDescLen_26);
  Instrument_26.insert(EncodedSecurityDescLen_26.getString());
  FIX::ExerciseStyle ExerciseStyle_26(1);
  msg.set(ExerciseStyle_26);
  Instrument_26.insert(ExerciseStyle_26.getString());
  FIX::Factor Factor_26;
  Factor_26.setString("11724675");
  msg.set(Factor_26);
  Instrument_26.insert(Factor_26.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_26(false);
  msg.set(FlexProductEligibilityIndicator_26);
  Instrument_26.insert(FlexProductEligibilityIndicator_26.getString());
  FIX::FlexibleIndicator FlexibleIndicator_26(true);
  msg.set(FlexibleIndicator_26);
  Instrument_26.insert(FlexibleIndicator_26.getString());
  FIX::FloorPrice FloorPrice_26;
  FloorPrice_26.setString("2454140");
  msg.set(FloorPrice_26);
  Instrument_26.insert(FloorPrice_26.getString());
  FIX::FlowScheduleType FlowScheduleType_26(4);
  msg.set(FlowScheduleType_26);
  Instrument_26.insert(FlowScheduleType_26.getString());
  FIX::InstrRegistry InstrRegistry_26("STRING_1413343562");
  msg.set(InstrRegistry_26);
  Instrument_26.insert(InstrRegistry_26.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_26('5');
  msg.set(InstrmtAssignmentMethod_26);
  Instrument_26.insert(InstrmtAssignmentMethod_26.getString());
  FIX::InterestAccrualDate InterestAccrualDate_26("LOCALMKTDATE_499718194");
  msg.set(InterestAccrualDate_26);
  Instrument_26.insert(InterestAccrualDate_26.getString());
  FIX::IssueDate IssueDate_26("LOCALMKTDATE_1334235430");
  msg.set(IssueDate_26);
  Instrument_26.insert(IssueDate_26.getString());
  FIX::Issuer Issuer_26("STRING_858762556");
  msg.set(Issuer_26);
  Instrument_26.insert(Issuer_26.getString());
  FIX::ListMethod ListMethod_26(1);
  msg.set(ListMethod_26);
  Instrument_26.insert(ListMethod_26.getString());
  FIX::LocaleOfIssue LocaleOfIssue_26("STRING_2025790880");
  msg.set(LocaleOfIssue_26);
  Instrument_26.insert(LocaleOfIssue_26.getString());
  FIX::MaturityDate MaturityDate_26("LOCALMKTDATE_253443893");
  msg.set(MaturityDate_26);
  Instrument_26.insert(MaturityDate_26.getString());
  FIX::MaturityMonthYear MaturityMonthYear_26("MONTHYEAR_572344205");
  msg.set(MaturityMonthYear_26);
  Instrument_26.insert(MaturityMonthYear_26.getString());
  FIX::MaturityTime MaturityTime_26("TZTIMEONLY_1507891950");
  msg.set(MaturityTime_26);
  Instrument_26.insert(MaturityTime_26.getString());
  FIX::MinPriceIncrement MinPriceIncrement_26;
  MinPriceIncrement_26.setString("13445539");
  msg.set(MinPriceIncrement_26);
  Instrument_26.insert(MinPriceIncrement_26.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_26;
  MinPriceIncrementAmount_26.setString("14136604");
  msg.set(MinPriceIncrementAmount_26);
  Instrument_26.insert(MinPriceIncrementAmount_26.getString());
  FIX::NTPositionLimit NTPositionLimit_26(1116112341);
  msg.set(NTPositionLimit_26);
  Instrument_26.insert(NTPositionLimit_26.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_26;
  NotionalPercentageOutstanding_26.setString("71.800000");
  msg.set(NotionalPercentageOutstanding_26);
  Instrument_26.insert(NotionalPercentageOutstanding_26.getString());
  FIX::OptAttribute OptAttribute_26('1');
  msg.set(OptAttribute_26);
  Instrument_26.insert(OptAttribute_26.getString());
  FIX::OptPayoutAmount OptPayoutAmount_26;
  OptPayoutAmount_26.setString("8320766");
  msg.set(OptPayoutAmount_26);
  Instrument_26.insert(OptPayoutAmount_26.getString());
  FIX::OptPayoutType OptPayoutType_26(2);
  msg.set(OptPayoutType_26);
  Instrument_26.insert(OptPayoutType_26.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_26;
  OriginalNotionalPercentageOutstanding_26.setString("2.840000");
  msg.set(OriginalNotionalPercentageOutstanding_26);
  Instrument_26.insert(OriginalNotionalPercentageOutstanding_26.getString());
  FIX::Pool Pool_26("STRING_1255581407");
  msg.set(Pool_26);
  Instrument_26.insert(Pool_26.getString());
  FIX::PositionLimit PositionLimit_26(594573016);
  msg.set(PositionLimit_26);
  Instrument_26.insert(PositionLimit_26.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_26("STRING_INX");
  msg.set(PriceQuoteMethod_26);
  Instrument_26.insert(PriceQuoteMethod_26.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_26("STRING_1055787124");
  msg.set(PriceUnitOfMeasure_26);
  Instrument_26.insert(PriceUnitOfMeasure_26.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_26;
  PriceUnitOfMeasureQty_26.setString("12963773");
  msg.set(PriceUnitOfMeasureQty_26);
  Instrument_26.insert(PriceUnitOfMeasureQty_26.getString());
  FIX::Product Product_28(4);
  msg.set(Product_28);
  Instrument_26.insert(Product_28.getString());
  FIX::ProductComplex ProductComplex_26("STRING_42320944");
  msg.set(ProductComplex_26);
  Instrument_26.insert(ProductComplex_26.getString());
  FIX::PutOrCall PutOrCall_26(1);
  msg.set(PutOrCall_26);
  Instrument_26.insert(PutOrCall_26.getString());
  FIX::RedemptionDate RedemptionDate_26("LOCALMKTDATE_96656358");
  msg.set(RedemptionDate_26);
  Instrument_26.insert(RedemptionDate_26.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_26("STRING_812136261");
  msg.set(RepoCollateralSecurityType_26);
  Instrument_26.insert(RepoCollateralSecurityType_26.getString());
  FIX::RepurchaseRate RepurchaseRate_26;
  RepurchaseRate_26.setString("2.910000");
  msg.set(RepurchaseRate_26);
  Instrument_26.insert(RepurchaseRate_26.getString());
  FIX::RepurchaseTerm RepurchaseTerm_26(342070402);
  msg.set(RepurchaseTerm_26);
  Instrument_26.insert(RepurchaseTerm_26.getString());
  FIX::RestructuringType RestructuringType_26("STRING_MR");
  msg.set(RestructuringType_26);
  Instrument_26.insert(RestructuringType_26.getString());
  FIX::SecurityDesc SecurityDesc_26("STRING_598570205");
  msg.set(SecurityDesc_26);
  Instrument_26.insert(SecurityDesc_26.getString());
  FIX::SecurityExchange SecurityExchange_26("EXCHANGE_893325630");
  msg.set(SecurityExchange_26);
  Instrument_26.insert(SecurityExchange_26.getString());
  FIX::SecurityGroup SecurityGroup_26("STRING_107505347");
  msg.set(SecurityGroup_26);
  Instrument_26.insert(SecurityGroup_26.getString());
  FIX::SecurityID SecurityID_26("STRING_1932805635");
  msg.set(SecurityID_26);
  Instrument_26.insert(SecurityID_26.getString());
  FIX::SecurityIDSource SecurityIDSource_26("STRING_3");
  msg.set(SecurityIDSource_26);
  Instrument_26.insert(SecurityIDSource_26.getString());
  FIX::SecurityStatus SecurityStatus_26("STRING_2");
  msg.set(SecurityStatus_26);
  Instrument_26.insert(SecurityStatus_26.getString());
  FIX::SecuritySubType SecuritySubType_27("STRING_1811112868");
  msg.set(SecuritySubType_27);
  Instrument_26.insert(SecuritySubType_27.getString());
  FIX::SecurityType SecurityType_28("STRING_EUCD");
  msg.set(SecurityType_28);
  Instrument_26.insert(SecurityType_28.getString());
  FIX::Seniority Seniority_26("STRING_SD");
  msg.set(Seniority_26);
  Instrument_26.insert(Seniority_26.getString());
  FIX::SettlMethod SettlMethod_26('C');
  msg.set(SettlMethod_26);
  Instrument_26.insert(SettlMethod_26.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_26("STRING_1202602384");
  msg.set(SettleOnOpenFlag_26);
  Instrument_26.insert(SettleOnOpenFlag_26.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_26("STRING_1851393083");
  msg.set(StateOrProvinceOfIssue_26);
  Instrument_26.insert(StateOrProvinceOfIssue_26.getString());
  FIX::StrikeCurrency StrikeCurrency_26("USD");
  msg.set(StrikeCurrency_26);
  Instrument_26.insert(StrikeCurrency_26.getString());
  FIX::StrikeMultiplier StrikeMultiplier_26;
  StrikeMultiplier_26.setString("10197998");
  msg.set(StrikeMultiplier_26);
  Instrument_26.insert(StrikeMultiplier_26.getString());
  FIX::StrikePrice StrikePrice_26;
  StrikePrice_26.setString("9722264");
  msg.set(StrikePrice_26);
  Instrument_26.insert(StrikePrice_26.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_26(3);
  msg.set(StrikePriceBoundaryMethod_26);
  Instrument_26.insert(StrikePriceBoundaryMethod_26.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_26;
  StrikePriceBoundaryPrecision_26.setString("0.950000");
  msg.set(StrikePriceBoundaryPrecision_26);
  Instrument_26.insert(StrikePriceBoundaryPrecision_26.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_26(1);
  msg.set(StrikePriceDeterminationMethod_26);
  Instrument_26.insert(StrikePriceDeterminationMethod_26.getString());
  FIX::StrikeValue StrikeValue_26;
  StrikeValue_26.setString("19888580");
  msg.set(StrikeValue_26);
  Instrument_26.insert(StrikeValue_26.getString());
  FIX::Symbol Symbol_26("STRING_189235276");
  msg.set(Symbol_26);
  Instrument_26.insert(Symbol_26.getString());
  FIX::SymbolSfx SymbolSfx_26("STRING_CD");
  msg.set(SymbolSfx_26);
  Instrument_26.insert(SymbolSfx_26.getString());
  FIX::TimeUnit TimeUnit_26("STRING_S");
  msg.set(TimeUnit_26);
  Instrument_26.insert(TimeUnit_26.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_26(2);
  msg.set(UnderlyingPriceDeterminationMethod_26);
  Instrument_26.insert(UnderlyingPriceDeterminationMethod_26.getString());
  FIX::UnitOfMeasure UnitOfMeasure_26("STRING_lbs");
  msg.set(UnitOfMeasure_26);
  Instrument_26.insert(UnitOfMeasure_26.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_26;
  UnitOfMeasureQty_26.setString("17604850");
  msg.set(UnitOfMeasureQty_26);
  Instrument_26.insert(UnitOfMeasureQty_26.getString());
  FIX::ValuationMethod ValuationMethod_26("STRING_FUT");
  msg.set(ValuationMethod_26);
  Instrument_26.insert(ValuationMethod_26.getString());
  all_values.push_back(Instrument_26);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_53;
    FIX::ComplexEventCondition ComplexEventCondition_53(1);
    noComplexEvents_0_0.set(ComplexEventCondition_53);
    ComplexEvents_NoComplexEvents_53.insert(ComplexEventCondition_53.getString());
    FIX::ComplexEventPrice ComplexEventPrice_53;
    ComplexEventPrice_53.setString("16996344");
    noComplexEvents_0_0.set(ComplexEventPrice_53);
    ComplexEvents_NoComplexEvents_53.insert(ComplexEventPrice_53.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_53(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_53);
    ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceBoundaryMethod_53.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_53;
    ComplexEventPriceBoundaryPrecision_53.setString("18.490000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_53);
    ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceBoundaryPrecision_53.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_53(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_53);
    ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceTimeType_53.getString());
    FIX::ComplexEventType ComplexEventType_53(5);
    noComplexEvents_0_0.set(ComplexEventType_53);
    ComplexEvents_NoComplexEvents_53.insert(ComplexEventType_53.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_53;
    ComplexOptPayoutAmount_53.setString("13296038");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_53);
    ComplexEvents_NoComplexEvents_53.insert(ComplexOptPayoutAmount_53.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_53);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_107;
      FIX::ComplexEventEndDate ComplexEventEndDate_107(FIX::UTCTIMESTAMP(17, 53, 14, 11, 2, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_107);
      ComplexEventDates_NoComplexEventDates_107.insert(ComplexEventEndDate_107.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_107(FIX::UTCTIMESTAMP(5, 52, 47, 6, 12, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_107);
      ComplexEventDates_NoComplexEventDates_107.insert(ComplexEventStartDate_107.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_107);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_221;
        FIX::ComplexEventEndTime ComplexEventEndTime_221(FIX::UTCTIMEONLY(20, 26, 49));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_221);
        ComplexEventTimes_NoComplexEventTimes_221.insert(ComplexEventEndTime_221.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_221(FIX::UTCTIMEONLY(0, 32, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_221);
        ComplexEventTimes_NoComplexEventTimes_221.insert(ComplexEventStartTime_221.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_221);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_222;
        FIX::ComplexEventEndTime ComplexEventEndTime_222(FIX::UTCTIMEONLY(2, 51, 26));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_222);
        ComplexEventTimes_NoComplexEventTimes_222.insert(ComplexEventEndTime_222.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_222(FIX::UTCTIMEONLY(14, 23, 27));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_222);
        ComplexEventTimes_NoComplexEventTimes_222.insert(ComplexEventStartTime_222.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_222);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_108;
      FIX::ComplexEventEndDate ComplexEventEndDate_108(FIX::UTCTIMESTAMP(20, 12, 46, 27, 2, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_108);
      ComplexEventDates_NoComplexEventDates_108.insert(ComplexEventEndDate_108.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_108(FIX::UTCTIMESTAMP(10, 0, 20, 20, 5, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_108);
      ComplexEventDates_NoComplexEventDates_108.insert(ComplexEventStartDate_108.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_108);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_223;
        FIX::ComplexEventEndTime ComplexEventEndTime_223(FIX::UTCTIMEONLY(7, 27, 49));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_223);
        ComplexEventTimes_NoComplexEventTimes_223.insert(ComplexEventEndTime_223.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_223(FIX::UTCTIMEONLY(3, 21, 44));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_223);
        ComplexEventTimes_NoComplexEventTimes_223.insert(ComplexEventStartTime_223.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_223);
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
    FIX50SP2::IOI::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_51;
    FIX::EventDate EventDate_51("LOCALMKTDATE_1974709139");
    noEvents_0_0.set(EventDate_51);
    EvntGrp_NoEvents_51.insert(EventDate_51.getString());
    FIX::EventPx EventPx_51;
    EventPx_51.setString("1298024");
    noEvents_0_0.set(EventPx_51);
    EvntGrp_NoEvents_51.insert(EventPx_51.getString());
    FIX::EventText EventText_51("STRING_975141149");
    noEvents_0_0.set(EventText_51);
    EvntGrp_NoEvents_51.insert(EventText_51.getString());
    FIX::EventTime EventTime_51(FIX::UTCTIMESTAMP(17, 44, 32, 1, 5, 2006));
    noEvents_0_0.set(EventTime_51);
    EvntGrp_NoEvents_51.insert(EventTime_51.getString());
    FIX::EventType EventType_51(4);
    noEvents_0_0.set(EventType_51);
    EvntGrp_NoEvents_51.insert(EventType_51.getString());
    all_values.push_back(EvntGrp_NoEvents_51);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_48;
    FIX::InstrumentPartyID InstrumentPartyID_48("STRING_796871489");
    noInstrumentParties_0_0.set(InstrumentPartyID_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyID_48.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_48('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyIDSource_48.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_48(391225452);
    noInstrumentParties_0_0.set(InstrumentPartyRole_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyRole_48.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_48);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97;
      FIX::InstrumentPartySubID InstrumentPartySubID_97("STRING_419697076");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_97);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97.insert(InstrumentPartySubID_97.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_97(139289604);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_97);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97.insert(InstrumentPartySubIDType_97.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_49;
    FIX::InstrumentPartyID InstrumentPartyID_49("STRING_683533079");
    noInstrumentParties_0_1.set(InstrumentPartyID_49);
    InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyID_49.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_49('4');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_49);
    InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyIDSource_49.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_49(1097324928);
    noInstrumentParties_0_1.set(InstrumentPartyRole_49);
    InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyRole_49.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_49);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98;
      FIX::InstrumentPartySubID InstrumentPartySubID_98("STRING_1106406556");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_98);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98.insert(InstrumentPartySubID_98.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_98(106475495);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_98);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98.insert(InstrumentPartySubIDType_98.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_50;
    FIX::InstrumentPartyID InstrumentPartyID_50("STRING_1304430079");
    noInstrumentParties_0_2.set(InstrumentPartyID_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyID_50.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_50('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyIDSource_50.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_50(492657268);
    noInstrumentParties_0_2.set(InstrumentPartyRole_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyRole_50.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_50);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99;
      FIX::InstrumentPartySubID InstrumentPartySubID_99("STRING_656386638");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_99);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99.insert(InstrumentPartySubID_99.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_99(2098955172);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_99);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99.insert(InstrumentPartySubIDType_99.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100;
      FIX::InstrumentPartySubID InstrumentPartySubID_100("STRING_1403940761");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_100);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100.insert(InstrumentPartySubID_100.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_100(483612130);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_100);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100.insert(InstrumentPartySubIDType_100.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101;
      FIX::InstrumentPartySubID InstrumentPartySubID_101("STRING_81273991");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_101);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101.insert(InstrumentPartySubID_101.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_101(231598263);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_101);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101.insert(InstrumentPartySubIDType_101.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_45;
    FIX::SecurityAltID SecurityAltID_45("STRING_440442096");
    noSecurityAltID_0_0.set(SecurityAltID_45);
    SecAltIDGrp_NoSecurityAltID_45.insert(SecurityAltID_45.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_45("STRING_804716207");
    noSecurityAltID_0_0.set(SecurityAltIDSource_45);
    SecAltIDGrp_NoSecurityAltID_45.insert(SecurityAltIDSource_45.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_45);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_52;
  FIX::SecurityXML SecurityXML_53("XMLDATA_1181195199");
  msg.set(SecurityXML_53);
  FIX::SecurityXMLLen SecurityXMLLen_26(452741713);
  msg.set(SecurityXMLLen_26);
  FIX::SecurityXMLSchema SecurityXMLSchema_26("STRING_1969044004");
  msg.set(SecurityXMLSchema_26);
  SecurityXML_52.insert(SecurityXMLSchema_26.getString());
  all_values.push_back(SecurityXML_52);
  all_compo_names.insert("SecurityXML");

  // OrderQtyData
  multiset<string> OrderQtyData_7;
  FIX::CashOrderQty CashOrderQty_7;
  CashOrderQty_7.setString("20097631");
  msg.set(CashOrderQty_7);
  OrderQtyData_7.insert(CashOrderQty_7.getString());
  FIX::OrderPercent OrderPercent_7;
  OrderPercent_7.setString("50.160000");
  msg.set(OrderPercent_7);
  OrderQtyData_7.insert(OrderPercent_7.getString());
  FIX::OrderQty OrderQty_17;
  OrderQty_17.setString("15943685");
  msg.set(OrderQty_17);
  OrderQtyData_7.insert(OrderQty_17.getString());
  FIX::RoundingDirection RoundingDirection_7('0');
  msg.set(RoundingDirection_7);
  OrderQtyData_7.insert(RoundingDirection_7.getString());
  FIX::RoundingModulus RoundingModulus_7;
  RoundingModulus_7.setString("7341226");
  msg.set(RoundingModulus_7);
  OrderQtyData_7.insert(RoundingModulus_7.getString());
  all_values.push_back(OrderQtyData_7);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_39;
    FIX::PartyID PartyID_39("STRING_1658743743");
    noPartyIDs_0_0.set(PartyID_39);
    Parties_NoPartyIDs_39.insert(PartyID_39.getString());
    FIX::PartyIDSource PartyIDSource_39('8');
    noPartyIDs_0_0.set(PartyIDSource_39);
    Parties_NoPartyIDs_39.insert(PartyIDSource_39.getString());
    FIX::PartyRole PartyRole_39(70);
    noPartyIDs_0_0.set(PartyRole_39);
    Parties_NoPartyIDs_39.insert(PartyRole_39.getString());
    all_values.push_back(Parties_NoPartyIDs_39);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_84;
      FIX::PartySubID PartySubID_84("STRING_1627756816");
      noPartySubIDs_0_1_0.set(PartySubID_84);
      PtysSubGrp_NoPartySubIDs_84.insert(PartySubID_84.getString());
      FIX::PartySubIDType PartySubIDType_84(28);
      noPartySubIDs_0_1_0.set(PartySubIDType_84);
      PtysSubGrp_NoPartySubIDs_84.insert(PartySubIDType_84.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_84);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_40;
    FIX::PartyID PartyID_40("STRING_2032343874");
    noPartyIDs_0_1.set(PartyID_40);
    Parties_NoPartyIDs_40.insert(PartyID_40.getString());
    FIX::PartyIDSource PartyIDSource_40('6');
    noPartyIDs_0_1.set(PartyIDSource_40);
    Parties_NoPartyIDs_40.insert(PartyIDSource_40.getString());
    FIX::PartyRole PartyRole_40(62);
    noPartyIDs_0_1.set(PartyRole_40);
    Parties_NoPartyIDs_40.insert(PartyRole_40.getString());
    all_values.push_back(Parties_NoPartyIDs_40);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_85;
      FIX::PartySubID PartySubID_85("STRING_2017209329");
      noPartySubIDs_1_1_0.set(PartySubID_85);
      PtysSubGrp_NoPartySubIDs_85.insert(PartySubID_85.getString());
      FIX::PartySubIDType PartySubIDType_85(5);
      noPartySubIDs_1_1_0.set(PartySubIDType_85);
      PtysSubGrp_NoPartySubIDs_85.insert(PartySubIDType_85.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_85);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_86;
      FIX::PartySubID PartySubID_86("STRING_2033946523");
      noPartySubIDs_1_1_1.set(PartySubID_86);
      PtysSubGrp_NoPartySubIDs_86.insert(PartySubID_86.getString());
      FIX::PartySubIDType PartySubIDType_86(19);
      noPartySubIDs_1_1_1.set(PartySubIDType_86);
      PtysSubGrp_NoPartySubIDs_86.insert(PartySubIDType_86.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_86);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_87;
      FIX::PartySubID PartySubID_87("STRING_1625329208");
      noPartySubIDs_1_1_2.set(PartySubID_87);
      PtysSubGrp_NoPartySubIDs_87.insert(PartySubID_87.getString());
      FIX::PartySubIDType PartySubIDType_87(18);
      noPartySubIDs_1_1_2.set(PartySubIDType_87);
      PtysSubGrp_NoPartySubIDs_87.insert(PartySubIDType_87.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_87);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_41;
    FIX::PartyID PartyID_41("STRING_1009724449");
    noPartyIDs_0_2.set(PartyID_41);
    Parties_NoPartyIDs_41.insert(PartyID_41.getString());
    FIX::PartyIDSource PartyIDSource_41('F');
    noPartyIDs_0_2.set(PartyIDSource_41);
    Parties_NoPartyIDs_41.insert(PartyIDSource_41.getString());
    FIX::PartyRole PartyRole_41(21);
    noPartyIDs_0_2.set(PartyRole_41);
    Parties_NoPartyIDs_41.insert(PartyRole_41.getString());
    all_values.push_back(Parties_NoPartyIDs_41);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_88;
      FIX::PartySubID PartySubID_88("STRING_2147045295");
      noPartySubIDs_2_1_0.set(PartySubID_88);
      PtysSubGrp_NoPartySubIDs_88.insert(PartySubID_88.getString());
      FIX::PartySubIDType PartySubIDType_88(9);
      noPartySubIDs_2_1_0.set(PartySubIDType_88);
      PtysSubGrp_NoPartySubIDs_88.insert(PartySubIDType_88.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_88);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_89;
      FIX::PartySubID PartySubID_89("STRING_1401118535");
      noPartySubIDs_2_1_1.set(PartySubID_89);
      PtysSubGrp_NoPartySubIDs_89.insert(PartySubID_89.getString());
      FIX::PartySubIDType PartySubIDType_89(15);
      noPartySubIDs_2_1_1.set(PartySubIDType_89);
      PtysSubGrp_NoPartySubIDs_89.insert(PartySubIDType_89.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_89);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_90;
      FIX::PartySubID PartySubID_90("STRING_794815");
      noPartySubIDs_2_1_2.set(PartySubID_90);
      PtysSubGrp_NoPartySubIDs_90.insert(PartySubID_90.getString());
      FIX::PartySubIDType PartySubIDType_90(13);
      noPartySubIDs_2_1_2.set(PartySubIDType_90);
      PtysSubGrp_NoPartySubIDs_90.insert(PartySubIDType_90.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_90);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::IOI::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_1;
    FIX::RoutingID RoutingID_1("STRING_1595163399");
    noRoutingIDs_0_0.set(RoutingID_1);
    RoutingGrp_NoRoutingIDs_1.insert(RoutingID_1.getString());
    FIX::RoutingType RoutingType_1(3);
    noRoutingIDs_0_0.set(RoutingType_1);
    RoutingGrp_NoRoutingIDs_1.insert(RoutingType_1.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_1);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_11;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_11("CHF");
  msg.set(BenchmarkCurveCurrency_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurveCurrency_11.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_11("STRING_EUREPO");
  msg.set(BenchmarkCurveName_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurveName_11.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_11("STRING_172433500");
  msg.set(BenchmarkCurvePoint_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurvePoint_11.getString());
  FIX::BenchmarkPrice BenchmarkPrice_11;
  BenchmarkPrice_11.setString("14106737");
  msg.set(BenchmarkPrice_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkPrice_11.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_11(1628602388);
  msg.set(BenchmarkPriceType_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkPriceType_11.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_11("STRING_1800190316");
  msg.set(BenchmarkSecurityID_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkSecurityID_11.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_11("STRING_337915052");
  msg.set(BenchmarkSecurityIDSource_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkSecurityIDSource_11.getString());
  FIX::Spread Spread_11;
  Spread_11.setString("15134626");
  msg.set(Spread_11);
  SpreadOrBenchmarkCurveData_11.insert(Spread_11.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_11);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_22;
    FIX::StipulationType StipulationType_22("STRING_PRICE");
    noStipulations_0_0.set(StipulationType_22);
    Stipulations_NoStipulations_22.insert(StipulationType_22.getString());
    FIX::StipulationValue StipulationValue_22("STRING_555269272");
    noStipulations_0_0.set(StipulationValue_22);
    Stipulations_NoStipulations_22.insert(StipulationValue_22.getString());
    all_values.push_back(Stipulations_NoStipulations_22);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_44;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_44("DATA_1045489504");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_44);
    UnderlyingInstrument_44.insert(EncodedUnderlyingIssuer_44.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_44(441732147);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_44);
    UnderlyingInstrument_44.insert(EncodedUnderlyingIssuerLen_44.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_44("DATA_635224393");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_44);
    UnderlyingInstrument_44.insert(EncodedUnderlyingSecurityDesc_44.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_44(523335064);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_44);
    UnderlyingInstrument_44.insert(EncodedUnderlyingSecurityDescLen_44.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_44;
    UnderlyingAdjustedQuantity_44.setString("17321357");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_44);
    UnderlyingInstrument_44.insert(UnderlyingAdjustedQuantity_44.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_44;
    UnderlyingAllocationPercent_44.setString("88.420000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_44);
    UnderlyingInstrument_44.insert(UnderlyingAllocationPercent_44.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_44;
    UnderlyingAttachmentPoint_44.setString("46.150000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_44);
    UnderlyingInstrument_44.insert(UnderlyingAttachmentPoint_44.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_44("STRING_1106654036");
    noUnderlyings_0_0.set(UnderlyingCFICode_44);
    UnderlyingInstrument_44.insert(UnderlyingCFICode_44.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_44("STRING_1864872179");
    noUnderlyings_0_0.set(UnderlyingCPProgram_44);
    UnderlyingInstrument_44.insert(UnderlyingCPProgram_44.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_44("STRING_82016262");
    noUnderlyings_0_0.set(UnderlyingCPRegType_44);
    UnderlyingInstrument_44.insert(UnderlyingCPRegType_44.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_44;
    UnderlyingCapValue_44.setString("12858884");
    noUnderlyings_0_0.set(UnderlyingCapValue_44);
    UnderlyingInstrument_44.insert(UnderlyingCapValue_44.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_44;
    UnderlyingCashAmount_44.setString("11185070");
    noUnderlyings_0_0.set(UnderlyingCashAmount_44);
    UnderlyingInstrument_44.insert(UnderlyingCashAmount_44.getString());
    FIX::UnderlyingCashType UnderlyingCashType_44("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_44);
    UnderlyingInstrument_44.insert(UnderlyingCashType_44.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_44;
    UnderlyingContractMultiplier_44.setString("12866833");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_44);
    UnderlyingInstrument_44.insert(UnderlyingContractMultiplier_44.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_44(234421501);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_44);
    UnderlyingInstrument_44.insert(UnderlyingContractMultiplierUnit_44.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_44("COUNTRY_966294350");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_44);
    UnderlyingInstrument_44.insert(UnderlyingCountryOfIssue_44.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_44("LOCALMKTDATE_734363062");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_44);
    UnderlyingInstrument_44.insert(UnderlyingCouponPaymentDate_44.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_44;
    UnderlyingCouponRate_44.setString("69.710000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_44);
    UnderlyingInstrument_44.insert(UnderlyingCouponRate_44.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_44("STRING_2132391751");
    noUnderlyings_0_0.set(UnderlyingCreditRating_44);
    UnderlyingInstrument_44.insert(UnderlyingCreditRating_44.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_44("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_44);
    UnderlyingInstrument_44.insert(UnderlyingCurrency_44.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_44;
    UnderlyingCurrentValue_44.setString("1573416");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_44);
    UnderlyingInstrument_44.insert(UnderlyingCurrentValue_44.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_44;
    UnderlyingDetachmentPoint_44.setString("69.810000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_44);
    UnderlyingInstrument_44.insert(UnderlyingDetachmentPoint_44.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_44;
    UnderlyingDirtyPrice_44.setString("9244149");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_44);
    UnderlyingInstrument_44.insert(UnderlyingDirtyPrice_44.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_44;
    UnderlyingEndPrice_44.setString("19575319");
    noUnderlyings_0_0.set(UnderlyingEndPrice_44);
    UnderlyingInstrument_44.insert(UnderlyingEndPrice_44.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_44;
    UnderlyingEndValue_44.setString("17687420");
    noUnderlyings_0_0.set(UnderlyingEndValue_44);
    UnderlyingInstrument_44.insert(UnderlyingEndValue_44.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_44(290393891);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_44);
    UnderlyingInstrument_44.insert(UnderlyingExerciseStyle_44.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_44;
    UnderlyingFXRate_44.setString("494346");
    noUnderlyings_0_0.set(UnderlyingFXRate_44);
    UnderlyingInstrument_44.insert(UnderlyingFXRate_44.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_44('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_44);
    UnderlyingInstrument_44.insert(UnderlyingFXRateCalc_44.getString());
    FIX::UnderlyingFactor UnderlyingFactor_44;
    UnderlyingFactor_44.setString("8456631");
    noUnderlyings_0_0.set(UnderlyingFactor_44);
    UnderlyingInstrument_44.insert(UnderlyingFactor_44.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_44(158546738);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_44);
    UnderlyingInstrument_44.insert(UnderlyingFlowScheduleType_44.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_44("STRING_38379709");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_44);
    UnderlyingInstrument_44.insert(UnderlyingInstrRegistry_44.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_44("LOCALMKTDATE_1287395311");
    noUnderlyings_0_0.set(UnderlyingIssueDate_44);
    UnderlyingInstrument_44.insert(UnderlyingIssueDate_44.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_44("STRING_793771131");
    noUnderlyings_0_0.set(UnderlyingIssuer_44);
    UnderlyingInstrument_44.insert(UnderlyingIssuer_44.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_44("STRING_561714773");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_44);
    UnderlyingInstrument_44.insert(UnderlyingLocaleOfIssue_44.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_44("LOCALMKTDATE_872047447");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_44);
    UnderlyingInstrument_44.insert(UnderlyingMaturityDate_44.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_44("MONTHYEAR_291236325");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_44);
    UnderlyingInstrument_44.insert(UnderlyingMaturityMonthYear_44.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_44("TZTIMEONLY_644169388");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_44);
    UnderlyingInstrument_44.insert(UnderlyingMaturityTime_44.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_44;
    UnderlyingNotionalPercentageOutstanding_44.setString("14.840000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_44);
    UnderlyingInstrument_44.insert(UnderlyingNotionalPercentageOutstanding_44.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_44('8');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_44);
    UnderlyingInstrument_44.insert(UnderlyingOptAttribute_44.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_44;
    UnderlyingOriginalNotionalPercentageOutstanding_44.setString("56.500000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_44);
    UnderlyingInstrument_44.insert(UnderlyingOriginalNotionalPercentageOutstanding_44.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_44("STRING_1117106332");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_44);
    UnderlyingInstrument_44.insert(UnderlyingPriceUnitOfMeasure_44.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_44;
    UnderlyingPriceUnitOfMeasureQty_44.setString("11271319");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_44);
    UnderlyingInstrument_44.insert(UnderlyingPriceUnitOfMeasureQty_44.getString());
    FIX::UnderlyingProduct UnderlyingProduct_44(1260505272);
    noUnderlyings_0_0.set(UnderlyingProduct_44);
    UnderlyingInstrument_44.insert(UnderlyingProduct_44.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_44(256305995);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_44);
    UnderlyingInstrument_44.insert(UnderlyingPutOrCall_44.getString());
    FIX::UnderlyingPx UnderlyingPx_44;
    UnderlyingPx_44.setString("13615534");
    noUnderlyings_0_0.set(UnderlyingPx_44);
    UnderlyingInstrument_44.insert(UnderlyingPx_44.getString());
    FIX::UnderlyingQty UnderlyingQty_44;
    UnderlyingQty_44.setString("793159");
    noUnderlyings_0_0.set(UnderlyingQty_44);
    UnderlyingInstrument_44.insert(UnderlyingQty_44.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_44("LOCALMKTDATE_990669058");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_44);
    UnderlyingInstrument_44.insert(UnderlyingRedemptionDate_44.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_44("STRING_1371040395");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_44);
    UnderlyingInstrument_44.insert(UnderlyingRepoCollateralSecurityType_44.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_44;
    UnderlyingRepurchaseRate_44.setString("40.770000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_44);
    UnderlyingInstrument_44.insert(UnderlyingRepurchaseRate_44.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_44(1010822259);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_44);
    UnderlyingInstrument_44.insert(UnderlyingRepurchaseTerm_44.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_44("STRING_666852932");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_44);
    UnderlyingInstrument_44.insert(UnderlyingRestructuringType_44.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_44("STRING_221565681");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_44);
    UnderlyingInstrument_44.insert(UnderlyingSecurityDesc_44.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_44("EXCHANGE_294165592");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_44);
    UnderlyingInstrument_44.insert(UnderlyingSecurityExchange_44.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_44("STRING_1591267857");
    noUnderlyings_0_0.set(UnderlyingSecurityID_44);
    UnderlyingInstrument_44.insert(UnderlyingSecurityID_44.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_44("STRING_31613953");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_44);
    UnderlyingInstrument_44.insert(UnderlyingSecurityIDSource_44.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_44("STRING_2062907625");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_44);
    UnderlyingInstrument_44.insert(UnderlyingSecuritySubType_44.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_44("STRING_1881661749");
    noUnderlyings_0_0.set(UnderlyingSecurityType_44);
    UnderlyingInstrument_44.insert(UnderlyingSecurityType_44.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_44("STRING_81048617");
    noUnderlyings_0_0.set(UnderlyingSeniority_44);
    UnderlyingInstrument_44.insert(UnderlyingSeniority_44.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_44("STRING_1055797830");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_44);
    UnderlyingInstrument_44.insert(UnderlyingSettlMethod_44.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_44(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_44);
    UnderlyingInstrument_44.insert(UnderlyingSettlementType_44.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_44;
    UnderlyingStartValue_44.setString("2395953");
    noUnderlyings_0_0.set(UnderlyingStartValue_44);
    UnderlyingInstrument_44.insert(UnderlyingStartValue_44.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_44("STRING_1094177539");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_44);
    UnderlyingInstrument_44.insert(UnderlyingStateOrProvinceOfIssue_44.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_44("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_44);
    UnderlyingInstrument_44.insert(UnderlyingStrikeCurrency_44.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_44;
    UnderlyingStrikePrice_44.setString("16558923");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_44);
    UnderlyingInstrument_44.insert(UnderlyingStrikePrice_44.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_44("STRING_591800375");
    noUnderlyings_0_0.set(UnderlyingSymbol_44);
    UnderlyingInstrument_44.insert(UnderlyingSymbol_44.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_44("STRING_1324602812");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_44);
    UnderlyingInstrument_44.insert(UnderlyingSymbolSfx_44.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_44("STRING_152578052");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_44);
    UnderlyingInstrument_44.insert(UnderlyingTimeUnit_44.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_44("STRING_423018211");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_44);
    UnderlyingInstrument_44.insert(UnderlyingUnitOfMeasure_44.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_44;
    UnderlyingUnitOfMeasureQty_44.setString("13332276");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_44);
    UnderlyingInstrument_44.insert(UnderlyingUnitOfMeasureQty_44.getString());
    all_values.push_back(UnderlyingInstrument_44);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_95;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_95("STRING_1540124543");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_95);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_95.insert(UnderlyingSecurityAltID_95.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_95("STRING_312875943");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_95);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_95.insert(UnderlyingSecurityAltIDSource_95.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_95);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_89;
      FIX::UnderlyingStipType UnderlyingStipType_89("STRING_1796430538");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_89);
      UnderlyingStipulations_NoUnderlyingStips_89.insert(UnderlyingStipType_89.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_89("STRING_1674429367");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_89);
      UnderlyingStipulations_NoUnderlyingStips_89.insert(UnderlyingStipValue_89.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_89);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_83;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_83("STRING_639615948");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyID_83.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_83('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyIDSource_83.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_83(135325378);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyRole_83.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_83);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_162("STRING_1564839047");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_162);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162.insert(UnderlyingInstrumentPartySubID_162.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_162(356891059);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_162);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162.insert(UnderlyingInstrumentPartySubIDType_162.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_163("STRING_1944603800");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_163);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163.insert(UnderlyingInstrumentPartySubID_163.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_163(1008623257);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_163);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163.insert(UnderlyingInstrumentPartySubIDType_163.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_84;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_84("STRING_388505012");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyID_84.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_84('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyIDSource_84.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_84(742801358);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyRole_84.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_84);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_164("STRING_768341960");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_164);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164.insert(UnderlyingInstrumentPartySubID_164.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_164(1322642622);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_164);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164.insert(UnderlyingInstrumentPartySubIDType_164.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_165("STRING_709148985");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_165);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165.insert(UnderlyingInstrumentPartySubID_165.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_165(1862519500);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_165);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165.insert(UnderlyingInstrumentPartySubIDType_165.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_166("STRING_1042395550");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_166);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166.insert(UnderlyingInstrumentPartySubID_166.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_166(1742515472);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_166);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166.insert(UnderlyingInstrumentPartySubIDType_166.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_85;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_85("STRING_1370928164");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyID_85.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_85('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyIDSource_85.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_85(919634636);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyRole_85.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_85);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_167("STRING_2057214136");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_167);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167.insert(UnderlyingInstrumentPartySubID_167.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_167(105378656);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_167);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167.insert(UnderlyingInstrumentPartySubIDType_167.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_168("STRING_254786271");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_168);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168.insert(UnderlyingInstrumentPartySubID_168.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_168(1449855031);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_168);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168.insert(UnderlyingInstrumentPartySubIDType_168.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_169("STRING_418254600");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_169);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169.insert(UnderlyingInstrumentPartySubID_169.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_169(246571598);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_169);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169.insert(UnderlyingInstrumentPartySubIDType_169.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_6;
  FIX::Yield Yield_6;
  Yield_6.setString("19.210000");
  msg.set(Yield_6);
  YieldData_6.insert(Yield_6.getString());
  FIX::YieldCalcDate YieldCalcDate_6("LOCALMKTDATE_2092683967");
  msg.set(YieldCalcDate_6);
  YieldData_6.insert(YieldCalcDate_6.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_6("LOCALMKTDATE_317672899");
  msg.set(YieldRedemptionDate_6);
  YieldData_6.insert(YieldRedemptionDate_6.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_6;
  YieldRedemptionPrice_6.setString("17384178");
  msg.set(YieldRedemptionPrice_6);
  YieldData_6.insert(YieldRedemptionPrice_6.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_6(843186434);
  msg.set(YieldRedemptionPriceType_6);
  YieldData_6.insert(YieldRedemptionPriceType_6.getString());
  FIX::YieldType YieldType_6("STRING_PUT");
  msg.set(YieldType_6);
  YieldData_6.insert(YieldType_6.getString());
  all_values.push_back(YieldData_6);
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
