#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/RequestForPositions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositions, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RequestForPositions msg;

  list<multiset<string>> all_values;
  multiset<string> RequestForPositions_0;
  FIX::Account Account_38("STRING_2004199678");
  msg.set(Account_38);
  RequestForPositions_0.insert(Account_38.getString());
  FIX::AccountType AccountType_33(1);
  msg.set(AccountType_33);
  RequestForPositions_0.insert(AccountType_33.getString());
  FIX::AcctIDSource AcctIDSource_31(99);
  msg.set(AcctIDSource_31);
  RequestForPositions_0.insert(AcctIDSource_31.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_18("LOCALMKTDATE_109425468");
  msg.set(ClearingBusinessDate_18);
  RequestForPositions_0.insert(ClearingBusinessDate_18.getString());
  FIX::Currency Currency_57("USD");
  msg.set(Currency_57);
  RequestForPositions_0.insert(Currency_57.getString());
  FIX::EncodedText EncodedText_73("DATA_677058719");
  msg.set(EncodedText_73);
  RequestForPositions_0.insert(EncodedText_73.getString());
  FIX::EncodedTextLen EncodedTextLen_73(2034040449);
  msg.set(EncodedTextLen_73);
  RequestForPositions_0.insert(EncodedTextLen_73.getString());
  FIX::MatchStatus MatchStatus_10('0');
  msg.set(MatchStatus_10);
  RequestForPositions_0.insert(MatchStatus_10.getString());
  FIX::PosReqID PosReqID_4("STRING_1577973703");
  msg.set(PosReqID_4);
  RequestForPositions_0.insert(PosReqID_4.getString());
  FIX::PosReqType PosReqType_2(3);
  msg.set(PosReqType_2);
  RequestForPositions_0.insert(PosReqType_2.getString());
  FIX::ResponseDestination ResponseDestination_2("STRING_1864369332");
  msg.set(ResponseDestination_2);
  RequestForPositions_0.insert(ResponseDestination_2.getString());
  FIX::ResponseTransportType ResponseTransportType_2(1);
  msg.set(ResponseTransportType_2);
  RequestForPositions_0.insert(ResponseTransportType_2.getString());
  FIX::SettlCurrency SettlCurrency_24("EUR");
  msg.set(SettlCurrency_24);
  RequestForPositions_0.insert(SettlCurrency_24.getString());
  FIX::SettlSessID SettlSessID_10("STRING_RTH");
  msg.set(SettlSessID_10);
  RequestForPositions_0.insert(SettlSessID_10.getString());
  FIX::SettlSessSubID SettlSessSubID_9("STRING_510649289");
  msg.set(SettlSessSubID_9);
  RequestForPositions_0.insert(SettlSessSubID_9.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_7('2');
  msg.set(SubscriptionRequestType_7);
  RequestForPositions_0.insert(SubscriptionRequestType_7.getString());
  FIX::Text Text_73("STRING_316614455");
  msg.set(Text_73);
  RequestForPositions_0.insert(Text_73.getString());
  FIX::TransactTime TransactTime_59(FIX::UTCTIMESTAMP(20, 0, 58, 16, 1, 2013));
  msg.set(TransactTime_59);
  RequestForPositions_0.insert(TransactTime_59.getString());
  all_values.push_back(RequestForPositions_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_122;
    FIX::EncodedLegIssuer EncodedLegIssuer_122("DATA_2100120134");
    noLegs_0_0.set(EncodedLegIssuer_122);
    InstrumentLeg_122.insert(EncodedLegIssuer_122.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_122(860495788);
    noLegs_0_0.set(EncodedLegIssuerLen_122);
    InstrumentLeg_122.insert(EncodedLegIssuerLen_122.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_122("DATA_344785609");
    noLegs_0_0.set(EncodedLegSecurityDesc_122);
    InstrumentLeg_122.insert(EncodedLegSecurityDesc_122.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_122(1004019493);
    noLegs_0_0.set(EncodedLegSecurityDescLen_122);
    InstrumentLeg_122.insert(EncodedLegSecurityDescLen_122.getString());
    FIX::LegCFICode LegCFICode_122("STRING_717211818");
    noLegs_0_0.set(LegCFICode_122);
    InstrumentLeg_122.insert(LegCFICode_122.getString());
    FIX::LegContractMultiplier LegContractMultiplier_122;
    LegContractMultiplier_122.setString("4312925");
    noLegs_0_0.set(LegContractMultiplier_122);
    InstrumentLeg_122.insert(LegContractMultiplier_122.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_122(1812845208);
    noLegs_0_0.set(LegContractMultiplierUnit_122);
    InstrumentLeg_122.insert(LegContractMultiplierUnit_122.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_122("MONTHYEAR_826637287");
    noLegs_0_0.set(LegContractSettlMonth_122);
    InstrumentLeg_122.insert(LegContractSettlMonth_122.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_122("COUNTRY_1195763452");
    noLegs_0_0.set(LegCountryOfIssue_122);
    InstrumentLeg_122.insert(LegCountryOfIssue_122.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_122("LOCALMKTDATE_1216705985");
    noLegs_0_0.set(LegCouponPaymentDate_122);
    InstrumentLeg_122.insert(LegCouponPaymentDate_122.getString());
    FIX::LegCouponRate LegCouponRate_122;
    LegCouponRate_122.setString("60.060000");
    noLegs_0_0.set(LegCouponRate_122);
    InstrumentLeg_122.insert(LegCouponRate_122.getString());
    FIX::LegCreditRating LegCreditRating_122("STRING_1082320254");
    noLegs_0_0.set(LegCreditRating_122);
    InstrumentLeg_122.insert(LegCreditRating_122.getString());
    FIX::LegCurrency LegCurrency_122("CAN");
    noLegs_0_0.set(LegCurrency_122);
    InstrumentLeg_122.insert(LegCurrency_122.getString());
    FIX::LegDatedDate LegDatedDate_122("LOCALMKTDATE_1511953027");
    noLegs_0_0.set(LegDatedDate_122);
    InstrumentLeg_122.insert(LegDatedDate_122.getString());
    FIX::LegExerciseStyle LegExerciseStyle_122(1551061623);
    noLegs_0_0.set(LegExerciseStyle_122);
    InstrumentLeg_122.insert(LegExerciseStyle_122.getString());
    FIX::LegFactor LegFactor_122;
    LegFactor_122.setString("21462159");
    noLegs_0_0.set(LegFactor_122);
    InstrumentLeg_122.insert(LegFactor_122.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_122(1396933669);
    noLegs_0_0.set(LegFlowScheduleType_122);
    InstrumentLeg_122.insert(LegFlowScheduleType_122.getString());
    FIX::LegInstrRegistry LegInstrRegistry_122("STRING_1269883389");
    noLegs_0_0.set(LegInstrRegistry_122);
    InstrumentLeg_122.insert(LegInstrRegistry_122.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_122("LOCALMKTDATE_270411406");
    noLegs_0_0.set(LegInterestAccrualDate_122);
    InstrumentLeg_122.insert(LegInterestAccrualDate_122.getString());
    FIX::LegIssueDate LegIssueDate_122("LOCALMKTDATE_1907582958");
    noLegs_0_0.set(LegIssueDate_122);
    InstrumentLeg_122.insert(LegIssueDate_122.getString());
    FIX::LegIssuer LegIssuer_122("STRING_959561187");
    noLegs_0_0.set(LegIssuer_122);
    InstrumentLeg_122.insert(LegIssuer_122.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_122("STRING_587025862");
    noLegs_0_0.set(LegLocaleOfIssue_122);
    InstrumentLeg_122.insert(LegLocaleOfIssue_122.getString());
    FIX::LegMaturityDate LegMaturityDate_122("LOCALMKTDATE_551261205");
    noLegs_0_0.set(LegMaturityDate_122);
    InstrumentLeg_122.insert(LegMaturityDate_122.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_122("MONTHYEAR_1634522927");
    noLegs_0_0.set(LegMaturityMonthYear_122);
    InstrumentLeg_122.insert(LegMaturityMonthYear_122.getString());
    FIX::LegMaturityTime LegMaturityTime_122("TZTIMEONLY_1899284062");
    noLegs_0_0.set(LegMaturityTime_122);
    InstrumentLeg_122.insert(LegMaturityTime_122.getString());
    FIX::LegOptAttribute LegOptAttribute_122('5');
    noLegs_0_0.set(LegOptAttribute_122);
    InstrumentLeg_122.insert(LegOptAttribute_122.getString());
    FIX::LegOptionRatio LegOptionRatio_122;
    LegOptionRatio_122.setString("20553873");
    noLegs_0_0.set(LegOptionRatio_122);
    InstrumentLeg_122.insert(LegOptionRatio_122.getString());
    FIX::LegPool LegPool_122("STRING_1612144610");
    noLegs_0_0.set(LegPool_122);
    InstrumentLeg_122.insert(LegPool_122.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_122("STRING_621006123");
    noLegs_0_0.set(LegPriceUnitOfMeasure_122);
    InstrumentLeg_122.insert(LegPriceUnitOfMeasure_122.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_122;
    LegPriceUnitOfMeasureQty_122.setString("2102064");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_122);
    InstrumentLeg_122.insert(LegPriceUnitOfMeasureQty_122.getString());
    FIX::LegProduct LegProduct_122(1564781097);
    noLegs_0_0.set(LegProduct_122);
    InstrumentLeg_122.insert(LegProduct_122.getString());
    FIX::LegPutOrCall LegPutOrCall_122(1481501911);
    noLegs_0_0.set(LegPutOrCall_122);
    InstrumentLeg_122.insert(LegPutOrCall_122.getString());
    FIX::LegRatioQty LegRatioQty_122;
    LegRatioQty_122.setString("5549920");
    noLegs_0_0.set(LegRatioQty_122);
    InstrumentLeg_122.insert(LegRatioQty_122.getString());
    FIX::LegRedemptionDate LegRedemptionDate_122("LOCALMKTDATE_421316942");
    noLegs_0_0.set(LegRedemptionDate_122);
    InstrumentLeg_122.insert(LegRedemptionDate_122.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_122("STRING_51230081");
    noLegs_0_0.set(LegRepoCollateralSecurityType_122);
    InstrumentLeg_122.insert(LegRepoCollateralSecurityType_122.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_122;
    LegRepurchaseRate_122.setString("46.230000");
    noLegs_0_0.set(LegRepurchaseRate_122);
    InstrumentLeg_122.insert(LegRepurchaseRate_122.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_122(86678503);
    noLegs_0_0.set(LegRepurchaseTerm_122);
    InstrumentLeg_122.insert(LegRepurchaseTerm_122.getString());
    FIX::LegSecurityDesc LegSecurityDesc_122("STRING_877867368");
    noLegs_0_0.set(LegSecurityDesc_122);
    InstrumentLeg_122.insert(LegSecurityDesc_122.getString());
    FIX::LegSecurityExchange LegSecurityExchange_122("EXCHANGE_34564427");
    noLegs_0_0.set(LegSecurityExchange_122);
    InstrumentLeg_122.insert(LegSecurityExchange_122.getString());
    FIX::LegSecurityID LegSecurityID_122("STRING_1303384488");
    noLegs_0_0.set(LegSecurityID_122);
    InstrumentLeg_122.insert(LegSecurityID_122.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_122("STRING_234079727");
    noLegs_0_0.set(LegSecurityIDSource_122);
    InstrumentLeg_122.insert(LegSecurityIDSource_122.getString());
    FIX::LegSecuritySubType LegSecuritySubType_122("STRING_1116884681");
    noLegs_0_0.set(LegSecuritySubType_122);
    InstrumentLeg_122.insert(LegSecuritySubType_122.getString());
    FIX::LegSecurityType LegSecurityType_122("STRING_990076779");
    noLegs_0_0.set(LegSecurityType_122);
    InstrumentLeg_122.insert(LegSecurityType_122.getString());
    FIX::LegSide LegSide_122('1');
    noLegs_0_0.set(LegSide_122);
    InstrumentLeg_122.insert(LegSide_122.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_122("STRING_481354060");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_122);
    InstrumentLeg_122.insert(LegStateOrProvinceOfIssue_122.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_122("EUR");
    noLegs_0_0.set(LegStrikeCurrency_122);
    InstrumentLeg_122.insert(LegStrikeCurrency_122.getString());
    FIX::LegStrikePrice LegStrikePrice_122;
    LegStrikePrice_122.setString("18782877");
    noLegs_0_0.set(LegStrikePrice_122);
    InstrumentLeg_122.insert(LegStrikePrice_122.getString());
    FIX::LegSymbol LegSymbol_122("STRING_1663538143");
    noLegs_0_0.set(LegSymbol_122);
    InstrumentLeg_122.insert(LegSymbol_122.getString());
    FIX::LegSymbolSfx LegSymbolSfx_122("STRING_1437409488");
    noLegs_0_0.set(LegSymbolSfx_122);
    InstrumentLeg_122.insert(LegSymbolSfx_122.getString());
    FIX::LegTimeUnit LegTimeUnit_122("STRING_1638387040");
    noLegs_0_0.set(LegTimeUnit_122);
    InstrumentLeg_122.insert(LegTimeUnit_122.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_122("STRING_475615682");
    noLegs_0_0.set(LegUnitOfMeasure_122);
    InstrumentLeg_122.insert(LegUnitOfMeasure_122.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_122;
    LegUnitOfMeasureQty_122.setString("20244353");
    noLegs_0_0.set(LegUnitOfMeasureQty_122);
    InstrumentLeg_122.insert(LegUnitOfMeasureQty_122.getString());
    all_values.push_back(InstrumentLeg_122);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_238;
      FIX::LegSecurityAltID LegSecurityAltID_238("STRING_2110138609");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_238);
      LegSecAltIDGrp_NoLegSecurityAltID_238.insert(LegSecurityAltID_238.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_238("STRING_1776235764");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_238);
      LegSecAltIDGrp_NoLegSecurityAltID_238.insert(LegSecurityAltIDSource_238.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_238);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_77;
  FIX::AttachmentPoint AttachmentPoint_77;
  AttachmentPoint_77.setString("11.020000");
  msg.set(AttachmentPoint_77);
  Instrument_77.insert(AttachmentPoint_77.getString());
  FIX::CFICode CFICode_77("STRING_2018042321");
  msg.set(CFICode_77);
  Instrument_77.insert(CFICode_77.getString());
  FIX::CPProgram CPProgram_77(1);
  msg.set(CPProgram_77);
  Instrument_77.insert(CPProgram_77.getString());
  FIX::CPRegType CPRegType_77("STRING_1239737225");
  msg.set(CPRegType_77);
  Instrument_77.insert(CPRegType_77.getString());
  FIX::CapPrice CapPrice_77;
  CapPrice_77.setString("807651");
  msg.set(CapPrice_77);
  Instrument_77.insert(CapPrice_77.getString());
  FIX::ContractMultiplier ContractMultiplier_77;
  ContractMultiplier_77.setString("6581941");
  msg.set(ContractMultiplier_77);
  Instrument_77.insert(ContractMultiplier_77.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_77(1);
  msg.set(ContractMultiplierUnit_77);
  Instrument_77.insert(ContractMultiplierUnit_77.getString());
  FIX::ContractSettlMonth ContractSettlMonth_77("MONTHYEAR_635757173");
  msg.set(ContractSettlMonth_77);
  Instrument_77.insert(ContractSettlMonth_77.getString());
  FIX::CountryOfIssue CountryOfIssue_77("COUNTRY_1079511118");
  msg.set(CountryOfIssue_77);
  Instrument_77.insert(CountryOfIssue_77.getString());
  FIX::CouponPaymentDate CouponPaymentDate_77("LOCALMKTDATE_624985569");
  msg.set(CouponPaymentDate_77);
  Instrument_77.insert(CouponPaymentDate_77.getString());
  FIX::CouponRate CouponRate_77;
  CouponRate_77.setString("17.960000");
  msg.set(CouponRate_77);
  Instrument_77.insert(CouponRate_77.getString());
  FIX::CreditRating CreditRating_77("STRING_1166189621");
  msg.set(CreditRating_77);
  Instrument_77.insert(CreditRating_77.getString());
  FIX::DatedDate DatedDate_77("LOCALMKTDATE_1502852938");
  msg.set(DatedDate_77);
  Instrument_77.insert(DatedDate_77.getString());
  FIX::DetachmentPoint DetachmentPoint_77;
  DetachmentPoint_77.setString("62.230000");
  msg.set(DetachmentPoint_77);
  Instrument_77.insert(DetachmentPoint_77.getString());
  FIX::EncodedIssuer EncodedIssuer_77("DATA_322090461");
  msg.set(EncodedIssuer_77);
  Instrument_77.insert(EncodedIssuer_77.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_77(1736932665);
  msg.set(EncodedIssuerLen_77);
  Instrument_77.insert(EncodedIssuerLen_77.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_77("DATA_626007257");
  msg.set(EncodedSecurityDesc_77);
  Instrument_77.insert(EncodedSecurityDesc_77.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_77(1312167240);
  msg.set(EncodedSecurityDescLen_77);
  Instrument_77.insert(EncodedSecurityDescLen_77.getString());
  FIX::ExerciseStyle ExerciseStyle_77(2);
  msg.set(ExerciseStyle_77);
  Instrument_77.insert(ExerciseStyle_77.getString());
  FIX::Factor Factor_77;
  Factor_77.setString("11073613");
  msg.set(Factor_77);
  Instrument_77.insert(Factor_77.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_77(true);
  msg.set(FlexProductEligibilityIndicator_77);
  Instrument_77.insert(FlexProductEligibilityIndicator_77.getString());
  FIX::FlexibleIndicator FlexibleIndicator_77(false);
  msg.set(FlexibleIndicator_77);
  Instrument_77.insert(FlexibleIndicator_77.getString());
  FIX::FloorPrice FloorPrice_77;
  FloorPrice_77.setString("8381653");
  msg.set(FloorPrice_77);
  Instrument_77.insert(FloorPrice_77.getString());
  FIX::FlowScheduleType FlowScheduleType_77(0);
  msg.set(FlowScheduleType_77);
  Instrument_77.insert(FlowScheduleType_77.getString());
  FIX::InstrRegistry InstrRegistry_77("STRING_1214638727");
  msg.set(InstrRegistry_77);
  Instrument_77.insert(InstrRegistry_77.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_77('3');
  msg.set(InstrmtAssignmentMethod_77);
  Instrument_77.insert(InstrmtAssignmentMethod_77.getString());
  FIX::InterestAccrualDate InterestAccrualDate_77("LOCALMKTDATE_1697492172");
  msg.set(InterestAccrualDate_77);
  Instrument_77.insert(InterestAccrualDate_77.getString());
  FIX::IssueDate IssueDate_77("LOCALMKTDATE_1091590429");
  msg.set(IssueDate_77);
  Instrument_77.insert(IssueDate_77.getString());
  FIX::Issuer Issuer_77("STRING_371233390");
  msg.set(Issuer_77);
  Instrument_77.insert(Issuer_77.getString());
  FIX::ListMethod ListMethod_77(0);
  msg.set(ListMethod_77);
  Instrument_77.insert(ListMethod_77.getString());
  FIX::LocaleOfIssue LocaleOfIssue_77("STRING_720342545");
  msg.set(LocaleOfIssue_77);
  Instrument_77.insert(LocaleOfIssue_77.getString());
  FIX::MaturityDate MaturityDate_77("LOCALMKTDATE_989964492");
  msg.set(MaturityDate_77);
  Instrument_77.insert(MaturityDate_77.getString());
  FIX::MaturityMonthYear MaturityMonthYear_77("MONTHYEAR_1530705807");
  msg.set(MaturityMonthYear_77);
  Instrument_77.insert(MaturityMonthYear_77.getString());
  FIX::MaturityTime MaturityTime_77("TZTIMEONLY_1961239271");
  msg.set(MaturityTime_77);
  Instrument_77.insert(MaturityTime_77.getString());
  FIX::MinPriceIncrement MinPriceIncrement_77;
  MinPriceIncrement_77.setString("822180");
  msg.set(MinPriceIncrement_77);
  Instrument_77.insert(MinPriceIncrement_77.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_77;
  MinPriceIncrementAmount_77.setString("16114709");
  msg.set(MinPriceIncrementAmount_77);
  Instrument_77.insert(MinPriceIncrementAmount_77.getString());
  FIX::NTPositionLimit NTPositionLimit_77(471949799);
  msg.set(NTPositionLimit_77);
  Instrument_77.insert(NTPositionLimit_77.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_77;
  NotionalPercentageOutstanding_77.setString("35.570000");
  msg.set(NotionalPercentageOutstanding_77);
  Instrument_77.insert(NotionalPercentageOutstanding_77.getString());
  FIX::OptAttribute OptAttribute_77('9');
  msg.set(OptAttribute_77);
  Instrument_77.insert(OptAttribute_77.getString());
  FIX::OptPayoutAmount OptPayoutAmount_77;
  OptPayoutAmount_77.setString("15514609");
  msg.set(OptPayoutAmount_77);
  Instrument_77.insert(OptPayoutAmount_77.getString());
  FIX::OptPayoutType OptPayoutType_77(2);
  msg.set(OptPayoutType_77);
  Instrument_77.insert(OptPayoutType_77.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_77;
  OriginalNotionalPercentageOutstanding_77.setString("62.460000");
  msg.set(OriginalNotionalPercentageOutstanding_77);
  Instrument_77.insert(OriginalNotionalPercentageOutstanding_77.getString());
  FIX::Pool Pool_77("STRING_570166890");
  msg.set(Pool_77);
  Instrument_77.insert(Pool_77.getString());
  FIX::PositionLimit PositionLimit_77(636328416);
  msg.set(PositionLimit_77);
  Instrument_77.insert(PositionLimit_77.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_77("STRING_INT");
  msg.set(PriceQuoteMethod_77);
  Instrument_77.insert(PriceQuoteMethod_77.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_77("STRING_892257351");
  msg.set(PriceUnitOfMeasure_77);
  Instrument_77.insert(PriceUnitOfMeasure_77.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_77;
  PriceUnitOfMeasureQty_77.setString("2257774");
  msg.set(PriceUnitOfMeasureQty_77);
  Instrument_77.insert(PriceUnitOfMeasureQty_77.getString());
  FIX::Product Product_79(6);
  msg.set(Product_79);
  Instrument_77.insert(Product_79.getString());
  FIX::ProductComplex ProductComplex_77("STRING_56940943");
  msg.set(ProductComplex_77);
  Instrument_77.insert(ProductComplex_77.getString());
  FIX::PutOrCall PutOrCall_77(1);
  msg.set(PutOrCall_77);
  Instrument_77.insert(PutOrCall_77.getString());
  FIX::RedemptionDate RedemptionDate_77("LOCALMKTDATE_816793748");
  msg.set(RedemptionDate_77);
  Instrument_77.insert(RedemptionDate_77.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_77("STRING_1762762937");
  msg.set(RepoCollateralSecurityType_77);
  Instrument_77.insert(RepoCollateralSecurityType_77.getString());
  FIX::RepurchaseRate RepurchaseRate_77;
  RepurchaseRate_77.setString("14.780000");
  msg.set(RepurchaseRate_77);
  Instrument_77.insert(RepurchaseRate_77.getString());
  FIX::RepurchaseTerm RepurchaseTerm_77(1654959148);
  msg.set(RepurchaseTerm_77);
  Instrument_77.insert(RepurchaseTerm_77.getString());
  FIX::RestructuringType RestructuringType_77("STRING_XR");
  msg.set(RestructuringType_77);
  Instrument_77.insert(RestructuringType_77.getString());
  FIX::SecurityDesc SecurityDesc_77("STRING_1975360205");
  msg.set(SecurityDesc_77);
  Instrument_77.insert(SecurityDesc_77.getString());
  FIX::SecurityExchange SecurityExchange_77("EXCHANGE_1984027940");
  msg.set(SecurityExchange_77);
  Instrument_77.insert(SecurityExchange_77.getString());
  FIX::SecurityGroup SecurityGroup_77("STRING_387164304");
  msg.set(SecurityGroup_77);
  Instrument_77.insert(SecurityGroup_77.getString());
  FIX::SecurityID SecurityID_77("STRING_919466986");
  msg.set(SecurityID_77);
  Instrument_77.insert(SecurityID_77.getString());
  FIX::SecurityIDSource SecurityIDSource_77("STRING_3");
  msg.set(SecurityIDSource_77);
  Instrument_77.insert(SecurityIDSource_77.getString());
  FIX::SecurityStatus SecurityStatus_77("STRING_1");
  msg.set(SecurityStatus_77);
  Instrument_77.insert(SecurityStatus_77.getString());
  FIX::SecuritySubType SecuritySubType_78("STRING_1639809531");
  msg.set(SecuritySubType_78);
  Instrument_77.insert(SecuritySubType_78.getString());
  FIX::SecurityType SecurityType_79("STRING_BRIDGE");
  msg.set(SecurityType_79);
  Instrument_77.insert(SecurityType_79.getString());
  FIX::Seniority Seniority_77("STRING_SR");
  msg.set(Seniority_77);
  Instrument_77.insert(Seniority_77.getString());
  FIX::SettlMethod SettlMethod_77('C');
  msg.set(SettlMethod_77);
  Instrument_77.insert(SettlMethod_77.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_77("STRING_1279960243");
  msg.set(SettleOnOpenFlag_77);
  Instrument_77.insert(SettleOnOpenFlag_77.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_77("STRING_894520874");
  msg.set(StateOrProvinceOfIssue_77);
  Instrument_77.insert(StateOrProvinceOfIssue_77.getString());
  FIX::StrikeCurrency StrikeCurrency_77("GBP");
  msg.set(StrikeCurrency_77);
  Instrument_77.insert(StrikeCurrency_77.getString());
  FIX::StrikeMultiplier StrikeMultiplier_77;
  StrikeMultiplier_77.setString("9942653");
  msg.set(StrikeMultiplier_77);
  Instrument_77.insert(StrikeMultiplier_77.getString());
  FIX::StrikePrice StrikePrice_77;
  StrikePrice_77.setString("13294922");
  msg.set(StrikePrice_77);
  Instrument_77.insert(StrikePrice_77.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_77(4);
  msg.set(StrikePriceBoundaryMethod_77);
  Instrument_77.insert(StrikePriceBoundaryMethod_77.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_77;
  StrikePriceBoundaryPrecision_77.setString("79.230000");
  msg.set(StrikePriceBoundaryPrecision_77);
  Instrument_77.insert(StrikePriceBoundaryPrecision_77.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_77(1);
  msg.set(StrikePriceDeterminationMethod_77);
  Instrument_77.insert(StrikePriceDeterminationMethod_77.getString());
  FIX::StrikeValue StrikeValue_77;
  StrikeValue_77.setString("17057376");
  msg.set(StrikeValue_77);
  Instrument_77.insert(StrikeValue_77.getString());
  FIX::Symbol Symbol_77("STRING_1799476745");
  msg.set(Symbol_77);
  Instrument_77.insert(Symbol_77.getString());
  FIX::SymbolSfx SymbolSfx_77("STRING_WI");
  msg.set(SymbolSfx_77);
  Instrument_77.insert(SymbolSfx_77.getString());
  FIX::TimeUnit TimeUnit_77("STRING_Wk");
  msg.set(TimeUnit_77);
  Instrument_77.insert(TimeUnit_77.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_77(1);
  msg.set(UnderlyingPriceDeterminationMethod_77);
  Instrument_77.insert(UnderlyingPriceDeterminationMethod_77.getString());
  FIX::UnitOfMeasure UnitOfMeasure_77("STRING_Gal");
  msg.set(UnitOfMeasure_77);
  Instrument_77.insert(UnitOfMeasure_77.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_77;
  UnitOfMeasureQty_77.setString("7675237");
  msg.set(UnitOfMeasureQty_77);
  Instrument_77.insert(UnitOfMeasureQty_77.getString());
  FIX::ValuationMethod ValuationMethod_77("STRING_FUTDA");
  msg.set(ValuationMethod_77);
  Instrument_77.insert(ValuationMethod_77.getString());
  all_values.push_back(Instrument_77);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositions::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_148;
    FIX::ComplexEventCondition ComplexEventCondition_148(2);
    noComplexEvents_0_0.set(ComplexEventCondition_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventCondition_148.getString());
    FIX::ComplexEventPrice ComplexEventPrice_148;
    ComplexEventPrice_148.setString("18331784");
    noComplexEvents_0_0.set(ComplexEventPrice_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPrice_148.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_148(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryMethod_148.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_148;
    ComplexEventPriceBoundaryPrecision_148.setString("17.540000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryPrecision_148.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_148(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceTimeType_148.getString());
    FIX::ComplexEventType ComplexEventType_148(8);
    noComplexEvents_0_0.set(ComplexEventType_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexEventType_148.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_148;
    ComplexOptPayoutAmount_148.setString("1281050");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_148);
    ComplexEvents_NoComplexEvents_148.insert(ComplexOptPayoutAmount_148.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_148);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_301;
      FIX::ComplexEventEndDate ComplexEventEndDate_301(FIX::UTCTIMESTAMP(7, 45, 10, 18, 9, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_301);
      ComplexEventDates_NoComplexEventDates_301.insert(ComplexEventEndDate_301.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_301(FIX::UTCTIMESTAMP(16, 2, 50, 10, 6, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_301);
      ComplexEventDates_NoComplexEventDates_301.insert(ComplexEventStartDate_301.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_301);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_609;
        FIX::ComplexEventEndTime ComplexEventEndTime_609(FIX::UTCTIMEONLY(2, 38, 11));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_609);
        ComplexEventTimes_NoComplexEventTimes_609.insert(ComplexEventEndTime_609.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_609(FIX::UTCTIMEONLY(13, 28, 16));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_609);
        ComplexEventTimes_NoComplexEventTimes_609.insert(ComplexEventStartTime_609.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_609);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_302;
      FIX::ComplexEventEndDate ComplexEventEndDate_302(FIX::UTCTIMESTAMP(1, 16, 1, 6, 12, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_302);
      ComplexEventDates_NoComplexEventDates_302.insert(ComplexEventEndDate_302.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_302(FIX::UTCTIMESTAMP(9, 29, 50, 19, 4, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_302);
      ComplexEventDates_NoComplexEventDates_302.insert(ComplexEventStartDate_302.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_302);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_610;
        FIX::ComplexEventEndTime ComplexEventEndTime_610(FIX::UTCTIMEONLY(2, 50, 57));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_610);
        ComplexEventTimes_NoComplexEventTimes_610.insert(ComplexEventEndTime_610.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_610(FIX::UTCTIMEONLY(0, 51, 10));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_610);
        ComplexEventTimes_NoComplexEventTimes_610.insert(ComplexEventStartTime_610.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_610);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_156;
    FIX::EventDate EventDate_156("LOCALMKTDATE_1542755261");
    noEvents_0_0.set(EventDate_156);
    EvntGrp_NoEvents_156.insert(EventDate_156.getString());
    FIX::EventPx EventPx_156;
    EventPx_156.setString("16548143");
    noEvents_0_0.set(EventPx_156);
    EvntGrp_NoEvents_156.insert(EventPx_156.getString());
    FIX::EventText EventText_156("STRING_1568271182");
    noEvents_0_0.set(EventText_156);
    EvntGrp_NoEvents_156.insert(EventText_156.getString());
    FIX::EventTime EventTime_156(FIX::UTCTIMESTAMP(18, 31, 18, 21, 1, 2008));
    noEvents_0_0.set(EventTime_156);
    EvntGrp_NoEvents_156.insert(EventTime_156.getString());
    FIX::EventType EventType_156(19);
    noEvents_0_0.set(EventType_156);
    EvntGrp_NoEvents_156.insert(EventType_156.getString());
    all_values.push_back(EvntGrp_NoEvents_156);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_158;
    FIX::InstrumentPartyID InstrumentPartyID_158("STRING_131959146");
    noInstrumentParties_0_0.set(InstrumentPartyID_158);
    InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyID_158.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_158('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_158);
    InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyIDSource_158.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_158(301287396);
    noInstrumentParties_0_0.set(InstrumentPartyRole_158);
    InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyRole_158.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_158);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334;
      FIX::InstrumentPartySubID InstrumentPartySubID_334("STRING_1819937054");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_334);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334.insert(InstrumentPartySubID_334.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_334(392356167);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_334);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334.insert(InstrumentPartySubIDType_334.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_159;
    FIX::InstrumentPartyID InstrumentPartyID_159("STRING_1286899730");
    noInstrumentParties_0_1.set(InstrumentPartyID_159);
    InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyID_159.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_159('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_159);
    InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyIDSource_159.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_159(543660457);
    noInstrumentParties_0_1.set(InstrumentPartyRole_159);
    InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyRole_159.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_159);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335;
      FIX::InstrumentPartySubID InstrumentPartySubID_335("STRING_1404152944");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_335);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335.insert(InstrumentPartySubID_335.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_335(543650420);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_335);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335.insert(InstrumentPartySubIDType_335.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336;
      FIX::InstrumentPartySubID InstrumentPartySubID_336("STRING_425137153");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_336);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336.insert(InstrumentPartySubID_336.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_336(582568793);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_336);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336.insert(InstrumentPartySubIDType_336.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_173;
    FIX::SecurityAltID SecurityAltID_173("STRING_1260553921");
    noSecurityAltID_0_0.set(SecurityAltID_173);
    SecAltIDGrp_NoSecurityAltID_173.insert(SecurityAltID_173.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_173("STRING_1694679765");
    noSecurityAltID_0_0.set(SecurityAltIDSource_173);
    SecAltIDGrp_NoSecurityAltID_173.insert(SecurityAltIDSource_173.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_173);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_154;
  FIX::SecurityXML SecurityXML_155("XMLDATA_708685595");
  msg.set(SecurityXML_155);
  FIX::SecurityXMLLen SecurityXMLLen_77(634201484);
  msg.set(SecurityXMLLen_77);
  FIX::SecurityXMLSchema SecurityXMLSchema_77("STRING_1089951378");
  msg.set(SecurityXMLSchema_77);
  SecurityXML_154.insert(SecurityXMLSchema_77.getString());
  all_values.push_back(SecurityXML_154);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_121;
    FIX::PartyID PartyID_121("STRING_54989019");
    noPartyIDs_0_0.set(PartyID_121);
    Parties_NoPartyIDs_121.insert(PartyID_121.getString());
    FIX::PartyIDSource PartyIDSource_121('4');
    noPartyIDs_0_0.set(PartyIDSource_121);
    Parties_NoPartyIDs_121.insert(PartyIDSource_121.getString());
    FIX::PartyRole PartyRole_121(48);
    noPartyIDs_0_0.set(PartyRole_121);
    Parties_NoPartyIDs_121.insert(PartyRole_121.getString());
    all_values.push_back(Parties_NoPartyIDs_121);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_247;
      FIX::PartySubID PartySubID_247("STRING_1445718151");
      noPartySubIDs_0_1_0.set(PartySubID_247);
      PtysSubGrp_NoPartySubIDs_247.insert(PartySubID_247.getString());
      FIX::PartySubIDType PartySubIDType_247(7);
      noPartySubIDs_0_1_0.set(PartySubIDType_247);
      PtysSubGrp_NoPartySubIDs_247.insert(PartySubIDType_247.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_247);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_248;
      FIX::PartySubID PartySubID_248("STRING_1405820258");
      noPartySubIDs_0_1_1.set(PartySubID_248);
      PtysSubGrp_NoPartySubIDs_248.insert(PartySubID_248.getString());
      FIX::PartySubIDType PartySubIDType_248(19);
      noPartySubIDs_0_1_1.set(PartySubIDType_248);
      PtysSubGrp_NoPartySubIDs_248.insert(PartySubIDType_248.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_248);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_122;
    FIX::PartyID PartyID_122("STRING_108872849");
    noPartyIDs_0_1.set(PartyID_122);
    Parties_NoPartyIDs_122.insert(PartyID_122.getString());
    FIX::PartyIDSource PartyIDSource_122('3');
    noPartyIDs_0_1.set(PartyIDSource_122);
    Parties_NoPartyIDs_122.insert(PartyIDSource_122.getString());
    FIX::PartyRole PartyRole_122(65);
    noPartyIDs_0_1.set(PartyRole_122);
    Parties_NoPartyIDs_122.insert(PartyRole_122.getString());
    all_values.push_back(Parties_NoPartyIDs_122);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_249;
      FIX::PartySubID PartySubID_249("STRING_697601558");
      noPartySubIDs_1_1_0.set(PartySubID_249);
      PtysSubGrp_NoPartySubIDs_249.insert(PartySubID_249.getString());
      FIX::PartySubIDType PartySubIDType_249(29);
      noPartySubIDs_1_1_0.set(PartySubIDType_249);
      PtysSubGrp_NoPartySubIDs_249.insert(PartySubIDType_249.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_249);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_250;
      FIX::PartySubID PartySubID_250("STRING_87939740");
      noPartySubIDs_1_1_1.set(PartySubID_250);
      PtysSubGrp_NoPartySubIDs_250.insert(PartySubID_250.getString());
      FIX::PartySubIDType PartySubIDType_250(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_250);
      PtysSubGrp_NoPartySubIDs_250.insert(PartySubIDType_250.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_250);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_251;
      FIX::PartySubID PartySubID_251("STRING_274328945");
      noPartySubIDs_1_1_2.set(PartySubID_251);
      PtysSubGrp_NoPartySubIDs_251.insert(PartySubID_251.getString());
      FIX::PartySubIDType PartySubIDType_251(15);
      noPartySubIDs_1_1_2.set(PartySubIDType_251);
      PtysSubGrp_NoPartySubIDs_251.insert(PartySubIDType_251.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_251);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_25;
    FIX::TradingSessionID TradingSessionID_71("STRING_1");
    noTradingSessions_0_0.set(TradingSessionID_71);
    TrdgSesGrp_NoTradingSessions_25.insert(TradingSessionID_71.getString());
    FIX::TradingSessionSubID TradingSessionSubID_71("STRING_7");
    noTradingSessions_0_0.set(TradingSessionSubID_71);
    TrdgSesGrp_NoTradingSessions_25.insert(TradingSessionSubID_71.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_25);

    msg.addGroup(noTradingSessions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_114;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_114("DATA_1322907829");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_114);
    UnderlyingInstrument_114.insert(EncodedUnderlyingIssuer_114.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_114(39467287);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_114);
    UnderlyingInstrument_114.insert(EncodedUnderlyingIssuerLen_114.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_114("DATA_1491520287");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_114);
    UnderlyingInstrument_114.insert(EncodedUnderlyingSecurityDesc_114.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_114(435978103);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_114);
    UnderlyingInstrument_114.insert(EncodedUnderlyingSecurityDescLen_114.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_114;
    UnderlyingAdjustedQuantity_114.setString("17341470");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_114);
    UnderlyingInstrument_114.insert(UnderlyingAdjustedQuantity_114.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_114;
    UnderlyingAllocationPercent_114.setString("22.350000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_114);
    UnderlyingInstrument_114.insert(UnderlyingAllocationPercent_114.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_114;
    UnderlyingAttachmentPoint_114.setString("95.870000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_114);
    UnderlyingInstrument_114.insert(UnderlyingAttachmentPoint_114.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_114("STRING_676614783");
    noUnderlyings_0_0.set(UnderlyingCFICode_114);
    UnderlyingInstrument_114.insert(UnderlyingCFICode_114.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_114("STRING_268738571");
    noUnderlyings_0_0.set(UnderlyingCPProgram_114);
    UnderlyingInstrument_114.insert(UnderlyingCPProgram_114.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_114("STRING_1125168606");
    noUnderlyings_0_0.set(UnderlyingCPRegType_114);
    UnderlyingInstrument_114.insert(UnderlyingCPRegType_114.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_114;
    UnderlyingCapValue_114.setString("1463721");
    noUnderlyings_0_0.set(UnderlyingCapValue_114);
    UnderlyingInstrument_114.insert(UnderlyingCapValue_114.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_114;
    UnderlyingCashAmount_114.setString("10199898");
    noUnderlyings_0_0.set(UnderlyingCashAmount_114);
    UnderlyingInstrument_114.insert(UnderlyingCashAmount_114.getString());
    FIX::UnderlyingCashType UnderlyingCashType_114("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_114);
    UnderlyingInstrument_114.insert(UnderlyingCashType_114.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_114;
    UnderlyingContractMultiplier_114.setString("15920903");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_114);
    UnderlyingInstrument_114.insert(UnderlyingContractMultiplier_114.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_114(567658156);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_114);
    UnderlyingInstrument_114.insert(UnderlyingContractMultiplierUnit_114.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_114("COUNTRY_84641019");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_114);
    UnderlyingInstrument_114.insert(UnderlyingCountryOfIssue_114.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_114("LOCALMKTDATE_1173798216");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_114);
    UnderlyingInstrument_114.insert(UnderlyingCouponPaymentDate_114.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_114;
    UnderlyingCouponRate_114.setString("10.050000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_114);
    UnderlyingInstrument_114.insert(UnderlyingCouponRate_114.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_114("STRING_480955180");
    noUnderlyings_0_0.set(UnderlyingCreditRating_114);
    UnderlyingInstrument_114.insert(UnderlyingCreditRating_114.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_114("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_114);
    UnderlyingInstrument_114.insert(UnderlyingCurrency_114.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_114;
    UnderlyingCurrentValue_114.setString("11785567");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_114);
    UnderlyingInstrument_114.insert(UnderlyingCurrentValue_114.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_114;
    UnderlyingDetachmentPoint_114.setString("81.140000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_114);
    UnderlyingInstrument_114.insert(UnderlyingDetachmentPoint_114.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_114;
    UnderlyingDirtyPrice_114.setString("11799570");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_114);
    UnderlyingInstrument_114.insert(UnderlyingDirtyPrice_114.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_114;
    UnderlyingEndPrice_114.setString("1210308");
    noUnderlyings_0_0.set(UnderlyingEndPrice_114);
    UnderlyingInstrument_114.insert(UnderlyingEndPrice_114.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_114;
    UnderlyingEndValue_114.setString("1492234");
    noUnderlyings_0_0.set(UnderlyingEndValue_114);
    UnderlyingInstrument_114.insert(UnderlyingEndValue_114.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_114(1380186277);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_114);
    UnderlyingInstrument_114.insert(UnderlyingExerciseStyle_114.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_114;
    UnderlyingFXRate_114.setString("17546489");
    noUnderlyings_0_0.set(UnderlyingFXRate_114);
    UnderlyingInstrument_114.insert(UnderlyingFXRate_114.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_114('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_114);
    UnderlyingInstrument_114.insert(UnderlyingFXRateCalc_114.getString());
    FIX::UnderlyingFactor UnderlyingFactor_114;
    UnderlyingFactor_114.setString("8370847");
    noUnderlyings_0_0.set(UnderlyingFactor_114);
    UnderlyingInstrument_114.insert(UnderlyingFactor_114.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_114(1784433952);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_114);
    UnderlyingInstrument_114.insert(UnderlyingFlowScheduleType_114.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_114("STRING_222418268");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_114);
    UnderlyingInstrument_114.insert(UnderlyingInstrRegistry_114.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_114("LOCALMKTDATE_876552058");
    noUnderlyings_0_0.set(UnderlyingIssueDate_114);
    UnderlyingInstrument_114.insert(UnderlyingIssueDate_114.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_114("STRING_1128470592");
    noUnderlyings_0_0.set(UnderlyingIssuer_114);
    UnderlyingInstrument_114.insert(UnderlyingIssuer_114.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_114("STRING_658396371");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_114);
    UnderlyingInstrument_114.insert(UnderlyingLocaleOfIssue_114.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_114("LOCALMKTDATE_463215463");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_114);
    UnderlyingInstrument_114.insert(UnderlyingMaturityDate_114.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_114("MONTHYEAR_1181192827");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_114);
    UnderlyingInstrument_114.insert(UnderlyingMaturityMonthYear_114.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_114("TZTIMEONLY_1728575959");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_114);
    UnderlyingInstrument_114.insert(UnderlyingMaturityTime_114.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_114;
    UnderlyingNotionalPercentageOutstanding_114.setString("2.460000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_114);
    UnderlyingInstrument_114.insert(UnderlyingNotionalPercentageOutstanding_114.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_114('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_114);
    UnderlyingInstrument_114.insert(UnderlyingOptAttribute_114.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_114;
    UnderlyingOriginalNotionalPercentageOutstanding_114.setString("9.170000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_114);
    UnderlyingInstrument_114.insert(UnderlyingOriginalNotionalPercentageOutstanding_114.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_114("STRING_1286202421");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_114);
    UnderlyingInstrument_114.insert(UnderlyingPriceUnitOfMeasure_114.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_114;
    UnderlyingPriceUnitOfMeasureQty_114.setString("3224375");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_114);
    UnderlyingInstrument_114.insert(UnderlyingPriceUnitOfMeasureQty_114.getString());
    FIX::UnderlyingProduct UnderlyingProduct_114(1532565326);
    noUnderlyings_0_0.set(UnderlyingProduct_114);
    UnderlyingInstrument_114.insert(UnderlyingProduct_114.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_114(730809100);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_114);
    UnderlyingInstrument_114.insert(UnderlyingPutOrCall_114.getString());
    FIX::UnderlyingPx UnderlyingPx_114;
    UnderlyingPx_114.setString("8900957");
    noUnderlyings_0_0.set(UnderlyingPx_114);
    UnderlyingInstrument_114.insert(UnderlyingPx_114.getString());
    FIX::UnderlyingQty UnderlyingQty_114;
    UnderlyingQty_114.setString("16172063");
    noUnderlyings_0_0.set(UnderlyingQty_114);
    UnderlyingInstrument_114.insert(UnderlyingQty_114.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_114("LOCALMKTDATE_1904607316");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_114);
    UnderlyingInstrument_114.insert(UnderlyingRedemptionDate_114.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_114("STRING_1566626756");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_114);
    UnderlyingInstrument_114.insert(UnderlyingRepoCollateralSecurityType_114.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_114;
    UnderlyingRepurchaseRate_114.setString("15.250000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_114);
    UnderlyingInstrument_114.insert(UnderlyingRepurchaseRate_114.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_114(644588919);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_114);
    UnderlyingInstrument_114.insert(UnderlyingRepurchaseTerm_114.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_114("STRING_511160448");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_114);
    UnderlyingInstrument_114.insert(UnderlyingRestructuringType_114.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_114("STRING_1129234616");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityDesc_114.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_114("EXCHANGE_519483385");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityExchange_114.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_114("STRING_1691117527");
    noUnderlyings_0_0.set(UnderlyingSecurityID_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityID_114.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_114("STRING_1250265431");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityIDSource_114.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_114("STRING_668706796");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_114);
    UnderlyingInstrument_114.insert(UnderlyingSecuritySubType_114.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_114("STRING_923820156");
    noUnderlyings_0_0.set(UnderlyingSecurityType_114);
    UnderlyingInstrument_114.insert(UnderlyingSecurityType_114.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_114("STRING_857430781");
    noUnderlyings_0_0.set(UnderlyingSeniority_114);
    UnderlyingInstrument_114.insert(UnderlyingSeniority_114.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_114("STRING_1715700883");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_114);
    UnderlyingInstrument_114.insert(UnderlyingSettlMethod_114.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_114(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_114);
    UnderlyingInstrument_114.insert(UnderlyingSettlementType_114.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_114;
    UnderlyingStartValue_114.setString("4943810");
    noUnderlyings_0_0.set(UnderlyingStartValue_114);
    UnderlyingInstrument_114.insert(UnderlyingStartValue_114.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_114("STRING_1938119152");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_114);
    UnderlyingInstrument_114.insert(UnderlyingStateOrProvinceOfIssue_114.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_114("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_114);
    UnderlyingInstrument_114.insert(UnderlyingStrikeCurrency_114.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_114;
    UnderlyingStrikePrice_114.setString("4490318");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_114);
    UnderlyingInstrument_114.insert(UnderlyingStrikePrice_114.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_114("STRING_953188801");
    noUnderlyings_0_0.set(UnderlyingSymbol_114);
    UnderlyingInstrument_114.insert(UnderlyingSymbol_114.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_114("STRING_656560857");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_114);
    UnderlyingInstrument_114.insert(UnderlyingSymbolSfx_114.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_114("STRING_30124186");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_114);
    UnderlyingInstrument_114.insert(UnderlyingTimeUnit_114.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_114("STRING_2093019047");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_114);
    UnderlyingInstrument_114.insert(UnderlyingUnitOfMeasure_114.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_114;
    UnderlyingUnitOfMeasureQty_114.setString("21064922");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_114);
    UnderlyingInstrument_114.insert(UnderlyingUnitOfMeasureQty_114.getString());
    all_values.push_back(UnderlyingInstrument_114);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_226;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_226("STRING_1231737820");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_226);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_226.insert(UnderlyingSecurityAltID_226.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_226("STRING_281446202");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_226);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_226.insert(UnderlyingSecurityAltIDSource_226.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_227;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_227("STRING_121466782");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_227);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_227.insert(UnderlyingSecurityAltID_227.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_227("STRING_1962546920");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_227);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_227.insert(UnderlyingSecurityAltIDSource_227.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_214;
      FIX::UnderlyingStipType UnderlyingStipType_214("STRING_1738673127");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_214);
      UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipType_214.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_214("STRING_1719670588");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_214);
      UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipValue_214.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_214);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_215;
      FIX::UnderlyingStipType UnderlyingStipType_215("STRING_590685061");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_215);
      UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipType_215.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_215("STRING_1689351004");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_215);
      UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipValue_215.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_215);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_231;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_231("STRING_1101845509");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyID_231.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_231('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyIDSource_231.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_231(736259245);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyRole_231.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_231);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_433("STRING_1921367404");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_433);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433.insert(UnderlyingInstrumentPartySubID_433.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_433(1404966042);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_433);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433.insert(UnderlyingInstrumentPartySubIDType_433.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_434("STRING_1569299545");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_434);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434.insert(UnderlyingInstrumentPartySubID_434.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_434(631314537);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_434);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434.insert(UnderlyingInstrumentPartySubIDType_434.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
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
