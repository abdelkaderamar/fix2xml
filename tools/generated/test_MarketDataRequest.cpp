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
  FIX::ApplQueueAction ApplQueueAction_0(2);
  msg.set(ApplQueueAction_0);
  MarketDataRequest_0.insert(ApplQueueAction_0.getString());
  FIX::ApplQueueMax ApplQueueMax_0(1764724690);
  msg.set(ApplQueueMax_0);
  MarketDataRequest_0.insert(ApplQueueMax_0.getString());
  FIX::MDImplicitDelete MDImplicitDelete_0(true);
  msg.set(MDImplicitDelete_0);
  MarketDataRequest_0.insert(MDImplicitDelete_0.getString());
  FIX::MDQuoteType MDQuoteType_2(3);
  msg.set(MDQuoteType_2);
  MarketDataRequest_0.insert(MDQuoteType_2.getString());
  FIX::MDReqID MDReqID_1("STRING_420818726");
  msg.set(MDReqID_1);
  MarketDataRequest_0.insert(MDReqID_1.getString());
  FIX::MDUpdateType MDUpdateType_0(0);
  msg.set(MDUpdateType_0);
  MarketDataRequest_0.insert(MDUpdateType_0.getString());
  FIX::MarketDepth MarketDepth_21(119647061);
  msg.set(MarketDepth_21);
  MarketDataRequest_0.insert(MarketDepth_21.getString());
  FIX::OpenCloseSettlFlag OpenCloseSettlFlag_2("MULTIPLECHARVALUE_4");
  msg.set(OpenCloseSettlFlag_2);
  MarketDataRequest_0.insert(OpenCloseSettlFlag_2.getString());
  FIX::Scope Scope_2("MULTIPLECHARVALUE_3");
  msg.set(Scope_2);
  MarketDataRequest_0.insert(Scope_2.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_2('0');
  msg.set(SubscriptionRequestType_2);
  MarketDataRequest_0.insert(SubscriptionRequestType_2.getString());
  all_values.push_back(MarketDataRequest_0);

  // InstrmtMDReqGrp
  // Group InstrmtMDReqGrp.NoRelatedSym
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_0;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_0;
    FIX::Currency Currency_26("CAN");
    noRelatedSym_0_0.set(Currency_26);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(Currency_26.getString());
    FIX::MDEntrySize MDEntrySize_2;
    MDEntrySize_2.setString("17325275");
    noRelatedSym_0_0.set(MDEntrySize_2);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(MDEntrySize_2.getString());
    FIX::MDStreamID MDStreamID_2("STRING_876870714");
    noRelatedSym_0_0.set(MDStreamID_2);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(MDStreamID_2.getString());
    FIX::QuoteType QuoteType_0(0);
    noRelatedSym_0_0.set(QuoteType_0);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(QuoteType_0.getString());
    FIX::SettlDate SettlDate_20("LOCALMKTDATE_1915654498");
    noRelatedSym_0_0.set(SettlDate_20);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(SettlDate_20.getString());
    FIX::SettlType SettlType_14("STRING_8");
    noRelatedSym_0_0.set(SettlType_14);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(SettlType_14.getString());
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_53;
      FIX::EncodedLegIssuer EncodedLegIssuer_53("DATA_1231611886");
      noLegs_0_1_0.set(EncodedLegIssuer_53);
      InstrumentLeg_53.insert(EncodedLegIssuer_53.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_53(1815622019);
      noLegs_0_1_0.set(EncodedLegIssuerLen_53);
      InstrumentLeg_53.insert(EncodedLegIssuerLen_53.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_53("DATA_2129502033");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_53);
      InstrumentLeg_53.insert(EncodedLegSecurityDesc_53.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_53(1594384590);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_53);
      InstrumentLeg_53.insert(EncodedLegSecurityDescLen_53.getString());
      FIX::LegCFICode LegCFICode_53("STRING_2061234715");
      noLegs_0_1_0.set(LegCFICode_53);
      InstrumentLeg_53.insert(LegCFICode_53.getString());
      FIX::LegContractMultiplier LegContractMultiplier_53;
      LegContractMultiplier_53.setString("21224115");
      noLegs_0_1_0.set(LegContractMultiplier_53);
      InstrumentLeg_53.insert(LegContractMultiplier_53.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_53(1233527144);
      noLegs_0_1_0.set(LegContractMultiplierUnit_53);
      InstrumentLeg_53.insert(LegContractMultiplierUnit_53.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_53("MONTHYEAR_733554299");
      noLegs_0_1_0.set(LegContractSettlMonth_53);
      InstrumentLeg_53.insert(LegContractSettlMonth_53.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_53("COUNTRY_922719864");
      noLegs_0_1_0.set(LegCountryOfIssue_53);
      InstrumentLeg_53.insert(LegCountryOfIssue_53.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_53("LOCALMKTDATE_1614321140");
      noLegs_0_1_0.set(LegCouponPaymentDate_53);
      InstrumentLeg_53.insert(LegCouponPaymentDate_53.getString());
      FIX::LegCouponRate LegCouponRate_53;
      LegCouponRate_53.setString("40.070000");
      noLegs_0_1_0.set(LegCouponRate_53);
      InstrumentLeg_53.insert(LegCouponRate_53.getString());
      FIX::LegCreditRating LegCreditRating_53("STRING_609090272");
      noLegs_0_1_0.set(LegCreditRating_53);
      InstrumentLeg_53.insert(LegCreditRating_53.getString());
      FIX::LegCurrency LegCurrency_53("EUR");
      noLegs_0_1_0.set(LegCurrency_53);
      InstrumentLeg_53.insert(LegCurrency_53.getString());
      FIX::LegDatedDate LegDatedDate_53("LOCALMKTDATE_1015582952");
      noLegs_0_1_0.set(LegDatedDate_53);
      InstrumentLeg_53.insert(LegDatedDate_53.getString());
      FIX::LegExerciseStyle LegExerciseStyle_53(2102531563);
      noLegs_0_1_0.set(LegExerciseStyle_53);
      InstrumentLeg_53.insert(LegExerciseStyle_53.getString());
      FIX::LegFactor LegFactor_53;
      LegFactor_53.setString("17922837");
      noLegs_0_1_0.set(LegFactor_53);
      InstrumentLeg_53.insert(LegFactor_53.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_53(536988642);
      noLegs_0_1_0.set(LegFlowScheduleType_53);
      InstrumentLeg_53.insert(LegFlowScheduleType_53.getString());
      FIX::LegInstrRegistry LegInstrRegistry_53("STRING_74694976");
      noLegs_0_1_0.set(LegInstrRegistry_53);
      InstrumentLeg_53.insert(LegInstrRegistry_53.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_53("LOCALMKTDATE_466033181");
      noLegs_0_1_0.set(LegInterestAccrualDate_53);
      InstrumentLeg_53.insert(LegInterestAccrualDate_53.getString());
      FIX::LegIssueDate LegIssueDate_53("LOCALMKTDATE_1310953770");
      noLegs_0_1_0.set(LegIssueDate_53);
      InstrumentLeg_53.insert(LegIssueDate_53.getString());
      FIX::LegIssuer LegIssuer_53("STRING_688752400");
      noLegs_0_1_0.set(LegIssuer_53);
      InstrumentLeg_53.insert(LegIssuer_53.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_53("STRING_1543997547");
      noLegs_0_1_0.set(LegLocaleOfIssue_53);
      InstrumentLeg_53.insert(LegLocaleOfIssue_53.getString());
      FIX::LegMaturityDate LegMaturityDate_53("LOCALMKTDATE_1016720764");
      noLegs_0_1_0.set(LegMaturityDate_53);
      InstrumentLeg_53.insert(LegMaturityDate_53.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_53("MONTHYEAR_991819557");
      noLegs_0_1_0.set(LegMaturityMonthYear_53);
      InstrumentLeg_53.insert(LegMaturityMonthYear_53.getString());
      FIX::LegMaturityTime LegMaturityTime_53("TZTIMEONLY_1129041460");
      noLegs_0_1_0.set(LegMaturityTime_53);
      InstrumentLeg_53.insert(LegMaturityTime_53.getString());
      FIX::LegOptAttribute LegOptAttribute_53('1');
      noLegs_0_1_0.set(LegOptAttribute_53);
      InstrumentLeg_53.insert(LegOptAttribute_53.getString());
      FIX::LegOptionRatio LegOptionRatio_53;
      LegOptionRatio_53.setString("3105166");
      noLegs_0_1_0.set(LegOptionRatio_53);
      InstrumentLeg_53.insert(LegOptionRatio_53.getString());
      FIX::LegPool LegPool_53("STRING_897212310");
      noLegs_0_1_0.set(LegPool_53);
      InstrumentLeg_53.insert(LegPool_53.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_53("STRING_1375112374");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_53);
      InstrumentLeg_53.insert(LegPriceUnitOfMeasure_53.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_53;
      LegPriceUnitOfMeasureQty_53.setString("5090662");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_53);
      InstrumentLeg_53.insert(LegPriceUnitOfMeasureQty_53.getString());
      FIX::LegProduct LegProduct_53(2128824196);
      noLegs_0_1_0.set(LegProduct_53);
      InstrumentLeg_53.insert(LegProduct_53.getString());
      FIX::LegPutOrCall LegPutOrCall_53(1043250745);
      noLegs_0_1_0.set(LegPutOrCall_53);
      InstrumentLeg_53.insert(LegPutOrCall_53.getString());
      FIX::LegRatioQty LegRatioQty_53;
      LegRatioQty_53.setString("4910846");
      noLegs_0_1_0.set(LegRatioQty_53);
      InstrumentLeg_53.insert(LegRatioQty_53.getString());
      FIX::LegRedemptionDate LegRedemptionDate_53("LOCALMKTDATE_1575725138");
      noLegs_0_1_0.set(LegRedemptionDate_53);
      InstrumentLeg_53.insert(LegRedemptionDate_53.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_53("STRING_957001813");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_53);
      InstrumentLeg_53.insert(LegRepoCollateralSecurityType_53.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_53;
      LegRepurchaseRate_53.setString("24.920000");
      noLegs_0_1_0.set(LegRepurchaseRate_53);
      InstrumentLeg_53.insert(LegRepurchaseRate_53.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_53(661768634);
      noLegs_0_1_0.set(LegRepurchaseTerm_53);
      InstrumentLeg_53.insert(LegRepurchaseTerm_53.getString());
      FIX::LegSecurityDesc LegSecurityDesc_53("STRING_1690556112");
      noLegs_0_1_0.set(LegSecurityDesc_53);
      InstrumentLeg_53.insert(LegSecurityDesc_53.getString());
      FIX::LegSecurityExchange LegSecurityExchange_53("EXCHANGE_1388732356");
      noLegs_0_1_0.set(LegSecurityExchange_53);
      InstrumentLeg_53.insert(LegSecurityExchange_53.getString());
      FIX::LegSecurityID LegSecurityID_53("STRING_128606126");
      noLegs_0_1_0.set(LegSecurityID_53);
      InstrumentLeg_53.insert(LegSecurityID_53.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_53("STRING_1297296471");
      noLegs_0_1_0.set(LegSecurityIDSource_53);
      InstrumentLeg_53.insert(LegSecurityIDSource_53.getString());
      FIX::LegSecuritySubType LegSecuritySubType_53("STRING_1997822629");
      noLegs_0_1_0.set(LegSecuritySubType_53);
      InstrumentLeg_53.insert(LegSecuritySubType_53.getString());
      FIX::LegSecurityType LegSecurityType_53("STRING_1485244996");
      noLegs_0_1_0.set(LegSecurityType_53);
      InstrumentLeg_53.insert(LegSecurityType_53.getString());
      FIX::LegSide LegSide_53('5');
      noLegs_0_1_0.set(LegSide_53);
      InstrumentLeg_53.insert(LegSide_53.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_53("STRING_865921933");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_53);
      InstrumentLeg_53.insert(LegStateOrProvinceOfIssue_53.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_53("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_53);
      InstrumentLeg_53.insert(LegStrikeCurrency_53.getString());
      FIX::LegStrikePrice LegStrikePrice_53;
      LegStrikePrice_53.setString("14029105");
      noLegs_0_1_0.set(LegStrikePrice_53);
      InstrumentLeg_53.insert(LegStrikePrice_53.getString());
      FIX::LegSymbol LegSymbol_53("STRING_1514987887");
      noLegs_0_1_0.set(LegSymbol_53);
      InstrumentLeg_53.insert(LegSymbol_53.getString());
      FIX::LegSymbolSfx LegSymbolSfx_53("STRING_632111180");
      noLegs_0_1_0.set(LegSymbolSfx_53);
      InstrumentLeg_53.insert(LegSymbolSfx_53.getString());
      FIX::LegTimeUnit LegTimeUnit_53("STRING_566380698");
      noLegs_0_1_0.set(LegTimeUnit_53);
      InstrumentLeg_53.insert(LegTimeUnit_53.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_53("STRING_56256639");
      noLegs_0_1_0.set(LegUnitOfMeasure_53);
      InstrumentLeg_53.insert(LegUnitOfMeasure_53.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_53;
      LegUnitOfMeasureQty_53.setString("286250");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_53);
      InstrumentLeg_53.insert(LegUnitOfMeasureQty_53.getString());
      all_values.push_back(InstrumentLeg_53);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_111;
        FIX::LegSecurityAltID LegSecurityAltID_111("STRING_1048076196");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_111);
        LegSecAltIDGrp_NoLegSecurityAltID_111.insert(LegSecurityAltID_111.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_111("STRING_1157666540");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_111);
        LegSecAltIDGrp_NoLegSecurityAltID_111.insert(LegSecurityAltIDSource_111.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_111);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_112;
        FIX::LegSecurityAltID LegSecurityAltID_112("STRING_1329209292");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_112);
        LegSecAltIDGrp_NoLegSecurityAltID_112.insert(LegSecurityAltID_112.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_112("STRING_1358592886");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_112);
        LegSecAltIDGrp_NoLegSecurityAltID_112.insert(LegSecurityAltIDSource_112.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_112);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_33;
    FIX::AttachmentPoint AttachmentPoint_33;
    AttachmentPoint_33.setString("88.500000");
    noRelatedSym_0_0.set(AttachmentPoint_33);
    Instrument_33.insert(AttachmentPoint_33.getString());
    FIX::CFICode CFICode_33("STRING_556838018");
    noRelatedSym_0_0.set(CFICode_33);
    Instrument_33.insert(CFICode_33.getString());
    FIX::CPProgram CPProgram_33(99);
    noRelatedSym_0_0.set(CPProgram_33);
    Instrument_33.insert(CPProgram_33.getString());
    FIX::CPRegType CPRegType_33("STRING_2036219399");
    noRelatedSym_0_0.set(CPRegType_33);
    Instrument_33.insert(CPRegType_33.getString());
    FIX::CapPrice CapPrice_33;
    CapPrice_33.setString("16000887");
    noRelatedSym_0_0.set(CapPrice_33);
    Instrument_33.insert(CapPrice_33.getString());
    FIX::ContractMultiplier ContractMultiplier_33;
    ContractMultiplier_33.setString("2112600");
    noRelatedSym_0_0.set(ContractMultiplier_33);
    Instrument_33.insert(ContractMultiplier_33.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_33(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_33);
    Instrument_33.insert(ContractMultiplierUnit_33.getString());
    FIX::ContractSettlMonth ContractSettlMonth_33("MONTHYEAR_409606928");
    noRelatedSym_0_0.set(ContractSettlMonth_33);
    Instrument_33.insert(ContractSettlMonth_33.getString());
    FIX::CountryOfIssue CountryOfIssue_33("COUNTRY_677272546");
    noRelatedSym_0_0.set(CountryOfIssue_33);
    Instrument_33.insert(CountryOfIssue_33.getString());
    FIX::CouponPaymentDate CouponPaymentDate_33("LOCALMKTDATE_2126229524");
    noRelatedSym_0_0.set(CouponPaymentDate_33);
    Instrument_33.insert(CouponPaymentDate_33.getString());
    FIX::CouponRate CouponRate_33;
    CouponRate_33.setString("30.410000");
    noRelatedSym_0_0.set(CouponRate_33);
    Instrument_33.insert(CouponRate_33.getString());
    FIX::CreditRating CreditRating_33("STRING_2066004902");
    noRelatedSym_0_0.set(CreditRating_33);
    Instrument_33.insert(CreditRating_33.getString());
    FIX::DatedDate DatedDate_33("LOCALMKTDATE_107352002");
    noRelatedSym_0_0.set(DatedDate_33);
    Instrument_33.insert(DatedDate_33.getString());
    FIX::DetachmentPoint DetachmentPoint_33;
    DetachmentPoint_33.setString("58.640000");
    noRelatedSym_0_0.set(DetachmentPoint_33);
    Instrument_33.insert(DetachmentPoint_33.getString());
    FIX::EncodedIssuer EncodedIssuer_33("DATA_1916343883");
    noRelatedSym_0_0.set(EncodedIssuer_33);
    Instrument_33.insert(EncodedIssuer_33.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_33(1592596999);
    noRelatedSym_0_0.set(EncodedIssuerLen_33);
    Instrument_33.insert(EncodedIssuerLen_33.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_33("DATA_1771253737");
    noRelatedSym_0_0.set(EncodedSecurityDesc_33);
    Instrument_33.insert(EncodedSecurityDesc_33.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_33(634782169);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_33);
    Instrument_33.insert(EncodedSecurityDescLen_33.getString());
    FIX::ExerciseStyle ExerciseStyle_33(2);
    noRelatedSym_0_0.set(ExerciseStyle_33);
    Instrument_33.insert(ExerciseStyle_33.getString());
    FIX::Factor Factor_33;
    Factor_33.setString("19373317");
    noRelatedSym_0_0.set(Factor_33);
    Instrument_33.insert(Factor_33.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_33(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_33);
    Instrument_33.insert(FlexProductEligibilityIndicator_33.getString());
    FIX::FlexibleIndicator FlexibleIndicator_33(true);
    noRelatedSym_0_0.set(FlexibleIndicator_33);
    Instrument_33.insert(FlexibleIndicator_33.getString());
    FIX::FloorPrice FloorPrice_33;
    FloorPrice_33.setString("4219592");
    noRelatedSym_0_0.set(FloorPrice_33);
    Instrument_33.insert(FloorPrice_33.getString());
    FIX::FlowScheduleType FlowScheduleType_33(0);
    noRelatedSym_0_0.set(FlowScheduleType_33);
    Instrument_33.insert(FlowScheduleType_33.getString());
    FIX::InstrRegistry InstrRegistry_33("STRING_309167141");
    noRelatedSym_0_0.set(InstrRegistry_33);
    Instrument_33.insert(InstrRegistry_33.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_33('4');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_33);
    Instrument_33.insert(InstrmtAssignmentMethod_33.getString());
    FIX::InterestAccrualDate InterestAccrualDate_33("LOCALMKTDATE_2039691257");
    noRelatedSym_0_0.set(InterestAccrualDate_33);
    Instrument_33.insert(InterestAccrualDate_33.getString());
    FIX::IssueDate IssueDate_33("LOCALMKTDATE_1357243338");
    noRelatedSym_0_0.set(IssueDate_33);
    Instrument_33.insert(IssueDate_33.getString());
    FIX::Issuer Issuer_33("STRING_1608250888");
    noRelatedSym_0_0.set(Issuer_33);
    Instrument_33.insert(Issuer_33.getString());
    FIX::ListMethod ListMethod_33(1);
    noRelatedSym_0_0.set(ListMethod_33);
    Instrument_33.insert(ListMethod_33.getString());
    FIX::LocaleOfIssue LocaleOfIssue_33("STRING_568352576");
    noRelatedSym_0_0.set(LocaleOfIssue_33);
    Instrument_33.insert(LocaleOfIssue_33.getString());
    FIX::MaturityDate MaturityDate_33("LOCALMKTDATE_1515646091");
    noRelatedSym_0_0.set(MaturityDate_33);
    Instrument_33.insert(MaturityDate_33.getString());
    FIX::MaturityMonthYear MaturityMonthYear_33("MONTHYEAR_1778254919");
    noRelatedSym_0_0.set(MaturityMonthYear_33);
    Instrument_33.insert(MaturityMonthYear_33.getString());
    FIX::MaturityTime MaturityTime_33("TZTIMEONLY_288528029");
    noRelatedSym_0_0.set(MaturityTime_33);
    Instrument_33.insert(MaturityTime_33.getString());
    FIX::MinPriceIncrement MinPriceIncrement_33;
    MinPriceIncrement_33.setString("14043818");
    noRelatedSym_0_0.set(MinPriceIncrement_33);
    Instrument_33.insert(MinPriceIncrement_33.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_33;
    MinPriceIncrementAmount_33.setString("12308600");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_33);
    Instrument_33.insert(MinPriceIncrementAmount_33.getString());
    FIX::NTPositionLimit NTPositionLimit_33(499788082);
    noRelatedSym_0_0.set(NTPositionLimit_33);
    Instrument_33.insert(NTPositionLimit_33.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_33;
    NotionalPercentageOutstanding_33.setString("90.830000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_33);
    Instrument_33.insert(NotionalPercentageOutstanding_33.getString());
    FIX::OptAttribute OptAttribute_33('1');
    noRelatedSym_0_0.set(OptAttribute_33);
    Instrument_33.insert(OptAttribute_33.getString());
    FIX::OptPayoutAmount OptPayoutAmount_33;
    OptPayoutAmount_33.setString("11770606");
    noRelatedSym_0_0.set(OptPayoutAmount_33);
    Instrument_33.insert(OptPayoutAmount_33.getString());
    FIX::OptPayoutType OptPayoutType_33(3);
    noRelatedSym_0_0.set(OptPayoutType_33);
    Instrument_33.insert(OptPayoutType_33.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_33;
    OriginalNotionalPercentageOutstanding_33.setString("63.560000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_33);
    Instrument_33.insert(OriginalNotionalPercentageOutstanding_33.getString());
    FIX::Pool Pool_33("STRING_1095581883");
    noRelatedSym_0_0.set(Pool_33);
    Instrument_33.insert(Pool_33.getString());
    FIX::PositionLimit PositionLimit_33(807456962);
    noRelatedSym_0_0.set(PositionLimit_33);
    Instrument_33.insert(PositionLimit_33.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_33("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_33);
    Instrument_33.insert(PriceQuoteMethod_33.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_33("STRING_864442118");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_33);
    Instrument_33.insert(PriceUnitOfMeasure_33.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_33;
    PriceUnitOfMeasureQty_33.setString("2525703");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_33);
    Instrument_33.insert(PriceUnitOfMeasureQty_33.getString());
    FIX::Product Product_35(1);
    noRelatedSym_0_0.set(Product_35);
    Instrument_33.insert(Product_35.getString());
    FIX::ProductComplex ProductComplex_33("STRING_1499224287");
    noRelatedSym_0_0.set(ProductComplex_33);
    Instrument_33.insert(ProductComplex_33.getString());
    FIX::PutOrCall PutOrCall_33(1);
    noRelatedSym_0_0.set(PutOrCall_33);
    Instrument_33.insert(PutOrCall_33.getString());
    FIX::RedemptionDate RedemptionDate_33("LOCALMKTDATE_109256750");
    noRelatedSym_0_0.set(RedemptionDate_33);
    Instrument_33.insert(RedemptionDate_33.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_33("STRING_1389433384");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_33);
    Instrument_33.insert(RepoCollateralSecurityType_33.getString());
    FIX::RepurchaseRate RepurchaseRate_33;
    RepurchaseRate_33.setString("70.770000");
    noRelatedSym_0_0.set(RepurchaseRate_33);
    Instrument_33.insert(RepurchaseRate_33.getString());
    FIX::RepurchaseTerm RepurchaseTerm_33(531216019);
    noRelatedSym_0_0.set(RepurchaseTerm_33);
    Instrument_33.insert(RepurchaseTerm_33.getString());
    FIX::RestructuringType RestructuringType_33("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_33);
    Instrument_33.insert(RestructuringType_33.getString());
    FIX::SecurityDesc SecurityDesc_33("STRING_1700054219");
    noRelatedSym_0_0.set(SecurityDesc_33);
    Instrument_33.insert(SecurityDesc_33.getString());
    FIX::SecurityExchange SecurityExchange_33("EXCHANGE_981800367");
    noRelatedSym_0_0.set(SecurityExchange_33);
    Instrument_33.insert(SecurityExchange_33.getString());
    FIX::SecurityGroup SecurityGroup_33("STRING_1738230788");
    noRelatedSym_0_0.set(SecurityGroup_33);
    Instrument_33.insert(SecurityGroup_33.getString());
    FIX::SecurityID SecurityID_33("STRING_909813909");
    noRelatedSym_0_0.set(SecurityID_33);
    Instrument_33.insert(SecurityID_33.getString());
    FIX::SecurityIDSource SecurityIDSource_33("STRING_B");
    noRelatedSym_0_0.set(SecurityIDSource_33);
    Instrument_33.insert(SecurityIDSource_33.getString());
    FIX::SecurityStatus SecurityStatus_33("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_33);
    Instrument_33.insert(SecurityStatus_33.getString());
    FIX::SecuritySubType SecuritySubType_34("STRING_1478166485");
    noRelatedSym_0_0.set(SecuritySubType_34);
    Instrument_33.insert(SecuritySubType_34.getString());
    FIX::SecurityType SecurityType_35("STRING_TIPS");
    noRelatedSym_0_0.set(SecurityType_35);
    Instrument_33.insert(SecurityType_35.getString());
    FIX::Seniority Seniority_33("STRING_SD");
    noRelatedSym_0_0.set(Seniority_33);
    Instrument_33.insert(Seniority_33.getString());
    FIX::SettlMethod SettlMethod_33('C');
    noRelatedSym_0_0.set(SettlMethod_33);
    Instrument_33.insert(SettlMethod_33.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_33("STRING_1215111893");
    noRelatedSym_0_0.set(SettleOnOpenFlag_33);
    Instrument_33.insert(SettleOnOpenFlag_33.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_33("STRING_1673795347");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_33);
    Instrument_33.insert(StateOrProvinceOfIssue_33.getString());
    FIX::StrikeCurrency StrikeCurrency_33("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_33);
    Instrument_33.insert(StrikeCurrency_33.getString());
    FIX::StrikeMultiplier StrikeMultiplier_33;
    StrikeMultiplier_33.setString("11667786");
    noRelatedSym_0_0.set(StrikeMultiplier_33);
    Instrument_33.insert(StrikeMultiplier_33.getString());
    FIX::StrikePrice StrikePrice_33;
    StrikePrice_33.setString("12960595");
    noRelatedSym_0_0.set(StrikePrice_33);
    Instrument_33.insert(StrikePrice_33.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_33(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_33);
    Instrument_33.insert(StrikePriceBoundaryMethod_33.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_33;
    StrikePriceBoundaryPrecision_33.setString("13.700000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_33);
    Instrument_33.insert(StrikePriceBoundaryPrecision_33.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_33(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_33);
    Instrument_33.insert(StrikePriceDeterminationMethod_33.getString());
    FIX::StrikeValue StrikeValue_33;
    StrikeValue_33.setString("12965492");
    noRelatedSym_0_0.set(StrikeValue_33);
    Instrument_33.insert(StrikeValue_33.getString());
    FIX::Symbol Symbol_33("STRING_1308079942");
    noRelatedSym_0_0.set(Symbol_33);
    Instrument_33.insert(Symbol_33.getString());
    FIX::SymbolSfx SymbolSfx_33("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_33);
    Instrument_33.insert(SymbolSfx_33.getString());
    FIX::TimeUnit TimeUnit_33("STRING_Mo");
    noRelatedSym_0_0.set(TimeUnit_33);
    Instrument_33.insert(TimeUnit_33.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_33(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_33);
    Instrument_33.insert(UnderlyingPriceDeterminationMethod_33.getString());
    FIX::UnitOfMeasure UnitOfMeasure_33("STRING_MMbbl");
    noRelatedSym_0_0.set(UnitOfMeasure_33);
    Instrument_33.insert(UnitOfMeasure_33.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_33;
    UnitOfMeasureQty_33.setString("5396124");
    noRelatedSym_0_0.set(UnitOfMeasureQty_33);
    Instrument_33.insert(UnitOfMeasureQty_33.getString());
    FIX::ValuationMethod ValuationMethod_33("STRING_CDSD");
    noRelatedSym_0_0.set(ValuationMethod_33);
    Instrument_33.insert(ValuationMethod_33.getString());
    all_values.push_back(Instrument_33);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_67;
      FIX::ComplexEventCondition ComplexEventCondition_67(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_67);
      ComplexEvents_NoComplexEvents_67.insert(ComplexEventCondition_67.getString());
      FIX::ComplexEventPrice ComplexEventPrice_67;
      ComplexEventPrice_67.setString("1204777");
      noComplexEvents_0_1_0.set(ComplexEventPrice_67);
      ComplexEvents_NoComplexEvents_67.insert(ComplexEventPrice_67.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_67(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_67);
      ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceBoundaryMethod_67.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_67;
      ComplexEventPriceBoundaryPrecision_67.setString("1.390000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_67);
      ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceBoundaryPrecision_67.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_67(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_67);
      ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceTimeType_67.getString());
      FIX::ComplexEventType ComplexEventType_67(8);
      noComplexEvents_0_1_0.set(ComplexEventType_67);
      ComplexEvents_NoComplexEvents_67.insert(ComplexEventType_67.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_67;
      ComplexOptPayoutAmount_67.setString("2454004");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_67);
      ComplexEvents_NoComplexEvents_67.insert(ComplexOptPayoutAmount_67.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_67);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_138;
        FIX::ComplexEventEndDate ComplexEventEndDate_138(FIX::UTCTIMESTAMP(21, 11, 12, 7, 9, 2001));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_138);
        ComplexEventDates_NoComplexEventDates_138.insert(ComplexEventEndDate_138.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_138(FIX::UTCTIMESTAMP(5, 13, 48, 9, 12, 2004));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_138);
        ComplexEventDates_NoComplexEventDates_138.insert(ComplexEventStartDate_138.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_138);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_286;
          FIX::ComplexEventEndTime ComplexEventEndTime_286(FIX::UTCTIMEONLY(11, 38, 34));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_286);
          ComplexEventTimes_NoComplexEventTimes_286.insert(ComplexEventEndTime_286.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_286(FIX::UTCTIMEONLY(20, 28, 47));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_286);
          ComplexEventTimes_NoComplexEventTimes_286.insert(ComplexEventStartTime_286.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_286);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_287;
          FIX::ComplexEventEndTime ComplexEventEndTime_287(FIX::UTCTIMEONLY(9, 25, 19));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_287);
          ComplexEventTimes_NoComplexEventTimes_287.insert(ComplexEventEndTime_287.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_287(FIX::UTCTIMEONLY(16, 59, 10));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_287);
          ComplexEventTimes_NoComplexEventTimes_287.insert(ComplexEventStartTime_287.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_287);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_288;
          FIX::ComplexEventEndTime ComplexEventEndTime_288(FIX::UTCTIMEONLY(12, 21, 16));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_288);
          ComplexEventTimes_NoComplexEventTimes_288.insert(ComplexEventEndTime_288.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_288(FIX::UTCTIMEONLY(22, 28, 39));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_288);
          ComplexEventTimes_NoComplexEventTimes_288.insert(ComplexEventStartTime_288.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_288);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_139;
        FIX::ComplexEventEndDate ComplexEventEndDate_139(FIX::UTCTIMESTAMP(5, 27, 28, 9, 1, 2007));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_139);
        ComplexEventDates_NoComplexEventDates_139.insert(ComplexEventEndDate_139.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_139(FIX::UTCTIMESTAMP(15, 13, 9, 16, 10, 2011));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_139);
        ComplexEventDates_NoComplexEventDates_139.insert(ComplexEventStartDate_139.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_139);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_289;
          FIX::ComplexEventEndTime ComplexEventEndTime_289(FIX::UTCTIMEONLY(18, 53, 13));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_289);
          ComplexEventTimes_NoComplexEventTimes_289.insert(ComplexEventEndTime_289.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_289(FIX::UTCTIMEONLY(9, 13, 53));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_289);
          ComplexEventTimes_NoComplexEventTimes_289.insert(ComplexEventStartTime_289.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_289);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_290;
          FIX::ComplexEventEndTime ComplexEventEndTime_290(FIX::UTCTIMEONLY(5, 7, 17));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_290);
          ComplexEventTimes_NoComplexEventTimes_290.insert(ComplexEventEndTime_290.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_290(FIX::UTCTIMEONLY(17, 45, 0));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_290);
          ComplexEventTimes_NoComplexEventTimes_290.insert(ComplexEventStartTime_290.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_290);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_291;
          FIX::ComplexEventEndTime ComplexEventEndTime_291(FIX::UTCTIMEONLY(19, 19, 0));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_291);
          ComplexEventTimes_NoComplexEventTimes_291.insert(ComplexEventEndTime_291.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_291(FIX::UTCTIMEONLY(23, 35, 43));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_291);
          ComplexEventTimes_NoComplexEventTimes_291.insert(ComplexEventStartTime_291.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_291);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_140;
        FIX::ComplexEventEndDate ComplexEventEndDate_140(FIX::UTCTIMESTAMP(12, 44, 2, 1, 2, 2002));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_140);
        ComplexEventDates_NoComplexEventDates_140.insert(ComplexEventEndDate_140.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_140(FIX::UTCTIMESTAMP(11, 31, 17, 18, 9, 2004));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_140);
        ComplexEventDates_NoComplexEventDates_140.insert(ComplexEventStartDate_140.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_140);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_292;
          FIX::ComplexEventEndTime ComplexEventEndTime_292(FIX::UTCTIMEONLY(3, 43, 30));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_292);
          ComplexEventTimes_NoComplexEventTimes_292.insert(ComplexEventEndTime_292.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_292(FIX::UTCTIMEONLY(0, 8, 8));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_292);
          ComplexEventTimes_NoComplexEventTimes_292.insert(ComplexEventStartTime_292.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_292);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_61;
      FIX::EventDate EventDate_61("LOCALMKTDATE_1988163627");
      noEvents_0_1_0.set(EventDate_61);
      EvntGrp_NoEvents_61.insert(EventDate_61.getString());
      FIX::EventPx EventPx_61;
      EventPx_61.setString("4615358");
      noEvents_0_1_0.set(EventPx_61);
      EvntGrp_NoEvents_61.insert(EventPx_61.getString());
      FIX::EventText EventText_61("STRING_1715736504");
      noEvents_0_1_0.set(EventText_61);
      EvntGrp_NoEvents_61.insert(EventText_61.getString());
      FIX::EventTime EventTime_61(FIX::UTCTIMESTAMP(7, 59, 10, 10, 12, 2006));
      noEvents_0_1_0.set(EventTime_61);
      EvntGrp_NoEvents_61.insert(EventTime_61.getString());
      FIX::EventType EventType_61(1);
      noEvents_0_1_0.set(EventType_61);
      EvntGrp_NoEvents_61.insert(EventType_61.getString());
      all_values.push_back(EvntGrp_NoEvents_61);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_61;
      FIX::InstrumentPartyID InstrumentPartyID_61("STRING_1052261519");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_61);
      InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyID_61.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_61('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_61);
      InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyIDSource_61.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_61(1049059724);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_61);
      InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyRole_61.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_61);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132;
        FIX::InstrumentPartySubID InstrumentPartySubID_132("STRING_1505711141");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_132);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132.insert(InstrumentPartySubID_132.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_132(849978233);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_132);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132.insert(InstrumentPartySubIDType_132.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133;
        FIX::InstrumentPartySubID InstrumentPartySubID_133("STRING_1179713252");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_133);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133.insert(InstrumentPartySubID_133.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_133(1695827461);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_133);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133.insert(InstrumentPartySubIDType_133.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_69;
      FIX::SecurityAltID SecurityAltID_69("STRING_772317960");
      noSecurityAltID_0_1_0.set(SecurityAltID_69);
      SecAltIDGrp_NoSecurityAltID_69.insert(SecurityAltID_69.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_69("STRING_881053874");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_69);
      SecAltIDGrp_NoSecurityAltID_69.insert(SecurityAltIDSource_69.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_69);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_70;
      FIX::SecurityAltID SecurityAltID_70("STRING_217351202");
      noSecurityAltID_0_1_1.set(SecurityAltID_70);
      SecAltIDGrp_NoSecurityAltID_70.insert(SecurityAltID_70.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_70("STRING_511013735");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_70);
      SecAltIDGrp_NoSecurityAltID_70.insert(SecurityAltIDSource_70.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_70);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_66;
    FIX::SecurityXML SecurityXML_67("XMLDATA_1777439445");
    noRelatedSym_0_0.set(SecurityXML_67);
    FIX::SecurityXMLLen SecurityXMLLen_33(737434399);
    noRelatedSym_0_0.set(SecurityXMLLen_33);
    FIX::SecurityXMLSchema SecurityXMLSchema_33("STRING_429285567");
    noRelatedSym_0_0.set(SecurityXMLSchema_33);
    SecurityXML_66.insert(SecurityXMLSchema_33.getString());
    all_values.push_back(SecurityXML_66);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_49;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_49("DATA_1228690347");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingIssuer_49.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_49(772809771);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingIssuerLen_49.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_49("DATA_272250304");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingSecurityDesc_49.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_49(1690226147);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingSecurityDescLen_49.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_49;
      UnderlyingAdjustedQuantity_49.setString("3410626");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_49);
      UnderlyingInstrument_49.insert(UnderlyingAdjustedQuantity_49.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_49;
      UnderlyingAllocationPercent_49.setString("39.390000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_49);
      UnderlyingInstrument_49.insert(UnderlyingAllocationPercent_49.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_49;
      UnderlyingAttachmentPoint_49.setString("56.910000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_49);
      UnderlyingInstrument_49.insert(UnderlyingAttachmentPoint_49.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_49("STRING_2078836926");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_49);
      UnderlyingInstrument_49.insert(UnderlyingCFICode_49.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_49("STRING_527789201");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_49);
      UnderlyingInstrument_49.insert(UnderlyingCPProgram_49.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_49("STRING_1459266889");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_49);
      UnderlyingInstrument_49.insert(UnderlyingCPRegType_49.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_49;
      UnderlyingCapValue_49.setString("17404596");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_49);
      UnderlyingInstrument_49.insert(UnderlyingCapValue_49.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_49;
      UnderlyingCashAmount_49.setString("17856716");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_49);
      UnderlyingInstrument_49.insert(UnderlyingCashAmount_49.getString());
      FIX::UnderlyingCashType UnderlyingCashType_49("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_49);
      UnderlyingInstrument_49.insert(UnderlyingCashType_49.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_49;
      UnderlyingContractMultiplier_49.setString("13143063");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_49);
      UnderlyingInstrument_49.insert(UnderlyingContractMultiplier_49.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_49(690449486);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_49);
      UnderlyingInstrument_49.insert(UnderlyingContractMultiplierUnit_49.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_49("COUNTRY_222559832");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingCountryOfIssue_49.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_49("LOCALMKTDATE_215882402");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_49);
      UnderlyingInstrument_49.insert(UnderlyingCouponPaymentDate_49.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_49;
      UnderlyingCouponRate_49.setString("44.560000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_49);
      UnderlyingInstrument_49.insert(UnderlyingCouponRate_49.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_49("STRING_1728270973");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_49);
      UnderlyingInstrument_49.insert(UnderlyingCreditRating_49.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_49("USD");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_49);
      UnderlyingInstrument_49.insert(UnderlyingCurrency_49.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_49;
      UnderlyingCurrentValue_49.setString("12766147");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_49);
      UnderlyingInstrument_49.insert(UnderlyingCurrentValue_49.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_49;
      UnderlyingDetachmentPoint_49.setString("69.220000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_49);
      UnderlyingInstrument_49.insert(UnderlyingDetachmentPoint_49.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_49;
      UnderlyingDirtyPrice_49.setString("4704320");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_49);
      UnderlyingInstrument_49.insert(UnderlyingDirtyPrice_49.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_49;
      UnderlyingEndPrice_49.setString("101850");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_49);
      UnderlyingInstrument_49.insert(UnderlyingEndPrice_49.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_49;
      UnderlyingEndValue_49.setString("15628981");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_49);
      UnderlyingInstrument_49.insert(UnderlyingEndValue_49.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_49(981445756);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_49);
      UnderlyingInstrument_49.insert(UnderlyingExerciseStyle_49.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_49;
      UnderlyingFXRate_49.setString("17876244");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_49);
      UnderlyingInstrument_49.insert(UnderlyingFXRate_49.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_49('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_49);
      UnderlyingInstrument_49.insert(UnderlyingFXRateCalc_49.getString());
      FIX::UnderlyingFactor UnderlyingFactor_49;
      UnderlyingFactor_49.setString("14107313");
      noUnderlyings_0_1_0.set(UnderlyingFactor_49);
      UnderlyingInstrument_49.insert(UnderlyingFactor_49.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_49(71711135);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_49);
      UnderlyingInstrument_49.insert(UnderlyingFlowScheduleType_49.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_49("STRING_1381539223");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_49);
      UnderlyingInstrument_49.insert(UnderlyingInstrRegistry_49.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_49("LOCALMKTDATE_36057447");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_49);
      UnderlyingInstrument_49.insert(UnderlyingIssueDate_49.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_49("STRING_343961439");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_49);
      UnderlyingInstrument_49.insert(UnderlyingIssuer_49.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_49("STRING_924281722");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingLocaleOfIssue_49.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_49("LOCALMKTDATE_377120075");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityDate_49.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_49("MONTHYEAR_182001730");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityMonthYear_49.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_49("TZTIMEONLY_1752457413");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityTime_49.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_49;
      UnderlyingNotionalPercentageOutstanding_49.setString("33.530000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_49);
      UnderlyingInstrument_49.insert(UnderlyingNotionalPercentageOutstanding_49.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_49('7');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_49);
      UnderlyingInstrument_49.insert(UnderlyingOptAttribute_49.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_49;
      UnderlyingOriginalNotionalPercentageOutstanding_49.setString("6.540000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_49);
      UnderlyingInstrument_49.insert(UnderlyingOriginalNotionalPercentageOutstanding_49.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_49("STRING_2048932999");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_49);
      UnderlyingInstrument_49.insert(UnderlyingPriceUnitOfMeasure_49.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_49;
      UnderlyingPriceUnitOfMeasureQty_49.setString("3479788");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_49);
      UnderlyingInstrument_49.insert(UnderlyingPriceUnitOfMeasureQty_49.getString());
      FIX::UnderlyingProduct UnderlyingProduct_49(1297984656);
      noUnderlyings_0_1_0.set(UnderlyingProduct_49);
      UnderlyingInstrument_49.insert(UnderlyingProduct_49.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_49(1215755677);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_49);
      UnderlyingInstrument_49.insert(UnderlyingPutOrCall_49.getString());
      FIX::UnderlyingPx UnderlyingPx_49;
      UnderlyingPx_49.setString("10384283");
      noUnderlyings_0_1_0.set(UnderlyingPx_49);
      UnderlyingInstrument_49.insert(UnderlyingPx_49.getString());
      FIX::UnderlyingQty UnderlyingQty_49;
      UnderlyingQty_49.setString("15205444");
      noUnderlyings_0_1_0.set(UnderlyingQty_49);
      UnderlyingInstrument_49.insert(UnderlyingQty_49.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_49("LOCALMKTDATE_1431638079");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_49);
      UnderlyingInstrument_49.insert(UnderlyingRedemptionDate_49.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_49("STRING_1704312840");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_49);
      UnderlyingInstrument_49.insert(UnderlyingRepoCollateralSecurityType_49.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_49;
      UnderlyingRepurchaseRate_49.setString("18.130000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_49);
      UnderlyingInstrument_49.insert(UnderlyingRepurchaseRate_49.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_49(350015066);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_49);
      UnderlyingInstrument_49.insert(UnderlyingRepurchaseTerm_49.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_49("STRING_1402426901");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_49);
      UnderlyingInstrument_49.insert(UnderlyingRestructuringType_49.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_49("STRING_230462952");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityDesc_49.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_49("EXCHANGE_1695561988");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityExchange_49.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_49("STRING_1872858922");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityID_49.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_49("STRING_240647966");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityIDSource_49.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_49("STRING_1110976464");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_49);
      UnderlyingInstrument_49.insert(UnderlyingSecuritySubType_49.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_49("STRING_706821030");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityType_49.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_49("STRING_2028272424");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_49);
      UnderlyingInstrument_49.insert(UnderlyingSeniority_49.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_49("STRING_1263825340");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_49);
      UnderlyingInstrument_49.insert(UnderlyingSettlMethod_49.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_49(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_49);
      UnderlyingInstrument_49.insert(UnderlyingSettlementType_49.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_49;
      UnderlyingStartValue_49.setString("20999835");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_49);
      UnderlyingInstrument_49.insert(UnderlyingStartValue_49.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_49("STRING_497880915");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingStateOrProvinceOfIssue_49.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_49("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_49);
      UnderlyingInstrument_49.insert(UnderlyingStrikeCurrency_49.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_49;
      UnderlyingStrikePrice_49.setString("14221626");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_49);
      UnderlyingInstrument_49.insert(UnderlyingStrikePrice_49.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_49("STRING_383246229");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_49);
      UnderlyingInstrument_49.insert(UnderlyingSymbol_49.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_49("STRING_478463082");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_49);
      UnderlyingInstrument_49.insert(UnderlyingSymbolSfx_49.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_49("STRING_1027136403");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_49);
      UnderlyingInstrument_49.insert(UnderlyingTimeUnit_49.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_49("STRING_691719582");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_49);
      UnderlyingInstrument_49.insert(UnderlyingUnitOfMeasure_49.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_49;
      UnderlyingUnitOfMeasureQty_49.setString("11882540");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_49);
      UnderlyingInstrument_49.insert(UnderlyingUnitOfMeasureQty_49.getString());
      all_values.push_back(UnderlyingInstrument_49);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_102;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_102("STRING_593168933");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_102);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_102.insert(UnderlyingSecurityAltID_102.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_102("STRING_1536232912");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_102);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_102.insert(UnderlyingSecurityAltIDSource_102.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_103;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_103("STRING_1241878065");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_103);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_103.insert(UnderlyingSecurityAltID_103.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_103("STRING_1808924610");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_103);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_103.insert(UnderlyingSecurityAltIDSource_103.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_104;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_104("STRING_427177648");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_104);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_104.insert(UnderlyingSecurityAltID_104.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_104("STRING_614938905");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_104);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_104.insert(UnderlyingSecurityAltIDSource_104.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_94;
        FIX::UnderlyingStipType UnderlyingStipType_94("STRING_2131490489");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_94);
        UnderlyingStipulations_NoUnderlyingStips_94.insert(UnderlyingStipType_94.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_94("STRING_1716270719");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_94);
        UnderlyingStipulations_NoUnderlyingStips_94.insert(UnderlyingStipValue_94.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_94);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_95;
        FIX::UnderlyingStipType UnderlyingStipType_95("STRING_1443094107");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_95);
        UnderlyingStipulations_NoUnderlyingStips_95.insert(UnderlyingStipType_95.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_95("STRING_1386433742");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_95);
        UnderlyingStipulations_NoUnderlyingStips_95.insert(UnderlyingStipValue_95.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_95);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_105;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_105("STRING_991172447");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_105);
        UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyID_105.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_105('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_105);
        UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyIDSource_105.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_105(39897989);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_105);
        UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyRole_105.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_105);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_216("STRING_1818630046");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_216);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216.insert(UnderlyingInstrumentPartySubID_216.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_216(2068170414);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_216);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216.insert(UnderlyingInstrumentPartySubIDType_216.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_106;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_106("STRING_1218490604");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_106);
        UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyID_106.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_106('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_106);
        UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyIDSource_106.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_106(2020670326);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_106);
        UndlyInstrumentParties_NoUndlyInstrumentParties_106.insert(UnderlyingInstrumentPartyRole_106.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_106);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_217("STRING_1794824907");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_217);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217.insert(UnderlyingInstrumentPartySubID_217.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_217(169648029);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_217);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217.insert(UnderlyingInstrumentPartySubIDType_217.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_218("STRING_991050508");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_218);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218.insert(UnderlyingInstrumentPartySubID_218.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_218(30587488);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_218);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218.insert(UnderlyingInstrumentPartySubIDType_218.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_219("STRING_648111111");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_219);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219.insert(UnderlyingInstrumentPartySubID_219.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_219(2018186911);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_219);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219.insert(UnderlyingInstrumentPartySubIDType_219.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_107;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_107("STRING_722307070");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_107);
        UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyID_107.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_107('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_107);
        UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyIDSource_107.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_107(1962080321);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_107);
        UndlyInstrumentParties_NoUndlyInstrumentParties_107.insert(UnderlyingInstrumentPartyRole_107.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_107);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_220("STRING_1225114389");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_220);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220.insert(UnderlyingInstrumentPartySubID_220.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_220(1056474738);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_220);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220.insert(UnderlyingInstrumentPartySubIDType_220.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_221("STRING_976916966");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_221);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221.insert(UnderlyingInstrumentPartySubID_221.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_221(1652292037);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_221);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221.insert(UnderlyingInstrumentPartySubIDType_221.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_1;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_1;
    FIX::Currency Currency_27("JPY");
    noRelatedSym_0_1.set(Currency_27);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(Currency_27.getString());
    FIX::MDEntrySize MDEntrySize_3;
    MDEntrySize_3.setString("16362988");
    noRelatedSym_0_1.set(MDEntrySize_3);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(MDEntrySize_3.getString());
    FIX::MDStreamID MDStreamID_3("STRING_1240200715");
    noRelatedSym_0_1.set(MDStreamID_3);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(MDStreamID_3.getString());
    FIX::QuoteType QuoteType_1(3);
    noRelatedSym_0_1.set(QuoteType_1);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(QuoteType_1.getString());
    FIX::SettlDate SettlDate_21("LOCALMKTDATE_875248972");
    noRelatedSym_0_1.set(SettlDate_21);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(SettlDate_21.getString());
    FIX::SettlType SettlType_15("STRING_B");
    noRelatedSym_0_1.set(SettlType_15);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(SettlType_15.getString());
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_54;
      FIX::EncodedLegIssuer EncodedLegIssuer_54("DATA_1987057988");
      noLegs_1_1_0.set(EncodedLegIssuer_54);
      InstrumentLeg_54.insert(EncodedLegIssuer_54.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_54(1079348728);
      noLegs_1_1_0.set(EncodedLegIssuerLen_54);
      InstrumentLeg_54.insert(EncodedLegIssuerLen_54.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_54("DATA_163960531");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_54);
      InstrumentLeg_54.insert(EncodedLegSecurityDesc_54.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_54(1658204387);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_54);
      InstrumentLeg_54.insert(EncodedLegSecurityDescLen_54.getString());
      FIX::LegCFICode LegCFICode_54("STRING_1000035494");
      noLegs_1_1_0.set(LegCFICode_54);
      InstrumentLeg_54.insert(LegCFICode_54.getString());
      FIX::LegContractMultiplier LegContractMultiplier_54;
      LegContractMultiplier_54.setString("13824511");
      noLegs_1_1_0.set(LegContractMultiplier_54);
      InstrumentLeg_54.insert(LegContractMultiplier_54.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_54(1299419492);
      noLegs_1_1_0.set(LegContractMultiplierUnit_54);
      InstrumentLeg_54.insert(LegContractMultiplierUnit_54.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_54("MONTHYEAR_873222172");
      noLegs_1_1_0.set(LegContractSettlMonth_54);
      InstrumentLeg_54.insert(LegContractSettlMonth_54.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_54("COUNTRY_951339006");
      noLegs_1_1_0.set(LegCountryOfIssue_54);
      InstrumentLeg_54.insert(LegCountryOfIssue_54.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_54("LOCALMKTDATE_946760751");
      noLegs_1_1_0.set(LegCouponPaymentDate_54);
      InstrumentLeg_54.insert(LegCouponPaymentDate_54.getString());
      FIX::LegCouponRate LegCouponRate_54;
      LegCouponRate_54.setString("2.010000");
      noLegs_1_1_0.set(LegCouponRate_54);
      InstrumentLeg_54.insert(LegCouponRate_54.getString());
      FIX::LegCreditRating LegCreditRating_54("STRING_1942389514");
      noLegs_1_1_0.set(LegCreditRating_54);
      InstrumentLeg_54.insert(LegCreditRating_54.getString());
      FIX::LegCurrency LegCurrency_54("CAN");
      noLegs_1_1_0.set(LegCurrency_54);
      InstrumentLeg_54.insert(LegCurrency_54.getString());
      FIX::LegDatedDate LegDatedDate_54("LOCALMKTDATE_1813092778");
      noLegs_1_1_0.set(LegDatedDate_54);
      InstrumentLeg_54.insert(LegDatedDate_54.getString());
      FIX::LegExerciseStyle LegExerciseStyle_54(1699655309);
      noLegs_1_1_0.set(LegExerciseStyle_54);
      InstrumentLeg_54.insert(LegExerciseStyle_54.getString());
      FIX::LegFactor LegFactor_54;
      LegFactor_54.setString("13798627");
      noLegs_1_1_0.set(LegFactor_54);
      InstrumentLeg_54.insert(LegFactor_54.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_54(1627689451);
      noLegs_1_1_0.set(LegFlowScheduleType_54);
      InstrumentLeg_54.insert(LegFlowScheduleType_54.getString());
      FIX::LegInstrRegistry LegInstrRegistry_54("STRING_867647665");
      noLegs_1_1_0.set(LegInstrRegistry_54);
      InstrumentLeg_54.insert(LegInstrRegistry_54.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_54("LOCALMKTDATE_457493531");
      noLegs_1_1_0.set(LegInterestAccrualDate_54);
      InstrumentLeg_54.insert(LegInterestAccrualDate_54.getString());
      FIX::LegIssueDate LegIssueDate_54("LOCALMKTDATE_536680541");
      noLegs_1_1_0.set(LegIssueDate_54);
      InstrumentLeg_54.insert(LegIssueDate_54.getString());
      FIX::LegIssuer LegIssuer_54("STRING_1844564632");
      noLegs_1_1_0.set(LegIssuer_54);
      InstrumentLeg_54.insert(LegIssuer_54.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_54("STRING_2109785568");
      noLegs_1_1_0.set(LegLocaleOfIssue_54);
      InstrumentLeg_54.insert(LegLocaleOfIssue_54.getString());
      FIX::LegMaturityDate LegMaturityDate_54("LOCALMKTDATE_60610537");
      noLegs_1_1_0.set(LegMaturityDate_54);
      InstrumentLeg_54.insert(LegMaturityDate_54.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_54("MONTHYEAR_1767076992");
      noLegs_1_1_0.set(LegMaturityMonthYear_54);
      InstrumentLeg_54.insert(LegMaturityMonthYear_54.getString());
      FIX::LegMaturityTime LegMaturityTime_54("TZTIMEONLY_1598600799");
      noLegs_1_1_0.set(LegMaturityTime_54);
      InstrumentLeg_54.insert(LegMaturityTime_54.getString());
      FIX::LegOptAttribute LegOptAttribute_54('1');
      noLegs_1_1_0.set(LegOptAttribute_54);
      InstrumentLeg_54.insert(LegOptAttribute_54.getString());
      FIX::LegOptionRatio LegOptionRatio_54;
      LegOptionRatio_54.setString("9851998");
      noLegs_1_1_0.set(LegOptionRatio_54);
      InstrumentLeg_54.insert(LegOptionRatio_54.getString());
      FIX::LegPool LegPool_54("STRING_326366123");
      noLegs_1_1_0.set(LegPool_54);
      InstrumentLeg_54.insert(LegPool_54.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_54("STRING_192778343");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_54);
      InstrumentLeg_54.insert(LegPriceUnitOfMeasure_54.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_54;
      LegPriceUnitOfMeasureQty_54.setString("11944950");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_54);
      InstrumentLeg_54.insert(LegPriceUnitOfMeasureQty_54.getString());
      FIX::LegProduct LegProduct_54(165940464);
      noLegs_1_1_0.set(LegProduct_54);
      InstrumentLeg_54.insert(LegProduct_54.getString());
      FIX::LegPutOrCall LegPutOrCall_54(1272127071);
      noLegs_1_1_0.set(LegPutOrCall_54);
      InstrumentLeg_54.insert(LegPutOrCall_54.getString());
      FIX::LegRatioQty LegRatioQty_54;
      LegRatioQty_54.setString("13584556");
      noLegs_1_1_0.set(LegRatioQty_54);
      InstrumentLeg_54.insert(LegRatioQty_54.getString());
      FIX::LegRedemptionDate LegRedemptionDate_54("LOCALMKTDATE_1824144851");
      noLegs_1_1_0.set(LegRedemptionDate_54);
      InstrumentLeg_54.insert(LegRedemptionDate_54.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_54("STRING_124678917");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_54);
      InstrumentLeg_54.insert(LegRepoCollateralSecurityType_54.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_54;
      LegRepurchaseRate_54.setString("30.960000");
      noLegs_1_1_0.set(LegRepurchaseRate_54);
      InstrumentLeg_54.insert(LegRepurchaseRate_54.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_54(976080695);
      noLegs_1_1_0.set(LegRepurchaseTerm_54);
      InstrumentLeg_54.insert(LegRepurchaseTerm_54.getString());
      FIX::LegSecurityDesc LegSecurityDesc_54("STRING_997901089");
      noLegs_1_1_0.set(LegSecurityDesc_54);
      InstrumentLeg_54.insert(LegSecurityDesc_54.getString());
      FIX::LegSecurityExchange LegSecurityExchange_54("EXCHANGE_1544762102");
      noLegs_1_1_0.set(LegSecurityExchange_54);
      InstrumentLeg_54.insert(LegSecurityExchange_54.getString());
      FIX::LegSecurityID LegSecurityID_54("STRING_1922841446");
      noLegs_1_1_0.set(LegSecurityID_54);
      InstrumentLeg_54.insert(LegSecurityID_54.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_54("STRING_2040771290");
      noLegs_1_1_0.set(LegSecurityIDSource_54);
      InstrumentLeg_54.insert(LegSecurityIDSource_54.getString());
      FIX::LegSecuritySubType LegSecuritySubType_54("STRING_1339667969");
      noLegs_1_1_0.set(LegSecuritySubType_54);
      InstrumentLeg_54.insert(LegSecuritySubType_54.getString());
      FIX::LegSecurityType LegSecurityType_54("STRING_752706037");
      noLegs_1_1_0.set(LegSecurityType_54);
      InstrumentLeg_54.insert(LegSecurityType_54.getString());
      FIX::LegSide LegSide_54('1');
      noLegs_1_1_0.set(LegSide_54);
      InstrumentLeg_54.insert(LegSide_54.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_54("STRING_1005277099");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_54);
      InstrumentLeg_54.insert(LegStateOrProvinceOfIssue_54.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_54("EUR");
      noLegs_1_1_0.set(LegStrikeCurrency_54);
      InstrumentLeg_54.insert(LegStrikeCurrency_54.getString());
      FIX::LegStrikePrice LegStrikePrice_54;
      LegStrikePrice_54.setString("4854829");
      noLegs_1_1_0.set(LegStrikePrice_54);
      InstrumentLeg_54.insert(LegStrikePrice_54.getString());
      FIX::LegSymbol LegSymbol_54("STRING_1172525364");
      noLegs_1_1_0.set(LegSymbol_54);
      InstrumentLeg_54.insert(LegSymbol_54.getString());
      FIX::LegSymbolSfx LegSymbolSfx_54("STRING_1274141628");
      noLegs_1_1_0.set(LegSymbolSfx_54);
      InstrumentLeg_54.insert(LegSymbolSfx_54.getString());
      FIX::LegTimeUnit LegTimeUnit_54("STRING_1022163443");
      noLegs_1_1_0.set(LegTimeUnit_54);
      InstrumentLeg_54.insert(LegTimeUnit_54.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_54("STRING_869606348");
      noLegs_1_1_0.set(LegUnitOfMeasure_54);
      InstrumentLeg_54.insert(LegUnitOfMeasure_54.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_54;
      LegUnitOfMeasureQty_54.setString("12364435");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_54);
      InstrumentLeg_54.insert(LegUnitOfMeasureQty_54.getString());
      all_values.push_back(InstrumentLeg_54);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_113;
        FIX::LegSecurityAltID LegSecurityAltID_113("STRING_489199692");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_113);
        LegSecAltIDGrp_NoLegSecurityAltID_113.insert(LegSecurityAltID_113.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_113("STRING_687560700");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_113);
        LegSecAltIDGrp_NoLegSecurityAltID_113.insert(LegSecurityAltIDSource_113.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_113);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_114;
        FIX::LegSecurityAltID LegSecurityAltID_114("STRING_236101585");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_114);
        LegSecAltIDGrp_NoLegSecurityAltID_114.insert(LegSecurityAltID_114.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_114("STRING_1474399503");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_114);
        LegSecAltIDGrp_NoLegSecurityAltID_114.insert(LegSecurityAltIDSource_114.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_114);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_34;
    FIX::AttachmentPoint AttachmentPoint_34;
    AttachmentPoint_34.setString("68.230000");
    noRelatedSym_0_1.set(AttachmentPoint_34);
    Instrument_34.insert(AttachmentPoint_34.getString());
    FIX::CFICode CFICode_34("STRING_428879928");
    noRelatedSym_0_1.set(CFICode_34);
    Instrument_34.insert(CFICode_34.getString());
    FIX::CPProgram CPProgram_34(99);
    noRelatedSym_0_1.set(CPProgram_34);
    Instrument_34.insert(CPProgram_34.getString());
    FIX::CPRegType CPRegType_34("STRING_1179867287");
    noRelatedSym_0_1.set(CPRegType_34);
    Instrument_34.insert(CPRegType_34.getString());
    FIX::CapPrice CapPrice_34;
    CapPrice_34.setString("17010069");
    noRelatedSym_0_1.set(CapPrice_34);
    Instrument_34.insert(CapPrice_34.getString());
    FIX::ContractMultiplier ContractMultiplier_34;
    ContractMultiplier_34.setString("18798665");
    noRelatedSym_0_1.set(ContractMultiplier_34);
    Instrument_34.insert(ContractMultiplier_34.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_34(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_34);
    Instrument_34.insert(ContractMultiplierUnit_34.getString());
    FIX::ContractSettlMonth ContractSettlMonth_34("MONTHYEAR_1825685916");
    noRelatedSym_0_1.set(ContractSettlMonth_34);
    Instrument_34.insert(ContractSettlMonth_34.getString());
    FIX::CountryOfIssue CountryOfIssue_34("COUNTRY_325805992");
    noRelatedSym_0_1.set(CountryOfIssue_34);
    Instrument_34.insert(CountryOfIssue_34.getString());
    FIX::CouponPaymentDate CouponPaymentDate_34("LOCALMKTDATE_1832609185");
    noRelatedSym_0_1.set(CouponPaymentDate_34);
    Instrument_34.insert(CouponPaymentDate_34.getString());
    FIX::CouponRate CouponRate_34;
    CouponRate_34.setString("33.570000");
    noRelatedSym_0_1.set(CouponRate_34);
    Instrument_34.insert(CouponRate_34.getString());
    FIX::CreditRating CreditRating_34("STRING_1870568094");
    noRelatedSym_0_1.set(CreditRating_34);
    Instrument_34.insert(CreditRating_34.getString());
    FIX::DatedDate DatedDate_34("LOCALMKTDATE_1607966983");
    noRelatedSym_0_1.set(DatedDate_34);
    Instrument_34.insert(DatedDate_34.getString());
    FIX::DetachmentPoint DetachmentPoint_34;
    DetachmentPoint_34.setString("10.000000");
    noRelatedSym_0_1.set(DetachmentPoint_34);
    Instrument_34.insert(DetachmentPoint_34.getString());
    FIX::EncodedIssuer EncodedIssuer_34("DATA_1062752415");
    noRelatedSym_0_1.set(EncodedIssuer_34);
    Instrument_34.insert(EncodedIssuer_34.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_34(213189372);
    noRelatedSym_0_1.set(EncodedIssuerLen_34);
    Instrument_34.insert(EncodedIssuerLen_34.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_34("DATA_6176307");
    noRelatedSym_0_1.set(EncodedSecurityDesc_34);
    Instrument_34.insert(EncodedSecurityDesc_34.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_34(2068029514);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_34);
    Instrument_34.insert(EncodedSecurityDescLen_34.getString());
    FIX::ExerciseStyle ExerciseStyle_34(2);
    noRelatedSym_0_1.set(ExerciseStyle_34);
    Instrument_34.insert(ExerciseStyle_34.getString());
    FIX::Factor Factor_34;
    Factor_34.setString("8228244");
    noRelatedSym_0_1.set(Factor_34);
    Instrument_34.insert(Factor_34.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_34(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_34);
    Instrument_34.insert(FlexProductEligibilityIndicator_34.getString());
    FIX::FlexibleIndicator FlexibleIndicator_34(false);
    noRelatedSym_0_1.set(FlexibleIndicator_34);
    Instrument_34.insert(FlexibleIndicator_34.getString());
    FIX::FloorPrice FloorPrice_34;
    FloorPrice_34.setString("20969660");
    noRelatedSym_0_1.set(FloorPrice_34);
    Instrument_34.insert(FloorPrice_34.getString());
    FIX::FlowScheduleType FlowScheduleType_34(2);
    noRelatedSym_0_1.set(FlowScheduleType_34);
    Instrument_34.insert(FlowScheduleType_34.getString());
    FIX::InstrRegistry InstrRegistry_34("STRING_412715135");
    noRelatedSym_0_1.set(InstrRegistry_34);
    Instrument_34.insert(InstrRegistry_34.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_34('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_34);
    Instrument_34.insert(InstrmtAssignmentMethod_34.getString());
    FIX::InterestAccrualDate InterestAccrualDate_34("LOCALMKTDATE_363482545");
    noRelatedSym_0_1.set(InterestAccrualDate_34);
    Instrument_34.insert(InterestAccrualDate_34.getString());
    FIX::IssueDate IssueDate_34("LOCALMKTDATE_901914827");
    noRelatedSym_0_1.set(IssueDate_34);
    Instrument_34.insert(IssueDate_34.getString());
    FIX::Issuer Issuer_34("STRING_1873486634");
    noRelatedSym_0_1.set(Issuer_34);
    Instrument_34.insert(Issuer_34.getString());
    FIX::ListMethod ListMethod_34(0);
    noRelatedSym_0_1.set(ListMethod_34);
    Instrument_34.insert(ListMethod_34.getString());
    FIX::LocaleOfIssue LocaleOfIssue_34("STRING_228830682");
    noRelatedSym_0_1.set(LocaleOfIssue_34);
    Instrument_34.insert(LocaleOfIssue_34.getString());
    FIX::MaturityDate MaturityDate_34("LOCALMKTDATE_739929810");
    noRelatedSym_0_1.set(MaturityDate_34);
    Instrument_34.insert(MaturityDate_34.getString());
    FIX::MaturityMonthYear MaturityMonthYear_34("MONTHYEAR_1028464059");
    noRelatedSym_0_1.set(MaturityMonthYear_34);
    Instrument_34.insert(MaturityMonthYear_34.getString());
    FIX::MaturityTime MaturityTime_34("TZTIMEONLY_750241616");
    noRelatedSym_0_1.set(MaturityTime_34);
    Instrument_34.insert(MaturityTime_34.getString());
    FIX::MinPriceIncrement MinPriceIncrement_34;
    MinPriceIncrement_34.setString("19197970");
    noRelatedSym_0_1.set(MinPriceIncrement_34);
    Instrument_34.insert(MinPriceIncrement_34.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_34;
    MinPriceIncrementAmount_34.setString("5819874");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_34);
    Instrument_34.insert(MinPriceIncrementAmount_34.getString());
    FIX::NTPositionLimit NTPositionLimit_34(482624512);
    noRelatedSym_0_1.set(NTPositionLimit_34);
    Instrument_34.insert(NTPositionLimit_34.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_34;
    NotionalPercentageOutstanding_34.setString("19.400000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_34);
    Instrument_34.insert(NotionalPercentageOutstanding_34.getString());
    FIX::OptAttribute OptAttribute_34('2');
    noRelatedSym_0_1.set(OptAttribute_34);
    Instrument_34.insert(OptAttribute_34.getString());
    FIX::OptPayoutAmount OptPayoutAmount_34;
    OptPayoutAmount_34.setString("8084305");
    noRelatedSym_0_1.set(OptPayoutAmount_34);
    Instrument_34.insert(OptPayoutAmount_34.getString());
    FIX::OptPayoutType OptPayoutType_34(3);
    noRelatedSym_0_1.set(OptPayoutType_34);
    Instrument_34.insert(OptPayoutType_34.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_34;
    OriginalNotionalPercentageOutstanding_34.setString("30.360000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_34);
    Instrument_34.insert(OriginalNotionalPercentageOutstanding_34.getString());
    FIX::Pool Pool_34("STRING_531514950");
    noRelatedSym_0_1.set(Pool_34);
    Instrument_34.insert(Pool_34.getString());
    FIX::PositionLimit PositionLimit_34(1921934461);
    noRelatedSym_0_1.set(PositionLimit_34);
    Instrument_34.insert(PositionLimit_34.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_34("STRING_STD");
    noRelatedSym_0_1.set(PriceQuoteMethod_34);
    Instrument_34.insert(PriceQuoteMethod_34.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_34("STRING_1594267366");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_34);
    Instrument_34.insert(PriceUnitOfMeasure_34.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_34;
    PriceUnitOfMeasureQty_34.setString("21351238");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_34);
    Instrument_34.insert(PriceUnitOfMeasureQty_34.getString());
    FIX::Product Product_36(8);
    noRelatedSym_0_1.set(Product_36);
    Instrument_34.insert(Product_36.getString());
    FIX::ProductComplex ProductComplex_34("STRING_1514813232");
    noRelatedSym_0_1.set(ProductComplex_34);
    Instrument_34.insert(ProductComplex_34.getString());
    FIX::PutOrCall PutOrCall_34(0);
    noRelatedSym_0_1.set(PutOrCall_34);
    Instrument_34.insert(PutOrCall_34.getString());
    FIX::RedemptionDate RedemptionDate_34("LOCALMKTDATE_187201101");
    noRelatedSym_0_1.set(RedemptionDate_34);
    Instrument_34.insert(RedemptionDate_34.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_34("STRING_1920842001");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_34);
    Instrument_34.insert(RepoCollateralSecurityType_34.getString());
    FIX::RepurchaseRate RepurchaseRate_34;
    RepurchaseRate_34.setString("60.430000");
    noRelatedSym_0_1.set(RepurchaseRate_34);
    Instrument_34.insert(RepurchaseRate_34.getString());
    FIX::RepurchaseTerm RepurchaseTerm_34(136683486);
    noRelatedSym_0_1.set(RepurchaseTerm_34);
    Instrument_34.insert(RepurchaseTerm_34.getString());
    FIX::RestructuringType RestructuringType_34("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_34);
    Instrument_34.insert(RestructuringType_34.getString());
    FIX::SecurityDesc SecurityDesc_34("STRING_461531178");
    noRelatedSym_0_1.set(SecurityDesc_34);
    Instrument_34.insert(SecurityDesc_34.getString());
    FIX::SecurityExchange SecurityExchange_34("EXCHANGE_1322609421");
    noRelatedSym_0_1.set(SecurityExchange_34);
    Instrument_34.insert(SecurityExchange_34.getString());
    FIX::SecurityGroup SecurityGroup_34("STRING_1565033110");
    noRelatedSym_0_1.set(SecurityGroup_34);
    Instrument_34.insert(SecurityGroup_34.getString());
    FIX::SecurityID SecurityID_34("STRING_1363446005");
    noRelatedSym_0_1.set(SecurityID_34);
    Instrument_34.insert(SecurityID_34.getString());
    FIX::SecurityIDSource SecurityIDSource_34("STRING_8");
    noRelatedSym_0_1.set(SecurityIDSource_34);
    Instrument_34.insert(SecurityIDSource_34.getString());
    FIX::SecurityStatus SecurityStatus_34("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_34);
    Instrument_34.insert(SecurityStatus_34.getString());
    FIX::SecuritySubType SecuritySubType_35("STRING_1592276688");
    noRelatedSym_0_1.set(SecuritySubType_35);
    Instrument_34.insert(SecuritySubType_35.getString());
    FIX::SecurityType SecurityType_36("STRING_DINP");
    noRelatedSym_0_1.set(SecurityType_36);
    Instrument_34.insert(SecurityType_36.getString());
    FIX::Seniority Seniority_34("STRING_SR");
    noRelatedSym_0_1.set(Seniority_34);
    Instrument_34.insert(Seniority_34.getString());
    FIX::SettlMethod SettlMethod_34('C');
    noRelatedSym_0_1.set(SettlMethod_34);
    Instrument_34.insert(SettlMethod_34.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_34("STRING_1560855667");
    noRelatedSym_0_1.set(SettleOnOpenFlag_34);
    Instrument_34.insert(SettleOnOpenFlag_34.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_34("STRING_1627585062");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_34);
    Instrument_34.insert(StateOrProvinceOfIssue_34.getString());
    FIX::StrikeCurrency StrikeCurrency_34("CAN");
    noRelatedSym_0_1.set(StrikeCurrency_34);
    Instrument_34.insert(StrikeCurrency_34.getString());
    FIX::StrikeMultiplier StrikeMultiplier_34;
    StrikeMultiplier_34.setString("18877747");
    noRelatedSym_0_1.set(StrikeMultiplier_34);
    Instrument_34.insert(StrikeMultiplier_34.getString());
    FIX::StrikePrice StrikePrice_34;
    StrikePrice_34.setString("14860896");
    noRelatedSym_0_1.set(StrikePrice_34);
    Instrument_34.insert(StrikePrice_34.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_34(2);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_34);
    Instrument_34.insert(StrikePriceBoundaryMethod_34.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_34;
    StrikePriceBoundaryPrecision_34.setString("41.290000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_34);
    Instrument_34.insert(StrikePriceBoundaryPrecision_34.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_34(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_34);
    Instrument_34.insert(StrikePriceDeterminationMethod_34.getString());
    FIX::StrikeValue StrikeValue_34;
    StrikeValue_34.setString("1306322");
    noRelatedSym_0_1.set(StrikeValue_34);
    Instrument_34.insert(StrikeValue_34.getString());
    FIX::Symbol Symbol_34("STRING_34784518");
    noRelatedSym_0_1.set(Symbol_34);
    Instrument_34.insert(Symbol_34.getString());
    FIX::SymbolSfx SymbolSfx_34("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_34);
    Instrument_34.insert(SymbolSfx_34.getString());
    FIX::TimeUnit TimeUnit_34("STRING_Min");
    noRelatedSym_0_1.set(TimeUnit_34);
    Instrument_34.insert(TimeUnit_34.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_34(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_34);
    Instrument_34.insert(UnderlyingPriceDeterminationMethod_34.getString());
    FIX::UnitOfMeasure UnitOfMeasure_34("STRING_Alw");
    noRelatedSym_0_1.set(UnitOfMeasure_34);
    Instrument_34.insert(UnitOfMeasure_34.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_34;
    UnitOfMeasureQty_34.setString("6239796");
    noRelatedSym_0_1.set(UnitOfMeasureQty_34);
    Instrument_34.insert(UnitOfMeasureQty_34.getString());
    FIX::ValuationMethod ValuationMethod_34("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_34);
    Instrument_34.insert(ValuationMethod_34.getString());
    all_values.push_back(Instrument_34);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_68;
      FIX::ComplexEventCondition ComplexEventCondition_68(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_68);
      ComplexEvents_NoComplexEvents_68.insert(ComplexEventCondition_68.getString());
      FIX::ComplexEventPrice ComplexEventPrice_68;
      ComplexEventPrice_68.setString("18705294");
      noComplexEvents_1_1_0.set(ComplexEventPrice_68);
      ComplexEvents_NoComplexEvents_68.insert(ComplexEventPrice_68.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_68(4);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_68);
      ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceBoundaryMethod_68.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_68;
      ComplexEventPriceBoundaryPrecision_68.setString("69.130000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_68);
      ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceBoundaryPrecision_68.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_68(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_68);
      ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceTimeType_68.getString());
      FIX::ComplexEventType ComplexEventType_68(5);
      noComplexEvents_1_1_0.set(ComplexEventType_68);
      ComplexEvents_NoComplexEvents_68.insert(ComplexEventType_68.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_68;
      ComplexOptPayoutAmount_68.setString("3502892");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_68);
      ComplexEvents_NoComplexEvents_68.insert(ComplexOptPayoutAmount_68.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_68);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_141;
        FIX::ComplexEventEndDate ComplexEventEndDate_141(FIX::UTCTIMESTAMP(7, 19, 41, 3, 7, 2011));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_141);
        ComplexEventDates_NoComplexEventDates_141.insert(ComplexEventEndDate_141.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_141(FIX::UTCTIMESTAMP(17, 36, 20, 10, 3, 2003));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_141);
        ComplexEventDates_NoComplexEventDates_141.insert(ComplexEventStartDate_141.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_141);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_293;
          FIX::ComplexEventEndTime ComplexEventEndTime_293(FIX::UTCTIMEONLY(4, 58, 58));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_293);
          ComplexEventTimes_NoComplexEventTimes_293.insert(ComplexEventEndTime_293.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_293(FIX::UTCTIMEONLY(22, 33, 12));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_293);
          ComplexEventTimes_NoComplexEventTimes_293.insert(ComplexEventStartTime_293.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_293);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_294;
          FIX::ComplexEventEndTime ComplexEventEndTime_294(FIX::UTCTIMEONLY(2, 28, 10));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_294);
          ComplexEventTimes_NoComplexEventTimes_294.insert(ComplexEventEndTime_294.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_294(FIX::UTCTIMEONLY(5, 33, 39));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_294);
          ComplexEventTimes_NoComplexEventTimes_294.insert(ComplexEventStartTime_294.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_294);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_69;
      FIX::ComplexEventCondition ComplexEventCondition_69(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_69);
      ComplexEvents_NoComplexEvents_69.insert(ComplexEventCondition_69.getString());
      FIX::ComplexEventPrice ComplexEventPrice_69;
      ComplexEventPrice_69.setString("775049");
      noComplexEvents_1_1_1.set(ComplexEventPrice_69);
      ComplexEvents_NoComplexEvents_69.insert(ComplexEventPrice_69.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_69(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_69);
      ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceBoundaryMethod_69.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_69;
      ComplexEventPriceBoundaryPrecision_69.setString("16.850000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_69);
      ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceBoundaryPrecision_69.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_69(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_69);
      ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceTimeType_69.getString());
      FIX::ComplexEventType ComplexEventType_69(2);
      noComplexEvents_1_1_1.set(ComplexEventType_69);
      ComplexEvents_NoComplexEvents_69.insert(ComplexEventType_69.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_69;
      ComplexOptPayoutAmount_69.setString("3662970");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_69);
      ComplexEvents_NoComplexEvents_69.insert(ComplexOptPayoutAmount_69.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_69);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_142;
        FIX::ComplexEventEndDate ComplexEventEndDate_142(FIX::UTCTIMESTAMP(1, 8, 44, 23, 5, 2002));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_142);
        ComplexEventDates_NoComplexEventDates_142.insert(ComplexEventEndDate_142.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_142(FIX::UTCTIMESTAMP(8, 10, 41, 26, 9, 2000));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_142);
        ComplexEventDates_NoComplexEventDates_142.insert(ComplexEventStartDate_142.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_142);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_295;
          FIX::ComplexEventEndTime ComplexEventEndTime_295(FIX::UTCTIMEONLY(20, 27, 12));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_295);
          ComplexEventTimes_NoComplexEventTimes_295.insert(ComplexEventEndTime_295.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_295(FIX::UTCTIMEONLY(12, 45, 0));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_295);
          ComplexEventTimes_NoComplexEventTimes_295.insert(ComplexEventStartTime_295.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_295);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_296;
          FIX::ComplexEventEndTime ComplexEventEndTime_296(FIX::UTCTIMEONLY(6, 43, 1));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_296);
          ComplexEventTimes_NoComplexEventTimes_296.insert(ComplexEventEndTime_296.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_296(FIX::UTCTIMEONLY(20, 1, 42));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_296);
          ComplexEventTimes_NoComplexEventTimes_296.insert(ComplexEventStartTime_296.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_296);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_297;
          FIX::ComplexEventEndTime ComplexEventEndTime_297(FIX::UTCTIMEONLY(18, 50, 39));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventEndTime_297);
          ComplexEventTimes_NoComplexEventTimes_297.insert(ComplexEventEndTime_297.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_297(FIX::UTCTIMEONLY(6, 51, 20));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventStartTime_297);
          ComplexEventTimes_NoComplexEventTimes_297.insert(ComplexEventStartTime_297.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_297);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_70;
      FIX::ComplexEventCondition ComplexEventCondition_70(2);
      noComplexEvents_1_1_2.set(ComplexEventCondition_70);
      ComplexEvents_NoComplexEvents_70.insert(ComplexEventCondition_70.getString());
      FIX::ComplexEventPrice ComplexEventPrice_70;
      ComplexEventPrice_70.setString("3132970");
      noComplexEvents_1_1_2.set(ComplexEventPrice_70);
      ComplexEvents_NoComplexEvents_70.insert(ComplexEventPrice_70.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_70(4);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_70);
      ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceBoundaryMethod_70.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_70;
      ComplexEventPriceBoundaryPrecision_70.setString("65.130000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_70);
      ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceBoundaryPrecision_70.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_70(2);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_70);
      ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceTimeType_70.getString());
      FIX::ComplexEventType ComplexEventType_70(3);
      noComplexEvents_1_1_2.set(ComplexEventType_70);
      ComplexEvents_NoComplexEvents_70.insert(ComplexEventType_70.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_70;
      ComplexOptPayoutAmount_70.setString("19189854");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_70);
      ComplexEvents_NoComplexEvents_70.insert(ComplexOptPayoutAmount_70.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_70);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_143;
        FIX::ComplexEventEndDate ComplexEventEndDate_143(FIX::UTCTIMESTAMP(11, 47, 41, 0, 2, 2016));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_143);
        ComplexEventDates_NoComplexEventDates_143.insert(ComplexEventEndDate_143.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_143(FIX::UTCTIMESTAMP(11, 17, 33, 17, 2, 2014));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_143);
        ComplexEventDates_NoComplexEventDates_143.insert(ComplexEventStartDate_143.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_143);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_298;
          FIX::ComplexEventEndTime ComplexEventEndTime_298(FIX::UTCTIMEONLY(9, 5, 26));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_298);
          ComplexEventTimes_NoComplexEventTimes_298.insert(ComplexEventEndTime_298.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_298(FIX::UTCTIMEONLY(12, 17, 39));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_298);
          ComplexEventTimes_NoComplexEventTimes_298.insert(ComplexEventStartTime_298.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_298);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_299;
          FIX::ComplexEventEndTime ComplexEventEndTime_299(FIX::UTCTIMEONLY(7, 32, 44));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventEndTime_299);
          ComplexEventTimes_NoComplexEventTimes_299.insert(ComplexEventEndTime_299.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_299(FIX::UTCTIMEONLY(20, 29, 20));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventStartTime_299);
          ComplexEventTimes_NoComplexEventTimes_299.insert(ComplexEventStartTime_299.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_299);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_300;
          FIX::ComplexEventEndTime ComplexEventEndTime_300(FIX::UTCTIMEONLY(4, 0, 17));
          noComplexEventTimes_1_2_0_3_2.set(ComplexEventEndTime_300);
          ComplexEventTimes_NoComplexEventTimes_300.insert(ComplexEventEndTime_300.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_300(FIX::UTCTIMEONLY(1, 51, 36));
          noComplexEventTimes_1_2_0_3_2.set(ComplexEventStartTime_300);
          ComplexEventTimes_NoComplexEventTimes_300.insert(ComplexEventStartTime_300.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_300);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_144;
        FIX::ComplexEventEndDate ComplexEventEndDate_144(FIX::UTCTIMESTAMP(0, 9, 45, 25, 1, 2002));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_144);
        ComplexEventDates_NoComplexEventDates_144.insert(ComplexEventEndDate_144.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_144(FIX::UTCTIMESTAMP(13, 13, 7, 23, 6, 2011));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_144);
        ComplexEventDates_NoComplexEventDates_144.insert(ComplexEventStartDate_144.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_144);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_301;
          FIX::ComplexEventEndTime ComplexEventEndTime_301(FIX::UTCTIMEONLY(4, 55, 41));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_301);
          ComplexEventTimes_NoComplexEventTimes_301.insert(ComplexEventEndTime_301.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_301(FIX::UTCTIMEONLY(7, 10, 25));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_301);
          ComplexEventTimes_NoComplexEventTimes_301.insert(ComplexEventStartTime_301.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_301);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_302;
          FIX::ComplexEventEndTime ComplexEventEndTime_302(FIX::UTCTIMEONLY(18, 25, 12));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventEndTime_302);
          ComplexEventTimes_NoComplexEventTimes_302.insert(ComplexEventEndTime_302.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_302(FIX::UTCTIMEONLY(2, 56, 15));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventStartTime_302);
          ComplexEventTimes_NoComplexEventTimes_302.insert(ComplexEventStartTime_302.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_302);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_145;
        FIX::ComplexEventEndDate ComplexEventEndDate_145(FIX::UTCTIMESTAMP(8, 25, 31, 2, 6, 2007));
        noComplexEventDates_1_2_2_2.set(ComplexEventEndDate_145);
        ComplexEventDates_NoComplexEventDates_145.insert(ComplexEventEndDate_145.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_145(FIX::UTCTIMESTAMP(22, 37, 30, 17, 7, 2017));
        noComplexEventDates_1_2_2_2.set(ComplexEventStartDate_145);
        ComplexEventDates_NoComplexEventDates_145.insert(ComplexEventStartDate_145.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_145);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_303;
          FIX::ComplexEventEndTime ComplexEventEndTime_303(FIX::UTCTIMEONLY(19, 55, 12));
          noComplexEventTimes_1_2_2_3_0.set(ComplexEventEndTime_303);
          ComplexEventTimes_NoComplexEventTimes_303.insert(ComplexEventEndTime_303.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_303(FIX::UTCTIMEONLY(14, 14, 46));
          noComplexEventTimes_1_2_2_3_0.set(ComplexEventStartTime_303);
          ComplexEventTimes_NoComplexEventTimes_303.insert(ComplexEventStartTime_303.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_303);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_304;
          FIX::ComplexEventEndTime ComplexEventEndTime_304(FIX::UTCTIMEONLY(8, 3, 13));
          noComplexEventTimes_1_2_2_3_1.set(ComplexEventEndTime_304);
          ComplexEventTimes_NoComplexEventTimes_304.insert(ComplexEventEndTime_304.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_304(FIX::UTCTIMEONLY(18, 1, 51));
          noComplexEventTimes_1_2_2_3_1.set(ComplexEventStartTime_304);
          ComplexEventTimes_NoComplexEventTimes_304.insert(ComplexEventStartTime_304.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_304);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_305;
          FIX::ComplexEventEndTime ComplexEventEndTime_305(FIX::UTCTIMEONLY(14, 8, 4));
          noComplexEventTimes_1_2_2_3_2.set(ComplexEventEndTime_305);
          ComplexEventTimes_NoComplexEventTimes_305.insert(ComplexEventEndTime_305.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_305(FIX::UTCTIMEONLY(5, 35, 55));
          noComplexEventTimes_1_2_2_3_2.set(ComplexEventStartTime_305);
          ComplexEventTimes_NoComplexEventTimes_305.insert(ComplexEventStartTime_305.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_305);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_62;
      FIX::EventDate EventDate_62("LOCALMKTDATE_1072478232");
      noEvents_1_1_0.set(EventDate_62);
      EvntGrp_NoEvents_62.insert(EventDate_62.getString());
      FIX::EventPx EventPx_62;
      EventPx_62.setString("14716558");
      noEvents_1_1_0.set(EventPx_62);
      EvntGrp_NoEvents_62.insert(EventPx_62.getString());
      FIX::EventText EventText_62("STRING_673885180");
      noEvents_1_1_0.set(EventText_62);
      EvntGrp_NoEvents_62.insert(EventText_62.getString());
      FIX::EventTime EventTime_62(FIX::UTCTIMESTAMP(5, 48, 18, 24, 8, 2006));
      noEvents_1_1_0.set(EventTime_62);
      EvntGrp_NoEvents_62.insert(EventTime_62.getString());
      FIX::EventType EventType_62(6);
      noEvents_1_1_0.set(EventType_62);
      EvntGrp_NoEvents_62.insert(EventType_62.getString());
      all_values.push_back(EvntGrp_NoEvents_62);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_63;
      FIX::EventDate EventDate_63("LOCALMKTDATE_1226232109");
      noEvents_1_1_1.set(EventDate_63);
      EvntGrp_NoEvents_63.insert(EventDate_63.getString());
      FIX::EventPx EventPx_63;
      EventPx_63.setString("6367056");
      noEvents_1_1_1.set(EventPx_63);
      EvntGrp_NoEvents_63.insert(EventPx_63.getString());
      FIX::EventText EventText_63("STRING_1207383783");
      noEvents_1_1_1.set(EventText_63);
      EvntGrp_NoEvents_63.insert(EventText_63.getString());
      FIX::EventTime EventTime_63(FIX::UTCTIMESTAMP(20, 6, 56, 12, 5, 2007));
      noEvents_1_1_1.set(EventTime_63);
      EvntGrp_NoEvents_63.insert(EventTime_63.getString());
      FIX::EventType EventType_63(4);
      noEvents_1_1_1.set(EventType_63);
      EvntGrp_NoEvents_63.insert(EventType_63.getString());
      all_values.push_back(EvntGrp_NoEvents_63);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_62;
      FIX::InstrumentPartyID InstrumentPartyID_62("STRING_1705951599");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_62);
      InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyID_62.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_62('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_62);
      InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyIDSource_62.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_62(1526183849);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_62);
      InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyRole_62.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_62);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134;
        FIX::InstrumentPartySubID InstrumentPartySubID_134("STRING_1166069076");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_134);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134.insert(InstrumentPartySubID_134.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_134(378013916);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_134);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134.insert(InstrumentPartySubIDType_134.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_63;
      FIX::InstrumentPartyID InstrumentPartyID_63("STRING_877529098");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_63);
      InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyID_63.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_63('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_63);
      InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyIDSource_63.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_63(1450492149);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_63);
      InstrumentParties_NoInstrumentParties_63.insert(InstrumentPartyRole_63.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_63);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135;
        FIX::InstrumentPartySubID InstrumentPartySubID_135("STRING_331962363");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_135);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135.insert(InstrumentPartySubID_135.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_135(1950342296);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_135);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135.insert(InstrumentPartySubIDType_135.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136;
        FIX::InstrumentPartySubID InstrumentPartySubID_136("STRING_1487976741");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_136);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136.insert(InstrumentPartySubID_136.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_136(1954429132);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_136);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136.insert(InstrumentPartySubIDType_136.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_71;
      FIX::SecurityAltID SecurityAltID_71("STRING_1138276405");
      noSecurityAltID_1_1_0.set(SecurityAltID_71);
      SecAltIDGrp_NoSecurityAltID_71.insert(SecurityAltID_71.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_71("STRING_1788834507");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_71);
      SecAltIDGrp_NoSecurityAltID_71.insert(SecurityAltIDSource_71.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_71);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_68;
    FIX::SecurityXML SecurityXML_69("XMLDATA_176018188");
    noRelatedSym_0_1.set(SecurityXML_69);
    FIX::SecurityXMLLen SecurityXMLLen_34(481051542);
    noRelatedSym_0_1.set(SecurityXMLLen_34);
    FIX::SecurityXMLSchema SecurityXMLSchema_34("STRING_867582969");
    noRelatedSym_0_1.set(SecurityXMLSchema_34);
    SecurityXML_68.insert(SecurityXMLSchema_34.getString());
    all_values.push_back(SecurityXML_68);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_50;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_50("DATA_1688435325");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_50);
      UnderlyingInstrument_50.insert(EncodedUnderlyingIssuer_50.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_50(2110062359);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_50);
      UnderlyingInstrument_50.insert(EncodedUnderlyingIssuerLen_50.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_50("DATA_555477988");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_50);
      UnderlyingInstrument_50.insert(EncodedUnderlyingSecurityDesc_50.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_50(826358324);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_50);
      UnderlyingInstrument_50.insert(EncodedUnderlyingSecurityDescLen_50.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_50;
      UnderlyingAdjustedQuantity_50.setString("11115303");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_50);
      UnderlyingInstrument_50.insert(UnderlyingAdjustedQuantity_50.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_50;
      UnderlyingAllocationPercent_50.setString("59.680000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_50);
      UnderlyingInstrument_50.insert(UnderlyingAllocationPercent_50.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_50;
      UnderlyingAttachmentPoint_50.setString("5.560000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_50);
      UnderlyingInstrument_50.insert(UnderlyingAttachmentPoint_50.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_50("STRING_1587399757");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_50);
      UnderlyingInstrument_50.insert(UnderlyingCFICode_50.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_50("STRING_1705021571");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_50);
      UnderlyingInstrument_50.insert(UnderlyingCPProgram_50.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_50("STRING_729067493");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_50);
      UnderlyingInstrument_50.insert(UnderlyingCPRegType_50.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_50;
      UnderlyingCapValue_50.setString("11458677");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_50);
      UnderlyingInstrument_50.insert(UnderlyingCapValue_50.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_50;
      UnderlyingCashAmount_50.setString("15267501");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_50);
      UnderlyingInstrument_50.insert(UnderlyingCashAmount_50.getString());
      FIX::UnderlyingCashType UnderlyingCashType_50("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_50);
      UnderlyingInstrument_50.insert(UnderlyingCashType_50.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_50;
      UnderlyingContractMultiplier_50.setString("15847141");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_50);
      UnderlyingInstrument_50.insert(UnderlyingContractMultiplier_50.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_50(545335582);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_50);
      UnderlyingInstrument_50.insert(UnderlyingContractMultiplierUnit_50.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_50("COUNTRY_485781611");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_50);
      UnderlyingInstrument_50.insert(UnderlyingCountryOfIssue_50.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_50("LOCALMKTDATE_314759582");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_50);
      UnderlyingInstrument_50.insert(UnderlyingCouponPaymentDate_50.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_50;
      UnderlyingCouponRate_50.setString("27.650000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_50);
      UnderlyingInstrument_50.insert(UnderlyingCouponRate_50.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_50("STRING_1936273760");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_50);
      UnderlyingInstrument_50.insert(UnderlyingCreditRating_50.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_50("EUR");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_50);
      UnderlyingInstrument_50.insert(UnderlyingCurrency_50.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_50;
      UnderlyingCurrentValue_50.setString("17391324");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_50);
      UnderlyingInstrument_50.insert(UnderlyingCurrentValue_50.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_50;
      UnderlyingDetachmentPoint_50.setString("76.190000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_50);
      UnderlyingInstrument_50.insert(UnderlyingDetachmentPoint_50.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_50;
      UnderlyingDirtyPrice_50.setString("3423206");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_50);
      UnderlyingInstrument_50.insert(UnderlyingDirtyPrice_50.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_50;
      UnderlyingEndPrice_50.setString("21269234");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_50);
      UnderlyingInstrument_50.insert(UnderlyingEndPrice_50.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_50;
      UnderlyingEndValue_50.setString("9952303");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_50);
      UnderlyingInstrument_50.insert(UnderlyingEndValue_50.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_50(2131155120);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_50);
      UnderlyingInstrument_50.insert(UnderlyingExerciseStyle_50.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_50;
      UnderlyingFXRate_50.setString("1554579");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_50);
      UnderlyingInstrument_50.insert(UnderlyingFXRate_50.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_50('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_50);
      UnderlyingInstrument_50.insert(UnderlyingFXRateCalc_50.getString());
      FIX::UnderlyingFactor UnderlyingFactor_50;
      UnderlyingFactor_50.setString("8512544");
      noUnderlyings_1_1_0.set(UnderlyingFactor_50);
      UnderlyingInstrument_50.insert(UnderlyingFactor_50.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_50(968181818);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_50);
      UnderlyingInstrument_50.insert(UnderlyingFlowScheduleType_50.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_50("STRING_1017233597");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_50);
      UnderlyingInstrument_50.insert(UnderlyingInstrRegistry_50.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_50("LOCALMKTDATE_813833153");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_50);
      UnderlyingInstrument_50.insert(UnderlyingIssueDate_50.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_50("STRING_1523659806");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_50);
      UnderlyingInstrument_50.insert(UnderlyingIssuer_50.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_50("STRING_1843591921");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_50);
      UnderlyingInstrument_50.insert(UnderlyingLocaleOfIssue_50.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_50("LOCALMKTDATE_1925363500");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_50);
      UnderlyingInstrument_50.insert(UnderlyingMaturityDate_50.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_50("MONTHYEAR_743132127");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_50);
      UnderlyingInstrument_50.insert(UnderlyingMaturityMonthYear_50.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_50("TZTIMEONLY_1638478829");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_50);
      UnderlyingInstrument_50.insert(UnderlyingMaturityTime_50.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_50;
      UnderlyingNotionalPercentageOutstanding_50.setString("96.090000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_50);
      UnderlyingInstrument_50.insert(UnderlyingNotionalPercentageOutstanding_50.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_50('3');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_50);
      UnderlyingInstrument_50.insert(UnderlyingOptAttribute_50.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_50;
      UnderlyingOriginalNotionalPercentageOutstanding_50.setString("26.750000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_50);
      UnderlyingInstrument_50.insert(UnderlyingOriginalNotionalPercentageOutstanding_50.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_50("STRING_363663670");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_50);
      UnderlyingInstrument_50.insert(UnderlyingPriceUnitOfMeasure_50.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_50;
      UnderlyingPriceUnitOfMeasureQty_50.setString("18274202");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_50);
      UnderlyingInstrument_50.insert(UnderlyingPriceUnitOfMeasureQty_50.getString());
      FIX::UnderlyingProduct UnderlyingProduct_50(327830369);
      noUnderlyings_1_1_0.set(UnderlyingProduct_50);
      UnderlyingInstrument_50.insert(UnderlyingProduct_50.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_50(1948377802);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_50);
      UnderlyingInstrument_50.insert(UnderlyingPutOrCall_50.getString());
      FIX::UnderlyingPx UnderlyingPx_50;
      UnderlyingPx_50.setString("2252721");
      noUnderlyings_1_1_0.set(UnderlyingPx_50);
      UnderlyingInstrument_50.insert(UnderlyingPx_50.getString());
      FIX::UnderlyingQty UnderlyingQty_50;
      UnderlyingQty_50.setString("8136119");
      noUnderlyings_1_1_0.set(UnderlyingQty_50);
      UnderlyingInstrument_50.insert(UnderlyingQty_50.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_50("LOCALMKTDATE_115653736");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_50);
      UnderlyingInstrument_50.insert(UnderlyingRedemptionDate_50.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_50("STRING_428684905");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_50);
      UnderlyingInstrument_50.insert(UnderlyingRepoCollateralSecurityType_50.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_50;
      UnderlyingRepurchaseRate_50.setString("20.920000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_50);
      UnderlyingInstrument_50.insert(UnderlyingRepurchaseRate_50.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_50(632114615);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_50);
      UnderlyingInstrument_50.insert(UnderlyingRepurchaseTerm_50.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_50("STRING_964060034");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_50);
      UnderlyingInstrument_50.insert(UnderlyingRestructuringType_50.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_50("STRING_194050852");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityDesc_50.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_50("EXCHANGE_489068586");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityExchange_50.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_50("STRING_1306380647");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityID_50.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_50("STRING_173490658");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityIDSource_50.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_50("STRING_1484298963");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_50);
      UnderlyingInstrument_50.insert(UnderlyingSecuritySubType_50.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_50("STRING_1290052119");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityType_50.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_50("STRING_328948652");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_50);
      UnderlyingInstrument_50.insert(UnderlyingSeniority_50.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_50("STRING_813097235");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_50);
      UnderlyingInstrument_50.insert(UnderlyingSettlMethod_50.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_50(5);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_50);
      UnderlyingInstrument_50.insert(UnderlyingSettlementType_50.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_50;
      UnderlyingStartValue_50.setString("12971304");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_50);
      UnderlyingInstrument_50.insert(UnderlyingStartValue_50.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_50("STRING_1830330832");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_50);
      UnderlyingInstrument_50.insert(UnderlyingStateOrProvinceOfIssue_50.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_50("CHF");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_50);
      UnderlyingInstrument_50.insert(UnderlyingStrikeCurrency_50.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_50;
      UnderlyingStrikePrice_50.setString("15264391");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_50);
      UnderlyingInstrument_50.insert(UnderlyingStrikePrice_50.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_50("STRING_585535918");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_50);
      UnderlyingInstrument_50.insert(UnderlyingSymbol_50.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_50("STRING_1416438756");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_50);
      UnderlyingInstrument_50.insert(UnderlyingSymbolSfx_50.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_50("STRING_1017434286");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_50);
      UnderlyingInstrument_50.insert(UnderlyingTimeUnit_50.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_50("STRING_1950815528");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_50);
      UnderlyingInstrument_50.insert(UnderlyingUnitOfMeasure_50.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_50;
      UnderlyingUnitOfMeasureQty_50.setString("17171088");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_50);
      UnderlyingInstrument_50.insert(UnderlyingUnitOfMeasureQty_50.getString());
      all_values.push_back(UnderlyingInstrument_50);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_105;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_105("STRING_166995550");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_105);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_105.insert(UnderlyingSecurityAltID_105.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_105("STRING_1397045363");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_105);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_105.insert(UnderlyingSecurityAltIDSource_105.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_96;
        FIX::UnderlyingStipType UnderlyingStipType_96("STRING_2115373352");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_96);
        UnderlyingStipulations_NoUnderlyingStips_96.insert(UnderlyingStipType_96.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_96("STRING_1622317503");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_96);
        UnderlyingStipulations_NoUnderlyingStips_96.insert(UnderlyingStipValue_96.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_96);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_108;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_108("STRING_83543440");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_108);
        UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyID_108.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_108('2');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_108);
        UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyIDSource_108.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_108(833857756);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_108);
        UndlyInstrumentParties_NoUndlyInstrumentParties_108.insert(UnderlyingInstrumentPartyRole_108.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_108);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_222("STRING_867578794");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_222);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222.insert(UnderlyingInstrumentPartySubID_222.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_222(1027908608);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_222);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222.insert(UnderlyingInstrumentPartySubIDType_222.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_109;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_109("STRING_1204726642");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_109);
        UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyID_109.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_109('2');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_109);
        UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyIDSource_109.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_109(1201399267);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_109);
        UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyRole_109.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_109);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_223("STRING_1316527912");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_223);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223.insert(UnderlyingInstrumentPartySubID_223.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_223(1530347919);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_223);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223.insert(UnderlyingInstrumentPartySubIDType_223.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_224("STRING_1354639192");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_224);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224.insert(UnderlyingInstrumentPartySubID_224.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_224(1310350825);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_224);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224.insert(UnderlyingInstrumentPartySubIDType_224.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_225("STRING_679994742");
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubID_225);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225.insert(UnderlyingInstrumentPartySubID_225.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_225(1037486376);
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_225);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225.insert(UnderlyingInstrumentPartySubIDType_225.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_110;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_110("STRING_2118006891");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_110);
        UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyID_110.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_110('1');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_110);
        UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyIDSource_110.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_110(416441833);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_110);
        UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyRole_110.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_110);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_226("STRING_622256479");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_226);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226.insert(UnderlyingInstrumentPartySubID_226.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_226(1433876120);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_226);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226.insert(UnderlyingInstrumentPartySubIDType_226.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_51;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_51("DATA_359391042");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_51);
      UnderlyingInstrument_51.insert(EncodedUnderlyingIssuer_51.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_51(191881637);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_51);
      UnderlyingInstrument_51.insert(EncodedUnderlyingIssuerLen_51.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_51("DATA_523889433");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_51);
      UnderlyingInstrument_51.insert(EncodedUnderlyingSecurityDesc_51.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_51(526386592);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_51);
      UnderlyingInstrument_51.insert(EncodedUnderlyingSecurityDescLen_51.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_51;
      UnderlyingAdjustedQuantity_51.setString("15889270");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_51);
      UnderlyingInstrument_51.insert(UnderlyingAdjustedQuantity_51.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_51;
      UnderlyingAllocationPercent_51.setString("67.640000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_51);
      UnderlyingInstrument_51.insert(UnderlyingAllocationPercent_51.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_51;
      UnderlyingAttachmentPoint_51.setString("62.960000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_51);
      UnderlyingInstrument_51.insert(UnderlyingAttachmentPoint_51.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_51("STRING_1063760856");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_51);
      UnderlyingInstrument_51.insert(UnderlyingCFICode_51.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_51("STRING_173188780");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_51);
      UnderlyingInstrument_51.insert(UnderlyingCPProgram_51.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_51("STRING_577819736");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_51);
      UnderlyingInstrument_51.insert(UnderlyingCPRegType_51.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_51;
      UnderlyingCapValue_51.setString("9672796");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_51);
      UnderlyingInstrument_51.insert(UnderlyingCapValue_51.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_51;
      UnderlyingCashAmount_51.setString("10070465");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_51);
      UnderlyingInstrument_51.insert(UnderlyingCashAmount_51.getString());
      FIX::UnderlyingCashType UnderlyingCashType_51("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_51);
      UnderlyingInstrument_51.insert(UnderlyingCashType_51.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_51;
      UnderlyingContractMultiplier_51.setString("18348584");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_51);
      UnderlyingInstrument_51.insert(UnderlyingContractMultiplier_51.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_51(2034955144);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_51);
      UnderlyingInstrument_51.insert(UnderlyingContractMultiplierUnit_51.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_51("COUNTRY_350720786");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_51);
      UnderlyingInstrument_51.insert(UnderlyingCountryOfIssue_51.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_51("LOCALMKTDATE_1861334203");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_51);
      UnderlyingInstrument_51.insert(UnderlyingCouponPaymentDate_51.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_51;
      UnderlyingCouponRate_51.setString("7.630000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_51);
      UnderlyingInstrument_51.insert(UnderlyingCouponRate_51.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_51("STRING_892262743");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_51);
      UnderlyingInstrument_51.insert(UnderlyingCreditRating_51.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_51("CAN");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_51);
      UnderlyingInstrument_51.insert(UnderlyingCurrency_51.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_51;
      UnderlyingCurrentValue_51.setString("994182");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_51);
      UnderlyingInstrument_51.insert(UnderlyingCurrentValue_51.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_51;
      UnderlyingDetachmentPoint_51.setString("56.450000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_51);
      UnderlyingInstrument_51.insert(UnderlyingDetachmentPoint_51.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_51;
      UnderlyingDirtyPrice_51.setString("11517297");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_51);
      UnderlyingInstrument_51.insert(UnderlyingDirtyPrice_51.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_51;
      UnderlyingEndPrice_51.setString("11369046");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_51);
      UnderlyingInstrument_51.insert(UnderlyingEndPrice_51.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_51;
      UnderlyingEndValue_51.setString("1637688");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_51);
      UnderlyingInstrument_51.insert(UnderlyingEndValue_51.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_51(357547500);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_51);
      UnderlyingInstrument_51.insert(UnderlyingExerciseStyle_51.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_51;
      UnderlyingFXRate_51.setString("15533464");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_51);
      UnderlyingInstrument_51.insert(UnderlyingFXRate_51.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_51('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_51);
      UnderlyingInstrument_51.insert(UnderlyingFXRateCalc_51.getString());
      FIX::UnderlyingFactor UnderlyingFactor_51;
      UnderlyingFactor_51.setString("9798039");
      noUnderlyings_1_1_1.set(UnderlyingFactor_51);
      UnderlyingInstrument_51.insert(UnderlyingFactor_51.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_51(839738970);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_51);
      UnderlyingInstrument_51.insert(UnderlyingFlowScheduleType_51.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_51("STRING_1079219092");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_51);
      UnderlyingInstrument_51.insert(UnderlyingInstrRegistry_51.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_51("LOCALMKTDATE_1171685616");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_51);
      UnderlyingInstrument_51.insert(UnderlyingIssueDate_51.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_51("STRING_1363628403");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_51);
      UnderlyingInstrument_51.insert(UnderlyingIssuer_51.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_51("STRING_1605605684");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_51);
      UnderlyingInstrument_51.insert(UnderlyingLocaleOfIssue_51.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_51("LOCALMKTDATE_613128969");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_51);
      UnderlyingInstrument_51.insert(UnderlyingMaturityDate_51.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_51("MONTHYEAR_1305361520");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_51);
      UnderlyingInstrument_51.insert(UnderlyingMaturityMonthYear_51.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_51("TZTIMEONLY_2099881980");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_51);
      UnderlyingInstrument_51.insert(UnderlyingMaturityTime_51.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_51;
      UnderlyingNotionalPercentageOutstanding_51.setString("98.250000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_51);
      UnderlyingInstrument_51.insert(UnderlyingNotionalPercentageOutstanding_51.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_51('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_51);
      UnderlyingInstrument_51.insert(UnderlyingOptAttribute_51.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_51;
      UnderlyingOriginalNotionalPercentageOutstanding_51.setString("80.690000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_51);
      UnderlyingInstrument_51.insert(UnderlyingOriginalNotionalPercentageOutstanding_51.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_51("STRING_496685793");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_51);
      UnderlyingInstrument_51.insert(UnderlyingPriceUnitOfMeasure_51.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_51;
      UnderlyingPriceUnitOfMeasureQty_51.setString("3381131");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_51);
      UnderlyingInstrument_51.insert(UnderlyingPriceUnitOfMeasureQty_51.getString());
      FIX::UnderlyingProduct UnderlyingProduct_51(1823695861);
      noUnderlyings_1_1_1.set(UnderlyingProduct_51);
      UnderlyingInstrument_51.insert(UnderlyingProduct_51.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_51(184060555);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_51);
      UnderlyingInstrument_51.insert(UnderlyingPutOrCall_51.getString());
      FIX::UnderlyingPx UnderlyingPx_51;
      UnderlyingPx_51.setString("2255846");
      noUnderlyings_1_1_1.set(UnderlyingPx_51);
      UnderlyingInstrument_51.insert(UnderlyingPx_51.getString());
      FIX::UnderlyingQty UnderlyingQty_51;
      UnderlyingQty_51.setString("269329");
      noUnderlyings_1_1_1.set(UnderlyingQty_51);
      UnderlyingInstrument_51.insert(UnderlyingQty_51.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_51("LOCALMKTDATE_2045394758");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_51);
      UnderlyingInstrument_51.insert(UnderlyingRedemptionDate_51.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_51("STRING_1314455448");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_51);
      UnderlyingInstrument_51.insert(UnderlyingRepoCollateralSecurityType_51.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_51;
      UnderlyingRepurchaseRate_51.setString("57.420000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_51);
      UnderlyingInstrument_51.insert(UnderlyingRepurchaseRate_51.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_51(928289578);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_51);
      UnderlyingInstrument_51.insert(UnderlyingRepurchaseTerm_51.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_51("STRING_1786190483");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_51);
      UnderlyingInstrument_51.insert(UnderlyingRestructuringType_51.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_51("STRING_1018614030");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityDesc_51.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_51("EXCHANGE_1121535223");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityExchange_51.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_51("STRING_790436612");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityID_51.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_51("STRING_8035047");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityIDSource_51.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_51("STRING_1285304111");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_51);
      UnderlyingInstrument_51.insert(UnderlyingSecuritySubType_51.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_51("STRING_1147984112");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityType_51.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_51("STRING_1561381545");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_51);
      UnderlyingInstrument_51.insert(UnderlyingSeniority_51.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_51("STRING_2005132162");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_51);
      UnderlyingInstrument_51.insert(UnderlyingSettlMethod_51.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_51(2);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_51);
      UnderlyingInstrument_51.insert(UnderlyingSettlementType_51.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_51;
      UnderlyingStartValue_51.setString("2536368");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_51);
      UnderlyingInstrument_51.insert(UnderlyingStartValue_51.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_51("STRING_936867606");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_51);
      UnderlyingInstrument_51.insert(UnderlyingStateOrProvinceOfIssue_51.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_51("JPY");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_51);
      UnderlyingInstrument_51.insert(UnderlyingStrikeCurrency_51.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_51;
      UnderlyingStrikePrice_51.setString("3949896");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_51);
      UnderlyingInstrument_51.insert(UnderlyingStrikePrice_51.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_51("STRING_1765119029");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_51);
      UnderlyingInstrument_51.insert(UnderlyingSymbol_51.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_51("STRING_775143142");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_51);
      UnderlyingInstrument_51.insert(UnderlyingSymbolSfx_51.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_51("STRING_347387975");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_51);
      UnderlyingInstrument_51.insert(UnderlyingTimeUnit_51.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_51("STRING_1294525206");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_51);
      UnderlyingInstrument_51.insert(UnderlyingUnitOfMeasure_51.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_51;
      UnderlyingUnitOfMeasureQty_51.setString("1062097");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_51);
      UnderlyingInstrument_51.insert(UnderlyingUnitOfMeasureQty_51.getString());
      all_values.push_back(UnderlyingInstrument_51);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_106;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_106("STRING_1791211000");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_106);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_106.insert(UnderlyingSecurityAltID_106.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_106("STRING_444322982");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_106);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_106.insert(UnderlyingSecurityAltIDSource_106.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_97;
        FIX::UnderlyingStipType UnderlyingStipType_97("STRING_1975271555");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_97);
        UnderlyingStipulations_NoUnderlyingStips_97.insert(UnderlyingStipType_97.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_97("STRING_669907667");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_97);
        UnderlyingStipulations_NoUnderlyingStips_97.insert(UnderlyingStipValue_97.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_97);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_98;
        FIX::UnderlyingStipType UnderlyingStipType_98("STRING_580751256");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_98);
        UnderlyingStipulations_NoUnderlyingStips_98.insert(UnderlyingStipType_98.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_98("STRING_1873182666");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_98);
        UnderlyingStipulations_NoUnderlyingStips_98.insert(UnderlyingStipValue_98.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_98);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_99;
        FIX::UnderlyingStipType UnderlyingStipType_99("STRING_1984363115");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipType_99);
        UnderlyingStipulations_NoUnderlyingStips_99.insert(UnderlyingStipType_99.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_99("STRING_1499946999");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipValue_99);
        UnderlyingStipulations_NoUnderlyingStips_99.insert(UnderlyingStipValue_99.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_99);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_111;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_111("STRING_1623069950");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_111);
        UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyID_111.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_111('3');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_111);
        UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyIDSource_111.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_111(1775523819);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_111);
        UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyRole_111.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_111);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_227("STRING_379112428");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_227);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubID_227.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_227(913344282);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_227);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubIDType_227.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_228("STRING_1414007026");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_228);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubID_228.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_228(1940493973);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_228);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubIDType_228.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_229("STRING_770992796");
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubID_229);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubID_229.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_229(1394311469);
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_229);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubIDType_229.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_112;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_112("STRING_46647192");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_112);
        UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyID_112.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_112('1');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_112);
        UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyIDSource_112.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_112(398817880);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_112);
        UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyRole_112.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_112);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_230("STRING_2102850046");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_230);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubID_230.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_230(16453261);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_230);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubIDType_230.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_231("STRING_291571957");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_231);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubID_231.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_231(302754373);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_231);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubIDType_231.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_232("STRING_1310978468");
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubID_232);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubID_232.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_232(397781752);
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_232);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubIDType_232.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_113;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_113("STRING_1180360418");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_113);
        UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyID_113.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_113('9');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_113);
        UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyIDSource_113.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_113(842104734);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_113);
        UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyRole_113.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_113);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_233("STRING_782493727");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_233);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubID_233.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_233(1512012401);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_233);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubIDType_233.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_234("STRING_167446284");
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubID_234);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubID_234.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_234(508192745);
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_234);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubIDType_234.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  // MDReqGrp
  // Group MDReqGrp.NoMDEntryTypes
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_0;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_0;
    FIX::MDEntryType MDEntryType_2('3');
    noMDEntryTypes_0_0.set(MDEntryType_2);
    MDReqGrp_NoMDEntryTypes_0.insert(MDEntryType_2.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_0);

    msg.addGroup(noMDEntryTypes_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_1;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_1;
    FIX::MDEntryType MDEntryType_3('1');
    noMDEntryTypes_0_1.set(MDEntryType_3);
    MDReqGrp_NoMDEntryTypes_1.insert(MDEntryType_3.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_1);

    msg.addGroup(noMDEntryTypes_0_1);
  }
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_2;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_2;
    FIX::MDEntryType MDEntryType_4('E');
    noMDEntryTypes_0_2.set(MDEntryType_4);
    MDReqGrp_NoMDEntryTypes_2.insert(MDEntryType_4.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_2);

    msg.addGroup(noMDEntryTypes_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_58;
    FIX::PartyID PartyID_58("STRING_790221512");
    noPartyIDs_0_0.set(PartyID_58);
    Parties_NoPartyIDs_58.insert(PartyID_58.getString());
    FIX::PartyIDSource PartyIDSource_58('I');
    noPartyIDs_0_0.set(PartyIDSource_58);
    Parties_NoPartyIDs_58.insert(PartyIDSource_58.getString());
    FIX::PartyRole PartyRole_58(51);
    noPartyIDs_0_0.set(PartyRole_58);
    Parties_NoPartyIDs_58.insert(PartyRole_58.getString());
    all_values.push_back(Parties_NoPartyIDs_58);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_121;
      FIX::PartySubID PartySubID_121("STRING_357024462");
      noPartySubIDs_0_1_0.set(PartySubID_121);
      PtysSubGrp_NoPartySubIDs_121.insert(PartySubID_121.getString());
      FIX::PartySubIDType PartySubIDType_121(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_121);
      PtysSubGrp_NoPartySubIDs_121.insert(PartySubIDType_121.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_121);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_59;
    FIX::PartyID PartyID_59("STRING_327074943");
    noPartyIDs_0_1.set(PartyID_59);
    Parties_NoPartyIDs_59.insert(PartyID_59.getString());
    FIX::PartyIDSource PartyIDSource_59('B');
    noPartyIDs_0_1.set(PartyIDSource_59);
    Parties_NoPartyIDs_59.insert(PartyIDSource_59.getString());
    FIX::PartyRole PartyRole_59(45);
    noPartyIDs_0_1.set(PartyRole_59);
    Parties_NoPartyIDs_59.insert(PartyRole_59.getString());
    all_values.push_back(Parties_NoPartyIDs_59);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_122;
      FIX::PartySubID PartySubID_122("STRING_2670164");
      noPartySubIDs_1_1_0.set(PartySubID_122);
      PtysSubGrp_NoPartySubIDs_122.insert(PartySubID_122.getString());
      FIX::PartySubIDType PartySubIDType_122(13);
      noPartySubIDs_1_1_0.set(PartySubIDType_122);
      PtysSubGrp_NoPartySubIDs_122.insert(PartySubIDType_122.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_122);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_3;
    FIX::TradingSessionID TradingSessionID_31("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_31);
    TrdgSesGrp_NoTradingSessions_3.insert(TradingSessionID_31.getString());
    FIX::TradingSessionSubID TradingSessionSubID_31("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_31);
    TrdgSesGrp_NoTradingSessions_3.insert(TradingSessionSubID_31.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_3);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_4;
    FIX::TradingSessionID TradingSessionID_32("STRING_3");
    noTradingSessions_0_1.set(TradingSessionID_32);
    TrdgSesGrp_NoTradingSessions_4.insert(TradingSessionID_32.getString());
    FIX::TradingSessionSubID TradingSessionSubID_32("STRING_2");
    noTradingSessions_0_1.set(TradingSessionSubID_32);
    TrdgSesGrp_NoTradingSessions_4.insert(TradingSessionSubID_32.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_4);

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_5;
    FIX::TradingSessionID TradingSessionID_33("STRING_4");
    noTradingSessions_0_2.set(TradingSessionID_33);
    TrdgSesGrp_NoTradingSessions_5.insert(TradingSessionID_33.getString());
    FIX::TradingSessionSubID TradingSessionSubID_33("STRING_1");
    noTradingSessions_0_2.set(TradingSessionSubID_33);
    TrdgSesGrp_NoTradingSessions_5.insert(TradingSessionSubID_33.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_5);

    msg.addGroup(noTradingSessions_0_2);
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
