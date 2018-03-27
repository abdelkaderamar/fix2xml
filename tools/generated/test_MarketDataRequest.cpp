#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MarketDataRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataRequest msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDataRequest_0;
  FIX::AggregatedBook AggregatedBook_0(true);
  msg.set(AggregatedBook_0);
  MarketDataRequest_0.insert(AggregatedBook_0.getString());
  FIX::ApplQueueAction ApplQueueAction_0(1);
  msg.set(ApplQueueAction_0);
  MarketDataRequest_0.insert(ApplQueueAction_0.getString());
  FIX::ApplQueueMax ApplQueueMax_0(423521646);
  msg.set(ApplQueueMax_0);
  MarketDataRequest_0.insert(ApplQueueMax_0.getString());
  FIX::MDImplicitDelete MDImplicitDelete_0(true);
  msg.set(MDImplicitDelete_0);
  MarketDataRequest_0.insert(MDImplicitDelete_0.getString());
  FIX::MDQuoteType MDQuoteType_1(2);
  msg.set(MDQuoteType_1);
  MarketDataRequest_0.insert(MDQuoteType_1.getString());
  FIX::MDReqID MDReqID_1("STRING_46555050");
  msg.set(MDReqID_1);
  MarketDataRequest_0.insert(MDReqID_1.getString());
  FIX::MDUpdateType MDUpdateType_0(0);
  msg.set(MDUpdateType_0);
  MarketDataRequest_0.insert(MDUpdateType_0.getString());
  FIX::MarketDepth MarketDepth_21(1470470805);
  msg.set(MarketDepth_21);
  MarketDataRequest_0.insert(MarketDepth_21.getString());
  FIX::OpenCloseSettlFlag OpenCloseSettlFlag_1("MULTIPLECHARVALUE_0");
  msg.set(OpenCloseSettlFlag_1);
  MarketDataRequest_0.insert(OpenCloseSettlFlag_1.getString());
  FIX::Scope Scope_1("MULTIPLECHARVALUE_2");
  msg.set(Scope_1);
  MarketDataRequest_0.insert(Scope_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_2('2');
  msg.set(SubscriptionRequestType_2);
  MarketDataRequest_0.insert(SubscriptionRequestType_2.getString());
  all_values.push_back(MarketDataRequest_0);

  // InstrmtMDReqGrp
  // Group InstrmtMDReqGrp.NoRelatedSym
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_0;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_0;
    FIX::Currency Currency_24("EUR");
    noRelatedSym_0_0.set(Currency_24);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(Currency_24.getString());
    FIX::MDEntrySize MDEntrySize_1;
    MDEntrySize_1.setString("12189583");
    noRelatedSym_0_0.set(MDEntrySize_1);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(MDEntrySize_1.getString());
    FIX::MDStreamID MDStreamID_1("STRING_1168910224");
    noRelatedSym_0_0.set(MDStreamID_1);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(MDStreamID_1.getString());
    FIX::QuoteType QuoteType_0(3);
    noRelatedSym_0_0.set(QuoteType_0);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(QuoteType_0.getString());
    FIX::SettlDate SettlDate_16("LOCALMKTDATE_477708560");
    noRelatedSym_0_0.set(SettlDate_16);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(SettlDate_16.getString());
    FIX::SettlType SettlType_10("STRING_3");
    noRelatedSym_0_0.set(SettlType_10);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(SettlType_10.getString());
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_49;
      FIX::EncodedLegIssuer EncodedLegIssuer_49("DATA_648315032");
      noLegs_0_1_0.set(EncodedLegIssuer_49);
      InstrumentLeg_49.insert(EncodedLegIssuer_49.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_49(2129466421);
      noLegs_0_1_0.set(EncodedLegIssuerLen_49);
      InstrumentLeg_49.insert(EncodedLegIssuerLen_49.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_49("DATA_650885416");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_49);
      InstrumentLeg_49.insert(EncodedLegSecurityDesc_49.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_49(92807977);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_49);
      InstrumentLeg_49.insert(EncodedLegSecurityDescLen_49.getString());
      FIX::LegCFICode LegCFICode_49("STRING_1270544208");
      noLegs_0_1_0.set(LegCFICode_49);
      InstrumentLeg_49.insert(LegCFICode_49.getString());
      FIX::LegContractMultiplier LegContractMultiplier_49;
      LegContractMultiplier_49.setString("11587118");
      noLegs_0_1_0.set(LegContractMultiplier_49);
      InstrumentLeg_49.insert(LegContractMultiplier_49.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_49(1917299889);
      noLegs_0_1_0.set(LegContractMultiplierUnit_49);
      InstrumentLeg_49.insert(LegContractMultiplierUnit_49.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_49("MONTHYEAR_1723143744");
      noLegs_0_1_0.set(LegContractSettlMonth_49);
      InstrumentLeg_49.insert(LegContractSettlMonth_49.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_49("COUNTRY_1915764599");
      noLegs_0_1_0.set(LegCountryOfIssue_49);
      InstrumentLeg_49.insert(LegCountryOfIssue_49.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_49("LOCALMKTDATE_252514130");
      noLegs_0_1_0.set(LegCouponPaymentDate_49);
      InstrumentLeg_49.insert(LegCouponPaymentDate_49.getString());
      FIX::LegCouponRate LegCouponRate_49;
      LegCouponRate_49.setString("70.640000");
      noLegs_0_1_0.set(LegCouponRate_49);
      InstrumentLeg_49.insert(LegCouponRate_49.getString());
      FIX::LegCreditRating LegCreditRating_49("STRING_1357784075");
      noLegs_0_1_0.set(LegCreditRating_49);
      InstrumentLeg_49.insert(LegCreditRating_49.getString());
      FIX::LegCurrency LegCurrency_49("CAN");
      noLegs_0_1_0.set(LegCurrency_49);
      InstrumentLeg_49.insert(LegCurrency_49.getString());
      FIX::LegDatedDate LegDatedDate_49("LOCALMKTDATE_9464921");
      noLegs_0_1_0.set(LegDatedDate_49);
      InstrumentLeg_49.insert(LegDatedDate_49.getString());
      FIX::LegExerciseStyle LegExerciseStyle_49(1920530316);
      noLegs_0_1_0.set(LegExerciseStyle_49);
      InstrumentLeg_49.insert(LegExerciseStyle_49.getString());
      FIX::LegFactor LegFactor_49;
      LegFactor_49.setString("16591837");
      noLegs_0_1_0.set(LegFactor_49);
      InstrumentLeg_49.insert(LegFactor_49.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_49(1657324642);
      noLegs_0_1_0.set(LegFlowScheduleType_49);
      InstrumentLeg_49.insert(LegFlowScheduleType_49.getString());
      FIX::LegInstrRegistry LegInstrRegistry_49("STRING_1243517474");
      noLegs_0_1_0.set(LegInstrRegistry_49);
      InstrumentLeg_49.insert(LegInstrRegistry_49.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_49("LOCALMKTDATE_407749083");
      noLegs_0_1_0.set(LegInterestAccrualDate_49);
      InstrumentLeg_49.insert(LegInterestAccrualDate_49.getString());
      FIX::LegIssueDate LegIssueDate_49("LOCALMKTDATE_1832853461");
      noLegs_0_1_0.set(LegIssueDate_49);
      InstrumentLeg_49.insert(LegIssueDate_49.getString());
      FIX::LegIssuer LegIssuer_49("STRING_1235932001");
      noLegs_0_1_0.set(LegIssuer_49);
      InstrumentLeg_49.insert(LegIssuer_49.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_49("STRING_1260895762");
      noLegs_0_1_0.set(LegLocaleOfIssue_49);
      InstrumentLeg_49.insert(LegLocaleOfIssue_49.getString());
      FIX::LegMaturityDate LegMaturityDate_49("LOCALMKTDATE_1490370012");
      noLegs_0_1_0.set(LegMaturityDate_49);
      InstrumentLeg_49.insert(LegMaturityDate_49.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_49("MONTHYEAR_461118947");
      noLegs_0_1_0.set(LegMaturityMonthYear_49);
      InstrumentLeg_49.insert(LegMaturityMonthYear_49.getString());
      FIX::LegMaturityTime LegMaturityTime_49("TZTIMEONLY_332370480");
      noLegs_0_1_0.set(LegMaturityTime_49);
      InstrumentLeg_49.insert(LegMaturityTime_49.getString());
      FIX::LegOptAttribute LegOptAttribute_49('5');
      noLegs_0_1_0.set(LegOptAttribute_49);
      InstrumentLeg_49.insert(LegOptAttribute_49.getString());
      FIX::LegOptionRatio LegOptionRatio_49;
      LegOptionRatio_49.setString("19771657");
      noLegs_0_1_0.set(LegOptionRatio_49);
      InstrumentLeg_49.insert(LegOptionRatio_49.getString());
      FIX::LegPool LegPool_49("STRING_810079040");
      noLegs_0_1_0.set(LegPool_49);
      InstrumentLeg_49.insert(LegPool_49.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_49("STRING_570980700");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_49);
      InstrumentLeg_49.insert(LegPriceUnitOfMeasure_49.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_49;
      LegPriceUnitOfMeasureQty_49.setString("3119601");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_49);
      InstrumentLeg_49.insert(LegPriceUnitOfMeasureQty_49.getString());
      FIX::LegProduct LegProduct_49(1458394073);
      noLegs_0_1_0.set(LegProduct_49);
      InstrumentLeg_49.insert(LegProduct_49.getString());
      FIX::LegPutOrCall LegPutOrCall_49(552963474);
      noLegs_0_1_0.set(LegPutOrCall_49);
      InstrumentLeg_49.insert(LegPutOrCall_49.getString());
      FIX::LegRatioQty LegRatioQty_49;
      LegRatioQty_49.setString("9628456");
      noLegs_0_1_0.set(LegRatioQty_49);
      InstrumentLeg_49.insert(LegRatioQty_49.getString());
      FIX::LegRedemptionDate LegRedemptionDate_49("LOCALMKTDATE_1551202050");
      noLegs_0_1_0.set(LegRedemptionDate_49);
      InstrumentLeg_49.insert(LegRedemptionDate_49.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_49("STRING_1823507682");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_49);
      InstrumentLeg_49.insert(LegRepoCollateralSecurityType_49.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_49;
      LegRepurchaseRate_49.setString("74.450000");
      noLegs_0_1_0.set(LegRepurchaseRate_49);
      InstrumentLeg_49.insert(LegRepurchaseRate_49.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_49(1321018291);
      noLegs_0_1_0.set(LegRepurchaseTerm_49);
      InstrumentLeg_49.insert(LegRepurchaseTerm_49.getString());
      FIX::LegSecurityDesc LegSecurityDesc_49("STRING_1399167779");
      noLegs_0_1_0.set(LegSecurityDesc_49);
      InstrumentLeg_49.insert(LegSecurityDesc_49.getString());
      FIX::LegSecurityExchange LegSecurityExchange_49("EXCHANGE_1889838396");
      noLegs_0_1_0.set(LegSecurityExchange_49);
      InstrumentLeg_49.insert(LegSecurityExchange_49.getString());
      FIX::LegSecurityID LegSecurityID_49("STRING_1573532421");
      noLegs_0_1_0.set(LegSecurityID_49);
      InstrumentLeg_49.insert(LegSecurityID_49.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_49("STRING_440791195");
      noLegs_0_1_0.set(LegSecurityIDSource_49);
      InstrumentLeg_49.insert(LegSecurityIDSource_49.getString());
      FIX::LegSecuritySubType LegSecuritySubType_49("STRING_1100138824");
      noLegs_0_1_0.set(LegSecuritySubType_49);
      InstrumentLeg_49.insert(LegSecuritySubType_49.getString());
      FIX::LegSecurityType LegSecurityType_49("STRING_1808324100");
      noLegs_0_1_0.set(LegSecurityType_49);
      InstrumentLeg_49.insert(LegSecurityType_49.getString());
      FIX::LegSide LegSide_49('2');
      noLegs_0_1_0.set(LegSide_49);
      InstrumentLeg_49.insert(LegSide_49.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_49("STRING_1109603745");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_49);
      InstrumentLeg_49.insert(LegStateOrProvinceOfIssue_49.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_49("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_49);
      InstrumentLeg_49.insert(LegStrikeCurrency_49.getString());
      FIX::LegStrikePrice LegStrikePrice_49;
      LegStrikePrice_49.setString("6194447");
      noLegs_0_1_0.set(LegStrikePrice_49);
      InstrumentLeg_49.insert(LegStrikePrice_49.getString());
      FIX::LegSymbol LegSymbol_49("STRING_677404595");
      noLegs_0_1_0.set(LegSymbol_49);
      InstrumentLeg_49.insert(LegSymbol_49.getString());
      FIX::LegSymbolSfx LegSymbolSfx_49("STRING_1972869103");
      noLegs_0_1_0.set(LegSymbolSfx_49);
      InstrumentLeg_49.insert(LegSymbolSfx_49.getString());
      FIX::LegTimeUnit LegTimeUnit_49("STRING_304814553");
      noLegs_0_1_0.set(LegTimeUnit_49);
      InstrumentLeg_49.insert(LegTimeUnit_49.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_49("STRING_1913336596");
      noLegs_0_1_0.set(LegUnitOfMeasure_49);
      InstrumentLeg_49.insert(LegUnitOfMeasure_49.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_49;
      LegUnitOfMeasureQty_49.setString("10862812");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_49);
      InstrumentLeg_49.insert(LegUnitOfMeasureQty_49.getString());
      all_values.push_back(InstrumentLeg_49);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_90;
        FIX::LegSecurityAltID LegSecurityAltID_90("STRING_226971895");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_90);
        LegSecAltIDGrp_NoLegSecurityAltID_90.insert(LegSecurityAltID_90.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_90("STRING_1418651698");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_90);
        LegSecAltIDGrp_NoLegSecurityAltID_90.insert(LegSecurityAltIDSource_90.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_90);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_29;
    FIX::AttachmentPoint AttachmentPoint_29;
    AttachmentPoint_29.setString("75.060000");
    noRelatedSym_0_0.set(AttachmentPoint_29);
    Instrument_29.insert(AttachmentPoint_29.getString());
    FIX::CFICode CFICode_29("STRING_56653989");
    noRelatedSym_0_0.set(CFICode_29);
    Instrument_29.insert(CFICode_29.getString());
    FIX::CPProgram CPProgram_29(2);
    noRelatedSym_0_0.set(CPProgram_29);
    Instrument_29.insert(CPProgram_29.getString());
    FIX::CPRegType CPRegType_29("STRING_730478207");
    noRelatedSym_0_0.set(CPRegType_29);
    Instrument_29.insert(CPRegType_29.getString());
    FIX::CapPrice CapPrice_29;
    CapPrice_29.setString("3686141");
    noRelatedSym_0_0.set(CapPrice_29);
    Instrument_29.insert(CapPrice_29.getString());
    FIX::ContractMultiplier ContractMultiplier_29;
    ContractMultiplier_29.setString("15396411");
    noRelatedSym_0_0.set(ContractMultiplier_29);
    Instrument_29.insert(ContractMultiplier_29.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_29(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_29);
    Instrument_29.insert(ContractMultiplierUnit_29.getString());
    FIX::ContractSettlMonth ContractSettlMonth_29("MONTHYEAR_1331459801");
    noRelatedSym_0_0.set(ContractSettlMonth_29);
    Instrument_29.insert(ContractSettlMonth_29.getString());
    FIX::CountryOfIssue CountryOfIssue_29("COUNTRY_943359566");
    noRelatedSym_0_0.set(CountryOfIssue_29);
    Instrument_29.insert(CountryOfIssue_29.getString());
    FIX::CouponPaymentDate CouponPaymentDate_29("LOCALMKTDATE_959465715");
    noRelatedSym_0_0.set(CouponPaymentDate_29);
    Instrument_29.insert(CouponPaymentDate_29.getString());
    FIX::CouponRate CouponRate_29;
    CouponRate_29.setString("35.990000");
    noRelatedSym_0_0.set(CouponRate_29);
    Instrument_29.insert(CouponRate_29.getString());
    FIX::CreditRating CreditRating_29("STRING_116894209");
    noRelatedSym_0_0.set(CreditRating_29);
    Instrument_29.insert(CreditRating_29.getString());
    FIX::DatedDate DatedDate_29("LOCALMKTDATE_211149846");
    noRelatedSym_0_0.set(DatedDate_29);
    Instrument_29.insert(DatedDate_29.getString());
    FIX::DetachmentPoint DetachmentPoint_29;
    DetachmentPoint_29.setString("83.470000");
    noRelatedSym_0_0.set(DetachmentPoint_29);
    Instrument_29.insert(DetachmentPoint_29.getString());
    FIX::EncodedIssuer EncodedIssuer_29("DATA_1690426631");
    noRelatedSym_0_0.set(EncodedIssuer_29);
    Instrument_29.insert(EncodedIssuer_29.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_29(651941042);
    noRelatedSym_0_0.set(EncodedIssuerLen_29);
    Instrument_29.insert(EncodedIssuerLen_29.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_29("DATA_543523");
    noRelatedSym_0_0.set(EncodedSecurityDesc_29);
    Instrument_29.insert(EncodedSecurityDesc_29.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_29(1351267083);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_29);
    Instrument_29.insert(EncodedSecurityDescLen_29.getString());
    FIX::ExerciseStyle ExerciseStyle_29(0);
    noRelatedSym_0_0.set(ExerciseStyle_29);
    Instrument_29.insert(ExerciseStyle_29.getString());
    FIX::Factor Factor_29;
    Factor_29.setString("11101472");
    noRelatedSym_0_0.set(Factor_29);
    Instrument_29.insert(Factor_29.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_29(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_29);
    Instrument_29.insert(FlexProductEligibilityIndicator_29.getString());
    FIX::FlexibleIndicator FlexibleIndicator_29(true);
    noRelatedSym_0_0.set(FlexibleIndicator_29);
    Instrument_29.insert(FlexibleIndicator_29.getString());
    FIX::FloorPrice FloorPrice_29;
    FloorPrice_29.setString("17295920");
    noRelatedSym_0_0.set(FloorPrice_29);
    Instrument_29.insert(FloorPrice_29.getString());
    FIX::FlowScheduleType FlowScheduleType_29(4);
    noRelatedSym_0_0.set(FlowScheduleType_29);
    Instrument_29.insert(FlowScheduleType_29.getString());
    FIX::InstrRegistry InstrRegistry_29("STRING_1948382775");
    noRelatedSym_0_0.set(InstrRegistry_29);
    Instrument_29.insert(InstrRegistry_29.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_29('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_29);
    Instrument_29.insert(InstrmtAssignmentMethod_29.getString());
    FIX::InterestAccrualDate InterestAccrualDate_29("LOCALMKTDATE_1228411748");
    noRelatedSym_0_0.set(InterestAccrualDate_29);
    Instrument_29.insert(InterestAccrualDate_29.getString());
    FIX::IssueDate IssueDate_29("LOCALMKTDATE_887180344");
    noRelatedSym_0_0.set(IssueDate_29);
    Instrument_29.insert(IssueDate_29.getString());
    FIX::Issuer Issuer_29("STRING_1682107479");
    noRelatedSym_0_0.set(Issuer_29);
    Instrument_29.insert(Issuer_29.getString());
    FIX::ListMethod ListMethod_29(1);
    noRelatedSym_0_0.set(ListMethod_29);
    Instrument_29.insert(ListMethod_29.getString());
    FIX::LocaleOfIssue LocaleOfIssue_29("STRING_158348394");
    noRelatedSym_0_0.set(LocaleOfIssue_29);
    Instrument_29.insert(LocaleOfIssue_29.getString());
    FIX::MaturityDate MaturityDate_29("LOCALMKTDATE_1841604985");
    noRelatedSym_0_0.set(MaturityDate_29);
    Instrument_29.insert(MaturityDate_29.getString());
    FIX::MaturityMonthYear MaturityMonthYear_29("MONTHYEAR_1512037633");
    noRelatedSym_0_0.set(MaturityMonthYear_29);
    Instrument_29.insert(MaturityMonthYear_29.getString());
    FIX::MaturityTime MaturityTime_29("TZTIMEONLY_239595485");
    noRelatedSym_0_0.set(MaturityTime_29);
    Instrument_29.insert(MaturityTime_29.getString());
    FIX::MinPriceIncrement MinPriceIncrement_29;
    MinPriceIncrement_29.setString("4245995");
    noRelatedSym_0_0.set(MinPriceIncrement_29);
    Instrument_29.insert(MinPriceIncrement_29.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_29;
    MinPriceIncrementAmount_29.setString("18806518");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_29);
    Instrument_29.insert(MinPriceIncrementAmount_29.getString());
    FIX::NTPositionLimit NTPositionLimit_29(1779236648);
    noRelatedSym_0_0.set(NTPositionLimit_29);
    Instrument_29.insert(NTPositionLimit_29.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_29;
    NotionalPercentageOutstanding_29.setString("12.250000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_29);
    Instrument_29.insert(NotionalPercentageOutstanding_29.getString());
    FIX::OptAttribute OptAttribute_29('1');
    noRelatedSym_0_0.set(OptAttribute_29);
    Instrument_29.insert(OptAttribute_29.getString());
    FIX::OptPayoutAmount OptPayoutAmount_29;
    OptPayoutAmount_29.setString("5751125");
    noRelatedSym_0_0.set(OptPayoutAmount_29);
    Instrument_29.insert(OptPayoutAmount_29.getString());
    FIX::OptPayoutType OptPayoutType_29(3);
    noRelatedSym_0_0.set(OptPayoutType_29);
    Instrument_29.insert(OptPayoutType_29.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_29;
    OriginalNotionalPercentageOutstanding_29.setString("79.250000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_29);
    Instrument_29.insert(OriginalNotionalPercentageOutstanding_29.getString());
    FIX::Pool Pool_29("STRING_692006776");
    noRelatedSym_0_0.set(Pool_29);
    Instrument_29.insert(Pool_29.getString());
    FIX::PositionLimit PositionLimit_29(731173139);
    noRelatedSym_0_0.set(PositionLimit_29);
    Instrument_29.insert(PositionLimit_29.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_29("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_29);
    Instrument_29.insert(PriceQuoteMethod_29.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_29("STRING_234949759");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_29);
    Instrument_29.insert(PriceUnitOfMeasure_29.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_29;
    PriceUnitOfMeasureQty_29.setString("13831141");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_29);
    Instrument_29.insert(PriceUnitOfMeasureQty_29.getString());
    FIX::Product Product_31(9);
    noRelatedSym_0_0.set(Product_31);
    Instrument_29.insert(Product_31.getString());
    FIX::ProductComplex ProductComplex_29("STRING_1586216842");
    noRelatedSym_0_0.set(ProductComplex_29);
    Instrument_29.insert(ProductComplex_29.getString());
    FIX::PutOrCall PutOrCall_29(0);
    noRelatedSym_0_0.set(PutOrCall_29);
    Instrument_29.insert(PutOrCall_29.getString());
    FIX::RedemptionDate RedemptionDate_29("LOCALMKTDATE_233773417");
    noRelatedSym_0_0.set(RedemptionDate_29);
    Instrument_29.insert(RedemptionDate_29.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_29("STRING_223887399");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_29);
    Instrument_29.insert(RepoCollateralSecurityType_29.getString());
    FIX::RepurchaseRate RepurchaseRate_29;
    RepurchaseRate_29.setString("51.540000");
    noRelatedSym_0_0.set(RepurchaseRate_29);
    Instrument_29.insert(RepurchaseRate_29.getString());
    FIX::RepurchaseTerm RepurchaseTerm_29(1963365425);
    noRelatedSym_0_0.set(RepurchaseTerm_29);
    Instrument_29.insert(RepurchaseTerm_29.getString());
    FIX::RestructuringType RestructuringType_29("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_29);
    Instrument_29.insert(RestructuringType_29.getString());
    FIX::SecurityDesc SecurityDesc_29("STRING_1717404281");
    noRelatedSym_0_0.set(SecurityDesc_29);
    Instrument_29.insert(SecurityDesc_29.getString());
    FIX::SecurityExchange SecurityExchange_29("EXCHANGE_1850288339");
    noRelatedSym_0_0.set(SecurityExchange_29);
    Instrument_29.insert(SecurityExchange_29.getString());
    FIX::SecurityGroup SecurityGroup_29("STRING_767374298");
    noRelatedSym_0_0.set(SecurityGroup_29);
    Instrument_29.insert(SecurityGroup_29.getString());
    FIX::SecurityID SecurityID_29("STRING_457100977");
    noRelatedSym_0_0.set(SecurityID_29);
    Instrument_29.insert(SecurityID_29.getString());
    FIX::SecurityIDSource SecurityIDSource_29("STRING_5");
    noRelatedSym_0_0.set(SecurityIDSource_29);
    Instrument_29.insert(SecurityIDSource_29.getString());
    FIX::SecurityStatus SecurityStatus_29("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_29);
    Instrument_29.insert(SecurityStatus_29.getString());
    FIX::SecuritySubType SecuritySubType_30("STRING_615449372");
    noRelatedSym_0_0.set(SecuritySubType_30);
    Instrument_29.insert(SecuritySubType_30.getString());
    FIX::SecurityType SecurityType_31("STRING_MPT");
    noRelatedSym_0_0.set(SecurityType_31);
    Instrument_29.insert(SecurityType_31.getString());
    FIX::Seniority Seniority_29("STRING_SB");
    noRelatedSym_0_0.set(Seniority_29);
    Instrument_29.insert(Seniority_29.getString());
    FIX::SettlMethod SettlMethod_29('P');
    noRelatedSym_0_0.set(SettlMethod_29);
    Instrument_29.insert(SettlMethod_29.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_29("STRING_1503633052");
    noRelatedSym_0_0.set(SettleOnOpenFlag_29);
    Instrument_29.insert(SettleOnOpenFlag_29.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_29("STRING_1320480099");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_29);
    Instrument_29.insert(StateOrProvinceOfIssue_29.getString());
    FIX::StrikeCurrency StrikeCurrency_29("CAN");
    noRelatedSym_0_0.set(StrikeCurrency_29);
    Instrument_29.insert(StrikeCurrency_29.getString());
    FIX::StrikeMultiplier StrikeMultiplier_29;
    StrikeMultiplier_29.setString("2376244");
    noRelatedSym_0_0.set(StrikeMultiplier_29);
    Instrument_29.insert(StrikeMultiplier_29.getString());
    FIX::StrikePrice StrikePrice_29;
    StrikePrice_29.setString("10619104");
    noRelatedSym_0_0.set(StrikePrice_29);
    Instrument_29.insert(StrikePrice_29.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_29(3);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_29);
    Instrument_29.insert(StrikePriceBoundaryMethod_29.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_29;
    StrikePriceBoundaryPrecision_29.setString("23.500000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_29);
    Instrument_29.insert(StrikePriceBoundaryPrecision_29.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_29(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_29);
    Instrument_29.insert(StrikePriceDeterminationMethod_29.getString());
    FIX::StrikeValue StrikeValue_29;
    StrikeValue_29.setString("1679034");
    noRelatedSym_0_0.set(StrikeValue_29);
    Instrument_29.insert(StrikeValue_29.getString());
    FIX::Symbol Symbol_29("STRING_1730868623");
    noRelatedSym_0_0.set(Symbol_29);
    Instrument_29.insert(Symbol_29.getString());
    FIX::SymbolSfx SymbolSfx_29("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_29);
    Instrument_29.insert(SymbolSfx_29.getString());
    FIX::TimeUnit TimeUnit_29("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_29);
    Instrument_29.insert(TimeUnit_29.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_29(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_29);
    Instrument_29.insert(UnderlyingPriceDeterminationMethod_29.getString());
    FIX::UnitOfMeasure UnitOfMeasure_29("STRING_Bu");
    noRelatedSym_0_0.set(UnitOfMeasure_29);
    Instrument_29.insert(UnitOfMeasure_29.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_29;
    UnitOfMeasureQty_29.setString("13445254");
    noRelatedSym_0_0.set(UnitOfMeasureQty_29);
    Instrument_29.insert(UnitOfMeasureQty_29.getString());
    FIX::ValuationMethod ValuationMethod_29("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_29);
    Instrument_29.insert(ValuationMethod_29.getString());
    all_values.push_back(Instrument_29);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_57;
      FIX::ComplexEventCondition ComplexEventCondition_57(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventCondition_57.getString());
      FIX::ComplexEventPrice ComplexEventPrice_57;
      ComplexEventPrice_57.setString("9041499");
      noComplexEvents_0_1_0.set(ComplexEventPrice_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPrice_57.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_57(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceBoundaryMethod_57.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_57;
      ComplexEventPriceBoundaryPrecision_57.setString("75.680000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceBoundaryPrecision_57.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_57(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceTimeType_57.getString());
      FIX::ComplexEventType ComplexEventType_57(6);
      noComplexEvents_0_1_0.set(ComplexEventType_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventType_57.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_57;
      ComplexOptPayoutAmount_57.setString("11405685");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexOptPayoutAmount_57.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_57);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_122;
        FIX::ComplexEventEndDate ComplexEventEndDate_122(FIX::UTCTIMESTAMP(6, 6, 54, 11, 32014));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_122);
        ComplexEventDates_NoComplexEventDates_122.insert(ComplexEventEndDate_122.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_122(FIX::UTCTIMESTAMP(7, 31, 28, 14, 112004));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_122);
        ComplexEventDates_NoComplexEventDates_122.insert(ComplexEventStartDate_122.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_122);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_251;
          FIX::ComplexEventEndTime ComplexEventEndTime_251(FIX::UTCTIMEONLY(23, 55, 8));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_251);
          ComplexEventTimes_NoComplexEventTimes_251.insert(ComplexEventEndTime_251.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_251(FIX::UTCTIMEONLY(17, 8, 21));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_251);
          ComplexEventTimes_NoComplexEventTimes_251.insert(ComplexEventStartTime_251.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_251);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_123;
        FIX::ComplexEventEndDate ComplexEventEndDate_123(FIX::UTCTIMESTAMP(13, 24, 41, 14, 112007));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_123);
        ComplexEventDates_NoComplexEventDates_123.insert(ComplexEventEndDate_123.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_123(FIX::UTCTIMESTAMP(17, 37, 26, 0, 52016));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_123);
        ComplexEventDates_NoComplexEventDates_123.insert(ComplexEventStartDate_123.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_123);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_252;
          FIX::ComplexEventEndTime ComplexEventEndTime_252(FIX::UTCTIMEONLY(16, 49, 1));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_252);
          ComplexEventTimes_NoComplexEventTimes_252.insert(ComplexEventEndTime_252.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_252(FIX::UTCTIMEONLY(15, 33, 50));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_252);
          ComplexEventTimes_NoComplexEventTimes_252.insert(ComplexEventStartTime_252.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_252);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_124;
        FIX::ComplexEventEndDate ComplexEventEndDate_124(FIX::UTCTIMESTAMP(1, 37, 40, 6, 72010));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_124);
        ComplexEventDates_NoComplexEventDates_124.insert(ComplexEventEndDate_124.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_124(FIX::UTCTIMESTAMP(7, 54, 12, 8, 92004));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_124);
        ComplexEventDates_NoComplexEventDates_124.insert(ComplexEventStartDate_124.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_124);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_253;
          FIX::ComplexEventEndTime ComplexEventEndTime_253(FIX::UTCTIMEONLY(7, 36, 35));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_253);
          ComplexEventTimes_NoComplexEventTimes_253.insert(ComplexEventEndTime_253.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_253(FIX::UTCTIMEONLY(20, 51, 17));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_253);
          ComplexEventTimes_NoComplexEventTimes_253.insert(ComplexEventStartTime_253.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_253);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_254;
          FIX::ComplexEventEndTime ComplexEventEndTime_254(FIX::UTCTIMEONLY(7, 59, 17));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_254);
          ComplexEventTimes_NoComplexEventTimes_254.insert(ComplexEventEndTime_254.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_254(FIX::UTCTIMEONLY(6, 51, 55));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_254);
          ComplexEventTimes_NoComplexEventTimes_254.insert(ComplexEventStartTime_254.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_254);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_255;
          FIX::ComplexEventEndTime ComplexEventEndTime_255(FIX::UTCTIMEONLY(16, 33, 59));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_255);
          ComplexEventTimes_NoComplexEventTimes_255.insert(ComplexEventEndTime_255.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_255(FIX::UTCTIMEONLY(7, 40, 49));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_255);
          ComplexEventTimes_NoComplexEventTimes_255.insert(ComplexEventStartTime_255.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_255);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_58;
      FIX::ComplexEventCondition ComplexEventCondition_58(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventCondition_58.getString());
      FIX::ComplexEventPrice ComplexEventPrice_58;
      ComplexEventPrice_58.setString("6141793");
      noComplexEvents_0_1_1.set(ComplexEventPrice_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPrice_58.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_58(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceBoundaryMethod_58.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_58;
      ComplexEventPriceBoundaryPrecision_58.setString("82.140000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceBoundaryPrecision_58.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_58(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceTimeType_58.getString());
      FIX::ComplexEventType ComplexEventType_58(4);
      noComplexEvents_0_1_1.set(ComplexEventType_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventType_58.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_58;
      ComplexOptPayoutAmount_58.setString("12403425");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexOptPayoutAmount_58.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_58);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_125;
        FIX::ComplexEventEndDate ComplexEventEndDate_125(FIX::UTCTIMESTAMP(21, 57, 2, 1, 62012));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_125);
        ComplexEventDates_NoComplexEventDates_125.insert(ComplexEventEndDate_125.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_125(FIX::UTCTIMESTAMP(16, 11, 39, 2, 102004));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_125);
        ComplexEventDates_NoComplexEventDates_125.insert(ComplexEventStartDate_125.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_125);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_256;
          FIX::ComplexEventEndTime ComplexEventEndTime_256(FIX::UTCTIMEONLY(18, 26, 24));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_256);
          ComplexEventTimes_NoComplexEventTimes_256.insert(ComplexEventEndTime_256.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_256(FIX::UTCTIMEONLY(14, 56, 26));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_256);
          ComplexEventTimes_NoComplexEventTimes_256.insert(ComplexEventStartTime_256.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_256);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_257;
          FIX::ComplexEventEndTime ComplexEventEndTime_257(FIX::UTCTIMEONLY(10, 19, 27));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_257);
          ComplexEventTimes_NoComplexEventTimes_257.insert(ComplexEventEndTime_257.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_257(FIX::UTCTIMEONLY(11, 12, 50));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_257);
          ComplexEventTimes_NoComplexEventTimes_257.insert(ComplexEventStartTime_257.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_257);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_258;
          FIX::ComplexEventEndTime ComplexEventEndTime_258(FIX::UTCTIMEONLY(10, 48, 28));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_258);
          ComplexEventTimes_NoComplexEventTimes_258.insert(ComplexEventEndTime_258.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_258(FIX::UTCTIMEONLY(17, 40, 45));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_258);
          ComplexEventTimes_NoComplexEventTimes_258.insert(ComplexEventStartTime_258.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_258);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_126;
        FIX::ComplexEventEndDate ComplexEventEndDate_126(FIX::UTCTIMESTAMP(7, 25, 19, 5, 42005));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_126);
        ComplexEventDates_NoComplexEventDates_126.insert(ComplexEventEndDate_126.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_126(FIX::UTCTIMESTAMP(10, 31, 13, 2, 22009));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_126);
        ComplexEventDates_NoComplexEventDates_126.insert(ComplexEventStartDate_126.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_126);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_259;
          FIX::ComplexEventEndTime ComplexEventEndTime_259(FIX::UTCTIMEONLY(11, 28, 41));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_259);
          ComplexEventTimes_NoComplexEventTimes_259.insert(ComplexEventEndTime_259.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_259(FIX::UTCTIMEONLY(7, 53, 42));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_259);
          ComplexEventTimes_NoComplexEventTimes_259.insert(ComplexEventStartTime_259.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_259);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_260;
          FIX::ComplexEventEndTime ComplexEventEndTime_260(FIX::UTCTIMEONLY(19, 22, 29));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_260);
          ComplexEventTimes_NoComplexEventTimes_260.insert(ComplexEventEndTime_260.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_260(FIX::UTCTIMEONLY(15, 2, 36));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_260);
          ComplexEventTimes_NoComplexEventTimes_260.insert(ComplexEventStartTime_260.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_260);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_261;
          FIX::ComplexEventEndTime ComplexEventEndTime_261(FIX::UTCTIMEONLY(9, 53, 16));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_261);
          ComplexEventTimes_NoComplexEventTimes_261.insert(ComplexEventEndTime_261.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_261(FIX::UTCTIMEONLY(13, 21, 8));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_261);
          ComplexEventTimes_NoComplexEventTimes_261.insert(ComplexEventStartTime_261.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_261);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_59;
      FIX::ComplexEventCondition ComplexEventCondition_59(2);
      noComplexEvents_0_1_2.set(ComplexEventCondition_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventCondition_59.getString());
      FIX::ComplexEventPrice ComplexEventPrice_59;
      ComplexEventPrice_59.setString("18658955");
      noComplexEvents_0_1_2.set(ComplexEventPrice_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPrice_59.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_59(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceBoundaryMethod_59.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_59;
      ComplexEventPriceBoundaryPrecision_59.setString("78.690000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceBoundaryPrecision_59.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_59(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceTimeType_59.getString());
      FIX::ComplexEventType ComplexEventType_59(3);
      noComplexEvents_0_1_2.set(ComplexEventType_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventType_59.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_59;
      ComplexOptPayoutAmount_59.setString("15407078");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexOptPayoutAmount_59.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_59);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_127;
        FIX::ComplexEventEndDate ComplexEventEndDate_127(FIX::UTCTIMESTAMP(10, 29, 30, 17, 32016));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_127);
        ComplexEventDates_NoComplexEventDates_127.insert(ComplexEventEndDate_127.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_127(FIX::UTCTIMESTAMP(22, 26, 55, 21, 102003));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_127);
        ComplexEventDates_NoComplexEventDates_127.insert(ComplexEventStartDate_127.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_127);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_262;
          FIX::ComplexEventEndTime ComplexEventEndTime_262(FIX::UTCTIMEONLY(23, 39, 21));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_262);
          ComplexEventTimes_NoComplexEventTimes_262.insert(ComplexEventEndTime_262.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_262(FIX::UTCTIMEONLY(16, 34, 53));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_262);
          ComplexEventTimes_NoComplexEventTimes_262.insert(ComplexEventStartTime_262.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_262);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_263;
          FIX::ComplexEventEndTime ComplexEventEndTime_263(FIX::UTCTIMEONLY(23, 15, 4));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_263);
          ComplexEventTimes_NoComplexEventTimes_263.insert(ComplexEventEndTime_263.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_263(FIX::UTCTIMEONLY(18, 42, 17));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_263);
          ComplexEventTimes_NoComplexEventTimes_263.insert(ComplexEventStartTime_263.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_263);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_264;
          FIX::ComplexEventEndTime ComplexEventEndTime_264(FIX::UTCTIMEONLY(20, 38, 30));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_264);
          ComplexEventTimes_NoComplexEventTimes_264.insert(ComplexEventEndTime_264.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_264(FIX::UTCTIMEONLY(16, 26, 39));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_264);
          ComplexEventTimes_NoComplexEventTimes_264.insert(ComplexEventStartTime_264.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_264);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_62;
      FIX::EventDate EventDate_62("LOCALMKTDATE_769488172");
      noEvents_0_1_0.set(EventDate_62);
      EvntGrp_NoEvents_62.insert(EventDate_62.getString());
      FIX::EventPx EventPx_62;
      EventPx_62.setString("1153909");
      noEvents_0_1_0.set(EventPx_62);
      EvntGrp_NoEvents_62.insert(EventPx_62.getString());
      FIX::EventText EventText_62("STRING_441623203");
      noEvents_0_1_0.set(EventText_62);
      EvntGrp_NoEvents_62.insert(EventText_62.getString());
      FIX::EventTime EventTime_62(FIX::UTCTIMESTAMP(0, 37, 7, 15, 52014));
      noEvents_0_1_0.set(EventTime_62);
      EvntGrp_NoEvents_62.insert(EventTime_62.getString());
      FIX::EventType EventType_62(6);
      noEvents_0_1_0.set(EventType_62);
      EvntGrp_NoEvents_62.insert(EventType_62.getString());
      all_values.push_back(EvntGrp_NoEvents_62);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_63;
      FIX::EventDate EventDate_63("LOCALMKTDATE_1032972372");
      noEvents_0_1_1.set(EventDate_63);
      EvntGrp_NoEvents_63.insert(EventDate_63.getString());
      FIX::EventPx EventPx_63;
      EventPx_63.setString("15809856");
      noEvents_0_1_1.set(EventPx_63);
      EvntGrp_NoEvents_63.insert(EventPx_63.getString());
      FIX::EventText EventText_63("STRING_1833489218");
      noEvents_0_1_1.set(EventText_63);
      EvntGrp_NoEvents_63.insert(EventText_63.getString());
      FIX::EventTime EventTime_63(FIX::UTCTIMESTAMP(22, 45, 51, 27, 82008));
      noEvents_0_1_1.set(EventTime_63);
      EvntGrp_NoEvents_63.insert(EventTime_63.getString());
      FIX::EventType EventType_63(5);
      noEvents_0_1_1.set(EventType_63);
      EvntGrp_NoEvents_63.insert(EventType_63.getString());
      all_values.push_back(EvntGrp_NoEvents_63);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_64;
      FIX::EventDate EventDate_64("LOCALMKTDATE_735355028");
      noEvents_0_1_2.set(EventDate_64);
      EvntGrp_NoEvents_64.insert(EventDate_64.getString());
      FIX::EventPx EventPx_64;
      EventPx_64.setString("16148678");
      noEvents_0_1_2.set(EventPx_64);
      EvntGrp_NoEvents_64.insert(EventPx_64.getString());
      FIX::EventText EventText_64("STRING_634146922");
      noEvents_0_1_2.set(EventText_64);
      EvntGrp_NoEvents_64.insert(EventText_64.getString());
      FIX::EventTime EventTime_64(FIX::UTCTIMESTAMP(20, 14, 57, 23, 62007));
      noEvents_0_1_2.set(EventTime_64);
      EvntGrp_NoEvents_64.insert(EventTime_64.getString());
      FIX::EventType EventType_64(15);
      noEvents_0_1_2.set(EventType_64);
      EvntGrp_NoEvents_64.insert(EventType_64.getString());
      all_values.push_back(EvntGrp_NoEvents_64);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_54;
      FIX::InstrumentPartyID InstrumentPartyID_54("STRING_2028309951");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyID_54.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_54('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyIDSource_54.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_54(1685755973);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyRole_54.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_54);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109;
        FIX::InstrumentPartySubID InstrumentPartySubID_109("STRING_1349934430");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_109);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109.insert(InstrumentPartySubID_109.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_109(1633514161);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_109);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109.insert(InstrumentPartySubIDType_109.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110;
        FIX::InstrumentPartySubID InstrumentPartySubID_110("STRING_1145380210");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_110);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110.insert(InstrumentPartySubID_110.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_110(746916107);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_110);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110.insert(InstrumentPartySubIDType_110.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111;
        FIX::InstrumentPartySubID InstrumentPartySubID_111("STRING_519002885");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_111);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111.insert(InstrumentPartySubID_111.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_111(578882217);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_111);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111.insert(InstrumentPartySubIDType_111.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_55;
      FIX::InstrumentPartyID InstrumentPartyID_55("STRING_432921678");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyID_55.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_55('9');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyIDSource_55.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_55(989674855);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyRole_55.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_55);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112;
        FIX::InstrumentPartySubID InstrumentPartySubID_112("STRING_1792439024");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_112);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112.insert(InstrumentPartySubID_112.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_112(707708062);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_112);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112.insert(InstrumentPartySubIDType_112.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_62;
      FIX::SecurityAltID SecurityAltID_62("STRING_370191242");
      noSecurityAltID_0_1_0.set(SecurityAltID_62);
      SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltID_62.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_62("STRING_1149437946");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_62);
      SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltIDSource_62.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_62);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_58;
    FIX::SecurityXML SecurityXML_59("XMLDATA_1530469751");
    noRelatedSym_0_0.set(SecurityXML_59);
    FIX::SecurityXMLLen SecurityXMLLen_29(1985059080);
    noRelatedSym_0_0.set(SecurityXMLLen_29);
    FIX::SecurityXMLSchema SecurityXMLSchema_29("STRING_1783584868");
    noRelatedSym_0_0.set(SecurityXMLSchema_29);
    SecurityXML_58.insert(SecurityXMLSchema_29.getString());
    all_values.push_back(SecurityXML_58);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_46;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_46("DATA_540669708");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingIssuer_46.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_46(632201375);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingIssuerLen_46.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_46("DATA_1955635958");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingSecurityDesc_46.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_46(1100331016);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingSecurityDescLen_46.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_46;
      UnderlyingAdjustedQuantity_46.setString("2667841");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_46);
      UnderlyingInstrument_46.insert(UnderlyingAdjustedQuantity_46.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_46;
      UnderlyingAllocationPercent_46.setString("91.600000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_46);
      UnderlyingInstrument_46.insert(UnderlyingAllocationPercent_46.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_46;
      UnderlyingAttachmentPoint_46.setString("32.700000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_46);
      UnderlyingInstrument_46.insert(UnderlyingAttachmentPoint_46.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_46("STRING_342990084");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_46);
      UnderlyingInstrument_46.insert(UnderlyingCFICode_46.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_46("STRING_717665463");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_46);
      UnderlyingInstrument_46.insert(UnderlyingCPProgram_46.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_46("STRING_1410600261");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_46);
      UnderlyingInstrument_46.insert(UnderlyingCPRegType_46.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_46;
      UnderlyingCapValue_46.setString("20287460");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_46);
      UnderlyingInstrument_46.insert(UnderlyingCapValue_46.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_46;
      UnderlyingCashAmount_46.setString("15409387");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_46);
      UnderlyingInstrument_46.insert(UnderlyingCashAmount_46.getString());
      FIX::UnderlyingCashType UnderlyingCashType_46("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_46);
      UnderlyingInstrument_46.insert(UnderlyingCashType_46.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_46;
      UnderlyingContractMultiplier_46.setString("15147765");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_46);
      UnderlyingInstrument_46.insert(UnderlyingContractMultiplier_46.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_46(538835335);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_46);
      UnderlyingInstrument_46.insert(UnderlyingContractMultiplierUnit_46.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_46("COUNTRY_1359967151");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingCountryOfIssue_46.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_46("LOCALMKTDATE_2033779457");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_46);
      UnderlyingInstrument_46.insert(UnderlyingCouponPaymentDate_46.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_46;
      UnderlyingCouponRate_46.setString("75.530000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_46);
      UnderlyingInstrument_46.insert(UnderlyingCouponRate_46.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_46("STRING_1792888829");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_46);
      UnderlyingInstrument_46.insert(UnderlyingCreditRating_46.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_46("USD");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_46);
      UnderlyingInstrument_46.insert(UnderlyingCurrency_46.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_46;
      UnderlyingCurrentValue_46.setString("17286262");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_46);
      UnderlyingInstrument_46.insert(UnderlyingCurrentValue_46.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_46;
      UnderlyingDetachmentPoint_46.setString("76.170000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_46);
      UnderlyingInstrument_46.insert(UnderlyingDetachmentPoint_46.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_46;
      UnderlyingDirtyPrice_46.setString("6676168");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_46);
      UnderlyingInstrument_46.insert(UnderlyingDirtyPrice_46.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_46;
      UnderlyingEndPrice_46.setString("3762573");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_46);
      UnderlyingInstrument_46.insert(UnderlyingEndPrice_46.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_46;
      UnderlyingEndValue_46.setString("8253988");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_46);
      UnderlyingInstrument_46.insert(UnderlyingEndValue_46.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_46(1817054769);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_46);
      UnderlyingInstrument_46.insert(UnderlyingExerciseStyle_46.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_46;
      UnderlyingFXRate_46.setString("19067270");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_46);
      UnderlyingInstrument_46.insert(UnderlyingFXRate_46.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_46('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_46);
      UnderlyingInstrument_46.insert(UnderlyingFXRateCalc_46.getString());
      FIX::UnderlyingFactor UnderlyingFactor_46;
      UnderlyingFactor_46.setString("14531559");
      noUnderlyings_0_1_0.set(UnderlyingFactor_46);
      UnderlyingInstrument_46.insert(UnderlyingFactor_46.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_46(1455680704);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_46);
      UnderlyingInstrument_46.insert(UnderlyingFlowScheduleType_46.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_46("STRING_1203644000");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_46);
      UnderlyingInstrument_46.insert(UnderlyingInstrRegistry_46.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_46("LOCALMKTDATE_2085357365");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_46);
      UnderlyingInstrument_46.insert(UnderlyingIssueDate_46.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_46("STRING_1263833015");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_46);
      UnderlyingInstrument_46.insert(UnderlyingIssuer_46.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_46("STRING_156491368");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingLocaleOfIssue_46.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_46("LOCALMKTDATE_204657845");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityDate_46.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_46("MONTHYEAR_2100672175");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityMonthYear_46.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_46("TZTIMEONLY_1931874639");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityTime_46.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_46;
      UnderlyingNotionalPercentageOutstanding_46.setString("79.290000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_46);
      UnderlyingInstrument_46.insert(UnderlyingNotionalPercentageOutstanding_46.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_46('6');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_46);
      UnderlyingInstrument_46.insert(UnderlyingOptAttribute_46.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_46;
      UnderlyingOriginalNotionalPercentageOutstanding_46.setString("12.520000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_46);
      UnderlyingInstrument_46.insert(UnderlyingOriginalNotionalPercentageOutstanding_46.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_46("STRING_428910339");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_46);
      UnderlyingInstrument_46.insert(UnderlyingPriceUnitOfMeasure_46.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_46;
      UnderlyingPriceUnitOfMeasureQty_46.setString("643091");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_46);
      UnderlyingInstrument_46.insert(UnderlyingPriceUnitOfMeasureQty_46.getString());
      FIX::UnderlyingProduct UnderlyingProduct_46(1808042296);
      noUnderlyings_0_1_0.set(UnderlyingProduct_46);
      UnderlyingInstrument_46.insert(UnderlyingProduct_46.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_46(1943686911);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_46);
      UnderlyingInstrument_46.insert(UnderlyingPutOrCall_46.getString());
      FIX::UnderlyingPx UnderlyingPx_46;
      UnderlyingPx_46.setString("6031444");
      noUnderlyings_0_1_0.set(UnderlyingPx_46);
      UnderlyingInstrument_46.insert(UnderlyingPx_46.getString());
      FIX::UnderlyingQty UnderlyingQty_46;
      UnderlyingQty_46.setString("10205258");
      noUnderlyings_0_1_0.set(UnderlyingQty_46);
      UnderlyingInstrument_46.insert(UnderlyingQty_46.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_46("LOCALMKTDATE_1829982720");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_46);
      UnderlyingInstrument_46.insert(UnderlyingRedemptionDate_46.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_46("STRING_1720862003");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_46);
      UnderlyingInstrument_46.insert(UnderlyingRepoCollateralSecurityType_46.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_46;
      UnderlyingRepurchaseRate_46.setString("9.810000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_46);
      UnderlyingInstrument_46.insert(UnderlyingRepurchaseRate_46.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_46(492751313);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_46);
      UnderlyingInstrument_46.insert(UnderlyingRepurchaseTerm_46.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_46("STRING_1680770764");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_46);
      UnderlyingInstrument_46.insert(UnderlyingRestructuringType_46.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_46("STRING_247073578");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityDesc_46.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_46("EXCHANGE_947958931");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityExchange_46.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_46("STRING_200903939");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityID_46.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_46("STRING_623330898");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityIDSource_46.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_46("STRING_1773357790");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_46);
      UnderlyingInstrument_46.insert(UnderlyingSecuritySubType_46.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_46("STRING_2017958708");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityType_46.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_46("STRING_382574321");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_46);
      UnderlyingInstrument_46.insert(UnderlyingSeniority_46.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_46("STRING_288848434");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_46);
      UnderlyingInstrument_46.insert(UnderlyingSettlMethod_46.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_46(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_46);
      UnderlyingInstrument_46.insert(UnderlyingSettlementType_46.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_46;
      UnderlyingStartValue_46.setString("18382550");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_46);
      UnderlyingInstrument_46.insert(UnderlyingStartValue_46.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_46("STRING_1492492435");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingStateOrProvinceOfIssue_46.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_46("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_46);
      UnderlyingInstrument_46.insert(UnderlyingStrikeCurrency_46.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_46;
      UnderlyingStrikePrice_46.setString("16489838");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_46);
      UnderlyingInstrument_46.insert(UnderlyingStrikePrice_46.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_46("STRING_1466162612");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_46);
      UnderlyingInstrument_46.insert(UnderlyingSymbol_46.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_46("STRING_907792920");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_46);
      UnderlyingInstrument_46.insert(UnderlyingSymbolSfx_46.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_46("STRING_1433374794");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_46);
      UnderlyingInstrument_46.insert(UnderlyingTimeUnit_46.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_46("STRING_2013810542");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_46);
      UnderlyingInstrument_46.insert(UnderlyingUnitOfMeasure_46.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_46;
      UnderlyingUnitOfMeasureQty_46.setString("15786469");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_46);
      UnderlyingInstrument_46.insert(UnderlyingUnitOfMeasureQty_46.getString());
      all_values.push_back(UnderlyingInstrument_46);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_93;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_93("STRING_295237233");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_93);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_93.insert(UnderlyingSecurityAltID_93.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_93("STRING_1642956025");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_93);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_93.insert(UnderlyingSecurityAltIDSource_93.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_93);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_90;
        FIX::UnderlyingStipType UnderlyingStipType_90("STRING_91440496");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_90);
        UnderlyingStipulations_NoUnderlyingStips_90.insert(UnderlyingStipType_90.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_90("STRING_98616827");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_90);
        UnderlyingStipulations_NoUnderlyingStips_90.insert(UnderlyingStipValue_90.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_90);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_91;
        FIX::UnderlyingStipType UnderlyingStipType_91("STRING_1161966847");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_91);
        UnderlyingStipulations_NoUnderlyingStips_91.insert(UnderlyingStipType_91.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_91("STRING_1921423216");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_91);
        UnderlyingStipulations_NoUnderlyingStips_91.insert(UnderlyingStipValue_91.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_91);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_92;
        FIX::UnderlyingStipType UnderlyingStipType_92("STRING_1819478831");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_92);
        UnderlyingStipulations_NoUnderlyingStips_92.insert(UnderlyingStipType_92.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_92("STRING_1827897829");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_92);
        UnderlyingStipulations_NoUnderlyingStips_92.insert(UnderlyingStipValue_92.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_92);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_90;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_90("STRING_1352765947");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyID_90.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_90('2');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyIDSource_90.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_90(1214649813);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyRole_90.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_90);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_179("STRING_550818658");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_179);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179.insert(UnderlyingInstrumentPartySubID_179.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_179(840523955);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_179);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179.insert(UnderlyingInstrumentPartySubIDType_179.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_91;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_91("STRING_1424144946");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyID_91.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_91('9');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyIDSource_91.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_91(1129372390);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyRole_91.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_91);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_180("STRING_624164357");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_180);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180.insert(UnderlyingInstrumentPartySubID_180.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_180(474381177);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_180);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180.insert(UnderlyingInstrumentPartySubIDType_180.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_181("STRING_1861797116");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_181);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181.insert(UnderlyingInstrumentPartySubID_181.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_181(1578768750);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_181);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181.insert(UnderlyingInstrumentPartySubIDType_181.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_182("STRING_2123364980");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_182);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182.insert(UnderlyingInstrumentPartySubID_182.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_182(1180476081);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_182);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182.insert(UnderlyingInstrumentPartySubIDType_182.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_92;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_92("STRING_339078022");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyID_92.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_92('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyIDSource_92.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_92(1046802975);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyRole_92.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_92);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_183("STRING_1890138526");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_183);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183.insert(UnderlyingInstrumentPartySubID_183.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_183(1342040208);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_183);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183.insert(UnderlyingInstrumentPartySubIDType_183.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_47;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_47("DATA_1413197309");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingIssuer_47.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_47(2031579573);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingIssuerLen_47.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_47("DATA_1433480705");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingSecurityDesc_47.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_47(1511814137);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingSecurityDescLen_47.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_47;
      UnderlyingAdjustedQuantity_47.setString("10460627");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_47);
      UnderlyingInstrument_47.insert(UnderlyingAdjustedQuantity_47.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_47;
      UnderlyingAllocationPercent_47.setString("2.730000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_47);
      UnderlyingInstrument_47.insert(UnderlyingAllocationPercent_47.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_47;
      UnderlyingAttachmentPoint_47.setString("93.200000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_47);
      UnderlyingInstrument_47.insert(UnderlyingAttachmentPoint_47.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_47("STRING_726476954");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_47);
      UnderlyingInstrument_47.insert(UnderlyingCFICode_47.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_47("STRING_1474111155");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_47);
      UnderlyingInstrument_47.insert(UnderlyingCPProgram_47.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_47("STRING_389091619");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_47);
      UnderlyingInstrument_47.insert(UnderlyingCPRegType_47.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_47;
      UnderlyingCapValue_47.setString("6539647");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_47);
      UnderlyingInstrument_47.insert(UnderlyingCapValue_47.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_47;
      UnderlyingCashAmount_47.setString("5412773");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_47);
      UnderlyingInstrument_47.insert(UnderlyingCashAmount_47.getString());
      FIX::UnderlyingCashType UnderlyingCashType_47("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_47);
      UnderlyingInstrument_47.insert(UnderlyingCashType_47.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_47;
      UnderlyingContractMultiplier_47.setString("12047833");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_47);
      UnderlyingInstrument_47.insert(UnderlyingContractMultiplier_47.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_47(1381801276);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_47);
      UnderlyingInstrument_47.insert(UnderlyingContractMultiplierUnit_47.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_47("COUNTRY_1219422803");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingCountryOfIssue_47.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_47("LOCALMKTDATE_2138176351");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_47);
      UnderlyingInstrument_47.insert(UnderlyingCouponPaymentDate_47.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_47;
      UnderlyingCouponRate_47.setString("0.180000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_47);
      UnderlyingInstrument_47.insert(UnderlyingCouponRate_47.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_47("STRING_1819715152");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_47);
      UnderlyingInstrument_47.insert(UnderlyingCreditRating_47.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_47("CHF");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_47);
      UnderlyingInstrument_47.insert(UnderlyingCurrency_47.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_47;
      UnderlyingCurrentValue_47.setString("15340286");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_47);
      UnderlyingInstrument_47.insert(UnderlyingCurrentValue_47.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_47;
      UnderlyingDetachmentPoint_47.setString("21.630000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_47);
      UnderlyingInstrument_47.insert(UnderlyingDetachmentPoint_47.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_47;
      UnderlyingDirtyPrice_47.setString("8139525");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_47);
      UnderlyingInstrument_47.insert(UnderlyingDirtyPrice_47.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_47;
      UnderlyingEndPrice_47.setString("5670210");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_47);
      UnderlyingInstrument_47.insert(UnderlyingEndPrice_47.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_47;
      UnderlyingEndValue_47.setString("3852201");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_47);
      UnderlyingInstrument_47.insert(UnderlyingEndValue_47.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_47(75725006);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_47);
      UnderlyingInstrument_47.insert(UnderlyingExerciseStyle_47.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_47;
      UnderlyingFXRate_47.setString("16138240");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_47);
      UnderlyingInstrument_47.insert(UnderlyingFXRate_47.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_47('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_47);
      UnderlyingInstrument_47.insert(UnderlyingFXRateCalc_47.getString());
      FIX::UnderlyingFactor UnderlyingFactor_47;
      UnderlyingFactor_47.setString("19658635");
      noUnderlyings_0_1_1.set(UnderlyingFactor_47);
      UnderlyingInstrument_47.insert(UnderlyingFactor_47.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_47(808380589);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_47);
      UnderlyingInstrument_47.insert(UnderlyingFlowScheduleType_47.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_47("STRING_1568658779");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_47);
      UnderlyingInstrument_47.insert(UnderlyingInstrRegistry_47.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_47("LOCALMKTDATE_1849959458");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_47);
      UnderlyingInstrument_47.insert(UnderlyingIssueDate_47.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_47("STRING_94377646");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_47);
      UnderlyingInstrument_47.insert(UnderlyingIssuer_47.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_47("STRING_932989268");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingLocaleOfIssue_47.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_47("LOCALMKTDATE_748538583");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityDate_47.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_47("MONTHYEAR_1301797920");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityMonthYear_47.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_47("TZTIMEONLY_2116798588");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityTime_47.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_47;
      UnderlyingNotionalPercentageOutstanding_47.setString("55.370000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_47);
      UnderlyingInstrument_47.insert(UnderlyingNotionalPercentageOutstanding_47.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_47('6');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_47);
      UnderlyingInstrument_47.insert(UnderlyingOptAttribute_47.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_47;
      UnderlyingOriginalNotionalPercentageOutstanding_47.setString("65.590000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_47);
      UnderlyingInstrument_47.insert(UnderlyingOriginalNotionalPercentageOutstanding_47.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_47("STRING_2128980250");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_47);
      UnderlyingInstrument_47.insert(UnderlyingPriceUnitOfMeasure_47.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_47;
      UnderlyingPriceUnitOfMeasureQty_47.setString("11697027");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_47);
      UnderlyingInstrument_47.insert(UnderlyingPriceUnitOfMeasureQty_47.getString());
      FIX::UnderlyingProduct UnderlyingProduct_47(153684416);
      noUnderlyings_0_1_1.set(UnderlyingProduct_47);
      UnderlyingInstrument_47.insert(UnderlyingProduct_47.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_47(1186279974);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_47);
      UnderlyingInstrument_47.insert(UnderlyingPutOrCall_47.getString());
      FIX::UnderlyingPx UnderlyingPx_47;
      UnderlyingPx_47.setString("4040203");
      noUnderlyings_0_1_1.set(UnderlyingPx_47);
      UnderlyingInstrument_47.insert(UnderlyingPx_47.getString());
      FIX::UnderlyingQty UnderlyingQty_47;
      UnderlyingQty_47.setString("13731072");
      noUnderlyings_0_1_1.set(UnderlyingQty_47);
      UnderlyingInstrument_47.insert(UnderlyingQty_47.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_47("LOCALMKTDATE_1176972677");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_47);
      UnderlyingInstrument_47.insert(UnderlyingRedemptionDate_47.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_47("STRING_767710394");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_47);
      UnderlyingInstrument_47.insert(UnderlyingRepoCollateralSecurityType_47.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_47;
      UnderlyingRepurchaseRate_47.setString("87.240000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_47);
      UnderlyingInstrument_47.insert(UnderlyingRepurchaseRate_47.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_47(1791829737);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_47);
      UnderlyingInstrument_47.insert(UnderlyingRepurchaseTerm_47.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_47("STRING_1605781589");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_47);
      UnderlyingInstrument_47.insert(UnderlyingRestructuringType_47.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_47("STRING_431883697");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityDesc_47.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_47("EXCHANGE_1837971900");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityExchange_47.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_47("STRING_272250468");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityID_47.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_47("STRING_998904751");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityIDSource_47.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_47("STRING_75708438");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_47);
      UnderlyingInstrument_47.insert(UnderlyingSecuritySubType_47.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_47("STRING_347975475");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityType_47.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_47("STRING_465245132");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_47);
      UnderlyingInstrument_47.insert(UnderlyingSeniority_47.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_47("STRING_231169908");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_47);
      UnderlyingInstrument_47.insert(UnderlyingSettlMethod_47.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_47(4);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_47);
      UnderlyingInstrument_47.insert(UnderlyingSettlementType_47.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_47;
      UnderlyingStartValue_47.setString("12736257");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_47);
      UnderlyingInstrument_47.insert(UnderlyingStartValue_47.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_47("STRING_1799828687");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingStateOrProvinceOfIssue_47.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_47("GBP");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_47);
      UnderlyingInstrument_47.insert(UnderlyingStrikeCurrency_47.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_47;
      UnderlyingStrikePrice_47.setString("5853343");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_47);
      UnderlyingInstrument_47.insert(UnderlyingStrikePrice_47.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_47("STRING_617369752");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_47);
      UnderlyingInstrument_47.insert(UnderlyingSymbol_47.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_47("STRING_522317640");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_47);
      UnderlyingInstrument_47.insert(UnderlyingSymbolSfx_47.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_47("STRING_554649248");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_47);
      UnderlyingInstrument_47.insert(UnderlyingTimeUnit_47.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_47("STRING_2092385289");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_47);
      UnderlyingInstrument_47.insert(UnderlyingUnitOfMeasure_47.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_47;
      UnderlyingUnitOfMeasureQty_47.setString("11507430");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_47);
      UnderlyingInstrument_47.insert(UnderlyingUnitOfMeasureQty_47.getString());
      all_values.push_back(UnderlyingInstrument_47);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_94;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_94("STRING_2073881892");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_94);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_94.insert(UnderlyingSecurityAltID_94.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_94("STRING_172962168");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_94);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_94.insert(UnderlyingSecurityAltIDSource_94.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_94);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_93;
        FIX::UnderlyingStipType UnderlyingStipType_93("STRING_1112678218");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_93);
        UnderlyingStipulations_NoUnderlyingStips_93.insert(UnderlyingStipType_93.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_93("STRING_576982544");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_93);
        UnderlyingStipulations_NoUnderlyingStips_93.insert(UnderlyingStipValue_93.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_93);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_94;
        FIX::UnderlyingStipType UnderlyingStipType_94("STRING_292363796");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_94);
        UnderlyingStipulations_NoUnderlyingStips_94.insert(UnderlyingStipType_94.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_94("STRING_142167247");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_94);
        UnderlyingStipulations_NoUnderlyingStips_94.insert(UnderlyingStipValue_94.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_94);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_95;
        FIX::UnderlyingStipType UnderlyingStipType_95("STRING_1344692938");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipType_95);
        UnderlyingStipulations_NoUnderlyingStips_95.insert(UnderlyingStipType_95.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_95("STRING_1337702521");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipValue_95);
        UnderlyingStipulations_NoUnderlyingStips_95.insert(UnderlyingStipValue_95.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_95);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_93;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_93("STRING_802990879");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyID_93.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_93('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyIDSource_93.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_93(1624485237);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyRole_93.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_93);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_184("STRING_621007322");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_184);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184.insert(UnderlyingInstrumentPartySubID_184.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_184(1700193675);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_184);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184.insert(UnderlyingInstrumentPartySubIDType_184.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_185("STRING_1423216822");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_185);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185.insert(UnderlyingInstrumentPartySubID_185.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_185(1086252454);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_185);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185.insert(UnderlyingInstrumentPartySubIDType_185.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_94;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_94("STRING_1931363583");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyID_94.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_94('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyIDSource_94.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_94(212394528);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyRole_94.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_94);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_186("STRING_1458403351");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_186);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186.insert(UnderlyingInstrumentPartySubID_186.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_186(1580397897);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_186);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186.insert(UnderlyingInstrumentPartySubIDType_186.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_48;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_48("DATA_21559282");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingIssuer_48.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_48(2075773104);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingIssuerLen_48.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_48("DATA_2102715537");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingSecurityDesc_48.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_48(576208531);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingSecurityDescLen_48.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_48;
      UnderlyingAdjustedQuantity_48.setString("20206747");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_48);
      UnderlyingInstrument_48.insert(UnderlyingAdjustedQuantity_48.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_48;
      UnderlyingAllocationPercent_48.setString("49.570000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_48);
      UnderlyingInstrument_48.insert(UnderlyingAllocationPercent_48.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_48;
      UnderlyingAttachmentPoint_48.setString("43.390000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_48);
      UnderlyingInstrument_48.insert(UnderlyingAttachmentPoint_48.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_48("STRING_1947072989");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_48);
      UnderlyingInstrument_48.insert(UnderlyingCFICode_48.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_48("STRING_1278937125");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_48);
      UnderlyingInstrument_48.insert(UnderlyingCPProgram_48.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_48("STRING_408520915");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_48);
      UnderlyingInstrument_48.insert(UnderlyingCPRegType_48.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_48;
      UnderlyingCapValue_48.setString("9122675");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_48);
      UnderlyingInstrument_48.insert(UnderlyingCapValue_48.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_48;
      UnderlyingCashAmount_48.setString("18559196");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_48);
      UnderlyingInstrument_48.insert(UnderlyingCashAmount_48.getString());
      FIX::UnderlyingCashType UnderlyingCashType_48("STRING_FIXED");
      noUnderlyings_0_1_2.set(UnderlyingCashType_48);
      UnderlyingInstrument_48.insert(UnderlyingCashType_48.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_48;
      UnderlyingContractMultiplier_48.setString("10544348");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_48);
      UnderlyingInstrument_48.insert(UnderlyingContractMultiplier_48.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_48(1053128959);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_48);
      UnderlyingInstrument_48.insert(UnderlyingContractMultiplierUnit_48.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_48("COUNTRY_2038587233");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingCountryOfIssue_48.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_48("LOCALMKTDATE_840948143");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_48);
      UnderlyingInstrument_48.insert(UnderlyingCouponPaymentDate_48.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_48;
      UnderlyingCouponRate_48.setString("98.380000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_48);
      UnderlyingInstrument_48.insert(UnderlyingCouponRate_48.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_48("STRING_1660689803");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_48);
      UnderlyingInstrument_48.insert(UnderlyingCreditRating_48.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_48("GBP");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_48);
      UnderlyingInstrument_48.insert(UnderlyingCurrency_48.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_48;
      UnderlyingCurrentValue_48.setString("1342134");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_48);
      UnderlyingInstrument_48.insert(UnderlyingCurrentValue_48.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_48;
      UnderlyingDetachmentPoint_48.setString("34.070000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_48);
      UnderlyingInstrument_48.insert(UnderlyingDetachmentPoint_48.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_48;
      UnderlyingDirtyPrice_48.setString("596107");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_48);
      UnderlyingInstrument_48.insert(UnderlyingDirtyPrice_48.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_48;
      UnderlyingEndPrice_48.setString("12204659");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_48);
      UnderlyingInstrument_48.insert(UnderlyingEndPrice_48.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_48;
      UnderlyingEndValue_48.setString("18020233");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_48);
      UnderlyingInstrument_48.insert(UnderlyingEndValue_48.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_48(1649182894);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_48);
      UnderlyingInstrument_48.insert(UnderlyingExerciseStyle_48.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_48;
      UnderlyingFXRate_48.setString("14328604");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_48);
      UnderlyingInstrument_48.insert(UnderlyingFXRate_48.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_48('D');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_48);
      UnderlyingInstrument_48.insert(UnderlyingFXRateCalc_48.getString());
      FIX::UnderlyingFactor UnderlyingFactor_48;
      UnderlyingFactor_48.setString("9601025");
      noUnderlyings_0_1_2.set(UnderlyingFactor_48);
      UnderlyingInstrument_48.insert(UnderlyingFactor_48.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_48(865774709);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_48);
      UnderlyingInstrument_48.insert(UnderlyingFlowScheduleType_48.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_48("STRING_1259807599");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_48);
      UnderlyingInstrument_48.insert(UnderlyingInstrRegistry_48.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_48("LOCALMKTDATE_888392054");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_48);
      UnderlyingInstrument_48.insert(UnderlyingIssueDate_48.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_48("STRING_821006599");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_48);
      UnderlyingInstrument_48.insert(UnderlyingIssuer_48.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_48("STRING_1836016130");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingLocaleOfIssue_48.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_48("LOCALMKTDATE_761583151");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityDate_48.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_48("MONTHYEAR_1926981556");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityMonthYear_48.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_48("TZTIMEONLY_1177796821");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityTime_48.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_48;
      UnderlyingNotionalPercentageOutstanding_48.setString("24.930000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_48);
      UnderlyingInstrument_48.insert(UnderlyingNotionalPercentageOutstanding_48.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_48('1');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_48);
      UnderlyingInstrument_48.insert(UnderlyingOptAttribute_48.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_48;
      UnderlyingOriginalNotionalPercentageOutstanding_48.setString("77.360000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_48);
      UnderlyingInstrument_48.insert(UnderlyingOriginalNotionalPercentageOutstanding_48.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_48("STRING_1473440052");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_48);
      UnderlyingInstrument_48.insert(UnderlyingPriceUnitOfMeasure_48.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_48;
      UnderlyingPriceUnitOfMeasureQty_48.setString("7668710");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_48);
      UnderlyingInstrument_48.insert(UnderlyingPriceUnitOfMeasureQty_48.getString());
      FIX::UnderlyingProduct UnderlyingProduct_48(139718800);
      noUnderlyings_0_1_2.set(UnderlyingProduct_48);
      UnderlyingInstrument_48.insert(UnderlyingProduct_48.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_48(380391211);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_48);
      UnderlyingInstrument_48.insert(UnderlyingPutOrCall_48.getString());
      FIX::UnderlyingPx UnderlyingPx_48;
      UnderlyingPx_48.setString("18200000");
      noUnderlyings_0_1_2.set(UnderlyingPx_48);
      UnderlyingInstrument_48.insert(UnderlyingPx_48.getString());
      FIX::UnderlyingQty UnderlyingQty_48;
      UnderlyingQty_48.setString("308223");
      noUnderlyings_0_1_2.set(UnderlyingQty_48);
      UnderlyingInstrument_48.insert(UnderlyingQty_48.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_48("LOCALMKTDATE_1221339354");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_48);
      UnderlyingInstrument_48.insert(UnderlyingRedemptionDate_48.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_48("STRING_1528636205");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_48);
      UnderlyingInstrument_48.insert(UnderlyingRepoCollateralSecurityType_48.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_48;
      UnderlyingRepurchaseRate_48.setString("21.890000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_48);
      UnderlyingInstrument_48.insert(UnderlyingRepurchaseRate_48.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_48(1539289086);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_48);
      UnderlyingInstrument_48.insert(UnderlyingRepurchaseTerm_48.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_48("STRING_165030095");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_48);
      UnderlyingInstrument_48.insert(UnderlyingRestructuringType_48.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_48("STRING_1825725666");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityDesc_48.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_48("EXCHANGE_1409948845");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityExchange_48.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_48("STRING_224640808");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityID_48.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_48("STRING_898707950");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityIDSource_48.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_48("STRING_1064488539");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_48);
      UnderlyingInstrument_48.insert(UnderlyingSecuritySubType_48.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_48("STRING_1873823702");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityType_48.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_48("STRING_184084763");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_48);
      UnderlyingInstrument_48.insert(UnderlyingSeniority_48.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_48("STRING_155253207");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_48);
      UnderlyingInstrument_48.insert(UnderlyingSettlMethod_48.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_48(4);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_48);
      UnderlyingInstrument_48.insert(UnderlyingSettlementType_48.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_48;
      UnderlyingStartValue_48.setString("10498594");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_48);
      UnderlyingInstrument_48.insert(UnderlyingStartValue_48.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_48("STRING_1415060806");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingStateOrProvinceOfIssue_48.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_48("CAN");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_48);
      UnderlyingInstrument_48.insert(UnderlyingStrikeCurrency_48.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_48;
      UnderlyingStrikePrice_48.setString("11035932");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_48);
      UnderlyingInstrument_48.insert(UnderlyingStrikePrice_48.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_48("STRING_188934210");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_48);
      UnderlyingInstrument_48.insert(UnderlyingSymbol_48.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_48("STRING_1650363980");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_48);
      UnderlyingInstrument_48.insert(UnderlyingSymbolSfx_48.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_48("STRING_133906461");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_48);
      UnderlyingInstrument_48.insert(UnderlyingTimeUnit_48.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_48("STRING_750106703");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_48);
      UnderlyingInstrument_48.insert(UnderlyingUnitOfMeasure_48.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_48;
      UnderlyingUnitOfMeasureQty_48.setString("5613153");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_48);
      UnderlyingInstrument_48.insert(UnderlyingUnitOfMeasureQty_48.getString());
      all_values.push_back(UnderlyingInstrument_48);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_95;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_95("STRING_76063107");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_95);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_95.insert(UnderlyingSecurityAltID_95.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_95("STRING_1328186421");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_95);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_95.insert(UnderlyingSecurityAltIDSource_95.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_95);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_96;
        FIX::UnderlyingStipType UnderlyingStipType_96("STRING_456454318");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_96);
        UnderlyingStipulations_NoUnderlyingStips_96.insert(UnderlyingStipType_96.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_96("STRING_1000702788");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_96);
        UnderlyingStipulations_NoUnderlyingStips_96.insert(UnderlyingStipValue_96.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_96);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_97;
        FIX::UnderlyingStipType UnderlyingStipType_97("STRING_1890765384");
        noUnderlyingStips_0_2_2_1.set(UnderlyingStipType_97);
        UnderlyingStipulations_NoUnderlyingStips_97.insert(UnderlyingStipType_97.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_97("STRING_1677793672");
        noUnderlyingStips_0_2_2_1.set(UnderlyingStipValue_97);
        UnderlyingStipulations_NoUnderlyingStips_97.insert(UnderlyingStipValue_97.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_97);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_95;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_95("STRING_1434793925");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_95);
        UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyID_95.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_95('1');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_95);
        UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyIDSource_95.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_95(546885441);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_95);
        UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyRole_95.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_95);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_187("STRING_332064307");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_187);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187.insert(UnderlyingInstrumentPartySubID_187.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_187(771526249);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_187);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187.insert(UnderlyingInstrumentPartySubIDType_187.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_96;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_96("STRING_2011743894");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_96);
        UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyID_96.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_96('1');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_96);
        UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyIDSource_96.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_96(497866304);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_96);
        UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyRole_96.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_96);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_188("STRING_1551806054");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_188);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188.insert(UnderlyingInstrumentPartySubID_188.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_188(1184308956);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_188);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188.insert(UnderlyingInstrumentPartySubIDType_188.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_1;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_1;
    FIX::Currency Currency_25("JPY");
    noRelatedSym_0_1.set(Currency_25);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(Currency_25.getString());
    FIX::MDEntrySize MDEntrySize_2;
    MDEntrySize_2.setString("6116600");
    noRelatedSym_0_1.set(MDEntrySize_2);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(MDEntrySize_2.getString());
    FIX::MDStreamID MDStreamID_2("STRING_821586905");
    noRelatedSym_0_1.set(MDStreamID_2);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(MDStreamID_2.getString());
    FIX::QuoteType QuoteType_1(1);
    noRelatedSym_0_1.set(QuoteType_1);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(QuoteType_1.getString());
    FIX::SettlDate SettlDate_17("LOCALMKTDATE_800594225");
    noRelatedSym_0_1.set(SettlDate_17);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(SettlDate_17.getString());
    FIX::SettlType SettlType_11("STRING_5");
    noRelatedSym_0_1.set(SettlType_11);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(SettlType_11.getString());
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_50;
      FIX::EncodedLegIssuer EncodedLegIssuer_50("DATA_1550700928");
      noLegs_1_1_0.set(EncodedLegIssuer_50);
      InstrumentLeg_50.insert(EncodedLegIssuer_50.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_50(885782603);
      noLegs_1_1_0.set(EncodedLegIssuerLen_50);
      InstrumentLeg_50.insert(EncodedLegIssuerLen_50.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_50("DATA_1629623512");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_50);
      InstrumentLeg_50.insert(EncodedLegSecurityDesc_50.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_50(1626764035);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_50);
      InstrumentLeg_50.insert(EncodedLegSecurityDescLen_50.getString());
      FIX::LegCFICode LegCFICode_50("STRING_66485376");
      noLegs_1_1_0.set(LegCFICode_50);
      InstrumentLeg_50.insert(LegCFICode_50.getString());
      FIX::LegContractMultiplier LegContractMultiplier_50;
      LegContractMultiplier_50.setString("13420828");
      noLegs_1_1_0.set(LegContractMultiplier_50);
      InstrumentLeg_50.insert(LegContractMultiplier_50.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_50(2083218354);
      noLegs_1_1_0.set(LegContractMultiplierUnit_50);
      InstrumentLeg_50.insert(LegContractMultiplierUnit_50.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_50("MONTHYEAR_1067188165");
      noLegs_1_1_0.set(LegContractSettlMonth_50);
      InstrumentLeg_50.insert(LegContractSettlMonth_50.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_50("COUNTRY_1085364599");
      noLegs_1_1_0.set(LegCountryOfIssue_50);
      InstrumentLeg_50.insert(LegCountryOfIssue_50.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_50("LOCALMKTDATE_1613528378");
      noLegs_1_1_0.set(LegCouponPaymentDate_50);
      InstrumentLeg_50.insert(LegCouponPaymentDate_50.getString());
      FIX::LegCouponRate LegCouponRate_50;
      LegCouponRate_50.setString("35.110000");
      noLegs_1_1_0.set(LegCouponRate_50);
      InstrumentLeg_50.insert(LegCouponRate_50.getString());
      FIX::LegCreditRating LegCreditRating_50("STRING_372674876");
      noLegs_1_1_0.set(LegCreditRating_50);
      InstrumentLeg_50.insert(LegCreditRating_50.getString());
      FIX::LegCurrency LegCurrency_50("GBP");
      noLegs_1_1_0.set(LegCurrency_50);
      InstrumentLeg_50.insert(LegCurrency_50.getString());
      FIX::LegDatedDate LegDatedDate_50("LOCALMKTDATE_1485710819");
      noLegs_1_1_0.set(LegDatedDate_50);
      InstrumentLeg_50.insert(LegDatedDate_50.getString());
      FIX::LegExerciseStyle LegExerciseStyle_50(867708148);
      noLegs_1_1_0.set(LegExerciseStyle_50);
      InstrumentLeg_50.insert(LegExerciseStyle_50.getString());
      FIX::LegFactor LegFactor_50;
      LegFactor_50.setString("6199715");
      noLegs_1_1_0.set(LegFactor_50);
      InstrumentLeg_50.insert(LegFactor_50.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_50(1349971065);
      noLegs_1_1_0.set(LegFlowScheduleType_50);
      InstrumentLeg_50.insert(LegFlowScheduleType_50.getString());
      FIX::LegInstrRegistry LegInstrRegistry_50("STRING_116777347");
      noLegs_1_1_0.set(LegInstrRegistry_50);
      InstrumentLeg_50.insert(LegInstrRegistry_50.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_50("LOCALMKTDATE_1117837858");
      noLegs_1_1_0.set(LegInterestAccrualDate_50);
      InstrumentLeg_50.insert(LegInterestAccrualDate_50.getString());
      FIX::LegIssueDate LegIssueDate_50("LOCALMKTDATE_1398316074");
      noLegs_1_1_0.set(LegIssueDate_50);
      InstrumentLeg_50.insert(LegIssueDate_50.getString());
      FIX::LegIssuer LegIssuer_50("STRING_1668583401");
      noLegs_1_1_0.set(LegIssuer_50);
      InstrumentLeg_50.insert(LegIssuer_50.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_50("STRING_154663166");
      noLegs_1_1_0.set(LegLocaleOfIssue_50);
      InstrumentLeg_50.insert(LegLocaleOfIssue_50.getString());
      FIX::LegMaturityDate LegMaturityDate_50("LOCALMKTDATE_349036908");
      noLegs_1_1_0.set(LegMaturityDate_50);
      InstrumentLeg_50.insert(LegMaturityDate_50.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_50("MONTHYEAR_340482965");
      noLegs_1_1_0.set(LegMaturityMonthYear_50);
      InstrumentLeg_50.insert(LegMaturityMonthYear_50.getString());
      FIX::LegMaturityTime LegMaturityTime_50("TZTIMEONLY_766323181");
      noLegs_1_1_0.set(LegMaturityTime_50);
      InstrumentLeg_50.insert(LegMaturityTime_50.getString());
      FIX::LegOptAttribute LegOptAttribute_50('1');
      noLegs_1_1_0.set(LegOptAttribute_50);
      InstrumentLeg_50.insert(LegOptAttribute_50.getString());
      FIX::LegOptionRatio LegOptionRatio_50;
      LegOptionRatio_50.setString("1159758");
      noLegs_1_1_0.set(LegOptionRatio_50);
      InstrumentLeg_50.insert(LegOptionRatio_50.getString());
      FIX::LegPool LegPool_50("STRING_1566917406");
      noLegs_1_1_0.set(LegPool_50);
      InstrumentLeg_50.insert(LegPool_50.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_50("STRING_1495091050");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_50);
      InstrumentLeg_50.insert(LegPriceUnitOfMeasure_50.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_50;
      LegPriceUnitOfMeasureQty_50.setString("253751");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_50);
      InstrumentLeg_50.insert(LegPriceUnitOfMeasureQty_50.getString());
      FIX::LegProduct LegProduct_50(970134686);
      noLegs_1_1_0.set(LegProduct_50);
      InstrumentLeg_50.insert(LegProduct_50.getString());
      FIX::LegPutOrCall LegPutOrCall_50(233390005);
      noLegs_1_1_0.set(LegPutOrCall_50);
      InstrumentLeg_50.insert(LegPutOrCall_50.getString());
      FIX::LegRatioQty LegRatioQty_50;
      LegRatioQty_50.setString("16549986");
      noLegs_1_1_0.set(LegRatioQty_50);
      InstrumentLeg_50.insert(LegRatioQty_50.getString());
      FIX::LegRedemptionDate LegRedemptionDate_50("LOCALMKTDATE_449415074");
      noLegs_1_1_0.set(LegRedemptionDate_50);
      InstrumentLeg_50.insert(LegRedemptionDate_50.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_50("STRING_299875381");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_50);
      InstrumentLeg_50.insert(LegRepoCollateralSecurityType_50.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_50;
      LegRepurchaseRate_50.setString("78.600000");
      noLegs_1_1_0.set(LegRepurchaseRate_50);
      InstrumentLeg_50.insert(LegRepurchaseRate_50.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_50(385149780);
      noLegs_1_1_0.set(LegRepurchaseTerm_50);
      InstrumentLeg_50.insert(LegRepurchaseTerm_50.getString());
      FIX::LegSecurityDesc LegSecurityDesc_50("STRING_1367063546");
      noLegs_1_1_0.set(LegSecurityDesc_50);
      InstrumentLeg_50.insert(LegSecurityDesc_50.getString());
      FIX::LegSecurityExchange LegSecurityExchange_50("EXCHANGE_1934962459");
      noLegs_1_1_0.set(LegSecurityExchange_50);
      InstrumentLeg_50.insert(LegSecurityExchange_50.getString());
      FIX::LegSecurityID LegSecurityID_50("STRING_1998678158");
      noLegs_1_1_0.set(LegSecurityID_50);
      InstrumentLeg_50.insert(LegSecurityID_50.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_50("STRING_668623409");
      noLegs_1_1_0.set(LegSecurityIDSource_50);
      InstrumentLeg_50.insert(LegSecurityIDSource_50.getString());
      FIX::LegSecuritySubType LegSecuritySubType_50("STRING_160153687");
      noLegs_1_1_0.set(LegSecuritySubType_50);
      InstrumentLeg_50.insert(LegSecuritySubType_50.getString());
      FIX::LegSecurityType LegSecurityType_50("STRING_386838351");
      noLegs_1_1_0.set(LegSecurityType_50);
      InstrumentLeg_50.insert(LegSecurityType_50.getString());
      FIX::LegSide LegSide_50('5');
      noLegs_1_1_0.set(LegSide_50);
      InstrumentLeg_50.insert(LegSide_50.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_50("STRING_1645864507");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_50);
      InstrumentLeg_50.insert(LegStateOrProvinceOfIssue_50.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_50("GBP");
      noLegs_1_1_0.set(LegStrikeCurrency_50);
      InstrumentLeg_50.insert(LegStrikeCurrency_50.getString());
      FIX::LegStrikePrice LegStrikePrice_50;
      LegStrikePrice_50.setString("8483519");
      noLegs_1_1_0.set(LegStrikePrice_50);
      InstrumentLeg_50.insert(LegStrikePrice_50.getString());
      FIX::LegSymbol LegSymbol_50("STRING_1371323847");
      noLegs_1_1_0.set(LegSymbol_50);
      InstrumentLeg_50.insert(LegSymbol_50.getString());
      FIX::LegSymbolSfx LegSymbolSfx_50("STRING_107394478");
      noLegs_1_1_0.set(LegSymbolSfx_50);
      InstrumentLeg_50.insert(LegSymbolSfx_50.getString());
      FIX::LegTimeUnit LegTimeUnit_50("STRING_99184351");
      noLegs_1_1_0.set(LegTimeUnit_50);
      InstrumentLeg_50.insert(LegTimeUnit_50.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_50("STRING_892423600");
      noLegs_1_1_0.set(LegUnitOfMeasure_50);
      InstrumentLeg_50.insert(LegUnitOfMeasure_50.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_50;
      LegUnitOfMeasureQty_50.setString("2620576");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_50);
      InstrumentLeg_50.insert(LegUnitOfMeasureQty_50.getString());
      all_values.push_back(InstrumentLeg_50);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_91;
        FIX::LegSecurityAltID LegSecurityAltID_91("STRING_1232906565");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_91);
        LegSecAltIDGrp_NoLegSecurityAltID_91.insert(LegSecurityAltID_91.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_91("STRING_1028380826");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_91);
        LegSecAltIDGrp_NoLegSecurityAltID_91.insert(LegSecurityAltIDSource_91.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_91);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_92;
        FIX::LegSecurityAltID LegSecurityAltID_92("STRING_1618845072");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_92);
        LegSecAltIDGrp_NoLegSecurityAltID_92.insert(LegSecurityAltID_92.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_92("STRING_1348882384");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_92);
        LegSecAltIDGrp_NoLegSecurityAltID_92.insert(LegSecurityAltIDSource_92.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_92);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_30;
    FIX::AttachmentPoint AttachmentPoint_30;
    AttachmentPoint_30.setString("45.840000");
    noRelatedSym_0_1.set(AttachmentPoint_30);
    Instrument_30.insert(AttachmentPoint_30.getString());
    FIX::CFICode CFICode_30("STRING_966452474");
    noRelatedSym_0_1.set(CFICode_30);
    Instrument_30.insert(CFICode_30.getString());
    FIX::CPProgram CPProgram_30(1);
    noRelatedSym_0_1.set(CPProgram_30);
    Instrument_30.insert(CPProgram_30.getString());
    FIX::CPRegType CPRegType_30("STRING_1417949271");
    noRelatedSym_0_1.set(CPRegType_30);
    Instrument_30.insert(CPRegType_30.getString());
    FIX::CapPrice CapPrice_30;
    CapPrice_30.setString("11998424");
    noRelatedSym_0_1.set(CapPrice_30);
    Instrument_30.insert(CapPrice_30.getString());
    FIX::ContractMultiplier ContractMultiplier_30;
    ContractMultiplier_30.setString("8817725");
    noRelatedSym_0_1.set(ContractMultiplier_30);
    Instrument_30.insert(ContractMultiplier_30.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_30(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_30);
    Instrument_30.insert(ContractMultiplierUnit_30.getString());
    FIX::ContractSettlMonth ContractSettlMonth_30("MONTHYEAR_1499717860");
    noRelatedSym_0_1.set(ContractSettlMonth_30);
    Instrument_30.insert(ContractSettlMonth_30.getString());
    FIX::CountryOfIssue CountryOfIssue_30("COUNTRY_1731370375");
    noRelatedSym_0_1.set(CountryOfIssue_30);
    Instrument_30.insert(CountryOfIssue_30.getString());
    FIX::CouponPaymentDate CouponPaymentDate_30("LOCALMKTDATE_105030477");
    noRelatedSym_0_1.set(CouponPaymentDate_30);
    Instrument_30.insert(CouponPaymentDate_30.getString());
    FIX::CouponRate CouponRate_30;
    CouponRate_30.setString("77.590000");
    noRelatedSym_0_1.set(CouponRate_30);
    Instrument_30.insert(CouponRate_30.getString());
    FIX::CreditRating CreditRating_30("STRING_1518849186");
    noRelatedSym_0_1.set(CreditRating_30);
    Instrument_30.insert(CreditRating_30.getString());
    FIX::DatedDate DatedDate_30("LOCALMKTDATE_2103708635");
    noRelatedSym_0_1.set(DatedDate_30);
    Instrument_30.insert(DatedDate_30.getString());
    FIX::DetachmentPoint DetachmentPoint_30;
    DetachmentPoint_30.setString("11.680000");
    noRelatedSym_0_1.set(DetachmentPoint_30);
    Instrument_30.insert(DetachmentPoint_30.getString());
    FIX::EncodedIssuer EncodedIssuer_30("DATA_1679002874");
    noRelatedSym_0_1.set(EncodedIssuer_30);
    Instrument_30.insert(EncodedIssuer_30.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_30(343063339);
    noRelatedSym_0_1.set(EncodedIssuerLen_30);
    Instrument_30.insert(EncodedIssuerLen_30.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_30("DATA_1904989882");
    noRelatedSym_0_1.set(EncodedSecurityDesc_30);
    Instrument_30.insert(EncodedSecurityDesc_30.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_30(1177383733);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_30);
    Instrument_30.insert(EncodedSecurityDescLen_30.getString());
    FIX::ExerciseStyle ExerciseStyle_30(0);
    noRelatedSym_0_1.set(ExerciseStyle_30);
    Instrument_30.insert(ExerciseStyle_30.getString());
    FIX::Factor Factor_30;
    Factor_30.setString("8945465");
    noRelatedSym_0_1.set(Factor_30);
    Instrument_30.insert(Factor_30.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_30(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_30);
    Instrument_30.insert(FlexProductEligibilityIndicator_30.getString());
    FIX::FlexibleIndicator FlexibleIndicator_30(true);
    noRelatedSym_0_1.set(FlexibleIndicator_30);
    Instrument_30.insert(FlexibleIndicator_30.getString());
    FIX::FloorPrice FloorPrice_30;
    FloorPrice_30.setString("10019409");
    noRelatedSym_0_1.set(FloorPrice_30);
    Instrument_30.insert(FloorPrice_30.getString());
    FIX::FlowScheduleType FlowScheduleType_30(3);
    noRelatedSym_0_1.set(FlowScheduleType_30);
    Instrument_30.insert(FlowScheduleType_30.getString());
    FIX::InstrRegistry InstrRegistry_30("STRING_1713873638");
    noRelatedSym_0_1.set(InstrRegistry_30);
    Instrument_30.insert(InstrRegistry_30.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_30('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_30);
    Instrument_30.insert(InstrmtAssignmentMethod_30.getString());
    FIX::InterestAccrualDate InterestAccrualDate_30("LOCALMKTDATE_425657619");
    noRelatedSym_0_1.set(InterestAccrualDate_30);
    Instrument_30.insert(InterestAccrualDate_30.getString());
    FIX::IssueDate IssueDate_30("LOCALMKTDATE_799296555");
    noRelatedSym_0_1.set(IssueDate_30);
    Instrument_30.insert(IssueDate_30.getString());
    FIX::Issuer Issuer_30("STRING_144895803");
    noRelatedSym_0_1.set(Issuer_30);
    Instrument_30.insert(Issuer_30.getString());
    FIX::ListMethod ListMethod_30(1);
    noRelatedSym_0_1.set(ListMethod_30);
    Instrument_30.insert(ListMethod_30.getString());
    FIX::LocaleOfIssue LocaleOfIssue_30("STRING_695291");
    noRelatedSym_0_1.set(LocaleOfIssue_30);
    Instrument_30.insert(LocaleOfIssue_30.getString());
    FIX::MaturityDate MaturityDate_30("LOCALMKTDATE_592710387");
    noRelatedSym_0_1.set(MaturityDate_30);
    Instrument_30.insert(MaturityDate_30.getString());
    FIX::MaturityMonthYear MaturityMonthYear_30("MONTHYEAR_863471517");
    noRelatedSym_0_1.set(MaturityMonthYear_30);
    Instrument_30.insert(MaturityMonthYear_30.getString());
    FIX::MaturityTime MaturityTime_30("TZTIMEONLY_1374952808");
    noRelatedSym_0_1.set(MaturityTime_30);
    Instrument_30.insert(MaturityTime_30.getString());
    FIX::MinPriceIncrement MinPriceIncrement_30;
    MinPriceIncrement_30.setString("20106596");
    noRelatedSym_0_1.set(MinPriceIncrement_30);
    Instrument_30.insert(MinPriceIncrement_30.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_30;
    MinPriceIncrementAmount_30.setString("20633139");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_30);
    Instrument_30.insert(MinPriceIncrementAmount_30.getString());
    FIX::NTPositionLimit NTPositionLimit_30(109241675);
    noRelatedSym_0_1.set(NTPositionLimit_30);
    Instrument_30.insert(NTPositionLimit_30.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_30;
    NotionalPercentageOutstanding_30.setString("3.550000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_30);
    Instrument_30.insert(NotionalPercentageOutstanding_30.getString());
    FIX::OptAttribute OptAttribute_30('1');
    noRelatedSym_0_1.set(OptAttribute_30);
    Instrument_30.insert(OptAttribute_30.getString());
    FIX::OptPayoutAmount OptPayoutAmount_30;
    OptPayoutAmount_30.setString("18406120");
    noRelatedSym_0_1.set(OptPayoutAmount_30);
    Instrument_30.insert(OptPayoutAmount_30.getString());
    FIX::OptPayoutType OptPayoutType_30(1);
    noRelatedSym_0_1.set(OptPayoutType_30);
    Instrument_30.insert(OptPayoutType_30.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_30;
    OriginalNotionalPercentageOutstanding_30.setString("59.680000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_30);
    Instrument_30.insert(OriginalNotionalPercentageOutstanding_30.getString());
    FIX::Pool Pool_30("STRING_1211977588");
    noRelatedSym_0_1.set(Pool_30);
    Instrument_30.insert(Pool_30.getString());
    FIX::PositionLimit PositionLimit_30(1791795820);
    noRelatedSym_0_1.set(PositionLimit_30);
    Instrument_30.insert(PositionLimit_30.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_30("STRING_STD");
    noRelatedSym_0_1.set(PriceQuoteMethod_30);
    Instrument_30.insert(PriceQuoteMethod_30.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_30("STRING_743496814");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_30);
    Instrument_30.insert(PriceUnitOfMeasure_30.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_30;
    PriceUnitOfMeasureQty_30.setString("21348591");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_30);
    Instrument_30.insert(PriceUnitOfMeasureQty_30.getString());
    FIX::Product Product_32(1);
    noRelatedSym_0_1.set(Product_32);
    Instrument_30.insert(Product_32.getString());
    FIX::ProductComplex ProductComplex_30("STRING_1920880547");
    noRelatedSym_0_1.set(ProductComplex_30);
    Instrument_30.insert(ProductComplex_30.getString());
    FIX::PutOrCall PutOrCall_30(0);
    noRelatedSym_0_1.set(PutOrCall_30);
    Instrument_30.insert(PutOrCall_30.getString());
    FIX::RedemptionDate RedemptionDate_30("LOCALMKTDATE_2027336225");
    noRelatedSym_0_1.set(RedemptionDate_30);
    Instrument_30.insert(RedemptionDate_30.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_30("STRING_1799132557");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_30);
    Instrument_30.insert(RepoCollateralSecurityType_30.getString());
    FIX::RepurchaseRate RepurchaseRate_30;
    RepurchaseRate_30.setString("17.400000");
    noRelatedSym_0_1.set(RepurchaseRate_30);
    Instrument_30.insert(RepurchaseRate_30.getString());
    FIX::RepurchaseTerm RepurchaseTerm_30(881793558);
    noRelatedSym_0_1.set(RepurchaseTerm_30);
    Instrument_30.insert(RepurchaseTerm_30.getString());
    FIX::RestructuringType RestructuringType_30("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_30);
    Instrument_30.insert(RestructuringType_30.getString());
    FIX::SecurityDesc SecurityDesc_30("STRING_1972825378");
    noRelatedSym_0_1.set(SecurityDesc_30);
    Instrument_30.insert(SecurityDesc_30.getString());
    FIX::SecurityExchange SecurityExchange_30("EXCHANGE_2145792183");
    noRelatedSym_0_1.set(SecurityExchange_30);
    Instrument_30.insert(SecurityExchange_30.getString());
    FIX::SecurityGroup SecurityGroup_30("STRING_54742889");
    noRelatedSym_0_1.set(SecurityGroup_30);
    Instrument_30.insert(SecurityGroup_30.getString());
    FIX::SecurityID SecurityID_30("STRING_624638285");
    noRelatedSym_0_1.set(SecurityID_30);
    Instrument_30.insert(SecurityID_30.getString());
    FIX::SecurityIDSource SecurityIDSource_30("STRING_3");
    noRelatedSym_0_1.set(SecurityIDSource_30);
    Instrument_30.insert(SecurityIDSource_30.getString());
    FIX::SecurityStatus SecurityStatus_30("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_30);
    Instrument_30.insert(SecurityStatus_30.getString());
    FIX::SecuritySubType SecuritySubType_31("STRING_625333577");
    noRelatedSym_0_1.set(SecuritySubType_31);
    Instrument_30.insert(SecuritySubType_31.getString());
    FIX::SecurityType SecurityType_32("STRING_MATURED");
    noRelatedSym_0_1.set(SecurityType_32);
    Instrument_30.insert(SecurityType_32.getString());
    FIX::Seniority Seniority_30("STRING_SR");
    noRelatedSym_0_1.set(Seniority_30);
    Instrument_30.insert(Seniority_30.getString());
    FIX::SettlMethod SettlMethod_30('P');
    noRelatedSym_0_1.set(SettlMethod_30);
    Instrument_30.insert(SettlMethod_30.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_30("STRING_599090736");
    noRelatedSym_0_1.set(SettleOnOpenFlag_30);
    Instrument_30.insert(SettleOnOpenFlag_30.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_30("STRING_731063798");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_30);
    Instrument_30.insert(StateOrProvinceOfIssue_30.getString());
    FIX::StrikeCurrency StrikeCurrency_30("EUR");
    noRelatedSym_0_1.set(StrikeCurrency_30);
    Instrument_30.insert(StrikeCurrency_30.getString());
    FIX::StrikeMultiplier StrikeMultiplier_30;
    StrikeMultiplier_30.setString("21466120");
    noRelatedSym_0_1.set(StrikeMultiplier_30);
    Instrument_30.insert(StrikeMultiplier_30.getString());
    FIX::StrikePrice StrikePrice_30;
    StrikePrice_30.setString("18026564");
    noRelatedSym_0_1.set(StrikePrice_30);
    Instrument_30.insert(StrikePrice_30.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_30(2);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_30);
    Instrument_30.insert(StrikePriceBoundaryMethod_30.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_30;
    StrikePriceBoundaryPrecision_30.setString("43.270000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_30);
    Instrument_30.insert(StrikePriceBoundaryPrecision_30.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_30(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_30);
    Instrument_30.insert(StrikePriceDeterminationMethod_30.getString());
    FIX::StrikeValue StrikeValue_30;
    StrikeValue_30.setString("16620304");
    noRelatedSym_0_1.set(StrikeValue_30);
    Instrument_30.insert(StrikeValue_30.getString());
    FIX::Symbol Symbol_30("STRING_1361774168");
    noRelatedSym_0_1.set(Symbol_30);
    Instrument_30.insert(Symbol_30.getString());
    FIX::SymbolSfx SymbolSfx_30("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_30);
    Instrument_30.insert(SymbolSfx_30.getString());
    FIX::TimeUnit TimeUnit_30("STRING_Mo");
    noRelatedSym_0_1.set(TimeUnit_30);
    Instrument_30.insert(TimeUnit_30.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_30(4);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_30);
    Instrument_30.insert(UnderlyingPriceDeterminationMethod_30.getString());
    FIX::UnitOfMeasure UnitOfMeasure_30("STRING_MMbbl");
    noRelatedSym_0_1.set(UnitOfMeasure_30);
    Instrument_30.insert(UnitOfMeasure_30.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_30;
    UnitOfMeasureQty_30.setString("10869076");
    noRelatedSym_0_1.set(UnitOfMeasureQty_30);
    Instrument_30.insert(UnitOfMeasureQty_30.getString());
    FIX::ValuationMethod ValuationMethod_30("STRING_EQTY");
    noRelatedSym_0_1.set(ValuationMethod_30);
    Instrument_30.insert(ValuationMethod_30.getString());
    all_values.push_back(Instrument_30);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_60;
      FIX::ComplexEventCondition ComplexEventCondition_60(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventCondition_60.getString());
      FIX::ComplexEventPrice ComplexEventPrice_60;
      ComplexEventPrice_60.setString("11087263");
      noComplexEvents_1_1_0.set(ComplexEventPrice_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPrice_60.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_60(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceBoundaryMethod_60.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_60;
      ComplexEventPriceBoundaryPrecision_60.setString("11.310000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceBoundaryPrecision_60.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_60(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceTimeType_60.getString());
      FIX::ComplexEventType ComplexEventType_60(3);
      noComplexEvents_1_1_0.set(ComplexEventType_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventType_60.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_60;
      ComplexOptPayoutAmount_60.setString("17958394");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexOptPayoutAmount_60.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_60);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_128;
        FIX::ComplexEventEndDate ComplexEventEndDate_128(FIX::UTCTIMESTAMP(17, 17, 7, 11, 102001));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_128);
        ComplexEventDates_NoComplexEventDates_128.insert(ComplexEventEndDate_128.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_128(FIX::UTCTIMESTAMP(4, 17, 38, 0, 92013));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_128);
        ComplexEventDates_NoComplexEventDates_128.insert(ComplexEventStartDate_128.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_128);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_265;
          FIX::ComplexEventEndTime ComplexEventEndTime_265(FIX::UTCTIMEONLY(10, 55, 47));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_265);
          ComplexEventTimes_NoComplexEventTimes_265.insert(ComplexEventEndTime_265.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_265(FIX::UTCTIMEONLY(4, 28, 37));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_265);
          ComplexEventTimes_NoComplexEventTimes_265.insert(ComplexEventStartTime_265.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_265);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_61;
      FIX::ComplexEventCondition ComplexEventCondition_61(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventCondition_61.getString());
      FIX::ComplexEventPrice ComplexEventPrice_61;
      ComplexEventPrice_61.setString("9527457");
      noComplexEvents_1_1_1.set(ComplexEventPrice_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPrice_61.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_61(4);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceBoundaryMethod_61.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_61;
      ComplexEventPriceBoundaryPrecision_61.setString("67.920000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceBoundaryPrecision_61.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_61(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceTimeType_61.getString());
      FIX::ComplexEventType ComplexEventType_61(8);
      noComplexEvents_1_1_1.set(ComplexEventType_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventType_61.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_61;
      ComplexOptPayoutAmount_61.setString("6114525");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexOptPayoutAmount_61.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_61);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_129;
        FIX::ComplexEventEndDate ComplexEventEndDate_129(FIX::UTCTIMESTAMP(18, 4, 33, 9, 22011));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_129);
        ComplexEventDates_NoComplexEventDates_129.insert(ComplexEventEndDate_129.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_129(FIX::UTCTIMESTAMP(18, 28, 15, 2, 12010));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_129);
        ComplexEventDates_NoComplexEventDates_129.insert(ComplexEventStartDate_129.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_129);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_266;
          FIX::ComplexEventEndTime ComplexEventEndTime_266(FIX::UTCTIMEONLY(14, 58, 0));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_266);
          ComplexEventTimes_NoComplexEventTimes_266.insert(ComplexEventEndTime_266.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_266(FIX::UTCTIMEONLY(7, 20, 39));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_266);
          ComplexEventTimes_NoComplexEventTimes_266.insert(ComplexEventStartTime_266.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_266);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_130;
        FIX::ComplexEventEndDate ComplexEventEndDate_130(FIX::UTCTIMESTAMP(3, 24, 53, 3, 32006));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_130);
        ComplexEventDates_NoComplexEventDates_130.insert(ComplexEventEndDate_130.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_130(FIX::UTCTIMESTAMP(16, 52, 35, 18, 112016));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_130);
        ComplexEventDates_NoComplexEventDates_130.insert(ComplexEventStartDate_130.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_130);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_267;
          FIX::ComplexEventEndTime ComplexEventEndTime_267(FIX::UTCTIMEONLY(2, 17, 14));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_267);
          ComplexEventTimes_NoComplexEventTimes_267.insert(ComplexEventEndTime_267.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_267(FIX::UTCTIMEONLY(21, 34, 56));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_267);
          ComplexEventTimes_NoComplexEventTimes_267.insert(ComplexEventStartTime_267.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_267);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_62;
      FIX::ComplexEventCondition ComplexEventCondition_62(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventCondition_62.getString());
      FIX::ComplexEventPrice ComplexEventPrice_62;
      ComplexEventPrice_62.setString("1071966");
      noComplexEvents_1_1_2.set(ComplexEventPrice_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPrice_62.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_62(2);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryMethod_62.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_62;
      ComplexEventPriceBoundaryPrecision_62.setString("24.870000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryPrecision_62.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_62(1);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceTimeType_62.getString());
      FIX::ComplexEventType ComplexEventType_62(3);
      noComplexEvents_1_1_2.set(ComplexEventType_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventType_62.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_62;
      ComplexOptPayoutAmount_62.setString("13607544");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexOptPayoutAmount_62.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_62);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_131;
        FIX::ComplexEventEndDate ComplexEventEndDate_131(FIX::UTCTIMESTAMP(14, 14, 31, 13, 52011));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_131);
        ComplexEventDates_NoComplexEventDates_131.insert(ComplexEventEndDate_131.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_131(FIX::UTCTIMESTAMP(1, 9, 11, 11, 122003));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_131);
        ComplexEventDates_NoComplexEventDates_131.insert(ComplexEventStartDate_131.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_131);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_268;
          FIX::ComplexEventEndTime ComplexEventEndTime_268(FIX::UTCTIMEONLY(6, 29, 28));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_268);
          ComplexEventTimes_NoComplexEventTimes_268.insert(ComplexEventEndTime_268.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_268(FIX::UTCTIMEONLY(6, 2, 27));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_268);
          ComplexEventTimes_NoComplexEventTimes_268.insert(ComplexEventStartTime_268.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_268);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_132;
        FIX::ComplexEventEndDate ComplexEventEndDate_132(FIX::UTCTIMESTAMP(19, 13, 28, 5, 122011));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_132);
        ComplexEventDates_NoComplexEventDates_132.insert(ComplexEventEndDate_132.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_132(FIX::UTCTIMESTAMP(13, 6, 34, 0, 82000));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_132);
        ComplexEventDates_NoComplexEventDates_132.insert(ComplexEventStartDate_132.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_132);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_269;
          FIX::ComplexEventEndTime ComplexEventEndTime_269(FIX::UTCTIMEONLY(7, 30, 14));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_269);
          ComplexEventTimes_NoComplexEventTimes_269.insert(ComplexEventEndTime_269.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_269(FIX::UTCTIMEONLY(10, 34, 46));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_269);
          ComplexEventTimes_NoComplexEventTimes_269.insert(ComplexEventStartTime_269.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_269);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_270;
          FIX::ComplexEventEndTime ComplexEventEndTime_270(FIX::UTCTIMEONLY(20, 7, 29));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventEndTime_270);
          ComplexEventTimes_NoComplexEventTimes_270.insert(ComplexEventEndTime_270.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_270(FIX::UTCTIMEONLY(14, 23, 26));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventStartTime_270);
          ComplexEventTimes_NoComplexEventTimes_270.insert(ComplexEventStartTime_270.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_270);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_271;
          FIX::ComplexEventEndTime ComplexEventEndTime_271(FIX::UTCTIMEONLY(10, 31, 11));
          noComplexEventTimes_1_2_1_3_2.set(ComplexEventEndTime_271);
          ComplexEventTimes_NoComplexEventTimes_271.insert(ComplexEventEndTime_271.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_271(FIX::UTCTIMEONLY(22, 38, 23));
          noComplexEventTimes_1_2_1_3_2.set(ComplexEventStartTime_271);
          ComplexEventTimes_NoComplexEventTimes_271.insert(ComplexEventStartTime_271.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_271);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_65;
      FIX::EventDate EventDate_65("LOCALMKTDATE_1507010804");
      noEvents_1_1_0.set(EventDate_65);
      EvntGrp_NoEvents_65.insert(EventDate_65.getString());
      FIX::EventPx EventPx_65;
      EventPx_65.setString("5193820");
      noEvents_1_1_0.set(EventPx_65);
      EvntGrp_NoEvents_65.insert(EventPx_65.getString());
      FIX::EventText EventText_65("STRING_305540067");
      noEvents_1_1_0.set(EventText_65);
      EvntGrp_NoEvents_65.insert(EventText_65.getString());
      FIX::EventTime EventTime_65(FIX::UTCTIMESTAMP(8, 48, 59, 15, 82012));
      noEvents_1_1_0.set(EventTime_65);
      EvntGrp_NoEvents_65.insert(EventTime_65.getString());
      FIX::EventType EventType_65(19);
      noEvents_1_1_0.set(EventType_65);
      EvntGrp_NoEvents_65.insert(EventType_65.getString());
      all_values.push_back(EvntGrp_NoEvents_65);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_66;
      FIX::EventDate EventDate_66("LOCALMKTDATE_111056217");
      noEvents_1_1_1.set(EventDate_66);
      EvntGrp_NoEvents_66.insert(EventDate_66.getString());
      FIX::EventPx EventPx_66;
      EventPx_66.setString("20593355");
      noEvents_1_1_1.set(EventPx_66);
      EvntGrp_NoEvents_66.insert(EventPx_66.getString());
      FIX::EventText EventText_66("STRING_1169297876");
      noEvents_1_1_1.set(EventText_66);
      EvntGrp_NoEvents_66.insert(EventText_66.getString());
      FIX::EventTime EventTime_66(FIX::UTCTIMESTAMP(16, 4, 26, 19, 112000));
      noEvents_1_1_1.set(EventTime_66);
      EvntGrp_NoEvents_66.insert(EventTime_66.getString());
      FIX::EventType EventType_66(10);
      noEvents_1_1_1.set(EventType_66);
      EvntGrp_NoEvents_66.insert(EventType_66.getString());
      all_values.push_back(EvntGrp_NoEvents_66);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_67;
      FIX::EventDate EventDate_67("LOCALMKTDATE_792980981");
      noEvents_1_1_2.set(EventDate_67);
      EvntGrp_NoEvents_67.insert(EventDate_67.getString());
      FIX::EventPx EventPx_67;
      EventPx_67.setString("9785537");
      noEvents_1_1_2.set(EventPx_67);
      EvntGrp_NoEvents_67.insert(EventPx_67.getString());
      FIX::EventText EventText_67("STRING_849354400");
      noEvents_1_1_2.set(EventText_67);
      EvntGrp_NoEvents_67.insert(EventText_67.getString());
      FIX::EventTime EventTime_67(FIX::UTCTIMESTAMP(0, 15, 22, 0, 72001));
      noEvents_1_1_2.set(EventTime_67);
      EvntGrp_NoEvents_67.insert(EventTime_67.getString());
      FIX::EventType EventType_67(18);
      noEvents_1_1_2.set(EventType_67);
      EvntGrp_NoEvents_67.insert(EventType_67.getString());
      all_values.push_back(EvntGrp_NoEvents_67);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_56;
      FIX::InstrumentPartyID InstrumentPartyID_56("STRING_182817235");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_56);
      InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyID_56.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_56('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_56);
      InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyIDSource_56.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_56(734447986);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_56);
      InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyRole_56.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_56);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113;
        FIX::InstrumentPartySubID InstrumentPartySubID_113("STRING_13180525");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_113);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113.insert(InstrumentPartySubID_113.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_113(250342137);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_113);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113.insert(InstrumentPartySubIDType_113.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_57;
      FIX::InstrumentPartyID InstrumentPartyID_57("STRING_1271434732");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_57);
      InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyID_57.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_57('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_57);
      InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyIDSource_57.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_57(361398354);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_57);
      InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyRole_57.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_57);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114;
        FIX::InstrumentPartySubID InstrumentPartySubID_114("STRING_931057351");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_114);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114.insert(InstrumentPartySubID_114.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_114(695603152);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_114);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114.insert(InstrumentPartySubIDType_114.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_63;
      FIX::SecurityAltID SecurityAltID_63("STRING_573858507");
      noSecurityAltID_1_1_0.set(SecurityAltID_63);
      SecAltIDGrp_NoSecurityAltID_63.insert(SecurityAltID_63.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_63("STRING_152121010");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_63);
      SecAltIDGrp_NoSecurityAltID_63.insert(SecurityAltIDSource_63.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_63);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_64;
      FIX::SecurityAltID SecurityAltID_64("STRING_337203599");
      noSecurityAltID_1_1_1.set(SecurityAltID_64);
      SecAltIDGrp_NoSecurityAltID_64.insert(SecurityAltID_64.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_64("STRING_850151965");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_64);
      SecAltIDGrp_NoSecurityAltID_64.insert(SecurityAltIDSource_64.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_64);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_60;
    FIX::SecurityXML SecurityXML_61("XMLDATA_503517532");
    noRelatedSym_0_1.set(SecurityXML_61);
    FIX::SecurityXMLLen SecurityXMLLen_30(514721288);
    noRelatedSym_0_1.set(SecurityXMLLen_30);
    FIX::SecurityXMLSchema SecurityXMLSchema_30("STRING_1643132946");
    noRelatedSym_0_1.set(SecurityXMLSchema_30);
    SecurityXML_60.insert(SecurityXMLSchema_30.getString());
    all_values.push_back(SecurityXML_60);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_49;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_49("DATA_1364075689");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingIssuer_49.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_49(1382225510);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingIssuerLen_49.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_49("DATA_1619120361");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingSecurityDesc_49.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_49(66287456);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingSecurityDescLen_49.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_49;
      UnderlyingAdjustedQuantity_49.setString("20050918");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_49);
      UnderlyingInstrument_49.insert(UnderlyingAdjustedQuantity_49.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_49;
      UnderlyingAllocationPercent_49.setString("93.090000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_49);
      UnderlyingInstrument_49.insert(UnderlyingAllocationPercent_49.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_49;
      UnderlyingAttachmentPoint_49.setString("49.460000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_49);
      UnderlyingInstrument_49.insert(UnderlyingAttachmentPoint_49.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_49("STRING_1987485312");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_49);
      UnderlyingInstrument_49.insert(UnderlyingCFICode_49.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_49("STRING_2056600267");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_49);
      UnderlyingInstrument_49.insert(UnderlyingCPProgram_49.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_49("STRING_986802504");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_49);
      UnderlyingInstrument_49.insert(UnderlyingCPRegType_49.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_49;
      UnderlyingCapValue_49.setString("228188");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_49);
      UnderlyingInstrument_49.insert(UnderlyingCapValue_49.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_49;
      UnderlyingCashAmount_49.setString("12704766");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_49);
      UnderlyingInstrument_49.insert(UnderlyingCashAmount_49.getString());
      FIX::UnderlyingCashType UnderlyingCashType_49("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_49);
      UnderlyingInstrument_49.insert(UnderlyingCashType_49.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_49;
      UnderlyingContractMultiplier_49.setString("20117533");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_49);
      UnderlyingInstrument_49.insert(UnderlyingContractMultiplier_49.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_49(1283657173);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_49);
      UnderlyingInstrument_49.insert(UnderlyingContractMultiplierUnit_49.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_49("COUNTRY_1971592628");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingCountryOfIssue_49.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_49("LOCALMKTDATE_1135704398");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_49);
      UnderlyingInstrument_49.insert(UnderlyingCouponPaymentDate_49.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_49;
      UnderlyingCouponRate_49.setString("66.480000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_49);
      UnderlyingInstrument_49.insert(UnderlyingCouponRate_49.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_49("STRING_185507335");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_49);
      UnderlyingInstrument_49.insert(UnderlyingCreditRating_49.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_49("GBP");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_49);
      UnderlyingInstrument_49.insert(UnderlyingCurrency_49.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_49;
      UnderlyingCurrentValue_49.setString("8811104");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_49);
      UnderlyingInstrument_49.insert(UnderlyingCurrentValue_49.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_49;
      UnderlyingDetachmentPoint_49.setString("91.110000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_49);
      UnderlyingInstrument_49.insert(UnderlyingDetachmentPoint_49.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_49;
      UnderlyingDirtyPrice_49.setString("4028488");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_49);
      UnderlyingInstrument_49.insert(UnderlyingDirtyPrice_49.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_49;
      UnderlyingEndPrice_49.setString("10332314");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_49);
      UnderlyingInstrument_49.insert(UnderlyingEndPrice_49.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_49;
      UnderlyingEndValue_49.setString("18424227");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_49);
      UnderlyingInstrument_49.insert(UnderlyingEndValue_49.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_49(1253000825);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_49);
      UnderlyingInstrument_49.insert(UnderlyingExerciseStyle_49.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_49;
      UnderlyingFXRate_49.setString("15367490");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_49);
      UnderlyingInstrument_49.insert(UnderlyingFXRate_49.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_49('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_49);
      UnderlyingInstrument_49.insert(UnderlyingFXRateCalc_49.getString());
      FIX::UnderlyingFactor UnderlyingFactor_49;
      UnderlyingFactor_49.setString("7486501");
      noUnderlyings_1_1_0.set(UnderlyingFactor_49);
      UnderlyingInstrument_49.insert(UnderlyingFactor_49.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_49(871336671);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_49);
      UnderlyingInstrument_49.insert(UnderlyingFlowScheduleType_49.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_49("STRING_1573736040");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_49);
      UnderlyingInstrument_49.insert(UnderlyingInstrRegistry_49.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_49("LOCALMKTDATE_2130875634");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_49);
      UnderlyingInstrument_49.insert(UnderlyingIssueDate_49.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_49("STRING_342973384");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_49);
      UnderlyingInstrument_49.insert(UnderlyingIssuer_49.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_49("STRING_1640023496");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingLocaleOfIssue_49.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_49("LOCALMKTDATE_1988483819");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityDate_49.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_49("MONTHYEAR_1921142694");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityMonthYear_49.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_49("TZTIMEONLY_2013798442");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityTime_49.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_49;
      UnderlyingNotionalPercentageOutstanding_49.setString("54.830000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_49);
      UnderlyingInstrument_49.insert(UnderlyingNotionalPercentageOutstanding_49.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_49('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_49);
      UnderlyingInstrument_49.insert(UnderlyingOptAttribute_49.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_49;
      UnderlyingOriginalNotionalPercentageOutstanding_49.setString("72.990000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_49);
      UnderlyingInstrument_49.insert(UnderlyingOriginalNotionalPercentageOutstanding_49.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_49("STRING_1851304382");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_49);
      UnderlyingInstrument_49.insert(UnderlyingPriceUnitOfMeasure_49.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_49;
      UnderlyingPriceUnitOfMeasureQty_49.setString("9532523");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_49);
      UnderlyingInstrument_49.insert(UnderlyingPriceUnitOfMeasureQty_49.getString());
      FIX::UnderlyingProduct UnderlyingProduct_49(426884142);
      noUnderlyings_1_1_0.set(UnderlyingProduct_49);
      UnderlyingInstrument_49.insert(UnderlyingProduct_49.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_49(1715574047);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_49);
      UnderlyingInstrument_49.insert(UnderlyingPutOrCall_49.getString());
      FIX::UnderlyingPx UnderlyingPx_49;
      UnderlyingPx_49.setString("894258");
      noUnderlyings_1_1_0.set(UnderlyingPx_49);
      UnderlyingInstrument_49.insert(UnderlyingPx_49.getString());
      FIX::UnderlyingQty UnderlyingQty_49;
      UnderlyingQty_49.setString("2509931");
      noUnderlyings_1_1_0.set(UnderlyingQty_49);
      UnderlyingInstrument_49.insert(UnderlyingQty_49.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_49("LOCALMKTDATE_703794797");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_49);
      UnderlyingInstrument_49.insert(UnderlyingRedemptionDate_49.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_49("STRING_1134842487");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_49);
      UnderlyingInstrument_49.insert(UnderlyingRepoCollateralSecurityType_49.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_49;
      UnderlyingRepurchaseRate_49.setString("4.570000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_49);
      UnderlyingInstrument_49.insert(UnderlyingRepurchaseRate_49.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_49(875302212);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_49);
      UnderlyingInstrument_49.insert(UnderlyingRepurchaseTerm_49.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_49("STRING_963832839");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_49);
      UnderlyingInstrument_49.insert(UnderlyingRestructuringType_49.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_49("STRING_1317610944");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityDesc_49.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_49("EXCHANGE_233037675");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityExchange_49.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_49("STRING_1366681699");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityID_49.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_49("STRING_203358794");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityIDSource_49.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_49("STRING_2075460385");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_49);
      UnderlyingInstrument_49.insert(UnderlyingSecuritySubType_49.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_49("STRING_472198876");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityType_49.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_49("STRING_1740107824");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_49);
      UnderlyingInstrument_49.insert(UnderlyingSeniority_49.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_49("STRING_137637088");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_49);
      UnderlyingInstrument_49.insert(UnderlyingSettlMethod_49.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_49(4);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_49);
      UnderlyingInstrument_49.insert(UnderlyingSettlementType_49.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_49;
      UnderlyingStartValue_49.setString("4639608");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_49);
      UnderlyingInstrument_49.insert(UnderlyingStartValue_49.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_49("STRING_1711373128");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingStateOrProvinceOfIssue_49.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_49("CHF");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_49);
      UnderlyingInstrument_49.insert(UnderlyingStrikeCurrency_49.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_49;
      UnderlyingStrikePrice_49.setString("12039129");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_49);
      UnderlyingInstrument_49.insert(UnderlyingStrikePrice_49.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_49("STRING_1045241156");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_49);
      UnderlyingInstrument_49.insert(UnderlyingSymbol_49.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_49("STRING_580593277");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_49);
      UnderlyingInstrument_49.insert(UnderlyingSymbolSfx_49.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_49("STRING_1070227771");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_49);
      UnderlyingInstrument_49.insert(UnderlyingTimeUnit_49.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_49("STRING_726242991");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_49);
      UnderlyingInstrument_49.insert(UnderlyingUnitOfMeasure_49.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_49;
      UnderlyingUnitOfMeasureQty_49.setString("2633689");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_49);
      UnderlyingInstrument_49.insert(UnderlyingUnitOfMeasureQty_49.getString());
      all_values.push_back(UnderlyingInstrument_49);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_96;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_96("STRING_430063725");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_96);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_96.insert(UnderlyingSecurityAltID_96.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_96("STRING_1216621256");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_96);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_96.insert(UnderlyingSecurityAltIDSource_96.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_96);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_97;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_97("STRING_202745564");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_97);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_97.insert(UnderlyingSecurityAltID_97.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_97("STRING_2145637773");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_97);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_97.insert(UnderlyingSecurityAltIDSource_97.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_97);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_98;
        FIX::UnderlyingStipType UnderlyingStipType_98("STRING_453738686");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_98);
        UnderlyingStipulations_NoUnderlyingStips_98.insert(UnderlyingStipType_98.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_98("STRING_701948922");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_98);
        UnderlyingStipulations_NoUnderlyingStips_98.insert(UnderlyingStipValue_98.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_98);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_99;
        FIX::UnderlyingStipType UnderlyingStipType_99("STRING_293405934");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_99);
        UnderlyingStipulations_NoUnderlyingStips_99.insert(UnderlyingStipType_99.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_99("STRING_890239144");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_99);
        UnderlyingStipulations_NoUnderlyingStips_99.insert(UnderlyingStipValue_99.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_99);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_100;
        FIX::UnderlyingStipType UnderlyingStipType_100("STRING_1577251134");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_100);
        UnderlyingStipulations_NoUnderlyingStips_100.insert(UnderlyingStipType_100.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_100("STRING_1257238774");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_100);
        UnderlyingStipulations_NoUnderlyingStips_100.insert(UnderlyingStipValue_100.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_100);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_97;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_97("STRING_1810288809");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyID_97.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_97('4');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyIDSource_97.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_97(263725234);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyRole_97.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_97);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_189("STRING_948635701");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_189);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189.insert(UnderlyingInstrumentPartySubID_189.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_189(2003833058);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_189);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189.insert(UnderlyingInstrumentPartySubIDType_189.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_98;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_98("STRING_1875902635");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyID_98.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_98('2');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyIDSource_98.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_98(320310257);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyRole_98.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_98);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_190("STRING_1226242038");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_190);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190.insert(UnderlyingInstrumentPartySubID_190.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_190(1127244489);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_190);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190.insert(UnderlyingInstrumentPartySubIDType_190.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_191("STRING_496221444");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_191);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191.insert(UnderlyingInstrumentPartySubID_191.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_191(123999546);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_191);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191.insert(UnderlyingInstrumentPartySubIDType_191.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_99;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_99("STRING_1707837766");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyID_99.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_99('1');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyIDSource_99.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_99(850242538);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyRole_99.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_99);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_192("STRING_1342310637");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_192);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192.insert(UnderlyingInstrumentPartySubID_192.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_192(1280306263);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_192);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192.insert(UnderlyingInstrumentPartySubIDType_192.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  // MDReqGrp
  // Group MDReqGrp.NoMDEntryTypes
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_0;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_0;
    FIX::MDEntryType MDEntryType_1('U');
    noMDEntryTypes_0_0.set(MDEntryType_1);
    MDReqGrp_NoMDEntryTypes_0.insert(MDEntryType_1.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_0);

    msg.addGroup(noMDEntryTypes_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_55;
    FIX::PartyID PartyID_55("STRING_198907764");
    noPartyIDs_0_0.set(PartyID_55);
    Parties_NoPartyIDs_55.insert(PartyID_55.getString());
    FIX::PartyIDSource PartyIDSource_55('4');
    noPartyIDs_0_0.set(PartyIDSource_55);
    Parties_NoPartyIDs_55.insert(PartyIDSource_55.getString());
    FIX::PartyRole PartyRole_55(29);
    noPartyIDs_0_0.set(PartyRole_55);
    Parties_NoPartyIDs_55.insert(PartyRole_55.getString());
    all_values.push_back(Parties_NoPartyIDs_55);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_111;
      FIX::PartySubID PartySubID_111("STRING_741550384");
      noPartySubIDs_0_1_0.set(PartySubID_111);
      PtysSubGrp_NoPartySubIDs_111.insert(PartySubID_111.getString());
      FIX::PartySubIDType PartySubIDType_111(8);
      noPartySubIDs_0_1_0.set(PartySubIDType_111);
      PtysSubGrp_NoPartySubIDs_111.insert(PartySubIDType_111.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_111);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_56;
    FIX::PartyID PartyID_56("STRING_1749552472");
    noPartyIDs_0_1.set(PartyID_56);
    Parties_NoPartyIDs_56.insert(PartyID_56.getString());
    FIX::PartyIDSource PartyIDSource_56('C');
    noPartyIDs_0_1.set(PartyIDSource_56);
    Parties_NoPartyIDs_56.insert(PartyIDSource_56.getString());
    FIX::PartyRole PartyRole_56(65);
    noPartyIDs_0_1.set(PartyRole_56);
    Parties_NoPartyIDs_56.insert(PartyRole_56.getString());
    all_values.push_back(Parties_NoPartyIDs_56);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_112;
      FIX::PartySubID PartySubID_112("STRING_1065642059");
      noPartySubIDs_1_1_0.set(PartySubID_112);
      PtysSubGrp_NoPartySubIDs_112.insert(PartySubID_112.getString());
      FIX::PartySubIDType PartySubIDType_112(11);
      noPartySubIDs_1_1_0.set(PartySubIDType_112);
      PtysSubGrp_NoPartySubIDs_112.insert(PartySubIDType_112.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_112);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_113;
      FIX::PartySubID PartySubID_113("STRING_1027141350");
      noPartySubIDs_1_1_1.set(PartySubID_113);
      PtysSubGrp_NoPartySubIDs_113.insert(PartySubID_113.getString());
      FIX::PartySubIDType PartySubIDType_113(15);
      noPartySubIDs_1_1_1.set(PartySubIDType_113);
      PtysSubGrp_NoPartySubIDs_113.insert(PartySubIDType_113.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_113);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_114;
      FIX::PartySubID PartySubID_114("STRING_392182845");
      noPartySubIDs_1_1_2.set(PartySubID_114);
      PtysSubGrp_NoPartySubIDs_114.insert(PartySubID_114.getString());
      FIX::PartySubIDType PartySubIDType_114(2);
      noPartySubIDs_1_1_2.set(PartySubIDType_114);
      PtysSubGrp_NoPartySubIDs_114.insert(PartySubIDType_114.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_114);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_57;
    FIX::PartyID PartyID_57("STRING_1242301727");
    noPartyIDs_0_2.set(PartyID_57);
    Parties_NoPartyIDs_57.insert(PartyID_57.getString());
    FIX::PartyIDSource PartyIDSource_57('D');
    noPartyIDs_0_2.set(PartyIDSource_57);
    Parties_NoPartyIDs_57.insert(PartyIDSource_57.getString());
    FIX::PartyRole PartyRole_57(43);
    noPartyIDs_0_2.set(PartyRole_57);
    Parties_NoPartyIDs_57.insert(PartyRole_57.getString());
    all_values.push_back(Parties_NoPartyIDs_57);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_115;
      FIX::PartySubID PartySubID_115("STRING_180712758");
      noPartySubIDs_2_1_0.set(PartySubID_115);
      PtysSubGrp_NoPartySubIDs_115.insert(PartySubID_115.getString());
      FIX::PartySubIDType PartySubIDType_115(21);
      noPartySubIDs_2_1_0.set(PartySubIDType_115);
      PtysSubGrp_NoPartySubIDs_115.insert(PartySubIDType_115.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_115);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_1;
    FIX::TradingSessionID TradingSessionID_27("STRING_2");
    noTradingSessions_0_0.set(TradingSessionID_27);
    TrdgSesGrp_NoTradingSessions_1.insert(TradingSessionID_27.getString());
    FIX::TradingSessionSubID TradingSessionSubID_27("STRING_4");
    noTradingSessions_0_0.set(TradingSessionSubID_27);
    TrdgSesGrp_NoTradingSessions_1.insert(TradingSessionSubID_27.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_1);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_2;
    FIX::TradingSessionID TradingSessionID_28("STRING_6");
    noTradingSessions_0_1.set(TradingSessionID_28);
    TrdgSesGrp_NoTradingSessions_2.insert(TradingSessionID_28.getString());
    FIX::TradingSessionSubID TradingSessionSubID_28("STRING_7");
    noTradingSessions_0_1.set(TradingSessionSubID_28);
    TrdgSesGrp_NoTradingSessions_2.insert(TradingSessionSubID_28.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_2);

    msg.addGroup(noTradingSessions_0_1);
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
