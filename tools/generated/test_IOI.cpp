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
  multiset<string> IOI_0;
  FIX::Currency Currency_21("JPY");
  msg.set(Currency_21);
  IOI_0.insert(Currency_21.getString());
  FIX::EncodedText EncodedText_37("DATA_132275935");
  msg.set(EncodedText_37);
  IOI_0.insert(EncodedText_37.getString());
  FIX::EncodedTextLen EncodedTextLen_37(1201027718);
  msg.set(EncodedTextLen_37);
  IOI_0.insert(EncodedTextLen_37.getString());
  FIX::IOIID IOIID_1("STRING_81832052");
  msg.set(IOIID_1);
  IOI_0.insert(IOIID_1.getString());
  FIX::IOINaturalFlag IOINaturalFlag_0(true);
  msg.set(IOINaturalFlag_0);
  IOI_0.insert(IOINaturalFlag_0.getString());
  FIX::IOIQltyInd IOIQltyInd_0('M');
  msg.set(IOIQltyInd_0);
  IOI_0.insert(IOIQltyInd_0.getString());
  FIX::IOIQty IOIQty_0("STRING_M");
  msg.set(IOIQty_0);
  IOI_0.insert(IOIQty_0.getString());
  FIX::IOIRefID IOIRefID_0("STRING_841114521");
  msg.set(IOIRefID_0);
  IOI_0.insert(IOIRefID_0.getString());
  FIX::IOITransType IOITransType_0('N');
  msg.set(IOITransType_0);
  IOI_0.insert(IOITransType_0.getString());
  FIX::Price Price_9;
  Price_9.setString("15883816");
  msg.set(Price_9);
  IOI_0.insert(Price_9.getString());
  FIX::PriceType PriceType_16(6);
  msg.set(PriceType_16);
  IOI_0.insert(PriceType_16.getString());
  FIX::QtyType QtyType_13(2);
  msg.set(QtyType_13);
  IOI_0.insert(QtyType_13.getString());
  FIX::Side Side_17('D');
  msg.set(Side_17);
  IOI_0.insert(Side_17.getString());
  FIX::Text Text_37("STRING_1032303753");
  msg.set(Text_37);
  IOI_0.insert(Text_37.getString());
  FIX::TransactTime TransactTime_19(FIX::UTCTIMESTAMP(21, 47, 23, 2, 4, 2016));
  msg.set(TransactTime_19);
  IOI_0.insert(TransactTime_19.getString());
  FIX::URLLink URLLink_1("STRING_1349384370");
  msg.set(URLLink_1);
  IOI_0.insert(URLLink_1.getString());
  FIX::ValidUntilTime ValidUntilTime_0(FIX::UTCTIMESTAMP(7, 52, 40, 1, 6, 2016));
  msg.set(ValidUntilTime_0);
  IOI_0.insert(ValidUntilTime_0.getString());
  all_values.push_back(IOI_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_5;
  FIX::ApplID ApplID_5("STRING_583304466");
  msg.set(ApplID_5);
  ApplicationSequenceControl_5.insert(ApplID_5.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_5(1470244070);
  msg.set(ApplLastSeqNum_5);
  ApplicationSequenceControl_5.insert(ApplLastSeqNum_5.getString());
  FIX::ApplResendFlag ApplResendFlag_5(true);
  msg.set(ApplResendFlag_5);
  ApplicationSequenceControl_5.insert(ApplResendFlag_5.getString());
  FIX::ApplSeqNum ApplSeqNum_5(715580401);
  msg.set(ApplSeqNum_5);
  ApplicationSequenceControl_5.insert(ApplSeqNum_5.getString());
  all_values.push_back(ApplicationSequenceControl_5);

  // FinancingDetails
  multiset<string> FinancingDetails_11;
  FIX::AgreementCurrency AgreementCurrency_11("GBP");
  msg.set(AgreementCurrency_11);
  FinancingDetails_11.insert(AgreementCurrency_11.getString());
  FIX::AgreementDate AgreementDate_11("LOCALMKTDATE_541348785");
  msg.set(AgreementDate_11);
  FinancingDetails_11.insert(AgreementDate_11.getString());
  FIX::AgreementDesc AgreementDesc_11("STRING_622436135");
  msg.set(AgreementDesc_11);
  FinancingDetails_11.insert(AgreementDesc_11.getString());
  FIX::AgreementID AgreementID_11("STRING_1226381348");
  msg.set(AgreementID_11);
  FinancingDetails_11.insert(AgreementID_11.getString());
  FIX::DeliveryType DeliveryType_11(3);
  msg.set(DeliveryType_11);
  FinancingDetails_11.insert(DeliveryType_11.getString());
  FIX::EndDate EndDate_11("LOCALMKTDATE_1755929198");
  msg.set(EndDate_11);
  FinancingDetails_11.insert(EndDate_11.getString());
  FIX::MarginRatio MarginRatio_11;
  MarginRatio_11.setString("93.940000");
  msg.set(MarginRatio_11);
  FinancingDetails_11.insert(MarginRatio_11.getString());
  FIX::StartDate StartDate_11("LOCALMKTDATE_1446036252");
  msg.set(StartDate_11);
  FinancingDetails_11.insert(StartDate_11.getString());
  FIX::TerminationType TerminationType_11(4);
  msg.set(TerminationType_11);
  FinancingDetails_11.insert(TerminationType_11.getString());
  all_values.push_back(FinancingDetails_11);

  // IOIQualGrp
  // Group IOIQualGrp.NoIOIQualifiers
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_0;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_0;
    FIX::IOIQualifier IOIQualifier_0('V');
    noIOIQualifiers_0_0.set(IOIQualifier_0);
    IOIQualGrp_NoIOIQualifiers_0.insert(IOIQualifier_0.getString());
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_0);

    msg.addGroup(noIOIQualifiers_0_0);
  }
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_1;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_1;
    FIX::IOIQualifier IOIQualifier_1('Y');
    noIOIQualifiers_0_1.set(IOIQualifier_1);
    IOIQualGrp_NoIOIQualifiers_1.insert(IOIQualifier_1.getString());
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_1);

    msg.addGroup(noIOIQualifiers_0_1);
  }
  // InstrmtLegIOIGrp
  // Group InstrmtLegIOIGrp.NoLegs
  {
    FIX50SP2::IOI::NoLegs noLegs_0_0;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_0;
    FIX::LegIOIQty LegIOIQty_0("STRING_155137816");
    noLegs_0_0.set(LegIOIQty_0);
    InstrmtLegIOIGrp_NoLegs_0.insert(LegIOIQty_0.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_49;
    FIX::EncodedLegIssuer EncodedLegIssuer_49("DATA_694323021");
    noLegs_0_0.set(EncodedLegIssuer_49);
    InstrumentLeg_49.insert(EncodedLegIssuer_49.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_49(423905786);
    noLegs_0_0.set(EncodedLegIssuerLen_49);
    InstrumentLeg_49.insert(EncodedLegIssuerLen_49.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_49("DATA_2139963152");
    noLegs_0_0.set(EncodedLegSecurityDesc_49);
    InstrumentLeg_49.insert(EncodedLegSecurityDesc_49.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_49(1082812592);
    noLegs_0_0.set(EncodedLegSecurityDescLen_49);
    InstrumentLeg_49.insert(EncodedLegSecurityDescLen_49.getString());
    FIX::LegCFICode LegCFICode_49("STRING_1773290156");
    noLegs_0_0.set(LegCFICode_49);
    InstrumentLeg_49.insert(LegCFICode_49.getString());
    FIX::LegContractMultiplier LegContractMultiplier_49;
    LegContractMultiplier_49.setString("18055389");
    noLegs_0_0.set(LegContractMultiplier_49);
    InstrumentLeg_49.insert(LegContractMultiplier_49.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_49(136618039);
    noLegs_0_0.set(LegContractMultiplierUnit_49);
    InstrumentLeg_49.insert(LegContractMultiplierUnit_49.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_49("MONTHYEAR_15367900");
    noLegs_0_0.set(LegContractSettlMonth_49);
    InstrumentLeg_49.insert(LegContractSettlMonth_49.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_49("COUNTRY_290449878");
    noLegs_0_0.set(LegCountryOfIssue_49);
    InstrumentLeg_49.insert(LegCountryOfIssue_49.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_49("LOCALMKTDATE_297037460");
    noLegs_0_0.set(LegCouponPaymentDate_49);
    InstrumentLeg_49.insert(LegCouponPaymentDate_49.getString());
    FIX::LegCouponRate LegCouponRate_49;
    LegCouponRate_49.setString("4.170000");
    noLegs_0_0.set(LegCouponRate_49);
    InstrumentLeg_49.insert(LegCouponRate_49.getString());
    FIX::LegCreditRating LegCreditRating_49("STRING_994236071");
    noLegs_0_0.set(LegCreditRating_49);
    InstrumentLeg_49.insert(LegCreditRating_49.getString());
    FIX::LegCurrency LegCurrency_49("CAN");
    noLegs_0_0.set(LegCurrency_49);
    InstrumentLeg_49.insert(LegCurrency_49.getString());
    FIX::LegDatedDate LegDatedDate_49("LOCALMKTDATE_1416053225");
    noLegs_0_0.set(LegDatedDate_49);
    InstrumentLeg_49.insert(LegDatedDate_49.getString());
    FIX::LegExerciseStyle LegExerciseStyle_49(1595922327);
    noLegs_0_0.set(LegExerciseStyle_49);
    InstrumentLeg_49.insert(LegExerciseStyle_49.getString());
    FIX::LegFactor LegFactor_49;
    LegFactor_49.setString("3013489");
    noLegs_0_0.set(LegFactor_49);
    InstrumentLeg_49.insert(LegFactor_49.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_49(1919702432);
    noLegs_0_0.set(LegFlowScheduleType_49);
    InstrumentLeg_49.insert(LegFlowScheduleType_49.getString());
    FIX::LegInstrRegistry LegInstrRegistry_49("STRING_2137271112");
    noLegs_0_0.set(LegInstrRegistry_49);
    InstrumentLeg_49.insert(LegInstrRegistry_49.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_49("LOCALMKTDATE_923785116");
    noLegs_0_0.set(LegInterestAccrualDate_49);
    InstrumentLeg_49.insert(LegInterestAccrualDate_49.getString());
    FIX::LegIssueDate LegIssueDate_49("LOCALMKTDATE_998600132");
    noLegs_0_0.set(LegIssueDate_49);
    InstrumentLeg_49.insert(LegIssueDate_49.getString());
    FIX::LegIssuer LegIssuer_49("STRING_1372250771");
    noLegs_0_0.set(LegIssuer_49);
    InstrumentLeg_49.insert(LegIssuer_49.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_49("STRING_532230666");
    noLegs_0_0.set(LegLocaleOfIssue_49);
    InstrumentLeg_49.insert(LegLocaleOfIssue_49.getString());
    FIX::LegMaturityDate LegMaturityDate_49("LOCALMKTDATE_1665879526");
    noLegs_0_0.set(LegMaturityDate_49);
    InstrumentLeg_49.insert(LegMaturityDate_49.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_49("MONTHYEAR_670803376");
    noLegs_0_0.set(LegMaturityMonthYear_49);
    InstrumentLeg_49.insert(LegMaturityMonthYear_49.getString());
    FIX::LegMaturityTime LegMaturityTime_49("TZTIMEONLY_292243569");
    noLegs_0_0.set(LegMaturityTime_49);
    InstrumentLeg_49.insert(LegMaturityTime_49.getString());
    FIX::LegOptAttribute LegOptAttribute_49('6');
    noLegs_0_0.set(LegOptAttribute_49);
    InstrumentLeg_49.insert(LegOptAttribute_49.getString());
    FIX::LegOptionRatio LegOptionRatio_49;
    LegOptionRatio_49.setString("10016597");
    noLegs_0_0.set(LegOptionRatio_49);
    InstrumentLeg_49.insert(LegOptionRatio_49.getString());
    FIX::LegPool LegPool_49("STRING_809715668");
    noLegs_0_0.set(LegPool_49);
    InstrumentLeg_49.insert(LegPool_49.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_49("STRING_460972080");
    noLegs_0_0.set(LegPriceUnitOfMeasure_49);
    InstrumentLeg_49.insert(LegPriceUnitOfMeasure_49.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_49;
    LegPriceUnitOfMeasureQty_49.setString("11567975");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_49);
    InstrumentLeg_49.insert(LegPriceUnitOfMeasureQty_49.getString());
    FIX::LegProduct LegProduct_49(1504038689);
    noLegs_0_0.set(LegProduct_49);
    InstrumentLeg_49.insert(LegProduct_49.getString());
    FIX::LegPutOrCall LegPutOrCall_49(884877866);
    noLegs_0_0.set(LegPutOrCall_49);
    InstrumentLeg_49.insert(LegPutOrCall_49.getString());
    FIX::LegRatioQty LegRatioQty_49;
    LegRatioQty_49.setString("11492770");
    noLegs_0_0.set(LegRatioQty_49);
    InstrumentLeg_49.insert(LegRatioQty_49.getString());
    FIX::LegRedemptionDate LegRedemptionDate_49("LOCALMKTDATE_439367633");
    noLegs_0_0.set(LegRedemptionDate_49);
    InstrumentLeg_49.insert(LegRedemptionDate_49.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_49("STRING_510684374");
    noLegs_0_0.set(LegRepoCollateralSecurityType_49);
    InstrumentLeg_49.insert(LegRepoCollateralSecurityType_49.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_49;
    LegRepurchaseRate_49.setString("23.520000");
    noLegs_0_0.set(LegRepurchaseRate_49);
    InstrumentLeg_49.insert(LegRepurchaseRate_49.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_49(575985672);
    noLegs_0_0.set(LegRepurchaseTerm_49);
    InstrumentLeg_49.insert(LegRepurchaseTerm_49.getString());
    FIX::LegSecurityDesc LegSecurityDesc_49("STRING_526052274");
    noLegs_0_0.set(LegSecurityDesc_49);
    InstrumentLeg_49.insert(LegSecurityDesc_49.getString());
    FIX::LegSecurityExchange LegSecurityExchange_49("EXCHANGE_1097782230");
    noLegs_0_0.set(LegSecurityExchange_49);
    InstrumentLeg_49.insert(LegSecurityExchange_49.getString());
    FIX::LegSecurityID LegSecurityID_49("STRING_873023132");
    noLegs_0_0.set(LegSecurityID_49);
    InstrumentLeg_49.insert(LegSecurityID_49.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_49("STRING_980852691");
    noLegs_0_0.set(LegSecurityIDSource_49);
    InstrumentLeg_49.insert(LegSecurityIDSource_49.getString());
    FIX::LegSecuritySubType LegSecuritySubType_49("STRING_2092018301");
    noLegs_0_0.set(LegSecuritySubType_49);
    InstrumentLeg_49.insert(LegSecuritySubType_49.getString());
    FIX::LegSecurityType LegSecurityType_49("STRING_1753365058");
    noLegs_0_0.set(LegSecurityType_49);
    InstrumentLeg_49.insert(LegSecurityType_49.getString());
    FIX::LegSide LegSide_49('7');
    noLegs_0_0.set(LegSide_49);
    InstrumentLeg_49.insert(LegSide_49.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_49("STRING_1360587879");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_49);
    InstrumentLeg_49.insert(LegStateOrProvinceOfIssue_49.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_49("EUR");
    noLegs_0_0.set(LegStrikeCurrency_49);
    InstrumentLeg_49.insert(LegStrikeCurrency_49.getString());
    FIX::LegStrikePrice LegStrikePrice_49;
    LegStrikePrice_49.setString("11328066");
    noLegs_0_0.set(LegStrikePrice_49);
    InstrumentLeg_49.insert(LegStrikePrice_49.getString());
    FIX::LegSymbol LegSymbol_49("STRING_1191591202");
    noLegs_0_0.set(LegSymbol_49);
    InstrumentLeg_49.insert(LegSymbol_49.getString());
    FIX::LegSymbolSfx LegSymbolSfx_49("STRING_1983547627");
    noLegs_0_0.set(LegSymbolSfx_49);
    InstrumentLeg_49.insert(LegSymbolSfx_49.getString());
    FIX::LegTimeUnit LegTimeUnit_49("STRING_2131406795");
    noLegs_0_0.set(LegTimeUnit_49);
    InstrumentLeg_49.insert(LegTimeUnit_49.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_49("STRING_416358325");
    noLegs_0_0.set(LegUnitOfMeasure_49);
    InstrumentLeg_49.insert(LegUnitOfMeasure_49.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_49;
    LegUnitOfMeasureQty_49.setString("3682946");
    noLegs_0_0.set(LegUnitOfMeasureQty_49);
    InstrumentLeg_49.insert(LegUnitOfMeasureQty_49.getString());
    all_values.push_back(InstrumentLeg_49);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_91;
      FIX::LegSecurityAltID LegSecurityAltID_91("STRING_1087161701");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_91);
      LegSecAltIDGrp_NoLegSecurityAltID_91.insert(LegSecurityAltID_91.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_91("STRING_660538215");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_91);
      LegSecAltIDGrp_NoLegSecurityAltID_91.insert(LegSecurityAltIDSource_91.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_91);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_92;
      FIX::LegSecurityAltID LegSecurityAltID_92("STRING_153772997");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_92);
      LegSecAltIDGrp_NoLegSecurityAltID_92.insert(LegSecurityAltID_92.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_92("STRING_2088821435");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_92);
      LegSecAltIDGrp_NoLegSecurityAltID_92.insert(LegSecurityAltIDSource_92.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_92);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_5;
      FIX::LegStipulationType LegStipulationType_5("STRING_614745078");
      noLegStipulations_0_1_0.set(LegStipulationType_5);
      LegStipulations_NoLegStipulations_5.insert(LegStipulationType_5.getString());
      FIX::LegStipulationValue LegStipulationValue_5("STRING_1098135337");
      noLegStipulations_0_1_0.set(LegStipulationValue_5);
      LegStipulations_NoLegStipulations_5.insert(LegStipulationValue_5.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_5);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_6;
      FIX::LegStipulationType LegStipulationType_6("STRING_826808925");
      noLegStipulations_0_1_1.set(LegStipulationType_6);
      LegStipulations_NoLegStipulations_6.insert(LegStipulationType_6.getString());
      FIX::LegStipulationValue LegStipulationValue_6("STRING_1499622944");
      noLegStipulations_0_1_1.set(LegStipulationValue_6);
      LegStipulations_NoLegStipulations_6.insert(LegStipulationValue_6.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_6);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_7;
      FIX::LegStipulationType LegStipulationType_7("STRING_99928743");
      noLegStipulations_0_1_2.set(LegStipulationType_7);
      LegStipulations_NoLegStipulations_7.insert(LegStipulationType_7.getString());
      FIX::LegStipulationValue LegStipulationValue_7("STRING_1266176558");
      noLegStipulations_0_1_2.set(LegStipulationValue_7);
      LegStipulations_NoLegStipulations_7.insert(LegStipulationValue_7.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_7);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_1;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_1;
    FIX::LegIOIQty LegIOIQty_1("STRING_2010307319");
    noLegs_0_1.set(LegIOIQty_1);
    InstrmtLegIOIGrp_NoLegs_1.insert(LegIOIQty_1.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_50;
    FIX::EncodedLegIssuer EncodedLegIssuer_50("DATA_907261095");
    noLegs_0_1.set(EncodedLegIssuer_50);
    InstrumentLeg_50.insert(EncodedLegIssuer_50.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_50(1842162231);
    noLegs_0_1.set(EncodedLegIssuerLen_50);
    InstrumentLeg_50.insert(EncodedLegIssuerLen_50.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_50("DATA_388875945");
    noLegs_0_1.set(EncodedLegSecurityDesc_50);
    InstrumentLeg_50.insert(EncodedLegSecurityDesc_50.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_50(2005043325);
    noLegs_0_1.set(EncodedLegSecurityDescLen_50);
    InstrumentLeg_50.insert(EncodedLegSecurityDescLen_50.getString());
    FIX::LegCFICode LegCFICode_50("STRING_567701715");
    noLegs_0_1.set(LegCFICode_50);
    InstrumentLeg_50.insert(LegCFICode_50.getString());
    FIX::LegContractMultiplier LegContractMultiplier_50;
    LegContractMultiplier_50.setString("13697286");
    noLegs_0_1.set(LegContractMultiplier_50);
    InstrumentLeg_50.insert(LegContractMultiplier_50.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_50(1949577979);
    noLegs_0_1.set(LegContractMultiplierUnit_50);
    InstrumentLeg_50.insert(LegContractMultiplierUnit_50.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_50("MONTHYEAR_173583126");
    noLegs_0_1.set(LegContractSettlMonth_50);
    InstrumentLeg_50.insert(LegContractSettlMonth_50.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_50("COUNTRY_2128142168");
    noLegs_0_1.set(LegCountryOfIssue_50);
    InstrumentLeg_50.insert(LegCountryOfIssue_50.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_50("LOCALMKTDATE_1162682210");
    noLegs_0_1.set(LegCouponPaymentDate_50);
    InstrumentLeg_50.insert(LegCouponPaymentDate_50.getString());
    FIX::LegCouponRate LegCouponRate_50;
    LegCouponRate_50.setString("68.630000");
    noLegs_0_1.set(LegCouponRate_50);
    InstrumentLeg_50.insert(LegCouponRate_50.getString());
    FIX::LegCreditRating LegCreditRating_50("STRING_1040421031");
    noLegs_0_1.set(LegCreditRating_50);
    InstrumentLeg_50.insert(LegCreditRating_50.getString());
    FIX::LegCurrency LegCurrency_50("EUR");
    noLegs_0_1.set(LegCurrency_50);
    InstrumentLeg_50.insert(LegCurrency_50.getString());
    FIX::LegDatedDate LegDatedDate_50("LOCALMKTDATE_876485011");
    noLegs_0_1.set(LegDatedDate_50);
    InstrumentLeg_50.insert(LegDatedDate_50.getString());
    FIX::LegExerciseStyle LegExerciseStyle_50(131928372);
    noLegs_0_1.set(LegExerciseStyle_50);
    InstrumentLeg_50.insert(LegExerciseStyle_50.getString());
    FIX::LegFactor LegFactor_50;
    LegFactor_50.setString("8358527");
    noLegs_0_1.set(LegFactor_50);
    InstrumentLeg_50.insert(LegFactor_50.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_50(1244779657);
    noLegs_0_1.set(LegFlowScheduleType_50);
    InstrumentLeg_50.insert(LegFlowScheduleType_50.getString());
    FIX::LegInstrRegistry LegInstrRegistry_50("STRING_1781731045");
    noLegs_0_1.set(LegInstrRegistry_50);
    InstrumentLeg_50.insert(LegInstrRegistry_50.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_50("LOCALMKTDATE_1923014444");
    noLegs_0_1.set(LegInterestAccrualDate_50);
    InstrumentLeg_50.insert(LegInterestAccrualDate_50.getString());
    FIX::LegIssueDate LegIssueDate_50("LOCALMKTDATE_1905317872");
    noLegs_0_1.set(LegIssueDate_50);
    InstrumentLeg_50.insert(LegIssueDate_50.getString());
    FIX::LegIssuer LegIssuer_50("STRING_1935504042");
    noLegs_0_1.set(LegIssuer_50);
    InstrumentLeg_50.insert(LegIssuer_50.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_50("STRING_1864352231");
    noLegs_0_1.set(LegLocaleOfIssue_50);
    InstrumentLeg_50.insert(LegLocaleOfIssue_50.getString());
    FIX::LegMaturityDate LegMaturityDate_50("LOCALMKTDATE_1228088108");
    noLegs_0_1.set(LegMaturityDate_50);
    InstrumentLeg_50.insert(LegMaturityDate_50.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_50("MONTHYEAR_402765472");
    noLegs_0_1.set(LegMaturityMonthYear_50);
    InstrumentLeg_50.insert(LegMaturityMonthYear_50.getString());
    FIX::LegMaturityTime LegMaturityTime_50("TZTIMEONLY_815003920");
    noLegs_0_1.set(LegMaturityTime_50);
    InstrumentLeg_50.insert(LegMaturityTime_50.getString());
    FIX::LegOptAttribute LegOptAttribute_50('2');
    noLegs_0_1.set(LegOptAttribute_50);
    InstrumentLeg_50.insert(LegOptAttribute_50.getString());
    FIX::LegOptionRatio LegOptionRatio_50;
    LegOptionRatio_50.setString("19023884");
    noLegs_0_1.set(LegOptionRatio_50);
    InstrumentLeg_50.insert(LegOptionRatio_50.getString());
    FIX::LegPool LegPool_50("STRING_914932663");
    noLegs_0_1.set(LegPool_50);
    InstrumentLeg_50.insert(LegPool_50.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_50("STRING_1173589943");
    noLegs_0_1.set(LegPriceUnitOfMeasure_50);
    InstrumentLeg_50.insert(LegPriceUnitOfMeasure_50.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_50;
    LegPriceUnitOfMeasureQty_50.setString("17652120");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_50);
    InstrumentLeg_50.insert(LegPriceUnitOfMeasureQty_50.getString());
    FIX::LegProduct LegProduct_50(1822193758);
    noLegs_0_1.set(LegProduct_50);
    InstrumentLeg_50.insert(LegProduct_50.getString());
    FIX::LegPutOrCall LegPutOrCall_50(868268526);
    noLegs_0_1.set(LegPutOrCall_50);
    InstrumentLeg_50.insert(LegPutOrCall_50.getString());
    FIX::LegRatioQty LegRatioQty_50;
    LegRatioQty_50.setString("66043");
    noLegs_0_1.set(LegRatioQty_50);
    InstrumentLeg_50.insert(LegRatioQty_50.getString());
    FIX::LegRedemptionDate LegRedemptionDate_50("LOCALMKTDATE_1679753436");
    noLegs_0_1.set(LegRedemptionDate_50);
    InstrumentLeg_50.insert(LegRedemptionDate_50.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_50("STRING_1435970242");
    noLegs_0_1.set(LegRepoCollateralSecurityType_50);
    InstrumentLeg_50.insert(LegRepoCollateralSecurityType_50.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_50;
    LegRepurchaseRate_50.setString("30.220000");
    noLegs_0_1.set(LegRepurchaseRate_50);
    InstrumentLeg_50.insert(LegRepurchaseRate_50.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_50(1481847767);
    noLegs_0_1.set(LegRepurchaseTerm_50);
    InstrumentLeg_50.insert(LegRepurchaseTerm_50.getString());
    FIX::LegSecurityDesc LegSecurityDesc_50("STRING_1609553368");
    noLegs_0_1.set(LegSecurityDesc_50);
    InstrumentLeg_50.insert(LegSecurityDesc_50.getString());
    FIX::LegSecurityExchange LegSecurityExchange_50("EXCHANGE_1356991542");
    noLegs_0_1.set(LegSecurityExchange_50);
    InstrumentLeg_50.insert(LegSecurityExchange_50.getString());
    FIX::LegSecurityID LegSecurityID_50("STRING_497046329");
    noLegs_0_1.set(LegSecurityID_50);
    InstrumentLeg_50.insert(LegSecurityID_50.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_50("STRING_837456583");
    noLegs_0_1.set(LegSecurityIDSource_50);
    InstrumentLeg_50.insert(LegSecurityIDSource_50.getString());
    FIX::LegSecuritySubType LegSecuritySubType_50("STRING_249928926");
    noLegs_0_1.set(LegSecuritySubType_50);
    InstrumentLeg_50.insert(LegSecuritySubType_50.getString());
    FIX::LegSecurityType LegSecurityType_50("STRING_645051554");
    noLegs_0_1.set(LegSecurityType_50);
    InstrumentLeg_50.insert(LegSecurityType_50.getString());
    FIX::LegSide LegSide_50('1');
    noLegs_0_1.set(LegSide_50);
    InstrumentLeg_50.insert(LegSide_50.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_50("STRING_1126413937");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_50);
    InstrumentLeg_50.insert(LegStateOrProvinceOfIssue_50.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_50("USD");
    noLegs_0_1.set(LegStrikeCurrency_50);
    InstrumentLeg_50.insert(LegStrikeCurrency_50.getString());
    FIX::LegStrikePrice LegStrikePrice_50;
    LegStrikePrice_50.setString("2237099");
    noLegs_0_1.set(LegStrikePrice_50);
    InstrumentLeg_50.insert(LegStrikePrice_50.getString());
    FIX::LegSymbol LegSymbol_50("STRING_411227323");
    noLegs_0_1.set(LegSymbol_50);
    InstrumentLeg_50.insert(LegSymbol_50.getString());
    FIX::LegSymbolSfx LegSymbolSfx_50("STRING_1868334540");
    noLegs_0_1.set(LegSymbolSfx_50);
    InstrumentLeg_50.insert(LegSymbolSfx_50.getString());
    FIX::LegTimeUnit LegTimeUnit_50("STRING_2129027818");
    noLegs_0_1.set(LegTimeUnit_50);
    InstrumentLeg_50.insert(LegTimeUnit_50.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_50("STRING_199247717");
    noLegs_0_1.set(LegUnitOfMeasure_50);
    InstrumentLeg_50.insert(LegUnitOfMeasure_50.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_50;
    LegUnitOfMeasureQty_50.setString("15852031");
    noLegs_0_1.set(LegUnitOfMeasureQty_50);
    InstrumentLeg_50.insert(LegUnitOfMeasureQty_50.getString());
    all_values.push_back(InstrumentLeg_50);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_93;
      FIX::LegSecurityAltID LegSecurityAltID_93("STRING_602013190");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_93);
      LegSecAltIDGrp_NoLegSecurityAltID_93.insert(LegSecurityAltID_93.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_93("STRING_252723396");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_93);
      LegSecAltIDGrp_NoLegSecurityAltID_93.insert(LegSecurityAltIDSource_93.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_93);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_94;
      FIX::LegSecurityAltID LegSecurityAltID_94("STRING_1117045663");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_94);
      LegSecAltIDGrp_NoLegSecurityAltID_94.insert(LegSecurityAltID_94.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_94("STRING_356917959");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_94);
      LegSecAltIDGrp_NoLegSecurityAltID_94.insert(LegSecurityAltIDSource_94.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_94);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_8;
      FIX::LegStipulationType LegStipulationType_8("STRING_143151959");
      noLegStipulations_1_1_0.set(LegStipulationType_8);
      LegStipulations_NoLegStipulations_8.insert(LegStipulationType_8.getString());
      FIX::LegStipulationValue LegStipulationValue_8("STRING_2122130047");
      noLegStipulations_1_1_0.set(LegStipulationValue_8);
      LegStipulations_NoLegStipulations_8.insert(LegStipulationValue_8.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_8);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_9;
      FIX::LegStipulationType LegStipulationType_9("STRING_842366170");
      noLegStipulations_1_1_1.set(LegStipulationType_9);
      LegStipulations_NoLegStipulations_9.insert(LegStipulationType_9.getString());
      FIX::LegStipulationValue LegStipulationValue_9("STRING_1011420485");
      noLegStipulations_1_1_1.set(LegStipulationValue_9);
      LegStipulations_NoLegStipulations_9.insert(LegStipulationValue_9.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_9);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_10;
      FIX::LegStipulationType LegStipulationType_10("STRING_2128734432");
      noLegStipulations_1_1_2.set(LegStipulationType_10);
      LegStipulations_NoLegStipulations_10.insert(LegStipulationType_10.getString());
      FIX::LegStipulationValue LegStipulationValue_10("STRING_374635958");
      noLegStipulations_1_1_2.set(LegStipulationValue_10);
      LegStipulations_NoLegStipulations_10.insert(LegStipulationValue_10.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_10);

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_2;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_2;
    FIX::LegIOIQty LegIOIQty_2("STRING_299907079");
    noLegs_0_2.set(LegIOIQty_2);
    InstrmtLegIOIGrp_NoLegs_2.insert(LegIOIQty_2.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_51;
    FIX::EncodedLegIssuer EncodedLegIssuer_51("DATA_1357583807");
    noLegs_0_2.set(EncodedLegIssuer_51);
    InstrumentLeg_51.insert(EncodedLegIssuer_51.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_51(1856483725);
    noLegs_0_2.set(EncodedLegIssuerLen_51);
    InstrumentLeg_51.insert(EncodedLegIssuerLen_51.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_51("DATA_1909460447");
    noLegs_0_2.set(EncodedLegSecurityDesc_51);
    InstrumentLeg_51.insert(EncodedLegSecurityDesc_51.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_51(567091701);
    noLegs_0_2.set(EncodedLegSecurityDescLen_51);
    InstrumentLeg_51.insert(EncodedLegSecurityDescLen_51.getString());
    FIX::LegCFICode LegCFICode_51("STRING_206046406");
    noLegs_0_2.set(LegCFICode_51);
    InstrumentLeg_51.insert(LegCFICode_51.getString());
    FIX::LegContractMultiplier LegContractMultiplier_51;
    LegContractMultiplier_51.setString("5994333");
    noLegs_0_2.set(LegContractMultiplier_51);
    InstrumentLeg_51.insert(LegContractMultiplier_51.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_51(817020627);
    noLegs_0_2.set(LegContractMultiplierUnit_51);
    InstrumentLeg_51.insert(LegContractMultiplierUnit_51.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_51("MONTHYEAR_851097960");
    noLegs_0_2.set(LegContractSettlMonth_51);
    InstrumentLeg_51.insert(LegContractSettlMonth_51.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_51("COUNTRY_1856384384");
    noLegs_0_2.set(LegCountryOfIssue_51);
    InstrumentLeg_51.insert(LegCountryOfIssue_51.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_51("LOCALMKTDATE_1943434564");
    noLegs_0_2.set(LegCouponPaymentDate_51);
    InstrumentLeg_51.insert(LegCouponPaymentDate_51.getString());
    FIX::LegCouponRate LegCouponRate_51;
    LegCouponRate_51.setString("78.860000");
    noLegs_0_2.set(LegCouponRate_51);
    InstrumentLeg_51.insert(LegCouponRate_51.getString());
    FIX::LegCreditRating LegCreditRating_51("STRING_1801704480");
    noLegs_0_2.set(LegCreditRating_51);
    InstrumentLeg_51.insert(LegCreditRating_51.getString());
    FIX::LegCurrency LegCurrency_51("CHF");
    noLegs_0_2.set(LegCurrency_51);
    InstrumentLeg_51.insert(LegCurrency_51.getString());
    FIX::LegDatedDate LegDatedDate_51("LOCALMKTDATE_1522555372");
    noLegs_0_2.set(LegDatedDate_51);
    InstrumentLeg_51.insert(LegDatedDate_51.getString());
    FIX::LegExerciseStyle LegExerciseStyle_51(1205033);
    noLegs_0_2.set(LegExerciseStyle_51);
    InstrumentLeg_51.insert(LegExerciseStyle_51.getString());
    FIX::LegFactor LegFactor_51;
    LegFactor_51.setString("910692");
    noLegs_0_2.set(LegFactor_51);
    InstrumentLeg_51.insert(LegFactor_51.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_51(960274848);
    noLegs_0_2.set(LegFlowScheduleType_51);
    InstrumentLeg_51.insert(LegFlowScheduleType_51.getString());
    FIX::LegInstrRegistry LegInstrRegistry_51("STRING_1210837311");
    noLegs_0_2.set(LegInstrRegistry_51);
    InstrumentLeg_51.insert(LegInstrRegistry_51.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_51("LOCALMKTDATE_693082469");
    noLegs_0_2.set(LegInterestAccrualDate_51);
    InstrumentLeg_51.insert(LegInterestAccrualDate_51.getString());
    FIX::LegIssueDate LegIssueDate_51("LOCALMKTDATE_1212998245");
    noLegs_0_2.set(LegIssueDate_51);
    InstrumentLeg_51.insert(LegIssueDate_51.getString());
    FIX::LegIssuer LegIssuer_51("STRING_180399327");
    noLegs_0_2.set(LegIssuer_51);
    InstrumentLeg_51.insert(LegIssuer_51.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_51("STRING_1050000428");
    noLegs_0_2.set(LegLocaleOfIssue_51);
    InstrumentLeg_51.insert(LegLocaleOfIssue_51.getString());
    FIX::LegMaturityDate LegMaturityDate_51("LOCALMKTDATE_233170657");
    noLegs_0_2.set(LegMaturityDate_51);
    InstrumentLeg_51.insert(LegMaturityDate_51.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_51("MONTHYEAR_323551286");
    noLegs_0_2.set(LegMaturityMonthYear_51);
    InstrumentLeg_51.insert(LegMaturityMonthYear_51.getString());
    FIX::LegMaturityTime LegMaturityTime_51("TZTIMEONLY_1024646827");
    noLegs_0_2.set(LegMaturityTime_51);
    InstrumentLeg_51.insert(LegMaturityTime_51.getString());
    FIX::LegOptAttribute LegOptAttribute_51('1');
    noLegs_0_2.set(LegOptAttribute_51);
    InstrumentLeg_51.insert(LegOptAttribute_51.getString());
    FIX::LegOptionRatio LegOptionRatio_51;
    LegOptionRatio_51.setString("13349717");
    noLegs_0_2.set(LegOptionRatio_51);
    InstrumentLeg_51.insert(LegOptionRatio_51.getString());
    FIX::LegPool LegPool_51("STRING_1005897611");
    noLegs_0_2.set(LegPool_51);
    InstrumentLeg_51.insert(LegPool_51.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_51("STRING_1450172786");
    noLegs_0_2.set(LegPriceUnitOfMeasure_51);
    InstrumentLeg_51.insert(LegPriceUnitOfMeasure_51.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_51;
    LegPriceUnitOfMeasureQty_51.setString("16348788");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_51);
    InstrumentLeg_51.insert(LegPriceUnitOfMeasureQty_51.getString());
    FIX::LegProduct LegProduct_51(215997770);
    noLegs_0_2.set(LegProduct_51);
    InstrumentLeg_51.insert(LegProduct_51.getString());
    FIX::LegPutOrCall LegPutOrCall_51(1159172863);
    noLegs_0_2.set(LegPutOrCall_51);
    InstrumentLeg_51.insert(LegPutOrCall_51.getString());
    FIX::LegRatioQty LegRatioQty_51;
    LegRatioQty_51.setString("13968556");
    noLegs_0_2.set(LegRatioQty_51);
    InstrumentLeg_51.insert(LegRatioQty_51.getString());
    FIX::LegRedemptionDate LegRedemptionDate_51("LOCALMKTDATE_783089472");
    noLegs_0_2.set(LegRedemptionDate_51);
    InstrumentLeg_51.insert(LegRedemptionDate_51.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_51("STRING_1365219270");
    noLegs_0_2.set(LegRepoCollateralSecurityType_51);
    InstrumentLeg_51.insert(LegRepoCollateralSecurityType_51.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_51;
    LegRepurchaseRate_51.setString("90.330000");
    noLegs_0_2.set(LegRepurchaseRate_51);
    InstrumentLeg_51.insert(LegRepurchaseRate_51.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_51(1600110099);
    noLegs_0_2.set(LegRepurchaseTerm_51);
    InstrumentLeg_51.insert(LegRepurchaseTerm_51.getString());
    FIX::LegSecurityDesc LegSecurityDesc_51("STRING_68833582");
    noLegs_0_2.set(LegSecurityDesc_51);
    InstrumentLeg_51.insert(LegSecurityDesc_51.getString());
    FIX::LegSecurityExchange LegSecurityExchange_51("EXCHANGE_1705189769");
    noLegs_0_2.set(LegSecurityExchange_51);
    InstrumentLeg_51.insert(LegSecurityExchange_51.getString());
    FIX::LegSecurityID LegSecurityID_51("STRING_1396061016");
    noLegs_0_2.set(LegSecurityID_51);
    InstrumentLeg_51.insert(LegSecurityID_51.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_51("STRING_1696911469");
    noLegs_0_2.set(LegSecurityIDSource_51);
    InstrumentLeg_51.insert(LegSecurityIDSource_51.getString());
    FIX::LegSecuritySubType LegSecuritySubType_51("STRING_1359410601");
    noLegs_0_2.set(LegSecuritySubType_51);
    InstrumentLeg_51.insert(LegSecuritySubType_51.getString());
    FIX::LegSecurityType LegSecurityType_51("STRING_1415721878");
    noLegs_0_2.set(LegSecurityType_51);
    InstrumentLeg_51.insert(LegSecurityType_51.getString());
    FIX::LegSide LegSide_51('1');
    noLegs_0_2.set(LegSide_51);
    InstrumentLeg_51.insert(LegSide_51.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_51("STRING_734482326");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_51);
    InstrumentLeg_51.insert(LegStateOrProvinceOfIssue_51.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_51("CHF");
    noLegs_0_2.set(LegStrikeCurrency_51);
    InstrumentLeg_51.insert(LegStrikeCurrency_51.getString());
    FIX::LegStrikePrice LegStrikePrice_51;
    LegStrikePrice_51.setString("16947571");
    noLegs_0_2.set(LegStrikePrice_51);
    InstrumentLeg_51.insert(LegStrikePrice_51.getString());
    FIX::LegSymbol LegSymbol_51("STRING_480280575");
    noLegs_0_2.set(LegSymbol_51);
    InstrumentLeg_51.insert(LegSymbol_51.getString());
    FIX::LegSymbolSfx LegSymbolSfx_51("STRING_225401130");
    noLegs_0_2.set(LegSymbolSfx_51);
    InstrumentLeg_51.insert(LegSymbolSfx_51.getString());
    FIX::LegTimeUnit LegTimeUnit_51("STRING_760271771");
    noLegs_0_2.set(LegTimeUnit_51);
    InstrumentLeg_51.insert(LegTimeUnit_51.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_51("STRING_660679902");
    noLegs_0_2.set(LegUnitOfMeasure_51);
    InstrumentLeg_51.insert(LegUnitOfMeasure_51.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_51;
    LegUnitOfMeasureQty_51.setString("12754015");
    noLegs_0_2.set(LegUnitOfMeasureQty_51);
    InstrumentLeg_51.insert(LegUnitOfMeasureQty_51.getString());
    all_values.push_back(InstrumentLeg_51);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_95;
      FIX::LegSecurityAltID LegSecurityAltID_95("STRING_984231188");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_95);
      LegSecAltIDGrp_NoLegSecurityAltID_95.insert(LegSecurityAltID_95.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_95("STRING_152564737");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_95);
      LegSecAltIDGrp_NoLegSecurityAltID_95.insert(LegSecurityAltIDSource_95.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_95);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_11;
      FIX::LegStipulationType LegStipulationType_11("STRING_171719311");
      noLegStipulations_2_1_0.set(LegStipulationType_11);
      LegStipulations_NoLegStipulations_11.insert(LegStipulationType_11.getString());
      FIX::LegStipulationValue LegStipulationValue_11("STRING_1158462349");
      noLegStipulations_2_1_0.set(LegStipulationValue_11);
      LegStipulations_NoLegStipulations_11.insert(LegStipulationValue_11.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_11);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_28;
  FIX::AttachmentPoint AttachmentPoint_28;
  AttachmentPoint_28.setString("83.940000");
  msg.set(AttachmentPoint_28);
  Instrument_28.insert(AttachmentPoint_28.getString());
  FIX::CFICode CFICode_28("STRING_1806598162");
  msg.set(CFICode_28);
  Instrument_28.insert(CFICode_28.getString());
  FIX::CPProgram CPProgram_28(1);
  msg.set(CPProgram_28);
  Instrument_28.insert(CPProgram_28.getString());
  FIX::CPRegType CPRegType_28("STRING_383357609");
  msg.set(CPRegType_28);
  Instrument_28.insert(CPRegType_28.getString());
  FIX::CapPrice CapPrice_28;
  CapPrice_28.setString("10559701");
  msg.set(CapPrice_28);
  Instrument_28.insert(CapPrice_28.getString());
  FIX::ContractMultiplier ContractMultiplier_28;
  ContractMultiplier_28.setString("100659");
  msg.set(ContractMultiplier_28);
  Instrument_28.insert(ContractMultiplier_28.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_28(2);
  msg.set(ContractMultiplierUnit_28);
  Instrument_28.insert(ContractMultiplierUnit_28.getString());
  FIX::ContractSettlMonth ContractSettlMonth_28("MONTHYEAR_904775550");
  msg.set(ContractSettlMonth_28);
  Instrument_28.insert(ContractSettlMonth_28.getString());
  FIX::CountryOfIssue CountryOfIssue_28("COUNTRY_1610176043");
  msg.set(CountryOfIssue_28);
  Instrument_28.insert(CountryOfIssue_28.getString());
  FIX::CouponPaymentDate CouponPaymentDate_28("LOCALMKTDATE_1817410462");
  msg.set(CouponPaymentDate_28);
  Instrument_28.insert(CouponPaymentDate_28.getString());
  FIX::CouponRate CouponRate_28;
  CouponRate_28.setString("16.720000");
  msg.set(CouponRate_28);
  Instrument_28.insert(CouponRate_28.getString());
  FIX::CreditRating CreditRating_28("STRING_858753411");
  msg.set(CreditRating_28);
  Instrument_28.insert(CreditRating_28.getString());
  FIX::DatedDate DatedDate_28("LOCALMKTDATE_1366838283");
  msg.set(DatedDate_28);
  Instrument_28.insert(DatedDate_28.getString());
  FIX::DetachmentPoint DetachmentPoint_28;
  DetachmentPoint_28.setString("22.730000");
  msg.set(DetachmentPoint_28);
  Instrument_28.insert(DetachmentPoint_28.getString());
  FIX::EncodedIssuer EncodedIssuer_28("DATA_126991641");
  msg.set(EncodedIssuer_28);
  Instrument_28.insert(EncodedIssuer_28.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_28(808087665);
  msg.set(EncodedIssuerLen_28);
  Instrument_28.insert(EncodedIssuerLen_28.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_28("DATA_408890951");
  msg.set(EncodedSecurityDesc_28);
  Instrument_28.insert(EncodedSecurityDesc_28.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_28(1543918553);
  msg.set(EncodedSecurityDescLen_28);
  Instrument_28.insert(EncodedSecurityDescLen_28.getString());
  FIX::ExerciseStyle ExerciseStyle_28(2);
  msg.set(ExerciseStyle_28);
  Instrument_28.insert(ExerciseStyle_28.getString());
  FIX::Factor Factor_28;
  Factor_28.setString("21036481");
  msg.set(Factor_28);
  Instrument_28.insert(Factor_28.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_28(true);
  msg.set(FlexProductEligibilityIndicator_28);
  Instrument_28.insert(FlexProductEligibilityIndicator_28.getString());
  FIX::FlexibleIndicator FlexibleIndicator_28(false);
  msg.set(FlexibleIndicator_28);
  Instrument_28.insert(FlexibleIndicator_28.getString());
  FIX::FloorPrice FloorPrice_28;
  FloorPrice_28.setString("7164362");
  msg.set(FloorPrice_28);
  Instrument_28.insert(FloorPrice_28.getString());
  FIX::FlowScheduleType FlowScheduleType_28(2);
  msg.set(FlowScheduleType_28);
  Instrument_28.insert(FlowScheduleType_28.getString());
  FIX::InstrRegistry InstrRegistry_28("STRING_1841209016");
  msg.set(InstrRegistry_28);
  Instrument_28.insert(InstrRegistry_28.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_28('1');
  msg.set(InstrmtAssignmentMethod_28);
  Instrument_28.insert(InstrmtAssignmentMethod_28.getString());
  FIX::InterestAccrualDate InterestAccrualDate_28("LOCALMKTDATE_1521626570");
  msg.set(InterestAccrualDate_28);
  Instrument_28.insert(InterestAccrualDate_28.getString());
  FIX::IssueDate IssueDate_28("LOCALMKTDATE_1993773753");
  msg.set(IssueDate_28);
  Instrument_28.insert(IssueDate_28.getString());
  FIX::Issuer Issuer_28("STRING_1631374286");
  msg.set(Issuer_28);
  Instrument_28.insert(Issuer_28.getString());
  FIX::ListMethod ListMethod_28(1);
  msg.set(ListMethod_28);
  Instrument_28.insert(ListMethod_28.getString());
  FIX::LocaleOfIssue LocaleOfIssue_28("STRING_1004752454");
  msg.set(LocaleOfIssue_28);
  Instrument_28.insert(LocaleOfIssue_28.getString());
  FIX::MaturityDate MaturityDate_28("LOCALMKTDATE_855559032");
  msg.set(MaturityDate_28);
  Instrument_28.insert(MaturityDate_28.getString());
  FIX::MaturityMonthYear MaturityMonthYear_28("MONTHYEAR_1352460396");
  msg.set(MaturityMonthYear_28);
  Instrument_28.insert(MaturityMonthYear_28.getString());
  FIX::MaturityTime MaturityTime_28("TZTIMEONLY_231728926");
  msg.set(MaturityTime_28);
  Instrument_28.insert(MaturityTime_28.getString());
  FIX::MinPriceIncrement MinPriceIncrement_28;
  MinPriceIncrement_28.setString("12389166");
  msg.set(MinPriceIncrement_28);
  Instrument_28.insert(MinPriceIncrement_28.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_28;
  MinPriceIncrementAmount_28.setString("2609469");
  msg.set(MinPriceIncrementAmount_28);
  Instrument_28.insert(MinPriceIncrementAmount_28.getString());
  FIX::NTPositionLimit NTPositionLimit_28(241794869);
  msg.set(NTPositionLimit_28);
  Instrument_28.insert(NTPositionLimit_28.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_28;
  NotionalPercentageOutstanding_28.setString("98.730000");
  msg.set(NotionalPercentageOutstanding_28);
  Instrument_28.insert(NotionalPercentageOutstanding_28.getString());
  FIX::OptAttribute OptAttribute_28('1');
  msg.set(OptAttribute_28);
  Instrument_28.insert(OptAttribute_28.getString());
  FIX::OptPayoutAmount OptPayoutAmount_28;
  OptPayoutAmount_28.setString("18519709");
  msg.set(OptPayoutAmount_28);
  Instrument_28.insert(OptPayoutAmount_28.getString());
  FIX::OptPayoutType OptPayoutType_28(3);
  msg.set(OptPayoutType_28);
  Instrument_28.insert(OptPayoutType_28.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_28;
  OriginalNotionalPercentageOutstanding_28.setString("41.350000");
  msg.set(OriginalNotionalPercentageOutstanding_28);
  Instrument_28.insert(OriginalNotionalPercentageOutstanding_28.getString());
  FIX::Pool Pool_28("STRING_563240675");
  msg.set(Pool_28);
  Instrument_28.insert(Pool_28.getString());
  FIX::PositionLimit PositionLimit_28(1876774970);
  msg.set(PositionLimit_28);
  Instrument_28.insert(PositionLimit_28.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_28("STRING_INX");
  msg.set(PriceQuoteMethod_28);
  Instrument_28.insert(PriceQuoteMethod_28.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_28("STRING_690232317");
  msg.set(PriceUnitOfMeasure_28);
  Instrument_28.insert(PriceUnitOfMeasure_28.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_28;
  PriceUnitOfMeasureQty_28.setString("5373789");
  msg.set(PriceUnitOfMeasureQty_28);
  Instrument_28.insert(PriceUnitOfMeasureQty_28.getString());
  FIX::Product Product_30(10);
  msg.set(Product_30);
  Instrument_28.insert(Product_30.getString());
  FIX::ProductComplex ProductComplex_28("STRING_86667222");
  msg.set(ProductComplex_28);
  Instrument_28.insert(ProductComplex_28.getString());
  FIX::PutOrCall PutOrCall_28(0);
  msg.set(PutOrCall_28);
  Instrument_28.insert(PutOrCall_28.getString());
  FIX::RedemptionDate RedemptionDate_28("LOCALMKTDATE_1667668190");
  msg.set(RedemptionDate_28);
  Instrument_28.insert(RedemptionDate_28.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_28("STRING_2110866350");
  msg.set(RepoCollateralSecurityType_28);
  Instrument_28.insert(RepoCollateralSecurityType_28.getString());
  FIX::RepurchaseRate RepurchaseRate_28;
  RepurchaseRate_28.setString("27.720000");
  msg.set(RepurchaseRate_28);
  Instrument_28.insert(RepurchaseRate_28.getString());
  FIX::RepurchaseTerm RepurchaseTerm_28(236620792);
  msg.set(RepurchaseTerm_28);
  Instrument_28.insert(RepurchaseTerm_28.getString());
  FIX::RestructuringType RestructuringType_28("STRING_FR");
  msg.set(RestructuringType_28);
  Instrument_28.insert(RestructuringType_28.getString());
  FIX::SecurityDesc SecurityDesc_28("STRING_1137318140");
  msg.set(SecurityDesc_28);
  Instrument_28.insert(SecurityDesc_28.getString());
  FIX::SecurityExchange SecurityExchange_28("EXCHANGE_1946499470");
  msg.set(SecurityExchange_28);
  Instrument_28.insert(SecurityExchange_28.getString());
  FIX::SecurityGroup SecurityGroup_28("STRING_2022404654");
  msg.set(SecurityGroup_28);
  Instrument_28.insert(SecurityGroup_28.getString());
  FIX::SecurityID SecurityID_28("STRING_983608245");
  msg.set(SecurityID_28);
  Instrument_28.insert(SecurityID_28.getString());
  FIX::SecurityIDSource SecurityIDSource_28("STRING_5");
  msg.set(SecurityIDSource_28);
  Instrument_28.insert(SecurityIDSource_28.getString());
  FIX::SecurityStatus SecurityStatus_28("STRING_2");
  msg.set(SecurityStatus_28);
  Instrument_28.insert(SecurityStatus_28.getString());
  FIX::SecuritySubType SecuritySubType_29("STRING_1988360700");
  msg.set(SecuritySubType_29);
  Instrument_28.insert(SecuritySubType_29.getString());
  FIX::SecurityType SecurityType_30("STRING_TNOTE");
  msg.set(SecurityType_30);
  Instrument_28.insert(SecurityType_30.getString());
  FIX::Seniority Seniority_28("STRING_SR");
  msg.set(Seniority_28);
  Instrument_28.insert(Seniority_28.getString());
  FIX::SettlMethod SettlMethod_28('C');
  msg.set(SettlMethod_28);
  Instrument_28.insert(SettlMethod_28.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_28("STRING_1377382133");
  msg.set(SettleOnOpenFlag_28);
  Instrument_28.insert(SettleOnOpenFlag_28.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_28("STRING_1034190548");
  msg.set(StateOrProvinceOfIssue_28);
  Instrument_28.insert(StateOrProvinceOfIssue_28.getString());
  FIX::StrikeCurrency StrikeCurrency_28("USD");
  msg.set(StrikeCurrency_28);
  Instrument_28.insert(StrikeCurrency_28.getString());
  FIX::StrikeMultiplier StrikeMultiplier_28;
  StrikeMultiplier_28.setString("524293");
  msg.set(StrikeMultiplier_28);
  Instrument_28.insert(StrikeMultiplier_28.getString());
  FIX::StrikePrice StrikePrice_28;
  StrikePrice_28.setString("188881");
  msg.set(StrikePrice_28);
  Instrument_28.insert(StrikePrice_28.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_28(1);
  msg.set(StrikePriceBoundaryMethod_28);
  Instrument_28.insert(StrikePriceBoundaryMethod_28.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_28;
  StrikePriceBoundaryPrecision_28.setString("34.990000");
  msg.set(StrikePriceBoundaryPrecision_28);
  Instrument_28.insert(StrikePriceBoundaryPrecision_28.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_28(4);
  msg.set(StrikePriceDeterminationMethod_28);
  Instrument_28.insert(StrikePriceDeterminationMethod_28.getString());
  FIX::StrikeValue StrikeValue_28;
  StrikeValue_28.setString("3091363");
  msg.set(StrikeValue_28);
  Instrument_28.insert(StrikeValue_28.getString());
  FIX::Symbol Symbol_28("STRING_835762612");
  msg.set(Symbol_28);
  Instrument_28.insert(Symbol_28.getString());
  FIX::SymbolSfx SymbolSfx_28("STRING_CD");
  msg.set(SymbolSfx_28);
  Instrument_28.insert(SymbolSfx_28.getString());
  FIX::TimeUnit TimeUnit_28("STRING_H");
  msg.set(TimeUnit_28);
  Instrument_28.insert(TimeUnit_28.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_28(2);
  msg.set(UnderlyingPriceDeterminationMethod_28);
  Instrument_28.insert(UnderlyingPriceDeterminationMethod_28.getString());
  FIX::UnitOfMeasure UnitOfMeasure_28("STRING_lbs");
  msg.set(UnitOfMeasure_28);
  Instrument_28.insert(UnitOfMeasure_28.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_28;
  UnitOfMeasureQty_28.setString("17243006");
  msg.set(UnitOfMeasureQty_28);
  Instrument_28.insert(UnitOfMeasureQty_28.getString());
  FIX::ValuationMethod ValuationMethod_28("STRING_FUTDA");
  msg.set(ValuationMethod_28);
  Instrument_28.insert(ValuationMethod_28.getString());
  all_values.push_back(Instrument_28);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_51;
    FIX::ComplexEventCondition ComplexEventCondition_51(2);
    noComplexEvents_0_0.set(ComplexEventCondition_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventCondition_51.getString());
    FIX::ComplexEventPrice ComplexEventPrice_51;
    ComplexEventPrice_51.setString("1565880");
    noComplexEvents_0_0.set(ComplexEventPrice_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPrice_51.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_51(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceBoundaryMethod_51.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_51;
    ComplexEventPriceBoundaryPrecision_51.setString("42.850000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceBoundaryPrecision_51.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_51(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceTimeType_51.getString());
    FIX::ComplexEventType ComplexEventType_51(1);
    noComplexEvents_0_0.set(ComplexEventType_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventType_51.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_51;
    ComplexOptPayoutAmount_51.setString("9938525");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexOptPayoutAmount_51.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_51);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_100;
      FIX::ComplexEventEndDate ComplexEventEndDate_100(FIX::UTCTIMESTAMP(7, 13, 33, 13, 12, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_100);
      ComplexEventDates_NoComplexEventDates_100.insert(ComplexEventEndDate_100.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_100(FIX::UTCTIMESTAMP(5, 18, 20, 27, 6, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_100);
      ComplexEventDates_NoComplexEventDates_100.insert(ComplexEventStartDate_100.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_100);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_202;
        FIX::ComplexEventEndTime ComplexEventEndTime_202(FIX::UTCTIMEONLY(4, 17, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_202);
        ComplexEventTimes_NoComplexEventTimes_202.insert(ComplexEventEndTime_202.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_202(FIX::UTCTIMEONLY(11, 18, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_202);
        ComplexEventTimes_NoComplexEventTimes_202.insert(ComplexEventStartTime_202.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_202);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_203;
        FIX::ComplexEventEndTime ComplexEventEndTime_203(FIX::UTCTIMEONLY(6, 56, 38));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_203);
        ComplexEventTimes_NoComplexEventTimes_203.insert(ComplexEventEndTime_203.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_203(FIX::UTCTIMEONLY(6, 29, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_203);
        ComplexEventTimes_NoComplexEventTimes_203.insert(ComplexEventStartTime_203.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_203);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_101;
      FIX::ComplexEventEndDate ComplexEventEndDate_101(FIX::UTCTIMESTAMP(4, 22, 10, 17, 10, 2006));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_101);
      ComplexEventDates_NoComplexEventDates_101.insert(ComplexEventEndDate_101.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_101(FIX::UTCTIMESTAMP(3, 54, 6, 22, 12, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_101);
      ComplexEventDates_NoComplexEventDates_101.insert(ComplexEventStartDate_101.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_101);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_204;
        FIX::ComplexEventEndTime ComplexEventEndTime_204(FIX::UTCTIMEONLY(6, 14, 36));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_204);
        ComplexEventTimes_NoComplexEventTimes_204.insert(ComplexEventEndTime_204.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_204(FIX::UTCTIMEONLY(17, 47, 37));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_204);
        ComplexEventTimes_NoComplexEventTimes_204.insert(ComplexEventStartTime_204.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_204);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_205;
        FIX::ComplexEventEndTime ComplexEventEndTime_205(FIX::UTCTIMEONLY(21, 25, 55));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_205);
        ComplexEventTimes_NoComplexEventTimes_205.insert(ComplexEventEndTime_205.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_205(FIX::UTCTIMEONLY(7, 16, 41));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_205);
        ComplexEventTimes_NoComplexEventTimes_205.insert(ComplexEventStartTime_205.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_205);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_206;
        FIX::ComplexEventEndTime ComplexEventEndTime_206(FIX::UTCTIMEONLY(8, 4, 10));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_206);
        ComplexEventTimes_NoComplexEventTimes_206.insert(ComplexEventEndTime_206.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_206(FIX::UTCTIMEONLY(5, 46, 23));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_206);
        ComplexEventTimes_NoComplexEventTimes_206.insert(ComplexEventStartTime_206.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_206);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
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
    multiset<string> EvntGrp_NoEvents_53;
    FIX::EventDate EventDate_53("LOCALMKTDATE_2097200740");
    noEvents_0_0.set(EventDate_53);
    EvntGrp_NoEvents_53.insert(EventDate_53.getString());
    FIX::EventPx EventPx_53;
    EventPx_53.setString("14174630");
    noEvents_0_0.set(EventPx_53);
    EvntGrp_NoEvents_53.insert(EventPx_53.getString());
    FIX::EventText EventText_53("STRING_1171686582");
    noEvents_0_0.set(EventText_53);
    EvntGrp_NoEvents_53.insert(EventText_53.getString());
    FIX::EventTime EventTime_53(FIX::UTCTIMESTAMP(11, 39, 33, 17, 10, 2001));
    noEvents_0_0.set(EventTime_53);
    EvntGrp_NoEvents_53.insert(EventTime_53.getString());
    FIX::EventType EventType_53(8);
    noEvents_0_0.set(EventType_53);
    EvntGrp_NoEvents_53.insert(EventType_53.getString());
    all_values.push_back(EvntGrp_NoEvents_53);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_58;
    FIX::InstrumentPartyID InstrumentPartyID_58("STRING_979331680");
    noInstrumentParties_0_0.set(InstrumentPartyID_58);
    InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyID_58.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_58('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_58);
    InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyIDSource_58.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_58(1695774355);
    noInstrumentParties_0_0.set(InstrumentPartyRole_58);
    InstrumentParties_NoInstrumentParties_58.insert(InstrumentPartyRole_58.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_58);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122;
      FIX::InstrumentPartySubID InstrumentPartySubID_122("STRING_617765413");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_122);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122.insert(InstrumentPartySubID_122.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_122(480069043);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_122);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122.insert(InstrumentPartySubIDType_122.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123;
      FIX::InstrumentPartySubID InstrumentPartySubID_123("STRING_221860146");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_123);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123.insert(InstrumentPartySubID_123.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_123(227248956);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_123);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123.insert(InstrumentPartySubIDType_123.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_59;
    FIX::InstrumentPartyID InstrumentPartyID_59("STRING_1277966759");
    noInstrumentParties_0_1.set(InstrumentPartyID_59);
    InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyID_59.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_59('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_59);
    InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyIDSource_59.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_59(1663544264);
    noInstrumentParties_0_1.set(InstrumentPartyRole_59);
    InstrumentParties_NoInstrumentParties_59.insert(InstrumentPartyRole_59.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_59);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124;
      FIX::InstrumentPartySubID InstrumentPartySubID_124("STRING_937921483");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_124);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124.insert(InstrumentPartySubID_124.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_124(376337386);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_124);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124.insert(InstrumentPartySubIDType_124.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_60;
    FIX::InstrumentPartyID InstrumentPartyID_60("STRING_1588677349");
    noInstrumentParties_0_2.set(InstrumentPartyID_60);
    InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyID_60.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_60('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_60);
    InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyIDSource_60.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_60(1439439512);
    noInstrumentParties_0_2.set(InstrumentPartyRole_60);
    InstrumentParties_NoInstrumentParties_60.insert(InstrumentPartyRole_60.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_60);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125;
      FIX::InstrumentPartySubID InstrumentPartySubID_125("STRING_1436809729");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_125);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125.insert(InstrumentPartySubID_125.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_125(1389156604);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_125);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125.insert(InstrumentPartySubIDType_125.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126;
      FIX::InstrumentPartySubID InstrumentPartySubID_126("STRING_353057897");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_126);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126.insert(InstrumentPartySubID_126.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_126(461012664);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_126);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126.insert(InstrumentPartySubIDType_126.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_60;
    FIX::SecurityAltID SecurityAltID_60("STRING_1221368716");
    noSecurityAltID_0_0.set(SecurityAltID_60);
    SecAltIDGrp_NoSecurityAltID_60.insert(SecurityAltID_60.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_60("STRING_133845055");
    noSecurityAltID_0_0.set(SecurityAltIDSource_60);
    SecAltIDGrp_NoSecurityAltID_60.insert(SecurityAltIDSource_60.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_60);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_61;
    FIX::SecurityAltID SecurityAltID_61("STRING_241890737");
    noSecurityAltID_0_1.set(SecurityAltID_61);
    SecAltIDGrp_NoSecurityAltID_61.insert(SecurityAltID_61.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_61("STRING_340674470");
    noSecurityAltID_0_1.set(SecurityAltIDSource_61);
    SecAltIDGrp_NoSecurityAltID_61.insert(SecurityAltIDSource_61.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_61);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_56;
  FIX::SecurityXML SecurityXML_57("XMLDATA_867586300");
  msg.set(SecurityXML_57);
  FIX::SecurityXMLLen SecurityXMLLen_28(1945061898);
  msg.set(SecurityXMLLen_28);
  FIX::SecurityXMLSchema SecurityXMLSchema_28("STRING_17634249");
  msg.set(SecurityXMLSchema_28);
  SecurityXML_56.insert(SecurityXMLSchema_28.getString());
  all_values.push_back(SecurityXML_56);

  // OrderQtyData
  multiset<string> OrderQtyData_6;
  FIX::CashOrderQty CashOrderQty_6;
  CashOrderQty_6.setString("5038491");
  msg.set(CashOrderQty_6);
  OrderQtyData_6.insert(CashOrderQty_6.getString());
  FIX::OrderPercent OrderPercent_6;
  OrderPercent_6.setString("99.310000");
  msg.set(OrderPercent_6);
  OrderQtyData_6.insert(OrderPercent_6.getString());
  FIX::OrderQty OrderQty_17;
  OrderQty_17.setString("17338345");
  msg.set(OrderQty_17);
  OrderQtyData_6.insert(OrderQty_17.getString());
  FIX::RoundingDirection RoundingDirection_6('0');
  msg.set(RoundingDirection_6);
  OrderQtyData_6.insert(RoundingDirection_6.getString());
  FIX::RoundingModulus RoundingModulus_6;
  RoundingModulus_6.setString("5614421");
  msg.set(RoundingModulus_6);
  OrderQtyData_6.insert(RoundingModulus_6.getString());
  all_values.push_back(OrderQtyData_6);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_42;
    FIX::PartyID PartyID_42("STRING_532208920");
    noPartyIDs_0_0.set(PartyID_42);
    Parties_NoPartyIDs_42.insert(PartyID_42.getString());
    FIX::PartyIDSource PartyIDSource_42('8');
    noPartyIDs_0_0.set(PartyIDSource_42);
    Parties_NoPartyIDs_42.insert(PartyIDSource_42.getString());
    FIX::PartyRole PartyRole_42(48);
    noPartyIDs_0_0.set(PartyRole_42);
    Parties_NoPartyIDs_42.insert(PartyRole_42.getString());
    all_values.push_back(Parties_NoPartyIDs_42);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_87;
      FIX::PartySubID PartySubID_87("STRING_165644478");
      noPartySubIDs_0_1_0.set(PartySubID_87);
      PtysSubGrp_NoPartySubIDs_87.insert(PartySubID_87.getString());
      FIX::PartySubIDType PartySubIDType_87(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_87);
      PtysSubGrp_NoPartySubIDs_87.insert(PartySubIDType_87.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_87);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_88;
      FIX::PartySubID PartySubID_88("STRING_291921824");
      noPartySubIDs_0_1_1.set(PartySubID_88);
      PtysSubGrp_NoPartySubIDs_88.insert(PartySubID_88.getString());
      FIX::PartySubIDType PartySubIDType_88(26);
      noPartySubIDs_0_1_1.set(PartySubIDType_88);
      PtysSubGrp_NoPartySubIDs_88.insert(PartySubIDType_88.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_88);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_43;
    FIX::PartyID PartyID_43("STRING_323763249");
    noPartyIDs_0_1.set(PartyID_43);
    Parties_NoPartyIDs_43.insert(PartyID_43.getString());
    FIX::PartyIDSource PartyIDSource_43('F');
    noPartyIDs_0_1.set(PartyIDSource_43);
    Parties_NoPartyIDs_43.insert(PartyIDSource_43.getString());
    FIX::PartyRole PartyRole_43(32);
    noPartyIDs_0_1.set(PartyRole_43);
    Parties_NoPartyIDs_43.insert(PartyRole_43.getString());
    all_values.push_back(Parties_NoPartyIDs_43);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_89;
      FIX::PartySubID PartySubID_89("STRING_816194070");
      noPartySubIDs_1_1_0.set(PartySubID_89);
      PtysSubGrp_NoPartySubIDs_89.insert(PartySubID_89.getString());
      FIX::PartySubIDType PartySubIDType_89(24);
      noPartySubIDs_1_1_0.set(PartySubIDType_89);
      PtysSubGrp_NoPartySubIDs_89.insert(PartySubIDType_89.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_89);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::IOI::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_1;
    FIX::RoutingID RoutingID_1("STRING_1169251967");
    noRoutingIDs_0_0.set(RoutingID_1);
    RoutingGrp_NoRoutingIDs_1.insert(RoutingID_1.getString());
    FIX::RoutingType RoutingType_1(1);
    noRoutingIDs_0_0.set(RoutingType_1);
    RoutingGrp_NoRoutingIDs_1.insert(RoutingType_1.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_1);

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::IOI::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_2;
    FIX::RoutingID RoutingID_2("STRING_1594787490");
    noRoutingIDs_0_1.set(RoutingID_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingID_2.getString());
    FIX::RoutingType RoutingType_2(1);
    noRoutingIDs_0_1.set(RoutingType_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingType_2.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_2);

    msg.addGroup(noRoutingIDs_0_1);
  }
  {
    FIX50SP2::IOI::NoRoutingIDs noRoutingIDs_0_2;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_3;
    FIX::RoutingID RoutingID_3("STRING_188254675");
    noRoutingIDs_0_2.set(RoutingID_3);
    RoutingGrp_NoRoutingIDs_3.insert(RoutingID_3.getString());
    FIX::RoutingType RoutingType_3(4);
    noRoutingIDs_0_2.set(RoutingType_3);
    RoutingGrp_NoRoutingIDs_3.insert(RoutingType_3.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_3);

    msg.addGroup(noRoutingIDs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_11;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_11("CAN");
  msg.set(BenchmarkCurveCurrency_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurveCurrency_11.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_11("STRING_SWAP");
  msg.set(BenchmarkCurveName_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurveName_11.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_11("STRING_601445755");
  msg.set(BenchmarkCurvePoint_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurvePoint_11.getString());
  FIX::BenchmarkPrice BenchmarkPrice_11;
  BenchmarkPrice_11.setString("15596901");
  msg.set(BenchmarkPrice_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkPrice_11.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_11(263682761);
  msg.set(BenchmarkPriceType_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkPriceType_11.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_11("STRING_187796632");
  msg.set(BenchmarkSecurityID_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkSecurityID_11.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_11("STRING_1611830022");
  msg.set(BenchmarkSecurityIDSource_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkSecurityIDSource_11.getString());
  FIX::Spread Spread_11;
  Spread_11.setString("8251248");
  msg.set(Spread_11);
  SpreadOrBenchmarkCurveData_11.insert(Spread_11.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_11);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_20;
    FIX::StipulationType StipulationType_20("STRING_MAXORDQTY");
    noStipulations_0_0.set(StipulationType_20);
    Stipulations_NoStipulations_20.insert(StipulationType_20.getString());
    FIX::StipulationValue StipulationValue_20("STRING_1608427132");
    noStipulations_0_0.set(StipulationValue_20);
    Stipulations_NoStipulations_20.insert(StipulationValue_20.getString());
    all_values.push_back(Stipulations_NoStipulations_20);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_21;
    FIX::StipulationType StipulationType_21("STRING_HAIRCUT");
    noStipulations_0_1.set(StipulationType_21);
    Stipulations_NoStipulations_21.insert(StipulationType_21.getString());
    FIX::StipulationValue StipulationValue_21("STRING_1806730975");
    noStipulations_0_1.set(StipulationValue_21);
    Stipulations_NoStipulations_21.insert(StipulationValue_21.getString());
    all_values.push_back(Stipulations_NoStipulations_21);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_22;
    FIX::StipulationType StipulationType_22("STRING_ISSUE");
    noStipulations_0_2.set(StipulationType_22);
    Stipulations_NoStipulations_22.insert(StipulationType_22.getString());
    FIX::StipulationValue StipulationValue_22("STRING_770704031");
    noStipulations_0_2.set(StipulationValue_22);
    Stipulations_NoStipulations_22.insert(StipulationValue_22.getString());
    all_values.push_back(Stipulations_NoStipulations_22);

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_43;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_43("DATA_730153923");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_43);
    UnderlyingInstrument_43.insert(EncodedUnderlyingIssuer_43.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_43(1094467281);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_43);
    UnderlyingInstrument_43.insert(EncodedUnderlyingIssuerLen_43.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_43("DATA_1831768324");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_43);
    UnderlyingInstrument_43.insert(EncodedUnderlyingSecurityDesc_43.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_43(1034224798);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_43);
    UnderlyingInstrument_43.insert(EncodedUnderlyingSecurityDescLen_43.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_43;
    UnderlyingAdjustedQuantity_43.setString("7101863");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_43);
    UnderlyingInstrument_43.insert(UnderlyingAdjustedQuantity_43.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_43;
    UnderlyingAllocationPercent_43.setString("87.460000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_43);
    UnderlyingInstrument_43.insert(UnderlyingAllocationPercent_43.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_43;
    UnderlyingAttachmentPoint_43.setString("17.540000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_43);
    UnderlyingInstrument_43.insert(UnderlyingAttachmentPoint_43.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_43("STRING_1715062113");
    noUnderlyings_0_0.set(UnderlyingCFICode_43);
    UnderlyingInstrument_43.insert(UnderlyingCFICode_43.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_43("STRING_1669730714");
    noUnderlyings_0_0.set(UnderlyingCPProgram_43);
    UnderlyingInstrument_43.insert(UnderlyingCPProgram_43.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_43("STRING_682031374");
    noUnderlyings_0_0.set(UnderlyingCPRegType_43);
    UnderlyingInstrument_43.insert(UnderlyingCPRegType_43.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_43;
    UnderlyingCapValue_43.setString("11623659");
    noUnderlyings_0_0.set(UnderlyingCapValue_43);
    UnderlyingInstrument_43.insert(UnderlyingCapValue_43.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_43;
    UnderlyingCashAmount_43.setString("19128677");
    noUnderlyings_0_0.set(UnderlyingCashAmount_43);
    UnderlyingInstrument_43.insert(UnderlyingCashAmount_43.getString());
    FIX::UnderlyingCashType UnderlyingCashType_43("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_43);
    UnderlyingInstrument_43.insert(UnderlyingCashType_43.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_43;
    UnderlyingContractMultiplier_43.setString("8515605");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_43);
    UnderlyingInstrument_43.insert(UnderlyingContractMultiplier_43.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_43(349195608);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_43);
    UnderlyingInstrument_43.insert(UnderlyingContractMultiplierUnit_43.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_43("COUNTRY_1926127024");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_43);
    UnderlyingInstrument_43.insert(UnderlyingCountryOfIssue_43.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_43("LOCALMKTDATE_338333365");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_43);
    UnderlyingInstrument_43.insert(UnderlyingCouponPaymentDate_43.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_43;
    UnderlyingCouponRate_43.setString("13.630000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_43);
    UnderlyingInstrument_43.insert(UnderlyingCouponRate_43.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_43("STRING_1338333521");
    noUnderlyings_0_0.set(UnderlyingCreditRating_43);
    UnderlyingInstrument_43.insert(UnderlyingCreditRating_43.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_43("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_43);
    UnderlyingInstrument_43.insert(UnderlyingCurrency_43.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_43;
    UnderlyingCurrentValue_43.setString("8026798");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_43);
    UnderlyingInstrument_43.insert(UnderlyingCurrentValue_43.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_43;
    UnderlyingDetachmentPoint_43.setString("10.000000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_43);
    UnderlyingInstrument_43.insert(UnderlyingDetachmentPoint_43.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_43;
    UnderlyingDirtyPrice_43.setString("15303509");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_43);
    UnderlyingInstrument_43.insert(UnderlyingDirtyPrice_43.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_43;
    UnderlyingEndPrice_43.setString("7992351");
    noUnderlyings_0_0.set(UnderlyingEndPrice_43);
    UnderlyingInstrument_43.insert(UnderlyingEndPrice_43.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_43;
    UnderlyingEndValue_43.setString("8880844");
    noUnderlyings_0_0.set(UnderlyingEndValue_43);
    UnderlyingInstrument_43.insert(UnderlyingEndValue_43.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_43(206145437);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_43);
    UnderlyingInstrument_43.insert(UnderlyingExerciseStyle_43.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_43;
    UnderlyingFXRate_43.setString("4584825");
    noUnderlyings_0_0.set(UnderlyingFXRate_43);
    UnderlyingInstrument_43.insert(UnderlyingFXRate_43.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_43('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_43);
    UnderlyingInstrument_43.insert(UnderlyingFXRateCalc_43.getString());
    FIX::UnderlyingFactor UnderlyingFactor_43;
    UnderlyingFactor_43.setString("9768494");
    noUnderlyings_0_0.set(UnderlyingFactor_43);
    UnderlyingInstrument_43.insert(UnderlyingFactor_43.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_43(409651668);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_43);
    UnderlyingInstrument_43.insert(UnderlyingFlowScheduleType_43.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_43("STRING_1244826369");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_43);
    UnderlyingInstrument_43.insert(UnderlyingInstrRegistry_43.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_43("LOCALMKTDATE_2071316750");
    noUnderlyings_0_0.set(UnderlyingIssueDate_43);
    UnderlyingInstrument_43.insert(UnderlyingIssueDate_43.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_43("STRING_93936345");
    noUnderlyings_0_0.set(UnderlyingIssuer_43);
    UnderlyingInstrument_43.insert(UnderlyingIssuer_43.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_43("STRING_131567519");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_43);
    UnderlyingInstrument_43.insert(UnderlyingLocaleOfIssue_43.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_43("LOCALMKTDATE_634019497");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_43);
    UnderlyingInstrument_43.insert(UnderlyingMaturityDate_43.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_43("MONTHYEAR_594415091");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_43);
    UnderlyingInstrument_43.insert(UnderlyingMaturityMonthYear_43.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_43("TZTIMEONLY_759189273");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_43);
    UnderlyingInstrument_43.insert(UnderlyingMaturityTime_43.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_43;
    UnderlyingNotionalPercentageOutstanding_43.setString("79.620000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_43);
    UnderlyingInstrument_43.insert(UnderlyingNotionalPercentageOutstanding_43.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_43('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_43);
    UnderlyingInstrument_43.insert(UnderlyingOptAttribute_43.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_43;
    UnderlyingOriginalNotionalPercentageOutstanding_43.setString("6.470000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_43);
    UnderlyingInstrument_43.insert(UnderlyingOriginalNotionalPercentageOutstanding_43.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_43("STRING_1363963918");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_43);
    UnderlyingInstrument_43.insert(UnderlyingPriceUnitOfMeasure_43.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_43;
    UnderlyingPriceUnitOfMeasureQty_43.setString("20295299");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_43);
    UnderlyingInstrument_43.insert(UnderlyingPriceUnitOfMeasureQty_43.getString());
    FIX::UnderlyingProduct UnderlyingProduct_43(164023048);
    noUnderlyings_0_0.set(UnderlyingProduct_43);
    UnderlyingInstrument_43.insert(UnderlyingProduct_43.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_43(68040806);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_43);
    UnderlyingInstrument_43.insert(UnderlyingPutOrCall_43.getString());
    FIX::UnderlyingPx UnderlyingPx_43;
    UnderlyingPx_43.setString("2312418");
    noUnderlyings_0_0.set(UnderlyingPx_43);
    UnderlyingInstrument_43.insert(UnderlyingPx_43.getString());
    FIX::UnderlyingQty UnderlyingQty_43;
    UnderlyingQty_43.setString("20901500");
    noUnderlyings_0_0.set(UnderlyingQty_43);
    UnderlyingInstrument_43.insert(UnderlyingQty_43.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_43("LOCALMKTDATE_406374171");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_43);
    UnderlyingInstrument_43.insert(UnderlyingRedemptionDate_43.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_43("STRING_1181883230");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_43);
    UnderlyingInstrument_43.insert(UnderlyingRepoCollateralSecurityType_43.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_43;
    UnderlyingRepurchaseRate_43.setString("99.450000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_43);
    UnderlyingInstrument_43.insert(UnderlyingRepurchaseRate_43.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_43(1008390298);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_43);
    UnderlyingInstrument_43.insert(UnderlyingRepurchaseTerm_43.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_43("STRING_172837577");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_43);
    UnderlyingInstrument_43.insert(UnderlyingRestructuringType_43.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_43("STRING_2083679841");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityDesc_43.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_43("EXCHANGE_288047650");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityExchange_43.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_43("STRING_1703188494");
    noUnderlyings_0_0.set(UnderlyingSecurityID_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityID_43.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_43("STRING_735431383");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityIDSource_43.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_43("STRING_1176132134");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_43);
    UnderlyingInstrument_43.insert(UnderlyingSecuritySubType_43.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_43("STRING_1909333932");
    noUnderlyings_0_0.set(UnderlyingSecurityType_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityType_43.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_43("STRING_1193913901");
    noUnderlyings_0_0.set(UnderlyingSeniority_43);
    UnderlyingInstrument_43.insert(UnderlyingSeniority_43.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_43("STRING_1690804580");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_43);
    UnderlyingInstrument_43.insert(UnderlyingSettlMethod_43.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_43(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_43);
    UnderlyingInstrument_43.insert(UnderlyingSettlementType_43.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_43;
    UnderlyingStartValue_43.setString("16035655");
    noUnderlyings_0_0.set(UnderlyingStartValue_43);
    UnderlyingInstrument_43.insert(UnderlyingStartValue_43.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_43("STRING_788147301");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_43);
    UnderlyingInstrument_43.insert(UnderlyingStateOrProvinceOfIssue_43.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_43("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_43);
    UnderlyingInstrument_43.insert(UnderlyingStrikeCurrency_43.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_43;
    UnderlyingStrikePrice_43.setString("9197148");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_43);
    UnderlyingInstrument_43.insert(UnderlyingStrikePrice_43.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_43("STRING_1296552352");
    noUnderlyings_0_0.set(UnderlyingSymbol_43);
    UnderlyingInstrument_43.insert(UnderlyingSymbol_43.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_43("STRING_144433358");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_43);
    UnderlyingInstrument_43.insert(UnderlyingSymbolSfx_43.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_43("STRING_1678904094");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_43);
    UnderlyingInstrument_43.insert(UnderlyingTimeUnit_43.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_43("STRING_1498150314");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_43);
    UnderlyingInstrument_43.insert(UnderlyingUnitOfMeasure_43.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_43;
    UnderlyingUnitOfMeasureQty_43.setString("2610955");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_43);
    UnderlyingInstrument_43.insert(UnderlyingUnitOfMeasureQty_43.getString());
    all_values.push_back(UnderlyingInstrument_43);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_89;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_89("STRING_714630585");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_89);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_89.insert(UnderlyingSecurityAltID_89.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_89("STRING_143141775");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_89);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_89.insert(UnderlyingSecurityAltIDSource_89.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_89);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_76;
      FIX::UnderlyingStipType UnderlyingStipType_76("STRING_782671391");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_76);
      UnderlyingStipulations_NoUnderlyingStips_76.insert(UnderlyingStipType_76.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_76("STRING_374383642");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_76);
      UnderlyingStipulations_NoUnderlyingStips_76.insert(UnderlyingStipValue_76.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_76);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_77;
      FIX::UnderlyingStipType UnderlyingStipType_77("STRING_1079330567");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_77);
      UnderlyingStipulations_NoUnderlyingStips_77.insert(UnderlyingStipType_77.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_77("STRING_1189045562");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_77);
      UnderlyingStipulations_NoUnderlyingStips_77.insert(UnderlyingStipValue_77.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_77);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_95;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_95("STRING_212846864");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_95);
      UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyID_95.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_95('4');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_95);
      UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyIDSource_95.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_95(1729104450);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_95);
      UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyRole_95.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_95);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_189("STRING_337999862");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_189);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189.insert(UnderlyingInstrumentPartySubID_189.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_189(1284809297);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_189);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189.insert(UnderlyingInstrumentPartySubIDType_189.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_96;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_96("STRING_884474441");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_96);
      UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyID_96.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_96('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_96);
      UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyIDSource_96.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_96(1046659581);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_96);
      UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyRole_96.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_96);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_190("STRING_1057452928");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_190);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190.insert(UnderlyingInstrumentPartySubID_190.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_190(1785359334);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_190);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190.insert(UnderlyingInstrumentPartySubIDType_190.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_6;
  FIX::Yield Yield_6;
  Yield_6.setString("2.630000");
  msg.set(Yield_6);
  YieldData_6.insert(Yield_6.getString());
  FIX::YieldCalcDate YieldCalcDate_6("LOCALMKTDATE_1845600230");
  msg.set(YieldCalcDate_6);
  YieldData_6.insert(YieldCalcDate_6.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_6("LOCALMKTDATE_300408541");
  msg.set(YieldRedemptionDate_6);
  YieldData_6.insert(YieldRedemptionDate_6.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_6;
  YieldRedemptionPrice_6.setString("10844885");
  msg.set(YieldRedemptionPrice_6);
  YieldData_6.insert(YieldRedemptionPrice_6.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_6(617831403);
  msg.set(YieldRedemptionPriceType_6);
  YieldData_6.insert(YieldRedemptionPriceType_6.getString());
  FIX::YieldType YieldType_6("STRING_ANNUAL");
  msg.set(YieldType_6);
  YieldData_6.insert(YieldType_6.getString());
  all_values.push_back(YieldData_6);


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
