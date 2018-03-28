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
  multiset<string> MarketDataRequest_0;
  FIX::AggregatedBook AggregatedBook_0(true);
  msg.set(AggregatedBook_0);
  MarketDataRequest_0.insert(AggregatedBook_0.getString());
  FIX::ApplQueueAction ApplQueueAction_0(1);
  msg.set(ApplQueueAction_0);
  MarketDataRequest_0.insert(ApplQueueAction_0.getString());
  FIX::ApplQueueMax ApplQueueMax_0(915917904);
  msg.set(ApplQueueMax_0);
  MarketDataRequest_0.insert(ApplQueueMax_0.getString());
  FIX::MDImplicitDelete MDImplicitDelete_0(false);
  msg.set(MDImplicitDelete_0);
  MarketDataRequest_0.insert(MDImplicitDelete_0.getString());
  FIX::MDQuoteType MDQuoteType_1(1);
  msg.set(MDQuoteType_1);
  MarketDataRequest_0.insert(MDQuoteType_1.getString());
  FIX::MDReqID MDReqID_1("STRING_2001344912");
  msg.set(MDReqID_1);
  MarketDataRequest_0.insert(MDReqID_1.getString());
  FIX::MDUpdateType MDUpdateType_0(1);
  msg.set(MDUpdateType_0);
  MarketDataRequest_0.insert(MDUpdateType_0.getString());
  FIX::MarketDepth MarketDepth_13(1722650134);
  msg.set(MarketDepth_13);
  MarketDataRequest_0.insert(MarketDepth_13.getString());
  FIX::OpenCloseSettlFlag OpenCloseSettlFlag_1("MULTIPLECHARVALUE_4");
  msg.set(OpenCloseSettlFlag_1);
  MarketDataRequest_0.insert(OpenCloseSettlFlag_1.getString());
  FIX::Scope Scope_1("MULTIPLECHARVALUE_3");
  msg.set(Scope_1);
  MarketDataRequest_0.insert(Scope_1.getString());
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
    FIX::Currency Currency_24("CAN");
    noRelatedSym_0_0.set(Currency_24);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(Currency_24.getString());
    FIX::MDEntrySize MDEntrySize_1;
    MDEntrySize_1.setString("2102203");
    noRelatedSym_0_0.set(MDEntrySize_1);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(MDEntrySize_1.getString());
    FIX::MDStreamID MDStreamID_1("STRING_976022740");
    noRelatedSym_0_0.set(MDStreamID_1);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(MDStreamID_1.getString());
    FIX::QuoteType QuoteType_0(3);
    noRelatedSym_0_0.set(QuoteType_0);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(QuoteType_0.getString());
    FIX::SettlDate SettlDate_15("LOCALMKTDATE_127901318");
    noRelatedSym_0_0.set(SettlDate_15);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(SettlDate_15.getString());
    FIX::SettlType SettlType_9("STRING_6");
    noRelatedSym_0_0.set(SettlType_9);
    InstrmtMDReqGrp_NoRelatedSym_0.insert(SettlType_9.getString());
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_54;
      FIX::EncodedLegIssuer EncodedLegIssuer_54("DATA_1157847850");
      noLegs_0_1_0.set(EncodedLegIssuer_54);
      InstrumentLeg_54.insert(EncodedLegIssuer_54.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_54(297106162);
      noLegs_0_1_0.set(EncodedLegIssuerLen_54);
      InstrumentLeg_54.insert(EncodedLegIssuerLen_54.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_54("DATA_599479056");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_54);
      InstrumentLeg_54.insert(EncodedLegSecurityDesc_54.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_54(613489723);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_54);
      InstrumentLeg_54.insert(EncodedLegSecurityDescLen_54.getString());
      FIX::LegCFICode LegCFICode_54("STRING_527833467");
      noLegs_0_1_0.set(LegCFICode_54);
      InstrumentLeg_54.insert(LegCFICode_54.getString());
      FIX::LegContractMultiplier LegContractMultiplier_54;
      LegContractMultiplier_54.setString("19166957");
      noLegs_0_1_0.set(LegContractMultiplier_54);
      InstrumentLeg_54.insert(LegContractMultiplier_54.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_54(249179205);
      noLegs_0_1_0.set(LegContractMultiplierUnit_54);
      InstrumentLeg_54.insert(LegContractMultiplierUnit_54.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_54("MONTHYEAR_865311718");
      noLegs_0_1_0.set(LegContractSettlMonth_54);
      InstrumentLeg_54.insert(LegContractSettlMonth_54.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_54("COUNTRY_173815865");
      noLegs_0_1_0.set(LegCountryOfIssue_54);
      InstrumentLeg_54.insert(LegCountryOfIssue_54.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_54("LOCALMKTDATE_927518818");
      noLegs_0_1_0.set(LegCouponPaymentDate_54);
      InstrumentLeg_54.insert(LegCouponPaymentDate_54.getString());
      FIX::LegCouponRate LegCouponRate_54;
      LegCouponRate_54.setString("59.790000");
      noLegs_0_1_0.set(LegCouponRate_54);
      InstrumentLeg_54.insert(LegCouponRate_54.getString());
      FIX::LegCreditRating LegCreditRating_54("STRING_1293780471");
      noLegs_0_1_0.set(LegCreditRating_54);
      InstrumentLeg_54.insert(LegCreditRating_54.getString());
      FIX::LegCurrency LegCurrency_54("CAN");
      noLegs_0_1_0.set(LegCurrency_54);
      InstrumentLeg_54.insert(LegCurrency_54.getString());
      FIX::LegDatedDate LegDatedDate_54("LOCALMKTDATE_89096990");
      noLegs_0_1_0.set(LegDatedDate_54);
      InstrumentLeg_54.insert(LegDatedDate_54.getString());
      FIX::LegExerciseStyle LegExerciseStyle_54(268470752);
      noLegs_0_1_0.set(LegExerciseStyle_54);
      InstrumentLeg_54.insert(LegExerciseStyle_54.getString());
      FIX::LegFactor LegFactor_54;
      LegFactor_54.setString("4871714");
      noLegs_0_1_0.set(LegFactor_54);
      InstrumentLeg_54.insert(LegFactor_54.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_54(127790827);
      noLegs_0_1_0.set(LegFlowScheduleType_54);
      InstrumentLeg_54.insert(LegFlowScheduleType_54.getString());
      FIX::LegInstrRegistry LegInstrRegistry_54("STRING_1991120886");
      noLegs_0_1_0.set(LegInstrRegistry_54);
      InstrumentLeg_54.insert(LegInstrRegistry_54.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_54("LOCALMKTDATE_1345277187");
      noLegs_0_1_0.set(LegInterestAccrualDate_54);
      InstrumentLeg_54.insert(LegInterestAccrualDate_54.getString());
      FIX::LegIssueDate LegIssueDate_54("LOCALMKTDATE_1643423680");
      noLegs_0_1_0.set(LegIssueDate_54);
      InstrumentLeg_54.insert(LegIssueDate_54.getString());
      FIX::LegIssuer LegIssuer_54("STRING_2338495");
      noLegs_0_1_0.set(LegIssuer_54);
      InstrumentLeg_54.insert(LegIssuer_54.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_54("STRING_955145000");
      noLegs_0_1_0.set(LegLocaleOfIssue_54);
      InstrumentLeg_54.insert(LegLocaleOfIssue_54.getString());
      FIX::LegMaturityDate LegMaturityDate_54("LOCALMKTDATE_1184451533");
      noLegs_0_1_0.set(LegMaturityDate_54);
      InstrumentLeg_54.insert(LegMaturityDate_54.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_54("MONTHYEAR_187987914");
      noLegs_0_1_0.set(LegMaturityMonthYear_54);
      InstrumentLeg_54.insert(LegMaturityMonthYear_54.getString());
      FIX::LegMaturityTime LegMaturityTime_54("TZTIMEONLY_1165365356");
      noLegs_0_1_0.set(LegMaturityTime_54);
      InstrumentLeg_54.insert(LegMaturityTime_54.getString());
      FIX::LegOptAttribute LegOptAttribute_54('1');
      noLegs_0_1_0.set(LegOptAttribute_54);
      InstrumentLeg_54.insert(LegOptAttribute_54.getString());
      FIX::LegOptionRatio LegOptionRatio_54;
      LegOptionRatio_54.setString("16877720");
      noLegs_0_1_0.set(LegOptionRatio_54);
      InstrumentLeg_54.insert(LegOptionRatio_54.getString());
      FIX::LegPool LegPool_54("STRING_1293266674");
      noLegs_0_1_0.set(LegPool_54);
      InstrumentLeg_54.insert(LegPool_54.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_54("STRING_1945082096");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_54);
      InstrumentLeg_54.insert(LegPriceUnitOfMeasure_54.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_54;
      LegPriceUnitOfMeasureQty_54.setString("7315579");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_54);
      InstrumentLeg_54.insert(LegPriceUnitOfMeasureQty_54.getString());
      FIX::LegProduct LegProduct_54(303630877);
      noLegs_0_1_0.set(LegProduct_54);
      InstrumentLeg_54.insert(LegProduct_54.getString());
      FIX::LegPutOrCall LegPutOrCall_54(94704610);
      noLegs_0_1_0.set(LegPutOrCall_54);
      InstrumentLeg_54.insert(LegPutOrCall_54.getString());
      FIX::LegRatioQty LegRatioQty_54;
      LegRatioQty_54.setString("13310370");
      noLegs_0_1_0.set(LegRatioQty_54);
      InstrumentLeg_54.insert(LegRatioQty_54.getString());
      FIX::LegRedemptionDate LegRedemptionDate_54("LOCALMKTDATE_917120600");
      noLegs_0_1_0.set(LegRedemptionDate_54);
      InstrumentLeg_54.insert(LegRedemptionDate_54.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_54("STRING_622538078");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_54);
      InstrumentLeg_54.insert(LegRepoCollateralSecurityType_54.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_54;
      LegRepurchaseRate_54.setString("91.600000");
      noLegs_0_1_0.set(LegRepurchaseRate_54);
      InstrumentLeg_54.insert(LegRepurchaseRate_54.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_54(1166299806);
      noLegs_0_1_0.set(LegRepurchaseTerm_54);
      InstrumentLeg_54.insert(LegRepurchaseTerm_54.getString());
      FIX::LegSecurityDesc LegSecurityDesc_54("STRING_1487849796");
      noLegs_0_1_0.set(LegSecurityDesc_54);
      InstrumentLeg_54.insert(LegSecurityDesc_54.getString());
      FIX::LegSecurityExchange LegSecurityExchange_54("EXCHANGE_1274065025");
      noLegs_0_1_0.set(LegSecurityExchange_54);
      InstrumentLeg_54.insert(LegSecurityExchange_54.getString());
      FIX::LegSecurityID LegSecurityID_54("STRING_2093818624");
      noLegs_0_1_0.set(LegSecurityID_54);
      InstrumentLeg_54.insert(LegSecurityID_54.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_54("STRING_1205242127");
      noLegs_0_1_0.set(LegSecurityIDSource_54);
      InstrumentLeg_54.insert(LegSecurityIDSource_54.getString());
      FIX::LegSecuritySubType LegSecuritySubType_54("STRING_420361848");
      noLegs_0_1_0.set(LegSecuritySubType_54);
      InstrumentLeg_54.insert(LegSecuritySubType_54.getString());
      FIX::LegSecurityType LegSecurityType_54("STRING_694437940");
      noLegs_0_1_0.set(LegSecurityType_54);
      InstrumentLeg_54.insert(LegSecurityType_54.getString());
      FIX::LegSide LegSide_54('1');
      noLegs_0_1_0.set(LegSide_54);
      InstrumentLeg_54.insert(LegSide_54.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_54("STRING_509458838");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_54);
      InstrumentLeg_54.insert(LegStateOrProvinceOfIssue_54.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_54("EUR");
      noLegs_0_1_0.set(LegStrikeCurrency_54);
      InstrumentLeg_54.insert(LegStrikeCurrency_54.getString());
      FIX::LegStrikePrice LegStrikePrice_54;
      LegStrikePrice_54.setString("6372496");
      noLegs_0_1_0.set(LegStrikePrice_54);
      InstrumentLeg_54.insert(LegStrikePrice_54.getString());
      FIX::LegSymbol LegSymbol_54("STRING_806545930");
      noLegs_0_1_0.set(LegSymbol_54);
      InstrumentLeg_54.insert(LegSymbol_54.getString());
      FIX::LegSymbolSfx LegSymbolSfx_54("STRING_1523517400");
      noLegs_0_1_0.set(LegSymbolSfx_54);
      InstrumentLeg_54.insert(LegSymbolSfx_54.getString());
      FIX::LegTimeUnit LegTimeUnit_54("STRING_133189698");
      noLegs_0_1_0.set(LegTimeUnit_54);
      InstrumentLeg_54.insert(LegTimeUnit_54.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_54("STRING_808884425");
      noLegs_0_1_0.set(LegUnitOfMeasure_54);
      InstrumentLeg_54.insert(LegUnitOfMeasure_54.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_54;
      LegUnitOfMeasureQty_54.setString("3311787");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_54);
      InstrumentLeg_54.insert(LegUnitOfMeasureQty_54.getString());
      all_values.push_back(InstrumentLeg_54);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_100;
        FIX::LegSecurityAltID LegSecurityAltID_100("STRING_996872339");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_100);
        LegSecAltIDGrp_NoLegSecurityAltID_100.insert(LegSecurityAltID_100.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_100("STRING_1496544109");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_100);
        LegSecAltIDGrp_NoLegSecurityAltID_100.insert(LegSecurityAltIDSource_100.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_100);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_101;
        FIX::LegSecurityAltID LegSecurityAltID_101("STRING_1330631857");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_101);
        LegSecAltIDGrp_NoLegSecurityAltID_101.insert(LegSecurityAltID_101.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_101("STRING_537160732");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_101);
        LegSecAltIDGrp_NoLegSecurityAltID_101.insert(LegSecurityAltIDSource_101.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_101);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_102;
        FIX::LegSecurityAltID LegSecurityAltID_102("STRING_642327135");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_102);
        LegSecAltIDGrp_NoLegSecurityAltID_102.insert(LegSecurityAltID_102.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_102("STRING_1128230305");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_102);
        LegSecAltIDGrp_NoLegSecurityAltID_102.insert(LegSecurityAltIDSource_102.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_102);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_55;
      FIX::EncodedLegIssuer EncodedLegIssuer_55("DATA_1268718698");
      noLegs_0_1_1.set(EncodedLegIssuer_55);
      InstrumentLeg_55.insert(EncodedLegIssuer_55.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_55(945958012);
      noLegs_0_1_1.set(EncodedLegIssuerLen_55);
      InstrumentLeg_55.insert(EncodedLegIssuerLen_55.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_55("DATA_1222934915");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_55);
      InstrumentLeg_55.insert(EncodedLegSecurityDesc_55.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_55(452272073);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_55);
      InstrumentLeg_55.insert(EncodedLegSecurityDescLen_55.getString());
      FIX::LegCFICode LegCFICode_55("STRING_1863078613");
      noLegs_0_1_1.set(LegCFICode_55);
      InstrumentLeg_55.insert(LegCFICode_55.getString());
      FIX::LegContractMultiplier LegContractMultiplier_55;
      LegContractMultiplier_55.setString("18454729");
      noLegs_0_1_1.set(LegContractMultiplier_55);
      InstrumentLeg_55.insert(LegContractMultiplier_55.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_55(1552521233);
      noLegs_0_1_1.set(LegContractMultiplierUnit_55);
      InstrumentLeg_55.insert(LegContractMultiplierUnit_55.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_55("MONTHYEAR_881894771");
      noLegs_0_1_1.set(LegContractSettlMonth_55);
      InstrumentLeg_55.insert(LegContractSettlMonth_55.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_55("COUNTRY_1185839141");
      noLegs_0_1_1.set(LegCountryOfIssue_55);
      InstrumentLeg_55.insert(LegCountryOfIssue_55.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_55("LOCALMKTDATE_679102610");
      noLegs_0_1_1.set(LegCouponPaymentDate_55);
      InstrumentLeg_55.insert(LegCouponPaymentDate_55.getString());
      FIX::LegCouponRate LegCouponRate_55;
      LegCouponRate_55.setString("97.470000");
      noLegs_0_1_1.set(LegCouponRate_55);
      InstrumentLeg_55.insert(LegCouponRate_55.getString());
      FIX::LegCreditRating LegCreditRating_55("STRING_243597620");
      noLegs_0_1_1.set(LegCreditRating_55);
      InstrumentLeg_55.insert(LegCreditRating_55.getString());
      FIX::LegCurrency LegCurrency_55("CAN");
      noLegs_0_1_1.set(LegCurrency_55);
      InstrumentLeg_55.insert(LegCurrency_55.getString());
      FIX::LegDatedDate LegDatedDate_55("LOCALMKTDATE_2082149982");
      noLegs_0_1_1.set(LegDatedDate_55);
      InstrumentLeg_55.insert(LegDatedDate_55.getString());
      FIX::LegExerciseStyle LegExerciseStyle_55(1608923296);
      noLegs_0_1_1.set(LegExerciseStyle_55);
      InstrumentLeg_55.insert(LegExerciseStyle_55.getString());
      FIX::LegFactor LegFactor_55;
      LegFactor_55.setString("3380927");
      noLegs_0_1_1.set(LegFactor_55);
      InstrumentLeg_55.insert(LegFactor_55.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_55(112906547);
      noLegs_0_1_1.set(LegFlowScheduleType_55);
      InstrumentLeg_55.insert(LegFlowScheduleType_55.getString());
      FIX::LegInstrRegistry LegInstrRegistry_55("STRING_98689314");
      noLegs_0_1_1.set(LegInstrRegistry_55);
      InstrumentLeg_55.insert(LegInstrRegistry_55.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_55("LOCALMKTDATE_1144638661");
      noLegs_0_1_1.set(LegInterestAccrualDate_55);
      InstrumentLeg_55.insert(LegInterestAccrualDate_55.getString());
      FIX::LegIssueDate LegIssueDate_55("LOCALMKTDATE_1636423947");
      noLegs_0_1_1.set(LegIssueDate_55);
      InstrumentLeg_55.insert(LegIssueDate_55.getString());
      FIX::LegIssuer LegIssuer_55("STRING_231879012");
      noLegs_0_1_1.set(LegIssuer_55);
      InstrumentLeg_55.insert(LegIssuer_55.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_55("STRING_1953523086");
      noLegs_0_1_1.set(LegLocaleOfIssue_55);
      InstrumentLeg_55.insert(LegLocaleOfIssue_55.getString());
      FIX::LegMaturityDate LegMaturityDate_55("LOCALMKTDATE_1967602700");
      noLegs_0_1_1.set(LegMaturityDate_55);
      InstrumentLeg_55.insert(LegMaturityDate_55.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_55("MONTHYEAR_1549520244");
      noLegs_0_1_1.set(LegMaturityMonthYear_55);
      InstrumentLeg_55.insert(LegMaturityMonthYear_55.getString());
      FIX::LegMaturityTime LegMaturityTime_55("TZTIMEONLY_802911777");
      noLegs_0_1_1.set(LegMaturityTime_55);
      InstrumentLeg_55.insert(LegMaturityTime_55.getString());
      FIX::LegOptAttribute LegOptAttribute_55('1');
      noLegs_0_1_1.set(LegOptAttribute_55);
      InstrumentLeg_55.insert(LegOptAttribute_55.getString());
      FIX::LegOptionRatio LegOptionRatio_55;
      LegOptionRatio_55.setString("7326684");
      noLegs_0_1_1.set(LegOptionRatio_55);
      InstrumentLeg_55.insert(LegOptionRatio_55.getString());
      FIX::LegPool LegPool_55("STRING_1340072510");
      noLegs_0_1_1.set(LegPool_55);
      InstrumentLeg_55.insert(LegPool_55.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_55("STRING_1958990296");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_55);
      InstrumentLeg_55.insert(LegPriceUnitOfMeasure_55.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_55;
      LegPriceUnitOfMeasureQty_55.setString("18608987");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_55);
      InstrumentLeg_55.insert(LegPriceUnitOfMeasureQty_55.getString());
      FIX::LegProduct LegProduct_55(461307560);
      noLegs_0_1_1.set(LegProduct_55);
      InstrumentLeg_55.insert(LegProduct_55.getString());
      FIX::LegPutOrCall LegPutOrCall_55(757464661);
      noLegs_0_1_1.set(LegPutOrCall_55);
      InstrumentLeg_55.insert(LegPutOrCall_55.getString());
      FIX::LegRatioQty LegRatioQty_55;
      LegRatioQty_55.setString("9363500");
      noLegs_0_1_1.set(LegRatioQty_55);
      InstrumentLeg_55.insert(LegRatioQty_55.getString());
      FIX::LegRedemptionDate LegRedemptionDate_55("LOCALMKTDATE_913579633");
      noLegs_0_1_1.set(LegRedemptionDate_55);
      InstrumentLeg_55.insert(LegRedemptionDate_55.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_55("STRING_473059626");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_55);
      InstrumentLeg_55.insert(LegRepoCollateralSecurityType_55.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_55;
      LegRepurchaseRate_55.setString("93.710000");
      noLegs_0_1_1.set(LegRepurchaseRate_55);
      InstrumentLeg_55.insert(LegRepurchaseRate_55.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_55(318617218);
      noLegs_0_1_1.set(LegRepurchaseTerm_55);
      InstrumentLeg_55.insert(LegRepurchaseTerm_55.getString());
      FIX::LegSecurityDesc LegSecurityDesc_55("STRING_1354954397");
      noLegs_0_1_1.set(LegSecurityDesc_55);
      InstrumentLeg_55.insert(LegSecurityDesc_55.getString());
      FIX::LegSecurityExchange LegSecurityExchange_55("EXCHANGE_1820178512");
      noLegs_0_1_1.set(LegSecurityExchange_55);
      InstrumentLeg_55.insert(LegSecurityExchange_55.getString());
      FIX::LegSecurityID LegSecurityID_55("STRING_997719828");
      noLegs_0_1_1.set(LegSecurityID_55);
      InstrumentLeg_55.insert(LegSecurityID_55.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_55("STRING_35700496");
      noLegs_0_1_1.set(LegSecurityIDSource_55);
      InstrumentLeg_55.insert(LegSecurityIDSource_55.getString());
      FIX::LegSecuritySubType LegSecuritySubType_55("STRING_2063776133");
      noLegs_0_1_1.set(LegSecuritySubType_55);
      InstrumentLeg_55.insert(LegSecuritySubType_55.getString());
      FIX::LegSecurityType LegSecurityType_55("STRING_2097184286");
      noLegs_0_1_1.set(LegSecurityType_55);
      InstrumentLeg_55.insert(LegSecurityType_55.getString());
      FIX::LegSide LegSide_55('1');
      noLegs_0_1_1.set(LegSide_55);
      InstrumentLeg_55.insert(LegSide_55.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_55("STRING_1998442467");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_55);
      InstrumentLeg_55.insert(LegStateOrProvinceOfIssue_55.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_55("EUR");
      noLegs_0_1_1.set(LegStrikeCurrency_55);
      InstrumentLeg_55.insert(LegStrikeCurrency_55.getString());
      FIX::LegStrikePrice LegStrikePrice_55;
      LegStrikePrice_55.setString("21113490");
      noLegs_0_1_1.set(LegStrikePrice_55);
      InstrumentLeg_55.insert(LegStrikePrice_55.getString());
      FIX::LegSymbol LegSymbol_55("STRING_1657313249");
      noLegs_0_1_1.set(LegSymbol_55);
      InstrumentLeg_55.insert(LegSymbol_55.getString());
      FIX::LegSymbolSfx LegSymbolSfx_55("STRING_893615929");
      noLegs_0_1_1.set(LegSymbolSfx_55);
      InstrumentLeg_55.insert(LegSymbolSfx_55.getString());
      FIX::LegTimeUnit LegTimeUnit_55("STRING_1600289314");
      noLegs_0_1_1.set(LegTimeUnit_55);
      InstrumentLeg_55.insert(LegTimeUnit_55.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_55("STRING_1889192262");
      noLegs_0_1_1.set(LegUnitOfMeasure_55);
      InstrumentLeg_55.insert(LegUnitOfMeasure_55.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_55;
      LegUnitOfMeasureQty_55.setString("6996553");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_55);
      InstrumentLeg_55.insert(LegUnitOfMeasureQty_55.getString());
      all_values.push_back(InstrumentLeg_55);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_103;
        FIX::LegSecurityAltID LegSecurityAltID_103("STRING_1291228858");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_103);
        LegSecAltIDGrp_NoLegSecurityAltID_103.insert(LegSecurityAltID_103.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_103("STRING_1502567145");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_103);
        LegSecAltIDGrp_NoLegSecurityAltID_103.insert(LegSecurityAltIDSource_103.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_103);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_104;
        FIX::LegSecurityAltID LegSecurityAltID_104("STRING_589587879");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_104);
        LegSecAltIDGrp_NoLegSecurityAltID_104.insert(LegSecurityAltID_104.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_104("STRING_2023897311");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_104);
        LegSecAltIDGrp_NoLegSecurityAltID_104.insert(LegSecurityAltIDSource_104.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_104);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_31;
    FIX::AttachmentPoint AttachmentPoint_31;
    AttachmentPoint_31.setString("60.070000");
    noRelatedSym_0_0.set(AttachmentPoint_31);
    Instrument_31.insert(AttachmentPoint_31.getString());
    FIX::CFICode CFICode_31("STRING_401094528");
    noRelatedSym_0_0.set(CFICode_31);
    Instrument_31.insert(CFICode_31.getString());
    FIX::CPProgram CPProgram_31(2);
    noRelatedSym_0_0.set(CPProgram_31);
    Instrument_31.insert(CPProgram_31.getString());
    FIX::CPRegType CPRegType_31("STRING_1156463567");
    noRelatedSym_0_0.set(CPRegType_31);
    Instrument_31.insert(CPRegType_31.getString());
    FIX::CapPrice CapPrice_31;
    CapPrice_31.setString("11585591");
    noRelatedSym_0_0.set(CapPrice_31);
    Instrument_31.insert(CapPrice_31.getString());
    FIX::ContractMultiplier ContractMultiplier_31;
    ContractMultiplier_31.setString("5261787");
    noRelatedSym_0_0.set(ContractMultiplier_31);
    Instrument_31.insert(ContractMultiplier_31.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_31(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_31);
    Instrument_31.insert(ContractMultiplierUnit_31.getString());
    FIX::ContractSettlMonth ContractSettlMonth_31("MONTHYEAR_1631618815");
    noRelatedSym_0_0.set(ContractSettlMonth_31);
    Instrument_31.insert(ContractSettlMonth_31.getString());
    FIX::CountryOfIssue CountryOfIssue_31("COUNTRY_1160518169");
    noRelatedSym_0_0.set(CountryOfIssue_31);
    Instrument_31.insert(CountryOfIssue_31.getString());
    FIX::CouponPaymentDate CouponPaymentDate_31("LOCALMKTDATE_241176771");
    noRelatedSym_0_0.set(CouponPaymentDate_31);
    Instrument_31.insert(CouponPaymentDate_31.getString());
    FIX::CouponRate CouponRate_31;
    CouponRate_31.setString("95.640000");
    noRelatedSym_0_0.set(CouponRate_31);
    Instrument_31.insert(CouponRate_31.getString());
    FIX::CreditRating CreditRating_31("STRING_833213034");
    noRelatedSym_0_0.set(CreditRating_31);
    Instrument_31.insert(CreditRating_31.getString());
    FIX::DatedDate DatedDate_31("LOCALMKTDATE_1238896600");
    noRelatedSym_0_0.set(DatedDate_31);
    Instrument_31.insert(DatedDate_31.getString());
    FIX::DetachmentPoint DetachmentPoint_31;
    DetachmentPoint_31.setString("0.600000");
    noRelatedSym_0_0.set(DetachmentPoint_31);
    Instrument_31.insert(DetachmentPoint_31.getString());
    FIX::EncodedIssuer EncodedIssuer_31("DATA_749505519");
    noRelatedSym_0_0.set(EncodedIssuer_31);
    Instrument_31.insert(EncodedIssuer_31.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_31(1188597238);
    noRelatedSym_0_0.set(EncodedIssuerLen_31);
    Instrument_31.insert(EncodedIssuerLen_31.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_31("DATA_285674596");
    noRelatedSym_0_0.set(EncodedSecurityDesc_31);
    Instrument_31.insert(EncodedSecurityDesc_31.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_31(600464338);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_31);
    Instrument_31.insert(EncodedSecurityDescLen_31.getString());
    FIX::ExerciseStyle ExerciseStyle_31(1);
    noRelatedSym_0_0.set(ExerciseStyle_31);
    Instrument_31.insert(ExerciseStyle_31.getString());
    FIX::Factor Factor_31;
    Factor_31.setString("346518");
    noRelatedSym_0_0.set(Factor_31);
    Instrument_31.insert(Factor_31.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_31(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_31);
    Instrument_31.insert(FlexProductEligibilityIndicator_31.getString());
    FIX::FlexibleIndicator FlexibleIndicator_31(false);
    noRelatedSym_0_0.set(FlexibleIndicator_31);
    Instrument_31.insert(FlexibleIndicator_31.getString());
    FIX::FloorPrice FloorPrice_31;
    FloorPrice_31.setString("9282677");
    noRelatedSym_0_0.set(FloorPrice_31);
    Instrument_31.insert(FloorPrice_31.getString());
    FIX::FlowScheduleType FlowScheduleType_31(2);
    noRelatedSym_0_0.set(FlowScheduleType_31);
    Instrument_31.insert(FlowScheduleType_31.getString());
    FIX::InstrRegistry InstrRegistry_31("STRING_1998759389");
    noRelatedSym_0_0.set(InstrRegistry_31);
    Instrument_31.insert(InstrRegistry_31.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_31('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_31);
    Instrument_31.insert(InstrmtAssignmentMethod_31.getString());
    FIX::InterestAccrualDate InterestAccrualDate_31("LOCALMKTDATE_1437543738");
    noRelatedSym_0_0.set(InterestAccrualDate_31);
    Instrument_31.insert(InterestAccrualDate_31.getString());
    FIX::IssueDate IssueDate_31("LOCALMKTDATE_1142504599");
    noRelatedSym_0_0.set(IssueDate_31);
    Instrument_31.insert(IssueDate_31.getString());
    FIX::Issuer Issuer_31("STRING_983006657");
    noRelatedSym_0_0.set(Issuer_31);
    Instrument_31.insert(Issuer_31.getString());
    FIX::ListMethod ListMethod_31(0);
    noRelatedSym_0_0.set(ListMethod_31);
    Instrument_31.insert(ListMethod_31.getString());
    FIX::LocaleOfIssue LocaleOfIssue_31("STRING_1018918262");
    noRelatedSym_0_0.set(LocaleOfIssue_31);
    Instrument_31.insert(LocaleOfIssue_31.getString());
    FIX::MaturityDate MaturityDate_31("LOCALMKTDATE_1678162664");
    noRelatedSym_0_0.set(MaturityDate_31);
    Instrument_31.insert(MaturityDate_31.getString());
    FIX::MaturityMonthYear MaturityMonthYear_31("MONTHYEAR_280742498");
    noRelatedSym_0_0.set(MaturityMonthYear_31);
    Instrument_31.insert(MaturityMonthYear_31.getString());
    FIX::MaturityTime MaturityTime_31("TZTIMEONLY_608747035");
    noRelatedSym_0_0.set(MaturityTime_31);
    Instrument_31.insert(MaturityTime_31.getString());
    FIX::MinPriceIncrement MinPriceIncrement_31;
    MinPriceIncrement_31.setString("6871425");
    noRelatedSym_0_0.set(MinPriceIncrement_31);
    Instrument_31.insert(MinPriceIncrement_31.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_31;
    MinPriceIncrementAmount_31.setString("14393016");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_31);
    Instrument_31.insert(MinPriceIncrementAmount_31.getString());
    FIX::NTPositionLimit NTPositionLimit_31(1134925833);
    noRelatedSym_0_0.set(NTPositionLimit_31);
    Instrument_31.insert(NTPositionLimit_31.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_31;
    NotionalPercentageOutstanding_31.setString("21.370000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_31);
    Instrument_31.insert(NotionalPercentageOutstanding_31.getString());
    FIX::OptAttribute OptAttribute_31('9');
    noRelatedSym_0_0.set(OptAttribute_31);
    Instrument_31.insert(OptAttribute_31.getString());
    FIX::OptPayoutAmount OptPayoutAmount_31;
    OptPayoutAmount_31.setString("1479603");
    noRelatedSym_0_0.set(OptPayoutAmount_31);
    Instrument_31.insert(OptPayoutAmount_31.getString());
    FIX::OptPayoutType OptPayoutType_31(3);
    noRelatedSym_0_0.set(OptPayoutType_31);
    Instrument_31.insert(OptPayoutType_31.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_31;
    OriginalNotionalPercentageOutstanding_31.setString("64.180000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_31);
    Instrument_31.insert(OriginalNotionalPercentageOutstanding_31.getString());
    FIX::Pool Pool_31("STRING_981173389");
    noRelatedSym_0_0.set(Pool_31);
    Instrument_31.insert(Pool_31.getString());
    FIX::PositionLimit PositionLimit_31(2089775508);
    noRelatedSym_0_0.set(PositionLimit_31);
    Instrument_31.insert(PositionLimit_31.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_31("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_31);
    Instrument_31.insert(PriceQuoteMethod_31.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_31("STRING_1730678908");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_31);
    Instrument_31.insert(PriceUnitOfMeasure_31.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_31;
    PriceUnitOfMeasureQty_31.setString("11308890");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_31);
    Instrument_31.insert(PriceUnitOfMeasureQty_31.getString());
    FIX::Product Product_33(7);
    noRelatedSym_0_0.set(Product_33);
    Instrument_31.insert(Product_33.getString());
    FIX::ProductComplex ProductComplex_31("STRING_183659598");
    noRelatedSym_0_0.set(ProductComplex_31);
    Instrument_31.insert(ProductComplex_31.getString());
    FIX::PutOrCall PutOrCall_31(0);
    noRelatedSym_0_0.set(PutOrCall_31);
    Instrument_31.insert(PutOrCall_31.getString());
    FIX::RedemptionDate RedemptionDate_31("LOCALMKTDATE_810159291");
    noRelatedSym_0_0.set(RedemptionDate_31);
    Instrument_31.insert(RedemptionDate_31.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_31("STRING_747989304");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_31);
    Instrument_31.insert(RepoCollateralSecurityType_31.getString());
    FIX::RepurchaseRate RepurchaseRate_31;
    RepurchaseRate_31.setString("37.510000");
    noRelatedSym_0_0.set(RepurchaseRate_31);
    Instrument_31.insert(RepurchaseRate_31.getString());
    FIX::RepurchaseTerm RepurchaseTerm_31(1738427084);
    noRelatedSym_0_0.set(RepurchaseTerm_31);
    Instrument_31.insert(RepurchaseTerm_31.getString());
    FIX::RestructuringType RestructuringType_31("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_31);
    Instrument_31.insert(RestructuringType_31.getString());
    FIX::SecurityDesc SecurityDesc_31("STRING_1691469492");
    noRelatedSym_0_0.set(SecurityDesc_31);
    Instrument_31.insert(SecurityDesc_31.getString());
    FIX::SecurityExchange SecurityExchange_31("EXCHANGE_1218866596");
    noRelatedSym_0_0.set(SecurityExchange_31);
    Instrument_31.insert(SecurityExchange_31.getString());
    FIX::SecurityGroup SecurityGroup_31("STRING_55184766");
    noRelatedSym_0_0.set(SecurityGroup_31);
    Instrument_31.insert(SecurityGroup_31.getString());
    FIX::SecurityID SecurityID_31("STRING_686490443");
    noRelatedSym_0_0.set(SecurityID_31);
    Instrument_31.insert(SecurityID_31.getString());
    FIX::SecurityIDSource SecurityIDSource_31("STRING_J");
    noRelatedSym_0_0.set(SecurityIDSource_31);
    Instrument_31.insert(SecurityIDSource_31.getString());
    FIX::SecurityStatus SecurityStatus_31("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_31);
    Instrument_31.insert(SecurityStatus_31.getString());
    FIX::SecuritySubType SecuritySubType_32("STRING_1705408705");
    noRelatedSym_0_0.set(SecuritySubType_32);
    Instrument_31.insert(SecuritySubType_32.getString());
    FIX::SecurityType SecurityType_33("STRING_TCAL");
    noRelatedSym_0_0.set(SecurityType_33);
    Instrument_31.insert(SecurityType_33.getString());
    FIX::Seniority Seniority_31("STRING_SR");
    noRelatedSym_0_0.set(Seniority_31);
    Instrument_31.insert(Seniority_31.getString());
    FIX::SettlMethod SettlMethod_31('C');
    noRelatedSym_0_0.set(SettlMethod_31);
    Instrument_31.insert(SettlMethod_31.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_31("STRING_272211206");
    noRelatedSym_0_0.set(SettleOnOpenFlag_31);
    Instrument_31.insert(SettleOnOpenFlag_31.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_31("STRING_1654876921");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_31);
    Instrument_31.insert(StateOrProvinceOfIssue_31.getString());
    FIX::StrikeCurrency StrikeCurrency_31("EUR");
    noRelatedSym_0_0.set(StrikeCurrency_31);
    Instrument_31.insert(StrikeCurrency_31.getString());
    FIX::StrikeMultiplier StrikeMultiplier_31;
    StrikeMultiplier_31.setString("4308301");
    noRelatedSym_0_0.set(StrikeMultiplier_31);
    Instrument_31.insert(StrikeMultiplier_31.getString());
    FIX::StrikePrice StrikePrice_31;
    StrikePrice_31.setString("14495582");
    noRelatedSym_0_0.set(StrikePrice_31);
    Instrument_31.insert(StrikePrice_31.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_31(3);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_31);
    Instrument_31.insert(StrikePriceBoundaryMethod_31.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_31;
    StrikePriceBoundaryPrecision_31.setString("28.970000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_31);
    Instrument_31.insert(StrikePriceBoundaryPrecision_31.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_31(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_31);
    Instrument_31.insert(StrikePriceDeterminationMethod_31.getString());
    FIX::StrikeValue StrikeValue_31;
    StrikeValue_31.setString("16750841");
    noRelatedSym_0_0.set(StrikeValue_31);
    Instrument_31.insert(StrikeValue_31.getString());
    FIX::Symbol Symbol_31("STRING_535705728");
    noRelatedSym_0_0.set(Symbol_31);
    Instrument_31.insert(Symbol_31.getString());
    FIX::SymbolSfx SymbolSfx_31("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_31);
    Instrument_31.insert(SymbolSfx_31.getString());
    FIX::TimeUnit TimeUnit_31("STRING_Wk");
    noRelatedSym_0_0.set(TimeUnit_31);
    Instrument_31.insert(TimeUnit_31.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_31(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_31);
    Instrument_31.insert(UnderlyingPriceDeterminationMethod_31.getString());
    FIX::UnitOfMeasure UnitOfMeasure_31("STRING_t");
    noRelatedSym_0_0.set(UnitOfMeasure_31);
    Instrument_31.insert(UnitOfMeasure_31.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_31;
    UnitOfMeasureQty_31.setString("2416325");
    noRelatedSym_0_0.set(UnitOfMeasureQty_31);
    Instrument_31.insert(UnitOfMeasureQty_31.getString());
    FIX::ValuationMethod ValuationMethod_31("STRING_FUT");
    noRelatedSym_0_0.set(ValuationMethod_31);
    Instrument_31.insert(ValuationMethod_31.getString());
    all_values.push_back(Instrument_31);

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
      ComplexEventPrice_57.setString("17123158");
      noComplexEvents_0_1_0.set(ComplexEventPrice_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPrice_57.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_57(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceBoundaryMethod_57.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_57;
      ComplexEventPriceBoundaryPrecision_57.setString("21.360000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceBoundaryPrecision_57.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_57(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceTimeType_57.getString());
      FIX::ComplexEventType ComplexEventType_57(1);
      noComplexEvents_0_1_0.set(ComplexEventType_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventType_57.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_57;
      ComplexOptPayoutAmount_57.setString("1648189");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexOptPayoutAmount_57.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_57);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_111;
        FIX::ComplexEventEndDate ComplexEventEndDate_111(FIX::UTCTIMESTAMP(13, 39, 58, 25, 6, 2009));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_111);
        ComplexEventDates_NoComplexEventDates_111.insert(ComplexEventEndDate_111.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_111(FIX::UTCTIMESTAMP(1, 59, 0, 1, 5, 2010));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_111);
        ComplexEventDates_NoComplexEventDates_111.insert(ComplexEventStartDate_111.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_111);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_224;
          FIX::ComplexEventEndTime ComplexEventEndTime_224(FIX::UTCTIMEONLY(16, 1, 31));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_224);
          ComplexEventTimes_NoComplexEventTimes_224.insert(ComplexEventEndTime_224.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_224(FIX::UTCTIMEONLY(13, 49, 29));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_224);
          ComplexEventTimes_NoComplexEventTimes_224.insert(ComplexEventStartTime_224.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_224);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_59;
      FIX::EventDate EventDate_59("LOCALMKTDATE_991062163");
      noEvents_0_1_0.set(EventDate_59);
      EvntGrp_NoEvents_59.insert(EventDate_59.getString());
      FIX::EventPx EventPx_59;
      EventPx_59.setString("9067082");
      noEvents_0_1_0.set(EventPx_59);
      EvntGrp_NoEvents_59.insert(EventPx_59.getString());
      FIX::EventText EventText_59("STRING_1002983912");
      noEvents_0_1_0.set(EventText_59);
      EvntGrp_NoEvents_59.insert(EventText_59.getString());
      FIX::EventTime EventTime_59(FIX::UTCTIMESTAMP(1, 44, 22, 24, 2, 2001));
      noEvents_0_1_0.set(EventTime_59);
      EvntGrp_NoEvents_59.insert(EventTime_59.getString());
      FIX::EventType EventType_59(15);
      noEvents_0_1_0.set(EventType_59);
      EvntGrp_NoEvents_59.insert(EventType_59.getString());
      all_values.push_back(EvntGrp_NoEvents_59);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_60;
      FIX::EventDate EventDate_60("LOCALMKTDATE_779962914");
      noEvents_0_1_1.set(EventDate_60);
      EvntGrp_NoEvents_60.insert(EventDate_60.getString());
      FIX::EventPx EventPx_60;
      EventPx_60.setString("15838911");
      noEvents_0_1_1.set(EventPx_60);
      EvntGrp_NoEvents_60.insert(EventPx_60.getString());
      FIX::EventText EventText_60("STRING_680905738");
      noEvents_0_1_1.set(EventText_60);
      EvntGrp_NoEvents_60.insert(EventText_60.getString());
      FIX::EventTime EventTime_60(FIX::UTCTIMESTAMP(12, 49, 14, 13, 6, 2013));
      noEvents_0_1_1.set(EventTime_60);
      EvntGrp_NoEvents_60.insert(EventTime_60.getString());
      FIX::EventType EventType_60(11);
      noEvents_0_1_1.set(EventType_60);
      EvntGrp_NoEvents_60.insert(EventType_60.getString());
      all_values.push_back(EvntGrp_NoEvents_60);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_61;
      FIX::EventDate EventDate_61("LOCALMKTDATE_2134488962");
      noEvents_0_1_2.set(EventDate_61);
      EvntGrp_NoEvents_61.insert(EventDate_61.getString());
      FIX::EventPx EventPx_61;
      EventPx_61.setString("17356985");
      noEvents_0_1_2.set(EventPx_61);
      EvntGrp_NoEvents_61.insert(EventPx_61.getString());
      FIX::EventText EventText_61("STRING_2067666551");
      noEvents_0_1_2.set(EventText_61);
      EvntGrp_NoEvents_61.insert(EventText_61.getString());
      FIX::EventTime EventTime_61(FIX::UTCTIMESTAMP(2, 4, 7, 0, 6, 2008));
      noEvents_0_1_2.set(EventTime_61);
      EvntGrp_NoEvents_61.insert(EventTime_61.getString());
      FIX::EventType EventType_61(3);
      noEvents_0_1_2.set(EventType_61);
      EvntGrp_NoEvents_61.insert(EventType_61.getString());
      all_values.push_back(EvntGrp_NoEvents_61);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_66;
      FIX::InstrumentPartyID InstrumentPartyID_66("STRING_1336432236");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_66);
      InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyID_66.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_66('9');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_66);
      InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyIDSource_66.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_66(910970569);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_66);
      InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyRole_66.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_66);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140;
        FIX::InstrumentPartySubID InstrumentPartySubID_140("STRING_692300399");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_140);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140.insert(InstrumentPartySubID_140.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_140(1801517402);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_140);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140.insert(InstrumentPartySubIDType_140.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141;
        FIX::InstrumentPartySubID InstrumentPartySubID_141("STRING_542837212");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_141);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141.insert(InstrumentPartySubID_141.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_141(97003266);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_141);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141.insert(InstrumentPartySubIDType_141.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142;
        FIX::InstrumentPartySubID InstrumentPartySubID_142("STRING_433996669");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_142);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142.insert(InstrumentPartySubID_142.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_142(2126728319);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_142);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142.insert(InstrumentPartySubIDType_142.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_67;
      FIX::InstrumentPartyID InstrumentPartyID_67("STRING_777909004");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_67);
      InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyID_67.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_67('2');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_67);
      InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyIDSource_67.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_67(992933739);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_67);
      InstrumentParties_NoInstrumentParties_67.insert(InstrumentPartyRole_67.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_67);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143;
        FIX::InstrumentPartySubID InstrumentPartySubID_143("STRING_574071857");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_143);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubID_143.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_143(1021729372);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_143);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubIDType_143.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144;
        FIX::InstrumentPartySubID InstrumentPartySubID_144("STRING_864241430");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_144);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubID_144.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_144(1666990434);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_144);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubIDType_144.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145;
        FIX::InstrumentPartySubID InstrumentPartySubID_145("STRING_1740715683");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_145);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145.insert(InstrumentPartySubID_145.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_145(851246744);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_145);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145.insert(InstrumentPartySubIDType_145.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_66;
      FIX::SecurityAltID SecurityAltID_66("STRING_1660898586");
      noSecurityAltID_0_1_0.set(SecurityAltID_66);
      SecAltIDGrp_NoSecurityAltID_66.insert(SecurityAltID_66.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_66("STRING_143109542");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_66);
      SecAltIDGrp_NoSecurityAltID_66.insert(SecurityAltIDSource_66.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_66);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_67;
      FIX::SecurityAltID SecurityAltID_67("STRING_1536303006");
      noSecurityAltID_0_1_1.set(SecurityAltID_67);
      SecAltIDGrp_NoSecurityAltID_67.insert(SecurityAltID_67.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_67("STRING_1023910623");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_67);
      SecAltIDGrp_NoSecurityAltID_67.insert(SecurityAltIDSource_67.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_67);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_62;
    FIX::SecurityXML SecurityXML_63("XMLDATA_861202269");
    noRelatedSym_0_0.set(SecurityXML_63);
    FIX::SecurityXMLLen SecurityXMLLen_31(1160892066);
    noRelatedSym_0_0.set(SecurityXMLLen_31);
    FIX::SecurityXMLSchema SecurityXMLSchema_31("STRING_1911578084");
    noRelatedSym_0_0.set(SecurityXMLSchema_31);
    SecurityXML_62.insert(SecurityXMLSchema_31.getString());
    all_values.push_back(SecurityXML_62);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_47;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_47("DATA_1692189348");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingIssuer_47.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_47(1654745809);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingIssuerLen_47.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_47("DATA_1759305748");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingSecurityDesc_47.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_47(453629183);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingSecurityDescLen_47.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_47;
      UnderlyingAdjustedQuantity_47.setString("4182327");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_47);
      UnderlyingInstrument_47.insert(UnderlyingAdjustedQuantity_47.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_47;
      UnderlyingAllocationPercent_47.setString("1.190000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_47);
      UnderlyingInstrument_47.insert(UnderlyingAllocationPercent_47.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_47;
      UnderlyingAttachmentPoint_47.setString("95.830000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_47);
      UnderlyingInstrument_47.insert(UnderlyingAttachmentPoint_47.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_47("STRING_72266485");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_47);
      UnderlyingInstrument_47.insert(UnderlyingCFICode_47.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_47("STRING_1956457331");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_47);
      UnderlyingInstrument_47.insert(UnderlyingCPProgram_47.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_47("STRING_1242932849");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_47);
      UnderlyingInstrument_47.insert(UnderlyingCPRegType_47.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_47;
      UnderlyingCapValue_47.setString("5062631");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_47);
      UnderlyingInstrument_47.insert(UnderlyingCapValue_47.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_47;
      UnderlyingCashAmount_47.setString("19357020");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_47);
      UnderlyingInstrument_47.insert(UnderlyingCashAmount_47.getString());
      FIX::UnderlyingCashType UnderlyingCashType_47("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_47);
      UnderlyingInstrument_47.insert(UnderlyingCashType_47.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_47;
      UnderlyingContractMultiplier_47.setString("7637530");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_47);
      UnderlyingInstrument_47.insert(UnderlyingContractMultiplier_47.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_47(781152094);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_47);
      UnderlyingInstrument_47.insert(UnderlyingContractMultiplierUnit_47.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_47("COUNTRY_891722298");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingCountryOfIssue_47.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_47("LOCALMKTDATE_1337824955");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_47);
      UnderlyingInstrument_47.insert(UnderlyingCouponPaymentDate_47.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_47;
      UnderlyingCouponRate_47.setString("14.670000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_47);
      UnderlyingInstrument_47.insert(UnderlyingCouponRate_47.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_47("STRING_1755963728");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_47);
      UnderlyingInstrument_47.insert(UnderlyingCreditRating_47.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_47("JPY");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_47);
      UnderlyingInstrument_47.insert(UnderlyingCurrency_47.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_47;
      UnderlyingCurrentValue_47.setString("4597268");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_47);
      UnderlyingInstrument_47.insert(UnderlyingCurrentValue_47.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_47;
      UnderlyingDetachmentPoint_47.setString("70.490000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_47);
      UnderlyingInstrument_47.insert(UnderlyingDetachmentPoint_47.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_47;
      UnderlyingDirtyPrice_47.setString("9095284");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_47);
      UnderlyingInstrument_47.insert(UnderlyingDirtyPrice_47.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_47;
      UnderlyingEndPrice_47.setString("6028363");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_47);
      UnderlyingInstrument_47.insert(UnderlyingEndPrice_47.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_47;
      UnderlyingEndValue_47.setString("15013564");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_47);
      UnderlyingInstrument_47.insert(UnderlyingEndValue_47.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_47(1933439063);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_47);
      UnderlyingInstrument_47.insert(UnderlyingExerciseStyle_47.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_47;
      UnderlyingFXRate_47.setString("14640386");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_47);
      UnderlyingInstrument_47.insert(UnderlyingFXRate_47.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_47('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_47);
      UnderlyingInstrument_47.insert(UnderlyingFXRateCalc_47.getString());
      FIX::UnderlyingFactor UnderlyingFactor_47;
      UnderlyingFactor_47.setString("16975334");
      noUnderlyings_0_1_0.set(UnderlyingFactor_47);
      UnderlyingInstrument_47.insert(UnderlyingFactor_47.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_47(1886912147);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_47);
      UnderlyingInstrument_47.insert(UnderlyingFlowScheduleType_47.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_47("STRING_59470527");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_47);
      UnderlyingInstrument_47.insert(UnderlyingInstrRegistry_47.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_47("LOCALMKTDATE_1204795661");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_47);
      UnderlyingInstrument_47.insert(UnderlyingIssueDate_47.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_47("STRING_1498734247");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_47);
      UnderlyingInstrument_47.insert(UnderlyingIssuer_47.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_47("STRING_513099710");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingLocaleOfIssue_47.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_47("LOCALMKTDATE_1623028392");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityDate_47.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_47("MONTHYEAR_764870718");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityMonthYear_47.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_47("TZTIMEONLY_1659029293");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityTime_47.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_47;
      UnderlyingNotionalPercentageOutstanding_47.setString("48.770000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_47);
      UnderlyingInstrument_47.insert(UnderlyingNotionalPercentageOutstanding_47.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_47('5');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_47);
      UnderlyingInstrument_47.insert(UnderlyingOptAttribute_47.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_47;
      UnderlyingOriginalNotionalPercentageOutstanding_47.setString("84.940000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_47);
      UnderlyingInstrument_47.insert(UnderlyingOriginalNotionalPercentageOutstanding_47.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_47("STRING_54074384");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_47);
      UnderlyingInstrument_47.insert(UnderlyingPriceUnitOfMeasure_47.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_47;
      UnderlyingPriceUnitOfMeasureQty_47.setString("3620627");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_47);
      UnderlyingInstrument_47.insert(UnderlyingPriceUnitOfMeasureQty_47.getString());
      FIX::UnderlyingProduct UnderlyingProduct_47(627836699);
      noUnderlyings_0_1_0.set(UnderlyingProduct_47);
      UnderlyingInstrument_47.insert(UnderlyingProduct_47.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_47(817827481);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_47);
      UnderlyingInstrument_47.insert(UnderlyingPutOrCall_47.getString());
      FIX::UnderlyingPx UnderlyingPx_47;
      UnderlyingPx_47.setString("11432148");
      noUnderlyings_0_1_0.set(UnderlyingPx_47);
      UnderlyingInstrument_47.insert(UnderlyingPx_47.getString());
      FIX::UnderlyingQty UnderlyingQty_47;
      UnderlyingQty_47.setString("15195589");
      noUnderlyings_0_1_0.set(UnderlyingQty_47);
      UnderlyingInstrument_47.insert(UnderlyingQty_47.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_47("LOCALMKTDATE_8168788");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_47);
      UnderlyingInstrument_47.insert(UnderlyingRedemptionDate_47.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_47("STRING_798612670");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_47);
      UnderlyingInstrument_47.insert(UnderlyingRepoCollateralSecurityType_47.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_47;
      UnderlyingRepurchaseRate_47.setString("90.780000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_47);
      UnderlyingInstrument_47.insert(UnderlyingRepurchaseRate_47.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_47(865500530);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_47);
      UnderlyingInstrument_47.insert(UnderlyingRepurchaseTerm_47.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_47("STRING_47242524");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_47);
      UnderlyingInstrument_47.insert(UnderlyingRestructuringType_47.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_47("STRING_1587765903");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityDesc_47.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_47("EXCHANGE_830553931");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityExchange_47.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_47("STRING_956770965");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityID_47.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_47("STRING_43118622");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityIDSource_47.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_47("STRING_184426691");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_47);
      UnderlyingInstrument_47.insert(UnderlyingSecuritySubType_47.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_47("STRING_742726380");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityType_47.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_47("STRING_1507157258");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_47);
      UnderlyingInstrument_47.insert(UnderlyingSeniority_47.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_47("STRING_699191518");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_47);
      UnderlyingInstrument_47.insert(UnderlyingSettlMethod_47.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_47(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_47);
      UnderlyingInstrument_47.insert(UnderlyingSettlementType_47.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_47;
      UnderlyingStartValue_47.setString("12465857");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_47);
      UnderlyingInstrument_47.insert(UnderlyingStartValue_47.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_47("STRING_758662045");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingStateOrProvinceOfIssue_47.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_47("CAN");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_47);
      UnderlyingInstrument_47.insert(UnderlyingStrikeCurrency_47.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_47;
      UnderlyingStrikePrice_47.setString("12717617");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_47);
      UnderlyingInstrument_47.insert(UnderlyingStrikePrice_47.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_47("STRING_973116637");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_47);
      UnderlyingInstrument_47.insert(UnderlyingSymbol_47.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_47("STRING_1362707075");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_47);
      UnderlyingInstrument_47.insert(UnderlyingSymbolSfx_47.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_47("STRING_783307401");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_47);
      UnderlyingInstrument_47.insert(UnderlyingTimeUnit_47.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_47("STRING_520927866");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_47);
      UnderlyingInstrument_47.insert(UnderlyingUnitOfMeasure_47.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_47;
      UnderlyingUnitOfMeasureQty_47.setString("19365514");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_47);
      UnderlyingInstrument_47.insert(UnderlyingUnitOfMeasureQty_47.getString());
      all_values.push_back(UnderlyingInstrument_47);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_98;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_98("STRING_575002250");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_98);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_98.insert(UnderlyingSecurityAltID_98.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_98("STRING_151130586");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_98);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_98.insert(UnderlyingSecurityAltIDSource_98.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_98);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_99;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_99("STRING_18138947");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_99);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_99.insert(UnderlyingSecurityAltID_99.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_99("STRING_1392829732");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_99);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_99.insert(UnderlyingSecurityAltIDSource_99.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_99);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_83;
        FIX::UnderlyingStipType UnderlyingStipType_83("STRING_1537697944");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_83);
        UnderlyingStipulations_NoUnderlyingStips_83.insert(UnderlyingStipType_83.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_83("STRING_1400998520");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_83);
        UnderlyingStipulations_NoUnderlyingStips_83.insert(UnderlyingStipValue_83.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_83);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_84;
        FIX::UnderlyingStipType UnderlyingStipType_84("STRING_2092958108");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_84);
        UnderlyingStipulations_NoUnderlyingStips_84.insert(UnderlyingStipType_84.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_84("STRING_518253374");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_84);
        UnderlyingStipulations_NoUnderlyingStips_84.insert(UnderlyingStipValue_84.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_84);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_100;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_100("STRING_2140200633");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_100);
        UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyID_100.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_100('2');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_100);
        UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyIDSource_100.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_100(949569334);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_100);
        UndlyInstrumentParties_NoUndlyInstrumentParties_100.insert(UnderlyingInstrumentPartyRole_100.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_100);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_198("STRING_1654251");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_198);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198.insert(UnderlyingInstrumentPartySubID_198.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_198(1133996025);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_198);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198.insert(UnderlyingInstrumentPartySubIDType_198.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_199("STRING_1692214330");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_199);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199.insert(UnderlyingInstrumentPartySubID_199.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_199(1508811509);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_199);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199.insert(UnderlyingInstrumentPartySubIDType_199.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_101;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_101("STRING_1833187543");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_101);
        UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyID_101.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_101('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_101);
        UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyIDSource_101.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_101(607913619);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_101);
        UndlyInstrumentParties_NoUndlyInstrumentParties_101.insert(UnderlyingInstrumentPartyRole_101.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_101);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_200("STRING_1335078807");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_200);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200.insert(UnderlyingInstrumentPartySubID_200.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_200(1205749976);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_200);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200.insert(UnderlyingInstrumentPartySubIDType_200.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_102;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_102("STRING_1716127696");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_102);
        UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyID_102.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_102('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_102);
        UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyIDSource_102.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_102(420973403);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_102);
        UndlyInstrumentParties_NoUndlyInstrumentParties_102.insert(UnderlyingInstrumentPartyRole_102.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_102);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_201("STRING_681639663");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_201);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201.insert(UnderlyingInstrumentPartySubID_201.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_201(210041233);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_201);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201.insert(UnderlyingInstrumentPartySubIDType_201.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_201);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_202("STRING_1889737344");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_202);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202.insert(UnderlyingInstrumentPartySubID_202.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_202(1256641913);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_202);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202.insert(UnderlyingInstrumentPartySubIDType_202.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_203("STRING_361171819");
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubID_203);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203.insert(UnderlyingInstrumentPartySubID_203.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_203(1907876291);
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_203);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203.insert(UnderlyingInstrumentPartySubIDType_203.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_203);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_2);
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
    FIX::Currency Currency_25("CAN");
    noRelatedSym_0_1.set(Currency_25);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(Currency_25.getString());
    FIX::MDEntrySize MDEntrySize_2;
    MDEntrySize_2.setString("12980905");
    noRelatedSym_0_1.set(MDEntrySize_2);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(MDEntrySize_2.getString());
    FIX::MDStreamID MDStreamID_2("STRING_1902986518");
    noRelatedSym_0_1.set(MDStreamID_2);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(MDStreamID_2.getString());
    FIX::QuoteType QuoteType_1(2);
    noRelatedSym_0_1.set(QuoteType_1);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(QuoteType_1.getString());
    FIX::SettlDate SettlDate_16("LOCALMKTDATE_1816343962");
    noRelatedSym_0_1.set(SettlDate_16);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(SettlDate_16.getString());
    FIX::SettlType SettlType_10("STRING_0");
    noRelatedSym_0_1.set(SettlType_10);
    InstrmtMDReqGrp_NoRelatedSym_1.insert(SettlType_10.getString());
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_56;
      FIX::EncodedLegIssuer EncodedLegIssuer_56("DATA_1774879592");
      noLegs_1_1_0.set(EncodedLegIssuer_56);
      InstrumentLeg_56.insert(EncodedLegIssuer_56.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_56(824087606);
      noLegs_1_1_0.set(EncodedLegIssuerLen_56);
      InstrumentLeg_56.insert(EncodedLegIssuerLen_56.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_56("DATA_395713005");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_56);
      InstrumentLeg_56.insert(EncodedLegSecurityDesc_56.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_56(1776533843);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_56);
      InstrumentLeg_56.insert(EncodedLegSecurityDescLen_56.getString());
      FIX::LegCFICode LegCFICode_56("STRING_1958083632");
      noLegs_1_1_0.set(LegCFICode_56);
      InstrumentLeg_56.insert(LegCFICode_56.getString());
      FIX::LegContractMultiplier LegContractMultiplier_56;
      LegContractMultiplier_56.setString("20879273");
      noLegs_1_1_0.set(LegContractMultiplier_56);
      InstrumentLeg_56.insert(LegContractMultiplier_56.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_56(1137861705);
      noLegs_1_1_0.set(LegContractMultiplierUnit_56);
      InstrumentLeg_56.insert(LegContractMultiplierUnit_56.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_56("MONTHYEAR_1643787527");
      noLegs_1_1_0.set(LegContractSettlMonth_56);
      InstrumentLeg_56.insert(LegContractSettlMonth_56.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_56("COUNTRY_1925434250");
      noLegs_1_1_0.set(LegCountryOfIssue_56);
      InstrumentLeg_56.insert(LegCountryOfIssue_56.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_56("LOCALMKTDATE_1745775324");
      noLegs_1_1_0.set(LegCouponPaymentDate_56);
      InstrumentLeg_56.insert(LegCouponPaymentDate_56.getString());
      FIX::LegCouponRate LegCouponRate_56;
      LegCouponRate_56.setString("34.680000");
      noLegs_1_1_0.set(LegCouponRate_56);
      InstrumentLeg_56.insert(LegCouponRate_56.getString());
      FIX::LegCreditRating LegCreditRating_56("STRING_1113029409");
      noLegs_1_1_0.set(LegCreditRating_56);
      InstrumentLeg_56.insert(LegCreditRating_56.getString());
      FIX::LegCurrency LegCurrency_56("GBP");
      noLegs_1_1_0.set(LegCurrency_56);
      InstrumentLeg_56.insert(LegCurrency_56.getString());
      FIX::LegDatedDate LegDatedDate_56("LOCALMKTDATE_1273741206");
      noLegs_1_1_0.set(LegDatedDate_56);
      InstrumentLeg_56.insert(LegDatedDate_56.getString());
      FIX::LegExerciseStyle LegExerciseStyle_56(1225015055);
      noLegs_1_1_0.set(LegExerciseStyle_56);
      InstrumentLeg_56.insert(LegExerciseStyle_56.getString());
      FIX::LegFactor LegFactor_56;
      LegFactor_56.setString("20087489");
      noLegs_1_1_0.set(LegFactor_56);
      InstrumentLeg_56.insert(LegFactor_56.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_56(1955380869);
      noLegs_1_1_0.set(LegFlowScheduleType_56);
      InstrumentLeg_56.insert(LegFlowScheduleType_56.getString());
      FIX::LegInstrRegistry LegInstrRegistry_56("STRING_1435056288");
      noLegs_1_1_0.set(LegInstrRegistry_56);
      InstrumentLeg_56.insert(LegInstrRegistry_56.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_56("LOCALMKTDATE_1751002661");
      noLegs_1_1_0.set(LegInterestAccrualDate_56);
      InstrumentLeg_56.insert(LegInterestAccrualDate_56.getString());
      FIX::LegIssueDate LegIssueDate_56("LOCALMKTDATE_1064539134");
      noLegs_1_1_0.set(LegIssueDate_56);
      InstrumentLeg_56.insert(LegIssueDate_56.getString());
      FIX::LegIssuer LegIssuer_56("STRING_1796228108");
      noLegs_1_1_0.set(LegIssuer_56);
      InstrumentLeg_56.insert(LegIssuer_56.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_56("STRING_1511395305");
      noLegs_1_1_0.set(LegLocaleOfIssue_56);
      InstrumentLeg_56.insert(LegLocaleOfIssue_56.getString());
      FIX::LegMaturityDate LegMaturityDate_56("LOCALMKTDATE_1566527132");
      noLegs_1_1_0.set(LegMaturityDate_56);
      InstrumentLeg_56.insert(LegMaturityDate_56.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_56("MONTHYEAR_1304261717");
      noLegs_1_1_0.set(LegMaturityMonthYear_56);
      InstrumentLeg_56.insert(LegMaturityMonthYear_56.getString());
      FIX::LegMaturityTime LegMaturityTime_56("TZTIMEONLY_662002245");
      noLegs_1_1_0.set(LegMaturityTime_56);
      InstrumentLeg_56.insert(LegMaturityTime_56.getString());
      FIX::LegOptAttribute LegOptAttribute_56('1');
      noLegs_1_1_0.set(LegOptAttribute_56);
      InstrumentLeg_56.insert(LegOptAttribute_56.getString());
      FIX::LegOptionRatio LegOptionRatio_56;
      LegOptionRatio_56.setString("7577697");
      noLegs_1_1_0.set(LegOptionRatio_56);
      InstrumentLeg_56.insert(LegOptionRatio_56.getString());
      FIX::LegPool LegPool_56("STRING_330862559");
      noLegs_1_1_0.set(LegPool_56);
      InstrumentLeg_56.insert(LegPool_56.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_56("STRING_1196548274");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_56);
      InstrumentLeg_56.insert(LegPriceUnitOfMeasure_56.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_56;
      LegPriceUnitOfMeasureQty_56.setString("2039948");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_56);
      InstrumentLeg_56.insert(LegPriceUnitOfMeasureQty_56.getString());
      FIX::LegProduct LegProduct_56(2105742151);
      noLegs_1_1_0.set(LegProduct_56);
      InstrumentLeg_56.insert(LegProduct_56.getString());
      FIX::LegPutOrCall LegPutOrCall_56(2020635881);
      noLegs_1_1_0.set(LegPutOrCall_56);
      InstrumentLeg_56.insert(LegPutOrCall_56.getString());
      FIX::LegRatioQty LegRatioQty_56;
      LegRatioQty_56.setString("5997078");
      noLegs_1_1_0.set(LegRatioQty_56);
      InstrumentLeg_56.insert(LegRatioQty_56.getString());
      FIX::LegRedemptionDate LegRedemptionDate_56("LOCALMKTDATE_1734792347");
      noLegs_1_1_0.set(LegRedemptionDate_56);
      InstrumentLeg_56.insert(LegRedemptionDate_56.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_56("STRING_1831235865");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_56);
      InstrumentLeg_56.insert(LegRepoCollateralSecurityType_56.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_56;
      LegRepurchaseRate_56.setString("15.350000");
      noLegs_1_1_0.set(LegRepurchaseRate_56);
      InstrumentLeg_56.insert(LegRepurchaseRate_56.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_56(725170404);
      noLegs_1_1_0.set(LegRepurchaseTerm_56);
      InstrumentLeg_56.insert(LegRepurchaseTerm_56.getString());
      FIX::LegSecurityDesc LegSecurityDesc_56("STRING_1327539744");
      noLegs_1_1_0.set(LegSecurityDesc_56);
      InstrumentLeg_56.insert(LegSecurityDesc_56.getString());
      FIX::LegSecurityExchange LegSecurityExchange_56("EXCHANGE_318102137");
      noLegs_1_1_0.set(LegSecurityExchange_56);
      InstrumentLeg_56.insert(LegSecurityExchange_56.getString());
      FIX::LegSecurityID LegSecurityID_56("STRING_323462080");
      noLegs_1_1_0.set(LegSecurityID_56);
      InstrumentLeg_56.insert(LegSecurityID_56.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_56("STRING_1268209564");
      noLegs_1_1_0.set(LegSecurityIDSource_56);
      InstrumentLeg_56.insert(LegSecurityIDSource_56.getString());
      FIX::LegSecuritySubType LegSecuritySubType_56("STRING_1431131546");
      noLegs_1_1_0.set(LegSecuritySubType_56);
      InstrumentLeg_56.insert(LegSecuritySubType_56.getString());
      FIX::LegSecurityType LegSecurityType_56("STRING_1127503732");
      noLegs_1_1_0.set(LegSecurityType_56);
      InstrumentLeg_56.insert(LegSecurityType_56.getString());
      FIX::LegSide LegSide_56('7');
      noLegs_1_1_0.set(LegSide_56);
      InstrumentLeg_56.insert(LegSide_56.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_56("STRING_557389104");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_56);
      InstrumentLeg_56.insert(LegStateOrProvinceOfIssue_56.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_56("CHF");
      noLegs_1_1_0.set(LegStrikeCurrency_56);
      InstrumentLeg_56.insert(LegStrikeCurrency_56.getString());
      FIX::LegStrikePrice LegStrikePrice_56;
      LegStrikePrice_56.setString("3652863");
      noLegs_1_1_0.set(LegStrikePrice_56);
      InstrumentLeg_56.insert(LegStrikePrice_56.getString());
      FIX::LegSymbol LegSymbol_56("STRING_1640091428");
      noLegs_1_1_0.set(LegSymbol_56);
      InstrumentLeg_56.insert(LegSymbol_56.getString());
      FIX::LegSymbolSfx LegSymbolSfx_56("STRING_242307763");
      noLegs_1_1_0.set(LegSymbolSfx_56);
      InstrumentLeg_56.insert(LegSymbolSfx_56.getString());
      FIX::LegTimeUnit LegTimeUnit_56("STRING_1429825460");
      noLegs_1_1_0.set(LegTimeUnit_56);
      InstrumentLeg_56.insert(LegTimeUnit_56.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_56("STRING_1288835888");
      noLegs_1_1_0.set(LegUnitOfMeasure_56);
      InstrumentLeg_56.insert(LegUnitOfMeasure_56.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_56;
      LegUnitOfMeasureQty_56.setString("17537030");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_56);
      InstrumentLeg_56.insert(LegUnitOfMeasureQty_56.getString());
      all_values.push_back(InstrumentLeg_56);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_105;
        FIX::LegSecurityAltID LegSecurityAltID_105("STRING_445613957");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_105);
        LegSecAltIDGrp_NoLegSecurityAltID_105.insert(LegSecurityAltID_105.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_105("STRING_268221665");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_105);
        LegSecAltIDGrp_NoLegSecurityAltID_105.insert(LegSecurityAltIDSource_105.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_105);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_106;
        FIX::LegSecurityAltID LegSecurityAltID_106("STRING_23415298");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_106);
        LegSecAltIDGrp_NoLegSecurityAltID_106.insert(LegSecurityAltID_106.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_106("STRING_1203383745");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_106);
        LegSecAltIDGrp_NoLegSecurityAltID_106.insert(LegSecurityAltIDSource_106.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_106);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_107;
        FIX::LegSecurityAltID LegSecurityAltID_107("STRING_599084224");
        noLegSecurityAltID_1_0_2_2.set(LegSecurityAltID_107);
        LegSecAltIDGrp_NoLegSecurityAltID_107.insert(LegSecurityAltID_107.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_107("STRING_1219963572");
        noLegSecurityAltID_1_0_2_2.set(LegSecurityAltIDSource_107);
        LegSecAltIDGrp_NoLegSecurityAltID_107.insert(LegSecurityAltIDSource_107.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_107);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_57;
      FIX::EncodedLegIssuer EncodedLegIssuer_57("DATA_1407378587");
      noLegs_1_1_1.set(EncodedLegIssuer_57);
      InstrumentLeg_57.insert(EncodedLegIssuer_57.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_57(557342728);
      noLegs_1_1_1.set(EncodedLegIssuerLen_57);
      InstrumentLeg_57.insert(EncodedLegIssuerLen_57.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_57("DATA_1093115805");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_57);
      InstrumentLeg_57.insert(EncodedLegSecurityDesc_57.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_57(2007086435);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_57);
      InstrumentLeg_57.insert(EncodedLegSecurityDescLen_57.getString());
      FIX::LegCFICode LegCFICode_57("STRING_144651427");
      noLegs_1_1_1.set(LegCFICode_57);
      InstrumentLeg_57.insert(LegCFICode_57.getString());
      FIX::LegContractMultiplier LegContractMultiplier_57;
      LegContractMultiplier_57.setString("7768680");
      noLegs_1_1_1.set(LegContractMultiplier_57);
      InstrumentLeg_57.insert(LegContractMultiplier_57.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_57(399754322);
      noLegs_1_1_1.set(LegContractMultiplierUnit_57);
      InstrumentLeg_57.insert(LegContractMultiplierUnit_57.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_57("MONTHYEAR_869821831");
      noLegs_1_1_1.set(LegContractSettlMonth_57);
      InstrumentLeg_57.insert(LegContractSettlMonth_57.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_57("COUNTRY_2104407767");
      noLegs_1_1_1.set(LegCountryOfIssue_57);
      InstrumentLeg_57.insert(LegCountryOfIssue_57.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_57("LOCALMKTDATE_717856459");
      noLegs_1_1_1.set(LegCouponPaymentDate_57);
      InstrumentLeg_57.insert(LegCouponPaymentDate_57.getString());
      FIX::LegCouponRate LegCouponRate_57;
      LegCouponRate_57.setString("39.110000");
      noLegs_1_1_1.set(LegCouponRate_57);
      InstrumentLeg_57.insert(LegCouponRate_57.getString());
      FIX::LegCreditRating LegCreditRating_57("STRING_1225133683");
      noLegs_1_1_1.set(LegCreditRating_57);
      InstrumentLeg_57.insert(LegCreditRating_57.getString());
      FIX::LegCurrency LegCurrency_57("EUR");
      noLegs_1_1_1.set(LegCurrency_57);
      InstrumentLeg_57.insert(LegCurrency_57.getString());
      FIX::LegDatedDate LegDatedDate_57("LOCALMKTDATE_2002657116");
      noLegs_1_1_1.set(LegDatedDate_57);
      InstrumentLeg_57.insert(LegDatedDate_57.getString());
      FIX::LegExerciseStyle LegExerciseStyle_57(558893462);
      noLegs_1_1_1.set(LegExerciseStyle_57);
      InstrumentLeg_57.insert(LegExerciseStyle_57.getString());
      FIX::LegFactor LegFactor_57;
      LegFactor_57.setString("3783391");
      noLegs_1_1_1.set(LegFactor_57);
      InstrumentLeg_57.insert(LegFactor_57.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_57(493962217);
      noLegs_1_1_1.set(LegFlowScheduleType_57);
      InstrumentLeg_57.insert(LegFlowScheduleType_57.getString());
      FIX::LegInstrRegistry LegInstrRegistry_57("STRING_924179787");
      noLegs_1_1_1.set(LegInstrRegistry_57);
      InstrumentLeg_57.insert(LegInstrRegistry_57.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_57("LOCALMKTDATE_2018430562");
      noLegs_1_1_1.set(LegInterestAccrualDate_57);
      InstrumentLeg_57.insert(LegInterestAccrualDate_57.getString());
      FIX::LegIssueDate LegIssueDate_57("LOCALMKTDATE_736269980");
      noLegs_1_1_1.set(LegIssueDate_57);
      InstrumentLeg_57.insert(LegIssueDate_57.getString());
      FIX::LegIssuer LegIssuer_57("STRING_206521599");
      noLegs_1_1_1.set(LegIssuer_57);
      InstrumentLeg_57.insert(LegIssuer_57.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_57("STRING_1159782802");
      noLegs_1_1_1.set(LegLocaleOfIssue_57);
      InstrumentLeg_57.insert(LegLocaleOfIssue_57.getString());
      FIX::LegMaturityDate LegMaturityDate_57("LOCALMKTDATE_342489400");
      noLegs_1_1_1.set(LegMaturityDate_57);
      InstrumentLeg_57.insert(LegMaturityDate_57.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_57("MONTHYEAR_1055390543");
      noLegs_1_1_1.set(LegMaturityMonthYear_57);
      InstrumentLeg_57.insert(LegMaturityMonthYear_57.getString());
      FIX::LegMaturityTime LegMaturityTime_57("TZTIMEONLY_1605396760");
      noLegs_1_1_1.set(LegMaturityTime_57);
      InstrumentLeg_57.insert(LegMaturityTime_57.getString());
      FIX::LegOptAttribute LegOptAttribute_57('6');
      noLegs_1_1_1.set(LegOptAttribute_57);
      InstrumentLeg_57.insert(LegOptAttribute_57.getString());
      FIX::LegOptionRatio LegOptionRatio_57;
      LegOptionRatio_57.setString("10788058");
      noLegs_1_1_1.set(LegOptionRatio_57);
      InstrumentLeg_57.insert(LegOptionRatio_57.getString());
      FIX::LegPool LegPool_57("STRING_661296857");
      noLegs_1_1_1.set(LegPool_57);
      InstrumentLeg_57.insert(LegPool_57.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_57("STRING_1209795290");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_57);
      InstrumentLeg_57.insert(LegPriceUnitOfMeasure_57.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_57;
      LegPriceUnitOfMeasureQty_57.setString("1512857");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_57);
      InstrumentLeg_57.insert(LegPriceUnitOfMeasureQty_57.getString());
      FIX::LegProduct LegProduct_57(2068675444);
      noLegs_1_1_1.set(LegProduct_57);
      InstrumentLeg_57.insert(LegProduct_57.getString());
      FIX::LegPutOrCall LegPutOrCall_57(1767138018);
      noLegs_1_1_1.set(LegPutOrCall_57);
      InstrumentLeg_57.insert(LegPutOrCall_57.getString());
      FIX::LegRatioQty LegRatioQty_57;
      LegRatioQty_57.setString("12444015");
      noLegs_1_1_1.set(LegRatioQty_57);
      InstrumentLeg_57.insert(LegRatioQty_57.getString());
      FIX::LegRedemptionDate LegRedemptionDate_57("LOCALMKTDATE_1928278231");
      noLegs_1_1_1.set(LegRedemptionDate_57);
      InstrumentLeg_57.insert(LegRedemptionDate_57.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_57("STRING_1911789445");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_57);
      InstrumentLeg_57.insert(LegRepoCollateralSecurityType_57.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_57;
      LegRepurchaseRate_57.setString("95.940000");
      noLegs_1_1_1.set(LegRepurchaseRate_57);
      InstrumentLeg_57.insert(LegRepurchaseRate_57.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_57(180548905);
      noLegs_1_1_1.set(LegRepurchaseTerm_57);
      InstrumentLeg_57.insert(LegRepurchaseTerm_57.getString());
      FIX::LegSecurityDesc LegSecurityDesc_57("STRING_634127628");
      noLegs_1_1_1.set(LegSecurityDesc_57);
      InstrumentLeg_57.insert(LegSecurityDesc_57.getString());
      FIX::LegSecurityExchange LegSecurityExchange_57("EXCHANGE_1978193713");
      noLegs_1_1_1.set(LegSecurityExchange_57);
      InstrumentLeg_57.insert(LegSecurityExchange_57.getString());
      FIX::LegSecurityID LegSecurityID_57("STRING_898405364");
      noLegs_1_1_1.set(LegSecurityID_57);
      InstrumentLeg_57.insert(LegSecurityID_57.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_57("STRING_1827411539");
      noLegs_1_1_1.set(LegSecurityIDSource_57);
      InstrumentLeg_57.insert(LegSecurityIDSource_57.getString());
      FIX::LegSecuritySubType LegSecuritySubType_57("STRING_1055843748");
      noLegs_1_1_1.set(LegSecuritySubType_57);
      InstrumentLeg_57.insert(LegSecuritySubType_57.getString());
      FIX::LegSecurityType LegSecurityType_57("STRING_899909722");
      noLegs_1_1_1.set(LegSecurityType_57);
      InstrumentLeg_57.insert(LegSecurityType_57.getString());
      FIX::LegSide LegSide_57('2');
      noLegs_1_1_1.set(LegSide_57);
      InstrumentLeg_57.insert(LegSide_57.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_57("STRING_911017216");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_57);
      InstrumentLeg_57.insert(LegStateOrProvinceOfIssue_57.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_57("USD");
      noLegs_1_1_1.set(LegStrikeCurrency_57);
      InstrumentLeg_57.insert(LegStrikeCurrency_57.getString());
      FIX::LegStrikePrice LegStrikePrice_57;
      LegStrikePrice_57.setString("14049794");
      noLegs_1_1_1.set(LegStrikePrice_57);
      InstrumentLeg_57.insert(LegStrikePrice_57.getString());
      FIX::LegSymbol LegSymbol_57("STRING_235499323");
      noLegs_1_1_1.set(LegSymbol_57);
      InstrumentLeg_57.insert(LegSymbol_57.getString());
      FIX::LegSymbolSfx LegSymbolSfx_57("STRING_102517935");
      noLegs_1_1_1.set(LegSymbolSfx_57);
      InstrumentLeg_57.insert(LegSymbolSfx_57.getString());
      FIX::LegTimeUnit LegTimeUnit_57("STRING_2141249414");
      noLegs_1_1_1.set(LegTimeUnit_57);
      InstrumentLeg_57.insert(LegTimeUnit_57.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_57("STRING_442020923");
      noLegs_1_1_1.set(LegUnitOfMeasure_57);
      InstrumentLeg_57.insert(LegUnitOfMeasure_57.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_57;
      LegUnitOfMeasureQty_57.setString("12623007");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_57);
      InstrumentLeg_57.insert(LegUnitOfMeasureQty_57.getString());
      all_values.push_back(InstrumentLeg_57);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_108;
        FIX::LegSecurityAltID LegSecurityAltID_108("STRING_1497411466");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_108);
        LegSecAltIDGrp_NoLegSecurityAltID_108.insert(LegSecurityAltID_108.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_108("STRING_720213849");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_108);
        LegSecAltIDGrp_NoLegSecurityAltID_108.insert(LegSecurityAltIDSource_108.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_108);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_109;
        FIX::LegSecurityAltID LegSecurityAltID_109("STRING_946966232");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_109);
        LegSecAltIDGrp_NoLegSecurityAltID_109.insert(LegSecurityAltID_109.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_109("STRING_428733660");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_109);
        LegSecAltIDGrp_NoLegSecurityAltID_109.insert(LegSecurityAltIDSource_109.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_109);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_110;
        FIX::LegSecurityAltID LegSecurityAltID_110("STRING_1381510706");
        noLegSecurityAltID_1_1_2_2.set(LegSecurityAltID_110);
        LegSecAltIDGrp_NoLegSecurityAltID_110.insert(LegSecurityAltID_110.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_110("STRING_9277874");
        noLegSecurityAltID_1_1_2_2.set(LegSecurityAltIDSource_110);
        LegSecAltIDGrp_NoLegSecurityAltID_110.insert(LegSecurityAltIDSource_110.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_110);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_32;
    FIX::AttachmentPoint AttachmentPoint_32;
    AttachmentPoint_32.setString("94.260000");
    noRelatedSym_0_1.set(AttachmentPoint_32);
    Instrument_32.insert(AttachmentPoint_32.getString());
    FIX::CFICode CFICode_32("STRING_1302702503");
    noRelatedSym_0_1.set(CFICode_32);
    Instrument_32.insert(CFICode_32.getString());
    FIX::CPProgram CPProgram_32(99);
    noRelatedSym_0_1.set(CPProgram_32);
    Instrument_32.insert(CPProgram_32.getString());
    FIX::CPRegType CPRegType_32("STRING_1824420997");
    noRelatedSym_0_1.set(CPRegType_32);
    Instrument_32.insert(CPRegType_32.getString());
    FIX::CapPrice CapPrice_32;
    CapPrice_32.setString("10834970");
    noRelatedSym_0_1.set(CapPrice_32);
    Instrument_32.insert(CapPrice_32.getString());
    FIX::ContractMultiplier ContractMultiplier_32;
    ContractMultiplier_32.setString("15407216");
    noRelatedSym_0_1.set(ContractMultiplier_32);
    Instrument_32.insert(ContractMultiplier_32.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_32(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_32);
    Instrument_32.insert(ContractMultiplierUnit_32.getString());
    FIX::ContractSettlMonth ContractSettlMonth_32("MONTHYEAR_1264045992");
    noRelatedSym_0_1.set(ContractSettlMonth_32);
    Instrument_32.insert(ContractSettlMonth_32.getString());
    FIX::CountryOfIssue CountryOfIssue_32("COUNTRY_27365669");
    noRelatedSym_0_1.set(CountryOfIssue_32);
    Instrument_32.insert(CountryOfIssue_32.getString());
    FIX::CouponPaymentDate CouponPaymentDate_32("LOCALMKTDATE_1528917008");
    noRelatedSym_0_1.set(CouponPaymentDate_32);
    Instrument_32.insert(CouponPaymentDate_32.getString());
    FIX::CouponRate CouponRate_32;
    CouponRate_32.setString("77.080000");
    noRelatedSym_0_1.set(CouponRate_32);
    Instrument_32.insert(CouponRate_32.getString());
    FIX::CreditRating CreditRating_32("STRING_1854777208");
    noRelatedSym_0_1.set(CreditRating_32);
    Instrument_32.insert(CreditRating_32.getString());
    FIX::DatedDate DatedDate_32("LOCALMKTDATE_437277109");
    noRelatedSym_0_1.set(DatedDate_32);
    Instrument_32.insert(DatedDate_32.getString());
    FIX::DetachmentPoint DetachmentPoint_32;
    DetachmentPoint_32.setString("74.300000");
    noRelatedSym_0_1.set(DetachmentPoint_32);
    Instrument_32.insert(DetachmentPoint_32.getString());
    FIX::EncodedIssuer EncodedIssuer_32("DATA_1708009094");
    noRelatedSym_0_1.set(EncodedIssuer_32);
    Instrument_32.insert(EncodedIssuer_32.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_32(1348294325);
    noRelatedSym_0_1.set(EncodedIssuerLen_32);
    Instrument_32.insert(EncodedIssuerLen_32.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_32("DATA_226196966");
    noRelatedSym_0_1.set(EncodedSecurityDesc_32);
    Instrument_32.insert(EncodedSecurityDesc_32.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_32(1939580115);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_32);
    Instrument_32.insert(EncodedSecurityDescLen_32.getString());
    FIX::ExerciseStyle ExerciseStyle_32(0);
    noRelatedSym_0_1.set(ExerciseStyle_32);
    Instrument_32.insert(ExerciseStyle_32.getString());
    FIX::Factor Factor_32;
    Factor_32.setString("4616962");
    noRelatedSym_0_1.set(Factor_32);
    Instrument_32.insert(Factor_32.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_32(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_32);
    Instrument_32.insert(FlexProductEligibilityIndicator_32.getString());
    FIX::FlexibleIndicator FlexibleIndicator_32(true);
    noRelatedSym_0_1.set(FlexibleIndicator_32);
    Instrument_32.insert(FlexibleIndicator_32.getString());
    FIX::FloorPrice FloorPrice_32;
    FloorPrice_32.setString("9037172");
    noRelatedSym_0_1.set(FloorPrice_32);
    Instrument_32.insert(FloorPrice_32.getString());
    FIX::FlowScheduleType FlowScheduleType_32(4);
    noRelatedSym_0_1.set(FlowScheduleType_32);
    Instrument_32.insert(FlowScheduleType_32.getString());
    FIX::InstrRegistry InstrRegistry_32("STRING_935811045");
    noRelatedSym_0_1.set(InstrRegistry_32);
    Instrument_32.insert(InstrRegistry_32.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_32('2');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_32);
    Instrument_32.insert(InstrmtAssignmentMethod_32.getString());
    FIX::InterestAccrualDate InterestAccrualDate_32("LOCALMKTDATE_1877128989");
    noRelatedSym_0_1.set(InterestAccrualDate_32);
    Instrument_32.insert(InterestAccrualDate_32.getString());
    FIX::IssueDate IssueDate_32("LOCALMKTDATE_1882777277");
    noRelatedSym_0_1.set(IssueDate_32);
    Instrument_32.insert(IssueDate_32.getString());
    FIX::Issuer Issuer_32("STRING_682378691");
    noRelatedSym_0_1.set(Issuer_32);
    Instrument_32.insert(Issuer_32.getString());
    FIX::ListMethod ListMethod_32(1);
    noRelatedSym_0_1.set(ListMethod_32);
    Instrument_32.insert(ListMethod_32.getString());
    FIX::LocaleOfIssue LocaleOfIssue_32("STRING_1892055152");
    noRelatedSym_0_1.set(LocaleOfIssue_32);
    Instrument_32.insert(LocaleOfIssue_32.getString());
    FIX::MaturityDate MaturityDate_32("LOCALMKTDATE_1262398117");
    noRelatedSym_0_1.set(MaturityDate_32);
    Instrument_32.insert(MaturityDate_32.getString());
    FIX::MaturityMonthYear MaturityMonthYear_32("MONTHYEAR_266374902");
    noRelatedSym_0_1.set(MaturityMonthYear_32);
    Instrument_32.insert(MaturityMonthYear_32.getString());
    FIX::MaturityTime MaturityTime_32("TZTIMEONLY_1520987396");
    noRelatedSym_0_1.set(MaturityTime_32);
    Instrument_32.insert(MaturityTime_32.getString());
    FIX::MinPriceIncrement MinPriceIncrement_32;
    MinPriceIncrement_32.setString("9393354");
    noRelatedSym_0_1.set(MinPriceIncrement_32);
    Instrument_32.insert(MinPriceIncrement_32.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_32;
    MinPriceIncrementAmount_32.setString("13498719");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_32);
    Instrument_32.insert(MinPriceIncrementAmount_32.getString());
    FIX::NTPositionLimit NTPositionLimit_32(914225438);
    noRelatedSym_0_1.set(NTPositionLimit_32);
    Instrument_32.insert(NTPositionLimit_32.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_32;
    NotionalPercentageOutstanding_32.setString("87.620000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_32);
    Instrument_32.insert(NotionalPercentageOutstanding_32.getString());
    FIX::OptAttribute OptAttribute_32('4');
    noRelatedSym_0_1.set(OptAttribute_32);
    Instrument_32.insert(OptAttribute_32.getString());
    FIX::OptPayoutAmount OptPayoutAmount_32;
    OptPayoutAmount_32.setString("9415911");
    noRelatedSym_0_1.set(OptPayoutAmount_32);
    Instrument_32.insert(OptPayoutAmount_32.getString());
    FIX::OptPayoutType OptPayoutType_32(3);
    noRelatedSym_0_1.set(OptPayoutType_32);
    Instrument_32.insert(OptPayoutType_32.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_32;
    OriginalNotionalPercentageOutstanding_32.setString("20.410000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_32);
    Instrument_32.insert(OriginalNotionalPercentageOutstanding_32.getString());
    FIX::Pool Pool_32("STRING_648884668");
    noRelatedSym_0_1.set(Pool_32);
    Instrument_32.insert(Pool_32.getString());
    FIX::PositionLimit PositionLimit_32(308769232);
    noRelatedSym_0_1.set(PositionLimit_32);
    Instrument_32.insert(PositionLimit_32.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_32("STRING_STD");
    noRelatedSym_0_1.set(PriceQuoteMethod_32);
    Instrument_32.insert(PriceQuoteMethod_32.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_32("STRING_209410114");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_32);
    Instrument_32.insert(PriceUnitOfMeasure_32.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_32;
    PriceUnitOfMeasureQty_32.setString("16570635");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_32);
    Instrument_32.insert(PriceUnitOfMeasureQty_32.getString());
    FIX::Product Product_34(12);
    noRelatedSym_0_1.set(Product_34);
    Instrument_32.insert(Product_34.getString());
    FIX::ProductComplex ProductComplex_32("STRING_1506581");
    noRelatedSym_0_1.set(ProductComplex_32);
    Instrument_32.insert(ProductComplex_32.getString());
    FIX::PutOrCall PutOrCall_32(1);
    noRelatedSym_0_1.set(PutOrCall_32);
    Instrument_32.insert(PutOrCall_32.getString());
    FIX::RedemptionDate RedemptionDate_32("LOCALMKTDATE_2084172728");
    noRelatedSym_0_1.set(RedemptionDate_32);
    Instrument_32.insert(RedemptionDate_32.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_32("STRING_2043604631");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_32);
    Instrument_32.insert(RepoCollateralSecurityType_32.getString());
    FIX::RepurchaseRate RepurchaseRate_32;
    RepurchaseRate_32.setString("58.990000");
    noRelatedSym_0_1.set(RepurchaseRate_32);
    Instrument_32.insert(RepurchaseRate_32.getString());
    FIX::RepurchaseTerm RepurchaseTerm_32(840406293);
    noRelatedSym_0_1.set(RepurchaseTerm_32);
    Instrument_32.insert(RepurchaseTerm_32.getString());
    FIX::RestructuringType RestructuringType_32("STRING_XR");
    noRelatedSym_0_1.set(RestructuringType_32);
    Instrument_32.insert(RestructuringType_32.getString());
    FIX::SecurityDesc SecurityDesc_32("STRING_1650736944");
    noRelatedSym_0_1.set(SecurityDesc_32);
    Instrument_32.insert(SecurityDesc_32.getString());
    FIX::SecurityExchange SecurityExchange_32("EXCHANGE_1094051325");
    noRelatedSym_0_1.set(SecurityExchange_32);
    Instrument_32.insert(SecurityExchange_32.getString());
    FIX::SecurityGroup SecurityGroup_32("STRING_782681464");
    noRelatedSym_0_1.set(SecurityGroup_32);
    Instrument_32.insert(SecurityGroup_32.getString());
    FIX::SecurityID SecurityID_32("STRING_1386030573");
    noRelatedSym_0_1.set(SecurityID_32);
    Instrument_32.insert(SecurityID_32.getString());
    FIX::SecurityIDSource SecurityIDSource_32("STRING_L");
    noRelatedSym_0_1.set(SecurityIDSource_32);
    Instrument_32.insert(SecurityIDSource_32.getString());
    FIX::SecurityStatus SecurityStatus_32("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_32);
    Instrument_32.insert(SecurityStatus_32.getString());
    FIX::SecuritySubType SecuritySubType_33("STRING_1130602077");
    noRelatedSym_0_1.set(SecuritySubType_33);
    Instrument_32.insert(SecuritySubType_33.getString());
    FIX::SecurityType SecurityType_34("STRING_REV");
    noRelatedSym_0_1.set(SecurityType_34);
    Instrument_32.insert(SecurityType_34.getString());
    FIX::Seniority Seniority_32("STRING_SD");
    noRelatedSym_0_1.set(Seniority_32);
    Instrument_32.insert(Seniority_32.getString());
    FIX::SettlMethod SettlMethod_32('C');
    noRelatedSym_0_1.set(SettlMethod_32);
    Instrument_32.insert(SettlMethod_32.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_32("STRING_1830679953");
    noRelatedSym_0_1.set(SettleOnOpenFlag_32);
    Instrument_32.insert(SettleOnOpenFlag_32.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_32("STRING_1362600755");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_32);
    Instrument_32.insert(StateOrProvinceOfIssue_32.getString());
    FIX::StrikeCurrency StrikeCurrency_32("CHF");
    noRelatedSym_0_1.set(StrikeCurrency_32);
    Instrument_32.insert(StrikeCurrency_32.getString());
    FIX::StrikeMultiplier StrikeMultiplier_32;
    StrikeMultiplier_32.setString("18290350");
    noRelatedSym_0_1.set(StrikeMultiplier_32);
    Instrument_32.insert(StrikeMultiplier_32.getString());
    FIX::StrikePrice StrikePrice_32;
    StrikePrice_32.setString("2124387");
    noRelatedSym_0_1.set(StrikePrice_32);
    Instrument_32.insert(StrikePrice_32.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_32(1);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_32);
    Instrument_32.insert(StrikePriceBoundaryMethod_32.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_32;
    StrikePriceBoundaryPrecision_32.setString("34.810000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_32);
    Instrument_32.insert(StrikePriceBoundaryPrecision_32.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_32(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_32);
    Instrument_32.insert(StrikePriceDeterminationMethod_32.getString());
    FIX::StrikeValue StrikeValue_32;
    StrikeValue_32.setString("3535164");
    noRelatedSym_0_1.set(StrikeValue_32);
    Instrument_32.insert(StrikeValue_32.getString());
    FIX::Symbol Symbol_32("STRING_1559232953");
    noRelatedSym_0_1.set(Symbol_32);
    Instrument_32.insert(Symbol_32.getString());
    FIX::SymbolSfx SymbolSfx_32("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_32);
    Instrument_32.insert(SymbolSfx_32.getString());
    FIX::TimeUnit TimeUnit_32("STRING_D");
    noRelatedSym_0_1.set(TimeUnit_32);
    Instrument_32.insert(TimeUnit_32.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_32(1);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_32);
    Instrument_32.insert(UnderlyingPriceDeterminationMethod_32.getString());
    FIX::UnitOfMeasure UnitOfMeasure_32("STRING_t");
    noRelatedSym_0_1.set(UnitOfMeasure_32);
    Instrument_32.insert(UnitOfMeasure_32.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_32;
    UnitOfMeasureQty_32.setString("21259500");
    noRelatedSym_0_1.set(UnitOfMeasureQty_32);
    Instrument_32.insert(UnitOfMeasureQty_32.getString());
    FIX::ValuationMethod ValuationMethod_32("STRING_CDSD");
    noRelatedSym_0_1.set(ValuationMethod_32);
    Instrument_32.insert(ValuationMethod_32.getString());
    all_values.push_back(Instrument_32);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_58;
      FIX::ComplexEventCondition ComplexEventCondition_58(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventCondition_58.getString());
      FIX::ComplexEventPrice ComplexEventPrice_58;
      ComplexEventPrice_58.setString("18113211");
      noComplexEvents_1_1_0.set(ComplexEventPrice_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPrice_58.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_58(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceBoundaryMethod_58.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_58;
      ComplexEventPriceBoundaryPrecision_58.setString("55.480000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceBoundaryPrecision_58.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_58(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceTimeType_58.getString());
      FIX::ComplexEventType ComplexEventType_58(2);
      noComplexEvents_1_1_0.set(ComplexEventType_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventType_58.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_58;
      ComplexOptPayoutAmount_58.setString("15826761");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexOptPayoutAmount_58.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_58);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_112;
        FIX::ComplexEventEndDate ComplexEventEndDate_112(FIX::UTCTIMESTAMP(23, 9, 39, 21, 11, 2002));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_112);
        ComplexEventDates_NoComplexEventDates_112.insert(ComplexEventEndDate_112.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_112(FIX::UTCTIMESTAMP(14, 14, 36, 12, 1, 2016));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_112);
        ComplexEventDates_NoComplexEventDates_112.insert(ComplexEventStartDate_112.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_112);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_225;
          FIX::ComplexEventEndTime ComplexEventEndTime_225(FIX::UTCTIMEONLY(22, 7, 5));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_225);
          ComplexEventTimes_NoComplexEventTimes_225.insert(ComplexEventEndTime_225.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_225(FIX::UTCTIMEONLY(0, 42, 56));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_225);
          ComplexEventTimes_NoComplexEventTimes_225.insert(ComplexEventStartTime_225.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_225);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_226;
          FIX::ComplexEventEndTime ComplexEventEndTime_226(FIX::UTCTIMEONLY(4, 2, 12));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_226);
          ComplexEventTimes_NoComplexEventTimes_226.insert(ComplexEventEndTime_226.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_226(FIX::UTCTIMEONLY(0, 33, 30));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_226);
          ComplexEventTimes_NoComplexEventTimes_226.insert(ComplexEventStartTime_226.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_226);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_113;
        FIX::ComplexEventEndDate ComplexEventEndDate_113(FIX::UTCTIMESTAMP(0, 32, 25, 21, 7, 2014));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_113);
        ComplexEventDates_NoComplexEventDates_113.insert(ComplexEventEndDate_113.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_113(FIX::UTCTIMESTAMP(12, 38, 23, 17, 3, 2001));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_113);
        ComplexEventDates_NoComplexEventDates_113.insert(ComplexEventStartDate_113.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_113);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_227;
          FIX::ComplexEventEndTime ComplexEventEndTime_227(FIX::UTCTIMEONLY(17, 19, 25));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_227);
          ComplexEventTimes_NoComplexEventTimes_227.insert(ComplexEventEndTime_227.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_227(FIX::UTCTIMEONLY(19, 7, 11));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_227);
          ComplexEventTimes_NoComplexEventTimes_227.insert(ComplexEventStartTime_227.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_227);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_228;
          FIX::ComplexEventEndTime ComplexEventEndTime_228(FIX::UTCTIMEONLY(15, 13, 55));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_228);
          ComplexEventTimes_NoComplexEventTimes_228.insert(ComplexEventEndTime_228.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_228(FIX::UTCTIMEONLY(2, 20, 1));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_228);
          ComplexEventTimes_NoComplexEventTimes_228.insert(ComplexEventStartTime_228.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_228);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_229;
          FIX::ComplexEventEndTime ComplexEventEndTime_229(FIX::UTCTIMEONLY(9, 33, 21));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_229);
          ComplexEventTimes_NoComplexEventTimes_229.insert(ComplexEventEndTime_229.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_229(FIX::UTCTIMEONLY(19, 53, 1));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_229);
          ComplexEventTimes_NoComplexEventTimes_229.insert(ComplexEventStartTime_229.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_229);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_59;
      FIX::ComplexEventCondition ComplexEventCondition_59(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventCondition_59.getString());
      FIX::ComplexEventPrice ComplexEventPrice_59;
      ComplexEventPrice_59.setString("820482");
      noComplexEvents_1_1_1.set(ComplexEventPrice_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPrice_59.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_59(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceBoundaryMethod_59.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_59;
      ComplexEventPriceBoundaryPrecision_59.setString("42.890000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceBoundaryPrecision_59.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_59(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceTimeType_59.getString());
      FIX::ComplexEventType ComplexEventType_59(9);
      noComplexEvents_1_1_1.set(ComplexEventType_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventType_59.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_59;
      ComplexOptPayoutAmount_59.setString("13880737");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexOptPayoutAmount_59.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_59);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_114;
        FIX::ComplexEventEndDate ComplexEventEndDate_114(FIX::UTCTIMESTAMP(16, 24, 34, 3, 12, 2007));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_114);
        ComplexEventDates_NoComplexEventDates_114.insert(ComplexEventEndDate_114.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_114(FIX::UTCTIMESTAMP(3, 43, 1, 9, 10, 2013));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_114);
        ComplexEventDates_NoComplexEventDates_114.insert(ComplexEventStartDate_114.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_114);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_230;
          FIX::ComplexEventEndTime ComplexEventEndTime_230(FIX::UTCTIMEONLY(2, 3, 26));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_230);
          ComplexEventTimes_NoComplexEventTimes_230.insert(ComplexEventEndTime_230.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_230(FIX::UTCTIMEONLY(11, 12, 26));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_230);
          ComplexEventTimes_NoComplexEventTimes_230.insert(ComplexEventStartTime_230.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_230);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_231;
          FIX::ComplexEventEndTime ComplexEventEndTime_231(FIX::UTCTIMEONLY(0, 42, 48));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_231);
          ComplexEventTimes_NoComplexEventTimes_231.insert(ComplexEventEndTime_231.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_231(FIX::UTCTIMEONLY(21, 49, 57));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_231);
          ComplexEventTimes_NoComplexEventTimes_231.insert(ComplexEventStartTime_231.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_231);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_232;
          FIX::ComplexEventEndTime ComplexEventEndTime_232(FIX::UTCTIMEONLY(9, 13, 19));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventEndTime_232);
          ComplexEventTimes_NoComplexEventTimes_232.insert(ComplexEventEndTime_232.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_232(FIX::UTCTIMEONLY(0, 57, 46));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventStartTime_232);
          ComplexEventTimes_NoComplexEventTimes_232.insert(ComplexEventStartTime_232.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_232);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_115;
        FIX::ComplexEventEndDate ComplexEventEndDate_115(FIX::UTCTIMESTAMP(16, 47, 21, 21, 5, 2017));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_115);
        ComplexEventDates_NoComplexEventDates_115.insert(ComplexEventEndDate_115.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_115(FIX::UTCTIMESTAMP(19, 3, 56, 20, 7, 2014));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_115);
        ComplexEventDates_NoComplexEventDates_115.insert(ComplexEventStartDate_115.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_115);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_233;
          FIX::ComplexEventEndTime ComplexEventEndTime_233(FIX::UTCTIMEONLY(12, 20, 1));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_233);
          ComplexEventTimes_NoComplexEventTimes_233.insert(ComplexEventEndTime_233.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_233(FIX::UTCTIMEONLY(21, 42, 40));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_233);
          ComplexEventTimes_NoComplexEventTimes_233.insert(ComplexEventStartTime_233.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_233);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_234;
          FIX::ComplexEventEndTime ComplexEventEndTime_234(FIX::UTCTIMEONLY(3, 53, 49));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_234);
          ComplexEventTimes_NoComplexEventTimes_234.insert(ComplexEventEndTime_234.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_234(FIX::UTCTIMEONLY(9, 38, 9));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_234);
          ComplexEventTimes_NoComplexEventTimes_234.insert(ComplexEventStartTime_234.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_234);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_235;
          FIX::ComplexEventEndTime ComplexEventEndTime_235(FIX::UTCTIMEONLY(10, 56, 18));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_235);
          ComplexEventTimes_NoComplexEventTimes_235.insert(ComplexEventEndTime_235.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_235(FIX::UTCTIMEONLY(4, 9, 21));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_235);
          ComplexEventTimes_NoComplexEventTimes_235.insert(ComplexEventStartTime_235.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_235);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_60;
      FIX::ComplexEventCondition ComplexEventCondition_60(2);
      noComplexEvents_1_1_2.set(ComplexEventCondition_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventCondition_60.getString());
      FIX::ComplexEventPrice ComplexEventPrice_60;
      ComplexEventPrice_60.setString("8805583");
      noComplexEvents_1_1_2.set(ComplexEventPrice_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPrice_60.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_60(4);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceBoundaryMethod_60.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_60;
      ComplexEventPriceBoundaryPrecision_60.setString("58.470000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceBoundaryPrecision_60.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_60(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceTimeType_60.getString());
      FIX::ComplexEventType ComplexEventType_60(6);
      noComplexEvents_1_1_2.set(ComplexEventType_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventType_60.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_60;
      ComplexOptPayoutAmount_60.setString("10553852");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexOptPayoutAmount_60.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_60);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_116;
        FIX::ComplexEventEndDate ComplexEventEndDate_116(FIX::UTCTIMESTAMP(1, 40, 38, 18, 11, 2004));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_116);
        ComplexEventDates_NoComplexEventDates_116.insert(ComplexEventEndDate_116.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_116(FIX::UTCTIMESTAMP(5, 55, 42, 0, 5, 2002));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_116);
        ComplexEventDates_NoComplexEventDates_116.insert(ComplexEventStartDate_116.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_116);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_236;
          FIX::ComplexEventEndTime ComplexEventEndTime_236(FIX::UTCTIMEONLY(19, 25, 15));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_236);
          ComplexEventTimes_NoComplexEventTimes_236.insert(ComplexEventEndTime_236.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_236(FIX::UTCTIMEONLY(18, 25, 36));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_236);
          ComplexEventTimes_NoComplexEventTimes_236.insert(ComplexEventStartTime_236.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_236);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_237;
          FIX::ComplexEventEndTime ComplexEventEndTime_237(FIX::UTCTIMEONLY(9, 54, 21));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventEndTime_237);
          ComplexEventTimes_NoComplexEventTimes_237.insert(ComplexEventEndTime_237.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_237(FIX::UTCTIMEONLY(0, 46, 35));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventStartTime_237);
          ComplexEventTimes_NoComplexEventTimes_237.insert(ComplexEventStartTime_237.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_237);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_117;
        FIX::ComplexEventEndDate ComplexEventEndDate_117(FIX::UTCTIMESTAMP(12, 8, 37, 10, 7, 2017));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_117);
        ComplexEventDates_NoComplexEventDates_117.insert(ComplexEventEndDate_117.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_117(FIX::UTCTIMESTAMP(12, 42, 13, 12, 4, 2007));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_117);
        ComplexEventDates_NoComplexEventDates_117.insert(ComplexEventStartDate_117.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_117);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_238;
          FIX::ComplexEventEndTime ComplexEventEndTime_238(FIX::UTCTIMEONLY(20, 59, 12));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_238);
          ComplexEventTimes_NoComplexEventTimes_238.insert(ComplexEventEndTime_238.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_238(FIX::UTCTIMEONLY(9, 29, 39));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_238);
          ComplexEventTimes_NoComplexEventTimes_238.insert(ComplexEventStartTime_238.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_238);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_239;
          FIX::ComplexEventEndTime ComplexEventEndTime_239(FIX::UTCTIMEONLY(18, 25, 52));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventEndTime_239);
          ComplexEventTimes_NoComplexEventTimes_239.insert(ComplexEventEndTime_239.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_239(FIX::UTCTIMEONLY(1, 38, 58));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventStartTime_239);
          ComplexEventTimes_NoComplexEventTimes_239.insert(ComplexEventStartTime_239.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_239);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_118;
        FIX::ComplexEventEndDate ComplexEventEndDate_118(FIX::UTCTIMESTAMP(18, 6, 14, 1, 1, 2012));
        noComplexEventDates_1_2_2_2.set(ComplexEventEndDate_118);
        ComplexEventDates_NoComplexEventDates_118.insert(ComplexEventEndDate_118.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_118(FIX::UTCTIMESTAMP(16, 28, 1, 17, 8, 2002));
        noComplexEventDates_1_2_2_2.set(ComplexEventStartDate_118);
        ComplexEventDates_NoComplexEventDates_118.insert(ComplexEventStartDate_118.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_118);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_240;
          FIX::ComplexEventEndTime ComplexEventEndTime_240(FIX::UTCTIMEONLY(15, 26, 12));
          noComplexEventTimes_1_2_2_3_0.set(ComplexEventEndTime_240);
          ComplexEventTimes_NoComplexEventTimes_240.insert(ComplexEventEndTime_240.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_240(FIX::UTCTIMEONLY(12, 33, 5));
          noComplexEventTimes_1_2_2_3_0.set(ComplexEventStartTime_240);
          ComplexEventTimes_NoComplexEventTimes_240.insert(ComplexEventStartTime_240.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_240);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_241;
          FIX::ComplexEventEndTime ComplexEventEndTime_241(FIX::UTCTIMEONLY(15, 30, 39));
          noComplexEventTimes_1_2_2_3_1.set(ComplexEventEndTime_241);
          ComplexEventTimes_NoComplexEventTimes_241.insert(ComplexEventEndTime_241.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_241(FIX::UTCTIMEONLY(23, 9, 36));
          noComplexEventTimes_1_2_2_3_1.set(ComplexEventStartTime_241);
          ComplexEventTimes_NoComplexEventTimes_241.insert(ComplexEventStartTime_241.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_241);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_242;
          FIX::ComplexEventEndTime ComplexEventEndTime_242(FIX::UTCTIMEONLY(4, 42, 35));
          noComplexEventTimes_1_2_2_3_2.set(ComplexEventEndTime_242);
          ComplexEventTimes_NoComplexEventTimes_242.insert(ComplexEventEndTime_242.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_242(FIX::UTCTIMEONLY(10, 29, 9));
          noComplexEventTimes_1_2_2_3_2.set(ComplexEventStartTime_242);
          ComplexEventTimes_NoComplexEventTimes_242.insert(ComplexEventStartTime_242.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_242);

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
      FIX::EventDate EventDate_62("LOCALMKTDATE_1873490997");
      noEvents_1_1_0.set(EventDate_62);
      EvntGrp_NoEvents_62.insert(EventDate_62.getString());
      FIX::EventPx EventPx_62;
      EventPx_62.setString("11862825");
      noEvents_1_1_0.set(EventPx_62);
      EvntGrp_NoEvents_62.insert(EventPx_62.getString());
      FIX::EventText EventText_62("STRING_1583617516");
      noEvents_1_1_0.set(EventText_62);
      EvntGrp_NoEvents_62.insert(EventText_62.getString());
      FIX::EventTime EventTime_62(FIX::UTCTIMESTAMP(4, 43, 9, 3, 10, 2013));
      noEvents_1_1_0.set(EventTime_62);
      EvntGrp_NoEvents_62.insert(EventTime_62.getString());
      FIX::EventType EventType_62(10);
      noEvents_1_1_0.set(EventType_62);
      EvntGrp_NoEvents_62.insert(EventType_62.getString());
      all_values.push_back(EvntGrp_NoEvents_62);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_68;
      FIX::InstrumentPartyID InstrumentPartyID_68("STRING_1059329566");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_68);
      InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyID_68.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_68('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_68);
      InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyIDSource_68.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_68(1723260140);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_68);
      InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyRole_68.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_68);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146;
        FIX::InstrumentPartySubID InstrumentPartySubID_146("STRING_1493911828");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_146);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146.insert(InstrumentPartySubID_146.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_146(1932687239);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_146);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146.insert(InstrumentPartySubIDType_146.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147;
        FIX::InstrumentPartySubID InstrumentPartySubID_147("STRING_1776121419");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_147);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147.insert(InstrumentPartySubID_147.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_147(989772860);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_147);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147.insert(InstrumentPartySubIDType_147.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148;
        FIX::InstrumentPartySubID InstrumentPartySubID_148("STRING_2039484369");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_148);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148.insert(InstrumentPartySubID_148.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_148(1849429395);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_148);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148.insert(InstrumentPartySubIDType_148.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_69;
      FIX::InstrumentPartyID InstrumentPartyID_69("STRING_1581142728");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_69);
      InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyID_69.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_69('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_69);
      InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyIDSource_69.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_69(434409529);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_69);
      InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyRole_69.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_69);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149;
        FIX::InstrumentPartySubID InstrumentPartySubID_149("STRING_404277318");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_149);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149.insert(InstrumentPartySubID_149.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_149(709565700);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_149);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149.insert(InstrumentPartySubIDType_149.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150;
        FIX::InstrumentPartySubID InstrumentPartySubID_150("STRING_929220764");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_150);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150.insert(InstrumentPartySubID_150.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_150(497477727);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_150);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150.insert(InstrumentPartySubIDType_150.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151;
        FIX::InstrumentPartySubID InstrumentPartySubID_151("STRING_1813842855");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_151);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151.insert(InstrumentPartySubID_151.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_151(655228114);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_151);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151.insert(InstrumentPartySubIDType_151.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_68;
      FIX::SecurityAltID SecurityAltID_68("STRING_1249976723");
      noSecurityAltID_1_1_0.set(SecurityAltID_68);
      SecAltIDGrp_NoSecurityAltID_68.insert(SecurityAltID_68.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_68("STRING_49805795");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_68);
      SecAltIDGrp_NoSecurityAltID_68.insert(SecurityAltIDSource_68.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_68);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_69;
      FIX::SecurityAltID SecurityAltID_69("STRING_1979361125");
      noSecurityAltID_1_1_1.set(SecurityAltID_69);
      SecAltIDGrp_NoSecurityAltID_69.insert(SecurityAltID_69.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_69("STRING_1803751386");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_69);
      SecAltIDGrp_NoSecurityAltID_69.insert(SecurityAltIDSource_69.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_69);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_64;
    FIX::SecurityXML SecurityXML_65("XMLDATA_849181544");
    noRelatedSym_0_1.set(SecurityXML_65);
    FIX::SecurityXMLLen SecurityXMLLen_32(149554001);
    noRelatedSym_0_1.set(SecurityXMLLen_32);
    FIX::SecurityXMLSchema SecurityXMLSchema_32("STRING_756649987");
    noRelatedSym_0_1.set(SecurityXMLSchema_32);
    SecurityXML_64.insert(SecurityXMLSchema_32.getString());
    all_values.push_back(SecurityXML_64);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_48;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_48("DATA_1950089330");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingIssuer_48.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_48(856231473);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingIssuerLen_48.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_48("DATA_1962114943");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingSecurityDesc_48.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_48(1381348489);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingSecurityDescLen_48.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_48;
      UnderlyingAdjustedQuantity_48.setString("4320079");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_48);
      UnderlyingInstrument_48.insert(UnderlyingAdjustedQuantity_48.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_48;
      UnderlyingAllocationPercent_48.setString("93.160000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_48);
      UnderlyingInstrument_48.insert(UnderlyingAllocationPercent_48.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_48;
      UnderlyingAttachmentPoint_48.setString("66.690000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_48);
      UnderlyingInstrument_48.insert(UnderlyingAttachmentPoint_48.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_48("STRING_217211557");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_48);
      UnderlyingInstrument_48.insert(UnderlyingCFICode_48.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_48("STRING_1599997088");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_48);
      UnderlyingInstrument_48.insert(UnderlyingCPProgram_48.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_48("STRING_1717549529");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_48);
      UnderlyingInstrument_48.insert(UnderlyingCPRegType_48.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_48;
      UnderlyingCapValue_48.setString("1092122");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_48);
      UnderlyingInstrument_48.insert(UnderlyingCapValue_48.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_48;
      UnderlyingCashAmount_48.setString("13019428");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_48);
      UnderlyingInstrument_48.insert(UnderlyingCashAmount_48.getString());
      FIX::UnderlyingCashType UnderlyingCashType_48("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_48);
      UnderlyingInstrument_48.insert(UnderlyingCashType_48.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_48;
      UnderlyingContractMultiplier_48.setString("20822543");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_48);
      UnderlyingInstrument_48.insert(UnderlyingContractMultiplier_48.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_48(1736352365);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_48);
      UnderlyingInstrument_48.insert(UnderlyingContractMultiplierUnit_48.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_48("COUNTRY_806181745");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingCountryOfIssue_48.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_48("LOCALMKTDATE_339047993");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_48);
      UnderlyingInstrument_48.insert(UnderlyingCouponPaymentDate_48.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_48;
      UnderlyingCouponRate_48.setString("44.170000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_48);
      UnderlyingInstrument_48.insert(UnderlyingCouponRate_48.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_48("STRING_1735402510");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_48);
      UnderlyingInstrument_48.insert(UnderlyingCreditRating_48.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_48("USD");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_48);
      UnderlyingInstrument_48.insert(UnderlyingCurrency_48.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_48;
      UnderlyingCurrentValue_48.setString("2431469");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_48);
      UnderlyingInstrument_48.insert(UnderlyingCurrentValue_48.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_48;
      UnderlyingDetachmentPoint_48.setString("23.690000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_48);
      UnderlyingInstrument_48.insert(UnderlyingDetachmentPoint_48.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_48;
      UnderlyingDirtyPrice_48.setString("12147703");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_48);
      UnderlyingInstrument_48.insert(UnderlyingDirtyPrice_48.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_48;
      UnderlyingEndPrice_48.setString("2929527");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_48);
      UnderlyingInstrument_48.insert(UnderlyingEndPrice_48.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_48;
      UnderlyingEndValue_48.setString("2046798");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_48);
      UnderlyingInstrument_48.insert(UnderlyingEndValue_48.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_48(871038085);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_48);
      UnderlyingInstrument_48.insert(UnderlyingExerciseStyle_48.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_48;
      UnderlyingFXRate_48.setString("11421343");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_48);
      UnderlyingInstrument_48.insert(UnderlyingFXRate_48.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_48('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_48);
      UnderlyingInstrument_48.insert(UnderlyingFXRateCalc_48.getString());
      FIX::UnderlyingFactor UnderlyingFactor_48;
      UnderlyingFactor_48.setString("16276880");
      noUnderlyings_1_1_0.set(UnderlyingFactor_48);
      UnderlyingInstrument_48.insert(UnderlyingFactor_48.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_48(2044919692);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_48);
      UnderlyingInstrument_48.insert(UnderlyingFlowScheduleType_48.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_48("STRING_156839530");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_48);
      UnderlyingInstrument_48.insert(UnderlyingInstrRegistry_48.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_48("LOCALMKTDATE_336435897");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_48);
      UnderlyingInstrument_48.insert(UnderlyingIssueDate_48.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_48("STRING_1859550987");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_48);
      UnderlyingInstrument_48.insert(UnderlyingIssuer_48.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_48("STRING_1538188019");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingLocaleOfIssue_48.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_48("LOCALMKTDATE_768443863");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityDate_48.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_48("MONTHYEAR_1683426655");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityMonthYear_48.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_48("TZTIMEONLY_118481040");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityTime_48.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_48;
      UnderlyingNotionalPercentageOutstanding_48.setString("54.200000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_48);
      UnderlyingInstrument_48.insert(UnderlyingNotionalPercentageOutstanding_48.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_48('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_48);
      UnderlyingInstrument_48.insert(UnderlyingOptAttribute_48.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_48;
      UnderlyingOriginalNotionalPercentageOutstanding_48.setString("5.700000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_48);
      UnderlyingInstrument_48.insert(UnderlyingOriginalNotionalPercentageOutstanding_48.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_48("STRING_1094867698");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_48);
      UnderlyingInstrument_48.insert(UnderlyingPriceUnitOfMeasure_48.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_48;
      UnderlyingPriceUnitOfMeasureQty_48.setString("2903992");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_48);
      UnderlyingInstrument_48.insert(UnderlyingPriceUnitOfMeasureQty_48.getString());
      FIX::UnderlyingProduct UnderlyingProduct_48(839755532);
      noUnderlyings_1_1_0.set(UnderlyingProduct_48);
      UnderlyingInstrument_48.insert(UnderlyingProduct_48.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_48(1029638373);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_48);
      UnderlyingInstrument_48.insert(UnderlyingPutOrCall_48.getString());
      FIX::UnderlyingPx UnderlyingPx_48;
      UnderlyingPx_48.setString("20267516");
      noUnderlyings_1_1_0.set(UnderlyingPx_48);
      UnderlyingInstrument_48.insert(UnderlyingPx_48.getString());
      FIX::UnderlyingQty UnderlyingQty_48;
      UnderlyingQty_48.setString("16459372");
      noUnderlyings_1_1_0.set(UnderlyingQty_48);
      UnderlyingInstrument_48.insert(UnderlyingQty_48.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_48("LOCALMKTDATE_1368686366");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_48);
      UnderlyingInstrument_48.insert(UnderlyingRedemptionDate_48.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_48("STRING_177702417");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_48);
      UnderlyingInstrument_48.insert(UnderlyingRepoCollateralSecurityType_48.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_48;
      UnderlyingRepurchaseRate_48.setString("61.390000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_48);
      UnderlyingInstrument_48.insert(UnderlyingRepurchaseRate_48.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_48(57728438);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_48);
      UnderlyingInstrument_48.insert(UnderlyingRepurchaseTerm_48.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_48("STRING_142496041");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_48);
      UnderlyingInstrument_48.insert(UnderlyingRestructuringType_48.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_48("STRING_1477003115");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityDesc_48.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_48("EXCHANGE_430530807");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityExchange_48.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_48("STRING_1357266388");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityID_48.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_48("STRING_1769955886");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityIDSource_48.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_48("STRING_635210653");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_48);
      UnderlyingInstrument_48.insert(UnderlyingSecuritySubType_48.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_48("STRING_80820825");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityType_48.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_48("STRING_764606553");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_48);
      UnderlyingInstrument_48.insert(UnderlyingSeniority_48.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_48("STRING_989444501");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_48);
      UnderlyingInstrument_48.insert(UnderlyingSettlMethod_48.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_48(5);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_48);
      UnderlyingInstrument_48.insert(UnderlyingSettlementType_48.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_48;
      UnderlyingStartValue_48.setString("6620425");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_48);
      UnderlyingInstrument_48.insert(UnderlyingStartValue_48.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_48("STRING_1146284031");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingStateOrProvinceOfIssue_48.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_48("USD");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_48);
      UnderlyingInstrument_48.insert(UnderlyingStrikeCurrency_48.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_48;
      UnderlyingStrikePrice_48.setString("5369884");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_48);
      UnderlyingInstrument_48.insert(UnderlyingStrikePrice_48.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_48("STRING_665905010");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_48);
      UnderlyingInstrument_48.insert(UnderlyingSymbol_48.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_48("STRING_2057536592");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_48);
      UnderlyingInstrument_48.insert(UnderlyingSymbolSfx_48.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_48("STRING_655469442");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_48);
      UnderlyingInstrument_48.insert(UnderlyingTimeUnit_48.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_48("STRING_1651560430");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_48);
      UnderlyingInstrument_48.insert(UnderlyingUnitOfMeasure_48.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_48;
      UnderlyingUnitOfMeasureQty_48.setString("10459930");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_48);
      UnderlyingInstrument_48.insert(UnderlyingUnitOfMeasureQty_48.getString());
      all_values.push_back(UnderlyingInstrument_48);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_100;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_100("STRING_598944480");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_100);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_100.insert(UnderlyingSecurityAltID_100.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_100("STRING_1336392322");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_100);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_100.insert(UnderlyingSecurityAltIDSource_100.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_100);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_101;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_101("STRING_1183771896");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_101);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_101.insert(UnderlyingSecurityAltID_101.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_101("STRING_1628582853");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_101);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_101.insert(UnderlyingSecurityAltIDSource_101.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_101);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_85;
        FIX::UnderlyingStipType UnderlyingStipType_85("STRING_682225526");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_85);
        UnderlyingStipulations_NoUnderlyingStips_85.insert(UnderlyingStipType_85.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_85("STRING_849785571");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_85);
        UnderlyingStipulations_NoUnderlyingStips_85.insert(UnderlyingStipValue_85.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_85);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_86;
        FIX::UnderlyingStipType UnderlyingStipType_86("STRING_1393362739");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_86);
        UnderlyingStipulations_NoUnderlyingStips_86.insert(UnderlyingStipType_86.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_86("STRING_1916081665");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_86);
        UnderlyingStipulations_NoUnderlyingStips_86.insert(UnderlyingStipValue_86.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_86);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_103;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_103("STRING_1535858780");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_103);
        UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyID_103.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_103('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_103);
        UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyIDSource_103.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_103(1338044816);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_103);
        UndlyInstrumentParties_NoUndlyInstrumentParties_103.insert(UnderlyingInstrumentPartyRole_103.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_103);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_204("STRING_868073371");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_204);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204.insert(UnderlyingInstrumentPartySubID_204.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_204(1973255469);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_204);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204.insert(UnderlyingInstrumentPartySubIDType_204.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_205("STRING_826462345");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_205);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205.insert(UnderlyingInstrumentPartySubID_205.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_205(1632679925);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_205);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205.insert(UnderlyingInstrumentPartySubIDType_205.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_104;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_104("STRING_815216322");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_104);
        UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyID_104.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_104('3');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_104);
        UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyIDSource_104.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_104(147238874);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_104);
        UndlyInstrumentParties_NoUndlyInstrumentParties_104.insert(UnderlyingInstrumentPartyRole_104.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_104);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_206("STRING_284948742");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_206);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206.insert(UnderlyingInstrumentPartySubID_206.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_206(521348811);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_206);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206.insert(UnderlyingInstrumentPartySubIDType_206.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_105;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_105("STRING_351005107");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_105);
        UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyID_105.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_105('9');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_105);
        UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyIDSource_105.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_105(431401755);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_105);
        UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyRole_105.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_105);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_207("STRING_454930534");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_207);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207.insert(UnderlyingInstrumentPartySubID_207.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_207(1477394794);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_207);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207.insert(UnderlyingInstrumentPartySubIDType_207.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_208("STRING_1350490914");
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubID_208);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208.insert(UnderlyingInstrumentPartySubID_208.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_208(1053875014);
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_208);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208.insert(UnderlyingInstrumentPartySubIDType_208.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_209("STRING_666303469");
          noUndlyInstrumentPartySubIDs_1_0_2_3_2.set(UnderlyingInstrumentPartySubID_209);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209.insert(UnderlyingInstrumentPartySubID_209.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_209(386779163);
          noUndlyInstrumentPartySubIDs_1_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_209);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209.insert(UnderlyingInstrumentPartySubIDType_209.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_2);
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
    FIX::MDEntryType MDEntryType_1('X');
    noMDEntryTypes_0_0.set(MDEntryType_1);
    MDReqGrp_NoMDEntryTypes_0.insert(MDEntryType_1.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_0);

    msg.addGroup(noMDEntryTypes_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_1;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_1;
    FIX::MDEntryType MDEntryType_2('Q');
    noMDEntryTypes_0_1.set(MDEntryType_2);
    MDReqGrp_NoMDEntryTypes_1.insert(MDEntryType_2.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_1);

    msg.addGroup(noMDEntryTypes_0_1);
  }
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_2;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_2;
    FIX::MDEntryType MDEntryType_3('S');
    noMDEntryTypes_0_2.set(MDEntryType_3);
    MDReqGrp_NoMDEntryTypes_2.insert(MDEntryType_3.getString());
    all_values.push_back(MDReqGrp_NoMDEntryTypes_2);

    msg.addGroup(noMDEntryTypes_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_49;
    FIX::PartyID PartyID_49("STRING_837602706");
    noPartyIDs_0_0.set(PartyID_49);
    Parties_NoPartyIDs_49.insert(PartyID_49.getString());
    FIX::PartyIDSource PartyIDSource_49('1');
    noPartyIDs_0_0.set(PartyIDSource_49);
    Parties_NoPartyIDs_49.insert(PartyIDSource_49.getString());
    FIX::PartyRole PartyRole_49(49);
    noPartyIDs_0_0.set(PartyRole_49);
    Parties_NoPartyIDs_49.insert(PartyRole_49.getString());
    all_values.push_back(Parties_NoPartyIDs_49);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_97;
      FIX::PartySubID PartySubID_97("STRING_1482834967");
      noPartySubIDs_0_1_0.set(PartySubID_97);
      PtysSubGrp_NoPartySubIDs_97.insert(PartySubID_97.getString());
      FIX::PartySubIDType PartySubIDType_97(26);
      noPartySubIDs_0_1_0.set(PartySubIDType_97);
      PtysSubGrp_NoPartySubIDs_97.insert(PartySubIDType_97.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_97);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_98;
      FIX::PartySubID PartySubID_98("STRING_803793563");
      noPartySubIDs_0_1_1.set(PartySubID_98);
      PtysSubGrp_NoPartySubIDs_98.insert(PartySubID_98.getString());
      FIX::PartySubIDType PartySubIDType_98(6);
      noPartySubIDs_0_1_1.set(PartySubIDType_98);
      PtysSubGrp_NoPartySubIDs_98.insert(PartySubIDType_98.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_98);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_99;
      FIX::PartySubID PartySubID_99("STRING_2088321881");
      noPartySubIDs_0_1_2.set(PartySubID_99);
      PtysSubGrp_NoPartySubIDs_99.insert(PartySubID_99.getString());
      FIX::PartySubIDType PartySubIDType_99(30);
      noPartySubIDs_0_1_2.set(PartySubIDType_99);
      PtysSubGrp_NoPartySubIDs_99.insert(PartySubIDType_99.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_99);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_50;
    FIX::PartyID PartyID_50("STRING_2123823111");
    noPartyIDs_0_1.set(PartyID_50);
    Parties_NoPartyIDs_50.insert(PartyID_50.getString());
    FIX::PartyIDSource PartyIDSource_50('E');
    noPartyIDs_0_1.set(PartyIDSource_50);
    Parties_NoPartyIDs_50.insert(PartyIDSource_50.getString());
    FIX::PartyRole PartyRole_50(84);
    noPartyIDs_0_1.set(PartyRole_50);
    Parties_NoPartyIDs_50.insert(PartyRole_50.getString());
    all_values.push_back(Parties_NoPartyIDs_50);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_100;
      FIX::PartySubID PartySubID_100("STRING_613274570");
      noPartySubIDs_1_1_0.set(PartySubID_100);
      PtysSubGrp_NoPartySubIDs_100.insert(PartySubID_100.getString());
      FIX::PartySubIDType PartySubIDType_100(26);
      noPartySubIDs_1_1_0.set(PartySubIDType_100);
      PtysSubGrp_NoPartySubIDs_100.insert(PartySubIDType_100.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_100);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_101;
      FIX::PartySubID PartySubID_101("STRING_141361276");
      noPartySubIDs_1_1_1.set(PartySubID_101);
      PtysSubGrp_NoPartySubIDs_101.insert(PartySubID_101.getString());
      FIX::PartySubIDType PartySubIDType_101(32);
      noPartySubIDs_1_1_1.set(PartySubIDType_101);
      PtysSubGrp_NoPartySubIDs_101.insert(PartySubIDType_101.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_101);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_51;
    FIX::PartyID PartyID_51("STRING_1388979280");
    noPartyIDs_0_2.set(PartyID_51);
    Parties_NoPartyIDs_51.insert(PartyID_51.getString());
    FIX::PartyIDSource PartyIDSource_51('6');
    noPartyIDs_0_2.set(PartyIDSource_51);
    Parties_NoPartyIDs_51.insert(PartyIDSource_51.getString());
    FIX::PartyRole PartyRole_51(82);
    noPartyIDs_0_2.set(PartyRole_51);
    Parties_NoPartyIDs_51.insert(PartyRole_51.getString());
    all_values.push_back(Parties_NoPartyIDs_51);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_102;
      FIX::PartySubID PartySubID_102("STRING_350843092");
      noPartySubIDs_2_1_0.set(PartySubID_102);
      PtysSubGrp_NoPartySubIDs_102.insert(PartySubID_102.getString());
      FIX::PartySubIDType PartySubIDType_102(5);
      noPartySubIDs_2_1_0.set(PartySubIDType_102);
      PtysSubGrp_NoPartySubIDs_102.insert(PartySubIDType_102.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_102);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_103;
      FIX::PartySubID PartySubID_103("STRING_1385193896");
      noPartySubIDs_2_1_1.set(PartySubID_103);
      PtysSubGrp_NoPartySubIDs_103.insert(PartySubID_103.getString());
      FIX::PartySubIDType PartySubIDType_103(19);
      noPartySubIDs_2_1_1.set(PartySubIDType_103);
      PtysSubGrp_NoPartySubIDs_103.insert(PartySubIDType_103.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_103);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_2;
    FIX::TradingSessionID TradingSessionID_21("STRING_6");
    noTradingSessions_0_0.set(TradingSessionID_21);
    TrdgSesGrp_NoTradingSessions_2.insert(TradingSessionID_21.getString());
    FIX::TradingSessionSubID TradingSessionSubID_21("STRING_4");
    noTradingSessions_0_0.set(TradingSessionSubID_21);
    TrdgSesGrp_NoTradingSessions_2.insert(TradingSessionSubID_21.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_2);

    msg.addGroup(noTradingSessions_0_0);
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
