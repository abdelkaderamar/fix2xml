#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CrossOrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CrossOrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> CrossOrderCancelRequest_0;
  FIX::CrossID CrossID_1("STRING_1289043034");
  msg.set(CrossID_1);
  CrossOrderCancelRequest_0.insert(CrossID_1.getString());
  FIX::CrossPrioritization CrossPrioritization_1(0);
  msg.set(CrossPrioritization_1);
  CrossOrderCancelRequest_0.insert(CrossPrioritization_1.getString());
  FIX::CrossType CrossType_1(1);
  msg.set(CrossType_1);
  CrossOrderCancelRequest_0.insert(CrossType_1.getString());
  FIX::HostCrossID HostCrossID_1("STRING_521125447");
  msg.set(HostCrossID_1);
  CrossOrderCancelRequest_0.insert(HostCrossID_1.getString());
  FIX::OrderID OrderID_15("STRING_588515437");
  msg.set(OrderID_15);
  CrossOrderCancelRequest_0.insert(OrderID_15.getString());
  FIX::OrigCrossID OrigCrossID_1("STRING_393284721");
  msg.set(OrigCrossID_1);
  CrossOrderCancelRequest_0.insert(OrigCrossID_1.getString());
  FIX::TransactTime TransactTime_15(FIX::UTCTIMESTAMP(19, 53, 31, 17, 11, 2008));
  msg.set(TransactTime_15);
  CrossOrderCancelRequest_0.insert(TransactTime_15.getString());
  all_values.push_back(CrossOrderCancelRequest_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_24;
    FIX::EncodedLegIssuer EncodedLegIssuer_24("DATA_1157964458");
    noLegs_0_0.set(EncodedLegIssuer_24);
    InstrumentLeg_24.insert(EncodedLegIssuer_24.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_24(1683805426);
    noLegs_0_0.set(EncodedLegIssuerLen_24);
    InstrumentLeg_24.insert(EncodedLegIssuerLen_24.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_24("DATA_967277751");
    noLegs_0_0.set(EncodedLegSecurityDesc_24);
    InstrumentLeg_24.insert(EncodedLegSecurityDesc_24.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_24(406076957);
    noLegs_0_0.set(EncodedLegSecurityDescLen_24);
    InstrumentLeg_24.insert(EncodedLegSecurityDescLen_24.getString());
    FIX::LegCFICode LegCFICode_24("STRING_1699832892");
    noLegs_0_0.set(LegCFICode_24);
    InstrumentLeg_24.insert(LegCFICode_24.getString());
    FIX::LegContractMultiplier LegContractMultiplier_24;
    LegContractMultiplier_24.setString("8852564");
    noLegs_0_0.set(LegContractMultiplier_24);
    InstrumentLeg_24.insert(LegContractMultiplier_24.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_24(1247681857);
    noLegs_0_0.set(LegContractMultiplierUnit_24);
    InstrumentLeg_24.insert(LegContractMultiplierUnit_24.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_24("MONTHYEAR_922924183");
    noLegs_0_0.set(LegContractSettlMonth_24);
    InstrumentLeg_24.insert(LegContractSettlMonth_24.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_24("COUNTRY_1539824570");
    noLegs_0_0.set(LegCountryOfIssue_24);
    InstrumentLeg_24.insert(LegCountryOfIssue_24.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_24("LOCALMKTDATE_966859667");
    noLegs_0_0.set(LegCouponPaymentDate_24);
    InstrumentLeg_24.insert(LegCouponPaymentDate_24.getString());
    FIX::LegCouponRate LegCouponRate_24;
    LegCouponRate_24.setString("69.690000");
    noLegs_0_0.set(LegCouponRate_24);
    InstrumentLeg_24.insert(LegCouponRate_24.getString());
    FIX::LegCreditRating LegCreditRating_24("STRING_619362424");
    noLegs_0_0.set(LegCreditRating_24);
    InstrumentLeg_24.insert(LegCreditRating_24.getString());
    FIX::LegCurrency LegCurrency_24("JPY");
    noLegs_0_0.set(LegCurrency_24);
    InstrumentLeg_24.insert(LegCurrency_24.getString());
    FIX::LegDatedDate LegDatedDate_24("LOCALMKTDATE_862139901");
    noLegs_0_0.set(LegDatedDate_24);
    InstrumentLeg_24.insert(LegDatedDate_24.getString());
    FIX::LegExerciseStyle LegExerciseStyle_24(1673600337);
    noLegs_0_0.set(LegExerciseStyle_24);
    InstrumentLeg_24.insert(LegExerciseStyle_24.getString());
    FIX::LegFactor LegFactor_24;
    LegFactor_24.setString("19085124");
    noLegs_0_0.set(LegFactor_24);
    InstrumentLeg_24.insert(LegFactor_24.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_24(3699287);
    noLegs_0_0.set(LegFlowScheduleType_24);
    InstrumentLeg_24.insert(LegFlowScheduleType_24.getString());
    FIX::LegInstrRegistry LegInstrRegistry_24("STRING_615879104");
    noLegs_0_0.set(LegInstrRegistry_24);
    InstrumentLeg_24.insert(LegInstrRegistry_24.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_24("LOCALMKTDATE_50816323");
    noLegs_0_0.set(LegInterestAccrualDate_24);
    InstrumentLeg_24.insert(LegInterestAccrualDate_24.getString());
    FIX::LegIssueDate LegIssueDate_24("LOCALMKTDATE_524824734");
    noLegs_0_0.set(LegIssueDate_24);
    InstrumentLeg_24.insert(LegIssueDate_24.getString());
    FIX::LegIssuer LegIssuer_24("STRING_1204394541");
    noLegs_0_0.set(LegIssuer_24);
    InstrumentLeg_24.insert(LegIssuer_24.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_24("STRING_444101044");
    noLegs_0_0.set(LegLocaleOfIssue_24);
    InstrumentLeg_24.insert(LegLocaleOfIssue_24.getString());
    FIX::LegMaturityDate LegMaturityDate_24("LOCALMKTDATE_701795586");
    noLegs_0_0.set(LegMaturityDate_24);
    InstrumentLeg_24.insert(LegMaturityDate_24.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_24("MONTHYEAR_1460938624");
    noLegs_0_0.set(LegMaturityMonthYear_24);
    InstrumentLeg_24.insert(LegMaturityMonthYear_24.getString());
    FIX::LegMaturityTime LegMaturityTime_24("TZTIMEONLY_15044269");
    noLegs_0_0.set(LegMaturityTime_24);
    InstrumentLeg_24.insert(LegMaturityTime_24.getString());
    FIX::LegOptAttribute LegOptAttribute_24('1');
    noLegs_0_0.set(LegOptAttribute_24);
    InstrumentLeg_24.insert(LegOptAttribute_24.getString());
    FIX::LegOptionRatio LegOptionRatio_24;
    LegOptionRatio_24.setString("2524581");
    noLegs_0_0.set(LegOptionRatio_24);
    InstrumentLeg_24.insert(LegOptionRatio_24.getString());
    FIX::LegPool LegPool_24("STRING_89615700");
    noLegs_0_0.set(LegPool_24);
    InstrumentLeg_24.insert(LegPool_24.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_24("STRING_229775306");
    noLegs_0_0.set(LegPriceUnitOfMeasure_24);
    InstrumentLeg_24.insert(LegPriceUnitOfMeasure_24.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_24;
    LegPriceUnitOfMeasureQty_24.setString("13554029");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_24);
    InstrumentLeg_24.insert(LegPriceUnitOfMeasureQty_24.getString());
    FIX::LegProduct LegProduct_24(1247580158);
    noLegs_0_0.set(LegProduct_24);
    InstrumentLeg_24.insert(LegProduct_24.getString());
    FIX::LegPutOrCall LegPutOrCall_24(1913580732);
    noLegs_0_0.set(LegPutOrCall_24);
    InstrumentLeg_24.insert(LegPutOrCall_24.getString());
    FIX::LegRatioQty LegRatioQty_24;
    LegRatioQty_24.setString("1751970");
    noLegs_0_0.set(LegRatioQty_24);
    InstrumentLeg_24.insert(LegRatioQty_24.getString());
    FIX::LegRedemptionDate LegRedemptionDate_24("LOCALMKTDATE_1653657115");
    noLegs_0_0.set(LegRedemptionDate_24);
    InstrumentLeg_24.insert(LegRedemptionDate_24.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_24("STRING_1465929976");
    noLegs_0_0.set(LegRepoCollateralSecurityType_24);
    InstrumentLeg_24.insert(LegRepoCollateralSecurityType_24.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_24;
    LegRepurchaseRate_24.setString("34.900000");
    noLegs_0_0.set(LegRepurchaseRate_24);
    InstrumentLeg_24.insert(LegRepurchaseRate_24.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_24(753855324);
    noLegs_0_0.set(LegRepurchaseTerm_24);
    InstrumentLeg_24.insert(LegRepurchaseTerm_24.getString());
    FIX::LegSecurityDesc LegSecurityDesc_24("STRING_241370512");
    noLegs_0_0.set(LegSecurityDesc_24);
    InstrumentLeg_24.insert(LegSecurityDesc_24.getString());
    FIX::LegSecurityExchange LegSecurityExchange_24("EXCHANGE_452794412");
    noLegs_0_0.set(LegSecurityExchange_24);
    InstrumentLeg_24.insert(LegSecurityExchange_24.getString());
    FIX::LegSecurityID LegSecurityID_24("STRING_1720714991");
    noLegs_0_0.set(LegSecurityID_24);
    InstrumentLeg_24.insert(LegSecurityID_24.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_24("STRING_753767481");
    noLegs_0_0.set(LegSecurityIDSource_24);
    InstrumentLeg_24.insert(LegSecurityIDSource_24.getString());
    FIX::LegSecuritySubType LegSecuritySubType_24("STRING_1072156837");
    noLegs_0_0.set(LegSecuritySubType_24);
    InstrumentLeg_24.insert(LegSecuritySubType_24.getString());
    FIX::LegSecurityType LegSecurityType_24("STRING_1614848955");
    noLegs_0_0.set(LegSecurityType_24);
    InstrumentLeg_24.insert(LegSecurityType_24.getString());
    FIX::LegSide LegSide_24('5');
    noLegs_0_0.set(LegSide_24);
    InstrumentLeg_24.insert(LegSide_24.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_24("STRING_1934296738");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_24);
    InstrumentLeg_24.insert(LegStateOrProvinceOfIssue_24.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_24("CHF");
    noLegs_0_0.set(LegStrikeCurrency_24);
    InstrumentLeg_24.insert(LegStrikeCurrency_24.getString());
    FIX::LegStrikePrice LegStrikePrice_24;
    LegStrikePrice_24.setString("19379960");
    noLegs_0_0.set(LegStrikePrice_24);
    InstrumentLeg_24.insert(LegStrikePrice_24.getString());
    FIX::LegSymbol LegSymbol_24("STRING_1756844749");
    noLegs_0_0.set(LegSymbol_24);
    InstrumentLeg_24.insert(LegSymbol_24.getString());
    FIX::LegSymbolSfx LegSymbolSfx_24("STRING_407710714");
    noLegs_0_0.set(LegSymbolSfx_24);
    InstrumentLeg_24.insert(LegSymbolSfx_24.getString());
    FIX::LegTimeUnit LegTimeUnit_24("STRING_315337111");
    noLegs_0_0.set(LegTimeUnit_24);
    InstrumentLeg_24.insert(LegTimeUnit_24.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_24("STRING_813755642");
    noLegs_0_0.set(LegUnitOfMeasure_24);
    InstrumentLeg_24.insert(LegUnitOfMeasure_24.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_24;
    LegUnitOfMeasureQty_24.setString("8518117");
    noLegs_0_0.set(LegUnitOfMeasureQty_24);
    InstrumentLeg_24.insert(LegUnitOfMeasureQty_24.getString());
    all_values.push_back(InstrumentLeg_24);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_53;
      FIX::LegSecurityAltID LegSecurityAltID_53("STRING_127210618");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_53);
      LegSecAltIDGrp_NoLegSecurityAltID_53.insert(LegSecurityAltID_53.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_53("STRING_866856028");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_53);
      LegSecAltIDGrp_NoLegSecurityAltID_53.insert(LegSecurityAltIDSource_53.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_53);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_54;
      FIX::LegSecurityAltID LegSecurityAltID_54("STRING_704011688");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_54);
      LegSecAltIDGrp_NoLegSecurityAltID_54.insert(LegSecurityAltID_54.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_54("STRING_379668739");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_54);
      LegSecAltIDGrp_NoLegSecurityAltID_54.insert(LegSecurityAltIDSource_54.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_54);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_55;
      FIX::LegSecurityAltID LegSecurityAltID_55("STRING_956471728");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_55);
      LegSecAltIDGrp_NoLegSecurityAltID_55.insert(LegSecurityAltID_55.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_55("STRING_933786994");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_55);
      LegSecAltIDGrp_NoLegSecurityAltID_55.insert(LegSecurityAltIDSource_55.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_55);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_25;
    FIX::EncodedLegIssuer EncodedLegIssuer_25("DATA_1735071648");
    noLegs_0_1.set(EncodedLegIssuer_25);
    InstrumentLeg_25.insert(EncodedLegIssuer_25.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_25(56568238);
    noLegs_0_1.set(EncodedLegIssuerLen_25);
    InstrumentLeg_25.insert(EncodedLegIssuerLen_25.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_25("DATA_699884078");
    noLegs_0_1.set(EncodedLegSecurityDesc_25);
    InstrumentLeg_25.insert(EncodedLegSecurityDesc_25.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_25(1910268660);
    noLegs_0_1.set(EncodedLegSecurityDescLen_25);
    InstrumentLeg_25.insert(EncodedLegSecurityDescLen_25.getString());
    FIX::LegCFICode LegCFICode_25("STRING_1710225353");
    noLegs_0_1.set(LegCFICode_25);
    InstrumentLeg_25.insert(LegCFICode_25.getString());
    FIX::LegContractMultiplier LegContractMultiplier_25;
    LegContractMultiplier_25.setString("183304");
    noLegs_0_1.set(LegContractMultiplier_25);
    InstrumentLeg_25.insert(LegContractMultiplier_25.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_25(823238502);
    noLegs_0_1.set(LegContractMultiplierUnit_25);
    InstrumentLeg_25.insert(LegContractMultiplierUnit_25.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_25("MONTHYEAR_316597029");
    noLegs_0_1.set(LegContractSettlMonth_25);
    InstrumentLeg_25.insert(LegContractSettlMonth_25.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_25("COUNTRY_259700918");
    noLegs_0_1.set(LegCountryOfIssue_25);
    InstrumentLeg_25.insert(LegCountryOfIssue_25.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_25("LOCALMKTDATE_1276032915");
    noLegs_0_1.set(LegCouponPaymentDate_25);
    InstrumentLeg_25.insert(LegCouponPaymentDate_25.getString());
    FIX::LegCouponRate LegCouponRate_25;
    LegCouponRate_25.setString("20.210000");
    noLegs_0_1.set(LegCouponRate_25);
    InstrumentLeg_25.insert(LegCouponRate_25.getString());
    FIX::LegCreditRating LegCreditRating_25("STRING_1013468400");
    noLegs_0_1.set(LegCreditRating_25);
    InstrumentLeg_25.insert(LegCreditRating_25.getString());
    FIX::LegCurrency LegCurrency_25("JPY");
    noLegs_0_1.set(LegCurrency_25);
    InstrumentLeg_25.insert(LegCurrency_25.getString());
    FIX::LegDatedDate LegDatedDate_25("LOCALMKTDATE_1609333968");
    noLegs_0_1.set(LegDatedDate_25);
    InstrumentLeg_25.insert(LegDatedDate_25.getString());
    FIX::LegExerciseStyle LegExerciseStyle_25(2135002842);
    noLegs_0_1.set(LegExerciseStyle_25);
    InstrumentLeg_25.insert(LegExerciseStyle_25.getString());
    FIX::LegFactor LegFactor_25;
    LegFactor_25.setString("4981593");
    noLegs_0_1.set(LegFactor_25);
    InstrumentLeg_25.insert(LegFactor_25.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_25(1966228359);
    noLegs_0_1.set(LegFlowScheduleType_25);
    InstrumentLeg_25.insert(LegFlowScheduleType_25.getString());
    FIX::LegInstrRegistry LegInstrRegistry_25("STRING_1925515219");
    noLegs_0_1.set(LegInstrRegistry_25);
    InstrumentLeg_25.insert(LegInstrRegistry_25.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_25("LOCALMKTDATE_107520426");
    noLegs_0_1.set(LegInterestAccrualDate_25);
    InstrumentLeg_25.insert(LegInterestAccrualDate_25.getString());
    FIX::LegIssueDate LegIssueDate_25("LOCALMKTDATE_226455425");
    noLegs_0_1.set(LegIssueDate_25);
    InstrumentLeg_25.insert(LegIssueDate_25.getString());
    FIX::LegIssuer LegIssuer_25("STRING_93368682");
    noLegs_0_1.set(LegIssuer_25);
    InstrumentLeg_25.insert(LegIssuer_25.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_25("STRING_921276068");
    noLegs_0_1.set(LegLocaleOfIssue_25);
    InstrumentLeg_25.insert(LegLocaleOfIssue_25.getString());
    FIX::LegMaturityDate LegMaturityDate_25("LOCALMKTDATE_1078267184");
    noLegs_0_1.set(LegMaturityDate_25);
    InstrumentLeg_25.insert(LegMaturityDate_25.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_25("MONTHYEAR_1110501380");
    noLegs_0_1.set(LegMaturityMonthYear_25);
    InstrumentLeg_25.insert(LegMaturityMonthYear_25.getString());
    FIX::LegMaturityTime LegMaturityTime_25("TZTIMEONLY_1048486686");
    noLegs_0_1.set(LegMaturityTime_25);
    InstrumentLeg_25.insert(LegMaturityTime_25.getString());
    FIX::LegOptAttribute LegOptAttribute_25('1');
    noLegs_0_1.set(LegOptAttribute_25);
    InstrumentLeg_25.insert(LegOptAttribute_25.getString());
    FIX::LegOptionRatio LegOptionRatio_25;
    LegOptionRatio_25.setString("18145130");
    noLegs_0_1.set(LegOptionRatio_25);
    InstrumentLeg_25.insert(LegOptionRatio_25.getString());
    FIX::LegPool LegPool_25("STRING_1428155425");
    noLegs_0_1.set(LegPool_25);
    InstrumentLeg_25.insert(LegPool_25.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_25("STRING_754111293");
    noLegs_0_1.set(LegPriceUnitOfMeasure_25);
    InstrumentLeg_25.insert(LegPriceUnitOfMeasure_25.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_25;
    LegPriceUnitOfMeasureQty_25.setString("6008164");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_25);
    InstrumentLeg_25.insert(LegPriceUnitOfMeasureQty_25.getString());
    FIX::LegProduct LegProduct_25(1015743425);
    noLegs_0_1.set(LegProduct_25);
    InstrumentLeg_25.insert(LegProduct_25.getString());
    FIX::LegPutOrCall LegPutOrCall_25(810679532);
    noLegs_0_1.set(LegPutOrCall_25);
    InstrumentLeg_25.insert(LegPutOrCall_25.getString());
    FIX::LegRatioQty LegRatioQty_25;
    LegRatioQty_25.setString("13007004");
    noLegs_0_1.set(LegRatioQty_25);
    InstrumentLeg_25.insert(LegRatioQty_25.getString());
    FIX::LegRedemptionDate LegRedemptionDate_25("LOCALMKTDATE_778528437");
    noLegs_0_1.set(LegRedemptionDate_25);
    InstrumentLeg_25.insert(LegRedemptionDate_25.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_25("STRING_373421237");
    noLegs_0_1.set(LegRepoCollateralSecurityType_25);
    InstrumentLeg_25.insert(LegRepoCollateralSecurityType_25.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_25;
    LegRepurchaseRate_25.setString("8.990000");
    noLegs_0_1.set(LegRepurchaseRate_25);
    InstrumentLeg_25.insert(LegRepurchaseRate_25.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_25(1601766940);
    noLegs_0_1.set(LegRepurchaseTerm_25);
    InstrumentLeg_25.insert(LegRepurchaseTerm_25.getString());
    FIX::LegSecurityDesc LegSecurityDesc_25("STRING_690018267");
    noLegs_0_1.set(LegSecurityDesc_25);
    InstrumentLeg_25.insert(LegSecurityDesc_25.getString());
    FIX::LegSecurityExchange LegSecurityExchange_25("EXCHANGE_1578731817");
    noLegs_0_1.set(LegSecurityExchange_25);
    InstrumentLeg_25.insert(LegSecurityExchange_25.getString());
    FIX::LegSecurityID LegSecurityID_25("STRING_730316207");
    noLegs_0_1.set(LegSecurityID_25);
    InstrumentLeg_25.insert(LegSecurityID_25.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_25("STRING_579846640");
    noLegs_0_1.set(LegSecurityIDSource_25);
    InstrumentLeg_25.insert(LegSecurityIDSource_25.getString());
    FIX::LegSecuritySubType LegSecuritySubType_25("STRING_444716569");
    noLegs_0_1.set(LegSecuritySubType_25);
    InstrumentLeg_25.insert(LegSecuritySubType_25.getString());
    FIX::LegSecurityType LegSecurityType_25("STRING_931022311");
    noLegs_0_1.set(LegSecurityType_25);
    InstrumentLeg_25.insert(LegSecurityType_25.getString());
    FIX::LegSide LegSide_25('2');
    noLegs_0_1.set(LegSide_25);
    InstrumentLeg_25.insert(LegSide_25.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_25("STRING_2054050537");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_25);
    InstrumentLeg_25.insert(LegStateOrProvinceOfIssue_25.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_25("GBP");
    noLegs_0_1.set(LegStrikeCurrency_25);
    InstrumentLeg_25.insert(LegStrikeCurrency_25.getString());
    FIX::LegStrikePrice LegStrikePrice_25;
    LegStrikePrice_25.setString("18727952");
    noLegs_0_1.set(LegStrikePrice_25);
    InstrumentLeg_25.insert(LegStrikePrice_25.getString());
    FIX::LegSymbol LegSymbol_25("STRING_696573076");
    noLegs_0_1.set(LegSymbol_25);
    InstrumentLeg_25.insert(LegSymbol_25.getString());
    FIX::LegSymbolSfx LegSymbolSfx_25("STRING_542720072");
    noLegs_0_1.set(LegSymbolSfx_25);
    InstrumentLeg_25.insert(LegSymbolSfx_25.getString());
    FIX::LegTimeUnit LegTimeUnit_25("STRING_2099250674");
    noLegs_0_1.set(LegTimeUnit_25);
    InstrumentLeg_25.insert(LegTimeUnit_25.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_25("STRING_789941758");
    noLegs_0_1.set(LegUnitOfMeasure_25);
    InstrumentLeg_25.insert(LegUnitOfMeasure_25.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_25;
    LegUnitOfMeasureQty_25.setString("14639961");
    noLegs_0_1.set(LegUnitOfMeasureQty_25);
    InstrumentLeg_25.insert(LegUnitOfMeasureQty_25.getString());
    all_values.push_back(InstrumentLeg_25);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_56;
      FIX::LegSecurityAltID LegSecurityAltID_56("STRING_1900443139");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_56);
      LegSecAltIDGrp_NoLegSecurityAltID_56.insert(LegSecurityAltID_56.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_56("STRING_364999179");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_56);
      LegSecAltIDGrp_NoLegSecurityAltID_56.insert(LegSecurityAltIDSource_56.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_56);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_57;
      FIX::LegSecurityAltID LegSecurityAltID_57("STRING_827673775");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_57);
      LegSecAltIDGrp_NoLegSecurityAltID_57.insert(LegSecurityAltID_57.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_57("STRING_1567472559");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_57);
      LegSecAltIDGrp_NoLegSecurityAltID_57.insert(LegSecurityAltIDSource_57.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_57);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_58;
      FIX::LegSecurityAltID LegSecurityAltID_58("STRING_1793154605");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_58);
      LegSecAltIDGrp_NoLegSecurityAltID_58.insert(LegSecurityAltID_58.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_58("STRING_1581785069");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_58);
      LegSecAltIDGrp_NoLegSecurityAltID_58.insert(LegSecurityAltIDSource_58.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_58);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_26;
    FIX::EncodedLegIssuer EncodedLegIssuer_26("DATA_20805326");
    noLegs_0_2.set(EncodedLegIssuer_26);
    InstrumentLeg_26.insert(EncodedLegIssuer_26.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_26(661414382);
    noLegs_0_2.set(EncodedLegIssuerLen_26);
    InstrumentLeg_26.insert(EncodedLegIssuerLen_26.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_26("DATA_244980953");
    noLegs_0_2.set(EncodedLegSecurityDesc_26);
    InstrumentLeg_26.insert(EncodedLegSecurityDesc_26.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_26(1321505818);
    noLegs_0_2.set(EncodedLegSecurityDescLen_26);
    InstrumentLeg_26.insert(EncodedLegSecurityDescLen_26.getString());
    FIX::LegCFICode LegCFICode_26("STRING_1439942820");
    noLegs_0_2.set(LegCFICode_26);
    InstrumentLeg_26.insert(LegCFICode_26.getString());
    FIX::LegContractMultiplier LegContractMultiplier_26;
    LegContractMultiplier_26.setString("6184021");
    noLegs_0_2.set(LegContractMultiplier_26);
    InstrumentLeg_26.insert(LegContractMultiplier_26.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_26(493053069);
    noLegs_0_2.set(LegContractMultiplierUnit_26);
    InstrumentLeg_26.insert(LegContractMultiplierUnit_26.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_26("MONTHYEAR_894226112");
    noLegs_0_2.set(LegContractSettlMonth_26);
    InstrumentLeg_26.insert(LegContractSettlMonth_26.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_26("COUNTRY_1308420457");
    noLegs_0_2.set(LegCountryOfIssue_26);
    InstrumentLeg_26.insert(LegCountryOfIssue_26.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_26("LOCALMKTDATE_2071784887");
    noLegs_0_2.set(LegCouponPaymentDate_26);
    InstrumentLeg_26.insert(LegCouponPaymentDate_26.getString());
    FIX::LegCouponRate LegCouponRate_26;
    LegCouponRate_26.setString("23.190000");
    noLegs_0_2.set(LegCouponRate_26);
    InstrumentLeg_26.insert(LegCouponRate_26.getString());
    FIX::LegCreditRating LegCreditRating_26("STRING_1888267097");
    noLegs_0_2.set(LegCreditRating_26);
    InstrumentLeg_26.insert(LegCreditRating_26.getString());
    FIX::LegCurrency LegCurrency_26("USD");
    noLegs_0_2.set(LegCurrency_26);
    InstrumentLeg_26.insert(LegCurrency_26.getString());
    FIX::LegDatedDate LegDatedDate_26("LOCALMKTDATE_1825307418");
    noLegs_0_2.set(LegDatedDate_26);
    InstrumentLeg_26.insert(LegDatedDate_26.getString());
    FIX::LegExerciseStyle LegExerciseStyle_26(275584698);
    noLegs_0_2.set(LegExerciseStyle_26);
    InstrumentLeg_26.insert(LegExerciseStyle_26.getString());
    FIX::LegFactor LegFactor_26;
    LegFactor_26.setString("13266224");
    noLegs_0_2.set(LegFactor_26);
    InstrumentLeg_26.insert(LegFactor_26.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_26(113023416);
    noLegs_0_2.set(LegFlowScheduleType_26);
    InstrumentLeg_26.insert(LegFlowScheduleType_26.getString());
    FIX::LegInstrRegistry LegInstrRegistry_26("STRING_896298");
    noLegs_0_2.set(LegInstrRegistry_26);
    InstrumentLeg_26.insert(LegInstrRegistry_26.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_26("LOCALMKTDATE_2023195563");
    noLegs_0_2.set(LegInterestAccrualDate_26);
    InstrumentLeg_26.insert(LegInterestAccrualDate_26.getString());
    FIX::LegIssueDate LegIssueDate_26("LOCALMKTDATE_655743488");
    noLegs_0_2.set(LegIssueDate_26);
    InstrumentLeg_26.insert(LegIssueDate_26.getString());
    FIX::LegIssuer LegIssuer_26("STRING_2100146972");
    noLegs_0_2.set(LegIssuer_26);
    InstrumentLeg_26.insert(LegIssuer_26.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_26("STRING_665653673");
    noLegs_0_2.set(LegLocaleOfIssue_26);
    InstrumentLeg_26.insert(LegLocaleOfIssue_26.getString());
    FIX::LegMaturityDate LegMaturityDate_26("LOCALMKTDATE_2119739629");
    noLegs_0_2.set(LegMaturityDate_26);
    InstrumentLeg_26.insert(LegMaturityDate_26.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_26("MONTHYEAR_982697535");
    noLegs_0_2.set(LegMaturityMonthYear_26);
    InstrumentLeg_26.insert(LegMaturityMonthYear_26.getString());
    FIX::LegMaturityTime LegMaturityTime_26("TZTIMEONLY_418613164");
    noLegs_0_2.set(LegMaturityTime_26);
    InstrumentLeg_26.insert(LegMaturityTime_26.getString());
    FIX::LegOptAttribute LegOptAttribute_26('3');
    noLegs_0_2.set(LegOptAttribute_26);
    InstrumentLeg_26.insert(LegOptAttribute_26.getString());
    FIX::LegOptionRatio LegOptionRatio_26;
    LegOptionRatio_26.setString("18103713");
    noLegs_0_2.set(LegOptionRatio_26);
    InstrumentLeg_26.insert(LegOptionRatio_26.getString());
    FIX::LegPool LegPool_26("STRING_1986085724");
    noLegs_0_2.set(LegPool_26);
    InstrumentLeg_26.insert(LegPool_26.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_26("STRING_2130409766");
    noLegs_0_2.set(LegPriceUnitOfMeasure_26);
    InstrumentLeg_26.insert(LegPriceUnitOfMeasure_26.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_26;
    LegPriceUnitOfMeasureQty_26.setString("12446727");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_26);
    InstrumentLeg_26.insert(LegPriceUnitOfMeasureQty_26.getString());
    FIX::LegProduct LegProduct_26(2006891050);
    noLegs_0_2.set(LegProduct_26);
    InstrumentLeg_26.insert(LegProduct_26.getString());
    FIX::LegPutOrCall LegPutOrCall_26(644340500);
    noLegs_0_2.set(LegPutOrCall_26);
    InstrumentLeg_26.insert(LegPutOrCall_26.getString());
    FIX::LegRatioQty LegRatioQty_26;
    LegRatioQty_26.setString("14896536");
    noLegs_0_2.set(LegRatioQty_26);
    InstrumentLeg_26.insert(LegRatioQty_26.getString());
    FIX::LegRedemptionDate LegRedemptionDate_26("LOCALMKTDATE_1180913220");
    noLegs_0_2.set(LegRedemptionDate_26);
    InstrumentLeg_26.insert(LegRedemptionDate_26.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_26("STRING_2084283320");
    noLegs_0_2.set(LegRepoCollateralSecurityType_26);
    InstrumentLeg_26.insert(LegRepoCollateralSecurityType_26.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_26;
    LegRepurchaseRate_26.setString("58.750000");
    noLegs_0_2.set(LegRepurchaseRate_26);
    InstrumentLeg_26.insert(LegRepurchaseRate_26.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_26(1673966290);
    noLegs_0_2.set(LegRepurchaseTerm_26);
    InstrumentLeg_26.insert(LegRepurchaseTerm_26.getString());
    FIX::LegSecurityDesc LegSecurityDesc_26("STRING_831025784");
    noLegs_0_2.set(LegSecurityDesc_26);
    InstrumentLeg_26.insert(LegSecurityDesc_26.getString());
    FIX::LegSecurityExchange LegSecurityExchange_26("EXCHANGE_1268992684");
    noLegs_0_2.set(LegSecurityExchange_26);
    InstrumentLeg_26.insert(LegSecurityExchange_26.getString());
    FIX::LegSecurityID LegSecurityID_26("STRING_1598267529");
    noLegs_0_2.set(LegSecurityID_26);
    InstrumentLeg_26.insert(LegSecurityID_26.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_26("STRING_308084455");
    noLegs_0_2.set(LegSecurityIDSource_26);
    InstrumentLeg_26.insert(LegSecurityIDSource_26.getString());
    FIX::LegSecuritySubType LegSecuritySubType_26("STRING_1009776134");
    noLegs_0_2.set(LegSecuritySubType_26);
    InstrumentLeg_26.insert(LegSecuritySubType_26.getString());
    FIX::LegSecurityType LegSecurityType_26("STRING_1967285337");
    noLegs_0_2.set(LegSecurityType_26);
    InstrumentLeg_26.insert(LegSecurityType_26.getString());
    FIX::LegSide LegSide_26('7');
    noLegs_0_2.set(LegSide_26);
    InstrumentLeg_26.insert(LegSide_26.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_26("STRING_687599904");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_26);
    InstrumentLeg_26.insert(LegStateOrProvinceOfIssue_26.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_26("USD");
    noLegs_0_2.set(LegStrikeCurrency_26);
    InstrumentLeg_26.insert(LegStrikeCurrency_26.getString());
    FIX::LegStrikePrice LegStrikePrice_26;
    LegStrikePrice_26.setString("8006233");
    noLegs_0_2.set(LegStrikePrice_26);
    InstrumentLeg_26.insert(LegStrikePrice_26.getString());
    FIX::LegSymbol LegSymbol_26("STRING_96282686");
    noLegs_0_2.set(LegSymbol_26);
    InstrumentLeg_26.insert(LegSymbol_26.getString());
    FIX::LegSymbolSfx LegSymbolSfx_26("STRING_1918499839");
    noLegs_0_2.set(LegSymbolSfx_26);
    InstrumentLeg_26.insert(LegSymbolSfx_26.getString());
    FIX::LegTimeUnit LegTimeUnit_26("STRING_1456366808");
    noLegs_0_2.set(LegTimeUnit_26);
    InstrumentLeg_26.insert(LegTimeUnit_26.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_26("STRING_48946010");
    noLegs_0_2.set(LegUnitOfMeasure_26);
    InstrumentLeg_26.insert(LegUnitOfMeasure_26.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_26;
    LegUnitOfMeasureQty_26.setString("4366698");
    noLegs_0_2.set(LegUnitOfMeasureQty_26);
    InstrumentLeg_26.insert(LegUnitOfMeasureQty_26.getString());
    all_values.push_back(InstrumentLeg_26);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_59;
      FIX::LegSecurityAltID LegSecurityAltID_59("STRING_1031643545");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_59);
      LegSecAltIDGrp_NoLegSecurityAltID_59.insert(LegSecurityAltID_59.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_59("STRING_855283029");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_59);
      LegSecAltIDGrp_NoLegSecurityAltID_59.insert(LegSecurityAltIDSource_59.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_59);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_60;
      FIX::LegSecurityAltID LegSecurityAltID_60("STRING_1765877951");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_60);
      LegSecAltIDGrp_NoLegSecurityAltID_60.insert(LegSecurityAltID_60.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_60("STRING_694531208");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_60);
      LegSecAltIDGrp_NoLegSecurityAltID_60.insert(LegSecurityAltIDSource_60.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_60);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_61;
      FIX::LegSecurityAltID LegSecurityAltID_61("STRING_693885105");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_61);
      LegSecAltIDGrp_NoLegSecurityAltID_61.insert(LegSecurityAltID_61.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_61("STRING_1748804069");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_61);
      LegSecAltIDGrp_NoLegSecurityAltID_61.insert(LegSecurityAltIDSource_61.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_61);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_16;
  FIX::AttachmentPoint AttachmentPoint_16;
  AttachmentPoint_16.setString("39.390000");
  msg.set(AttachmentPoint_16);
  Instrument_16.insert(AttachmentPoint_16.getString());
  FIX::CFICode CFICode_16("STRING_553292507");
  msg.set(CFICode_16);
  Instrument_16.insert(CFICode_16.getString());
  FIX::CPProgram CPProgram_16(99);
  msg.set(CPProgram_16);
  Instrument_16.insert(CPProgram_16.getString());
  FIX::CPRegType CPRegType_16("STRING_1281373976");
  msg.set(CPRegType_16);
  Instrument_16.insert(CPRegType_16.getString());
  FIX::CapPrice CapPrice_16;
  CapPrice_16.setString("17342057");
  msg.set(CapPrice_16);
  Instrument_16.insert(CapPrice_16.getString());
  FIX::ContractMultiplier ContractMultiplier_16;
  ContractMultiplier_16.setString("1824605");
  msg.set(ContractMultiplier_16);
  Instrument_16.insert(ContractMultiplier_16.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_16(2);
  msg.set(ContractMultiplierUnit_16);
  Instrument_16.insert(ContractMultiplierUnit_16.getString());
  FIX::ContractSettlMonth ContractSettlMonth_16("MONTHYEAR_1260688370");
  msg.set(ContractSettlMonth_16);
  Instrument_16.insert(ContractSettlMonth_16.getString());
  FIX::CountryOfIssue CountryOfIssue_16("COUNTRY_1013486378");
  msg.set(CountryOfIssue_16);
  Instrument_16.insert(CountryOfIssue_16.getString());
  FIX::CouponPaymentDate CouponPaymentDate_16("LOCALMKTDATE_363455239");
  msg.set(CouponPaymentDate_16);
  Instrument_16.insert(CouponPaymentDate_16.getString());
  FIX::CouponRate CouponRate_16;
  CouponRate_16.setString("22.510000");
  msg.set(CouponRate_16);
  Instrument_16.insert(CouponRate_16.getString());
  FIX::CreditRating CreditRating_16("STRING_1321570834");
  msg.set(CreditRating_16);
  Instrument_16.insert(CreditRating_16.getString());
  FIX::DatedDate DatedDate_16("LOCALMKTDATE_1373231373");
  msg.set(DatedDate_16);
  Instrument_16.insert(DatedDate_16.getString());
  FIX::DetachmentPoint DetachmentPoint_16;
  DetachmentPoint_16.setString("39.400000");
  msg.set(DetachmentPoint_16);
  Instrument_16.insert(DetachmentPoint_16.getString());
  FIX::EncodedIssuer EncodedIssuer_16("DATA_2037736271");
  msg.set(EncodedIssuer_16);
  Instrument_16.insert(EncodedIssuer_16.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_16(2060831277);
  msg.set(EncodedIssuerLen_16);
  Instrument_16.insert(EncodedIssuerLen_16.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_16("DATA_626660328");
  msg.set(EncodedSecurityDesc_16);
  Instrument_16.insert(EncodedSecurityDesc_16.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_16(1933040548);
  msg.set(EncodedSecurityDescLen_16);
  Instrument_16.insert(EncodedSecurityDescLen_16.getString());
  FIX::ExerciseStyle ExerciseStyle_16(1);
  msg.set(ExerciseStyle_16);
  Instrument_16.insert(ExerciseStyle_16.getString());
  FIX::Factor Factor_16;
  Factor_16.setString("7229430");
  msg.set(Factor_16);
  Instrument_16.insert(Factor_16.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_16(false);
  msg.set(FlexProductEligibilityIndicator_16);
  Instrument_16.insert(FlexProductEligibilityIndicator_16.getString());
  FIX::FlexibleIndicator FlexibleIndicator_16(true);
  msg.set(FlexibleIndicator_16);
  Instrument_16.insert(FlexibleIndicator_16.getString());
  FIX::FloorPrice FloorPrice_16;
  FloorPrice_16.setString("7718890");
  msg.set(FloorPrice_16);
  Instrument_16.insert(FloorPrice_16.getString());
  FIX::FlowScheduleType FlowScheduleType_16(4);
  msg.set(FlowScheduleType_16);
  Instrument_16.insert(FlowScheduleType_16.getString());
  FIX::InstrRegistry InstrRegistry_16("STRING_1451476900");
  msg.set(InstrRegistry_16);
  Instrument_16.insert(InstrRegistry_16.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_16('1');
  msg.set(InstrmtAssignmentMethod_16);
  Instrument_16.insert(InstrmtAssignmentMethod_16.getString());
  FIX::InterestAccrualDate InterestAccrualDate_16("LOCALMKTDATE_848525986");
  msg.set(InterestAccrualDate_16);
  Instrument_16.insert(InterestAccrualDate_16.getString());
  FIX::IssueDate IssueDate_16("LOCALMKTDATE_1069871203");
  msg.set(IssueDate_16);
  Instrument_16.insert(IssueDate_16.getString());
  FIX::Issuer Issuer_16("STRING_350580130");
  msg.set(Issuer_16);
  Instrument_16.insert(Issuer_16.getString());
  FIX::ListMethod ListMethod_16(1);
  msg.set(ListMethod_16);
  Instrument_16.insert(ListMethod_16.getString());
  FIX::LocaleOfIssue LocaleOfIssue_16("STRING_671191624");
  msg.set(LocaleOfIssue_16);
  Instrument_16.insert(LocaleOfIssue_16.getString());
  FIX::MaturityDate MaturityDate_16("LOCALMKTDATE_142300421");
  msg.set(MaturityDate_16);
  Instrument_16.insert(MaturityDate_16.getString());
  FIX::MaturityMonthYear MaturityMonthYear_16("MONTHYEAR_2095703599");
  msg.set(MaturityMonthYear_16);
  Instrument_16.insert(MaturityMonthYear_16.getString());
  FIX::MaturityTime MaturityTime_16("TZTIMEONLY_916852545");
  msg.set(MaturityTime_16);
  Instrument_16.insert(MaturityTime_16.getString());
  FIX::MinPriceIncrement MinPriceIncrement_16;
  MinPriceIncrement_16.setString("14236743");
  msg.set(MinPriceIncrement_16);
  Instrument_16.insert(MinPriceIncrement_16.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_16;
  MinPriceIncrementAmount_16.setString("16824256");
  msg.set(MinPriceIncrementAmount_16);
  Instrument_16.insert(MinPriceIncrementAmount_16.getString());
  FIX::NTPositionLimit NTPositionLimit_16(1099313139);
  msg.set(NTPositionLimit_16);
  Instrument_16.insert(NTPositionLimit_16.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_16;
  NotionalPercentageOutstanding_16.setString("69.520000");
  msg.set(NotionalPercentageOutstanding_16);
  Instrument_16.insert(NotionalPercentageOutstanding_16.getString());
  FIX::OptAttribute OptAttribute_16('7');
  msg.set(OptAttribute_16);
  Instrument_16.insert(OptAttribute_16.getString());
  FIX::OptPayoutAmount OptPayoutAmount_16;
  OptPayoutAmount_16.setString("21127995");
  msg.set(OptPayoutAmount_16);
  Instrument_16.insert(OptPayoutAmount_16.getString());
  FIX::OptPayoutType OptPayoutType_16(1);
  msg.set(OptPayoutType_16);
  Instrument_16.insert(OptPayoutType_16.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_16;
  OriginalNotionalPercentageOutstanding_16.setString("26.520000");
  msg.set(OriginalNotionalPercentageOutstanding_16);
  Instrument_16.insert(OriginalNotionalPercentageOutstanding_16.getString());
  FIX::Pool Pool_16("STRING_1286886704");
  msg.set(Pool_16);
  Instrument_16.insert(Pool_16.getString());
  FIX::PositionLimit PositionLimit_16(107339917);
  msg.set(PositionLimit_16);
  Instrument_16.insert(PositionLimit_16.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_16("STRING_STD");
  msg.set(PriceQuoteMethod_16);
  Instrument_16.insert(PriceQuoteMethod_16.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_16("STRING_1177139327");
  msg.set(PriceUnitOfMeasure_16);
  Instrument_16.insert(PriceUnitOfMeasure_16.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_16;
  PriceUnitOfMeasureQty_16.setString("206875");
  msg.set(PriceUnitOfMeasureQty_16);
  Instrument_16.insert(PriceUnitOfMeasureQty_16.getString());
  FIX::Product Product_18(3);
  msg.set(Product_18);
  Instrument_16.insert(Product_18.getString());
  FIX::ProductComplex ProductComplex_16("STRING_962696227");
  msg.set(ProductComplex_16);
  Instrument_16.insert(ProductComplex_16.getString());
  FIX::PutOrCall PutOrCall_16(0);
  msg.set(PutOrCall_16);
  Instrument_16.insert(PutOrCall_16.getString());
  FIX::RedemptionDate RedemptionDate_16("LOCALMKTDATE_1240496286");
  msg.set(RedemptionDate_16);
  Instrument_16.insert(RedemptionDate_16.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_16("STRING_519269319");
  msg.set(RepoCollateralSecurityType_16);
  Instrument_16.insert(RepoCollateralSecurityType_16.getString());
  FIX::RepurchaseRate RepurchaseRate_16;
  RepurchaseRate_16.setString("26.060000");
  msg.set(RepurchaseRate_16);
  Instrument_16.insert(RepurchaseRate_16.getString());
  FIX::RepurchaseTerm RepurchaseTerm_16(2012385311);
  msg.set(RepurchaseTerm_16);
  Instrument_16.insert(RepurchaseTerm_16.getString());
  FIX::RestructuringType RestructuringType_16("STRING_XR");
  msg.set(RestructuringType_16);
  Instrument_16.insert(RestructuringType_16.getString());
  FIX::SecurityDesc SecurityDesc_16("STRING_61505858");
  msg.set(SecurityDesc_16);
  Instrument_16.insert(SecurityDesc_16.getString());
  FIX::SecurityExchange SecurityExchange_16("EXCHANGE_1668434233");
  msg.set(SecurityExchange_16);
  Instrument_16.insert(SecurityExchange_16.getString());
  FIX::SecurityGroup SecurityGroup_16("STRING_1361038261");
  msg.set(SecurityGroup_16);
  Instrument_16.insert(SecurityGroup_16.getString());
  FIX::SecurityID SecurityID_16("STRING_1131377061");
  msg.set(SecurityID_16);
  Instrument_16.insert(SecurityID_16.getString());
  FIX::SecurityIDSource SecurityIDSource_16("STRING_4");
  msg.set(SecurityIDSource_16);
  Instrument_16.insert(SecurityIDSource_16.getString());
  FIX::SecurityStatus SecurityStatus_16("STRING_2");
  msg.set(SecurityStatus_16);
  Instrument_16.insert(SecurityStatus_16.getString());
  FIX::SecuritySubType SecuritySubType_16("STRING_1802568685");
  msg.set(SecuritySubType_16);
  Instrument_16.insert(SecuritySubType_16.getString());
  FIX::SecurityType SecurityType_18("STRING_EUSUPRA");
  msg.set(SecurityType_18);
  Instrument_16.insert(SecurityType_18.getString());
  FIX::Seniority Seniority_16("STRING_SD");
  msg.set(Seniority_16);
  Instrument_16.insert(Seniority_16.getString());
  FIX::SettlMethod SettlMethod_16('P');
  msg.set(SettlMethod_16);
  Instrument_16.insert(SettlMethod_16.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_16("STRING_1437505534");
  msg.set(SettleOnOpenFlag_16);
  Instrument_16.insert(SettleOnOpenFlag_16.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_16("STRING_239127687");
  msg.set(StateOrProvinceOfIssue_16);
  Instrument_16.insert(StateOrProvinceOfIssue_16.getString());
  FIX::StrikeCurrency StrikeCurrency_16("GBP");
  msg.set(StrikeCurrency_16);
  Instrument_16.insert(StrikeCurrency_16.getString());
  FIX::StrikeMultiplier StrikeMultiplier_16;
  StrikeMultiplier_16.setString("10347580");
  msg.set(StrikeMultiplier_16);
  Instrument_16.insert(StrikeMultiplier_16.getString());
  FIX::StrikePrice StrikePrice_16;
  StrikePrice_16.setString("16365665");
  msg.set(StrikePrice_16);
  Instrument_16.insert(StrikePrice_16.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_16(1);
  msg.set(StrikePriceBoundaryMethod_16);
  Instrument_16.insert(StrikePriceBoundaryMethod_16.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_16;
  StrikePriceBoundaryPrecision_16.setString("70.920000");
  msg.set(StrikePriceBoundaryPrecision_16);
  Instrument_16.insert(StrikePriceBoundaryPrecision_16.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_16(1);
  msg.set(StrikePriceDeterminationMethod_16);
  Instrument_16.insert(StrikePriceDeterminationMethod_16.getString());
  FIX::StrikeValue StrikeValue_16;
  StrikeValue_16.setString("7970909");
  msg.set(StrikeValue_16);
  Instrument_16.insert(StrikeValue_16.getString());
  FIX::Symbol Symbol_16("STRING_285270036");
  msg.set(Symbol_16);
  Instrument_16.insert(Symbol_16.getString());
  FIX::SymbolSfx SymbolSfx_16("STRING_CD");
  msg.set(SymbolSfx_16);
  Instrument_16.insert(SymbolSfx_16.getString());
  FIX::TimeUnit TimeUnit_16("STRING_S");
  msg.set(TimeUnit_16);
  Instrument_16.insert(TimeUnit_16.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_16(2);
  msg.set(UnderlyingPriceDeterminationMethod_16);
  Instrument_16.insert(UnderlyingPriceDeterminationMethod_16.getString());
  FIX::UnitOfMeasure UnitOfMeasure_16("STRING_MMbbl");
  msg.set(UnitOfMeasure_16);
  Instrument_16.insert(UnitOfMeasure_16.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_16;
  UnitOfMeasureQty_16.setString("15524369");
  msg.set(UnitOfMeasureQty_16);
  Instrument_16.insert(UnitOfMeasureQty_16.getString());
  FIX::ValuationMethod ValuationMethod_16("STRING_EQTY");
  msg.set(ValuationMethod_16);
  Instrument_16.insert(ValuationMethod_16.getString());
  all_values.push_back(Instrument_16);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_37;
    FIX::ComplexEventCondition ComplexEventCondition_37(1);
    noComplexEvents_0_0.set(ComplexEventCondition_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventCondition_37.getString());
    FIX::ComplexEventPrice ComplexEventPrice_37;
    ComplexEventPrice_37.setString("19082212");
    noComplexEvents_0_0.set(ComplexEventPrice_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventPrice_37.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_37(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceBoundaryMethod_37.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_37;
    ComplexEventPriceBoundaryPrecision_37.setString("18.080000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceBoundaryPrecision_37.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_37(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceTimeType_37.getString());
    FIX::ComplexEventType ComplexEventType_37(4);
    noComplexEvents_0_0.set(ComplexEventType_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexEventType_37.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_37;
    ComplexOptPayoutAmount_37.setString("13553488");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_37);
    ComplexEvents_NoComplexEvents_37.insert(ComplexOptPayoutAmount_37.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_37);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_76;
      FIX::ComplexEventEndDate ComplexEventEndDate_76(FIX::UTCTIMESTAMP(19, 55, 56, 14, 10, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_76);
      ComplexEventDates_NoComplexEventDates_76.insert(ComplexEventEndDate_76.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_76(FIX::UTCTIMESTAMP(3, 31, 29, 2, 4, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_76);
      ComplexEventDates_NoComplexEventDates_76.insert(ComplexEventStartDate_76.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_76);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_165;
        FIX::ComplexEventEndTime ComplexEventEndTime_165(FIX::UTCTIMEONLY(6, 45, 1));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_165);
        ComplexEventTimes_NoComplexEventTimes_165.insert(ComplexEventEndTime_165.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_165(FIX::UTCTIMEONLY(12, 28, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_165);
        ComplexEventTimes_NoComplexEventTimes_165.insert(ComplexEventStartTime_165.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_165);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_77;
      FIX::ComplexEventEndDate ComplexEventEndDate_77(FIX::UTCTIMESTAMP(23, 10, 47, 14, 2, 2013));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_77);
      ComplexEventDates_NoComplexEventDates_77.insert(ComplexEventEndDate_77.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_77(FIX::UTCTIMESTAMP(10, 36, 20, 2, 4, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_77);
      ComplexEventDates_NoComplexEventDates_77.insert(ComplexEventStartDate_77.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_77);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_166;
        FIX::ComplexEventEndTime ComplexEventEndTime_166(FIX::UTCTIMEONLY(8, 17, 53));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_166);
        ComplexEventTimes_NoComplexEventTimes_166.insert(ComplexEventEndTime_166.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_166(FIX::UTCTIMEONLY(13, 43, 32));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_166);
        ComplexEventTimes_NoComplexEventTimes_166.insert(ComplexEventStartTime_166.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_166);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_167;
        FIX::ComplexEventEndTime ComplexEventEndTime_167(FIX::UTCTIMEONLY(13, 17, 38));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_167);
        ComplexEventTimes_NoComplexEventTimes_167.insert(ComplexEventEndTime_167.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_167(FIX::UTCTIMEONLY(10, 6, 3));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_167);
        ComplexEventTimes_NoComplexEventTimes_167.insert(ComplexEventStartTime_167.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_167);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_28;
    FIX::EventDate EventDate_28("LOCALMKTDATE_1908168005");
    noEvents_0_0.set(EventDate_28);
    EvntGrp_NoEvents_28.insert(EventDate_28.getString());
    FIX::EventPx EventPx_28;
    EventPx_28.setString("15895941");
    noEvents_0_0.set(EventPx_28);
    EvntGrp_NoEvents_28.insert(EventPx_28.getString());
    FIX::EventText EventText_28("STRING_1108705671");
    noEvents_0_0.set(EventText_28);
    EvntGrp_NoEvents_28.insert(EventText_28.getString());
    FIX::EventTime EventTime_28(FIX::UTCTIMESTAMP(18, 20, 5, 8, 10, 2007));
    noEvents_0_0.set(EventTime_28);
    EvntGrp_NoEvents_28.insert(EventTime_28.getString());
    FIX::EventType EventType_28(16);
    noEvents_0_0.set(EventType_28);
    EvntGrp_NoEvents_28.insert(EventType_28.getString());
    all_values.push_back(EvntGrp_NoEvents_28);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_29;
    FIX::EventDate EventDate_29("LOCALMKTDATE_1271784036");
    noEvents_0_1.set(EventDate_29);
    EvntGrp_NoEvents_29.insert(EventDate_29.getString());
    FIX::EventPx EventPx_29;
    EventPx_29.setString("20952868");
    noEvents_0_1.set(EventPx_29);
    EvntGrp_NoEvents_29.insert(EventPx_29.getString());
    FIX::EventText EventText_29("STRING_90273293");
    noEvents_0_1.set(EventText_29);
    EvntGrp_NoEvents_29.insert(EventText_29.getString());
    FIX::EventTime EventTime_29(FIX::UTCTIMESTAMP(6, 10, 45, 17, 4, 2003));
    noEvents_0_1.set(EventTime_29);
    EvntGrp_NoEvents_29.insert(EventTime_29.getString());
    FIX::EventType EventType_29(14);
    noEvents_0_1.set(EventType_29);
    EvntGrp_NoEvents_29.insert(EventType_29.getString());
    all_values.push_back(EvntGrp_NoEvents_29);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_30;
    FIX::InstrumentPartyID InstrumentPartyID_30("STRING_721500662");
    noInstrumentParties_0_0.set(InstrumentPartyID_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyID_30.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_30('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyIDSource_30.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_30(1261758330);
    noInstrumentParties_0_0.set(InstrumentPartyRole_30);
    InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyRole_30.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_30);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72;
      FIX::InstrumentPartySubID InstrumentPartySubID_72("STRING_783384129");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_72);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72.insert(InstrumentPartySubID_72.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_72(430671089);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_72);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72.insert(InstrumentPartySubIDType_72.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_31;
    FIX::InstrumentPartyID InstrumentPartyID_31("STRING_1339714200");
    noInstrumentParties_0_1.set(InstrumentPartyID_31);
    InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyID_31.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_31('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_31);
    InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyIDSource_31.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_31(191355446);
    noInstrumentParties_0_1.set(InstrumentPartyRole_31);
    InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyRole_31.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_31);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73;
      FIX::InstrumentPartySubID InstrumentPartySubID_73("STRING_492069477");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_73);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73.insert(InstrumentPartySubID_73.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_73(1972983246);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_73);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73.insert(InstrumentPartySubIDType_73.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74;
      FIX::InstrumentPartySubID InstrumentPartySubID_74("STRING_1975457784");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_74);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74.insert(InstrumentPartySubID_74.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_74(1169882717);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_74);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74.insert(InstrumentPartySubIDType_74.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75;
      FIX::InstrumentPartySubID InstrumentPartySubID_75("STRING_633806103");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_75);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75.insert(InstrumentPartySubID_75.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_75(247785900);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_75);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75.insert(InstrumentPartySubIDType_75.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_34;
    FIX::SecurityAltID SecurityAltID_34("STRING_1783325008");
    noSecurityAltID_0_0.set(SecurityAltID_34);
    SecAltIDGrp_NoSecurityAltID_34.insert(SecurityAltID_34.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_34("STRING_220101847");
    noSecurityAltID_0_0.set(SecurityAltIDSource_34);
    SecAltIDGrp_NoSecurityAltID_34.insert(SecurityAltIDSource_34.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_34);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_32;
  FIX::SecurityXML SecurityXML_33("XMLDATA_1551537822");
  msg.set(SecurityXML_33);
  FIX::SecurityXMLLen SecurityXMLLen_16(1731128246);
  msg.set(SecurityXMLLen_16);
  FIX::SecurityXMLSchema SecurityXMLSchema_16("STRING_310375140");
  msg.set(SecurityXMLSchema_16);
  SecurityXML_32.insert(SecurityXMLSchema_16.getString());
  all_values.push_back(SecurityXML_32);

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_1;
    FIX::RootPartyID RootPartyID_1("STRING_889930237");
    noRootPartyIDs_0_0.set(RootPartyID_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyID_1.getString());
    FIX::RootPartyIDSource RootPartyIDSource_1('2');
    noRootPartyIDs_0_0.set(RootPartyIDSource_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyIDSource_1.getString());
    FIX::RootPartyRole RootPartyRole_1(1609580112);
    noRootPartyIDs_0_0.set(RootPartyRole_1);
    RootParties_NoRootPartyIDs_1.insert(RootPartyRole_1.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_1);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_2;
      FIX::RootPartySubID RootPartySubID_2("STRING_1197564918");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_2);
      RootSubParties_NoRootPartySubIDs_2.insert(RootPartySubID_2.getString());
      FIX::RootPartySubIDType RootPartySubIDType_2(214767385);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_2);
      RootSubParties_NoRootPartySubIDs_2.insert(RootPartySubIDType_2.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_2);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_3;
      FIX::RootPartySubID RootPartySubID_3("STRING_2047483223");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_3);
      RootSubParties_NoRootPartySubIDs_3.insert(RootPartySubID_3.getString());
      FIX::RootPartySubIDType RootPartySubIDType_3(1973960831);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_3);
      RootSubParties_NoRootPartySubIDs_3.insert(RootPartySubIDType_3.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_3);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_2;
    FIX::RootPartyID RootPartyID_2("STRING_936268047");
    noRootPartyIDs_0_1.set(RootPartyID_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyID_2.getString());
    FIX::RootPartyIDSource RootPartyIDSource_2('7');
    noRootPartyIDs_0_1.set(RootPartyIDSource_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyIDSource_2.getString());
    FIX::RootPartyRole RootPartyRole_2(1088235513);
    noRootPartyIDs_0_1.set(RootPartyRole_2);
    RootParties_NoRootPartyIDs_2.insert(RootPartyRole_2.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_2);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_4;
      FIX::RootPartySubID RootPartySubID_4("STRING_856575047");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_4);
      RootSubParties_NoRootPartySubIDs_4.insert(RootPartySubID_4.getString());
      FIX::RootPartySubIDType RootPartySubIDType_4(1518906602);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_4);
      RootSubParties_NoRootPartySubIDs_4.insert(RootPartySubIDType_4.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_4);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_5;
      FIX::RootPartySubID RootPartySubID_5("STRING_616483397");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_5);
      RootSubParties_NoRootPartySubIDs_5.insert(RootPartySubID_5.getString());
      FIX::RootPartySubIDType RootPartySubIDType_5(239938853);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_5);
      RootSubParties_NoRootPartySubIDs_5.insert(RootPartySubIDType_5.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_5);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // SideCrossOrdCxlGrp
  // Group SideCrossOrdCxlGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_0;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_0;
    FIX::ClOrdID ClOrdID_16("STRING_1398308123");
    noSides_0_0.set(ClOrdID_16);
    SideCrossOrdCxlGrp_NoSides_0.insert(ClOrdID_16.getString());
    FIX::ClOrdLinkID ClOrdLinkID_2("STRING_732008330");
    noSides_0_0.set(ClOrdLinkID_2);
    SideCrossOrdCxlGrp_NoSides_0.insert(ClOrdLinkID_2.getString());
    FIX::ComplianceID ComplianceID_1("STRING_1535761647");
    noSides_0_0.set(ComplianceID_1);
    SideCrossOrdCxlGrp_NoSides_0.insert(ComplianceID_1.getString());
    FIX::EncodedText EncodedText_27("DATA_1226282259");
    noSides_0_0.set(EncodedText_27);
    SideCrossOrdCxlGrp_NoSides_0.insert(EncodedText_27.getString());
    FIX::EncodedTextLen EncodedTextLen_27(1901891047);
    noSides_0_0.set(EncodedTextLen_27);
    SideCrossOrdCxlGrp_NoSides_0.insert(EncodedTextLen_27.getString());
    FIX::OrigClOrdID OrigClOrdID_2("STRING_22084103");
    noSides_0_0.set(OrigClOrdID_2);
    SideCrossOrdCxlGrp_NoSides_0.insert(OrigClOrdID_2.getString());
    FIX::OrigOrdModTime OrigOrdModTime_0(FIX::UTCTIMESTAMP(18, 51, 47, 12, 11, 2005));
    noSides_0_0.set(OrigOrdModTime_0);
    SideCrossOrdCxlGrp_NoSides_0.insert(OrigOrdModTime_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_16("STRING_1234621455");
    noSides_0_0.set(SecondaryClOrdID_16);
    SideCrossOrdCxlGrp_NoSides_0.insert(SecondaryClOrdID_16.getString());
    FIX::Side Side_17('C');
    noSides_0_0.set(Side_17);
    SideCrossOrdCxlGrp_NoSides_0.insert(Side_17.getString());
    FIX::Text Text_27("STRING_1975878530");
    noSides_0_0.set(Text_27);
    SideCrossOrdCxlGrp_NoSides_0.insert(Text_27.getString());
    FIX::TradeDate TradeDate_11("LOCALMKTDATE_696717919");
    noSides_0_0.set(TradeDate_11);
    SideCrossOrdCxlGrp_NoSides_0.insert(TradeDate_11.getString());
    FIX::TradeOriginationDate TradeOriginationDate_5("LOCALMKTDATE_493696729");
    noSides_0_0.set(TradeOriginationDate_5);
    SideCrossOrdCxlGrp_NoSides_0.insert(TradeOriginationDate_5.getString());
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_0);

    // OrderQtyData
    multiset<string> OrderQtyData_2;
    FIX::CashOrderQty CashOrderQty_2;
    CashOrderQty_2.setString("10259598");
    noSides_0_0.set(CashOrderQty_2);
    OrderQtyData_2.insert(CashOrderQty_2.getString());
    FIX::OrderPercent OrderPercent_2;
    OrderPercent_2.setString("53.040000");
    noSides_0_0.set(OrderPercent_2);
    OrderQtyData_2.insert(OrderPercent_2.getString());
    FIX::OrderQty OrderQty_10;
    OrderQty_10.setString("3936963");
    noSides_0_0.set(OrderQty_10);
    OrderQtyData_2.insert(OrderQty_10.getString());
    FIX::RoundingDirection RoundingDirection_2('1');
    noSides_0_0.set(RoundingDirection_2);
    OrderQtyData_2.insert(RoundingDirection_2.getString());
    FIX::RoundingModulus RoundingModulus_2;
    RoundingModulus_2.setString("18477533");
    noSides_0_0.set(RoundingModulus_2);
    OrderQtyData_2.insert(RoundingModulus_2.getString());
    all_values.push_back(OrderQtyData_2);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_41;
      FIX::PartyID PartyID_41("STRING_1940672497");
      noPartyIDs_0_1_0.set(PartyID_41);
      Parties_NoPartyIDs_41.insert(PartyID_41.getString());
      FIX::PartyIDSource PartyIDSource_41('G');
      noPartyIDs_0_1_0.set(PartyIDSource_41);
      Parties_NoPartyIDs_41.insert(PartyIDSource_41.getString());
      FIX::PartyRole PartyRole_41(19);
      noPartyIDs_0_1_0.set(PartyRole_41);
      Parties_NoPartyIDs_41.insert(PartyRole_41.getString());
      all_values.push_back(Parties_NoPartyIDs_41);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_83;
        FIX::PartySubID PartySubID_83("STRING_1741005946");
        noPartySubIDs_0_0_2_0.set(PartySubID_83);
        PtysSubGrp_NoPartySubIDs_83.insert(PartySubID_83.getString());
        FIX::PartySubIDType PartySubIDType_83(21);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_83);
        PtysSubGrp_NoPartySubIDs_83.insert(PartySubIDType_83.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_83);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_84;
        FIX::PartySubID PartySubID_84("STRING_874873853");
        noPartySubIDs_0_0_2_1.set(PartySubID_84);
        PtysSubGrp_NoPartySubIDs_84.insert(PartySubID_84.getString());
        FIX::PartySubIDType PartySubIDType_84(11);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_84);
        PtysSubGrp_NoPartySubIDs_84.insert(PartySubIDType_84.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_84);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_85;
        FIX::PartySubID PartySubID_85("STRING_147925805");
        noPartySubIDs_0_0_2_2.set(PartySubID_85);
        PtysSubGrp_NoPartySubIDs_85.insert(PartySubID_85.getString());
        FIX::PartySubIDType PartySubIDType_85(19);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_85);
        PtysSubGrp_NoPartySubIDs_85.insert(PartySubIDType_85.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_85);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_42;
      FIX::PartyID PartyID_42("STRING_70629032");
      noPartyIDs_0_1_1.set(PartyID_42);
      Parties_NoPartyIDs_42.insert(PartyID_42.getString());
      FIX::PartyIDSource PartyIDSource_42('7');
      noPartyIDs_0_1_1.set(PartyIDSource_42);
      Parties_NoPartyIDs_42.insert(PartyIDSource_42.getString());
      FIX::PartyRole PartyRole_42(12);
      noPartyIDs_0_1_1.set(PartyRole_42);
      Parties_NoPartyIDs_42.insert(PartyRole_42.getString());
      all_values.push_back(Parties_NoPartyIDs_42);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_86;
        FIX::PartySubID PartySubID_86("STRING_2083978039");
        noPartySubIDs_0_1_2_0.set(PartySubID_86);
        PtysSubGrp_NoPartySubIDs_86.insert(PartySubID_86.getString());
        FIX::PartySubIDType PartySubIDType_86(28);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_86);
        PtysSubGrp_NoPartySubIDs_86.insert(PartySubIDType_86.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_86);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_87;
        FIX::PartySubID PartySubID_87("STRING_1091383550");
        noPartySubIDs_0_1_2_1.set(PartySubID_87);
        PtysSubGrp_NoPartySubIDs_87.insert(PartySubID_87.getString());
        FIX::PartySubIDType PartySubIDType_87(24);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_87);
        PtysSubGrp_NoPartySubIDs_87.insert(PartySubIDType_87.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_87);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_88;
        FIX::PartySubID PartySubID_88("STRING_1332215129");
        noPartySubIDs_0_1_2_2.set(PartySubID_88);
        PtysSubGrp_NoPartySubIDs_88.insert(PartySubID_88.getString());
        FIX::PartySubIDType PartySubIDType_88(4);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_88);
        PtysSubGrp_NoPartySubIDs_88.insert(PartySubIDType_88.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_88);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_1;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_1;
    FIX::ClOrdID ClOrdID_17("STRING_609331206");
    noSides_0_1.set(ClOrdID_17);
    SideCrossOrdCxlGrp_NoSides_1.insert(ClOrdID_17.getString());
    FIX::ClOrdLinkID ClOrdLinkID_3("STRING_1463715428");
    noSides_0_1.set(ClOrdLinkID_3);
    SideCrossOrdCxlGrp_NoSides_1.insert(ClOrdLinkID_3.getString());
    FIX::ComplianceID ComplianceID_2("STRING_776839932");
    noSides_0_1.set(ComplianceID_2);
    SideCrossOrdCxlGrp_NoSides_1.insert(ComplianceID_2.getString());
    FIX::EncodedText EncodedText_28("DATA_1306049125");
    noSides_0_1.set(EncodedText_28);
    SideCrossOrdCxlGrp_NoSides_1.insert(EncodedText_28.getString());
    FIX::EncodedTextLen EncodedTextLen_28(1957412157);
    noSides_0_1.set(EncodedTextLen_28);
    SideCrossOrdCxlGrp_NoSides_1.insert(EncodedTextLen_28.getString());
    FIX::OrigClOrdID OrigClOrdID_3("STRING_1802799733");
    noSides_0_1.set(OrigClOrdID_3);
    SideCrossOrdCxlGrp_NoSides_1.insert(OrigClOrdID_3.getString());
    FIX::OrigOrdModTime OrigOrdModTime_1(FIX::UTCTIMESTAMP(5, 9, 13, 12, 4, 2015));
    noSides_0_1.set(OrigOrdModTime_1);
    SideCrossOrdCxlGrp_NoSides_1.insert(OrigOrdModTime_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_17("STRING_1993974307");
    noSides_0_1.set(SecondaryClOrdID_17);
    SideCrossOrdCxlGrp_NoSides_1.insert(SecondaryClOrdID_17.getString());
    FIX::Side Side_18('C');
    noSides_0_1.set(Side_18);
    SideCrossOrdCxlGrp_NoSides_1.insert(Side_18.getString());
    FIX::Text Text_28("STRING_488365331");
    noSides_0_1.set(Text_28);
    SideCrossOrdCxlGrp_NoSides_1.insert(Text_28.getString());
    FIX::TradeDate TradeDate_12("LOCALMKTDATE_1409891782");
    noSides_0_1.set(TradeDate_12);
    SideCrossOrdCxlGrp_NoSides_1.insert(TradeDate_12.getString());
    FIX::TradeOriginationDate TradeOriginationDate_6("LOCALMKTDATE_340427576");
    noSides_0_1.set(TradeOriginationDate_6);
    SideCrossOrdCxlGrp_NoSides_1.insert(TradeOriginationDate_6.getString());
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_1);

    // OrderQtyData
    multiset<string> OrderQtyData_3;
    FIX::CashOrderQty CashOrderQty_3;
    CashOrderQty_3.setString("14801957");
    noSides_0_1.set(CashOrderQty_3);
    OrderQtyData_3.insert(CashOrderQty_3.getString());
    FIX::OrderPercent OrderPercent_3;
    OrderPercent_3.setString("75.880000");
    noSides_0_1.set(OrderPercent_3);
    OrderQtyData_3.insert(OrderPercent_3.getString());
    FIX::OrderQty OrderQty_11;
    OrderQty_11.setString("6035794");
    noSides_0_1.set(OrderQty_11);
    OrderQtyData_3.insert(OrderQty_11.getString());
    FIX::RoundingDirection RoundingDirection_3('2');
    noSides_0_1.set(RoundingDirection_3);
    OrderQtyData_3.insert(RoundingDirection_3.getString());
    FIX::RoundingModulus RoundingModulus_3;
    RoundingModulus_3.setString("14601507");
    noSides_0_1.set(RoundingModulus_3);
    OrderQtyData_3.insert(RoundingModulus_3.getString());
    all_values.push_back(OrderQtyData_3);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_43;
      FIX::PartyID PartyID_43("STRING_948038328");
      noPartyIDs_1_1_0.set(PartyID_43);
      Parties_NoPartyIDs_43.insert(PartyID_43.getString());
      FIX::PartyIDSource PartyIDSource_43('8');
      noPartyIDs_1_1_0.set(PartyIDSource_43);
      Parties_NoPartyIDs_43.insert(PartyIDSource_43.getString());
      FIX::PartyRole PartyRole_43(65);
      noPartyIDs_1_1_0.set(PartyRole_43);
      Parties_NoPartyIDs_43.insert(PartyRole_43.getString());
      all_values.push_back(Parties_NoPartyIDs_43);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_89;
        FIX::PartySubID PartySubID_89("STRING_771354935");
        noPartySubIDs_1_0_2_0.set(PartySubID_89);
        PtysSubGrp_NoPartySubIDs_89.insert(PartySubID_89.getString());
        FIX::PartySubIDType PartySubIDType_89(22);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_89);
        PtysSubGrp_NoPartySubIDs_89.insert(PartySubIDType_89.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_89);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_90;
        FIX::PartySubID PartySubID_90("STRING_840383280");
        noPartySubIDs_1_0_2_1.set(PartySubID_90);
        PtysSubGrp_NoPartySubIDs_90.insert(PartySubID_90.getString());
        FIX::PartySubIDType PartySubIDType_90(1);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_90);
        PtysSubGrp_NoPartySubIDs_90.insert(PartySubIDType_90.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_90);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_91;
        FIX::PartySubID PartySubID_91("STRING_1480423712");
        noPartySubIDs_1_0_2_2.set(PartySubID_91);
        PtysSubGrp_NoPartySubIDs_91.insert(PartySubID_91.getString());
        FIX::PartySubIDType PartySubIDType_91(2);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_91);
        PtysSubGrp_NoPartySubIDs_91.insert(PartySubIDType_91.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_91);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_44;
      FIX::PartyID PartyID_44("STRING_539251619");
      noPartyIDs_1_1_1.set(PartyID_44);
      Parties_NoPartyIDs_44.insert(PartyID_44.getString());
      FIX::PartyIDSource PartyIDSource_44('5');
      noPartyIDs_1_1_1.set(PartyIDSource_44);
      Parties_NoPartyIDs_44.insert(PartyIDSource_44.getString());
      FIX::PartyRole PartyRole_44(32);
      noPartyIDs_1_1_1.set(PartyRole_44);
      Parties_NoPartyIDs_44.insert(PartyRole_44.getString());
      all_values.push_back(Parties_NoPartyIDs_44);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_92;
        FIX::PartySubID PartySubID_92("STRING_1493977034");
        noPartySubIDs_1_1_2_0.set(PartySubID_92);
        PtysSubGrp_NoPartySubIDs_92.insert(PartySubID_92.getString());
        FIX::PartySubIDType PartySubIDType_92(20);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_92);
        PtysSubGrp_NoPartySubIDs_92.insert(PartySubIDType_92.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_92);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_93;
        FIX::PartySubID PartySubID_93("STRING_379622886");
        noPartySubIDs_1_1_2_1.set(PartySubID_93);
        PtysSubGrp_NoPartySubIDs_93.insert(PartySubID_93.getString());
        FIX::PartySubIDType PartySubIDType_93(29);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_93);
        PtysSubGrp_NoPartySubIDs_93.insert(PartySubIDType_93.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_93);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_45;
      FIX::PartyID PartyID_45("STRING_2081234287");
      noPartyIDs_1_1_2.set(PartyID_45);
      Parties_NoPartyIDs_45.insert(PartyID_45.getString());
      FIX::PartyIDSource PartyIDSource_45('9');
      noPartyIDs_1_1_2.set(PartyIDSource_45);
      Parties_NoPartyIDs_45.insert(PartyIDSource_45.getString());
      FIX::PartyRole PartyRole_45(76);
      noPartyIDs_1_1_2.set(PartyRole_45);
      Parties_NoPartyIDs_45.insert(PartyRole_45.getString());
      all_values.push_back(Parties_NoPartyIDs_45);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_94;
        FIX::PartySubID PartySubID_94("STRING_1762831251");
        noPartySubIDs_1_2_2_0.set(PartySubID_94);
        PtysSubGrp_NoPartySubIDs_94.insert(PartySubID_94.getString());
        FIX::PartySubIDType PartySubIDType_94(2);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_94);
        PtysSubGrp_NoPartySubIDs_94.insert(PartySubIDType_94.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_94);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_95;
        FIX::PartySubID PartySubID_95("STRING_1887215586");
        noPartySubIDs_1_2_2_1.set(PartySubID_95);
        PtysSubGrp_NoPartySubIDs_95.insert(PartySubID_95.getString());
        FIX::PartySubIDType PartySubIDType_95(17);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_95);
        PtysSubGrp_NoPartySubIDs_95.insert(PartySubIDType_95.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_95);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoSides noSides_0_2;
    // SideCrossOrdCxlGrp.NoSides
    multiset<string> SideCrossOrdCxlGrp_NoSides_2;
    FIX::ClOrdID ClOrdID_18("STRING_683721804");
    noSides_0_2.set(ClOrdID_18);
    SideCrossOrdCxlGrp_NoSides_2.insert(ClOrdID_18.getString());
    FIX::ClOrdLinkID ClOrdLinkID_4("STRING_343311366");
    noSides_0_2.set(ClOrdLinkID_4);
    SideCrossOrdCxlGrp_NoSides_2.insert(ClOrdLinkID_4.getString());
    FIX::ComplianceID ComplianceID_3("STRING_498884492");
    noSides_0_2.set(ComplianceID_3);
    SideCrossOrdCxlGrp_NoSides_2.insert(ComplianceID_3.getString());
    FIX::EncodedText EncodedText_29("DATA_2143872597");
    noSides_0_2.set(EncodedText_29);
    SideCrossOrdCxlGrp_NoSides_2.insert(EncodedText_29.getString());
    FIX::EncodedTextLen EncodedTextLen_29(1232126750);
    noSides_0_2.set(EncodedTextLen_29);
    SideCrossOrdCxlGrp_NoSides_2.insert(EncodedTextLen_29.getString());
    FIX::OrigClOrdID OrigClOrdID_4("STRING_1446922820");
    noSides_0_2.set(OrigClOrdID_4);
    SideCrossOrdCxlGrp_NoSides_2.insert(OrigClOrdID_4.getString());
    FIX::OrigOrdModTime OrigOrdModTime_2(FIX::UTCTIMESTAMP(17, 50, 1, 13, 8, 2013));
    noSides_0_2.set(OrigOrdModTime_2);
    SideCrossOrdCxlGrp_NoSides_2.insert(OrigOrdModTime_2.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_18("STRING_1413751901");
    noSides_0_2.set(SecondaryClOrdID_18);
    SideCrossOrdCxlGrp_NoSides_2.insert(SecondaryClOrdID_18.getString());
    FIX::Side Side_19('9');
    noSides_0_2.set(Side_19);
    SideCrossOrdCxlGrp_NoSides_2.insert(Side_19.getString());
    FIX::Text Text_29("STRING_1936843182");
    noSides_0_2.set(Text_29);
    SideCrossOrdCxlGrp_NoSides_2.insert(Text_29.getString());
    FIX::TradeDate TradeDate_13("LOCALMKTDATE_556620474");
    noSides_0_2.set(TradeDate_13);
    SideCrossOrdCxlGrp_NoSides_2.insert(TradeDate_13.getString());
    FIX::TradeOriginationDate TradeOriginationDate_7("LOCALMKTDATE_774039546");
    noSides_0_2.set(TradeOriginationDate_7);
    SideCrossOrdCxlGrp_NoSides_2.insert(TradeOriginationDate_7.getString());
    all_values.push_back(SideCrossOrdCxlGrp_NoSides_2);

    // OrderQtyData
    multiset<string> OrderQtyData_4;
    FIX::CashOrderQty CashOrderQty_4;
    CashOrderQty_4.setString("3986619");
    noSides_0_2.set(CashOrderQty_4);
    OrderQtyData_4.insert(CashOrderQty_4.getString());
    FIX::OrderPercent OrderPercent_4;
    OrderPercent_4.setString("75.090000");
    noSides_0_2.set(OrderPercent_4);
    OrderQtyData_4.insert(OrderPercent_4.getString());
    FIX::OrderQty OrderQty_12;
    OrderQty_12.setString("4068482");
    noSides_0_2.set(OrderQty_12);
    OrderQtyData_4.insert(OrderQty_12.getString());
    FIX::RoundingDirection RoundingDirection_4('2');
    noSides_0_2.set(RoundingDirection_4);
    OrderQtyData_4.insert(RoundingDirection_4.getString());
    FIX::RoundingModulus RoundingModulus_4;
    RoundingModulus_4.setString("20676029");
    noSides_0_2.set(RoundingModulus_4);
    OrderQtyData_4.insert(RoundingModulus_4.getString());
    all_values.push_back(OrderQtyData_4);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_46;
      FIX::PartyID PartyID_46("STRING_2052750741");
      noPartyIDs_2_1_0.set(PartyID_46);
      Parties_NoPartyIDs_46.insert(PartyID_46.getString());
      FIX::PartyIDSource PartyIDSource_46('I');
      noPartyIDs_2_1_0.set(PartyIDSource_46);
      Parties_NoPartyIDs_46.insert(PartyIDSource_46.getString());
      FIX::PartyRole PartyRole_46(73);
      noPartyIDs_2_1_0.set(PartyRole_46);
      Parties_NoPartyIDs_46.insert(PartyRole_46.getString());
      all_values.push_back(Parties_NoPartyIDs_46);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_96;
        FIX::PartySubID PartySubID_96("STRING_1057003230");
        noPartySubIDs_2_0_2_0.set(PartySubID_96);
        PtysSubGrp_NoPartySubIDs_96.insert(PartySubID_96.getString());
        FIX::PartySubIDType PartySubIDType_96(31);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_96);
        PtysSubGrp_NoPartySubIDs_96.insert(PartySubIDType_96.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_96);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_97;
        FIX::PartySubID PartySubID_97("STRING_616158051");
        noPartySubIDs_2_0_2_1.set(PartySubID_97);
        PtysSubGrp_NoPartySubIDs_97.insert(PartySubID_97.getString());
        FIX::PartySubIDType PartySubIDType_97(17);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_97);
        PtysSubGrp_NoPartySubIDs_97.insert(PartySubIDType_97.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_97);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_47;
      FIX::PartyID PartyID_47("STRING_1970430220");
      noPartyIDs_2_1_1.set(PartyID_47);
      Parties_NoPartyIDs_47.insert(PartyID_47.getString());
      FIX::PartyIDSource PartyIDSource_47('H');
      noPartyIDs_2_1_1.set(PartyIDSource_47);
      Parties_NoPartyIDs_47.insert(PartyIDSource_47.getString());
      FIX::PartyRole PartyRole_47(34);
      noPartyIDs_2_1_1.set(PartyRole_47);
      Parties_NoPartyIDs_47.insert(PartyRole_47.getString());
      all_values.push_back(Parties_NoPartyIDs_47);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_98;
        FIX::PartySubID PartySubID_98("STRING_414481715");
        noPartySubIDs_2_1_2_0.set(PartySubID_98);
        PtysSubGrp_NoPartySubIDs_98.insert(PartySubID_98.getString());
        FIX::PartySubIDType PartySubIDType_98(8);
        noPartySubIDs_2_1_2_0.set(PartySubIDType_98);
        PtysSubGrp_NoPartySubIDs_98.insert(PartySubIDType_98.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_98);

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_99;
        FIX::PartySubID PartySubID_99("STRING_971693228");
        noPartySubIDs_2_1_2_1.set(PartySubID_99);
        PtysSubGrp_NoPartySubIDs_99.insert(PartySubID_99.getString());
        FIX::PartySubIDType PartySubIDType_99(33);
        noPartySubIDs_2_1_2_1.set(PartySubIDType_99);
        PtysSubGrp_NoPartySubIDs_99.insert(PartySubIDType_99.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_99);

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_1);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_1);
    }
    msg.addGroup(noSides_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_30;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_30("DATA_905021417");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingIssuer_30.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_30(1785103449);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingIssuerLen_30.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_30("DATA_249677806");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingSecurityDesc_30.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_30(171289671);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_30);
    UnderlyingInstrument_30.insert(EncodedUnderlyingSecurityDescLen_30.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_30;
    UnderlyingAdjustedQuantity_30.setString("12866036");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_30);
    UnderlyingInstrument_30.insert(UnderlyingAdjustedQuantity_30.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_30;
    UnderlyingAllocationPercent_30.setString("73.400000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_30);
    UnderlyingInstrument_30.insert(UnderlyingAllocationPercent_30.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_30;
    UnderlyingAttachmentPoint_30.setString("1.450000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_30);
    UnderlyingInstrument_30.insert(UnderlyingAttachmentPoint_30.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_30("STRING_2060643243");
    noUnderlyings_0_0.set(UnderlyingCFICode_30);
    UnderlyingInstrument_30.insert(UnderlyingCFICode_30.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_30("STRING_437699276");
    noUnderlyings_0_0.set(UnderlyingCPProgram_30);
    UnderlyingInstrument_30.insert(UnderlyingCPProgram_30.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_30("STRING_631024006");
    noUnderlyings_0_0.set(UnderlyingCPRegType_30);
    UnderlyingInstrument_30.insert(UnderlyingCPRegType_30.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_30;
    UnderlyingCapValue_30.setString("3200078");
    noUnderlyings_0_0.set(UnderlyingCapValue_30);
    UnderlyingInstrument_30.insert(UnderlyingCapValue_30.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_30;
    UnderlyingCashAmount_30.setString("12159840");
    noUnderlyings_0_0.set(UnderlyingCashAmount_30);
    UnderlyingInstrument_30.insert(UnderlyingCashAmount_30.getString());
    FIX::UnderlyingCashType UnderlyingCashType_30("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_30);
    UnderlyingInstrument_30.insert(UnderlyingCashType_30.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_30;
    UnderlyingContractMultiplier_30.setString("6606067");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_30);
    UnderlyingInstrument_30.insert(UnderlyingContractMultiplier_30.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_30(1121251190);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_30);
    UnderlyingInstrument_30.insert(UnderlyingContractMultiplierUnit_30.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_30("COUNTRY_334758656");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingCountryOfIssue_30.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_30("LOCALMKTDATE_400510035");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_30);
    UnderlyingInstrument_30.insert(UnderlyingCouponPaymentDate_30.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_30;
    UnderlyingCouponRate_30.setString("58.860000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_30);
    UnderlyingInstrument_30.insert(UnderlyingCouponRate_30.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_30("STRING_1391761887");
    noUnderlyings_0_0.set(UnderlyingCreditRating_30);
    UnderlyingInstrument_30.insert(UnderlyingCreditRating_30.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_30("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_30);
    UnderlyingInstrument_30.insert(UnderlyingCurrency_30.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_30;
    UnderlyingCurrentValue_30.setString("9850032");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_30);
    UnderlyingInstrument_30.insert(UnderlyingCurrentValue_30.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_30;
    UnderlyingDetachmentPoint_30.setString("54.600000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_30);
    UnderlyingInstrument_30.insert(UnderlyingDetachmentPoint_30.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_30;
    UnderlyingDirtyPrice_30.setString("2255828");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_30);
    UnderlyingInstrument_30.insert(UnderlyingDirtyPrice_30.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_30;
    UnderlyingEndPrice_30.setString("5746336");
    noUnderlyings_0_0.set(UnderlyingEndPrice_30);
    UnderlyingInstrument_30.insert(UnderlyingEndPrice_30.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_30;
    UnderlyingEndValue_30.setString("7581651");
    noUnderlyings_0_0.set(UnderlyingEndValue_30);
    UnderlyingInstrument_30.insert(UnderlyingEndValue_30.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_30(640064549);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_30);
    UnderlyingInstrument_30.insert(UnderlyingExerciseStyle_30.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_30;
    UnderlyingFXRate_30.setString("15572980");
    noUnderlyings_0_0.set(UnderlyingFXRate_30);
    UnderlyingInstrument_30.insert(UnderlyingFXRate_30.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_30('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_30);
    UnderlyingInstrument_30.insert(UnderlyingFXRateCalc_30.getString());
    FIX::UnderlyingFactor UnderlyingFactor_30;
    UnderlyingFactor_30.setString("2459236");
    noUnderlyings_0_0.set(UnderlyingFactor_30);
    UnderlyingInstrument_30.insert(UnderlyingFactor_30.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_30(409384323);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_30);
    UnderlyingInstrument_30.insert(UnderlyingFlowScheduleType_30.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_30("STRING_487396132");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_30);
    UnderlyingInstrument_30.insert(UnderlyingInstrRegistry_30.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_30("LOCALMKTDATE_2031027116");
    noUnderlyings_0_0.set(UnderlyingIssueDate_30);
    UnderlyingInstrument_30.insert(UnderlyingIssueDate_30.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_30("STRING_659062129");
    noUnderlyings_0_0.set(UnderlyingIssuer_30);
    UnderlyingInstrument_30.insert(UnderlyingIssuer_30.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_30("STRING_658685803");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingLocaleOfIssue_30.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_30("LOCALMKTDATE_1170147165");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityDate_30.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_30("MONTHYEAR_698099470");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityMonthYear_30.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_30("TZTIMEONLY_1386595949");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_30);
    UnderlyingInstrument_30.insert(UnderlyingMaturityTime_30.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_30;
    UnderlyingNotionalPercentageOutstanding_30.setString("67.600000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_30);
    UnderlyingInstrument_30.insert(UnderlyingNotionalPercentageOutstanding_30.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_30('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_30);
    UnderlyingInstrument_30.insert(UnderlyingOptAttribute_30.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_30;
    UnderlyingOriginalNotionalPercentageOutstanding_30.setString("99.550000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_30);
    UnderlyingInstrument_30.insert(UnderlyingOriginalNotionalPercentageOutstanding_30.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_30("STRING_1403314622");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_30);
    UnderlyingInstrument_30.insert(UnderlyingPriceUnitOfMeasure_30.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_30;
    UnderlyingPriceUnitOfMeasureQty_30.setString("2042991");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_30);
    UnderlyingInstrument_30.insert(UnderlyingPriceUnitOfMeasureQty_30.getString());
    FIX::UnderlyingProduct UnderlyingProduct_30(421279598);
    noUnderlyings_0_0.set(UnderlyingProduct_30);
    UnderlyingInstrument_30.insert(UnderlyingProduct_30.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_30(2063921390);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_30);
    UnderlyingInstrument_30.insert(UnderlyingPutOrCall_30.getString());
    FIX::UnderlyingPx UnderlyingPx_30;
    UnderlyingPx_30.setString("13255503");
    noUnderlyings_0_0.set(UnderlyingPx_30);
    UnderlyingInstrument_30.insert(UnderlyingPx_30.getString());
    FIX::UnderlyingQty UnderlyingQty_30;
    UnderlyingQty_30.setString("7560382");
    noUnderlyings_0_0.set(UnderlyingQty_30);
    UnderlyingInstrument_30.insert(UnderlyingQty_30.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_30("LOCALMKTDATE_316947777");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_30);
    UnderlyingInstrument_30.insert(UnderlyingRedemptionDate_30.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_30("STRING_1967416272");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_30);
    UnderlyingInstrument_30.insert(UnderlyingRepoCollateralSecurityType_30.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_30;
    UnderlyingRepurchaseRate_30.setString("64.930000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_30);
    UnderlyingInstrument_30.insert(UnderlyingRepurchaseRate_30.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_30(197093017);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_30);
    UnderlyingInstrument_30.insert(UnderlyingRepurchaseTerm_30.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_30("STRING_1077956562");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_30);
    UnderlyingInstrument_30.insert(UnderlyingRestructuringType_30.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_30("STRING_985319767");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityDesc_30.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_30("EXCHANGE_2047668478");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityExchange_30.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_30("STRING_1303539396");
    noUnderlyings_0_0.set(UnderlyingSecurityID_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityID_30.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_30("STRING_1559953378");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityIDSource_30.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_30("STRING_658349965");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_30);
    UnderlyingInstrument_30.insert(UnderlyingSecuritySubType_30.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_30("STRING_1943603945");
    noUnderlyings_0_0.set(UnderlyingSecurityType_30);
    UnderlyingInstrument_30.insert(UnderlyingSecurityType_30.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_30("STRING_969767810");
    noUnderlyings_0_0.set(UnderlyingSeniority_30);
    UnderlyingInstrument_30.insert(UnderlyingSeniority_30.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_30("STRING_240724680");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_30);
    UnderlyingInstrument_30.insert(UnderlyingSettlMethod_30.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_30(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_30);
    UnderlyingInstrument_30.insert(UnderlyingSettlementType_30.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_30;
    UnderlyingStartValue_30.setString("13791521");
    noUnderlyings_0_0.set(UnderlyingStartValue_30);
    UnderlyingInstrument_30.insert(UnderlyingStartValue_30.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_30("STRING_728120812");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_30);
    UnderlyingInstrument_30.insert(UnderlyingStateOrProvinceOfIssue_30.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_30("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_30);
    UnderlyingInstrument_30.insert(UnderlyingStrikeCurrency_30.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_30;
    UnderlyingStrikePrice_30.setString("13868066");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_30);
    UnderlyingInstrument_30.insert(UnderlyingStrikePrice_30.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_30("STRING_1095734597");
    noUnderlyings_0_0.set(UnderlyingSymbol_30);
    UnderlyingInstrument_30.insert(UnderlyingSymbol_30.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_30("STRING_588830085");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_30);
    UnderlyingInstrument_30.insert(UnderlyingSymbolSfx_30.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_30("STRING_625918917");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_30);
    UnderlyingInstrument_30.insert(UnderlyingTimeUnit_30.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_30("STRING_31557709");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_30);
    UnderlyingInstrument_30.insert(UnderlyingUnitOfMeasure_30.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_30;
    UnderlyingUnitOfMeasureQty_30.setString("17246288");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_30);
    UnderlyingInstrument_30.insert(UnderlyingUnitOfMeasureQty_30.getString());
    all_values.push_back(UnderlyingInstrument_30);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_63;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_63("STRING_1434872332");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_63);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_63.insert(UnderlyingSecurityAltID_63.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_63("STRING_1928928027");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_63);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_63.insert(UnderlyingSecurityAltIDSource_63.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_64;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_64("STRING_917334822");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_64);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_64.insert(UnderlyingSecurityAltID_64.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_64("STRING_1351310074");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_64);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_64.insert(UnderlyingSecurityAltIDSource_64.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_56;
      FIX::UnderlyingStipType UnderlyingStipType_56("STRING_1673373077");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_56);
      UnderlyingStipulations_NoUnderlyingStips_56.insert(UnderlyingStipType_56.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_56("STRING_1668257851");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_56);
      UnderlyingStipulations_NoUnderlyingStips_56.insert(UnderlyingStipValue_56.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_56);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_60;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_60("STRING_1673689570");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyID_60.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_60('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyIDSource_60.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_60(2004883952);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_60);
      UndlyInstrumentParties_NoUndlyInstrumentParties_60.insert(UnderlyingInstrumentPartyRole_60.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_60);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_132("STRING_1765535698");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_132);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132.insert(UnderlyingInstrumentPartySubID_132.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_132(1160939700);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_132);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132.insert(UnderlyingInstrumentPartySubIDType_132.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_133("STRING_2071479068");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_133);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133.insert(UnderlyingInstrumentPartySubID_133.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_133(276402015);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_133);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133.insert(UnderlyingInstrumentPartySubIDType_133.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_61;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_61("STRING_957059997");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyID_61.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_61('8');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyIDSource_61.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_61(517126695);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_61);
      UndlyInstrumentParties_NoUndlyInstrumentParties_61.insert(UnderlyingInstrumentPartyRole_61.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_61);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_134("STRING_125431716");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_134);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134.insert(UnderlyingInstrumentPartySubID_134.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_134(1245247508);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_134);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134.insert(UnderlyingInstrumentPartySubIDType_134.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_135("STRING_924691393");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_135);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135.insert(UnderlyingInstrumentPartySubID_135.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_135(16162332);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_135);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135.insert(UnderlyingInstrumentPartySubIDType_135.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_136("STRING_484570476");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_136);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136.insert(UnderlyingInstrumentPartySubID_136.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_136(2020425990);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_136);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136.insert(UnderlyingInstrumentPartySubIDType_136.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_31;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_31("DATA_604992417");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingIssuer_31.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_31(1110489393);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingIssuerLen_31.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_31("DATA_2051983699");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingSecurityDesc_31.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_31(182137601);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_31);
    UnderlyingInstrument_31.insert(EncodedUnderlyingSecurityDescLen_31.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_31;
    UnderlyingAdjustedQuantity_31.setString("16065446");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_31);
    UnderlyingInstrument_31.insert(UnderlyingAdjustedQuantity_31.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_31;
    UnderlyingAllocationPercent_31.setString("23.830000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_31);
    UnderlyingInstrument_31.insert(UnderlyingAllocationPercent_31.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_31;
    UnderlyingAttachmentPoint_31.setString("56.280000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_31);
    UnderlyingInstrument_31.insert(UnderlyingAttachmentPoint_31.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_31("STRING_376395792");
    noUnderlyings_0_1.set(UnderlyingCFICode_31);
    UnderlyingInstrument_31.insert(UnderlyingCFICode_31.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_31("STRING_543198809");
    noUnderlyings_0_1.set(UnderlyingCPProgram_31);
    UnderlyingInstrument_31.insert(UnderlyingCPProgram_31.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_31("STRING_1070576745");
    noUnderlyings_0_1.set(UnderlyingCPRegType_31);
    UnderlyingInstrument_31.insert(UnderlyingCPRegType_31.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_31;
    UnderlyingCapValue_31.setString("20497688");
    noUnderlyings_0_1.set(UnderlyingCapValue_31);
    UnderlyingInstrument_31.insert(UnderlyingCapValue_31.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_31;
    UnderlyingCashAmount_31.setString("639730");
    noUnderlyings_0_1.set(UnderlyingCashAmount_31);
    UnderlyingInstrument_31.insert(UnderlyingCashAmount_31.getString());
    FIX::UnderlyingCashType UnderlyingCashType_31("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_31);
    UnderlyingInstrument_31.insert(UnderlyingCashType_31.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_31;
    UnderlyingContractMultiplier_31.setString("15759747");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_31);
    UnderlyingInstrument_31.insert(UnderlyingContractMultiplier_31.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_31(1929323881);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_31);
    UnderlyingInstrument_31.insert(UnderlyingContractMultiplierUnit_31.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_31("COUNTRY_1854904438");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingCountryOfIssue_31.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_31("LOCALMKTDATE_2087500481");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_31);
    UnderlyingInstrument_31.insert(UnderlyingCouponPaymentDate_31.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_31;
    UnderlyingCouponRate_31.setString("59.310000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_31);
    UnderlyingInstrument_31.insert(UnderlyingCouponRate_31.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_31("STRING_868360490");
    noUnderlyings_0_1.set(UnderlyingCreditRating_31);
    UnderlyingInstrument_31.insert(UnderlyingCreditRating_31.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_31("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_31);
    UnderlyingInstrument_31.insert(UnderlyingCurrency_31.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_31;
    UnderlyingCurrentValue_31.setString("18254204");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_31);
    UnderlyingInstrument_31.insert(UnderlyingCurrentValue_31.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_31;
    UnderlyingDetachmentPoint_31.setString("54.840000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_31);
    UnderlyingInstrument_31.insert(UnderlyingDetachmentPoint_31.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_31;
    UnderlyingDirtyPrice_31.setString("1934209");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_31);
    UnderlyingInstrument_31.insert(UnderlyingDirtyPrice_31.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_31;
    UnderlyingEndPrice_31.setString("6770408");
    noUnderlyings_0_1.set(UnderlyingEndPrice_31);
    UnderlyingInstrument_31.insert(UnderlyingEndPrice_31.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_31;
    UnderlyingEndValue_31.setString("8832072");
    noUnderlyings_0_1.set(UnderlyingEndValue_31);
    UnderlyingInstrument_31.insert(UnderlyingEndValue_31.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_31(1438668502);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_31);
    UnderlyingInstrument_31.insert(UnderlyingExerciseStyle_31.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_31;
    UnderlyingFXRate_31.setString("16017321");
    noUnderlyings_0_1.set(UnderlyingFXRate_31);
    UnderlyingInstrument_31.insert(UnderlyingFXRate_31.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_31('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_31);
    UnderlyingInstrument_31.insert(UnderlyingFXRateCalc_31.getString());
    FIX::UnderlyingFactor UnderlyingFactor_31;
    UnderlyingFactor_31.setString("19232389");
    noUnderlyings_0_1.set(UnderlyingFactor_31);
    UnderlyingInstrument_31.insert(UnderlyingFactor_31.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_31(1474674535);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_31);
    UnderlyingInstrument_31.insert(UnderlyingFlowScheduleType_31.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_31("STRING_1504361950");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_31);
    UnderlyingInstrument_31.insert(UnderlyingInstrRegistry_31.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_31("LOCALMKTDATE_886244723");
    noUnderlyings_0_1.set(UnderlyingIssueDate_31);
    UnderlyingInstrument_31.insert(UnderlyingIssueDate_31.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_31("STRING_1379174587");
    noUnderlyings_0_1.set(UnderlyingIssuer_31);
    UnderlyingInstrument_31.insert(UnderlyingIssuer_31.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_31("STRING_1686499551");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingLocaleOfIssue_31.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_31("LOCALMKTDATE_345305693");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityDate_31.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_31("MONTHYEAR_571063322");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityMonthYear_31.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_31("TZTIMEONLY_1650081531");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_31);
    UnderlyingInstrument_31.insert(UnderlyingMaturityTime_31.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_31;
    UnderlyingNotionalPercentageOutstanding_31.setString("14.850000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_31);
    UnderlyingInstrument_31.insert(UnderlyingNotionalPercentageOutstanding_31.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_31('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_31);
    UnderlyingInstrument_31.insert(UnderlyingOptAttribute_31.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_31;
    UnderlyingOriginalNotionalPercentageOutstanding_31.setString("46.280000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_31);
    UnderlyingInstrument_31.insert(UnderlyingOriginalNotionalPercentageOutstanding_31.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_31("STRING_623986706");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_31);
    UnderlyingInstrument_31.insert(UnderlyingPriceUnitOfMeasure_31.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_31;
    UnderlyingPriceUnitOfMeasureQty_31.setString("11782351");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_31);
    UnderlyingInstrument_31.insert(UnderlyingPriceUnitOfMeasureQty_31.getString());
    FIX::UnderlyingProduct UnderlyingProduct_31(423195114);
    noUnderlyings_0_1.set(UnderlyingProduct_31);
    UnderlyingInstrument_31.insert(UnderlyingProduct_31.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_31(52477849);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_31);
    UnderlyingInstrument_31.insert(UnderlyingPutOrCall_31.getString());
    FIX::UnderlyingPx UnderlyingPx_31;
    UnderlyingPx_31.setString("9600753");
    noUnderlyings_0_1.set(UnderlyingPx_31);
    UnderlyingInstrument_31.insert(UnderlyingPx_31.getString());
    FIX::UnderlyingQty UnderlyingQty_31;
    UnderlyingQty_31.setString("1306159");
    noUnderlyings_0_1.set(UnderlyingQty_31);
    UnderlyingInstrument_31.insert(UnderlyingQty_31.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_31("LOCALMKTDATE_2139978331");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_31);
    UnderlyingInstrument_31.insert(UnderlyingRedemptionDate_31.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_31("STRING_359967661");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_31);
    UnderlyingInstrument_31.insert(UnderlyingRepoCollateralSecurityType_31.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_31;
    UnderlyingRepurchaseRate_31.setString("63.950000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_31);
    UnderlyingInstrument_31.insert(UnderlyingRepurchaseRate_31.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_31(2003990584);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_31);
    UnderlyingInstrument_31.insert(UnderlyingRepurchaseTerm_31.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_31("STRING_36261960");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_31);
    UnderlyingInstrument_31.insert(UnderlyingRestructuringType_31.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_31("STRING_676913235");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityDesc_31.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_31("EXCHANGE_614282420");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityExchange_31.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_31("STRING_229682954");
    noUnderlyings_0_1.set(UnderlyingSecurityID_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityID_31.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_31("STRING_1353954035");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityIDSource_31.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_31("STRING_1497489621");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_31);
    UnderlyingInstrument_31.insert(UnderlyingSecuritySubType_31.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_31("STRING_1668351457");
    noUnderlyings_0_1.set(UnderlyingSecurityType_31);
    UnderlyingInstrument_31.insert(UnderlyingSecurityType_31.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_31("STRING_808202581");
    noUnderlyings_0_1.set(UnderlyingSeniority_31);
    UnderlyingInstrument_31.insert(UnderlyingSeniority_31.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_31("STRING_249375505");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_31);
    UnderlyingInstrument_31.insert(UnderlyingSettlMethod_31.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_31(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_31);
    UnderlyingInstrument_31.insert(UnderlyingSettlementType_31.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_31;
    UnderlyingStartValue_31.setString("1353934");
    noUnderlyings_0_1.set(UnderlyingStartValue_31);
    UnderlyingInstrument_31.insert(UnderlyingStartValue_31.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_31("STRING_1753737455");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_31);
    UnderlyingInstrument_31.insert(UnderlyingStateOrProvinceOfIssue_31.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_31("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_31);
    UnderlyingInstrument_31.insert(UnderlyingStrikeCurrency_31.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_31;
    UnderlyingStrikePrice_31.setString("12927533");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_31);
    UnderlyingInstrument_31.insert(UnderlyingStrikePrice_31.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_31("STRING_528173556");
    noUnderlyings_0_1.set(UnderlyingSymbol_31);
    UnderlyingInstrument_31.insert(UnderlyingSymbol_31.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_31("STRING_2085631378");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_31);
    UnderlyingInstrument_31.insert(UnderlyingSymbolSfx_31.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_31("STRING_795351241");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_31);
    UnderlyingInstrument_31.insert(UnderlyingTimeUnit_31.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_31("STRING_1249875041");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_31);
    UnderlyingInstrument_31.insert(UnderlyingUnitOfMeasure_31.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_31;
    UnderlyingUnitOfMeasureQty_31.setString("10524098");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_31);
    UnderlyingInstrument_31.insert(UnderlyingUnitOfMeasureQty_31.getString());
    all_values.push_back(UnderlyingInstrument_31);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_65;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_65("STRING_1873861747");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_65);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_65.insert(UnderlyingSecurityAltID_65.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_65("STRING_83161358");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_65);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_65.insert(UnderlyingSecurityAltIDSource_65.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_66;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_66("STRING_1791720984");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_66);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_66.insert(UnderlyingSecurityAltID_66.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_66("STRING_1926339596");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_66);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_66.insert(UnderlyingSecurityAltIDSource_66.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_67;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_67("STRING_1043236736");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_67);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_67.insert(UnderlyingSecurityAltID_67.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_67("STRING_1922336889");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_67);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_67.insert(UnderlyingSecurityAltIDSource_67.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_67);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_57;
      FIX::UnderlyingStipType UnderlyingStipType_57("STRING_1403204397");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_57);
      UnderlyingStipulations_NoUnderlyingStips_57.insert(UnderlyingStipType_57.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_57("STRING_773829636");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_57);
      UnderlyingStipulations_NoUnderlyingStips_57.insert(UnderlyingStipValue_57.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_57);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_58;
      FIX::UnderlyingStipType UnderlyingStipType_58("STRING_1775341216");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_58);
      UnderlyingStipulations_NoUnderlyingStips_58.insert(UnderlyingStipType_58.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_58("STRING_1439466357");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_58);
      UnderlyingStipulations_NoUnderlyingStips_58.insert(UnderlyingStipValue_58.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_58);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_62;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_62("STRING_242139988");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyID_62.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_62('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyIDSource_62.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_62(657213259);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyRole_62.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_62);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_137("STRING_1190017120");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_137);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137.insert(UnderlyingInstrumentPartySubID_137.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_137(1465415840);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_137);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137.insert(UnderlyingInstrumentPartySubIDType_137.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_138("STRING_1989005115");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_138);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138.insert(UnderlyingInstrumentPartySubID_138.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_138(486640260);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_138);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138.insert(UnderlyingInstrumentPartySubIDType_138.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_32;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_32("DATA_1600809308");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingIssuer_32.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_32(1595258922);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingIssuerLen_32.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_32("DATA_669508123");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingSecurityDesc_32.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_32(967893716);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_32);
    UnderlyingInstrument_32.insert(EncodedUnderlyingSecurityDescLen_32.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_32;
    UnderlyingAdjustedQuantity_32.setString("7405286");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_32);
    UnderlyingInstrument_32.insert(UnderlyingAdjustedQuantity_32.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_32;
    UnderlyingAllocationPercent_32.setString("16.790000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_32);
    UnderlyingInstrument_32.insert(UnderlyingAllocationPercent_32.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_32;
    UnderlyingAttachmentPoint_32.setString("14.460000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_32);
    UnderlyingInstrument_32.insert(UnderlyingAttachmentPoint_32.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_32("STRING_1535879874");
    noUnderlyings_0_2.set(UnderlyingCFICode_32);
    UnderlyingInstrument_32.insert(UnderlyingCFICode_32.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_32("STRING_300073072");
    noUnderlyings_0_2.set(UnderlyingCPProgram_32);
    UnderlyingInstrument_32.insert(UnderlyingCPProgram_32.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_32("STRING_1958451308");
    noUnderlyings_0_2.set(UnderlyingCPRegType_32);
    UnderlyingInstrument_32.insert(UnderlyingCPRegType_32.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_32;
    UnderlyingCapValue_32.setString("7569220");
    noUnderlyings_0_2.set(UnderlyingCapValue_32);
    UnderlyingInstrument_32.insert(UnderlyingCapValue_32.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_32;
    UnderlyingCashAmount_32.setString("264511");
    noUnderlyings_0_2.set(UnderlyingCashAmount_32);
    UnderlyingInstrument_32.insert(UnderlyingCashAmount_32.getString());
    FIX::UnderlyingCashType UnderlyingCashType_32("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_32);
    UnderlyingInstrument_32.insert(UnderlyingCashType_32.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_32;
    UnderlyingContractMultiplier_32.setString("4011594");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_32);
    UnderlyingInstrument_32.insert(UnderlyingContractMultiplier_32.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_32(1952790767);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_32);
    UnderlyingInstrument_32.insert(UnderlyingContractMultiplierUnit_32.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_32("COUNTRY_937365754");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingCountryOfIssue_32.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_32("LOCALMKTDATE_176012673");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_32);
    UnderlyingInstrument_32.insert(UnderlyingCouponPaymentDate_32.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_32;
    UnderlyingCouponRate_32.setString("13.990000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_32);
    UnderlyingInstrument_32.insert(UnderlyingCouponRate_32.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_32("STRING_193086503");
    noUnderlyings_0_2.set(UnderlyingCreditRating_32);
    UnderlyingInstrument_32.insert(UnderlyingCreditRating_32.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_32("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_32);
    UnderlyingInstrument_32.insert(UnderlyingCurrency_32.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_32;
    UnderlyingCurrentValue_32.setString("16325528");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_32);
    UnderlyingInstrument_32.insert(UnderlyingCurrentValue_32.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_32;
    UnderlyingDetachmentPoint_32.setString("15.330000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_32);
    UnderlyingInstrument_32.insert(UnderlyingDetachmentPoint_32.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_32;
    UnderlyingDirtyPrice_32.setString("15941389");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_32);
    UnderlyingInstrument_32.insert(UnderlyingDirtyPrice_32.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_32;
    UnderlyingEndPrice_32.setString("11542185");
    noUnderlyings_0_2.set(UnderlyingEndPrice_32);
    UnderlyingInstrument_32.insert(UnderlyingEndPrice_32.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_32;
    UnderlyingEndValue_32.setString("9103147");
    noUnderlyings_0_2.set(UnderlyingEndValue_32);
    UnderlyingInstrument_32.insert(UnderlyingEndValue_32.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_32(1186284917);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_32);
    UnderlyingInstrument_32.insert(UnderlyingExerciseStyle_32.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_32;
    UnderlyingFXRate_32.setString("1967519");
    noUnderlyings_0_2.set(UnderlyingFXRate_32);
    UnderlyingInstrument_32.insert(UnderlyingFXRate_32.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_32('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_32);
    UnderlyingInstrument_32.insert(UnderlyingFXRateCalc_32.getString());
    FIX::UnderlyingFactor UnderlyingFactor_32;
    UnderlyingFactor_32.setString("10278063");
    noUnderlyings_0_2.set(UnderlyingFactor_32);
    UnderlyingInstrument_32.insert(UnderlyingFactor_32.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_32(683392256);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_32);
    UnderlyingInstrument_32.insert(UnderlyingFlowScheduleType_32.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_32("STRING_1829056292");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_32);
    UnderlyingInstrument_32.insert(UnderlyingInstrRegistry_32.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_32("LOCALMKTDATE_475581658");
    noUnderlyings_0_2.set(UnderlyingIssueDate_32);
    UnderlyingInstrument_32.insert(UnderlyingIssueDate_32.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_32("STRING_1352900379");
    noUnderlyings_0_2.set(UnderlyingIssuer_32);
    UnderlyingInstrument_32.insert(UnderlyingIssuer_32.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_32("STRING_649466360");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingLocaleOfIssue_32.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_32("LOCALMKTDATE_1216110291");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityDate_32.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_32("MONTHYEAR_403098410");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityMonthYear_32.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_32("TZTIMEONLY_1555507806");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_32);
    UnderlyingInstrument_32.insert(UnderlyingMaturityTime_32.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_32;
    UnderlyingNotionalPercentageOutstanding_32.setString("65.180000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_32);
    UnderlyingInstrument_32.insert(UnderlyingNotionalPercentageOutstanding_32.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_32('7');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_32);
    UnderlyingInstrument_32.insert(UnderlyingOptAttribute_32.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_32;
    UnderlyingOriginalNotionalPercentageOutstanding_32.setString("54.660000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_32);
    UnderlyingInstrument_32.insert(UnderlyingOriginalNotionalPercentageOutstanding_32.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_32("STRING_1361428614");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_32);
    UnderlyingInstrument_32.insert(UnderlyingPriceUnitOfMeasure_32.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_32;
    UnderlyingPriceUnitOfMeasureQty_32.setString("7296226");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_32);
    UnderlyingInstrument_32.insert(UnderlyingPriceUnitOfMeasureQty_32.getString());
    FIX::UnderlyingProduct UnderlyingProduct_32(1260604485);
    noUnderlyings_0_2.set(UnderlyingProduct_32);
    UnderlyingInstrument_32.insert(UnderlyingProduct_32.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_32(1762588046);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_32);
    UnderlyingInstrument_32.insert(UnderlyingPutOrCall_32.getString());
    FIX::UnderlyingPx UnderlyingPx_32;
    UnderlyingPx_32.setString("5349297");
    noUnderlyings_0_2.set(UnderlyingPx_32);
    UnderlyingInstrument_32.insert(UnderlyingPx_32.getString());
    FIX::UnderlyingQty UnderlyingQty_32;
    UnderlyingQty_32.setString("504865");
    noUnderlyings_0_2.set(UnderlyingQty_32);
    UnderlyingInstrument_32.insert(UnderlyingQty_32.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_32("LOCALMKTDATE_1938600719");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_32);
    UnderlyingInstrument_32.insert(UnderlyingRedemptionDate_32.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_32("STRING_111587524");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_32);
    UnderlyingInstrument_32.insert(UnderlyingRepoCollateralSecurityType_32.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_32;
    UnderlyingRepurchaseRate_32.setString("30.950000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_32);
    UnderlyingInstrument_32.insert(UnderlyingRepurchaseRate_32.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_32(740959380);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_32);
    UnderlyingInstrument_32.insert(UnderlyingRepurchaseTerm_32.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_32("STRING_1463586491");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_32);
    UnderlyingInstrument_32.insert(UnderlyingRestructuringType_32.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_32("STRING_1876125955");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityDesc_32.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_32("EXCHANGE_994060913");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityExchange_32.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_32("STRING_910241798");
    noUnderlyings_0_2.set(UnderlyingSecurityID_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityID_32.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_32("STRING_882860831");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityIDSource_32.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_32("STRING_1904375705");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_32);
    UnderlyingInstrument_32.insert(UnderlyingSecuritySubType_32.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_32("STRING_2096526715");
    noUnderlyings_0_2.set(UnderlyingSecurityType_32);
    UnderlyingInstrument_32.insert(UnderlyingSecurityType_32.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_32("STRING_1079612828");
    noUnderlyings_0_2.set(UnderlyingSeniority_32);
    UnderlyingInstrument_32.insert(UnderlyingSeniority_32.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_32("STRING_2132622689");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_32);
    UnderlyingInstrument_32.insert(UnderlyingSettlMethod_32.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_32(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_32);
    UnderlyingInstrument_32.insert(UnderlyingSettlementType_32.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_32;
    UnderlyingStartValue_32.setString("17630050");
    noUnderlyings_0_2.set(UnderlyingStartValue_32);
    UnderlyingInstrument_32.insert(UnderlyingStartValue_32.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_32("STRING_1814195334");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_32);
    UnderlyingInstrument_32.insert(UnderlyingStateOrProvinceOfIssue_32.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_32("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_32);
    UnderlyingInstrument_32.insert(UnderlyingStrikeCurrency_32.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_32;
    UnderlyingStrikePrice_32.setString("3161780");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_32);
    UnderlyingInstrument_32.insert(UnderlyingStrikePrice_32.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_32("STRING_521057753");
    noUnderlyings_0_2.set(UnderlyingSymbol_32);
    UnderlyingInstrument_32.insert(UnderlyingSymbol_32.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_32("STRING_1371520226");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_32);
    UnderlyingInstrument_32.insert(UnderlyingSymbolSfx_32.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_32("STRING_1871685853");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_32);
    UnderlyingInstrument_32.insert(UnderlyingTimeUnit_32.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_32("STRING_1125564271");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_32);
    UnderlyingInstrument_32.insert(UnderlyingUnitOfMeasure_32.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_32;
    UnderlyingUnitOfMeasureQty_32.setString("20746917");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_32);
    UnderlyingInstrument_32.insert(UnderlyingUnitOfMeasureQty_32.getString());
    all_values.push_back(UnderlyingInstrument_32);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_68;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_68("STRING_339509237");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_68);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_68.insert(UnderlyingSecurityAltID_68.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_68("STRING_656830714");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_68);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_68.insert(UnderlyingSecurityAltIDSource_68.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_69;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_69("STRING_203798508");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_69);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_69.insert(UnderlyingSecurityAltID_69.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_69("STRING_2102097283");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_69);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_69.insert(UnderlyingSecurityAltIDSource_69.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_70;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_70("STRING_1191760487");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_70);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_70.insert(UnderlyingSecurityAltID_70.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_70("STRING_254285100");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_70);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_70.insert(UnderlyingSecurityAltIDSource_70.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_59;
      FIX::UnderlyingStipType UnderlyingStipType_59("STRING_1303348011");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_59);
      UnderlyingStipulations_NoUnderlyingStips_59.insert(UnderlyingStipType_59.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_59("STRING_497858195");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_59);
      UnderlyingStipulations_NoUnderlyingStips_59.insert(UnderlyingStipValue_59.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_59);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_60;
      FIX::UnderlyingStipType UnderlyingStipType_60("STRING_486690087");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_60);
      UnderlyingStipulations_NoUnderlyingStips_60.insert(UnderlyingStipType_60.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_60("STRING_619450854");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_60);
      UnderlyingStipulations_NoUnderlyingStips_60.insert(UnderlyingStipValue_60.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_60);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_63;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_63("STRING_1480751000");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyID_63.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_63('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyIDSource_63.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_63(1109361334);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_63);
      UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyRole_63.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_63);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_139("STRING_1478735720");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_139);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139.insert(UnderlyingInstrumentPartySubID_139.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_139(41490514);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_139);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139.insert(UnderlyingInstrumentPartySubIDType_139.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_64;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_64("STRING_1222782099");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyID_64.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_64('3');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyIDSource_64.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_64(1804495598);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_64);
      UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyRole_64.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_64);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_140("STRING_1760532634");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_140);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140.insert(UnderlyingInstrumentPartySubID_140.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_140(625433766);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_140);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140.insert(UnderlyingInstrumentPartySubIDType_140.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_141("STRING_1205671832");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_141);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141.insert(UnderlyingInstrumentPartySubID_141.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_141(134106739);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_141);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141.insert(UnderlyingInstrumentPartySubIDType_141.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
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
