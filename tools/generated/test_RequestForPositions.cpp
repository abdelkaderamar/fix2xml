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
  multiset<string> all_compo_names;
  multiset<string> RequestForPositions_0;
  FIX::Account Account_43("STRING_412071572");
  msg.set(Account_43);
  RequestForPositions_0.insert(Account_43.getString());
  FIX::AccountType AccountType_36(7);
  msg.set(AccountType_36);
  RequestForPositions_0.insert(AccountType_36.getString());
  FIX::AcctIDSource AcctIDSource_36(99);
  msg.set(AcctIDSource_36);
  RequestForPositions_0.insert(AcctIDSource_36.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_18("LOCALMKTDATE_1011741649");
  msg.set(ClearingBusinessDate_18);
  RequestForPositions_0.insert(ClearingBusinessDate_18.getString());
  FIX::Currency Currency_61("EUR");
  msg.set(Currency_61);
  RequestForPositions_0.insert(Currency_61.getString());
  FIX::EncodedText EncodedText_80("DATA_1558675909");
  msg.set(EncodedText_80);
  RequestForPositions_0.insert(EncodedText_80.getString());
  FIX::EncodedTextLen EncodedTextLen_80(250236312);
  msg.set(EncodedTextLen_80);
  RequestForPositions_0.insert(EncodedTextLen_80.getString());
  FIX::MatchStatus MatchStatus_8('1');
  msg.set(MatchStatus_8);
  RequestForPositions_0.insert(MatchStatus_8.getString());
  FIX::PosReqID PosReqID_4("STRING_1432659883");
  msg.set(PosReqID_4);
  RequestForPositions_0.insert(PosReqID_4.getString());
  FIX::PosReqType PosReqType_2(5);
  msg.set(PosReqType_2);
  RequestForPositions_0.insert(PosReqType_2.getString());
  FIX::ResponseDestination ResponseDestination_2("STRING_445803808");
  msg.set(ResponseDestination_2);
  RequestForPositions_0.insert(ResponseDestination_2.getString());
  FIX::ResponseTransportType ResponseTransportType_2(0);
  msg.set(ResponseTransportType_2);
  RequestForPositions_0.insert(ResponseTransportType_2.getString());
  FIX::SettlCurrency SettlCurrency_28("CHF");
  msg.set(SettlCurrency_28);
  RequestForPositions_0.insert(SettlCurrency_28.getString());
  FIX::SettlSessID SettlSessID_10("STRING_ITD");
  msg.set(SettlSessID_10);
  RequestForPositions_0.insert(SettlSessID_10.getString());
  FIX::SettlSessSubID SettlSessSubID_9("STRING_741506287");
  msg.set(SettlSessSubID_9);
  RequestForPositions_0.insert(SettlSessSubID_9.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_7('1');
  msg.set(SubscriptionRequestType_7);
  RequestForPositions_0.insert(SubscriptionRequestType_7.getString());
  FIX::Text Text_80("STRING_756563253");
  msg.set(Text_80);
  RequestForPositions_0.insert(Text_80.getString());
  FIX::TransactTime TransactTime_62(FIX::UTCTIMESTAMP(16, 10, 5, 6, 11, 2017));
  msg.set(TransactTime_62);
  RequestForPositions_0.insert(TransactTime_62.getString());
  all_values.push_back(RequestForPositions_0);

  all_compo_names.insert("RequestForPositions");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_124;
    FIX::EncodedLegIssuer EncodedLegIssuer_124("DATA_2127915753");
    noLegs_0_0.set(EncodedLegIssuer_124);
    InstrumentLeg_124.insert(EncodedLegIssuer_124.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_124(1973471198);
    noLegs_0_0.set(EncodedLegIssuerLen_124);
    InstrumentLeg_124.insert(EncodedLegIssuerLen_124.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_124("DATA_602612921");
    noLegs_0_0.set(EncodedLegSecurityDesc_124);
    InstrumentLeg_124.insert(EncodedLegSecurityDesc_124.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_124(424486292);
    noLegs_0_0.set(EncodedLegSecurityDescLen_124);
    InstrumentLeg_124.insert(EncodedLegSecurityDescLen_124.getString());
    FIX::LegCFICode LegCFICode_124("STRING_238059123");
    noLegs_0_0.set(LegCFICode_124);
    InstrumentLeg_124.insert(LegCFICode_124.getString());
    FIX::LegContractMultiplier LegContractMultiplier_124;
    LegContractMultiplier_124.setString("11448962");
    noLegs_0_0.set(LegContractMultiplier_124);
    InstrumentLeg_124.insert(LegContractMultiplier_124.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_124(104461883);
    noLegs_0_0.set(LegContractMultiplierUnit_124);
    InstrumentLeg_124.insert(LegContractMultiplierUnit_124.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_124("MONTHYEAR_1249800772");
    noLegs_0_0.set(LegContractSettlMonth_124);
    InstrumentLeg_124.insert(LegContractSettlMonth_124.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_124("COUNTRY_2018799971");
    noLegs_0_0.set(LegCountryOfIssue_124);
    InstrumentLeg_124.insert(LegCountryOfIssue_124.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_124("LOCALMKTDATE_2027565906");
    noLegs_0_0.set(LegCouponPaymentDate_124);
    InstrumentLeg_124.insert(LegCouponPaymentDate_124.getString());
    FIX::LegCouponRate LegCouponRate_124;
    LegCouponRate_124.setString("30.330000");
    noLegs_0_0.set(LegCouponRate_124);
    InstrumentLeg_124.insert(LegCouponRate_124.getString());
    FIX::LegCreditRating LegCreditRating_124("STRING_121552636");
    noLegs_0_0.set(LegCreditRating_124);
    InstrumentLeg_124.insert(LegCreditRating_124.getString());
    FIX::LegCurrency LegCurrency_124("JPY");
    noLegs_0_0.set(LegCurrency_124);
    InstrumentLeg_124.insert(LegCurrency_124.getString());
    FIX::LegDatedDate LegDatedDate_124("LOCALMKTDATE_1354711792");
    noLegs_0_0.set(LegDatedDate_124);
    InstrumentLeg_124.insert(LegDatedDate_124.getString());
    FIX::LegExerciseStyle LegExerciseStyle_124(215416591);
    noLegs_0_0.set(LegExerciseStyle_124);
    InstrumentLeg_124.insert(LegExerciseStyle_124.getString());
    FIX::LegFactor LegFactor_124;
    LegFactor_124.setString("17644400");
    noLegs_0_0.set(LegFactor_124);
    InstrumentLeg_124.insert(LegFactor_124.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_124(104790316);
    noLegs_0_0.set(LegFlowScheduleType_124);
    InstrumentLeg_124.insert(LegFlowScheduleType_124.getString());
    FIX::LegInstrRegistry LegInstrRegistry_124("STRING_1098767057");
    noLegs_0_0.set(LegInstrRegistry_124);
    InstrumentLeg_124.insert(LegInstrRegistry_124.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_124("LOCALMKTDATE_831283921");
    noLegs_0_0.set(LegInterestAccrualDate_124);
    InstrumentLeg_124.insert(LegInterestAccrualDate_124.getString());
    FIX::LegIssueDate LegIssueDate_124("LOCALMKTDATE_846296604");
    noLegs_0_0.set(LegIssueDate_124);
    InstrumentLeg_124.insert(LegIssueDate_124.getString());
    FIX::LegIssuer LegIssuer_124("STRING_58339672");
    noLegs_0_0.set(LegIssuer_124);
    InstrumentLeg_124.insert(LegIssuer_124.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_124("STRING_1587847174");
    noLegs_0_0.set(LegLocaleOfIssue_124);
    InstrumentLeg_124.insert(LegLocaleOfIssue_124.getString());
    FIX::LegMaturityDate LegMaturityDate_124("LOCALMKTDATE_1941609838");
    noLegs_0_0.set(LegMaturityDate_124);
    InstrumentLeg_124.insert(LegMaturityDate_124.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_124("MONTHYEAR_588085376");
    noLegs_0_0.set(LegMaturityMonthYear_124);
    InstrumentLeg_124.insert(LegMaturityMonthYear_124.getString());
    FIX::LegMaturityTime LegMaturityTime_124("TZTIMEONLY_798264457");
    noLegs_0_0.set(LegMaturityTime_124);
    InstrumentLeg_124.insert(LegMaturityTime_124.getString());
    FIX::LegOptAttribute LegOptAttribute_124('4');
    noLegs_0_0.set(LegOptAttribute_124);
    InstrumentLeg_124.insert(LegOptAttribute_124.getString());
    FIX::LegOptionRatio LegOptionRatio_124;
    LegOptionRatio_124.setString("13947871");
    noLegs_0_0.set(LegOptionRatio_124);
    InstrumentLeg_124.insert(LegOptionRatio_124.getString());
    FIX::LegPool LegPool_124("STRING_2086205819");
    noLegs_0_0.set(LegPool_124);
    InstrumentLeg_124.insert(LegPool_124.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_124("STRING_706229311");
    noLegs_0_0.set(LegPriceUnitOfMeasure_124);
    InstrumentLeg_124.insert(LegPriceUnitOfMeasure_124.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_124;
    LegPriceUnitOfMeasureQty_124.setString("2898842");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_124);
    InstrumentLeg_124.insert(LegPriceUnitOfMeasureQty_124.getString());
    FIX::LegProduct LegProduct_124(2066637925);
    noLegs_0_0.set(LegProduct_124);
    InstrumentLeg_124.insert(LegProduct_124.getString());
    FIX::LegPutOrCall LegPutOrCall_124(532216861);
    noLegs_0_0.set(LegPutOrCall_124);
    InstrumentLeg_124.insert(LegPutOrCall_124.getString());
    FIX::LegRatioQty LegRatioQty_124;
    LegRatioQty_124.setString("8924972");
    noLegs_0_0.set(LegRatioQty_124);
    InstrumentLeg_124.insert(LegRatioQty_124.getString());
    FIX::LegRedemptionDate LegRedemptionDate_124("LOCALMKTDATE_343640569");
    noLegs_0_0.set(LegRedemptionDate_124);
    InstrumentLeg_124.insert(LegRedemptionDate_124.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_124("STRING_770275984");
    noLegs_0_0.set(LegRepoCollateralSecurityType_124);
    InstrumentLeg_124.insert(LegRepoCollateralSecurityType_124.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_124;
    LegRepurchaseRate_124.setString("34.970000");
    noLegs_0_0.set(LegRepurchaseRate_124);
    InstrumentLeg_124.insert(LegRepurchaseRate_124.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_124(448102452);
    noLegs_0_0.set(LegRepurchaseTerm_124);
    InstrumentLeg_124.insert(LegRepurchaseTerm_124.getString());
    FIX::LegSecurityDesc LegSecurityDesc_124("STRING_2020076757");
    noLegs_0_0.set(LegSecurityDesc_124);
    InstrumentLeg_124.insert(LegSecurityDesc_124.getString());
    FIX::LegSecurityExchange LegSecurityExchange_124("EXCHANGE_1908709820");
    noLegs_0_0.set(LegSecurityExchange_124);
    InstrumentLeg_124.insert(LegSecurityExchange_124.getString());
    FIX::LegSecurityID LegSecurityID_124("STRING_328184710");
    noLegs_0_0.set(LegSecurityID_124);
    InstrumentLeg_124.insert(LegSecurityID_124.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_124("STRING_533586142");
    noLegs_0_0.set(LegSecurityIDSource_124);
    InstrumentLeg_124.insert(LegSecurityIDSource_124.getString());
    FIX::LegSecuritySubType LegSecuritySubType_124("STRING_2030262456");
    noLegs_0_0.set(LegSecuritySubType_124);
    InstrumentLeg_124.insert(LegSecuritySubType_124.getString());
    FIX::LegSecurityType LegSecurityType_124("STRING_97797493");
    noLegs_0_0.set(LegSecurityType_124);
    InstrumentLeg_124.insert(LegSecurityType_124.getString());
    FIX::LegSide LegSide_124('4');
    noLegs_0_0.set(LegSide_124);
    InstrumentLeg_124.insert(LegSide_124.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_124("STRING_1237490600");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_124);
    InstrumentLeg_124.insert(LegStateOrProvinceOfIssue_124.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_124("JPY");
    noLegs_0_0.set(LegStrikeCurrency_124);
    InstrumentLeg_124.insert(LegStrikeCurrency_124.getString());
    FIX::LegStrikePrice LegStrikePrice_124;
    LegStrikePrice_124.setString("13422809");
    noLegs_0_0.set(LegStrikePrice_124);
    InstrumentLeg_124.insert(LegStrikePrice_124.getString());
    FIX::LegSymbol LegSymbol_124("STRING_1411981142");
    noLegs_0_0.set(LegSymbol_124);
    InstrumentLeg_124.insert(LegSymbol_124.getString());
    FIX::LegSymbolSfx LegSymbolSfx_124("STRING_927995729");
    noLegs_0_0.set(LegSymbolSfx_124);
    InstrumentLeg_124.insert(LegSymbolSfx_124.getString());
    FIX::LegTimeUnit LegTimeUnit_124("STRING_41093873");
    noLegs_0_0.set(LegTimeUnit_124);
    InstrumentLeg_124.insert(LegTimeUnit_124.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_124("STRING_1470320814");
    noLegs_0_0.set(LegUnitOfMeasure_124);
    InstrumentLeg_124.insert(LegUnitOfMeasure_124.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_124;
    LegUnitOfMeasureQty_124.setString("3683592");
    noLegs_0_0.set(LegUnitOfMeasureQty_124);
    InstrumentLeg_124.insert(LegUnitOfMeasureQty_124.getString());
    all_values.push_back(InstrumentLeg_124);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_251;
      FIX::LegSecurityAltID LegSecurityAltID_251("STRING_2058406190");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_251);
      LegSecAltIDGrp_NoLegSecurityAltID_251.insert(LegSecurityAltID_251.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_251("STRING_1166623712");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_251);
      LegSecAltIDGrp_NoLegSecurityAltID_251.insert(LegSecurityAltIDSource_251.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_251);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_78;
  FIX::AttachmentPoint AttachmentPoint_78;
  AttachmentPoint_78.setString("94.790000");
  msg.set(AttachmentPoint_78);
  Instrument_78.insert(AttachmentPoint_78.getString());
  FIX::CFICode CFICode_78("STRING_1305709652");
  msg.set(CFICode_78);
  Instrument_78.insert(CFICode_78.getString());
  FIX::CPProgram CPProgram_78(1);
  msg.set(CPProgram_78);
  Instrument_78.insert(CPProgram_78.getString());
  FIX::CPRegType CPRegType_78("STRING_963318790");
  msg.set(CPRegType_78);
  Instrument_78.insert(CPRegType_78.getString());
  FIX::CapPrice CapPrice_78;
  CapPrice_78.setString("15955939");
  msg.set(CapPrice_78);
  Instrument_78.insert(CapPrice_78.getString());
  FIX::ContractMultiplier ContractMultiplier_78;
  ContractMultiplier_78.setString("10245001");
  msg.set(ContractMultiplier_78);
  Instrument_78.insert(ContractMultiplier_78.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_78(2);
  msg.set(ContractMultiplierUnit_78);
  Instrument_78.insert(ContractMultiplierUnit_78.getString());
  FIX::ContractSettlMonth ContractSettlMonth_78("MONTHYEAR_340607496");
  msg.set(ContractSettlMonth_78);
  Instrument_78.insert(ContractSettlMonth_78.getString());
  FIX::CountryOfIssue CountryOfIssue_78("COUNTRY_1368140730");
  msg.set(CountryOfIssue_78);
  Instrument_78.insert(CountryOfIssue_78.getString());
  FIX::CouponPaymentDate CouponPaymentDate_78("LOCALMKTDATE_118327988");
  msg.set(CouponPaymentDate_78);
  Instrument_78.insert(CouponPaymentDate_78.getString());
  FIX::CouponRate CouponRate_78;
  CouponRate_78.setString("73.450000");
  msg.set(CouponRate_78);
  Instrument_78.insert(CouponRate_78.getString());
  FIX::CreditRating CreditRating_78("STRING_1816243182");
  msg.set(CreditRating_78);
  Instrument_78.insert(CreditRating_78.getString());
  FIX::DatedDate DatedDate_78("LOCALMKTDATE_2138404745");
  msg.set(DatedDate_78);
  Instrument_78.insert(DatedDate_78.getString());
  FIX::DetachmentPoint DetachmentPoint_78;
  DetachmentPoint_78.setString("71.650000");
  msg.set(DetachmentPoint_78);
  Instrument_78.insert(DetachmentPoint_78.getString());
  FIX::EncodedIssuer EncodedIssuer_78("DATA_2144427892");
  msg.set(EncodedIssuer_78);
  Instrument_78.insert(EncodedIssuer_78.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_78(524507239);
  msg.set(EncodedIssuerLen_78);
  Instrument_78.insert(EncodedIssuerLen_78.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_78("DATA_2022005974");
  msg.set(EncodedSecurityDesc_78);
  Instrument_78.insert(EncodedSecurityDesc_78.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_78(94741737);
  msg.set(EncodedSecurityDescLen_78);
  Instrument_78.insert(EncodedSecurityDescLen_78.getString());
  FIX::ExerciseStyle ExerciseStyle_78(2);
  msg.set(ExerciseStyle_78);
  Instrument_78.insert(ExerciseStyle_78.getString());
  FIX::Factor Factor_78;
  Factor_78.setString("11120129");
  msg.set(Factor_78);
  Instrument_78.insert(Factor_78.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_78(true);
  msg.set(FlexProductEligibilityIndicator_78);
  Instrument_78.insert(FlexProductEligibilityIndicator_78.getString());
  FIX::FlexibleIndicator FlexibleIndicator_78(true);
  msg.set(FlexibleIndicator_78);
  Instrument_78.insert(FlexibleIndicator_78.getString());
  FIX::FloorPrice FloorPrice_78;
  FloorPrice_78.setString("3068101");
  msg.set(FloorPrice_78);
  Instrument_78.insert(FloorPrice_78.getString());
  FIX::FlowScheduleType FlowScheduleType_78(4);
  msg.set(FlowScheduleType_78);
  Instrument_78.insert(FlowScheduleType_78.getString());
  FIX::InstrRegistry InstrRegistry_78("STRING_2028970187");
  msg.set(InstrRegistry_78);
  Instrument_78.insert(InstrRegistry_78.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_78('3');
  msg.set(InstrmtAssignmentMethod_78);
  Instrument_78.insert(InstrmtAssignmentMethod_78.getString());
  FIX::InterestAccrualDate InterestAccrualDate_78("LOCALMKTDATE_1142774130");
  msg.set(InterestAccrualDate_78);
  Instrument_78.insert(InterestAccrualDate_78.getString());
  FIX::IssueDate IssueDate_78("LOCALMKTDATE_249845795");
  msg.set(IssueDate_78);
  Instrument_78.insert(IssueDate_78.getString());
  FIX::Issuer Issuer_78("STRING_183124132");
  msg.set(Issuer_78);
  Instrument_78.insert(Issuer_78.getString());
  FIX::ListMethod ListMethod_78(0);
  msg.set(ListMethod_78);
  Instrument_78.insert(ListMethod_78.getString());
  FIX::LocaleOfIssue LocaleOfIssue_78("STRING_1416469507");
  msg.set(LocaleOfIssue_78);
  Instrument_78.insert(LocaleOfIssue_78.getString());
  FIX::MaturityDate MaturityDate_78("LOCALMKTDATE_440213611");
  msg.set(MaturityDate_78);
  Instrument_78.insert(MaturityDate_78.getString());
  FIX::MaturityMonthYear MaturityMonthYear_78("MONTHYEAR_211922676");
  msg.set(MaturityMonthYear_78);
  Instrument_78.insert(MaturityMonthYear_78.getString());
  FIX::MaturityTime MaturityTime_78("TZTIMEONLY_374331743");
  msg.set(MaturityTime_78);
  Instrument_78.insert(MaturityTime_78.getString());
  FIX::MinPriceIncrement MinPriceIncrement_78;
  MinPriceIncrement_78.setString("14035324");
  msg.set(MinPriceIncrement_78);
  Instrument_78.insert(MinPriceIncrement_78.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_78;
  MinPriceIncrementAmount_78.setString("18075166");
  msg.set(MinPriceIncrementAmount_78);
  Instrument_78.insert(MinPriceIncrementAmount_78.getString());
  FIX::NTPositionLimit NTPositionLimit_78(1398831904);
  msg.set(NTPositionLimit_78);
  Instrument_78.insert(NTPositionLimit_78.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_78;
  NotionalPercentageOutstanding_78.setString("44.040000");
  msg.set(NotionalPercentageOutstanding_78);
  Instrument_78.insert(NotionalPercentageOutstanding_78.getString());
  FIX::OptAttribute OptAttribute_78('6');
  msg.set(OptAttribute_78);
  Instrument_78.insert(OptAttribute_78.getString());
  FIX::OptPayoutAmount OptPayoutAmount_78;
  OptPayoutAmount_78.setString("6194889");
  msg.set(OptPayoutAmount_78);
  Instrument_78.insert(OptPayoutAmount_78.getString());
  FIX::OptPayoutType OptPayoutType_78(2);
  msg.set(OptPayoutType_78);
  Instrument_78.insert(OptPayoutType_78.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_78;
  OriginalNotionalPercentageOutstanding_78.setString("78.070000");
  msg.set(OriginalNotionalPercentageOutstanding_78);
  Instrument_78.insert(OriginalNotionalPercentageOutstanding_78.getString());
  FIX::Pool Pool_78("STRING_288248520");
  msg.set(Pool_78);
  Instrument_78.insert(Pool_78.getString());
  FIX::PositionLimit PositionLimit_78(860833489);
  msg.set(PositionLimit_78);
  Instrument_78.insert(PositionLimit_78.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_78("STRING_STD");
  msg.set(PriceQuoteMethod_78);
  Instrument_78.insert(PriceQuoteMethod_78.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_78("STRING_285192764");
  msg.set(PriceUnitOfMeasure_78);
  Instrument_78.insert(PriceUnitOfMeasure_78.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_78;
  PriceUnitOfMeasureQty_78.setString("13853407");
  msg.set(PriceUnitOfMeasureQty_78);
  Instrument_78.insert(PriceUnitOfMeasureQty_78.getString());
  FIX::Product Product_80(13);
  msg.set(Product_80);
  Instrument_78.insert(Product_80.getString());
  FIX::ProductComplex ProductComplex_78("STRING_379934502");
  msg.set(ProductComplex_78);
  Instrument_78.insert(ProductComplex_78.getString());
  FIX::PutOrCall PutOrCall_78(1);
  msg.set(PutOrCall_78);
  Instrument_78.insert(PutOrCall_78.getString());
  FIX::RedemptionDate RedemptionDate_78("LOCALMKTDATE_1209436577");
  msg.set(RedemptionDate_78);
  Instrument_78.insert(RedemptionDate_78.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_78("STRING_787890324");
  msg.set(RepoCollateralSecurityType_78);
  Instrument_78.insert(RepoCollateralSecurityType_78.getString());
  FIX::RepurchaseRate RepurchaseRate_78;
  RepurchaseRate_78.setString("41.900000");
  msg.set(RepurchaseRate_78);
  Instrument_78.insert(RepurchaseRate_78.getString());
  FIX::RepurchaseTerm RepurchaseTerm_78(1516246772);
  msg.set(RepurchaseTerm_78);
  Instrument_78.insert(RepurchaseTerm_78.getString());
  FIX::RestructuringType RestructuringType_78("STRING_MR");
  msg.set(RestructuringType_78);
  Instrument_78.insert(RestructuringType_78.getString());
  FIX::SecurityDesc SecurityDesc_78("STRING_1224580729");
  msg.set(SecurityDesc_78);
  Instrument_78.insert(SecurityDesc_78.getString());
  FIX::SecurityExchange SecurityExchange_78("EXCHANGE_1864150841");
  msg.set(SecurityExchange_78);
  Instrument_78.insert(SecurityExchange_78.getString());
  FIX::SecurityGroup SecurityGroup_78("STRING_1603117771");
  msg.set(SecurityGroup_78);
  Instrument_78.insert(SecurityGroup_78.getString());
  FIX::SecurityID SecurityID_78("STRING_1474426524");
  msg.set(SecurityID_78);
  Instrument_78.insert(SecurityID_78.getString());
  FIX::SecurityIDSource SecurityIDSource_78("STRING_8");
  msg.set(SecurityIDSource_78);
  Instrument_78.insert(SecurityIDSource_78.getString());
  FIX::SecurityStatus SecurityStatus_78("STRING_1");
  msg.set(SecurityStatus_78);
  Instrument_78.insert(SecurityStatus_78.getString());
  FIX::SecuritySubType SecuritySubType_79("STRING_743412384");
  msg.set(SecuritySubType_79);
  Instrument_78.insert(SecuritySubType_79.getString());
  FIX::SecurityType SecurityType_80("STRING_PFAND");
  msg.set(SecurityType_80);
  Instrument_78.insert(SecurityType_80.getString());
  FIX::Seniority Seniority_78("STRING_SD");
  msg.set(Seniority_78);
  Instrument_78.insert(Seniority_78.getString());
  FIX::SettlMethod SettlMethod_78('P');
  msg.set(SettlMethod_78);
  Instrument_78.insert(SettlMethod_78.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_78("STRING_1743537337");
  msg.set(SettleOnOpenFlag_78);
  Instrument_78.insert(SettleOnOpenFlag_78.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_78("STRING_381286438");
  msg.set(StateOrProvinceOfIssue_78);
  Instrument_78.insert(StateOrProvinceOfIssue_78.getString());
  FIX::StrikeCurrency StrikeCurrency_78("EUR");
  msg.set(StrikeCurrency_78);
  Instrument_78.insert(StrikeCurrency_78.getString());
  FIX::StrikeMultiplier StrikeMultiplier_78;
  StrikeMultiplier_78.setString("3819269");
  msg.set(StrikeMultiplier_78);
  Instrument_78.insert(StrikeMultiplier_78.getString());
  FIX::StrikePrice StrikePrice_78;
  StrikePrice_78.setString("9885813");
  msg.set(StrikePrice_78);
  Instrument_78.insert(StrikePrice_78.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_78(2);
  msg.set(StrikePriceBoundaryMethod_78);
  Instrument_78.insert(StrikePriceBoundaryMethod_78.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_78;
  StrikePriceBoundaryPrecision_78.setString("47.070000");
  msg.set(StrikePriceBoundaryPrecision_78);
  Instrument_78.insert(StrikePriceBoundaryPrecision_78.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_78(4);
  msg.set(StrikePriceDeterminationMethod_78);
  Instrument_78.insert(StrikePriceDeterminationMethod_78.getString());
  FIX::StrikeValue StrikeValue_78;
  StrikeValue_78.setString("20783839");
  msg.set(StrikeValue_78);
  Instrument_78.insert(StrikeValue_78.getString());
  FIX::Symbol Symbol_78("STRING_835986032");
  msg.set(Symbol_78);
  Instrument_78.insert(Symbol_78.getString());
  FIX::SymbolSfx SymbolSfx_78("STRING_WI");
  msg.set(SymbolSfx_78);
  Instrument_78.insert(SymbolSfx_78.getString());
  FIX::TimeUnit TimeUnit_78("STRING_Wk");
  msg.set(TimeUnit_78);
  Instrument_78.insert(TimeUnit_78.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_78(3);
  msg.set(UnderlyingPriceDeterminationMethod_78);
  Instrument_78.insert(UnderlyingPriceDeterminationMethod_78.getString());
  FIX::UnitOfMeasure UnitOfMeasure_78("STRING_tn");
  msg.set(UnitOfMeasure_78);
  Instrument_78.insert(UnitOfMeasure_78.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_78;
  UnitOfMeasureQty_78.setString("15583607");
  msg.set(UnitOfMeasureQty_78);
  Instrument_78.insert(UnitOfMeasureQty_78.getString());
  FIX::ValuationMethod ValuationMethod_78("STRING_CDSD");
  msg.set(ValuationMethod_78);
  Instrument_78.insert(ValuationMethod_78.getString());
  all_values.push_back(Instrument_78);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositions::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_161;
    FIX::ComplexEventCondition ComplexEventCondition_161(1);
    noComplexEvents_0_0.set(ComplexEventCondition_161);
    ComplexEvents_NoComplexEvents_161.insert(ComplexEventCondition_161.getString());
    FIX::ComplexEventPrice ComplexEventPrice_161;
    ComplexEventPrice_161.setString("15116093");
    noComplexEvents_0_0.set(ComplexEventPrice_161);
    ComplexEvents_NoComplexEvents_161.insert(ComplexEventPrice_161.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_161(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_161);
    ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceBoundaryMethod_161.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_161;
    ComplexEventPriceBoundaryPrecision_161.setString("20.590000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_161);
    ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceBoundaryPrecision_161.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_161(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_161);
    ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceTimeType_161.getString());
    FIX::ComplexEventType ComplexEventType_161(7);
    noComplexEvents_0_0.set(ComplexEventType_161);
    ComplexEvents_NoComplexEvents_161.insert(ComplexEventType_161.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_161;
    ComplexOptPayoutAmount_161.setString("13054949");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_161);
    ComplexEvents_NoComplexEvents_161.insert(ComplexOptPayoutAmount_161.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_161);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_328;
      FIX::ComplexEventEndDate ComplexEventEndDate_328(FIX::UTCTIMESTAMP(8, 38, 7, 27, 8, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_328);
      ComplexEventDates_NoComplexEventDates_328.insert(ComplexEventEndDate_328.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_328(FIX::UTCTIMESTAMP(20, 18, 46, 10, 10, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_328);
      ComplexEventDates_NoComplexEventDates_328.insert(ComplexEventStartDate_328.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_328);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_669;
        FIX::ComplexEventEndTime ComplexEventEndTime_669(FIX::UTCTIMEONLY(20, 2, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_669);
        ComplexEventTimes_NoComplexEventTimes_669.insert(ComplexEventEndTime_669.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_669(FIX::UTCTIMEONLY(6, 23, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_669);
        ComplexEventTimes_NoComplexEventTimes_669.insert(ComplexEventStartTime_669.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_669);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_159;
    FIX::EventDate EventDate_159("LOCALMKTDATE_2086624327");
    noEvents_0_0.set(EventDate_159);
    EvntGrp_NoEvents_159.insert(EventDate_159.getString());
    FIX::EventPx EventPx_159;
    EventPx_159.setString("1927879");
    noEvents_0_0.set(EventPx_159);
    EvntGrp_NoEvents_159.insert(EventPx_159.getString());
    FIX::EventText EventText_159("STRING_1724889724");
    noEvents_0_0.set(EventText_159);
    EvntGrp_NoEvents_159.insert(EventText_159.getString());
    FIX::EventTime EventTime_159(FIX::UTCTIMESTAMP(13, 52, 50, 24, 5, 2004));
    noEvents_0_0.set(EventTime_159);
    EvntGrp_NoEvents_159.insert(EventTime_159.getString());
    FIX::EventType EventType_159(8);
    noEvents_0_0.set(EventType_159);
    EvntGrp_NoEvents_159.insert(EventType_159.getString());
    all_values.push_back(EvntGrp_NoEvents_159);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_160;
    FIX::EventDate EventDate_160("LOCALMKTDATE_1803492483");
    noEvents_0_1.set(EventDate_160);
    EvntGrp_NoEvents_160.insert(EventDate_160.getString());
    FIX::EventPx EventPx_160;
    EventPx_160.setString("5327172");
    noEvents_0_1.set(EventPx_160);
    EvntGrp_NoEvents_160.insert(EventPx_160.getString());
    FIX::EventText EventText_160("STRING_1242972844");
    noEvents_0_1.set(EventText_160);
    EvntGrp_NoEvents_160.insert(EventText_160.getString());
    FIX::EventTime EventTime_160(FIX::UTCTIMESTAMP(0, 22, 25, 2, 1, 2002));
    noEvents_0_1.set(EventTime_160);
    EvntGrp_NoEvents_160.insert(EventTime_160.getString());
    FIX::EventType EventType_160(5);
    noEvents_0_1.set(EventType_160);
    EvntGrp_NoEvents_160.insert(EventType_160.getString());
    all_values.push_back(EvntGrp_NoEvents_160);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_161;
    FIX::EventDate EventDate_161("LOCALMKTDATE_44127669");
    noEvents_0_2.set(EventDate_161);
    EvntGrp_NoEvents_161.insert(EventDate_161.getString());
    FIX::EventPx EventPx_161;
    EventPx_161.setString("15530578");
    noEvents_0_2.set(EventPx_161);
    EvntGrp_NoEvents_161.insert(EventPx_161.getString());
    FIX::EventText EventText_161("STRING_273050639");
    noEvents_0_2.set(EventText_161);
    EvntGrp_NoEvents_161.insert(EventText_161.getString());
    FIX::EventTime EventTime_161(FIX::UTCTIMESTAMP(16, 41, 45, 8, 7, 2014));
    noEvents_0_2.set(EventTime_161);
    EvntGrp_NoEvents_161.insert(EventTime_161.getString());
    FIX::EventType EventType_161(8);
    noEvents_0_2.set(EventType_161);
    EvntGrp_NoEvents_161.insert(EventType_161.getString());
    all_values.push_back(EvntGrp_NoEvents_161);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_161;
    FIX::InstrumentPartyID InstrumentPartyID_161("STRING_157869233");
    noInstrumentParties_0_0.set(InstrumentPartyID_161);
    InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyID_161.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_161('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_161);
    InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyIDSource_161.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_161(1619545374);
    noInstrumentParties_0_0.set(InstrumentPartyRole_161);
    InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyRole_161.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_161);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314;
      FIX::InstrumentPartySubID InstrumentPartySubID_314("STRING_1853574561");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_314);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314.insert(InstrumentPartySubID_314.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_314(256386410);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_314);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314.insert(InstrumentPartySubIDType_314.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315;
      FIX::InstrumentPartySubID InstrumentPartySubID_315("STRING_1921945092");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_315);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315.insert(InstrumentPartySubID_315.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_315(986335100);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_315);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315.insert(InstrumentPartySubIDType_315.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_162;
    FIX::InstrumentPartyID InstrumentPartyID_162("STRING_2059878893");
    noInstrumentParties_0_1.set(InstrumentPartyID_162);
    InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyID_162.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_162('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_162);
    InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyIDSource_162.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_162(81824296);
    noInstrumentParties_0_1.set(InstrumentPartyRole_162);
    InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyRole_162.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_162);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316;
      FIX::InstrumentPartySubID InstrumentPartySubID_316("STRING_104176871");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_316);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316.insert(InstrumentPartySubID_316.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_316(1669452699);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_316);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316.insert(InstrumentPartySubIDType_316.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_163;
    FIX::InstrumentPartyID InstrumentPartyID_163("STRING_82807541");
    noInstrumentParties_0_2.set(InstrumentPartyID_163);
    InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyID_163.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_163('3');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_163);
    InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyIDSource_163.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_163(2067337719);
    noInstrumentParties_0_2.set(InstrumentPartyRole_163);
    InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyRole_163.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_163);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317;
      FIX::InstrumentPartySubID InstrumentPartySubID_317("STRING_1074567974");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_317);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317.insert(InstrumentPartySubID_317.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_317(2111465388);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_317);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317.insert(InstrumentPartySubIDType_317.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318;
      FIX::InstrumentPartySubID InstrumentPartySubID_318("STRING_120712846");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_318);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318.insert(InstrumentPartySubID_318.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_318(1347618613);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_318);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318.insert(InstrumentPartySubIDType_318.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_144;
    FIX::SecurityAltID SecurityAltID_144("STRING_241487390");
    noSecurityAltID_0_0.set(SecurityAltID_144);
    SecAltIDGrp_NoSecurityAltID_144.insert(SecurityAltID_144.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_144("STRING_613035587");
    noSecurityAltID_0_0.set(SecurityAltIDSource_144);
    SecAltIDGrp_NoSecurityAltID_144.insert(SecurityAltIDSource_144.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_144);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_145;
    FIX::SecurityAltID SecurityAltID_145("STRING_1786556687");
    noSecurityAltID_0_1.set(SecurityAltID_145);
    SecAltIDGrp_NoSecurityAltID_145.insert(SecurityAltID_145.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_145("STRING_1659826083");
    noSecurityAltID_0_1.set(SecurityAltIDSource_145);
    SecAltIDGrp_NoSecurityAltID_145.insert(SecurityAltIDSource_145.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_145);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_146;
    FIX::SecurityAltID SecurityAltID_146("STRING_1772273873");
    noSecurityAltID_0_2.set(SecurityAltID_146);
    SecAltIDGrp_NoSecurityAltID_146.insert(SecurityAltID_146.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_146("STRING_777008663");
    noSecurityAltID_0_2.set(SecurityAltIDSource_146);
    SecAltIDGrp_NoSecurityAltID_146.insert(SecurityAltIDSource_146.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_146);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_156;
  FIX::SecurityXML SecurityXML_157("XMLDATA_1123469102");
  msg.set(SecurityXML_157);
  FIX::SecurityXMLLen SecurityXMLLen_78(361434587);
  msg.set(SecurityXMLLen_78);
  FIX::SecurityXMLSchema SecurityXMLSchema_78("STRING_934877896");
  msg.set(SecurityXMLSchema_78);
  SecurityXML_156.insert(SecurityXMLSchema_78.getString());
  all_values.push_back(SecurityXML_156);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_127;
    FIX::PartyID PartyID_127("STRING_1980979961");
    noPartyIDs_0_0.set(PartyID_127);
    Parties_NoPartyIDs_127.insert(PartyID_127.getString());
    FIX::PartyIDSource PartyIDSource_127('6');
    noPartyIDs_0_0.set(PartyIDSource_127);
    Parties_NoPartyIDs_127.insert(PartyIDSource_127.getString());
    FIX::PartyRole PartyRole_127(30);
    noPartyIDs_0_0.set(PartyRole_127);
    Parties_NoPartyIDs_127.insert(PartyRole_127.getString());
    all_values.push_back(Parties_NoPartyIDs_127);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_278;
      FIX::PartySubID PartySubID_278("STRING_1015210084");
      noPartySubIDs_0_1_0.set(PartySubID_278);
      PtysSubGrp_NoPartySubIDs_278.insert(PartySubID_278.getString());
      FIX::PartySubIDType PartySubIDType_278(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_278);
      PtysSubGrp_NoPartySubIDs_278.insert(PartySubIDType_278.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_278);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_279;
      FIX::PartySubID PartySubID_279("STRING_2277968");
      noPartySubIDs_0_1_1.set(PartySubID_279);
      PtysSubGrp_NoPartySubIDs_279.insert(PartySubID_279.getString());
      FIX::PartySubIDType PartySubIDType_279(18);
      noPartySubIDs_0_1_1.set(PartySubIDType_279);
      PtysSubGrp_NoPartySubIDs_279.insert(PartySubIDType_279.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_279);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_280;
      FIX::PartySubID PartySubID_280("STRING_2052492005");
      noPartySubIDs_0_1_2.set(PartySubID_280);
      PtysSubGrp_NoPartySubIDs_280.insert(PartySubID_280.getString());
      FIX::PartySubIDType PartySubIDType_280(19);
      noPartySubIDs_0_1_2.set(PartySubIDType_280);
      PtysSubGrp_NoPartySubIDs_280.insert(PartySubIDType_280.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_280);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_28;
    FIX::TradingSessionID TradingSessionID_91("STRING_1");
    noTradingSessions_0_0.set(TradingSessionID_91);
    TrdgSesGrp_NoTradingSessions_28.insert(TradingSessionID_91.getString());
    FIX::TradingSessionSubID TradingSessionSubID_91("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_91);
    TrdgSesGrp_NoTradingSessions_28.insert(TradingSessionSubID_91.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_28);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_29;
    FIX::TradingSessionID TradingSessionID_92("STRING_4");
    noTradingSessions_0_1.set(TradingSessionID_92);
    TrdgSesGrp_NoTradingSessions_29.insert(TradingSessionID_92.getString());
    FIX::TradingSessionSubID TradingSessionSubID_92("STRING_5");
    noTradingSessions_0_1.set(TradingSessionSubID_92);
    TrdgSesGrp_NoTradingSessions_29.insert(TradingSessionSubID_92.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_29);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_30;
    FIX::TradingSessionID TradingSessionID_93("STRING_5");
    noTradingSessions_0_2.set(TradingSessionID_93);
    TrdgSesGrp_NoTradingSessions_30.insert(TradingSessionID_93.getString());
    FIX::TradingSessionSubID TradingSessionSubID_93("STRING_4");
    noTradingSessions_0_2.set(TradingSessionSubID_93);
    TrdgSesGrp_NoTradingSessions_30.insert(TradingSessionSubID_93.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_30);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_118;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_118("DATA_1877601236");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingIssuer_118.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_118(2084275097);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingIssuerLen_118.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_118("DATA_2046058609");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingSecurityDesc_118.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_118(2119088626);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingSecurityDescLen_118.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_118;
    UnderlyingAdjustedQuantity_118.setString("5498270");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_118);
    UnderlyingInstrument_118.insert(UnderlyingAdjustedQuantity_118.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_118;
    UnderlyingAllocationPercent_118.setString("16.480000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_118);
    UnderlyingInstrument_118.insert(UnderlyingAllocationPercent_118.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_118;
    UnderlyingAttachmentPoint_118.setString("10.610000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_118);
    UnderlyingInstrument_118.insert(UnderlyingAttachmentPoint_118.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_118("STRING_174617261");
    noUnderlyings_0_0.set(UnderlyingCFICode_118);
    UnderlyingInstrument_118.insert(UnderlyingCFICode_118.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_118("STRING_314656664");
    noUnderlyings_0_0.set(UnderlyingCPProgram_118);
    UnderlyingInstrument_118.insert(UnderlyingCPProgram_118.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_118("STRING_607416516");
    noUnderlyings_0_0.set(UnderlyingCPRegType_118);
    UnderlyingInstrument_118.insert(UnderlyingCPRegType_118.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_118;
    UnderlyingCapValue_118.setString("5360518");
    noUnderlyings_0_0.set(UnderlyingCapValue_118);
    UnderlyingInstrument_118.insert(UnderlyingCapValue_118.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_118;
    UnderlyingCashAmount_118.setString("12495345");
    noUnderlyings_0_0.set(UnderlyingCashAmount_118);
    UnderlyingInstrument_118.insert(UnderlyingCashAmount_118.getString());
    FIX::UnderlyingCashType UnderlyingCashType_118("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_118);
    UnderlyingInstrument_118.insert(UnderlyingCashType_118.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_118;
    UnderlyingContractMultiplier_118.setString("3695481");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_118);
    UnderlyingInstrument_118.insert(UnderlyingContractMultiplier_118.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_118(342799552);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_118);
    UnderlyingInstrument_118.insert(UnderlyingContractMultiplierUnit_118.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_118("COUNTRY_722507172");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingCountryOfIssue_118.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_118("LOCALMKTDATE_459430884");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_118);
    UnderlyingInstrument_118.insert(UnderlyingCouponPaymentDate_118.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_118;
    UnderlyingCouponRate_118.setString("96.360000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_118);
    UnderlyingInstrument_118.insert(UnderlyingCouponRate_118.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_118("STRING_545691232");
    noUnderlyings_0_0.set(UnderlyingCreditRating_118);
    UnderlyingInstrument_118.insert(UnderlyingCreditRating_118.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_118("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_118);
    UnderlyingInstrument_118.insert(UnderlyingCurrency_118.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_118;
    UnderlyingCurrentValue_118.setString("4506995");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_118);
    UnderlyingInstrument_118.insert(UnderlyingCurrentValue_118.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_118;
    UnderlyingDetachmentPoint_118.setString("10.850000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_118);
    UnderlyingInstrument_118.insert(UnderlyingDetachmentPoint_118.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_118;
    UnderlyingDirtyPrice_118.setString("19594803");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_118);
    UnderlyingInstrument_118.insert(UnderlyingDirtyPrice_118.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_118;
    UnderlyingEndPrice_118.setString("20251606");
    noUnderlyings_0_0.set(UnderlyingEndPrice_118);
    UnderlyingInstrument_118.insert(UnderlyingEndPrice_118.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_118;
    UnderlyingEndValue_118.setString("3149172");
    noUnderlyings_0_0.set(UnderlyingEndValue_118);
    UnderlyingInstrument_118.insert(UnderlyingEndValue_118.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_118(1621568880);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_118);
    UnderlyingInstrument_118.insert(UnderlyingExerciseStyle_118.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_118;
    UnderlyingFXRate_118.setString("13719921");
    noUnderlyings_0_0.set(UnderlyingFXRate_118);
    UnderlyingInstrument_118.insert(UnderlyingFXRate_118.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_118('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_118);
    UnderlyingInstrument_118.insert(UnderlyingFXRateCalc_118.getString());
    FIX::UnderlyingFactor UnderlyingFactor_118;
    UnderlyingFactor_118.setString("2107417");
    noUnderlyings_0_0.set(UnderlyingFactor_118);
    UnderlyingInstrument_118.insert(UnderlyingFactor_118.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_118(682805344);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_118);
    UnderlyingInstrument_118.insert(UnderlyingFlowScheduleType_118.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_118("STRING_1801923190");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_118);
    UnderlyingInstrument_118.insert(UnderlyingInstrRegistry_118.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_118("LOCALMKTDATE_147533164");
    noUnderlyings_0_0.set(UnderlyingIssueDate_118);
    UnderlyingInstrument_118.insert(UnderlyingIssueDate_118.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_118("STRING_581380305");
    noUnderlyings_0_0.set(UnderlyingIssuer_118);
    UnderlyingInstrument_118.insert(UnderlyingIssuer_118.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_118("STRING_1773528168");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingLocaleOfIssue_118.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_118("LOCALMKTDATE_697360200");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityDate_118.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_118("MONTHYEAR_119028306");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityMonthYear_118.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_118("TZTIMEONLY_1257475582");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityTime_118.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_118;
    UnderlyingNotionalPercentageOutstanding_118.setString("74.610000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_118);
    UnderlyingInstrument_118.insert(UnderlyingNotionalPercentageOutstanding_118.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_118('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_118);
    UnderlyingInstrument_118.insert(UnderlyingOptAttribute_118.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_118;
    UnderlyingOriginalNotionalPercentageOutstanding_118.setString("20.980000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_118);
    UnderlyingInstrument_118.insert(UnderlyingOriginalNotionalPercentageOutstanding_118.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_118("STRING_1408029309");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_118);
    UnderlyingInstrument_118.insert(UnderlyingPriceUnitOfMeasure_118.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_118;
    UnderlyingPriceUnitOfMeasureQty_118.setString("16832195");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_118);
    UnderlyingInstrument_118.insert(UnderlyingPriceUnitOfMeasureQty_118.getString());
    FIX::UnderlyingProduct UnderlyingProduct_118(1603066661);
    noUnderlyings_0_0.set(UnderlyingProduct_118);
    UnderlyingInstrument_118.insert(UnderlyingProduct_118.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_118(1777577470);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_118);
    UnderlyingInstrument_118.insert(UnderlyingPutOrCall_118.getString());
    FIX::UnderlyingPx UnderlyingPx_118;
    UnderlyingPx_118.setString("20260190");
    noUnderlyings_0_0.set(UnderlyingPx_118);
    UnderlyingInstrument_118.insert(UnderlyingPx_118.getString());
    FIX::UnderlyingQty UnderlyingQty_118;
    UnderlyingQty_118.setString("1780901");
    noUnderlyings_0_0.set(UnderlyingQty_118);
    UnderlyingInstrument_118.insert(UnderlyingQty_118.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_118("LOCALMKTDATE_89524706");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_118);
    UnderlyingInstrument_118.insert(UnderlyingRedemptionDate_118.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_118("STRING_1236545071");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_118);
    UnderlyingInstrument_118.insert(UnderlyingRepoCollateralSecurityType_118.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_118;
    UnderlyingRepurchaseRate_118.setString("14.180000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_118);
    UnderlyingInstrument_118.insert(UnderlyingRepurchaseRate_118.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_118(551233559);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_118);
    UnderlyingInstrument_118.insert(UnderlyingRepurchaseTerm_118.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_118("STRING_1769459815");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_118);
    UnderlyingInstrument_118.insert(UnderlyingRestructuringType_118.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_118("STRING_1174481007");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityDesc_118.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_118("EXCHANGE_1971884644");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityExchange_118.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_118("STRING_1581456538");
    noUnderlyings_0_0.set(UnderlyingSecurityID_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityID_118.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_118("STRING_1052158005");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityIDSource_118.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_118("STRING_139318208");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_118);
    UnderlyingInstrument_118.insert(UnderlyingSecuritySubType_118.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_118("STRING_1055541770");
    noUnderlyings_0_0.set(UnderlyingSecurityType_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityType_118.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_118("STRING_276666481");
    noUnderlyings_0_0.set(UnderlyingSeniority_118);
    UnderlyingInstrument_118.insert(UnderlyingSeniority_118.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_118("STRING_63640162");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_118);
    UnderlyingInstrument_118.insert(UnderlyingSettlMethod_118.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_118(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_118);
    UnderlyingInstrument_118.insert(UnderlyingSettlementType_118.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_118;
    UnderlyingStartValue_118.setString("9594718");
    noUnderlyings_0_0.set(UnderlyingStartValue_118);
    UnderlyingInstrument_118.insert(UnderlyingStartValue_118.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_118("STRING_1865563352");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingStateOrProvinceOfIssue_118.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_118("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_118);
    UnderlyingInstrument_118.insert(UnderlyingStrikeCurrency_118.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_118;
    UnderlyingStrikePrice_118.setString("14916078");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_118);
    UnderlyingInstrument_118.insert(UnderlyingStrikePrice_118.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_118("STRING_2111176851");
    noUnderlyings_0_0.set(UnderlyingSymbol_118);
    UnderlyingInstrument_118.insert(UnderlyingSymbol_118.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_118("STRING_1659880437");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_118);
    UnderlyingInstrument_118.insert(UnderlyingSymbolSfx_118.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_118("STRING_601599807");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_118);
    UnderlyingInstrument_118.insert(UnderlyingTimeUnit_118.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_118("STRING_835670664");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_118);
    UnderlyingInstrument_118.insert(UnderlyingUnitOfMeasure_118.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_118;
    UnderlyingUnitOfMeasureQty_118.setString("20935654");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_118);
    UnderlyingInstrument_118.insert(UnderlyingUnitOfMeasureQty_118.getString());
    all_values.push_back(UnderlyingInstrument_118);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_234;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_234("STRING_96216326");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_234);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_234.insert(UnderlyingSecurityAltID_234.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_234("STRING_1629301289");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_234);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_234.insert(UnderlyingSecurityAltIDSource_234.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_235;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_235("STRING_1922074918");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_235);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_235.insert(UnderlyingSecurityAltID_235.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_235("STRING_1873793796");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_235);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_235.insert(UnderlyingSecurityAltIDSource_235.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_236;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_236("STRING_1507836724");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_236);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_236.insert(UnderlyingSecurityAltID_236.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_236("STRING_2100165104");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_236);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_236.insert(UnderlyingSecurityAltIDSource_236.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_235;
      FIX::UnderlyingStipType UnderlyingStipType_235("STRING_596898148");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_235);
      UnderlyingStipulations_NoUnderlyingStips_235.insert(UnderlyingStipType_235.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_235("STRING_676462874");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_235);
      UnderlyingStipulations_NoUnderlyingStips_235.insert(UnderlyingStipValue_235.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_235);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_228;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_228("STRING_218874315");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyID_228.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_228('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyIDSource_228.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_228(191469410);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_228);
      UndlyInstrumentParties_NoUndlyInstrumentParties_228.insert(UnderlyingInstrumentPartyRole_228.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_228);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_455("STRING_755618238");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_455);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455.insert(UnderlyingInstrumentPartySubID_455.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_455(330787619);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_455);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455.insert(UnderlyingInstrumentPartySubIDType_455.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_456("STRING_708388976");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_456);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456.insert(UnderlyingInstrumentPartySubID_456.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_456(1032284720);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_456);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456.insert(UnderlyingInstrumentPartySubIDType_456.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_457("STRING_394427781");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_457);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457.insert(UnderlyingInstrumentPartySubID_457.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_457(1974672462);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_457);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457.insert(UnderlyingInstrumentPartySubIDType_457.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_119;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_119("DATA_1991756545");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingIssuer_119.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_119(112507486);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingIssuerLen_119.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_119("DATA_1241005465");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingSecurityDesc_119.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_119(1385125028);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingSecurityDescLen_119.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_119;
    UnderlyingAdjustedQuantity_119.setString("16041153");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_119);
    UnderlyingInstrument_119.insert(UnderlyingAdjustedQuantity_119.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_119;
    UnderlyingAllocationPercent_119.setString("86.680000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_119);
    UnderlyingInstrument_119.insert(UnderlyingAllocationPercent_119.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_119;
    UnderlyingAttachmentPoint_119.setString("18.170000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_119);
    UnderlyingInstrument_119.insert(UnderlyingAttachmentPoint_119.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_119("STRING_58231518");
    noUnderlyings_0_1.set(UnderlyingCFICode_119);
    UnderlyingInstrument_119.insert(UnderlyingCFICode_119.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_119("STRING_2040369332");
    noUnderlyings_0_1.set(UnderlyingCPProgram_119);
    UnderlyingInstrument_119.insert(UnderlyingCPProgram_119.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_119("STRING_843603576");
    noUnderlyings_0_1.set(UnderlyingCPRegType_119);
    UnderlyingInstrument_119.insert(UnderlyingCPRegType_119.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_119;
    UnderlyingCapValue_119.setString("3772397");
    noUnderlyings_0_1.set(UnderlyingCapValue_119);
    UnderlyingInstrument_119.insert(UnderlyingCapValue_119.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_119;
    UnderlyingCashAmount_119.setString("21365856");
    noUnderlyings_0_1.set(UnderlyingCashAmount_119);
    UnderlyingInstrument_119.insert(UnderlyingCashAmount_119.getString());
    FIX::UnderlyingCashType UnderlyingCashType_119("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_119);
    UnderlyingInstrument_119.insert(UnderlyingCashType_119.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_119;
    UnderlyingContractMultiplier_119.setString("1518310");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_119);
    UnderlyingInstrument_119.insert(UnderlyingContractMultiplier_119.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_119(1862895807);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_119);
    UnderlyingInstrument_119.insert(UnderlyingContractMultiplierUnit_119.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_119("COUNTRY_1833257942");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingCountryOfIssue_119.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_119("LOCALMKTDATE_104512501");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_119);
    UnderlyingInstrument_119.insert(UnderlyingCouponPaymentDate_119.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_119;
    UnderlyingCouponRate_119.setString("6.620000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_119);
    UnderlyingInstrument_119.insert(UnderlyingCouponRate_119.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_119("STRING_282672442");
    noUnderlyings_0_1.set(UnderlyingCreditRating_119);
    UnderlyingInstrument_119.insert(UnderlyingCreditRating_119.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_119("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_119);
    UnderlyingInstrument_119.insert(UnderlyingCurrency_119.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_119;
    UnderlyingCurrentValue_119.setString("5015467");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_119);
    UnderlyingInstrument_119.insert(UnderlyingCurrentValue_119.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_119;
    UnderlyingDetachmentPoint_119.setString("56.090000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_119);
    UnderlyingInstrument_119.insert(UnderlyingDetachmentPoint_119.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_119;
    UnderlyingDirtyPrice_119.setString("897848");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_119);
    UnderlyingInstrument_119.insert(UnderlyingDirtyPrice_119.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_119;
    UnderlyingEndPrice_119.setString("1543939");
    noUnderlyings_0_1.set(UnderlyingEndPrice_119);
    UnderlyingInstrument_119.insert(UnderlyingEndPrice_119.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_119;
    UnderlyingEndValue_119.setString("12400538");
    noUnderlyings_0_1.set(UnderlyingEndValue_119);
    UnderlyingInstrument_119.insert(UnderlyingEndValue_119.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_119(420572457);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_119);
    UnderlyingInstrument_119.insert(UnderlyingExerciseStyle_119.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_119;
    UnderlyingFXRate_119.setString("8627829");
    noUnderlyings_0_1.set(UnderlyingFXRate_119);
    UnderlyingInstrument_119.insert(UnderlyingFXRate_119.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_119('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_119);
    UnderlyingInstrument_119.insert(UnderlyingFXRateCalc_119.getString());
    FIX::UnderlyingFactor UnderlyingFactor_119;
    UnderlyingFactor_119.setString("8150002");
    noUnderlyings_0_1.set(UnderlyingFactor_119);
    UnderlyingInstrument_119.insert(UnderlyingFactor_119.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_119(689971755);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_119);
    UnderlyingInstrument_119.insert(UnderlyingFlowScheduleType_119.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_119("STRING_2116611465");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_119);
    UnderlyingInstrument_119.insert(UnderlyingInstrRegistry_119.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_119("LOCALMKTDATE_927507725");
    noUnderlyings_0_1.set(UnderlyingIssueDate_119);
    UnderlyingInstrument_119.insert(UnderlyingIssueDate_119.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_119("STRING_1930977220");
    noUnderlyings_0_1.set(UnderlyingIssuer_119);
    UnderlyingInstrument_119.insert(UnderlyingIssuer_119.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_119("STRING_1354252845");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingLocaleOfIssue_119.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_119("LOCALMKTDATE_384139436");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityDate_119.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_119("MONTHYEAR_988192240");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityMonthYear_119.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_119("TZTIMEONLY_104291015");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityTime_119.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_119;
    UnderlyingNotionalPercentageOutstanding_119.setString("9.540000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_119);
    UnderlyingInstrument_119.insert(UnderlyingNotionalPercentageOutstanding_119.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_119('8');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_119);
    UnderlyingInstrument_119.insert(UnderlyingOptAttribute_119.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_119;
    UnderlyingOriginalNotionalPercentageOutstanding_119.setString("45.910000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_119);
    UnderlyingInstrument_119.insert(UnderlyingOriginalNotionalPercentageOutstanding_119.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_119("STRING_819610729");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_119);
    UnderlyingInstrument_119.insert(UnderlyingPriceUnitOfMeasure_119.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_119;
    UnderlyingPriceUnitOfMeasureQty_119.setString("8701799");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_119);
    UnderlyingInstrument_119.insert(UnderlyingPriceUnitOfMeasureQty_119.getString());
    FIX::UnderlyingProduct UnderlyingProduct_119(1273315809);
    noUnderlyings_0_1.set(UnderlyingProduct_119);
    UnderlyingInstrument_119.insert(UnderlyingProduct_119.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_119(971441774);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_119);
    UnderlyingInstrument_119.insert(UnderlyingPutOrCall_119.getString());
    FIX::UnderlyingPx UnderlyingPx_119;
    UnderlyingPx_119.setString("5855920");
    noUnderlyings_0_1.set(UnderlyingPx_119);
    UnderlyingInstrument_119.insert(UnderlyingPx_119.getString());
    FIX::UnderlyingQty UnderlyingQty_119;
    UnderlyingQty_119.setString("9590901");
    noUnderlyings_0_1.set(UnderlyingQty_119);
    UnderlyingInstrument_119.insert(UnderlyingQty_119.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_119("LOCALMKTDATE_1075954276");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_119);
    UnderlyingInstrument_119.insert(UnderlyingRedemptionDate_119.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_119("STRING_116839108");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_119);
    UnderlyingInstrument_119.insert(UnderlyingRepoCollateralSecurityType_119.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_119;
    UnderlyingRepurchaseRate_119.setString("25.460000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_119);
    UnderlyingInstrument_119.insert(UnderlyingRepurchaseRate_119.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_119(1856929651);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_119);
    UnderlyingInstrument_119.insert(UnderlyingRepurchaseTerm_119.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_119("STRING_15154536");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_119);
    UnderlyingInstrument_119.insert(UnderlyingRestructuringType_119.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_119("STRING_1743309304");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityDesc_119.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_119("EXCHANGE_193881612");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityExchange_119.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_119("STRING_104939374");
    noUnderlyings_0_1.set(UnderlyingSecurityID_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityID_119.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_119("STRING_1897703268");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityIDSource_119.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_119("STRING_1433935460");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_119);
    UnderlyingInstrument_119.insert(UnderlyingSecuritySubType_119.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_119("STRING_525511832");
    noUnderlyings_0_1.set(UnderlyingSecurityType_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityType_119.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_119("STRING_613002561");
    noUnderlyings_0_1.set(UnderlyingSeniority_119);
    UnderlyingInstrument_119.insert(UnderlyingSeniority_119.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_119("STRING_1558790379");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_119);
    UnderlyingInstrument_119.insert(UnderlyingSettlMethod_119.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_119(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_119);
    UnderlyingInstrument_119.insert(UnderlyingSettlementType_119.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_119;
    UnderlyingStartValue_119.setString("13029743");
    noUnderlyings_0_1.set(UnderlyingStartValue_119);
    UnderlyingInstrument_119.insert(UnderlyingStartValue_119.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_119("STRING_1527918196");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingStateOrProvinceOfIssue_119.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_119("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_119);
    UnderlyingInstrument_119.insert(UnderlyingStrikeCurrency_119.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_119;
    UnderlyingStrikePrice_119.setString("7346873");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_119);
    UnderlyingInstrument_119.insert(UnderlyingStrikePrice_119.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_119("STRING_504675584");
    noUnderlyings_0_1.set(UnderlyingSymbol_119);
    UnderlyingInstrument_119.insert(UnderlyingSymbol_119.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_119("STRING_2074660128");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_119);
    UnderlyingInstrument_119.insert(UnderlyingSymbolSfx_119.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_119("STRING_838978409");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_119);
    UnderlyingInstrument_119.insert(UnderlyingTimeUnit_119.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_119("STRING_947046538");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_119);
    UnderlyingInstrument_119.insert(UnderlyingUnitOfMeasure_119.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_119;
    UnderlyingUnitOfMeasureQty_119.setString("8082544");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_119);
    UnderlyingInstrument_119.insert(UnderlyingUnitOfMeasureQty_119.getString());
    all_values.push_back(UnderlyingInstrument_119);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_237;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_237("STRING_1766657267");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_237);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_237.insert(UnderlyingSecurityAltID_237.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_237("STRING_1678434339");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_237);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_237.insert(UnderlyingSecurityAltIDSource_237.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_238;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_238("STRING_912705162");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_238);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_238.insert(UnderlyingSecurityAltID_238.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_238("STRING_590615393");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_238);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_238.insert(UnderlyingSecurityAltIDSource_238.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_236;
      FIX::UnderlyingStipType UnderlyingStipType_236("STRING_1871795266");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_236);
      UnderlyingStipulations_NoUnderlyingStips_236.insert(UnderlyingStipType_236.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_236("STRING_1666569669");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_236);
      UnderlyingStipulations_NoUnderlyingStips_236.insert(UnderlyingStipValue_236.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_236);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_229;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_229("STRING_966074164");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_229);
      UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyID_229.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_229('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_229);
      UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyIDSource_229.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_229(248536429);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_229);
      UndlyInstrumentParties_NoUndlyInstrumentParties_229.insert(UnderlyingInstrumentPartyRole_229.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_229);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_458("STRING_1569897285");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_458);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458.insert(UnderlyingInstrumentPartySubID_458.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_458(353475804);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_458);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458.insert(UnderlyingInstrumentPartySubIDType_458.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_459("STRING_312119441");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_459);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459.insert(UnderlyingInstrumentPartySubID_459.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_459(856349097);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_459);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459.insert(UnderlyingInstrumentPartySubIDType_459.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_230;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_230("STRING_878987636");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_230);
      UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyID_230.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_230('9');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_230);
      UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyIDSource_230.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_230(267655829);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_230);
      UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyRole_230.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_230);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_460("STRING_80612670");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_460);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460.insert(UnderlyingInstrumentPartySubID_460.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_460(1795574025);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_460);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460.insert(UnderlyingInstrumentPartySubIDType_460.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_120;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_120("DATA_192552207");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingIssuer_120.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_120(1167080558);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingIssuerLen_120.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_120("DATA_382777771");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingSecurityDesc_120.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_120(697227791);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingSecurityDescLen_120.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_120;
    UnderlyingAdjustedQuantity_120.setString("10942570");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_120);
    UnderlyingInstrument_120.insert(UnderlyingAdjustedQuantity_120.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_120;
    UnderlyingAllocationPercent_120.setString("61.800000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_120);
    UnderlyingInstrument_120.insert(UnderlyingAllocationPercent_120.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_120;
    UnderlyingAttachmentPoint_120.setString("43.290000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_120);
    UnderlyingInstrument_120.insert(UnderlyingAttachmentPoint_120.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_120("STRING_1902511443");
    noUnderlyings_0_2.set(UnderlyingCFICode_120);
    UnderlyingInstrument_120.insert(UnderlyingCFICode_120.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_120("STRING_861145533");
    noUnderlyings_0_2.set(UnderlyingCPProgram_120);
    UnderlyingInstrument_120.insert(UnderlyingCPProgram_120.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_120("STRING_1263447948");
    noUnderlyings_0_2.set(UnderlyingCPRegType_120);
    UnderlyingInstrument_120.insert(UnderlyingCPRegType_120.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_120;
    UnderlyingCapValue_120.setString("14334621");
    noUnderlyings_0_2.set(UnderlyingCapValue_120);
    UnderlyingInstrument_120.insert(UnderlyingCapValue_120.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_120;
    UnderlyingCashAmount_120.setString("17738506");
    noUnderlyings_0_2.set(UnderlyingCashAmount_120);
    UnderlyingInstrument_120.insert(UnderlyingCashAmount_120.getString());
    FIX::UnderlyingCashType UnderlyingCashType_120("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_120);
    UnderlyingInstrument_120.insert(UnderlyingCashType_120.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_120;
    UnderlyingContractMultiplier_120.setString("15500049");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_120);
    UnderlyingInstrument_120.insert(UnderlyingContractMultiplier_120.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_120(1498162313);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_120);
    UnderlyingInstrument_120.insert(UnderlyingContractMultiplierUnit_120.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_120("COUNTRY_1373149363");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingCountryOfIssue_120.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_120("LOCALMKTDATE_1783386813");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_120);
    UnderlyingInstrument_120.insert(UnderlyingCouponPaymentDate_120.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_120;
    UnderlyingCouponRate_120.setString("28.290000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_120);
    UnderlyingInstrument_120.insert(UnderlyingCouponRate_120.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_120("STRING_601681388");
    noUnderlyings_0_2.set(UnderlyingCreditRating_120);
    UnderlyingInstrument_120.insert(UnderlyingCreditRating_120.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_120("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_120);
    UnderlyingInstrument_120.insert(UnderlyingCurrency_120.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_120;
    UnderlyingCurrentValue_120.setString("240950");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_120);
    UnderlyingInstrument_120.insert(UnderlyingCurrentValue_120.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_120;
    UnderlyingDetachmentPoint_120.setString("53.990000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_120);
    UnderlyingInstrument_120.insert(UnderlyingDetachmentPoint_120.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_120;
    UnderlyingDirtyPrice_120.setString("11907720");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_120);
    UnderlyingInstrument_120.insert(UnderlyingDirtyPrice_120.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_120;
    UnderlyingEndPrice_120.setString("8804441");
    noUnderlyings_0_2.set(UnderlyingEndPrice_120);
    UnderlyingInstrument_120.insert(UnderlyingEndPrice_120.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_120;
    UnderlyingEndValue_120.setString("11169030");
    noUnderlyings_0_2.set(UnderlyingEndValue_120);
    UnderlyingInstrument_120.insert(UnderlyingEndValue_120.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_120(2115894094);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_120);
    UnderlyingInstrument_120.insert(UnderlyingExerciseStyle_120.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_120;
    UnderlyingFXRate_120.setString("11480999");
    noUnderlyings_0_2.set(UnderlyingFXRate_120);
    UnderlyingInstrument_120.insert(UnderlyingFXRate_120.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_120('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_120);
    UnderlyingInstrument_120.insert(UnderlyingFXRateCalc_120.getString());
    FIX::UnderlyingFactor UnderlyingFactor_120;
    UnderlyingFactor_120.setString("490231");
    noUnderlyings_0_2.set(UnderlyingFactor_120);
    UnderlyingInstrument_120.insert(UnderlyingFactor_120.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_120(796190329);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_120);
    UnderlyingInstrument_120.insert(UnderlyingFlowScheduleType_120.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_120("STRING_1381471301");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_120);
    UnderlyingInstrument_120.insert(UnderlyingInstrRegistry_120.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_120("LOCALMKTDATE_1216103675");
    noUnderlyings_0_2.set(UnderlyingIssueDate_120);
    UnderlyingInstrument_120.insert(UnderlyingIssueDate_120.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_120("STRING_1178968101");
    noUnderlyings_0_2.set(UnderlyingIssuer_120);
    UnderlyingInstrument_120.insert(UnderlyingIssuer_120.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_120("STRING_2078699092");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingLocaleOfIssue_120.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_120("LOCALMKTDATE_162877066");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityDate_120.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_120("MONTHYEAR_253240633");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityMonthYear_120.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_120("TZTIMEONLY_1575489773");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityTime_120.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_120;
    UnderlyingNotionalPercentageOutstanding_120.setString("85.090000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_120);
    UnderlyingInstrument_120.insert(UnderlyingNotionalPercentageOutstanding_120.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_120('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_120);
    UnderlyingInstrument_120.insert(UnderlyingOptAttribute_120.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_120;
    UnderlyingOriginalNotionalPercentageOutstanding_120.setString("40.730000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_120);
    UnderlyingInstrument_120.insert(UnderlyingOriginalNotionalPercentageOutstanding_120.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_120("STRING_1351366995");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_120);
    UnderlyingInstrument_120.insert(UnderlyingPriceUnitOfMeasure_120.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_120;
    UnderlyingPriceUnitOfMeasureQty_120.setString("7407532");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_120);
    UnderlyingInstrument_120.insert(UnderlyingPriceUnitOfMeasureQty_120.getString());
    FIX::UnderlyingProduct UnderlyingProduct_120(398033766);
    noUnderlyings_0_2.set(UnderlyingProduct_120);
    UnderlyingInstrument_120.insert(UnderlyingProduct_120.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_120(753888267);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_120);
    UnderlyingInstrument_120.insert(UnderlyingPutOrCall_120.getString());
    FIX::UnderlyingPx UnderlyingPx_120;
    UnderlyingPx_120.setString("914318");
    noUnderlyings_0_2.set(UnderlyingPx_120);
    UnderlyingInstrument_120.insert(UnderlyingPx_120.getString());
    FIX::UnderlyingQty UnderlyingQty_120;
    UnderlyingQty_120.setString("17711831");
    noUnderlyings_0_2.set(UnderlyingQty_120);
    UnderlyingInstrument_120.insert(UnderlyingQty_120.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_120("LOCALMKTDATE_389791433");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_120);
    UnderlyingInstrument_120.insert(UnderlyingRedemptionDate_120.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_120("STRING_408184708");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_120);
    UnderlyingInstrument_120.insert(UnderlyingRepoCollateralSecurityType_120.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_120;
    UnderlyingRepurchaseRate_120.setString("8.690000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_120);
    UnderlyingInstrument_120.insert(UnderlyingRepurchaseRate_120.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_120(274231028);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_120);
    UnderlyingInstrument_120.insert(UnderlyingRepurchaseTerm_120.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_120("STRING_1286837358");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_120);
    UnderlyingInstrument_120.insert(UnderlyingRestructuringType_120.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_120("STRING_249475895");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityDesc_120.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_120("EXCHANGE_512146427");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityExchange_120.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_120("STRING_330125802");
    noUnderlyings_0_2.set(UnderlyingSecurityID_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityID_120.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_120("STRING_1129920018");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityIDSource_120.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_120("STRING_1629049462");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_120);
    UnderlyingInstrument_120.insert(UnderlyingSecuritySubType_120.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_120("STRING_298536249");
    noUnderlyings_0_2.set(UnderlyingSecurityType_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityType_120.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_120("STRING_130536322");
    noUnderlyings_0_2.set(UnderlyingSeniority_120);
    UnderlyingInstrument_120.insert(UnderlyingSeniority_120.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_120("STRING_670484908");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_120);
    UnderlyingInstrument_120.insert(UnderlyingSettlMethod_120.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_120(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_120);
    UnderlyingInstrument_120.insert(UnderlyingSettlementType_120.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_120;
    UnderlyingStartValue_120.setString("9267266");
    noUnderlyings_0_2.set(UnderlyingStartValue_120);
    UnderlyingInstrument_120.insert(UnderlyingStartValue_120.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_120("STRING_2051956209");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingStateOrProvinceOfIssue_120.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_120("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_120);
    UnderlyingInstrument_120.insert(UnderlyingStrikeCurrency_120.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_120;
    UnderlyingStrikePrice_120.setString("19831716");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_120);
    UnderlyingInstrument_120.insert(UnderlyingStrikePrice_120.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_120("STRING_1726540107");
    noUnderlyings_0_2.set(UnderlyingSymbol_120);
    UnderlyingInstrument_120.insert(UnderlyingSymbol_120.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_120("STRING_211451738");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_120);
    UnderlyingInstrument_120.insert(UnderlyingSymbolSfx_120.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_120("STRING_1411177778");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_120);
    UnderlyingInstrument_120.insert(UnderlyingTimeUnit_120.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_120("STRING_1644444968");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_120);
    UnderlyingInstrument_120.insert(UnderlyingUnitOfMeasure_120.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_120;
    UnderlyingUnitOfMeasureQty_120.setString("13258379");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_120);
    UnderlyingInstrument_120.insert(UnderlyingUnitOfMeasureQty_120.getString());
    all_values.push_back(UnderlyingInstrument_120);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_239;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_239("STRING_848328316");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_239);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_239.insert(UnderlyingSecurityAltID_239.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_239("STRING_2066591118");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_239);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_239.insert(UnderlyingSecurityAltIDSource_239.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_240;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_240("STRING_353181969");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_240);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_240.insert(UnderlyingSecurityAltID_240.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_240("STRING_1602216583");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_240);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_240.insert(UnderlyingSecurityAltIDSource_240.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_241;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_241("STRING_10539348");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_241);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_241.insert(UnderlyingSecurityAltID_241.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_241("STRING_2124365099");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_241);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_241.insert(UnderlyingSecurityAltIDSource_241.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_237;
      FIX::UnderlyingStipType UnderlyingStipType_237("STRING_418724056");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_237);
      UnderlyingStipulations_NoUnderlyingStips_237.insert(UnderlyingStipType_237.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_237("STRING_202262320");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_237);
      UnderlyingStipulations_NoUnderlyingStips_237.insert(UnderlyingStipValue_237.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_237);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_231;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_231("STRING_1705561415");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyID_231.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_231('4');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyIDSource_231.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_231(630901823);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyRole_231.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_231);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_461("STRING_1581658233");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_461);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461.insert(UnderlyingInstrumentPartySubID_461.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_461(112467637);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_461);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461.insert(UnderlyingInstrumentPartySubIDType_461.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_462("STRING_186739818");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_462);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462.insert(UnderlyingInstrumentPartySubID_462.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_462(1712194555);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_462);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462.insert(UnderlyingInstrumentPartySubIDType_462.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_463("STRING_782952545");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_463);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463.insert(UnderlyingInstrumentPartySubID_463.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_463(534299184);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_463);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463.insert(UnderlyingInstrumentPartySubIDType_463.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
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
