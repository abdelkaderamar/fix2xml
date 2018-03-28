#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/RequestForPositionsAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositionsAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RequestForPositionsAck msg;

  list<multiset<string>> all_values;
  multiset<string> RequestForPositionsAck_0;
  FIX::Account Account_39("STRING_973183277");
  msg.set(Account_39);
  RequestForPositionsAck_0.insert(Account_39.getString());
  FIX::AccountType AccountType_34(8);
  msg.set(AccountType_34);
  RequestForPositionsAck_0.insert(AccountType_34.getString());
  FIX::AcctIDSource AcctIDSource_32(2);
  msg.set(AcctIDSource_32);
  RequestForPositionsAck_0.insert(AcctIDSource_32.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_19("LOCALMKTDATE_763818781");
  msg.set(ClearingBusinessDate_19);
  RequestForPositionsAck_0.insert(ClearingBusinessDate_19.getString());
  FIX::Currency Currency_58("CHF");
  msg.set(Currency_58);
  RequestForPositionsAck_0.insert(Currency_58.getString());
  FIX::EncodedText EncodedText_74("DATA_1212850657");
  msg.set(EncodedText_74);
  RequestForPositionsAck_0.insert(EncodedText_74.getString());
  FIX::EncodedTextLen EncodedTextLen_74(478399316);
  msg.set(EncodedTextLen_74);
  RequestForPositionsAck_0.insert(EncodedTextLen_74.getString());
  FIX::MatchStatus MatchStatus_11('0');
  msg.set(MatchStatus_11);
  RequestForPositionsAck_0.insert(MatchStatus_11.getString());
  FIX::PosMaintRptID PosMaintRptID_3("STRING_1242974843");
  msg.set(PosMaintRptID_3);
  RequestForPositionsAck_0.insert(PosMaintRptID_3.getString());
  FIX::PosReqID PosReqID_5("STRING_423934715");
  msg.set(PosReqID_5);
  RequestForPositionsAck_0.insert(PosReqID_5.getString());
  FIX::PosReqResult PosReqResult_1(1);
  msg.set(PosReqResult_1);
  RequestForPositionsAck_0.insert(PosReqResult_1.getString());
  FIX::PosReqStatus PosReqStatus_0(0);
  msg.set(PosReqStatus_0);
  RequestForPositionsAck_0.insert(PosReqStatus_0.getString());
  FIX::PosReqType PosReqType_3(6);
  msg.set(PosReqType_3);
  RequestForPositionsAck_0.insert(PosReqType_3.getString());
  FIX::ResponseDestination ResponseDestination_3("STRING_1498079319");
  msg.set(ResponseDestination_3);
  RequestForPositionsAck_0.insert(ResponseDestination_3.getString());
  FIX::ResponseTransportType ResponseTransportType_3(1);
  msg.set(ResponseTransportType_3);
  RequestForPositionsAck_0.insert(ResponseTransportType_3.getString());
  FIX::SettlCurrency SettlCurrency_25("GBP");
  msg.set(SettlCurrency_25);
  RequestForPositionsAck_0.insert(SettlCurrency_25.getString());
  FIX::SettlSessID SettlSessID_11("STRING_ITD");
  msg.set(SettlSessID_11);
  RequestForPositionsAck_0.insert(SettlSessID_11.getString());
  FIX::SettlSessSubID SettlSessSubID_10("STRING_1042922748");
  msg.set(SettlSessSubID_10);
  RequestForPositionsAck_0.insert(SettlSessSubID_10.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_8('1');
  msg.set(SubscriptionRequestType_8);
  RequestForPositionsAck_0.insert(SubscriptionRequestType_8.getString());
  FIX::Text Text_74("STRING_1233883565");
  msg.set(Text_74);
  RequestForPositionsAck_0.insert(Text_74.getString());
  FIX::TotalNumPosReports TotalNumPosReports_1(1259698608);
  msg.set(TotalNumPosReports_1);
  RequestForPositionsAck_0.insert(TotalNumPosReports_1.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_1(false);
  msg.set(UnsolicitedIndicator_1);
  RequestForPositionsAck_0.insert(UnsolicitedIndicator_1.getString());
  all_values.push_back(RequestForPositionsAck_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_123;
    FIX::EncodedLegIssuer EncodedLegIssuer_123("DATA_1995957854");
    noLegs_0_0.set(EncodedLegIssuer_123);
    InstrumentLeg_123.insert(EncodedLegIssuer_123.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_123(712663936);
    noLegs_0_0.set(EncodedLegIssuerLen_123);
    InstrumentLeg_123.insert(EncodedLegIssuerLen_123.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_123("DATA_1678869293");
    noLegs_0_0.set(EncodedLegSecurityDesc_123);
    InstrumentLeg_123.insert(EncodedLegSecurityDesc_123.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_123(1253440248);
    noLegs_0_0.set(EncodedLegSecurityDescLen_123);
    InstrumentLeg_123.insert(EncodedLegSecurityDescLen_123.getString());
    FIX::LegCFICode LegCFICode_123("STRING_134479834");
    noLegs_0_0.set(LegCFICode_123);
    InstrumentLeg_123.insert(LegCFICode_123.getString());
    FIX::LegContractMultiplier LegContractMultiplier_123;
    LegContractMultiplier_123.setString("1627001");
    noLegs_0_0.set(LegContractMultiplier_123);
    InstrumentLeg_123.insert(LegContractMultiplier_123.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_123(79139877);
    noLegs_0_0.set(LegContractMultiplierUnit_123);
    InstrumentLeg_123.insert(LegContractMultiplierUnit_123.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_123("MONTHYEAR_1317200659");
    noLegs_0_0.set(LegContractSettlMonth_123);
    InstrumentLeg_123.insert(LegContractSettlMonth_123.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_123("COUNTRY_1288395806");
    noLegs_0_0.set(LegCountryOfIssue_123);
    InstrumentLeg_123.insert(LegCountryOfIssue_123.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_123("LOCALMKTDATE_842958659");
    noLegs_0_0.set(LegCouponPaymentDate_123);
    InstrumentLeg_123.insert(LegCouponPaymentDate_123.getString());
    FIX::LegCouponRate LegCouponRate_123;
    LegCouponRate_123.setString("11.740000");
    noLegs_0_0.set(LegCouponRate_123);
    InstrumentLeg_123.insert(LegCouponRate_123.getString());
    FIX::LegCreditRating LegCreditRating_123("STRING_1889459460");
    noLegs_0_0.set(LegCreditRating_123);
    InstrumentLeg_123.insert(LegCreditRating_123.getString());
    FIX::LegCurrency LegCurrency_123("JPY");
    noLegs_0_0.set(LegCurrency_123);
    InstrumentLeg_123.insert(LegCurrency_123.getString());
    FIX::LegDatedDate LegDatedDate_123("LOCALMKTDATE_999600322");
    noLegs_0_0.set(LegDatedDate_123);
    InstrumentLeg_123.insert(LegDatedDate_123.getString());
    FIX::LegExerciseStyle LegExerciseStyle_123(1151300511);
    noLegs_0_0.set(LegExerciseStyle_123);
    InstrumentLeg_123.insert(LegExerciseStyle_123.getString());
    FIX::LegFactor LegFactor_123;
    LegFactor_123.setString("17447452");
    noLegs_0_0.set(LegFactor_123);
    InstrumentLeg_123.insert(LegFactor_123.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_123(68749792);
    noLegs_0_0.set(LegFlowScheduleType_123);
    InstrumentLeg_123.insert(LegFlowScheduleType_123.getString());
    FIX::LegInstrRegistry LegInstrRegistry_123("STRING_983176811");
    noLegs_0_0.set(LegInstrRegistry_123);
    InstrumentLeg_123.insert(LegInstrRegistry_123.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_123("LOCALMKTDATE_1252934092");
    noLegs_0_0.set(LegInterestAccrualDate_123);
    InstrumentLeg_123.insert(LegInterestAccrualDate_123.getString());
    FIX::LegIssueDate LegIssueDate_123("LOCALMKTDATE_1566829111");
    noLegs_0_0.set(LegIssueDate_123);
    InstrumentLeg_123.insert(LegIssueDate_123.getString());
    FIX::LegIssuer LegIssuer_123("STRING_936519892");
    noLegs_0_0.set(LegIssuer_123);
    InstrumentLeg_123.insert(LegIssuer_123.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_123("STRING_576186252");
    noLegs_0_0.set(LegLocaleOfIssue_123);
    InstrumentLeg_123.insert(LegLocaleOfIssue_123.getString());
    FIX::LegMaturityDate LegMaturityDate_123("LOCALMKTDATE_2088966736");
    noLegs_0_0.set(LegMaturityDate_123);
    InstrumentLeg_123.insert(LegMaturityDate_123.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_123("MONTHYEAR_481052453");
    noLegs_0_0.set(LegMaturityMonthYear_123);
    InstrumentLeg_123.insert(LegMaturityMonthYear_123.getString());
    FIX::LegMaturityTime LegMaturityTime_123("TZTIMEONLY_1619109001");
    noLegs_0_0.set(LegMaturityTime_123);
    InstrumentLeg_123.insert(LegMaturityTime_123.getString());
    FIX::LegOptAttribute LegOptAttribute_123('1');
    noLegs_0_0.set(LegOptAttribute_123);
    InstrumentLeg_123.insert(LegOptAttribute_123.getString());
    FIX::LegOptionRatio LegOptionRatio_123;
    LegOptionRatio_123.setString("17149360");
    noLegs_0_0.set(LegOptionRatio_123);
    InstrumentLeg_123.insert(LegOptionRatio_123.getString());
    FIX::LegPool LegPool_123("STRING_731323961");
    noLegs_0_0.set(LegPool_123);
    InstrumentLeg_123.insert(LegPool_123.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_123("STRING_1121490321");
    noLegs_0_0.set(LegPriceUnitOfMeasure_123);
    InstrumentLeg_123.insert(LegPriceUnitOfMeasure_123.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_123;
    LegPriceUnitOfMeasureQty_123.setString("14724379");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_123);
    InstrumentLeg_123.insert(LegPriceUnitOfMeasureQty_123.getString());
    FIX::LegProduct LegProduct_123(579798167);
    noLegs_0_0.set(LegProduct_123);
    InstrumentLeg_123.insert(LegProduct_123.getString());
    FIX::LegPutOrCall LegPutOrCall_123(1834154258);
    noLegs_0_0.set(LegPutOrCall_123);
    InstrumentLeg_123.insert(LegPutOrCall_123.getString());
    FIX::LegRatioQty LegRatioQty_123;
    LegRatioQty_123.setString("10038235");
    noLegs_0_0.set(LegRatioQty_123);
    InstrumentLeg_123.insert(LegRatioQty_123.getString());
    FIX::LegRedemptionDate LegRedemptionDate_123("LOCALMKTDATE_1833238415");
    noLegs_0_0.set(LegRedemptionDate_123);
    InstrumentLeg_123.insert(LegRedemptionDate_123.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_123("STRING_1968634092");
    noLegs_0_0.set(LegRepoCollateralSecurityType_123);
    InstrumentLeg_123.insert(LegRepoCollateralSecurityType_123.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_123;
    LegRepurchaseRate_123.setString("37.360000");
    noLegs_0_0.set(LegRepurchaseRate_123);
    InstrumentLeg_123.insert(LegRepurchaseRate_123.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_123(1912378293);
    noLegs_0_0.set(LegRepurchaseTerm_123);
    InstrumentLeg_123.insert(LegRepurchaseTerm_123.getString());
    FIX::LegSecurityDesc LegSecurityDesc_123("STRING_1138351103");
    noLegs_0_0.set(LegSecurityDesc_123);
    InstrumentLeg_123.insert(LegSecurityDesc_123.getString());
    FIX::LegSecurityExchange LegSecurityExchange_123("EXCHANGE_307435894");
    noLegs_0_0.set(LegSecurityExchange_123);
    InstrumentLeg_123.insert(LegSecurityExchange_123.getString());
    FIX::LegSecurityID LegSecurityID_123("STRING_607853304");
    noLegs_0_0.set(LegSecurityID_123);
    InstrumentLeg_123.insert(LegSecurityID_123.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_123("STRING_1980762277");
    noLegs_0_0.set(LegSecurityIDSource_123);
    InstrumentLeg_123.insert(LegSecurityIDSource_123.getString());
    FIX::LegSecuritySubType LegSecuritySubType_123("STRING_49411706");
    noLegs_0_0.set(LegSecuritySubType_123);
    InstrumentLeg_123.insert(LegSecuritySubType_123.getString());
    FIX::LegSecurityType LegSecurityType_123("STRING_516178972");
    noLegs_0_0.set(LegSecurityType_123);
    InstrumentLeg_123.insert(LegSecurityType_123.getString());
    FIX::LegSide LegSide_123('1');
    noLegs_0_0.set(LegSide_123);
    InstrumentLeg_123.insert(LegSide_123.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_123("STRING_1049012029");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_123);
    InstrumentLeg_123.insert(LegStateOrProvinceOfIssue_123.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_123("JPY");
    noLegs_0_0.set(LegStrikeCurrency_123);
    InstrumentLeg_123.insert(LegStrikeCurrency_123.getString());
    FIX::LegStrikePrice LegStrikePrice_123;
    LegStrikePrice_123.setString("11177618");
    noLegs_0_0.set(LegStrikePrice_123);
    InstrumentLeg_123.insert(LegStrikePrice_123.getString());
    FIX::LegSymbol LegSymbol_123("STRING_503172646");
    noLegs_0_0.set(LegSymbol_123);
    InstrumentLeg_123.insert(LegSymbol_123.getString());
    FIX::LegSymbolSfx LegSymbolSfx_123("STRING_2004284768");
    noLegs_0_0.set(LegSymbolSfx_123);
    InstrumentLeg_123.insert(LegSymbolSfx_123.getString());
    FIX::LegTimeUnit LegTimeUnit_123("STRING_537107284");
    noLegs_0_0.set(LegTimeUnit_123);
    InstrumentLeg_123.insert(LegTimeUnit_123.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_123("STRING_1439692539");
    noLegs_0_0.set(LegUnitOfMeasure_123);
    InstrumentLeg_123.insert(LegUnitOfMeasure_123.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_123;
    LegUnitOfMeasureQty_123.setString("4329873");
    noLegs_0_0.set(LegUnitOfMeasureQty_123);
    InstrumentLeg_123.insert(LegUnitOfMeasureQty_123.getString());
    all_values.push_back(InstrumentLeg_123);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_239;
      FIX::LegSecurityAltID LegSecurityAltID_239("STRING_1920744992");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_239);
      LegSecAltIDGrp_NoLegSecurityAltID_239.insert(LegSecurityAltID_239.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_239("STRING_2052096374");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_239);
      LegSecAltIDGrp_NoLegSecurityAltID_239.insert(LegSecurityAltIDSource_239.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_239);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_78;
  FIX::AttachmentPoint AttachmentPoint_78;
  AttachmentPoint_78.setString("61.460000");
  msg.set(AttachmentPoint_78);
  Instrument_78.insert(AttachmentPoint_78.getString());
  FIX::CFICode CFICode_78("STRING_1488197362");
  msg.set(CFICode_78);
  Instrument_78.insert(CFICode_78.getString());
  FIX::CPProgram CPProgram_78(99);
  msg.set(CPProgram_78);
  Instrument_78.insert(CPProgram_78.getString());
  FIX::CPRegType CPRegType_78("STRING_506902820");
  msg.set(CPRegType_78);
  Instrument_78.insert(CPRegType_78.getString());
  FIX::CapPrice CapPrice_78;
  CapPrice_78.setString("8131516");
  msg.set(CapPrice_78);
  Instrument_78.insert(CapPrice_78.getString());
  FIX::ContractMultiplier ContractMultiplier_78;
  ContractMultiplier_78.setString("12157348");
  msg.set(ContractMultiplier_78);
  Instrument_78.insert(ContractMultiplier_78.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_78(2);
  msg.set(ContractMultiplierUnit_78);
  Instrument_78.insert(ContractMultiplierUnit_78.getString());
  FIX::ContractSettlMonth ContractSettlMonth_78("MONTHYEAR_1816975174");
  msg.set(ContractSettlMonth_78);
  Instrument_78.insert(ContractSettlMonth_78.getString());
  FIX::CountryOfIssue CountryOfIssue_78("COUNTRY_901489622");
  msg.set(CountryOfIssue_78);
  Instrument_78.insert(CountryOfIssue_78.getString());
  FIX::CouponPaymentDate CouponPaymentDate_78("LOCALMKTDATE_14723874");
  msg.set(CouponPaymentDate_78);
  Instrument_78.insert(CouponPaymentDate_78.getString());
  FIX::CouponRate CouponRate_78;
  CouponRate_78.setString("52.620000");
  msg.set(CouponRate_78);
  Instrument_78.insert(CouponRate_78.getString());
  FIX::CreditRating CreditRating_78("STRING_666384267");
  msg.set(CreditRating_78);
  Instrument_78.insert(CreditRating_78.getString());
  FIX::DatedDate DatedDate_78("LOCALMKTDATE_1153074977");
  msg.set(DatedDate_78);
  Instrument_78.insert(DatedDate_78.getString());
  FIX::DetachmentPoint DetachmentPoint_78;
  DetachmentPoint_78.setString("11.570000");
  msg.set(DetachmentPoint_78);
  Instrument_78.insert(DetachmentPoint_78.getString());
  FIX::EncodedIssuer EncodedIssuer_78("DATA_1274237571");
  msg.set(EncodedIssuer_78);
  Instrument_78.insert(EncodedIssuer_78.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_78(986353606);
  msg.set(EncodedIssuerLen_78);
  Instrument_78.insert(EncodedIssuerLen_78.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_78("DATA_1192862863");
  msg.set(EncodedSecurityDesc_78);
  Instrument_78.insert(EncodedSecurityDesc_78.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_78(1790416543);
  msg.set(EncodedSecurityDescLen_78);
  Instrument_78.insert(EncodedSecurityDescLen_78.getString());
  FIX::ExerciseStyle ExerciseStyle_78(1);
  msg.set(ExerciseStyle_78);
  Instrument_78.insert(ExerciseStyle_78.getString());
  FIX::Factor Factor_78;
  Factor_78.setString("943912");
  msg.set(Factor_78);
  Instrument_78.insert(Factor_78.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_78(false);
  msg.set(FlexProductEligibilityIndicator_78);
  Instrument_78.insert(FlexProductEligibilityIndicator_78.getString());
  FIX::FlexibleIndicator FlexibleIndicator_78(false);
  msg.set(FlexibleIndicator_78);
  Instrument_78.insert(FlexibleIndicator_78.getString());
  FIX::FloorPrice FloorPrice_78;
  FloorPrice_78.setString("12121530");
  msg.set(FloorPrice_78);
  Instrument_78.insert(FloorPrice_78.getString());
  FIX::FlowScheduleType FlowScheduleType_78(0);
  msg.set(FlowScheduleType_78);
  Instrument_78.insert(FlowScheduleType_78.getString());
  FIX::InstrRegistry InstrRegistry_78("STRING_601110873");
  msg.set(InstrRegistry_78);
  Instrument_78.insert(InstrRegistry_78.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_78('1');
  msg.set(InstrmtAssignmentMethod_78);
  Instrument_78.insert(InstrmtAssignmentMethod_78.getString());
  FIX::InterestAccrualDate InterestAccrualDate_78("LOCALMKTDATE_1105793916");
  msg.set(InterestAccrualDate_78);
  Instrument_78.insert(InterestAccrualDate_78.getString());
  FIX::IssueDate IssueDate_78("LOCALMKTDATE_1034098246");
  msg.set(IssueDate_78);
  Instrument_78.insert(IssueDate_78.getString());
  FIX::Issuer Issuer_78("STRING_80367074");
  msg.set(Issuer_78);
  Instrument_78.insert(Issuer_78.getString());
  FIX::ListMethod ListMethod_78(0);
  msg.set(ListMethod_78);
  Instrument_78.insert(ListMethod_78.getString());
  FIX::LocaleOfIssue LocaleOfIssue_78("STRING_938710972");
  msg.set(LocaleOfIssue_78);
  Instrument_78.insert(LocaleOfIssue_78.getString());
  FIX::MaturityDate MaturityDate_78("LOCALMKTDATE_1613263221");
  msg.set(MaturityDate_78);
  Instrument_78.insert(MaturityDate_78.getString());
  FIX::MaturityMonthYear MaturityMonthYear_78("MONTHYEAR_219768974");
  msg.set(MaturityMonthYear_78);
  Instrument_78.insert(MaturityMonthYear_78.getString());
  FIX::MaturityTime MaturityTime_78("TZTIMEONLY_1574647660");
  msg.set(MaturityTime_78);
  Instrument_78.insert(MaturityTime_78.getString());
  FIX::MinPriceIncrement MinPriceIncrement_78;
  MinPriceIncrement_78.setString("21201660");
  msg.set(MinPriceIncrement_78);
  Instrument_78.insert(MinPriceIncrement_78.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_78;
  MinPriceIncrementAmount_78.setString("10329205");
  msg.set(MinPriceIncrementAmount_78);
  Instrument_78.insert(MinPriceIncrementAmount_78.getString());
  FIX::NTPositionLimit NTPositionLimit_78(642898867);
  msg.set(NTPositionLimit_78);
  Instrument_78.insert(NTPositionLimit_78.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_78;
  NotionalPercentageOutstanding_78.setString("58.230000");
  msg.set(NotionalPercentageOutstanding_78);
  Instrument_78.insert(NotionalPercentageOutstanding_78.getString());
  FIX::OptAttribute OptAttribute_78('7');
  msg.set(OptAttribute_78);
  Instrument_78.insert(OptAttribute_78.getString());
  FIX::OptPayoutAmount OptPayoutAmount_78;
  OptPayoutAmount_78.setString("15443884");
  msg.set(OptPayoutAmount_78);
  Instrument_78.insert(OptPayoutAmount_78.getString());
  FIX::OptPayoutType OptPayoutType_78(3);
  msg.set(OptPayoutType_78);
  Instrument_78.insert(OptPayoutType_78.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_78;
  OriginalNotionalPercentageOutstanding_78.setString("73.850000");
  msg.set(OriginalNotionalPercentageOutstanding_78);
  Instrument_78.insert(OriginalNotionalPercentageOutstanding_78.getString());
  FIX::Pool Pool_78("STRING_63289109");
  msg.set(Pool_78);
  Instrument_78.insert(Pool_78.getString());
  FIX::PositionLimit PositionLimit_78(1334054674);
  msg.set(PositionLimit_78);
  Instrument_78.insert(PositionLimit_78.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_78("STRING_INT");
  msg.set(PriceQuoteMethod_78);
  Instrument_78.insert(PriceQuoteMethod_78.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_78("STRING_1337526680");
  msg.set(PriceUnitOfMeasure_78);
  Instrument_78.insert(PriceUnitOfMeasure_78.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_78;
  PriceUnitOfMeasureQty_78.setString("1729246");
  msg.set(PriceUnitOfMeasureQty_78);
  Instrument_78.insert(PriceUnitOfMeasureQty_78.getString());
  FIX::Product Product_80(5);
  msg.set(Product_80);
  Instrument_78.insert(Product_80.getString());
  FIX::ProductComplex ProductComplex_78("STRING_980459576");
  msg.set(ProductComplex_78);
  Instrument_78.insert(ProductComplex_78.getString());
  FIX::PutOrCall PutOrCall_78(1);
  msg.set(PutOrCall_78);
  Instrument_78.insert(PutOrCall_78.getString());
  FIX::RedemptionDate RedemptionDate_78("LOCALMKTDATE_1821649002");
  msg.set(RedemptionDate_78);
  Instrument_78.insert(RedemptionDate_78.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_78("STRING_143388307");
  msg.set(RepoCollateralSecurityType_78);
  Instrument_78.insert(RepoCollateralSecurityType_78.getString());
  FIX::RepurchaseRate RepurchaseRate_78;
  RepurchaseRate_78.setString("34.620000");
  msg.set(RepurchaseRate_78);
  Instrument_78.insert(RepurchaseRate_78.getString());
  FIX::RepurchaseTerm RepurchaseTerm_78(886318419);
  msg.set(RepurchaseTerm_78);
  Instrument_78.insert(RepurchaseTerm_78.getString());
  FIX::RestructuringType RestructuringType_78("STRING_FR");
  msg.set(RestructuringType_78);
  Instrument_78.insert(RestructuringType_78.getString());
  FIX::SecurityDesc SecurityDesc_78("STRING_1511304335");
  msg.set(SecurityDesc_78);
  Instrument_78.insert(SecurityDesc_78.getString());
  FIX::SecurityExchange SecurityExchange_78("EXCHANGE_488095121");
  msg.set(SecurityExchange_78);
  Instrument_78.insert(SecurityExchange_78.getString());
  FIX::SecurityGroup SecurityGroup_78("STRING_915283601");
  msg.set(SecurityGroup_78);
  Instrument_78.insert(SecurityGroup_78.getString());
  FIX::SecurityID SecurityID_78("STRING_397918934");
  msg.set(SecurityID_78);
  Instrument_78.insert(SecurityID_78.getString());
  FIX::SecurityIDSource SecurityIDSource_78("STRING_H");
  msg.set(SecurityIDSource_78);
  Instrument_78.insert(SecurityIDSource_78.getString());
  FIX::SecurityStatus SecurityStatus_78("STRING_2");
  msg.set(SecurityStatus_78);
  Instrument_78.insert(SecurityStatus_78.getString());
  FIX::SecuritySubType SecuritySubType_79("STRING_1336629906");
  msg.set(SecuritySubType_79);
  Instrument_78.insert(SecuritySubType_79.getString());
  FIX::SecurityType SecurityType_80("STRING_RETIRED");
  msg.set(SecurityType_80);
  Instrument_78.insert(SecurityType_80.getString());
  FIX::Seniority Seniority_78("STRING_SB");
  msg.set(Seniority_78);
  Instrument_78.insert(Seniority_78.getString());
  FIX::SettlMethod SettlMethod_78('C');
  msg.set(SettlMethod_78);
  Instrument_78.insert(SettlMethod_78.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_78("STRING_6924162");
  msg.set(SettleOnOpenFlag_78);
  Instrument_78.insert(SettleOnOpenFlag_78.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_78("STRING_899544784");
  msg.set(StateOrProvinceOfIssue_78);
  Instrument_78.insert(StateOrProvinceOfIssue_78.getString());
  FIX::StrikeCurrency StrikeCurrency_78("CAN");
  msg.set(StrikeCurrency_78);
  Instrument_78.insert(StrikeCurrency_78.getString());
  FIX::StrikeMultiplier StrikeMultiplier_78;
  StrikeMultiplier_78.setString("16019569");
  msg.set(StrikeMultiplier_78);
  Instrument_78.insert(StrikeMultiplier_78.getString());
  FIX::StrikePrice StrikePrice_78;
  StrikePrice_78.setString("8035976");
  msg.set(StrikePrice_78);
  Instrument_78.insert(StrikePrice_78.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_78(3);
  msg.set(StrikePriceBoundaryMethod_78);
  Instrument_78.insert(StrikePriceBoundaryMethod_78.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_78;
  StrikePriceBoundaryPrecision_78.setString("6.430000");
  msg.set(StrikePriceBoundaryPrecision_78);
  Instrument_78.insert(StrikePriceBoundaryPrecision_78.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_78(1);
  msg.set(StrikePriceDeterminationMethod_78);
  Instrument_78.insert(StrikePriceDeterminationMethod_78.getString());
  FIX::StrikeValue StrikeValue_78;
  StrikeValue_78.setString("16882143");
  msg.set(StrikeValue_78);
  Instrument_78.insert(StrikeValue_78.getString());
  FIX::Symbol Symbol_78("STRING_1527295537");
  msg.set(Symbol_78);
  Instrument_78.insert(Symbol_78.getString());
  FIX::SymbolSfx SymbolSfx_78("STRING_CD");
  msg.set(SymbolSfx_78);
  Instrument_78.insert(SymbolSfx_78.getString());
  FIX::TimeUnit TimeUnit_78("STRING_S");
  msg.set(TimeUnit_78);
  Instrument_78.insert(TimeUnit_78.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_78(4);
  msg.set(UnderlyingPriceDeterminationMethod_78);
  Instrument_78.insert(UnderlyingPriceDeterminationMethod_78.getString());
  FIX::UnitOfMeasure UnitOfMeasure_78("STRING_Bbl");
  msg.set(UnitOfMeasure_78);
  Instrument_78.insert(UnitOfMeasure_78.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_78;
  UnitOfMeasureQty_78.setString("20270226");
  msg.set(UnitOfMeasureQty_78);
  Instrument_78.insert(UnitOfMeasureQty_78.getString());
  FIX::ValuationMethod ValuationMethod_78("STRING_FUT");
  msg.set(ValuationMethod_78);
  Instrument_78.insert(ValuationMethod_78.getString());
  all_values.push_back(Instrument_78);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_149;
    FIX::ComplexEventCondition ComplexEventCondition_149(2);
    noComplexEvents_0_0.set(ComplexEventCondition_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventCondition_149.getString());
    FIX::ComplexEventPrice ComplexEventPrice_149;
    ComplexEventPrice_149.setString("16675534");
    noComplexEvents_0_0.set(ComplexEventPrice_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventPrice_149.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_149(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryMethod_149.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_149;
    ComplexEventPriceBoundaryPrecision_149.setString("31.980000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryPrecision_149.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_149(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceTimeType_149.getString());
    FIX::ComplexEventType ComplexEventType_149(9);
    noComplexEvents_0_0.set(ComplexEventType_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexEventType_149.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_149;
    ComplexOptPayoutAmount_149.setString("5514721");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_149);
    ComplexEvents_NoComplexEvents_149.insert(ComplexOptPayoutAmount_149.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_149);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_303;
      FIX::ComplexEventEndDate ComplexEventEndDate_303(FIX::UTCTIMESTAMP(7, 39, 38, 9, 10, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_303);
      ComplexEventDates_NoComplexEventDates_303.insert(ComplexEventEndDate_303.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_303(FIX::UTCTIMESTAMP(14, 21, 14, 0, 5, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_303);
      ComplexEventDates_NoComplexEventDates_303.insert(ComplexEventStartDate_303.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_303);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_611;
        FIX::ComplexEventEndTime ComplexEventEndTime_611(FIX::UTCTIMEONLY(10, 36, 33));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_611);
        ComplexEventTimes_NoComplexEventTimes_611.insert(ComplexEventEndTime_611.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_611(FIX::UTCTIMEONLY(17, 54, 46));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_611);
        ComplexEventTimes_NoComplexEventTimes_611.insert(ComplexEventStartTime_611.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_611);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_150;
    FIX::ComplexEventCondition ComplexEventCondition_150(1);
    noComplexEvents_0_1.set(ComplexEventCondition_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventCondition_150.getString());
    FIX::ComplexEventPrice ComplexEventPrice_150;
    ComplexEventPrice_150.setString("14066516");
    noComplexEvents_0_1.set(ComplexEventPrice_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPrice_150.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_150(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryMethod_150.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_150;
    ComplexEventPriceBoundaryPrecision_150.setString("34.940000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryPrecision_150.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_150(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceTimeType_150.getString());
    FIX::ComplexEventType ComplexEventType_150(6);
    noComplexEvents_0_1.set(ComplexEventType_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventType_150.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_150;
    ComplexOptPayoutAmount_150.setString("17738156");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexOptPayoutAmount_150.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_150);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_304;
      FIX::ComplexEventEndDate ComplexEventEndDate_304(FIX::UTCTIMESTAMP(10, 21, 44, 15, 7, 2001));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_304);
      ComplexEventDates_NoComplexEventDates_304.insert(ComplexEventEndDate_304.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_304(FIX::UTCTIMESTAMP(20, 32, 20, 12, 1, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_304);
      ComplexEventDates_NoComplexEventDates_304.insert(ComplexEventStartDate_304.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_304);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_612;
        FIX::ComplexEventEndTime ComplexEventEndTime_612(FIX::UTCTIMEONLY(5, 0, 59));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_612);
        ComplexEventTimes_NoComplexEventTimes_612.insert(ComplexEventEndTime_612.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_612(FIX::UTCTIMEONLY(9, 45, 34));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_612);
        ComplexEventTimes_NoComplexEventTimes_612.insert(ComplexEventStartTime_612.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_612);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_305;
      FIX::ComplexEventEndDate ComplexEventEndDate_305(FIX::UTCTIMESTAMP(20, 49, 0, 24, 1, 2011));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_305);
      ComplexEventDates_NoComplexEventDates_305.insert(ComplexEventEndDate_305.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_305(FIX::UTCTIMESTAMP(18, 37, 48, 23, 5, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_305);
      ComplexEventDates_NoComplexEventDates_305.insert(ComplexEventStartDate_305.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_305);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_613;
        FIX::ComplexEventEndTime ComplexEventEndTime_613(FIX::UTCTIMEONLY(19, 46, 43));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_613);
        ComplexEventTimes_NoComplexEventTimes_613.insert(ComplexEventEndTime_613.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_613(FIX::UTCTIMEONLY(14, 26, 36));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_613);
        ComplexEventTimes_NoComplexEventTimes_613.insert(ComplexEventStartTime_613.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_613);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_614;
        FIX::ComplexEventEndTime ComplexEventEndTime_614(FIX::UTCTIMEONLY(19, 29, 52));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_614);
        ComplexEventTimes_NoComplexEventTimes_614.insert(ComplexEventEndTime_614.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_614(FIX::UTCTIMEONLY(2, 38, 29));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_614);
        ComplexEventTimes_NoComplexEventTimes_614.insert(ComplexEventStartTime_614.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_614);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_615;
        FIX::ComplexEventEndTime ComplexEventEndTime_615(FIX::UTCTIMEONLY(14, 10, 52));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_615);
        ComplexEventTimes_NoComplexEventTimes_615.insert(ComplexEventEndTime_615.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_615(FIX::UTCTIMEONLY(11, 31, 13));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_615);
        ComplexEventTimes_NoComplexEventTimes_615.insert(ComplexEventStartTime_615.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_615);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_306;
      FIX::ComplexEventEndDate ComplexEventEndDate_306(FIX::UTCTIMESTAMP(12, 54, 28, 0, 6, 2006));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_306);
      ComplexEventDates_NoComplexEventDates_306.insert(ComplexEventEndDate_306.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_306(FIX::UTCTIMESTAMP(16, 20, 15, 20, 12, 2005));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_306);
      ComplexEventDates_NoComplexEventDates_306.insert(ComplexEventStartDate_306.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_306);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_616;
        FIX::ComplexEventEndTime ComplexEventEndTime_616(FIX::UTCTIMEONLY(16, 42, 24));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_616);
        ComplexEventTimes_NoComplexEventTimes_616.insert(ComplexEventEndTime_616.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_616(FIX::UTCTIMEONLY(12, 2, 56));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_616);
        ComplexEventTimes_NoComplexEventTimes_616.insert(ComplexEventStartTime_616.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_616);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_157;
    FIX::EventDate EventDate_157("LOCALMKTDATE_1064759224");
    noEvents_0_0.set(EventDate_157);
    EvntGrp_NoEvents_157.insert(EventDate_157.getString());
    FIX::EventPx EventPx_157;
    EventPx_157.setString("19544195");
    noEvents_0_0.set(EventPx_157);
    EvntGrp_NoEvents_157.insert(EventPx_157.getString());
    FIX::EventText EventText_157("STRING_250859316");
    noEvents_0_0.set(EventText_157);
    EvntGrp_NoEvents_157.insert(EventText_157.getString());
    FIX::EventTime EventTime_157(FIX::UTCTIMESTAMP(22, 7, 56, 3, 8, 2008));
    noEvents_0_0.set(EventTime_157);
    EvntGrp_NoEvents_157.insert(EventTime_157.getString());
    FIX::EventType EventType_157(17);
    noEvents_0_0.set(EventType_157);
    EvntGrp_NoEvents_157.insert(EventType_157.getString());
    all_values.push_back(EvntGrp_NoEvents_157);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_158;
    FIX::EventDate EventDate_158("LOCALMKTDATE_966039136");
    noEvents_0_1.set(EventDate_158);
    EvntGrp_NoEvents_158.insert(EventDate_158.getString());
    FIX::EventPx EventPx_158;
    EventPx_158.setString("17113806");
    noEvents_0_1.set(EventPx_158);
    EvntGrp_NoEvents_158.insert(EventPx_158.getString());
    FIX::EventText EventText_158("STRING_1958848138");
    noEvents_0_1.set(EventText_158);
    EvntGrp_NoEvents_158.insert(EventText_158.getString());
    FIX::EventTime EventTime_158(FIX::UTCTIMESTAMP(0, 11, 54, 8, 3, 2003));
    noEvents_0_1.set(EventTime_158);
    EvntGrp_NoEvents_158.insert(EventTime_158.getString());
    FIX::EventType EventType_158(14);
    noEvents_0_1.set(EventType_158);
    EvntGrp_NoEvents_158.insert(EventType_158.getString());
    all_values.push_back(EvntGrp_NoEvents_158);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_160;
    FIX::InstrumentPartyID InstrumentPartyID_160("STRING_1343847127");
    noInstrumentParties_0_0.set(InstrumentPartyID_160);
    InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyID_160.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_160('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_160);
    InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyIDSource_160.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_160(590953486);
    noInstrumentParties_0_0.set(InstrumentPartyRole_160);
    InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyRole_160.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_160);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337;
      FIX::InstrumentPartySubID InstrumentPartySubID_337("STRING_1260377976");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_337);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337.insert(InstrumentPartySubID_337.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_337(1648960249);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_337);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337.insert(InstrumentPartySubIDType_337.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338;
      FIX::InstrumentPartySubID InstrumentPartySubID_338("STRING_456463463");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_338);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338.insert(InstrumentPartySubID_338.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_338(293279960);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_338);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338.insert(InstrumentPartySubIDType_338.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_161;
    FIX::InstrumentPartyID InstrumentPartyID_161("STRING_566235825");
    noInstrumentParties_0_1.set(InstrumentPartyID_161);
    InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyID_161.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_161('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_161);
    InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyIDSource_161.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_161(544139277);
    noInstrumentParties_0_1.set(InstrumentPartyRole_161);
    InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyRole_161.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_161);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339;
      FIX::InstrumentPartySubID InstrumentPartySubID_339("STRING_1972710464");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_339);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339.insert(InstrumentPartySubID_339.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_339(1861138264);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_339);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339.insert(InstrumentPartySubIDType_339.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340;
      FIX::InstrumentPartySubID InstrumentPartySubID_340("STRING_1348475365");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_340);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340.insert(InstrumentPartySubID_340.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_340(51548243);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_340);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340.insert(InstrumentPartySubIDType_340.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_174;
    FIX::SecurityAltID SecurityAltID_174("STRING_602956447");
    noSecurityAltID_0_0.set(SecurityAltID_174);
    SecAltIDGrp_NoSecurityAltID_174.insert(SecurityAltID_174.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_174("STRING_691005159");
    noSecurityAltID_0_0.set(SecurityAltIDSource_174);
    SecAltIDGrp_NoSecurityAltID_174.insert(SecurityAltIDSource_174.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_174);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_175;
    FIX::SecurityAltID SecurityAltID_175("STRING_130481472");
    noSecurityAltID_0_1.set(SecurityAltID_175);
    SecAltIDGrp_NoSecurityAltID_175.insert(SecurityAltID_175.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_175("STRING_166853407");
    noSecurityAltID_0_1.set(SecurityAltIDSource_175);
    SecAltIDGrp_NoSecurityAltID_175.insert(SecurityAltIDSource_175.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_175);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_156;
  FIX::SecurityXML SecurityXML_157("XMLDATA_502369650");
  msg.set(SecurityXML_157);
  FIX::SecurityXMLLen SecurityXMLLen_78(1333251539);
  msg.set(SecurityXMLLen_78);
  FIX::SecurityXMLSchema SecurityXMLSchema_78("STRING_1898556055");
  msg.set(SecurityXMLSchema_78);
  SecurityXML_156.insert(SecurityXMLSchema_78.getString());
  all_values.push_back(SecurityXML_156);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_123;
    FIX::PartyID PartyID_123("STRING_1696435254");
    noPartyIDs_0_0.set(PartyID_123);
    Parties_NoPartyIDs_123.insert(PartyID_123.getString());
    FIX::PartyIDSource PartyIDSource_123('5');
    noPartyIDs_0_0.set(PartyIDSource_123);
    Parties_NoPartyIDs_123.insert(PartyIDSource_123.getString());
    FIX::PartyRole PartyRole_123(57);
    noPartyIDs_0_0.set(PartyRole_123);
    Parties_NoPartyIDs_123.insert(PartyRole_123.getString());
    all_values.push_back(Parties_NoPartyIDs_123);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_252;
      FIX::PartySubID PartySubID_252("STRING_668700673");
      noPartySubIDs_0_1_0.set(PartySubID_252);
      PtysSubGrp_NoPartySubIDs_252.insert(PartySubID_252.getString());
      FIX::PartySubIDType PartySubIDType_252(33);
      noPartySubIDs_0_1_0.set(PartySubIDType_252);
      PtysSubGrp_NoPartySubIDs_252.insert(PartySubIDType_252.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_252);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_124;
    FIX::PartyID PartyID_124("STRING_976387821");
    noPartyIDs_0_1.set(PartyID_124);
    Parties_NoPartyIDs_124.insert(PartyID_124.getString());
    FIX::PartyIDSource PartyIDSource_124('C');
    noPartyIDs_0_1.set(PartyIDSource_124);
    Parties_NoPartyIDs_124.insert(PartyIDSource_124.getString());
    FIX::PartyRole PartyRole_124(57);
    noPartyIDs_0_1.set(PartyRole_124);
    Parties_NoPartyIDs_124.insert(PartyRole_124.getString());
    all_values.push_back(Parties_NoPartyIDs_124);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_253;
      FIX::PartySubID PartySubID_253("STRING_857694316");
      noPartySubIDs_1_1_0.set(PartySubID_253);
      PtysSubGrp_NoPartySubIDs_253.insert(PartySubID_253.getString());
      FIX::PartySubIDType PartySubIDType_253(24);
      noPartySubIDs_1_1_0.set(PartySubIDType_253);
      PtysSubGrp_NoPartySubIDs_253.insert(PartySubIDType_253.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_253);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_254;
      FIX::PartySubID PartySubID_254("STRING_495160390");
      noPartySubIDs_1_1_1.set(PartySubID_254);
      PtysSubGrp_NoPartySubIDs_254.insert(PartySubID_254.getString());
      FIX::PartySubIDType PartySubIDType_254(14);
      noPartySubIDs_1_1_1.set(PartySubIDType_254);
      PtysSubGrp_NoPartySubIDs_254.insert(PartySubIDType_254.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_254);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_255;
      FIX::PartySubID PartySubID_255("STRING_200067418");
      noPartySubIDs_1_1_2.set(PartySubID_255);
      PtysSubGrp_NoPartySubIDs_255.insert(PartySubID_255.getString());
      FIX::PartySubIDType PartySubIDType_255(6);
      noPartySubIDs_1_1_2.set(PartySubIDType_255);
      PtysSubGrp_NoPartySubIDs_255.insert(PartySubIDType_255.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_255);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_125;
    FIX::PartyID PartyID_125("STRING_1695113554");
    noPartyIDs_0_2.set(PartyID_125);
    Parties_NoPartyIDs_125.insert(PartyID_125.getString());
    FIX::PartyIDSource PartyIDSource_125('8');
    noPartyIDs_0_2.set(PartyIDSource_125);
    Parties_NoPartyIDs_125.insert(PartyIDSource_125.getString());
    FIX::PartyRole PartyRole_125(9);
    noPartyIDs_0_2.set(PartyRole_125);
    Parties_NoPartyIDs_125.insert(PartyRole_125.getString());
    all_values.push_back(Parties_NoPartyIDs_125);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_256;
      FIX::PartySubID PartySubID_256("STRING_1809674391");
      noPartySubIDs_2_1_0.set(PartySubID_256);
      PtysSubGrp_NoPartySubIDs_256.insert(PartySubID_256.getString());
      FIX::PartySubIDType PartySubIDType_256(3);
      noPartySubIDs_2_1_0.set(PartySubIDType_256);
      PtysSubGrp_NoPartySubIDs_256.insert(PartySubIDType_256.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_256);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_115;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_115("DATA_265147191");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_115);
    UnderlyingInstrument_115.insert(EncodedUnderlyingIssuer_115.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_115(1326339971);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_115);
    UnderlyingInstrument_115.insert(EncodedUnderlyingIssuerLen_115.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_115("DATA_703691978");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_115);
    UnderlyingInstrument_115.insert(EncodedUnderlyingSecurityDesc_115.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_115(432000598);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_115);
    UnderlyingInstrument_115.insert(EncodedUnderlyingSecurityDescLen_115.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_115;
    UnderlyingAdjustedQuantity_115.setString("18287096");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_115);
    UnderlyingInstrument_115.insert(UnderlyingAdjustedQuantity_115.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_115;
    UnderlyingAllocationPercent_115.setString("35.180000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_115);
    UnderlyingInstrument_115.insert(UnderlyingAllocationPercent_115.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_115;
    UnderlyingAttachmentPoint_115.setString("30.050000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_115);
    UnderlyingInstrument_115.insert(UnderlyingAttachmentPoint_115.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_115("STRING_856302374");
    noUnderlyings_0_0.set(UnderlyingCFICode_115);
    UnderlyingInstrument_115.insert(UnderlyingCFICode_115.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_115("STRING_1585895124");
    noUnderlyings_0_0.set(UnderlyingCPProgram_115);
    UnderlyingInstrument_115.insert(UnderlyingCPProgram_115.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_115("STRING_110836564");
    noUnderlyings_0_0.set(UnderlyingCPRegType_115);
    UnderlyingInstrument_115.insert(UnderlyingCPRegType_115.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_115;
    UnderlyingCapValue_115.setString("2140558");
    noUnderlyings_0_0.set(UnderlyingCapValue_115);
    UnderlyingInstrument_115.insert(UnderlyingCapValue_115.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_115;
    UnderlyingCashAmount_115.setString("12184358");
    noUnderlyings_0_0.set(UnderlyingCashAmount_115);
    UnderlyingInstrument_115.insert(UnderlyingCashAmount_115.getString());
    FIX::UnderlyingCashType UnderlyingCashType_115("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_115);
    UnderlyingInstrument_115.insert(UnderlyingCashType_115.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_115;
    UnderlyingContractMultiplier_115.setString("19029410");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_115);
    UnderlyingInstrument_115.insert(UnderlyingContractMultiplier_115.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_115(47339990);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_115);
    UnderlyingInstrument_115.insert(UnderlyingContractMultiplierUnit_115.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_115("COUNTRY_376853578");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_115);
    UnderlyingInstrument_115.insert(UnderlyingCountryOfIssue_115.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_115("LOCALMKTDATE_2035296002");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_115);
    UnderlyingInstrument_115.insert(UnderlyingCouponPaymentDate_115.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_115;
    UnderlyingCouponRate_115.setString("69.180000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_115);
    UnderlyingInstrument_115.insert(UnderlyingCouponRate_115.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_115("STRING_1234547894");
    noUnderlyings_0_0.set(UnderlyingCreditRating_115);
    UnderlyingInstrument_115.insert(UnderlyingCreditRating_115.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_115("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_115);
    UnderlyingInstrument_115.insert(UnderlyingCurrency_115.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_115;
    UnderlyingCurrentValue_115.setString("2380385");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_115);
    UnderlyingInstrument_115.insert(UnderlyingCurrentValue_115.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_115;
    UnderlyingDetachmentPoint_115.setString("50.120000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_115);
    UnderlyingInstrument_115.insert(UnderlyingDetachmentPoint_115.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_115;
    UnderlyingDirtyPrice_115.setString("13397570");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_115);
    UnderlyingInstrument_115.insert(UnderlyingDirtyPrice_115.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_115;
    UnderlyingEndPrice_115.setString("19331520");
    noUnderlyings_0_0.set(UnderlyingEndPrice_115);
    UnderlyingInstrument_115.insert(UnderlyingEndPrice_115.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_115;
    UnderlyingEndValue_115.setString("1829103");
    noUnderlyings_0_0.set(UnderlyingEndValue_115);
    UnderlyingInstrument_115.insert(UnderlyingEndValue_115.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_115(1923543629);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_115);
    UnderlyingInstrument_115.insert(UnderlyingExerciseStyle_115.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_115;
    UnderlyingFXRate_115.setString("11944366");
    noUnderlyings_0_0.set(UnderlyingFXRate_115);
    UnderlyingInstrument_115.insert(UnderlyingFXRate_115.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_115('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_115);
    UnderlyingInstrument_115.insert(UnderlyingFXRateCalc_115.getString());
    FIX::UnderlyingFactor UnderlyingFactor_115;
    UnderlyingFactor_115.setString("4113947");
    noUnderlyings_0_0.set(UnderlyingFactor_115);
    UnderlyingInstrument_115.insert(UnderlyingFactor_115.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_115(1767647106);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_115);
    UnderlyingInstrument_115.insert(UnderlyingFlowScheduleType_115.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_115("STRING_110248325");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_115);
    UnderlyingInstrument_115.insert(UnderlyingInstrRegistry_115.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_115("LOCALMKTDATE_1737734765");
    noUnderlyings_0_0.set(UnderlyingIssueDate_115);
    UnderlyingInstrument_115.insert(UnderlyingIssueDate_115.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_115("STRING_323855437");
    noUnderlyings_0_0.set(UnderlyingIssuer_115);
    UnderlyingInstrument_115.insert(UnderlyingIssuer_115.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_115("STRING_542248923");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_115);
    UnderlyingInstrument_115.insert(UnderlyingLocaleOfIssue_115.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_115("LOCALMKTDATE_1418960738");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_115);
    UnderlyingInstrument_115.insert(UnderlyingMaturityDate_115.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_115("MONTHYEAR_213315307");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_115);
    UnderlyingInstrument_115.insert(UnderlyingMaturityMonthYear_115.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_115("TZTIMEONLY_725321928");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_115);
    UnderlyingInstrument_115.insert(UnderlyingMaturityTime_115.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_115;
    UnderlyingNotionalPercentageOutstanding_115.setString("94.650000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_115);
    UnderlyingInstrument_115.insert(UnderlyingNotionalPercentageOutstanding_115.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_115('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_115);
    UnderlyingInstrument_115.insert(UnderlyingOptAttribute_115.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_115;
    UnderlyingOriginalNotionalPercentageOutstanding_115.setString("84.930000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_115);
    UnderlyingInstrument_115.insert(UnderlyingOriginalNotionalPercentageOutstanding_115.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_115("STRING_341835322");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_115);
    UnderlyingInstrument_115.insert(UnderlyingPriceUnitOfMeasure_115.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_115;
    UnderlyingPriceUnitOfMeasureQty_115.setString("8701626");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_115);
    UnderlyingInstrument_115.insert(UnderlyingPriceUnitOfMeasureQty_115.getString());
    FIX::UnderlyingProduct UnderlyingProduct_115(1615695730);
    noUnderlyings_0_0.set(UnderlyingProduct_115);
    UnderlyingInstrument_115.insert(UnderlyingProduct_115.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_115(97292685);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_115);
    UnderlyingInstrument_115.insert(UnderlyingPutOrCall_115.getString());
    FIX::UnderlyingPx UnderlyingPx_115;
    UnderlyingPx_115.setString("9175025");
    noUnderlyings_0_0.set(UnderlyingPx_115);
    UnderlyingInstrument_115.insert(UnderlyingPx_115.getString());
    FIX::UnderlyingQty UnderlyingQty_115;
    UnderlyingQty_115.setString("19925493");
    noUnderlyings_0_0.set(UnderlyingQty_115);
    UnderlyingInstrument_115.insert(UnderlyingQty_115.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_115("LOCALMKTDATE_2132588687");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_115);
    UnderlyingInstrument_115.insert(UnderlyingRedemptionDate_115.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_115("STRING_1003539509");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_115);
    UnderlyingInstrument_115.insert(UnderlyingRepoCollateralSecurityType_115.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_115;
    UnderlyingRepurchaseRate_115.setString("35.550000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_115);
    UnderlyingInstrument_115.insert(UnderlyingRepurchaseRate_115.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_115(1654232633);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_115);
    UnderlyingInstrument_115.insert(UnderlyingRepurchaseTerm_115.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_115("STRING_1584736817");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_115);
    UnderlyingInstrument_115.insert(UnderlyingRestructuringType_115.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_115("STRING_1317652078");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityDesc_115.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_115("EXCHANGE_1375943998");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityExchange_115.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_115("STRING_777010230");
    noUnderlyings_0_0.set(UnderlyingSecurityID_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityID_115.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_115("STRING_1103320508");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityIDSource_115.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_115("STRING_1558854389");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_115);
    UnderlyingInstrument_115.insert(UnderlyingSecuritySubType_115.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_115("STRING_553070212");
    noUnderlyings_0_0.set(UnderlyingSecurityType_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityType_115.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_115("STRING_150273460");
    noUnderlyings_0_0.set(UnderlyingSeniority_115);
    UnderlyingInstrument_115.insert(UnderlyingSeniority_115.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_115("STRING_1403955523");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_115);
    UnderlyingInstrument_115.insert(UnderlyingSettlMethod_115.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_115(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_115);
    UnderlyingInstrument_115.insert(UnderlyingSettlementType_115.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_115;
    UnderlyingStartValue_115.setString("19179205");
    noUnderlyings_0_0.set(UnderlyingStartValue_115);
    UnderlyingInstrument_115.insert(UnderlyingStartValue_115.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_115("STRING_1514203849");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_115);
    UnderlyingInstrument_115.insert(UnderlyingStateOrProvinceOfIssue_115.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_115("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_115);
    UnderlyingInstrument_115.insert(UnderlyingStrikeCurrency_115.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_115;
    UnderlyingStrikePrice_115.setString("20564527");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_115);
    UnderlyingInstrument_115.insert(UnderlyingStrikePrice_115.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_115("STRING_1973676861");
    noUnderlyings_0_0.set(UnderlyingSymbol_115);
    UnderlyingInstrument_115.insert(UnderlyingSymbol_115.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_115("STRING_307607662");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_115);
    UnderlyingInstrument_115.insert(UnderlyingSymbolSfx_115.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_115("STRING_634291053");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_115);
    UnderlyingInstrument_115.insert(UnderlyingTimeUnit_115.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_115("STRING_2101456326");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_115);
    UnderlyingInstrument_115.insert(UnderlyingUnitOfMeasure_115.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_115;
    UnderlyingUnitOfMeasureQty_115.setString("21068180");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_115);
    UnderlyingInstrument_115.insert(UnderlyingUnitOfMeasureQty_115.getString());
    all_values.push_back(UnderlyingInstrument_115);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_228;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_228("STRING_295808000");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_228);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_228.insert(UnderlyingSecurityAltID_228.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_228("STRING_829497046");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_228);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_228.insert(UnderlyingSecurityAltIDSource_228.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_228);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_229;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_229("STRING_938661628");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_229);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_229.insert(UnderlyingSecurityAltID_229.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_229("STRING_393100685");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_229);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_229.insert(UnderlyingSecurityAltIDSource_229.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_230;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_230("STRING_1746999637");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_230);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_230.insert(UnderlyingSecurityAltID_230.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_230("STRING_783727289");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_230);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_230.insert(UnderlyingSecurityAltIDSource_230.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_216;
      FIX::UnderlyingStipType UnderlyingStipType_216("STRING_603055498");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_216);
      UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipType_216.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_216("STRING_1863340844");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_216);
      UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipValue_216.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_216);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_217;
      FIX::UnderlyingStipType UnderlyingStipType_217("STRING_2032438358");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_217);
      UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipType_217.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_217("STRING_40308667");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_217);
      UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipValue_217.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_217);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_218;
      FIX::UnderlyingStipType UnderlyingStipType_218("STRING_1033509274");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_218);
      UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipType_218.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_218("STRING_1260898708");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_218);
      UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipValue_218.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_218);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_232;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_232("STRING_2136829782");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyID_232.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_232('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyIDSource_232.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_232(1370389110);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyRole_232.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_232);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_435("STRING_2076224972");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_435);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435.insert(UnderlyingInstrumentPartySubID_435.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_435(187370467);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_435);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435.insert(UnderlyingInstrumentPartySubIDType_435.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_436("STRING_2057540161");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_436);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436.insert(UnderlyingInstrumentPartySubID_436.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_436(1442945173);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_436);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436.insert(UnderlyingInstrumentPartySubIDType_436.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_437("STRING_742086590");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_437);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437.insert(UnderlyingInstrumentPartySubID_437.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_437(4348868);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_437);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437.insert(UnderlyingInstrumentPartySubIDType_437.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_233;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_233("STRING_1351914298");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyID_233.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_233('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyIDSource_233.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_233(311956531);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyRole_233.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_233);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_438("STRING_522252481");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_438);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438.insert(UnderlyingInstrumentPartySubID_438.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_438(271290976);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_438);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438.insert(UnderlyingInstrumentPartySubIDType_438.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_439("STRING_1309171249");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_439);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439.insert(UnderlyingInstrumentPartySubID_439.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_439(818060481);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_439);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439.insert(UnderlyingInstrumentPartySubIDType_439.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_234;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_234("STRING_1100788022");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_234);
      UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyID_234.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_234('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_234);
      UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyIDSource_234.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_234(1211161167);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_234);
      UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyRole_234.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_234);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_440("STRING_884076518");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_440);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440.insert(UnderlyingInstrumentPartySubID_440.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_440(1589366891);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_440);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440.insert(UnderlyingInstrumentPartySubIDType_440.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_441("STRING_1303359509");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_441);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441.insert(UnderlyingInstrumentPartySubID_441.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_441(599933714);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_441);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441.insert(UnderlyingInstrumentPartySubIDType_441.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_116;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_116("DATA_1474321601");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_116);
    UnderlyingInstrument_116.insert(EncodedUnderlyingIssuer_116.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_116(1343668177);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_116);
    UnderlyingInstrument_116.insert(EncodedUnderlyingIssuerLen_116.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_116("DATA_1633442989");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_116);
    UnderlyingInstrument_116.insert(EncodedUnderlyingSecurityDesc_116.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_116(587736661);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_116);
    UnderlyingInstrument_116.insert(EncodedUnderlyingSecurityDescLen_116.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_116;
    UnderlyingAdjustedQuantity_116.setString("135034");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_116);
    UnderlyingInstrument_116.insert(UnderlyingAdjustedQuantity_116.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_116;
    UnderlyingAllocationPercent_116.setString("91.230000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_116);
    UnderlyingInstrument_116.insert(UnderlyingAllocationPercent_116.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_116;
    UnderlyingAttachmentPoint_116.setString("61.100000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_116);
    UnderlyingInstrument_116.insert(UnderlyingAttachmentPoint_116.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_116("STRING_1383892537");
    noUnderlyings_0_1.set(UnderlyingCFICode_116);
    UnderlyingInstrument_116.insert(UnderlyingCFICode_116.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_116("STRING_1762408718");
    noUnderlyings_0_1.set(UnderlyingCPProgram_116);
    UnderlyingInstrument_116.insert(UnderlyingCPProgram_116.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_116("STRING_1188747435");
    noUnderlyings_0_1.set(UnderlyingCPRegType_116);
    UnderlyingInstrument_116.insert(UnderlyingCPRegType_116.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_116;
    UnderlyingCapValue_116.setString("15712630");
    noUnderlyings_0_1.set(UnderlyingCapValue_116);
    UnderlyingInstrument_116.insert(UnderlyingCapValue_116.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_116;
    UnderlyingCashAmount_116.setString("16724652");
    noUnderlyings_0_1.set(UnderlyingCashAmount_116);
    UnderlyingInstrument_116.insert(UnderlyingCashAmount_116.getString());
    FIX::UnderlyingCashType UnderlyingCashType_116("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_116);
    UnderlyingInstrument_116.insert(UnderlyingCashType_116.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_116;
    UnderlyingContractMultiplier_116.setString("1658659");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_116);
    UnderlyingInstrument_116.insert(UnderlyingContractMultiplier_116.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_116(1676814099);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_116);
    UnderlyingInstrument_116.insert(UnderlyingContractMultiplierUnit_116.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_116("COUNTRY_1836123258");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_116);
    UnderlyingInstrument_116.insert(UnderlyingCountryOfIssue_116.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_116("LOCALMKTDATE_734145749");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_116);
    UnderlyingInstrument_116.insert(UnderlyingCouponPaymentDate_116.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_116;
    UnderlyingCouponRate_116.setString("6.300000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_116);
    UnderlyingInstrument_116.insert(UnderlyingCouponRate_116.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_116("STRING_1674844961");
    noUnderlyings_0_1.set(UnderlyingCreditRating_116);
    UnderlyingInstrument_116.insert(UnderlyingCreditRating_116.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_116("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_116);
    UnderlyingInstrument_116.insert(UnderlyingCurrency_116.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_116;
    UnderlyingCurrentValue_116.setString("8365325");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_116);
    UnderlyingInstrument_116.insert(UnderlyingCurrentValue_116.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_116;
    UnderlyingDetachmentPoint_116.setString("87.120000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_116);
    UnderlyingInstrument_116.insert(UnderlyingDetachmentPoint_116.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_116;
    UnderlyingDirtyPrice_116.setString("12133659");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_116);
    UnderlyingInstrument_116.insert(UnderlyingDirtyPrice_116.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_116;
    UnderlyingEndPrice_116.setString("9368817");
    noUnderlyings_0_1.set(UnderlyingEndPrice_116);
    UnderlyingInstrument_116.insert(UnderlyingEndPrice_116.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_116;
    UnderlyingEndValue_116.setString("11381362");
    noUnderlyings_0_1.set(UnderlyingEndValue_116);
    UnderlyingInstrument_116.insert(UnderlyingEndValue_116.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_116(1913669993);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_116);
    UnderlyingInstrument_116.insert(UnderlyingExerciseStyle_116.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_116;
    UnderlyingFXRate_116.setString("18209583");
    noUnderlyings_0_1.set(UnderlyingFXRate_116);
    UnderlyingInstrument_116.insert(UnderlyingFXRate_116.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_116('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_116);
    UnderlyingInstrument_116.insert(UnderlyingFXRateCalc_116.getString());
    FIX::UnderlyingFactor UnderlyingFactor_116;
    UnderlyingFactor_116.setString("10695458");
    noUnderlyings_0_1.set(UnderlyingFactor_116);
    UnderlyingInstrument_116.insert(UnderlyingFactor_116.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_116(273408377);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_116);
    UnderlyingInstrument_116.insert(UnderlyingFlowScheduleType_116.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_116("STRING_2054341076");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_116);
    UnderlyingInstrument_116.insert(UnderlyingInstrRegistry_116.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_116("LOCALMKTDATE_265730383");
    noUnderlyings_0_1.set(UnderlyingIssueDate_116);
    UnderlyingInstrument_116.insert(UnderlyingIssueDate_116.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_116("STRING_1906851366");
    noUnderlyings_0_1.set(UnderlyingIssuer_116);
    UnderlyingInstrument_116.insert(UnderlyingIssuer_116.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_116("STRING_494594089");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_116);
    UnderlyingInstrument_116.insert(UnderlyingLocaleOfIssue_116.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_116("LOCALMKTDATE_279233810");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_116);
    UnderlyingInstrument_116.insert(UnderlyingMaturityDate_116.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_116("MONTHYEAR_1382156841");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_116);
    UnderlyingInstrument_116.insert(UnderlyingMaturityMonthYear_116.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_116("TZTIMEONLY_1754600200");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_116);
    UnderlyingInstrument_116.insert(UnderlyingMaturityTime_116.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_116;
    UnderlyingNotionalPercentageOutstanding_116.setString("63.470000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_116);
    UnderlyingInstrument_116.insert(UnderlyingNotionalPercentageOutstanding_116.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_116('9');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_116);
    UnderlyingInstrument_116.insert(UnderlyingOptAttribute_116.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_116;
    UnderlyingOriginalNotionalPercentageOutstanding_116.setString("39.870000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_116);
    UnderlyingInstrument_116.insert(UnderlyingOriginalNotionalPercentageOutstanding_116.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_116("STRING_1086905704");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_116);
    UnderlyingInstrument_116.insert(UnderlyingPriceUnitOfMeasure_116.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_116;
    UnderlyingPriceUnitOfMeasureQty_116.setString("5220634");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_116);
    UnderlyingInstrument_116.insert(UnderlyingPriceUnitOfMeasureQty_116.getString());
    FIX::UnderlyingProduct UnderlyingProduct_116(1280072947);
    noUnderlyings_0_1.set(UnderlyingProduct_116);
    UnderlyingInstrument_116.insert(UnderlyingProduct_116.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_116(1252771650);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_116);
    UnderlyingInstrument_116.insert(UnderlyingPutOrCall_116.getString());
    FIX::UnderlyingPx UnderlyingPx_116;
    UnderlyingPx_116.setString("513939");
    noUnderlyings_0_1.set(UnderlyingPx_116);
    UnderlyingInstrument_116.insert(UnderlyingPx_116.getString());
    FIX::UnderlyingQty UnderlyingQty_116;
    UnderlyingQty_116.setString("9687125");
    noUnderlyings_0_1.set(UnderlyingQty_116);
    UnderlyingInstrument_116.insert(UnderlyingQty_116.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_116("LOCALMKTDATE_1986917400");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_116);
    UnderlyingInstrument_116.insert(UnderlyingRedemptionDate_116.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_116("STRING_2040164576");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_116);
    UnderlyingInstrument_116.insert(UnderlyingRepoCollateralSecurityType_116.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_116;
    UnderlyingRepurchaseRate_116.setString("38.710000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_116);
    UnderlyingInstrument_116.insert(UnderlyingRepurchaseRate_116.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_116(1095831982);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_116);
    UnderlyingInstrument_116.insert(UnderlyingRepurchaseTerm_116.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_116("STRING_5258887");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_116);
    UnderlyingInstrument_116.insert(UnderlyingRestructuringType_116.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_116("STRING_1332606434");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityDesc_116.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_116("EXCHANGE_1022807046");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityExchange_116.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_116("STRING_1218624869");
    noUnderlyings_0_1.set(UnderlyingSecurityID_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityID_116.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_116("STRING_122004578");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityIDSource_116.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_116("STRING_13459629");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_116);
    UnderlyingInstrument_116.insert(UnderlyingSecuritySubType_116.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_116("STRING_984811214");
    noUnderlyings_0_1.set(UnderlyingSecurityType_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityType_116.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_116("STRING_1942962888");
    noUnderlyings_0_1.set(UnderlyingSeniority_116);
    UnderlyingInstrument_116.insert(UnderlyingSeniority_116.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_116("STRING_593479104");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_116);
    UnderlyingInstrument_116.insert(UnderlyingSettlMethod_116.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_116(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_116);
    UnderlyingInstrument_116.insert(UnderlyingSettlementType_116.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_116;
    UnderlyingStartValue_116.setString("688876");
    noUnderlyings_0_1.set(UnderlyingStartValue_116);
    UnderlyingInstrument_116.insert(UnderlyingStartValue_116.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_116("STRING_500336532");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_116);
    UnderlyingInstrument_116.insert(UnderlyingStateOrProvinceOfIssue_116.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_116("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_116);
    UnderlyingInstrument_116.insert(UnderlyingStrikeCurrency_116.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_116;
    UnderlyingStrikePrice_116.setString("9949306");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_116);
    UnderlyingInstrument_116.insert(UnderlyingStrikePrice_116.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_116("STRING_451837614");
    noUnderlyings_0_1.set(UnderlyingSymbol_116);
    UnderlyingInstrument_116.insert(UnderlyingSymbol_116.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_116("STRING_1210412177");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_116);
    UnderlyingInstrument_116.insert(UnderlyingSymbolSfx_116.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_116("STRING_602047173");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_116);
    UnderlyingInstrument_116.insert(UnderlyingTimeUnit_116.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_116("STRING_2114963962");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_116);
    UnderlyingInstrument_116.insert(UnderlyingUnitOfMeasure_116.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_116;
    UnderlyingUnitOfMeasureQty_116.setString("600104");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_116);
    UnderlyingInstrument_116.insert(UnderlyingUnitOfMeasureQty_116.getString());
    all_values.push_back(UnderlyingInstrument_116);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_231;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_231("STRING_1054386018");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_231);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_231.insert(UnderlyingSecurityAltID_231.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_231("STRING_582073935");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_231);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_231.insert(UnderlyingSecurityAltIDSource_231.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_232;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_232("STRING_530500460");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_232);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_232.insert(UnderlyingSecurityAltID_232.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_232("STRING_159674020");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_232);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_232.insert(UnderlyingSecurityAltIDSource_232.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_233;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_233("STRING_633467881");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_233);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_233.insert(UnderlyingSecurityAltID_233.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_233("STRING_1499213018");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_233);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_233.insert(UnderlyingSecurityAltIDSource_233.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_219;
      FIX::UnderlyingStipType UnderlyingStipType_219("STRING_526148809");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_219);
      UnderlyingStipulations_NoUnderlyingStips_219.insert(UnderlyingStipType_219.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_219("STRING_1995286889");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_219);
      UnderlyingStipulations_NoUnderlyingStips_219.insert(UnderlyingStipValue_219.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_219);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_220;
      FIX::UnderlyingStipType UnderlyingStipType_220("STRING_1094939755");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_220);
      UnderlyingStipulations_NoUnderlyingStips_220.insert(UnderlyingStipType_220.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_220("STRING_531407697");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_220);
      UnderlyingStipulations_NoUnderlyingStips_220.insert(UnderlyingStipValue_220.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_220);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_235;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_235("STRING_2117746801");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_235);
      UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyID_235.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_235('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_235);
      UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyIDSource_235.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_235(1302414253);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_235);
      UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyRole_235.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_235);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_442("STRING_587360132");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_442);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442.insert(UnderlyingInstrumentPartySubID_442.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_442(1097893494);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_442);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442.insert(UnderlyingInstrumentPartySubIDType_442.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_443("STRING_577201887");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_443);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443.insert(UnderlyingInstrumentPartySubID_443.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_443(494233552);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_443);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443.insert(UnderlyingInstrumentPartySubIDType_443.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_444("STRING_1166781111");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_444);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444.insert(UnderlyingInstrumentPartySubID_444.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_444(1077538419);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_444);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444.insert(UnderlyingInstrumentPartySubIDType_444.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_236;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_236("STRING_666837356");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyID_236.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_236('9');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyIDSource_236.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_236(2072469040);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyRole_236.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_236);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_445("STRING_57964976");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_445);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445.insert(UnderlyingInstrumentPartySubID_445.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_445(527032566);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_445);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445.insert(UnderlyingInstrumentPartySubIDType_445.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_237;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_237("STRING_1086155285");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyID_237.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_237('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyIDSource_237.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_237(1924943726);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyRole_237.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_237);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_446("STRING_700049351");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_446);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446.insert(UnderlyingInstrumentPartySubID_446.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_446(307960538);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_446);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446.insert(UnderlyingInstrumentPartySubIDType_446.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_447("STRING_152731675");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_447);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447.insert(UnderlyingInstrumentPartySubID_447.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_447(1333517232);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_447);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447.insert(UnderlyingInstrumentPartySubIDType_447.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_448("STRING_1807173556");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_448);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448.insert(UnderlyingInstrumentPartySubID_448.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_448(151839448);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_448);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448.insert(UnderlyingInstrumentPartySubIDType_448.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_117;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_117("DATA_1859666042");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingIssuer_117.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_117(1654976798);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingIssuerLen_117.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_117("DATA_1246779203");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingSecurityDesc_117.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_117(243590091);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingSecurityDescLen_117.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_117;
    UnderlyingAdjustedQuantity_117.setString("6879028");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_117);
    UnderlyingInstrument_117.insert(UnderlyingAdjustedQuantity_117.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_117;
    UnderlyingAllocationPercent_117.setString("23.560000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_117);
    UnderlyingInstrument_117.insert(UnderlyingAllocationPercent_117.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_117;
    UnderlyingAttachmentPoint_117.setString("26.570000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_117);
    UnderlyingInstrument_117.insert(UnderlyingAttachmentPoint_117.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_117("STRING_1990317079");
    noUnderlyings_0_2.set(UnderlyingCFICode_117);
    UnderlyingInstrument_117.insert(UnderlyingCFICode_117.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_117("STRING_1200765139");
    noUnderlyings_0_2.set(UnderlyingCPProgram_117);
    UnderlyingInstrument_117.insert(UnderlyingCPProgram_117.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_117("STRING_433499141");
    noUnderlyings_0_2.set(UnderlyingCPRegType_117);
    UnderlyingInstrument_117.insert(UnderlyingCPRegType_117.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_117;
    UnderlyingCapValue_117.setString("9407269");
    noUnderlyings_0_2.set(UnderlyingCapValue_117);
    UnderlyingInstrument_117.insert(UnderlyingCapValue_117.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_117;
    UnderlyingCashAmount_117.setString("17779670");
    noUnderlyings_0_2.set(UnderlyingCashAmount_117);
    UnderlyingInstrument_117.insert(UnderlyingCashAmount_117.getString());
    FIX::UnderlyingCashType UnderlyingCashType_117("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_117);
    UnderlyingInstrument_117.insert(UnderlyingCashType_117.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_117;
    UnderlyingContractMultiplier_117.setString("21075080");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_117);
    UnderlyingInstrument_117.insert(UnderlyingContractMultiplier_117.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_117(708021797);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_117);
    UnderlyingInstrument_117.insert(UnderlyingContractMultiplierUnit_117.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_117("COUNTRY_1594570050");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingCountryOfIssue_117.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_117("LOCALMKTDATE_955060835");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_117);
    UnderlyingInstrument_117.insert(UnderlyingCouponPaymentDate_117.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_117;
    UnderlyingCouponRate_117.setString("71.900000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_117);
    UnderlyingInstrument_117.insert(UnderlyingCouponRate_117.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_117("STRING_565761373");
    noUnderlyings_0_2.set(UnderlyingCreditRating_117);
    UnderlyingInstrument_117.insert(UnderlyingCreditRating_117.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_117("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_117);
    UnderlyingInstrument_117.insert(UnderlyingCurrency_117.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_117;
    UnderlyingCurrentValue_117.setString("16519166");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_117);
    UnderlyingInstrument_117.insert(UnderlyingCurrentValue_117.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_117;
    UnderlyingDetachmentPoint_117.setString("12.280000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_117);
    UnderlyingInstrument_117.insert(UnderlyingDetachmentPoint_117.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_117;
    UnderlyingDirtyPrice_117.setString("9374998");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_117);
    UnderlyingInstrument_117.insert(UnderlyingDirtyPrice_117.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_117;
    UnderlyingEndPrice_117.setString("16449743");
    noUnderlyings_0_2.set(UnderlyingEndPrice_117);
    UnderlyingInstrument_117.insert(UnderlyingEndPrice_117.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_117;
    UnderlyingEndValue_117.setString("18310505");
    noUnderlyings_0_2.set(UnderlyingEndValue_117);
    UnderlyingInstrument_117.insert(UnderlyingEndValue_117.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_117(1245460373);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_117);
    UnderlyingInstrument_117.insert(UnderlyingExerciseStyle_117.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_117;
    UnderlyingFXRate_117.setString("17977059");
    noUnderlyings_0_2.set(UnderlyingFXRate_117);
    UnderlyingInstrument_117.insert(UnderlyingFXRate_117.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_117('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_117);
    UnderlyingInstrument_117.insert(UnderlyingFXRateCalc_117.getString());
    FIX::UnderlyingFactor UnderlyingFactor_117;
    UnderlyingFactor_117.setString("9051502");
    noUnderlyings_0_2.set(UnderlyingFactor_117);
    UnderlyingInstrument_117.insert(UnderlyingFactor_117.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_117(1949545436);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_117);
    UnderlyingInstrument_117.insert(UnderlyingFlowScheduleType_117.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_117("STRING_729266558");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_117);
    UnderlyingInstrument_117.insert(UnderlyingInstrRegistry_117.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_117("LOCALMKTDATE_412643431");
    noUnderlyings_0_2.set(UnderlyingIssueDate_117);
    UnderlyingInstrument_117.insert(UnderlyingIssueDate_117.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_117("STRING_1048840991");
    noUnderlyings_0_2.set(UnderlyingIssuer_117);
    UnderlyingInstrument_117.insert(UnderlyingIssuer_117.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_117("STRING_972856649");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingLocaleOfIssue_117.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_117("LOCALMKTDATE_1100546257");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityDate_117.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_117("MONTHYEAR_118399700");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityMonthYear_117.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_117("TZTIMEONLY_818995658");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityTime_117.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_117;
    UnderlyingNotionalPercentageOutstanding_117.setString("96.880000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_117);
    UnderlyingInstrument_117.insert(UnderlyingNotionalPercentageOutstanding_117.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_117('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_117);
    UnderlyingInstrument_117.insert(UnderlyingOptAttribute_117.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_117;
    UnderlyingOriginalNotionalPercentageOutstanding_117.setString("47.990000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_117);
    UnderlyingInstrument_117.insert(UnderlyingOriginalNotionalPercentageOutstanding_117.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_117("STRING_1884106613");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_117);
    UnderlyingInstrument_117.insert(UnderlyingPriceUnitOfMeasure_117.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_117;
    UnderlyingPriceUnitOfMeasureQty_117.setString("9496482");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_117);
    UnderlyingInstrument_117.insert(UnderlyingPriceUnitOfMeasureQty_117.getString());
    FIX::UnderlyingProduct UnderlyingProduct_117(32743844);
    noUnderlyings_0_2.set(UnderlyingProduct_117);
    UnderlyingInstrument_117.insert(UnderlyingProduct_117.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_117(1844131001);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_117);
    UnderlyingInstrument_117.insert(UnderlyingPutOrCall_117.getString());
    FIX::UnderlyingPx UnderlyingPx_117;
    UnderlyingPx_117.setString("16576700");
    noUnderlyings_0_2.set(UnderlyingPx_117);
    UnderlyingInstrument_117.insert(UnderlyingPx_117.getString());
    FIX::UnderlyingQty UnderlyingQty_117;
    UnderlyingQty_117.setString("16273138");
    noUnderlyings_0_2.set(UnderlyingQty_117);
    UnderlyingInstrument_117.insert(UnderlyingQty_117.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_117("LOCALMKTDATE_651708189");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_117);
    UnderlyingInstrument_117.insert(UnderlyingRedemptionDate_117.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_117("STRING_143193557");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_117);
    UnderlyingInstrument_117.insert(UnderlyingRepoCollateralSecurityType_117.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_117;
    UnderlyingRepurchaseRate_117.setString("16.190000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_117);
    UnderlyingInstrument_117.insert(UnderlyingRepurchaseRate_117.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_117(1664734000);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_117);
    UnderlyingInstrument_117.insert(UnderlyingRepurchaseTerm_117.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_117("STRING_1303233313");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_117);
    UnderlyingInstrument_117.insert(UnderlyingRestructuringType_117.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_117("STRING_1697508277");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityDesc_117.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_117("EXCHANGE_648251580");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityExchange_117.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_117("STRING_93249500");
    noUnderlyings_0_2.set(UnderlyingSecurityID_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityID_117.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_117("STRING_1194998942");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityIDSource_117.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_117("STRING_331818512");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_117);
    UnderlyingInstrument_117.insert(UnderlyingSecuritySubType_117.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_117("STRING_1338709873");
    noUnderlyings_0_2.set(UnderlyingSecurityType_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityType_117.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_117("STRING_845221283");
    noUnderlyings_0_2.set(UnderlyingSeniority_117);
    UnderlyingInstrument_117.insert(UnderlyingSeniority_117.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_117("STRING_1348902676");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_117);
    UnderlyingInstrument_117.insert(UnderlyingSettlMethod_117.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_117(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_117);
    UnderlyingInstrument_117.insert(UnderlyingSettlementType_117.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_117;
    UnderlyingStartValue_117.setString("6472830");
    noUnderlyings_0_2.set(UnderlyingStartValue_117);
    UnderlyingInstrument_117.insert(UnderlyingStartValue_117.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_117("STRING_2078169234");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingStateOrProvinceOfIssue_117.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_117("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_117);
    UnderlyingInstrument_117.insert(UnderlyingStrikeCurrency_117.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_117;
    UnderlyingStrikePrice_117.setString("9035422");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_117);
    UnderlyingInstrument_117.insert(UnderlyingStrikePrice_117.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_117("STRING_1609566195");
    noUnderlyings_0_2.set(UnderlyingSymbol_117);
    UnderlyingInstrument_117.insert(UnderlyingSymbol_117.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_117("STRING_1814523763");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_117);
    UnderlyingInstrument_117.insert(UnderlyingSymbolSfx_117.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_117("STRING_1722537893");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_117);
    UnderlyingInstrument_117.insert(UnderlyingTimeUnit_117.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_117("STRING_405462235");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_117);
    UnderlyingInstrument_117.insert(UnderlyingUnitOfMeasure_117.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_117;
    UnderlyingUnitOfMeasureQty_117.setString("9862049");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_117);
    UnderlyingInstrument_117.insert(UnderlyingUnitOfMeasureQty_117.getString());
    all_values.push_back(UnderlyingInstrument_117);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_234;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_234("STRING_142085200");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_234);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_234.insert(UnderlyingSecurityAltID_234.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_234("STRING_1935853172");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_234);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_234.insert(UnderlyingSecurityAltIDSource_234.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_235;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_235("STRING_860292888");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_235);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_235.insert(UnderlyingSecurityAltID_235.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_235("STRING_1986216201");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_235);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_235.insert(UnderlyingSecurityAltIDSource_235.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_221;
      FIX::UnderlyingStipType UnderlyingStipType_221("STRING_340123135");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_221);
      UnderlyingStipulations_NoUnderlyingStips_221.insert(UnderlyingStipType_221.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_221("STRING_490440742");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_221);
      UnderlyingStipulations_NoUnderlyingStips_221.insert(UnderlyingStipValue_221.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_221);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_238;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_238("STRING_385714754");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyID_238.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_238('7');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyIDSource_238.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_238(744982763);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyRole_238.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_238);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_449("STRING_655942675");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_449);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449.insert(UnderlyingInstrumentPartySubID_449.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_449(838232263);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_449);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449.insert(UnderlyingInstrumentPartySubIDType_449.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_450("STRING_1130738326");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_450);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450.insert(UnderlyingInstrumentPartySubID_450.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_450(987761187);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_450);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450.insert(UnderlyingInstrumentPartySubIDType_450.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_239;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_239("STRING_29458488");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyID_239.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_239('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyIDSource_239.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_239(189180215);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyRole_239.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_239);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_451("STRING_475759033");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_451);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451.insert(UnderlyingInstrumentPartySubID_451.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_451(119865801);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_451);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451.insert(UnderlyingInstrumentPartySubIDType_451.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_240;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_240("STRING_634854932");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyID_240.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_240('2');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyIDSource_240.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_240(1023408036);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyRole_240.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_240);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_452("STRING_1838923211");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_452);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452.insert(UnderlyingInstrumentPartySubID_452.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_452(598462281);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_452);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452.insert(UnderlyingInstrumentPartySubIDType_452.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
