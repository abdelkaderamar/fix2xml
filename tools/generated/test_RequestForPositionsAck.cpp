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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RequestForPositionsAck msg;

  list<multiset<string>> all_values;
  multiset<string> RequestForPositionsAck_0;
  FIX::Account Account_43("STRING_2098512692");
  msg.set(Account_43);
  RequestForPositionsAck_0.insert(Account_43.getString());
  FIX::AccountType AccountType_37(3);
  msg.set(AccountType_37);
  RequestForPositionsAck_0.insert(AccountType_37.getString());
  FIX::AcctIDSource AcctIDSource_36(3);
  msg.set(AcctIDSource_36);
  RequestForPositionsAck_0.insert(AcctIDSource_36.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_19("LOCALMKTDATE_2047440171");
  msg.set(ClearingBusinessDate_19);
  RequestForPositionsAck_0.insert(ClearingBusinessDate_19.getString());
  FIX::Currency Currency_52("JPY");
  msg.set(Currency_52);
  RequestForPositionsAck_0.insert(Currency_52.getString());
  FIX::EncodedText EncodedText_76("DATA_1201451775");
  msg.set(EncodedText_76);
  RequestForPositionsAck_0.insert(EncodedText_76.getString());
  FIX::EncodedTextLen EncodedTextLen_76(352714201);
  msg.set(EncodedTextLen_76);
  RequestForPositionsAck_0.insert(EncodedTextLen_76.getString());
  FIX::MatchStatus MatchStatus_10('0');
  msg.set(MatchStatus_10);
  RequestForPositionsAck_0.insert(MatchStatus_10.getString());
  FIX::PosMaintRptID PosMaintRptID_3("STRING_1897879774");
  msg.set(PosMaintRptID_3);
  RequestForPositionsAck_0.insert(PosMaintRptID_3.getString());
  FIX::PosReqID PosReqID_5("STRING_992465850");
  msg.set(PosReqID_5);
  RequestForPositionsAck_0.insert(PosReqID_5.getString());
  FIX::PosReqResult PosReqResult_1(1);
  msg.set(PosReqResult_1);
  RequestForPositionsAck_0.insert(PosReqResult_1.getString());
  FIX::PosReqStatus PosReqStatus_0(0);
  msg.set(PosReqStatus_0);
  RequestForPositionsAck_0.insert(PosReqStatus_0.getString());
  FIX::PosReqType PosReqType_3(3);
  msg.set(PosReqType_3);
  RequestForPositionsAck_0.insert(PosReqType_3.getString());
  FIX::ResponseDestination ResponseDestination_3("STRING_1022995283");
  msg.set(ResponseDestination_3);
  RequestForPositionsAck_0.insert(ResponseDestination_3.getString());
  FIX::ResponseTransportType ResponseTransportType_3(1);
  msg.set(ResponseTransportType_3);
  RequestForPositionsAck_0.insert(ResponseTransportType_3.getString());
  FIX::SettlCurrency SettlCurrency_29("EUR");
  msg.set(SettlCurrency_29);
  RequestForPositionsAck_0.insert(SettlCurrency_29.getString());
  FIX::SettlSessID SettlSessID_11("STRING_EOD");
  msg.set(SettlSessID_11);
  RequestForPositionsAck_0.insert(SettlSessID_11.getString());
  FIX::SettlSessSubID SettlSessSubID_10("STRING_42270572");
  msg.set(SettlSessSubID_10);
  RequestForPositionsAck_0.insert(SettlSessSubID_10.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_8('0');
  msg.set(SubscriptionRequestType_8);
  RequestForPositionsAck_0.insert(SubscriptionRequestType_8.getString());
  FIX::Text Text_76("STRING_1570264680");
  msg.set(Text_76);
  RequestForPositionsAck_0.insert(Text_76.getString());
  FIX::TotalNumPosReports TotalNumPosReports_1(139752925);
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
    multiset<string> InstrumentLeg_97;
    FIX::EncodedLegIssuer EncodedLegIssuer_97("DATA_931499314");
    noLegs_0_0.set(EncodedLegIssuer_97);
    InstrumentLeg_97.insert(EncodedLegIssuer_97.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_97(471399311);
    noLegs_0_0.set(EncodedLegIssuerLen_97);
    InstrumentLeg_97.insert(EncodedLegIssuerLen_97.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_97("DATA_1760771357");
    noLegs_0_0.set(EncodedLegSecurityDesc_97);
    InstrumentLeg_97.insert(EncodedLegSecurityDesc_97.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_97(992298979);
    noLegs_0_0.set(EncodedLegSecurityDescLen_97);
    InstrumentLeg_97.insert(EncodedLegSecurityDescLen_97.getString());
    FIX::LegCFICode LegCFICode_97("STRING_1107109984");
    noLegs_0_0.set(LegCFICode_97);
    InstrumentLeg_97.insert(LegCFICode_97.getString());
    FIX::LegContractMultiplier LegContractMultiplier_97;
    LegContractMultiplier_97.setString("19566076");
    noLegs_0_0.set(LegContractMultiplier_97);
    InstrumentLeg_97.insert(LegContractMultiplier_97.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_97(943328023);
    noLegs_0_0.set(LegContractMultiplierUnit_97);
    InstrumentLeg_97.insert(LegContractMultiplierUnit_97.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_97("MONTHYEAR_1990120184");
    noLegs_0_0.set(LegContractSettlMonth_97);
    InstrumentLeg_97.insert(LegContractSettlMonth_97.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_97("COUNTRY_424360698");
    noLegs_0_0.set(LegCountryOfIssue_97);
    InstrumentLeg_97.insert(LegCountryOfIssue_97.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_97("LOCALMKTDATE_843284546");
    noLegs_0_0.set(LegCouponPaymentDate_97);
    InstrumentLeg_97.insert(LegCouponPaymentDate_97.getString());
    FIX::LegCouponRate LegCouponRate_97;
    LegCouponRate_97.setString("46.890000");
    noLegs_0_0.set(LegCouponRate_97);
    InstrumentLeg_97.insert(LegCouponRate_97.getString());
    FIX::LegCreditRating LegCreditRating_97("STRING_577446346");
    noLegs_0_0.set(LegCreditRating_97);
    InstrumentLeg_97.insert(LegCreditRating_97.getString());
    FIX::LegCurrency LegCurrency_97("USD");
    noLegs_0_0.set(LegCurrency_97);
    InstrumentLeg_97.insert(LegCurrency_97.getString());
    FIX::LegDatedDate LegDatedDate_97("LOCALMKTDATE_468018903");
    noLegs_0_0.set(LegDatedDate_97);
    InstrumentLeg_97.insert(LegDatedDate_97.getString());
    FIX::LegExerciseStyle LegExerciseStyle_97(1795132448);
    noLegs_0_0.set(LegExerciseStyle_97);
    InstrumentLeg_97.insert(LegExerciseStyle_97.getString());
    FIX::LegFactor LegFactor_97;
    LegFactor_97.setString("11706610");
    noLegs_0_0.set(LegFactor_97);
    InstrumentLeg_97.insert(LegFactor_97.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_97(666980410);
    noLegs_0_0.set(LegFlowScheduleType_97);
    InstrumentLeg_97.insert(LegFlowScheduleType_97.getString());
    FIX::LegInstrRegistry LegInstrRegistry_97("STRING_868696164");
    noLegs_0_0.set(LegInstrRegistry_97);
    InstrumentLeg_97.insert(LegInstrRegistry_97.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_97("LOCALMKTDATE_2135558434");
    noLegs_0_0.set(LegInterestAccrualDate_97);
    InstrumentLeg_97.insert(LegInterestAccrualDate_97.getString());
    FIX::LegIssueDate LegIssueDate_97("LOCALMKTDATE_1689975694");
    noLegs_0_0.set(LegIssueDate_97);
    InstrumentLeg_97.insert(LegIssueDate_97.getString());
    FIX::LegIssuer LegIssuer_97("STRING_930583893");
    noLegs_0_0.set(LegIssuer_97);
    InstrumentLeg_97.insert(LegIssuer_97.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_97("STRING_2118705702");
    noLegs_0_0.set(LegLocaleOfIssue_97);
    InstrumentLeg_97.insert(LegLocaleOfIssue_97.getString());
    FIX::LegMaturityDate LegMaturityDate_97("LOCALMKTDATE_1742251985");
    noLegs_0_0.set(LegMaturityDate_97);
    InstrumentLeg_97.insert(LegMaturityDate_97.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_97("MONTHYEAR_532583772");
    noLegs_0_0.set(LegMaturityMonthYear_97);
    InstrumentLeg_97.insert(LegMaturityMonthYear_97.getString());
    FIX::LegMaturityTime LegMaturityTime_97("TZTIMEONLY_13492627");
    noLegs_0_0.set(LegMaturityTime_97);
    InstrumentLeg_97.insert(LegMaturityTime_97.getString());
    FIX::LegOptAttribute LegOptAttribute_97('5');
    noLegs_0_0.set(LegOptAttribute_97);
    InstrumentLeg_97.insert(LegOptAttribute_97.getString());
    FIX::LegOptionRatio LegOptionRatio_97;
    LegOptionRatio_97.setString("21028484");
    noLegs_0_0.set(LegOptionRatio_97);
    InstrumentLeg_97.insert(LegOptionRatio_97.getString());
    FIX::LegPool LegPool_97("STRING_153245552");
    noLegs_0_0.set(LegPool_97);
    InstrumentLeg_97.insert(LegPool_97.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_97("STRING_468906051");
    noLegs_0_0.set(LegPriceUnitOfMeasure_97);
    InstrumentLeg_97.insert(LegPriceUnitOfMeasure_97.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_97;
    LegPriceUnitOfMeasureQty_97.setString("164250");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_97);
    InstrumentLeg_97.insert(LegPriceUnitOfMeasureQty_97.getString());
    FIX::LegProduct LegProduct_97(1084744866);
    noLegs_0_0.set(LegProduct_97);
    InstrumentLeg_97.insert(LegProduct_97.getString());
    FIX::LegPutOrCall LegPutOrCall_97(940305362);
    noLegs_0_0.set(LegPutOrCall_97);
    InstrumentLeg_97.insert(LegPutOrCall_97.getString());
    FIX::LegRatioQty LegRatioQty_97;
    LegRatioQty_97.setString("17771963");
    noLegs_0_0.set(LegRatioQty_97);
    InstrumentLeg_97.insert(LegRatioQty_97.getString());
    FIX::LegRedemptionDate LegRedemptionDate_97("LOCALMKTDATE_2077043845");
    noLegs_0_0.set(LegRedemptionDate_97);
    InstrumentLeg_97.insert(LegRedemptionDate_97.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_97("STRING_2047415346");
    noLegs_0_0.set(LegRepoCollateralSecurityType_97);
    InstrumentLeg_97.insert(LegRepoCollateralSecurityType_97.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_97;
    LegRepurchaseRate_97.setString("3.530000");
    noLegs_0_0.set(LegRepurchaseRate_97);
    InstrumentLeg_97.insert(LegRepurchaseRate_97.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_97(872888220);
    noLegs_0_0.set(LegRepurchaseTerm_97);
    InstrumentLeg_97.insert(LegRepurchaseTerm_97.getString());
    FIX::LegSecurityDesc LegSecurityDesc_97("STRING_1890051882");
    noLegs_0_0.set(LegSecurityDesc_97);
    InstrumentLeg_97.insert(LegSecurityDesc_97.getString());
    FIX::LegSecurityExchange LegSecurityExchange_97("EXCHANGE_2010681051");
    noLegs_0_0.set(LegSecurityExchange_97);
    InstrumentLeg_97.insert(LegSecurityExchange_97.getString());
    FIX::LegSecurityID LegSecurityID_97("STRING_1716172766");
    noLegs_0_0.set(LegSecurityID_97);
    InstrumentLeg_97.insert(LegSecurityID_97.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_97("STRING_1715532923");
    noLegs_0_0.set(LegSecurityIDSource_97);
    InstrumentLeg_97.insert(LegSecurityIDSource_97.getString());
    FIX::LegSecuritySubType LegSecuritySubType_97("STRING_440643750");
    noLegs_0_0.set(LegSecuritySubType_97);
    InstrumentLeg_97.insert(LegSecuritySubType_97.getString());
    FIX::LegSecurityType LegSecurityType_97("STRING_1613425439");
    noLegs_0_0.set(LegSecurityType_97);
    InstrumentLeg_97.insert(LegSecurityType_97.getString());
    FIX::LegSide LegSide_97('1');
    noLegs_0_0.set(LegSide_97);
    InstrumentLeg_97.insert(LegSide_97.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_97("STRING_908662653");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_97);
    InstrumentLeg_97.insert(LegStateOrProvinceOfIssue_97.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_97("CHF");
    noLegs_0_0.set(LegStrikeCurrency_97);
    InstrumentLeg_97.insert(LegStrikeCurrency_97.getString());
    FIX::LegStrikePrice LegStrikePrice_97;
    LegStrikePrice_97.setString("15756430");
    noLegs_0_0.set(LegStrikePrice_97);
    InstrumentLeg_97.insert(LegStrikePrice_97.getString());
    FIX::LegSymbol LegSymbol_97("STRING_2129770404");
    noLegs_0_0.set(LegSymbol_97);
    InstrumentLeg_97.insert(LegSymbol_97.getString());
    FIX::LegSymbolSfx LegSymbolSfx_97("STRING_904980396");
    noLegs_0_0.set(LegSymbolSfx_97);
    InstrumentLeg_97.insert(LegSymbolSfx_97.getString());
    FIX::LegTimeUnit LegTimeUnit_97("STRING_1118135109");
    noLegs_0_0.set(LegTimeUnit_97);
    InstrumentLeg_97.insert(LegTimeUnit_97.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_97("STRING_912870649");
    noLegs_0_0.set(LegUnitOfMeasure_97);
    InstrumentLeg_97.insert(LegUnitOfMeasure_97.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_97;
    LegUnitOfMeasureQty_97.setString("8762024");
    noLegs_0_0.set(LegUnitOfMeasureQty_97);
    InstrumentLeg_97.insert(LegUnitOfMeasureQty_97.getString());
    all_values.push_back(InstrumentLeg_97);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_172;
      FIX::LegSecurityAltID LegSecurityAltID_172("STRING_1445454422");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_172);
      LegSecAltIDGrp_NoLegSecurityAltID_172.insert(LegSecurityAltID_172.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_172("STRING_889695077");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_172);
      LegSecAltIDGrp_NoLegSecurityAltID_172.insert(LegSecurityAltIDSource_172.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_172);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_98;
    FIX::EncodedLegIssuer EncodedLegIssuer_98("DATA_1285326588");
    noLegs_0_1.set(EncodedLegIssuer_98);
    InstrumentLeg_98.insert(EncodedLegIssuer_98.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_98(1400819226);
    noLegs_0_1.set(EncodedLegIssuerLen_98);
    InstrumentLeg_98.insert(EncodedLegIssuerLen_98.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_98("DATA_1042940629");
    noLegs_0_1.set(EncodedLegSecurityDesc_98);
    InstrumentLeg_98.insert(EncodedLegSecurityDesc_98.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_98(1754232639);
    noLegs_0_1.set(EncodedLegSecurityDescLen_98);
    InstrumentLeg_98.insert(EncodedLegSecurityDescLen_98.getString());
    FIX::LegCFICode LegCFICode_98("STRING_1417244263");
    noLegs_0_1.set(LegCFICode_98);
    InstrumentLeg_98.insert(LegCFICode_98.getString());
    FIX::LegContractMultiplier LegContractMultiplier_98;
    LegContractMultiplier_98.setString("21276854");
    noLegs_0_1.set(LegContractMultiplier_98);
    InstrumentLeg_98.insert(LegContractMultiplier_98.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_98(547054353);
    noLegs_0_1.set(LegContractMultiplierUnit_98);
    InstrumentLeg_98.insert(LegContractMultiplierUnit_98.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_98("MONTHYEAR_1046957008");
    noLegs_0_1.set(LegContractSettlMonth_98);
    InstrumentLeg_98.insert(LegContractSettlMonth_98.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_98("COUNTRY_2057245692");
    noLegs_0_1.set(LegCountryOfIssue_98);
    InstrumentLeg_98.insert(LegCountryOfIssue_98.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_98("LOCALMKTDATE_446986051");
    noLegs_0_1.set(LegCouponPaymentDate_98);
    InstrumentLeg_98.insert(LegCouponPaymentDate_98.getString());
    FIX::LegCouponRate LegCouponRate_98;
    LegCouponRate_98.setString("37.140000");
    noLegs_0_1.set(LegCouponRate_98);
    InstrumentLeg_98.insert(LegCouponRate_98.getString());
    FIX::LegCreditRating LegCreditRating_98("STRING_782650264");
    noLegs_0_1.set(LegCreditRating_98);
    InstrumentLeg_98.insert(LegCreditRating_98.getString());
    FIX::LegCurrency LegCurrency_98("EUR");
    noLegs_0_1.set(LegCurrency_98);
    InstrumentLeg_98.insert(LegCurrency_98.getString());
    FIX::LegDatedDate LegDatedDate_98("LOCALMKTDATE_351339382");
    noLegs_0_1.set(LegDatedDate_98);
    InstrumentLeg_98.insert(LegDatedDate_98.getString());
    FIX::LegExerciseStyle LegExerciseStyle_98(1905087208);
    noLegs_0_1.set(LegExerciseStyle_98);
    InstrumentLeg_98.insert(LegExerciseStyle_98.getString());
    FIX::LegFactor LegFactor_98;
    LegFactor_98.setString("7896348");
    noLegs_0_1.set(LegFactor_98);
    InstrumentLeg_98.insert(LegFactor_98.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_98(1964764822);
    noLegs_0_1.set(LegFlowScheduleType_98);
    InstrumentLeg_98.insert(LegFlowScheduleType_98.getString());
    FIX::LegInstrRegistry LegInstrRegistry_98("STRING_1651331725");
    noLegs_0_1.set(LegInstrRegistry_98);
    InstrumentLeg_98.insert(LegInstrRegistry_98.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_98("LOCALMKTDATE_1698297520");
    noLegs_0_1.set(LegInterestAccrualDate_98);
    InstrumentLeg_98.insert(LegInterestAccrualDate_98.getString());
    FIX::LegIssueDate LegIssueDate_98("LOCALMKTDATE_1078355413");
    noLegs_0_1.set(LegIssueDate_98);
    InstrumentLeg_98.insert(LegIssueDate_98.getString());
    FIX::LegIssuer LegIssuer_98("STRING_420753687");
    noLegs_0_1.set(LegIssuer_98);
    InstrumentLeg_98.insert(LegIssuer_98.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_98("STRING_1126456936");
    noLegs_0_1.set(LegLocaleOfIssue_98);
    InstrumentLeg_98.insert(LegLocaleOfIssue_98.getString());
    FIX::LegMaturityDate LegMaturityDate_98("LOCALMKTDATE_1060642169");
    noLegs_0_1.set(LegMaturityDate_98);
    InstrumentLeg_98.insert(LegMaturityDate_98.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_98("MONTHYEAR_1325734083");
    noLegs_0_1.set(LegMaturityMonthYear_98);
    InstrumentLeg_98.insert(LegMaturityMonthYear_98.getString());
    FIX::LegMaturityTime LegMaturityTime_98("TZTIMEONLY_97108397");
    noLegs_0_1.set(LegMaturityTime_98);
    InstrumentLeg_98.insert(LegMaturityTime_98.getString());
    FIX::LegOptAttribute LegOptAttribute_98('1');
    noLegs_0_1.set(LegOptAttribute_98);
    InstrumentLeg_98.insert(LegOptAttribute_98.getString());
    FIX::LegOptionRatio LegOptionRatio_98;
    LegOptionRatio_98.setString("544528");
    noLegs_0_1.set(LegOptionRatio_98);
    InstrumentLeg_98.insert(LegOptionRatio_98.getString());
    FIX::LegPool LegPool_98("STRING_810011844");
    noLegs_0_1.set(LegPool_98);
    InstrumentLeg_98.insert(LegPool_98.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_98("STRING_1271483593");
    noLegs_0_1.set(LegPriceUnitOfMeasure_98);
    InstrumentLeg_98.insert(LegPriceUnitOfMeasure_98.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_98;
    LegPriceUnitOfMeasureQty_98.setString("9441479");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_98);
    InstrumentLeg_98.insert(LegPriceUnitOfMeasureQty_98.getString());
    FIX::LegProduct LegProduct_98(2095338432);
    noLegs_0_1.set(LegProduct_98);
    InstrumentLeg_98.insert(LegProduct_98.getString());
    FIX::LegPutOrCall LegPutOrCall_98(524819171);
    noLegs_0_1.set(LegPutOrCall_98);
    InstrumentLeg_98.insert(LegPutOrCall_98.getString());
    FIX::LegRatioQty LegRatioQty_98;
    LegRatioQty_98.setString("19870885");
    noLegs_0_1.set(LegRatioQty_98);
    InstrumentLeg_98.insert(LegRatioQty_98.getString());
    FIX::LegRedemptionDate LegRedemptionDate_98("LOCALMKTDATE_1702087424");
    noLegs_0_1.set(LegRedemptionDate_98);
    InstrumentLeg_98.insert(LegRedemptionDate_98.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_98("STRING_1942063434");
    noLegs_0_1.set(LegRepoCollateralSecurityType_98);
    InstrumentLeg_98.insert(LegRepoCollateralSecurityType_98.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_98;
    LegRepurchaseRate_98.setString("4.400000");
    noLegs_0_1.set(LegRepurchaseRate_98);
    InstrumentLeg_98.insert(LegRepurchaseRate_98.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_98(101658129);
    noLegs_0_1.set(LegRepurchaseTerm_98);
    InstrumentLeg_98.insert(LegRepurchaseTerm_98.getString());
    FIX::LegSecurityDesc LegSecurityDesc_98("STRING_841536795");
    noLegs_0_1.set(LegSecurityDesc_98);
    InstrumentLeg_98.insert(LegSecurityDesc_98.getString());
    FIX::LegSecurityExchange LegSecurityExchange_98("EXCHANGE_1877052484");
    noLegs_0_1.set(LegSecurityExchange_98);
    InstrumentLeg_98.insert(LegSecurityExchange_98.getString());
    FIX::LegSecurityID LegSecurityID_98("STRING_548644181");
    noLegs_0_1.set(LegSecurityID_98);
    InstrumentLeg_98.insert(LegSecurityID_98.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_98("STRING_1327330509");
    noLegs_0_1.set(LegSecurityIDSource_98);
    InstrumentLeg_98.insert(LegSecurityIDSource_98.getString());
    FIX::LegSecuritySubType LegSecuritySubType_98("STRING_512219101");
    noLegs_0_1.set(LegSecuritySubType_98);
    InstrumentLeg_98.insert(LegSecuritySubType_98.getString());
    FIX::LegSecurityType LegSecurityType_98("STRING_738198466");
    noLegs_0_1.set(LegSecurityType_98);
    InstrumentLeg_98.insert(LegSecurityType_98.getString());
    FIX::LegSide LegSide_98('1');
    noLegs_0_1.set(LegSide_98);
    InstrumentLeg_98.insert(LegSide_98.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_98("STRING_863558483");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_98);
    InstrumentLeg_98.insert(LegStateOrProvinceOfIssue_98.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_98("JPY");
    noLegs_0_1.set(LegStrikeCurrency_98);
    InstrumentLeg_98.insert(LegStrikeCurrency_98.getString());
    FIX::LegStrikePrice LegStrikePrice_98;
    LegStrikePrice_98.setString("6808396");
    noLegs_0_1.set(LegStrikePrice_98);
    InstrumentLeg_98.insert(LegStrikePrice_98.getString());
    FIX::LegSymbol LegSymbol_98("STRING_2147133752");
    noLegs_0_1.set(LegSymbol_98);
    InstrumentLeg_98.insert(LegSymbol_98.getString());
    FIX::LegSymbolSfx LegSymbolSfx_98("STRING_2016770366");
    noLegs_0_1.set(LegSymbolSfx_98);
    InstrumentLeg_98.insert(LegSymbolSfx_98.getString());
    FIX::LegTimeUnit LegTimeUnit_98("STRING_1759195071");
    noLegs_0_1.set(LegTimeUnit_98);
    InstrumentLeg_98.insert(LegTimeUnit_98.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_98("STRING_420403791");
    noLegs_0_1.set(LegUnitOfMeasure_98);
    InstrumentLeg_98.insert(LegUnitOfMeasure_98.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_98;
    LegUnitOfMeasureQty_98.setString("9957436");
    noLegs_0_1.set(LegUnitOfMeasureQty_98);
    InstrumentLeg_98.insert(LegUnitOfMeasureQty_98.getString());
    all_values.push_back(InstrumentLeg_98);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_173;
      FIX::LegSecurityAltID LegSecurityAltID_173("STRING_1746137874");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_173);
      LegSecAltIDGrp_NoLegSecurityAltID_173.insert(LegSecurityAltID_173.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_173("STRING_1092852052");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_173);
      LegSecAltIDGrp_NoLegSecurityAltID_173.insert(LegSecurityAltIDSource_173.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_173);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_99;
    FIX::EncodedLegIssuer EncodedLegIssuer_99("DATA_498382763");
    noLegs_0_2.set(EncodedLegIssuer_99);
    InstrumentLeg_99.insert(EncodedLegIssuer_99.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_99(1800590760);
    noLegs_0_2.set(EncodedLegIssuerLen_99);
    InstrumentLeg_99.insert(EncodedLegIssuerLen_99.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_99("DATA_1902863896");
    noLegs_0_2.set(EncodedLegSecurityDesc_99);
    InstrumentLeg_99.insert(EncodedLegSecurityDesc_99.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_99(1769866356);
    noLegs_0_2.set(EncodedLegSecurityDescLen_99);
    InstrumentLeg_99.insert(EncodedLegSecurityDescLen_99.getString());
    FIX::LegCFICode LegCFICode_99("STRING_597255075");
    noLegs_0_2.set(LegCFICode_99);
    InstrumentLeg_99.insert(LegCFICode_99.getString());
    FIX::LegContractMultiplier LegContractMultiplier_99;
    LegContractMultiplier_99.setString("18507186");
    noLegs_0_2.set(LegContractMultiplier_99);
    InstrumentLeg_99.insert(LegContractMultiplier_99.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_99(147201880);
    noLegs_0_2.set(LegContractMultiplierUnit_99);
    InstrumentLeg_99.insert(LegContractMultiplierUnit_99.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_99("MONTHYEAR_436860019");
    noLegs_0_2.set(LegContractSettlMonth_99);
    InstrumentLeg_99.insert(LegContractSettlMonth_99.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_99("COUNTRY_1405322456");
    noLegs_0_2.set(LegCountryOfIssue_99);
    InstrumentLeg_99.insert(LegCountryOfIssue_99.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_99("LOCALMKTDATE_2089265314");
    noLegs_0_2.set(LegCouponPaymentDate_99);
    InstrumentLeg_99.insert(LegCouponPaymentDate_99.getString());
    FIX::LegCouponRate LegCouponRate_99;
    LegCouponRate_99.setString("68.110000");
    noLegs_0_2.set(LegCouponRate_99);
    InstrumentLeg_99.insert(LegCouponRate_99.getString());
    FIX::LegCreditRating LegCreditRating_99("STRING_1506980586");
    noLegs_0_2.set(LegCreditRating_99);
    InstrumentLeg_99.insert(LegCreditRating_99.getString());
    FIX::LegCurrency LegCurrency_99("JPY");
    noLegs_0_2.set(LegCurrency_99);
    InstrumentLeg_99.insert(LegCurrency_99.getString());
    FIX::LegDatedDate LegDatedDate_99("LOCALMKTDATE_2055624767");
    noLegs_0_2.set(LegDatedDate_99);
    InstrumentLeg_99.insert(LegDatedDate_99.getString());
    FIX::LegExerciseStyle LegExerciseStyle_99(2110648970);
    noLegs_0_2.set(LegExerciseStyle_99);
    InstrumentLeg_99.insert(LegExerciseStyle_99.getString());
    FIX::LegFactor LegFactor_99;
    LegFactor_99.setString("4984547");
    noLegs_0_2.set(LegFactor_99);
    InstrumentLeg_99.insert(LegFactor_99.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_99(646339585);
    noLegs_0_2.set(LegFlowScheduleType_99);
    InstrumentLeg_99.insert(LegFlowScheduleType_99.getString());
    FIX::LegInstrRegistry LegInstrRegistry_99("STRING_1639486949");
    noLegs_0_2.set(LegInstrRegistry_99);
    InstrumentLeg_99.insert(LegInstrRegistry_99.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_99("LOCALMKTDATE_1362013232");
    noLegs_0_2.set(LegInterestAccrualDate_99);
    InstrumentLeg_99.insert(LegInterestAccrualDate_99.getString());
    FIX::LegIssueDate LegIssueDate_99("LOCALMKTDATE_1142141612");
    noLegs_0_2.set(LegIssueDate_99);
    InstrumentLeg_99.insert(LegIssueDate_99.getString());
    FIX::LegIssuer LegIssuer_99("STRING_1957959795");
    noLegs_0_2.set(LegIssuer_99);
    InstrumentLeg_99.insert(LegIssuer_99.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_99("STRING_2042852890");
    noLegs_0_2.set(LegLocaleOfIssue_99);
    InstrumentLeg_99.insert(LegLocaleOfIssue_99.getString());
    FIX::LegMaturityDate LegMaturityDate_99("LOCALMKTDATE_1141791717");
    noLegs_0_2.set(LegMaturityDate_99);
    InstrumentLeg_99.insert(LegMaturityDate_99.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_99("MONTHYEAR_1827246513");
    noLegs_0_2.set(LegMaturityMonthYear_99);
    InstrumentLeg_99.insert(LegMaturityMonthYear_99.getString());
    FIX::LegMaturityTime LegMaturityTime_99("TZTIMEONLY_1654564313");
    noLegs_0_2.set(LegMaturityTime_99);
    InstrumentLeg_99.insert(LegMaturityTime_99.getString());
    FIX::LegOptAttribute LegOptAttribute_99('1');
    noLegs_0_2.set(LegOptAttribute_99);
    InstrumentLeg_99.insert(LegOptAttribute_99.getString());
    FIX::LegOptionRatio LegOptionRatio_99;
    LegOptionRatio_99.setString("6755065");
    noLegs_0_2.set(LegOptionRatio_99);
    InstrumentLeg_99.insert(LegOptionRatio_99.getString());
    FIX::LegPool LegPool_99("STRING_179434257");
    noLegs_0_2.set(LegPool_99);
    InstrumentLeg_99.insert(LegPool_99.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_99("STRING_1160849735");
    noLegs_0_2.set(LegPriceUnitOfMeasure_99);
    InstrumentLeg_99.insert(LegPriceUnitOfMeasure_99.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_99;
    LegPriceUnitOfMeasureQty_99.setString("17683585");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_99);
    InstrumentLeg_99.insert(LegPriceUnitOfMeasureQty_99.getString());
    FIX::LegProduct LegProduct_99(677817021);
    noLegs_0_2.set(LegProduct_99);
    InstrumentLeg_99.insert(LegProduct_99.getString());
    FIX::LegPutOrCall LegPutOrCall_99(813956847);
    noLegs_0_2.set(LegPutOrCall_99);
    InstrumentLeg_99.insert(LegPutOrCall_99.getString());
    FIX::LegRatioQty LegRatioQty_99;
    LegRatioQty_99.setString("15237388");
    noLegs_0_2.set(LegRatioQty_99);
    InstrumentLeg_99.insert(LegRatioQty_99.getString());
    FIX::LegRedemptionDate LegRedemptionDate_99("LOCALMKTDATE_300199729");
    noLegs_0_2.set(LegRedemptionDate_99);
    InstrumentLeg_99.insert(LegRedemptionDate_99.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_99("STRING_1411211922");
    noLegs_0_2.set(LegRepoCollateralSecurityType_99);
    InstrumentLeg_99.insert(LegRepoCollateralSecurityType_99.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_99;
    LegRepurchaseRate_99.setString("38.520000");
    noLegs_0_2.set(LegRepurchaseRate_99);
    InstrumentLeg_99.insert(LegRepurchaseRate_99.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_99(447401609);
    noLegs_0_2.set(LegRepurchaseTerm_99);
    InstrumentLeg_99.insert(LegRepurchaseTerm_99.getString());
    FIX::LegSecurityDesc LegSecurityDesc_99("STRING_1848071941");
    noLegs_0_2.set(LegSecurityDesc_99);
    InstrumentLeg_99.insert(LegSecurityDesc_99.getString());
    FIX::LegSecurityExchange LegSecurityExchange_99("EXCHANGE_484812661");
    noLegs_0_2.set(LegSecurityExchange_99);
    InstrumentLeg_99.insert(LegSecurityExchange_99.getString());
    FIX::LegSecurityID LegSecurityID_99("STRING_389183276");
    noLegs_0_2.set(LegSecurityID_99);
    InstrumentLeg_99.insert(LegSecurityID_99.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_99("STRING_2104738753");
    noLegs_0_2.set(LegSecurityIDSource_99);
    InstrumentLeg_99.insert(LegSecurityIDSource_99.getString());
    FIX::LegSecuritySubType LegSecuritySubType_99("STRING_1991793247");
    noLegs_0_2.set(LegSecuritySubType_99);
    InstrumentLeg_99.insert(LegSecuritySubType_99.getString());
    FIX::LegSecurityType LegSecurityType_99("STRING_1172501737");
    noLegs_0_2.set(LegSecurityType_99);
    InstrumentLeg_99.insert(LegSecurityType_99.getString());
    FIX::LegSide LegSide_99('2');
    noLegs_0_2.set(LegSide_99);
    InstrumentLeg_99.insert(LegSide_99.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_99("STRING_1899934366");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_99);
    InstrumentLeg_99.insert(LegStateOrProvinceOfIssue_99.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_99("JPY");
    noLegs_0_2.set(LegStrikeCurrency_99);
    InstrumentLeg_99.insert(LegStrikeCurrency_99.getString());
    FIX::LegStrikePrice LegStrikePrice_99;
    LegStrikePrice_99.setString("3987903");
    noLegs_0_2.set(LegStrikePrice_99);
    InstrumentLeg_99.insert(LegStrikePrice_99.getString());
    FIX::LegSymbol LegSymbol_99("STRING_627670361");
    noLegs_0_2.set(LegSymbol_99);
    InstrumentLeg_99.insert(LegSymbol_99.getString());
    FIX::LegSymbolSfx LegSymbolSfx_99("STRING_1803958734");
    noLegs_0_2.set(LegSymbolSfx_99);
    InstrumentLeg_99.insert(LegSymbolSfx_99.getString());
    FIX::LegTimeUnit LegTimeUnit_99("STRING_1540931916");
    noLegs_0_2.set(LegTimeUnit_99);
    InstrumentLeg_99.insert(LegTimeUnit_99.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_99("STRING_438146508");
    noLegs_0_2.set(LegUnitOfMeasure_99);
    InstrumentLeg_99.insert(LegUnitOfMeasure_99.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_99;
    LegUnitOfMeasureQty_99.setString("16993279");
    noLegs_0_2.set(LegUnitOfMeasureQty_99);
    InstrumentLeg_99.insert(LegUnitOfMeasureQty_99.getString());
    all_values.push_back(InstrumentLeg_99);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_174;
      FIX::LegSecurityAltID LegSecurityAltID_174("STRING_117909373");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_174);
      LegSecAltIDGrp_NoLegSecurityAltID_174.insert(LegSecurityAltID_174.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_174("STRING_1206408641");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_174);
      LegSecAltIDGrp_NoLegSecurityAltID_174.insert(LegSecurityAltIDSource_174.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_174);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_175;
      FIX::LegSecurityAltID LegSecurityAltID_175("STRING_2097435493");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_175);
      LegSecAltIDGrp_NoLegSecurityAltID_175.insert(LegSecurityAltID_175.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_175("STRING_793415893");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_175);
      LegSecAltIDGrp_NoLegSecurityAltID_175.insert(LegSecurityAltIDSource_175.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_175);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_70;
  FIX::AttachmentPoint AttachmentPoint_70;
  AttachmentPoint_70.setString("28.990000");
  msg.set(AttachmentPoint_70);
  Instrument_70.insert(AttachmentPoint_70.getString());
  FIX::CFICode CFICode_70("STRING_1110801580");
  msg.set(CFICode_70);
  Instrument_70.insert(CFICode_70.getString());
  FIX::CPProgram CPProgram_70(1);
  msg.set(CPProgram_70);
  Instrument_70.insert(CPProgram_70.getString());
  FIX::CPRegType CPRegType_70("STRING_2063659920");
  msg.set(CPRegType_70);
  Instrument_70.insert(CPRegType_70.getString());
  FIX::CapPrice CapPrice_70;
  CapPrice_70.setString("19247584");
  msg.set(CapPrice_70);
  Instrument_70.insert(CapPrice_70.getString());
  FIX::ContractMultiplier ContractMultiplier_70;
  ContractMultiplier_70.setString("19380296");
  msg.set(ContractMultiplier_70);
  Instrument_70.insert(ContractMultiplier_70.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_70(2);
  msg.set(ContractMultiplierUnit_70);
  Instrument_70.insert(ContractMultiplierUnit_70.getString());
  FIX::ContractSettlMonth ContractSettlMonth_70("MONTHYEAR_1188486701");
  msg.set(ContractSettlMonth_70);
  Instrument_70.insert(ContractSettlMonth_70.getString());
  FIX::CountryOfIssue CountryOfIssue_70("COUNTRY_1017519842");
  msg.set(CountryOfIssue_70);
  Instrument_70.insert(CountryOfIssue_70.getString());
  FIX::CouponPaymentDate CouponPaymentDate_70("LOCALMKTDATE_663777611");
  msg.set(CouponPaymentDate_70);
  Instrument_70.insert(CouponPaymentDate_70.getString());
  FIX::CouponRate CouponRate_70;
  CouponRate_70.setString("49.950000");
  msg.set(CouponRate_70);
  Instrument_70.insert(CouponRate_70.getString());
  FIX::CreditRating CreditRating_70("STRING_1502332503");
  msg.set(CreditRating_70);
  Instrument_70.insert(CreditRating_70.getString());
  FIX::DatedDate DatedDate_70("LOCALMKTDATE_1052960887");
  msg.set(DatedDate_70);
  Instrument_70.insert(DatedDate_70.getString());
  FIX::DetachmentPoint DetachmentPoint_70;
  DetachmentPoint_70.setString("1.000000");
  msg.set(DetachmentPoint_70);
  Instrument_70.insert(DetachmentPoint_70.getString());
  FIX::EncodedIssuer EncodedIssuer_70("DATA_1346642102");
  msg.set(EncodedIssuer_70);
  Instrument_70.insert(EncodedIssuer_70.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_70(77978976);
  msg.set(EncodedIssuerLen_70);
  Instrument_70.insert(EncodedIssuerLen_70.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_70("DATA_789820853");
  msg.set(EncodedSecurityDesc_70);
  Instrument_70.insert(EncodedSecurityDesc_70.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_70(1099092820);
  msg.set(EncodedSecurityDescLen_70);
  Instrument_70.insert(EncodedSecurityDescLen_70.getString());
  FIX::ExerciseStyle ExerciseStyle_70(2);
  msg.set(ExerciseStyle_70);
  Instrument_70.insert(ExerciseStyle_70.getString());
  FIX::Factor Factor_70;
  Factor_70.setString("12317663");
  msg.set(Factor_70);
  Instrument_70.insert(Factor_70.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_70(false);
  msg.set(FlexProductEligibilityIndicator_70);
  Instrument_70.insert(FlexProductEligibilityIndicator_70.getString());
  FIX::FlexibleIndicator FlexibleIndicator_70(false);
  msg.set(FlexibleIndicator_70);
  Instrument_70.insert(FlexibleIndicator_70.getString());
  FIX::FloorPrice FloorPrice_70;
  FloorPrice_70.setString("8882414");
  msg.set(FloorPrice_70);
  Instrument_70.insert(FloorPrice_70.getString());
  FIX::FlowScheduleType FlowScheduleType_70(1);
  msg.set(FlowScheduleType_70);
  Instrument_70.insert(FlowScheduleType_70.getString());
  FIX::InstrRegistry InstrRegistry_70("STRING_131979257");
  msg.set(InstrRegistry_70);
  Instrument_70.insert(InstrRegistry_70.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_70('4');
  msg.set(InstrmtAssignmentMethod_70);
  Instrument_70.insert(InstrmtAssignmentMethod_70.getString());
  FIX::InterestAccrualDate InterestAccrualDate_70("LOCALMKTDATE_1426571376");
  msg.set(InterestAccrualDate_70);
  Instrument_70.insert(InterestAccrualDate_70.getString());
  FIX::IssueDate IssueDate_70("LOCALMKTDATE_249888631");
  msg.set(IssueDate_70);
  Instrument_70.insert(IssueDate_70.getString());
  FIX::Issuer Issuer_70("STRING_1646494411");
  msg.set(Issuer_70);
  Instrument_70.insert(Issuer_70.getString());
  FIX::ListMethod ListMethod_70(0);
  msg.set(ListMethod_70);
  Instrument_70.insert(ListMethod_70.getString());
  FIX::LocaleOfIssue LocaleOfIssue_70("STRING_1043304524");
  msg.set(LocaleOfIssue_70);
  Instrument_70.insert(LocaleOfIssue_70.getString());
  FIX::MaturityDate MaturityDate_70("LOCALMKTDATE_884853662");
  msg.set(MaturityDate_70);
  Instrument_70.insert(MaturityDate_70.getString());
  FIX::MaturityMonthYear MaturityMonthYear_70("MONTHYEAR_339841154");
  msg.set(MaturityMonthYear_70);
  Instrument_70.insert(MaturityMonthYear_70.getString());
  FIX::MaturityTime MaturityTime_70("TZTIMEONLY_1457595342");
  msg.set(MaturityTime_70);
  Instrument_70.insert(MaturityTime_70.getString());
  FIX::MinPriceIncrement MinPriceIncrement_70;
  MinPriceIncrement_70.setString("8010299");
  msg.set(MinPriceIncrement_70);
  Instrument_70.insert(MinPriceIncrement_70.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_70;
  MinPriceIncrementAmount_70.setString("1171159");
  msg.set(MinPriceIncrementAmount_70);
  Instrument_70.insert(MinPriceIncrementAmount_70.getString());
  FIX::NTPositionLimit NTPositionLimit_70(1248141331);
  msg.set(NTPositionLimit_70);
  Instrument_70.insert(NTPositionLimit_70.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_70;
  NotionalPercentageOutstanding_70.setString("59.360000");
  msg.set(NotionalPercentageOutstanding_70);
  Instrument_70.insert(NotionalPercentageOutstanding_70.getString());
  FIX::OptAttribute OptAttribute_70('1');
  msg.set(OptAttribute_70);
  Instrument_70.insert(OptAttribute_70.getString());
  FIX::OptPayoutAmount OptPayoutAmount_70;
  OptPayoutAmount_70.setString("1181775");
  msg.set(OptPayoutAmount_70);
  Instrument_70.insert(OptPayoutAmount_70.getString());
  FIX::OptPayoutType OptPayoutType_70(3);
  msg.set(OptPayoutType_70);
  Instrument_70.insert(OptPayoutType_70.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_70;
  OriginalNotionalPercentageOutstanding_70.setString("39.820000");
  msg.set(OriginalNotionalPercentageOutstanding_70);
  Instrument_70.insert(OriginalNotionalPercentageOutstanding_70.getString());
  FIX::Pool Pool_70("STRING_1620510028");
  msg.set(Pool_70);
  Instrument_70.insert(Pool_70.getString());
  FIX::PositionLimit PositionLimit_70(586660786);
  msg.set(PositionLimit_70);
  Instrument_70.insert(PositionLimit_70.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_70("STRING_INT");
  msg.set(PriceQuoteMethod_70);
  Instrument_70.insert(PriceQuoteMethod_70.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_70("STRING_819668482");
  msg.set(PriceUnitOfMeasure_70);
  Instrument_70.insert(PriceUnitOfMeasure_70.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_70;
  PriceUnitOfMeasureQty_70.setString("6646397");
  msg.set(PriceUnitOfMeasureQty_70);
  Instrument_70.insert(PriceUnitOfMeasureQty_70.getString());
  FIX::Product Product_72(13);
  msg.set(Product_72);
  Instrument_70.insert(Product_72.getString());
  FIX::ProductComplex ProductComplex_70("STRING_1918761302");
  msg.set(ProductComplex_70);
  Instrument_70.insert(ProductComplex_70.getString());
  FIX::PutOrCall PutOrCall_70(1);
  msg.set(PutOrCall_70);
  Instrument_70.insert(PutOrCall_70.getString());
  FIX::RedemptionDate RedemptionDate_70("LOCALMKTDATE_767627642");
  msg.set(RedemptionDate_70);
  Instrument_70.insert(RedemptionDate_70.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_70("STRING_1269160778");
  msg.set(RepoCollateralSecurityType_70);
  Instrument_70.insert(RepoCollateralSecurityType_70.getString());
  FIX::RepurchaseRate RepurchaseRate_70;
  RepurchaseRate_70.setString("85.480000");
  msg.set(RepurchaseRate_70);
  Instrument_70.insert(RepurchaseRate_70.getString());
  FIX::RepurchaseTerm RepurchaseTerm_70(1655869084);
  msg.set(RepurchaseTerm_70);
  Instrument_70.insert(RepurchaseTerm_70.getString());
  FIX::RestructuringType RestructuringType_70("STRING_MR");
  msg.set(RestructuringType_70);
  Instrument_70.insert(RestructuringType_70.getString());
  FIX::SecurityDesc SecurityDesc_70("STRING_1704097806");
  msg.set(SecurityDesc_70);
  Instrument_70.insert(SecurityDesc_70.getString());
  FIX::SecurityExchange SecurityExchange_70("EXCHANGE_2095954854");
  msg.set(SecurityExchange_70);
  Instrument_70.insert(SecurityExchange_70.getString());
  FIX::SecurityGroup SecurityGroup_70("STRING_1439579898");
  msg.set(SecurityGroup_70);
  Instrument_70.insert(SecurityGroup_70.getString());
  FIX::SecurityID SecurityID_70("STRING_1953986437");
  msg.set(SecurityID_70);
  Instrument_70.insert(SecurityID_70.getString());
  FIX::SecurityIDSource SecurityIDSource_70("STRING_4");
  msg.set(SecurityIDSource_70);
  Instrument_70.insert(SecurityIDSource_70.getString());
  FIX::SecurityStatus SecurityStatus_70("STRING_1");
  msg.set(SecurityStatus_70);
  Instrument_70.insert(SecurityStatus_70.getString());
  FIX::SecuritySubType SecuritySubType_71("STRING_849807313");
  msg.set(SecuritySubType_71);
  Instrument_70.insert(SecuritySubType_71.getString());
  FIX::SecurityType SecurityType_72("STRING_XCN");
  msg.set(SecurityType_72);
  Instrument_70.insert(SecurityType_72.getString());
  FIX::Seniority Seniority_70("STRING_SD");
  msg.set(Seniority_70);
  Instrument_70.insert(Seniority_70.getString());
  FIX::SettlMethod SettlMethod_70('P');
  msg.set(SettlMethod_70);
  Instrument_70.insert(SettlMethod_70.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_70("STRING_1133365566");
  msg.set(SettleOnOpenFlag_70);
  Instrument_70.insert(SettleOnOpenFlag_70.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_70("STRING_1125576560");
  msg.set(StateOrProvinceOfIssue_70);
  Instrument_70.insert(StateOrProvinceOfIssue_70.getString());
  FIX::StrikeCurrency StrikeCurrency_70("JPY");
  msg.set(StrikeCurrency_70);
  Instrument_70.insert(StrikeCurrency_70.getString());
  FIX::StrikeMultiplier StrikeMultiplier_70;
  StrikeMultiplier_70.setString("2836955");
  msg.set(StrikeMultiplier_70);
  Instrument_70.insert(StrikeMultiplier_70.getString());
  FIX::StrikePrice StrikePrice_70;
  StrikePrice_70.setString("15262378");
  msg.set(StrikePrice_70);
  Instrument_70.insert(StrikePrice_70.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_70(2);
  msg.set(StrikePriceBoundaryMethod_70);
  Instrument_70.insert(StrikePriceBoundaryMethod_70.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_70;
  StrikePriceBoundaryPrecision_70.setString("95.300000");
  msg.set(StrikePriceBoundaryPrecision_70);
  Instrument_70.insert(StrikePriceBoundaryPrecision_70.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_70(2);
  msg.set(StrikePriceDeterminationMethod_70);
  Instrument_70.insert(StrikePriceDeterminationMethod_70.getString());
  FIX::StrikeValue StrikeValue_70;
  StrikeValue_70.setString("1236485");
  msg.set(StrikeValue_70);
  Instrument_70.insert(StrikeValue_70.getString());
  FIX::Symbol Symbol_70("STRING_1224413613");
  msg.set(Symbol_70);
  Instrument_70.insert(Symbol_70.getString());
  FIX::SymbolSfx SymbolSfx_70("STRING_WI");
  msg.set(SymbolSfx_70);
  Instrument_70.insert(SymbolSfx_70.getString());
  FIX::TimeUnit TimeUnit_70("STRING_Wk");
  msg.set(TimeUnit_70);
  Instrument_70.insert(TimeUnit_70.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_70(1);
  msg.set(UnderlyingPriceDeterminationMethod_70);
  Instrument_70.insert(UnderlyingPriceDeterminationMethod_70.getString());
  FIX::UnitOfMeasure UnitOfMeasure_70("STRING_Gal");
  msg.set(UnitOfMeasure_70);
  Instrument_70.insert(UnitOfMeasure_70.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_70;
  UnitOfMeasureQty_70.setString("5190904");
  msg.set(UnitOfMeasureQty_70);
  Instrument_70.insert(UnitOfMeasureQty_70.getString());
  FIX::ValuationMethod ValuationMethod_70("STRING_CDS");
  msg.set(ValuationMethod_70);
  Instrument_70.insert(ValuationMethod_70.getString());
  all_values.push_back(Instrument_70);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_133;
    FIX::ComplexEventCondition ComplexEventCondition_133(2);
    noComplexEvents_0_0.set(ComplexEventCondition_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventCondition_133.getString());
    FIX::ComplexEventPrice ComplexEventPrice_133;
    ComplexEventPrice_133.setString("10362879");
    noComplexEvents_0_0.set(ComplexEventPrice_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventPrice_133.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_133(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceBoundaryMethod_133.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_133;
    ComplexEventPriceBoundaryPrecision_133.setString("31.590000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceBoundaryPrecision_133.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_133(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventPriceTimeType_133.getString());
    FIX::ComplexEventType ComplexEventType_133(5);
    noComplexEvents_0_0.set(ComplexEventType_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexEventType_133.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_133;
    ComplexOptPayoutAmount_133.setString("14543259");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_133);
    ComplexEvents_NoComplexEvents_133.insert(ComplexOptPayoutAmount_133.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_133);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_274;
      FIX::ComplexEventEndDate ComplexEventEndDate_274(FIX::UTCTIMESTAMP(6, 26, 42, 5, 102006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_274);
      ComplexEventDates_NoComplexEventDates_274.insert(ComplexEventEndDate_274.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_274(FIX::UTCTIMESTAMP(7, 2, 37, 5, 102012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_274);
      ComplexEventDates_NoComplexEventDates_274.insert(ComplexEventStartDate_274.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_274);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_541;
        FIX::ComplexEventEndTime ComplexEventEndTime_541(FIX::UTCTIMEONLY(13, 34, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_541);
        ComplexEventTimes_NoComplexEventTimes_541.insert(ComplexEventEndTime_541.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_541(FIX::UTCTIMEONLY(7, 33, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_541);
        ComplexEventTimes_NoComplexEventTimes_541.insert(ComplexEventStartTime_541.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_541);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_542;
        FIX::ComplexEventEndTime ComplexEventEndTime_542(FIX::UTCTIMEONLY(16, 33, 32));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_542);
        ComplexEventTimes_NoComplexEventTimes_542.insert(ComplexEventEndTime_542.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_542(FIX::UTCTIMEONLY(16, 21, 4));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_542);
        ComplexEventTimes_NoComplexEventTimes_542.insert(ComplexEventStartTime_542.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_542);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_543;
        FIX::ComplexEventEndTime ComplexEventEndTime_543(FIX::UTCTIMEONLY(3, 30, 26));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_543);
        ComplexEventTimes_NoComplexEventTimes_543.insert(ComplexEventEndTime_543.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_543(FIX::UTCTIMEONLY(7, 20, 49));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_543);
        ComplexEventTimes_NoComplexEventTimes_543.insert(ComplexEventStartTime_543.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_543);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_275;
      FIX::ComplexEventEndDate ComplexEventEndDate_275(FIX::UTCTIMESTAMP(3, 18, 8, 16, 52010));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_275);
      ComplexEventDates_NoComplexEventDates_275.insert(ComplexEventEndDate_275.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_275(FIX::UTCTIMESTAMP(21, 3, 56, 21, 32000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_275);
      ComplexEventDates_NoComplexEventDates_275.insert(ComplexEventStartDate_275.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_275);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_544;
        FIX::ComplexEventEndTime ComplexEventEndTime_544(FIX::UTCTIMEONLY(14, 33, 56));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_544);
        ComplexEventTimes_NoComplexEventTimes_544.insert(ComplexEventEndTime_544.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_544(FIX::UTCTIMEONLY(18, 9, 8));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_544);
        ComplexEventTimes_NoComplexEventTimes_544.insert(ComplexEventStartTime_544.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_544);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_276;
      FIX::ComplexEventEndDate ComplexEventEndDate_276(FIX::UTCTIMESTAMP(16, 30, 0, 0, 72012));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_276);
      ComplexEventDates_NoComplexEventDates_276.insert(ComplexEventEndDate_276.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_276(FIX::UTCTIMESTAMP(1, 27, 3, 21, 82007));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_276);
      ComplexEventDates_NoComplexEventDates_276.insert(ComplexEventStartDate_276.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_276);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_545;
        FIX::ComplexEventEndTime ComplexEventEndTime_545(FIX::UTCTIMEONLY(17, 36, 42));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_545);
        ComplexEventTimes_NoComplexEventTimes_545.insert(ComplexEventEndTime_545.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_545(FIX::UTCTIMEONLY(19, 4, 34));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_545);
        ComplexEventTimes_NoComplexEventTimes_545.insert(ComplexEventStartTime_545.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_545);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_546;
        FIX::ComplexEventEndTime ComplexEventEndTime_546(FIX::UTCTIMEONLY(18, 0, 42));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_546);
        ComplexEventTimes_NoComplexEventTimes_546.insert(ComplexEventEndTime_546.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_546(FIX::UTCTIMEONLY(18, 51, 14));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_546);
        ComplexEventTimes_NoComplexEventTimes_546.insert(ComplexEventStartTime_546.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_546);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_547;
        FIX::ComplexEventEndTime ComplexEventEndTime_547(FIX::UTCTIMEONLY(23, 45, 0));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_547);
        ComplexEventTimes_NoComplexEventTimes_547.insert(ComplexEventEndTime_547.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_547(FIX::UTCTIMEONLY(19, 12, 49));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_547);
        ComplexEventTimes_NoComplexEventTimes_547.insert(ComplexEventStartTime_547.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_547);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_134;
    FIX::ComplexEventCondition ComplexEventCondition_134(1);
    noComplexEvents_0_1.set(ComplexEventCondition_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventCondition_134.getString());
    FIX::ComplexEventPrice ComplexEventPrice_134;
    ComplexEventPrice_134.setString("14698194");
    noComplexEvents_0_1.set(ComplexEventPrice_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventPrice_134.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_134(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceBoundaryMethod_134.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_134;
    ComplexEventPriceBoundaryPrecision_134.setString("38.210000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceBoundaryPrecision_134.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_134(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceTimeType_134.getString());
    FIX::ComplexEventType ComplexEventType_134(2);
    noComplexEvents_0_1.set(ComplexEventType_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexEventType_134.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_134;
    ComplexOptPayoutAmount_134.setString("12235965");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_134);
    ComplexEvents_NoComplexEvents_134.insert(ComplexOptPayoutAmount_134.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_134);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_277;
      FIX::ComplexEventEndDate ComplexEventEndDate_277(FIX::UTCTIMESTAMP(23, 51, 47, 22, 82002));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_277);
      ComplexEventDates_NoComplexEventDates_277.insert(ComplexEventEndDate_277.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_277(FIX::UTCTIMESTAMP(17, 6, 23, 24, 52006));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_277);
      ComplexEventDates_NoComplexEventDates_277.insert(ComplexEventStartDate_277.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_277);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_548;
        FIX::ComplexEventEndTime ComplexEventEndTime_548(FIX::UTCTIMEONLY(22, 11, 48));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_548);
        ComplexEventTimes_NoComplexEventTimes_548.insert(ComplexEventEndTime_548.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_548(FIX::UTCTIMEONLY(6, 52, 43));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_548);
        ComplexEventTimes_NoComplexEventTimes_548.insert(ComplexEventStartTime_548.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_548);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_549;
        FIX::ComplexEventEndTime ComplexEventEndTime_549(FIX::UTCTIMEONLY(16, 28, 27));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_549);
        ComplexEventTimes_NoComplexEventTimes_549.insert(ComplexEventEndTime_549.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_549(FIX::UTCTIMEONLY(21, 14, 57));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_549);
        ComplexEventTimes_NoComplexEventTimes_549.insert(ComplexEventStartTime_549.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_549);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_278;
      FIX::ComplexEventEndDate ComplexEventEndDate_278(FIX::UTCTIMESTAMP(1, 48, 2, 23, 82014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_278);
      ComplexEventDates_NoComplexEventDates_278.insert(ComplexEventEndDate_278.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_278(FIX::UTCTIMESTAMP(0, 14, 18, 12, 72005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_278);
      ComplexEventDates_NoComplexEventDates_278.insert(ComplexEventStartDate_278.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_278);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_550;
        FIX::ComplexEventEndTime ComplexEventEndTime_550(FIX::UTCTIMEONLY(3, 38, 14));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_550);
        ComplexEventTimes_NoComplexEventTimes_550.insert(ComplexEventEndTime_550.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_550(FIX::UTCTIMEONLY(9, 6, 52));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_550);
        ComplexEventTimes_NoComplexEventTimes_550.insert(ComplexEventStartTime_550.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_550);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_551;
        FIX::ComplexEventEndTime ComplexEventEndTime_551(FIX::UTCTIMEONLY(15, 21, 3));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_551);
        ComplexEventTimes_NoComplexEventTimes_551.insert(ComplexEventEndTime_551.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_551(FIX::UTCTIMEONLY(10, 17, 0));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_551);
        ComplexEventTimes_NoComplexEventTimes_551.insert(ComplexEventStartTime_551.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_551);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_552;
        FIX::ComplexEventEndTime ComplexEventEndTime_552(FIX::UTCTIMEONLY(22, 48, 30));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_552);
        ComplexEventTimes_NoComplexEventTimes_552.insert(ComplexEventEndTime_552.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_552(FIX::UTCTIMEONLY(11, 38, 4));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_552);
        ComplexEventTimes_NoComplexEventTimes_552.insert(ComplexEventStartTime_552.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_552);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_279;
      FIX::ComplexEventEndDate ComplexEventEndDate_279(FIX::UTCTIMESTAMP(20, 15, 4, 18, 12013));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_279);
      ComplexEventDates_NoComplexEventDates_279.insert(ComplexEventEndDate_279.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_279(FIX::UTCTIMESTAMP(15, 1, 18, 16, 32005));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_279);
      ComplexEventDates_NoComplexEventDates_279.insert(ComplexEventStartDate_279.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_279);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_553;
        FIX::ComplexEventEndTime ComplexEventEndTime_553(FIX::UTCTIMEONLY(20, 45, 25));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_553);
        ComplexEventTimes_NoComplexEventTimes_553.insert(ComplexEventEndTime_553.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_553(FIX::UTCTIMEONLY(23, 34, 19));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_553);
        ComplexEventTimes_NoComplexEventTimes_553.insert(ComplexEventStartTime_553.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_553);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_554;
        FIX::ComplexEventEndTime ComplexEventEndTime_554(FIX::UTCTIMEONLY(20, 59, 58));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_554);
        ComplexEventTimes_NoComplexEventTimes_554.insert(ComplexEventEndTime_554.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_554(FIX::UTCTIMEONLY(22, 29, 17));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_554);
        ComplexEventTimes_NoComplexEventTimes_554.insert(ComplexEventStartTime_554.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_554);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_555;
        FIX::ComplexEventEndTime ComplexEventEndTime_555(FIX::UTCTIMEONLY(5, 24, 13));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_555);
        ComplexEventTimes_NoComplexEventTimes_555.insert(ComplexEventEndTime_555.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_555(FIX::UTCTIMEONLY(0, 36, 40));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_555);
        ComplexEventTimes_NoComplexEventTimes_555.insert(ComplexEventStartTime_555.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_555);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
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
    multiset<string> EvntGrp_NoEvents_136;
    FIX::EventDate EventDate_136("LOCALMKTDATE_1218839018");
    noEvents_0_0.set(EventDate_136);
    EvntGrp_NoEvents_136.insert(EventDate_136.getString());
    FIX::EventPx EventPx_136;
    EventPx_136.setString("3507483");
    noEvents_0_0.set(EventPx_136);
    EvntGrp_NoEvents_136.insert(EventPx_136.getString());
    FIX::EventText EventText_136("STRING_1618811159");
    noEvents_0_0.set(EventText_136);
    EvntGrp_NoEvents_136.insert(EventText_136.getString());
    FIX::EventTime EventTime_136(FIX::UTCTIMESTAMP(20, 24, 30, 8, 22013));
    noEvents_0_0.set(EventTime_136);
    EvntGrp_NoEvents_136.insert(EventTime_136.getString());
    FIX::EventType EventType_136(99);
    noEvents_0_0.set(EventType_136);
    EvntGrp_NoEvents_136.insert(EventType_136.getString());
    all_values.push_back(EvntGrp_NoEvents_136);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_137;
    FIX::EventDate EventDate_137("LOCALMKTDATE_2089701661");
    noEvents_0_1.set(EventDate_137);
    EvntGrp_NoEvents_137.insert(EventDate_137.getString());
    FIX::EventPx EventPx_137;
    EventPx_137.setString("9504297");
    noEvents_0_1.set(EventPx_137);
    EvntGrp_NoEvents_137.insert(EventPx_137.getString());
    FIX::EventText EventText_137("STRING_292461018");
    noEvents_0_1.set(EventText_137);
    EvntGrp_NoEvents_137.insert(EventText_137.getString());
    FIX::EventTime EventTime_137(FIX::UTCTIMESTAMP(5, 17, 11, 6, 42016));
    noEvents_0_1.set(EventTime_137);
    EvntGrp_NoEvents_137.insert(EventTime_137.getString());
    FIX::EventType EventType_137(13);
    noEvents_0_1.set(EventType_137);
    EvntGrp_NoEvents_137.insert(EventType_137.getString());
    all_values.push_back(EvntGrp_NoEvents_137);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_132;
    FIX::InstrumentPartyID InstrumentPartyID_132("STRING_1628906446");
    noInstrumentParties_0_0.set(InstrumentPartyID_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyID_132.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_132('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyIDSource_132.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_132(931643462);
    noInstrumentParties_0_0.set(InstrumentPartyRole_132);
    InstrumentParties_NoInstrumentParties_132.insert(InstrumentPartyRole_132.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_132);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261;
      FIX::InstrumentPartySubID InstrumentPartySubID_261("STRING_905558117");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_261);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261.insert(InstrumentPartySubID_261.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_261(1393150598);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_261);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261.insert(InstrumentPartySubIDType_261.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262;
      FIX::InstrumentPartySubID InstrumentPartySubID_262("STRING_1689704514");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_262);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262.insert(InstrumentPartySubID_262.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_262(1956221316);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_262);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262.insert(InstrumentPartySubIDType_262.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263;
      FIX::InstrumentPartySubID InstrumentPartySubID_263("STRING_464505968");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_263);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263.insert(InstrumentPartySubID_263.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_263(2040452865);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_263);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263.insert(InstrumentPartySubIDType_263.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_146;
    FIX::SecurityAltID SecurityAltID_146("STRING_2100662605");
    noSecurityAltID_0_0.set(SecurityAltID_146);
    SecAltIDGrp_NoSecurityAltID_146.insert(SecurityAltID_146.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_146("STRING_716871045");
    noSecurityAltID_0_0.set(SecurityAltIDSource_146);
    SecAltIDGrp_NoSecurityAltID_146.insert(SecurityAltIDSource_146.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_146);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_147;
    FIX::SecurityAltID SecurityAltID_147("STRING_714673604");
    noSecurityAltID_0_1.set(SecurityAltID_147);
    SecAltIDGrp_NoSecurityAltID_147.insert(SecurityAltID_147.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_147("STRING_61560887");
    noSecurityAltID_0_1.set(SecurityAltIDSource_147);
    SecAltIDGrp_NoSecurityAltID_147.insert(SecurityAltIDSource_147.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_147);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_140;
  FIX::SecurityXML SecurityXML_141("XMLDATA_356341637");
  msg.set(SecurityXML_141);
  FIX::SecurityXMLLen SecurityXMLLen_70(1729386585);
  msg.set(SecurityXMLLen_70);
  FIX::SecurityXMLSchema SecurityXMLSchema_70("STRING_971878843");
  msg.set(SecurityXMLSchema_70);
  SecurityXML_140.insert(SecurityXMLSchema_70.getString());
  all_values.push_back(SecurityXML_140);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_130;
    FIX::PartyID PartyID_130("STRING_1671604598");
    noPartyIDs_0_0.set(PartyID_130);
    Parties_NoPartyIDs_130.insert(PartyID_130.getString());
    FIX::PartyIDSource PartyIDSource_130('C');
    noPartyIDs_0_0.set(PartyIDSource_130);
    Parties_NoPartyIDs_130.insert(PartyIDSource_130.getString());
    FIX::PartyRole PartyRole_130(60);
    noPartyIDs_0_0.set(PartyRole_130);
    Parties_NoPartyIDs_130.insert(PartyRole_130.getString());
    all_values.push_back(Parties_NoPartyIDs_130);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_257;
      FIX::PartySubID PartySubID_257("STRING_2056002954");
      noPartySubIDs_0_1_0.set(PartySubID_257);
      PtysSubGrp_NoPartySubIDs_257.insert(PartySubID_257.getString());
      FIX::PartySubIDType PartySubIDType_257(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_257);
      PtysSubGrp_NoPartySubIDs_257.insert(PartySubIDType_257.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_257);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_131;
    FIX::PartyID PartyID_131("STRING_155673243");
    noPartyIDs_0_1.set(PartyID_131);
    Parties_NoPartyIDs_131.insert(PartyID_131.getString());
    FIX::PartyIDSource PartyIDSource_131('2');
    noPartyIDs_0_1.set(PartyIDSource_131);
    Parties_NoPartyIDs_131.insert(PartyIDSource_131.getString());
    FIX::PartyRole PartyRole_131(36);
    noPartyIDs_0_1.set(PartyRole_131);
    Parties_NoPartyIDs_131.insert(PartyRole_131.getString());
    all_values.push_back(Parties_NoPartyIDs_131);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_258;
      FIX::PartySubID PartySubID_258("STRING_481482892");
      noPartySubIDs_1_1_0.set(PartySubID_258);
      PtysSubGrp_NoPartySubIDs_258.insert(PartySubID_258.getString());
      FIX::PartySubIDType PartySubIDType_258(9);
      noPartySubIDs_1_1_0.set(PartySubIDType_258);
      PtysSubGrp_NoPartySubIDs_258.insert(PartySubIDType_258.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_258);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_259;
      FIX::PartySubID PartySubID_259("STRING_1062910401");
      noPartySubIDs_1_1_1.set(PartySubID_259);
      PtysSubGrp_NoPartySubIDs_259.insert(PartySubID_259.getString());
      FIX::PartySubIDType PartySubIDType_259(1);
      noPartySubIDs_1_1_1.set(PartySubIDType_259);
      PtysSubGrp_NoPartySubIDs_259.insert(PartySubIDType_259.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_259);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_120;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_120("DATA_1197264875");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingIssuer_120.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_120(1036415558);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingIssuerLen_120.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_120("DATA_1502405323");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingSecurityDesc_120.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_120(739485742);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_120);
    UnderlyingInstrument_120.insert(EncodedUnderlyingSecurityDescLen_120.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_120;
    UnderlyingAdjustedQuantity_120.setString("8451532");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_120);
    UnderlyingInstrument_120.insert(UnderlyingAdjustedQuantity_120.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_120;
    UnderlyingAllocationPercent_120.setString("12.920000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_120);
    UnderlyingInstrument_120.insert(UnderlyingAllocationPercent_120.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_120;
    UnderlyingAttachmentPoint_120.setString("49.590000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_120);
    UnderlyingInstrument_120.insert(UnderlyingAttachmentPoint_120.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_120("STRING_125218406");
    noUnderlyings_0_0.set(UnderlyingCFICode_120);
    UnderlyingInstrument_120.insert(UnderlyingCFICode_120.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_120("STRING_1920090249");
    noUnderlyings_0_0.set(UnderlyingCPProgram_120);
    UnderlyingInstrument_120.insert(UnderlyingCPProgram_120.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_120("STRING_1349326005");
    noUnderlyings_0_0.set(UnderlyingCPRegType_120);
    UnderlyingInstrument_120.insert(UnderlyingCPRegType_120.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_120;
    UnderlyingCapValue_120.setString("8398920");
    noUnderlyings_0_0.set(UnderlyingCapValue_120);
    UnderlyingInstrument_120.insert(UnderlyingCapValue_120.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_120;
    UnderlyingCashAmount_120.setString("19816511");
    noUnderlyings_0_0.set(UnderlyingCashAmount_120);
    UnderlyingInstrument_120.insert(UnderlyingCashAmount_120.getString());
    FIX::UnderlyingCashType UnderlyingCashType_120("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_120);
    UnderlyingInstrument_120.insert(UnderlyingCashType_120.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_120;
    UnderlyingContractMultiplier_120.setString("4217949");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_120);
    UnderlyingInstrument_120.insert(UnderlyingContractMultiplier_120.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_120(806046331);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_120);
    UnderlyingInstrument_120.insert(UnderlyingContractMultiplierUnit_120.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_120("COUNTRY_84448691");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingCountryOfIssue_120.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_120("LOCALMKTDATE_2093399546");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_120);
    UnderlyingInstrument_120.insert(UnderlyingCouponPaymentDate_120.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_120;
    UnderlyingCouponRate_120.setString("12.560000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_120);
    UnderlyingInstrument_120.insert(UnderlyingCouponRate_120.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_120("STRING_903174405");
    noUnderlyings_0_0.set(UnderlyingCreditRating_120);
    UnderlyingInstrument_120.insert(UnderlyingCreditRating_120.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_120("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_120);
    UnderlyingInstrument_120.insert(UnderlyingCurrency_120.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_120;
    UnderlyingCurrentValue_120.setString("20979583");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_120);
    UnderlyingInstrument_120.insert(UnderlyingCurrentValue_120.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_120;
    UnderlyingDetachmentPoint_120.setString("32.330000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_120);
    UnderlyingInstrument_120.insert(UnderlyingDetachmentPoint_120.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_120;
    UnderlyingDirtyPrice_120.setString("20934537");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_120);
    UnderlyingInstrument_120.insert(UnderlyingDirtyPrice_120.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_120;
    UnderlyingEndPrice_120.setString("8959906");
    noUnderlyings_0_0.set(UnderlyingEndPrice_120);
    UnderlyingInstrument_120.insert(UnderlyingEndPrice_120.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_120;
    UnderlyingEndValue_120.setString("17482508");
    noUnderlyings_0_0.set(UnderlyingEndValue_120);
    UnderlyingInstrument_120.insert(UnderlyingEndValue_120.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_120(427452955);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_120);
    UnderlyingInstrument_120.insert(UnderlyingExerciseStyle_120.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_120;
    UnderlyingFXRate_120.setString("736019");
    noUnderlyings_0_0.set(UnderlyingFXRate_120);
    UnderlyingInstrument_120.insert(UnderlyingFXRate_120.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_120('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_120);
    UnderlyingInstrument_120.insert(UnderlyingFXRateCalc_120.getString());
    FIX::UnderlyingFactor UnderlyingFactor_120;
    UnderlyingFactor_120.setString("5583103");
    noUnderlyings_0_0.set(UnderlyingFactor_120);
    UnderlyingInstrument_120.insert(UnderlyingFactor_120.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_120(182856659);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_120);
    UnderlyingInstrument_120.insert(UnderlyingFlowScheduleType_120.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_120("STRING_1860942465");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_120);
    UnderlyingInstrument_120.insert(UnderlyingInstrRegistry_120.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_120("LOCALMKTDATE_1594725954");
    noUnderlyings_0_0.set(UnderlyingIssueDate_120);
    UnderlyingInstrument_120.insert(UnderlyingIssueDate_120.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_120("STRING_1685261983");
    noUnderlyings_0_0.set(UnderlyingIssuer_120);
    UnderlyingInstrument_120.insert(UnderlyingIssuer_120.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_120("STRING_452944559");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingLocaleOfIssue_120.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_120("LOCALMKTDATE_292395532");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityDate_120.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_120("MONTHYEAR_1504689627");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityMonthYear_120.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_120("TZTIMEONLY_1085399519");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_120);
    UnderlyingInstrument_120.insert(UnderlyingMaturityTime_120.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_120;
    UnderlyingNotionalPercentageOutstanding_120.setString("39.390000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_120);
    UnderlyingInstrument_120.insert(UnderlyingNotionalPercentageOutstanding_120.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_120('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_120);
    UnderlyingInstrument_120.insert(UnderlyingOptAttribute_120.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_120;
    UnderlyingOriginalNotionalPercentageOutstanding_120.setString("18.760000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_120);
    UnderlyingInstrument_120.insert(UnderlyingOriginalNotionalPercentageOutstanding_120.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_120("STRING_1257505949");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_120);
    UnderlyingInstrument_120.insert(UnderlyingPriceUnitOfMeasure_120.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_120;
    UnderlyingPriceUnitOfMeasureQty_120.setString("11114637");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_120);
    UnderlyingInstrument_120.insert(UnderlyingPriceUnitOfMeasureQty_120.getString());
    FIX::UnderlyingProduct UnderlyingProduct_120(1992909518);
    noUnderlyings_0_0.set(UnderlyingProduct_120);
    UnderlyingInstrument_120.insert(UnderlyingProduct_120.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_120(1679300897);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_120);
    UnderlyingInstrument_120.insert(UnderlyingPutOrCall_120.getString());
    FIX::UnderlyingPx UnderlyingPx_120;
    UnderlyingPx_120.setString("19175100");
    noUnderlyings_0_0.set(UnderlyingPx_120);
    UnderlyingInstrument_120.insert(UnderlyingPx_120.getString());
    FIX::UnderlyingQty UnderlyingQty_120;
    UnderlyingQty_120.setString("20773582");
    noUnderlyings_0_0.set(UnderlyingQty_120);
    UnderlyingInstrument_120.insert(UnderlyingQty_120.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_120("LOCALMKTDATE_1625216796");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_120);
    UnderlyingInstrument_120.insert(UnderlyingRedemptionDate_120.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_120("STRING_350897656");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_120);
    UnderlyingInstrument_120.insert(UnderlyingRepoCollateralSecurityType_120.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_120;
    UnderlyingRepurchaseRate_120.setString("89.670000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_120);
    UnderlyingInstrument_120.insert(UnderlyingRepurchaseRate_120.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_120(1636306786);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_120);
    UnderlyingInstrument_120.insert(UnderlyingRepurchaseTerm_120.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_120("STRING_840288218");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_120);
    UnderlyingInstrument_120.insert(UnderlyingRestructuringType_120.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_120("STRING_783523676");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityDesc_120.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_120("EXCHANGE_1803070019");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityExchange_120.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_120("STRING_786258280");
    noUnderlyings_0_0.set(UnderlyingSecurityID_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityID_120.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_120("STRING_1679514347");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityIDSource_120.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_120("STRING_1403837207");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_120);
    UnderlyingInstrument_120.insert(UnderlyingSecuritySubType_120.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_120("STRING_1213711235");
    noUnderlyings_0_0.set(UnderlyingSecurityType_120);
    UnderlyingInstrument_120.insert(UnderlyingSecurityType_120.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_120("STRING_1753116282");
    noUnderlyings_0_0.set(UnderlyingSeniority_120);
    UnderlyingInstrument_120.insert(UnderlyingSeniority_120.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_120("STRING_2067514797");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_120);
    UnderlyingInstrument_120.insert(UnderlyingSettlMethod_120.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_120(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_120);
    UnderlyingInstrument_120.insert(UnderlyingSettlementType_120.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_120;
    UnderlyingStartValue_120.setString("19359729");
    noUnderlyings_0_0.set(UnderlyingStartValue_120);
    UnderlyingInstrument_120.insert(UnderlyingStartValue_120.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_120("STRING_1780973615");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_120);
    UnderlyingInstrument_120.insert(UnderlyingStateOrProvinceOfIssue_120.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_120("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_120);
    UnderlyingInstrument_120.insert(UnderlyingStrikeCurrency_120.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_120;
    UnderlyingStrikePrice_120.setString("864345");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_120);
    UnderlyingInstrument_120.insert(UnderlyingStrikePrice_120.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_120("STRING_1511659470");
    noUnderlyings_0_0.set(UnderlyingSymbol_120);
    UnderlyingInstrument_120.insert(UnderlyingSymbol_120.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_120("STRING_830957255");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_120);
    UnderlyingInstrument_120.insert(UnderlyingSymbolSfx_120.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_120("STRING_1171834045");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_120);
    UnderlyingInstrument_120.insert(UnderlyingTimeUnit_120.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_120("STRING_1929273409");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_120);
    UnderlyingInstrument_120.insert(UnderlyingUnitOfMeasure_120.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_120;
    UnderlyingUnitOfMeasureQty_120.setString("21082534");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_120);
    UnderlyingInstrument_120.insert(UnderlyingUnitOfMeasureQty_120.getString());
    all_values.push_back(UnderlyingInstrument_120);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_241;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_241("STRING_1039295710");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_241);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_241.insert(UnderlyingSecurityAltID_241.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_241("STRING_1072233552");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_241);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_241.insert(UnderlyingSecurityAltIDSource_241.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_242;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_242("STRING_1304501792");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_242);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_242.insert(UnderlyingSecurityAltID_242.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_242("STRING_571112960");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_242);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_242.insert(UnderlyingSecurityAltIDSource_242.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_229;
      FIX::UnderlyingStipType UnderlyingStipType_229("STRING_1234376353");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_229);
      UnderlyingStipulations_NoUnderlyingStips_229.insert(UnderlyingStipType_229.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_229("STRING_48846108");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_229);
      UnderlyingStipulations_NoUnderlyingStips_229.insert(UnderlyingStipValue_229.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_229);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_230;
      FIX::UnderlyingStipType UnderlyingStipType_230("STRING_1193157608");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_230);
      UnderlyingStipulations_NoUnderlyingStips_230.insert(UnderlyingStipType_230.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_230("STRING_2067425320");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_230);
      UnderlyingStipulations_NoUnderlyingStips_230.insert(UnderlyingStipValue_230.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_230);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_241;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_241("STRING_2033445826");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyID_241.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_241('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyIDSource_241.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_241(1340739265);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_241);
      UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyRole_241.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_241);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_472("STRING_235496048");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_472);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472.insert(UnderlyingInstrumentPartySubID_472.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_472(597092824);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_472);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472.insert(UnderlyingInstrumentPartySubIDType_472.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_242;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_242("STRING_1885931694");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyID_242.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_242('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyIDSource_242.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_242(517123974);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_242);
      UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyRole_242.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_242);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_473("STRING_1777101623");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_473);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473.insert(UnderlyingInstrumentPartySubID_473.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_473(150613941);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_473);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473.insert(UnderlyingInstrumentPartySubIDType_473.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_474("STRING_582249967");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_474);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474.insert(UnderlyingInstrumentPartySubID_474.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_474(1103369252);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_474);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474.insert(UnderlyingInstrumentPartySubIDType_474.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_121;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_121("DATA_237048467");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingIssuer_121.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_121(2093909437);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingIssuerLen_121.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_121("DATA_1934326507");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingSecurityDesc_121.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_121(1408882513);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingSecurityDescLen_121.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_121;
    UnderlyingAdjustedQuantity_121.setString("18756991");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_121);
    UnderlyingInstrument_121.insert(UnderlyingAdjustedQuantity_121.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_121;
    UnderlyingAllocationPercent_121.setString("63.430000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_121);
    UnderlyingInstrument_121.insert(UnderlyingAllocationPercent_121.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_121;
    UnderlyingAttachmentPoint_121.setString("47.860000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_121);
    UnderlyingInstrument_121.insert(UnderlyingAttachmentPoint_121.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_121("STRING_767511260");
    noUnderlyings_0_1.set(UnderlyingCFICode_121);
    UnderlyingInstrument_121.insert(UnderlyingCFICode_121.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_121("STRING_819846247");
    noUnderlyings_0_1.set(UnderlyingCPProgram_121);
    UnderlyingInstrument_121.insert(UnderlyingCPProgram_121.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_121("STRING_2024976578");
    noUnderlyings_0_1.set(UnderlyingCPRegType_121);
    UnderlyingInstrument_121.insert(UnderlyingCPRegType_121.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_121;
    UnderlyingCapValue_121.setString("13386242");
    noUnderlyings_0_1.set(UnderlyingCapValue_121);
    UnderlyingInstrument_121.insert(UnderlyingCapValue_121.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_121;
    UnderlyingCashAmount_121.setString("16621061");
    noUnderlyings_0_1.set(UnderlyingCashAmount_121);
    UnderlyingInstrument_121.insert(UnderlyingCashAmount_121.getString());
    FIX::UnderlyingCashType UnderlyingCashType_121("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_121);
    UnderlyingInstrument_121.insert(UnderlyingCashType_121.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_121;
    UnderlyingContractMultiplier_121.setString("13874703");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_121);
    UnderlyingInstrument_121.insert(UnderlyingContractMultiplier_121.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_121(707780159);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_121);
    UnderlyingInstrument_121.insert(UnderlyingContractMultiplierUnit_121.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_121("COUNTRY_1031810956");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingCountryOfIssue_121.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_121("LOCALMKTDATE_925139574");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_121);
    UnderlyingInstrument_121.insert(UnderlyingCouponPaymentDate_121.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_121;
    UnderlyingCouponRate_121.setString("23.370000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_121);
    UnderlyingInstrument_121.insert(UnderlyingCouponRate_121.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_121("STRING_1735276305");
    noUnderlyings_0_1.set(UnderlyingCreditRating_121);
    UnderlyingInstrument_121.insert(UnderlyingCreditRating_121.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_121("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_121);
    UnderlyingInstrument_121.insert(UnderlyingCurrency_121.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_121;
    UnderlyingCurrentValue_121.setString("19707723");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_121);
    UnderlyingInstrument_121.insert(UnderlyingCurrentValue_121.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_121;
    UnderlyingDetachmentPoint_121.setString("80.160000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_121);
    UnderlyingInstrument_121.insert(UnderlyingDetachmentPoint_121.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_121;
    UnderlyingDirtyPrice_121.setString("10044108");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_121);
    UnderlyingInstrument_121.insert(UnderlyingDirtyPrice_121.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_121;
    UnderlyingEndPrice_121.setString("18119010");
    noUnderlyings_0_1.set(UnderlyingEndPrice_121);
    UnderlyingInstrument_121.insert(UnderlyingEndPrice_121.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_121;
    UnderlyingEndValue_121.setString("12326119");
    noUnderlyings_0_1.set(UnderlyingEndValue_121);
    UnderlyingInstrument_121.insert(UnderlyingEndValue_121.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_121(367396871);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_121);
    UnderlyingInstrument_121.insert(UnderlyingExerciseStyle_121.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_121;
    UnderlyingFXRate_121.setString("14415190");
    noUnderlyings_0_1.set(UnderlyingFXRate_121);
    UnderlyingInstrument_121.insert(UnderlyingFXRate_121.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_121('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_121);
    UnderlyingInstrument_121.insert(UnderlyingFXRateCalc_121.getString());
    FIX::UnderlyingFactor UnderlyingFactor_121;
    UnderlyingFactor_121.setString("9496468");
    noUnderlyings_0_1.set(UnderlyingFactor_121);
    UnderlyingInstrument_121.insert(UnderlyingFactor_121.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_121(397404614);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_121);
    UnderlyingInstrument_121.insert(UnderlyingFlowScheduleType_121.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_121("STRING_1620274398");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_121);
    UnderlyingInstrument_121.insert(UnderlyingInstrRegistry_121.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_121("LOCALMKTDATE_896072627");
    noUnderlyings_0_1.set(UnderlyingIssueDate_121);
    UnderlyingInstrument_121.insert(UnderlyingIssueDate_121.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_121("STRING_184247474");
    noUnderlyings_0_1.set(UnderlyingIssuer_121);
    UnderlyingInstrument_121.insert(UnderlyingIssuer_121.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_121("STRING_881673263");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingLocaleOfIssue_121.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_121("LOCALMKTDATE_624288177");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityDate_121.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_121("MONTHYEAR_2079343817");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityMonthYear_121.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_121("TZTIMEONLY_1602148050");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityTime_121.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_121;
    UnderlyingNotionalPercentageOutstanding_121.setString("94.370000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_121);
    UnderlyingInstrument_121.insert(UnderlyingNotionalPercentageOutstanding_121.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_121('7');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_121);
    UnderlyingInstrument_121.insert(UnderlyingOptAttribute_121.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_121;
    UnderlyingOriginalNotionalPercentageOutstanding_121.setString("9.800000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_121);
    UnderlyingInstrument_121.insert(UnderlyingOriginalNotionalPercentageOutstanding_121.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_121("STRING_582940010");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_121);
    UnderlyingInstrument_121.insert(UnderlyingPriceUnitOfMeasure_121.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_121;
    UnderlyingPriceUnitOfMeasureQty_121.setString("2663289");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_121);
    UnderlyingInstrument_121.insert(UnderlyingPriceUnitOfMeasureQty_121.getString());
    FIX::UnderlyingProduct UnderlyingProduct_121(444026616);
    noUnderlyings_0_1.set(UnderlyingProduct_121);
    UnderlyingInstrument_121.insert(UnderlyingProduct_121.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_121(1970410338);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_121);
    UnderlyingInstrument_121.insert(UnderlyingPutOrCall_121.getString());
    FIX::UnderlyingPx UnderlyingPx_121;
    UnderlyingPx_121.setString("9741091");
    noUnderlyings_0_1.set(UnderlyingPx_121);
    UnderlyingInstrument_121.insert(UnderlyingPx_121.getString());
    FIX::UnderlyingQty UnderlyingQty_121;
    UnderlyingQty_121.setString("14758375");
    noUnderlyings_0_1.set(UnderlyingQty_121);
    UnderlyingInstrument_121.insert(UnderlyingQty_121.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_121("LOCALMKTDATE_748066265");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_121);
    UnderlyingInstrument_121.insert(UnderlyingRedemptionDate_121.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_121("STRING_1567851463");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_121);
    UnderlyingInstrument_121.insert(UnderlyingRepoCollateralSecurityType_121.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_121;
    UnderlyingRepurchaseRate_121.setString("2.300000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_121);
    UnderlyingInstrument_121.insert(UnderlyingRepurchaseRate_121.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_121(866461456);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_121);
    UnderlyingInstrument_121.insert(UnderlyingRepurchaseTerm_121.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_121("STRING_686330610");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_121);
    UnderlyingInstrument_121.insert(UnderlyingRestructuringType_121.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_121("STRING_886918935");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityDesc_121.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_121("EXCHANGE_1581949472");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityExchange_121.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_121("STRING_1690741452");
    noUnderlyings_0_1.set(UnderlyingSecurityID_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityID_121.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_121("STRING_551336322");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityIDSource_121.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_121("STRING_667077814");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_121);
    UnderlyingInstrument_121.insert(UnderlyingSecuritySubType_121.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_121("STRING_2058138323");
    noUnderlyings_0_1.set(UnderlyingSecurityType_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityType_121.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_121("STRING_1992855332");
    noUnderlyings_0_1.set(UnderlyingSeniority_121);
    UnderlyingInstrument_121.insert(UnderlyingSeniority_121.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_121("STRING_2050303745");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_121);
    UnderlyingInstrument_121.insert(UnderlyingSettlMethod_121.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_121(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_121);
    UnderlyingInstrument_121.insert(UnderlyingSettlementType_121.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_121;
    UnderlyingStartValue_121.setString("2427762");
    noUnderlyings_0_1.set(UnderlyingStartValue_121);
    UnderlyingInstrument_121.insert(UnderlyingStartValue_121.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_121("STRING_1523094496");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingStateOrProvinceOfIssue_121.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_121("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_121);
    UnderlyingInstrument_121.insert(UnderlyingStrikeCurrency_121.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_121;
    UnderlyingStrikePrice_121.setString("2572841");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_121);
    UnderlyingInstrument_121.insert(UnderlyingStrikePrice_121.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_121("STRING_233178669");
    noUnderlyings_0_1.set(UnderlyingSymbol_121);
    UnderlyingInstrument_121.insert(UnderlyingSymbol_121.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_121("STRING_358883942");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_121);
    UnderlyingInstrument_121.insert(UnderlyingSymbolSfx_121.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_121("STRING_1859432161");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_121);
    UnderlyingInstrument_121.insert(UnderlyingTimeUnit_121.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_121("STRING_1624978106");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_121);
    UnderlyingInstrument_121.insert(UnderlyingUnitOfMeasure_121.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_121;
    UnderlyingUnitOfMeasureQty_121.setString("11105903");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_121);
    UnderlyingInstrument_121.insert(UnderlyingUnitOfMeasureQty_121.getString());
    all_values.push_back(UnderlyingInstrument_121);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_243;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_243("STRING_60434468");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_243);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_243.insert(UnderlyingSecurityAltID_243.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_243("STRING_1376919325");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_243);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_243.insert(UnderlyingSecurityAltIDSource_243.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_231;
      FIX::UnderlyingStipType UnderlyingStipType_231("STRING_2030844807");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_231);
      UnderlyingStipulations_NoUnderlyingStips_231.insert(UnderlyingStipType_231.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_231("STRING_203544803");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_231);
      UnderlyingStipulations_NoUnderlyingStips_231.insert(UnderlyingStipValue_231.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_231);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_243;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_243("STRING_631427424");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyID_243.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_243('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyIDSource_243.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_243(2027600265);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_243);
      UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyRole_243.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_243);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_475("STRING_310243228");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_475);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475.insert(UnderlyingInstrumentPartySubID_475.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_475(767035552);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_475);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475.insert(UnderlyingInstrumentPartySubIDType_475.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_476("STRING_932354705");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_476);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476.insert(UnderlyingInstrumentPartySubID_476.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_476(2000984680);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_476);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476.insert(UnderlyingInstrumentPartySubIDType_476.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_122;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_122("DATA_1318371874");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingIssuer_122.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_122(1599432519);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingIssuerLen_122.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_122("DATA_1911639355");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingSecurityDesc_122.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_122(1163743559);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingSecurityDescLen_122.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_122;
    UnderlyingAdjustedQuantity_122.setString("15022526");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_122);
    UnderlyingInstrument_122.insert(UnderlyingAdjustedQuantity_122.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_122;
    UnderlyingAllocationPercent_122.setString("72.200000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_122);
    UnderlyingInstrument_122.insert(UnderlyingAllocationPercent_122.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_122;
    UnderlyingAttachmentPoint_122.setString("98.580000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_122);
    UnderlyingInstrument_122.insert(UnderlyingAttachmentPoint_122.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_122("STRING_877863465");
    noUnderlyings_0_2.set(UnderlyingCFICode_122);
    UnderlyingInstrument_122.insert(UnderlyingCFICode_122.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_122("STRING_233347712");
    noUnderlyings_0_2.set(UnderlyingCPProgram_122);
    UnderlyingInstrument_122.insert(UnderlyingCPProgram_122.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_122("STRING_1833543631");
    noUnderlyings_0_2.set(UnderlyingCPRegType_122);
    UnderlyingInstrument_122.insert(UnderlyingCPRegType_122.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_122;
    UnderlyingCapValue_122.setString("11351475");
    noUnderlyings_0_2.set(UnderlyingCapValue_122);
    UnderlyingInstrument_122.insert(UnderlyingCapValue_122.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_122;
    UnderlyingCashAmount_122.setString("4665263");
    noUnderlyings_0_2.set(UnderlyingCashAmount_122);
    UnderlyingInstrument_122.insert(UnderlyingCashAmount_122.getString());
    FIX::UnderlyingCashType UnderlyingCashType_122("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_122);
    UnderlyingInstrument_122.insert(UnderlyingCashType_122.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_122;
    UnderlyingContractMultiplier_122.setString("8470960");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_122);
    UnderlyingInstrument_122.insert(UnderlyingContractMultiplier_122.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_122(2091504488);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_122);
    UnderlyingInstrument_122.insert(UnderlyingContractMultiplierUnit_122.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_122("COUNTRY_1155534283");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingCountryOfIssue_122.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_122("LOCALMKTDATE_2038685584");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_122);
    UnderlyingInstrument_122.insert(UnderlyingCouponPaymentDate_122.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_122;
    UnderlyingCouponRate_122.setString("53.080000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_122);
    UnderlyingInstrument_122.insert(UnderlyingCouponRate_122.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_122("STRING_384969960");
    noUnderlyings_0_2.set(UnderlyingCreditRating_122);
    UnderlyingInstrument_122.insert(UnderlyingCreditRating_122.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_122("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_122);
    UnderlyingInstrument_122.insert(UnderlyingCurrency_122.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_122;
    UnderlyingCurrentValue_122.setString("5885147");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_122);
    UnderlyingInstrument_122.insert(UnderlyingCurrentValue_122.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_122;
    UnderlyingDetachmentPoint_122.setString("44.340000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_122);
    UnderlyingInstrument_122.insert(UnderlyingDetachmentPoint_122.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_122;
    UnderlyingDirtyPrice_122.setString("5192438");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_122);
    UnderlyingInstrument_122.insert(UnderlyingDirtyPrice_122.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_122;
    UnderlyingEndPrice_122.setString("2124273");
    noUnderlyings_0_2.set(UnderlyingEndPrice_122);
    UnderlyingInstrument_122.insert(UnderlyingEndPrice_122.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_122;
    UnderlyingEndValue_122.setString("2234210");
    noUnderlyings_0_2.set(UnderlyingEndValue_122);
    UnderlyingInstrument_122.insert(UnderlyingEndValue_122.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_122(2017132772);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_122);
    UnderlyingInstrument_122.insert(UnderlyingExerciseStyle_122.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_122;
    UnderlyingFXRate_122.setString("5226706");
    noUnderlyings_0_2.set(UnderlyingFXRate_122);
    UnderlyingInstrument_122.insert(UnderlyingFXRate_122.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_122('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_122);
    UnderlyingInstrument_122.insert(UnderlyingFXRateCalc_122.getString());
    FIX::UnderlyingFactor UnderlyingFactor_122;
    UnderlyingFactor_122.setString("8020038");
    noUnderlyings_0_2.set(UnderlyingFactor_122);
    UnderlyingInstrument_122.insert(UnderlyingFactor_122.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_122(376171642);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_122);
    UnderlyingInstrument_122.insert(UnderlyingFlowScheduleType_122.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_122("STRING_161344830");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_122);
    UnderlyingInstrument_122.insert(UnderlyingInstrRegistry_122.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_122("LOCALMKTDATE_253952700");
    noUnderlyings_0_2.set(UnderlyingIssueDate_122);
    UnderlyingInstrument_122.insert(UnderlyingIssueDate_122.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_122("STRING_140327349");
    noUnderlyings_0_2.set(UnderlyingIssuer_122);
    UnderlyingInstrument_122.insert(UnderlyingIssuer_122.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_122("STRING_1325088389");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingLocaleOfIssue_122.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_122("LOCALMKTDATE_1756205317");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityDate_122.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_122("MONTHYEAR_764784570");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityMonthYear_122.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_122("TZTIMEONLY_584124599");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityTime_122.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_122;
    UnderlyingNotionalPercentageOutstanding_122.setString("51.340000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_122);
    UnderlyingInstrument_122.insert(UnderlyingNotionalPercentageOutstanding_122.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_122('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_122);
    UnderlyingInstrument_122.insert(UnderlyingOptAttribute_122.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_122;
    UnderlyingOriginalNotionalPercentageOutstanding_122.setString("45.820000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_122);
    UnderlyingInstrument_122.insert(UnderlyingOriginalNotionalPercentageOutstanding_122.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_122("STRING_1621732711");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_122);
    UnderlyingInstrument_122.insert(UnderlyingPriceUnitOfMeasure_122.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_122;
    UnderlyingPriceUnitOfMeasureQty_122.setString("14646586");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_122);
    UnderlyingInstrument_122.insert(UnderlyingPriceUnitOfMeasureQty_122.getString());
    FIX::UnderlyingProduct UnderlyingProduct_122(315128507);
    noUnderlyings_0_2.set(UnderlyingProduct_122);
    UnderlyingInstrument_122.insert(UnderlyingProduct_122.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_122(321345153);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_122);
    UnderlyingInstrument_122.insert(UnderlyingPutOrCall_122.getString());
    FIX::UnderlyingPx UnderlyingPx_122;
    UnderlyingPx_122.setString("14086795");
    noUnderlyings_0_2.set(UnderlyingPx_122);
    UnderlyingInstrument_122.insert(UnderlyingPx_122.getString());
    FIX::UnderlyingQty UnderlyingQty_122;
    UnderlyingQty_122.setString("14706627");
    noUnderlyings_0_2.set(UnderlyingQty_122);
    UnderlyingInstrument_122.insert(UnderlyingQty_122.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_122("LOCALMKTDATE_212547089");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_122);
    UnderlyingInstrument_122.insert(UnderlyingRedemptionDate_122.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_122("STRING_1413134812");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_122);
    UnderlyingInstrument_122.insert(UnderlyingRepoCollateralSecurityType_122.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_122;
    UnderlyingRepurchaseRate_122.setString("27.500000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_122);
    UnderlyingInstrument_122.insert(UnderlyingRepurchaseRate_122.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_122(1739365135);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_122);
    UnderlyingInstrument_122.insert(UnderlyingRepurchaseTerm_122.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_122("STRING_1300951280");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_122);
    UnderlyingInstrument_122.insert(UnderlyingRestructuringType_122.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_122("STRING_296663865");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityDesc_122.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_122("EXCHANGE_2082669569");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityExchange_122.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_122("STRING_1820195171");
    noUnderlyings_0_2.set(UnderlyingSecurityID_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityID_122.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_122("STRING_509091246");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityIDSource_122.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_122("STRING_158606973");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_122);
    UnderlyingInstrument_122.insert(UnderlyingSecuritySubType_122.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_122("STRING_1689844295");
    noUnderlyings_0_2.set(UnderlyingSecurityType_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityType_122.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_122("STRING_1031761856");
    noUnderlyings_0_2.set(UnderlyingSeniority_122);
    UnderlyingInstrument_122.insert(UnderlyingSeniority_122.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_122("STRING_1149063577");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_122);
    UnderlyingInstrument_122.insert(UnderlyingSettlMethod_122.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_122(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_122);
    UnderlyingInstrument_122.insert(UnderlyingSettlementType_122.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_122;
    UnderlyingStartValue_122.setString("14079334");
    noUnderlyings_0_2.set(UnderlyingStartValue_122);
    UnderlyingInstrument_122.insert(UnderlyingStartValue_122.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_122("STRING_1310408407");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingStateOrProvinceOfIssue_122.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_122("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_122);
    UnderlyingInstrument_122.insert(UnderlyingStrikeCurrency_122.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_122;
    UnderlyingStrikePrice_122.setString("4880131");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_122);
    UnderlyingInstrument_122.insert(UnderlyingStrikePrice_122.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_122("STRING_207038846");
    noUnderlyings_0_2.set(UnderlyingSymbol_122);
    UnderlyingInstrument_122.insert(UnderlyingSymbol_122.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_122("STRING_165561769");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_122);
    UnderlyingInstrument_122.insert(UnderlyingSymbolSfx_122.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_122("STRING_1072137748");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_122);
    UnderlyingInstrument_122.insert(UnderlyingTimeUnit_122.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_122("STRING_693623981");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_122);
    UnderlyingInstrument_122.insert(UnderlyingUnitOfMeasure_122.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_122;
    UnderlyingUnitOfMeasureQty_122.setString("11636940");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_122);
    UnderlyingInstrument_122.insert(UnderlyingUnitOfMeasureQty_122.getString());
    all_values.push_back(UnderlyingInstrument_122);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_244;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_244("STRING_167873044");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_244);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_244.insert(UnderlyingSecurityAltID_244.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_244("STRING_480869068");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_244);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_244.insert(UnderlyingSecurityAltIDSource_244.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_232;
      FIX::UnderlyingStipType UnderlyingStipType_232("STRING_489218197");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_232);
      UnderlyingStipulations_NoUnderlyingStips_232.insert(UnderlyingStipType_232.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_232("STRING_1889548572");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_232);
      UnderlyingStipulations_NoUnderlyingStips_232.insert(UnderlyingStipValue_232.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_232);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_233;
      FIX::UnderlyingStipType UnderlyingStipType_233("STRING_980629981");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_233);
      UnderlyingStipulations_NoUnderlyingStips_233.insert(UnderlyingStipType_233.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_233("STRING_701765286");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_233);
      UnderlyingStipulations_NoUnderlyingStips_233.insert(UnderlyingStipValue_233.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_233);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_234;
      FIX::UnderlyingStipType UnderlyingStipType_234("STRING_1155199736");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_234);
      UnderlyingStipulations_NoUnderlyingStips_234.insert(UnderlyingStipType_234.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_234("STRING_688779083");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_234);
      UnderlyingStipulations_NoUnderlyingStips_234.insert(UnderlyingStipValue_234.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_234);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_244;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_244("STRING_308667368");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyID_244.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_244('9');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyIDSource_244.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_244(228832695);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_244);
      UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyRole_244.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_244);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_477("STRING_1494534195");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_477);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477.insert(UnderlyingInstrumentPartySubID_477.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_477(387439668);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_477);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477.insert(UnderlyingInstrumentPartySubIDType_477.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_478("STRING_1671223187");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_478);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478.insert(UnderlyingInstrumentPartySubID_478.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_478(378812403);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_478);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478.insert(UnderlyingInstrumentPartySubIDType_478.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_479("STRING_1536503245");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_479);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479.insert(UnderlyingInstrumentPartySubID_479.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_479(2015587664);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_479);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479.insert(UnderlyingInstrumentPartySubIDType_479.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_245;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_245("STRING_1786745901");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyID_245.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_245('6');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyIDSource_245.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_245(466421193);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_245);
      UndlyInstrumentParties_NoUndlyInstrumentParties_245.insert(UnderlyingInstrumentPartyRole_245.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_245);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_480("STRING_1187441153");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_480);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480.insert(UnderlyingInstrumentPartySubID_480.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_480(673460039);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_480);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480.insert(UnderlyingInstrumentPartySubIDType_480.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_481("STRING_1353084870");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_481);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481.insert(UnderlyingInstrumentPartySubID_481.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_481(112095254);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_481);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481.insert(UnderlyingInstrumentPartySubIDType_481.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_482("STRING_1367084020");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_482);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482.insert(UnderlyingInstrumentPartySubID_482.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_482(369295274);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_482);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482.insert(UnderlyingInstrumentPartySubIDType_482.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_246;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_246("STRING_1454417585");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyID_246.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_246('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyIDSource_246.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_246(850164342);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_246);
      UndlyInstrumentParties_NoUndlyInstrumentParties_246.insert(UnderlyingInstrumentPartyRole_246.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_246);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_483("STRING_2024175261");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_483);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483.insert(UnderlyingInstrumentPartySubID_483.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_483(592229266);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_483);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483.insert(UnderlyingInstrumentPartySubIDType_483.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_484("STRING_1945014756");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_484);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484.insert(UnderlyingInstrumentPartySubID_484.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_484(578456899);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_484);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484.insert(UnderlyingInstrumentPartySubIDType_484.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_485("STRING_1747429003");
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubID_485);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485.insert(UnderlyingInstrumentPartySubID_485.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_485(486310192);
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubIDType_485);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485.insert(UnderlyingInstrumentPartySubIDType_485.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
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
