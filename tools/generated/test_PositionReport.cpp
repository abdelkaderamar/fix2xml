#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/PositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> PositionReport_0;
  FIX::Account Account_29("STRING_2013597183");
  msg.set(Account_29);
  PositionReport_0.insert(Account_29.getString());
  FIX::AccountType AccountType_24(7);
  msg.set(AccountType_24);
  PositionReport_0.insert(AccountType_24.getString());
  FIX::AcctIDSource AcctIDSource_22(2);
  msg.set(AcctIDSource_22);
  PositionReport_0.insert(AcctIDSource_22.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_17("LOCALMKTDATE_1922729094");
  msg.set(ClearingBusinessDate_17);
  PositionReport_0.insert(ClearingBusinessDate_17.getString());
  FIX::Currency Currency_48("JPY");
  msg.set(Currency_48);
  PositionReport_0.insert(Currency_48.getString());
  FIX::DeliveryDate DeliveryDate_0("LOCALMKTDATE_1196094623");
  msg.set(DeliveryDate_0);
  PositionReport_0.insert(DeliveryDate_0.getString());
  FIX::EncodedText EncodedText_78("DATA_129352589");
  msg.set(EncodedText_78);
  PositionReport_0.insert(EncodedText_78.getString());
  FIX::EncodedTextLen EncodedTextLen_78(1147549770);
  msg.set(EncodedTextLen_78);
  PositionReport_0.insert(EncodedTextLen_78.getString());
  FIX::MatchStatus MatchStatus_8('1');
  msg.set(MatchStatus_8);
  PositionReport_0.insert(MatchStatus_8.getString());
  FIX::MessageEventSource MessageEventSource_3("STRING_1584992423");
  msg.set(MessageEventSource_3);
  PositionReport_0.insert(MessageEventSource_3.getString());
  FIX::ModelType ModelType_0(0);
  msg.set(ModelType_0);
  PositionReport_0.insert(ModelType_0.getString());
  FIX::PosMaintRptID PosMaintRptID_2("STRING_534331729");
  msg.set(PosMaintRptID_2);
  PositionReport_0.insert(PosMaintRptID_2.getString());
  FIX::PosReqID PosReqID_3("STRING_404791659");
  msg.set(PosReqID_3);
  PositionReport_0.insert(PosReqID_3.getString());
  FIX::PosReqResult PosReqResult_0(99);
  msg.set(PosReqResult_0);
  PositionReport_0.insert(PosReqResult_0.getString());
  FIX::PosReqType PosReqType_1(6);
  msg.set(PosReqType_1);
  PositionReport_0.insert(PosReqType_1.getString());
  FIX::PriceDelta PriceDelta_6;
  PriceDelta_6.setString("5753421");
  msg.set(PriceDelta_6);
  PositionReport_0.insert(PriceDelta_6.getString());
  FIX::PriceType PriceType_34(2);
  msg.set(PriceType_34);
  PositionReport_0.insert(PriceType_34.getString());
  FIX::PriorSettlPrice PriorSettlPrice_2;
  PriorSettlPrice_2.setString("3864045");
  msg.set(PriorSettlPrice_2);
  PositionReport_0.insert(PriorSettlPrice_2.getString());
  FIX::RegistStatus RegistStatus_0('H');
  msg.set(RegistStatus_0);
  PositionReport_0.insert(RegistStatus_0.getString());
  FIX::SettlCurrency SettlCurrency_24("JPY");
  msg.set(SettlCurrency_24);
  PositionReport_0.insert(SettlCurrency_24.getString());
  FIX::SettlPrice SettlPrice_2;
  SettlPrice_2.setString("5848345");
  msg.set(SettlPrice_2);
  PositionReport_0.insert(SettlPrice_2.getString());
  FIX::SettlPriceType SettlPriceType_1(1);
  msg.set(SettlPriceType_1);
  PositionReport_0.insert(SettlPriceType_1.getString());
  FIX::SettlSessID SettlSessID_9("STRING_EOD");
  msg.set(SettlSessID_9);
  PositionReport_0.insert(SettlSessID_9.getString());
  FIX::SettlSessSubID SettlSessSubID_8("STRING_2128088580");
  msg.set(SettlSessSubID_8);
  PositionReport_0.insert(SettlSessSubID_8.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_4('0');
  msg.set(SubscriptionRequestType_4);
  PositionReport_0.insert(SubscriptionRequestType_4.getString());
  FIX::Text Text_78("STRING_854801105");
  msg.set(Text_78);
  PositionReport_0.insert(Text_78.getString());
  FIX::TotalNumPosReports TotalNumPosReports_0(1087896193);
  msg.set(TotalNumPosReports_0);
  PositionReport_0.insert(TotalNumPosReports_0.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_0(true);
  msg.set(UnsolicitedIndicator_0);
  PositionReport_0.insert(UnsolicitedIndicator_0.getString());
  all_values.push_back(PositionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_11;
  FIX::ApplID ApplID_11("STRING_1280600417");
  msg.set(ApplID_11);
  ApplicationSequenceControl_11.insert(ApplID_11.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_11(954009729);
  msg.set(ApplLastSeqNum_11);
  ApplicationSequenceControl_11.insert(ApplLastSeqNum_11.getString());
  FIX::ApplResendFlag ApplResendFlag_11(true);
  msg.set(ApplResendFlag_11);
  ApplicationSequenceControl_11.insert(ApplResendFlag_11.getString());
  FIX::ApplSeqNum ApplSeqNum_11(711750634);
  msg.set(ApplSeqNum_11);
  ApplicationSequenceControl_11.insert(ApplSeqNum_11.getString());
  all_values.push_back(ApplicationSequenceControl_11);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_86;
    FIX::EncodedLegIssuer EncodedLegIssuer_86("DATA_772541897");
    noLegs_0_0.set(EncodedLegIssuer_86);
    InstrumentLeg_86.insert(EncodedLegIssuer_86.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_86(302247721);
    noLegs_0_0.set(EncodedLegIssuerLen_86);
    InstrumentLeg_86.insert(EncodedLegIssuerLen_86.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_86("DATA_1925349798");
    noLegs_0_0.set(EncodedLegSecurityDesc_86);
    InstrumentLeg_86.insert(EncodedLegSecurityDesc_86.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_86(901894486);
    noLegs_0_0.set(EncodedLegSecurityDescLen_86);
    InstrumentLeg_86.insert(EncodedLegSecurityDescLen_86.getString());
    FIX::LegCFICode LegCFICode_86("STRING_1449797491");
    noLegs_0_0.set(LegCFICode_86);
    InstrumentLeg_86.insert(LegCFICode_86.getString());
    FIX::LegContractMultiplier LegContractMultiplier_86;
    LegContractMultiplier_86.setString("2581399");
    noLegs_0_0.set(LegContractMultiplier_86);
    InstrumentLeg_86.insert(LegContractMultiplier_86.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_86(339403262);
    noLegs_0_0.set(LegContractMultiplierUnit_86);
    InstrumentLeg_86.insert(LegContractMultiplierUnit_86.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_86("MONTHYEAR_1382389505");
    noLegs_0_0.set(LegContractSettlMonth_86);
    InstrumentLeg_86.insert(LegContractSettlMonth_86.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_86("COUNTRY_792471676");
    noLegs_0_0.set(LegCountryOfIssue_86);
    InstrumentLeg_86.insert(LegCountryOfIssue_86.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_86("LOCALMKTDATE_744194921");
    noLegs_0_0.set(LegCouponPaymentDate_86);
    InstrumentLeg_86.insert(LegCouponPaymentDate_86.getString());
    FIX::LegCouponRate LegCouponRate_86;
    LegCouponRate_86.setString("56.880000");
    noLegs_0_0.set(LegCouponRate_86);
    InstrumentLeg_86.insert(LegCouponRate_86.getString());
    FIX::LegCreditRating LegCreditRating_86("STRING_1505648790");
    noLegs_0_0.set(LegCreditRating_86);
    InstrumentLeg_86.insert(LegCreditRating_86.getString());
    FIX::LegCurrency LegCurrency_86("JPY");
    noLegs_0_0.set(LegCurrency_86);
    InstrumentLeg_86.insert(LegCurrency_86.getString());
    FIX::LegDatedDate LegDatedDate_86("LOCALMKTDATE_1892053316");
    noLegs_0_0.set(LegDatedDate_86);
    InstrumentLeg_86.insert(LegDatedDate_86.getString());
    FIX::LegExerciseStyle LegExerciseStyle_86(920405115);
    noLegs_0_0.set(LegExerciseStyle_86);
    InstrumentLeg_86.insert(LegExerciseStyle_86.getString());
    FIX::LegFactor LegFactor_86;
    LegFactor_86.setString("10728664");
    noLegs_0_0.set(LegFactor_86);
    InstrumentLeg_86.insert(LegFactor_86.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_86(994854196);
    noLegs_0_0.set(LegFlowScheduleType_86);
    InstrumentLeg_86.insert(LegFlowScheduleType_86.getString());
    FIX::LegInstrRegistry LegInstrRegistry_86("STRING_1505239646");
    noLegs_0_0.set(LegInstrRegistry_86);
    InstrumentLeg_86.insert(LegInstrRegistry_86.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_86("LOCALMKTDATE_2000957819");
    noLegs_0_0.set(LegInterestAccrualDate_86);
    InstrumentLeg_86.insert(LegInterestAccrualDate_86.getString());
    FIX::LegIssueDate LegIssueDate_86("LOCALMKTDATE_124579852");
    noLegs_0_0.set(LegIssueDate_86);
    InstrumentLeg_86.insert(LegIssueDate_86.getString());
    FIX::LegIssuer LegIssuer_86("STRING_1485844578");
    noLegs_0_0.set(LegIssuer_86);
    InstrumentLeg_86.insert(LegIssuer_86.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_86("STRING_1639843318");
    noLegs_0_0.set(LegLocaleOfIssue_86);
    InstrumentLeg_86.insert(LegLocaleOfIssue_86.getString());
    FIX::LegMaturityDate LegMaturityDate_86("LOCALMKTDATE_979380957");
    noLegs_0_0.set(LegMaturityDate_86);
    InstrumentLeg_86.insert(LegMaturityDate_86.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_86("MONTHYEAR_426257123");
    noLegs_0_0.set(LegMaturityMonthYear_86);
    InstrumentLeg_86.insert(LegMaturityMonthYear_86.getString());
    FIX::LegMaturityTime LegMaturityTime_86("TZTIMEONLY_323335458");
    noLegs_0_0.set(LegMaturityTime_86);
    InstrumentLeg_86.insert(LegMaturityTime_86.getString());
    FIX::LegOptAttribute LegOptAttribute_86('1');
    noLegs_0_0.set(LegOptAttribute_86);
    InstrumentLeg_86.insert(LegOptAttribute_86.getString());
    FIX::LegOptionRatio LegOptionRatio_86;
    LegOptionRatio_86.setString("13802668");
    noLegs_0_0.set(LegOptionRatio_86);
    InstrumentLeg_86.insert(LegOptionRatio_86.getString());
    FIX::LegPool LegPool_86("STRING_1334071987");
    noLegs_0_0.set(LegPool_86);
    InstrumentLeg_86.insert(LegPool_86.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_86("STRING_824248361");
    noLegs_0_0.set(LegPriceUnitOfMeasure_86);
    InstrumentLeg_86.insert(LegPriceUnitOfMeasure_86.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_86;
    LegPriceUnitOfMeasureQty_86.setString("21095220");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_86);
    InstrumentLeg_86.insert(LegPriceUnitOfMeasureQty_86.getString());
    FIX::LegProduct LegProduct_86(2106613884);
    noLegs_0_0.set(LegProduct_86);
    InstrumentLeg_86.insert(LegProduct_86.getString());
    FIX::LegPutOrCall LegPutOrCall_86(1126496082);
    noLegs_0_0.set(LegPutOrCall_86);
    InstrumentLeg_86.insert(LegPutOrCall_86.getString());
    FIX::LegRatioQty LegRatioQty_86;
    LegRatioQty_86.setString("18873881");
    noLegs_0_0.set(LegRatioQty_86);
    InstrumentLeg_86.insert(LegRatioQty_86.getString());
    FIX::LegRedemptionDate LegRedemptionDate_86("LOCALMKTDATE_861024723");
    noLegs_0_0.set(LegRedemptionDate_86);
    InstrumentLeg_86.insert(LegRedemptionDate_86.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_86("STRING_428809925");
    noLegs_0_0.set(LegRepoCollateralSecurityType_86);
    InstrumentLeg_86.insert(LegRepoCollateralSecurityType_86.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_86;
    LegRepurchaseRate_86.setString("81.250000");
    noLegs_0_0.set(LegRepurchaseRate_86);
    InstrumentLeg_86.insert(LegRepurchaseRate_86.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_86(1200427985);
    noLegs_0_0.set(LegRepurchaseTerm_86);
    InstrumentLeg_86.insert(LegRepurchaseTerm_86.getString());
    FIX::LegSecurityDesc LegSecurityDesc_86("STRING_1811199430");
    noLegs_0_0.set(LegSecurityDesc_86);
    InstrumentLeg_86.insert(LegSecurityDesc_86.getString());
    FIX::LegSecurityExchange LegSecurityExchange_86("EXCHANGE_790516153");
    noLegs_0_0.set(LegSecurityExchange_86);
    InstrumentLeg_86.insert(LegSecurityExchange_86.getString());
    FIX::LegSecurityID LegSecurityID_86("STRING_1944622906");
    noLegs_0_0.set(LegSecurityID_86);
    InstrumentLeg_86.insert(LegSecurityID_86.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_86("STRING_1591561470");
    noLegs_0_0.set(LegSecurityIDSource_86);
    InstrumentLeg_86.insert(LegSecurityIDSource_86.getString());
    FIX::LegSecuritySubType LegSecuritySubType_86("STRING_148681295");
    noLegs_0_0.set(LegSecuritySubType_86);
    InstrumentLeg_86.insert(LegSecuritySubType_86.getString());
    FIX::LegSecurityType LegSecurityType_86("STRING_1116676327");
    noLegs_0_0.set(LegSecurityType_86);
    InstrumentLeg_86.insert(LegSecurityType_86.getString());
    FIX::LegSide LegSide_86('8');
    noLegs_0_0.set(LegSide_86);
    InstrumentLeg_86.insert(LegSide_86.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_86("STRING_2040734612");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_86);
    InstrumentLeg_86.insert(LegStateOrProvinceOfIssue_86.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_86("USD");
    noLegs_0_0.set(LegStrikeCurrency_86);
    InstrumentLeg_86.insert(LegStrikeCurrency_86.getString());
    FIX::LegStrikePrice LegStrikePrice_86;
    LegStrikePrice_86.setString("8881051");
    noLegs_0_0.set(LegStrikePrice_86);
    InstrumentLeg_86.insert(LegStrikePrice_86.getString());
    FIX::LegSymbol LegSymbol_86("STRING_1394837441");
    noLegs_0_0.set(LegSymbol_86);
    InstrumentLeg_86.insert(LegSymbol_86.getString());
    FIX::LegSymbolSfx LegSymbolSfx_86("STRING_1735715523");
    noLegs_0_0.set(LegSymbolSfx_86);
    InstrumentLeg_86.insert(LegSymbolSfx_86.getString());
    FIX::LegTimeUnit LegTimeUnit_86("STRING_1012685012");
    noLegs_0_0.set(LegTimeUnit_86);
    InstrumentLeg_86.insert(LegTimeUnit_86.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_86("STRING_733198371");
    noLegs_0_0.set(LegUnitOfMeasure_86);
    InstrumentLeg_86.insert(LegUnitOfMeasure_86.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_86;
    LegUnitOfMeasureQty_86.setString("12280751");
    noLegs_0_0.set(LegUnitOfMeasureQty_86);
    InstrumentLeg_86.insert(LegUnitOfMeasureQty_86.getString());
    all_values.push_back(InstrumentLeg_86);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_174;
      FIX::LegSecurityAltID LegSecurityAltID_174("STRING_1159455494");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_174);
      LegSecAltIDGrp_NoLegSecurityAltID_174.insert(LegSecurityAltID_174.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_174("STRING_1551410652");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_174);
      LegSecAltIDGrp_NoLegSecurityAltID_174.insert(LegSecurityAltIDSource_174.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_174);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_175;
      FIX::LegSecurityAltID LegSecurityAltID_175("STRING_2104563696");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_175);
      LegSecAltIDGrp_NoLegSecurityAltID_175.insert(LegSecurityAltID_175.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_175("STRING_392238699");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_175);
      LegSecAltIDGrp_NoLegSecurityAltID_175.insert(LegSecurityAltIDSource_175.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_175);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_176;
      FIX::LegSecurityAltID LegSecurityAltID_176("STRING_737998991");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_176);
      LegSecAltIDGrp_NoLegSecurityAltID_176.insert(LegSecurityAltID_176.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_176("STRING_781328409");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_176);
      LegSecAltIDGrp_NoLegSecurityAltID_176.insert(LegSecurityAltIDSource_176.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_176);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_87;
    FIX::EncodedLegIssuer EncodedLegIssuer_87("DATA_354277079");
    noLegs_0_1.set(EncodedLegIssuer_87);
    InstrumentLeg_87.insert(EncodedLegIssuer_87.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_87(697129227);
    noLegs_0_1.set(EncodedLegIssuerLen_87);
    InstrumentLeg_87.insert(EncodedLegIssuerLen_87.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_87("DATA_1907824491");
    noLegs_0_1.set(EncodedLegSecurityDesc_87);
    InstrumentLeg_87.insert(EncodedLegSecurityDesc_87.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_87(94181609);
    noLegs_0_1.set(EncodedLegSecurityDescLen_87);
    InstrumentLeg_87.insert(EncodedLegSecurityDescLen_87.getString());
    FIX::LegCFICode LegCFICode_87("STRING_1558153950");
    noLegs_0_1.set(LegCFICode_87);
    InstrumentLeg_87.insert(LegCFICode_87.getString());
    FIX::LegContractMultiplier LegContractMultiplier_87;
    LegContractMultiplier_87.setString("1891507");
    noLegs_0_1.set(LegContractMultiplier_87);
    InstrumentLeg_87.insert(LegContractMultiplier_87.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_87(92226086);
    noLegs_0_1.set(LegContractMultiplierUnit_87);
    InstrumentLeg_87.insert(LegContractMultiplierUnit_87.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_87("MONTHYEAR_611098287");
    noLegs_0_1.set(LegContractSettlMonth_87);
    InstrumentLeg_87.insert(LegContractSettlMonth_87.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_87("COUNTRY_2000350198");
    noLegs_0_1.set(LegCountryOfIssue_87);
    InstrumentLeg_87.insert(LegCountryOfIssue_87.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_87("LOCALMKTDATE_882742239");
    noLegs_0_1.set(LegCouponPaymentDate_87);
    InstrumentLeg_87.insert(LegCouponPaymentDate_87.getString());
    FIX::LegCouponRate LegCouponRate_87;
    LegCouponRate_87.setString("75.460000");
    noLegs_0_1.set(LegCouponRate_87);
    InstrumentLeg_87.insert(LegCouponRate_87.getString());
    FIX::LegCreditRating LegCreditRating_87("STRING_1444428020");
    noLegs_0_1.set(LegCreditRating_87);
    InstrumentLeg_87.insert(LegCreditRating_87.getString());
    FIX::LegCurrency LegCurrency_87("EUR");
    noLegs_0_1.set(LegCurrency_87);
    InstrumentLeg_87.insert(LegCurrency_87.getString());
    FIX::LegDatedDate LegDatedDate_87("LOCALMKTDATE_106319283");
    noLegs_0_1.set(LegDatedDate_87);
    InstrumentLeg_87.insert(LegDatedDate_87.getString());
    FIX::LegExerciseStyle LegExerciseStyle_87(924674499);
    noLegs_0_1.set(LegExerciseStyle_87);
    InstrumentLeg_87.insert(LegExerciseStyle_87.getString());
    FIX::LegFactor LegFactor_87;
    LegFactor_87.setString("14145116");
    noLegs_0_1.set(LegFactor_87);
    InstrumentLeg_87.insert(LegFactor_87.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_87(1988560635);
    noLegs_0_1.set(LegFlowScheduleType_87);
    InstrumentLeg_87.insert(LegFlowScheduleType_87.getString());
    FIX::LegInstrRegistry LegInstrRegistry_87("STRING_1812779659");
    noLegs_0_1.set(LegInstrRegistry_87);
    InstrumentLeg_87.insert(LegInstrRegistry_87.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_87("LOCALMKTDATE_661865461");
    noLegs_0_1.set(LegInterestAccrualDate_87);
    InstrumentLeg_87.insert(LegInterestAccrualDate_87.getString());
    FIX::LegIssueDate LegIssueDate_87("LOCALMKTDATE_1576792510");
    noLegs_0_1.set(LegIssueDate_87);
    InstrumentLeg_87.insert(LegIssueDate_87.getString());
    FIX::LegIssuer LegIssuer_87("STRING_677981024");
    noLegs_0_1.set(LegIssuer_87);
    InstrumentLeg_87.insert(LegIssuer_87.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_87("STRING_1395063832");
    noLegs_0_1.set(LegLocaleOfIssue_87);
    InstrumentLeg_87.insert(LegLocaleOfIssue_87.getString());
    FIX::LegMaturityDate LegMaturityDate_87("LOCALMKTDATE_657384056");
    noLegs_0_1.set(LegMaturityDate_87);
    InstrumentLeg_87.insert(LegMaturityDate_87.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_87("MONTHYEAR_522563345");
    noLegs_0_1.set(LegMaturityMonthYear_87);
    InstrumentLeg_87.insert(LegMaturityMonthYear_87.getString());
    FIX::LegMaturityTime LegMaturityTime_87("TZTIMEONLY_407035679");
    noLegs_0_1.set(LegMaturityTime_87);
    InstrumentLeg_87.insert(LegMaturityTime_87.getString());
    FIX::LegOptAttribute LegOptAttribute_87('6');
    noLegs_0_1.set(LegOptAttribute_87);
    InstrumentLeg_87.insert(LegOptAttribute_87.getString());
    FIX::LegOptionRatio LegOptionRatio_87;
    LegOptionRatio_87.setString("4796433");
    noLegs_0_1.set(LegOptionRatio_87);
    InstrumentLeg_87.insert(LegOptionRatio_87.getString());
    FIX::LegPool LegPool_87("STRING_799274378");
    noLegs_0_1.set(LegPool_87);
    InstrumentLeg_87.insert(LegPool_87.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_87("STRING_799310051");
    noLegs_0_1.set(LegPriceUnitOfMeasure_87);
    InstrumentLeg_87.insert(LegPriceUnitOfMeasure_87.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_87;
    LegPriceUnitOfMeasureQty_87.setString("12609718");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_87);
    InstrumentLeg_87.insert(LegPriceUnitOfMeasureQty_87.getString());
    FIX::LegProduct LegProduct_87(1153551457);
    noLegs_0_1.set(LegProduct_87);
    InstrumentLeg_87.insert(LegProduct_87.getString());
    FIX::LegPutOrCall LegPutOrCall_87(1496439278);
    noLegs_0_1.set(LegPutOrCall_87);
    InstrumentLeg_87.insert(LegPutOrCall_87.getString());
    FIX::LegRatioQty LegRatioQty_87;
    LegRatioQty_87.setString("10213126");
    noLegs_0_1.set(LegRatioQty_87);
    InstrumentLeg_87.insert(LegRatioQty_87.getString());
    FIX::LegRedemptionDate LegRedemptionDate_87("LOCALMKTDATE_1247733066");
    noLegs_0_1.set(LegRedemptionDate_87);
    InstrumentLeg_87.insert(LegRedemptionDate_87.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_87("STRING_907109581");
    noLegs_0_1.set(LegRepoCollateralSecurityType_87);
    InstrumentLeg_87.insert(LegRepoCollateralSecurityType_87.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_87;
    LegRepurchaseRate_87.setString("34.130000");
    noLegs_0_1.set(LegRepurchaseRate_87);
    InstrumentLeg_87.insert(LegRepurchaseRate_87.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_87(1339959153);
    noLegs_0_1.set(LegRepurchaseTerm_87);
    InstrumentLeg_87.insert(LegRepurchaseTerm_87.getString());
    FIX::LegSecurityDesc LegSecurityDesc_87("STRING_1518207868");
    noLegs_0_1.set(LegSecurityDesc_87);
    InstrumentLeg_87.insert(LegSecurityDesc_87.getString());
    FIX::LegSecurityExchange LegSecurityExchange_87("EXCHANGE_1063329963");
    noLegs_0_1.set(LegSecurityExchange_87);
    InstrumentLeg_87.insert(LegSecurityExchange_87.getString());
    FIX::LegSecurityID LegSecurityID_87("STRING_75217744");
    noLegs_0_1.set(LegSecurityID_87);
    InstrumentLeg_87.insert(LegSecurityID_87.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_87("STRING_1926445414");
    noLegs_0_1.set(LegSecurityIDSource_87);
    InstrumentLeg_87.insert(LegSecurityIDSource_87.getString());
    FIX::LegSecuritySubType LegSecuritySubType_87("STRING_360274336");
    noLegs_0_1.set(LegSecuritySubType_87);
    InstrumentLeg_87.insert(LegSecuritySubType_87.getString());
    FIX::LegSecurityType LegSecurityType_87("STRING_1106641279");
    noLegs_0_1.set(LegSecurityType_87);
    InstrumentLeg_87.insert(LegSecurityType_87.getString());
    FIX::LegSide LegSide_87('1');
    noLegs_0_1.set(LegSide_87);
    InstrumentLeg_87.insert(LegSide_87.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_87("STRING_466593619");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_87);
    InstrumentLeg_87.insert(LegStateOrProvinceOfIssue_87.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_87("USD");
    noLegs_0_1.set(LegStrikeCurrency_87);
    InstrumentLeg_87.insert(LegStrikeCurrency_87.getString());
    FIX::LegStrikePrice LegStrikePrice_87;
    LegStrikePrice_87.setString("3076706");
    noLegs_0_1.set(LegStrikePrice_87);
    InstrumentLeg_87.insert(LegStrikePrice_87.getString());
    FIX::LegSymbol LegSymbol_87("STRING_1696611790");
    noLegs_0_1.set(LegSymbol_87);
    InstrumentLeg_87.insert(LegSymbol_87.getString());
    FIX::LegSymbolSfx LegSymbolSfx_87("STRING_1232769122");
    noLegs_0_1.set(LegSymbolSfx_87);
    InstrumentLeg_87.insert(LegSymbolSfx_87.getString());
    FIX::LegTimeUnit LegTimeUnit_87("STRING_1884463116");
    noLegs_0_1.set(LegTimeUnit_87);
    InstrumentLeg_87.insert(LegTimeUnit_87.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_87("STRING_227109166");
    noLegs_0_1.set(LegUnitOfMeasure_87);
    InstrumentLeg_87.insert(LegUnitOfMeasure_87.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_87;
    LegUnitOfMeasureQty_87.setString("4803493");
    noLegs_0_1.set(LegUnitOfMeasureQty_87);
    InstrumentLeg_87.insert(LegUnitOfMeasureQty_87.getString());
    all_values.push_back(InstrumentLeg_87);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_177;
      FIX::LegSecurityAltID LegSecurityAltID_177("STRING_749672511");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_177);
      LegSecAltIDGrp_NoLegSecurityAltID_177.insert(LegSecurityAltID_177.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_177("STRING_887384985");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_177);
      LegSecAltIDGrp_NoLegSecurityAltID_177.insert(LegSecurityAltIDSource_177.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_177);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_59;
  FIX::AttachmentPoint AttachmentPoint_59;
  AttachmentPoint_59.setString("45.840000");
  msg.set(AttachmentPoint_59);
  Instrument_59.insert(AttachmentPoint_59.getString());
  FIX::CFICode CFICode_59("STRING_1229315905");
  msg.set(CFICode_59);
  Instrument_59.insert(CFICode_59.getString());
  FIX::CPProgram CPProgram_59(99);
  msg.set(CPProgram_59);
  Instrument_59.insert(CPProgram_59.getString());
  FIX::CPRegType CPRegType_59("STRING_1254984635");
  msg.set(CPRegType_59);
  Instrument_59.insert(CPRegType_59.getString());
  FIX::CapPrice CapPrice_59;
  CapPrice_59.setString("3428040");
  msg.set(CapPrice_59);
  Instrument_59.insert(CapPrice_59.getString());
  FIX::ContractMultiplier ContractMultiplier_59;
  ContractMultiplier_59.setString("6927271");
  msg.set(ContractMultiplier_59);
  Instrument_59.insert(ContractMultiplier_59.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_59(0);
  msg.set(ContractMultiplierUnit_59);
  Instrument_59.insert(ContractMultiplierUnit_59.getString());
  FIX::ContractSettlMonth ContractSettlMonth_59("MONTHYEAR_1364116705");
  msg.set(ContractSettlMonth_59);
  Instrument_59.insert(ContractSettlMonth_59.getString());
  FIX::CountryOfIssue CountryOfIssue_59("COUNTRY_1940460239");
  msg.set(CountryOfIssue_59);
  Instrument_59.insert(CountryOfIssue_59.getString());
  FIX::CouponPaymentDate CouponPaymentDate_59("LOCALMKTDATE_1511049847");
  msg.set(CouponPaymentDate_59);
  Instrument_59.insert(CouponPaymentDate_59.getString());
  FIX::CouponRate CouponRate_59;
  CouponRate_59.setString("64.700000");
  msg.set(CouponRate_59);
  Instrument_59.insert(CouponRate_59.getString());
  FIX::CreditRating CreditRating_59("STRING_1132935744");
  msg.set(CreditRating_59);
  Instrument_59.insert(CreditRating_59.getString());
  FIX::DatedDate DatedDate_59("LOCALMKTDATE_881774067");
  msg.set(DatedDate_59);
  Instrument_59.insert(DatedDate_59.getString());
  FIX::DetachmentPoint DetachmentPoint_59;
  DetachmentPoint_59.setString("64.340000");
  msg.set(DetachmentPoint_59);
  Instrument_59.insert(DetachmentPoint_59.getString());
  FIX::EncodedIssuer EncodedIssuer_59("DATA_1208153488");
  msg.set(EncodedIssuer_59);
  Instrument_59.insert(EncodedIssuer_59.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_59(660735834);
  msg.set(EncodedIssuerLen_59);
  Instrument_59.insert(EncodedIssuerLen_59.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_59("DATA_1850700770");
  msg.set(EncodedSecurityDesc_59);
  Instrument_59.insert(EncodedSecurityDesc_59.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_59(167311120);
  msg.set(EncodedSecurityDescLen_59);
  Instrument_59.insert(EncodedSecurityDescLen_59.getString());
  FIX::ExerciseStyle ExerciseStyle_59(1);
  msg.set(ExerciseStyle_59);
  Instrument_59.insert(ExerciseStyle_59.getString());
  FIX::Factor Factor_59;
  Factor_59.setString("1698107");
  msg.set(Factor_59);
  Instrument_59.insert(Factor_59.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_59(true);
  msg.set(FlexProductEligibilityIndicator_59);
  Instrument_59.insert(FlexProductEligibilityIndicator_59.getString());
  FIX::FlexibleIndicator FlexibleIndicator_59(true);
  msg.set(FlexibleIndicator_59);
  Instrument_59.insert(FlexibleIndicator_59.getString());
  FIX::FloorPrice FloorPrice_59;
  FloorPrice_59.setString("4774813");
  msg.set(FloorPrice_59);
  Instrument_59.insert(FloorPrice_59.getString());
  FIX::FlowScheduleType FlowScheduleType_59(0);
  msg.set(FlowScheduleType_59);
  Instrument_59.insert(FlowScheduleType_59.getString());
  FIX::InstrRegistry InstrRegistry_59("STRING_1620800608");
  msg.set(InstrRegistry_59);
  Instrument_59.insert(InstrRegistry_59.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_59('2');
  msg.set(InstrmtAssignmentMethod_59);
  Instrument_59.insert(InstrmtAssignmentMethod_59.getString());
  FIX::InterestAccrualDate InterestAccrualDate_59("LOCALMKTDATE_1974864206");
  msg.set(InterestAccrualDate_59);
  Instrument_59.insert(InterestAccrualDate_59.getString());
  FIX::IssueDate IssueDate_59("LOCALMKTDATE_2101149915");
  msg.set(IssueDate_59);
  Instrument_59.insert(IssueDate_59.getString());
  FIX::Issuer Issuer_59("STRING_608824340");
  msg.set(Issuer_59);
  Instrument_59.insert(Issuer_59.getString());
  FIX::ListMethod ListMethod_59(0);
  msg.set(ListMethod_59);
  Instrument_59.insert(ListMethod_59.getString());
  FIX::LocaleOfIssue LocaleOfIssue_59("STRING_841051252");
  msg.set(LocaleOfIssue_59);
  Instrument_59.insert(LocaleOfIssue_59.getString());
  FIX::MaturityDate MaturityDate_59("LOCALMKTDATE_1064498924");
  msg.set(MaturityDate_59);
  Instrument_59.insert(MaturityDate_59.getString());
  FIX::MaturityMonthYear MaturityMonthYear_59("MONTHYEAR_1806368975");
  msg.set(MaturityMonthYear_59);
  Instrument_59.insert(MaturityMonthYear_59.getString());
  FIX::MaturityTime MaturityTime_59("TZTIMEONLY_380226968");
  msg.set(MaturityTime_59);
  Instrument_59.insert(MaturityTime_59.getString());
  FIX::MinPriceIncrement MinPriceIncrement_59;
  MinPriceIncrement_59.setString("1719999");
  msg.set(MinPriceIncrement_59);
  Instrument_59.insert(MinPriceIncrement_59.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_59;
  MinPriceIncrementAmount_59.setString("16893");
  msg.set(MinPriceIncrementAmount_59);
  Instrument_59.insert(MinPriceIncrementAmount_59.getString());
  FIX::NTPositionLimit NTPositionLimit_59(1072954140);
  msg.set(NTPositionLimit_59);
  Instrument_59.insert(NTPositionLimit_59.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_59;
  NotionalPercentageOutstanding_59.setString("1.780000");
  msg.set(NotionalPercentageOutstanding_59);
  Instrument_59.insert(NotionalPercentageOutstanding_59.getString());
  FIX::OptAttribute OptAttribute_59('1');
  msg.set(OptAttribute_59);
  Instrument_59.insert(OptAttribute_59.getString());
  FIX::OptPayoutAmount OptPayoutAmount_59;
  OptPayoutAmount_59.setString("8659307");
  msg.set(OptPayoutAmount_59);
  Instrument_59.insert(OptPayoutAmount_59.getString());
  FIX::OptPayoutType OptPayoutType_59(3);
  msg.set(OptPayoutType_59);
  Instrument_59.insert(OptPayoutType_59.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_59;
  OriginalNotionalPercentageOutstanding_59.setString("25.620000");
  msg.set(OriginalNotionalPercentageOutstanding_59);
  Instrument_59.insert(OriginalNotionalPercentageOutstanding_59.getString());
  FIX::Pool Pool_59("STRING_1998866475");
  msg.set(Pool_59);
  Instrument_59.insert(Pool_59.getString());
  FIX::PositionLimit PositionLimit_59(1021280444);
  msg.set(PositionLimit_59);
  Instrument_59.insert(PositionLimit_59.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_59("STRING_STD");
  msg.set(PriceQuoteMethod_59);
  Instrument_59.insert(PriceQuoteMethod_59.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_59("STRING_1059536316");
  msg.set(PriceUnitOfMeasure_59);
  Instrument_59.insert(PriceUnitOfMeasure_59.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_59;
  PriceUnitOfMeasureQty_59.setString("16820162");
  msg.set(PriceUnitOfMeasureQty_59);
  Instrument_59.insert(PriceUnitOfMeasureQty_59.getString());
  FIX::Product Product_61(13);
  msg.set(Product_61);
  Instrument_59.insert(Product_61.getString());
  FIX::ProductComplex ProductComplex_59("STRING_1226847436");
  msg.set(ProductComplex_59);
  Instrument_59.insert(ProductComplex_59.getString());
  FIX::PutOrCall PutOrCall_59(0);
  msg.set(PutOrCall_59);
  Instrument_59.insert(PutOrCall_59.getString());
  FIX::RedemptionDate RedemptionDate_59("LOCALMKTDATE_1008873211");
  msg.set(RedemptionDate_59);
  Instrument_59.insert(RedemptionDate_59.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_59("STRING_1277990686");
  msg.set(RepoCollateralSecurityType_59);
  Instrument_59.insert(RepoCollateralSecurityType_59.getString());
  FIX::RepurchaseRate RepurchaseRate_59;
  RepurchaseRate_59.setString("55.910000");
  msg.set(RepurchaseRate_59);
  Instrument_59.insert(RepurchaseRate_59.getString());
  FIX::RepurchaseTerm RepurchaseTerm_59(1486354558);
  msg.set(RepurchaseTerm_59);
  Instrument_59.insert(RepurchaseTerm_59.getString());
  FIX::RestructuringType RestructuringType_59("STRING_XR");
  msg.set(RestructuringType_59);
  Instrument_59.insert(RestructuringType_59.getString());
  FIX::SecurityDesc SecurityDesc_59("STRING_1360492551");
  msg.set(SecurityDesc_59);
  Instrument_59.insert(SecurityDesc_59.getString());
  FIX::SecurityExchange SecurityExchange_59("EXCHANGE_1700815373");
  msg.set(SecurityExchange_59);
  Instrument_59.insert(SecurityExchange_59.getString());
  FIX::SecurityGroup SecurityGroup_59("STRING_705642637");
  msg.set(SecurityGroup_59);
  Instrument_59.insert(SecurityGroup_59.getString());
  FIX::SecurityID SecurityID_59("STRING_1314158818");
  msg.set(SecurityID_59);
  Instrument_59.insert(SecurityID_59.getString());
  FIX::SecurityIDSource SecurityIDSource_59("STRING_6");
  msg.set(SecurityIDSource_59);
  Instrument_59.insert(SecurityIDSource_59.getString());
  FIX::SecurityStatus SecurityStatus_59("STRING_2");
  msg.set(SecurityStatus_59);
  Instrument_59.insert(SecurityStatus_59.getString());
  FIX::SecuritySubType SecuritySubType_60("STRING_7726423");
  msg.set(SecuritySubType_60);
  Instrument_59.insert(SecuritySubType_60.getString());
  FIX::SecurityType SecurityType_61("STRING_BRADY");
  msg.set(SecurityType_61);
  Instrument_59.insert(SecurityType_61.getString());
  FIX::Seniority Seniority_59("STRING_SB");
  msg.set(Seniority_59);
  Instrument_59.insert(Seniority_59.getString());
  FIX::SettlMethod SettlMethod_59('P');
  msg.set(SettlMethod_59);
  Instrument_59.insert(SettlMethod_59.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_59("STRING_1398654902");
  msg.set(SettleOnOpenFlag_59);
  Instrument_59.insert(SettleOnOpenFlag_59.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_59("STRING_943270421");
  msg.set(StateOrProvinceOfIssue_59);
  Instrument_59.insert(StateOrProvinceOfIssue_59.getString());
  FIX::StrikeCurrency StrikeCurrency_59("USD");
  msg.set(StrikeCurrency_59);
  Instrument_59.insert(StrikeCurrency_59.getString());
  FIX::StrikeMultiplier StrikeMultiplier_59;
  StrikeMultiplier_59.setString("1615928");
  msg.set(StrikeMultiplier_59);
  Instrument_59.insert(StrikeMultiplier_59.getString());
  FIX::StrikePrice StrikePrice_59;
  StrikePrice_59.setString("1793546");
  msg.set(StrikePrice_59);
  Instrument_59.insert(StrikePrice_59.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_59(5);
  msg.set(StrikePriceBoundaryMethod_59);
  Instrument_59.insert(StrikePriceBoundaryMethod_59.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_59;
  StrikePriceBoundaryPrecision_59.setString("54.260000");
  msg.set(StrikePriceBoundaryPrecision_59);
  Instrument_59.insert(StrikePriceBoundaryPrecision_59.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_59(3);
  msg.set(StrikePriceDeterminationMethod_59);
  Instrument_59.insert(StrikePriceDeterminationMethod_59.getString());
  FIX::StrikeValue StrikeValue_59;
  StrikeValue_59.setString("11878982");
  msg.set(StrikeValue_59);
  Instrument_59.insert(StrikeValue_59.getString());
  FIX::Symbol Symbol_59("STRING_942857126");
  msg.set(Symbol_59);
  Instrument_59.insert(Symbol_59.getString());
  FIX::SymbolSfx SymbolSfx_59("STRING_CD");
  msg.set(SymbolSfx_59);
  Instrument_59.insert(SymbolSfx_59.getString());
  FIX::TimeUnit TimeUnit_59("STRING_H");
  msg.set(TimeUnit_59);
  Instrument_59.insert(TimeUnit_59.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_59(1);
  msg.set(UnderlyingPriceDeterminationMethod_59);
  Instrument_59.insert(UnderlyingPriceDeterminationMethod_59.getString());
  FIX::UnitOfMeasure UnitOfMeasure_59("STRING_Bcf");
  msg.set(UnitOfMeasure_59);
  Instrument_59.insert(UnitOfMeasure_59.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_59;
  UnitOfMeasureQty_59.setString("740913");
  msg.set(UnitOfMeasureQty_59);
  Instrument_59.insert(UnitOfMeasureQty_59.getString());
  FIX::ValuationMethod ValuationMethod_59("STRING_CDSD");
  msg.set(ValuationMethod_59);
  Instrument_59.insert(ValuationMethod_59.getString());
  all_values.push_back(Instrument_59);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_116;
    FIX::ComplexEventCondition ComplexEventCondition_116(2);
    noComplexEvents_0_0.set(ComplexEventCondition_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventCondition_116.getString());
    FIX::ComplexEventPrice ComplexEventPrice_116;
    ComplexEventPrice_116.setString("21296637");
    noComplexEvents_0_0.set(ComplexEventPrice_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPrice_116.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_116(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceBoundaryMethod_116.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_116;
    ComplexEventPriceBoundaryPrecision_116.setString("58.350000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceBoundaryPrecision_116.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_116(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceTimeType_116.getString());
    FIX::ComplexEventType ComplexEventType_116(2);
    noComplexEvents_0_0.set(ComplexEventType_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventType_116.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_116;
    ComplexOptPayoutAmount_116.setString("3409510");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexOptPayoutAmount_116.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_116);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_239;
      FIX::ComplexEventEndDate ComplexEventEndDate_239(FIX::UTCTIMESTAMP(4, 50, 55, 15, 9, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_239);
      ComplexEventDates_NoComplexEventDates_239.insert(ComplexEventEndDate_239.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_239(FIX::UTCTIMESTAMP(8, 1, 38, 1, 4, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_239);
      ComplexEventDates_NoComplexEventDates_239.insert(ComplexEventStartDate_239.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_239);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_490;
        FIX::ComplexEventEndTime ComplexEventEndTime_490(FIX::UTCTIMEONLY(15, 15, 46));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_490);
        ComplexEventTimes_NoComplexEventTimes_490.insert(ComplexEventEndTime_490.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_490(FIX::UTCTIMEONLY(7, 6, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_490);
        ComplexEventTimes_NoComplexEventTimes_490.insert(ComplexEventStartTime_490.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_490);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_240;
      FIX::ComplexEventEndDate ComplexEventEndDate_240(FIX::UTCTIMESTAMP(3, 34, 54, 6, 1, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_240);
      ComplexEventDates_NoComplexEventDates_240.insert(ComplexEventEndDate_240.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_240(FIX::UTCTIMESTAMP(17, 8, 1, 20, 8, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_240);
      ComplexEventDates_NoComplexEventDates_240.insert(ComplexEventStartDate_240.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_240);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_491;
        FIX::ComplexEventEndTime ComplexEventEndTime_491(FIX::UTCTIMEONLY(6, 26, 0));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_491);
        ComplexEventTimes_NoComplexEventTimes_491.insert(ComplexEventEndTime_491.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_491(FIX::UTCTIMEONLY(9, 21, 39));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_491);
        ComplexEventTimes_NoComplexEventTimes_491.insert(ComplexEventStartTime_491.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_491);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_241;
      FIX::ComplexEventEndDate ComplexEventEndDate_241(FIX::UTCTIMESTAMP(16, 54, 42, 9, 2, 2000));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_241);
      ComplexEventDates_NoComplexEventDates_241.insert(ComplexEventEndDate_241.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_241(FIX::UTCTIMESTAMP(12, 55, 34, 10, 7, 2014));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_241);
      ComplexEventDates_NoComplexEventDates_241.insert(ComplexEventStartDate_241.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_241);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_492;
        FIX::ComplexEventEndTime ComplexEventEndTime_492(FIX::UTCTIMEONLY(23, 14, 10));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_492);
        ComplexEventTimes_NoComplexEventTimes_492.insert(ComplexEventEndTime_492.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_492(FIX::UTCTIMEONLY(1, 56, 49));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_492);
        ComplexEventTimes_NoComplexEventTimes_492.insert(ComplexEventStartTime_492.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_492);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_117;
    FIX::ComplexEventCondition ComplexEventCondition_117(1);
    noComplexEvents_0_1.set(ComplexEventCondition_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventCondition_117.getString());
    FIX::ComplexEventPrice ComplexEventPrice_117;
    ComplexEventPrice_117.setString("9522560");
    noComplexEvents_0_1.set(ComplexEventPrice_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPrice_117.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_117(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceBoundaryMethod_117.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_117;
    ComplexEventPriceBoundaryPrecision_117.setString("18.280000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceBoundaryPrecision_117.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_117(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceTimeType_117.getString());
    FIX::ComplexEventType ComplexEventType_117(8);
    noComplexEvents_0_1.set(ComplexEventType_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexEventType_117.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_117;
    ComplexOptPayoutAmount_117.setString("3850638");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_117);
    ComplexEvents_NoComplexEvents_117.insert(ComplexOptPayoutAmount_117.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_117);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_242;
      FIX::ComplexEventEndDate ComplexEventEndDate_242(FIX::UTCTIMESTAMP(5, 56, 34, 23, 2, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_242);
      ComplexEventDates_NoComplexEventDates_242.insert(ComplexEventEndDate_242.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_242(FIX::UTCTIMESTAMP(14, 9, 17, 20, 4, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_242);
      ComplexEventDates_NoComplexEventDates_242.insert(ComplexEventStartDate_242.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_242);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_493;
        FIX::ComplexEventEndTime ComplexEventEndTime_493(FIX::UTCTIMEONLY(23, 4, 35));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_493);
        ComplexEventTimes_NoComplexEventTimes_493.insert(ComplexEventEndTime_493.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_493(FIX::UTCTIMEONLY(6, 23, 12));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_493);
        ComplexEventTimes_NoComplexEventTimes_493.insert(ComplexEventStartTime_493.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_493);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_494;
        FIX::ComplexEventEndTime ComplexEventEndTime_494(FIX::UTCTIMEONLY(10, 19, 58));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_494);
        ComplexEventTimes_NoComplexEventTimes_494.insert(ComplexEventEndTime_494.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_494(FIX::UTCTIMEONLY(12, 0, 19));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_494);
        ComplexEventTimes_NoComplexEventTimes_494.insert(ComplexEventStartTime_494.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_494);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_243;
      FIX::ComplexEventEndDate ComplexEventEndDate_243(FIX::UTCTIMESTAMP(17, 15, 50, 20, 6, 2010));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_243);
      ComplexEventDates_NoComplexEventDates_243.insert(ComplexEventEndDate_243.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_243(FIX::UTCTIMESTAMP(23, 5, 21, 27, 2, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_243);
      ComplexEventDates_NoComplexEventDates_243.insert(ComplexEventStartDate_243.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_243);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_495;
        FIX::ComplexEventEndTime ComplexEventEndTime_495(FIX::UTCTIMEONLY(12, 58, 4));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_495);
        ComplexEventTimes_NoComplexEventTimes_495.insert(ComplexEventEndTime_495.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_495(FIX::UTCTIMEONLY(8, 20, 24));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_495);
        ComplexEventTimes_NoComplexEventTimes_495.insert(ComplexEventStartTime_495.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_495);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_113;
    FIX::EventDate EventDate_113("LOCALMKTDATE_370672626");
    noEvents_0_0.set(EventDate_113);
    EvntGrp_NoEvents_113.insert(EventDate_113.getString());
    FIX::EventPx EventPx_113;
    EventPx_113.setString("10408041");
    noEvents_0_0.set(EventPx_113);
    EvntGrp_NoEvents_113.insert(EventPx_113.getString());
    FIX::EventText EventText_113("STRING_410711849");
    noEvents_0_0.set(EventText_113);
    EvntGrp_NoEvents_113.insert(EventText_113.getString());
    FIX::EventTime EventTime_113(FIX::UTCTIMESTAMP(4, 29, 43, 4, 3, 2009));
    noEvents_0_0.set(EventTime_113);
    EvntGrp_NoEvents_113.insert(EventTime_113.getString());
    FIX::EventType EventType_113(11);
    noEvents_0_0.set(EventType_113);
    EvntGrp_NoEvents_113.insert(EventType_113.getString());
    all_values.push_back(EvntGrp_NoEvents_113);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_114;
    FIX::EventDate EventDate_114("LOCALMKTDATE_1156351663");
    noEvents_0_1.set(EventDate_114);
    EvntGrp_NoEvents_114.insert(EventDate_114.getString());
    FIX::EventPx EventPx_114;
    EventPx_114.setString("9561333");
    noEvents_0_1.set(EventPx_114);
    EvntGrp_NoEvents_114.insert(EventPx_114.getString());
    FIX::EventText EventText_114("STRING_462162886");
    noEvents_0_1.set(EventText_114);
    EvntGrp_NoEvents_114.insert(EventText_114.getString());
    FIX::EventTime EventTime_114(FIX::UTCTIMESTAMP(3, 51, 15, 14, 5, 2004));
    noEvents_0_1.set(EventTime_114);
    EvntGrp_NoEvents_114.insert(EventTime_114.getString());
    FIX::EventType EventType_114(1);
    noEvents_0_1.set(EventType_114);
    EvntGrp_NoEvents_114.insert(EventType_114.getString());
    all_values.push_back(EvntGrp_NoEvents_114);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_115;
    FIX::EventDate EventDate_115("LOCALMKTDATE_2063934702");
    noEvents_0_2.set(EventDate_115);
    EvntGrp_NoEvents_115.insert(EventDate_115.getString());
    FIX::EventPx EventPx_115;
    EventPx_115.setString("21462838");
    noEvents_0_2.set(EventPx_115);
    EvntGrp_NoEvents_115.insert(EventPx_115.getString());
    FIX::EventText EventText_115("STRING_216239771");
    noEvents_0_2.set(EventText_115);
    EvntGrp_NoEvents_115.insert(EventText_115.getString());
    FIX::EventTime EventTime_115(FIX::UTCTIMESTAMP(9, 31, 58, 5, 3, 2005));
    noEvents_0_2.set(EventTime_115);
    EvntGrp_NoEvents_115.insert(EventTime_115.getString());
    FIX::EventType EventType_115(6);
    noEvents_0_2.set(EventType_115);
    EvntGrp_NoEvents_115.insert(EventType_115.getString());
    all_values.push_back(EvntGrp_NoEvents_115);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_113;
    FIX::InstrumentPartyID InstrumentPartyID_113("STRING_652806921");
    noInstrumentParties_0_0.set(InstrumentPartyID_113);
    InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyID_113.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_113('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_113);
    InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyIDSource_113.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_113(2100439980);
    noInstrumentParties_0_0.set(InstrumentPartyRole_113);
    InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyRole_113.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_113);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238;
      FIX::InstrumentPartySubID InstrumentPartySubID_238("STRING_1637145197");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_238);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238.insert(InstrumentPartySubID_238.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_238(1250571546);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_238);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238.insert(InstrumentPartySubIDType_238.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239;
      FIX::InstrumentPartySubID InstrumentPartySubID_239("STRING_1064045927");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_239);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239.insert(InstrumentPartySubID_239.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_239(746066399);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_239);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239.insert(InstrumentPartySubIDType_239.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240;
      FIX::InstrumentPartySubID InstrumentPartySubID_240("STRING_259439561");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_240);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240.insert(InstrumentPartySubID_240.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_240(2020179323);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_240);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240.insert(InstrumentPartySubIDType_240.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_114;
    FIX::InstrumentPartyID InstrumentPartyID_114("STRING_1208229285");
    noInstrumentParties_0_1.set(InstrumentPartyID_114);
    InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyID_114.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_114('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_114);
    InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyIDSource_114.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_114(787023174);
    noInstrumentParties_0_1.set(InstrumentPartyRole_114);
    InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyRole_114.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_114);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241;
      FIX::InstrumentPartySubID InstrumentPartySubID_241("STRING_1648485883");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_241);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241.insert(InstrumentPartySubID_241.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_241(153000441);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_241);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241.insert(InstrumentPartySubIDType_241.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242;
      FIX::InstrumentPartySubID InstrumentPartySubID_242("STRING_172233813");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_242);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242.insert(InstrumentPartySubID_242.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_242(588777376);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_242);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242.insert(InstrumentPartySubIDType_242.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_128;
    FIX::SecurityAltID SecurityAltID_128("STRING_88684867");
    noSecurityAltID_0_0.set(SecurityAltID_128);
    SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltID_128.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_128("STRING_587577577");
    noSecurityAltID_0_0.set(SecurityAltIDSource_128);
    SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltIDSource_128.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_128);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_129;
    FIX::SecurityAltID SecurityAltID_129("STRING_1010364532");
    noSecurityAltID_0_1.set(SecurityAltID_129);
    SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltID_129.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_129("STRING_1139343526");
    noSecurityAltID_0_1.set(SecurityAltIDSource_129);
    SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltIDSource_129.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_129);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_130;
    FIX::SecurityAltID SecurityAltID_130("STRING_856870570");
    noSecurityAltID_0_2.set(SecurityAltID_130);
    SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltID_130.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_130("STRING_1493605104");
    noSecurityAltID_0_2.set(SecurityAltIDSource_130);
    SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltIDSource_130.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_130);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_118;
  FIX::SecurityXML SecurityXML_119("XMLDATA_318830616");
  msg.set(SecurityXML_119);
  FIX::SecurityXMLLen SecurityXMLLen_59(544883639);
  msg.set(SecurityXMLLen_59);
  FIX::SecurityXMLSchema SecurityXMLSchema_59("STRING_1555731086");
  msg.set(SecurityXMLSchema_59);
  SecurityXML_118.insert(SecurityXMLSchema_59.getString());
  all_values.push_back(SecurityXML_118);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_103;
    FIX::PartyID PartyID_103("STRING_1273700845");
    noPartyIDs_0_0.set(PartyID_103);
    Parties_NoPartyIDs_103.insert(PartyID_103.getString());
    FIX::PartyIDSource PartyIDSource_103('9');
    noPartyIDs_0_0.set(PartyIDSource_103);
    Parties_NoPartyIDs_103.insert(PartyIDSource_103.getString());
    FIX::PartyRole PartyRole_103(7);
    noPartyIDs_0_0.set(PartyRole_103);
    Parties_NoPartyIDs_103.insert(PartyRole_103.getString());
    all_values.push_back(Parties_NoPartyIDs_103);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_208;
      FIX::PartySubID PartySubID_208("STRING_1981525249");
      noPartySubIDs_0_1_0.set(PartySubID_208);
      PtysSubGrp_NoPartySubIDs_208.insert(PartySubID_208.getString());
      FIX::PartySubIDType PartySubIDType_208(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_208);
      PtysSubGrp_NoPartySubIDs_208.insert(PartySubIDType_208.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_208);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_209;
      FIX::PartySubID PartySubID_209("STRING_301837364");
      noPartySubIDs_0_1_1.set(PartySubID_209);
      PtysSubGrp_NoPartySubIDs_209.insert(PartySubID_209.getString());
      FIX::PartySubIDType PartySubIDType_209(3);
      noPartySubIDs_0_1_1.set(PartySubIDType_209);
      PtysSubGrp_NoPartySubIDs_209.insert(PartySubIDType_209.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_209);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_104;
    FIX::PartyID PartyID_104("STRING_1658398178");
    noPartyIDs_0_1.set(PartyID_104);
    Parties_NoPartyIDs_104.insert(PartyID_104.getString());
    FIX::PartyIDSource PartyIDSource_104('D');
    noPartyIDs_0_1.set(PartyIDSource_104);
    Parties_NoPartyIDs_104.insert(PartyIDSource_104.getString());
    FIX::PartyRole PartyRole_104(43);
    noPartyIDs_0_1.set(PartyRole_104);
    Parties_NoPartyIDs_104.insert(PartyRole_104.getString());
    all_values.push_back(Parties_NoPartyIDs_104);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_210;
      FIX::PartySubID PartySubID_210("STRING_108649401");
      noPartySubIDs_1_1_0.set(PartySubID_210);
      PtysSubGrp_NoPartySubIDs_210.insert(PartySubID_210.getString());
      FIX::PartySubIDType PartySubIDType_210(28);
      noPartySubIDs_1_1_0.set(PartySubIDType_210);
      PtysSubGrp_NoPartySubIDs_210.insert(PartySubIDType_210.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_210);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_105;
    FIX::PartyID PartyID_105("STRING_170633380");
    noPartyIDs_0_2.set(PartyID_105);
    Parties_NoPartyIDs_105.insert(PartyID_105.getString());
    FIX::PartyIDSource PartyIDSource_105('I');
    noPartyIDs_0_2.set(PartyIDSource_105);
    Parties_NoPartyIDs_105.insert(PartyIDSource_105.getString());
    FIX::PartyRole PartyRole_105(58);
    noPartyIDs_0_2.set(PartyRole_105);
    Parties_NoPartyIDs_105.insert(PartyRole_105.getString());
    all_values.push_back(Parties_NoPartyIDs_105);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_211;
      FIX::PartySubID PartySubID_211("STRING_2017406911");
      noPartySubIDs_2_1_0.set(PartySubID_211);
      PtysSubGrp_NoPartySubIDs_211.insert(PartySubID_211.getString());
      FIX::PartySubIDType PartySubIDType_211(4);
      noPartySubIDs_2_1_0.set(PartySubIDType_211);
      PtysSubGrp_NoPartySubIDs_211.insert(PartySubIDType_211.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_211);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_212;
      FIX::PartySubID PartySubID_212("STRING_1117758583");
      noPartySubIDs_2_1_1.set(PartySubID_212);
      PtysSubGrp_NoPartySubIDs_212.insert(PartySubID_212.getString());
      FIX::PartySubIDType PartySubIDType_212(1);
      noPartySubIDs_2_1_1.set(PartySubIDType_212);
      PtysSubGrp_NoPartySubIDs_212.insert(PartySubIDType_212.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_212);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PosUndInstrmtGrp
  // Group PosUndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_0;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_0;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_0;
    UnderlyingDeliveryAmount_0.setString("21281231");
    noUnderlyings_0_0.set(UnderlyingDeliveryAmount_0);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingDeliveryAmount_0.getString());
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_1;
    UnderlyingSettlPrice_1.setString("10979516");
    noUnderlyings_0_0.set(UnderlyingSettlPrice_1);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingSettlPrice_1.getString());
    FIX::UnderlyingSettlPriceType UnderlyingSettlPriceType_0(454883847);
    noUnderlyings_0_0.set(UnderlyingSettlPriceType_0);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingSettlPriceType_0.getString());
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_0);

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_0;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_0;
      UnderlyingCollectAmount_0.setString("14167822");
      noUnderlyingAmounts_0_1_0.set(UnderlyingCollectAmount_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingCollectAmount_0.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_0;
      UnderlyingPayAmount_0.setString("9997674");
      noUnderlyingAmounts_0_1_0.set(UnderlyingPayAmount_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingPayAmount_0.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_0("LOCALMKTDATE_882492009");
      noUnderlyingAmounts_0_1_0.set(UnderlyingSettlementDate_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingSettlementDate_0.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_0("STRING_1285772607");
      noUnderlyingAmounts_0_1_0.set(UnderlyingSettlementStatus_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingSettlementStatus_0.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_0);

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_86;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_86("DATA_125984684");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingIssuer_86.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_86(763577278);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingIssuerLen_86.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_86("DATA_1807569861");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingSecurityDesc_86.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_86(938160498);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingSecurityDescLen_86.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_86;
    UnderlyingAdjustedQuantity_86.setString("5976188");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_86);
    UnderlyingInstrument_86.insert(UnderlyingAdjustedQuantity_86.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_86;
    UnderlyingAllocationPercent_86.setString("84.640000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_86);
    UnderlyingInstrument_86.insert(UnderlyingAllocationPercent_86.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_86;
    UnderlyingAttachmentPoint_86.setString("78.620000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_86);
    UnderlyingInstrument_86.insert(UnderlyingAttachmentPoint_86.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_86("STRING_1682232027");
    noUnderlyings_0_0.set(UnderlyingCFICode_86);
    UnderlyingInstrument_86.insert(UnderlyingCFICode_86.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_86("STRING_1912836643");
    noUnderlyings_0_0.set(UnderlyingCPProgram_86);
    UnderlyingInstrument_86.insert(UnderlyingCPProgram_86.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_86("STRING_140417978");
    noUnderlyings_0_0.set(UnderlyingCPRegType_86);
    UnderlyingInstrument_86.insert(UnderlyingCPRegType_86.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_86;
    UnderlyingCapValue_86.setString("8788010");
    noUnderlyings_0_0.set(UnderlyingCapValue_86);
    UnderlyingInstrument_86.insert(UnderlyingCapValue_86.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_86;
    UnderlyingCashAmount_86.setString("12964468");
    noUnderlyings_0_0.set(UnderlyingCashAmount_86);
    UnderlyingInstrument_86.insert(UnderlyingCashAmount_86.getString());
    FIX::UnderlyingCashType UnderlyingCashType_86("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_86);
    UnderlyingInstrument_86.insert(UnderlyingCashType_86.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_86;
    UnderlyingContractMultiplier_86.setString("19469408");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_86);
    UnderlyingInstrument_86.insert(UnderlyingContractMultiplier_86.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_86(1467080229);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_86);
    UnderlyingInstrument_86.insert(UnderlyingContractMultiplierUnit_86.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_86("COUNTRY_2094240477");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingCountryOfIssue_86.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_86("LOCALMKTDATE_368599149");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_86);
    UnderlyingInstrument_86.insert(UnderlyingCouponPaymentDate_86.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_86;
    UnderlyingCouponRate_86.setString("40.510000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_86);
    UnderlyingInstrument_86.insert(UnderlyingCouponRate_86.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_86("STRING_1964163740");
    noUnderlyings_0_0.set(UnderlyingCreditRating_86);
    UnderlyingInstrument_86.insert(UnderlyingCreditRating_86.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_86("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_86);
    UnderlyingInstrument_86.insert(UnderlyingCurrency_86.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_86;
    UnderlyingCurrentValue_86.setString("19227718");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_86);
    UnderlyingInstrument_86.insert(UnderlyingCurrentValue_86.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_86;
    UnderlyingDetachmentPoint_86.setString("17.750000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_86);
    UnderlyingInstrument_86.insert(UnderlyingDetachmentPoint_86.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_86;
    UnderlyingDirtyPrice_86.setString("7416284");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_86);
    UnderlyingInstrument_86.insert(UnderlyingDirtyPrice_86.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_86;
    UnderlyingEndPrice_86.setString("8732398");
    noUnderlyings_0_0.set(UnderlyingEndPrice_86);
    UnderlyingInstrument_86.insert(UnderlyingEndPrice_86.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_86;
    UnderlyingEndValue_86.setString("15794156");
    noUnderlyings_0_0.set(UnderlyingEndValue_86);
    UnderlyingInstrument_86.insert(UnderlyingEndValue_86.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_86(68389377);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_86);
    UnderlyingInstrument_86.insert(UnderlyingExerciseStyle_86.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_86;
    UnderlyingFXRate_86.setString("1425385");
    noUnderlyings_0_0.set(UnderlyingFXRate_86);
    UnderlyingInstrument_86.insert(UnderlyingFXRate_86.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_86('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_86);
    UnderlyingInstrument_86.insert(UnderlyingFXRateCalc_86.getString());
    FIX::UnderlyingFactor UnderlyingFactor_86;
    UnderlyingFactor_86.setString("9508813");
    noUnderlyings_0_0.set(UnderlyingFactor_86);
    UnderlyingInstrument_86.insert(UnderlyingFactor_86.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_86(1428311113);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_86);
    UnderlyingInstrument_86.insert(UnderlyingFlowScheduleType_86.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_86("STRING_557684146");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_86);
    UnderlyingInstrument_86.insert(UnderlyingInstrRegistry_86.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_86("LOCALMKTDATE_1714458665");
    noUnderlyings_0_0.set(UnderlyingIssueDate_86);
    UnderlyingInstrument_86.insert(UnderlyingIssueDate_86.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_86("STRING_1088397326");
    noUnderlyings_0_0.set(UnderlyingIssuer_86);
    UnderlyingInstrument_86.insert(UnderlyingIssuer_86.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_86("STRING_1495844644");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingLocaleOfIssue_86.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_86("LOCALMKTDATE_164593896");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityDate_86.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_86("MONTHYEAR_1342835791");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityMonthYear_86.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_86("TZTIMEONLY_588358859");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityTime_86.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_86;
    UnderlyingNotionalPercentageOutstanding_86.setString("59.230000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_86);
    UnderlyingInstrument_86.insert(UnderlyingNotionalPercentageOutstanding_86.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_86('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_86);
    UnderlyingInstrument_86.insert(UnderlyingOptAttribute_86.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_86;
    UnderlyingOriginalNotionalPercentageOutstanding_86.setString("68.370000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_86);
    UnderlyingInstrument_86.insert(UnderlyingOriginalNotionalPercentageOutstanding_86.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_86("STRING_578143363");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_86);
    UnderlyingInstrument_86.insert(UnderlyingPriceUnitOfMeasure_86.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_86;
    UnderlyingPriceUnitOfMeasureQty_86.setString("2571519");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_86);
    UnderlyingInstrument_86.insert(UnderlyingPriceUnitOfMeasureQty_86.getString());
    FIX::UnderlyingProduct UnderlyingProduct_86(977844216);
    noUnderlyings_0_0.set(UnderlyingProduct_86);
    UnderlyingInstrument_86.insert(UnderlyingProduct_86.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_86(377600540);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_86);
    UnderlyingInstrument_86.insert(UnderlyingPutOrCall_86.getString());
    FIX::UnderlyingPx UnderlyingPx_86;
    UnderlyingPx_86.setString("17242322");
    noUnderlyings_0_0.set(UnderlyingPx_86);
    UnderlyingInstrument_86.insert(UnderlyingPx_86.getString());
    FIX::UnderlyingQty UnderlyingQty_86;
    UnderlyingQty_86.setString("9246010");
    noUnderlyings_0_0.set(UnderlyingQty_86);
    UnderlyingInstrument_86.insert(UnderlyingQty_86.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_86("LOCALMKTDATE_746199690");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_86);
    UnderlyingInstrument_86.insert(UnderlyingRedemptionDate_86.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_86("STRING_1367462619");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_86);
    UnderlyingInstrument_86.insert(UnderlyingRepoCollateralSecurityType_86.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_86;
    UnderlyingRepurchaseRate_86.setString("11.370000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_86);
    UnderlyingInstrument_86.insert(UnderlyingRepurchaseRate_86.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_86(125234540);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_86);
    UnderlyingInstrument_86.insert(UnderlyingRepurchaseTerm_86.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_86("STRING_2128451605");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_86);
    UnderlyingInstrument_86.insert(UnderlyingRestructuringType_86.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_86("STRING_516569361");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityDesc_86.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_86("EXCHANGE_1249766315");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityExchange_86.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_86("STRING_722596411");
    noUnderlyings_0_0.set(UnderlyingSecurityID_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityID_86.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_86("STRING_1389809241");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityIDSource_86.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_86("STRING_681698290");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_86);
    UnderlyingInstrument_86.insert(UnderlyingSecuritySubType_86.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_86("STRING_790985788");
    noUnderlyings_0_0.set(UnderlyingSecurityType_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityType_86.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_86("STRING_1532347747");
    noUnderlyings_0_0.set(UnderlyingSeniority_86);
    UnderlyingInstrument_86.insert(UnderlyingSeniority_86.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_86("STRING_1113397752");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_86);
    UnderlyingInstrument_86.insert(UnderlyingSettlMethod_86.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_86(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_86);
    UnderlyingInstrument_86.insert(UnderlyingSettlementType_86.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_86;
    UnderlyingStartValue_86.setString("8131752");
    noUnderlyings_0_0.set(UnderlyingStartValue_86);
    UnderlyingInstrument_86.insert(UnderlyingStartValue_86.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_86("STRING_1671081898");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingStateOrProvinceOfIssue_86.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_86("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_86);
    UnderlyingInstrument_86.insert(UnderlyingStrikeCurrency_86.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_86;
    UnderlyingStrikePrice_86.setString("10194428");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_86);
    UnderlyingInstrument_86.insert(UnderlyingStrikePrice_86.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_86("STRING_1473436088");
    noUnderlyings_0_0.set(UnderlyingSymbol_86);
    UnderlyingInstrument_86.insert(UnderlyingSymbol_86.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_86("STRING_1096924682");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_86);
    UnderlyingInstrument_86.insert(UnderlyingSymbolSfx_86.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_86("STRING_1607801754");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_86);
    UnderlyingInstrument_86.insert(UnderlyingTimeUnit_86.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_86("STRING_1172778363");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_86);
    UnderlyingInstrument_86.insert(UnderlyingUnitOfMeasure_86.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_86;
    UnderlyingUnitOfMeasureQty_86.setString("576298");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_86);
    UnderlyingInstrument_86.insert(UnderlyingUnitOfMeasureQty_86.getString());
    all_values.push_back(UnderlyingInstrument_86);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_181;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_181("STRING_1750921727");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_181);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_181.insert(UnderlyingSecurityAltID_181.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_181("STRING_314781807");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_181);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_181.insert(UnderlyingSecurityAltIDSource_181.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_182;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_182("STRING_1166939159");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_182);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_182.insert(UnderlyingSecurityAltID_182.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_182("STRING_2128522267");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_182);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_182.insert(UnderlyingSecurityAltIDSource_182.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_183;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_183("STRING_2039014023");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_183);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_183.insert(UnderlyingSecurityAltID_183.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_183("STRING_2091540204");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_183);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_183.insert(UnderlyingSecurityAltIDSource_183.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_167;
      FIX::UnderlyingStipType UnderlyingStipType_167("STRING_1258992995");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_167);
      UnderlyingStipulations_NoUnderlyingStips_167.insert(UnderlyingStipType_167.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_167("STRING_685337693");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_167);
      UnderlyingStipulations_NoUnderlyingStips_167.insert(UnderlyingStipValue_167.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_167);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_168;
      FIX::UnderlyingStipType UnderlyingStipType_168("STRING_852472849");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_168);
      UnderlyingStipulations_NoUnderlyingStips_168.insert(UnderlyingStipType_168.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_168("STRING_1239960952");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_168);
      UnderlyingStipulations_NoUnderlyingStips_168.insert(UnderlyingStipValue_168.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_168);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_169;
      FIX::UnderlyingStipType UnderlyingStipType_169("STRING_1201907054");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_169);
      UnderlyingStipulations_NoUnderlyingStips_169.insert(UnderlyingStipType_169.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_169("STRING_2102239165");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_169);
      UnderlyingStipulations_NoUnderlyingStips_169.insert(UnderlyingStipValue_169.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_169);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_172;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_172("STRING_444232648");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyID_172.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_172('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyIDSource_172.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_172(606059503);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyRole_172.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_172);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_348("STRING_1749851560");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_348);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348.insert(UnderlyingInstrumentPartySubID_348.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_348(200443030);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_348);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348.insert(UnderlyingInstrumentPartySubIDType_348.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_349("STRING_642271960");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_349);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349.insert(UnderlyingInstrumentPartySubID_349.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_349(1273449810);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_349);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349.insert(UnderlyingInstrumentPartySubIDType_349.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_350("STRING_1509285221");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_350);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350.insert(UnderlyingInstrumentPartySubID_350.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_350(396360851);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_350);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350.insert(UnderlyingInstrumentPartySubIDType_350.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_173;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_173("STRING_145409057");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyID_173.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_173('8');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyIDSource_173.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_173(1493285533);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyRole_173.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_173);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_351("STRING_2008016025");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_351);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351.insert(UnderlyingInstrumentPartySubID_351.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_351(1550915353);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_351);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351.insert(UnderlyingInstrumentPartySubIDType_351.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_352("STRING_1942305754");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_352);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352.insert(UnderlyingInstrumentPartySubID_352.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_352(1611454104);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_352);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352.insert(UnderlyingInstrumentPartySubIDType_352.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_353("STRING_1865697160");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_353);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353.insert(UnderlyingInstrumentPartySubID_353.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_353(961761265);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_353);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353.insert(UnderlyingInstrumentPartySubIDType_353.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_174;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_174("STRING_1592492723");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyID_174.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_174('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyIDSource_174.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_174(905817821);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyRole_174.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_174);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_354("STRING_868736882");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_354);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354.insert(UnderlyingInstrumentPartySubID_354.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_354(1591155515);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_354);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354.insert(UnderlyingInstrumentPartySubIDType_354.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_1;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_1;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_1;
    UnderlyingDeliveryAmount_1.setString("10247202");
    noUnderlyings_0_1.set(UnderlyingDeliveryAmount_1);
    PosUndInstrmtGrp_NoUnderlyings_1.insert(UnderlyingDeliveryAmount_1.getString());
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_2;
    UnderlyingSettlPrice_2.setString("21086978");
    noUnderlyings_0_1.set(UnderlyingSettlPrice_2);
    PosUndInstrmtGrp_NoUnderlyings_1.insert(UnderlyingSettlPrice_2.getString());
    FIX::UnderlyingSettlPriceType UnderlyingSettlPriceType_1(645578921);
    noUnderlyings_0_1.set(UnderlyingSettlPriceType_1);
    PosUndInstrmtGrp_NoUnderlyings_1.insert(UnderlyingSettlPriceType_1.getString());
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_1);

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_1_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_1;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_1;
      UnderlyingCollectAmount_1.setString("19237715");
      noUnderlyingAmounts_1_1_0.set(UnderlyingCollectAmount_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingCollectAmount_1.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_1;
      UnderlyingPayAmount_1.setString("10898115");
      noUnderlyingAmounts_1_1_0.set(UnderlyingPayAmount_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingPayAmount_1.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_1("LOCALMKTDATE_1615929559");
      noUnderlyingAmounts_1_1_0.set(UnderlyingSettlementDate_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingSettlementDate_1.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_1("STRING_382347406");
      noUnderlyingAmounts_1_1_0.set(UnderlyingSettlementStatus_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingSettlementStatus_1.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_1);

      noUnderlyings_0_1.addGroup(noUnderlyingAmounts_1_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_87;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_87("DATA_918908317");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingIssuer_87.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_87(1218297471);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingIssuerLen_87.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_87("DATA_582790436");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingSecurityDesc_87.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_87(1561180277);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingSecurityDescLen_87.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_87;
    UnderlyingAdjustedQuantity_87.setString("3442636");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_87);
    UnderlyingInstrument_87.insert(UnderlyingAdjustedQuantity_87.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_87;
    UnderlyingAllocationPercent_87.setString("56.570000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_87);
    UnderlyingInstrument_87.insert(UnderlyingAllocationPercent_87.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_87;
    UnderlyingAttachmentPoint_87.setString("11.280000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_87);
    UnderlyingInstrument_87.insert(UnderlyingAttachmentPoint_87.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_87("STRING_489672691");
    noUnderlyings_0_1.set(UnderlyingCFICode_87);
    UnderlyingInstrument_87.insert(UnderlyingCFICode_87.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_87("STRING_779829671");
    noUnderlyings_0_1.set(UnderlyingCPProgram_87);
    UnderlyingInstrument_87.insert(UnderlyingCPProgram_87.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_87("STRING_1303343013");
    noUnderlyings_0_1.set(UnderlyingCPRegType_87);
    UnderlyingInstrument_87.insert(UnderlyingCPRegType_87.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_87;
    UnderlyingCapValue_87.setString("953998");
    noUnderlyings_0_1.set(UnderlyingCapValue_87);
    UnderlyingInstrument_87.insert(UnderlyingCapValue_87.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_87;
    UnderlyingCashAmount_87.setString("6403620");
    noUnderlyings_0_1.set(UnderlyingCashAmount_87);
    UnderlyingInstrument_87.insert(UnderlyingCashAmount_87.getString());
    FIX::UnderlyingCashType UnderlyingCashType_87("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_87);
    UnderlyingInstrument_87.insert(UnderlyingCashType_87.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_87;
    UnderlyingContractMultiplier_87.setString("20377056");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_87);
    UnderlyingInstrument_87.insert(UnderlyingContractMultiplier_87.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_87(104332504);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_87);
    UnderlyingInstrument_87.insert(UnderlyingContractMultiplierUnit_87.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_87("COUNTRY_424988230");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingCountryOfIssue_87.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_87("LOCALMKTDATE_851983226");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_87);
    UnderlyingInstrument_87.insert(UnderlyingCouponPaymentDate_87.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_87;
    UnderlyingCouponRate_87.setString("52.270000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_87);
    UnderlyingInstrument_87.insert(UnderlyingCouponRate_87.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_87("STRING_34732117");
    noUnderlyings_0_1.set(UnderlyingCreditRating_87);
    UnderlyingInstrument_87.insert(UnderlyingCreditRating_87.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_87("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_87);
    UnderlyingInstrument_87.insert(UnderlyingCurrency_87.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_87;
    UnderlyingCurrentValue_87.setString("9034690");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_87);
    UnderlyingInstrument_87.insert(UnderlyingCurrentValue_87.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_87;
    UnderlyingDetachmentPoint_87.setString("29.150000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_87);
    UnderlyingInstrument_87.insert(UnderlyingDetachmentPoint_87.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_87;
    UnderlyingDirtyPrice_87.setString("7463091");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_87);
    UnderlyingInstrument_87.insert(UnderlyingDirtyPrice_87.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_87;
    UnderlyingEndPrice_87.setString("8646831");
    noUnderlyings_0_1.set(UnderlyingEndPrice_87);
    UnderlyingInstrument_87.insert(UnderlyingEndPrice_87.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_87;
    UnderlyingEndValue_87.setString("18470518");
    noUnderlyings_0_1.set(UnderlyingEndValue_87);
    UnderlyingInstrument_87.insert(UnderlyingEndValue_87.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_87(1725784950);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_87);
    UnderlyingInstrument_87.insert(UnderlyingExerciseStyle_87.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_87;
    UnderlyingFXRate_87.setString("6409710");
    noUnderlyings_0_1.set(UnderlyingFXRate_87);
    UnderlyingInstrument_87.insert(UnderlyingFXRate_87.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_87('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_87);
    UnderlyingInstrument_87.insert(UnderlyingFXRateCalc_87.getString());
    FIX::UnderlyingFactor UnderlyingFactor_87;
    UnderlyingFactor_87.setString("11942308");
    noUnderlyings_0_1.set(UnderlyingFactor_87);
    UnderlyingInstrument_87.insert(UnderlyingFactor_87.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_87(1023318495);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_87);
    UnderlyingInstrument_87.insert(UnderlyingFlowScheduleType_87.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_87("STRING_1708288075");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_87);
    UnderlyingInstrument_87.insert(UnderlyingInstrRegistry_87.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_87("LOCALMKTDATE_265044684");
    noUnderlyings_0_1.set(UnderlyingIssueDate_87);
    UnderlyingInstrument_87.insert(UnderlyingIssueDate_87.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_87("STRING_1606108931");
    noUnderlyings_0_1.set(UnderlyingIssuer_87);
    UnderlyingInstrument_87.insert(UnderlyingIssuer_87.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_87("STRING_1121984704");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingLocaleOfIssue_87.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_87("LOCALMKTDATE_609308318");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityDate_87.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_87("MONTHYEAR_1550700941");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityMonthYear_87.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_87("TZTIMEONLY_932042184");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityTime_87.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_87;
    UnderlyingNotionalPercentageOutstanding_87.setString("10.090000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_87);
    UnderlyingInstrument_87.insert(UnderlyingNotionalPercentageOutstanding_87.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_87('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_87);
    UnderlyingInstrument_87.insert(UnderlyingOptAttribute_87.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_87;
    UnderlyingOriginalNotionalPercentageOutstanding_87.setString("15.490000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_87);
    UnderlyingInstrument_87.insert(UnderlyingOriginalNotionalPercentageOutstanding_87.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_87("STRING_1194380863");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_87);
    UnderlyingInstrument_87.insert(UnderlyingPriceUnitOfMeasure_87.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_87;
    UnderlyingPriceUnitOfMeasureQty_87.setString("8234090");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_87);
    UnderlyingInstrument_87.insert(UnderlyingPriceUnitOfMeasureQty_87.getString());
    FIX::UnderlyingProduct UnderlyingProduct_87(794676267);
    noUnderlyings_0_1.set(UnderlyingProduct_87);
    UnderlyingInstrument_87.insert(UnderlyingProduct_87.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_87(1084602824);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_87);
    UnderlyingInstrument_87.insert(UnderlyingPutOrCall_87.getString());
    FIX::UnderlyingPx UnderlyingPx_87;
    UnderlyingPx_87.setString("9277415");
    noUnderlyings_0_1.set(UnderlyingPx_87);
    UnderlyingInstrument_87.insert(UnderlyingPx_87.getString());
    FIX::UnderlyingQty UnderlyingQty_87;
    UnderlyingQty_87.setString("12196644");
    noUnderlyings_0_1.set(UnderlyingQty_87);
    UnderlyingInstrument_87.insert(UnderlyingQty_87.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_87("LOCALMKTDATE_1936586051");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_87);
    UnderlyingInstrument_87.insert(UnderlyingRedemptionDate_87.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_87("STRING_477083095");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_87);
    UnderlyingInstrument_87.insert(UnderlyingRepoCollateralSecurityType_87.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_87;
    UnderlyingRepurchaseRate_87.setString("66.140000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_87);
    UnderlyingInstrument_87.insert(UnderlyingRepurchaseRate_87.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_87(1546903451);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_87);
    UnderlyingInstrument_87.insert(UnderlyingRepurchaseTerm_87.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_87("STRING_198672060");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_87);
    UnderlyingInstrument_87.insert(UnderlyingRestructuringType_87.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_87("STRING_10381966");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityDesc_87.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_87("EXCHANGE_600892718");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityExchange_87.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_87("STRING_944981259");
    noUnderlyings_0_1.set(UnderlyingSecurityID_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityID_87.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_87("STRING_875065153");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityIDSource_87.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_87("STRING_300460906");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_87);
    UnderlyingInstrument_87.insert(UnderlyingSecuritySubType_87.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_87("STRING_523282561");
    noUnderlyings_0_1.set(UnderlyingSecurityType_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityType_87.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_87("STRING_1516036243");
    noUnderlyings_0_1.set(UnderlyingSeniority_87);
    UnderlyingInstrument_87.insert(UnderlyingSeniority_87.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_87("STRING_1089840664");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_87);
    UnderlyingInstrument_87.insert(UnderlyingSettlMethod_87.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_87(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_87);
    UnderlyingInstrument_87.insert(UnderlyingSettlementType_87.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_87;
    UnderlyingStartValue_87.setString("3918710");
    noUnderlyings_0_1.set(UnderlyingStartValue_87);
    UnderlyingInstrument_87.insert(UnderlyingStartValue_87.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_87("STRING_650645091");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingStateOrProvinceOfIssue_87.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_87("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_87);
    UnderlyingInstrument_87.insert(UnderlyingStrikeCurrency_87.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_87;
    UnderlyingStrikePrice_87.setString("17726297");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_87);
    UnderlyingInstrument_87.insert(UnderlyingStrikePrice_87.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_87("STRING_444382777");
    noUnderlyings_0_1.set(UnderlyingSymbol_87);
    UnderlyingInstrument_87.insert(UnderlyingSymbol_87.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_87("STRING_1401197315");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_87);
    UnderlyingInstrument_87.insert(UnderlyingSymbolSfx_87.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_87("STRING_557188331");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_87);
    UnderlyingInstrument_87.insert(UnderlyingTimeUnit_87.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_87("STRING_1543363786");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_87);
    UnderlyingInstrument_87.insert(UnderlyingUnitOfMeasure_87.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_87;
    UnderlyingUnitOfMeasureQty_87.setString("15842442");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_87);
    UnderlyingInstrument_87.insert(UnderlyingUnitOfMeasureQty_87.getString());
    all_values.push_back(UnderlyingInstrument_87);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_184;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_184("STRING_590261002");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_184);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_184.insert(UnderlyingSecurityAltID_184.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_184("STRING_260169643");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_184);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_184.insert(UnderlyingSecurityAltIDSource_184.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_170;
      FIX::UnderlyingStipType UnderlyingStipType_170("STRING_1674863826");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_170);
      UnderlyingStipulations_NoUnderlyingStips_170.insert(UnderlyingStipType_170.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_170("STRING_1187911159");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_170);
      UnderlyingStipulations_NoUnderlyingStips_170.insert(UnderlyingStipValue_170.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_170);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_175;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_175("STRING_1463966229");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyID_175.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_175('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyIDSource_175.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_175(1766343611);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyRole_175.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_175);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_355("STRING_1863666314");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_355);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355.insert(UnderlyingInstrumentPartySubID_355.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_355(1776725577);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_355);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355.insert(UnderlyingInstrumentPartySubIDType_355.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_176;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_176("STRING_1464278750");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyID_176.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_176('6');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyIDSource_176.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_176(504307083);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyRole_176.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_176);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_356("STRING_1184446487");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_356);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356.insert(UnderlyingInstrumentPartySubID_356.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_356(2020343326);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_356);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356.insert(UnderlyingInstrumentPartySubIDType_356.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_357("STRING_707096673");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_357);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357.insert(UnderlyingInstrumentPartySubID_357.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_357(754476262);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_357);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357.insert(UnderlyingInstrumentPartySubIDType_357.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_177;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_177("STRING_264730768");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyID_177.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_177('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyIDSource_177.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_177(589550721);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyRole_177.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_177);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_358("STRING_982887912");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_358);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358.insert(UnderlyingInstrumentPartySubID_358.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_358(1033933499);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_358);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358.insert(UnderlyingInstrumentPartySubIDType_358.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_359("STRING_1516424457");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_359);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359.insert(UnderlyingInstrumentPartySubID_359.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_359(1540076244);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_359);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359.insert(UnderlyingInstrumentPartySubIDType_359.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_11;
    FIX::PosAmt PosAmt_11;
    PosAmt_11.setString("9531850");
    noPosAmt_0_0.set(PosAmt_11);
    PositionAmountData_NoPosAmt_11.insert(PosAmt_11.getString());
    FIX::PosAmtType PosAmtType_11("STRING_BANK");
    noPosAmt_0_0.set(PosAmtType_11);
    PositionAmountData_NoPosAmt_11.insert(PosAmtType_11.getString());
    FIX::PositionCurrency PositionCurrency_11("STRING_1020074639");
    noPosAmt_0_0.set(PositionCurrency_11);
    PositionAmountData_NoPosAmt_11.insert(PositionCurrency_11.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_11);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_12;
    FIX::PosAmt PosAmt_12;
    PosAmt_12.setString("12133547");
    noPosAmt_0_1.set(PosAmt_12);
    PositionAmountData_NoPosAmt_12.insert(PosAmt_12.getString());
    FIX::PosAmtType PosAmtType_12("STRING_FMTM");
    noPosAmt_0_1.set(PosAmtType_12);
    PositionAmountData_NoPosAmt_12.insert(PosAmtType_12.getString());
    FIX::PositionCurrency PositionCurrency_12("STRING_547454818");
    noPosAmt_0_1.set(PositionCurrency_12);
    PositionAmountData_NoPosAmt_12.insert(PositionCurrency_12.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_12);

    msg.addGroup(noPosAmt_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_8;
    FIX::LongQty LongQty_8;
    LongQty_8.setString("19893956");
    noPositions_0_0.set(LongQty_8);
    PositionQty_NoPositions_8.insert(LongQty_8.getString());
    FIX::PosQtyStatus PosQtyStatus_8(1);
    noPositions_0_0.set(PosQtyStatus_8);
    PositionQty_NoPositions_8.insert(PosQtyStatus_8.getString());
    FIX::PosType PosType_8("STRING_EX");
    noPositions_0_0.set(PosType_8);
    PositionQty_NoPositions_8.insert(PosType_8.getString());
    FIX::QuantityDate QuantityDate_8("LOCALMKTDATE_1608255583");
    noPositions_0_0.set(QuantityDate_8);
    PositionQty_NoPositions_8.insert(QuantityDate_8.getString());
    FIX::ShortQty ShortQty_8;
    ShortQty_8.setString("7273234");
    noPositions_0_0.set(ShortQty_8);
    PositionQty_NoPositions_8.insert(ShortQty_8.getString());
    all_values.push_back(PositionQty_NoPositions_8);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_91;
      FIX::NestedPartyID NestedPartyID_91("STRING_1237497513");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyID_91.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_91('4');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyIDSource_91.getString());
      FIX::NestedPartyRole NestedPartyRole_91(148639441);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_91);
      NestedParties_NoNestedPartyIDs_91.insert(NestedPartyRole_91.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_91);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_184;
        FIX::NestedPartySubID NestedPartySubID_184("STRING_1808858191");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_184);
        NstdPtysSubGrp_NoNestedPartySubIDs_184.insert(NestedPartySubID_184.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_184(1333085928);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_184);
        NstdPtysSubGrp_NoNestedPartySubIDs_184.insert(NestedPartySubIDType_184.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_184);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_92;
      FIX::NestedPartyID NestedPartyID_92("STRING_1614664274");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyID_92.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_92('3');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyIDSource_92.getString());
      FIX::NestedPartyRole NestedPartyRole_92(2087562190);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_92);
      NestedParties_NoNestedPartyIDs_92.insert(NestedPartyRole_92.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_92);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_185;
        FIX::NestedPartySubID NestedPartySubID_185("STRING_1726212982");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_185);
        NstdPtysSubGrp_NoNestedPartySubIDs_185.insert(NestedPartySubID_185.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_185(529629263);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_185);
        NstdPtysSubGrp_NoNestedPartySubIDs_185.insert(NestedPartySubIDType_185.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_185);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_93;
      FIX::NestedPartyID NestedPartyID_93("STRING_1994622185");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyID_93.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_93('5');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyIDSource_93.getString());
      FIX::NestedPartyRole NestedPartyRole_93(1563562762);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyRole_93.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_93);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_186;
        FIX::NestedPartySubID NestedPartySubID_186("STRING_2101693490");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_186);
        NstdPtysSubGrp_NoNestedPartySubIDs_186.insert(NestedPartySubID_186.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_186(1993376400);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_186);
        NstdPtysSubGrp_NoNestedPartySubIDs_186.insert(NestedPartySubIDType_186.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_186);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_9;
    FIX::LongQty LongQty_9;
    LongQty_9.setString("1692644");
    noPositions_0_1.set(LongQty_9);
    PositionQty_NoPositions_9.insert(LongQty_9.getString());
    FIX::PosQtyStatus PosQtyStatus_9(1);
    noPositions_0_1.set(PosQtyStatus_9);
    PositionQty_NoPositions_9.insert(PosQtyStatus_9.getString());
    FIX::PosType PosType_9("STRING_PA");
    noPositions_0_1.set(PosType_9);
    PositionQty_NoPositions_9.insert(PosType_9.getString());
    FIX::QuantityDate QuantityDate_9("LOCALMKTDATE_1382619166");
    noPositions_0_1.set(QuantityDate_9);
    PositionQty_NoPositions_9.insert(QuantityDate_9.getString());
    FIX::ShortQty ShortQty_9;
    ShortQty_9.setString("14693409");
    noPositions_0_1.set(ShortQty_9);
    PositionQty_NoPositions_9.insert(ShortQty_9.getString());
    all_values.push_back(PositionQty_NoPositions_9);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_94;
      FIX::NestedPartyID NestedPartyID_94("STRING_1636401409");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyID_94.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_94('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyIDSource_94.getString());
      FIX::NestedPartyRole NestedPartyRole_94(1277359609);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyRole_94.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_94);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_187;
        FIX::NestedPartySubID NestedPartySubID_187("STRING_772024851");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_187);
        NstdPtysSubGrp_NoNestedPartySubIDs_187.insert(NestedPartySubID_187.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_187(2004683041);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_187);
        NstdPtysSubGrp_NoNestedPartySubIDs_187.insert(NestedPartySubIDType_187.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_187);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_188;
        FIX::NestedPartySubID NestedPartySubID_188("STRING_895169773");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_188);
        NstdPtysSubGrp_NoNestedPartySubIDs_188.insert(NestedPartySubID_188.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_188(2009522364);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_188);
        NstdPtysSubGrp_NoNestedPartySubIDs_188.insert(NestedPartySubIDType_188.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_188);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_95;
      FIX::NestedPartyID NestedPartyID_95("STRING_2048801575");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyID_95.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_95('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyIDSource_95.getString());
      FIX::NestedPartyRole NestedPartyRole_95(1603843312);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyRole_95.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_95);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_189;
        FIX::NestedPartySubID NestedPartySubID_189("STRING_229411494");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_189);
        NstdPtysSubGrp_NoNestedPartySubIDs_189.insert(NestedPartySubID_189.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_189(1071023938);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_189);
        NstdPtysSubGrp_NoNestedPartySubIDs_189.insert(NestedPartySubIDType_189.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_189);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_190;
        FIX::NestedPartySubID NestedPartySubID_190("STRING_2078647336");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_190);
        NstdPtysSubGrp_NoNestedPartySubIDs_190.insert(NestedPartySubID_190.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_190(169490036);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_190);
        NstdPtysSubGrp_NoNestedPartySubIDs_190.insert(NestedPartySubIDType_190.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_190);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_10;
    FIX::LongQty LongQty_10;
    LongQty_10.setString("8029353");
    noPositions_0_2.set(LongQty_10);
    PositionQty_NoPositions_10.insert(LongQty_10.getString());
    FIX::PosQtyStatus PosQtyStatus_10(0);
    noPositions_0_2.set(PosQtyStatus_10);
    PositionQty_NoPositions_10.insert(PosQtyStatus_10.getString());
    FIX::PosType PosType_10("STRING_SOD");
    noPositions_0_2.set(PosType_10);
    PositionQty_NoPositions_10.insert(PosType_10.getString());
    FIX::QuantityDate QuantityDate_10("LOCALMKTDATE_650073869");
    noPositions_0_2.set(QuantityDate_10);
    PositionQty_NoPositions_10.insert(QuantityDate_10.getString());
    FIX::ShortQty ShortQty_10;
    ShortQty_10.setString("715102");
    noPositions_0_2.set(ShortQty_10);
    PositionQty_NoPositions_10.insert(ShortQty_10.getString());
    all_values.push_back(PositionQty_NoPositions_10);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_96;
      FIX::NestedPartyID NestedPartyID_96("STRING_2013636864");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyID_96.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_96('2');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyIDSource_96.getString());
      FIX::NestedPartyRole NestedPartyRole_96(2108574814);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyRole_96.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_96);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_191;
        FIX::NestedPartySubID NestedPartySubID_191("STRING_17612430");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_191);
        NstdPtysSubGrp_NoNestedPartySubIDs_191.insert(NestedPartySubID_191.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_191(827058558);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_191);
        NstdPtysSubGrp_NoNestedPartySubIDs_191.insert(NestedPartySubIDType_191.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_191);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_192;
        FIX::NestedPartySubID NestedPartySubID_192("STRING_1418036817");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_192);
        NstdPtysSubGrp_NoNestedPartySubIDs_192.insert(NestedPartySubID_192.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_192(1486953373);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_192);
        NstdPtysSubGrp_NoNestedPartySubIDs_192.insert(NestedPartySubIDType_192.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_192);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_193;
        FIX::NestedPartySubID NestedPartySubID_193("STRING_92997119");
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubID_193);
        NstdPtysSubGrp_NoNestedPartySubIDs_193.insert(NestedPartySubID_193.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_193(906954578);
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubIDType_193);
        NstdPtysSubGrp_NoNestedPartySubIDs_193.insert(NestedPartySubIDType_193.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_193);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_97;
      FIX::NestedPartyID NestedPartyID_97("STRING_650722640");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyID_97.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_97('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyIDSource_97.getString());
      FIX::NestedPartyRole NestedPartyRole_97(167165188);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyRole_97.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_97);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_194;
        FIX::NestedPartySubID NestedPartySubID_194("STRING_1227556121");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_194);
        NstdPtysSubGrp_NoNestedPartySubIDs_194.insert(NestedPartySubID_194.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_194(1062334962);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_194);
        NstdPtysSubGrp_NoNestedPartySubIDs_194.insert(NestedPartySubIDType_194.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_194);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_195;
        FIX::NestedPartySubID NestedPartySubID_195("STRING_1284786207");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_195);
        NstdPtysSubGrp_NoNestedPartySubIDs_195.insert(NestedPartySubID_195.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_195(1128874049);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_195);
        NstdPtysSubGrp_NoNestedPartySubIDs_195.insert(NestedPartySubIDType_195.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_195);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_196;
        FIX::NestedPartySubID NestedPartySubID_196("STRING_2106144176");
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubID_196);
        NstdPtysSubGrp_NoNestedPartySubIDs_196.insert(NestedPartySubID_196.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_196(741145871);
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubIDType_196);
        NstdPtysSubGrp_NoNestedPartySubIDs_196.insert(NestedPartySubIDType_196.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_196);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noPositions_0_2);
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
