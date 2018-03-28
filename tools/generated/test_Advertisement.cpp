#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/Advertisement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Advertisement, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Advertisement msg;

  list<multiset<string>> all_values;
  multiset<string> Advertisement_0;
  FIX::AdvId AdvId_0("STRING_1076995530");
  msg.set(AdvId_0);
  Advertisement_0.insert(AdvId_0.getString());
  FIX::AdvRefID AdvRefID_0("STRING_1376600483");
  msg.set(AdvRefID_0);
  Advertisement_0.insert(AdvRefID_0.getString());
  FIX::AdvSide AdvSide_0('B');
  msg.set(AdvSide_0);
  Advertisement_0.insert(AdvSide_0.getString());
  FIX::AdvTransType AdvTransType_0("STRING_C");
  msg.set(AdvTransType_0);
  Advertisement_0.insert(AdvTransType_0.getString());
  FIX::Currency Currency_0("CHF");
  msg.set(Currency_0);
  Advertisement_0.insert(Currency_0.getString());
  FIX::EncodedText EncodedText_0("DATA_981412269");
  msg.set(EncodedText_0);
  Advertisement_0.insert(EncodedText_0.getString());
  FIX::EncodedTextLen EncodedTextLen_0(1992141143);
  msg.set(EncodedTextLen_0);
  Advertisement_0.insert(EncodedTextLen_0.getString());
  FIX::LastMkt LastMkt_0("EXCHANGE_837870909");
  msg.set(LastMkt_0);
  Advertisement_0.insert(LastMkt_0.getString());
  FIX::Price Price_0;
  Price_0.setString("11265123");
  msg.set(Price_0);
  Advertisement_0.insert(Price_0.getString());
  FIX::QtyType QtyType_0(1);
  msg.set(QtyType_0);
  Advertisement_0.insert(QtyType_0.getString());
  FIX::Quantity Quantity_0;
  Quantity_0.setString("632832");
  msg.set(Quantity_0);
  Advertisement_0.insert(Quantity_0.getString());
  FIX::Text Text_0("STRING_487239235");
  msg.set(Text_0);
  Advertisement_0.insert(Text_0.getString());
  FIX::TradeDate TradeDate_0("LOCALMKTDATE_1618853535");
  msg.set(TradeDate_0);
  Advertisement_0.insert(TradeDate_0.getString());
  FIX::TradingSessionID TradingSessionID_0("STRING_3");
  msg.set(TradingSessionID_0);
  Advertisement_0.insert(TradingSessionID_0.getString());
  FIX::TradingSessionSubID TradingSessionSubID_0("STRING_6");
  msg.set(TradingSessionSubID_0);
  Advertisement_0.insert(TradingSessionSubID_0.getString());
  FIX::TransactTime TransactTime_0(FIX::UTCTIMESTAMP(22, 27, 1, 0, 9, 2009));
  msg.set(TransactTime_0);
  Advertisement_0.insert(TransactTime_0.getString());
  FIX::URLLink URLLink_0("STRING_1120586073");
  msg.set(URLLink_0);
  Advertisement_0.insert(URLLink_0.getString());
  all_values.push_back(Advertisement_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_0;
    FIX::EncodedLegIssuer EncodedLegIssuer_0("DATA_231833186");
    noLegs_0_0.set(EncodedLegIssuer_0);
    InstrumentLeg_0.insert(EncodedLegIssuer_0.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_0(1399879366);
    noLegs_0_0.set(EncodedLegIssuerLen_0);
    InstrumentLeg_0.insert(EncodedLegIssuerLen_0.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_0("DATA_1279756960");
    noLegs_0_0.set(EncodedLegSecurityDesc_0);
    InstrumentLeg_0.insert(EncodedLegSecurityDesc_0.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_0(1914631885);
    noLegs_0_0.set(EncodedLegSecurityDescLen_0);
    InstrumentLeg_0.insert(EncodedLegSecurityDescLen_0.getString());
    FIX::LegCFICode LegCFICode_0("STRING_2146763314");
    noLegs_0_0.set(LegCFICode_0);
    InstrumentLeg_0.insert(LegCFICode_0.getString());
    FIX::LegContractMultiplier LegContractMultiplier_0;
    LegContractMultiplier_0.setString("18343448");
    noLegs_0_0.set(LegContractMultiplier_0);
    InstrumentLeg_0.insert(LegContractMultiplier_0.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_0(844143767);
    noLegs_0_0.set(LegContractMultiplierUnit_0);
    InstrumentLeg_0.insert(LegContractMultiplierUnit_0.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_0("MONTHYEAR_1375880149");
    noLegs_0_0.set(LegContractSettlMonth_0);
    InstrumentLeg_0.insert(LegContractSettlMonth_0.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_0("COUNTRY_1623394877");
    noLegs_0_0.set(LegCountryOfIssue_0);
    InstrumentLeg_0.insert(LegCountryOfIssue_0.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_0("LOCALMKTDATE_1677805356");
    noLegs_0_0.set(LegCouponPaymentDate_0);
    InstrumentLeg_0.insert(LegCouponPaymentDate_0.getString());
    FIX::LegCouponRate LegCouponRate_0;
    LegCouponRate_0.setString("20.770000");
    noLegs_0_0.set(LegCouponRate_0);
    InstrumentLeg_0.insert(LegCouponRate_0.getString());
    FIX::LegCreditRating LegCreditRating_0("STRING_854486250");
    noLegs_0_0.set(LegCreditRating_0);
    InstrumentLeg_0.insert(LegCreditRating_0.getString());
    FIX::LegCurrency LegCurrency_0("JPY");
    noLegs_0_0.set(LegCurrency_0);
    InstrumentLeg_0.insert(LegCurrency_0.getString());
    FIX::LegDatedDate LegDatedDate_0("LOCALMKTDATE_1692357159");
    noLegs_0_0.set(LegDatedDate_0);
    InstrumentLeg_0.insert(LegDatedDate_0.getString());
    FIX::LegExerciseStyle LegExerciseStyle_0(1638246370);
    noLegs_0_0.set(LegExerciseStyle_0);
    InstrumentLeg_0.insert(LegExerciseStyle_0.getString());
    FIX::LegFactor LegFactor_0;
    LegFactor_0.setString("16623729");
    noLegs_0_0.set(LegFactor_0);
    InstrumentLeg_0.insert(LegFactor_0.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_0(1755640423);
    noLegs_0_0.set(LegFlowScheduleType_0);
    InstrumentLeg_0.insert(LegFlowScheduleType_0.getString());
    FIX::LegInstrRegistry LegInstrRegistry_0("STRING_2125485606");
    noLegs_0_0.set(LegInstrRegistry_0);
    InstrumentLeg_0.insert(LegInstrRegistry_0.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_0("LOCALMKTDATE_1133742819");
    noLegs_0_0.set(LegInterestAccrualDate_0);
    InstrumentLeg_0.insert(LegInterestAccrualDate_0.getString());
    FIX::LegIssueDate LegIssueDate_0("LOCALMKTDATE_1990763361");
    noLegs_0_0.set(LegIssueDate_0);
    InstrumentLeg_0.insert(LegIssueDate_0.getString());
    FIX::LegIssuer LegIssuer_0("STRING_1447597405");
    noLegs_0_0.set(LegIssuer_0);
    InstrumentLeg_0.insert(LegIssuer_0.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_0("STRING_64598625");
    noLegs_0_0.set(LegLocaleOfIssue_0);
    InstrumentLeg_0.insert(LegLocaleOfIssue_0.getString());
    FIX::LegMaturityDate LegMaturityDate_0("LOCALMKTDATE_1817170056");
    noLegs_0_0.set(LegMaturityDate_0);
    InstrumentLeg_0.insert(LegMaturityDate_0.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_0("MONTHYEAR_1670245552");
    noLegs_0_0.set(LegMaturityMonthYear_0);
    InstrumentLeg_0.insert(LegMaturityMonthYear_0.getString());
    FIX::LegMaturityTime LegMaturityTime_0("TZTIMEONLY_379520566");
    noLegs_0_0.set(LegMaturityTime_0);
    InstrumentLeg_0.insert(LegMaturityTime_0.getString());
    FIX::LegOptAttribute LegOptAttribute_0('1');
    noLegs_0_0.set(LegOptAttribute_0);
    InstrumentLeg_0.insert(LegOptAttribute_0.getString());
    FIX::LegOptionRatio LegOptionRatio_0;
    LegOptionRatio_0.setString("13540196");
    noLegs_0_0.set(LegOptionRatio_0);
    InstrumentLeg_0.insert(LegOptionRatio_0.getString());
    FIX::LegPool LegPool_0("STRING_1441462237");
    noLegs_0_0.set(LegPool_0);
    InstrumentLeg_0.insert(LegPool_0.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_0("STRING_503661106");
    noLegs_0_0.set(LegPriceUnitOfMeasure_0);
    InstrumentLeg_0.insert(LegPriceUnitOfMeasure_0.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_0;
    LegPriceUnitOfMeasureQty_0.setString("4973826");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_0);
    InstrumentLeg_0.insert(LegPriceUnitOfMeasureQty_0.getString());
    FIX::LegProduct LegProduct_0(1673295424);
    noLegs_0_0.set(LegProduct_0);
    InstrumentLeg_0.insert(LegProduct_0.getString());
    FIX::LegPutOrCall LegPutOrCall_0(1903540472);
    noLegs_0_0.set(LegPutOrCall_0);
    InstrumentLeg_0.insert(LegPutOrCall_0.getString());
    FIX::LegRatioQty LegRatioQty_0;
    LegRatioQty_0.setString("17771396");
    noLegs_0_0.set(LegRatioQty_0);
    InstrumentLeg_0.insert(LegRatioQty_0.getString());
    FIX::LegRedemptionDate LegRedemptionDate_0("LOCALMKTDATE_1440443661");
    noLegs_0_0.set(LegRedemptionDate_0);
    InstrumentLeg_0.insert(LegRedemptionDate_0.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_0("STRING_1902820138");
    noLegs_0_0.set(LegRepoCollateralSecurityType_0);
    InstrumentLeg_0.insert(LegRepoCollateralSecurityType_0.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_0;
    LegRepurchaseRate_0.setString("8.480000");
    noLegs_0_0.set(LegRepurchaseRate_0);
    InstrumentLeg_0.insert(LegRepurchaseRate_0.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_0(137103781);
    noLegs_0_0.set(LegRepurchaseTerm_0);
    InstrumentLeg_0.insert(LegRepurchaseTerm_0.getString());
    FIX::LegSecurityDesc LegSecurityDesc_0("STRING_1131216639");
    noLegs_0_0.set(LegSecurityDesc_0);
    InstrumentLeg_0.insert(LegSecurityDesc_0.getString());
    FIX::LegSecurityExchange LegSecurityExchange_0("EXCHANGE_939912078");
    noLegs_0_0.set(LegSecurityExchange_0);
    InstrumentLeg_0.insert(LegSecurityExchange_0.getString());
    FIX::LegSecurityID LegSecurityID_0("STRING_1814909137");
    noLegs_0_0.set(LegSecurityID_0);
    InstrumentLeg_0.insert(LegSecurityID_0.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_0("STRING_1660058716");
    noLegs_0_0.set(LegSecurityIDSource_0);
    InstrumentLeg_0.insert(LegSecurityIDSource_0.getString());
    FIX::LegSecuritySubType LegSecuritySubType_0("STRING_1794398328");
    noLegs_0_0.set(LegSecuritySubType_0);
    InstrumentLeg_0.insert(LegSecuritySubType_0.getString());
    FIX::LegSecurityType LegSecurityType_0("STRING_179159467");
    noLegs_0_0.set(LegSecurityType_0);
    InstrumentLeg_0.insert(LegSecurityType_0.getString());
    FIX::LegSide LegSide_0('2');
    noLegs_0_0.set(LegSide_0);
    InstrumentLeg_0.insert(LegSide_0.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_0("STRING_1339271840");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_0);
    InstrumentLeg_0.insert(LegStateOrProvinceOfIssue_0.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_0("GBP");
    noLegs_0_0.set(LegStrikeCurrency_0);
    InstrumentLeg_0.insert(LegStrikeCurrency_0.getString());
    FIX::LegStrikePrice LegStrikePrice_0;
    LegStrikePrice_0.setString("9474286");
    noLegs_0_0.set(LegStrikePrice_0);
    InstrumentLeg_0.insert(LegStrikePrice_0.getString());
    FIX::LegSymbol LegSymbol_0("STRING_1795407795");
    noLegs_0_0.set(LegSymbol_0);
    InstrumentLeg_0.insert(LegSymbol_0.getString());
    FIX::LegSymbolSfx LegSymbolSfx_0("STRING_534706744");
    noLegs_0_0.set(LegSymbolSfx_0);
    InstrumentLeg_0.insert(LegSymbolSfx_0.getString());
    FIX::LegTimeUnit LegTimeUnit_0("STRING_790708328");
    noLegs_0_0.set(LegTimeUnit_0);
    InstrumentLeg_0.insert(LegTimeUnit_0.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_0("STRING_1095521553");
    noLegs_0_0.set(LegUnitOfMeasure_0);
    InstrumentLeg_0.insert(LegUnitOfMeasure_0.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_0;
    LegUnitOfMeasureQty_0.setString("5993053");
    noLegs_0_0.set(LegUnitOfMeasureQty_0);
    InstrumentLeg_0.insert(LegUnitOfMeasureQty_0.getString());
    all_values.push_back(InstrumentLeg_0);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_0;
      FIX::LegSecurityAltID LegSecurityAltID_0("STRING_618283457");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_0);
      LegSecAltIDGrp_NoLegSecurityAltID_0.insert(LegSecurityAltID_0.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_0("STRING_978825936");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_0);
      LegSecAltIDGrp_NoLegSecurityAltID_0.insert(LegSecurityAltIDSource_0.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_0);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_3;
  FIX::AttachmentPoint AttachmentPoint_3;
  AttachmentPoint_3.setString("34.170000");
  msg.set(AttachmentPoint_3);
  Instrument_3.insert(AttachmentPoint_3.getString());
  FIX::CFICode CFICode_3("STRING_1972303066");
  msg.set(CFICode_3);
  Instrument_3.insert(CFICode_3.getString());
  FIX::CPProgram CPProgram_3(99);
  msg.set(CPProgram_3);
  Instrument_3.insert(CPProgram_3.getString());
  FIX::CPRegType CPRegType_3("STRING_347130875");
  msg.set(CPRegType_3);
  Instrument_3.insert(CPRegType_3.getString());
  FIX::CapPrice CapPrice_3;
  CapPrice_3.setString("3222020");
  msg.set(CapPrice_3);
  Instrument_3.insert(CapPrice_3.getString());
  FIX::ContractMultiplier ContractMultiplier_3;
  ContractMultiplier_3.setString("19460999");
  msg.set(ContractMultiplier_3);
  Instrument_3.insert(ContractMultiplier_3.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_3(2);
  msg.set(ContractMultiplierUnit_3);
  Instrument_3.insert(ContractMultiplierUnit_3.getString());
  FIX::ContractSettlMonth ContractSettlMonth_3("MONTHYEAR_2099341673");
  msg.set(ContractSettlMonth_3);
  Instrument_3.insert(ContractSettlMonth_3.getString());
  FIX::CountryOfIssue CountryOfIssue_3("COUNTRY_1239059963");
  msg.set(CountryOfIssue_3);
  Instrument_3.insert(CountryOfIssue_3.getString());
  FIX::CouponPaymentDate CouponPaymentDate_3("LOCALMKTDATE_2006007838");
  msg.set(CouponPaymentDate_3);
  Instrument_3.insert(CouponPaymentDate_3.getString());
  FIX::CouponRate CouponRate_3;
  CouponRate_3.setString("88.730000");
  msg.set(CouponRate_3);
  Instrument_3.insert(CouponRate_3.getString());
  FIX::CreditRating CreditRating_3("STRING_1376163744");
  msg.set(CreditRating_3);
  Instrument_3.insert(CreditRating_3.getString());
  FIX::DatedDate DatedDate_3("LOCALMKTDATE_989740829");
  msg.set(DatedDate_3);
  Instrument_3.insert(DatedDate_3.getString());
  FIX::DetachmentPoint DetachmentPoint_3;
  DetachmentPoint_3.setString("73.030000");
  msg.set(DetachmentPoint_3);
  Instrument_3.insert(DetachmentPoint_3.getString());
  FIX::EncodedIssuer EncodedIssuer_3("DATA_1043589233");
  msg.set(EncodedIssuer_3);
  Instrument_3.insert(EncodedIssuer_3.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_3(502315898);
  msg.set(EncodedIssuerLen_3);
  Instrument_3.insert(EncodedIssuerLen_3.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_3("DATA_2002685632");
  msg.set(EncodedSecurityDesc_3);
  Instrument_3.insert(EncodedSecurityDesc_3.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_3(1222748700);
  msg.set(EncodedSecurityDescLen_3);
  Instrument_3.insert(EncodedSecurityDescLen_3.getString());
  FIX::ExerciseStyle ExerciseStyle_3(2);
  msg.set(ExerciseStyle_3);
  Instrument_3.insert(ExerciseStyle_3.getString());
  FIX::Factor Factor_3;
  Factor_3.setString("11944738");
  msg.set(Factor_3);
  Instrument_3.insert(Factor_3.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_3(true);
  msg.set(FlexProductEligibilityIndicator_3);
  Instrument_3.insert(FlexProductEligibilityIndicator_3.getString());
  FIX::FlexibleIndicator FlexibleIndicator_3(false);
  msg.set(FlexibleIndicator_3);
  Instrument_3.insert(FlexibleIndicator_3.getString());
  FIX::FloorPrice FloorPrice_3;
  FloorPrice_3.setString("21419024");
  msg.set(FloorPrice_3);
  Instrument_3.insert(FloorPrice_3.getString());
  FIX::FlowScheduleType FlowScheduleType_3(2);
  msg.set(FlowScheduleType_3);
  Instrument_3.insert(FlowScheduleType_3.getString());
  FIX::InstrRegistry InstrRegistry_3("STRING_324061207");
  msg.set(InstrRegistry_3);
  Instrument_3.insert(InstrRegistry_3.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_3('7');
  msg.set(InstrmtAssignmentMethod_3);
  Instrument_3.insert(InstrmtAssignmentMethod_3.getString());
  FIX::InterestAccrualDate InterestAccrualDate_3("LOCALMKTDATE_1636116590");
  msg.set(InterestAccrualDate_3);
  Instrument_3.insert(InterestAccrualDate_3.getString());
  FIX::IssueDate IssueDate_3("LOCALMKTDATE_923366576");
  msg.set(IssueDate_3);
  Instrument_3.insert(IssueDate_3.getString());
  FIX::Issuer Issuer_3("STRING_1245521856");
  msg.set(Issuer_3);
  Instrument_3.insert(Issuer_3.getString());
  FIX::ListMethod ListMethod_3(0);
  msg.set(ListMethod_3);
  Instrument_3.insert(ListMethod_3.getString());
  FIX::LocaleOfIssue LocaleOfIssue_3("STRING_1902192512");
  msg.set(LocaleOfIssue_3);
  Instrument_3.insert(LocaleOfIssue_3.getString());
  FIX::MaturityDate MaturityDate_3("LOCALMKTDATE_1088991625");
  msg.set(MaturityDate_3);
  Instrument_3.insert(MaturityDate_3.getString());
  FIX::MaturityMonthYear MaturityMonthYear_3("MONTHYEAR_2079219466");
  msg.set(MaturityMonthYear_3);
  Instrument_3.insert(MaturityMonthYear_3.getString());
  FIX::MaturityTime MaturityTime_3("TZTIMEONLY_27513390");
  msg.set(MaturityTime_3);
  Instrument_3.insert(MaturityTime_3.getString());
  FIX::MinPriceIncrement MinPriceIncrement_3;
  MinPriceIncrement_3.setString("14361225");
  msg.set(MinPriceIncrement_3);
  Instrument_3.insert(MinPriceIncrement_3.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_3;
  MinPriceIncrementAmount_3.setString("2539378");
  msg.set(MinPriceIncrementAmount_3);
  Instrument_3.insert(MinPriceIncrementAmount_3.getString());
  FIX::NTPositionLimit NTPositionLimit_3(1973613339);
  msg.set(NTPositionLimit_3);
  Instrument_3.insert(NTPositionLimit_3.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_3;
  NotionalPercentageOutstanding_3.setString("1.990000");
  msg.set(NotionalPercentageOutstanding_3);
  Instrument_3.insert(NotionalPercentageOutstanding_3.getString());
  FIX::OptAttribute OptAttribute_3('2');
  msg.set(OptAttribute_3);
  Instrument_3.insert(OptAttribute_3.getString());
  FIX::OptPayoutAmount OptPayoutAmount_3;
  OptPayoutAmount_3.setString("10651896");
  msg.set(OptPayoutAmount_3);
  Instrument_3.insert(OptPayoutAmount_3.getString());
  FIX::OptPayoutType OptPayoutType_3(2);
  msg.set(OptPayoutType_3);
  Instrument_3.insert(OptPayoutType_3.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_3;
  OriginalNotionalPercentageOutstanding_3.setString("47.820000");
  msg.set(OriginalNotionalPercentageOutstanding_3);
  Instrument_3.insert(OriginalNotionalPercentageOutstanding_3.getString());
  FIX::Pool Pool_3("STRING_293869750");
  msg.set(Pool_3);
  Instrument_3.insert(Pool_3.getString());
  FIX::PositionLimit PositionLimit_3(240091571);
  msg.set(PositionLimit_3);
  Instrument_3.insert(PositionLimit_3.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_3("STRING_INX");
  msg.set(PriceQuoteMethod_3);
  Instrument_3.insert(PriceQuoteMethod_3.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_3("STRING_1337458984");
  msg.set(PriceUnitOfMeasure_3);
  Instrument_3.insert(PriceUnitOfMeasure_3.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_3;
  PriceUnitOfMeasureQty_3.setString("7424074");
  msg.set(PriceUnitOfMeasureQty_3);
  Instrument_3.insert(PriceUnitOfMeasureQty_3.getString());
  FIX::Product Product_3(12);
  msg.set(Product_3);
  Instrument_3.insert(Product_3.getString());
  FIX::ProductComplex ProductComplex_3("STRING_412724036");
  msg.set(ProductComplex_3);
  Instrument_3.insert(ProductComplex_3.getString());
  FIX::PutOrCall PutOrCall_3(1);
  msg.set(PutOrCall_3);
  Instrument_3.insert(PutOrCall_3.getString());
  FIX::RedemptionDate RedemptionDate_3("LOCALMKTDATE_732134245");
  msg.set(RedemptionDate_3);
  Instrument_3.insert(RedemptionDate_3.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_3("STRING_1305394926");
  msg.set(RepoCollateralSecurityType_3);
  Instrument_3.insert(RepoCollateralSecurityType_3.getString());
  FIX::RepurchaseRate RepurchaseRate_3;
  RepurchaseRate_3.setString("24.700000");
  msg.set(RepurchaseRate_3);
  Instrument_3.insert(RepurchaseRate_3.getString());
  FIX::RepurchaseTerm RepurchaseTerm_3(726553036);
  msg.set(RepurchaseTerm_3);
  Instrument_3.insert(RepurchaseTerm_3.getString());
  FIX::RestructuringType RestructuringType_3("STRING_FR");
  msg.set(RestructuringType_3);
  Instrument_3.insert(RestructuringType_3.getString());
  FIX::SecurityDesc SecurityDesc_3("STRING_1244213677");
  msg.set(SecurityDesc_3);
  Instrument_3.insert(SecurityDesc_3.getString());
  FIX::SecurityExchange SecurityExchange_3("EXCHANGE_1511680156");
  msg.set(SecurityExchange_3);
  Instrument_3.insert(SecurityExchange_3.getString());
  FIX::SecurityGroup SecurityGroup_3("STRING_1334622906");
  msg.set(SecurityGroup_3);
  Instrument_3.insert(SecurityGroup_3.getString());
  FIX::SecurityID SecurityID_3("STRING_20096606");
  msg.set(SecurityID_3);
  Instrument_3.insert(SecurityID_3.getString());
  FIX::SecurityIDSource SecurityIDSource_3("STRING_3");
  msg.set(SecurityIDSource_3);
  Instrument_3.insert(SecurityIDSource_3.getString());
  FIX::SecurityStatus SecurityStatus_3("STRING_1");
  msg.set(SecurityStatus_3);
  Instrument_3.insert(SecurityStatus_3.getString());
  FIX::SecuritySubType SecuritySubType_3("STRING_1922289118");
  msg.set(SecuritySubType_3);
  Instrument_3.insert(SecuritySubType_3.getString());
  FIX::SecurityType SecurityType_3("STRING_TPRN");
  msg.set(SecurityType_3);
  Instrument_3.insert(SecurityType_3.getString());
  FIX::Seniority Seniority_3("STRING_SB");
  msg.set(Seniority_3);
  Instrument_3.insert(Seniority_3.getString());
  FIX::SettlMethod SettlMethod_3('C');
  msg.set(SettlMethod_3);
  Instrument_3.insert(SettlMethod_3.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_3("STRING_987348841");
  msg.set(SettleOnOpenFlag_3);
  Instrument_3.insert(SettleOnOpenFlag_3.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_3("STRING_1627213008");
  msg.set(StateOrProvinceOfIssue_3);
  Instrument_3.insert(StateOrProvinceOfIssue_3.getString());
  FIX::StrikeCurrency StrikeCurrency_3("JPY");
  msg.set(StrikeCurrency_3);
  Instrument_3.insert(StrikeCurrency_3.getString());
  FIX::StrikeMultiplier StrikeMultiplier_3;
  StrikeMultiplier_3.setString("18330089");
  msg.set(StrikeMultiplier_3);
  Instrument_3.insert(StrikeMultiplier_3.getString());
  FIX::StrikePrice StrikePrice_3;
  StrikePrice_3.setString("6936382");
  msg.set(StrikePrice_3);
  Instrument_3.insert(StrikePrice_3.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_3(3);
  msg.set(StrikePriceBoundaryMethod_3);
  Instrument_3.insert(StrikePriceBoundaryMethod_3.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_3;
  StrikePriceBoundaryPrecision_3.setString("0.500000");
  msg.set(StrikePriceBoundaryPrecision_3);
  Instrument_3.insert(StrikePriceBoundaryPrecision_3.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_3(2);
  msg.set(StrikePriceDeterminationMethod_3);
  Instrument_3.insert(StrikePriceDeterminationMethod_3.getString());
  FIX::StrikeValue StrikeValue_3;
  StrikeValue_3.setString("20171013");
  msg.set(StrikeValue_3);
  Instrument_3.insert(StrikeValue_3.getString());
  FIX::Symbol Symbol_3("STRING_989638488");
  msg.set(Symbol_3);
  Instrument_3.insert(Symbol_3.getString());
  FIX::SymbolSfx SymbolSfx_3("STRING_WI");
  msg.set(SymbolSfx_3);
  Instrument_3.insert(SymbolSfx_3.getString());
  FIX::TimeUnit TimeUnit_3("STRING_Mo");
  msg.set(TimeUnit_3);
  Instrument_3.insert(TimeUnit_3.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_3(2);
  msg.set(UnderlyingPriceDeterminationMethod_3);
  Instrument_3.insert(UnderlyingPriceDeterminationMethod_3.getString());
  FIX::UnitOfMeasure UnitOfMeasure_3("STRING_tn");
  msg.set(UnitOfMeasure_3);
  Instrument_3.insert(UnitOfMeasure_3.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_3;
  UnitOfMeasureQty_3.setString("17428231");
  msg.set(UnitOfMeasureQty_3);
  Instrument_3.insert(UnitOfMeasureQty_3.getString());
  FIX::ValuationMethod ValuationMethod_3("STRING_EQTY");
  msg.set(ValuationMethod_3);
  Instrument_3.insert(ValuationMethod_3.getString());
  all_values.push_back(Instrument_3);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_5;
    FIX::ComplexEventCondition ComplexEventCondition_5(1);
    noComplexEvents_0_0.set(ComplexEventCondition_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventCondition_5.getString());
    FIX::ComplexEventPrice ComplexEventPrice_5;
    ComplexEventPrice_5.setString("19859861");
    noComplexEvents_0_0.set(ComplexEventPrice_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPrice_5.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_5(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceBoundaryMethod_5.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_5;
    ComplexEventPriceBoundaryPrecision_5.setString("56.810000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceBoundaryPrecision_5.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_5(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceTimeType_5.getString());
    FIX::ComplexEventType ComplexEventType_5(5);
    noComplexEvents_0_0.set(ComplexEventType_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexEventType_5.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_5;
    ComplexOptPayoutAmount_5.setString("17798022");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_5);
    ComplexEvents_NoComplexEvents_5.insert(ComplexOptPayoutAmount_5.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_5);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_6;
      FIX::ComplexEventEndDate ComplexEventEndDate_6(FIX::UTCTIMESTAMP(6, 44, 53, 26, 2, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_6);
      ComplexEventDates_NoComplexEventDates_6.insert(ComplexEventEndDate_6.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_6(FIX::UTCTIMESTAMP(6, 2, 17, 20, 1, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_6);
      ComplexEventDates_NoComplexEventDates_6.insert(ComplexEventStartDate_6.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_6);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_10;
        FIX::ComplexEventEndTime ComplexEventEndTime_10(FIX::UTCTIMEONLY(11, 23, 2));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_10);
        ComplexEventTimes_NoComplexEventTimes_10.insert(ComplexEventEndTime_10.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_10(FIX::UTCTIMEONLY(16, 29, 36));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_10);
        ComplexEventTimes_NoComplexEventTimes_10.insert(ComplexEventStartTime_10.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_10);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_11;
        FIX::ComplexEventEndTime ComplexEventEndTime_11(FIX::UTCTIMEONLY(12, 40, 34));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_11);
        ComplexEventTimes_NoComplexEventTimes_11.insert(ComplexEventEndTime_11.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_11(FIX::UTCTIMEONLY(15, 53, 47));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_11);
        ComplexEventTimes_NoComplexEventTimes_11.insert(ComplexEventStartTime_11.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_11);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_7;
      FIX::ComplexEventEndDate ComplexEventEndDate_7(FIX::UTCTIMESTAMP(11, 24, 45, 2, 2, 2013));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_7);
      ComplexEventDates_NoComplexEventDates_7.insert(ComplexEventEndDate_7.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_7(FIX::UTCTIMESTAMP(7, 13, 21, 15, 2, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_7);
      ComplexEventDates_NoComplexEventDates_7.insert(ComplexEventStartDate_7.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_7);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_12;
        FIX::ComplexEventEndTime ComplexEventEndTime_12(FIX::UTCTIMEONLY(18, 39, 12));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_12);
        ComplexEventTimes_NoComplexEventTimes_12.insert(ComplexEventEndTime_12.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_12(FIX::UTCTIMEONLY(20, 33, 35));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_12);
        ComplexEventTimes_NoComplexEventTimes_12.insert(ComplexEventStartTime_12.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_12);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_13;
        FIX::ComplexEventEndTime ComplexEventEndTime_13(FIX::UTCTIMEONLY(9, 16, 2));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_13);
        ComplexEventTimes_NoComplexEventTimes_13.insert(ComplexEventEndTime_13.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_13(FIX::UTCTIMEONLY(11, 56, 37));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_13);
        ComplexEventTimes_NoComplexEventTimes_13.insert(ComplexEventStartTime_13.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_13);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_6;
    FIX::ComplexEventCondition ComplexEventCondition_6(2);
    noComplexEvents_0_1.set(ComplexEventCondition_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventCondition_6.getString());
    FIX::ComplexEventPrice ComplexEventPrice_6;
    ComplexEventPrice_6.setString("7374773");
    noComplexEvents_0_1.set(ComplexEventPrice_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPrice_6.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_6(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceBoundaryMethod_6.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_6;
    ComplexEventPriceBoundaryPrecision_6.setString("69.360000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceBoundaryPrecision_6.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_6(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventPriceTimeType_6.getString());
    FIX::ComplexEventType ComplexEventType_6(1);
    noComplexEvents_0_1.set(ComplexEventType_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexEventType_6.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_6;
    ComplexOptPayoutAmount_6.setString("17136230");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_6);
    ComplexEvents_NoComplexEvents_6.insert(ComplexOptPayoutAmount_6.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_6);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_8;
      FIX::ComplexEventEndDate ComplexEventEndDate_8(FIX::UTCTIMESTAMP(8, 59, 45, 6, 8, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_8);
      ComplexEventDates_NoComplexEventDates_8.insert(ComplexEventEndDate_8.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_8(FIX::UTCTIMESTAMP(1, 41, 40, 16, 6, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_8);
      ComplexEventDates_NoComplexEventDates_8.insert(ComplexEventStartDate_8.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_8);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_14;
        FIX::ComplexEventEndTime ComplexEventEndTime_14(FIX::UTCTIMEONLY(14, 20, 52));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_14);
        ComplexEventTimes_NoComplexEventTimes_14.insert(ComplexEventEndTime_14.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_14(FIX::UTCTIMEONLY(19, 48, 17));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_14);
        ComplexEventTimes_NoComplexEventTimes_14.insert(ComplexEventStartTime_14.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_14);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_9;
      FIX::ComplexEventEndDate ComplexEventEndDate_9(FIX::UTCTIMESTAMP(4, 10, 46, 17, 5, 2004));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_9);
      ComplexEventDates_NoComplexEventDates_9.insert(ComplexEventEndDate_9.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_9(FIX::UTCTIMESTAMP(2, 42, 51, 24, 1, 2016));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_9);
      ComplexEventDates_NoComplexEventDates_9.insert(ComplexEventStartDate_9.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_9);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_15;
        FIX::ComplexEventEndTime ComplexEventEndTime_15(FIX::UTCTIMEONLY(23, 35, 0));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_15);
        ComplexEventTimes_NoComplexEventTimes_15.insert(ComplexEventEndTime_15.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_15(FIX::UTCTIMEONLY(21, 5, 20));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_15);
        ComplexEventTimes_NoComplexEventTimes_15.insert(ComplexEventStartTime_15.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_15);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_16;
        FIX::ComplexEventEndTime ComplexEventEndTime_16(FIX::UTCTIMEONLY(8, 40, 39));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_16);
        ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventEndTime_16.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_16(FIX::UTCTIMEONLY(23, 20, 53));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_16);
        ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventStartTime_16.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_16);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_17;
        FIX::ComplexEventEndTime ComplexEventEndTime_17(FIX::UTCTIMEONLY(0, 55, 47));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_17);
        ComplexEventTimes_NoComplexEventTimes_17.insert(ComplexEventEndTime_17.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_17(FIX::UTCTIMEONLY(3, 21, 5));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_17);
        ComplexEventTimes_NoComplexEventTimes_17.insert(ComplexEventStartTime_17.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_17);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_7;
    FIX::ComplexEventCondition ComplexEventCondition_7(1);
    noComplexEvents_0_2.set(ComplexEventCondition_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventCondition_7.getString());
    FIX::ComplexEventPrice ComplexEventPrice_7;
    ComplexEventPrice_7.setString("10129122");
    noComplexEvents_0_2.set(ComplexEventPrice_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPrice_7.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_7(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceBoundaryMethod_7.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_7;
    ComplexEventPriceBoundaryPrecision_7.setString("71.780000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceBoundaryPrecision_7.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_7(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventPriceTimeType_7.getString());
    FIX::ComplexEventType ComplexEventType_7(2);
    noComplexEvents_0_2.set(ComplexEventType_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexEventType_7.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_7;
    ComplexOptPayoutAmount_7.setString("1638887");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_7);
    ComplexEvents_NoComplexEvents_7.insert(ComplexOptPayoutAmount_7.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_7);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_10;
      FIX::ComplexEventEndDate ComplexEventEndDate_10(FIX::UTCTIMESTAMP(19, 9, 53, 16, 4, 2007));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_10);
      ComplexEventDates_NoComplexEventDates_10.insert(ComplexEventEndDate_10.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_10(FIX::UTCTIMESTAMP(15, 45, 27, 7, 9, 2015));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_10);
      ComplexEventDates_NoComplexEventDates_10.insert(ComplexEventStartDate_10.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_10);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_18;
        FIX::ComplexEventEndTime ComplexEventEndTime_18(FIX::UTCTIMEONLY(19, 19, 25));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_18);
        ComplexEventTimes_NoComplexEventTimes_18.insert(ComplexEventEndTime_18.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_18(FIX::UTCTIMEONLY(2, 38, 41));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_18);
        ComplexEventTimes_NoComplexEventTimes_18.insert(ComplexEventStartTime_18.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_18);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_11;
      FIX::ComplexEventEndDate ComplexEventEndDate_11(FIX::UTCTIMESTAMP(10, 29, 58, 3, 4, 2014));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_11);
      ComplexEventDates_NoComplexEventDates_11.insert(ComplexEventEndDate_11.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_11(FIX::UTCTIMESTAMP(17, 10, 41, 22, 3, 2000));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_11);
      ComplexEventDates_NoComplexEventDates_11.insert(ComplexEventStartDate_11.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_11);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_19;
        FIX::ComplexEventEndTime ComplexEventEndTime_19(FIX::UTCTIMEONLY(3, 49, 41));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_19);
        ComplexEventTimes_NoComplexEventTimes_19.insert(ComplexEventEndTime_19.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_19(FIX::UTCTIMEONLY(2, 20, 46));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_19);
        ComplexEventTimes_NoComplexEventTimes_19.insert(ComplexEventStartTime_19.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_19);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_20;
        FIX::ComplexEventEndTime ComplexEventEndTime_20(FIX::UTCTIMEONLY(3, 57, 20));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_20);
        ComplexEventTimes_NoComplexEventTimes_20.insert(ComplexEventEndTime_20.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_20(FIX::UTCTIMEONLY(12, 59, 1));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_20);
        ComplexEventTimes_NoComplexEventTimes_20.insert(ComplexEventStartTime_20.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_20);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_12;
      FIX::ComplexEventEndDate ComplexEventEndDate_12(FIX::UTCTIMESTAMP(13, 30, 59, 4, 3, 2007));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_12);
      ComplexEventDates_NoComplexEventDates_12.insert(ComplexEventEndDate_12.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_12(FIX::UTCTIMESTAMP(7, 59, 54, 1, 7, 2004));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_12);
      ComplexEventDates_NoComplexEventDates_12.insert(ComplexEventStartDate_12.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_12);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_21;
        FIX::ComplexEventEndTime ComplexEventEndTime_21(FIX::UTCTIMEONLY(2, 31, 5));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_21);
        ComplexEventTimes_NoComplexEventTimes_21.insert(ComplexEventEndTime_21.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_21(FIX::UTCTIMEONLY(13, 17, 35));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_21);
        ComplexEventTimes_NoComplexEventTimes_21.insert(ComplexEventStartTime_21.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_21);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_22;
        FIX::ComplexEventEndTime ComplexEventEndTime_22(FIX::UTCTIMEONLY(20, 24, 5));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_22);
        ComplexEventTimes_NoComplexEventTimes_22.insert(ComplexEventEndTime_22.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_22(FIX::UTCTIMEONLY(4, 4, 28));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_22);
        ComplexEventTimes_NoComplexEventTimes_22.insert(ComplexEventStartTime_22.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_22);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_23;
        FIX::ComplexEventEndTime ComplexEventEndTime_23(FIX::UTCTIMEONLY(9, 59, 8));
        noComplexEventTimes_2_2_2_2.set(ComplexEventEndTime_23);
        ComplexEventTimes_NoComplexEventTimes_23.insert(ComplexEventEndTime_23.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_23(FIX::UTCTIMEONLY(1, 49, 22));
        noComplexEventTimes_2_2_2_2.set(ComplexEventStartTime_23);
        ComplexEventTimes_NoComplexEventTimes_23.insert(ComplexEventStartTime_23.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_23);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Advertisement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_8;
    FIX::EventDate EventDate_8("LOCALMKTDATE_1081914041");
    noEvents_0_0.set(EventDate_8);
    EvntGrp_NoEvents_8.insert(EventDate_8.getString());
    FIX::EventPx EventPx_8;
    EventPx_8.setString("18399960");
    noEvents_0_0.set(EventPx_8);
    EvntGrp_NoEvents_8.insert(EventPx_8.getString());
    FIX::EventText EventText_8("STRING_356030413");
    noEvents_0_0.set(EventText_8);
    EvntGrp_NoEvents_8.insert(EventText_8.getString());
    FIX::EventTime EventTime_8(FIX::UTCTIMESTAMP(11, 55, 15, 25, 7, 2012));
    noEvents_0_0.set(EventTime_8);
    EvntGrp_NoEvents_8.insert(EventTime_8.getString());
    FIX::EventType EventType_8(2);
    noEvents_0_0.set(EventType_8);
    EvntGrp_NoEvents_8.insert(EventType_8.getString());
    all_values.push_back(EvntGrp_NoEvents_8);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Advertisement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_6;
    FIX::InstrumentPartyID InstrumentPartyID_6("STRING_377541749");
    noInstrumentParties_0_0.set(InstrumentPartyID_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyID_6.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_6('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyIDSource_6.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_6(2061331491);
    noInstrumentParties_0_0.set(InstrumentPartyRole_6);
    InstrumentParties_NoInstrumentParties_6.insert(InstrumentPartyRole_6.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_6);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12;
      FIX::InstrumentPartySubID InstrumentPartySubID_12("STRING_807521193");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_12);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12.insert(InstrumentPartySubID_12.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_12(1054504668);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_12);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12.insert(InstrumentPartySubIDType_12.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13;
      FIX::InstrumentPartySubID InstrumentPartySubID_13("STRING_147066596");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_13);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13.insert(InstrumentPartySubID_13.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_13(1267582909);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_13);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13.insert(InstrumentPartySubIDType_13.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::Advertisement::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_7;
    FIX::InstrumentPartyID InstrumentPartyID_7("STRING_992687024");
    noInstrumentParties_0_1.set(InstrumentPartyID_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyID_7.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_7('9');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyIDSource_7.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_7(1171553518);
    noInstrumentParties_0_1.set(InstrumentPartyRole_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyRole_7.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_7);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14;
      FIX::InstrumentPartySubID InstrumentPartySubID_14("STRING_841234576");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_14);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14.insert(InstrumentPartySubID_14.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_14(534300118);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_14);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14.insert(InstrumentPartySubIDType_14.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_8;
    FIX::SecurityAltID SecurityAltID_8("STRING_765820137");
    noSecurityAltID_0_0.set(SecurityAltID_8);
    SecAltIDGrp_NoSecurityAltID_8.insert(SecurityAltID_8.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_8("STRING_1682062248");
    noSecurityAltID_0_0.set(SecurityAltIDSource_8);
    SecAltIDGrp_NoSecurityAltID_8.insert(SecurityAltIDSource_8.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_8);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_9;
    FIX::SecurityAltID SecurityAltID_9("STRING_476339362");
    noSecurityAltID_0_1.set(SecurityAltID_9);
    SecAltIDGrp_NoSecurityAltID_9.insert(SecurityAltID_9.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_9("STRING_1962801753");
    noSecurityAltID_0_1.set(SecurityAltIDSource_9);
    SecAltIDGrp_NoSecurityAltID_9.insert(SecurityAltIDSource_9.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_9);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_10;
    FIX::SecurityAltID SecurityAltID_10("STRING_616492641");
    noSecurityAltID_0_2.set(SecurityAltID_10);
    SecAltIDGrp_NoSecurityAltID_10.insert(SecurityAltID_10.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_10("STRING_168851783");
    noSecurityAltID_0_2.set(SecurityAltIDSource_10);
    SecAltIDGrp_NoSecurityAltID_10.insert(SecurityAltIDSource_10.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_10);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_6;
  FIX::SecurityXML SecurityXML_7("XMLDATA_171348518");
  msg.set(SecurityXML_7);
  FIX::SecurityXMLLen SecurityXMLLen_3(1398077592);
  msg.set(SecurityXMLLen_3);
  FIX::SecurityXMLSchema SecurityXMLSchema_3("STRING_229958218");
  msg.set(SecurityXMLSchema_3);
  SecurityXML_6.insert(SecurityXMLSchema_3.getString());
  all_values.push_back(SecurityXML_6);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Advertisement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_0;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_0("DATA_234390019");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingIssuer_0.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_0(1473363119);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingIssuerLen_0.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_0("DATA_1530027471");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingSecurityDesc_0.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_0(339652231);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_0);
    UnderlyingInstrument_0.insert(EncodedUnderlyingSecurityDescLen_0.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_0;
    UnderlyingAdjustedQuantity_0.setString("15816979");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_0);
    UnderlyingInstrument_0.insert(UnderlyingAdjustedQuantity_0.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_0;
    UnderlyingAllocationPercent_0.setString("76.900000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_0);
    UnderlyingInstrument_0.insert(UnderlyingAllocationPercent_0.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_0;
    UnderlyingAttachmentPoint_0.setString("39.800000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_0);
    UnderlyingInstrument_0.insert(UnderlyingAttachmentPoint_0.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_0("STRING_1544796409");
    noUnderlyings_0_0.set(UnderlyingCFICode_0);
    UnderlyingInstrument_0.insert(UnderlyingCFICode_0.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_0("STRING_880825534");
    noUnderlyings_0_0.set(UnderlyingCPProgram_0);
    UnderlyingInstrument_0.insert(UnderlyingCPProgram_0.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_0("STRING_404472509");
    noUnderlyings_0_0.set(UnderlyingCPRegType_0);
    UnderlyingInstrument_0.insert(UnderlyingCPRegType_0.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_0;
    UnderlyingCapValue_0.setString("2048339");
    noUnderlyings_0_0.set(UnderlyingCapValue_0);
    UnderlyingInstrument_0.insert(UnderlyingCapValue_0.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_0;
    UnderlyingCashAmount_0.setString("19353302");
    noUnderlyings_0_0.set(UnderlyingCashAmount_0);
    UnderlyingInstrument_0.insert(UnderlyingCashAmount_0.getString());
    FIX::UnderlyingCashType UnderlyingCashType_0("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_0);
    UnderlyingInstrument_0.insert(UnderlyingCashType_0.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_0;
    UnderlyingContractMultiplier_0.setString("14724168");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_0);
    UnderlyingInstrument_0.insert(UnderlyingContractMultiplier_0.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_0(780533579);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_0);
    UnderlyingInstrument_0.insert(UnderlyingContractMultiplierUnit_0.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_0("COUNTRY_1534873670");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingCountryOfIssue_0.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_0("LOCALMKTDATE_496486734");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_0);
    UnderlyingInstrument_0.insert(UnderlyingCouponPaymentDate_0.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_0;
    UnderlyingCouponRate_0.setString("7.250000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_0);
    UnderlyingInstrument_0.insert(UnderlyingCouponRate_0.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_0("STRING_228624598");
    noUnderlyings_0_0.set(UnderlyingCreditRating_0);
    UnderlyingInstrument_0.insert(UnderlyingCreditRating_0.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_0("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_0);
    UnderlyingInstrument_0.insert(UnderlyingCurrency_0.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_0;
    UnderlyingCurrentValue_0.setString("9944447");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_0);
    UnderlyingInstrument_0.insert(UnderlyingCurrentValue_0.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_0;
    UnderlyingDetachmentPoint_0.setString("54.520000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_0);
    UnderlyingInstrument_0.insert(UnderlyingDetachmentPoint_0.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_0;
    UnderlyingDirtyPrice_0.setString("6594065");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_0);
    UnderlyingInstrument_0.insert(UnderlyingDirtyPrice_0.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_0;
    UnderlyingEndPrice_0.setString("8097628");
    noUnderlyings_0_0.set(UnderlyingEndPrice_0);
    UnderlyingInstrument_0.insert(UnderlyingEndPrice_0.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_0;
    UnderlyingEndValue_0.setString("11818580");
    noUnderlyings_0_0.set(UnderlyingEndValue_0);
    UnderlyingInstrument_0.insert(UnderlyingEndValue_0.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_0(828258350);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_0);
    UnderlyingInstrument_0.insert(UnderlyingExerciseStyle_0.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_0;
    UnderlyingFXRate_0.setString("9811113");
    noUnderlyings_0_0.set(UnderlyingFXRate_0);
    UnderlyingInstrument_0.insert(UnderlyingFXRate_0.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_0('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_0);
    UnderlyingInstrument_0.insert(UnderlyingFXRateCalc_0.getString());
    FIX::UnderlyingFactor UnderlyingFactor_0;
    UnderlyingFactor_0.setString("10582165");
    noUnderlyings_0_0.set(UnderlyingFactor_0);
    UnderlyingInstrument_0.insert(UnderlyingFactor_0.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_0(1972198592);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_0);
    UnderlyingInstrument_0.insert(UnderlyingFlowScheduleType_0.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_0("STRING_666842056");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_0);
    UnderlyingInstrument_0.insert(UnderlyingInstrRegistry_0.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_0("LOCALMKTDATE_384096039");
    noUnderlyings_0_0.set(UnderlyingIssueDate_0);
    UnderlyingInstrument_0.insert(UnderlyingIssueDate_0.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_0("STRING_1354742416");
    noUnderlyings_0_0.set(UnderlyingIssuer_0);
    UnderlyingInstrument_0.insert(UnderlyingIssuer_0.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_0("STRING_1006494287");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingLocaleOfIssue_0.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_0("LOCALMKTDATE_1965794000");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityDate_0.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_0("MONTHYEAR_174236458");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityMonthYear_0.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_0("TZTIMEONLY_1723688267");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_0);
    UnderlyingInstrument_0.insert(UnderlyingMaturityTime_0.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_0;
    UnderlyingNotionalPercentageOutstanding_0.setString("67.610000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_0);
    UnderlyingInstrument_0.insert(UnderlyingNotionalPercentageOutstanding_0.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_0('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_0);
    UnderlyingInstrument_0.insert(UnderlyingOptAttribute_0.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_0;
    UnderlyingOriginalNotionalPercentageOutstanding_0.setString("7.760000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_0);
    UnderlyingInstrument_0.insert(UnderlyingOriginalNotionalPercentageOutstanding_0.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_0("STRING_1567940715");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_0);
    UnderlyingInstrument_0.insert(UnderlyingPriceUnitOfMeasure_0.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_0;
    UnderlyingPriceUnitOfMeasureQty_0.setString("8429085");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_0);
    UnderlyingInstrument_0.insert(UnderlyingPriceUnitOfMeasureQty_0.getString());
    FIX::UnderlyingProduct UnderlyingProduct_0(532216234);
    noUnderlyings_0_0.set(UnderlyingProduct_0);
    UnderlyingInstrument_0.insert(UnderlyingProduct_0.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_0(892873930);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_0);
    UnderlyingInstrument_0.insert(UnderlyingPutOrCall_0.getString());
    FIX::UnderlyingPx UnderlyingPx_0;
    UnderlyingPx_0.setString("16234421");
    noUnderlyings_0_0.set(UnderlyingPx_0);
    UnderlyingInstrument_0.insert(UnderlyingPx_0.getString());
    FIX::UnderlyingQty UnderlyingQty_0;
    UnderlyingQty_0.setString("20670899");
    noUnderlyings_0_0.set(UnderlyingQty_0);
    UnderlyingInstrument_0.insert(UnderlyingQty_0.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_0("LOCALMKTDATE_1389360664");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_0);
    UnderlyingInstrument_0.insert(UnderlyingRedemptionDate_0.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_0("STRING_1279049203");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_0);
    UnderlyingInstrument_0.insert(UnderlyingRepoCollateralSecurityType_0.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_0;
    UnderlyingRepurchaseRate_0.setString("8.550000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_0);
    UnderlyingInstrument_0.insert(UnderlyingRepurchaseRate_0.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_0(272663869);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_0);
    UnderlyingInstrument_0.insert(UnderlyingRepurchaseTerm_0.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_0("STRING_1462116408");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_0);
    UnderlyingInstrument_0.insert(UnderlyingRestructuringType_0.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_0("STRING_1142675590");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityDesc_0.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_0("EXCHANGE_838029321");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityExchange_0.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_0("STRING_2121522975");
    noUnderlyings_0_0.set(UnderlyingSecurityID_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityID_0.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_0("STRING_1952438431");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityIDSource_0.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_0("STRING_2019887415");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_0);
    UnderlyingInstrument_0.insert(UnderlyingSecuritySubType_0.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_0("STRING_802297678");
    noUnderlyings_0_0.set(UnderlyingSecurityType_0);
    UnderlyingInstrument_0.insert(UnderlyingSecurityType_0.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_0("STRING_786066142");
    noUnderlyings_0_0.set(UnderlyingSeniority_0);
    UnderlyingInstrument_0.insert(UnderlyingSeniority_0.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_0("STRING_304855804");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_0);
    UnderlyingInstrument_0.insert(UnderlyingSettlMethod_0.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_0(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_0);
    UnderlyingInstrument_0.insert(UnderlyingSettlementType_0.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_0;
    UnderlyingStartValue_0.setString("6107810");
    noUnderlyings_0_0.set(UnderlyingStartValue_0);
    UnderlyingInstrument_0.insert(UnderlyingStartValue_0.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_0("STRING_971697861");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_0);
    UnderlyingInstrument_0.insert(UnderlyingStateOrProvinceOfIssue_0.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_0("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_0);
    UnderlyingInstrument_0.insert(UnderlyingStrikeCurrency_0.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_0;
    UnderlyingStrikePrice_0.setString("19781921");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_0);
    UnderlyingInstrument_0.insert(UnderlyingStrikePrice_0.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_0("STRING_2062920638");
    noUnderlyings_0_0.set(UnderlyingSymbol_0);
    UnderlyingInstrument_0.insert(UnderlyingSymbol_0.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_0("STRING_2139759961");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_0);
    UnderlyingInstrument_0.insert(UnderlyingSymbolSfx_0.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_0("STRING_1554396768");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_0);
    UnderlyingInstrument_0.insert(UnderlyingTimeUnit_0.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_0("STRING_1278543751");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_0);
    UnderlyingInstrument_0.insert(UnderlyingUnitOfMeasure_0.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_0;
    UnderlyingUnitOfMeasureQty_0.setString("10473383");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_0);
    UnderlyingInstrument_0.insert(UnderlyingUnitOfMeasureQty_0.getString());
    all_values.push_back(UnderlyingInstrument_0);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_0;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_0("STRING_699000818");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_0);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_0.insert(UnderlyingSecurityAltID_0.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_0("STRING_1890246852");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_0);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_0.insert(UnderlyingSecurityAltIDSource_0.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_1;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_1("STRING_2067290130");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_1);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_1.insert(UnderlyingSecurityAltID_1.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_1("STRING_1591874748");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_1);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_1.insert(UnderlyingSecurityAltIDSource_1.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_2;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_2("STRING_1366205330");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_2);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_2.insert(UnderlyingSecurityAltID_2.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_2("STRING_1986896387");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_2);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_2.insert(UnderlyingSecurityAltIDSource_2.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_0;
      FIX::UnderlyingStipType UnderlyingStipType_0("STRING_497770885");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_0);
      UnderlyingStipulations_NoUnderlyingStips_0.insert(UnderlyingStipType_0.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_0("STRING_2135127242");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_0);
      UnderlyingStipulations_NoUnderlyingStips_0.insert(UnderlyingStipValue_0.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_0);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_0;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_0("STRING_1959887293");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyID_0.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_0('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyIDSource_0.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_0(1944444955);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_0);
      UndlyInstrumentParties_NoUndlyInstrumentParties_0.insert(UnderlyingInstrumentPartyRole_0.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_0);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_0("STRING_935273967");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_0);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0.insert(UnderlyingInstrumentPartySubID_0.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_0(1816848722);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_0);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0.insert(UnderlyingInstrumentPartySubIDType_0.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_1;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_1("STRING_588740651");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyID_1.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_1('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyIDSource_1.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_1(2121704527);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_1);
      UndlyInstrumentParties_NoUndlyInstrumentParties_1.insert(UnderlyingInstrumentPartyRole_1.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_1);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_1("STRING_184637548");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_1);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1.insert(UnderlyingInstrumentPartySubID_1.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_1(945918740);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_1);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1.insert(UnderlyingInstrumentPartySubIDType_1.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_2("STRING_398897887");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_2);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2.insert(UnderlyingInstrumentPartySubID_2.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_2(2677402);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_2);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2.insert(UnderlyingInstrumentPartySubIDType_2.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
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
