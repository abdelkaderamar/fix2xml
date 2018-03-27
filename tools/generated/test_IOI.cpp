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
  FIX::Currency Currency_20("USD");
  msg.set(Currency_20);
  IOI_0.insert(Currency_20.getString());
  FIX::EncodedText EncodedText_37("DATA_1654267077");
  msg.set(EncodedText_37);
  IOI_0.insert(EncodedText_37.getString());
  FIX::EncodedTextLen EncodedTextLen_37(478771437);
  msg.set(EncodedTextLen_37);
  IOI_0.insert(EncodedTextLen_37.getString());
  FIX::IOIID IOIID_1("STRING_1420998853");
  msg.set(IOIID_1);
  IOI_0.insert(IOIID_1.getString());
  FIX::IOINaturalFlag IOINaturalFlag_0(true);
  msg.set(IOINaturalFlag_0);
  IOI_0.insert(IOINaturalFlag_0.getString());
  FIX::IOIQltyInd IOIQltyInd_0('H');
  msg.set(IOIQltyInd_0);
  IOI_0.insert(IOIQltyInd_0.getString());
  FIX::IOIQty IOIQty_0("STRING_S");
  msg.set(IOIQty_0);
  IOI_0.insert(IOIQty_0.getString());
  FIX::IOIRefID IOIRefID_0("STRING_1370937385");
  msg.set(IOIRefID_0);
  IOI_0.insert(IOIRefID_0.getString());
  FIX::IOITransType IOITransType_0('C');
  msg.set(IOITransType_0);
  IOI_0.insert(IOITransType_0.getString());
  FIX::Price Price_9;
  Price_9.setString("755776");
  msg.set(Price_9);
  IOI_0.insert(Price_9.getString());
  FIX::PriceType PriceType_18(6);
  msg.set(PriceType_18);
  IOI_0.insert(PriceType_18.getString());
  FIX::QtyType QtyType_15(1);
  msg.set(QtyType_15);
  IOI_0.insert(QtyType_15.getString());
  FIX::Side Side_20('G');
  msg.set(Side_20);
  IOI_0.insert(Side_20.getString());
  FIX::Text Text_37("STRING_1119080326");
  msg.set(Text_37);
  IOI_0.insert(Text_37.getString());
  FIX::TransactTime TransactTime_19(FIX::UTCTIMESTAMP(7, 35, 23, 22, 52008));
  msg.set(TransactTime_19);
  IOI_0.insert(TransactTime_19.getString());
  FIX::URLLink URLLink_1("STRING_488451063");
  msg.set(URLLink_1);
  IOI_0.insert(URLLink_1.getString());
  FIX::ValidUntilTime ValidUntilTime_0(FIX::UTCTIMESTAMP(0, 14, 23, 10, 62014));
  msg.set(ValidUntilTime_0);
  IOI_0.insert(ValidUntilTime_0.getString());
  all_values.push_back(IOI_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_5;
  FIX::ApplID ApplID_5("STRING_894147020");
  msg.set(ApplID_5);
  ApplicationSequenceControl_5.insert(ApplID_5.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_5(138586382);
  msg.set(ApplLastSeqNum_5);
  ApplicationSequenceControl_5.insert(ApplLastSeqNum_5.getString());
  FIX::ApplResendFlag ApplResendFlag_5(true);
  msg.set(ApplResendFlag_5);
  ApplicationSequenceControl_5.insert(ApplResendFlag_5.getString());
  FIX::ApplSeqNum ApplSeqNum_5(400930449);
  msg.set(ApplSeqNum_5);
  ApplicationSequenceControl_5.insert(ApplSeqNum_5.getString());
  all_values.push_back(ApplicationSequenceControl_5);

  // FinancingDetails
  multiset<string> FinancingDetails_11;
  FIX::AgreementCurrency AgreementCurrency_11("CAN");
  msg.set(AgreementCurrency_11);
  FinancingDetails_11.insert(AgreementCurrency_11.getString());
  FIX::AgreementDate AgreementDate_11("LOCALMKTDATE_900686919");
  msg.set(AgreementDate_11);
  FinancingDetails_11.insert(AgreementDate_11.getString());
  FIX::AgreementDesc AgreementDesc_11("STRING_1440741462");
  msg.set(AgreementDesc_11);
  FinancingDetails_11.insert(AgreementDesc_11.getString());
  FIX::AgreementID AgreementID_11("STRING_270145368");
  msg.set(AgreementID_11);
  FinancingDetails_11.insert(AgreementID_11.getString());
  FIX::DeliveryType DeliveryType_11(1);
  msg.set(DeliveryType_11);
  FinancingDetails_11.insert(DeliveryType_11.getString());
  FIX::EndDate EndDate_11("LOCALMKTDATE_1000267949");
  msg.set(EndDate_11);
  FinancingDetails_11.insert(EndDate_11.getString());
  FIX::MarginRatio MarginRatio_11;
  MarginRatio_11.setString("29.780000");
  msg.set(MarginRatio_11);
  FinancingDetails_11.insert(MarginRatio_11.getString());
  FIX::StartDate StartDate_11("LOCALMKTDATE_1077324272");
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
    FIX::IOIQualifier IOIQualifier_0('R');
    noIOIQualifiers_0_0.set(IOIQualifier_0);
    IOIQualGrp_NoIOIQualifiers_0.insert(IOIQualifier_0.getString());
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_0);

    msg.addGroup(noIOIQualifiers_0_0);
  }
  // InstrmtLegIOIGrp
  // Group InstrmtLegIOIGrp.NoLegs
  {
    FIX50SP2::IOI::NoLegs noLegs_0_0;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_0;
    FIX::LegIOIQty LegIOIQty_0("STRING_1696908665");
    noLegs_0_0.set(LegIOIQty_0);
    InstrmtLegIOIGrp_NoLegs_0.insert(LegIOIQty_0.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_44;
    FIX::EncodedLegIssuer EncodedLegIssuer_44("DATA_603042705");
    noLegs_0_0.set(EncodedLegIssuer_44);
    InstrumentLeg_44.insert(EncodedLegIssuer_44.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_44(1764022582);
    noLegs_0_0.set(EncodedLegIssuerLen_44);
    InstrumentLeg_44.insert(EncodedLegIssuerLen_44.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_44("DATA_2085944748");
    noLegs_0_0.set(EncodedLegSecurityDesc_44);
    InstrumentLeg_44.insert(EncodedLegSecurityDesc_44.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_44(1987175185);
    noLegs_0_0.set(EncodedLegSecurityDescLen_44);
    InstrumentLeg_44.insert(EncodedLegSecurityDescLen_44.getString());
    FIX::LegCFICode LegCFICode_44("STRING_429128674");
    noLegs_0_0.set(LegCFICode_44);
    InstrumentLeg_44.insert(LegCFICode_44.getString());
    FIX::LegContractMultiplier LegContractMultiplier_44;
    LegContractMultiplier_44.setString("4269121");
    noLegs_0_0.set(LegContractMultiplier_44);
    InstrumentLeg_44.insert(LegContractMultiplier_44.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_44(832601117);
    noLegs_0_0.set(LegContractMultiplierUnit_44);
    InstrumentLeg_44.insert(LegContractMultiplierUnit_44.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_44("MONTHYEAR_359859483");
    noLegs_0_0.set(LegContractSettlMonth_44);
    InstrumentLeg_44.insert(LegContractSettlMonth_44.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_44("COUNTRY_1451952598");
    noLegs_0_0.set(LegCountryOfIssue_44);
    InstrumentLeg_44.insert(LegCountryOfIssue_44.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_44("LOCALMKTDATE_1694171860");
    noLegs_0_0.set(LegCouponPaymentDate_44);
    InstrumentLeg_44.insert(LegCouponPaymentDate_44.getString());
    FIX::LegCouponRate LegCouponRate_44;
    LegCouponRate_44.setString("23.010000");
    noLegs_0_0.set(LegCouponRate_44);
    InstrumentLeg_44.insert(LegCouponRate_44.getString());
    FIX::LegCreditRating LegCreditRating_44("STRING_20968831");
    noLegs_0_0.set(LegCreditRating_44);
    InstrumentLeg_44.insert(LegCreditRating_44.getString());
    FIX::LegCurrency LegCurrency_44("EUR");
    noLegs_0_0.set(LegCurrency_44);
    InstrumentLeg_44.insert(LegCurrency_44.getString());
    FIX::LegDatedDate LegDatedDate_44("LOCALMKTDATE_159555214");
    noLegs_0_0.set(LegDatedDate_44);
    InstrumentLeg_44.insert(LegDatedDate_44.getString());
    FIX::LegExerciseStyle LegExerciseStyle_44(46480640);
    noLegs_0_0.set(LegExerciseStyle_44);
    InstrumentLeg_44.insert(LegExerciseStyle_44.getString());
    FIX::LegFactor LegFactor_44;
    LegFactor_44.setString("17989797");
    noLegs_0_0.set(LegFactor_44);
    InstrumentLeg_44.insert(LegFactor_44.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_44(776913033);
    noLegs_0_0.set(LegFlowScheduleType_44);
    InstrumentLeg_44.insert(LegFlowScheduleType_44.getString());
    FIX::LegInstrRegistry LegInstrRegistry_44("STRING_461217452");
    noLegs_0_0.set(LegInstrRegistry_44);
    InstrumentLeg_44.insert(LegInstrRegistry_44.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_44("LOCALMKTDATE_552183042");
    noLegs_0_0.set(LegInterestAccrualDate_44);
    InstrumentLeg_44.insert(LegInterestAccrualDate_44.getString());
    FIX::LegIssueDate LegIssueDate_44("LOCALMKTDATE_70170847");
    noLegs_0_0.set(LegIssueDate_44);
    InstrumentLeg_44.insert(LegIssueDate_44.getString());
    FIX::LegIssuer LegIssuer_44("STRING_731362820");
    noLegs_0_0.set(LegIssuer_44);
    InstrumentLeg_44.insert(LegIssuer_44.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_44("STRING_676323699");
    noLegs_0_0.set(LegLocaleOfIssue_44);
    InstrumentLeg_44.insert(LegLocaleOfIssue_44.getString());
    FIX::LegMaturityDate LegMaturityDate_44("LOCALMKTDATE_1070438797");
    noLegs_0_0.set(LegMaturityDate_44);
    InstrumentLeg_44.insert(LegMaturityDate_44.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_44("MONTHYEAR_1077085798");
    noLegs_0_0.set(LegMaturityMonthYear_44);
    InstrumentLeg_44.insert(LegMaturityMonthYear_44.getString());
    FIX::LegMaturityTime LegMaturityTime_44("TZTIMEONLY_1753647971");
    noLegs_0_0.set(LegMaturityTime_44);
    InstrumentLeg_44.insert(LegMaturityTime_44.getString());
    FIX::LegOptAttribute LegOptAttribute_44('1');
    noLegs_0_0.set(LegOptAttribute_44);
    InstrumentLeg_44.insert(LegOptAttribute_44.getString());
    FIX::LegOptionRatio LegOptionRatio_44;
    LegOptionRatio_44.setString("9120948");
    noLegs_0_0.set(LegOptionRatio_44);
    InstrumentLeg_44.insert(LegOptionRatio_44.getString());
    FIX::LegPool LegPool_44("STRING_1802568921");
    noLegs_0_0.set(LegPool_44);
    InstrumentLeg_44.insert(LegPool_44.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_44("STRING_1088661936");
    noLegs_0_0.set(LegPriceUnitOfMeasure_44);
    InstrumentLeg_44.insert(LegPriceUnitOfMeasure_44.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_44;
    LegPriceUnitOfMeasureQty_44.setString("4615198");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_44);
    InstrumentLeg_44.insert(LegPriceUnitOfMeasureQty_44.getString());
    FIX::LegProduct LegProduct_44(258127979);
    noLegs_0_0.set(LegProduct_44);
    InstrumentLeg_44.insert(LegProduct_44.getString());
    FIX::LegPutOrCall LegPutOrCall_44(705200870);
    noLegs_0_0.set(LegPutOrCall_44);
    InstrumentLeg_44.insert(LegPutOrCall_44.getString());
    FIX::LegRatioQty LegRatioQty_44;
    LegRatioQty_44.setString("3999809");
    noLegs_0_0.set(LegRatioQty_44);
    InstrumentLeg_44.insert(LegRatioQty_44.getString());
    FIX::LegRedemptionDate LegRedemptionDate_44("LOCALMKTDATE_97819516");
    noLegs_0_0.set(LegRedemptionDate_44);
    InstrumentLeg_44.insert(LegRedemptionDate_44.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_44("STRING_1134329544");
    noLegs_0_0.set(LegRepoCollateralSecurityType_44);
    InstrumentLeg_44.insert(LegRepoCollateralSecurityType_44.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_44;
    LegRepurchaseRate_44.setString("30.890000");
    noLegs_0_0.set(LegRepurchaseRate_44);
    InstrumentLeg_44.insert(LegRepurchaseRate_44.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_44(930420633);
    noLegs_0_0.set(LegRepurchaseTerm_44);
    InstrumentLeg_44.insert(LegRepurchaseTerm_44.getString());
    FIX::LegSecurityDesc LegSecurityDesc_44("STRING_1494189027");
    noLegs_0_0.set(LegSecurityDesc_44);
    InstrumentLeg_44.insert(LegSecurityDesc_44.getString());
    FIX::LegSecurityExchange LegSecurityExchange_44("EXCHANGE_131362039");
    noLegs_0_0.set(LegSecurityExchange_44);
    InstrumentLeg_44.insert(LegSecurityExchange_44.getString());
    FIX::LegSecurityID LegSecurityID_44("STRING_477108846");
    noLegs_0_0.set(LegSecurityID_44);
    InstrumentLeg_44.insert(LegSecurityID_44.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_44("STRING_1998091329");
    noLegs_0_0.set(LegSecurityIDSource_44);
    InstrumentLeg_44.insert(LegSecurityIDSource_44.getString());
    FIX::LegSecuritySubType LegSecuritySubType_44("STRING_152330871");
    noLegs_0_0.set(LegSecuritySubType_44);
    InstrumentLeg_44.insert(LegSecuritySubType_44.getString());
    FIX::LegSecurityType LegSecurityType_44("STRING_1529851528");
    noLegs_0_0.set(LegSecurityType_44);
    InstrumentLeg_44.insert(LegSecurityType_44.getString());
    FIX::LegSide LegSide_44('1');
    noLegs_0_0.set(LegSide_44);
    InstrumentLeg_44.insert(LegSide_44.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_44("STRING_311886085");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_44);
    InstrumentLeg_44.insert(LegStateOrProvinceOfIssue_44.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_44("CAN");
    noLegs_0_0.set(LegStrikeCurrency_44);
    InstrumentLeg_44.insert(LegStrikeCurrency_44.getString());
    FIX::LegStrikePrice LegStrikePrice_44;
    LegStrikePrice_44.setString("10887991");
    noLegs_0_0.set(LegStrikePrice_44);
    InstrumentLeg_44.insert(LegStrikePrice_44.getString());
    FIX::LegSymbol LegSymbol_44("STRING_2037549621");
    noLegs_0_0.set(LegSymbol_44);
    InstrumentLeg_44.insert(LegSymbol_44.getString());
    FIX::LegSymbolSfx LegSymbolSfx_44("STRING_1452336168");
    noLegs_0_0.set(LegSymbolSfx_44);
    InstrumentLeg_44.insert(LegSymbolSfx_44.getString());
    FIX::LegTimeUnit LegTimeUnit_44("STRING_1158969966");
    noLegs_0_0.set(LegTimeUnit_44);
    InstrumentLeg_44.insert(LegTimeUnit_44.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_44("STRING_621428793");
    noLegs_0_0.set(LegUnitOfMeasure_44);
    InstrumentLeg_44.insert(LegUnitOfMeasure_44.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_44;
    LegUnitOfMeasureQty_44.setString("21286598");
    noLegs_0_0.set(LegUnitOfMeasureQty_44);
    InstrumentLeg_44.insert(LegUnitOfMeasureQty_44.getString());
    all_values.push_back(InstrumentLeg_44);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_79;
      FIX::LegSecurityAltID LegSecurityAltID_79("STRING_1698514591");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_79);
      LegSecAltIDGrp_NoLegSecurityAltID_79.insert(LegSecurityAltID_79.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_79("STRING_1734824191");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_79);
      LegSecAltIDGrp_NoLegSecurityAltID_79.insert(LegSecurityAltIDSource_79.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_79);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_80;
      FIX::LegSecurityAltID LegSecurityAltID_80("STRING_1966437800");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_80);
      LegSecAltIDGrp_NoLegSecurityAltID_80.insert(LegSecurityAltID_80.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_80("STRING_463125752");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_80);
      LegSecAltIDGrp_NoLegSecurityAltID_80.insert(LegSecurityAltIDSource_80.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_80);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_81;
      FIX::LegSecurityAltID LegSecurityAltID_81("STRING_1389909464");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_81);
      LegSecAltIDGrp_NoLegSecurityAltID_81.insert(LegSecurityAltID_81.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_81("STRING_907616088");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_81);
      LegSecAltIDGrp_NoLegSecurityAltID_81.insert(LegSecurityAltIDSource_81.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_81);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_3;
      FIX::LegStipulationType LegStipulationType_3("STRING_1648037443");
      noLegStipulations_0_1_0.set(LegStipulationType_3);
      LegStipulations_NoLegStipulations_3.insert(LegStipulationType_3.getString());
      FIX::LegStipulationValue LegStipulationValue_3("STRING_1612816958");
      noLegStipulations_0_1_0.set(LegStipulationValue_3);
      LegStipulations_NoLegStipulations_3.insert(LegStipulationValue_3.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_3);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_4;
      FIX::LegStipulationType LegStipulationType_4("STRING_1324626504");
      noLegStipulations_0_1_1.set(LegStipulationType_4);
      LegStipulations_NoLegStipulations_4.insert(LegStipulationType_4.getString());
      FIX::LegStipulationValue LegStipulationValue_4("STRING_1745856960");
      noLegStipulations_0_1_1.set(LegStipulationValue_4);
      LegStipulations_NoLegStipulations_4.insert(LegStipulationValue_4.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_4);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_5;
      FIX::LegStipulationType LegStipulationType_5("STRING_599662854");
      noLegStipulations_0_1_2.set(LegStipulationType_5);
      LegStipulations_NoLegStipulations_5.insert(LegStipulationType_5.getString());
      FIX::LegStipulationValue LegStipulationValue_5("STRING_4035945");
      noLegStipulations_0_1_2.set(LegStipulationValue_5);
      LegStipulations_NoLegStipulations_5.insert(LegStipulationValue_5.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_5);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_1;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_1;
    FIX::LegIOIQty LegIOIQty_1("STRING_528793945");
    noLegs_0_1.set(LegIOIQty_1);
    InstrmtLegIOIGrp_NoLegs_1.insert(LegIOIQty_1.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_45;
    FIX::EncodedLegIssuer EncodedLegIssuer_45("DATA_2093851882");
    noLegs_0_1.set(EncodedLegIssuer_45);
    InstrumentLeg_45.insert(EncodedLegIssuer_45.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_45(135397985);
    noLegs_0_1.set(EncodedLegIssuerLen_45);
    InstrumentLeg_45.insert(EncodedLegIssuerLen_45.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_45("DATA_1005902791");
    noLegs_0_1.set(EncodedLegSecurityDesc_45);
    InstrumentLeg_45.insert(EncodedLegSecurityDesc_45.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_45(1944459563);
    noLegs_0_1.set(EncodedLegSecurityDescLen_45);
    InstrumentLeg_45.insert(EncodedLegSecurityDescLen_45.getString());
    FIX::LegCFICode LegCFICode_45("STRING_287728856");
    noLegs_0_1.set(LegCFICode_45);
    InstrumentLeg_45.insert(LegCFICode_45.getString());
    FIX::LegContractMultiplier LegContractMultiplier_45;
    LegContractMultiplier_45.setString("3882706");
    noLegs_0_1.set(LegContractMultiplier_45);
    InstrumentLeg_45.insert(LegContractMultiplier_45.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_45(1045632917);
    noLegs_0_1.set(LegContractMultiplierUnit_45);
    InstrumentLeg_45.insert(LegContractMultiplierUnit_45.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_45("MONTHYEAR_599614941");
    noLegs_0_1.set(LegContractSettlMonth_45);
    InstrumentLeg_45.insert(LegContractSettlMonth_45.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_45("COUNTRY_1964602841");
    noLegs_0_1.set(LegCountryOfIssue_45);
    InstrumentLeg_45.insert(LegCountryOfIssue_45.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_45("LOCALMKTDATE_1945786043");
    noLegs_0_1.set(LegCouponPaymentDate_45);
    InstrumentLeg_45.insert(LegCouponPaymentDate_45.getString());
    FIX::LegCouponRate LegCouponRate_45;
    LegCouponRate_45.setString("40.590000");
    noLegs_0_1.set(LegCouponRate_45);
    InstrumentLeg_45.insert(LegCouponRate_45.getString());
    FIX::LegCreditRating LegCreditRating_45("STRING_1854668814");
    noLegs_0_1.set(LegCreditRating_45);
    InstrumentLeg_45.insert(LegCreditRating_45.getString());
    FIX::LegCurrency LegCurrency_45("CAN");
    noLegs_0_1.set(LegCurrency_45);
    InstrumentLeg_45.insert(LegCurrency_45.getString());
    FIX::LegDatedDate LegDatedDate_45("LOCALMKTDATE_328613959");
    noLegs_0_1.set(LegDatedDate_45);
    InstrumentLeg_45.insert(LegDatedDate_45.getString());
    FIX::LegExerciseStyle LegExerciseStyle_45(1231814782);
    noLegs_0_1.set(LegExerciseStyle_45);
    InstrumentLeg_45.insert(LegExerciseStyle_45.getString());
    FIX::LegFactor LegFactor_45;
    LegFactor_45.setString("7818254");
    noLegs_0_1.set(LegFactor_45);
    InstrumentLeg_45.insert(LegFactor_45.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_45(2027128550);
    noLegs_0_1.set(LegFlowScheduleType_45);
    InstrumentLeg_45.insert(LegFlowScheduleType_45.getString());
    FIX::LegInstrRegistry LegInstrRegistry_45("STRING_819155325");
    noLegs_0_1.set(LegInstrRegistry_45);
    InstrumentLeg_45.insert(LegInstrRegistry_45.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_45("LOCALMKTDATE_600779644");
    noLegs_0_1.set(LegInterestAccrualDate_45);
    InstrumentLeg_45.insert(LegInterestAccrualDate_45.getString());
    FIX::LegIssueDate LegIssueDate_45("LOCALMKTDATE_342770654");
    noLegs_0_1.set(LegIssueDate_45);
    InstrumentLeg_45.insert(LegIssueDate_45.getString());
    FIX::LegIssuer LegIssuer_45("STRING_61581142");
    noLegs_0_1.set(LegIssuer_45);
    InstrumentLeg_45.insert(LegIssuer_45.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_45("STRING_1508395732");
    noLegs_0_1.set(LegLocaleOfIssue_45);
    InstrumentLeg_45.insert(LegLocaleOfIssue_45.getString());
    FIX::LegMaturityDate LegMaturityDate_45("LOCALMKTDATE_1267416232");
    noLegs_0_1.set(LegMaturityDate_45);
    InstrumentLeg_45.insert(LegMaturityDate_45.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_45("MONTHYEAR_1709618585");
    noLegs_0_1.set(LegMaturityMonthYear_45);
    InstrumentLeg_45.insert(LegMaturityMonthYear_45.getString());
    FIX::LegMaturityTime LegMaturityTime_45("TZTIMEONLY_973729042");
    noLegs_0_1.set(LegMaturityTime_45);
    InstrumentLeg_45.insert(LegMaturityTime_45.getString());
    FIX::LegOptAttribute LegOptAttribute_45('4');
    noLegs_0_1.set(LegOptAttribute_45);
    InstrumentLeg_45.insert(LegOptAttribute_45.getString());
    FIX::LegOptionRatio LegOptionRatio_45;
    LegOptionRatio_45.setString("13079918");
    noLegs_0_1.set(LegOptionRatio_45);
    InstrumentLeg_45.insert(LegOptionRatio_45.getString());
    FIX::LegPool LegPool_45("STRING_1573391897");
    noLegs_0_1.set(LegPool_45);
    InstrumentLeg_45.insert(LegPool_45.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_45("STRING_448595034");
    noLegs_0_1.set(LegPriceUnitOfMeasure_45);
    InstrumentLeg_45.insert(LegPriceUnitOfMeasure_45.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_45;
    LegPriceUnitOfMeasureQty_45.setString("18367858");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_45);
    InstrumentLeg_45.insert(LegPriceUnitOfMeasureQty_45.getString());
    FIX::LegProduct LegProduct_45(1519760131);
    noLegs_0_1.set(LegProduct_45);
    InstrumentLeg_45.insert(LegProduct_45.getString());
    FIX::LegPutOrCall LegPutOrCall_45(583993019);
    noLegs_0_1.set(LegPutOrCall_45);
    InstrumentLeg_45.insert(LegPutOrCall_45.getString());
    FIX::LegRatioQty LegRatioQty_45;
    LegRatioQty_45.setString("6952049");
    noLegs_0_1.set(LegRatioQty_45);
    InstrumentLeg_45.insert(LegRatioQty_45.getString());
    FIX::LegRedemptionDate LegRedemptionDate_45("LOCALMKTDATE_1316736046");
    noLegs_0_1.set(LegRedemptionDate_45);
    InstrumentLeg_45.insert(LegRedemptionDate_45.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_45("STRING_871721875");
    noLegs_0_1.set(LegRepoCollateralSecurityType_45);
    InstrumentLeg_45.insert(LegRepoCollateralSecurityType_45.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_45;
    LegRepurchaseRate_45.setString("56.580000");
    noLegs_0_1.set(LegRepurchaseRate_45);
    InstrumentLeg_45.insert(LegRepurchaseRate_45.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_45(214885315);
    noLegs_0_1.set(LegRepurchaseTerm_45);
    InstrumentLeg_45.insert(LegRepurchaseTerm_45.getString());
    FIX::LegSecurityDesc LegSecurityDesc_45("STRING_1471336816");
    noLegs_0_1.set(LegSecurityDesc_45);
    InstrumentLeg_45.insert(LegSecurityDesc_45.getString());
    FIX::LegSecurityExchange LegSecurityExchange_45("EXCHANGE_900594851");
    noLegs_0_1.set(LegSecurityExchange_45);
    InstrumentLeg_45.insert(LegSecurityExchange_45.getString());
    FIX::LegSecurityID LegSecurityID_45("STRING_13187710");
    noLegs_0_1.set(LegSecurityID_45);
    InstrumentLeg_45.insert(LegSecurityID_45.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_45("STRING_1012267227");
    noLegs_0_1.set(LegSecurityIDSource_45);
    InstrumentLeg_45.insert(LegSecurityIDSource_45.getString());
    FIX::LegSecuritySubType LegSecuritySubType_45("STRING_607780017");
    noLegs_0_1.set(LegSecuritySubType_45);
    InstrumentLeg_45.insert(LegSecuritySubType_45.getString());
    FIX::LegSecurityType LegSecurityType_45("STRING_1263826273");
    noLegs_0_1.set(LegSecurityType_45);
    InstrumentLeg_45.insert(LegSecurityType_45.getString());
    FIX::LegSide LegSide_45('1');
    noLegs_0_1.set(LegSide_45);
    InstrumentLeg_45.insert(LegSide_45.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_45("STRING_936393976");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_45);
    InstrumentLeg_45.insert(LegStateOrProvinceOfIssue_45.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_45("CAN");
    noLegs_0_1.set(LegStrikeCurrency_45);
    InstrumentLeg_45.insert(LegStrikeCurrency_45.getString());
    FIX::LegStrikePrice LegStrikePrice_45;
    LegStrikePrice_45.setString("8160388");
    noLegs_0_1.set(LegStrikePrice_45);
    InstrumentLeg_45.insert(LegStrikePrice_45.getString());
    FIX::LegSymbol LegSymbol_45("STRING_1167312733");
    noLegs_0_1.set(LegSymbol_45);
    InstrumentLeg_45.insert(LegSymbol_45.getString());
    FIX::LegSymbolSfx LegSymbolSfx_45("STRING_947289094");
    noLegs_0_1.set(LegSymbolSfx_45);
    InstrumentLeg_45.insert(LegSymbolSfx_45.getString());
    FIX::LegTimeUnit LegTimeUnit_45("STRING_1158809533");
    noLegs_0_1.set(LegTimeUnit_45);
    InstrumentLeg_45.insert(LegTimeUnit_45.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_45("STRING_1228893875");
    noLegs_0_1.set(LegUnitOfMeasure_45);
    InstrumentLeg_45.insert(LegUnitOfMeasure_45.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_45;
    LegUnitOfMeasureQty_45.setString("3082011");
    noLegs_0_1.set(LegUnitOfMeasureQty_45);
    InstrumentLeg_45.insert(LegUnitOfMeasureQty_45.getString());
    all_values.push_back(InstrumentLeg_45);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_82;
      FIX::LegSecurityAltID LegSecurityAltID_82("STRING_791028813");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_82);
      LegSecAltIDGrp_NoLegSecurityAltID_82.insert(LegSecurityAltID_82.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_82("STRING_1281930221");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_82);
      LegSecAltIDGrp_NoLegSecurityAltID_82.insert(LegSecurityAltIDSource_82.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_82);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_83;
      FIX::LegSecurityAltID LegSecurityAltID_83("STRING_723301206");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_83);
      LegSecAltIDGrp_NoLegSecurityAltID_83.insert(LegSecurityAltID_83.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_83("STRING_2099020710");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_83);
      LegSecAltIDGrp_NoLegSecurityAltID_83.insert(LegSecurityAltIDSource_83.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_83);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_6;
      FIX::LegStipulationType LegStipulationType_6("STRING_1171896240");
      noLegStipulations_1_1_0.set(LegStipulationType_6);
      LegStipulations_NoLegStipulations_6.insert(LegStipulationType_6.getString());
      FIX::LegStipulationValue LegStipulationValue_6("STRING_1788322905");
      noLegStipulations_1_1_0.set(LegStipulationValue_6);
      LegStipulations_NoLegStipulations_6.insert(LegStipulationValue_6.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_6);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_7;
      FIX::LegStipulationType LegStipulationType_7("STRING_80114953");
      noLegStipulations_1_1_1.set(LegStipulationType_7);
      LegStipulations_NoLegStipulations_7.insert(LegStipulationType_7.getString());
      FIX::LegStipulationValue LegStipulationValue_7("STRING_1755889259");
      noLegStipulations_1_1_1.set(LegStipulationValue_7);
      LegStipulations_NoLegStipulations_7.insert(LegStipulationValue_7.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_7);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_8;
      FIX::LegStipulationType LegStipulationType_8("STRING_336044244");
      noLegStipulations_1_1_2.set(LegStipulationType_8);
      LegStipulations_NoLegStipulations_8.insert(LegStipulationType_8.getString());
      FIX::LegStipulationValue LegStipulationValue_8("STRING_1396850999");
      noLegStipulations_1_1_2.set(LegStipulationValue_8);
      LegStipulations_NoLegStipulations_8.insert(LegStipulationValue_8.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_8);

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_2;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_2;
    FIX::LegIOIQty LegIOIQty_2("STRING_480127486");
    noLegs_0_2.set(LegIOIQty_2);
    InstrmtLegIOIGrp_NoLegs_2.insert(LegIOIQty_2.getString());
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_46;
    FIX::EncodedLegIssuer EncodedLegIssuer_46("DATA_1419519902");
    noLegs_0_2.set(EncodedLegIssuer_46);
    InstrumentLeg_46.insert(EncodedLegIssuer_46.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_46(1611736314);
    noLegs_0_2.set(EncodedLegIssuerLen_46);
    InstrumentLeg_46.insert(EncodedLegIssuerLen_46.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_46("DATA_1951464302");
    noLegs_0_2.set(EncodedLegSecurityDesc_46);
    InstrumentLeg_46.insert(EncodedLegSecurityDesc_46.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_46(172631106);
    noLegs_0_2.set(EncodedLegSecurityDescLen_46);
    InstrumentLeg_46.insert(EncodedLegSecurityDescLen_46.getString());
    FIX::LegCFICode LegCFICode_46("STRING_1624924025");
    noLegs_0_2.set(LegCFICode_46);
    InstrumentLeg_46.insert(LegCFICode_46.getString());
    FIX::LegContractMultiplier LegContractMultiplier_46;
    LegContractMultiplier_46.setString("8162478");
    noLegs_0_2.set(LegContractMultiplier_46);
    InstrumentLeg_46.insert(LegContractMultiplier_46.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_46(780411123);
    noLegs_0_2.set(LegContractMultiplierUnit_46);
    InstrumentLeg_46.insert(LegContractMultiplierUnit_46.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_46("MONTHYEAR_741266650");
    noLegs_0_2.set(LegContractSettlMonth_46);
    InstrumentLeg_46.insert(LegContractSettlMonth_46.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_46("COUNTRY_380931839");
    noLegs_0_2.set(LegCountryOfIssue_46);
    InstrumentLeg_46.insert(LegCountryOfIssue_46.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_46("LOCALMKTDATE_1716805100");
    noLegs_0_2.set(LegCouponPaymentDate_46);
    InstrumentLeg_46.insert(LegCouponPaymentDate_46.getString());
    FIX::LegCouponRate LegCouponRate_46;
    LegCouponRate_46.setString("40.580000");
    noLegs_0_2.set(LegCouponRate_46);
    InstrumentLeg_46.insert(LegCouponRate_46.getString());
    FIX::LegCreditRating LegCreditRating_46("STRING_727441288");
    noLegs_0_2.set(LegCreditRating_46);
    InstrumentLeg_46.insert(LegCreditRating_46.getString());
    FIX::LegCurrency LegCurrency_46("GBP");
    noLegs_0_2.set(LegCurrency_46);
    InstrumentLeg_46.insert(LegCurrency_46.getString());
    FIX::LegDatedDate LegDatedDate_46("LOCALMKTDATE_1674730382");
    noLegs_0_2.set(LegDatedDate_46);
    InstrumentLeg_46.insert(LegDatedDate_46.getString());
    FIX::LegExerciseStyle LegExerciseStyle_46(1544169864);
    noLegs_0_2.set(LegExerciseStyle_46);
    InstrumentLeg_46.insert(LegExerciseStyle_46.getString());
    FIX::LegFactor LegFactor_46;
    LegFactor_46.setString("13381470");
    noLegs_0_2.set(LegFactor_46);
    InstrumentLeg_46.insert(LegFactor_46.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_46(1982931561);
    noLegs_0_2.set(LegFlowScheduleType_46);
    InstrumentLeg_46.insert(LegFlowScheduleType_46.getString());
    FIX::LegInstrRegistry LegInstrRegistry_46("STRING_1822911982");
    noLegs_0_2.set(LegInstrRegistry_46);
    InstrumentLeg_46.insert(LegInstrRegistry_46.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_46("LOCALMKTDATE_2129175832");
    noLegs_0_2.set(LegInterestAccrualDate_46);
    InstrumentLeg_46.insert(LegInterestAccrualDate_46.getString());
    FIX::LegIssueDate LegIssueDate_46("LOCALMKTDATE_1117378134");
    noLegs_0_2.set(LegIssueDate_46);
    InstrumentLeg_46.insert(LegIssueDate_46.getString());
    FIX::LegIssuer LegIssuer_46("STRING_398729541");
    noLegs_0_2.set(LegIssuer_46);
    InstrumentLeg_46.insert(LegIssuer_46.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_46("STRING_2080712895");
    noLegs_0_2.set(LegLocaleOfIssue_46);
    InstrumentLeg_46.insert(LegLocaleOfIssue_46.getString());
    FIX::LegMaturityDate LegMaturityDate_46("LOCALMKTDATE_1825216604");
    noLegs_0_2.set(LegMaturityDate_46);
    InstrumentLeg_46.insert(LegMaturityDate_46.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_46("MONTHYEAR_1570625781");
    noLegs_0_2.set(LegMaturityMonthYear_46);
    InstrumentLeg_46.insert(LegMaturityMonthYear_46.getString());
    FIX::LegMaturityTime LegMaturityTime_46("TZTIMEONLY_1721552152");
    noLegs_0_2.set(LegMaturityTime_46);
    InstrumentLeg_46.insert(LegMaturityTime_46.getString());
    FIX::LegOptAttribute LegOptAttribute_46('1');
    noLegs_0_2.set(LegOptAttribute_46);
    InstrumentLeg_46.insert(LegOptAttribute_46.getString());
    FIX::LegOptionRatio LegOptionRatio_46;
    LegOptionRatio_46.setString("11790313");
    noLegs_0_2.set(LegOptionRatio_46);
    InstrumentLeg_46.insert(LegOptionRatio_46.getString());
    FIX::LegPool LegPool_46("STRING_2057596396");
    noLegs_0_2.set(LegPool_46);
    InstrumentLeg_46.insert(LegPool_46.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_46("STRING_1154698908");
    noLegs_0_2.set(LegPriceUnitOfMeasure_46);
    InstrumentLeg_46.insert(LegPriceUnitOfMeasure_46.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_46;
    LegPriceUnitOfMeasureQty_46.setString("16591588");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_46);
    InstrumentLeg_46.insert(LegPriceUnitOfMeasureQty_46.getString());
    FIX::LegProduct LegProduct_46(1329632651);
    noLegs_0_2.set(LegProduct_46);
    InstrumentLeg_46.insert(LegProduct_46.getString());
    FIX::LegPutOrCall LegPutOrCall_46(618951574);
    noLegs_0_2.set(LegPutOrCall_46);
    InstrumentLeg_46.insert(LegPutOrCall_46.getString());
    FIX::LegRatioQty LegRatioQty_46;
    LegRatioQty_46.setString("14631395");
    noLegs_0_2.set(LegRatioQty_46);
    InstrumentLeg_46.insert(LegRatioQty_46.getString());
    FIX::LegRedemptionDate LegRedemptionDate_46("LOCALMKTDATE_1502263757");
    noLegs_0_2.set(LegRedemptionDate_46);
    InstrumentLeg_46.insert(LegRedemptionDate_46.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_46("STRING_96391951");
    noLegs_0_2.set(LegRepoCollateralSecurityType_46);
    InstrumentLeg_46.insert(LegRepoCollateralSecurityType_46.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_46;
    LegRepurchaseRate_46.setString("37.680000");
    noLegs_0_2.set(LegRepurchaseRate_46);
    InstrumentLeg_46.insert(LegRepurchaseRate_46.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_46(135191232);
    noLegs_0_2.set(LegRepurchaseTerm_46);
    InstrumentLeg_46.insert(LegRepurchaseTerm_46.getString());
    FIX::LegSecurityDesc LegSecurityDesc_46("STRING_837658602");
    noLegs_0_2.set(LegSecurityDesc_46);
    InstrumentLeg_46.insert(LegSecurityDesc_46.getString());
    FIX::LegSecurityExchange LegSecurityExchange_46("EXCHANGE_512835607");
    noLegs_0_2.set(LegSecurityExchange_46);
    InstrumentLeg_46.insert(LegSecurityExchange_46.getString());
    FIX::LegSecurityID LegSecurityID_46("STRING_1851996332");
    noLegs_0_2.set(LegSecurityID_46);
    InstrumentLeg_46.insert(LegSecurityID_46.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_46("STRING_1927082660");
    noLegs_0_2.set(LegSecurityIDSource_46);
    InstrumentLeg_46.insert(LegSecurityIDSource_46.getString());
    FIX::LegSecuritySubType LegSecuritySubType_46("STRING_1240276895");
    noLegs_0_2.set(LegSecuritySubType_46);
    InstrumentLeg_46.insert(LegSecuritySubType_46.getString());
    FIX::LegSecurityType LegSecurityType_46("STRING_89873015");
    noLegs_0_2.set(LegSecurityType_46);
    InstrumentLeg_46.insert(LegSecurityType_46.getString());
    FIX::LegSide LegSide_46('2');
    noLegs_0_2.set(LegSide_46);
    InstrumentLeg_46.insert(LegSide_46.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_46("STRING_767523630");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_46);
    InstrumentLeg_46.insert(LegStateOrProvinceOfIssue_46.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_46("JPY");
    noLegs_0_2.set(LegStrikeCurrency_46);
    InstrumentLeg_46.insert(LegStrikeCurrency_46.getString());
    FIX::LegStrikePrice LegStrikePrice_46;
    LegStrikePrice_46.setString("6029715");
    noLegs_0_2.set(LegStrikePrice_46);
    InstrumentLeg_46.insert(LegStrikePrice_46.getString());
    FIX::LegSymbol LegSymbol_46("STRING_1309471214");
    noLegs_0_2.set(LegSymbol_46);
    InstrumentLeg_46.insert(LegSymbol_46.getString());
    FIX::LegSymbolSfx LegSymbolSfx_46("STRING_1208691360");
    noLegs_0_2.set(LegSymbolSfx_46);
    InstrumentLeg_46.insert(LegSymbolSfx_46.getString());
    FIX::LegTimeUnit LegTimeUnit_46("STRING_1720349677");
    noLegs_0_2.set(LegTimeUnit_46);
    InstrumentLeg_46.insert(LegTimeUnit_46.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_46("STRING_1708200755");
    noLegs_0_2.set(LegUnitOfMeasure_46);
    InstrumentLeg_46.insert(LegUnitOfMeasure_46.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_46;
    LegUnitOfMeasureQty_46.setString("11419206");
    noLegs_0_2.set(LegUnitOfMeasureQty_46);
    InstrumentLeg_46.insert(LegUnitOfMeasureQty_46.getString());
    all_values.push_back(InstrumentLeg_46);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_84;
      FIX::LegSecurityAltID LegSecurityAltID_84("STRING_1131342889");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_84);
      LegSecAltIDGrp_NoLegSecurityAltID_84.insert(LegSecurityAltID_84.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_84("STRING_715989112");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_84);
      LegSecAltIDGrp_NoLegSecurityAltID_84.insert(LegSecurityAltIDSource_84.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_84);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_85;
      FIX::LegSecurityAltID LegSecurityAltID_85("STRING_1155930542");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_85);
      LegSecAltIDGrp_NoLegSecurityAltID_85.insert(LegSecurityAltID_85.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_85("STRING_162890634");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_85);
      LegSecAltIDGrp_NoLegSecurityAltID_85.insert(LegSecurityAltIDSource_85.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_85);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_9;
      FIX::LegStipulationType LegStipulationType_9("STRING_163145802");
      noLegStipulations_2_1_0.set(LegStipulationType_9);
      LegStipulations_NoLegStipulations_9.insert(LegStipulationType_9.getString());
      FIX::LegStipulationValue LegStipulationValue_9("STRING_1822049513");
      noLegStipulations_2_1_0.set(LegStipulationValue_9);
      LegStipulations_NoLegStipulations_9.insert(LegStipulationValue_9.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_9);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_25;
  FIX::AttachmentPoint AttachmentPoint_25;
  AttachmentPoint_25.setString("45.110000");
  msg.set(AttachmentPoint_25);
  Instrument_25.insert(AttachmentPoint_25.getString());
  FIX::CFICode CFICode_25("STRING_782097376");
  msg.set(CFICode_25);
  Instrument_25.insert(CFICode_25.getString());
  FIX::CPProgram CPProgram_25(1);
  msg.set(CPProgram_25);
  Instrument_25.insert(CPProgram_25.getString());
  FIX::CPRegType CPRegType_25("STRING_1310514620");
  msg.set(CPRegType_25);
  Instrument_25.insert(CPRegType_25.getString());
  FIX::CapPrice CapPrice_25;
  CapPrice_25.setString("8784893");
  msg.set(CapPrice_25);
  Instrument_25.insert(CapPrice_25.getString());
  FIX::ContractMultiplier ContractMultiplier_25;
  ContractMultiplier_25.setString("12696091");
  msg.set(ContractMultiplier_25);
  Instrument_25.insert(ContractMultiplier_25.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_25(0);
  msg.set(ContractMultiplierUnit_25);
  Instrument_25.insert(ContractMultiplierUnit_25.getString());
  FIX::ContractSettlMonth ContractSettlMonth_25("MONTHYEAR_1716147930");
  msg.set(ContractSettlMonth_25);
  Instrument_25.insert(ContractSettlMonth_25.getString());
  FIX::CountryOfIssue CountryOfIssue_25("COUNTRY_1782444774");
  msg.set(CountryOfIssue_25);
  Instrument_25.insert(CountryOfIssue_25.getString());
  FIX::CouponPaymentDate CouponPaymentDate_25("LOCALMKTDATE_1150218537");
  msg.set(CouponPaymentDate_25);
  Instrument_25.insert(CouponPaymentDate_25.getString());
  FIX::CouponRate CouponRate_25;
  CouponRate_25.setString("69.420000");
  msg.set(CouponRate_25);
  Instrument_25.insert(CouponRate_25.getString());
  FIX::CreditRating CreditRating_25("STRING_875238022");
  msg.set(CreditRating_25);
  Instrument_25.insert(CreditRating_25.getString());
  FIX::DatedDate DatedDate_25("LOCALMKTDATE_1240091553");
  msg.set(DatedDate_25);
  Instrument_25.insert(DatedDate_25.getString());
  FIX::DetachmentPoint DetachmentPoint_25;
  DetachmentPoint_25.setString("90.990000");
  msg.set(DetachmentPoint_25);
  Instrument_25.insert(DetachmentPoint_25.getString());
  FIX::EncodedIssuer EncodedIssuer_25("DATA_1642761652");
  msg.set(EncodedIssuer_25);
  Instrument_25.insert(EncodedIssuer_25.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_25(726650785);
  msg.set(EncodedIssuerLen_25);
  Instrument_25.insert(EncodedIssuerLen_25.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_25("DATA_464114627");
  msg.set(EncodedSecurityDesc_25);
  Instrument_25.insert(EncodedSecurityDesc_25.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_25(98249547);
  msg.set(EncodedSecurityDescLen_25);
  Instrument_25.insert(EncodedSecurityDescLen_25.getString());
  FIX::ExerciseStyle ExerciseStyle_25(0);
  msg.set(ExerciseStyle_25);
  Instrument_25.insert(ExerciseStyle_25.getString());
  FIX::Factor Factor_25;
  Factor_25.setString("16728059");
  msg.set(Factor_25);
  Instrument_25.insert(Factor_25.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_25(true);
  msg.set(FlexProductEligibilityIndicator_25);
  Instrument_25.insert(FlexProductEligibilityIndicator_25.getString());
  FIX::FlexibleIndicator FlexibleIndicator_25(false);
  msg.set(FlexibleIndicator_25);
  Instrument_25.insert(FlexibleIndicator_25.getString());
  FIX::FloorPrice FloorPrice_25;
  FloorPrice_25.setString("6672429");
  msg.set(FloorPrice_25);
  Instrument_25.insert(FloorPrice_25.getString());
  FIX::FlowScheduleType FlowScheduleType_25(4);
  msg.set(FlowScheduleType_25);
  Instrument_25.insert(FlowScheduleType_25.getString());
  FIX::InstrRegistry InstrRegistry_25("STRING_580698348");
  msg.set(InstrRegistry_25);
  Instrument_25.insert(InstrRegistry_25.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_25('1');
  msg.set(InstrmtAssignmentMethod_25);
  Instrument_25.insert(InstrmtAssignmentMethod_25.getString());
  FIX::InterestAccrualDate InterestAccrualDate_25("LOCALMKTDATE_77645103");
  msg.set(InterestAccrualDate_25);
  Instrument_25.insert(InterestAccrualDate_25.getString());
  FIX::IssueDate IssueDate_25("LOCALMKTDATE_743588982");
  msg.set(IssueDate_25);
  Instrument_25.insert(IssueDate_25.getString());
  FIX::Issuer Issuer_25("STRING_2009333919");
  msg.set(Issuer_25);
  Instrument_25.insert(Issuer_25.getString());
  FIX::ListMethod ListMethod_25(1);
  msg.set(ListMethod_25);
  Instrument_25.insert(ListMethod_25.getString());
  FIX::LocaleOfIssue LocaleOfIssue_25("STRING_418154847");
  msg.set(LocaleOfIssue_25);
  Instrument_25.insert(LocaleOfIssue_25.getString());
  FIX::MaturityDate MaturityDate_25("LOCALMKTDATE_1817584783");
  msg.set(MaturityDate_25);
  Instrument_25.insert(MaturityDate_25.getString());
  FIX::MaturityMonthYear MaturityMonthYear_25("MONTHYEAR_1022888281");
  msg.set(MaturityMonthYear_25);
  Instrument_25.insert(MaturityMonthYear_25.getString());
  FIX::MaturityTime MaturityTime_25("TZTIMEONLY_1555860247");
  msg.set(MaturityTime_25);
  Instrument_25.insert(MaturityTime_25.getString());
  FIX::MinPriceIncrement MinPriceIncrement_25;
  MinPriceIncrement_25.setString("9806157");
  msg.set(MinPriceIncrement_25);
  Instrument_25.insert(MinPriceIncrement_25.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_25;
  MinPriceIncrementAmount_25.setString("19013776");
  msg.set(MinPriceIncrementAmount_25);
  Instrument_25.insert(MinPriceIncrementAmount_25.getString());
  FIX::NTPositionLimit NTPositionLimit_25(677985766);
  msg.set(NTPositionLimit_25);
  Instrument_25.insert(NTPositionLimit_25.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_25;
  NotionalPercentageOutstanding_25.setString("79.600000");
  msg.set(NotionalPercentageOutstanding_25);
  Instrument_25.insert(NotionalPercentageOutstanding_25.getString());
  FIX::OptAttribute OptAttribute_25('1');
  msg.set(OptAttribute_25);
  Instrument_25.insert(OptAttribute_25.getString());
  FIX::OptPayoutAmount OptPayoutAmount_25;
  OptPayoutAmount_25.setString("3129468");
  msg.set(OptPayoutAmount_25);
  Instrument_25.insert(OptPayoutAmount_25.getString());
  FIX::OptPayoutType OptPayoutType_25(1);
  msg.set(OptPayoutType_25);
  Instrument_25.insert(OptPayoutType_25.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_25;
  OriginalNotionalPercentageOutstanding_25.setString("51.860000");
  msg.set(OriginalNotionalPercentageOutstanding_25);
  Instrument_25.insert(OriginalNotionalPercentageOutstanding_25.getString());
  FIX::Pool Pool_25("STRING_1188184915");
  msg.set(Pool_25);
  Instrument_25.insert(Pool_25.getString());
  FIX::PositionLimit PositionLimit_25(521664403);
  msg.set(PositionLimit_25);
  Instrument_25.insert(PositionLimit_25.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_25("STRING_INX");
  msg.set(PriceQuoteMethod_25);
  Instrument_25.insert(PriceQuoteMethod_25.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_25("STRING_683462919");
  msg.set(PriceUnitOfMeasure_25);
  Instrument_25.insert(PriceUnitOfMeasure_25.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_25;
  PriceUnitOfMeasureQty_25.setString("12483151");
  msg.set(PriceUnitOfMeasureQty_25);
  Instrument_25.insert(PriceUnitOfMeasureQty_25.getString());
  FIX::Product Product_27(2);
  msg.set(Product_27);
  Instrument_25.insert(Product_27.getString());
  FIX::ProductComplex ProductComplex_25("STRING_781712466");
  msg.set(ProductComplex_25);
  Instrument_25.insert(ProductComplex_25.getString());
  FIX::PutOrCall PutOrCall_25(1);
  msg.set(PutOrCall_25);
  Instrument_25.insert(PutOrCall_25.getString());
  FIX::RedemptionDate RedemptionDate_25("LOCALMKTDATE_44857603");
  msg.set(RedemptionDate_25);
  Instrument_25.insert(RedemptionDate_25.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_25("STRING_452828042");
  msg.set(RepoCollateralSecurityType_25);
  Instrument_25.insert(RepoCollateralSecurityType_25.getString());
  FIX::RepurchaseRate RepurchaseRate_25;
  RepurchaseRate_25.setString("89.980000");
  msg.set(RepurchaseRate_25);
  Instrument_25.insert(RepurchaseRate_25.getString());
  FIX::RepurchaseTerm RepurchaseTerm_25(712100550);
  msg.set(RepurchaseTerm_25);
  Instrument_25.insert(RepurchaseTerm_25.getString());
  FIX::RestructuringType RestructuringType_25("STRING_XR");
  msg.set(RestructuringType_25);
  Instrument_25.insert(RestructuringType_25.getString());
  FIX::SecurityDesc SecurityDesc_25("STRING_1167007346");
  msg.set(SecurityDesc_25);
  Instrument_25.insert(SecurityDesc_25.getString());
  FIX::SecurityExchange SecurityExchange_25("EXCHANGE_2095332609");
  msg.set(SecurityExchange_25);
  Instrument_25.insert(SecurityExchange_25.getString());
  FIX::SecurityGroup SecurityGroup_25("STRING_1599671354");
  msg.set(SecurityGroup_25);
  Instrument_25.insert(SecurityGroup_25.getString());
  FIX::SecurityID SecurityID_25("STRING_1910596328");
  msg.set(SecurityID_25);
  Instrument_25.insert(SecurityID_25.getString());
  FIX::SecurityIDSource SecurityIDSource_25("STRING_6");
  msg.set(SecurityIDSource_25);
  Instrument_25.insert(SecurityIDSource_25.getString());
  FIX::SecurityStatus SecurityStatus_25("STRING_2");
  msg.set(SecurityStatus_25);
  Instrument_25.insert(SecurityStatus_25.getString());
  FIX::SecuritySubType SecuritySubType_26("STRING_181267528");
  msg.set(SecuritySubType_26);
  Instrument_25.insert(SecuritySubType_26.getString());
  FIX::SecurityType SecurityType_27("STRING_BN");
  msg.set(SecurityType_27);
  Instrument_25.insert(SecurityType_27.getString());
  FIX::Seniority Seniority_25("STRING_SR");
  msg.set(Seniority_25);
  Instrument_25.insert(Seniority_25.getString());
  FIX::SettlMethod SettlMethod_25('P');
  msg.set(SettlMethod_25);
  Instrument_25.insert(SettlMethod_25.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_25("STRING_460416123");
  msg.set(SettleOnOpenFlag_25);
  Instrument_25.insert(SettleOnOpenFlag_25.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_25("STRING_469760854");
  msg.set(StateOrProvinceOfIssue_25);
  Instrument_25.insert(StateOrProvinceOfIssue_25.getString());
  FIX::StrikeCurrency StrikeCurrency_25("USD");
  msg.set(StrikeCurrency_25);
  Instrument_25.insert(StrikeCurrency_25.getString());
  FIX::StrikeMultiplier StrikeMultiplier_25;
  StrikeMultiplier_25.setString("19398027");
  msg.set(StrikeMultiplier_25);
  Instrument_25.insert(StrikeMultiplier_25.getString());
  FIX::StrikePrice StrikePrice_25;
  StrikePrice_25.setString("5805767");
  msg.set(StrikePrice_25);
  Instrument_25.insert(StrikePrice_25.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_25(5);
  msg.set(StrikePriceBoundaryMethod_25);
  Instrument_25.insert(StrikePriceBoundaryMethod_25.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_25;
  StrikePriceBoundaryPrecision_25.setString("42.830000");
  msg.set(StrikePriceBoundaryPrecision_25);
  Instrument_25.insert(StrikePriceBoundaryPrecision_25.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_25(2);
  msg.set(StrikePriceDeterminationMethod_25);
  Instrument_25.insert(StrikePriceDeterminationMethod_25.getString());
  FIX::StrikeValue StrikeValue_25;
  StrikeValue_25.setString("5424913");
  msg.set(StrikeValue_25);
  Instrument_25.insert(StrikeValue_25.getString());
  FIX::Symbol Symbol_25("STRING_666044920");
  msg.set(Symbol_25);
  Instrument_25.insert(Symbol_25.getString());
  FIX::SymbolSfx SymbolSfx_25("STRING_CD");
  msg.set(SymbolSfx_25);
  Instrument_25.insert(SymbolSfx_25.getString());
  FIX::TimeUnit TimeUnit_25("STRING_Wk");
  msg.set(TimeUnit_25);
  Instrument_25.insert(TimeUnit_25.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_25(1);
  msg.set(UnderlyingPriceDeterminationMethod_25);
  Instrument_25.insert(UnderlyingPriceDeterminationMethod_25.getString());
  FIX::UnitOfMeasure UnitOfMeasure_25("STRING_Bu");
  msg.set(UnitOfMeasure_25);
  Instrument_25.insert(UnitOfMeasure_25.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_25;
  UnitOfMeasureQty_25.setString("7802764");
  msg.set(UnitOfMeasureQty_25);
  Instrument_25.insert(UnitOfMeasureQty_25.getString());
  FIX::ValuationMethod ValuationMethod_25("STRING_CDS");
  msg.set(ValuationMethod_25);
  Instrument_25.insert(ValuationMethod_25.getString());
  all_values.push_back(Instrument_25);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_50;
    FIX::ComplexEventCondition ComplexEventCondition_50(2);
    noComplexEvents_0_0.set(ComplexEventCondition_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventCondition_50.getString());
    FIX::ComplexEventPrice ComplexEventPrice_50;
    ComplexEventPrice_50.setString("19425383");
    noComplexEvents_0_0.set(ComplexEventPrice_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPrice_50.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_50(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceBoundaryMethod_50.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_50;
    ComplexEventPriceBoundaryPrecision_50.setString("91.130000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceBoundaryPrecision_50.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_50(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceTimeType_50.getString());
    FIX::ComplexEventType ComplexEventType_50(6);
    noComplexEvents_0_0.set(ComplexEventType_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventType_50.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_50;
    ComplexOptPayoutAmount_50.setString("1492217");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexOptPayoutAmount_50.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_50);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_107;
      FIX::ComplexEventEndDate ComplexEventEndDate_107(FIX::UTCTIMESTAMP(10, 41, 13, 21, 92011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_107);
      ComplexEventDates_NoComplexEventDates_107.insert(ComplexEventEndDate_107.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_107(FIX::UTCTIMESTAMP(12, 24, 49, 26, 12010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_107);
      ComplexEventDates_NoComplexEventDates_107.insert(ComplexEventStartDate_107.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_107);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_221;
        FIX::ComplexEventEndTime ComplexEventEndTime_221(FIX::UTCTIMEONLY(11, 8, 5));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_221);
        ComplexEventTimes_NoComplexEventTimes_221.insert(ComplexEventEndTime_221.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_221(FIX::UTCTIMEONLY(17, 25, 6));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_221);
        ComplexEventTimes_NoComplexEventTimes_221.insert(ComplexEventStartTime_221.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_221);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_51;
    FIX::ComplexEventCondition ComplexEventCondition_51(1);
    noComplexEvents_0_1.set(ComplexEventCondition_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventCondition_51.getString());
    FIX::ComplexEventPrice ComplexEventPrice_51;
    ComplexEventPrice_51.setString("2297118");
    noComplexEvents_0_1.set(ComplexEventPrice_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPrice_51.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_51(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceBoundaryMethod_51.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_51;
    ComplexEventPriceBoundaryPrecision_51.setString("19.050000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceBoundaryPrecision_51.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_51(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventPriceTimeType_51.getString());
    FIX::ComplexEventType ComplexEventType_51(1);
    noComplexEvents_0_1.set(ComplexEventType_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexEventType_51.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_51;
    ComplexOptPayoutAmount_51.setString("9734236");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_51);
    ComplexEvents_NoComplexEvents_51.insert(ComplexOptPayoutAmount_51.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_51);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_108;
      FIX::ComplexEventEndDate ComplexEventEndDate_108(FIX::UTCTIMESTAMP(5, 13, 24, 10, 32015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_108);
      ComplexEventDates_NoComplexEventDates_108.insert(ComplexEventEndDate_108.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_108(FIX::UTCTIMESTAMP(2, 28, 14, 17, 92012));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_108);
      ComplexEventDates_NoComplexEventDates_108.insert(ComplexEventStartDate_108.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_108);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_222;
        FIX::ComplexEventEndTime ComplexEventEndTime_222(FIX::UTCTIMEONLY(23, 25, 25));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_222);
        ComplexEventTimes_NoComplexEventTimes_222.insert(ComplexEventEndTime_222.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_222(FIX::UTCTIMEONLY(10, 50, 3));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_222);
        ComplexEventTimes_NoComplexEventTimes_222.insert(ComplexEventStartTime_222.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_222);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_223;
        FIX::ComplexEventEndTime ComplexEventEndTime_223(FIX::UTCTIMEONLY(6, 24, 11));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_223);
        ComplexEventTimes_NoComplexEventTimes_223.insert(ComplexEventEndTime_223.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_223(FIX::UTCTIMEONLY(19, 31, 46));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_223);
        ComplexEventTimes_NoComplexEventTimes_223.insert(ComplexEventStartTime_223.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_223);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_109;
      FIX::ComplexEventEndDate ComplexEventEndDate_109(FIX::UTCTIMESTAMP(4, 59, 43, 7, 22011));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_109);
      ComplexEventDates_NoComplexEventDates_109.insert(ComplexEventEndDate_109.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_109(FIX::UTCTIMESTAMP(16, 7, 14, 1, 42002));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_109);
      ComplexEventDates_NoComplexEventDates_109.insert(ComplexEventStartDate_109.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_109);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_224;
        FIX::ComplexEventEndTime ComplexEventEndTime_224(FIX::UTCTIMEONLY(18, 30, 1));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_224);
        ComplexEventTimes_NoComplexEventTimes_224.insert(ComplexEventEndTime_224.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_224(FIX::UTCTIMEONLY(8, 51, 46));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_224);
        ComplexEventTimes_NoComplexEventTimes_224.insert(ComplexEventStartTime_224.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_224);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_225;
        FIX::ComplexEventEndTime ComplexEventEndTime_225(FIX::UTCTIMEONLY(9, 2, 50));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_225);
        ComplexEventTimes_NoComplexEventTimes_225.insert(ComplexEventEndTime_225.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_225(FIX::UTCTIMEONLY(10, 13, 49));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_225);
        ComplexEventTimes_NoComplexEventTimes_225.insert(ComplexEventStartTime_225.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_225);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_52;
    FIX::ComplexEventCondition ComplexEventCondition_52(2);
    noComplexEvents_0_2.set(ComplexEventCondition_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventCondition_52.getString());
    FIX::ComplexEventPrice ComplexEventPrice_52;
    ComplexEventPrice_52.setString("9551554");
    noComplexEvents_0_2.set(ComplexEventPrice_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventPrice_52.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_52(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceBoundaryMethod_52.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_52;
    ComplexEventPriceBoundaryPrecision_52.setString("32.640000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceBoundaryPrecision_52.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_52(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceTimeType_52.getString());
    FIX::ComplexEventType ComplexEventType_52(7);
    noComplexEvents_0_2.set(ComplexEventType_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventType_52.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_52;
    ComplexOptPayoutAmount_52.setString("19187743");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexOptPayoutAmount_52.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_52);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_110;
      FIX::ComplexEventEndDate ComplexEventEndDate_110(FIX::UTCTIMESTAMP(14, 58, 59, 21, 62004));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_110);
      ComplexEventDates_NoComplexEventDates_110.insert(ComplexEventEndDate_110.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_110(FIX::UTCTIMESTAMP(23, 35, 34, 26, 82011));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_110);
      ComplexEventDates_NoComplexEventDates_110.insert(ComplexEventStartDate_110.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_110);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_226;
        FIX::ComplexEventEndTime ComplexEventEndTime_226(FIX::UTCTIMEONLY(7, 6, 32));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_226);
        ComplexEventTimes_NoComplexEventTimes_226.insert(ComplexEventEndTime_226.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_226(FIX::UTCTIMEONLY(16, 45, 59));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_226);
        ComplexEventTimes_NoComplexEventTimes_226.insert(ComplexEventStartTime_226.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_226);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_227;
        FIX::ComplexEventEndTime ComplexEventEndTime_227(FIX::UTCTIMEONLY(18, 39, 50));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_227);
        ComplexEventTimes_NoComplexEventTimes_227.insert(ComplexEventEndTime_227.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_227(FIX::UTCTIMEONLY(13, 33, 23));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_227);
        ComplexEventTimes_NoComplexEventTimes_227.insert(ComplexEventStartTime_227.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_227);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_111;
      FIX::ComplexEventEndDate ComplexEventEndDate_111(FIX::UTCTIMESTAMP(4, 14, 2, 21, 122001));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_111);
      ComplexEventDates_NoComplexEventDates_111.insert(ComplexEventEndDate_111.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_111(FIX::UTCTIMESTAMP(10, 34, 12, 12, 102006));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_111);
      ComplexEventDates_NoComplexEventDates_111.insert(ComplexEventStartDate_111.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_111);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_228;
        FIX::ComplexEventEndTime ComplexEventEndTime_228(FIX::UTCTIMEONLY(1, 50, 59));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_228);
        ComplexEventTimes_NoComplexEventTimes_228.insert(ComplexEventEndTime_228.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_228(FIX::UTCTIMEONLY(11, 36, 38));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_228);
        ComplexEventTimes_NoComplexEventTimes_228.insert(ComplexEventStartTime_228.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_228);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_229;
        FIX::ComplexEventEndTime ComplexEventEndTime_229(FIX::UTCTIMEONLY(7, 17, 18));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_229);
        ComplexEventTimes_NoComplexEventTimes_229.insert(ComplexEventEndTime_229.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_229(FIX::UTCTIMEONLY(19, 44, 25));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_229);
        ComplexEventTimes_NoComplexEventTimes_229.insert(ComplexEventStartTime_229.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_229);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_230;
        FIX::ComplexEventEndTime ComplexEventEndTime_230(FIX::UTCTIMEONLY(0, 31, 17));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_230);
        ComplexEventTimes_NoComplexEventTimes_230.insert(ComplexEventEndTime_230.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_230(FIX::UTCTIMEONLY(18, 16, 0));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_230);
        ComplexEventTimes_NoComplexEventTimes_230.insert(ComplexEventStartTime_230.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_230);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_112;
      FIX::ComplexEventEndDate ComplexEventEndDate_112(FIX::UTCTIMESTAMP(18, 4, 12, 27, 112014));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_112);
      ComplexEventDates_NoComplexEventDates_112.insert(ComplexEventEndDate_112.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_112(FIX::UTCTIMESTAMP(23, 39, 54, 14, 32007));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_112);
      ComplexEventDates_NoComplexEventDates_112.insert(ComplexEventStartDate_112.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_112);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_231;
        FIX::ComplexEventEndTime ComplexEventEndTime_231(FIX::UTCTIMEONLY(18, 38, 33));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_231);
        ComplexEventTimes_NoComplexEventTimes_231.insert(ComplexEventEndTime_231.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_231(FIX::UTCTIMEONLY(13, 17, 21));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_231);
        ComplexEventTimes_NoComplexEventTimes_231.insert(ComplexEventStartTime_231.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_231);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_232;
        FIX::ComplexEventEndTime ComplexEventEndTime_232(FIX::UTCTIMEONLY(9, 45, 12));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_232);
        ComplexEventTimes_NoComplexEventTimes_232.insert(ComplexEventEndTime_232.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_232(FIX::UTCTIMEONLY(3, 28, 14));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_232);
        ComplexEventTimes_NoComplexEventTimes_232.insert(ComplexEventStartTime_232.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_232);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::IOI::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_55;
    FIX::EventDate EventDate_55("LOCALMKTDATE_1785746950");
    noEvents_0_0.set(EventDate_55);
    EvntGrp_NoEvents_55.insert(EventDate_55.getString());
    FIX::EventPx EventPx_55;
    EventPx_55.setString("9407002");
    noEvents_0_0.set(EventPx_55);
    EvntGrp_NoEvents_55.insert(EventPx_55.getString());
    FIX::EventText EventText_55("STRING_1077144168");
    noEvents_0_0.set(EventText_55);
    EvntGrp_NoEvents_55.insert(EventText_55.getString());
    FIX::EventTime EventTime_55(FIX::UTCTIMESTAMP(17, 37, 25, 13, 52001));
    noEvents_0_0.set(EventTime_55);
    EvntGrp_NoEvents_55.insert(EventTime_55.getString());
    FIX::EventType EventType_55(16);
    noEvents_0_0.set(EventType_55);
    EvntGrp_NoEvents_55.insert(EventType_55.getString());
    all_values.push_back(EvntGrp_NoEvents_55);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_48;
    FIX::InstrumentPartyID InstrumentPartyID_48("STRING_1750327782");
    noInstrumentParties_0_0.set(InstrumentPartyID_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyID_48.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_48('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyIDSource_48.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_48(1457175060);
    noInstrumentParties_0_0.set(InstrumentPartyRole_48);
    InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyRole_48.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_48);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98;
      FIX::InstrumentPartySubID InstrumentPartySubID_98("STRING_453398274");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_98);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98.insert(InstrumentPartySubID_98.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_98(1283765665);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_98);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98.insert(InstrumentPartySubIDType_98.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99;
      FIX::InstrumentPartySubID InstrumentPartySubID_99("STRING_682546704");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_99);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99.insert(InstrumentPartySubID_99.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_99(531714823);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_99);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99.insert(InstrumentPartySubIDType_99.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_54;
    FIX::SecurityAltID SecurityAltID_54("STRING_436695578");
    noSecurityAltID_0_0.set(SecurityAltID_54);
    SecAltIDGrp_NoSecurityAltID_54.insert(SecurityAltID_54.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_54("STRING_1225078606");
    noSecurityAltID_0_0.set(SecurityAltIDSource_54);
    SecAltIDGrp_NoSecurityAltID_54.insert(SecurityAltIDSource_54.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_54);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_55;
    FIX::SecurityAltID SecurityAltID_55("STRING_1319715283");
    noSecurityAltID_0_1.set(SecurityAltID_55);
    SecAltIDGrp_NoSecurityAltID_55.insert(SecurityAltID_55.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_55("STRING_956401163");
    noSecurityAltID_0_1.set(SecurityAltIDSource_55);
    SecAltIDGrp_NoSecurityAltID_55.insert(SecurityAltIDSource_55.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_55);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_50;
  FIX::SecurityXML SecurityXML_51("XMLDATA_1708935359");
  msg.set(SecurityXML_51);
  FIX::SecurityXMLLen SecurityXMLLen_25(242242378);
  msg.set(SecurityXMLLen_25);
  FIX::SecurityXMLSchema SecurityXMLSchema_25("STRING_118554558");
  msg.set(SecurityXMLSchema_25);
  SecurityXML_50.insert(SecurityXMLSchema_25.getString());
  all_values.push_back(SecurityXML_50);

  // OrderQtyData
  multiset<string> OrderQtyData_8;
  FIX::CashOrderQty CashOrderQty_8;
  CashOrderQty_8.setString("13150618");
  msg.set(CashOrderQty_8);
  OrderQtyData_8.insert(CashOrderQty_8.getString());
  FIX::OrderPercent OrderPercent_8;
  OrderPercent_8.setString("1.120000");
  msg.set(OrderPercent_8);
  OrderQtyData_8.insert(OrderPercent_8.getString());
  FIX::OrderQty OrderQty_17;
  OrderQty_17.setString("10103488");
  msg.set(OrderQty_17);
  OrderQtyData_8.insert(OrderQty_17.getString());
  FIX::RoundingDirection RoundingDirection_8('1');
  msg.set(RoundingDirection_8);
  OrderQtyData_8.insert(RoundingDirection_8.getString());
  FIX::RoundingModulus RoundingModulus_8;
  RoundingModulus_8.setString("20999504");
  msg.set(RoundingModulus_8);
  OrderQtyData_8.insert(RoundingModulus_8.getString());
  all_values.push_back(OrderQtyData_8);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_47;
    FIX::PartyID PartyID_47("STRING_1226986372");
    noPartyIDs_0_0.set(PartyID_47);
    Parties_NoPartyIDs_47.insert(PartyID_47.getString());
    FIX::PartyIDSource PartyIDSource_47('1');
    noPartyIDs_0_0.set(PartyIDSource_47);
    Parties_NoPartyIDs_47.insert(PartyIDSource_47.getString());
    FIX::PartyRole PartyRole_47(58);
    noPartyIDs_0_0.set(PartyRole_47);
    Parties_NoPartyIDs_47.insert(PartyRole_47.getString());
    all_values.push_back(Parties_NoPartyIDs_47);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_95;
      FIX::PartySubID PartySubID_95("STRING_1408980254");
      noPartySubIDs_0_1_0.set(PartySubID_95);
      PtysSubGrp_NoPartySubIDs_95.insert(PartySubID_95.getString());
      FIX::PartySubIDType PartySubIDType_95(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_95);
      PtysSubGrp_NoPartySubIDs_95.insert(PartySubIDType_95.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_95);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_96;
      FIX::PartySubID PartySubID_96("STRING_1915294468");
      noPartySubIDs_0_1_1.set(PartySubID_96);
      PtysSubGrp_NoPartySubIDs_96.insert(PartySubID_96.getString());
      FIX::PartySubIDType PartySubIDType_96(17);
      noPartySubIDs_0_1_1.set(PartySubIDType_96);
      PtysSubGrp_NoPartySubIDs_96.insert(PartySubIDType_96.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_96);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_97;
      FIX::PartySubID PartySubID_97("STRING_476527334");
      noPartySubIDs_0_1_2.set(PartySubID_97);
      PtysSubGrp_NoPartySubIDs_97.insert(PartySubID_97.getString());
      FIX::PartySubIDType PartySubIDType_97(4);
      noPartySubIDs_0_1_2.set(PartySubIDType_97);
      PtysSubGrp_NoPartySubIDs_97.insert(PartySubIDType_97.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_97);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_48;
    FIX::PartyID PartyID_48("STRING_1661882537");
    noPartyIDs_0_1.set(PartyID_48);
    Parties_NoPartyIDs_48.insert(PartyID_48.getString());
    FIX::PartyIDSource PartyIDSource_48('E');
    noPartyIDs_0_1.set(PartyIDSource_48);
    Parties_NoPartyIDs_48.insert(PartyIDSource_48.getString());
    FIX::PartyRole PartyRole_48(81);
    noPartyIDs_0_1.set(PartyRole_48);
    Parties_NoPartyIDs_48.insert(PartyRole_48.getString());
    all_values.push_back(Parties_NoPartyIDs_48);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_98;
      FIX::PartySubID PartySubID_98("STRING_1069984412");
      noPartySubIDs_1_1_0.set(PartySubID_98);
      PtysSubGrp_NoPartySubIDs_98.insert(PartySubID_98.getString());
      FIX::PartySubIDType PartySubIDType_98(22);
      noPartySubIDs_1_1_0.set(PartySubIDType_98);
      PtysSubGrp_NoPartySubIDs_98.insert(PartySubIDType_98.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_98);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_99;
      FIX::PartySubID PartySubID_99("STRING_499511986");
      noPartySubIDs_1_1_1.set(PartySubID_99);
      PtysSubGrp_NoPartySubIDs_99.insert(PartySubID_99.getString());
      FIX::PartySubIDType PartySubIDType_99(23);
      noPartySubIDs_1_1_1.set(PartySubIDType_99);
      PtysSubGrp_NoPartySubIDs_99.insert(PartySubIDType_99.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_99);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_100;
      FIX::PartySubID PartySubID_100("STRING_781668326");
      noPartySubIDs_1_1_2.set(PartySubID_100);
      PtysSubGrp_NoPartySubIDs_100.insert(PartySubID_100.getString());
      FIX::PartySubIDType PartySubIDType_100(1);
      noPartySubIDs_1_1_2.set(PartySubIDType_100);
      PtysSubGrp_NoPartySubIDs_100.insert(PartySubIDType_100.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_100);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::IOI::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_1;
    FIX::RoutingID RoutingID_1("STRING_1738069489");
    noRoutingIDs_0_0.set(RoutingID_1);
    RoutingGrp_NoRoutingIDs_1.insert(RoutingID_1.getString());
    FIX::RoutingType RoutingType_1(1);
    noRoutingIDs_0_0.set(RoutingType_1);
    RoutingGrp_NoRoutingIDs_1.insert(RoutingType_1.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_1);

    msg.addGroup(noRoutingIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_11;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_11("EUR");
  msg.set(BenchmarkCurveCurrency_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurveCurrency_11.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_11("STRING_Treasury");
  msg.set(BenchmarkCurveName_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurveName_11.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_11("STRING_617896364");
  msg.set(BenchmarkCurvePoint_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkCurvePoint_11.getString());
  FIX::BenchmarkPrice BenchmarkPrice_11;
  BenchmarkPrice_11.setString("7194892");
  msg.set(BenchmarkPrice_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkPrice_11.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_11(1406945757);
  msg.set(BenchmarkPriceType_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkPriceType_11.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_11("STRING_570363128");
  msg.set(BenchmarkSecurityID_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkSecurityID_11.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_11("STRING_659498549");
  msg.set(BenchmarkSecurityIDSource_11);
  SpreadOrBenchmarkCurveData_11.insert(BenchmarkSecurityIDSource_11.getString());
  FIX::Spread Spread_11;
  Spread_11.setString("4864484");
  msg.set(Spread_11);
  SpreadOrBenchmarkCurveData_11.insert(Spread_11.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_11);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_22;
    FIX::StipulationType StipulationType_22("STRING_SUBSLEFT");
    noStipulations_0_0.set(StipulationType_22);
    Stipulations_NoStipulations_22.insert(StipulationType_22.getString());
    FIX::StipulationValue StipulationValue_22("STRING_313574450");
    noStipulations_0_0.set(StipulationValue_22);
    Stipulations_NoStipulations_22.insert(StipulationValue_22.getString());
    all_values.push_back(Stipulations_NoStipulations_22);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_23;
    FIX::StipulationType StipulationType_23("STRING_AVSIZE");
    noStipulations_0_1.set(StipulationType_23);
    Stipulations_NoStipulations_23.insert(StipulationType_23.getString());
    FIX::StipulationValue StipulationValue_23("STRING_1328449809");
    noStipulations_0_1.set(StipulationValue_23);
    Stipulations_NoStipulations_23.insert(StipulationValue_23.getString());
    all_values.push_back(Stipulations_NoStipulations_23);

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_37;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_37("DATA_344159244");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingIssuer_37.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_37(1804977143);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingIssuerLen_37.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_37("DATA_1599523874");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingSecurityDesc_37.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_37(2006041782);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_37);
    UnderlyingInstrument_37.insert(EncodedUnderlyingSecurityDescLen_37.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_37;
    UnderlyingAdjustedQuantity_37.setString("15911958");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_37);
    UnderlyingInstrument_37.insert(UnderlyingAdjustedQuantity_37.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_37;
    UnderlyingAllocationPercent_37.setString("99.170000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_37);
    UnderlyingInstrument_37.insert(UnderlyingAllocationPercent_37.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_37;
    UnderlyingAttachmentPoint_37.setString("89.450000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_37);
    UnderlyingInstrument_37.insert(UnderlyingAttachmentPoint_37.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_37("STRING_513696653");
    noUnderlyings_0_0.set(UnderlyingCFICode_37);
    UnderlyingInstrument_37.insert(UnderlyingCFICode_37.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_37("STRING_1606922665");
    noUnderlyings_0_0.set(UnderlyingCPProgram_37);
    UnderlyingInstrument_37.insert(UnderlyingCPProgram_37.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_37("STRING_325867284");
    noUnderlyings_0_0.set(UnderlyingCPRegType_37);
    UnderlyingInstrument_37.insert(UnderlyingCPRegType_37.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_37;
    UnderlyingCapValue_37.setString("5578688");
    noUnderlyings_0_0.set(UnderlyingCapValue_37);
    UnderlyingInstrument_37.insert(UnderlyingCapValue_37.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_37;
    UnderlyingCashAmount_37.setString("2411073");
    noUnderlyings_0_0.set(UnderlyingCashAmount_37);
    UnderlyingInstrument_37.insert(UnderlyingCashAmount_37.getString());
    FIX::UnderlyingCashType UnderlyingCashType_37("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_37);
    UnderlyingInstrument_37.insert(UnderlyingCashType_37.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_37;
    UnderlyingContractMultiplier_37.setString("19217564");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_37);
    UnderlyingInstrument_37.insert(UnderlyingContractMultiplier_37.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_37(1979176832);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_37);
    UnderlyingInstrument_37.insert(UnderlyingContractMultiplierUnit_37.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_37("COUNTRY_1189016533");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingCountryOfIssue_37.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_37("LOCALMKTDATE_1380402666");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_37);
    UnderlyingInstrument_37.insert(UnderlyingCouponPaymentDate_37.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_37;
    UnderlyingCouponRate_37.setString("72.320000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_37);
    UnderlyingInstrument_37.insert(UnderlyingCouponRate_37.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_37("STRING_1642637088");
    noUnderlyings_0_0.set(UnderlyingCreditRating_37);
    UnderlyingInstrument_37.insert(UnderlyingCreditRating_37.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_37("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_37);
    UnderlyingInstrument_37.insert(UnderlyingCurrency_37.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_37;
    UnderlyingCurrentValue_37.setString("9020991");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_37);
    UnderlyingInstrument_37.insert(UnderlyingCurrentValue_37.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_37;
    UnderlyingDetachmentPoint_37.setString("85.100000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_37);
    UnderlyingInstrument_37.insert(UnderlyingDetachmentPoint_37.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_37;
    UnderlyingDirtyPrice_37.setString("9198213");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_37);
    UnderlyingInstrument_37.insert(UnderlyingDirtyPrice_37.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_37;
    UnderlyingEndPrice_37.setString("13885476");
    noUnderlyings_0_0.set(UnderlyingEndPrice_37);
    UnderlyingInstrument_37.insert(UnderlyingEndPrice_37.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_37;
    UnderlyingEndValue_37.setString("1607350");
    noUnderlyings_0_0.set(UnderlyingEndValue_37);
    UnderlyingInstrument_37.insert(UnderlyingEndValue_37.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_37(1571747308);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_37);
    UnderlyingInstrument_37.insert(UnderlyingExerciseStyle_37.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_37;
    UnderlyingFXRate_37.setString("17021221");
    noUnderlyings_0_0.set(UnderlyingFXRate_37);
    UnderlyingInstrument_37.insert(UnderlyingFXRate_37.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_37('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_37);
    UnderlyingInstrument_37.insert(UnderlyingFXRateCalc_37.getString());
    FIX::UnderlyingFactor UnderlyingFactor_37;
    UnderlyingFactor_37.setString("7527134");
    noUnderlyings_0_0.set(UnderlyingFactor_37);
    UnderlyingInstrument_37.insert(UnderlyingFactor_37.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_37(1783507401);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_37);
    UnderlyingInstrument_37.insert(UnderlyingFlowScheduleType_37.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_37("STRING_1653431043");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_37);
    UnderlyingInstrument_37.insert(UnderlyingInstrRegistry_37.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_37("LOCALMKTDATE_410206964");
    noUnderlyings_0_0.set(UnderlyingIssueDate_37);
    UnderlyingInstrument_37.insert(UnderlyingIssueDate_37.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_37("STRING_1235547627");
    noUnderlyings_0_0.set(UnderlyingIssuer_37);
    UnderlyingInstrument_37.insert(UnderlyingIssuer_37.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_37("STRING_1511989177");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingLocaleOfIssue_37.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_37("LOCALMKTDATE_2001402853");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityDate_37.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_37("MONTHYEAR_350013896");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityMonthYear_37.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_37("TZTIMEONLY_1338344474");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_37);
    UnderlyingInstrument_37.insert(UnderlyingMaturityTime_37.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_37;
    UnderlyingNotionalPercentageOutstanding_37.setString("58.590000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_37);
    UnderlyingInstrument_37.insert(UnderlyingNotionalPercentageOutstanding_37.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_37('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_37);
    UnderlyingInstrument_37.insert(UnderlyingOptAttribute_37.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_37;
    UnderlyingOriginalNotionalPercentageOutstanding_37.setString("17.580000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_37);
    UnderlyingInstrument_37.insert(UnderlyingOriginalNotionalPercentageOutstanding_37.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_37("STRING_925484751");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_37);
    UnderlyingInstrument_37.insert(UnderlyingPriceUnitOfMeasure_37.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_37;
    UnderlyingPriceUnitOfMeasureQty_37.setString("505602");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_37);
    UnderlyingInstrument_37.insert(UnderlyingPriceUnitOfMeasureQty_37.getString());
    FIX::UnderlyingProduct UnderlyingProduct_37(1567185987);
    noUnderlyings_0_0.set(UnderlyingProduct_37);
    UnderlyingInstrument_37.insert(UnderlyingProduct_37.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_37(699757517);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_37);
    UnderlyingInstrument_37.insert(UnderlyingPutOrCall_37.getString());
    FIX::UnderlyingPx UnderlyingPx_37;
    UnderlyingPx_37.setString("20297370");
    noUnderlyings_0_0.set(UnderlyingPx_37);
    UnderlyingInstrument_37.insert(UnderlyingPx_37.getString());
    FIX::UnderlyingQty UnderlyingQty_37;
    UnderlyingQty_37.setString("6087188");
    noUnderlyings_0_0.set(UnderlyingQty_37);
    UnderlyingInstrument_37.insert(UnderlyingQty_37.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_37("LOCALMKTDATE_2080160183");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_37);
    UnderlyingInstrument_37.insert(UnderlyingRedemptionDate_37.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_37("STRING_1570570674");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_37);
    UnderlyingInstrument_37.insert(UnderlyingRepoCollateralSecurityType_37.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_37;
    UnderlyingRepurchaseRate_37.setString("23.130000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_37);
    UnderlyingInstrument_37.insert(UnderlyingRepurchaseRate_37.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_37(1930975565);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_37);
    UnderlyingInstrument_37.insert(UnderlyingRepurchaseTerm_37.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_37("STRING_1830893472");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_37);
    UnderlyingInstrument_37.insert(UnderlyingRestructuringType_37.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_37("STRING_1005971511");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityDesc_37.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_37("EXCHANGE_204670428");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityExchange_37.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_37("STRING_603231171");
    noUnderlyings_0_0.set(UnderlyingSecurityID_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityID_37.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_37("STRING_247035542");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityIDSource_37.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_37("STRING_365405455");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_37);
    UnderlyingInstrument_37.insert(UnderlyingSecuritySubType_37.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_37("STRING_27494831");
    noUnderlyings_0_0.set(UnderlyingSecurityType_37);
    UnderlyingInstrument_37.insert(UnderlyingSecurityType_37.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_37("STRING_1949157672");
    noUnderlyings_0_0.set(UnderlyingSeniority_37);
    UnderlyingInstrument_37.insert(UnderlyingSeniority_37.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_37("STRING_1674677254");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_37);
    UnderlyingInstrument_37.insert(UnderlyingSettlMethod_37.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_37(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_37);
    UnderlyingInstrument_37.insert(UnderlyingSettlementType_37.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_37;
    UnderlyingStartValue_37.setString("15851814");
    noUnderlyings_0_0.set(UnderlyingStartValue_37);
    UnderlyingInstrument_37.insert(UnderlyingStartValue_37.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_37("STRING_1180624649");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_37);
    UnderlyingInstrument_37.insert(UnderlyingStateOrProvinceOfIssue_37.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_37("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_37);
    UnderlyingInstrument_37.insert(UnderlyingStrikeCurrency_37.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_37;
    UnderlyingStrikePrice_37.setString("5451301");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_37);
    UnderlyingInstrument_37.insert(UnderlyingStrikePrice_37.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_37("STRING_1044334469");
    noUnderlyings_0_0.set(UnderlyingSymbol_37);
    UnderlyingInstrument_37.insert(UnderlyingSymbol_37.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_37("STRING_1023259301");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_37);
    UnderlyingInstrument_37.insert(UnderlyingSymbolSfx_37.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_37("STRING_1883474652");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_37);
    UnderlyingInstrument_37.insert(UnderlyingTimeUnit_37.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_37("STRING_1411950328");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_37);
    UnderlyingInstrument_37.insert(UnderlyingUnitOfMeasure_37.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_37;
    UnderlyingUnitOfMeasureQty_37.setString("8327122");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_37);
    UnderlyingInstrument_37.insert(UnderlyingUnitOfMeasureQty_37.getString());
    all_values.push_back(UnderlyingInstrument_37);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_73;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_73("STRING_189951431");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_73);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_73.insert(UnderlyingSecurityAltID_73.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_73("STRING_883272472");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_73);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_73.insert(UnderlyingSecurityAltIDSource_73.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_74;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_74("STRING_819905102");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_74);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_74.insert(UnderlyingSecurityAltID_74.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_74("STRING_889708948");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_74);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_74.insert(UnderlyingSecurityAltIDSource_74.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_74;
      FIX::UnderlyingStipType UnderlyingStipType_74("STRING_1428623975");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_74);
      UnderlyingStipulations_NoUnderlyingStips_74.insert(UnderlyingStipType_74.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_74("STRING_822385483");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_74);
      UnderlyingStipulations_NoUnderlyingStips_74.insert(UnderlyingStipValue_74.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_74);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_75;
      FIX::UnderlyingStipType UnderlyingStipType_75("STRING_188612940");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_75);
      UnderlyingStipulations_NoUnderlyingStips_75.insert(UnderlyingStipType_75.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_75("STRING_1532496288");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_75);
      UnderlyingStipulations_NoUnderlyingStips_75.insert(UnderlyingStipValue_75.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_75);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_76;
      FIX::UnderlyingStipType UnderlyingStipType_76("STRING_605877401");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_76);
      UnderlyingStipulations_NoUnderlyingStips_76.insert(UnderlyingStipType_76.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_76("STRING_2019506412");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_76);
      UnderlyingStipulations_NoUnderlyingStips_76.insert(UnderlyingStipValue_76.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_76);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_72;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_72("STRING_810547829");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyID_72.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_72('4');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyIDSource_72.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_72(638019693);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_72);
      UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyRole_72.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_72);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_141("STRING_502748766");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_141);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141.insert(UnderlyingInstrumentPartySubID_141.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_141(439693718);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_141);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141.insert(UnderlyingInstrumentPartySubIDType_141.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_73;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_73("STRING_703146890");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyID_73.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_73('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyIDSource_73.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_73(2024875143);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_73);
      UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyRole_73.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_73);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_142("STRING_325888682");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_142);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142.insert(UnderlyingInstrumentPartySubID_142.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_142(550636900);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_142);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142.insert(UnderlyingInstrumentPartySubIDType_142.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_143("STRING_281418069");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_143);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143.insert(UnderlyingInstrumentPartySubID_143.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_143(1370223152);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_143);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143.insert(UnderlyingInstrumentPartySubIDType_143.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_38;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_38("DATA_1573896201");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingIssuer_38.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_38(17409074);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingIssuerLen_38.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_38("DATA_634689832");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingSecurityDesc_38.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_38(259124768);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_38);
    UnderlyingInstrument_38.insert(EncodedUnderlyingSecurityDescLen_38.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_38;
    UnderlyingAdjustedQuantity_38.setString("14176118");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_38);
    UnderlyingInstrument_38.insert(UnderlyingAdjustedQuantity_38.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_38;
    UnderlyingAllocationPercent_38.setString("12.640000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_38);
    UnderlyingInstrument_38.insert(UnderlyingAllocationPercent_38.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_38;
    UnderlyingAttachmentPoint_38.setString("72.400000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_38);
    UnderlyingInstrument_38.insert(UnderlyingAttachmentPoint_38.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_38("STRING_90033291");
    noUnderlyings_0_1.set(UnderlyingCFICode_38);
    UnderlyingInstrument_38.insert(UnderlyingCFICode_38.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_38("STRING_1714350212");
    noUnderlyings_0_1.set(UnderlyingCPProgram_38);
    UnderlyingInstrument_38.insert(UnderlyingCPProgram_38.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_38("STRING_1907923155");
    noUnderlyings_0_1.set(UnderlyingCPRegType_38);
    UnderlyingInstrument_38.insert(UnderlyingCPRegType_38.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_38;
    UnderlyingCapValue_38.setString("15186572");
    noUnderlyings_0_1.set(UnderlyingCapValue_38);
    UnderlyingInstrument_38.insert(UnderlyingCapValue_38.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_38;
    UnderlyingCashAmount_38.setString("3892520");
    noUnderlyings_0_1.set(UnderlyingCashAmount_38);
    UnderlyingInstrument_38.insert(UnderlyingCashAmount_38.getString());
    FIX::UnderlyingCashType UnderlyingCashType_38("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_38);
    UnderlyingInstrument_38.insert(UnderlyingCashType_38.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_38;
    UnderlyingContractMultiplier_38.setString("9036699");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_38);
    UnderlyingInstrument_38.insert(UnderlyingContractMultiplier_38.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_38(995129449);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_38);
    UnderlyingInstrument_38.insert(UnderlyingContractMultiplierUnit_38.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_38("COUNTRY_1968558860");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingCountryOfIssue_38.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_38("LOCALMKTDATE_1294654057");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_38);
    UnderlyingInstrument_38.insert(UnderlyingCouponPaymentDate_38.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_38;
    UnderlyingCouponRate_38.setString("72.780000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_38);
    UnderlyingInstrument_38.insert(UnderlyingCouponRate_38.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_38("STRING_296329147");
    noUnderlyings_0_1.set(UnderlyingCreditRating_38);
    UnderlyingInstrument_38.insert(UnderlyingCreditRating_38.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_38("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_38);
    UnderlyingInstrument_38.insert(UnderlyingCurrency_38.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_38;
    UnderlyingCurrentValue_38.setString("7990779");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_38);
    UnderlyingInstrument_38.insert(UnderlyingCurrentValue_38.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_38;
    UnderlyingDetachmentPoint_38.setString("38.210000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_38);
    UnderlyingInstrument_38.insert(UnderlyingDetachmentPoint_38.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_38;
    UnderlyingDirtyPrice_38.setString("15372938");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_38);
    UnderlyingInstrument_38.insert(UnderlyingDirtyPrice_38.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_38;
    UnderlyingEndPrice_38.setString("20820349");
    noUnderlyings_0_1.set(UnderlyingEndPrice_38);
    UnderlyingInstrument_38.insert(UnderlyingEndPrice_38.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_38;
    UnderlyingEndValue_38.setString("1022753");
    noUnderlyings_0_1.set(UnderlyingEndValue_38);
    UnderlyingInstrument_38.insert(UnderlyingEndValue_38.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_38(1273581696);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_38);
    UnderlyingInstrument_38.insert(UnderlyingExerciseStyle_38.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_38;
    UnderlyingFXRate_38.setString("2604400");
    noUnderlyings_0_1.set(UnderlyingFXRate_38);
    UnderlyingInstrument_38.insert(UnderlyingFXRate_38.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_38('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_38);
    UnderlyingInstrument_38.insert(UnderlyingFXRateCalc_38.getString());
    FIX::UnderlyingFactor UnderlyingFactor_38;
    UnderlyingFactor_38.setString("15549997");
    noUnderlyings_0_1.set(UnderlyingFactor_38);
    UnderlyingInstrument_38.insert(UnderlyingFactor_38.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_38(1630663167);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_38);
    UnderlyingInstrument_38.insert(UnderlyingFlowScheduleType_38.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_38("STRING_79324769");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_38);
    UnderlyingInstrument_38.insert(UnderlyingInstrRegistry_38.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_38("LOCALMKTDATE_1572408840");
    noUnderlyings_0_1.set(UnderlyingIssueDate_38);
    UnderlyingInstrument_38.insert(UnderlyingIssueDate_38.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_38("STRING_117869351");
    noUnderlyings_0_1.set(UnderlyingIssuer_38);
    UnderlyingInstrument_38.insert(UnderlyingIssuer_38.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_38("STRING_338449537");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingLocaleOfIssue_38.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_38("LOCALMKTDATE_842537029");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityDate_38.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_38("MONTHYEAR_942510615");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityMonthYear_38.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_38("TZTIMEONLY_1480846778");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_38);
    UnderlyingInstrument_38.insert(UnderlyingMaturityTime_38.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_38;
    UnderlyingNotionalPercentageOutstanding_38.setString("3.200000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_38);
    UnderlyingInstrument_38.insert(UnderlyingNotionalPercentageOutstanding_38.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_38('5');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_38);
    UnderlyingInstrument_38.insert(UnderlyingOptAttribute_38.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_38;
    UnderlyingOriginalNotionalPercentageOutstanding_38.setString("62.850000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_38);
    UnderlyingInstrument_38.insert(UnderlyingOriginalNotionalPercentageOutstanding_38.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_38("STRING_303743939");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_38);
    UnderlyingInstrument_38.insert(UnderlyingPriceUnitOfMeasure_38.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_38;
    UnderlyingPriceUnitOfMeasureQty_38.setString("8986292");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_38);
    UnderlyingInstrument_38.insert(UnderlyingPriceUnitOfMeasureQty_38.getString());
    FIX::UnderlyingProduct UnderlyingProduct_38(1190338732);
    noUnderlyings_0_1.set(UnderlyingProduct_38);
    UnderlyingInstrument_38.insert(UnderlyingProduct_38.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_38(1207413845);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_38);
    UnderlyingInstrument_38.insert(UnderlyingPutOrCall_38.getString());
    FIX::UnderlyingPx UnderlyingPx_38;
    UnderlyingPx_38.setString("18937586");
    noUnderlyings_0_1.set(UnderlyingPx_38);
    UnderlyingInstrument_38.insert(UnderlyingPx_38.getString());
    FIX::UnderlyingQty UnderlyingQty_38;
    UnderlyingQty_38.setString("10114139");
    noUnderlyings_0_1.set(UnderlyingQty_38);
    UnderlyingInstrument_38.insert(UnderlyingQty_38.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_38("LOCALMKTDATE_354584255");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_38);
    UnderlyingInstrument_38.insert(UnderlyingRedemptionDate_38.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_38("STRING_1551952307");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_38);
    UnderlyingInstrument_38.insert(UnderlyingRepoCollateralSecurityType_38.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_38;
    UnderlyingRepurchaseRate_38.setString("30.920000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_38);
    UnderlyingInstrument_38.insert(UnderlyingRepurchaseRate_38.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_38(139774358);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_38);
    UnderlyingInstrument_38.insert(UnderlyingRepurchaseTerm_38.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_38("STRING_238615573");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_38);
    UnderlyingInstrument_38.insert(UnderlyingRestructuringType_38.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_38("STRING_2106821006");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityDesc_38.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_38("EXCHANGE_364658179");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityExchange_38.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_38("STRING_1775909378");
    noUnderlyings_0_1.set(UnderlyingSecurityID_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityID_38.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_38("STRING_2041372338");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityIDSource_38.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_38("STRING_466933495");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_38);
    UnderlyingInstrument_38.insert(UnderlyingSecuritySubType_38.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_38("STRING_902007427");
    noUnderlyings_0_1.set(UnderlyingSecurityType_38);
    UnderlyingInstrument_38.insert(UnderlyingSecurityType_38.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_38("STRING_154328705");
    noUnderlyings_0_1.set(UnderlyingSeniority_38);
    UnderlyingInstrument_38.insert(UnderlyingSeniority_38.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_38("STRING_1119845712");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_38);
    UnderlyingInstrument_38.insert(UnderlyingSettlMethod_38.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_38(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_38);
    UnderlyingInstrument_38.insert(UnderlyingSettlementType_38.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_38;
    UnderlyingStartValue_38.setString("17849918");
    noUnderlyings_0_1.set(UnderlyingStartValue_38);
    UnderlyingInstrument_38.insert(UnderlyingStartValue_38.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_38("STRING_1199170481");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_38);
    UnderlyingInstrument_38.insert(UnderlyingStateOrProvinceOfIssue_38.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_38("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_38);
    UnderlyingInstrument_38.insert(UnderlyingStrikeCurrency_38.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_38;
    UnderlyingStrikePrice_38.setString("15376200");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_38);
    UnderlyingInstrument_38.insert(UnderlyingStrikePrice_38.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_38("STRING_576985766");
    noUnderlyings_0_1.set(UnderlyingSymbol_38);
    UnderlyingInstrument_38.insert(UnderlyingSymbol_38.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_38("STRING_697888191");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_38);
    UnderlyingInstrument_38.insert(UnderlyingSymbolSfx_38.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_38("STRING_870983149");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_38);
    UnderlyingInstrument_38.insert(UnderlyingTimeUnit_38.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_38("STRING_1509556086");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_38);
    UnderlyingInstrument_38.insert(UnderlyingUnitOfMeasure_38.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_38;
    UnderlyingUnitOfMeasureQty_38.setString("12072653");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_38);
    UnderlyingInstrument_38.insert(UnderlyingUnitOfMeasureQty_38.getString());
    all_values.push_back(UnderlyingInstrument_38);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_75;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_75("STRING_1813300025");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_75);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_75.insert(UnderlyingSecurityAltID_75.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_75("STRING_2105894599");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_75);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_75.insert(UnderlyingSecurityAltIDSource_75.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_76;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_76("STRING_1155124518");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_76);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_76.insert(UnderlyingSecurityAltID_76.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_76("STRING_873230223");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_76);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_76.insert(UnderlyingSecurityAltIDSource_76.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_77;
      FIX::UnderlyingStipType UnderlyingStipType_77("STRING_19054815");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_77);
      UnderlyingStipulations_NoUnderlyingStips_77.insert(UnderlyingStipType_77.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_77("STRING_1227814478");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_77);
      UnderlyingStipulations_NoUnderlyingStips_77.insert(UnderlyingStipValue_77.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_77);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_74;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_74("STRING_1326797907");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyID_74.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_74('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyIDSource_74.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_74(1495253861);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_74);
      UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyRole_74.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_74);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_144("STRING_1732247015");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_144);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144.insert(UnderlyingInstrumentPartySubID_144.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_144(1123679591);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_144);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144.insert(UnderlyingInstrumentPartySubIDType_144.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_39;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_39("DATA_1180023955");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingIssuer_39.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_39(51696862);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingIssuerLen_39.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_39("DATA_2025687018");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingSecurityDesc_39.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_39(1334352661);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_39);
    UnderlyingInstrument_39.insert(EncodedUnderlyingSecurityDescLen_39.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_39;
    UnderlyingAdjustedQuantity_39.setString("11715425");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_39);
    UnderlyingInstrument_39.insert(UnderlyingAdjustedQuantity_39.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_39;
    UnderlyingAllocationPercent_39.setString("69.150000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_39);
    UnderlyingInstrument_39.insert(UnderlyingAllocationPercent_39.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_39;
    UnderlyingAttachmentPoint_39.setString("8.850000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_39);
    UnderlyingInstrument_39.insert(UnderlyingAttachmentPoint_39.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_39("STRING_223229408");
    noUnderlyings_0_2.set(UnderlyingCFICode_39);
    UnderlyingInstrument_39.insert(UnderlyingCFICode_39.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_39("STRING_2069659300");
    noUnderlyings_0_2.set(UnderlyingCPProgram_39);
    UnderlyingInstrument_39.insert(UnderlyingCPProgram_39.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_39("STRING_727238461");
    noUnderlyings_0_2.set(UnderlyingCPRegType_39);
    UnderlyingInstrument_39.insert(UnderlyingCPRegType_39.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_39;
    UnderlyingCapValue_39.setString("17608494");
    noUnderlyings_0_2.set(UnderlyingCapValue_39);
    UnderlyingInstrument_39.insert(UnderlyingCapValue_39.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_39;
    UnderlyingCashAmount_39.setString("4991614");
    noUnderlyings_0_2.set(UnderlyingCashAmount_39);
    UnderlyingInstrument_39.insert(UnderlyingCashAmount_39.getString());
    FIX::UnderlyingCashType UnderlyingCashType_39("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_39);
    UnderlyingInstrument_39.insert(UnderlyingCashType_39.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_39;
    UnderlyingContractMultiplier_39.setString("4843489");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_39);
    UnderlyingInstrument_39.insert(UnderlyingContractMultiplier_39.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_39(2008717505);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_39);
    UnderlyingInstrument_39.insert(UnderlyingContractMultiplierUnit_39.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_39("COUNTRY_484908376");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingCountryOfIssue_39.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_39("LOCALMKTDATE_449134714");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_39);
    UnderlyingInstrument_39.insert(UnderlyingCouponPaymentDate_39.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_39;
    UnderlyingCouponRate_39.setString("38.820000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_39);
    UnderlyingInstrument_39.insert(UnderlyingCouponRate_39.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_39("STRING_443319328");
    noUnderlyings_0_2.set(UnderlyingCreditRating_39);
    UnderlyingInstrument_39.insert(UnderlyingCreditRating_39.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_39("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_39);
    UnderlyingInstrument_39.insert(UnderlyingCurrency_39.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_39;
    UnderlyingCurrentValue_39.setString("1480053");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_39);
    UnderlyingInstrument_39.insert(UnderlyingCurrentValue_39.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_39;
    UnderlyingDetachmentPoint_39.setString("40.470000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_39);
    UnderlyingInstrument_39.insert(UnderlyingDetachmentPoint_39.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_39;
    UnderlyingDirtyPrice_39.setString("16280949");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_39);
    UnderlyingInstrument_39.insert(UnderlyingDirtyPrice_39.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_39;
    UnderlyingEndPrice_39.setString("14046435");
    noUnderlyings_0_2.set(UnderlyingEndPrice_39);
    UnderlyingInstrument_39.insert(UnderlyingEndPrice_39.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_39;
    UnderlyingEndValue_39.setString("8026283");
    noUnderlyings_0_2.set(UnderlyingEndValue_39);
    UnderlyingInstrument_39.insert(UnderlyingEndValue_39.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_39(848200123);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_39);
    UnderlyingInstrument_39.insert(UnderlyingExerciseStyle_39.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_39;
    UnderlyingFXRate_39.setString("7524138");
    noUnderlyings_0_2.set(UnderlyingFXRate_39);
    UnderlyingInstrument_39.insert(UnderlyingFXRate_39.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_39('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_39);
    UnderlyingInstrument_39.insert(UnderlyingFXRateCalc_39.getString());
    FIX::UnderlyingFactor UnderlyingFactor_39;
    UnderlyingFactor_39.setString("4329634");
    noUnderlyings_0_2.set(UnderlyingFactor_39);
    UnderlyingInstrument_39.insert(UnderlyingFactor_39.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_39(1876093400);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_39);
    UnderlyingInstrument_39.insert(UnderlyingFlowScheduleType_39.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_39("STRING_1121303879");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_39);
    UnderlyingInstrument_39.insert(UnderlyingInstrRegistry_39.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_39("LOCALMKTDATE_484660353");
    noUnderlyings_0_2.set(UnderlyingIssueDate_39);
    UnderlyingInstrument_39.insert(UnderlyingIssueDate_39.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_39("STRING_1754296771");
    noUnderlyings_0_2.set(UnderlyingIssuer_39);
    UnderlyingInstrument_39.insert(UnderlyingIssuer_39.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_39("STRING_308172892");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingLocaleOfIssue_39.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_39("LOCALMKTDATE_1656202927");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityDate_39.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_39("MONTHYEAR_1942023686");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityMonthYear_39.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_39("TZTIMEONLY_1280033777");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_39);
    UnderlyingInstrument_39.insert(UnderlyingMaturityTime_39.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_39;
    UnderlyingNotionalPercentageOutstanding_39.setString("23.350000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_39);
    UnderlyingInstrument_39.insert(UnderlyingNotionalPercentageOutstanding_39.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_39('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_39);
    UnderlyingInstrument_39.insert(UnderlyingOptAttribute_39.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_39;
    UnderlyingOriginalNotionalPercentageOutstanding_39.setString("22.390000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_39);
    UnderlyingInstrument_39.insert(UnderlyingOriginalNotionalPercentageOutstanding_39.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_39("STRING_1492798114");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_39);
    UnderlyingInstrument_39.insert(UnderlyingPriceUnitOfMeasure_39.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_39;
    UnderlyingPriceUnitOfMeasureQty_39.setString("2158771");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_39);
    UnderlyingInstrument_39.insert(UnderlyingPriceUnitOfMeasureQty_39.getString());
    FIX::UnderlyingProduct UnderlyingProduct_39(1284915244);
    noUnderlyings_0_2.set(UnderlyingProduct_39);
    UnderlyingInstrument_39.insert(UnderlyingProduct_39.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_39(1977147042);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_39);
    UnderlyingInstrument_39.insert(UnderlyingPutOrCall_39.getString());
    FIX::UnderlyingPx UnderlyingPx_39;
    UnderlyingPx_39.setString("771109");
    noUnderlyings_0_2.set(UnderlyingPx_39);
    UnderlyingInstrument_39.insert(UnderlyingPx_39.getString());
    FIX::UnderlyingQty UnderlyingQty_39;
    UnderlyingQty_39.setString("17698236");
    noUnderlyings_0_2.set(UnderlyingQty_39);
    UnderlyingInstrument_39.insert(UnderlyingQty_39.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_39("LOCALMKTDATE_278798108");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_39);
    UnderlyingInstrument_39.insert(UnderlyingRedemptionDate_39.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_39("STRING_1751644849");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_39);
    UnderlyingInstrument_39.insert(UnderlyingRepoCollateralSecurityType_39.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_39;
    UnderlyingRepurchaseRate_39.setString("93.000000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_39);
    UnderlyingInstrument_39.insert(UnderlyingRepurchaseRate_39.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_39(1883057341);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_39);
    UnderlyingInstrument_39.insert(UnderlyingRepurchaseTerm_39.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_39("STRING_4441658");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_39);
    UnderlyingInstrument_39.insert(UnderlyingRestructuringType_39.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_39("STRING_213664609");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityDesc_39.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_39("EXCHANGE_1358887740");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityExchange_39.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_39("STRING_1632536594");
    noUnderlyings_0_2.set(UnderlyingSecurityID_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityID_39.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_39("STRING_1618308205");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityIDSource_39.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_39("STRING_14032399");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_39);
    UnderlyingInstrument_39.insert(UnderlyingSecuritySubType_39.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_39("STRING_333253069");
    noUnderlyings_0_2.set(UnderlyingSecurityType_39);
    UnderlyingInstrument_39.insert(UnderlyingSecurityType_39.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_39("STRING_223238366");
    noUnderlyings_0_2.set(UnderlyingSeniority_39);
    UnderlyingInstrument_39.insert(UnderlyingSeniority_39.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_39("STRING_2102795970");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_39);
    UnderlyingInstrument_39.insert(UnderlyingSettlMethod_39.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_39(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_39);
    UnderlyingInstrument_39.insert(UnderlyingSettlementType_39.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_39;
    UnderlyingStartValue_39.setString("20993317");
    noUnderlyings_0_2.set(UnderlyingStartValue_39);
    UnderlyingInstrument_39.insert(UnderlyingStartValue_39.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_39("STRING_1076616201");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_39);
    UnderlyingInstrument_39.insert(UnderlyingStateOrProvinceOfIssue_39.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_39("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_39);
    UnderlyingInstrument_39.insert(UnderlyingStrikeCurrency_39.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_39;
    UnderlyingStrikePrice_39.setString("13847890");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_39);
    UnderlyingInstrument_39.insert(UnderlyingStrikePrice_39.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_39("STRING_759596192");
    noUnderlyings_0_2.set(UnderlyingSymbol_39);
    UnderlyingInstrument_39.insert(UnderlyingSymbol_39.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_39("STRING_1500684928");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_39);
    UnderlyingInstrument_39.insert(UnderlyingSymbolSfx_39.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_39("STRING_517339223");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_39);
    UnderlyingInstrument_39.insert(UnderlyingTimeUnit_39.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_39("STRING_491544880");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_39);
    UnderlyingInstrument_39.insert(UnderlyingUnitOfMeasure_39.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_39;
    UnderlyingUnitOfMeasureQty_39.setString("12174006");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_39);
    UnderlyingInstrument_39.insert(UnderlyingUnitOfMeasureQty_39.getString());
    all_values.push_back(UnderlyingInstrument_39);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_77;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_77("STRING_1984342994");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_77);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_77.insert(UnderlyingSecurityAltID_77.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_77("STRING_1433277728");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_77);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_77.insert(UnderlyingSecurityAltIDSource_77.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_78;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_78("STRING_1662043058");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_78);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_78.insert(UnderlyingSecurityAltID_78.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_78("STRING_1814006389");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_78);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_78.insert(UnderlyingSecurityAltIDSource_78.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_78;
      FIX::UnderlyingStipType UnderlyingStipType_78("STRING_1284383030");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_78);
      UnderlyingStipulations_NoUnderlyingStips_78.insert(UnderlyingStipType_78.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_78("STRING_2092804497");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_78);
      UnderlyingStipulations_NoUnderlyingStips_78.insert(UnderlyingStipValue_78.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_78);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_79;
      FIX::UnderlyingStipType UnderlyingStipType_79("STRING_1114549896");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_79);
      UnderlyingStipulations_NoUnderlyingStips_79.insert(UnderlyingStipType_79.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_79("STRING_1350042331");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_79);
      UnderlyingStipulations_NoUnderlyingStips_79.insert(UnderlyingStipValue_79.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_79);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_75;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_75("STRING_1118991554");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyID_75.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_75('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyIDSource_75.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_75(1039782283);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_75);
      UndlyInstrumentParties_NoUndlyInstrumentParties_75.insert(UnderlyingInstrumentPartyRole_75.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_75);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_145("STRING_1034531497");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_145);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145.insert(UnderlyingInstrumentPartySubID_145.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_145(1053814682);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_145);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145.insert(UnderlyingInstrumentPartySubIDType_145.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_146("STRING_937297570");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_146);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146.insert(UnderlyingInstrumentPartySubID_146.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_146(1257769863);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_146);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146.insert(UnderlyingInstrumentPartySubIDType_146.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_147("STRING_1009127004");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_147);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147.insert(UnderlyingInstrumentPartySubID_147.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_147(1703514130);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_147);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147.insert(UnderlyingInstrumentPartySubIDType_147.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_76;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_76("STRING_1209617981");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyID_76.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_76('2');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyIDSource_76.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_76(806907395);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_76);
      UndlyInstrumentParties_NoUndlyInstrumentParties_76.insert(UnderlyingInstrumentPartyRole_76.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_76);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_148("STRING_1323048651");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_148);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148.insert(UnderlyingInstrumentPartySubID_148.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_148(1566503587);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_148);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148.insert(UnderlyingInstrumentPartySubIDType_148.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_149("STRING_121480503");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_149);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149.insert(UnderlyingInstrumentPartySubID_149.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_149(1840387874);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_149);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149.insert(UnderlyingInstrumentPartySubIDType_149.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_77;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_77("STRING_2058048467");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyID_77.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_77('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyIDSource_77.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_77(70032040);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyRole_77.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_77);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_150("STRING_624675202");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_150);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150.insert(UnderlyingInstrumentPartySubID_150.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_150(1732075098);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_150);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150.insert(UnderlyingInstrumentPartySubIDType_150.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_6;
  FIX::Yield Yield_6;
  Yield_6.setString("5.550000");
  msg.set(Yield_6);
  YieldData_6.insert(Yield_6.getString());
  FIX::YieldCalcDate YieldCalcDate_6("LOCALMKTDATE_2135063897");
  msg.set(YieldCalcDate_6);
  YieldData_6.insert(YieldCalcDate_6.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_6("LOCALMKTDATE_868974481");
  msg.set(YieldRedemptionDate_6);
  YieldData_6.insert(YieldRedemptionDate_6.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_6;
  YieldRedemptionPrice_6.setString("15067514");
  msg.set(YieldRedemptionPrice_6);
  YieldData_6.insert(YieldRedemptionPrice_6.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_6(1102130145);
  msg.set(YieldRedemptionPriceType_6);
  YieldData_6.insert(YieldRedemptionPriceType_6.getString());
  FIX::YieldType YieldType_6("STRING_MATURITY");
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
