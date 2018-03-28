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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::IOI msg;

  list<multiset<string>> all_values;
  multiset<string> IOI_0;
  FIX::Currency Currency_21("JPY");
  msg.set(Currency_21);
  IOI_0.insert(Currency_21.getString());
  FIX::EncodedText EncodedText_42("DATA_1725412627");
  msg.set(EncodedText_42);
  IOI_0.insert(EncodedText_42.getString());
  FIX::EncodedTextLen EncodedTextLen_42(1084388016);
  msg.set(EncodedTextLen_42);
  IOI_0.insert(EncodedTextLen_42.getString());
  FIX::IOIID IOIID_1("STRING_593318541");
  msg.set(IOIID_1);
  IOI_0.insert(IOIID_1.getString());
  FIX::IOINaturalFlag IOINaturalFlag_0(false);
  msg.set(IOINaturalFlag_0);
  IOI_0.insert(IOINaturalFlag_0.getString());
  FIX::IOIQltyInd IOIQltyInd_0('L');
  msg.set(IOIQltyInd_0);
  IOI_0.insert(IOIQltyInd_0.getString());
  FIX::IOIQty IOIQty_0("STRING_L");
  msg.set(IOIQty_0);
  IOI_0.insert(IOIQty_0.getString());
  FIX::IOIRefID IOIRefID_0("STRING_123531361");
  msg.set(IOIRefID_0);
  IOI_0.insert(IOIRefID_0.getString());
  FIX::IOITransType IOITransType_0('N');
  msg.set(IOITransType_0);
  IOI_0.insert(IOITransType_0.getString());
  FIX::Price Price_11;
  Price_11.setString("6020480");
  msg.set(Price_11);
  IOI_0.insert(Price_11.getString());
  FIX::PriceType PriceType_20(6);
  msg.set(PriceType_20);
  IOI_0.insert(PriceType_20.getString());
  FIX::QtyType QtyType_14(0);
  msg.set(QtyType_14);
  IOI_0.insert(QtyType_14.getString());
  FIX::Side Side_23('9');
  msg.set(Side_23);
  IOI_0.insert(Side_23.getString());
  FIX::Text Text_42("STRING_95951925");
  msg.set(Text_42);
  IOI_0.insert(Text_42.getString());
  FIX::TransactTime TransactTime_19(FIX::UTCTIMESTAMP(22, 5, 9, 15, 6, 2009));
  msg.set(TransactTime_19);
  IOI_0.insert(TransactTime_19.getString());
  FIX::URLLink URLLink_1("STRING_230079260");
  msg.set(URLLink_1);
  IOI_0.insert(URLLink_1.getString());
  FIX::ValidUntilTime ValidUntilTime_0(FIX::UTCTIMESTAMP(0, 35, 40, 20, 12, 2006));
  msg.set(ValidUntilTime_0);
  IOI_0.insert(ValidUntilTime_0.getString());
  all_values.push_back(IOI_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_5;
  FIX::ApplID ApplID_5("STRING_2086953353");
  msg.set(ApplID_5);
  ApplicationSequenceControl_5.insert(ApplID_5.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_5(1502884775);
  msg.set(ApplLastSeqNum_5);
  ApplicationSequenceControl_5.insert(ApplLastSeqNum_5.getString());
  FIX::ApplResendFlag ApplResendFlag_5(true);
  msg.set(ApplResendFlag_5);
  ApplicationSequenceControl_5.insert(ApplResendFlag_5.getString());
  FIX::ApplSeqNum ApplSeqNum_5(1664882332);
  msg.set(ApplSeqNum_5);
  ApplicationSequenceControl_5.insert(ApplSeqNum_5.getString());
  all_values.push_back(ApplicationSequenceControl_5);

  // FinancingDetails
  multiset<string> FinancingDetails_11;
  FIX::AgreementCurrency AgreementCurrency_11("CHF");
  msg.set(AgreementCurrency_11);
  FinancingDetails_11.insert(AgreementCurrency_11.getString());
  FIX::AgreementDate AgreementDate_11("LOCALMKTDATE_1403581885");
  msg.set(AgreementDate_11);
  FinancingDetails_11.insert(AgreementDate_11.getString());
  FIX::AgreementDesc AgreementDesc_11("STRING_330415617");
  msg.set(AgreementDesc_11);
  FinancingDetails_11.insert(AgreementDesc_11.getString());
  FIX::AgreementID AgreementID_11("STRING_537946437");
  msg.set(AgreementID_11);
  FinancingDetails_11.insert(AgreementID_11.getString());
  FIX::DeliveryType DeliveryType_11(3);
  msg.set(DeliveryType_11);
  FinancingDetails_11.insert(DeliveryType_11.getString());
  FIX::EndDate EndDate_11("LOCALMKTDATE_347038593");
  msg.set(EndDate_11);
  FinancingDetails_11.insert(EndDate_11.getString());
  FIX::MarginRatio MarginRatio_11;
  MarginRatio_11.setString("44.910000");
  msg.set(MarginRatio_11);
  FinancingDetails_11.insert(MarginRatio_11.getString());
  FIX::StartDate StartDate_11("LOCALMKTDATE_1635759794");
  msg.set(StartDate_11);
  FinancingDetails_11.insert(StartDate_11.getString());
  FIX::TerminationType TerminationType_11(1);
  msg.set(TerminationType_11);
  FinancingDetails_11.insert(TerminationType_11.getString());
  all_values.push_back(FinancingDetails_11);

  // IOIQualGrp
  // Group IOIQualGrp.NoIOIQualifiers
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_0;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_0;
    FIX::IOIQualifier IOIQualifier_0('T');
    noIOIQualifiers_0_0.set(IOIQualifier_0);
    IOIQualGrp_NoIOIQualifiers_0.insert(IOIQualifier_0.getString());
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_0);

    msg.addGroup(noIOIQualifiers_0_0);
  }
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_1;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_1;
    FIX::IOIQualifier IOIQualifier_1('D');
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
    FIX::LegIOIQty LegIOIQty_0("STRING_1893858905");
    noLegs_0_0.set(LegIOIQty_0);
    InstrmtLegIOIGrp_NoLegs_0.insert(LegIOIQty_0.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_49;
    FIX::EncodedLegIssuer EncodedLegIssuer_49("DATA_500694586");
    noLegs_0_0.set(EncodedLegIssuer_49);
    InstrumentLeg_49.insert(EncodedLegIssuer_49.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_49(1152101417);
    noLegs_0_0.set(EncodedLegIssuerLen_49);
    InstrumentLeg_49.insert(EncodedLegIssuerLen_49.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_49("DATA_1249629459");
    noLegs_0_0.set(EncodedLegSecurityDesc_49);
    InstrumentLeg_49.insert(EncodedLegSecurityDesc_49.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_49(897003727);
    noLegs_0_0.set(EncodedLegSecurityDescLen_49);
    InstrumentLeg_49.insert(EncodedLegSecurityDescLen_49.getString());
    FIX::LegCFICode LegCFICode_49("STRING_1382180677");
    noLegs_0_0.set(LegCFICode_49);
    InstrumentLeg_49.insert(LegCFICode_49.getString());
    FIX::LegContractMultiplier LegContractMultiplier_49;
    LegContractMultiplier_49.setString("9721584");
    noLegs_0_0.set(LegContractMultiplier_49);
    InstrumentLeg_49.insert(LegContractMultiplier_49.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_49(938113471);
    noLegs_0_0.set(LegContractMultiplierUnit_49);
    InstrumentLeg_49.insert(LegContractMultiplierUnit_49.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_49("MONTHYEAR_987949384");
    noLegs_0_0.set(LegContractSettlMonth_49);
    InstrumentLeg_49.insert(LegContractSettlMonth_49.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_49("COUNTRY_397619907");
    noLegs_0_0.set(LegCountryOfIssue_49);
    InstrumentLeg_49.insert(LegCountryOfIssue_49.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_49("LOCALMKTDATE_1143819971");
    noLegs_0_0.set(LegCouponPaymentDate_49);
    InstrumentLeg_49.insert(LegCouponPaymentDate_49.getString());
    FIX::LegCouponRate LegCouponRate_49;
    LegCouponRate_49.setString("26.120000");
    noLegs_0_0.set(LegCouponRate_49);
    InstrumentLeg_49.insert(LegCouponRate_49.getString());
    FIX::LegCreditRating LegCreditRating_49("STRING_236431226");
    noLegs_0_0.set(LegCreditRating_49);
    InstrumentLeg_49.insert(LegCreditRating_49.getString());
    FIX::LegCurrency LegCurrency_49("CAN");
    noLegs_0_0.set(LegCurrency_49);
    InstrumentLeg_49.insert(LegCurrency_49.getString());
    FIX::LegDatedDate LegDatedDate_49("LOCALMKTDATE_41658128");
    noLegs_0_0.set(LegDatedDate_49);
    InstrumentLeg_49.insert(LegDatedDate_49.getString());
    FIX::LegExerciseStyle LegExerciseStyle_49(600688360);
    noLegs_0_0.set(LegExerciseStyle_49);
    InstrumentLeg_49.insert(LegExerciseStyle_49.getString());
    FIX::LegFactor LegFactor_49;
    LegFactor_49.setString("5296828");
    noLegs_0_0.set(LegFactor_49);
    InstrumentLeg_49.insert(LegFactor_49.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_49(440203572);
    noLegs_0_0.set(LegFlowScheduleType_49);
    InstrumentLeg_49.insert(LegFlowScheduleType_49.getString());
    FIX::LegInstrRegistry LegInstrRegistry_49("STRING_2004270246");
    noLegs_0_0.set(LegInstrRegistry_49);
    InstrumentLeg_49.insert(LegInstrRegistry_49.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_49("LOCALMKTDATE_860098500");
    noLegs_0_0.set(LegInterestAccrualDate_49);
    InstrumentLeg_49.insert(LegInterestAccrualDate_49.getString());
    FIX::LegIssueDate LegIssueDate_49("LOCALMKTDATE_978150009");
    noLegs_0_0.set(LegIssueDate_49);
    InstrumentLeg_49.insert(LegIssueDate_49.getString());
    FIX::LegIssuer LegIssuer_49("STRING_1383899845");
    noLegs_0_0.set(LegIssuer_49);
    InstrumentLeg_49.insert(LegIssuer_49.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_49("STRING_1207137093");
    noLegs_0_0.set(LegLocaleOfIssue_49);
    InstrumentLeg_49.insert(LegLocaleOfIssue_49.getString());
    FIX::LegMaturityDate LegMaturityDate_49("LOCALMKTDATE_2118144500");
    noLegs_0_0.set(LegMaturityDate_49);
    InstrumentLeg_49.insert(LegMaturityDate_49.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_49("MONTHYEAR_872175991");
    noLegs_0_0.set(LegMaturityMonthYear_49);
    InstrumentLeg_49.insert(LegMaturityMonthYear_49.getString());
    FIX::LegMaturityTime LegMaturityTime_49("TZTIMEONLY_397140877");
    noLegs_0_0.set(LegMaturityTime_49);
    InstrumentLeg_49.insert(LegMaturityTime_49.getString());
    FIX::LegOptAttribute LegOptAttribute_49('6');
    noLegs_0_0.set(LegOptAttribute_49);
    InstrumentLeg_49.insert(LegOptAttribute_49.getString());
    FIX::LegOptionRatio LegOptionRatio_49;
    LegOptionRatio_49.setString("4564040");
    noLegs_0_0.set(LegOptionRatio_49);
    InstrumentLeg_49.insert(LegOptionRatio_49.getString());
    FIX::LegPool LegPool_49("STRING_931339102");
    noLegs_0_0.set(LegPool_49);
    InstrumentLeg_49.insert(LegPool_49.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_49("STRING_900816953");
    noLegs_0_0.set(LegPriceUnitOfMeasure_49);
    InstrumentLeg_49.insert(LegPriceUnitOfMeasure_49.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_49;
    LegPriceUnitOfMeasureQty_49.setString("2027793");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_49);
    InstrumentLeg_49.insert(LegPriceUnitOfMeasureQty_49.getString());
    FIX::LegProduct LegProduct_49(1432033689);
    noLegs_0_0.set(LegProduct_49);
    InstrumentLeg_49.insert(LegProduct_49.getString());
    FIX::LegPutOrCall LegPutOrCall_49(2052918370);
    noLegs_0_0.set(LegPutOrCall_49);
    InstrumentLeg_49.insert(LegPutOrCall_49.getString());
    FIX::LegRatioQty LegRatioQty_49;
    LegRatioQty_49.setString("14524087");
    noLegs_0_0.set(LegRatioQty_49);
    InstrumentLeg_49.insert(LegRatioQty_49.getString());
    FIX::LegRedemptionDate LegRedemptionDate_49("LOCALMKTDATE_181553768");
    noLegs_0_0.set(LegRedemptionDate_49);
    InstrumentLeg_49.insert(LegRedemptionDate_49.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_49("STRING_1287615399");
    noLegs_0_0.set(LegRepoCollateralSecurityType_49);
    InstrumentLeg_49.insert(LegRepoCollateralSecurityType_49.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_49;
    LegRepurchaseRate_49.setString("35.870000");
    noLegs_0_0.set(LegRepurchaseRate_49);
    InstrumentLeg_49.insert(LegRepurchaseRate_49.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_49(1119667240);
    noLegs_0_0.set(LegRepurchaseTerm_49);
    InstrumentLeg_49.insert(LegRepurchaseTerm_49.getString());
    FIX::LegSecurityDesc LegSecurityDesc_49("STRING_128081136");
    noLegs_0_0.set(LegSecurityDesc_49);
    InstrumentLeg_49.insert(LegSecurityDesc_49.getString());
    FIX::LegSecurityExchange LegSecurityExchange_49("EXCHANGE_674703494");
    noLegs_0_0.set(LegSecurityExchange_49);
    InstrumentLeg_49.insert(LegSecurityExchange_49.getString());
    FIX::LegSecurityID LegSecurityID_49("STRING_116003563");
    noLegs_0_0.set(LegSecurityID_49);
    InstrumentLeg_49.insert(LegSecurityID_49.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_49("STRING_862573748");
    noLegs_0_0.set(LegSecurityIDSource_49);
    InstrumentLeg_49.insert(LegSecurityIDSource_49.getString());
    FIX::LegSecuritySubType LegSecuritySubType_49("STRING_911134720");
    noLegs_0_0.set(LegSecuritySubType_49);
    InstrumentLeg_49.insert(LegSecuritySubType_49.getString());
    FIX::LegSecurityType LegSecurityType_49("STRING_1199293240");
    noLegs_0_0.set(LegSecurityType_49);
    InstrumentLeg_49.insert(LegSecurityType_49.getString());
    FIX::LegSide LegSide_49('9');
    noLegs_0_0.set(LegSide_49);
    InstrumentLeg_49.insert(LegSide_49.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_49("STRING_952792849");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_49);
    InstrumentLeg_49.insert(LegStateOrProvinceOfIssue_49.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_49("JPY");
    noLegs_0_0.set(LegStrikeCurrency_49);
    InstrumentLeg_49.insert(LegStrikeCurrency_49.getString());
    FIX::LegStrikePrice LegStrikePrice_49;
    LegStrikePrice_49.setString("13929964");
    noLegs_0_0.set(LegStrikePrice_49);
    InstrumentLeg_49.insert(LegStrikePrice_49.getString());
    FIX::LegSymbol LegSymbol_49("STRING_1656768198");
    noLegs_0_0.set(LegSymbol_49);
    InstrumentLeg_49.insert(LegSymbol_49.getString());
    FIX::LegSymbolSfx LegSymbolSfx_49("STRING_194765222");
    noLegs_0_0.set(LegSymbolSfx_49);
    InstrumentLeg_49.insert(LegSymbolSfx_49.getString());
    FIX::LegTimeUnit LegTimeUnit_49("STRING_223662782");
    noLegs_0_0.set(LegTimeUnit_49);
    InstrumentLeg_49.insert(LegTimeUnit_49.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_49("STRING_893184395");
    noLegs_0_0.set(LegUnitOfMeasure_49);
    InstrumentLeg_49.insert(LegUnitOfMeasure_49.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_49;
    LegUnitOfMeasureQty_49.setString("14019023");
    noLegs_0_0.set(LegUnitOfMeasureQty_49);
    InstrumentLeg_49.insert(LegUnitOfMeasureQty_49.getString());
    all_values.push_back(InstrumentLeg_49);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_104;
      FIX::LegSecurityAltID LegSecurityAltID_104("STRING_1765360387");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_104);
      LegSecAltIDGrp_NoLegSecurityAltID_104.insert(LegSecurityAltID_104.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_104("STRING_1799043193");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_104);
      LegSecAltIDGrp_NoLegSecurityAltID_104.insert(LegSecurityAltIDSource_104.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_104);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_6;
      FIX::LegStipulationType LegStipulationType_6("STRING_74280802");
      noLegStipulations_0_1_0.set(LegStipulationType_6);
      LegStipulations_NoLegStipulations_6.insert(LegStipulationType_6.getString());
      FIX::LegStipulationValue LegStipulationValue_6("STRING_582898647");
      noLegStipulations_0_1_0.set(LegStipulationValue_6);
      LegStipulations_NoLegStipulations_6.insert(LegStipulationValue_6.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_6);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_7;
      FIX::LegStipulationType LegStipulationType_7("STRING_1758889923");
      noLegStipulations_0_1_1.set(LegStipulationType_7);
      LegStipulations_NoLegStipulations_7.insert(LegStipulationType_7.getString());
      FIX::LegStipulationValue LegStipulationValue_7("STRING_277060123");
      noLegStipulations_0_1_1.set(LegStipulationValue_7);
      LegStipulations_NoLegStipulations_7.insert(LegStipulationValue_7.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_7);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_28;
  FIX::AttachmentPoint AttachmentPoint_28;
  AttachmentPoint_28.setString("23.360000");
  msg.set(AttachmentPoint_28);
  Instrument_28.insert(AttachmentPoint_28.getString());
  FIX::CFICode CFICode_28("STRING_1664324645");
  msg.set(CFICode_28);
  Instrument_28.insert(CFICode_28.getString());
  FIX::CPProgram CPProgram_28(2);
  msg.set(CPProgram_28);
  Instrument_28.insert(CPProgram_28.getString());
  FIX::CPRegType CPRegType_28("STRING_49002457");
  msg.set(CPRegType_28);
  Instrument_28.insert(CPRegType_28.getString());
  FIX::CapPrice CapPrice_28;
  CapPrice_28.setString("8044563");
  msg.set(CapPrice_28);
  Instrument_28.insert(CapPrice_28.getString());
  FIX::ContractMultiplier ContractMultiplier_28;
  ContractMultiplier_28.setString("20065524");
  msg.set(ContractMultiplier_28);
  Instrument_28.insert(ContractMultiplier_28.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_28(2);
  msg.set(ContractMultiplierUnit_28);
  Instrument_28.insert(ContractMultiplierUnit_28.getString());
  FIX::ContractSettlMonth ContractSettlMonth_28("MONTHYEAR_932537533");
  msg.set(ContractSettlMonth_28);
  Instrument_28.insert(ContractSettlMonth_28.getString());
  FIX::CountryOfIssue CountryOfIssue_28("COUNTRY_533772337");
  msg.set(CountryOfIssue_28);
  Instrument_28.insert(CountryOfIssue_28.getString());
  FIX::CouponPaymentDate CouponPaymentDate_28("LOCALMKTDATE_1284673260");
  msg.set(CouponPaymentDate_28);
  Instrument_28.insert(CouponPaymentDate_28.getString());
  FIX::CouponRate CouponRate_28;
  CouponRate_28.setString("12.810000");
  msg.set(CouponRate_28);
  Instrument_28.insert(CouponRate_28.getString());
  FIX::CreditRating CreditRating_28("STRING_1444907057");
  msg.set(CreditRating_28);
  Instrument_28.insert(CreditRating_28.getString());
  FIX::DatedDate DatedDate_28("LOCALMKTDATE_336482852");
  msg.set(DatedDate_28);
  Instrument_28.insert(DatedDate_28.getString());
  FIX::DetachmentPoint DetachmentPoint_28;
  DetachmentPoint_28.setString("51.200000");
  msg.set(DetachmentPoint_28);
  Instrument_28.insert(DetachmentPoint_28.getString());
  FIX::EncodedIssuer EncodedIssuer_28("DATA_250216258");
  msg.set(EncodedIssuer_28);
  Instrument_28.insert(EncodedIssuer_28.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_28(2136464453);
  msg.set(EncodedIssuerLen_28);
  Instrument_28.insert(EncodedIssuerLen_28.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_28("DATA_2082245491");
  msg.set(EncodedSecurityDesc_28);
  Instrument_28.insert(EncodedSecurityDesc_28.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_28(1643212679);
  msg.set(EncodedSecurityDescLen_28);
  Instrument_28.insert(EncodedSecurityDescLen_28.getString());
  FIX::ExerciseStyle ExerciseStyle_28(0);
  msg.set(ExerciseStyle_28);
  Instrument_28.insert(ExerciseStyle_28.getString());
  FIX::Factor Factor_28;
  Factor_28.setString("1295270");
  msg.set(Factor_28);
  Instrument_28.insert(Factor_28.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_28(true);
  msg.set(FlexProductEligibilityIndicator_28);
  Instrument_28.insert(FlexProductEligibilityIndicator_28.getString());
  FIX::FlexibleIndicator FlexibleIndicator_28(false);
  msg.set(FlexibleIndicator_28);
  Instrument_28.insert(FlexibleIndicator_28.getString());
  FIX::FloorPrice FloorPrice_28;
  FloorPrice_28.setString("15314293");
  msg.set(FloorPrice_28);
  Instrument_28.insert(FloorPrice_28.getString());
  FIX::FlowScheduleType FlowScheduleType_28(2);
  msg.set(FlowScheduleType_28);
  Instrument_28.insert(FlowScheduleType_28.getString());
  FIX::InstrRegistry InstrRegistry_28("STRING_9326490");
  msg.set(InstrRegistry_28);
  Instrument_28.insert(InstrRegistry_28.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_28('1');
  msg.set(InstrmtAssignmentMethod_28);
  Instrument_28.insert(InstrmtAssignmentMethod_28.getString());
  FIX::InterestAccrualDate InterestAccrualDate_28("LOCALMKTDATE_771788419");
  msg.set(InterestAccrualDate_28);
  Instrument_28.insert(InterestAccrualDate_28.getString());
  FIX::IssueDate IssueDate_28("LOCALMKTDATE_83607292");
  msg.set(IssueDate_28);
  Instrument_28.insert(IssueDate_28.getString());
  FIX::Issuer Issuer_28("STRING_1765887573");
  msg.set(Issuer_28);
  Instrument_28.insert(Issuer_28.getString());
  FIX::ListMethod ListMethod_28(1);
  msg.set(ListMethod_28);
  Instrument_28.insert(ListMethod_28.getString());
  FIX::LocaleOfIssue LocaleOfIssue_28("STRING_360667416");
  msg.set(LocaleOfIssue_28);
  Instrument_28.insert(LocaleOfIssue_28.getString());
  FIX::MaturityDate MaturityDate_28("LOCALMKTDATE_1633336262");
  msg.set(MaturityDate_28);
  Instrument_28.insert(MaturityDate_28.getString());
  FIX::MaturityMonthYear MaturityMonthYear_28("MONTHYEAR_2047519340");
  msg.set(MaturityMonthYear_28);
  Instrument_28.insert(MaturityMonthYear_28.getString());
  FIX::MaturityTime MaturityTime_28("TZTIMEONLY_2090136319");
  msg.set(MaturityTime_28);
  Instrument_28.insert(MaturityTime_28.getString());
  FIX::MinPriceIncrement MinPriceIncrement_28;
  MinPriceIncrement_28.setString("16823387");
  msg.set(MinPriceIncrement_28);
  Instrument_28.insert(MinPriceIncrement_28.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_28;
  MinPriceIncrementAmount_28.setString("7044920");
  msg.set(MinPriceIncrementAmount_28);
  Instrument_28.insert(MinPriceIncrementAmount_28.getString());
  FIX::NTPositionLimit NTPositionLimit_28(1949205162);
  msg.set(NTPositionLimit_28);
  Instrument_28.insert(NTPositionLimit_28.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_28;
  NotionalPercentageOutstanding_28.setString("47.680000");
  msg.set(NotionalPercentageOutstanding_28);
  Instrument_28.insert(NotionalPercentageOutstanding_28.getString());
  FIX::OptAttribute OptAttribute_28('1');
  msg.set(OptAttribute_28);
  Instrument_28.insert(OptAttribute_28.getString());
  FIX::OptPayoutAmount OptPayoutAmount_28;
  OptPayoutAmount_28.setString("3354938");
  msg.set(OptPayoutAmount_28);
  Instrument_28.insert(OptPayoutAmount_28.getString());
  FIX::OptPayoutType OptPayoutType_28(1);
  msg.set(OptPayoutType_28);
  Instrument_28.insert(OptPayoutType_28.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_28;
  OriginalNotionalPercentageOutstanding_28.setString("72.550000");
  msg.set(OriginalNotionalPercentageOutstanding_28);
  Instrument_28.insert(OriginalNotionalPercentageOutstanding_28.getString());
  FIX::Pool Pool_28("STRING_1780400908");
  msg.set(Pool_28);
  Instrument_28.insert(Pool_28.getString());
  FIX::PositionLimit PositionLimit_28(177197233);
  msg.set(PositionLimit_28);
  Instrument_28.insert(PositionLimit_28.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_28("STRING_STD");
  msg.set(PriceQuoteMethod_28);
  Instrument_28.insert(PriceQuoteMethod_28.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_28("STRING_2030617167");
  msg.set(PriceUnitOfMeasure_28);
  Instrument_28.insert(PriceUnitOfMeasure_28.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_28;
  PriceUnitOfMeasureQty_28.setString("1661780");
  msg.set(PriceUnitOfMeasureQty_28);
  Instrument_28.insert(PriceUnitOfMeasureQty_28.getString());
  FIX::Product Product_30(4);
  msg.set(Product_30);
  Instrument_28.insert(Product_30.getString());
  FIX::ProductComplex ProductComplex_28("STRING_1526346198");
  msg.set(ProductComplex_28);
  Instrument_28.insert(ProductComplex_28.getString());
  FIX::PutOrCall PutOrCall_28(1);
  msg.set(PutOrCall_28);
  Instrument_28.insert(PutOrCall_28.getString());
  FIX::RedemptionDate RedemptionDate_28("LOCALMKTDATE_1949041284");
  msg.set(RedemptionDate_28);
  Instrument_28.insert(RedemptionDate_28.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_28("STRING_1245738012");
  msg.set(RepoCollateralSecurityType_28);
  Instrument_28.insert(RepoCollateralSecurityType_28.getString());
  FIX::RepurchaseRate RepurchaseRate_28;
  RepurchaseRate_28.setString("31.440000");
  msg.set(RepurchaseRate_28);
  Instrument_28.insert(RepurchaseRate_28.getString());
  FIX::RepurchaseTerm RepurchaseTerm_28(1332987017);
  msg.set(RepurchaseTerm_28);
  Instrument_28.insert(RepurchaseTerm_28.getString());
  FIX::RestructuringType RestructuringType_28("STRING_MR");
  msg.set(RestructuringType_28);
  Instrument_28.insert(RestructuringType_28.getString());
  FIX::SecurityDesc SecurityDesc_28("STRING_65219634");
  msg.set(SecurityDesc_28);
  Instrument_28.insert(SecurityDesc_28.getString());
  FIX::SecurityExchange SecurityExchange_28("EXCHANGE_368492295");
  msg.set(SecurityExchange_28);
  Instrument_28.insert(SecurityExchange_28.getString());
  FIX::SecurityGroup SecurityGroup_28("STRING_1931241881");
  msg.set(SecurityGroup_28);
  Instrument_28.insert(SecurityGroup_28.getString());
  FIX::SecurityID SecurityID_28("STRING_148826927");
  msg.set(SecurityID_28);
  Instrument_28.insert(SecurityID_28.getString());
  FIX::SecurityIDSource SecurityIDSource_28("STRING_I");
  msg.set(SecurityIDSource_28);
  Instrument_28.insert(SecurityIDSource_28.getString());
  FIX::SecurityStatus SecurityStatus_28("STRING_1");
  msg.set(SecurityStatus_28);
  Instrument_28.insert(SecurityStatus_28.getString());
  FIX::SecuritySubType SecuritySubType_29("STRING_509494343");
  msg.set(SecuritySubType_29);
  Instrument_28.insert(SecuritySubType_29.getString());
  FIX::SecurityType SecurityType_30("STRING_MPT");
  msg.set(SecurityType_30);
  Instrument_28.insert(SecurityType_30.getString());
  FIX::Seniority Seniority_28("STRING_SD");
  msg.set(Seniority_28);
  Instrument_28.insert(Seniority_28.getString());
  FIX::SettlMethod SettlMethod_28('C');
  msg.set(SettlMethod_28);
  Instrument_28.insert(SettlMethod_28.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_28("STRING_1155087554");
  msg.set(SettleOnOpenFlag_28);
  Instrument_28.insert(SettleOnOpenFlag_28.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_28("STRING_771480710");
  msg.set(StateOrProvinceOfIssue_28);
  Instrument_28.insert(StateOrProvinceOfIssue_28.getString());
  FIX::StrikeCurrency StrikeCurrency_28("GBP");
  msg.set(StrikeCurrency_28);
  Instrument_28.insert(StrikeCurrency_28.getString());
  FIX::StrikeMultiplier StrikeMultiplier_28;
  StrikeMultiplier_28.setString("2610266");
  msg.set(StrikeMultiplier_28);
  Instrument_28.insert(StrikeMultiplier_28.getString());
  FIX::StrikePrice StrikePrice_28;
  StrikePrice_28.setString("5893623");
  msg.set(StrikePrice_28);
  Instrument_28.insert(StrikePrice_28.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_28(3);
  msg.set(StrikePriceBoundaryMethod_28);
  Instrument_28.insert(StrikePriceBoundaryMethod_28.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_28;
  StrikePriceBoundaryPrecision_28.setString("39.400000");
  msg.set(StrikePriceBoundaryPrecision_28);
  Instrument_28.insert(StrikePriceBoundaryPrecision_28.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_28(1);
  msg.set(StrikePriceDeterminationMethod_28);
  Instrument_28.insert(StrikePriceDeterminationMethod_28.getString());
  FIX::StrikeValue StrikeValue_28;
  StrikeValue_28.setString("18765239");
  msg.set(StrikeValue_28);
  Instrument_28.insert(StrikeValue_28.getString());
  FIX::Symbol Symbol_28("STRING_1282952668");
  msg.set(Symbol_28);
  Instrument_28.insert(Symbol_28.getString());
  FIX::SymbolSfx SymbolSfx_28("STRING_WI");
  msg.set(SymbolSfx_28);
  Instrument_28.insert(SymbolSfx_28.getString());
  FIX::TimeUnit TimeUnit_28("STRING_Wk");
  msg.set(TimeUnit_28);
  Instrument_28.insert(TimeUnit_28.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_28(4);
  msg.set(UnderlyingPriceDeterminationMethod_28);
  Instrument_28.insert(UnderlyingPriceDeterminationMethod_28.getString());
  FIX::UnitOfMeasure UnitOfMeasure_28("STRING_Gal");
  msg.set(UnitOfMeasure_28);
  Instrument_28.insert(UnitOfMeasure_28.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_28;
  UnitOfMeasureQty_28.setString("17071453");
  msg.set(UnitOfMeasureQty_28);
  Instrument_28.insert(UnitOfMeasureQty_28.getString());
  FIX::ValuationMethod ValuationMethod_28("STRING_EQTY");
  msg.set(ValuationMethod_28);
  Instrument_28.insert(ValuationMethod_28.getString());
  all_values.push_back(Instrument_28);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_57;
    FIX::ComplexEventCondition ComplexEventCondition_57(2);
    noComplexEvents_0_0.set(ComplexEventCondition_57);
    ComplexEvents_NoComplexEvents_57.insert(ComplexEventCondition_57.getString());
    FIX::ComplexEventPrice ComplexEventPrice_57;
    ComplexEventPrice_57.setString("20895278");
    noComplexEvents_0_0.set(ComplexEventPrice_57);
    ComplexEvents_NoComplexEvents_57.insert(ComplexEventPrice_57.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_57(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_57);
    ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceBoundaryMethod_57.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_57;
    ComplexEventPriceBoundaryPrecision_57.setString("81.460000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_57);
    ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceBoundaryPrecision_57.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_57(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_57);
    ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceTimeType_57.getString());
    FIX::ComplexEventType ComplexEventType_57(2);
    noComplexEvents_0_0.set(ComplexEventType_57);
    ComplexEvents_NoComplexEvents_57.insert(ComplexEventType_57.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_57;
    ComplexOptPayoutAmount_57.setString("19770850");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_57);
    ComplexEvents_NoComplexEvents_57.insert(ComplexOptPayoutAmount_57.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_57);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_117;
      FIX::ComplexEventEndDate ComplexEventEndDate_117(FIX::UTCTIMESTAMP(8, 24, 5, 22, 7, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_117);
      ComplexEventDates_NoComplexEventDates_117.insert(ComplexEventEndDate_117.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_117(FIX::UTCTIMESTAMP(0, 31, 10, 15, 12, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_117);
      ComplexEventDates_NoComplexEventDates_117.insert(ComplexEventStartDate_117.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_117);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_249;
        FIX::ComplexEventEndTime ComplexEventEndTime_249(FIX::UTCTIMEONLY(1, 40, 2));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_249);
        ComplexEventTimes_NoComplexEventTimes_249.insert(ComplexEventEndTime_249.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_249(FIX::UTCTIMEONLY(19, 38, 13));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_249);
        ComplexEventTimes_NoComplexEventTimes_249.insert(ComplexEventStartTime_249.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_249);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_118;
      FIX::ComplexEventEndDate ComplexEventEndDate_118(FIX::UTCTIMESTAMP(23, 56, 20, 23, 6, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_118);
      ComplexEventDates_NoComplexEventDates_118.insert(ComplexEventEndDate_118.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_118(FIX::UTCTIMESTAMP(1, 13, 21, 22, 9, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_118);
      ComplexEventDates_NoComplexEventDates_118.insert(ComplexEventStartDate_118.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_118);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_250;
        FIX::ComplexEventEndTime ComplexEventEndTime_250(FIX::UTCTIMEONLY(8, 9, 41));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_250);
        ComplexEventTimes_NoComplexEventTimes_250.insert(ComplexEventEndTime_250.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_250(FIX::UTCTIMEONLY(20, 32, 54));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_250);
        ComplexEventTimes_NoComplexEventTimes_250.insert(ComplexEventStartTime_250.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_250);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_119;
      FIX::ComplexEventEndDate ComplexEventEndDate_119(FIX::UTCTIMESTAMP(1, 26, 26, 16, 2, 2014));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_119);
      ComplexEventDates_NoComplexEventDates_119.insert(ComplexEventEndDate_119.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_119(FIX::UTCTIMESTAMP(23, 19, 6, 24, 12, 2009));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_119);
      ComplexEventDates_NoComplexEventDates_119.insert(ComplexEventStartDate_119.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_119);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_251;
        FIX::ComplexEventEndTime ComplexEventEndTime_251(FIX::UTCTIMEONLY(4, 31, 53));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_251);
        ComplexEventTimes_NoComplexEventTimes_251.insert(ComplexEventEndTime_251.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_251(FIX::UTCTIMEONLY(19, 37, 40));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_251);
        ComplexEventTimes_NoComplexEventTimes_251.insert(ComplexEventStartTime_251.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_251);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_252;
        FIX::ComplexEventEndTime ComplexEventEndTime_252(FIX::UTCTIMEONLY(14, 49, 39));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_252);
        ComplexEventTimes_NoComplexEventTimes_252.insert(ComplexEventEndTime_252.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_252(FIX::UTCTIMEONLY(10, 3, 31));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_252);
        ComplexEventTimes_NoComplexEventTimes_252.insert(ComplexEventStartTime_252.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_252);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_253;
        FIX::ComplexEventEndTime ComplexEventEndTime_253(FIX::UTCTIMEONLY(21, 57, 56));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_253);
        ComplexEventTimes_NoComplexEventTimes_253.insert(ComplexEventEndTime_253.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_253(FIX::UTCTIMEONLY(10, 45, 23));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_253);
        ComplexEventTimes_NoComplexEventTimes_253.insert(ComplexEventStartTime_253.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_253);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_58;
    FIX::ComplexEventCondition ComplexEventCondition_58(1);
    noComplexEvents_0_1.set(ComplexEventCondition_58);
    ComplexEvents_NoComplexEvents_58.insert(ComplexEventCondition_58.getString());
    FIX::ComplexEventPrice ComplexEventPrice_58;
    ComplexEventPrice_58.setString("19804469");
    noComplexEvents_0_1.set(ComplexEventPrice_58);
    ComplexEvents_NoComplexEvents_58.insert(ComplexEventPrice_58.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_58(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_58);
    ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceBoundaryMethod_58.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_58;
    ComplexEventPriceBoundaryPrecision_58.setString("2.060000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_58);
    ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceBoundaryPrecision_58.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_58(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_58);
    ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceTimeType_58.getString());
    FIX::ComplexEventType ComplexEventType_58(4);
    noComplexEvents_0_1.set(ComplexEventType_58);
    ComplexEvents_NoComplexEvents_58.insert(ComplexEventType_58.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_58;
    ComplexOptPayoutAmount_58.setString("4539978");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_58);
    ComplexEvents_NoComplexEvents_58.insert(ComplexOptPayoutAmount_58.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_58);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_120;
      FIX::ComplexEventEndDate ComplexEventEndDate_120(FIX::UTCTIMESTAMP(14, 49, 23, 1, 7, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_120);
      ComplexEventDates_NoComplexEventDates_120.insert(ComplexEventEndDate_120.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_120(FIX::UTCTIMESTAMP(20, 37, 59, 14, 4, 2012));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_120);
      ComplexEventDates_NoComplexEventDates_120.insert(ComplexEventStartDate_120.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_120);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_254;
        FIX::ComplexEventEndTime ComplexEventEndTime_254(FIX::UTCTIMEONLY(3, 3, 18));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_254);
        ComplexEventTimes_NoComplexEventTimes_254.insert(ComplexEventEndTime_254.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_254(FIX::UTCTIMEONLY(5, 3, 24));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_254);
        ComplexEventTimes_NoComplexEventTimes_254.insert(ComplexEventStartTime_254.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_254);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_255;
        FIX::ComplexEventEndTime ComplexEventEndTime_255(FIX::UTCTIMEONLY(11, 45, 33));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_255);
        ComplexEventTimes_NoComplexEventTimes_255.insert(ComplexEventEndTime_255.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_255(FIX::UTCTIMEONLY(13, 29, 26));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_255);
        ComplexEventTimes_NoComplexEventTimes_255.insert(ComplexEventStartTime_255.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_255);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_256;
        FIX::ComplexEventEndTime ComplexEventEndTime_256(FIX::UTCTIMEONLY(11, 7, 37));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_256);
        ComplexEventTimes_NoComplexEventTimes_256.insert(ComplexEventEndTime_256.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_256(FIX::UTCTIMEONLY(14, 33, 44));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_256);
        ComplexEventTimes_NoComplexEventTimes_256.insert(ComplexEventStartTime_256.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_256);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::IOI::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_50;
    FIX::EventDate EventDate_50("LOCALMKTDATE_822037622");
    noEvents_0_0.set(EventDate_50);
    EvntGrp_NoEvents_50.insert(EventDate_50.getString());
    FIX::EventPx EventPx_50;
    EventPx_50.setString("9499012");
    noEvents_0_0.set(EventPx_50);
    EvntGrp_NoEvents_50.insert(EventPx_50.getString());
    FIX::EventText EventText_50("STRING_1113395508");
    noEvents_0_0.set(EventText_50);
    EvntGrp_NoEvents_50.insert(EventText_50.getString());
    FIX::EventTime EventTime_50(FIX::UTCTIMESTAMP(14, 46, 15, 1, 2, 2001));
    noEvents_0_0.set(EventTime_50);
    EvntGrp_NoEvents_50.insert(EventTime_50.getString());
    FIX::EventType EventType_50(15);
    noEvents_0_0.set(EventType_50);
    EvntGrp_NoEvents_50.insert(EventType_50.getString());
    all_values.push_back(EvntGrp_NoEvents_50);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::IOI::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_51;
    FIX::EventDate EventDate_51("LOCALMKTDATE_880699930");
    noEvents_0_1.set(EventDate_51);
    EvntGrp_NoEvents_51.insert(EventDate_51.getString());
    FIX::EventPx EventPx_51;
    EventPx_51.setString("1787087");
    noEvents_0_1.set(EventPx_51);
    EvntGrp_NoEvents_51.insert(EventPx_51.getString());
    FIX::EventText EventText_51("STRING_1968476218");
    noEvents_0_1.set(EventText_51);
    EvntGrp_NoEvents_51.insert(EventText_51.getString());
    FIX::EventTime EventTime_51(FIX::UTCTIMESTAMP(8, 35, 31, 3, 5, 2000));
    noEvents_0_1.set(EventTime_51);
    EvntGrp_NoEvents_51.insert(EventTime_51.getString());
    FIX::EventType EventType_51(2);
    noEvents_0_1.set(EventType_51);
    EvntGrp_NoEvents_51.insert(EventType_51.getString());
    all_values.push_back(EvntGrp_NoEvents_51);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::IOI::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_52;
    FIX::EventDate EventDate_52("LOCALMKTDATE_672489590");
    noEvents_0_2.set(EventDate_52);
    EvntGrp_NoEvents_52.insert(EventDate_52.getString());
    FIX::EventPx EventPx_52;
    EventPx_52.setString("11501918");
    noEvents_0_2.set(EventPx_52);
    EvntGrp_NoEvents_52.insert(EventPx_52.getString());
    FIX::EventText EventText_52("STRING_949872969");
    noEvents_0_2.set(EventText_52);
    EvntGrp_NoEvents_52.insert(EventText_52.getString());
    FIX::EventTime EventTime_52(FIX::UTCTIMESTAMP(21, 35, 52, 5, 6, 2012));
    noEvents_0_2.set(EventTime_52);
    EvntGrp_NoEvents_52.insert(EventTime_52.getString());
    FIX::EventType EventType_52(18);
    noEvents_0_2.set(EventType_52);
    EvntGrp_NoEvents_52.insert(EventType_52.getString());
    all_values.push_back(EvntGrp_NoEvents_52);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_53;
    FIX::InstrumentPartyID InstrumentPartyID_53("STRING_1146234100");
    noInstrumentParties_0_0.set(InstrumentPartyID_53);
    InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyID_53.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_53('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_53);
    InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyIDSource_53.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_53(1314274816);
    noInstrumentParties_0_0.set(InstrumentPartyRole_53);
    InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyRole_53.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_53);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116;
      FIX::InstrumentPartySubID InstrumentPartySubID_116("STRING_1970422168");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_116);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116.insert(InstrumentPartySubID_116.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_116(1265698917);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_116);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116.insert(InstrumentPartySubIDType_116.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_60;
    FIX::SecurityAltID SecurityAltID_60("STRING_205404475");
    noSecurityAltID_0_0.set(SecurityAltID_60);
    SecAltIDGrp_NoSecurityAltID_60.insert(SecurityAltID_60.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_60("STRING_2146398847");
    noSecurityAltID_0_0.set(SecurityAltIDSource_60);
    SecAltIDGrp_NoSecurityAltID_60.insert(SecurityAltIDSource_60.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_60);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_61;
    FIX::SecurityAltID SecurityAltID_61("STRING_1630677094");
    noSecurityAltID_0_1.set(SecurityAltID_61);
    SecAltIDGrp_NoSecurityAltID_61.insert(SecurityAltID_61.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_61("STRING_26397045");
    noSecurityAltID_0_1.set(SecurityAltIDSource_61);
    SecAltIDGrp_NoSecurityAltID_61.insert(SecurityAltIDSource_61.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_61);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_56;
  FIX::SecurityXML SecurityXML_57("XMLDATA_1886041865");
  msg.set(SecurityXML_57);
  FIX::SecurityXMLLen SecurityXMLLen_28(975118846);
  msg.set(SecurityXMLLen_28);
  FIX::SecurityXMLSchema SecurityXMLSchema_28("STRING_1872785841");
  msg.set(SecurityXMLSchema_28);
  SecurityXML_56.insert(SecurityXMLSchema_28.getString());
  all_values.push_back(SecurityXML_56);

  // OrderQtyData
  multiset<string> OrderQtyData_8;
  FIX::CashOrderQty CashOrderQty_8;
  CashOrderQty_8.setString("4274145");
  msg.set(CashOrderQty_8);
  OrderQtyData_8.insert(CashOrderQty_8.getString());
  FIX::OrderPercent OrderPercent_8;
  OrderPercent_8.setString("53.610000");
  msg.set(OrderPercent_8);
  OrderQtyData_8.insert(OrderPercent_8.getString());
  FIX::OrderQty OrderQty_16;
  OrderQty_16.setString("21165418");
  msg.set(OrderQty_16);
  OrderQtyData_8.insert(OrderQty_16.getString());
  FIX::RoundingDirection RoundingDirection_8('0');
  msg.set(RoundingDirection_8);
  OrderQtyData_8.insert(RoundingDirection_8.getString());
  FIX::RoundingModulus RoundingModulus_8;
  RoundingModulus_8.setString("10770608");
  msg.set(RoundingModulus_8);
  OrderQtyData_8.insert(RoundingModulus_8.getString());
  all_values.push_back(OrderQtyData_8);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_50;
    FIX::PartyID PartyID_50("STRING_1522190221");
    noPartyIDs_0_0.set(PartyID_50);
    Parties_NoPartyIDs_50.insert(PartyID_50.getString());
    FIX::PartyIDSource PartyIDSource_50('D');
    noPartyIDs_0_0.set(PartyIDSource_50);
    Parties_NoPartyIDs_50.insert(PartyIDSource_50.getString());
    FIX::PartyRole PartyRole_50(36);
    noPartyIDs_0_0.set(PartyRole_50);
    Parties_NoPartyIDs_50.insert(PartyRole_50.getString());
    all_values.push_back(Parties_NoPartyIDs_50);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_104;
      FIX::PartySubID PartySubID_104("STRING_1872745738");
      noPartySubIDs_0_1_0.set(PartySubID_104);
      PtysSubGrp_NoPartySubIDs_104.insert(PartySubID_104.getString());
      FIX::PartySubIDType PartySubIDType_104(16);
      noPartySubIDs_0_1_0.set(PartySubIDType_104);
      PtysSubGrp_NoPartySubIDs_104.insert(PartySubIDType_104.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_104);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_105;
      FIX::PartySubID PartySubID_105("STRING_59192124");
      noPartySubIDs_0_1_1.set(PartySubID_105);
      PtysSubGrp_NoPartySubIDs_105.insert(PartySubID_105.getString());
      FIX::PartySubIDType PartySubIDType_105(17);
      noPartySubIDs_0_1_1.set(PartySubIDType_105);
      PtysSubGrp_NoPartySubIDs_105.insert(PartySubIDType_105.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_105);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_106;
      FIX::PartySubID PartySubID_106("STRING_98947949");
      noPartySubIDs_0_1_2.set(PartySubID_106);
      PtysSubGrp_NoPartySubIDs_106.insert(PartySubID_106.getString());
      FIX::PartySubIDType PartySubIDType_106(6);
      noPartySubIDs_0_1_2.set(PartySubIDType_106);
      PtysSubGrp_NoPartySubIDs_106.insert(PartySubIDType_106.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_106);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_51;
    FIX::PartyID PartyID_51("STRING_1141140722");
    noPartyIDs_0_1.set(PartyID_51);
    Parties_NoPartyIDs_51.insert(PartyID_51.getString());
    FIX::PartyIDSource PartyIDSource_51('5');
    noPartyIDs_0_1.set(PartyIDSource_51);
    Parties_NoPartyIDs_51.insert(PartyIDSource_51.getString());
    FIX::PartyRole PartyRole_51(13);
    noPartyIDs_0_1.set(PartyRole_51);
    Parties_NoPartyIDs_51.insert(PartyRole_51.getString());
    all_values.push_back(Parties_NoPartyIDs_51);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_107;
      FIX::PartySubID PartySubID_107("STRING_1851211497");
      noPartySubIDs_1_1_0.set(PartySubID_107);
      PtysSubGrp_NoPartySubIDs_107.insert(PartySubID_107.getString());
      FIX::PartySubIDType PartySubIDType_107(12);
      noPartySubIDs_1_1_0.set(PartySubIDType_107);
      PtysSubGrp_NoPartySubIDs_107.insert(PartySubIDType_107.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_107);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_108;
      FIX::PartySubID PartySubID_108("STRING_1573630807");
      noPartySubIDs_1_1_1.set(PartySubID_108);
      PtysSubGrp_NoPartySubIDs_108.insert(PartySubID_108.getString());
      FIX::PartySubIDType PartySubIDType_108(10);
      noPartySubIDs_1_1_1.set(PartySubIDType_108);
      PtysSubGrp_NoPartySubIDs_108.insert(PartySubIDType_108.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_108);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::IOI::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_2;
    FIX::RoutingID RoutingID_2("STRING_1572546006");
    noRoutingIDs_0_0.set(RoutingID_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingID_2.getString());
    FIX::RoutingType RoutingType_2(2);
    noRoutingIDs_0_0.set(RoutingType_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingType_2.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_2);

    msg.addGroup(noRoutingIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_11;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_11("JPY");
  msg.set(BenchmarkCurveCurrency_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurveCurrency_11.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_11("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurveName_11.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_11("STRING_1856546270");
  msg.set(BenchmarkCurvePoint_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurvePoint_11.getString());
  FIX::BenchmarkPrice BenchmarkPrice_11;
  BenchmarkPrice_11.setString("17385187");
  msg.set(BenchmarkPrice_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkPrice_11.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_11(1961083896);
  msg.set(BenchmarkPriceType_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkPriceType_11.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_11("STRING_1825604431");
  msg.set(BenchmarkSecurityID_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkSecurityID_11.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_11("STRING_2110517094");
  msg.set(BenchmarkSecurityIDSource_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkSecurityIDSource_11.getString());
  FIX::Spread Spread_11;
  Spread_11.setString("8906610");
  msg.set(Spread_11);
  SpreadOrBenchmarkCurveData_11.insert(Spread_11.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_11);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_20;
    FIX::StipulationType StipulationType_20("STRING_DISCOUNT");
    noStipulations_0_0.set(StipulationType_20);
    Stipulations_NoStipulations_20.insert(StipulationType_20.getString());
    FIX::StipulationValue StipulationValue_20("STRING_770111174");
    noStipulations_0_0.set(StipulationValue_20);
    Stipulations_NoStipulations_20.insert(StipulationValue_20.getString());
    all_values.push_back(Stipulations_NoStipulations_20);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_21;
    FIX::StipulationType StipulationType_21("STRING_LOOKBACK");
    noStipulations_0_1.set(StipulationType_21);
    Stipulations_NoStipulations_21.insert(StipulationType_21.getString());
    FIX::StipulationValue StipulationValue_21("STRING_1994956718");
    noStipulations_0_1.set(StipulationValue_21);
    Stipulations_NoStipulations_21.insert(StipulationValue_21.getString());
    all_values.push_back(Stipulations_NoStipulations_21);

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_41;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_41("DATA_420876388");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingIssuer_41.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_41(2054148842);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingIssuerLen_41.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_41("DATA_371876916");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingSecurityDesc_41.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_41(519824337);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingSecurityDescLen_41.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_41;
    UnderlyingAdjustedQuantity_41.setString("4652176");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_41);
    UnderlyingInstrument_41.insert(UnderlyingAdjustedQuantity_41.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_41;
    UnderlyingAllocationPercent_41.setString("76.380000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_41);
    UnderlyingInstrument_41.insert(UnderlyingAllocationPercent_41.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_41;
    UnderlyingAttachmentPoint_41.setString("63.860000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_41);
    UnderlyingInstrument_41.insert(UnderlyingAttachmentPoint_41.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_41("STRING_394238043");
    noUnderlyings_0_0.set(UnderlyingCFICode_41);
    UnderlyingInstrument_41.insert(UnderlyingCFICode_41.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_41("STRING_1820949528");
    noUnderlyings_0_0.set(UnderlyingCPProgram_41);
    UnderlyingInstrument_41.insert(UnderlyingCPProgram_41.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_41("STRING_1468734236");
    noUnderlyings_0_0.set(UnderlyingCPRegType_41);
    UnderlyingInstrument_41.insert(UnderlyingCPRegType_41.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_41;
    UnderlyingCapValue_41.setString("1461969");
    noUnderlyings_0_0.set(UnderlyingCapValue_41);
    UnderlyingInstrument_41.insert(UnderlyingCapValue_41.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_41;
    UnderlyingCashAmount_41.setString("12470966");
    noUnderlyings_0_0.set(UnderlyingCashAmount_41);
    UnderlyingInstrument_41.insert(UnderlyingCashAmount_41.getString());
    FIX::UnderlyingCashType UnderlyingCashType_41("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_41);
    UnderlyingInstrument_41.insert(UnderlyingCashType_41.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_41;
    UnderlyingContractMultiplier_41.setString("1035603");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_41);
    UnderlyingInstrument_41.insert(UnderlyingContractMultiplier_41.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_41(672159046);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_41);
    UnderlyingInstrument_41.insert(UnderlyingContractMultiplierUnit_41.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_41("COUNTRY_1115836520");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingCountryOfIssue_41.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_41("LOCALMKTDATE_87320764");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_41);
    UnderlyingInstrument_41.insert(UnderlyingCouponPaymentDate_41.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_41;
    UnderlyingCouponRate_41.setString("32.700000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_41);
    UnderlyingInstrument_41.insert(UnderlyingCouponRate_41.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_41("STRING_582361407");
    noUnderlyings_0_0.set(UnderlyingCreditRating_41);
    UnderlyingInstrument_41.insert(UnderlyingCreditRating_41.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_41("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_41);
    UnderlyingInstrument_41.insert(UnderlyingCurrency_41.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_41;
    UnderlyingCurrentValue_41.setString("3959616");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_41);
    UnderlyingInstrument_41.insert(UnderlyingCurrentValue_41.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_41;
    UnderlyingDetachmentPoint_41.setString("78.180000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_41);
    UnderlyingInstrument_41.insert(UnderlyingDetachmentPoint_41.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_41;
    UnderlyingDirtyPrice_41.setString("15373318");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_41);
    UnderlyingInstrument_41.insert(UnderlyingDirtyPrice_41.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_41;
    UnderlyingEndPrice_41.setString("12866227");
    noUnderlyings_0_0.set(UnderlyingEndPrice_41);
    UnderlyingInstrument_41.insert(UnderlyingEndPrice_41.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_41;
    UnderlyingEndValue_41.setString("19416563");
    noUnderlyings_0_0.set(UnderlyingEndValue_41);
    UnderlyingInstrument_41.insert(UnderlyingEndValue_41.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_41(875071841);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_41);
    UnderlyingInstrument_41.insert(UnderlyingExerciseStyle_41.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_41;
    UnderlyingFXRate_41.setString("20567338");
    noUnderlyings_0_0.set(UnderlyingFXRate_41);
    UnderlyingInstrument_41.insert(UnderlyingFXRate_41.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_41('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_41);
    UnderlyingInstrument_41.insert(UnderlyingFXRateCalc_41.getString());
    FIX::UnderlyingFactor UnderlyingFactor_41;
    UnderlyingFactor_41.setString("7225449");
    noUnderlyings_0_0.set(UnderlyingFactor_41);
    UnderlyingInstrument_41.insert(UnderlyingFactor_41.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_41(404623496);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_41);
    UnderlyingInstrument_41.insert(UnderlyingFlowScheduleType_41.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_41("STRING_127391538");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_41);
    UnderlyingInstrument_41.insert(UnderlyingInstrRegistry_41.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_41("LOCALMKTDATE_629210106");
    noUnderlyings_0_0.set(UnderlyingIssueDate_41);
    UnderlyingInstrument_41.insert(UnderlyingIssueDate_41.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_41("STRING_776500412");
    noUnderlyings_0_0.set(UnderlyingIssuer_41);
    UnderlyingInstrument_41.insert(UnderlyingIssuer_41.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_41("STRING_647215875");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingLocaleOfIssue_41.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_41("LOCALMKTDATE_1094427762");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityDate_41.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_41("MONTHYEAR_142034403");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityMonthYear_41.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_41("TZTIMEONLY_264738614");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityTime_41.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_41;
    UnderlyingNotionalPercentageOutstanding_41.setString("58.050000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_41);
    UnderlyingInstrument_41.insert(UnderlyingNotionalPercentageOutstanding_41.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_41('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_41);
    UnderlyingInstrument_41.insert(UnderlyingOptAttribute_41.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_41;
    UnderlyingOriginalNotionalPercentageOutstanding_41.setString("28.500000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_41);
    UnderlyingInstrument_41.insert(UnderlyingOriginalNotionalPercentageOutstanding_41.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_41("STRING_1634862757");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_41);
    UnderlyingInstrument_41.insert(UnderlyingPriceUnitOfMeasure_41.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_41;
    UnderlyingPriceUnitOfMeasureQty_41.setString("10625969");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_41);
    UnderlyingInstrument_41.insert(UnderlyingPriceUnitOfMeasureQty_41.getString());
    FIX::UnderlyingProduct UnderlyingProduct_41(62936033);
    noUnderlyings_0_0.set(UnderlyingProduct_41);
    UnderlyingInstrument_41.insert(UnderlyingProduct_41.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_41(1738423093);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_41);
    UnderlyingInstrument_41.insert(UnderlyingPutOrCall_41.getString());
    FIX::UnderlyingPx UnderlyingPx_41;
    UnderlyingPx_41.setString("17347560");
    noUnderlyings_0_0.set(UnderlyingPx_41);
    UnderlyingInstrument_41.insert(UnderlyingPx_41.getString());
    FIX::UnderlyingQty UnderlyingQty_41;
    UnderlyingQty_41.setString("11787725");
    noUnderlyings_0_0.set(UnderlyingQty_41);
    UnderlyingInstrument_41.insert(UnderlyingQty_41.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_41("LOCALMKTDATE_1825743857");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_41);
    UnderlyingInstrument_41.insert(UnderlyingRedemptionDate_41.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_41("STRING_1570535639");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_41);
    UnderlyingInstrument_41.insert(UnderlyingRepoCollateralSecurityType_41.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_41;
    UnderlyingRepurchaseRate_41.setString("39.600000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_41);
    UnderlyingInstrument_41.insert(UnderlyingRepurchaseRate_41.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_41(1622127244);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_41);
    UnderlyingInstrument_41.insert(UnderlyingRepurchaseTerm_41.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_41("STRING_997350366");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_41);
    UnderlyingInstrument_41.insert(UnderlyingRestructuringType_41.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_41("STRING_9611967");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityDesc_41.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_41("EXCHANGE_1096631414");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityExchange_41.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_41("STRING_387198539");
    noUnderlyings_0_0.set(UnderlyingSecurityID_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityID_41.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_41("STRING_1296234672");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityIDSource_41.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_41("STRING_890804119");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_41);
    UnderlyingInstrument_41.insert(UnderlyingSecuritySubType_41.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_41("STRING_1262270381");
    noUnderlyings_0_0.set(UnderlyingSecurityType_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityType_41.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_41("STRING_1205484904");
    noUnderlyings_0_0.set(UnderlyingSeniority_41);
    UnderlyingInstrument_41.insert(UnderlyingSeniority_41.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_41("STRING_597319269");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_41);
    UnderlyingInstrument_41.insert(UnderlyingSettlMethod_41.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_41(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_41);
    UnderlyingInstrument_41.insert(UnderlyingSettlementType_41.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_41;
    UnderlyingStartValue_41.setString("16101084");
    noUnderlyings_0_0.set(UnderlyingStartValue_41);
    UnderlyingInstrument_41.insert(UnderlyingStartValue_41.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_41("STRING_724710808");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingStateOrProvinceOfIssue_41.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_41("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_41);
    UnderlyingInstrument_41.insert(UnderlyingStrikeCurrency_41.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_41;
    UnderlyingStrikePrice_41.setString("13719266");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_41);
    UnderlyingInstrument_41.insert(UnderlyingStrikePrice_41.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_41("STRING_1560969513");
    noUnderlyings_0_0.set(UnderlyingSymbol_41);
    UnderlyingInstrument_41.insert(UnderlyingSymbol_41.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_41("STRING_381159567");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_41);
    UnderlyingInstrument_41.insert(UnderlyingSymbolSfx_41.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_41("STRING_1636665297");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_41);
    UnderlyingInstrument_41.insert(UnderlyingTimeUnit_41.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_41("STRING_902151671");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_41);
    UnderlyingInstrument_41.insert(UnderlyingUnitOfMeasure_41.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_41;
    UnderlyingUnitOfMeasureQty_41.setString("1966598");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_41);
    UnderlyingInstrument_41.insert(UnderlyingUnitOfMeasureQty_41.getString());
    all_values.push_back(UnderlyingInstrument_41);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_88;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_88("STRING_389530780");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_88);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_88.insert(UnderlyingSecurityAltID_88.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_88("STRING_1259256822");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_88);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_88.insert(UnderlyingSecurityAltIDSource_88.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_88);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_89;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_89("STRING_1285590532");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_89);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_89.insert(UnderlyingSecurityAltID_89.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_89("STRING_2127953873");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_89);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_89.insert(UnderlyingSecurityAltIDSource_89.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_89);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_90;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_90("STRING_846529191");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_90);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_90.insert(UnderlyingSecurityAltID_90.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_90("STRING_316879437");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_90);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_90.insert(UnderlyingSecurityAltIDSource_90.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_90);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_79;
      FIX::UnderlyingStipType UnderlyingStipType_79("STRING_269581182");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_79);
      UnderlyingStipulations_NoUnderlyingStips_79.insert(UnderlyingStipType_79.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_79("STRING_2078013397");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_79);
      UnderlyingStipulations_NoUnderlyingStips_79.insert(UnderlyingStipValue_79.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_79);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_83;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_83("STRING_1266931548");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyID_83.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_83('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyIDSource_83.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_83(230005445);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_83);
      UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyRole_83.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_83);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_177("STRING_1236376389");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_177);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177.insert(UnderlyingInstrumentPartySubID_177.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_177(1120809564);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_177);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177.insert(UnderlyingInstrumentPartySubIDType_177.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_178("STRING_768916820");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_178);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178.insert(UnderlyingInstrumentPartySubID_178.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_178(294377645);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_178);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178.insert(UnderlyingInstrumentPartySubIDType_178.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_179("STRING_1718128833");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_179);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179.insert(UnderlyingInstrumentPartySubID_179.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_179(606248465);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_179);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179.insert(UnderlyingInstrumentPartySubIDType_179.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_84;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_84("STRING_1904486045");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyID_84.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_84('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyIDSource_84.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_84(1072790217);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_84);
      UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyRole_84.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_84);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_180("STRING_1667282677");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_180);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180.insert(UnderlyingInstrumentPartySubID_180.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_180(486276082);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_180);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180.insert(UnderlyingInstrumentPartySubIDType_180.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_181("STRING_377287129");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_181);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181.insert(UnderlyingInstrumentPartySubID_181.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_181(1156464326);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_181);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181.insert(UnderlyingInstrumentPartySubIDType_181.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_182("STRING_1388427753");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_182);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182.insert(UnderlyingInstrumentPartySubID_182.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_182(573946980);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_182);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182.insert(UnderlyingInstrumentPartySubIDType_182.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_85;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_85("STRING_231635178");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyID_85.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_85('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyIDSource_85.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_85(1833203802);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_85);
      UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyRole_85.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_85);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_183("STRING_1758428759");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_183);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183.insert(UnderlyingInstrumentPartySubID_183.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_183(532249345);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_183);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183.insert(UnderlyingInstrumentPartySubIDType_183.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_184("STRING_1834105148");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_184);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184.insert(UnderlyingInstrumentPartySubID_184.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_184(1417159194);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_184);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184.insert(UnderlyingInstrumentPartySubIDType_184.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_42;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_42("DATA_801830527");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingIssuer_42.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_42(1764634897);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingIssuerLen_42.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_42("DATA_550533225");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingSecurityDesc_42.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_42(2068762075);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingSecurityDescLen_42.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_42;
    UnderlyingAdjustedQuantity_42.setString("17047766");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_42);
    UnderlyingInstrument_42.insert(UnderlyingAdjustedQuantity_42.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_42;
    UnderlyingAllocationPercent_42.setString("86.700000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_42);
    UnderlyingInstrument_42.insert(UnderlyingAllocationPercent_42.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_42;
    UnderlyingAttachmentPoint_42.setString("85.140000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_42);
    UnderlyingInstrument_42.insert(UnderlyingAttachmentPoint_42.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_42("STRING_793669355");
    noUnderlyings_0_1.set(UnderlyingCFICode_42);
    UnderlyingInstrument_42.insert(UnderlyingCFICode_42.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_42("STRING_1901348234");
    noUnderlyings_0_1.set(UnderlyingCPProgram_42);
    UnderlyingInstrument_42.insert(UnderlyingCPProgram_42.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_42("STRING_196841687");
    noUnderlyings_0_1.set(UnderlyingCPRegType_42);
    UnderlyingInstrument_42.insert(UnderlyingCPRegType_42.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_42;
    UnderlyingCapValue_42.setString("10880470");
    noUnderlyings_0_1.set(UnderlyingCapValue_42);
    UnderlyingInstrument_42.insert(UnderlyingCapValue_42.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_42;
    UnderlyingCashAmount_42.setString("14719934");
    noUnderlyings_0_1.set(UnderlyingCashAmount_42);
    UnderlyingInstrument_42.insert(UnderlyingCashAmount_42.getString());
    FIX::UnderlyingCashType UnderlyingCashType_42("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_42);
    UnderlyingInstrument_42.insert(UnderlyingCashType_42.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_42;
    UnderlyingContractMultiplier_42.setString("8450493");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_42);
    UnderlyingInstrument_42.insert(UnderlyingContractMultiplier_42.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_42(1767349413);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_42);
    UnderlyingInstrument_42.insert(UnderlyingContractMultiplierUnit_42.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_42("COUNTRY_1875880369");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingCountryOfIssue_42.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_42("LOCALMKTDATE_841176958");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_42);
    UnderlyingInstrument_42.insert(UnderlyingCouponPaymentDate_42.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_42;
    UnderlyingCouponRate_42.setString("84.420000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_42);
    UnderlyingInstrument_42.insert(UnderlyingCouponRate_42.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_42("STRING_214672804");
    noUnderlyings_0_1.set(UnderlyingCreditRating_42);
    UnderlyingInstrument_42.insert(UnderlyingCreditRating_42.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_42("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_42);
    UnderlyingInstrument_42.insert(UnderlyingCurrency_42.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_42;
    UnderlyingCurrentValue_42.setString("16031005");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_42);
    UnderlyingInstrument_42.insert(UnderlyingCurrentValue_42.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_42;
    UnderlyingDetachmentPoint_42.setString("10.670000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_42);
    UnderlyingInstrument_42.insert(UnderlyingDetachmentPoint_42.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_42;
    UnderlyingDirtyPrice_42.setString("5277642");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_42);
    UnderlyingInstrument_42.insert(UnderlyingDirtyPrice_42.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_42;
    UnderlyingEndPrice_42.setString("12335754");
    noUnderlyings_0_1.set(UnderlyingEndPrice_42);
    UnderlyingInstrument_42.insert(UnderlyingEndPrice_42.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_42;
    UnderlyingEndValue_42.setString("14781312");
    noUnderlyings_0_1.set(UnderlyingEndValue_42);
    UnderlyingInstrument_42.insert(UnderlyingEndValue_42.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_42(2044990009);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_42);
    UnderlyingInstrument_42.insert(UnderlyingExerciseStyle_42.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_42;
    UnderlyingFXRate_42.setString("8445205");
    noUnderlyings_0_1.set(UnderlyingFXRate_42);
    UnderlyingInstrument_42.insert(UnderlyingFXRate_42.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_42('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_42);
    UnderlyingInstrument_42.insert(UnderlyingFXRateCalc_42.getString());
    FIX::UnderlyingFactor UnderlyingFactor_42;
    UnderlyingFactor_42.setString("17316115");
    noUnderlyings_0_1.set(UnderlyingFactor_42);
    UnderlyingInstrument_42.insert(UnderlyingFactor_42.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_42(114196101);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_42);
    UnderlyingInstrument_42.insert(UnderlyingFlowScheduleType_42.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_42("STRING_664727445");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_42);
    UnderlyingInstrument_42.insert(UnderlyingInstrRegistry_42.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_42("LOCALMKTDATE_1348762759");
    noUnderlyings_0_1.set(UnderlyingIssueDate_42);
    UnderlyingInstrument_42.insert(UnderlyingIssueDate_42.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_42("STRING_664729327");
    noUnderlyings_0_1.set(UnderlyingIssuer_42);
    UnderlyingInstrument_42.insert(UnderlyingIssuer_42.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_42("STRING_586005872");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingLocaleOfIssue_42.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_42("LOCALMKTDATE_906055725");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityDate_42.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_42("MONTHYEAR_1445267997");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityMonthYear_42.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_42("TZTIMEONLY_13930739");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityTime_42.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_42;
    UnderlyingNotionalPercentageOutstanding_42.setString("50.800000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_42);
    UnderlyingInstrument_42.insert(UnderlyingNotionalPercentageOutstanding_42.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_42('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_42);
    UnderlyingInstrument_42.insert(UnderlyingOptAttribute_42.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_42;
    UnderlyingOriginalNotionalPercentageOutstanding_42.setString("24.260000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_42);
    UnderlyingInstrument_42.insert(UnderlyingOriginalNotionalPercentageOutstanding_42.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_42("STRING_640288432");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_42);
    UnderlyingInstrument_42.insert(UnderlyingPriceUnitOfMeasure_42.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_42;
    UnderlyingPriceUnitOfMeasureQty_42.setString("5236423");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_42);
    UnderlyingInstrument_42.insert(UnderlyingPriceUnitOfMeasureQty_42.getString());
    FIX::UnderlyingProduct UnderlyingProduct_42(1013862578);
    noUnderlyings_0_1.set(UnderlyingProduct_42);
    UnderlyingInstrument_42.insert(UnderlyingProduct_42.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_42(1485337829);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_42);
    UnderlyingInstrument_42.insert(UnderlyingPutOrCall_42.getString());
    FIX::UnderlyingPx UnderlyingPx_42;
    UnderlyingPx_42.setString("1435081");
    noUnderlyings_0_1.set(UnderlyingPx_42);
    UnderlyingInstrument_42.insert(UnderlyingPx_42.getString());
    FIX::UnderlyingQty UnderlyingQty_42;
    UnderlyingQty_42.setString("7422593");
    noUnderlyings_0_1.set(UnderlyingQty_42);
    UnderlyingInstrument_42.insert(UnderlyingQty_42.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_42("LOCALMKTDATE_179031139");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_42);
    UnderlyingInstrument_42.insert(UnderlyingRedemptionDate_42.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_42("STRING_1430656564");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_42);
    UnderlyingInstrument_42.insert(UnderlyingRepoCollateralSecurityType_42.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_42;
    UnderlyingRepurchaseRate_42.setString("21.040000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_42);
    UnderlyingInstrument_42.insert(UnderlyingRepurchaseRate_42.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_42(1397495227);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_42);
    UnderlyingInstrument_42.insert(UnderlyingRepurchaseTerm_42.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_42("STRING_1726785685");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_42);
    UnderlyingInstrument_42.insert(UnderlyingRestructuringType_42.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_42("STRING_412549013");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityDesc_42.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_42("EXCHANGE_1042422646");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityExchange_42.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_42("STRING_107066336");
    noUnderlyings_0_1.set(UnderlyingSecurityID_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityID_42.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_42("STRING_1646124457");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityIDSource_42.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_42("STRING_373070220");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_42);
    UnderlyingInstrument_42.insert(UnderlyingSecuritySubType_42.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_42("STRING_4572697");
    noUnderlyings_0_1.set(UnderlyingSecurityType_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityType_42.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_42("STRING_343161364");
    noUnderlyings_0_1.set(UnderlyingSeniority_42);
    UnderlyingInstrument_42.insert(UnderlyingSeniority_42.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_42("STRING_235967138");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_42);
    UnderlyingInstrument_42.insert(UnderlyingSettlMethod_42.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_42(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_42);
    UnderlyingInstrument_42.insert(UnderlyingSettlementType_42.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_42;
    UnderlyingStartValue_42.setString("4573574");
    noUnderlyings_0_1.set(UnderlyingStartValue_42);
    UnderlyingInstrument_42.insert(UnderlyingStartValue_42.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_42("STRING_900694584");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingStateOrProvinceOfIssue_42.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_42("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_42);
    UnderlyingInstrument_42.insert(UnderlyingStrikeCurrency_42.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_42;
    UnderlyingStrikePrice_42.setString("14867004");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_42);
    UnderlyingInstrument_42.insert(UnderlyingStrikePrice_42.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_42("STRING_1843519043");
    noUnderlyings_0_1.set(UnderlyingSymbol_42);
    UnderlyingInstrument_42.insert(UnderlyingSymbol_42.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_42("STRING_419871142");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_42);
    UnderlyingInstrument_42.insert(UnderlyingSymbolSfx_42.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_42("STRING_1500631195");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_42);
    UnderlyingInstrument_42.insert(UnderlyingTimeUnit_42.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_42("STRING_1395760475");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_42);
    UnderlyingInstrument_42.insert(UnderlyingUnitOfMeasure_42.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_42;
    UnderlyingUnitOfMeasureQty_42.setString("16190037");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_42);
    UnderlyingInstrument_42.insert(UnderlyingUnitOfMeasureQty_42.getString());
    all_values.push_back(UnderlyingInstrument_42);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_91;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_91("STRING_2036048907");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_91);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_91.insert(UnderlyingSecurityAltID_91.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_91("STRING_2142646082");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_91);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_91.insert(UnderlyingSecurityAltIDSource_91.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_91);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_92;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_92("STRING_577782552");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_92);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_92.insert(UnderlyingSecurityAltID_92.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_92("STRING_1373903088");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_92);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_92.insert(UnderlyingSecurityAltIDSource_92.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_92);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_93;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_93("STRING_138670555");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_93);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_93.insert(UnderlyingSecurityAltID_93.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_93("STRING_1320041852");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_93);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_93.insert(UnderlyingSecurityAltIDSource_93.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_93);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_80;
      FIX::UnderlyingStipType UnderlyingStipType_80("STRING_1569327119");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_80);
      UnderlyingStipulations_NoUnderlyingStips_80.insert(UnderlyingStipType_80.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_80("STRING_129490308");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_80);
      UnderlyingStipulations_NoUnderlyingStips_80.insert(UnderlyingStipValue_80.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_80);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_81;
      FIX::UnderlyingStipType UnderlyingStipType_81("STRING_802945806");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_81);
      UnderlyingStipulations_NoUnderlyingStips_81.insert(UnderlyingStipType_81.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_81("STRING_1148629156");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_81);
      UnderlyingStipulations_NoUnderlyingStips_81.insert(UnderlyingStipValue_81.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_81);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_86;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_86("STRING_1845368453");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_86);
      UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyID_86.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_86('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_86);
      UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyIDSource_86.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_86(40680130);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_86);
      UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyRole_86.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_86);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_185("STRING_1260268190");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_185);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185.insert(UnderlyingInstrumentPartySubID_185.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_185(383841494);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_185);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185.insert(UnderlyingInstrumentPartySubIDType_185.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_87;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_87("STRING_306922163");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_87);
      UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyID_87.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_87('8');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_87);
      UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyIDSource_87.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_87(841198960);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_87);
      UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyRole_87.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_87);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_186("STRING_1786432067");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_186);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186.insert(UnderlyingInstrumentPartySubID_186.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_186(1963285752);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_186);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186.insert(UnderlyingInstrumentPartySubIDType_186.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_187("STRING_546833556");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_187);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187.insert(UnderlyingInstrumentPartySubID_187.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_187(1482467462);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_187);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187.insert(UnderlyingInstrumentPartySubIDType_187.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_188("STRING_235673246");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_188);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188.insert(UnderlyingInstrumentPartySubID_188.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_188(2047464751);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_188);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188.insert(UnderlyingInstrumentPartySubIDType_188.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_88;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_88("STRING_730744289");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_88);
      UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyID_88.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_88('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_88);
      UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyIDSource_88.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_88(1611384725);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_88);
      UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyRole_88.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_88);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_189("STRING_1849839406");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_189);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189.insert(UnderlyingInstrumentPartySubID_189.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_189(41683629);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_189);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189.insert(UnderlyingInstrumentPartySubIDType_189.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_6;
  FIX::Yield Yield_6;
  Yield_6.setString("26.360000");
  msg.set(Yield_6);
  YieldData_6.insert(Yield_6.getString());
  FIX::YieldCalcDate YieldCalcDate_6("LOCALMKTDATE_1988509962");
  msg.set(YieldCalcDate_6);
  YieldData_6.insert(YieldCalcDate_6.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_6("LOCALMKTDATE_1361725481");
  msg.set(YieldRedemptionDate_6);
  YieldData_6.insert(YieldRedemptionDate_6.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_6;
  YieldRedemptionPrice_6.setString("13986632");
  msg.set(YieldRedemptionPrice_6);
  YieldData_6.insert(YieldRedemptionPrice_6.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_6(1410353433);
  msg.set(YieldRedemptionPriceType_6);
  YieldData_6.insert(YieldRedemptionPriceType_6.getString());
  FIX::YieldType YieldType_6("STRING_TRUE");
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
