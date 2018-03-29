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
  multiset<string> all_compo_names;
  multiset<string> RequestForPositionsAck_0;
  FIX::Account Account_44("STRING_491437559");
  msg.set(Account_44);
  RequestForPositionsAck_0.insert(Account_44.getString());
  FIX::AccountType AccountType_37(6);
  msg.set(AccountType_37);
  RequestForPositionsAck_0.insert(AccountType_37.getString());
  FIX::AcctIDSource AcctIDSource_37(1);
  msg.set(AcctIDSource_37);
  RequestForPositionsAck_0.insert(AcctIDSource_37.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_19("LOCALMKTDATE_449648663");
  msg.set(ClearingBusinessDate_19);
  RequestForPositionsAck_0.insert(ClearingBusinessDate_19.getString());
  FIX::Currency Currency_62("EUR");
  msg.set(Currency_62);
  RequestForPositionsAck_0.insert(Currency_62.getString());
  FIX::EncodedText EncodedText_81("DATA_661100401");
  msg.set(EncodedText_81);
  RequestForPositionsAck_0.insert(EncodedText_81.getString());
  FIX::EncodedTextLen EncodedTextLen_81(1934290889);
  msg.set(EncodedTextLen_81);
  RequestForPositionsAck_0.insert(EncodedTextLen_81.getString());
  FIX::MatchStatus MatchStatus_9('2');
  msg.set(MatchStatus_9);
  RequestForPositionsAck_0.insert(MatchStatus_9.getString());
  FIX::PosMaintRptID PosMaintRptID_3("STRING_1986938306");
  msg.set(PosMaintRptID_3);
  RequestForPositionsAck_0.insert(PosMaintRptID_3.getString());
  FIX::PosReqID PosReqID_5("STRING_1889439092");
  msg.set(PosReqID_5);
  RequestForPositionsAck_0.insert(PosReqID_5.getString());
  FIX::PosReqResult PosReqResult_1(0);
  msg.set(PosReqResult_1);
  RequestForPositionsAck_0.insert(PosReqResult_1.getString());
  FIX::PosReqStatus PosReqStatus_0(0);
  msg.set(PosReqStatus_0);
  RequestForPositionsAck_0.insert(PosReqStatus_0.getString());
  FIX::PosReqType PosReqType_3(1);
  msg.set(PosReqType_3);
  RequestForPositionsAck_0.insert(PosReqType_3.getString());
  FIX::ResponseDestination ResponseDestination_3("STRING_1477041257");
  msg.set(ResponseDestination_3);
  RequestForPositionsAck_0.insert(ResponseDestination_3.getString());
  FIX::ResponseTransportType ResponseTransportType_3(0);
  msg.set(ResponseTransportType_3);
  RequestForPositionsAck_0.insert(ResponseTransportType_3.getString());
  FIX::SettlCurrency SettlCurrency_29("JPY");
  msg.set(SettlCurrency_29);
  RequestForPositionsAck_0.insert(SettlCurrency_29.getString());
  FIX::SettlSessID SettlSessID_11("STRING_RTH");
  msg.set(SettlSessID_11);
  RequestForPositionsAck_0.insert(SettlSessID_11.getString());
  FIX::SettlSessSubID SettlSessSubID_10("STRING_274281185");
  msg.set(SettlSessSubID_10);
  RequestForPositionsAck_0.insert(SettlSessSubID_10.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_8('1');
  msg.set(SubscriptionRequestType_8);
  RequestForPositionsAck_0.insert(SubscriptionRequestType_8.getString());
  FIX::Text Text_81("STRING_1893386948");
  msg.set(Text_81);
  RequestForPositionsAck_0.insert(Text_81.getString());
  FIX::TotalNumPosReports TotalNumPosReports_1(726019401);
  msg.set(TotalNumPosReports_1);
  RequestForPositionsAck_0.insert(TotalNumPosReports_1.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_1(true);
  msg.set(UnsolicitedIndicator_1);
  RequestForPositionsAck_0.insert(UnsolicitedIndicator_1.getString());
  all_values.push_back(RequestForPositionsAck_0);

  all_compo_names.insert("RequestForPositionsAck");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_125;
    FIX::EncodedLegIssuer EncodedLegIssuer_125("DATA_160193986");
    noLegs_0_0.set(EncodedLegIssuer_125);
    InstrumentLeg_125.insert(EncodedLegIssuer_125.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_125(36206835);
    noLegs_0_0.set(EncodedLegIssuerLen_125);
    InstrumentLeg_125.insert(EncodedLegIssuerLen_125.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_125("DATA_1968330336");
    noLegs_0_0.set(EncodedLegSecurityDesc_125);
    InstrumentLeg_125.insert(EncodedLegSecurityDesc_125.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_125(1872388542);
    noLegs_0_0.set(EncodedLegSecurityDescLen_125);
    InstrumentLeg_125.insert(EncodedLegSecurityDescLen_125.getString());
    FIX::LegCFICode LegCFICode_125("STRING_819159381");
    noLegs_0_0.set(LegCFICode_125);
    InstrumentLeg_125.insert(LegCFICode_125.getString());
    FIX::LegContractMultiplier LegContractMultiplier_125;
    LegContractMultiplier_125.setString("3551458");
    noLegs_0_0.set(LegContractMultiplier_125);
    InstrumentLeg_125.insert(LegContractMultiplier_125.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_125(216342453);
    noLegs_0_0.set(LegContractMultiplierUnit_125);
    InstrumentLeg_125.insert(LegContractMultiplierUnit_125.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_125("MONTHYEAR_1506584487");
    noLegs_0_0.set(LegContractSettlMonth_125);
    InstrumentLeg_125.insert(LegContractSettlMonth_125.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_125("COUNTRY_305624450");
    noLegs_0_0.set(LegCountryOfIssue_125);
    InstrumentLeg_125.insert(LegCountryOfIssue_125.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_125("LOCALMKTDATE_665991116");
    noLegs_0_0.set(LegCouponPaymentDate_125);
    InstrumentLeg_125.insert(LegCouponPaymentDate_125.getString());
    FIX::LegCouponRate LegCouponRate_125;
    LegCouponRate_125.setString("75.990000");
    noLegs_0_0.set(LegCouponRate_125);
    InstrumentLeg_125.insert(LegCouponRate_125.getString());
    FIX::LegCreditRating LegCreditRating_125("STRING_1982643136");
    noLegs_0_0.set(LegCreditRating_125);
    InstrumentLeg_125.insert(LegCreditRating_125.getString());
    FIX::LegCurrency LegCurrency_125("JPY");
    noLegs_0_0.set(LegCurrency_125);
    InstrumentLeg_125.insert(LegCurrency_125.getString());
    FIX::LegDatedDate LegDatedDate_125("LOCALMKTDATE_1009139494");
    noLegs_0_0.set(LegDatedDate_125);
    InstrumentLeg_125.insert(LegDatedDate_125.getString());
    FIX::LegExerciseStyle LegExerciseStyle_125(1166546176);
    noLegs_0_0.set(LegExerciseStyle_125);
    InstrumentLeg_125.insert(LegExerciseStyle_125.getString());
    FIX::LegFactor LegFactor_125;
    LegFactor_125.setString("15584602");
    noLegs_0_0.set(LegFactor_125);
    InstrumentLeg_125.insert(LegFactor_125.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_125(883964168);
    noLegs_0_0.set(LegFlowScheduleType_125);
    InstrumentLeg_125.insert(LegFlowScheduleType_125.getString());
    FIX::LegInstrRegistry LegInstrRegistry_125("STRING_925108304");
    noLegs_0_0.set(LegInstrRegistry_125);
    InstrumentLeg_125.insert(LegInstrRegistry_125.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_125("LOCALMKTDATE_1653597699");
    noLegs_0_0.set(LegInterestAccrualDate_125);
    InstrumentLeg_125.insert(LegInterestAccrualDate_125.getString());
    FIX::LegIssueDate LegIssueDate_125("LOCALMKTDATE_213521777");
    noLegs_0_0.set(LegIssueDate_125);
    InstrumentLeg_125.insert(LegIssueDate_125.getString());
    FIX::LegIssuer LegIssuer_125("STRING_694209780");
    noLegs_0_0.set(LegIssuer_125);
    InstrumentLeg_125.insert(LegIssuer_125.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_125("STRING_1725616564");
    noLegs_0_0.set(LegLocaleOfIssue_125);
    InstrumentLeg_125.insert(LegLocaleOfIssue_125.getString());
    FIX::LegMaturityDate LegMaturityDate_125("LOCALMKTDATE_1535087403");
    noLegs_0_0.set(LegMaturityDate_125);
    InstrumentLeg_125.insert(LegMaturityDate_125.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_125("MONTHYEAR_882035313");
    noLegs_0_0.set(LegMaturityMonthYear_125);
    InstrumentLeg_125.insert(LegMaturityMonthYear_125.getString());
    FIX::LegMaturityTime LegMaturityTime_125("TZTIMEONLY_1999897749");
    noLegs_0_0.set(LegMaturityTime_125);
    InstrumentLeg_125.insert(LegMaturityTime_125.getString());
    FIX::LegOptAttribute LegOptAttribute_125('8');
    noLegs_0_0.set(LegOptAttribute_125);
    InstrumentLeg_125.insert(LegOptAttribute_125.getString());
    FIX::LegOptionRatio LegOptionRatio_125;
    LegOptionRatio_125.setString("6279386");
    noLegs_0_0.set(LegOptionRatio_125);
    InstrumentLeg_125.insert(LegOptionRatio_125.getString());
    FIX::LegPool LegPool_125("STRING_578433502");
    noLegs_0_0.set(LegPool_125);
    InstrumentLeg_125.insert(LegPool_125.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_125("STRING_751663976");
    noLegs_0_0.set(LegPriceUnitOfMeasure_125);
    InstrumentLeg_125.insert(LegPriceUnitOfMeasure_125.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_125;
    LegPriceUnitOfMeasureQty_125.setString("2620454");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_125);
    InstrumentLeg_125.insert(LegPriceUnitOfMeasureQty_125.getString());
    FIX::LegProduct LegProduct_125(738627489);
    noLegs_0_0.set(LegProduct_125);
    InstrumentLeg_125.insert(LegProduct_125.getString());
    FIX::LegPutOrCall LegPutOrCall_125(787870811);
    noLegs_0_0.set(LegPutOrCall_125);
    InstrumentLeg_125.insert(LegPutOrCall_125.getString());
    FIX::LegRatioQty LegRatioQty_125;
    LegRatioQty_125.setString("828921");
    noLegs_0_0.set(LegRatioQty_125);
    InstrumentLeg_125.insert(LegRatioQty_125.getString());
    FIX::LegRedemptionDate LegRedemptionDate_125("LOCALMKTDATE_463532383");
    noLegs_0_0.set(LegRedemptionDate_125);
    InstrumentLeg_125.insert(LegRedemptionDate_125.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_125("STRING_1607030192");
    noLegs_0_0.set(LegRepoCollateralSecurityType_125);
    InstrumentLeg_125.insert(LegRepoCollateralSecurityType_125.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_125;
    LegRepurchaseRate_125.setString("80.430000");
    noLegs_0_0.set(LegRepurchaseRate_125);
    InstrumentLeg_125.insert(LegRepurchaseRate_125.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_125(679874836);
    noLegs_0_0.set(LegRepurchaseTerm_125);
    InstrumentLeg_125.insert(LegRepurchaseTerm_125.getString());
    FIX::LegSecurityDesc LegSecurityDesc_125("STRING_966131032");
    noLegs_0_0.set(LegSecurityDesc_125);
    InstrumentLeg_125.insert(LegSecurityDesc_125.getString());
    FIX::LegSecurityExchange LegSecurityExchange_125("EXCHANGE_743662494");
    noLegs_0_0.set(LegSecurityExchange_125);
    InstrumentLeg_125.insert(LegSecurityExchange_125.getString());
    FIX::LegSecurityID LegSecurityID_125("STRING_1345865952");
    noLegs_0_0.set(LegSecurityID_125);
    InstrumentLeg_125.insert(LegSecurityID_125.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_125("STRING_848344983");
    noLegs_0_0.set(LegSecurityIDSource_125);
    InstrumentLeg_125.insert(LegSecurityIDSource_125.getString());
    FIX::LegSecuritySubType LegSecuritySubType_125("STRING_578821982");
    noLegs_0_0.set(LegSecuritySubType_125);
    InstrumentLeg_125.insert(LegSecuritySubType_125.getString());
    FIX::LegSecurityType LegSecurityType_125("STRING_525473822");
    noLegs_0_0.set(LegSecurityType_125);
    InstrumentLeg_125.insert(LegSecurityType_125.getString());
    FIX::LegSide LegSide_125('5');
    noLegs_0_0.set(LegSide_125);
    InstrumentLeg_125.insert(LegSide_125.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_125("STRING_1587961476");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_125);
    InstrumentLeg_125.insert(LegStateOrProvinceOfIssue_125.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_125("JPY");
    noLegs_0_0.set(LegStrikeCurrency_125);
    InstrumentLeg_125.insert(LegStrikeCurrency_125.getString());
    FIX::LegStrikePrice LegStrikePrice_125;
    LegStrikePrice_125.setString("3244419");
    noLegs_0_0.set(LegStrikePrice_125);
    InstrumentLeg_125.insert(LegStrikePrice_125.getString());
    FIX::LegSymbol LegSymbol_125("STRING_469644654");
    noLegs_0_0.set(LegSymbol_125);
    InstrumentLeg_125.insert(LegSymbol_125.getString());
    FIX::LegSymbolSfx LegSymbolSfx_125("STRING_1581940511");
    noLegs_0_0.set(LegSymbolSfx_125);
    InstrumentLeg_125.insert(LegSymbolSfx_125.getString());
    FIX::LegTimeUnit LegTimeUnit_125("STRING_537963773");
    noLegs_0_0.set(LegTimeUnit_125);
    InstrumentLeg_125.insert(LegTimeUnit_125.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_125("STRING_1163854435");
    noLegs_0_0.set(LegUnitOfMeasure_125);
    InstrumentLeg_125.insert(LegUnitOfMeasure_125.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_125;
    LegUnitOfMeasureQty_125.setString("11600734");
    noLegs_0_0.set(LegUnitOfMeasureQty_125);
    InstrumentLeg_125.insert(LegUnitOfMeasureQty_125.getString());
    all_values.push_back(InstrumentLeg_125);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_252;
      FIX::LegSecurityAltID LegSecurityAltID_252("STRING_2045889748");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_252);
      LegSecAltIDGrp_NoLegSecurityAltID_252.insert(LegSecurityAltID_252.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_252("STRING_1012487529");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_252);
      LegSecAltIDGrp_NoLegSecurityAltID_252.insert(LegSecurityAltIDSource_252.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_252);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_126;
    FIX::EncodedLegIssuer EncodedLegIssuer_126("DATA_753492307");
    noLegs_0_1.set(EncodedLegIssuer_126);
    InstrumentLeg_126.insert(EncodedLegIssuer_126.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_126(526344714);
    noLegs_0_1.set(EncodedLegIssuerLen_126);
    InstrumentLeg_126.insert(EncodedLegIssuerLen_126.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_126("DATA_1590921031");
    noLegs_0_1.set(EncodedLegSecurityDesc_126);
    InstrumentLeg_126.insert(EncodedLegSecurityDesc_126.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_126(1505156283);
    noLegs_0_1.set(EncodedLegSecurityDescLen_126);
    InstrumentLeg_126.insert(EncodedLegSecurityDescLen_126.getString());
    FIX::LegCFICode LegCFICode_126("STRING_788390197");
    noLegs_0_1.set(LegCFICode_126);
    InstrumentLeg_126.insert(LegCFICode_126.getString());
    FIX::LegContractMultiplier LegContractMultiplier_126;
    LegContractMultiplier_126.setString("1820648");
    noLegs_0_1.set(LegContractMultiplier_126);
    InstrumentLeg_126.insert(LegContractMultiplier_126.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_126(145543446);
    noLegs_0_1.set(LegContractMultiplierUnit_126);
    InstrumentLeg_126.insert(LegContractMultiplierUnit_126.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_126("MONTHYEAR_871282368");
    noLegs_0_1.set(LegContractSettlMonth_126);
    InstrumentLeg_126.insert(LegContractSettlMonth_126.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_126("COUNTRY_645597255");
    noLegs_0_1.set(LegCountryOfIssue_126);
    InstrumentLeg_126.insert(LegCountryOfIssue_126.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_126("LOCALMKTDATE_1752573639");
    noLegs_0_1.set(LegCouponPaymentDate_126);
    InstrumentLeg_126.insert(LegCouponPaymentDate_126.getString());
    FIX::LegCouponRate LegCouponRate_126;
    LegCouponRate_126.setString("4.110000");
    noLegs_0_1.set(LegCouponRate_126);
    InstrumentLeg_126.insert(LegCouponRate_126.getString());
    FIX::LegCreditRating LegCreditRating_126("STRING_1325472091");
    noLegs_0_1.set(LegCreditRating_126);
    InstrumentLeg_126.insert(LegCreditRating_126.getString());
    FIX::LegCurrency LegCurrency_126("CHF");
    noLegs_0_1.set(LegCurrency_126);
    InstrumentLeg_126.insert(LegCurrency_126.getString());
    FIX::LegDatedDate LegDatedDate_126("LOCALMKTDATE_523854396");
    noLegs_0_1.set(LegDatedDate_126);
    InstrumentLeg_126.insert(LegDatedDate_126.getString());
    FIX::LegExerciseStyle LegExerciseStyle_126(1419566006);
    noLegs_0_1.set(LegExerciseStyle_126);
    InstrumentLeg_126.insert(LegExerciseStyle_126.getString());
    FIX::LegFactor LegFactor_126;
    LegFactor_126.setString("4843212");
    noLegs_0_1.set(LegFactor_126);
    InstrumentLeg_126.insert(LegFactor_126.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_126(1049328218);
    noLegs_0_1.set(LegFlowScheduleType_126);
    InstrumentLeg_126.insert(LegFlowScheduleType_126.getString());
    FIX::LegInstrRegistry LegInstrRegistry_126("STRING_1936932181");
    noLegs_0_1.set(LegInstrRegistry_126);
    InstrumentLeg_126.insert(LegInstrRegistry_126.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_126("LOCALMKTDATE_2072282715");
    noLegs_0_1.set(LegInterestAccrualDate_126);
    InstrumentLeg_126.insert(LegInterestAccrualDate_126.getString());
    FIX::LegIssueDate LegIssueDate_126("LOCALMKTDATE_593864569");
    noLegs_0_1.set(LegIssueDate_126);
    InstrumentLeg_126.insert(LegIssueDate_126.getString());
    FIX::LegIssuer LegIssuer_126("STRING_1865274994");
    noLegs_0_1.set(LegIssuer_126);
    InstrumentLeg_126.insert(LegIssuer_126.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_126("STRING_249241063");
    noLegs_0_1.set(LegLocaleOfIssue_126);
    InstrumentLeg_126.insert(LegLocaleOfIssue_126.getString());
    FIX::LegMaturityDate LegMaturityDate_126("LOCALMKTDATE_1063509223");
    noLegs_0_1.set(LegMaturityDate_126);
    InstrumentLeg_126.insert(LegMaturityDate_126.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_126("MONTHYEAR_1299731857");
    noLegs_0_1.set(LegMaturityMonthYear_126);
    InstrumentLeg_126.insert(LegMaturityMonthYear_126.getString());
    FIX::LegMaturityTime LegMaturityTime_126("TZTIMEONLY_787204837");
    noLegs_0_1.set(LegMaturityTime_126);
    InstrumentLeg_126.insert(LegMaturityTime_126.getString());
    FIX::LegOptAttribute LegOptAttribute_126('7');
    noLegs_0_1.set(LegOptAttribute_126);
    InstrumentLeg_126.insert(LegOptAttribute_126.getString());
    FIX::LegOptionRatio LegOptionRatio_126;
    LegOptionRatio_126.setString("3123216");
    noLegs_0_1.set(LegOptionRatio_126);
    InstrumentLeg_126.insert(LegOptionRatio_126.getString());
    FIX::LegPool LegPool_126("STRING_712772366");
    noLegs_0_1.set(LegPool_126);
    InstrumentLeg_126.insert(LegPool_126.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_126("STRING_2125769759");
    noLegs_0_1.set(LegPriceUnitOfMeasure_126);
    InstrumentLeg_126.insert(LegPriceUnitOfMeasure_126.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_126;
    LegPriceUnitOfMeasureQty_126.setString("13248091");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_126);
    InstrumentLeg_126.insert(LegPriceUnitOfMeasureQty_126.getString());
    FIX::LegProduct LegProduct_126(1466264673);
    noLegs_0_1.set(LegProduct_126);
    InstrumentLeg_126.insert(LegProduct_126.getString());
    FIX::LegPutOrCall LegPutOrCall_126(504630825);
    noLegs_0_1.set(LegPutOrCall_126);
    InstrumentLeg_126.insert(LegPutOrCall_126.getString());
    FIX::LegRatioQty LegRatioQty_126;
    LegRatioQty_126.setString("7682465");
    noLegs_0_1.set(LegRatioQty_126);
    InstrumentLeg_126.insert(LegRatioQty_126.getString());
    FIX::LegRedemptionDate LegRedemptionDate_126("LOCALMKTDATE_823937308");
    noLegs_0_1.set(LegRedemptionDate_126);
    InstrumentLeg_126.insert(LegRedemptionDate_126.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_126("STRING_1293021022");
    noLegs_0_1.set(LegRepoCollateralSecurityType_126);
    InstrumentLeg_126.insert(LegRepoCollateralSecurityType_126.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_126;
    LegRepurchaseRate_126.setString("14.220000");
    noLegs_0_1.set(LegRepurchaseRate_126);
    InstrumentLeg_126.insert(LegRepurchaseRate_126.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_126(969480754);
    noLegs_0_1.set(LegRepurchaseTerm_126);
    InstrumentLeg_126.insert(LegRepurchaseTerm_126.getString());
    FIX::LegSecurityDesc LegSecurityDesc_126("STRING_16819742");
    noLegs_0_1.set(LegSecurityDesc_126);
    InstrumentLeg_126.insert(LegSecurityDesc_126.getString());
    FIX::LegSecurityExchange LegSecurityExchange_126("EXCHANGE_1595908677");
    noLegs_0_1.set(LegSecurityExchange_126);
    InstrumentLeg_126.insert(LegSecurityExchange_126.getString());
    FIX::LegSecurityID LegSecurityID_126("STRING_574570745");
    noLegs_0_1.set(LegSecurityID_126);
    InstrumentLeg_126.insert(LegSecurityID_126.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_126("STRING_1326140153");
    noLegs_0_1.set(LegSecurityIDSource_126);
    InstrumentLeg_126.insert(LegSecurityIDSource_126.getString());
    FIX::LegSecuritySubType LegSecuritySubType_126("STRING_773897121");
    noLegs_0_1.set(LegSecuritySubType_126);
    InstrumentLeg_126.insert(LegSecuritySubType_126.getString());
    FIX::LegSecurityType LegSecurityType_126("STRING_1145791768");
    noLegs_0_1.set(LegSecurityType_126);
    InstrumentLeg_126.insert(LegSecurityType_126.getString());
    FIX::LegSide LegSide_126('1');
    noLegs_0_1.set(LegSide_126);
    InstrumentLeg_126.insert(LegSide_126.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_126("STRING_1297751517");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_126);
    InstrumentLeg_126.insert(LegStateOrProvinceOfIssue_126.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_126("JPY");
    noLegs_0_1.set(LegStrikeCurrency_126);
    InstrumentLeg_126.insert(LegStrikeCurrency_126.getString());
    FIX::LegStrikePrice LegStrikePrice_126;
    LegStrikePrice_126.setString("1995960");
    noLegs_0_1.set(LegStrikePrice_126);
    InstrumentLeg_126.insert(LegStrikePrice_126.getString());
    FIX::LegSymbol LegSymbol_126("STRING_207322660");
    noLegs_0_1.set(LegSymbol_126);
    InstrumentLeg_126.insert(LegSymbol_126.getString());
    FIX::LegSymbolSfx LegSymbolSfx_126("STRING_1640759718");
    noLegs_0_1.set(LegSymbolSfx_126);
    InstrumentLeg_126.insert(LegSymbolSfx_126.getString());
    FIX::LegTimeUnit LegTimeUnit_126("STRING_793460656");
    noLegs_0_1.set(LegTimeUnit_126);
    InstrumentLeg_126.insert(LegTimeUnit_126.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_126("STRING_2072597654");
    noLegs_0_1.set(LegUnitOfMeasure_126);
    InstrumentLeg_126.insert(LegUnitOfMeasure_126.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_126;
    LegUnitOfMeasureQty_126.setString("18900007");
    noLegs_0_1.set(LegUnitOfMeasureQty_126);
    InstrumentLeg_126.insert(LegUnitOfMeasureQty_126.getString());
    all_values.push_back(InstrumentLeg_126);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_253;
      FIX::LegSecurityAltID LegSecurityAltID_253("STRING_1224845863");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_253);
      LegSecAltIDGrp_NoLegSecurityAltID_253.insert(LegSecurityAltID_253.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_253("STRING_529721970");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_253);
      LegSecAltIDGrp_NoLegSecurityAltID_253.insert(LegSecurityAltIDSource_253.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_253);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_127;
    FIX::EncodedLegIssuer EncodedLegIssuer_127("DATA_1936849890");
    noLegs_0_2.set(EncodedLegIssuer_127);
    InstrumentLeg_127.insert(EncodedLegIssuer_127.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_127(1537167500);
    noLegs_0_2.set(EncodedLegIssuerLen_127);
    InstrumentLeg_127.insert(EncodedLegIssuerLen_127.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_127("DATA_1242494336");
    noLegs_0_2.set(EncodedLegSecurityDesc_127);
    InstrumentLeg_127.insert(EncodedLegSecurityDesc_127.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_127(1915136001);
    noLegs_0_2.set(EncodedLegSecurityDescLen_127);
    InstrumentLeg_127.insert(EncodedLegSecurityDescLen_127.getString());
    FIX::LegCFICode LegCFICode_127("STRING_714493018");
    noLegs_0_2.set(LegCFICode_127);
    InstrumentLeg_127.insert(LegCFICode_127.getString());
    FIX::LegContractMultiplier LegContractMultiplier_127;
    LegContractMultiplier_127.setString("5612753");
    noLegs_0_2.set(LegContractMultiplier_127);
    InstrumentLeg_127.insert(LegContractMultiplier_127.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_127(272283178);
    noLegs_0_2.set(LegContractMultiplierUnit_127);
    InstrumentLeg_127.insert(LegContractMultiplierUnit_127.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_127("MONTHYEAR_1482739568");
    noLegs_0_2.set(LegContractSettlMonth_127);
    InstrumentLeg_127.insert(LegContractSettlMonth_127.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_127("COUNTRY_1385212669");
    noLegs_0_2.set(LegCountryOfIssue_127);
    InstrumentLeg_127.insert(LegCountryOfIssue_127.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_127("LOCALMKTDATE_1565304200");
    noLegs_0_2.set(LegCouponPaymentDate_127);
    InstrumentLeg_127.insert(LegCouponPaymentDate_127.getString());
    FIX::LegCouponRate LegCouponRate_127;
    LegCouponRate_127.setString("73.420000");
    noLegs_0_2.set(LegCouponRate_127);
    InstrumentLeg_127.insert(LegCouponRate_127.getString());
    FIX::LegCreditRating LegCreditRating_127("STRING_207209776");
    noLegs_0_2.set(LegCreditRating_127);
    InstrumentLeg_127.insert(LegCreditRating_127.getString());
    FIX::LegCurrency LegCurrency_127("CHF");
    noLegs_0_2.set(LegCurrency_127);
    InstrumentLeg_127.insert(LegCurrency_127.getString());
    FIX::LegDatedDate LegDatedDate_127("LOCALMKTDATE_781780521");
    noLegs_0_2.set(LegDatedDate_127);
    InstrumentLeg_127.insert(LegDatedDate_127.getString());
    FIX::LegExerciseStyle LegExerciseStyle_127(760780448);
    noLegs_0_2.set(LegExerciseStyle_127);
    InstrumentLeg_127.insert(LegExerciseStyle_127.getString());
    FIX::LegFactor LegFactor_127;
    LegFactor_127.setString("5078894");
    noLegs_0_2.set(LegFactor_127);
    InstrumentLeg_127.insert(LegFactor_127.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_127(1927572290);
    noLegs_0_2.set(LegFlowScheduleType_127);
    InstrumentLeg_127.insert(LegFlowScheduleType_127.getString());
    FIX::LegInstrRegistry LegInstrRegistry_127("STRING_1992419859");
    noLegs_0_2.set(LegInstrRegistry_127);
    InstrumentLeg_127.insert(LegInstrRegistry_127.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_127("LOCALMKTDATE_1805641009");
    noLegs_0_2.set(LegInterestAccrualDate_127);
    InstrumentLeg_127.insert(LegInterestAccrualDate_127.getString());
    FIX::LegIssueDate LegIssueDate_127("LOCALMKTDATE_197962768");
    noLegs_0_2.set(LegIssueDate_127);
    InstrumentLeg_127.insert(LegIssueDate_127.getString());
    FIX::LegIssuer LegIssuer_127("STRING_1560896861");
    noLegs_0_2.set(LegIssuer_127);
    InstrumentLeg_127.insert(LegIssuer_127.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_127("STRING_2005237097");
    noLegs_0_2.set(LegLocaleOfIssue_127);
    InstrumentLeg_127.insert(LegLocaleOfIssue_127.getString());
    FIX::LegMaturityDate LegMaturityDate_127("LOCALMKTDATE_405285428");
    noLegs_0_2.set(LegMaturityDate_127);
    InstrumentLeg_127.insert(LegMaturityDate_127.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_127("MONTHYEAR_1054172931");
    noLegs_0_2.set(LegMaturityMonthYear_127);
    InstrumentLeg_127.insert(LegMaturityMonthYear_127.getString());
    FIX::LegMaturityTime LegMaturityTime_127("TZTIMEONLY_651214105");
    noLegs_0_2.set(LegMaturityTime_127);
    InstrumentLeg_127.insert(LegMaturityTime_127.getString());
    FIX::LegOptAttribute LegOptAttribute_127('3');
    noLegs_0_2.set(LegOptAttribute_127);
    InstrumentLeg_127.insert(LegOptAttribute_127.getString());
    FIX::LegOptionRatio LegOptionRatio_127;
    LegOptionRatio_127.setString("7966900");
    noLegs_0_2.set(LegOptionRatio_127);
    InstrumentLeg_127.insert(LegOptionRatio_127.getString());
    FIX::LegPool LegPool_127("STRING_360700337");
    noLegs_0_2.set(LegPool_127);
    InstrumentLeg_127.insert(LegPool_127.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_127("STRING_1555245298");
    noLegs_0_2.set(LegPriceUnitOfMeasure_127);
    InstrumentLeg_127.insert(LegPriceUnitOfMeasure_127.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_127;
    LegPriceUnitOfMeasureQty_127.setString("13264120");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_127);
    InstrumentLeg_127.insert(LegPriceUnitOfMeasureQty_127.getString());
    FIX::LegProduct LegProduct_127(150066580);
    noLegs_0_2.set(LegProduct_127);
    InstrumentLeg_127.insert(LegProduct_127.getString());
    FIX::LegPutOrCall LegPutOrCall_127(944929150);
    noLegs_0_2.set(LegPutOrCall_127);
    InstrumentLeg_127.insert(LegPutOrCall_127.getString());
    FIX::LegRatioQty LegRatioQty_127;
    LegRatioQty_127.setString("4214227");
    noLegs_0_2.set(LegRatioQty_127);
    InstrumentLeg_127.insert(LegRatioQty_127.getString());
    FIX::LegRedemptionDate LegRedemptionDate_127("LOCALMKTDATE_2065202581");
    noLegs_0_2.set(LegRedemptionDate_127);
    InstrumentLeg_127.insert(LegRedemptionDate_127.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_127("STRING_1659422169");
    noLegs_0_2.set(LegRepoCollateralSecurityType_127);
    InstrumentLeg_127.insert(LegRepoCollateralSecurityType_127.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_127;
    LegRepurchaseRate_127.setString("80.850000");
    noLegs_0_2.set(LegRepurchaseRate_127);
    InstrumentLeg_127.insert(LegRepurchaseRate_127.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_127(190002112);
    noLegs_0_2.set(LegRepurchaseTerm_127);
    InstrumentLeg_127.insert(LegRepurchaseTerm_127.getString());
    FIX::LegSecurityDesc LegSecurityDesc_127("STRING_994678089");
    noLegs_0_2.set(LegSecurityDesc_127);
    InstrumentLeg_127.insert(LegSecurityDesc_127.getString());
    FIX::LegSecurityExchange LegSecurityExchange_127("EXCHANGE_220427107");
    noLegs_0_2.set(LegSecurityExchange_127);
    InstrumentLeg_127.insert(LegSecurityExchange_127.getString());
    FIX::LegSecurityID LegSecurityID_127("STRING_1755306312");
    noLegs_0_2.set(LegSecurityID_127);
    InstrumentLeg_127.insert(LegSecurityID_127.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_127("STRING_1280245431");
    noLegs_0_2.set(LegSecurityIDSource_127);
    InstrumentLeg_127.insert(LegSecurityIDSource_127.getString());
    FIX::LegSecuritySubType LegSecuritySubType_127("STRING_427636883");
    noLegs_0_2.set(LegSecuritySubType_127);
    InstrumentLeg_127.insert(LegSecuritySubType_127.getString());
    FIX::LegSecurityType LegSecurityType_127("STRING_1189946607");
    noLegs_0_2.set(LegSecurityType_127);
    InstrumentLeg_127.insert(LegSecurityType_127.getString());
    FIX::LegSide LegSide_127('1');
    noLegs_0_2.set(LegSide_127);
    InstrumentLeg_127.insert(LegSide_127.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_127("STRING_1209417404");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_127);
    InstrumentLeg_127.insert(LegStateOrProvinceOfIssue_127.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_127("CHF");
    noLegs_0_2.set(LegStrikeCurrency_127);
    InstrumentLeg_127.insert(LegStrikeCurrency_127.getString());
    FIX::LegStrikePrice LegStrikePrice_127;
    LegStrikePrice_127.setString("9895060");
    noLegs_0_2.set(LegStrikePrice_127);
    InstrumentLeg_127.insert(LegStrikePrice_127.getString());
    FIX::LegSymbol LegSymbol_127("STRING_1795663266");
    noLegs_0_2.set(LegSymbol_127);
    InstrumentLeg_127.insert(LegSymbol_127.getString());
    FIX::LegSymbolSfx LegSymbolSfx_127("STRING_1180284656");
    noLegs_0_2.set(LegSymbolSfx_127);
    InstrumentLeg_127.insert(LegSymbolSfx_127.getString());
    FIX::LegTimeUnit LegTimeUnit_127("STRING_1187468815");
    noLegs_0_2.set(LegTimeUnit_127);
    InstrumentLeg_127.insert(LegTimeUnit_127.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_127("STRING_1209076479");
    noLegs_0_2.set(LegUnitOfMeasure_127);
    InstrumentLeg_127.insert(LegUnitOfMeasure_127.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_127;
    LegUnitOfMeasureQty_127.setString("10380381");
    noLegs_0_2.set(LegUnitOfMeasureQty_127);
    InstrumentLeg_127.insert(LegUnitOfMeasureQty_127.getString());
    all_values.push_back(InstrumentLeg_127);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_254;
      FIX::LegSecurityAltID LegSecurityAltID_254("STRING_115765763");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_254);
      LegSecAltIDGrp_NoLegSecurityAltID_254.insert(LegSecurityAltID_254.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_254("STRING_1689252211");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_254);
      LegSecAltIDGrp_NoLegSecurityAltID_254.insert(LegSecurityAltIDSource_254.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_254);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_79;
  FIX::AttachmentPoint AttachmentPoint_79;
  AttachmentPoint_79.setString("36.780000");
  msg.set(AttachmentPoint_79);
  Instrument_79.insert(AttachmentPoint_79.getString());
  FIX::CFICode CFICode_79("STRING_912455828");
  msg.set(CFICode_79);
  Instrument_79.insert(CFICode_79.getString());
  FIX::CPProgram CPProgram_79(1);
  msg.set(CPProgram_79);
  Instrument_79.insert(CPProgram_79.getString());
  FIX::CPRegType CPRegType_79("STRING_1330915328");
  msg.set(CPRegType_79);
  Instrument_79.insert(CPRegType_79.getString());
  FIX::CapPrice CapPrice_79;
  CapPrice_79.setString("913842");
  msg.set(CapPrice_79);
  Instrument_79.insert(CapPrice_79.getString());
  FIX::ContractMultiplier ContractMultiplier_79;
  ContractMultiplier_79.setString("525354");
  msg.set(ContractMultiplier_79);
  Instrument_79.insert(ContractMultiplier_79.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_79(1);
  msg.set(ContractMultiplierUnit_79);
  Instrument_79.insert(ContractMultiplierUnit_79.getString());
  FIX::ContractSettlMonth ContractSettlMonth_79("MONTHYEAR_512806939");
  msg.set(ContractSettlMonth_79);
  Instrument_79.insert(ContractSettlMonth_79.getString());
  FIX::CountryOfIssue CountryOfIssue_79("COUNTRY_2117738062");
  msg.set(CountryOfIssue_79);
  Instrument_79.insert(CountryOfIssue_79.getString());
  FIX::CouponPaymentDate CouponPaymentDate_79("LOCALMKTDATE_1787782999");
  msg.set(CouponPaymentDate_79);
  Instrument_79.insert(CouponPaymentDate_79.getString());
  FIX::CouponRate CouponRate_79;
  CouponRate_79.setString("50.250000");
  msg.set(CouponRate_79);
  Instrument_79.insert(CouponRate_79.getString());
  FIX::CreditRating CreditRating_79("STRING_160256526");
  msg.set(CreditRating_79);
  Instrument_79.insert(CreditRating_79.getString());
  FIX::DatedDate DatedDate_79("LOCALMKTDATE_634977440");
  msg.set(DatedDate_79);
  Instrument_79.insert(DatedDate_79.getString());
  FIX::DetachmentPoint DetachmentPoint_79;
  DetachmentPoint_79.setString("21.320000");
  msg.set(DetachmentPoint_79);
  Instrument_79.insert(DetachmentPoint_79.getString());
  FIX::EncodedIssuer EncodedIssuer_79("DATA_1915562838");
  msg.set(EncodedIssuer_79);
  Instrument_79.insert(EncodedIssuer_79.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_79(1915222871);
  msg.set(EncodedIssuerLen_79);
  Instrument_79.insert(EncodedIssuerLen_79.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_79("DATA_2143569015");
  msg.set(EncodedSecurityDesc_79);
  Instrument_79.insert(EncodedSecurityDesc_79.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_79(958025797);
  msg.set(EncodedSecurityDescLen_79);
  Instrument_79.insert(EncodedSecurityDescLen_79.getString());
  FIX::ExerciseStyle ExerciseStyle_79(2);
  msg.set(ExerciseStyle_79);
  Instrument_79.insert(ExerciseStyle_79.getString());
  FIX::Factor Factor_79;
  Factor_79.setString("12055027");
  msg.set(Factor_79);
  Instrument_79.insert(Factor_79.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_79(true);
  msg.set(FlexProductEligibilityIndicator_79);
  Instrument_79.insert(FlexProductEligibilityIndicator_79.getString());
  FIX::FlexibleIndicator FlexibleIndicator_79(false);
  msg.set(FlexibleIndicator_79);
  Instrument_79.insert(FlexibleIndicator_79.getString());
  FIX::FloorPrice FloorPrice_79;
  FloorPrice_79.setString("475251");
  msg.set(FloorPrice_79);
  Instrument_79.insert(FloorPrice_79.getString());
  FIX::FlowScheduleType FlowScheduleType_79(2);
  msg.set(FlowScheduleType_79);
  Instrument_79.insert(FlowScheduleType_79.getString());
  FIX::InstrRegistry InstrRegistry_79("STRING_1336905329");
  msg.set(InstrRegistry_79);
  Instrument_79.insert(InstrRegistry_79.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_79('1');
  msg.set(InstrmtAssignmentMethod_79);
  Instrument_79.insert(InstrmtAssignmentMethod_79.getString());
  FIX::InterestAccrualDate InterestAccrualDate_79("LOCALMKTDATE_1618525302");
  msg.set(InterestAccrualDate_79);
  Instrument_79.insert(InterestAccrualDate_79.getString());
  FIX::IssueDate IssueDate_79("LOCALMKTDATE_227459787");
  msg.set(IssueDate_79);
  Instrument_79.insert(IssueDate_79.getString());
  FIX::Issuer Issuer_79("STRING_680264580");
  msg.set(Issuer_79);
  Instrument_79.insert(Issuer_79.getString());
  FIX::ListMethod ListMethod_79(1);
  msg.set(ListMethod_79);
  Instrument_79.insert(ListMethod_79.getString());
  FIX::LocaleOfIssue LocaleOfIssue_79("STRING_1916711998");
  msg.set(LocaleOfIssue_79);
  Instrument_79.insert(LocaleOfIssue_79.getString());
  FIX::MaturityDate MaturityDate_79("LOCALMKTDATE_455934610");
  msg.set(MaturityDate_79);
  Instrument_79.insert(MaturityDate_79.getString());
  FIX::MaturityMonthYear MaturityMonthYear_79("MONTHYEAR_499263245");
  msg.set(MaturityMonthYear_79);
  Instrument_79.insert(MaturityMonthYear_79.getString());
  FIX::MaturityTime MaturityTime_79("TZTIMEONLY_1819180898");
  msg.set(MaturityTime_79);
  Instrument_79.insert(MaturityTime_79.getString());
  FIX::MinPriceIncrement MinPriceIncrement_79;
  MinPriceIncrement_79.setString("17868499");
  msg.set(MinPriceIncrement_79);
  Instrument_79.insert(MinPriceIncrement_79.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_79;
  MinPriceIncrementAmount_79.setString("5906474");
  msg.set(MinPriceIncrementAmount_79);
  Instrument_79.insert(MinPriceIncrementAmount_79.getString());
  FIX::NTPositionLimit NTPositionLimit_79(1871716379);
  msg.set(NTPositionLimit_79);
  Instrument_79.insert(NTPositionLimit_79.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_79;
  NotionalPercentageOutstanding_79.setString("7.690000");
  msg.set(NotionalPercentageOutstanding_79);
  Instrument_79.insert(NotionalPercentageOutstanding_79.getString());
  FIX::OptAttribute OptAttribute_79('1');
  msg.set(OptAttribute_79);
  Instrument_79.insert(OptAttribute_79.getString());
  FIX::OptPayoutAmount OptPayoutAmount_79;
  OptPayoutAmount_79.setString("18419707");
  msg.set(OptPayoutAmount_79);
  Instrument_79.insert(OptPayoutAmount_79.getString());
  FIX::OptPayoutType OptPayoutType_79(2);
  msg.set(OptPayoutType_79);
  Instrument_79.insert(OptPayoutType_79.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_79;
  OriginalNotionalPercentageOutstanding_79.setString("57.770000");
  msg.set(OriginalNotionalPercentageOutstanding_79);
  Instrument_79.insert(OriginalNotionalPercentageOutstanding_79.getString());
  FIX::Pool Pool_79("STRING_2002227319");
  msg.set(Pool_79);
  Instrument_79.insert(Pool_79.getString());
  FIX::PositionLimit PositionLimit_79(43003913);
  msg.set(PositionLimit_79);
  Instrument_79.insert(PositionLimit_79.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_79("STRING_INX");
  msg.set(PriceQuoteMethod_79);
  Instrument_79.insert(PriceQuoteMethod_79.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_79("STRING_1770306509");
  msg.set(PriceUnitOfMeasure_79);
  Instrument_79.insert(PriceUnitOfMeasure_79.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_79;
  PriceUnitOfMeasureQty_79.setString("19582267");
  msg.set(PriceUnitOfMeasureQty_79);
  Instrument_79.insert(PriceUnitOfMeasureQty_79.getString());
  FIX::Product Product_81(12);
  msg.set(Product_81);
  Instrument_79.insert(Product_81.getString());
  FIX::ProductComplex ProductComplex_79("STRING_580848659");
  msg.set(ProductComplex_79);
  Instrument_79.insert(ProductComplex_79.getString());
  FIX::PutOrCall PutOrCall_79(0);
  msg.set(PutOrCall_79);
  Instrument_79.insert(PutOrCall_79.getString());
  FIX::RedemptionDate RedemptionDate_79("LOCALMKTDATE_1221512399");
  msg.set(RedemptionDate_79);
  Instrument_79.insert(RedemptionDate_79.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_79("STRING_1342117863");
  msg.set(RepoCollateralSecurityType_79);
  Instrument_79.insert(RepoCollateralSecurityType_79.getString());
  FIX::RepurchaseRate RepurchaseRate_79;
  RepurchaseRate_79.setString("8.350000");
  msg.set(RepurchaseRate_79);
  Instrument_79.insert(RepurchaseRate_79.getString());
  FIX::RepurchaseTerm RepurchaseTerm_79(1269037569);
  msg.set(RepurchaseTerm_79);
  Instrument_79.insert(RepurchaseTerm_79.getString());
  FIX::RestructuringType RestructuringType_79("STRING_MM");
  msg.set(RestructuringType_79);
  Instrument_79.insert(RestructuringType_79.getString());
  FIX::SecurityDesc SecurityDesc_79("STRING_2086246165");
  msg.set(SecurityDesc_79);
  Instrument_79.insert(SecurityDesc_79.getString());
  FIX::SecurityExchange SecurityExchange_79("EXCHANGE_356547906");
  msg.set(SecurityExchange_79);
  Instrument_79.insert(SecurityExchange_79.getString());
  FIX::SecurityGroup SecurityGroup_79("STRING_1222608340");
  msg.set(SecurityGroup_79);
  Instrument_79.insert(SecurityGroup_79.getString());
  FIX::SecurityID SecurityID_79("STRING_166222304");
  msg.set(SecurityID_79);
  Instrument_79.insert(SecurityID_79.getString());
  FIX::SecurityIDSource SecurityIDSource_79("STRING_8");
  msg.set(SecurityIDSource_79);
  Instrument_79.insert(SecurityIDSource_79.getString());
  FIX::SecurityStatus SecurityStatus_79("STRING_2");
  msg.set(SecurityStatus_79);
  Instrument_79.insert(SecurityStatus_79.getString());
  FIX::SecuritySubType SecuritySubType_80("STRING_2082934302");
  msg.set(SecuritySubType_80);
  Instrument_79.insert(SecuritySubType_80.getString());
  FIX::SecurityType SecurityType_81("STRING_STRUCT");
  msg.set(SecurityType_81);
  Instrument_79.insert(SecurityType_81.getString());
  FIX::Seniority Seniority_79("STRING_SD");
  msg.set(Seniority_79);
  Instrument_79.insert(Seniority_79.getString());
  FIX::SettlMethod SettlMethod_79('C');
  msg.set(SettlMethod_79);
  Instrument_79.insert(SettlMethod_79.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_79("STRING_1132113388");
  msg.set(SettleOnOpenFlag_79);
  Instrument_79.insert(SettleOnOpenFlag_79.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_79("STRING_1899326462");
  msg.set(StateOrProvinceOfIssue_79);
  Instrument_79.insert(StateOrProvinceOfIssue_79.getString());
  FIX::StrikeCurrency StrikeCurrency_79("EUR");
  msg.set(StrikeCurrency_79);
  Instrument_79.insert(StrikeCurrency_79.getString());
  FIX::StrikeMultiplier StrikeMultiplier_79;
  StrikeMultiplier_79.setString("8552972");
  msg.set(StrikeMultiplier_79);
  Instrument_79.insert(StrikeMultiplier_79.getString());
  FIX::StrikePrice StrikePrice_79;
  StrikePrice_79.setString("11733514");
  msg.set(StrikePrice_79);
  Instrument_79.insert(StrikePrice_79.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_79(2);
  msg.set(StrikePriceBoundaryMethod_79);
  Instrument_79.insert(StrikePriceBoundaryMethod_79.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_79;
  StrikePriceBoundaryPrecision_79.setString("29.910000");
  msg.set(StrikePriceBoundaryPrecision_79);
  Instrument_79.insert(StrikePriceBoundaryPrecision_79.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_79(4);
  msg.set(StrikePriceDeterminationMethod_79);
  Instrument_79.insert(StrikePriceDeterminationMethod_79.getString());
  FIX::StrikeValue StrikeValue_79;
  StrikeValue_79.setString("3508708");
  msg.set(StrikeValue_79);
  Instrument_79.insert(StrikeValue_79.getString());
  FIX::Symbol Symbol_79("STRING_1326697252");
  msg.set(Symbol_79);
  Instrument_79.insert(Symbol_79.getString());
  FIX::SymbolSfx SymbolSfx_79("STRING_WI");
  msg.set(SymbolSfx_79);
  Instrument_79.insert(SymbolSfx_79.getString());
  FIX::TimeUnit TimeUnit_79("STRING_Mo");
  msg.set(TimeUnit_79);
  Instrument_79.insert(TimeUnit_79.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_79(1);
  msg.set(UnderlyingPriceDeterminationMethod_79);
  Instrument_79.insert(UnderlyingPriceDeterminationMethod_79.getString());
  FIX::UnitOfMeasure UnitOfMeasure_79("STRING_lbs");
  msg.set(UnitOfMeasure_79);
  Instrument_79.insert(UnitOfMeasure_79.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_79;
  UnitOfMeasureQty_79.setString("7543341");
  msg.set(UnitOfMeasureQty_79);
  Instrument_79.insert(UnitOfMeasureQty_79.getString());
  FIX::ValuationMethod ValuationMethod_79("STRING_FUTDA");
  msg.set(ValuationMethod_79);
  Instrument_79.insert(ValuationMethod_79.getString());
  all_values.push_back(Instrument_79);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_162;
    FIX::ComplexEventCondition ComplexEventCondition_162(2);
    noComplexEvents_0_0.set(ComplexEventCondition_162);
    ComplexEvents_NoComplexEvents_162.insert(ComplexEventCondition_162.getString());
    FIX::ComplexEventPrice ComplexEventPrice_162;
    ComplexEventPrice_162.setString("16857732");
    noComplexEvents_0_0.set(ComplexEventPrice_162);
    ComplexEvents_NoComplexEvents_162.insert(ComplexEventPrice_162.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_162(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_162);
    ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceBoundaryMethod_162.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_162;
    ComplexEventPriceBoundaryPrecision_162.setString("75.460000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_162);
    ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceBoundaryPrecision_162.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_162(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_162);
    ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceTimeType_162.getString());
    FIX::ComplexEventType ComplexEventType_162(2);
    noComplexEvents_0_0.set(ComplexEventType_162);
    ComplexEvents_NoComplexEvents_162.insert(ComplexEventType_162.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_162;
    ComplexOptPayoutAmount_162.setString("16086598");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_162);
    ComplexEvents_NoComplexEvents_162.insert(ComplexOptPayoutAmount_162.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_162);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_329;
      FIX::ComplexEventEndDate ComplexEventEndDate_329(FIX::UTCTIMESTAMP(16, 16, 24, 20, 9, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_329);
      ComplexEventDates_NoComplexEventDates_329.insert(ComplexEventEndDate_329.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_329(FIX::UTCTIMESTAMP(13, 53, 12, 27, 2, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_329);
      ComplexEventDates_NoComplexEventDates_329.insert(ComplexEventStartDate_329.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_329);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_670;
        FIX::ComplexEventEndTime ComplexEventEndTime_670(FIX::UTCTIMEONLY(5, 12, 22));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_670);
        ComplexEventTimes_NoComplexEventTimes_670.insert(ComplexEventEndTime_670.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_670(FIX::UTCTIMEONLY(10, 14, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_670);
        ComplexEventTimes_NoComplexEventTimes_670.insert(ComplexEventStartTime_670.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_670);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_671;
        FIX::ComplexEventEndTime ComplexEventEndTime_671(FIX::UTCTIMEONLY(7, 46, 45));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_671);
        ComplexEventTimes_NoComplexEventTimes_671.insert(ComplexEventEndTime_671.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_671(FIX::UTCTIMEONLY(11, 15, 6));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_671);
        ComplexEventTimes_NoComplexEventTimes_671.insert(ComplexEventStartTime_671.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_671);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_330;
      FIX::ComplexEventEndDate ComplexEventEndDate_330(FIX::UTCTIMESTAMP(11, 23, 58, 23, 8, 2005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_330);
      ComplexEventDates_NoComplexEventDates_330.insert(ComplexEventEndDate_330.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_330(FIX::UTCTIMESTAMP(9, 3, 20, 4, 9, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_330);
      ComplexEventDates_NoComplexEventDates_330.insert(ComplexEventStartDate_330.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_330);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_672;
        FIX::ComplexEventEndTime ComplexEventEndTime_672(FIX::UTCTIMEONLY(1, 26, 7));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_672);
        ComplexEventTimes_NoComplexEventTimes_672.insert(ComplexEventEndTime_672.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_672(FIX::UTCTIMEONLY(16, 21, 30));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_672);
        ComplexEventTimes_NoComplexEventTimes_672.insert(ComplexEventStartTime_672.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_672);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_673;
        FIX::ComplexEventEndTime ComplexEventEndTime_673(FIX::UTCTIMEONLY(9, 16, 48));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_673);
        ComplexEventTimes_NoComplexEventTimes_673.insert(ComplexEventEndTime_673.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_673(FIX::UTCTIMEONLY(8, 55, 27));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_673);
        ComplexEventTimes_NoComplexEventTimes_673.insert(ComplexEventStartTime_673.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_673);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_163;
    FIX::ComplexEventCondition ComplexEventCondition_163(1);
    noComplexEvents_0_1.set(ComplexEventCondition_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventCondition_163.getString());
    FIX::ComplexEventPrice ComplexEventPrice_163;
    ComplexEventPrice_163.setString("1310179");
    noComplexEvents_0_1.set(ComplexEventPrice_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventPrice_163.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_163(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceBoundaryMethod_163.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_163;
    ComplexEventPriceBoundaryPrecision_163.setString("13.520000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceBoundaryPrecision_163.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_163(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceTimeType_163.getString());
    FIX::ComplexEventType ComplexEventType_163(2);
    noComplexEvents_0_1.set(ComplexEventType_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexEventType_163.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_163;
    ComplexOptPayoutAmount_163.setString("20204812");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_163);
    ComplexEvents_NoComplexEvents_163.insert(ComplexOptPayoutAmount_163.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_163);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_331;
      FIX::ComplexEventEndDate ComplexEventEndDate_331(FIX::UTCTIMESTAMP(21, 45, 26, 25, 10, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_331);
      ComplexEventDates_NoComplexEventDates_331.insert(ComplexEventEndDate_331.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_331(FIX::UTCTIMESTAMP(14, 58, 10, 16, 7, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_331);
      ComplexEventDates_NoComplexEventDates_331.insert(ComplexEventStartDate_331.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_331);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_674;
        FIX::ComplexEventEndTime ComplexEventEndTime_674(FIX::UTCTIMEONLY(8, 59, 37));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_674);
        ComplexEventTimes_NoComplexEventTimes_674.insert(ComplexEventEndTime_674.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_674(FIX::UTCTIMEONLY(11, 32, 24));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_674);
        ComplexEventTimes_NoComplexEventTimes_674.insert(ComplexEventStartTime_674.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_674);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_675;
        FIX::ComplexEventEndTime ComplexEventEndTime_675(FIX::UTCTIMEONLY(18, 14, 13));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_675);
        ComplexEventTimes_NoComplexEventTimes_675.insert(ComplexEventEndTime_675.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_675(FIX::UTCTIMEONLY(7, 55, 56));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_675);
        ComplexEventTimes_NoComplexEventTimes_675.insert(ComplexEventStartTime_675.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_675);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_676;
        FIX::ComplexEventEndTime ComplexEventEndTime_676(FIX::UTCTIMEONLY(20, 33, 36));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_676);
        ComplexEventTimes_NoComplexEventTimes_676.insert(ComplexEventEndTime_676.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_676(FIX::UTCTIMEONLY(18, 8, 44));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_676);
        ComplexEventTimes_NoComplexEventTimes_676.insert(ComplexEventStartTime_676.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_676);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_332;
      FIX::ComplexEventEndDate ComplexEventEndDate_332(FIX::UTCTIMESTAMP(22, 54, 8, 16, 10, 2009));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_332);
      ComplexEventDates_NoComplexEventDates_332.insert(ComplexEventEndDate_332.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_332(FIX::UTCTIMESTAMP(18, 50, 10, 15, 6, 2016));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_332);
      ComplexEventDates_NoComplexEventDates_332.insert(ComplexEventStartDate_332.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_332);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_677;
        FIX::ComplexEventEndTime ComplexEventEndTime_677(FIX::UTCTIMEONLY(8, 21, 27));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_677);
        ComplexEventTimes_NoComplexEventTimes_677.insert(ComplexEventEndTime_677.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_677(FIX::UTCTIMEONLY(4, 15, 16));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_677);
        ComplexEventTimes_NoComplexEventTimes_677.insert(ComplexEventStartTime_677.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_677);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_164;
    FIX::ComplexEventCondition ComplexEventCondition_164(1);
    noComplexEvents_0_2.set(ComplexEventCondition_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventCondition_164.getString());
    FIX::ComplexEventPrice ComplexEventPrice_164;
    ComplexEventPrice_164.setString("6015687");
    noComplexEvents_0_2.set(ComplexEventPrice_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventPrice_164.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_164(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceBoundaryMethod_164.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_164;
    ComplexEventPriceBoundaryPrecision_164.setString("45.350000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceBoundaryPrecision_164.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_164(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceTimeType_164.getString());
    FIX::ComplexEventType ComplexEventType_164(8);
    noComplexEvents_0_2.set(ComplexEventType_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexEventType_164.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_164;
    ComplexOptPayoutAmount_164.setString("6846731");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_164);
    ComplexEvents_NoComplexEvents_164.insert(ComplexOptPayoutAmount_164.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_164);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_333;
      FIX::ComplexEventEndDate ComplexEventEndDate_333(FIX::UTCTIMESTAMP(18, 43, 17, 2, 5, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_333);
      ComplexEventDates_NoComplexEventDates_333.insert(ComplexEventEndDate_333.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_333(FIX::UTCTIMESTAMP(14, 50, 6, 21, 8, 2009));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_333);
      ComplexEventDates_NoComplexEventDates_333.insert(ComplexEventStartDate_333.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_333);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_678;
        FIX::ComplexEventEndTime ComplexEventEndTime_678(FIX::UTCTIMEONLY(5, 49, 5));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_678);
        ComplexEventTimes_NoComplexEventTimes_678.insert(ComplexEventEndTime_678.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_678(FIX::UTCTIMEONLY(6, 12, 58));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_678);
        ComplexEventTimes_NoComplexEventTimes_678.insert(ComplexEventStartTime_678.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_678);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_162;
    FIX::EventDate EventDate_162("LOCALMKTDATE_2059941831");
    noEvents_0_0.set(EventDate_162);
    EvntGrp_NoEvents_162.insert(EventDate_162.getString());
    FIX::EventPx EventPx_162;
    EventPx_162.setString("6072594");
    noEvents_0_0.set(EventPx_162);
    EvntGrp_NoEvents_162.insert(EventPx_162.getString());
    FIX::EventText EventText_162("STRING_812196731");
    noEvents_0_0.set(EventText_162);
    EvntGrp_NoEvents_162.insert(EventText_162.getString());
    FIX::EventTime EventTime_162(FIX::UTCTIMESTAMP(0, 7, 53, 9, 6, 2012));
    noEvents_0_0.set(EventTime_162);
    EvntGrp_NoEvents_162.insert(EventTime_162.getString());
    FIX::EventType EventType_162(8);
    noEvents_0_0.set(EventType_162);
    EvntGrp_NoEvents_162.insert(EventType_162.getString());
    all_values.push_back(EvntGrp_NoEvents_162);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_164;
    FIX::InstrumentPartyID InstrumentPartyID_164("STRING_1367078549");
    noInstrumentParties_0_0.set(InstrumentPartyID_164);
    InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyID_164.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_164('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_164);
    InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyIDSource_164.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_164(802901479);
    noInstrumentParties_0_0.set(InstrumentPartyRole_164);
    InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyRole_164.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_164);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319;
      FIX::InstrumentPartySubID InstrumentPartySubID_319("STRING_932545750");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_319);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319.insert(InstrumentPartySubID_319.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_319(1647470006);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_319);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319.insert(InstrumentPartySubIDType_319.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320;
      FIX::InstrumentPartySubID InstrumentPartySubID_320("STRING_741770129");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_320);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320.insert(InstrumentPartySubID_320.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_320(757304493);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_320);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320.insert(InstrumentPartySubIDType_320.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_165;
    FIX::InstrumentPartyID InstrumentPartyID_165("STRING_1979765819");
    noInstrumentParties_0_1.set(InstrumentPartyID_165);
    InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyID_165.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_165('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_165);
    InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyIDSource_165.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_165(713306651);
    noInstrumentParties_0_1.set(InstrumentPartyRole_165);
    InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyRole_165.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_165);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321;
      FIX::InstrumentPartySubID InstrumentPartySubID_321("STRING_148109927");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_321);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321.insert(InstrumentPartySubID_321.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_321(540353168);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_321);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321.insert(InstrumentPartySubIDType_321.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322;
      FIX::InstrumentPartySubID InstrumentPartySubID_322("STRING_1471024442");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_322);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322.insert(InstrumentPartySubID_322.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_322(1832260973);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_322);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322.insert(InstrumentPartySubIDType_322.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323;
      FIX::InstrumentPartySubID InstrumentPartySubID_323("STRING_1998726260");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_323);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323.insert(InstrumentPartySubID_323.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_323(861397732);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_323);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323.insert(InstrumentPartySubIDType_323.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_166;
    FIX::InstrumentPartyID InstrumentPartyID_166("STRING_1233173169");
    noInstrumentParties_0_2.set(InstrumentPartyID_166);
    InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyID_166.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_166('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_166);
    InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyIDSource_166.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_166(1468657164);
    noInstrumentParties_0_2.set(InstrumentPartyRole_166);
    InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyRole_166.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_166);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324;
      FIX::InstrumentPartySubID InstrumentPartySubID_324("STRING_1227475800");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_324);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324.insert(InstrumentPartySubID_324.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_324(1106709076);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_324);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324.insert(InstrumentPartySubIDType_324.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_147;
    FIX::SecurityAltID SecurityAltID_147("STRING_1373295653");
    noSecurityAltID_0_0.set(SecurityAltID_147);
    SecAltIDGrp_NoSecurityAltID_147.insert(SecurityAltID_147.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_147("STRING_271176918");
    noSecurityAltID_0_0.set(SecurityAltIDSource_147);
    SecAltIDGrp_NoSecurityAltID_147.insert(SecurityAltIDSource_147.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_147);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_148;
    FIX::SecurityAltID SecurityAltID_148("STRING_545583245");
    noSecurityAltID_0_1.set(SecurityAltID_148);
    SecAltIDGrp_NoSecurityAltID_148.insert(SecurityAltID_148.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_148("STRING_2111297430");
    noSecurityAltID_0_1.set(SecurityAltIDSource_148);
    SecAltIDGrp_NoSecurityAltID_148.insert(SecurityAltIDSource_148.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_148);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_149;
    FIX::SecurityAltID SecurityAltID_149("STRING_227780977");
    noSecurityAltID_0_2.set(SecurityAltID_149);
    SecAltIDGrp_NoSecurityAltID_149.insert(SecurityAltID_149.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_149("STRING_163613720");
    noSecurityAltID_0_2.set(SecurityAltIDSource_149);
    SecAltIDGrp_NoSecurityAltID_149.insert(SecurityAltIDSource_149.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_149);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_158;
  FIX::SecurityXML SecurityXML_159("XMLDATA_1330892331");
  msg.set(SecurityXML_159);
  FIX::SecurityXMLLen SecurityXMLLen_79(1798921804);
  msg.set(SecurityXMLLen_79);
  FIX::SecurityXMLSchema SecurityXMLSchema_79("STRING_966515200");
  msg.set(SecurityXMLSchema_79);
  SecurityXML_158.insert(SecurityXMLSchema_79.getString());
  all_values.push_back(SecurityXML_158);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_128;
    FIX::PartyID PartyID_128("STRING_583983906");
    noPartyIDs_0_0.set(PartyID_128);
    Parties_NoPartyIDs_128.insert(PartyID_128.getString());
    FIX::PartyIDSource PartyIDSource_128('A');
    noPartyIDs_0_0.set(PartyIDSource_128);
    Parties_NoPartyIDs_128.insert(PartyIDSource_128.getString());
    FIX::PartyRole PartyRole_128(81);
    noPartyIDs_0_0.set(PartyRole_128);
    Parties_NoPartyIDs_128.insert(PartyRole_128.getString());
    all_values.push_back(Parties_NoPartyIDs_128);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_281;
      FIX::PartySubID PartySubID_281("STRING_298783729");
      noPartySubIDs_0_1_0.set(PartySubID_281);
      PtysSubGrp_NoPartySubIDs_281.insert(PartySubID_281.getString());
      FIX::PartySubIDType PartySubIDType_281(21);
      noPartySubIDs_0_1_0.set(PartySubIDType_281);
      PtysSubGrp_NoPartySubIDs_281.insert(PartySubIDType_281.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_281);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_282;
      FIX::PartySubID PartySubID_282("STRING_2054595051");
      noPartySubIDs_0_1_1.set(PartySubID_282);
      PtysSubGrp_NoPartySubIDs_282.insert(PartySubID_282.getString());
      FIX::PartySubIDType PartySubIDType_282(7);
      noPartySubIDs_0_1_1.set(PartySubIDType_282);
      PtysSubGrp_NoPartySubIDs_282.insert(PartySubIDType_282.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_282);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_129;
    FIX::PartyID PartyID_129("STRING_1304644084");
    noPartyIDs_0_1.set(PartyID_129);
    Parties_NoPartyIDs_129.insert(PartyID_129.getString());
    FIX::PartyIDSource PartyIDSource_129('F');
    noPartyIDs_0_1.set(PartyIDSource_129);
    Parties_NoPartyIDs_129.insert(PartyIDSource_129.getString());
    FIX::PartyRole PartyRole_129(29);
    noPartyIDs_0_1.set(PartyRole_129);
    Parties_NoPartyIDs_129.insert(PartyRole_129.getString());
    all_values.push_back(Parties_NoPartyIDs_129);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_283;
      FIX::PartySubID PartySubID_283("STRING_298707183");
      noPartySubIDs_1_1_0.set(PartySubID_283);
      PtysSubGrp_NoPartySubIDs_283.insert(PartySubID_283.getString());
      FIX::PartySubIDType PartySubIDType_283(30);
      noPartySubIDs_1_1_0.set(PartySubIDType_283);
      PtysSubGrp_NoPartySubIDs_283.insert(PartySubIDType_283.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_283);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_284;
      FIX::PartySubID PartySubID_284("STRING_75110930");
      noPartySubIDs_1_1_1.set(PartySubID_284);
      PtysSubGrp_NoPartySubIDs_284.insert(PartySubID_284.getString());
      FIX::PartySubIDType PartySubIDType_284(29);
      noPartySubIDs_1_1_1.set(PartySubIDType_284);
      PtysSubGrp_NoPartySubIDs_284.insert(PartySubIDType_284.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_284);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_130;
    FIX::PartyID PartyID_130("STRING_1563732371");
    noPartyIDs_0_2.set(PartyID_130);
    Parties_NoPartyIDs_130.insert(PartyID_130.getString());
    FIX::PartyIDSource PartyIDSource_130('B');
    noPartyIDs_0_2.set(PartyIDSource_130);
    Parties_NoPartyIDs_130.insert(PartyIDSource_130.getString());
    FIX::PartyRole PartyRole_130(24);
    noPartyIDs_0_2.set(PartyRole_130);
    Parties_NoPartyIDs_130.insert(PartyRole_130.getString());
    all_values.push_back(Parties_NoPartyIDs_130);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_285;
      FIX::PartySubID PartySubID_285("STRING_1367753363");
      noPartySubIDs_2_1_0.set(PartySubID_285);
      PtysSubGrp_NoPartySubIDs_285.insert(PartySubID_285.getString());
      FIX::PartySubIDType PartySubIDType_285(33);
      noPartySubIDs_2_1_0.set(PartySubIDType_285);
      PtysSubGrp_NoPartySubIDs_285.insert(PartySubIDType_285.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_285);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_286;
      FIX::PartySubID PartySubID_286("STRING_794134718");
      noPartySubIDs_2_1_1.set(PartySubID_286);
      PtysSubGrp_NoPartySubIDs_286.insert(PartySubID_286.getString());
      FIX::PartySubIDType PartySubIDType_286(8);
      noPartySubIDs_2_1_1.set(PartySubIDType_286);
      PtysSubGrp_NoPartySubIDs_286.insert(PartySubIDType_286.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_286);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_287;
      FIX::PartySubID PartySubID_287("STRING_479509566");
      noPartySubIDs_2_1_2.set(PartySubID_287);
      PtysSubGrp_NoPartySubIDs_287.insert(PartySubID_287.getString());
      FIX::PartySubIDType PartySubIDType_287(10);
      noPartySubIDs_2_1_2.set(PartySubIDType_287);
      PtysSubGrp_NoPartySubIDs_287.insert(PartySubIDType_287.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_287);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_121;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_121("DATA_1810401897");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingIssuer_121.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_121(673353851);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingIssuerLen_121.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_121("DATA_895981881");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingSecurityDesc_121.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_121(263012919);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_121);
    UnderlyingInstrument_121.insert(EncodedUnderlyingSecurityDescLen_121.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_121;
    UnderlyingAdjustedQuantity_121.setString("12573377");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_121);
    UnderlyingInstrument_121.insert(UnderlyingAdjustedQuantity_121.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_121;
    UnderlyingAllocationPercent_121.setString("34.390000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_121);
    UnderlyingInstrument_121.insert(UnderlyingAllocationPercent_121.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_121;
    UnderlyingAttachmentPoint_121.setString("77.190000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_121);
    UnderlyingInstrument_121.insert(UnderlyingAttachmentPoint_121.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_121("STRING_451142510");
    noUnderlyings_0_0.set(UnderlyingCFICode_121);
    UnderlyingInstrument_121.insert(UnderlyingCFICode_121.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_121("STRING_1661267168");
    noUnderlyings_0_0.set(UnderlyingCPProgram_121);
    UnderlyingInstrument_121.insert(UnderlyingCPProgram_121.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_121("STRING_613928228");
    noUnderlyings_0_0.set(UnderlyingCPRegType_121);
    UnderlyingInstrument_121.insert(UnderlyingCPRegType_121.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_121;
    UnderlyingCapValue_121.setString("3582539");
    noUnderlyings_0_0.set(UnderlyingCapValue_121);
    UnderlyingInstrument_121.insert(UnderlyingCapValue_121.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_121;
    UnderlyingCashAmount_121.setString("15714038");
    noUnderlyings_0_0.set(UnderlyingCashAmount_121);
    UnderlyingInstrument_121.insert(UnderlyingCashAmount_121.getString());
    FIX::UnderlyingCashType UnderlyingCashType_121("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_121);
    UnderlyingInstrument_121.insert(UnderlyingCashType_121.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_121;
    UnderlyingContractMultiplier_121.setString("8057184");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_121);
    UnderlyingInstrument_121.insert(UnderlyingContractMultiplier_121.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_121(805081325);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_121);
    UnderlyingInstrument_121.insert(UnderlyingContractMultiplierUnit_121.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_121("COUNTRY_760510073");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingCountryOfIssue_121.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_121("LOCALMKTDATE_1104425667");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_121);
    UnderlyingInstrument_121.insert(UnderlyingCouponPaymentDate_121.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_121;
    UnderlyingCouponRate_121.setString("65.320000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_121);
    UnderlyingInstrument_121.insert(UnderlyingCouponRate_121.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_121("STRING_835621003");
    noUnderlyings_0_0.set(UnderlyingCreditRating_121);
    UnderlyingInstrument_121.insert(UnderlyingCreditRating_121.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_121("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_121);
    UnderlyingInstrument_121.insert(UnderlyingCurrency_121.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_121;
    UnderlyingCurrentValue_121.setString("8086181");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_121);
    UnderlyingInstrument_121.insert(UnderlyingCurrentValue_121.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_121;
    UnderlyingDetachmentPoint_121.setString("37.760000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_121);
    UnderlyingInstrument_121.insert(UnderlyingDetachmentPoint_121.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_121;
    UnderlyingDirtyPrice_121.setString("8393630");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_121);
    UnderlyingInstrument_121.insert(UnderlyingDirtyPrice_121.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_121;
    UnderlyingEndPrice_121.setString("288879");
    noUnderlyings_0_0.set(UnderlyingEndPrice_121);
    UnderlyingInstrument_121.insert(UnderlyingEndPrice_121.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_121;
    UnderlyingEndValue_121.setString("8249295");
    noUnderlyings_0_0.set(UnderlyingEndValue_121);
    UnderlyingInstrument_121.insert(UnderlyingEndValue_121.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_121(1633497774);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_121);
    UnderlyingInstrument_121.insert(UnderlyingExerciseStyle_121.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_121;
    UnderlyingFXRate_121.setString("19422245");
    noUnderlyings_0_0.set(UnderlyingFXRate_121);
    UnderlyingInstrument_121.insert(UnderlyingFXRate_121.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_121('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_121);
    UnderlyingInstrument_121.insert(UnderlyingFXRateCalc_121.getString());
    FIX::UnderlyingFactor UnderlyingFactor_121;
    UnderlyingFactor_121.setString("5079298");
    noUnderlyings_0_0.set(UnderlyingFactor_121);
    UnderlyingInstrument_121.insert(UnderlyingFactor_121.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_121(1871691192);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_121);
    UnderlyingInstrument_121.insert(UnderlyingFlowScheduleType_121.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_121("STRING_967357375");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_121);
    UnderlyingInstrument_121.insert(UnderlyingInstrRegistry_121.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_121("LOCALMKTDATE_1181283672");
    noUnderlyings_0_0.set(UnderlyingIssueDate_121);
    UnderlyingInstrument_121.insert(UnderlyingIssueDate_121.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_121("STRING_620189425");
    noUnderlyings_0_0.set(UnderlyingIssuer_121);
    UnderlyingInstrument_121.insert(UnderlyingIssuer_121.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_121("STRING_1230370294");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingLocaleOfIssue_121.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_121("LOCALMKTDATE_291137782");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityDate_121.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_121("MONTHYEAR_1982672864");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityMonthYear_121.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_121("TZTIMEONLY_687764365");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_121);
    UnderlyingInstrument_121.insert(UnderlyingMaturityTime_121.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_121;
    UnderlyingNotionalPercentageOutstanding_121.setString("2.920000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_121);
    UnderlyingInstrument_121.insert(UnderlyingNotionalPercentageOutstanding_121.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_121('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_121);
    UnderlyingInstrument_121.insert(UnderlyingOptAttribute_121.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_121;
    UnderlyingOriginalNotionalPercentageOutstanding_121.setString("25.930000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_121);
    UnderlyingInstrument_121.insert(UnderlyingOriginalNotionalPercentageOutstanding_121.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_121("STRING_1100534205");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_121);
    UnderlyingInstrument_121.insert(UnderlyingPriceUnitOfMeasure_121.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_121;
    UnderlyingPriceUnitOfMeasureQty_121.setString("9203765");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_121);
    UnderlyingInstrument_121.insert(UnderlyingPriceUnitOfMeasureQty_121.getString());
    FIX::UnderlyingProduct UnderlyingProduct_121(1072781257);
    noUnderlyings_0_0.set(UnderlyingProduct_121);
    UnderlyingInstrument_121.insert(UnderlyingProduct_121.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_121(1906252689);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_121);
    UnderlyingInstrument_121.insert(UnderlyingPutOrCall_121.getString());
    FIX::UnderlyingPx UnderlyingPx_121;
    UnderlyingPx_121.setString("17254579");
    noUnderlyings_0_0.set(UnderlyingPx_121);
    UnderlyingInstrument_121.insert(UnderlyingPx_121.getString());
    FIX::UnderlyingQty UnderlyingQty_121;
    UnderlyingQty_121.setString("18332913");
    noUnderlyings_0_0.set(UnderlyingQty_121);
    UnderlyingInstrument_121.insert(UnderlyingQty_121.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_121("LOCALMKTDATE_863194708");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_121);
    UnderlyingInstrument_121.insert(UnderlyingRedemptionDate_121.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_121("STRING_478130795");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_121);
    UnderlyingInstrument_121.insert(UnderlyingRepoCollateralSecurityType_121.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_121;
    UnderlyingRepurchaseRate_121.setString("86.860000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_121);
    UnderlyingInstrument_121.insert(UnderlyingRepurchaseRate_121.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_121(2030028354);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_121);
    UnderlyingInstrument_121.insert(UnderlyingRepurchaseTerm_121.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_121("STRING_794536051");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_121);
    UnderlyingInstrument_121.insert(UnderlyingRestructuringType_121.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_121("STRING_1330046873");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityDesc_121.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_121("EXCHANGE_191778482");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityExchange_121.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_121("STRING_1633899107");
    noUnderlyings_0_0.set(UnderlyingSecurityID_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityID_121.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_121("STRING_1358934775");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityIDSource_121.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_121("STRING_1016708042");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_121);
    UnderlyingInstrument_121.insert(UnderlyingSecuritySubType_121.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_121("STRING_1119913233");
    noUnderlyings_0_0.set(UnderlyingSecurityType_121);
    UnderlyingInstrument_121.insert(UnderlyingSecurityType_121.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_121("STRING_1153675638");
    noUnderlyings_0_0.set(UnderlyingSeniority_121);
    UnderlyingInstrument_121.insert(UnderlyingSeniority_121.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_121("STRING_173663520");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_121);
    UnderlyingInstrument_121.insert(UnderlyingSettlMethod_121.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_121(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_121);
    UnderlyingInstrument_121.insert(UnderlyingSettlementType_121.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_121;
    UnderlyingStartValue_121.setString("8778831");
    noUnderlyings_0_0.set(UnderlyingStartValue_121);
    UnderlyingInstrument_121.insert(UnderlyingStartValue_121.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_121("STRING_1141020895");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_121);
    UnderlyingInstrument_121.insert(UnderlyingStateOrProvinceOfIssue_121.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_121("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_121);
    UnderlyingInstrument_121.insert(UnderlyingStrikeCurrency_121.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_121;
    UnderlyingStrikePrice_121.setString("2239075");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_121);
    UnderlyingInstrument_121.insert(UnderlyingStrikePrice_121.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_121("STRING_952780861");
    noUnderlyings_0_0.set(UnderlyingSymbol_121);
    UnderlyingInstrument_121.insert(UnderlyingSymbol_121.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_121("STRING_1333261823");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_121);
    UnderlyingInstrument_121.insert(UnderlyingSymbolSfx_121.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_121("STRING_911671907");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_121);
    UnderlyingInstrument_121.insert(UnderlyingTimeUnit_121.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_121("STRING_1695061153");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_121);
    UnderlyingInstrument_121.insert(UnderlyingUnitOfMeasure_121.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_121;
    UnderlyingUnitOfMeasureQty_121.setString("6822345");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_121);
    UnderlyingInstrument_121.insert(UnderlyingUnitOfMeasureQty_121.getString());
    all_values.push_back(UnderlyingInstrument_121);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_242;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_242("STRING_648111711");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_242);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_242.insert(UnderlyingSecurityAltID_242.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_242("STRING_1602611145");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_242);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_242.insert(UnderlyingSecurityAltIDSource_242.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_238;
      FIX::UnderlyingStipType UnderlyingStipType_238("STRING_406880752");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_238);
      UnderlyingStipulations_NoUnderlyingStips_238.insert(UnderlyingStipType_238.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_238("STRING_1180585407");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_238);
      UnderlyingStipulations_NoUnderlyingStips_238.insert(UnderlyingStipValue_238.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_238);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_239;
      FIX::UnderlyingStipType UnderlyingStipType_239("STRING_824469792");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_239);
      UnderlyingStipulations_NoUnderlyingStips_239.insert(UnderlyingStipType_239.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_239("STRING_1270075461");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_239);
      UnderlyingStipulations_NoUnderlyingStips_239.insert(UnderlyingStipValue_239.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_239);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_240;
      FIX::UnderlyingStipType UnderlyingStipType_240("STRING_1658716202");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_240);
      UnderlyingStipulations_NoUnderlyingStips_240.insert(UnderlyingStipType_240.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_240("STRING_1345898478");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_240);
      UnderlyingStipulations_NoUnderlyingStips_240.insert(UnderlyingStipValue_240.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_240);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_232;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_232("STRING_305768605");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyID_232.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_232('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyIDSource_232.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_232(1344398649);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyRole_232.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_464("STRING_1887396479");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_464);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464.insert(UnderlyingInstrumentPartySubID_464.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_464(213623043);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_464);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464.insert(UnderlyingInstrumentPartySubIDType_464.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_233;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_233("STRING_912097297");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyID_233.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_233('8');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyIDSource_233.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_233(387286563);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyRole_233.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_465("STRING_1771471652");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_465);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465.insert(UnderlyingInstrumentPartySubID_465.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_465(1528307458);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_465);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465.insert(UnderlyingInstrumentPartySubIDType_465.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_122;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_122("DATA_1054099782");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingIssuer_122.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_122(1122060611);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingIssuerLen_122.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_122("DATA_1752214999");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingSecurityDesc_122.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_122(2006880643);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingSecurityDescLen_122.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_122;
    UnderlyingAdjustedQuantity_122.setString("3078387");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_122);
    UnderlyingInstrument_122.insert(UnderlyingAdjustedQuantity_122.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_122;
    UnderlyingAllocationPercent_122.setString("32.580000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_122);
    UnderlyingInstrument_122.insert(UnderlyingAllocationPercent_122.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_122;
    UnderlyingAttachmentPoint_122.setString("81.480000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_122);
    UnderlyingInstrument_122.insert(UnderlyingAttachmentPoint_122.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_122("STRING_990073346");
    noUnderlyings_0_1.set(UnderlyingCFICode_122);
    UnderlyingInstrument_122.insert(UnderlyingCFICode_122.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_122("STRING_582284111");
    noUnderlyings_0_1.set(UnderlyingCPProgram_122);
    UnderlyingInstrument_122.insert(UnderlyingCPProgram_122.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_122("STRING_55086211");
    noUnderlyings_0_1.set(UnderlyingCPRegType_122);
    UnderlyingInstrument_122.insert(UnderlyingCPRegType_122.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_122;
    UnderlyingCapValue_122.setString("4452008");
    noUnderlyings_0_1.set(UnderlyingCapValue_122);
    UnderlyingInstrument_122.insert(UnderlyingCapValue_122.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_122;
    UnderlyingCashAmount_122.setString("17209462");
    noUnderlyings_0_1.set(UnderlyingCashAmount_122);
    UnderlyingInstrument_122.insert(UnderlyingCashAmount_122.getString());
    FIX::UnderlyingCashType UnderlyingCashType_122("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_122);
    UnderlyingInstrument_122.insert(UnderlyingCashType_122.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_122;
    UnderlyingContractMultiplier_122.setString("16257862");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_122);
    UnderlyingInstrument_122.insert(UnderlyingContractMultiplier_122.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_122(397932365);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_122);
    UnderlyingInstrument_122.insert(UnderlyingContractMultiplierUnit_122.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_122("COUNTRY_1732042425");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingCountryOfIssue_122.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_122("LOCALMKTDATE_1137018805");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_122);
    UnderlyingInstrument_122.insert(UnderlyingCouponPaymentDate_122.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_122;
    UnderlyingCouponRate_122.setString("8.440000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_122);
    UnderlyingInstrument_122.insert(UnderlyingCouponRate_122.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_122("STRING_737178944");
    noUnderlyings_0_1.set(UnderlyingCreditRating_122);
    UnderlyingInstrument_122.insert(UnderlyingCreditRating_122.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_122("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_122);
    UnderlyingInstrument_122.insert(UnderlyingCurrency_122.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_122;
    UnderlyingCurrentValue_122.setString("20815775");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_122);
    UnderlyingInstrument_122.insert(UnderlyingCurrentValue_122.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_122;
    UnderlyingDetachmentPoint_122.setString("14.750000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_122);
    UnderlyingInstrument_122.insert(UnderlyingDetachmentPoint_122.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_122;
    UnderlyingDirtyPrice_122.setString("20122053");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_122);
    UnderlyingInstrument_122.insert(UnderlyingDirtyPrice_122.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_122;
    UnderlyingEndPrice_122.setString("1477169");
    noUnderlyings_0_1.set(UnderlyingEndPrice_122);
    UnderlyingInstrument_122.insert(UnderlyingEndPrice_122.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_122;
    UnderlyingEndValue_122.setString("21470687");
    noUnderlyings_0_1.set(UnderlyingEndValue_122);
    UnderlyingInstrument_122.insert(UnderlyingEndValue_122.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_122(758310200);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_122);
    UnderlyingInstrument_122.insert(UnderlyingExerciseStyle_122.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_122;
    UnderlyingFXRate_122.setString("5350035");
    noUnderlyings_0_1.set(UnderlyingFXRate_122);
    UnderlyingInstrument_122.insert(UnderlyingFXRate_122.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_122('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_122);
    UnderlyingInstrument_122.insert(UnderlyingFXRateCalc_122.getString());
    FIX::UnderlyingFactor UnderlyingFactor_122;
    UnderlyingFactor_122.setString("3822982");
    noUnderlyings_0_1.set(UnderlyingFactor_122);
    UnderlyingInstrument_122.insert(UnderlyingFactor_122.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_122(2063311009);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_122);
    UnderlyingInstrument_122.insert(UnderlyingFlowScheduleType_122.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_122("STRING_1446141610");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_122);
    UnderlyingInstrument_122.insert(UnderlyingInstrRegistry_122.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_122("LOCALMKTDATE_1504358815");
    noUnderlyings_0_1.set(UnderlyingIssueDate_122);
    UnderlyingInstrument_122.insert(UnderlyingIssueDate_122.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_122("STRING_1668042360");
    noUnderlyings_0_1.set(UnderlyingIssuer_122);
    UnderlyingInstrument_122.insert(UnderlyingIssuer_122.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_122("STRING_1305538605");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingLocaleOfIssue_122.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_122("LOCALMKTDATE_1812197602");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityDate_122.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_122("MONTHYEAR_36961971");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityMonthYear_122.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_122("TZTIMEONLY_712513106");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityTime_122.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_122;
    UnderlyingNotionalPercentageOutstanding_122.setString("73.010000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_122);
    UnderlyingInstrument_122.insert(UnderlyingNotionalPercentageOutstanding_122.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_122('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_122);
    UnderlyingInstrument_122.insert(UnderlyingOptAttribute_122.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_122;
    UnderlyingOriginalNotionalPercentageOutstanding_122.setString("93.170000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_122);
    UnderlyingInstrument_122.insert(UnderlyingOriginalNotionalPercentageOutstanding_122.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_122("STRING_1099988144");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_122);
    UnderlyingInstrument_122.insert(UnderlyingPriceUnitOfMeasure_122.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_122;
    UnderlyingPriceUnitOfMeasureQty_122.setString("1927086");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_122);
    UnderlyingInstrument_122.insert(UnderlyingPriceUnitOfMeasureQty_122.getString());
    FIX::UnderlyingProduct UnderlyingProduct_122(1229566281);
    noUnderlyings_0_1.set(UnderlyingProduct_122);
    UnderlyingInstrument_122.insert(UnderlyingProduct_122.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_122(578290747);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_122);
    UnderlyingInstrument_122.insert(UnderlyingPutOrCall_122.getString());
    FIX::UnderlyingPx UnderlyingPx_122;
    UnderlyingPx_122.setString("5906410");
    noUnderlyings_0_1.set(UnderlyingPx_122);
    UnderlyingInstrument_122.insert(UnderlyingPx_122.getString());
    FIX::UnderlyingQty UnderlyingQty_122;
    UnderlyingQty_122.setString("8141250");
    noUnderlyings_0_1.set(UnderlyingQty_122);
    UnderlyingInstrument_122.insert(UnderlyingQty_122.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_122("LOCALMKTDATE_1715309553");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_122);
    UnderlyingInstrument_122.insert(UnderlyingRedemptionDate_122.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_122("STRING_186988216");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_122);
    UnderlyingInstrument_122.insert(UnderlyingRepoCollateralSecurityType_122.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_122;
    UnderlyingRepurchaseRate_122.setString("40.020000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_122);
    UnderlyingInstrument_122.insert(UnderlyingRepurchaseRate_122.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_122(1010613316);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_122);
    UnderlyingInstrument_122.insert(UnderlyingRepurchaseTerm_122.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_122("STRING_311797116");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_122);
    UnderlyingInstrument_122.insert(UnderlyingRestructuringType_122.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_122("STRING_1485397947");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityDesc_122.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_122("EXCHANGE_98101143");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityExchange_122.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_122("STRING_176518846");
    noUnderlyings_0_1.set(UnderlyingSecurityID_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityID_122.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_122("STRING_1633114935");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityIDSource_122.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_122("STRING_97686268");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_122);
    UnderlyingInstrument_122.insert(UnderlyingSecuritySubType_122.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_122("STRING_934829046");
    noUnderlyings_0_1.set(UnderlyingSecurityType_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityType_122.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_122("STRING_20634838");
    noUnderlyings_0_1.set(UnderlyingSeniority_122);
    UnderlyingInstrument_122.insert(UnderlyingSeniority_122.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_122("STRING_489728097");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_122);
    UnderlyingInstrument_122.insert(UnderlyingSettlMethod_122.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_122(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_122);
    UnderlyingInstrument_122.insert(UnderlyingSettlementType_122.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_122;
    UnderlyingStartValue_122.setString("20839458");
    noUnderlyings_0_1.set(UnderlyingStartValue_122);
    UnderlyingInstrument_122.insert(UnderlyingStartValue_122.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_122("STRING_1935869707");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingStateOrProvinceOfIssue_122.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_122("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_122);
    UnderlyingInstrument_122.insert(UnderlyingStrikeCurrency_122.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_122;
    UnderlyingStrikePrice_122.setString("10939246");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_122);
    UnderlyingInstrument_122.insert(UnderlyingStrikePrice_122.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_122("STRING_338716372");
    noUnderlyings_0_1.set(UnderlyingSymbol_122);
    UnderlyingInstrument_122.insert(UnderlyingSymbol_122.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_122("STRING_1641466531");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_122);
    UnderlyingInstrument_122.insert(UnderlyingSymbolSfx_122.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_122("STRING_1806437771");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_122);
    UnderlyingInstrument_122.insert(UnderlyingTimeUnit_122.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_122("STRING_993503673");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_122);
    UnderlyingInstrument_122.insert(UnderlyingUnitOfMeasure_122.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_122;
    UnderlyingUnitOfMeasureQty_122.setString("1132289");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_122);
    UnderlyingInstrument_122.insert(UnderlyingUnitOfMeasureQty_122.getString());
    all_values.push_back(UnderlyingInstrument_122);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_243;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_243("STRING_2093491818");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_243);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_243.insert(UnderlyingSecurityAltID_243.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_243("STRING_305937620");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_243);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_243.insert(UnderlyingSecurityAltIDSource_243.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_241;
      FIX::UnderlyingStipType UnderlyingStipType_241("STRING_524298917");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_241);
      UnderlyingStipulations_NoUnderlyingStips_241.insert(UnderlyingStipType_241.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_241("STRING_896578640");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_241);
      UnderlyingStipulations_NoUnderlyingStips_241.insert(UnderlyingStipValue_241.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_241);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_242;
      FIX::UnderlyingStipType UnderlyingStipType_242("STRING_322761132");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_242);
      UnderlyingStipulations_NoUnderlyingStips_242.insert(UnderlyingStipType_242.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_242("STRING_92124822");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_242);
      UnderlyingStipulations_NoUnderlyingStips_242.insert(UnderlyingStipValue_242.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_242);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_234;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_234("STRING_1874065135");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_234);
      UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyID_234.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_234('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_234);
      UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyIDSource_234.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_234(1395363973);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_234);
      UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyRole_234.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_466("STRING_1200839282");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_466);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466.insert(UnderlyingInstrumentPartySubID_466.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_466(1571882819);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_466);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466.insert(UnderlyingInstrumentPartySubIDType_466.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_467("STRING_697610722");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_467);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467.insert(UnderlyingInstrumentPartySubID_467.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_467(1298525550);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_467);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467.insert(UnderlyingInstrumentPartySubIDType_467.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_468("STRING_359228218");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_468);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468.insert(UnderlyingInstrumentPartySubID_468.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_468(718245560);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_468);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468.insert(UnderlyingInstrumentPartySubIDType_468.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_235;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_235("STRING_1788253647");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_235);
      UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyID_235.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_235('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_235);
      UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyIDSource_235.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_235(654707760);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_235);
      UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyRole_235.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_469("STRING_202874238");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_469);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469.insert(UnderlyingInstrumentPartySubID_469.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_469(111728672);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_469);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469.insert(UnderlyingInstrumentPartySubIDType_469.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
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
