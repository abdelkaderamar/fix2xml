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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequest_0;
  FIX::AggregatedBook AggregatedBook_0(true);
  msg.set(AggregatedBook_0);
  MarketDataRequest_0.insert(AggregatedBook_0.getString());
  FIX::ApplQueueAction ApplQueueAction_0(0);
  msg.set(ApplQueueAction_0);
  MarketDataRequest_0.insert(ApplQueueAction_0.getString());
  FIX::ApplQueueMax ApplQueueMax_0(1525178694);
  msg.set(ApplQueueMax_0);
  MarketDataRequest_0.insert(ApplQueueMax_0.getString());
  FIX::MDImplicitDelete MDImplicitDelete_0(false);
  msg.set(MDImplicitDelete_0);
  MarketDataRequest_0.insert(MDImplicitDelete_0.getString());
  FIX::MDQuoteType MDQuoteType_1(1);
  msg.set(MDQuoteType_1);
  MarketDataRequest_0.insert(MDQuoteType_1.getString());
  FIX::MDReqID MDReqID_1("STRING_278732471");
  msg.set(MDReqID_1);
  MarketDataRequest_0.insert(MDReqID_1.getString());
  FIX::MDUpdateType MDUpdateType_0(1);
  msg.set(MDUpdateType_0);
  MarketDataRequest_0.insert(MDUpdateType_0.getString());
  FIX::MarketDepth MarketDepth_21(1544559366);
  msg.set(MarketDepth_21);
  MarketDataRequest_0.insert(MarketDepth_21.getString());
  FIX::OpenCloseSettlFlag OpenCloseSettlFlag_1("MULTIPLECHARVALUE_4");
  msg.set(OpenCloseSettlFlag_1);
  MarketDataRequest_0.insert(OpenCloseSettlFlag_1.getString());
  FIX::Scope Scope_1("MULTIPLECHARVALUE_3");
  msg.set(Scope_1);
  MarketDataRequest_0.insert(Scope_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_2('2');
  msg.set(SubscriptionRequestType_2);
  MarketDataRequest_0.insert(SubscriptionRequestType_2.getString());
  all_values.push_back(MarketDataRequest_0);

  all_compo_names.insert("MarketDataRequest");

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
    MDEntrySize_1.setString("12431809");
    noRelatedSym_0_0.set(MDEntrySize_1);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(MDEntrySize_1.getString());
    FIX::MDStreamID MDStreamID_1("STRING_686184575");
    noRelatedSym_0_0.set(MDStreamID_1);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(MDStreamID_1.getString());
    FIX::QuoteType QuoteType_0(0);
    noRelatedSym_0_0.set(QuoteType_0);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(QuoteType_0.getString());
    FIX::SettlDate SettlDate_19("LOCALMKTDATE_331336314");
    noRelatedSym_0_0.set(SettlDate_19);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(SettlDate_19.getString());
    FIX::SettlType SettlType_13("STRING_6");
    noRelatedSym_0_0.set(SettlType_13);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(SettlType_13.getString());
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_0);
    all_compo_names.insert("InstrmtMDReqGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_52;
      FIX::EncodedLegIssuer EncodedLegIssuer_52("DATA_2030294253");
      noLegs_0_1_0.set(EncodedLegIssuer_52);
      InstrumentLeg_52.insert(EncodedLegIssuer_52.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_52(1127988568);
      noLegs_0_1_0.set(EncodedLegIssuerLen_52);
      InstrumentLeg_52.insert(EncodedLegIssuerLen_52.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_52("DATA_1725037957");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_52);
      InstrumentLeg_52.insert(EncodedLegSecurityDesc_52.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_52(1555173534);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_52);
      InstrumentLeg_52.insert(EncodedLegSecurityDescLen_52.getString());
      FIX::LegCFICode LegCFICode_52("STRING_1260833754");
      noLegs_0_1_0.set(LegCFICode_52);
      InstrumentLeg_52.insert(LegCFICode_52.getString());
      FIX::LegContractMultiplier LegContractMultiplier_52;
      LegContractMultiplier_52.setString("5578088");
      noLegs_0_1_0.set(LegContractMultiplier_52);
      InstrumentLeg_52.insert(LegContractMultiplier_52.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_52(2066239060);
      noLegs_0_1_0.set(LegContractMultiplierUnit_52);
      InstrumentLeg_52.insert(LegContractMultiplierUnit_52.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_52("MONTHYEAR_2062207718");
      noLegs_0_1_0.set(LegContractSettlMonth_52);
      InstrumentLeg_52.insert(LegContractSettlMonth_52.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_52("COUNTRY_157044338");
      noLegs_0_1_0.set(LegCountryOfIssue_52);
      InstrumentLeg_52.insert(LegCountryOfIssue_52.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_52("LOCALMKTDATE_552620456");
      noLegs_0_1_0.set(LegCouponPaymentDate_52);
      InstrumentLeg_52.insert(LegCouponPaymentDate_52.getString());
      FIX::LegCouponRate LegCouponRate_52;
      LegCouponRate_52.setString("17.680000");
      noLegs_0_1_0.set(LegCouponRate_52);
      InstrumentLeg_52.insert(LegCouponRate_52.getString());
      FIX::LegCreditRating LegCreditRating_52("STRING_1521211377");
      noLegs_0_1_0.set(LegCreditRating_52);
      InstrumentLeg_52.insert(LegCreditRating_52.getString());
      FIX::LegCurrency LegCurrency_52("CHF");
      noLegs_0_1_0.set(LegCurrency_52);
      InstrumentLeg_52.insert(LegCurrency_52.getString());
      FIX::LegDatedDate LegDatedDate_52("LOCALMKTDATE_972152060");
      noLegs_0_1_0.set(LegDatedDate_52);
      InstrumentLeg_52.insert(LegDatedDate_52.getString());
      FIX::LegExerciseStyle LegExerciseStyle_52(960487369);
      noLegs_0_1_0.set(LegExerciseStyle_52);
      InstrumentLeg_52.insert(LegExerciseStyle_52.getString());
      FIX::LegFactor LegFactor_52;
      LegFactor_52.setString("2021692");
      noLegs_0_1_0.set(LegFactor_52);
      InstrumentLeg_52.insert(LegFactor_52.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_52(2104303879);
      noLegs_0_1_0.set(LegFlowScheduleType_52);
      InstrumentLeg_52.insert(LegFlowScheduleType_52.getString());
      FIX::LegInstrRegistry LegInstrRegistry_52("STRING_357563087");
      noLegs_0_1_0.set(LegInstrRegistry_52);
      InstrumentLeg_52.insert(LegInstrRegistry_52.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_52("LOCALMKTDATE_1783020586");
      noLegs_0_1_0.set(LegInterestAccrualDate_52);
      InstrumentLeg_52.insert(LegInterestAccrualDate_52.getString());
      FIX::LegIssueDate LegIssueDate_52("LOCALMKTDATE_1405219538");
      noLegs_0_1_0.set(LegIssueDate_52);
      InstrumentLeg_52.insert(LegIssueDate_52.getString());
      FIX::LegIssuer LegIssuer_52("STRING_1611465085");
      noLegs_0_1_0.set(LegIssuer_52);
      InstrumentLeg_52.insert(LegIssuer_52.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_52("STRING_34199136");
      noLegs_0_1_0.set(LegLocaleOfIssue_52);
      InstrumentLeg_52.insert(LegLocaleOfIssue_52.getString());
      FIX::LegMaturityDate LegMaturityDate_52("LOCALMKTDATE_807124318");
      noLegs_0_1_0.set(LegMaturityDate_52);
      InstrumentLeg_52.insert(LegMaturityDate_52.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_52("MONTHYEAR_1862324721");
      noLegs_0_1_0.set(LegMaturityMonthYear_52);
      InstrumentLeg_52.insert(LegMaturityMonthYear_52.getString());
      FIX::LegMaturityTime LegMaturityTime_52("TZTIMEONLY_1277380101");
      noLegs_0_1_0.set(LegMaturityTime_52);
      InstrumentLeg_52.insert(LegMaturityTime_52.getString());
      FIX::LegOptAttribute LegOptAttribute_52('1');
      noLegs_0_1_0.set(LegOptAttribute_52);
      InstrumentLeg_52.insert(LegOptAttribute_52.getString());
      FIX::LegOptionRatio LegOptionRatio_52;
      LegOptionRatio_52.setString("3192968");
      noLegs_0_1_0.set(LegOptionRatio_52);
      InstrumentLeg_52.insert(LegOptionRatio_52.getString());
      FIX::LegPool LegPool_52("STRING_1608716416");
      noLegs_0_1_0.set(LegPool_52);
      InstrumentLeg_52.insert(LegPool_52.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_52("STRING_1275508927");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_52);
      InstrumentLeg_52.insert(LegPriceUnitOfMeasure_52.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_52;
      LegPriceUnitOfMeasureQty_52.setString("14553780");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_52);
      InstrumentLeg_52.insert(LegPriceUnitOfMeasureQty_52.getString());
      FIX::LegProduct LegProduct_52(1491527021);
      noLegs_0_1_0.set(LegProduct_52);
      InstrumentLeg_52.insert(LegProduct_52.getString());
      FIX::LegPutOrCall LegPutOrCall_52(256013847);
      noLegs_0_1_0.set(LegPutOrCall_52);
      InstrumentLeg_52.insert(LegPutOrCall_52.getString());
      FIX::LegRatioQty LegRatioQty_52;
      LegRatioQty_52.setString("10329323");
      noLegs_0_1_0.set(LegRatioQty_52);
      InstrumentLeg_52.insert(LegRatioQty_52.getString());
      FIX::LegRedemptionDate LegRedemptionDate_52("LOCALMKTDATE_899216907");
      noLegs_0_1_0.set(LegRedemptionDate_52);
      InstrumentLeg_52.insert(LegRedemptionDate_52.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_52("STRING_1516847601");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_52);
      InstrumentLeg_52.insert(LegRepoCollateralSecurityType_52.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_52;
      LegRepurchaseRate_52.setString("12.680000");
      noLegs_0_1_0.set(LegRepurchaseRate_52);
      InstrumentLeg_52.insert(LegRepurchaseRate_52.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_52(817972320);
      noLegs_0_1_0.set(LegRepurchaseTerm_52);
      InstrumentLeg_52.insert(LegRepurchaseTerm_52.getString());
      FIX::LegSecurityDesc LegSecurityDesc_52("STRING_1431571671");
      noLegs_0_1_0.set(LegSecurityDesc_52);
      InstrumentLeg_52.insert(LegSecurityDesc_52.getString());
      FIX::LegSecurityExchange LegSecurityExchange_52("EXCHANGE_1747785606");
      noLegs_0_1_0.set(LegSecurityExchange_52);
      InstrumentLeg_52.insert(LegSecurityExchange_52.getString());
      FIX::LegSecurityID LegSecurityID_52("STRING_1370592776");
      noLegs_0_1_0.set(LegSecurityID_52);
      InstrumentLeg_52.insert(LegSecurityID_52.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_52("STRING_1977313440");
      noLegs_0_1_0.set(LegSecurityIDSource_52);
      InstrumentLeg_52.insert(LegSecurityIDSource_52.getString());
      FIX::LegSecuritySubType LegSecuritySubType_52("STRING_1121513335");
      noLegs_0_1_0.set(LegSecuritySubType_52);
      InstrumentLeg_52.insert(LegSecuritySubType_52.getString());
      FIX::LegSecurityType LegSecurityType_52("STRING_1835727369");
      noLegs_0_1_0.set(LegSecurityType_52);
      InstrumentLeg_52.insert(LegSecurityType_52.getString());
      FIX::LegSide LegSide_52('1');
      noLegs_0_1_0.set(LegSide_52);
      InstrumentLeg_52.insert(LegSide_52.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_52("STRING_2093665396");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_52);
      InstrumentLeg_52.insert(LegStateOrProvinceOfIssue_52.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_52("EUR");
      noLegs_0_1_0.set(LegStrikeCurrency_52);
      InstrumentLeg_52.insert(LegStrikeCurrency_52.getString());
      FIX::LegStrikePrice LegStrikePrice_52;
      LegStrikePrice_52.setString("20504856");
      noLegs_0_1_0.set(LegStrikePrice_52);
      InstrumentLeg_52.insert(LegStrikePrice_52.getString());
      FIX::LegSymbol LegSymbol_52("STRING_1006294178");
      noLegs_0_1_0.set(LegSymbol_52);
      InstrumentLeg_52.insert(LegSymbol_52.getString());
      FIX::LegSymbolSfx LegSymbolSfx_52("STRING_1738456479");
      noLegs_0_1_0.set(LegSymbolSfx_52);
      InstrumentLeg_52.insert(LegSymbolSfx_52.getString());
      FIX::LegTimeUnit LegTimeUnit_52("STRING_1308221517");
      noLegs_0_1_0.set(LegTimeUnit_52);
      InstrumentLeg_52.insert(LegTimeUnit_52.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_52("STRING_470275616");
      noLegs_0_1_0.set(LegUnitOfMeasure_52);
      InstrumentLeg_52.insert(LegUnitOfMeasure_52.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_52;
      LegUnitOfMeasureQty_52.setString("17726556");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_52);
      InstrumentLeg_52.insert(LegUnitOfMeasureQty_52.getString());
      all_values.push_back(InstrumentLeg_52);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_101;
        FIX::LegSecurityAltID LegSecurityAltID_101("STRING_185116689");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_101);
        LegSecAltIDGrp_NoLegSecurityAltID_101.insert(LegSecurityAltID_101.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_101("STRING_902552069");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_101);
        LegSecAltIDGrp_NoLegSecurityAltID_101.insert(LegSecurityAltIDSource_101.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_101);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_102;
        FIX::LegSecurityAltID LegSecurityAltID_102("STRING_1461171080");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_102);
        LegSecAltIDGrp_NoLegSecurityAltID_102.insert(LegSecurityAltID_102.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_102("STRING_504413490");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_102);
        LegSecAltIDGrp_NoLegSecurityAltID_102.insert(LegSecurityAltIDSource_102.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_102);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_53;
      FIX::EncodedLegIssuer EncodedLegIssuer_53("DATA_363784837");
      noLegs_0_1_1.set(EncodedLegIssuer_53);
      InstrumentLeg_53.insert(EncodedLegIssuer_53.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_53(589196360);
      noLegs_0_1_1.set(EncodedLegIssuerLen_53);
      InstrumentLeg_53.insert(EncodedLegIssuerLen_53.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_53("DATA_1959791565");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_53);
      InstrumentLeg_53.insert(EncodedLegSecurityDesc_53.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_53(1855311859);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_53);
      InstrumentLeg_53.insert(EncodedLegSecurityDescLen_53.getString());
      FIX::LegCFICode LegCFICode_53("STRING_845210207");
      noLegs_0_1_1.set(LegCFICode_53);
      InstrumentLeg_53.insert(LegCFICode_53.getString());
      FIX::LegContractMultiplier LegContractMultiplier_53;
      LegContractMultiplier_53.setString("8452403");
      noLegs_0_1_1.set(LegContractMultiplier_53);
      InstrumentLeg_53.insert(LegContractMultiplier_53.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_53(607045118);
      noLegs_0_1_1.set(LegContractMultiplierUnit_53);
      InstrumentLeg_53.insert(LegContractMultiplierUnit_53.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_53("MONTHYEAR_214574161");
      noLegs_0_1_1.set(LegContractSettlMonth_53);
      InstrumentLeg_53.insert(LegContractSettlMonth_53.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_53("COUNTRY_288497921");
      noLegs_0_1_1.set(LegCountryOfIssue_53);
      InstrumentLeg_53.insert(LegCountryOfIssue_53.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_53("LOCALMKTDATE_1425017438");
      noLegs_0_1_1.set(LegCouponPaymentDate_53);
      InstrumentLeg_53.insert(LegCouponPaymentDate_53.getString());
      FIX::LegCouponRate LegCouponRate_53;
      LegCouponRate_53.setString("58.320000");
      noLegs_0_1_1.set(LegCouponRate_53);
      InstrumentLeg_53.insert(LegCouponRate_53.getString());
      FIX::LegCreditRating LegCreditRating_53("STRING_2036283527");
      noLegs_0_1_1.set(LegCreditRating_53);
      InstrumentLeg_53.insert(LegCreditRating_53.getString());
      FIX::LegCurrency LegCurrency_53("GBP");
      noLegs_0_1_1.set(LegCurrency_53);
      InstrumentLeg_53.insert(LegCurrency_53.getString());
      FIX::LegDatedDate LegDatedDate_53("LOCALMKTDATE_1010313215");
      noLegs_0_1_1.set(LegDatedDate_53);
      InstrumentLeg_53.insert(LegDatedDate_53.getString());
      FIX::LegExerciseStyle LegExerciseStyle_53(336370288);
      noLegs_0_1_1.set(LegExerciseStyle_53);
      InstrumentLeg_53.insert(LegExerciseStyle_53.getString());
      FIX::LegFactor LegFactor_53;
      LegFactor_53.setString("12292422");
      noLegs_0_1_1.set(LegFactor_53);
      InstrumentLeg_53.insert(LegFactor_53.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_53(956494963);
      noLegs_0_1_1.set(LegFlowScheduleType_53);
      InstrumentLeg_53.insert(LegFlowScheduleType_53.getString());
      FIX::LegInstrRegistry LegInstrRegistry_53("STRING_985101379");
      noLegs_0_1_1.set(LegInstrRegistry_53);
      InstrumentLeg_53.insert(LegInstrRegistry_53.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_53("LOCALMKTDATE_1184678124");
      noLegs_0_1_1.set(LegInterestAccrualDate_53);
      InstrumentLeg_53.insert(LegInterestAccrualDate_53.getString());
      FIX::LegIssueDate LegIssueDate_53("LOCALMKTDATE_859496942");
      noLegs_0_1_1.set(LegIssueDate_53);
      InstrumentLeg_53.insert(LegIssueDate_53.getString());
      FIX::LegIssuer LegIssuer_53("STRING_1991395558");
      noLegs_0_1_1.set(LegIssuer_53);
      InstrumentLeg_53.insert(LegIssuer_53.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_53("STRING_775650956");
      noLegs_0_1_1.set(LegLocaleOfIssue_53);
      InstrumentLeg_53.insert(LegLocaleOfIssue_53.getString());
      FIX::LegMaturityDate LegMaturityDate_53("LOCALMKTDATE_20234812");
      noLegs_0_1_1.set(LegMaturityDate_53);
      InstrumentLeg_53.insert(LegMaturityDate_53.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_53("MONTHYEAR_314187526");
      noLegs_0_1_1.set(LegMaturityMonthYear_53);
      InstrumentLeg_53.insert(LegMaturityMonthYear_53.getString());
      FIX::LegMaturityTime LegMaturityTime_53("TZTIMEONLY_400822924");
      noLegs_0_1_1.set(LegMaturityTime_53);
      InstrumentLeg_53.insert(LegMaturityTime_53.getString());
      FIX::LegOptAttribute LegOptAttribute_53('2');
      noLegs_0_1_1.set(LegOptAttribute_53);
      InstrumentLeg_53.insert(LegOptAttribute_53.getString());
      FIX::LegOptionRatio LegOptionRatio_53;
      LegOptionRatio_53.setString("4993042");
      noLegs_0_1_1.set(LegOptionRatio_53);
      InstrumentLeg_53.insert(LegOptionRatio_53.getString());
      FIX::LegPool LegPool_53("STRING_1303374993");
      noLegs_0_1_1.set(LegPool_53);
      InstrumentLeg_53.insert(LegPool_53.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_53("STRING_1449268080");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_53);
      InstrumentLeg_53.insert(LegPriceUnitOfMeasure_53.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_53;
      LegPriceUnitOfMeasureQty_53.setString("10037177");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_53);
      InstrumentLeg_53.insert(LegPriceUnitOfMeasureQty_53.getString());
      FIX::LegProduct LegProduct_53(1667159831);
      noLegs_0_1_1.set(LegProduct_53);
      InstrumentLeg_53.insert(LegProduct_53.getString());
      FIX::LegPutOrCall LegPutOrCall_53(2038464440);
      noLegs_0_1_1.set(LegPutOrCall_53);
      InstrumentLeg_53.insert(LegPutOrCall_53.getString());
      FIX::LegRatioQty LegRatioQty_53;
      LegRatioQty_53.setString("8160256");
      noLegs_0_1_1.set(LegRatioQty_53);
      InstrumentLeg_53.insert(LegRatioQty_53.getString());
      FIX::LegRedemptionDate LegRedemptionDate_53("LOCALMKTDATE_1374988042");
      noLegs_0_1_1.set(LegRedemptionDate_53);
      InstrumentLeg_53.insert(LegRedemptionDate_53.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_53("STRING_736190999");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_53);
      InstrumentLeg_53.insert(LegRepoCollateralSecurityType_53.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_53;
      LegRepurchaseRate_53.setString("59.230000");
      noLegs_0_1_1.set(LegRepurchaseRate_53);
      InstrumentLeg_53.insert(LegRepurchaseRate_53.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_53(1982033160);
      noLegs_0_1_1.set(LegRepurchaseTerm_53);
      InstrumentLeg_53.insert(LegRepurchaseTerm_53.getString());
      FIX::LegSecurityDesc LegSecurityDesc_53("STRING_950765160");
      noLegs_0_1_1.set(LegSecurityDesc_53);
      InstrumentLeg_53.insert(LegSecurityDesc_53.getString());
      FIX::LegSecurityExchange LegSecurityExchange_53("EXCHANGE_1949763844");
      noLegs_0_1_1.set(LegSecurityExchange_53);
      InstrumentLeg_53.insert(LegSecurityExchange_53.getString());
      FIX::LegSecurityID LegSecurityID_53("STRING_1259566951");
      noLegs_0_1_1.set(LegSecurityID_53);
      InstrumentLeg_53.insert(LegSecurityID_53.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_53("STRING_449427345");
      noLegs_0_1_1.set(LegSecurityIDSource_53);
      InstrumentLeg_53.insert(LegSecurityIDSource_53.getString());
      FIX::LegSecuritySubType LegSecuritySubType_53("STRING_1838563724");
      noLegs_0_1_1.set(LegSecuritySubType_53);
      InstrumentLeg_53.insert(LegSecuritySubType_53.getString());
      FIX::LegSecurityType LegSecurityType_53("STRING_1907693518");
      noLegs_0_1_1.set(LegSecurityType_53);
      InstrumentLeg_53.insert(LegSecurityType_53.getString());
      FIX::LegSide LegSide_53('1');
      noLegs_0_1_1.set(LegSide_53);
      InstrumentLeg_53.insert(LegSide_53.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_53("STRING_701393291");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_53);
      InstrumentLeg_53.insert(LegStateOrProvinceOfIssue_53.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_53("CAN");
      noLegs_0_1_1.set(LegStrikeCurrency_53);
      InstrumentLeg_53.insert(LegStrikeCurrency_53.getString());
      FIX::LegStrikePrice LegStrikePrice_53;
      LegStrikePrice_53.setString("16578882");
      noLegs_0_1_1.set(LegStrikePrice_53);
      InstrumentLeg_53.insert(LegStrikePrice_53.getString());
      FIX::LegSymbol LegSymbol_53("STRING_1081681538");
      noLegs_0_1_1.set(LegSymbol_53);
      InstrumentLeg_53.insert(LegSymbol_53.getString());
      FIX::LegSymbolSfx LegSymbolSfx_53("STRING_44356029");
      noLegs_0_1_1.set(LegSymbolSfx_53);
      InstrumentLeg_53.insert(LegSymbolSfx_53.getString());
      FIX::LegTimeUnit LegTimeUnit_53("STRING_369901548");
      noLegs_0_1_1.set(LegTimeUnit_53);
      InstrumentLeg_53.insert(LegTimeUnit_53.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_53("STRING_925593448");
      noLegs_0_1_1.set(LegUnitOfMeasure_53);
      InstrumentLeg_53.insert(LegUnitOfMeasure_53.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_53;
      LegUnitOfMeasureQty_53.setString("8200069");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_53);
      InstrumentLeg_53.insert(LegUnitOfMeasureQty_53.getString());
      all_values.push_back(InstrumentLeg_53);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_103;
        FIX::LegSecurityAltID LegSecurityAltID_103("STRING_1239780974");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_103);
        LegSecAltIDGrp_NoLegSecurityAltID_103.insert(LegSecurityAltID_103.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_103("STRING_1220829909");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_103);
        LegSecAltIDGrp_NoLegSecurityAltID_103.insert(LegSecurityAltIDSource_103.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_103);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_104;
        FIX::LegSecurityAltID LegSecurityAltID_104("STRING_378233360");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_104);
        LegSecAltIDGrp_NoLegSecurityAltID_104.insert(LegSecurityAltID_104.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_104("STRING_1739085189");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_104);
        LegSecAltIDGrp_NoLegSecurityAltID_104.insert(LegSecurityAltIDSource_104.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_104);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_54;
      FIX::EncodedLegIssuer EncodedLegIssuer_54("DATA_376721255");
      noLegs_0_1_2.set(EncodedLegIssuer_54);
      InstrumentLeg_54.insert(EncodedLegIssuer_54.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_54(1827501440);
      noLegs_0_1_2.set(EncodedLegIssuerLen_54);
      InstrumentLeg_54.insert(EncodedLegIssuerLen_54.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_54("DATA_595319246");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_54);
      InstrumentLeg_54.insert(EncodedLegSecurityDesc_54.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_54(2043881086);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_54);
      InstrumentLeg_54.insert(EncodedLegSecurityDescLen_54.getString());
      FIX::LegCFICode LegCFICode_54("STRING_1718482232");
      noLegs_0_1_2.set(LegCFICode_54);
      InstrumentLeg_54.insert(LegCFICode_54.getString());
      FIX::LegContractMultiplier LegContractMultiplier_54;
      LegContractMultiplier_54.setString("14113448");
      noLegs_0_1_2.set(LegContractMultiplier_54);
      InstrumentLeg_54.insert(LegContractMultiplier_54.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_54(1271385480);
      noLegs_0_1_2.set(LegContractMultiplierUnit_54);
      InstrumentLeg_54.insert(LegContractMultiplierUnit_54.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_54("MONTHYEAR_307189583");
      noLegs_0_1_2.set(LegContractSettlMonth_54);
      InstrumentLeg_54.insert(LegContractSettlMonth_54.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_54("COUNTRY_925127144");
      noLegs_0_1_2.set(LegCountryOfIssue_54);
      InstrumentLeg_54.insert(LegCountryOfIssue_54.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_54("LOCALMKTDATE_1105934992");
      noLegs_0_1_2.set(LegCouponPaymentDate_54);
      InstrumentLeg_54.insert(LegCouponPaymentDate_54.getString());
      FIX::LegCouponRate LegCouponRate_54;
      LegCouponRate_54.setString("47.440000");
      noLegs_0_1_2.set(LegCouponRate_54);
      InstrumentLeg_54.insert(LegCouponRate_54.getString());
      FIX::LegCreditRating LegCreditRating_54("STRING_727407341");
      noLegs_0_1_2.set(LegCreditRating_54);
      InstrumentLeg_54.insert(LegCreditRating_54.getString());
      FIX::LegCurrency LegCurrency_54("CHF");
      noLegs_0_1_2.set(LegCurrency_54);
      InstrumentLeg_54.insert(LegCurrency_54.getString());
      FIX::LegDatedDate LegDatedDate_54("LOCALMKTDATE_418487417");
      noLegs_0_1_2.set(LegDatedDate_54);
      InstrumentLeg_54.insert(LegDatedDate_54.getString());
      FIX::LegExerciseStyle LegExerciseStyle_54(2125711813);
      noLegs_0_1_2.set(LegExerciseStyle_54);
      InstrumentLeg_54.insert(LegExerciseStyle_54.getString());
      FIX::LegFactor LegFactor_54;
      LegFactor_54.setString("14853014");
      noLegs_0_1_2.set(LegFactor_54);
      InstrumentLeg_54.insert(LegFactor_54.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_54(1119880708);
      noLegs_0_1_2.set(LegFlowScheduleType_54);
      InstrumentLeg_54.insert(LegFlowScheduleType_54.getString());
      FIX::LegInstrRegistry LegInstrRegistry_54("STRING_74808324");
      noLegs_0_1_2.set(LegInstrRegistry_54);
      InstrumentLeg_54.insert(LegInstrRegistry_54.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_54("LOCALMKTDATE_344979315");
      noLegs_0_1_2.set(LegInterestAccrualDate_54);
      InstrumentLeg_54.insert(LegInterestAccrualDate_54.getString());
      FIX::LegIssueDate LegIssueDate_54("LOCALMKTDATE_630285314");
      noLegs_0_1_2.set(LegIssueDate_54);
      InstrumentLeg_54.insert(LegIssueDate_54.getString());
      FIX::LegIssuer LegIssuer_54("STRING_1156489862");
      noLegs_0_1_2.set(LegIssuer_54);
      InstrumentLeg_54.insert(LegIssuer_54.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_54("STRING_389335345");
      noLegs_0_1_2.set(LegLocaleOfIssue_54);
      InstrumentLeg_54.insert(LegLocaleOfIssue_54.getString());
      FIX::LegMaturityDate LegMaturityDate_54("LOCALMKTDATE_1000186862");
      noLegs_0_1_2.set(LegMaturityDate_54);
      InstrumentLeg_54.insert(LegMaturityDate_54.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_54("MONTHYEAR_2082083310");
      noLegs_0_1_2.set(LegMaturityMonthYear_54);
      InstrumentLeg_54.insert(LegMaturityMonthYear_54.getString());
      FIX::LegMaturityTime LegMaturityTime_54("TZTIMEONLY_1209342330");
      noLegs_0_1_2.set(LegMaturityTime_54);
      InstrumentLeg_54.insert(LegMaturityTime_54.getString());
      FIX::LegOptAttribute LegOptAttribute_54('1');
      noLegs_0_1_2.set(LegOptAttribute_54);
      InstrumentLeg_54.insert(LegOptAttribute_54.getString());
      FIX::LegOptionRatio LegOptionRatio_54;
      LegOptionRatio_54.setString("11743806");
      noLegs_0_1_2.set(LegOptionRatio_54);
      InstrumentLeg_54.insert(LegOptionRatio_54.getString());
      FIX::LegPool LegPool_54("STRING_282688592");
      noLegs_0_1_2.set(LegPool_54);
      InstrumentLeg_54.insert(LegPool_54.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_54("STRING_1768556583");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_54);
      InstrumentLeg_54.insert(LegPriceUnitOfMeasure_54.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_54;
      LegPriceUnitOfMeasureQty_54.setString("7659821");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_54);
      InstrumentLeg_54.insert(LegPriceUnitOfMeasureQty_54.getString());
      FIX::LegProduct LegProduct_54(659409847);
      noLegs_0_1_2.set(LegProduct_54);
      InstrumentLeg_54.insert(LegProduct_54.getString());
      FIX::LegPutOrCall LegPutOrCall_54(1448574375);
      noLegs_0_1_2.set(LegPutOrCall_54);
      InstrumentLeg_54.insert(LegPutOrCall_54.getString());
      FIX::LegRatioQty LegRatioQty_54;
      LegRatioQty_54.setString("13613014");
      noLegs_0_1_2.set(LegRatioQty_54);
      InstrumentLeg_54.insert(LegRatioQty_54.getString());
      FIX::LegRedemptionDate LegRedemptionDate_54("LOCALMKTDATE_555807285");
      noLegs_0_1_2.set(LegRedemptionDate_54);
      InstrumentLeg_54.insert(LegRedemptionDate_54.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_54("STRING_1019572959");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_54);
      InstrumentLeg_54.insert(LegRepoCollateralSecurityType_54.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_54;
      LegRepurchaseRate_54.setString("26.440000");
      noLegs_0_1_2.set(LegRepurchaseRate_54);
      InstrumentLeg_54.insert(LegRepurchaseRate_54.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_54(1827192765);
      noLegs_0_1_2.set(LegRepurchaseTerm_54);
      InstrumentLeg_54.insert(LegRepurchaseTerm_54.getString());
      FIX::LegSecurityDesc LegSecurityDesc_54("STRING_1326762542");
      noLegs_0_1_2.set(LegSecurityDesc_54);
      InstrumentLeg_54.insert(LegSecurityDesc_54.getString());
      FIX::LegSecurityExchange LegSecurityExchange_54("EXCHANGE_1550289789");
      noLegs_0_1_2.set(LegSecurityExchange_54);
      InstrumentLeg_54.insert(LegSecurityExchange_54.getString());
      FIX::LegSecurityID LegSecurityID_54("STRING_785644109");
      noLegs_0_1_2.set(LegSecurityID_54);
      InstrumentLeg_54.insert(LegSecurityID_54.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_54("STRING_437233638");
      noLegs_0_1_2.set(LegSecurityIDSource_54);
      InstrumentLeg_54.insert(LegSecurityIDSource_54.getString());
      FIX::LegSecuritySubType LegSecuritySubType_54("STRING_130213482");
      noLegs_0_1_2.set(LegSecuritySubType_54);
      InstrumentLeg_54.insert(LegSecuritySubType_54.getString());
      FIX::LegSecurityType LegSecurityType_54("STRING_1003662405");
      noLegs_0_1_2.set(LegSecurityType_54);
      InstrumentLeg_54.insert(LegSecurityType_54.getString());
      FIX::LegSide LegSide_54('2');
      noLegs_0_1_2.set(LegSide_54);
      InstrumentLeg_54.insert(LegSide_54.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_54("STRING_548700899");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_54);
      InstrumentLeg_54.insert(LegStateOrProvinceOfIssue_54.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_54("GBP");
      noLegs_0_1_2.set(LegStrikeCurrency_54);
      InstrumentLeg_54.insert(LegStrikeCurrency_54.getString());
      FIX::LegStrikePrice LegStrikePrice_54;
      LegStrikePrice_54.setString("16685816");
      noLegs_0_1_2.set(LegStrikePrice_54);
      InstrumentLeg_54.insert(LegStrikePrice_54.getString());
      FIX::LegSymbol LegSymbol_54("STRING_1056698894");
      noLegs_0_1_2.set(LegSymbol_54);
      InstrumentLeg_54.insert(LegSymbol_54.getString());
      FIX::LegSymbolSfx LegSymbolSfx_54("STRING_1827412805");
      noLegs_0_1_2.set(LegSymbolSfx_54);
      InstrumentLeg_54.insert(LegSymbolSfx_54.getString());
      FIX::LegTimeUnit LegTimeUnit_54("STRING_151383273");
      noLegs_0_1_2.set(LegTimeUnit_54);
      InstrumentLeg_54.insert(LegTimeUnit_54.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_54("STRING_65705108");
      noLegs_0_1_2.set(LegUnitOfMeasure_54);
      InstrumentLeg_54.insert(LegUnitOfMeasure_54.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_54;
      LegUnitOfMeasureQty_54.setString("692645");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_54);
      InstrumentLeg_54.insert(LegUnitOfMeasureQty_54.getString());
      all_values.push_back(InstrumentLeg_54);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_105;
        FIX::LegSecurityAltID LegSecurityAltID_105("STRING_304770");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_105);
        LegSecAltIDGrp_NoLegSecurityAltID_105.insert(LegSecurityAltID_105.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_105("STRING_1278606833");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_105);
        LegSecAltIDGrp_NoLegSecurityAltID_105.insert(LegSecurityAltIDSource_105.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_105);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_106;
        FIX::LegSecurityAltID LegSecurityAltID_106("STRING_394409710");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_106);
        LegSecAltIDGrp_NoLegSecurityAltID_106.insert(LegSecurityAltID_106.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_106("STRING_1174685406");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_106);
        LegSecAltIDGrp_NoLegSecurityAltID_106.insert(LegSecurityAltIDSource_106.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_106);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_107;
        FIX::LegSecurityAltID LegSecurityAltID_107("STRING_1561295425");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltID_107);
        LegSecAltIDGrp_NoLegSecurityAltID_107.insert(LegSecurityAltID_107.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_107("STRING_15482645");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltIDSource_107);
        LegSecAltIDGrp_NoLegSecurityAltID_107.insert(LegSecurityAltIDSource_107.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_107);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_29;
    FIX::AttachmentPoint AttachmentPoint_29;
    AttachmentPoint_29.setString("75.830000");
    noRelatedSym_0_0.set(AttachmentPoint_29);
    Instrument_29.insert(AttachmentPoint_29.getString());
    FIX::CFICode CFICode_29("STRING_73221624");
    noRelatedSym_0_0.set(CFICode_29);
    Instrument_29.insert(CFICode_29.getString());
    FIX::CPProgram CPProgram_29(99);
    noRelatedSym_0_0.set(CPProgram_29);
    Instrument_29.insert(CPProgram_29.getString());
    FIX::CPRegType CPRegType_29("STRING_1154485359");
    noRelatedSym_0_0.set(CPRegType_29);
    Instrument_29.insert(CPRegType_29.getString());
    FIX::CapPrice CapPrice_29;
    CapPrice_29.setString("6290289");
    noRelatedSym_0_0.set(CapPrice_29);
    Instrument_29.insert(CapPrice_29.getString());
    FIX::ContractMultiplier ContractMultiplier_29;
    ContractMultiplier_29.setString("3361463");
    noRelatedSym_0_0.set(ContractMultiplier_29);
    Instrument_29.insert(ContractMultiplier_29.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_29(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_29);
    Instrument_29.insert(ContractMultiplierUnit_29.getString());
    FIX::ContractSettlMonth ContractSettlMonth_29("MONTHYEAR_308738026");
    noRelatedSym_0_0.set(ContractSettlMonth_29);
    Instrument_29.insert(ContractSettlMonth_29.getString());
    FIX::CountryOfIssue CountryOfIssue_29("COUNTRY_1662908874");
    noRelatedSym_0_0.set(CountryOfIssue_29);
    Instrument_29.insert(CountryOfIssue_29.getString());
    FIX::CouponPaymentDate CouponPaymentDate_29("LOCALMKTDATE_1182454144");
    noRelatedSym_0_0.set(CouponPaymentDate_29);
    Instrument_29.insert(CouponPaymentDate_29.getString());
    FIX::CouponRate CouponRate_29;
    CouponRate_29.setString("21.350000");
    noRelatedSym_0_0.set(CouponRate_29);
    Instrument_29.insert(CouponRate_29.getString());
    FIX::CreditRating CreditRating_29("STRING_2100142512");
    noRelatedSym_0_0.set(CreditRating_29);
    Instrument_29.insert(CreditRating_29.getString());
    FIX::DatedDate DatedDate_29("LOCALMKTDATE_1312667626");
    noRelatedSym_0_0.set(DatedDate_29);
    Instrument_29.insert(DatedDate_29.getString());
    FIX::DetachmentPoint DetachmentPoint_29;
    DetachmentPoint_29.setString("45.400000");
    noRelatedSym_0_0.set(DetachmentPoint_29);
    Instrument_29.insert(DetachmentPoint_29.getString());
    FIX::EncodedIssuer EncodedIssuer_29("DATA_2097274592");
    noRelatedSym_0_0.set(EncodedIssuer_29);
    Instrument_29.insert(EncodedIssuer_29.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_29(1861368525);
    noRelatedSym_0_0.set(EncodedIssuerLen_29);
    Instrument_29.insert(EncodedIssuerLen_29.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_29("DATA_932451463");
    noRelatedSym_0_0.set(EncodedSecurityDesc_29);
    Instrument_29.insert(EncodedSecurityDesc_29.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_29(1432224434);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_29);
    Instrument_29.insert(EncodedSecurityDescLen_29.getString());
    FIX::ExerciseStyle ExerciseStyle_29(1);
    noRelatedSym_0_0.set(ExerciseStyle_29);
    Instrument_29.insert(ExerciseStyle_29.getString());
    FIX::Factor Factor_29;
    Factor_29.setString("19891503");
    noRelatedSym_0_0.set(Factor_29);
    Instrument_29.insert(Factor_29.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_29(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_29);
    Instrument_29.insert(FlexProductEligibilityIndicator_29.getString());
    FIX::FlexibleIndicator FlexibleIndicator_29(false);
    noRelatedSym_0_0.set(FlexibleIndicator_29);
    Instrument_29.insert(FlexibleIndicator_29.getString());
    FIX::FloorPrice FloorPrice_29;
    FloorPrice_29.setString("20548554");
    noRelatedSym_0_0.set(FloorPrice_29);
    Instrument_29.insert(FloorPrice_29.getString());
    FIX::FlowScheduleType FlowScheduleType_29(4);
    noRelatedSym_0_0.set(FlowScheduleType_29);
    Instrument_29.insert(FlowScheduleType_29.getString());
    FIX::InstrRegistry InstrRegistry_29("STRING_537936245");
    noRelatedSym_0_0.set(InstrRegistry_29);
    Instrument_29.insert(InstrRegistry_29.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_29('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_29);
    Instrument_29.insert(InstrmtAssignmentMethod_29.getString());
    FIX::InterestAccrualDate InterestAccrualDate_29("LOCALMKTDATE_312541279");
    noRelatedSym_0_0.set(InterestAccrualDate_29);
    Instrument_29.insert(InterestAccrualDate_29.getString());
    FIX::IssueDate IssueDate_29("LOCALMKTDATE_932345955");
    noRelatedSym_0_0.set(IssueDate_29);
    Instrument_29.insert(IssueDate_29.getString());
    FIX::Issuer Issuer_29("STRING_1082361995");
    noRelatedSym_0_0.set(Issuer_29);
    Instrument_29.insert(Issuer_29.getString());
    FIX::ListMethod ListMethod_29(0);
    noRelatedSym_0_0.set(ListMethod_29);
    Instrument_29.insert(ListMethod_29.getString());
    FIX::LocaleOfIssue LocaleOfIssue_29("STRING_947828601");
    noRelatedSym_0_0.set(LocaleOfIssue_29);
    Instrument_29.insert(LocaleOfIssue_29.getString());
    FIX::MaturityDate MaturityDate_29("LOCALMKTDATE_875545930");
    noRelatedSym_0_0.set(MaturityDate_29);
    Instrument_29.insert(MaturityDate_29.getString());
    FIX::MaturityMonthYear MaturityMonthYear_29("MONTHYEAR_1947058328");
    noRelatedSym_0_0.set(MaturityMonthYear_29);
    Instrument_29.insert(MaturityMonthYear_29.getString());
    FIX::MaturityTime MaturityTime_29("TZTIMEONLY_264401973");
    noRelatedSym_0_0.set(MaturityTime_29);
    Instrument_29.insert(MaturityTime_29.getString());
    FIX::MinPriceIncrement MinPriceIncrement_29;
    MinPriceIncrement_29.setString("20300312");
    noRelatedSym_0_0.set(MinPriceIncrement_29);
    Instrument_29.insert(MinPriceIncrement_29.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_29;
    MinPriceIncrementAmount_29.setString("4286035");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_29);
    Instrument_29.insert(MinPriceIncrementAmount_29.getString());
    FIX::NTPositionLimit NTPositionLimit_29(600548305);
    noRelatedSym_0_0.set(NTPositionLimit_29);
    Instrument_29.insert(NTPositionLimit_29.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_29;
    NotionalPercentageOutstanding_29.setString("56.450000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_29);
    Instrument_29.insert(NotionalPercentageOutstanding_29.getString());
    FIX::OptAttribute OptAttribute_29('7');
    noRelatedSym_0_0.set(OptAttribute_29);
    Instrument_29.insert(OptAttribute_29.getString());
    FIX::OptPayoutAmount OptPayoutAmount_29;
    OptPayoutAmount_29.setString("1159735");
    noRelatedSym_0_0.set(OptPayoutAmount_29);
    Instrument_29.insert(OptPayoutAmount_29.getString());
    FIX::OptPayoutType OptPayoutType_29(3);
    noRelatedSym_0_0.set(OptPayoutType_29);
    Instrument_29.insert(OptPayoutType_29.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_29;
    OriginalNotionalPercentageOutstanding_29.setString("37.500000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_29);
    Instrument_29.insert(OriginalNotionalPercentageOutstanding_29.getString());
    FIX::Pool Pool_29("STRING_68632395");
    noRelatedSym_0_0.set(Pool_29);
    Instrument_29.insert(Pool_29.getString());
    FIX::PositionLimit PositionLimit_29(2009833768);
    noRelatedSym_0_0.set(PositionLimit_29);
    Instrument_29.insert(PositionLimit_29.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_29("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_29);
    Instrument_29.insert(PriceQuoteMethod_29.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_29("STRING_18423339");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_29);
    Instrument_29.insert(PriceUnitOfMeasure_29.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_29;
    PriceUnitOfMeasureQty_29.setString("17237186");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_29);
    Instrument_29.insert(PriceUnitOfMeasureQty_29.getString());
    FIX::Product Product_31(7);
    noRelatedSym_0_0.set(Product_31);
    Instrument_29.insert(Product_31.getString());
    FIX::ProductComplex ProductComplex_29("STRING_1450647773");
    noRelatedSym_0_0.set(ProductComplex_29);
    Instrument_29.insert(ProductComplex_29.getString());
    FIX::PutOrCall PutOrCall_29(0);
    noRelatedSym_0_0.set(PutOrCall_29);
    Instrument_29.insert(PutOrCall_29.getString());
    FIX::RedemptionDate RedemptionDate_29("LOCALMKTDATE_408919167");
    noRelatedSym_0_0.set(RedemptionDate_29);
    Instrument_29.insert(RedemptionDate_29.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_29("STRING_415317717");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_29);
    Instrument_29.insert(RepoCollateralSecurityType_29.getString());
    FIX::RepurchaseRate RepurchaseRate_29;
    RepurchaseRate_29.setString("75.910000");
    noRelatedSym_0_0.set(RepurchaseRate_29);
    Instrument_29.insert(RepurchaseRate_29.getString());
    FIX::RepurchaseTerm RepurchaseTerm_29(316290985);
    noRelatedSym_0_0.set(RepurchaseTerm_29);
    Instrument_29.insert(RepurchaseTerm_29.getString());
    FIX::RestructuringType RestructuringType_29("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_29);
    Instrument_29.insert(RestructuringType_29.getString());
    FIX::SecurityDesc SecurityDesc_29("STRING_883003836");
    noRelatedSym_0_0.set(SecurityDesc_29);
    Instrument_29.insert(SecurityDesc_29.getString());
    FIX::SecurityExchange SecurityExchange_29("EXCHANGE_223967574");
    noRelatedSym_0_0.set(SecurityExchange_29);
    Instrument_29.insert(SecurityExchange_29.getString());
    FIX::SecurityGroup SecurityGroup_29("STRING_1909277090");
    noRelatedSym_0_0.set(SecurityGroup_29);
    Instrument_29.insert(SecurityGroup_29.getString());
    FIX::SecurityID SecurityID_29("STRING_1815349792");
    noRelatedSym_0_0.set(SecurityID_29);
    Instrument_29.insert(SecurityID_29.getString());
    FIX::SecurityIDSource SecurityIDSource_29("STRING_I");
    noRelatedSym_0_0.set(SecurityIDSource_29);
    Instrument_29.insert(SecurityIDSource_29.getString());
    FIX::SecurityStatus SecurityStatus_29("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_29);
    Instrument_29.insert(SecurityStatus_29.getString());
    FIX::SecuritySubType SecuritySubType_30("STRING_615694745");
    noRelatedSym_0_0.set(SecuritySubType_30);
    Instrument_29.insert(SecuritySubType_30.getString());
    FIX::SecurityType SecurityType_31("STRING_TPRN");
    noRelatedSym_0_0.set(SecurityType_31);
    Instrument_29.insert(SecurityType_31.getString());
    FIX::Seniority Seniority_29("STRING_SB");
    noRelatedSym_0_0.set(Seniority_29);
    Instrument_29.insert(Seniority_29.getString());
    FIX::SettlMethod SettlMethod_29('C');
    noRelatedSym_0_0.set(SettlMethod_29);
    Instrument_29.insert(SettlMethod_29.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_29("STRING_2064423141");
    noRelatedSym_0_0.set(SettleOnOpenFlag_29);
    Instrument_29.insert(SettleOnOpenFlag_29.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_29("STRING_1863808415");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_29);
    Instrument_29.insert(StateOrProvinceOfIssue_29.getString());
    FIX::StrikeCurrency StrikeCurrency_29("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_29);
    Instrument_29.insert(StrikeCurrency_29.getString());
    FIX::StrikeMultiplier StrikeMultiplier_29;
    StrikeMultiplier_29.setString("4536663");
    noRelatedSym_0_0.set(StrikeMultiplier_29);
    Instrument_29.insert(StrikeMultiplier_29.getString());
    FIX::StrikePrice StrikePrice_29;
    StrikePrice_29.setString("15966185");
    noRelatedSym_0_0.set(StrikePrice_29);
    Instrument_29.insert(StrikePrice_29.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_29(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_29);
    Instrument_29.insert(StrikePriceBoundaryMethod_29.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_29;
    StrikePriceBoundaryPrecision_29.setString("64.840000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_29);
    Instrument_29.insert(StrikePriceBoundaryPrecision_29.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_29(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_29);
    Instrument_29.insert(StrikePriceDeterminationMethod_29.getString());
    FIX::StrikeValue StrikeValue_29;
    StrikeValue_29.setString("21386513");
    noRelatedSym_0_0.set(StrikeValue_29);
    Instrument_29.insert(StrikeValue_29.getString());
    FIX::Symbol Symbol_29("STRING_1920191127");
    noRelatedSym_0_0.set(Symbol_29);
    Instrument_29.insert(Symbol_29.getString());
    FIX::SymbolSfx SymbolSfx_29("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_29);
    Instrument_29.insert(SymbolSfx_29.getString());
    FIX::TimeUnit TimeUnit_29("STRING_H");
    noRelatedSym_0_0.set(TimeUnit_29);
    Instrument_29.insert(TimeUnit_29.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_29(2);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_29);
    Instrument_29.insert(UnderlyingPriceDeterminationMethod_29.getString());
    FIX::UnitOfMeasure UnitOfMeasure_29("STRING_Bbl");
    noRelatedSym_0_0.set(UnitOfMeasure_29);
    Instrument_29.insert(UnitOfMeasure_29.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_29;
    UnitOfMeasureQty_29.setString("5261042");
    noRelatedSym_0_0.set(UnitOfMeasureQty_29);
    Instrument_29.insert(UnitOfMeasureQty_29.getString());
    FIX::ValuationMethod ValuationMethod_29("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_29);
    Instrument_29.insert(ValuationMethod_29.getString());
    all_values.push_back(Instrument_29);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_60;
      FIX::ComplexEventCondition ComplexEventCondition_60(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventCondition_60.getString());
      FIX::ComplexEventPrice ComplexEventPrice_60;
      ComplexEventPrice_60.setString("10651700");
      noComplexEvents_0_1_0.set(ComplexEventPrice_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPrice_60.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_60(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceBoundaryMethod_60.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_60;
      ComplexEventPriceBoundaryPrecision_60.setString("56.590000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceBoundaryPrecision_60.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_60(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceTimeType_60.getString());
      FIX::ComplexEventType ComplexEventType_60(4);
      noComplexEvents_0_1_0.set(ComplexEventType_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventType_60.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_60;
      ComplexOptPayoutAmount_60.setString("14220418");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexOptPayoutAmount_60.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_60);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_125;
        FIX::ComplexEventEndDate ComplexEventEndDate_125(FIX::UTCTIMESTAMP(12, 37, 41, 10, 3, 2014));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_125);
        ComplexEventDates_NoComplexEventDates_125.insert(ComplexEventEndDate_125.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_125(FIX::UTCTIMESTAMP(12, 30, 28, 19, 7, 2002));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_125);
        ComplexEventDates_NoComplexEventDates_125.insert(ComplexEventStartDate_125.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_125);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_252;
          FIX::ComplexEventEndTime ComplexEventEndTime_252(FIX::UTCTIMEONLY(4, 0, 11));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_252);
          ComplexEventTimes_NoComplexEventTimes_252.insert(ComplexEventEndTime_252.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_252(FIX::UTCTIMEONLY(7, 28, 31));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_252);
          ComplexEventTimes_NoComplexEventTimes_252.insert(ComplexEventStartTime_252.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_252);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_253;
          FIX::ComplexEventEndTime ComplexEventEndTime_253(FIX::UTCTIMEONLY(19, 46, 56));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_253);
          ComplexEventTimes_NoComplexEventTimes_253.insert(ComplexEventEndTime_253.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_253(FIX::UTCTIMEONLY(23, 39, 1));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_253);
          ComplexEventTimes_NoComplexEventTimes_253.insert(ComplexEventStartTime_253.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_253);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_254;
          FIX::ComplexEventEndTime ComplexEventEndTime_254(FIX::UTCTIMEONLY(7, 38, 31));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_254);
          ComplexEventTimes_NoComplexEventTimes_254.insert(ComplexEventEndTime_254.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_254(FIX::UTCTIMEONLY(4, 31, 44));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_254);
          ComplexEventTimes_NoComplexEventTimes_254.insert(ComplexEventStartTime_254.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_254);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_126;
        FIX::ComplexEventEndDate ComplexEventEndDate_126(FIX::UTCTIMESTAMP(5, 4, 19, 11, 8, 2004));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_126);
        ComplexEventDates_NoComplexEventDates_126.insert(ComplexEventEndDate_126.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_126(FIX::UTCTIMESTAMP(23, 14, 57, 26, 10, 2005));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_126);
        ComplexEventDates_NoComplexEventDates_126.insert(ComplexEventStartDate_126.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_126);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_255;
          FIX::ComplexEventEndTime ComplexEventEndTime_255(FIX::UTCTIMEONLY(12, 27, 51));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_255);
          ComplexEventTimes_NoComplexEventTimes_255.insert(ComplexEventEndTime_255.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_255(FIX::UTCTIMEONLY(14, 23, 25));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_255);
          ComplexEventTimes_NoComplexEventTimes_255.insert(ComplexEventStartTime_255.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_255);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_256;
          FIX::ComplexEventEndTime ComplexEventEndTime_256(FIX::UTCTIMEONLY(22, 55, 15));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_256);
          ComplexEventTimes_NoComplexEventTimes_256.insert(ComplexEventEndTime_256.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_256(FIX::UTCTIMEONLY(3, 46, 48));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_256);
          ComplexEventTimes_NoComplexEventTimes_256.insert(ComplexEventStartTime_256.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_256);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_127;
        FIX::ComplexEventEndDate ComplexEventEndDate_127(FIX::UTCTIMESTAMP(7, 53, 26, 10, 5, 2011));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_127);
        ComplexEventDates_NoComplexEventDates_127.insert(ComplexEventEndDate_127.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_127(FIX::UTCTIMESTAMP(7, 55, 53, 25, 10, 2014));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_127);
        ComplexEventDates_NoComplexEventDates_127.insert(ComplexEventStartDate_127.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_127);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_257;
          FIX::ComplexEventEndTime ComplexEventEndTime_257(FIX::UTCTIMEONLY(3, 53, 31));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_257);
          ComplexEventTimes_NoComplexEventTimes_257.insert(ComplexEventEndTime_257.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_257(FIX::UTCTIMEONLY(7, 46, 20));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_257);
          ComplexEventTimes_NoComplexEventTimes_257.insert(ComplexEventStartTime_257.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_257);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_258;
          FIX::ComplexEventEndTime ComplexEventEndTime_258(FIX::UTCTIMEONLY(21, 7, 54));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_258);
          ComplexEventTimes_NoComplexEventTimes_258.insert(ComplexEventEndTime_258.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_258(FIX::UTCTIMEONLY(10, 32, 14));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_258);
          ComplexEventTimes_NoComplexEventTimes_258.insert(ComplexEventStartTime_258.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_258);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_259;
          FIX::ComplexEventEndTime ComplexEventEndTime_259(FIX::UTCTIMEONLY(15, 59, 55));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_259);
          ComplexEventTimes_NoComplexEventTimes_259.insert(ComplexEventEndTime_259.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_259(FIX::UTCTIMEONLY(15, 36, 9));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_259);
          ComplexEventTimes_NoComplexEventTimes_259.insert(ComplexEventStartTime_259.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_259);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_61;
      FIX::ComplexEventCondition ComplexEventCondition_61(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventCondition_61.getString());
      FIX::ComplexEventPrice ComplexEventPrice_61;
      ComplexEventPrice_61.setString("10126529");
      noComplexEvents_0_1_1.set(ComplexEventPrice_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPrice_61.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_61(5);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceBoundaryMethod_61.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_61;
      ComplexEventPriceBoundaryPrecision_61.setString("25.750000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceBoundaryPrecision_61.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_61(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceTimeType_61.getString());
      FIX::ComplexEventType ComplexEventType_61(4);
      noComplexEvents_0_1_1.set(ComplexEventType_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventType_61.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_61;
      ComplexOptPayoutAmount_61.setString("4853068");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexOptPayoutAmount_61.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_61);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_128;
        FIX::ComplexEventEndDate ComplexEventEndDate_128(FIX::UTCTIMESTAMP(10, 4, 23, 25, 4, 2017));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_128);
        ComplexEventDates_NoComplexEventDates_128.insert(ComplexEventEndDate_128.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_128(FIX::UTCTIMESTAMP(12, 42, 6, 9, 9, 2008));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_128);
        ComplexEventDates_NoComplexEventDates_128.insert(ComplexEventStartDate_128.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_128);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_260;
          FIX::ComplexEventEndTime ComplexEventEndTime_260(FIX::UTCTIMEONLY(21, 34, 12));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_260);
          ComplexEventTimes_NoComplexEventTimes_260.insert(ComplexEventEndTime_260.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_260(FIX::UTCTIMEONLY(17, 41, 48));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_260);
          ComplexEventTimes_NoComplexEventTimes_260.insert(ComplexEventStartTime_260.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_260);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_261;
          FIX::ComplexEventEndTime ComplexEventEndTime_261(FIX::UTCTIMEONLY(5, 34, 22));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_261);
          ComplexEventTimes_NoComplexEventTimes_261.insert(ComplexEventEndTime_261.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_261(FIX::UTCTIMEONLY(23, 15, 39));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_261);
          ComplexEventTimes_NoComplexEventTimes_261.insert(ComplexEventStartTime_261.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_261);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_129;
        FIX::ComplexEventEndDate ComplexEventEndDate_129(FIX::UTCTIMESTAMP(17, 43, 6, 10, 11, 2009));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_129);
        ComplexEventDates_NoComplexEventDates_129.insert(ComplexEventEndDate_129.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_129(FIX::UTCTIMESTAMP(22, 7, 44, 16, 8, 2008));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_129);
        ComplexEventDates_NoComplexEventDates_129.insert(ComplexEventStartDate_129.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_129);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_262;
          FIX::ComplexEventEndTime ComplexEventEndTime_262(FIX::UTCTIMEONLY(11, 18, 25));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_262);
          ComplexEventTimes_NoComplexEventTimes_262.insert(ComplexEventEndTime_262.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_262(FIX::UTCTIMEONLY(23, 58, 6));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_262);
          ComplexEventTimes_NoComplexEventTimes_262.insert(ComplexEventStartTime_262.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_262);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_130;
        FIX::ComplexEventEndDate ComplexEventEndDate_130(FIX::UTCTIMESTAMP(3, 40, 41, 13, 5, 2007));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_130);
        ComplexEventDates_NoComplexEventDates_130.insert(ComplexEventEndDate_130.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_130(FIX::UTCTIMESTAMP(23, 42, 23, 14, 10, 2002));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_130);
        ComplexEventDates_NoComplexEventDates_130.insert(ComplexEventStartDate_130.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_130);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_263;
          FIX::ComplexEventEndTime ComplexEventEndTime_263(FIX::UTCTIMEONLY(4, 27, 24));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_263);
          ComplexEventTimes_NoComplexEventTimes_263.insert(ComplexEventEndTime_263.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_263(FIX::UTCTIMEONLY(10, 30, 28));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_263);
          ComplexEventTimes_NoComplexEventTimes_263.insert(ComplexEventStartTime_263.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_263);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_264;
          FIX::ComplexEventEndTime ComplexEventEndTime_264(FIX::UTCTIMEONLY(22, 38, 52));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_264);
          ComplexEventTimes_NoComplexEventTimes_264.insert(ComplexEventEndTime_264.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_264(FIX::UTCTIMEONLY(13, 50, 42));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_264);
          ComplexEventTimes_NoComplexEventTimes_264.insert(ComplexEventStartTime_264.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_264);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_54;
      FIX::EventDate EventDate_54("LOCALMKTDATE_990385485");
      noEvents_0_1_0.set(EventDate_54);
      EvntGrp_NoEvents_54.insert(EventDate_54.getString());
      FIX::EventPx EventPx_54;
      EventPx_54.setString("5237477");
      noEvents_0_1_0.set(EventPx_54);
      EvntGrp_NoEvents_54.insert(EventPx_54.getString());
      FIX::EventText EventText_54("STRING_1340396754");
      noEvents_0_1_0.set(EventText_54);
      EvntGrp_NoEvents_54.insert(EventText_54.getString());
      FIX::EventTime EventTime_54(FIX::UTCTIMESTAMP(6, 43, 18, 22, 6, 2015));
      noEvents_0_1_0.set(EventTime_54);
      EvntGrp_NoEvents_54.insert(EventTime_54.getString());
      FIX::EventType EventType_54(5);
      noEvents_0_1_0.set(EventType_54);
      EvntGrp_NoEvents_54.insert(EventType_54.getString());
      all_values.push_back(EvntGrp_NoEvents_54);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_55;
      FIX::EventDate EventDate_55("LOCALMKTDATE_1244560286");
      noEvents_0_1_1.set(EventDate_55);
      EvntGrp_NoEvents_55.insert(EventDate_55.getString());
      FIX::EventPx EventPx_55;
      EventPx_55.setString("20285906");
      noEvents_0_1_1.set(EventPx_55);
      EvntGrp_NoEvents_55.insert(EventPx_55.getString());
      FIX::EventText EventText_55("STRING_644017675");
      noEvents_0_1_1.set(EventText_55);
      EvntGrp_NoEvents_55.insert(EventText_55.getString());
      FIX::EventTime EventTime_55(FIX::UTCTIMESTAMP(8, 14, 22, 16, 2, 2004));
      noEvents_0_1_1.set(EventTime_55);
      EvntGrp_NoEvents_55.insert(EventTime_55.getString());
      FIX::EventType EventType_55(1);
      noEvents_0_1_1.set(EventType_55);
      EvntGrp_NoEvents_55.insert(EventType_55.getString());
      all_values.push_back(EvntGrp_NoEvents_55);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_56;
      FIX::EventDate EventDate_56("LOCALMKTDATE_1741031224");
      noEvents_0_1_2.set(EventDate_56);
      EvntGrp_NoEvents_56.insert(EventDate_56.getString());
      FIX::EventPx EventPx_56;
      EventPx_56.setString("10329207");
      noEvents_0_1_2.set(EventPx_56);
      EvntGrp_NoEvents_56.insert(EventPx_56.getString());
      FIX::EventText EventText_56("STRING_1634593818");
      noEvents_0_1_2.set(EventText_56);
      EvntGrp_NoEvents_56.insert(EventText_56.getString());
      FIX::EventTime EventTime_56(FIX::UTCTIMESTAMP(6, 12, 30, 12, 9, 2003));
      noEvents_0_1_2.set(EventTime_56);
      EvntGrp_NoEvents_56.insert(EventTime_56.getString());
      FIX::EventType EventType_56(99);
      noEvents_0_1_2.set(EventType_56);
      EvntGrp_NoEvents_56.insert(EventType_56.getString());
      all_values.push_back(EvntGrp_NoEvents_56);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_53;
      FIX::InstrumentPartyID InstrumentPartyID_53("STRING_1066773773");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyID_53.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_53('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyIDSource_53.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_53(907942253);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyRole_53.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_53);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104;
        FIX::InstrumentPartySubID InstrumentPartySubID_104("STRING_1173601827");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_104);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104.insert(InstrumentPartySubID_104.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_104(1205727491);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_104);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104.insert(InstrumentPartySubIDType_104.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_51;
      FIX::SecurityAltID SecurityAltID_51("STRING_614975163");
      noSecurityAltID_0_1_0.set(SecurityAltID_51);
      SecAltIDGrp_NoSecurityAltID_51.insert(SecurityAltID_51.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_51("STRING_302804129");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_51);
      SecAltIDGrp_NoSecurityAltID_51.insert(SecurityAltIDSource_51.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_51);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_58;
    FIX::SecurityXML SecurityXML_59("XMLDATA_965853232");
    noRelatedSym_0_0.set(SecurityXML_59);
    FIX::SecurityXMLLen SecurityXMLLen_29(1258992839);
    noRelatedSym_0_0.set(SecurityXMLLen_29);
    FIX::SecurityXMLSchema SecurityXMLSchema_29("STRING_1075239155");
    noRelatedSym_0_0.set(SecurityXMLSchema_29);
    SecurityXML_58.insert(SecurityXMLSchema_29.getString());
    all_values.push_back(SecurityXML_58);
    all_compo_names.insert("SecurityXML");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_49;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_49("DATA_1450547173");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingIssuer_49.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_49(1136612097);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingIssuerLen_49.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_49("DATA_1366559628");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingSecurityDesc_49.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_49(1245742662);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_49);
      UnderlyingInstrument_49.insert(EncodedUnderlyingSecurityDescLen_49.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_49;
      UnderlyingAdjustedQuantity_49.setString("19090163");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_49);
      UnderlyingInstrument_49.insert(UnderlyingAdjustedQuantity_49.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_49;
      UnderlyingAllocationPercent_49.setString("55.610000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_49);
      UnderlyingInstrument_49.insert(UnderlyingAllocationPercent_49.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_49;
      UnderlyingAttachmentPoint_49.setString("2.380000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_49);
      UnderlyingInstrument_49.insert(UnderlyingAttachmentPoint_49.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_49("STRING_794453384");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_49);
      UnderlyingInstrument_49.insert(UnderlyingCFICode_49.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_49("STRING_268985731");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_49);
      UnderlyingInstrument_49.insert(UnderlyingCPProgram_49.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_49("STRING_1756628426");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_49);
      UnderlyingInstrument_49.insert(UnderlyingCPRegType_49.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_49;
      UnderlyingCapValue_49.setString("11184064");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_49);
      UnderlyingInstrument_49.insert(UnderlyingCapValue_49.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_49;
      UnderlyingCashAmount_49.setString("4426531");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_49);
      UnderlyingInstrument_49.insert(UnderlyingCashAmount_49.getString());
      FIX::UnderlyingCashType UnderlyingCashType_49("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_49);
      UnderlyingInstrument_49.insert(UnderlyingCashType_49.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_49;
      UnderlyingContractMultiplier_49.setString("9726100");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_49);
      UnderlyingInstrument_49.insert(UnderlyingContractMultiplier_49.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_49(294683288);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_49);
      UnderlyingInstrument_49.insert(UnderlyingContractMultiplierUnit_49.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_49("COUNTRY_906407523");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingCountryOfIssue_49.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_49("LOCALMKTDATE_1350561458");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_49);
      UnderlyingInstrument_49.insert(UnderlyingCouponPaymentDate_49.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_49;
      UnderlyingCouponRate_49.setString("1.660000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_49);
      UnderlyingInstrument_49.insert(UnderlyingCouponRate_49.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_49("STRING_1973181296");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_49);
      UnderlyingInstrument_49.insert(UnderlyingCreditRating_49.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_49("USD");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_49);
      UnderlyingInstrument_49.insert(UnderlyingCurrency_49.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_49;
      UnderlyingCurrentValue_49.setString("20812462");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_49);
      UnderlyingInstrument_49.insert(UnderlyingCurrentValue_49.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_49;
      UnderlyingDetachmentPoint_49.setString("82.670000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_49);
      UnderlyingInstrument_49.insert(UnderlyingDetachmentPoint_49.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_49;
      UnderlyingDirtyPrice_49.setString("14532962");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_49);
      UnderlyingInstrument_49.insert(UnderlyingDirtyPrice_49.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_49;
      UnderlyingEndPrice_49.setString("10185089");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_49);
      UnderlyingInstrument_49.insert(UnderlyingEndPrice_49.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_49;
      UnderlyingEndValue_49.setString("11544834");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_49);
      UnderlyingInstrument_49.insert(UnderlyingEndValue_49.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_49(1756100392);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_49);
      UnderlyingInstrument_49.insert(UnderlyingExerciseStyle_49.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_49;
      UnderlyingFXRate_49.setString("19843621");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_49);
      UnderlyingInstrument_49.insert(UnderlyingFXRate_49.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_49('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_49);
      UnderlyingInstrument_49.insert(UnderlyingFXRateCalc_49.getString());
      FIX::UnderlyingFactor UnderlyingFactor_49;
      UnderlyingFactor_49.setString("6838559");
      noUnderlyings_0_1_0.set(UnderlyingFactor_49);
      UnderlyingInstrument_49.insert(UnderlyingFactor_49.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_49(1731366948);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_49);
      UnderlyingInstrument_49.insert(UnderlyingFlowScheduleType_49.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_49("STRING_1716539795");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_49);
      UnderlyingInstrument_49.insert(UnderlyingInstrRegistry_49.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_49("LOCALMKTDATE_1820467997");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_49);
      UnderlyingInstrument_49.insert(UnderlyingIssueDate_49.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_49("STRING_950442928");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_49);
      UnderlyingInstrument_49.insert(UnderlyingIssuer_49.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_49("STRING_814798810");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingLocaleOfIssue_49.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_49("LOCALMKTDATE_1582000679");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityDate_49.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_49("MONTHYEAR_1732318489");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityMonthYear_49.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_49("TZTIMEONLY_1654089048");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_49);
      UnderlyingInstrument_49.insert(UnderlyingMaturityTime_49.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_49;
      UnderlyingNotionalPercentageOutstanding_49.setString("4.160000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_49);
      UnderlyingInstrument_49.insert(UnderlyingNotionalPercentageOutstanding_49.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_49('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_49);
      UnderlyingInstrument_49.insert(UnderlyingOptAttribute_49.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_49;
      UnderlyingOriginalNotionalPercentageOutstanding_49.setString("38.270000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_49);
      UnderlyingInstrument_49.insert(UnderlyingOriginalNotionalPercentageOutstanding_49.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_49("STRING_1347376911");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_49);
      UnderlyingInstrument_49.insert(UnderlyingPriceUnitOfMeasure_49.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_49;
      UnderlyingPriceUnitOfMeasureQty_49.setString("2964737");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_49);
      UnderlyingInstrument_49.insert(UnderlyingPriceUnitOfMeasureQty_49.getString());
      FIX::UnderlyingProduct UnderlyingProduct_49(1025817235);
      noUnderlyings_0_1_0.set(UnderlyingProduct_49);
      UnderlyingInstrument_49.insert(UnderlyingProduct_49.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_49(172503362);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_49);
      UnderlyingInstrument_49.insert(UnderlyingPutOrCall_49.getString());
      FIX::UnderlyingPx UnderlyingPx_49;
      UnderlyingPx_49.setString("5911570");
      noUnderlyings_0_1_0.set(UnderlyingPx_49);
      UnderlyingInstrument_49.insert(UnderlyingPx_49.getString());
      FIX::UnderlyingQty UnderlyingQty_49;
      UnderlyingQty_49.setString("19322247");
      noUnderlyings_0_1_0.set(UnderlyingQty_49);
      UnderlyingInstrument_49.insert(UnderlyingQty_49.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_49("LOCALMKTDATE_1523064821");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_49);
      UnderlyingInstrument_49.insert(UnderlyingRedemptionDate_49.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_49("STRING_2078267191");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_49);
      UnderlyingInstrument_49.insert(UnderlyingRepoCollateralSecurityType_49.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_49;
      UnderlyingRepurchaseRate_49.setString("24.070000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_49);
      UnderlyingInstrument_49.insert(UnderlyingRepurchaseRate_49.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_49(888971261);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_49);
      UnderlyingInstrument_49.insert(UnderlyingRepurchaseTerm_49.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_49("STRING_178352315");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_49);
      UnderlyingInstrument_49.insert(UnderlyingRestructuringType_49.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_49("STRING_1691685039");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityDesc_49.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_49("EXCHANGE_1428479528");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityExchange_49.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_49("STRING_1631648578");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityID_49.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_49("STRING_562710299");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityIDSource_49.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_49("STRING_435479311");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_49);
      UnderlyingInstrument_49.insert(UnderlyingSecuritySubType_49.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_49("STRING_1240265322");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_49);
      UnderlyingInstrument_49.insert(UnderlyingSecurityType_49.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_49("STRING_399588791");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_49);
      UnderlyingInstrument_49.insert(UnderlyingSeniority_49.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_49("STRING_701471933");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_49);
      UnderlyingInstrument_49.insert(UnderlyingSettlMethod_49.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_49(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_49);
      UnderlyingInstrument_49.insert(UnderlyingSettlementType_49.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_49;
      UnderlyingStartValue_49.setString("21309557");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_49);
      UnderlyingInstrument_49.insert(UnderlyingStartValue_49.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_49("STRING_270528081");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_49);
      UnderlyingInstrument_49.insert(UnderlyingStateOrProvinceOfIssue_49.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_49("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_49);
      UnderlyingInstrument_49.insert(UnderlyingStrikeCurrency_49.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_49;
      UnderlyingStrikePrice_49.setString("10853268");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_49);
      UnderlyingInstrument_49.insert(UnderlyingStrikePrice_49.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_49("STRING_1031622603");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_49);
      UnderlyingInstrument_49.insert(UnderlyingSymbol_49.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_49("STRING_518749861");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_49);
      UnderlyingInstrument_49.insert(UnderlyingSymbolSfx_49.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_49("STRING_591932291");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_49);
      UnderlyingInstrument_49.insert(UnderlyingTimeUnit_49.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_49("STRING_1260593019");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_49);
      UnderlyingInstrument_49.insert(UnderlyingUnitOfMeasure_49.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_49;
      UnderlyingUnitOfMeasureQty_49.setString("3725704");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_49);
      UnderlyingInstrument_49.insert(UnderlyingUnitOfMeasureQty_49.getString());
      all_values.push_back(UnderlyingInstrument_49);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_105;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_105("STRING_460486282");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_105);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_105.insert(UnderlyingSecurityAltID_105.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_105("STRING_669044170");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_105);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_105.insert(UnderlyingSecurityAltIDSource_105.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_99;
        FIX::UnderlyingStipType UnderlyingStipType_99("STRING_632989645");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_99);
        UnderlyingStipulations_NoUnderlyingStips_99.insert(UnderlyingStipType_99.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_99("STRING_1260201195");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_99);
        UnderlyingStipulations_NoUnderlyingStips_99.insert(UnderlyingStipValue_99.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_99);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_94;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_94("STRING_8570818");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyID_94.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_94('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyIDSource_94.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_94(128679576);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyRole_94.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_94);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_185("STRING_1369337053");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_185);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185.insert(UnderlyingInstrumentPartySubID_185.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_185(1820364615);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_185);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185.insert(UnderlyingInstrumentPartySubIDType_185.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_1;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_1;
    FIX::Currency Currency_25("CHF");
    noRelatedSym_0_1.set(Currency_25);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(Currency_25.getString());
    FIX::MDEntrySize MDEntrySize_2;
    MDEntrySize_2.setString("2355912");
    noRelatedSym_0_1.set(MDEntrySize_2);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(MDEntrySize_2.getString());
    FIX::MDStreamID MDStreamID_2("STRING_614017271");
    noRelatedSym_0_1.set(MDStreamID_2);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(MDStreamID_2.getString());
    FIX::QuoteType QuoteType_1(1);
    noRelatedSym_0_1.set(QuoteType_1);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(QuoteType_1.getString());
    FIX::SettlDate SettlDate_20("LOCALMKTDATE_635180057");
    noRelatedSym_0_1.set(SettlDate_20);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(SettlDate_20.getString());
    FIX::SettlType SettlType_14("STRING_4");
    noRelatedSym_0_1.set(SettlType_14);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(SettlType_14.getString());
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_1);
    all_compo_names.insert("InstrmtMDReqGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_55;
      FIX::EncodedLegIssuer EncodedLegIssuer_55("DATA_618652148");
      noLegs_1_1_0.set(EncodedLegIssuer_55);
      InstrumentLeg_55.insert(EncodedLegIssuer_55.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_55(1586017285);
      noLegs_1_1_0.set(EncodedLegIssuerLen_55);
      InstrumentLeg_55.insert(EncodedLegIssuerLen_55.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_55("DATA_1320026804");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_55);
      InstrumentLeg_55.insert(EncodedLegSecurityDesc_55.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_55(1552567168);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_55);
      InstrumentLeg_55.insert(EncodedLegSecurityDescLen_55.getString());
      FIX::LegCFICode LegCFICode_55("STRING_523860528");
      noLegs_1_1_0.set(LegCFICode_55);
      InstrumentLeg_55.insert(LegCFICode_55.getString());
      FIX::LegContractMultiplier LegContractMultiplier_55;
      LegContractMultiplier_55.setString("2041657");
      noLegs_1_1_0.set(LegContractMultiplier_55);
      InstrumentLeg_55.insert(LegContractMultiplier_55.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_55(2071317029);
      noLegs_1_1_0.set(LegContractMultiplierUnit_55);
      InstrumentLeg_55.insert(LegContractMultiplierUnit_55.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_55("MONTHYEAR_1115792820");
      noLegs_1_1_0.set(LegContractSettlMonth_55);
      InstrumentLeg_55.insert(LegContractSettlMonth_55.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_55("COUNTRY_1464758779");
      noLegs_1_1_0.set(LegCountryOfIssue_55);
      InstrumentLeg_55.insert(LegCountryOfIssue_55.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_55("LOCALMKTDATE_296403815");
      noLegs_1_1_0.set(LegCouponPaymentDate_55);
      InstrumentLeg_55.insert(LegCouponPaymentDate_55.getString());
      FIX::LegCouponRate LegCouponRate_55;
      LegCouponRate_55.setString("52.900000");
      noLegs_1_1_0.set(LegCouponRate_55);
      InstrumentLeg_55.insert(LegCouponRate_55.getString());
      FIX::LegCreditRating LegCreditRating_55("STRING_1925245061");
      noLegs_1_1_0.set(LegCreditRating_55);
      InstrumentLeg_55.insert(LegCreditRating_55.getString());
      FIX::LegCurrency LegCurrency_55("JPY");
      noLegs_1_1_0.set(LegCurrency_55);
      InstrumentLeg_55.insert(LegCurrency_55.getString());
      FIX::LegDatedDate LegDatedDate_55("LOCALMKTDATE_410751058");
      noLegs_1_1_0.set(LegDatedDate_55);
      InstrumentLeg_55.insert(LegDatedDate_55.getString());
      FIX::LegExerciseStyle LegExerciseStyle_55(78165532);
      noLegs_1_1_0.set(LegExerciseStyle_55);
      InstrumentLeg_55.insert(LegExerciseStyle_55.getString());
      FIX::LegFactor LegFactor_55;
      LegFactor_55.setString("20752158");
      noLegs_1_1_0.set(LegFactor_55);
      InstrumentLeg_55.insert(LegFactor_55.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_55(419321876);
      noLegs_1_1_0.set(LegFlowScheduleType_55);
      InstrumentLeg_55.insert(LegFlowScheduleType_55.getString());
      FIX::LegInstrRegistry LegInstrRegistry_55("STRING_1269150270");
      noLegs_1_1_0.set(LegInstrRegistry_55);
      InstrumentLeg_55.insert(LegInstrRegistry_55.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_55("LOCALMKTDATE_56411742");
      noLegs_1_1_0.set(LegInterestAccrualDate_55);
      InstrumentLeg_55.insert(LegInterestAccrualDate_55.getString());
      FIX::LegIssueDate LegIssueDate_55("LOCALMKTDATE_1316863955");
      noLegs_1_1_0.set(LegIssueDate_55);
      InstrumentLeg_55.insert(LegIssueDate_55.getString());
      FIX::LegIssuer LegIssuer_55("STRING_491003675");
      noLegs_1_1_0.set(LegIssuer_55);
      InstrumentLeg_55.insert(LegIssuer_55.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_55("STRING_1876776357");
      noLegs_1_1_0.set(LegLocaleOfIssue_55);
      InstrumentLeg_55.insert(LegLocaleOfIssue_55.getString());
      FIX::LegMaturityDate LegMaturityDate_55("LOCALMKTDATE_1495401915");
      noLegs_1_1_0.set(LegMaturityDate_55);
      InstrumentLeg_55.insert(LegMaturityDate_55.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_55("MONTHYEAR_1344505658");
      noLegs_1_1_0.set(LegMaturityMonthYear_55);
      InstrumentLeg_55.insert(LegMaturityMonthYear_55.getString());
      FIX::LegMaturityTime LegMaturityTime_55("TZTIMEONLY_2112367624");
      noLegs_1_1_0.set(LegMaturityTime_55);
      InstrumentLeg_55.insert(LegMaturityTime_55.getString());
      FIX::LegOptAttribute LegOptAttribute_55('2');
      noLegs_1_1_0.set(LegOptAttribute_55);
      InstrumentLeg_55.insert(LegOptAttribute_55.getString());
      FIX::LegOptionRatio LegOptionRatio_55;
      LegOptionRatio_55.setString("12907893");
      noLegs_1_1_0.set(LegOptionRatio_55);
      InstrumentLeg_55.insert(LegOptionRatio_55.getString());
      FIX::LegPool LegPool_55("STRING_600064033");
      noLegs_1_1_0.set(LegPool_55);
      InstrumentLeg_55.insert(LegPool_55.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_55("STRING_1277424742");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_55);
      InstrumentLeg_55.insert(LegPriceUnitOfMeasure_55.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_55;
      LegPriceUnitOfMeasureQty_55.setString("10137105");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_55);
      InstrumentLeg_55.insert(LegPriceUnitOfMeasureQty_55.getString());
      FIX::LegProduct LegProduct_55(1218716182);
      noLegs_1_1_0.set(LegProduct_55);
      InstrumentLeg_55.insert(LegProduct_55.getString());
      FIX::LegPutOrCall LegPutOrCall_55(715958380);
      noLegs_1_1_0.set(LegPutOrCall_55);
      InstrumentLeg_55.insert(LegPutOrCall_55.getString());
      FIX::LegRatioQty LegRatioQty_55;
      LegRatioQty_55.setString("1862537");
      noLegs_1_1_0.set(LegRatioQty_55);
      InstrumentLeg_55.insert(LegRatioQty_55.getString());
      FIX::LegRedemptionDate LegRedemptionDate_55("LOCALMKTDATE_623799702");
      noLegs_1_1_0.set(LegRedemptionDate_55);
      InstrumentLeg_55.insert(LegRedemptionDate_55.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_55("STRING_1239818908");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_55);
      InstrumentLeg_55.insert(LegRepoCollateralSecurityType_55.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_55;
      LegRepurchaseRate_55.setString("94.630000");
      noLegs_1_1_0.set(LegRepurchaseRate_55);
      InstrumentLeg_55.insert(LegRepurchaseRate_55.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_55(547633083);
      noLegs_1_1_0.set(LegRepurchaseTerm_55);
      InstrumentLeg_55.insert(LegRepurchaseTerm_55.getString());
      FIX::LegSecurityDesc LegSecurityDesc_55("STRING_208128080");
      noLegs_1_1_0.set(LegSecurityDesc_55);
      InstrumentLeg_55.insert(LegSecurityDesc_55.getString());
      FIX::LegSecurityExchange LegSecurityExchange_55("EXCHANGE_1855178242");
      noLegs_1_1_0.set(LegSecurityExchange_55);
      InstrumentLeg_55.insert(LegSecurityExchange_55.getString());
      FIX::LegSecurityID LegSecurityID_55("STRING_844036898");
      noLegs_1_1_0.set(LegSecurityID_55);
      InstrumentLeg_55.insert(LegSecurityID_55.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_55("STRING_1031603371");
      noLegs_1_1_0.set(LegSecurityIDSource_55);
      InstrumentLeg_55.insert(LegSecurityIDSource_55.getString());
      FIX::LegSecuritySubType LegSecuritySubType_55("STRING_1632939656");
      noLegs_1_1_0.set(LegSecuritySubType_55);
      InstrumentLeg_55.insert(LegSecuritySubType_55.getString());
      FIX::LegSecurityType LegSecurityType_55("STRING_1809484883");
      noLegs_1_1_0.set(LegSecurityType_55);
      InstrumentLeg_55.insert(LegSecurityType_55.getString());
      FIX::LegSide LegSide_55('4');
      noLegs_1_1_0.set(LegSide_55);
      InstrumentLeg_55.insert(LegSide_55.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_55("STRING_2043690714");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_55);
      InstrumentLeg_55.insert(LegStateOrProvinceOfIssue_55.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_55("CHF");
      noLegs_1_1_0.set(LegStrikeCurrency_55);
      InstrumentLeg_55.insert(LegStrikeCurrency_55.getString());
      FIX::LegStrikePrice LegStrikePrice_55;
      LegStrikePrice_55.setString("3155289");
      noLegs_1_1_0.set(LegStrikePrice_55);
      InstrumentLeg_55.insert(LegStrikePrice_55.getString());
      FIX::LegSymbol LegSymbol_55("STRING_1009317038");
      noLegs_1_1_0.set(LegSymbol_55);
      InstrumentLeg_55.insert(LegSymbol_55.getString());
      FIX::LegSymbolSfx LegSymbolSfx_55("STRING_425238627");
      noLegs_1_1_0.set(LegSymbolSfx_55);
      InstrumentLeg_55.insert(LegSymbolSfx_55.getString());
      FIX::LegTimeUnit LegTimeUnit_55("STRING_1632392898");
      noLegs_1_1_0.set(LegTimeUnit_55);
      InstrumentLeg_55.insert(LegTimeUnit_55.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_55("STRING_1500320714");
      noLegs_1_1_0.set(LegUnitOfMeasure_55);
      InstrumentLeg_55.insert(LegUnitOfMeasure_55.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_55;
      LegUnitOfMeasureQty_55.setString("1545313");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_55);
      InstrumentLeg_55.insert(LegUnitOfMeasureQty_55.getString());
      all_values.push_back(InstrumentLeg_55);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_108;
        FIX::LegSecurityAltID LegSecurityAltID_108("STRING_697342724");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_108);
        LegSecAltIDGrp_NoLegSecurityAltID_108.insert(LegSecurityAltID_108.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_108("STRING_119415312");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_108);
        LegSecAltIDGrp_NoLegSecurityAltID_108.insert(LegSecurityAltIDSource_108.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_108);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_109;
        FIX::LegSecurityAltID LegSecurityAltID_109("STRING_942246703");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_109);
        LegSecAltIDGrp_NoLegSecurityAltID_109.insert(LegSecurityAltID_109.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_109("STRING_1988132040");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_109);
        LegSecAltIDGrp_NoLegSecurityAltID_109.insert(LegSecurityAltIDSource_109.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_109);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_56;
      FIX::EncodedLegIssuer EncodedLegIssuer_56("DATA_719479346");
      noLegs_1_1_1.set(EncodedLegIssuer_56);
      InstrumentLeg_56.insert(EncodedLegIssuer_56.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_56(72187798);
      noLegs_1_1_1.set(EncodedLegIssuerLen_56);
      InstrumentLeg_56.insert(EncodedLegIssuerLen_56.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_56("DATA_854358940");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_56);
      InstrumentLeg_56.insert(EncodedLegSecurityDesc_56.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_56(1938195528);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_56);
      InstrumentLeg_56.insert(EncodedLegSecurityDescLen_56.getString());
      FIX::LegCFICode LegCFICode_56("STRING_788146178");
      noLegs_1_1_1.set(LegCFICode_56);
      InstrumentLeg_56.insert(LegCFICode_56.getString());
      FIX::LegContractMultiplier LegContractMultiplier_56;
      LegContractMultiplier_56.setString("10406126");
      noLegs_1_1_1.set(LegContractMultiplier_56);
      InstrumentLeg_56.insert(LegContractMultiplier_56.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_56(414511582);
      noLegs_1_1_1.set(LegContractMultiplierUnit_56);
      InstrumentLeg_56.insert(LegContractMultiplierUnit_56.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_56("MONTHYEAR_2027965086");
      noLegs_1_1_1.set(LegContractSettlMonth_56);
      InstrumentLeg_56.insert(LegContractSettlMonth_56.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_56("COUNTRY_1431032108");
      noLegs_1_1_1.set(LegCountryOfIssue_56);
      InstrumentLeg_56.insert(LegCountryOfIssue_56.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_56("LOCALMKTDATE_962144665");
      noLegs_1_1_1.set(LegCouponPaymentDate_56);
      InstrumentLeg_56.insert(LegCouponPaymentDate_56.getString());
      FIX::LegCouponRate LegCouponRate_56;
      LegCouponRate_56.setString("95.190000");
      noLegs_1_1_1.set(LegCouponRate_56);
      InstrumentLeg_56.insert(LegCouponRate_56.getString());
      FIX::LegCreditRating LegCreditRating_56("STRING_1138726702");
      noLegs_1_1_1.set(LegCreditRating_56);
      InstrumentLeg_56.insert(LegCreditRating_56.getString());
      FIX::LegCurrency LegCurrency_56("GBP");
      noLegs_1_1_1.set(LegCurrency_56);
      InstrumentLeg_56.insert(LegCurrency_56.getString());
      FIX::LegDatedDate LegDatedDate_56("LOCALMKTDATE_624182710");
      noLegs_1_1_1.set(LegDatedDate_56);
      InstrumentLeg_56.insert(LegDatedDate_56.getString());
      FIX::LegExerciseStyle LegExerciseStyle_56(1468182798);
      noLegs_1_1_1.set(LegExerciseStyle_56);
      InstrumentLeg_56.insert(LegExerciseStyle_56.getString());
      FIX::LegFactor LegFactor_56;
      LegFactor_56.setString("15613076");
      noLegs_1_1_1.set(LegFactor_56);
      InstrumentLeg_56.insert(LegFactor_56.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_56(520389777);
      noLegs_1_1_1.set(LegFlowScheduleType_56);
      InstrumentLeg_56.insert(LegFlowScheduleType_56.getString());
      FIX::LegInstrRegistry LegInstrRegistry_56("STRING_1208349566");
      noLegs_1_1_1.set(LegInstrRegistry_56);
      InstrumentLeg_56.insert(LegInstrRegistry_56.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_56("LOCALMKTDATE_1930134494");
      noLegs_1_1_1.set(LegInterestAccrualDate_56);
      InstrumentLeg_56.insert(LegInterestAccrualDate_56.getString());
      FIX::LegIssueDate LegIssueDate_56("LOCALMKTDATE_835918720");
      noLegs_1_1_1.set(LegIssueDate_56);
      InstrumentLeg_56.insert(LegIssueDate_56.getString());
      FIX::LegIssuer LegIssuer_56("STRING_70182957");
      noLegs_1_1_1.set(LegIssuer_56);
      InstrumentLeg_56.insert(LegIssuer_56.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_56("STRING_207889473");
      noLegs_1_1_1.set(LegLocaleOfIssue_56);
      InstrumentLeg_56.insert(LegLocaleOfIssue_56.getString());
      FIX::LegMaturityDate LegMaturityDate_56("LOCALMKTDATE_320827970");
      noLegs_1_1_1.set(LegMaturityDate_56);
      InstrumentLeg_56.insert(LegMaturityDate_56.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_56("MONTHYEAR_1570503671");
      noLegs_1_1_1.set(LegMaturityMonthYear_56);
      InstrumentLeg_56.insert(LegMaturityMonthYear_56.getString());
      FIX::LegMaturityTime LegMaturityTime_56("TZTIMEONLY_362420810");
      noLegs_1_1_1.set(LegMaturityTime_56);
      InstrumentLeg_56.insert(LegMaturityTime_56.getString());
      FIX::LegOptAttribute LegOptAttribute_56('1');
      noLegs_1_1_1.set(LegOptAttribute_56);
      InstrumentLeg_56.insert(LegOptAttribute_56.getString());
      FIX::LegOptionRatio LegOptionRatio_56;
      LegOptionRatio_56.setString("1203627");
      noLegs_1_1_1.set(LegOptionRatio_56);
      InstrumentLeg_56.insert(LegOptionRatio_56.getString());
      FIX::LegPool LegPool_56("STRING_481836122");
      noLegs_1_1_1.set(LegPool_56);
      InstrumentLeg_56.insert(LegPool_56.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_56("STRING_95902191");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_56);
      InstrumentLeg_56.insert(LegPriceUnitOfMeasure_56.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_56;
      LegPriceUnitOfMeasureQty_56.setString("21084947");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_56);
      InstrumentLeg_56.insert(LegPriceUnitOfMeasureQty_56.getString());
      FIX::LegProduct LegProduct_56(1201315468);
      noLegs_1_1_1.set(LegProduct_56);
      InstrumentLeg_56.insert(LegProduct_56.getString());
      FIX::LegPutOrCall LegPutOrCall_56(168089989);
      noLegs_1_1_1.set(LegPutOrCall_56);
      InstrumentLeg_56.insert(LegPutOrCall_56.getString());
      FIX::LegRatioQty LegRatioQty_56;
      LegRatioQty_56.setString("8153700");
      noLegs_1_1_1.set(LegRatioQty_56);
      InstrumentLeg_56.insert(LegRatioQty_56.getString());
      FIX::LegRedemptionDate LegRedemptionDate_56("LOCALMKTDATE_992027348");
      noLegs_1_1_1.set(LegRedemptionDate_56);
      InstrumentLeg_56.insert(LegRedemptionDate_56.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_56("STRING_956236167");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_56);
      InstrumentLeg_56.insert(LegRepoCollateralSecurityType_56.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_56;
      LegRepurchaseRate_56.setString("27.250000");
      noLegs_1_1_1.set(LegRepurchaseRate_56);
      InstrumentLeg_56.insert(LegRepurchaseRate_56.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_56(1406538930);
      noLegs_1_1_1.set(LegRepurchaseTerm_56);
      InstrumentLeg_56.insert(LegRepurchaseTerm_56.getString());
      FIX::LegSecurityDesc LegSecurityDesc_56("STRING_836717606");
      noLegs_1_1_1.set(LegSecurityDesc_56);
      InstrumentLeg_56.insert(LegSecurityDesc_56.getString());
      FIX::LegSecurityExchange LegSecurityExchange_56("EXCHANGE_1139531185");
      noLegs_1_1_1.set(LegSecurityExchange_56);
      InstrumentLeg_56.insert(LegSecurityExchange_56.getString());
      FIX::LegSecurityID LegSecurityID_56("STRING_221199947");
      noLegs_1_1_1.set(LegSecurityID_56);
      InstrumentLeg_56.insert(LegSecurityID_56.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_56("STRING_925327125");
      noLegs_1_1_1.set(LegSecurityIDSource_56);
      InstrumentLeg_56.insert(LegSecurityIDSource_56.getString());
      FIX::LegSecuritySubType LegSecuritySubType_56("STRING_130774239");
      noLegs_1_1_1.set(LegSecuritySubType_56);
      InstrumentLeg_56.insert(LegSecuritySubType_56.getString());
      FIX::LegSecurityType LegSecurityType_56("STRING_2027381510");
      noLegs_1_1_1.set(LegSecurityType_56);
      InstrumentLeg_56.insert(LegSecurityType_56.getString());
      FIX::LegSide LegSide_56('2');
      noLegs_1_1_1.set(LegSide_56);
      InstrumentLeg_56.insert(LegSide_56.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_56("STRING_754956950");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_56);
      InstrumentLeg_56.insert(LegStateOrProvinceOfIssue_56.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_56("GBP");
      noLegs_1_1_1.set(LegStrikeCurrency_56);
      InstrumentLeg_56.insert(LegStrikeCurrency_56.getString());
      FIX::LegStrikePrice LegStrikePrice_56;
      LegStrikePrice_56.setString("12753467");
      noLegs_1_1_1.set(LegStrikePrice_56);
      InstrumentLeg_56.insert(LegStrikePrice_56.getString());
      FIX::LegSymbol LegSymbol_56("STRING_408946579");
      noLegs_1_1_1.set(LegSymbol_56);
      InstrumentLeg_56.insert(LegSymbol_56.getString());
      FIX::LegSymbolSfx LegSymbolSfx_56("STRING_1242014823");
      noLegs_1_1_1.set(LegSymbolSfx_56);
      InstrumentLeg_56.insert(LegSymbolSfx_56.getString());
      FIX::LegTimeUnit LegTimeUnit_56("STRING_2111265447");
      noLegs_1_1_1.set(LegTimeUnit_56);
      InstrumentLeg_56.insert(LegTimeUnit_56.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_56("STRING_479129536");
      noLegs_1_1_1.set(LegUnitOfMeasure_56);
      InstrumentLeg_56.insert(LegUnitOfMeasure_56.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_56;
      LegUnitOfMeasureQty_56.setString("14499042");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_56);
      InstrumentLeg_56.insert(LegUnitOfMeasureQty_56.getString());
      all_values.push_back(InstrumentLeg_56);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_110;
        FIX::LegSecurityAltID LegSecurityAltID_110("STRING_2049633207");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_110);
        LegSecAltIDGrp_NoLegSecurityAltID_110.insert(LegSecurityAltID_110.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_110("STRING_1812325106");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_110);
        LegSecAltIDGrp_NoLegSecurityAltID_110.insert(LegSecurityAltIDSource_110.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_110);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_30;
    FIX::AttachmentPoint AttachmentPoint_30;
    AttachmentPoint_30.setString("89.050000");
    noRelatedSym_0_1.set(AttachmentPoint_30);
    Instrument_30.insert(AttachmentPoint_30.getString());
    FIX::CFICode CFICode_30("STRING_22512307");
    noRelatedSym_0_1.set(CFICode_30);
    Instrument_30.insert(CFICode_30.getString());
    FIX::CPProgram CPProgram_30(1);
    noRelatedSym_0_1.set(CPProgram_30);
    Instrument_30.insert(CPProgram_30.getString());
    FIX::CPRegType CPRegType_30("STRING_1681651097");
    noRelatedSym_0_1.set(CPRegType_30);
    Instrument_30.insert(CPRegType_30.getString());
    FIX::CapPrice CapPrice_30;
    CapPrice_30.setString("21310070");
    noRelatedSym_0_1.set(CapPrice_30);
    Instrument_30.insert(CapPrice_30.getString());
    FIX::ContractMultiplier ContractMultiplier_30;
    ContractMultiplier_30.setString("13479930");
    noRelatedSym_0_1.set(ContractMultiplier_30);
    Instrument_30.insert(ContractMultiplier_30.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_30(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_30);
    Instrument_30.insert(ContractMultiplierUnit_30.getString());
    FIX::ContractSettlMonth ContractSettlMonth_30("MONTHYEAR_798893527");
    noRelatedSym_0_1.set(ContractSettlMonth_30);
    Instrument_30.insert(ContractSettlMonth_30.getString());
    FIX::CountryOfIssue CountryOfIssue_30("COUNTRY_192536750");
    noRelatedSym_0_1.set(CountryOfIssue_30);
    Instrument_30.insert(CountryOfIssue_30.getString());
    FIX::CouponPaymentDate CouponPaymentDate_30("LOCALMKTDATE_658493606");
    noRelatedSym_0_1.set(CouponPaymentDate_30);
    Instrument_30.insert(CouponPaymentDate_30.getString());
    FIX::CouponRate CouponRate_30;
    CouponRate_30.setString("26.040000");
    noRelatedSym_0_1.set(CouponRate_30);
    Instrument_30.insert(CouponRate_30.getString());
    FIX::CreditRating CreditRating_30("STRING_1599075680");
    noRelatedSym_0_1.set(CreditRating_30);
    Instrument_30.insert(CreditRating_30.getString());
    FIX::DatedDate DatedDate_30("LOCALMKTDATE_1495211212");
    noRelatedSym_0_1.set(DatedDate_30);
    Instrument_30.insert(DatedDate_30.getString());
    FIX::DetachmentPoint DetachmentPoint_30;
    DetachmentPoint_30.setString("37.890000");
    noRelatedSym_0_1.set(DetachmentPoint_30);
    Instrument_30.insert(DetachmentPoint_30.getString());
    FIX::EncodedIssuer EncodedIssuer_30("DATA_1820275628");
    noRelatedSym_0_1.set(EncodedIssuer_30);
    Instrument_30.insert(EncodedIssuer_30.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_30(273054689);
    noRelatedSym_0_1.set(EncodedIssuerLen_30);
    Instrument_30.insert(EncodedIssuerLen_30.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_30("DATA_1777698029");
    noRelatedSym_0_1.set(EncodedSecurityDesc_30);
    Instrument_30.insert(EncodedSecurityDesc_30.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_30(1700173490);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_30);
    Instrument_30.insert(EncodedSecurityDescLen_30.getString());
    FIX::ExerciseStyle ExerciseStyle_30(2);
    noRelatedSym_0_1.set(ExerciseStyle_30);
    Instrument_30.insert(ExerciseStyle_30.getString());
    FIX::Factor Factor_30;
    Factor_30.setString("3851713");
    noRelatedSym_0_1.set(Factor_30);
    Instrument_30.insert(Factor_30.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_30(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_30);
    Instrument_30.insert(FlexProductEligibilityIndicator_30.getString());
    FIX::FlexibleIndicator FlexibleIndicator_30(true);
    noRelatedSym_0_1.set(FlexibleIndicator_30);
    Instrument_30.insert(FlexibleIndicator_30.getString());
    FIX::FloorPrice FloorPrice_30;
    FloorPrice_30.setString("16605180");
    noRelatedSym_0_1.set(FloorPrice_30);
    Instrument_30.insert(FloorPrice_30.getString());
    FIX::FlowScheduleType FlowScheduleType_30(3);
    noRelatedSym_0_1.set(FlowScheduleType_30);
    Instrument_30.insert(FlowScheduleType_30.getString());
    FIX::InstrRegistry InstrRegistry_30("STRING_725006207");
    noRelatedSym_0_1.set(InstrRegistry_30);
    Instrument_30.insert(InstrRegistry_30.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_30('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_30);
    Instrument_30.insert(InstrmtAssignmentMethod_30.getString());
    FIX::InterestAccrualDate InterestAccrualDate_30("LOCALMKTDATE_1788846619");
    noRelatedSym_0_1.set(InterestAccrualDate_30);
    Instrument_30.insert(InterestAccrualDate_30.getString());
    FIX::IssueDate IssueDate_30("LOCALMKTDATE_27426856");
    noRelatedSym_0_1.set(IssueDate_30);
    Instrument_30.insert(IssueDate_30.getString());
    FIX::Issuer Issuer_30("STRING_1908909626");
    noRelatedSym_0_1.set(Issuer_30);
    Instrument_30.insert(Issuer_30.getString());
    FIX::ListMethod ListMethod_30(1);
    noRelatedSym_0_1.set(ListMethod_30);
    Instrument_30.insert(ListMethod_30.getString());
    FIX::LocaleOfIssue LocaleOfIssue_30("STRING_1839751962");
    noRelatedSym_0_1.set(LocaleOfIssue_30);
    Instrument_30.insert(LocaleOfIssue_30.getString());
    FIX::MaturityDate MaturityDate_30("LOCALMKTDATE_1347174884");
    noRelatedSym_0_1.set(MaturityDate_30);
    Instrument_30.insert(MaturityDate_30.getString());
    FIX::MaturityMonthYear MaturityMonthYear_30("MONTHYEAR_1713508486");
    noRelatedSym_0_1.set(MaturityMonthYear_30);
    Instrument_30.insert(MaturityMonthYear_30.getString());
    FIX::MaturityTime MaturityTime_30("TZTIMEONLY_1986429543");
    noRelatedSym_0_1.set(MaturityTime_30);
    Instrument_30.insert(MaturityTime_30.getString());
    FIX::MinPriceIncrement MinPriceIncrement_30;
    MinPriceIncrement_30.setString("8813423");
    noRelatedSym_0_1.set(MinPriceIncrement_30);
    Instrument_30.insert(MinPriceIncrement_30.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_30;
    MinPriceIncrementAmount_30.setString("16970319");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_30);
    Instrument_30.insert(MinPriceIncrementAmount_30.getString());
    FIX::NTPositionLimit NTPositionLimit_30(1186938945);
    noRelatedSym_0_1.set(NTPositionLimit_30);
    Instrument_30.insert(NTPositionLimit_30.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_30;
    NotionalPercentageOutstanding_30.setString("97.710000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_30);
    Instrument_30.insert(NotionalPercentageOutstanding_30.getString());
    FIX::OptAttribute OptAttribute_30('3');
    noRelatedSym_0_1.set(OptAttribute_30);
    Instrument_30.insert(OptAttribute_30.getString());
    FIX::OptPayoutAmount OptPayoutAmount_30;
    OptPayoutAmount_30.setString("13794756");
    noRelatedSym_0_1.set(OptPayoutAmount_30);
    Instrument_30.insert(OptPayoutAmount_30.getString());
    FIX::OptPayoutType OptPayoutType_30(3);
    noRelatedSym_0_1.set(OptPayoutType_30);
    Instrument_30.insert(OptPayoutType_30.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_30;
    OriginalNotionalPercentageOutstanding_30.setString("44.170000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_30);
    Instrument_30.insert(OriginalNotionalPercentageOutstanding_30.getString());
    FIX::Pool Pool_30("STRING_831067727");
    noRelatedSym_0_1.set(Pool_30);
    Instrument_30.insert(Pool_30.getString());
    FIX::PositionLimit PositionLimit_30(589820941);
    noRelatedSym_0_1.set(PositionLimit_30);
    Instrument_30.insert(PositionLimit_30.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_30("STRING_INT");
    noRelatedSym_0_1.set(PriceQuoteMethod_30);
    Instrument_30.insert(PriceQuoteMethod_30.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_30("STRING_503859707");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_30);
    Instrument_30.insert(PriceUnitOfMeasure_30.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_30;
    PriceUnitOfMeasureQty_30.setString("8628756");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_30);
    Instrument_30.insert(PriceUnitOfMeasureQty_30.getString());
    FIX::Product Product_32(6);
    noRelatedSym_0_1.set(Product_32);
    Instrument_30.insert(Product_32.getString());
    FIX::ProductComplex ProductComplex_30("STRING_56549550");
    noRelatedSym_0_1.set(ProductComplex_30);
    Instrument_30.insert(ProductComplex_30.getString());
    FIX::PutOrCall PutOrCall_30(0);
    noRelatedSym_0_1.set(PutOrCall_30);
    Instrument_30.insert(PutOrCall_30.getString());
    FIX::RedemptionDate RedemptionDate_30("LOCALMKTDATE_370660270");
    noRelatedSym_0_1.set(RedemptionDate_30);
    Instrument_30.insert(RedemptionDate_30.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_30("STRING_957320053");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_30);
    Instrument_30.insert(RepoCollateralSecurityType_30.getString());
    FIX::RepurchaseRate RepurchaseRate_30;
    RepurchaseRate_30.setString("80.710000");
    noRelatedSym_0_1.set(RepurchaseRate_30);
    Instrument_30.insert(RepurchaseRate_30.getString());
    FIX::RepurchaseTerm RepurchaseTerm_30(2031178328);
    noRelatedSym_0_1.set(RepurchaseTerm_30);
    Instrument_30.insert(RepurchaseTerm_30.getString());
    FIX::RestructuringType RestructuringType_30("STRING_FR");
    noRelatedSym_0_1.set(RestructuringType_30);
    Instrument_30.insert(RestructuringType_30.getString());
    FIX::SecurityDesc SecurityDesc_30("STRING_1241984278");
    noRelatedSym_0_1.set(SecurityDesc_30);
    Instrument_30.insert(SecurityDesc_30.getString());
    FIX::SecurityExchange SecurityExchange_30("EXCHANGE_1507994537");
    noRelatedSym_0_1.set(SecurityExchange_30);
    Instrument_30.insert(SecurityExchange_30.getString());
    FIX::SecurityGroup SecurityGroup_30("STRING_1908400108");
    noRelatedSym_0_1.set(SecurityGroup_30);
    Instrument_30.insert(SecurityGroup_30.getString());
    FIX::SecurityID SecurityID_30("STRING_1269411134");
    noRelatedSym_0_1.set(SecurityID_30);
    Instrument_30.insert(SecurityID_30.getString());
    FIX::SecurityIDSource SecurityIDSource_30("STRING_D");
    noRelatedSym_0_1.set(SecurityIDSource_30);
    Instrument_30.insert(SecurityIDSource_30.getString());
    FIX::SecurityStatus SecurityStatus_30("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_30);
    Instrument_30.insert(SecurityStatus_30.getString());
    FIX::SecuritySubType SecuritySubType_31("STRING_961679449");
    noRelatedSym_0_1.set(SecuritySubType_31);
    Instrument_30.insert(SecuritySubType_31.getString());
    FIX::SecurityType SecurityType_32("STRING_TBOND");
    noRelatedSym_0_1.set(SecurityType_32);
    Instrument_30.insert(SecurityType_32.getString());
    FIX::Seniority Seniority_30("STRING_SR");
    noRelatedSym_0_1.set(Seniority_30);
    Instrument_30.insert(Seniority_30.getString());
    FIX::SettlMethod SettlMethod_30('C');
    noRelatedSym_0_1.set(SettlMethod_30);
    Instrument_30.insert(SettlMethod_30.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_30("STRING_1350454085");
    noRelatedSym_0_1.set(SettleOnOpenFlag_30);
    Instrument_30.insert(SettleOnOpenFlag_30.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_30("STRING_567485762");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_30);
    Instrument_30.insert(StateOrProvinceOfIssue_30.getString());
    FIX::StrikeCurrency StrikeCurrency_30("GBP");
    noRelatedSym_0_1.set(StrikeCurrency_30);
    Instrument_30.insert(StrikeCurrency_30.getString());
    FIX::StrikeMultiplier StrikeMultiplier_30;
    StrikeMultiplier_30.setString("9159275");
    noRelatedSym_0_1.set(StrikeMultiplier_30);
    Instrument_30.insert(StrikeMultiplier_30.getString());
    FIX::StrikePrice StrikePrice_30;
    StrikePrice_30.setString("12195563");
    noRelatedSym_0_1.set(StrikePrice_30);
    Instrument_30.insert(StrikePrice_30.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_30(2);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_30);
    Instrument_30.insert(StrikePriceBoundaryMethod_30.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_30;
    StrikePriceBoundaryPrecision_30.setString("19.910000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_30);
    Instrument_30.insert(StrikePriceBoundaryPrecision_30.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_30(1);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_30);
    Instrument_30.insert(StrikePriceDeterminationMethod_30.getString());
    FIX::StrikeValue StrikeValue_30;
    StrikeValue_30.setString("16184845");
    noRelatedSym_0_1.set(StrikeValue_30);
    Instrument_30.insert(StrikeValue_30.getString());
    FIX::Symbol Symbol_30("STRING_2127036550");
    noRelatedSym_0_1.set(Symbol_30);
    Instrument_30.insert(Symbol_30.getString());
    FIX::SymbolSfx SymbolSfx_30("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_30);
    Instrument_30.insert(SymbolSfx_30.getString());
    FIX::TimeUnit TimeUnit_30("STRING_S");
    noRelatedSym_0_1.set(TimeUnit_30);
    Instrument_30.insert(TimeUnit_30.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_30(2);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_30);
    Instrument_30.insert(UnderlyingPriceDeterminationMethod_30.getString());
    FIX::UnitOfMeasure UnitOfMeasure_30("STRING_MMBtu");
    noRelatedSym_0_1.set(UnitOfMeasure_30);
    Instrument_30.insert(UnitOfMeasure_30.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_30;
    UnitOfMeasureQty_30.setString("13678631");
    noRelatedSym_0_1.set(UnitOfMeasureQty_30);
    Instrument_30.insert(UnitOfMeasureQty_30.getString());
    FIX::ValuationMethod ValuationMethod_30("STRING_FUTDA");
    noRelatedSym_0_1.set(ValuationMethod_30);
    Instrument_30.insert(ValuationMethod_30.getString());
    all_values.push_back(Instrument_30);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_62;
      FIX::ComplexEventCondition ComplexEventCondition_62(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventCondition_62.getString());
      FIX::ComplexEventPrice ComplexEventPrice_62;
      ComplexEventPrice_62.setString("2193967");
      noComplexEvents_1_1_0.set(ComplexEventPrice_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPrice_62.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_62(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryMethod_62.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_62;
      ComplexEventPriceBoundaryPrecision_62.setString("18.980000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryPrecision_62.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_62(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceTimeType_62.getString());
      FIX::ComplexEventType ComplexEventType_62(3);
      noComplexEvents_1_1_0.set(ComplexEventType_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventType_62.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_62;
      ComplexOptPayoutAmount_62.setString("1012693");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexOptPayoutAmount_62.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_62);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_131;
        FIX::ComplexEventEndDate ComplexEventEndDate_131(FIX::UTCTIMESTAMP(17, 10, 3, 18, 8, 2009));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_131);
        ComplexEventDates_NoComplexEventDates_131.insert(ComplexEventEndDate_131.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_131(FIX::UTCTIMESTAMP(19, 32, 48, 5, 8, 2012));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_131);
        ComplexEventDates_NoComplexEventDates_131.insert(ComplexEventStartDate_131.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_131);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_265;
          FIX::ComplexEventEndTime ComplexEventEndTime_265(FIX::UTCTIMEONLY(23, 31, 59));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_265);
          ComplexEventTimes_NoComplexEventTimes_265.insert(ComplexEventEndTime_265.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_265(FIX::UTCTIMEONLY(7, 11, 40));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_265);
          ComplexEventTimes_NoComplexEventTimes_265.insert(ComplexEventStartTime_265.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_265);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_266;
          FIX::ComplexEventEndTime ComplexEventEndTime_266(FIX::UTCTIMEONLY(23, 47, 17));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_266);
          ComplexEventTimes_NoComplexEventTimes_266.insert(ComplexEventEndTime_266.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_266(FIX::UTCTIMEONLY(11, 21, 43));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_266);
          ComplexEventTimes_NoComplexEventTimes_266.insert(ComplexEventStartTime_266.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_266);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_132;
        FIX::ComplexEventEndDate ComplexEventEndDate_132(FIX::UTCTIMESTAMP(7, 45, 45, 13, 5, 2006));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_132);
        ComplexEventDates_NoComplexEventDates_132.insert(ComplexEventEndDate_132.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_132(FIX::UTCTIMESTAMP(12, 6, 16, 25, 3, 2004));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_132);
        ComplexEventDates_NoComplexEventDates_132.insert(ComplexEventStartDate_132.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_132);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_267;
          FIX::ComplexEventEndTime ComplexEventEndTime_267(FIX::UTCTIMEONLY(4, 5, 58));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_267);
          ComplexEventTimes_NoComplexEventTimes_267.insert(ComplexEventEndTime_267.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_267(FIX::UTCTIMEONLY(1, 1, 41));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_267);
          ComplexEventTimes_NoComplexEventTimes_267.insert(ComplexEventStartTime_267.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_267);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_63;
      FIX::ComplexEventCondition ComplexEventCondition_63(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_63);
      ComplexEvents_NoComplexEvents_63.insert(ComplexEventCondition_63.getString());
      FIX::ComplexEventPrice ComplexEventPrice_63;
      ComplexEventPrice_63.setString("19311600");
      noComplexEvents_1_1_1.set(ComplexEventPrice_63);
      ComplexEvents_NoComplexEvents_63.insert(ComplexEventPrice_63.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_63(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_63);
      ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceBoundaryMethod_63.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_63;
      ComplexEventPriceBoundaryPrecision_63.setString("50.010000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_63);
      ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceBoundaryPrecision_63.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_63(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_63);
      ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceTimeType_63.getString());
      FIX::ComplexEventType ComplexEventType_63(2);
      noComplexEvents_1_1_1.set(ComplexEventType_63);
      ComplexEvents_NoComplexEvents_63.insert(ComplexEventType_63.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_63;
      ComplexOptPayoutAmount_63.setString("10761813");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_63);
      ComplexEvents_NoComplexEvents_63.insert(ComplexOptPayoutAmount_63.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_63);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_133;
        FIX::ComplexEventEndDate ComplexEventEndDate_133(FIX::UTCTIMESTAMP(21, 23, 2, 22, 5, 2000));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_133);
        ComplexEventDates_NoComplexEventDates_133.insert(ComplexEventEndDate_133.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_133(FIX::UTCTIMESTAMP(20, 43, 43, 1, 10, 2006));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_133);
        ComplexEventDates_NoComplexEventDates_133.insert(ComplexEventStartDate_133.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_133);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_268;
          FIX::ComplexEventEndTime ComplexEventEndTime_268(FIX::UTCTIMEONLY(20, 17, 27));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_268);
          ComplexEventTimes_NoComplexEventTimes_268.insert(ComplexEventEndTime_268.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_268(FIX::UTCTIMEONLY(22, 20, 10));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_268);
          ComplexEventTimes_NoComplexEventTimes_268.insert(ComplexEventStartTime_268.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_268);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_134;
        FIX::ComplexEventEndDate ComplexEventEndDate_134(FIX::UTCTIMESTAMP(13, 30, 11, 0, 3, 2000));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_134);
        ComplexEventDates_NoComplexEventDates_134.insert(ComplexEventEndDate_134.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_134(FIX::UTCTIMESTAMP(7, 39, 41, 1, 7, 2001));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_134);
        ComplexEventDates_NoComplexEventDates_134.insert(ComplexEventStartDate_134.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_134);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_269;
          FIX::ComplexEventEndTime ComplexEventEndTime_269(FIX::UTCTIMEONLY(21, 36, 40));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_269);
          ComplexEventTimes_NoComplexEventTimes_269.insert(ComplexEventEndTime_269.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_269(FIX::UTCTIMEONLY(13, 56, 19));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_269);
          ComplexEventTimes_NoComplexEventTimes_269.insert(ComplexEventStartTime_269.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_269);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_270;
          FIX::ComplexEventEndTime ComplexEventEndTime_270(FIX::UTCTIMEONLY(16, 36, 9));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_270);
          ComplexEventTimes_NoComplexEventTimes_270.insert(ComplexEventEndTime_270.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_270(FIX::UTCTIMEONLY(11, 29, 27));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_270);
          ComplexEventTimes_NoComplexEventTimes_270.insert(ComplexEventStartTime_270.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_270);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_57;
      FIX::EventDate EventDate_57("LOCALMKTDATE_1604654827");
      noEvents_1_1_0.set(EventDate_57);
      EvntGrp_NoEvents_57.insert(EventDate_57.getString());
      FIX::EventPx EventPx_57;
      EventPx_57.setString("21305250");
      noEvents_1_1_0.set(EventPx_57);
      EvntGrp_NoEvents_57.insert(EventPx_57.getString());
      FIX::EventText EventText_57("STRING_272095705");
      noEvents_1_1_0.set(EventText_57);
      EvntGrp_NoEvents_57.insert(EventText_57.getString());
      FIX::EventTime EventTime_57(FIX::UTCTIMESTAMP(4, 43, 57, 11, 11, 2008));
      noEvents_1_1_0.set(EventTime_57);
      EvntGrp_NoEvents_57.insert(EventTime_57.getString());
      FIX::EventType EventType_57(5);
      noEvents_1_1_0.set(EventType_57);
      EvntGrp_NoEvents_57.insert(EventType_57.getString());
      all_values.push_back(EvntGrp_NoEvents_57);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_54;
      FIX::InstrumentPartyID InstrumentPartyID_54("STRING_1454778208");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyID_54.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_54('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyIDSource_54.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_54(239914601);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyRole_54.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_54);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105;
        FIX::InstrumentPartySubID InstrumentPartySubID_105("STRING_1811955982");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_105);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105.insert(InstrumentPartySubID_105.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_105(1236116782);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_105);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105.insert(InstrumentPartySubIDType_105.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106;
        FIX::InstrumentPartySubID InstrumentPartySubID_106("STRING_1796520920");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_106);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106.insert(InstrumentPartySubID_106.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_106(2074200755);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_106);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106.insert(InstrumentPartySubIDType_106.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107;
        FIX::InstrumentPartySubID InstrumentPartySubID_107("STRING_1400891298");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_107);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107.insert(InstrumentPartySubID_107.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_107(1836853359);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_107);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107.insert(InstrumentPartySubIDType_107.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_55;
      FIX::InstrumentPartyID InstrumentPartyID_55("STRING_1777976057");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyID_55.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_55('4');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyIDSource_55.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_55(1365870788);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyRole_55.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_55);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108;
        FIX::InstrumentPartySubID InstrumentPartySubID_108("STRING_1975365668");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_108);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108.insert(InstrumentPartySubID_108.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_108(1249508831);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_108);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108.insert(InstrumentPartySubIDType_108.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_52;
      FIX::SecurityAltID SecurityAltID_52("STRING_1532890948");
      noSecurityAltID_1_1_0.set(SecurityAltID_52);
      SecAltIDGrp_NoSecurityAltID_52.insert(SecurityAltID_52.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_52("STRING_305478204");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_52);
      SecAltIDGrp_NoSecurityAltID_52.insert(SecurityAltIDSource_52.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_52);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_53;
      FIX::SecurityAltID SecurityAltID_53("STRING_1912348787");
      noSecurityAltID_1_1_1.set(SecurityAltID_53);
      SecAltIDGrp_NoSecurityAltID_53.insert(SecurityAltID_53.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_53("STRING_1515932358");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_53);
      SecAltIDGrp_NoSecurityAltID_53.insert(SecurityAltIDSource_53.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_53);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_60;
    FIX::SecurityXML SecurityXML_61("XMLDATA_577573909");
    noRelatedSym_0_1.set(SecurityXML_61);
    FIX::SecurityXMLLen SecurityXMLLen_30(1872812126);
    noRelatedSym_0_1.set(SecurityXMLLen_30);
    FIX::SecurityXMLSchema SecurityXMLSchema_30("STRING_1495147274");
    noRelatedSym_0_1.set(SecurityXMLSchema_30);
    SecurityXML_60.insert(SecurityXMLSchema_30.getString());
    all_values.push_back(SecurityXML_60);
    all_compo_names.insert("SecurityXML");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_50;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_50("DATA_1635915");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_50);
      UnderlyingInstrument_50.insert(EncodedUnderlyingIssuer_50.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_50(1016561133);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_50);
      UnderlyingInstrument_50.insert(EncodedUnderlyingIssuerLen_50.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_50("DATA_580270427");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_50);
      UnderlyingInstrument_50.insert(EncodedUnderlyingSecurityDesc_50.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_50(1090139393);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_50);
      UnderlyingInstrument_50.insert(EncodedUnderlyingSecurityDescLen_50.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_50;
      UnderlyingAdjustedQuantity_50.setString("12252735");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_50);
      UnderlyingInstrument_50.insert(UnderlyingAdjustedQuantity_50.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_50;
      UnderlyingAllocationPercent_50.setString("64.910000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_50);
      UnderlyingInstrument_50.insert(UnderlyingAllocationPercent_50.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_50;
      UnderlyingAttachmentPoint_50.setString("39.530000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_50);
      UnderlyingInstrument_50.insert(UnderlyingAttachmentPoint_50.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_50("STRING_614199414");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_50);
      UnderlyingInstrument_50.insert(UnderlyingCFICode_50.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_50("STRING_557761093");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_50);
      UnderlyingInstrument_50.insert(UnderlyingCPProgram_50.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_50("STRING_1138272919");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_50);
      UnderlyingInstrument_50.insert(UnderlyingCPRegType_50.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_50;
      UnderlyingCapValue_50.setString("2786717");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_50);
      UnderlyingInstrument_50.insert(UnderlyingCapValue_50.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_50;
      UnderlyingCashAmount_50.setString("17938778");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_50);
      UnderlyingInstrument_50.insert(UnderlyingCashAmount_50.getString());
      FIX::UnderlyingCashType UnderlyingCashType_50("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_50);
      UnderlyingInstrument_50.insert(UnderlyingCashType_50.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_50;
      UnderlyingContractMultiplier_50.setString("2053888");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_50);
      UnderlyingInstrument_50.insert(UnderlyingContractMultiplier_50.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_50(1047285525);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_50);
      UnderlyingInstrument_50.insert(UnderlyingContractMultiplierUnit_50.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_50("COUNTRY_476679903");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_50);
      UnderlyingInstrument_50.insert(UnderlyingCountryOfIssue_50.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_50("LOCALMKTDATE_1983364913");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_50);
      UnderlyingInstrument_50.insert(UnderlyingCouponPaymentDate_50.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_50;
      UnderlyingCouponRate_50.setString("4.160000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_50);
      UnderlyingInstrument_50.insert(UnderlyingCouponRate_50.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_50("STRING_1842550691");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_50);
      UnderlyingInstrument_50.insert(UnderlyingCreditRating_50.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_50("EUR");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_50);
      UnderlyingInstrument_50.insert(UnderlyingCurrency_50.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_50;
      UnderlyingCurrentValue_50.setString("9445758");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_50);
      UnderlyingInstrument_50.insert(UnderlyingCurrentValue_50.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_50;
      UnderlyingDetachmentPoint_50.setString("82.840000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_50);
      UnderlyingInstrument_50.insert(UnderlyingDetachmentPoint_50.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_50;
      UnderlyingDirtyPrice_50.setString("7553897");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_50);
      UnderlyingInstrument_50.insert(UnderlyingDirtyPrice_50.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_50;
      UnderlyingEndPrice_50.setString("12500540");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_50);
      UnderlyingInstrument_50.insert(UnderlyingEndPrice_50.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_50;
      UnderlyingEndValue_50.setString("8150634");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_50);
      UnderlyingInstrument_50.insert(UnderlyingEndValue_50.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_50(123838447);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_50);
      UnderlyingInstrument_50.insert(UnderlyingExerciseStyle_50.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_50;
      UnderlyingFXRate_50.setString("18276279");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_50);
      UnderlyingInstrument_50.insert(UnderlyingFXRate_50.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_50('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_50);
      UnderlyingInstrument_50.insert(UnderlyingFXRateCalc_50.getString());
      FIX::UnderlyingFactor UnderlyingFactor_50;
      UnderlyingFactor_50.setString("16189857");
      noUnderlyings_1_1_0.set(UnderlyingFactor_50);
      UnderlyingInstrument_50.insert(UnderlyingFactor_50.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_50(674638012);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_50);
      UnderlyingInstrument_50.insert(UnderlyingFlowScheduleType_50.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_50("STRING_542027816");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_50);
      UnderlyingInstrument_50.insert(UnderlyingInstrRegistry_50.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_50("LOCALMKTDATE_488063206");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_50);
      UnderlyingInstrument_50.insert(UnderlyingIssueDate_50.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_50("STRING_1254908439");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_50);
      UnderlyingInstrument_50.insert(UnderlyingIssuer_50.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_50("STRING_1632167209");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_50);
      UnderlyingInstrument_50.insert(UnderlyingLocaleOfIssue_50.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_50("LOCALMKTDATE_1713336783");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_50);
      UnderlyingInstrument_50.insert(UnderlyingMaturityDate_50.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_50("MONTHYEAR_1572754931");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_50);
      UnderlyingInstrument_50.insert(UnderlyingMaturityMonthYear_50.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_50("TZTIMEONLY_2029601163");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_50);
      UnderlyingInstrument_50.insert(UnderlyingMaturityTime_50.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_50;
      UnderlyingNotionalPercentageOutstanding_50.setString("25.490000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_50);
      UnderlyingInstrument_50.insert(UnderlyingNotionalPercentageOutstanding_50.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_50('2');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_50);
      UnderlyingInstrument_50.insert(UnderlyingOptAttribute_50.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_50;
      UnderlyingOriginalNotionalPercentageOutstanding_50.setString("4.340000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_50);
      UnderlyingInstrument_50.insert(UnderlyingOriginalNotionalPercentageOutstanding_50.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_50("STRING_458724298");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_50);
      UnderlyingInstrument_50.insert(UnderlyingPriceUnitOfMeasure_50.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_50;
      UnderlyingPriceUnitOfMeasureQty_50.setString("17769102");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_50);
      UnderlyingInstrument_50.insert(UnderlyingPriceUnitOfMeasureQty_50.getString());
      FIX::UnderlyingProduct UnderlyingProduct_50(1807700625);
      noUnderlyings_1_1_0.set(UnderlyingProduct_50);
      UnderlyingInstrument_50.insert(UnderlyingProduct_50.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_50(664113154);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_50);
      UnderlyingInstrument_50.insert(UnderlyingPutOrCall_50.getString());
      FIX::UnderlyingPx UnderlyingPx_50;
      UnderlyingPx_50.setString("6767121");
      noUnderlyings_1_1_0.set(UnderlyingPx_50);
      UnderlyingInstrument_50.insert(UnderlyingPx_50.getString());
      FIX::UnderlyingQty UnderlyingQty_50;
      UnderlyingQty_50.setString("1368968");
      noUnderlyings_1_1_0.set(UnderlyingQty_50);
      UnderlyingInstrument_50.insert(UnderlyingQty_50.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_50("LOCALMKTDATE_499994419");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_50);
      UnderlyingInstrument_50.insert(UnderlyingRedemptionDate_50.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_50("STRING_71328897");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_50);
      UnderlyingInstrument_50.insert(UnderlyingRepoCollateralSecurityType_50.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_50;
      UnderlyingRepurchaseRate_50.setString("75.710000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_50);
      UnderlyingInstrument_50.insert(UnderlyingRepurchaseRate_50.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_50(1242498743);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_50);
      UnderlyingInstrument_50.insert(UnderlyingRepurchaseTerm_50.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_50("STRING_1441311334");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_50);
      UnderlyingInstrument_50.insert(UnderlyingRestructuringType_50.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_50("STRING_776539797");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityDesc_50.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_50("EXCHANGE_145213379");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityExchange_50.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_50("STRING_49217423");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityID_50.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_50("STRING_2026593876");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityIDSource_50.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_50("STRING_960276802");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_50);
      UnderlyingInstrument_50.insert(UnderlyingSecuritySubType_50.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_50("STRING_173055870");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_50);
      UnderlyingInstrument_50.insert(UnderlyingSecurityType_50.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_50("STRING_1706738216");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_50);
      UnderlyingInstrument_50.insert(UnderlyingSeniority_50.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_50("STRING_1500668703");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_50);
      UnderlyingInstrument_50.insert(UnderlyingSettlMethod_50.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_50(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_50);
      UnderlyingInstrument_50.insert(UnderlyingSettlementType_50.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_50;
      UnderlyingStartValue_50.setString("2338925");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_50);
      UnderlyingInstrument_50.insert(UnderlyingStartValue_50.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_50("STRING_2042696519");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_50);
      UnderlyingInstrument_50.insert(UnderlyingStateOrProvinceOfIssue_50.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_50("GBP");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_50);
      UnderlyingInstrument_50.insert(UnderlyingStrikeCurrency_50.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_50;
      UnderlyingStrikePrice_50.setString("15273800");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_50);
      UnderlyingInstrument_50.insert(UnderlyingStrikePrice_50.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_50("STRING_1845957932");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_50);
      UnderlyingInstrument_50.insert(UnderlyingSymbol_50.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_50("STRING_914072303");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_50);
      UnderlyingInstrument_50.insert(UnderlyingSymbolSfx_50.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_50("STRING_1409497596");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_50);
      UnderlyingInstrument_50.insert(UnderlyingTimeUnit_50.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_50("STRING_2026010481");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_50);
      UnderlyingInstrument_50.insert(UnderlyingUnitOfMeasure_50.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_50;
      UnderlyingUnitOfMeasureQty_50.setString("8971046");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_50);
      UnderlyingInstrument_50.insert(UnderlyingUnitOfMeasureQty_50.getString());
      all_values.push_back(UnderlyingInstrument_50);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_106;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_106("STRING_337251131");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_106);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_106.insert(UnderlyingSecurityAltID_106.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_106("STRING_526531282");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_106);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_106.insert(UnderlyingSecurityAltIDSource_106.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_100;
        FIX::UnderlyingStipType UnderlyingStipType_100("STRING_1001364285");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_100);
        UnderlyingStipulations_NoUnderlyingStips_100.insert(UnderlyingStipType_100.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_100("STRING_1203243410");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_100);
        UnderlyingStipulations_NoUnderlyingStips_100.insert(UnderlyingStipValue_100.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_100);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_95;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_95("STRING_1501358705");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_95);
        UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyID_95.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_95('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_95);
        UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyIDSource_95.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_95(2058965811);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_95);
        UndlyInstrumentParties_NoUndlyInstrumentParties_95.insert(UnderlyingInstrumentPartyRole_95.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_95);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_186("STRING_568399993");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_186);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186.insert(UnderlyingInstrumentPartySubID_186.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_186(688021961);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_186);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186.insert(UnderlyingInstrumentPartySubIDType_186.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_187("STRING_741587180");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_187);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187.insert(UnderlyingInstrumentPartySubID_187.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_187(617617416);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_187);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187.insert(UnderlyingInstrumentPartySubIDType_187.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_188("STRING_567132189");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_188);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188.insert(UnderlyingInstrumentPartySubID_188.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_188(1701863982);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_188);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188.insert(UnderlyingInstrumentPartySubIDType_188.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_51;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_51("DATA_790673286");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_51);
      UnderlyingInstrument_51.insert(EncodedUnderlyingIssuer_51.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_51(126386757);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_51);
      UnderlyingInstrument_51.insert(EncodedUnderlyingIssuerLen_51.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_51("DATA_1055049038");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_51);
      UnderlyingInstrument_51.insert(EncodedUnderlyingSecurityDesc_51.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_51(435231229);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_51);
      UnderlyingInstrument_51.insert(EncodedUnderlyingSecurityDescLen_51.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_51;
      UnderlyingAdjustedQuantity_51.setString("3602793");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_51);
      UnderlyingInstrument_51.insert(UnderlyingAdjustedQuantity_51.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_51;
      UnderlyingAllocationPercent_51.setString("19.090000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_51);
      UnderlyingInstrument_51.insert(UnderlyingAllocationPercent_51.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_51;
      UnderlyingAttachmentPoint_51.setString("23.780000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_51);
      UnderlyingInstrument_51.insert(UnderlyingAttachmentPoint_51.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_51("STRING_1849080357");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_51);
      UnderlyingInstrument_51.insert(UnderlyingCFICode_51.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_51("STRING_330158342");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_51);
      UnderlyingInstrument_51.insert(UnderlyingCPProgram_51.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_51("STRING_266326662");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_51);
      UnderlyingInstrument_51.insert(UnderlyingCPRegType_51.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_51;
      UnderlyingCapValue_51.setString("6156690");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_51);
      UnderlyingInstrument_51.insert(UnderlyingCapValue_51.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_51;
      UnderlyingCashAmount_51.setString("17396559");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_51);
      UnderlyingInstrument_51.insert(UnderlyingCashAmount_51.getString());
      FIX::UnderlyingCashType UnderlyingCashType_51("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_51);
      UnderlyingInstrument_51.insert(UnderlyingCashType_51.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_51;
      UnderlyingContractMultiplier_51.setString("15127736");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_51);
      UnderlyingInstrument_51.insert(UnderlyingContractMultiplier_51.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_51(2022060320);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_51);
      UnderlyingInstrument_51.insert(UnderlyingContractMultiplierUnit_51.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_51("COUNTRY_482104627");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_51);
      UnderlyingInstrument_51.insert(UnderlyingCountryOfIssue_51.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_51("LOCALMKTDATE_2039304973");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_51);
      UnderlyingInstrument_51.insert(UnderlyingCouponPaymentDate_51.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_51;
      UnderlyingCouponRate_51.setString("16.800000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_51);
      UnderlyingInstrument_51.insert(UnderlyingCouponRate_51.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_51("STRING_1483468913");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_51);
      UnderlyingInstrument_51.insert(UnderlyingCreditRating_51.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_51("JPY");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_51);
      UnderlyingInstrument_51.insert(UnderlyingCurrency_51.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_51;
      UnderlyingCurrentValue_51.setString("8373439");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_51);
      UnderlyingInstrument_51.insert(UnderlyingCurrentValue_51.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_51;
      UnderlyingDetachmentPoint_51.setString("33.950000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_51);
      UnderlyingInstrument_51.insert(UnderlyingDetachmentPoint_51.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_51;
      UnderlyingDirtyPrice_51.setString("19556820");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_51);
      UnderlyingInstrument_51.insert(UnderlyingDirtyPrice_51.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_51;
      UnderlyingEndPrice_51.setString("14337177");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_51);
      UnderlyingInstrument_51.insert(UnderlyingEndPrice_51.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_51;
      UnderlyingEndValue_51.setString("7905533");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_51);
      UnderlyingInstrument_51.insert(UnderlyingEndValue_51.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_51(496220396);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_51);
      UnderlyingInstrument_51.insert(UnderlyingExerciseStyle_51.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_51;
      UnderlyingFXRate_51.setString("278213");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_51);
      UnderlyingInstrument_51.insert(UnderlyingFXRate_51.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_51('M');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_51);
      UnderlyingInstrument_51.insert(UnderlyingFXRateCalc_51.getString());
      FIX::UnderlyingFactor UnderlyingFactor_51;
      UnderlyingFactor_51.setString("10633525");
      noUnderlyings_1_1_1.set(UnderlyingFactor_51);
      UnderlyingInstrument_51.insert(UnderlyingFactor_51.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_51(1729685285);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_51);
      UnderlyingInstrument_51.insert(UnderlyingFlowScheduleType_51.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_51("STRING_51360444");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_51);
      UnderlyingInstrument_51.insert(UnderlyingInstrRegistry_51.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_51("LOCALMKTDATE_1189739342");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_51);
      UnderlyingInstrument_51.insert(UnderlyingIssueDate_51.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_51("STRING_637250675");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_51);
      UnderlyingInstrument_51.insert(UnderlyingIssuer_51.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_51("STRING_486591673");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_51);
      UnderlyingInstrument_51.insert(UnderlyingLocaleOfIssue_51.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_51("LOCALMKTDATE_1550018680");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_51);
      UnderlyingInstrument_51.insert(UnderlyingMaturityDate_51.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_51("MONTHYEAR_1587512584");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_51);
      UnderlyingInstrument_51.insert(UnderlyingMaturityMonthYear_51.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_51("TZTIMEONLY_1054444052");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_51);
      UnderlyingInstrument_51.insert(UnderlyingMaturityTime_51.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_51;
      UnderlyingNotionalPercentageOutstanding_51.setString("53.890000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_51);
      UnderlyingInstrument_51.insert(UnderlyingNotionalPercentageOutstanding_51.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_51('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_51);
      UnderlyingInstrument_51.insert(UnderlyingOptAttribute_51.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_51;
      UnderlyingOriginalNotionalPercentageOutstanding_51.setString("7.140000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_51);
      UnderlyingInstrument_51.insert(UnderlyingOriginalNotionalPercentageOutstanding_51.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_51("STRING_1867284402");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_51);
      UnderlyingInstrument_51.insert(UnderlyingPriceUnitOfMeasure_51.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_51;
      UnderlyingPriceUnitOfMeasureQty_51.setString("15098432");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_51);
      UnderlyingInstrument_51.insert(UnderlyingPriceUnitOfMeasureQty_51.getString());
      FIX::UnderlyingProduct UnderlyingProduct_51(1465624210);
      noUnderlyings_1_1_1.set(UnderlyingProduct_51);
      UnderlyingInstrument_51.insert(UnderlyingProduct_51.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_51(1232574445);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_51);
      UnderlyingInstrument_51.insert(UnderlyingPutOrCall_51.getString());
      FIX::UnderlyingPx UnderlyingPx_51;
      UnderlyingPx_51.setString("13844198");
      noUnderlyings_1_1_1.set(UnderlyingPx_51);
      UnderlyingInstrument_51.insert(UnderlyingPx_51.getString());
      FIX::UnderlyingQty UnderlyingQty_51;
      UnderlyingQty_51.setString("19477288");
      noUnderlyings_1_1_1.set(UnderlyingQty_51);
      UnderlyingInstrument_51.insert(UnderlyingQty_51.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_51("LOCALMKTDATE_1124395771");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_51);
      UnderlyingInstrument_51.insert(UnderlyingRedemptionDate_51.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_51("STRING_1201617922");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_51);
      UnderlyingInstrument_51.insert(UnderlyingRepoCollateralSecurityType_51.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_51;
      UnderlyingRepurchaseRate_51.setString("41.030000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_51);
      UnderlyingInstrument_51.insert(UnderlyingRepurchaseRate_51.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_51(71976859);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_51);
      UnderlyingInstrument_51.insert(UnderlyingRepurchaseTerm_51.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_51("STRING_1098334194");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_51);
      UnderlyingInstrument_51.insert(UnderlyingRestructuringType_51.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_51("STRING_2121058073");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityDesc_51.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_51("EXCHANGE_294130254");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityExchange_51.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_51("STRING_906532629");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityID_51.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_51("STRING_1407292195");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityIDSource_51.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_51("STRING_1084683643");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_51);
      UnderlyingInstrument_51.insert(UnderlyingSecuritySubType_51.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_51("STRING_1402753026");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_51);
      UnderlyingInstrument_51.insert(UnderlyingSecurityType_51.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_51("STRING_1435113498");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_51);
      UnderlyingInstrument_51.insert(UnderlyingSeniority_51.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_51("STRING_345370801");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_51);
      UnderlyingInstrument_51.insert(UnderlyingSettlMethod_51.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_51(2);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_51);
      UnderlyingInstrument_51.insert(UnderlyingSettlementType_51.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_51;
      UnderlyingStartValue_51.setString("10173151");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_51);
      UnderlyingInstrument_51.insert(UnderlyingStartValue_51.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_51("STRING_396731245");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_51);
      UnderlyingInstrument_51.insert(UnderlyingStateOrProvinceOfIssue_51.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_51("GBP");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_51);
      UnderlyingInstrument_51.insert(UnderlyingStrikeCurrency_51.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_51;
      UnderlyingStrikePrice_51.setString("8833229");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_51);
      UnderlyingInstrument_51.insert(UnderlyingStrikePrice_51.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_51("STRING_910896338");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_51);
      UnderlyingInstrument_51.insert(UnderlyingSymbol_51.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_51("STRING_1094594746");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_51);
      UnderlyingInstrument_51.insert(UnderlyingSymbolSfx_51.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_51("STRING_1937766970");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_51);
      UnderlyingInstrument_51.insert(UnderlyingTimeUnit_51.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_51("STRING_15028079");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_51);
      UnderlyingInstrument_51.insert(UnderlyingUnitOfMeasure_51.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_51;
      UnderlyingUnitOfMeasureQty_51.setString("8647820");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_51);
      UnderlyingInstrument_51.insert(UnderlyingUnitOfMeasureQty_51.getString());
      all_values.push_back(UnderlyingInstrument_51);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_107;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_107("STRING_1882312481");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_107);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_107.insert(UnderlyingSecurityAltID_107.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_107("STRING_227141595");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_107);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_107.insert(UnderlyingSecurityAltIDSource_107.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_108;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_108("STRING_429194599");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_108);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_108.insert(UnderlyingSecurityAltID_108.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_108("STRING_967403279");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_108);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_108.insert(UnderlyingSecurityAltIDSource_108.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_109;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_109("STRING_1611561485");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltID_109);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_109.insert(UnderlyingSecurityAltID_109.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_109("STRING_229439789");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltIDSource_109);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_109.insert(UnderlyingSecurityAltIDSource_109.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_101;
        FIX::UnderlyingStipType UnderlyingStipType_101("STRING_665695759");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_101);
        UnderlyingStipulations_NoUnderlyingStips_101.insert(UnderlyingStipType_101.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_101("STRING_1513153892");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_101);
        UnderlyingStipulations_NoUnderlyingStips_101.insert(UnderlyingStipValue_101.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_101);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_96;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_96("STRING_1764029953");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_96);
        UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyID_96.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_96('1');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_96);
        UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyIDSource_96.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_96(310422515);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_96);
        UndlyInstrumentParties_NoUndlyInstrumentParties_96.insert(UnderlyingInstrumentPartyRole_96.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_96);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_189("STRING_746536865");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_189);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189.insert(UnderlyingInstrumentPartySubID_189.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_189(1395106159);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_189);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189.insert(UnderlyingInstrumentPartySubIDType_189.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_189);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_190("STRING_1925831960");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_190);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190.insert(UnderlyingInstrumentPartySubID_190.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_190(34166715);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_190);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190.insert(UnderlyingInstrumentPartySubIDType_190.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_191("STRING_1740476960");
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubID_191);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191.insert(UnderlyingInstrumentPartySubID_191.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_191(96970276);
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_191);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191.insert(UnderlyingInstrumentPartySubIDType_191.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_97;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_97("STRING_1051481850");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyID_97.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_97('2');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyIDSource_97.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_97(1605331582);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_97);
        UndlyInstrumentParties_NoUndlyInstrumentParties_97.insert(UnderlyingInstrumentPartyRole_97.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_97);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_192("STRING_873047475");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_192);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192.insert(UnderlyingInstrumentPartySubID_192.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_192(368744272);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_192);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192.insert(UnderlyingInstrumentPartySubIDType_192.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_98;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_98("STRING_1653158758");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyID_98.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_98('6');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyIDSource_98.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_98(383772351);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_98);
        UndlyInstrumentParties_NoUndlyInstrumentParties_98.insert(UnderlyingInstrumentPartyRole_98.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_98);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_193("STRING_1774384835");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_193);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193.insert(UnderlyingInstrumentPartySubID_193.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_193(118601185);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_193);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193.insert(UnderlyingInstrumentPartySubIDType_193.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_52;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_52("DATA_597598731");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_52);
      UnderlyingInstrument_52.insert(EncodedUnderlyingIssuer_52.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_52(56095786);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_52);
      UnderlyingInstrument_52.insert(EncodedUnderlyingIssuerLen_52.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_52("DATA_1086004464");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_52);
      UnderlyingInstrument_52.insert(EncodedUnderlyingSecurityDesc_52.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_52(61676568);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_52);
      UnderlyingInstrument_52.insert(EncodedUnderlyingSecurityDescLen_52.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_52;
      UnderlyingAdjustedQuantity_52.setString("2855355");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_52);
      UnderlyingInstrument_52.insert(UnderlyingAdjustedQuantity_52.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_52;
      UnderlyingAllocationPercent_52.setString("98.660000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_52);
      UnderlyingInstrument_52.insert(UnderlyingAllocationPercent_52.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_52;
      UnderlyingAttachmentPoint_52.setString("23.270000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_52);
      UnderlyingInstrument_52.insert(UnderlyingAttachmentPoint_52.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_52("STRING_1798689468");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_52);
      UnderlyingInstrument_52.insert(UnderlyingCFICode_52.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_52("STRING_1046612127");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_52);
      UnderlyingInstrument_52.insert(UnderlyingCPProgram_52.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_52("STRING_343918632");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_52);
      UnderlyingInstrument_52.insert(UnderlyingCPRegType_52.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_52;
      UnderlyingCapValue_52.setString("11379341");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_52);
      UnderlyingInstrument_52.insert(UnderlyingCapValue_52.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_52;
      UnderlyingCashAmount_52.setString("13570346");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_52);
      UnderlyingInstrument_52.insert(UnderlyingCashAmount_52.getString());
      FIX::UnderlyingCashType UnderlyingCashType_52("STRING_FIXED");
      noUnderlyings_1_1_2.set(UnderlyingCashType_52);
      UnderlyingInstrument_52.insert(UnderlyingCashType_52.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_52;
      UnderlyingContractMultiplier_52.setString("18844710");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_52);
      UnderlyingInstrument_52.insert(UnderlyingContractMultiplier_52.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_52(604657153);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_52);
      UnderlyingInstrument_52.insert(UnderlyingContractMultiplierUnit_52.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_52("COUNTRY_645345879");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_52);
      UnderlyingInstrument_52.insert(UnderlyingCountryOfIssue_52.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_52("LOCALMKTDATE_1918637718");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_52);
      UnderlyingInstrument_52.insert(UnderlyingCouponPaymentDate_52.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_52;
      UnderlyingCouponRate_52.setString("4.650000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_52);
      UnderlyingInstrument_52.insert(UnderlyingCouponRate_52.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_52("STRING_742316155");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_52);
      UnderlyingInstrument_52.insert(UnderlyingCreditRating_52.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_52("GBP");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_52);
      UnderlyingInstrument_52.insert(UnderlyingCurrency_52.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_52;
      UnderlyingCurrentValue_52.setString("2001640");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_52);
      UnderlyingInstrument_52.insert(UnderlyingCurrentValue_52.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_52;
      UnderlyingDetachmentPoint_52.setString("99.320000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_52);
      UnderlyingInstrument_52.insert(UnderlyingDetachmentPoint_52.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_52;
      UnderlyingDirtyPrice_52.setString("10604224");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_52);
      UnderlyingInstrument_52.insert(UnderlyingDirtyPrice_52.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_52;
      UnderlyingEndPrice_52.setString("5689083");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_52);
      UnderlyingInstrument_52.insert(UnderlyingEndPrice_52.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_52;
      UnderlyingEndValue_52.setString("8868750");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_52);
      UnderlyingInstrument_52.insert(UnderlyingEndValue_52.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_52(1723753296);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_52);
      UnderlyingInstrument_52.insert(UnderlyingExerciseStyle_52.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_52;
      UnderlyingFXRate_52.setString("9526807");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_52);
      UnderlyingInstrument_52.insert(UnderlyingFXRate_52.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_52('D');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_52);
      UnderlyingInstrument_52.insert(UnderlyingFXRateCalc_52.getString());
      FIX::UnderlyingFactor UnderlyingFactor_52;
      UnderlyingFactor_52.setString("13506544");
      noUnderlyings_1_1_2.set(UnderlyingFactor_52);
      UnderlyingInstrument_52.insert(UnderlyingFactor_52.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_52(1071281897);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_52);
      UnderlyingInstrument_52.insert(UnderlyingFlowScheduleType_52.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_52("STRING_1854930909");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_52);
      UnderlyingInstrument_52.insert(UnderlyingInstrRegistry_52.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_52("LOCALMKTDATE_1406750269");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_52);
      UnderlyingInstrument_52.insert(UnderlyingIssueDate_52.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_52("STRING_9802713");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_52);
      UnderlyingInstrument_52.insert(UnderlyingIssuer_52.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_52("STRING_1916607477");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_52);
      UnderlyingInstrument_52.insert(UnderlyingLocaleOfIssue_52.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_52("LOCALMKTDATE_1692285845");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_52);
      UnderlyingInstrument_52.insert(UnderlyingMaturityDate_52.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_52("MONTHYEAR_1040122579");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_52);
      UnderlyingInstrument_52.insert(UnderlyingMaturityMonthYear_52.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_52("TZTIMEONLY_496496156");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_52);
      UnderlyingInstrument_52.insert(UnderlyingMaturityTime_52.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_52;
      UnderlyingNotionalPercentageOutstanding_52.setString("16.660000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_52);
      UnderlyingInstrument_52.insert(UnderlyingNotionalPercentageOutstanding_52.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_52('2');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_52);
      UnderlyingInstrument_52.insert(UnderlyingOptAttribute_52.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_52;
      UnderlyingOriginalNotionalPercentageOutstanding_52.setString("47.880000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_52);
      UnderlyingInstrument_52.insert(UnderlyingOriginalNotionalPercentageOutstanding_52.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_52("STRING_333942156");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_52);
      UnderlyingInstrument_52.insert(UnderlyingPriceUnitOfMeasure_52.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_52;
      UnderlyingPriceUnitOfMeasureQty_52.setString("12962857");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_52);
      UnderlyingInstrument_52.insert(UnderlyingPriceUnitOfMeasureQty_52.getString());
      FIX::UnderlyingProduct UnderlyingProduct_52(1707412355);
      noUnderlyings_1_1_2.set(UnderlyingProduct_52);
      UnderlyingInstrument_52.insert(UnderlyingProduct_52.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_52(70929511);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_52);
      UnderlyingInstrument_52.insert(UnderlyingPutOrCall_52.getString());
      FIX::UnderlyingPx UnderlyingPx_52;
      UnderlyingPx_52.setString("19009428");
      noUnderlyings_1_1_2.set(UnderlyingPx_52);
      UnderlyingInstrument_52.insert(UnderlyingPx_52.getString());
      FIX::UnderlyingQty UnderlyingQty_52;
      UnderlyingQty_52.setString("2052745");
      noUnderlyings_1_1_2.set(UnderlyingQty_52);
      UnderlyingInstrument_52.insert(UnderlyingQty_52.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_52("LOCALMKTDATE_1989567229");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_52);
      UnderlyingInstrument_52.insert(UnderlyingRedemptionDate_52.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_52("STRING_2098593320");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_52);
      UnderlyingInstrument_52.insert(UnderlyingRepoCollateralSecurityType_52.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_52;
      UnderlyingRepurchaseRate_52.setString("7.410000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_52);
      UnderlyingInstrument_52.insert(UnderlyingRepurchaseRate_52.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_52(664719501);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_52);
      UnderlyingInstrument_52.insert(UnderlyingRepurchaseTerm_52.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_52("STRING_138484694");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_52);
      UnderlyingInstrument_52.insert(UnderlyingRestructuringType_52.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_52("STRING_1147754830");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_52);
      UnderlyingInstrument_52.insert(UnderlyingSecurityDesc_52.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_52("EXCHANGE_2045919433");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_52);
      UnderlyingInstrument_52.insert(UnderlyingSecurityExchange_52.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_52("STRING_1198907192");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_52);
      UnderlyingInstrument_52.insert(UnderlyingSecurityID_52.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_52("STRING_1716663191");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_52);
      UnderlyingInstrument_52.insert(UnderlyingSecurityIDSource_52.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_52("STRING_785310827");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_52);
      UnderlyingInstrument_52.insert(UnderlyingSecuritySubType_52.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_52("STRING_775176840");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_52);
      UnderlyingInstrument_52.insert(UnderlyingSecurityType_52.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_52("STRING_521860255");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_52);
      UnderlyingInstrument_52.insert(UnderlyingSeniority_52.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_52("STRING_2042643006");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_52);
      UnderlyingInstrument_52.insert(UnderlyingSettlMethod_52.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_52(2);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_52);
      UnderlyingInstrument_52.insert(UnderlyingSettlementType_52.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_52;
      UnderlyingStartValue_52.setString("15931421");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_52);
      UnderlyingInstrument_52.insert(UnderlyingStartValue_52.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_52("STRING_1750090267");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_52);
      UnderlyingInstrument_52.insert(UnderlyingStateOrProvinceOfIssue_52.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_52("JPY");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_52);
      UnderlyingInstrument_52.insert(UnderlyingStrikeCurrency_52.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_52;
      UnderlyingStrikePrice_52.setString("15192140");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_52);
      UnderlyingInstrument_52.insert(UnderlyingStrikePrice_52.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_52("STRING_929900142");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_52);
      UnderlyingInstrument_52.insert(UnderlyingSymbol_52.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_52("STRING_495583798");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_52);
      UnderlyingInstrument_52.insert(UnderlyingSymbolSfx_52.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_52("STRING_2015710253");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_52);
      UnderlyingInstrument_52.insert(UnderlyingTimeUnit_52.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_52("STRING_125908160");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_52);
      UnderlyingInstrument_52.insert(UnderlyingUnitOfMeasure_52.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_52;
      UnderlyingUnitOfMeasureQty_52.setString("4348348");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_52);
      UnderlyingInstrument_52.insert(UnderlyingUnitOfMeasureQty_52.getString());
      all_values.push_back(UnderlyingInstrument_52);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_110;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_110("STRING_459850316");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_110);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_110.insert(UnderlyingSecurityAltID_110.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_110("STRING_1731120557");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_110);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_110.insert(UnderlyingSecurityAltIDSource_110.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_102;
        FIX::UnderlyingStipType UnderlyingStipType_102("STRING_530779827");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_102);
        UnderlyingStipulations_NoUnderlyingStips_102.insert(UnderlyingStipType_102.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_102("STRING_1484579764");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_102);
        UnderlyingStipulations_NoUnderlyingStips_102.insert(UnderlyingStipValue_102.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_102);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_99;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_99("STRING_372863408");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyID_99.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_99('1');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyIDSource_99.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_99(1421435428);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyRole_99.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_99);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_194("STRING_1574174130");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_194);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194.insert(UnderlyingInstrumentPartySubID_194.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_194(421706610);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_194);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194.insert(UnderlyingInstrumentPartySubIDType_194.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_195("STRING_936018694");
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubID_195);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195.insert(UnderlyingInstrumentPartySubID_195.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_195(625597675);
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_195);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195.insert(UnderlyingInstrumentPartySubIDType_195.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_196("STRING_2138369801");
          noUndlyInstrumentPartySubIDs_1_2_0_3_2.set(UnderlyingInstrumentPartySubID_196);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196.insert(UnderlyingInstrumentPartySubID_196.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_196(1721329522);
          noUndlyInstrumentPartySubIDs_1_2_0_3_2.set(UnderlyingInstrumentPartySubIDType_196);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196.insert(UnderlyingInstrumentPartySubIDType_196.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  // MDReqGrp
  // Group MDReqGrp.NoMDEntryTypes
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_0;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_0;
    FIX::MDEntryType MDEntryType_1('T');
    noMDEntryTypes_0_0.set(MDEntryType_1);
    MDReqGrp_NoMDEntryTypes_0.insert(MDEntryType_1.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_0);
    all_compo_names.insert("MDReqGrp.NoMDEntryTypes");

    msg.addGroup(noMDEntryTypes_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_1;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_1;
    FIX::MDEntryType MDEntryType_2('Z');
    noMDEntryTypes_0_1.set(MDEntryType_2);
    MDReqGrp_NoMDEntryTypes_1.insert(MDEntryType_2.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_1);
    all_compo_names.insert("MDReqGrp.NoMDEntryTypes");

    msg.addGroup(noMDEntryTypes_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_45;
    FIX::PartyID PartyID_45("STRING_2105888561");
    noPartyIDs_0_0.set(PartyID_45);
    Parties_NoPartyIDs_45.insert(PartyID_45.getString());
    FIX::PartyIDSource PartyIDSource_45('D');
    noPartyIDs_0_0.set(PartyIDSource_45);
    Parties_NoPartyIDs_45.insert(PartyIDSource_45.getString());
    FIX::PartyRole PartyRole_45(5);
    noPartyIDs_0_0.set(PartyRole_45);
    Parties_NoPartyIDs_45.insert(PartyRole_45.getString());
    all_values.push_back(Parties_NoPartyIDs_45);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_96;
      FIX::PartySubID PartySubID_96("STRING_590825948");
      noPartySubIDs_0_1_0.set(PartySubID_96);
      PtysSubGrp_NoPartySubIDs_96.insert(PartySubID_96.getString());
      FIX::PartySubIDType PartySubIDType_96(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_96);
      PtysSubGrp_NoPartySubIDs_96.insert(PartySubIDType_96.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_96);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_97;
      FIX::PartySubID PartySubID_97("STRING_2056933578");
      noPartySubIDs_0_1_1.set(PartySubID_97);
      PtysSubGrp_NoPartySubIDs_97.insert(PartySubID_97.getString());
      FIX::PartySubIDType PartySubIDType_97(16);
      noPartySubIDs_0_1_1.set(PartySubIDType_97);
      PtysSubGrp_NoPartySubIDs_97.insert(PartySubIDType_97.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_97);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_98;
      FIX::PartySubID PartySubID_98("STRING_1672544791");
      noPartySubIDs_0_1_2.set(PartySubID_98);
      PtysSubGrp_NoPartySubIDs_98.insert(PartySubID_98.getString());
      FIX::PartySubIDType PartySubIDType_98(11);
      noPartySubIDs_0_1_2.set(PartySubIDType_98);
      PtysSubGrp_NoPartySubIDs_98.insert(PartySubIDType_98.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_98);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_2;
    FIX::TradingSessionID TradingSessionID_33("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_33);
    TrdgSesGrp_NoTradingSessions_2.insert(TradingSessionID_33.getString());
    FIX::TradingSessionSubID TradingSessionSubID_33("STRING_6");
    noTradingSessions_0_0.set(TradingSessionSubID_33);
    TrdgSesGrp_NoTradingSessions_2.insert(TradingSessionSubID_33.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_2);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
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
