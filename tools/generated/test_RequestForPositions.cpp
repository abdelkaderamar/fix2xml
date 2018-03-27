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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RequestForPositions msg;

  list<multiset<string>> all_values;
  multiset<string> RequestForPositions_0;
  FIX::Account Account_42("STRING_879440295");
  msg.set(Account_42);
  RequestForPositions_0.insert(Account_42.getString());
  FIX::AccountType AccountType_36(3);
  msg.set(AccountType_36);
  RequestForPositions_0.insert(AccountType_36.getString());
  FIX::AcctIDSource AcctIDSource_35(3);
  msg.set(AcctIDSource_35);
  RequestForPositions_0.insert(AcctIDSource_35.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_18("LOCALMKTDATE_799805613");
  msg.set(ClearingBusinessDate_18);
  RequestForPositions_0.insert(ClearingBusinessDate_18.getString());
  FIX::Currency Currency_51("GBP");
  msg.set(Currency_51);
  RequestForPositions_0.insert(Currency_51.getString());
  FIX::EncodedText EncodedText_75("DATA_42378070");
  msg.set(EncodedText_75);
  RequestForPositions_0.insert(EncodedText_75.getString());
  FIX::EncodedTextLen EncodedTextLen_75(1749959013);
  msg.set(EncodedTextLen_75);
  RequestForPositions_0.insert(EncodedTextLen_75.getString());
  FIX::MatchStatus MatchStatus_9('1');
  msg.set(MatchStatus_9);
  RequestForPositions_0.insert(MatchStatus_9.getString());
  FIX::PosReqID PosReqID_4("STRING_647808693");
  msg.set(PosReqID_4);
  RequestForPositions_0.insert(PosReqID_4.getString());
  FIX::PosReqType PosReqType_2(5);
  msg.set(PosReqType_2);
  RequestForPositions_0.insert(PosReqType_2.getString());
  FIX::ResponseDestination ResponseDestination_2("STRING_43618854");
  msg.set(ResponseDestination_2);
  RequestForPositions_0.insert(ResponseDestination_2.getString());
  FIX::ResponseTransportType ResponseTransportType_2(1);
  msg.set(ResponseTransportType_2);
  RequestForPositions_0.insert(ResponseTransportType_2.getString());
  FIX::SettlCurrency SettlCurrency_28("GBP");
  msg.set(SettlCurrency_28);
  RequestForPositions_0.insert(SettlCurrency_28.getString());
  FIX::SettlSessID SettlSessID_10("STRING_EOD");
  msg.set(SettlSessID_10);
  RequestForPositions_0.insert(SettlSessID_10.getString());
  FIX::SettlSessSubID SettlSessSubID_9("STRING_1378980553");
  msg.set(SettlSessSubID_9);
  RequestForPositions_0.insert(SettlSessSubID_9.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_7('1');
  msg.set(SubscriptionRequestType_7);
  RequestForPositions_0.insert(SubscriptionRequestType_7.getString());
  FIX::Text Text_75("STRING_578974704");
  msg.set(Text_75);
  RequestForPositions_0.insert(Text_75.getString());
  FIX::TransactTime TransactTime_52(FIX::UTCTIMESTAMP(5, 14, 24, 19, 102005));
  msg.set(TransactTime_52);
  RequestForPositions_0.insert(TransactTime_52.getString());
  all_values.push_back(RequestForPositions_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_94;
    FIX::EncodedLegIssuer EncodedLegIssuer_94("DATA_1565085941");
    noLegs_0_0.set(EncodedLegIssuer_94);
    InstrumentLeg_94.insert(EncodedLegIssuer_94.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_94(1510299562);
    noLegs_0_0.set(EncodedLegIssuerLen_94);
    InstrumentLeg_94.insert(EncodedLegIssuerLen_94.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_94("DATA_739787407");
    noLegs_0_0.set(EncodedLegSecurityDesc_94);
    InstrumentLeg_94.insert(EncodedLegSecurityDesc_94.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_94(1277697440);
    noLegs_0_0.set(EncodedLegSecurityDescLen_94);
    InstrumentLeg_94.insert(EncodedLegSecurityDescLen_94.getString());
    FIX::LegCFICode LegCFICode_94("STRING_242256210");
    noLegs_0_0.set(LegCFICode_94);
    InstrumentLeg_94.insert(LegCFICode_94.getString());
    FIX::LegContractMultiplier LegContractMultiplier_94;
    LegContractMultiplier_94.setString("17613479");
    noLegs_0_0.set(LegContractMultiplier_94);
    InstrumentLeg_94.insert(LegContractMultiplier_94.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_94(650329653);
    noLegs_0_0.set(LegContractMultiplierUnit_94);
    InstrumentLeg_94.insert(LegContractMultiplierUnit_94.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_94("MONTHYEAR_1042061823");
    noLegs_0_0.set(LegContractSettlMonth_94);
    InstrumentLeg_94.insert(LegContractSettlMonth_94.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_94("COUNTRY_1120195227");
    noLegs_0_0.set(LegCountryOfIssue_94);
    InstrumentLeg_94.insert(LegCountryOfIssue_94.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_94("LOCALMKTDATE_1446104345");
    noLegs_0_0.set(LegCouponPaymentDate_94);
    InstrumentLeg_94.insert(LegCouponPaymentDate_94.getString());
    FIX::LegCouponRate LegCouponRate_94;
    LegCouponRate_94.setString("98.930000");
    noLegs_0_0.set(LegCouponRate_94);
    InstrumentLeg_94.insert(LegCouponRate_94.getString());
    FIX::LegCreditRating LegCreditRating_94("STRING_722670593");
    noLegs_0_0.set(LegCreditRating_94);
    InstrumentLeg_94.insert(LegCreditRating_94.getString());
    FIX::LegCurrency LegCurrency_94("JPY");
    noLegs_0_0.set(LegCurrency_94);
    InstrumentLeg_94.insert(LegCurrency_94.getString());
    FIX::LegDatedDate LegDatedDate_94("LOCALMKTDATE_694824456");
    noLegs_0_0.set(LegDatedDate_94);
    InstrumentLeg_94.insert(LegDatedDate_94.getString());
    FIX::LegExerciseStyle LegExerciseStyle_94(1874194419);
    noLegs_0_0.set(LegExerciseStyle_94);
    InstrumentLeg_94.insert(LegExerciseStyle_94.getString());
    FIX::LegFactor LegFactor_94;
    LegFactor_94.setString("10838031");
    noLegs_0_0.set(LegFactor_94);
    InstrumentLeg_94.insert(LegFactor_94.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_94(1247914942);
    noLegs_0_0.set(LegFlowScheduleType_94);
    InstrumentLeg_94.insert(LegFlowScheduleType_94.getString());
    FIX::LegInstrRegistry LegInstrRegistry_94("STRING_1390644640");
    noLegs_0_0.set(LegInstrRegistry_94);
    InstrumentLeg_94.insert(LegInstrRegistry_94.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_94("LOCALMKTDATE_2027407513");
    noLegs_0_0.set(LegInterestAccrualDate_94);
    InstrumentLeg_94.insert(LegInterestAccrualDate_94.getString());
    FIX::LegIssueDate LegIssueDate_94("LOCALMKTDATE_479411847");
    noLegs_0_0.set(LegIssueDate_94);
    InstrumentLeg_94.insert(LegIssueDate_94.getString());
    FIX::LegIssuer LegIssuer_94("STRING_1948095266");
    noLegs_0_0.set(LegIssuer_94);
    InstrumentLeg_94.insert(LegIssuer_94.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_94("STRING_458898569");
    noLegs_0_0.set(LegLocaleOfIssue_94);
    InstrumentLeg_94.insert(LegLocaleOfIssue_94.getString());
    FIX::LegMaturityDate LegMaturityDate_94("LOCALMKTDATE_388942374");
    noLegs_0_0.set(LegMaturityDate_94);
    InstrumentLeg_94.insert(LegMaturityDate_94.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_94("MONTHYEAR_1697219879");
    noLegs_0_0.set(LegMaturityMonthYear_94);
    InstrumentLeg_94.insert(LegMaturityMonthYear_94.getString());
    FIX::LegMaturityTime LegMaturityTime_94("TZTIMEONLY_1450453304");
    noLegs_0_0.set(LegMaturityTime_94);
    InstrumentLeg_94.insert(LegMaturityTime_94.getString());
    FIX::LegOptAttribute LegOptAttribute_94('9');
    noLegs_0_0.set(LegOptAttribute_94);
    InstrumentLeg_94.insert(LegOptAttribute_94.getString());
    FIX::LegOptionRatio LegOptionRatio_94;
    LegOptionRatio_94.setString("15239881");
    noLegs_0_0.set(LegOptionRatio_94);
    InstrumentLeg_94.insert(LegOptionRatio_94.getString());
    FIX::LegPool LegPool_94("STRING_1960065737");
    noLegs_0_0.set(LegPool_94);
    InstrumentLeg_94.insert(LegPool_94.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_94("STRING_1294119755");
    noLegs_0_0.set(LegPriceUnitOfMeasure_94);
    InstrumentLeg_94.insert(LegPriceUnitOfMeasure_94.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_94;
    LegPriceUnitOfMeasureQty_94.setString("16062384");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_94);
    InstrumentLeg_94.insert(LegPriceUnitOfMeasureQty_94.getString());
    FIX::LegProduct LegProduct_94(1377668030);
    noLegs_0_0.set(LegProduct_94);
    InstrumentLeg_94.insert(LegProduct_94.getString());
    FIX::LegPutOrCall LegPutOrCall_94(656935669);
    noLegs_0_0.set(LegPutOrCall_94);
    InstrumentLeg_94.insert(LegPutOrCall_94.getString());
    FIX::LegRatioQty LegRatioQty_94;
    LegRatioQty_94.setString("1985422");
    noLegs_0_0.set(LegRatioQty_94);
    InstrumentLeg_94.insert(LegRatioQty_94.getString());
    FIX::LegRedemptionDate LegRedemptionDate_94("LOCALMKTDATE_507881822");
    noLegs_0_0.set(LegRedemptionDate_94);
    InstrumentLeg_94.insert(LegRedemptionDate_94.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_94("STRING_899191879");
    noLegs_0_0.set(LegRepoCollateralSecurityType_94);
    InstrumentLeg_94.insert(LegRepoCollateralSecurityType_94.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_94;
    LegRepurchaseRate_94.setString("2.080000");
    noLegs_0_0.set(LegRepurchaseRate_94);
    InstrumentLeg_94.insert(LegRepurchaseRate_94.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_94(1158211475);
    noLegs_0_0.set(LegRepurchaseTerm_94);
    InstrumentLeg_94.insert(LegRepurchaseTerm_94.getString());
    FIX::LegSecurityDesc LegSecurityDesc_94("STRING_1941253703");
    noLegs_0_0.set(LegSecurityDesc_94);
    InstrumentLeg_94.insert(LegSecurityDesc_94.getString());
    FIX::LegSecurityExchange LegSecurityExchange_94("EXCHANGE_932601788");
    noLegs_0_0.set(LegSecurityExchange_94);
    InstrumentLeg_94.insert(LegSecurityExchange_94.getString());
    FIX::LegSecurityID LegSecurityID_94("STRING_456832173");
    noLegs_0_0.set(LegSecurityID_94);
    InstrumentLeg_94.insert(LegSecurityID_94.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_94("STRING_878209948");
    noLegs_0_0.set(LegSecurityIDSource_94);
    InstrumentLeg_94.insert(LegSecurityIDSource_94.getString());
    FIX::LegSecuritySubType LegSecuritySubType_94("STRING_1655272381");
    noLegs_0_0.set(LegSecuritySubType_94);
    InstrumentLeg_94.insert(LegSecuritySubType_94.getString());
    FIX::LegSecurityType LegSecurityType_94("STRING_139924090");
    noLegs_0_0.set(LegSecurityType_94);
    InstrumentLeg_94.insert(LegSecurityType_94.getString());
    FIX::LegSide LegSide_94('4');
    noLegs_0_0.set(LegSide_94);
    InstrumentLeg_94.insert(LegSide_94.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_94("STRING_202613189");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_94);
    InstrumentLeg_94.insert(LegStateOrProvinceOfIssue_94.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_94("GBP");
    noLegs_0_0.set(LegStrikeCurrency_94);
    InstrumentLeg_94.insert(LegStrikeCurrency_94.getString());
    FIX::LegStrikePrice LegStrikePrice_94;
    LegStrikePrice_94.setString("14505281");
    noLegs_0_0.set(LegStrikePrice_94);
    InstrumentLeg_94.insert(LegStrikePrice_94.getString());
    FIX::LegSymbol LegSymbol_94("STRING_1257279502");
    noLegs_0_0.set(LegSymbol_94);
    InstrumentLeg_94.insert(LegSymbol_94.getString());
    FIX::LegSymbolSfx LegSymbolSfx_94("STRING_1426701937");
    noLegs_0_0.set(LegSymbolSfx_94);
    InstrumentLeg_94.insert(LegSymbolSfx_94.getString());
    FIX::LegTimeUnit LegTimeUnit_94("STRING_1929939979");
    noLegs_0_0.set(LegTimeUnit_94);
    InstrumentLeg_94.insert(LegTimeUnit_94.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_94("STRING_1057891120");
    noLegs_0_0.set(LegUnitOfMeasure_94);
    InstrumentLeg_94.insert(LegUnitOfMeasure_94.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_94;
    LegUnitOfMeasureQty_94.setString("18856005");
    noLegs_0_0.set(LegUnitOfMeasureQty_94);
    InstrumentLeg_94.insert(LegUnitOfMeasureQty_94.getString());
    all_values.push_back(InstrumentLeg_94);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_166;
      FIX::LegSecurityAltID LegSecurityAltID_166("STRING_607627351");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_166);
      LegSecAltIDGrp_NoLegSecurityAltID_166.insert(LegSecurityAltID_166.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_166("STRING_1188570163");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_166);
      LegSecAltIDGrp_NoLegSecurityAltID_166.insert(LegSecurityAltIDSource_166.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_166);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_167;
      FIX::LegSecurityAltID LegSecurityAltID_167("STRING_1144848923");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_167);
      LegSecAltIDGrp_NoLegSecurityAltID_167.insert(LegSecurityAltID_167.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_167("STRING_2131615461");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_167);
      LegSecAltIDGrp_NoLegSecurityAltID_167.insert(LegSecurityAltIDSource_167.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_167);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_168;
      FIX::LegSecurityAltID LegSecurityAltID_168("STRING_1001152252");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_168);
      LegSecAltIDGrp_NoLegSecurityAltID_168.insert(LegSecurityAltID_168.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_168("STRING_291485030");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_168);
      LegSecAltIDGrp_NoLegSecurityAltID_168.insert(LegSecurityAltIDSource_168.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_168);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_95;
    FIX::EncodedLegIssuer EncodedLegIssuer_95("DATA_1590370298");
    noLegs_0_1.set(EncodedLegIssuer_95);
    InstrumentLeg_95.insert(EncodedLegIssuer_95.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_95(231336634);
    noLegs_0_1.set(EncodedLegIssuerLen_95);
    InstrumentLeg_95.insert(EncodedLegIssuerLen_95.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_95("DATA_948420699");
    noLegs_0_1.set(EncodedLegSecurityDesc_95);
    InstrumentLeg_95.insert(EncodedLegSecurityDesc_95.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_95(1788912543);
    noLegs_0_1.set(EncodedLegSecurityDescLen_95);
    InstrumentLeg_95.insert(EncodedLegSecurityDescLen_95.getString());
    FIX::LegCFICode LegCFICode_95("STRING_739218456");
    noLegs_0_1.set(LegCFICode_95);
    InstrumentLeg_95.insert(LegCFICode_95.getString());
    FIX::LegContractMultiplier LegContractMultiplier_95;
    LegContractMultiplier_95.setString("18476125");
    noLegs_0_1.set(LegContractMultiplier_95);
    InstrumentLeg_95.insert(LegContractMultiplier_95.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_95(1601319104);
    noLegs_0_1.set(LegContractMultiplierUnit_95);
    InstrumentLeg_95.insert(LegContractMultiplierUnit_95.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_95("MONTHYEAR_1897429932");
    noLegs_0_1.set(LegContractSettlMonth_95);
    InstrumentLeg_95.insert(LegContractSettlMonth_95.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_95("COUNTRY_1641382634");
    noLegs_0_1.set(LegCountryOfIssue_95);
    InstrumentLeg_95.insert(LegCountryOfIssue_95.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_95("LOCALMKTDATE_386437244");
    noLegs_0_1.set(LegCouponPaymentDate_95);
    InstrumentLeg_95.insert(LegCouponPaymentDate_95.getString());
    FIX::LegCouponRate LegCouponRate_95;
    LegCouponRate_95.setString("84.570000");
    noLegs_0_1.set(LegCouponRate_95);
    InstrumentLeg_95.insert(LegCouponRate_95.getString());
    FIX::LegCreditRating LegCreditRating_95("STRING_372108934");
    noLegs_0_1.set(LegCreditRating_95);
    InstrumentLeg_95.insert(LegCreditRating_95.getString());
    FIX::LegCurrency LegCurrency_95("CAN");
    noLegs_0_1.set(LegCurrency_95);
    InstrumentLeg_95.insert(LegCurrency_95.getString());
    FIX::LegDatedDate LegDatedDate_95("LOCALMKTDATE_835083821");
    noLegs_0_1.set(LegDatedDate_95);
    InstrumentLeg_95.insert(LegDatedDate_95.getString());
    FIX::LegExerciseStyle LegExerciseStyle_95(96839166);
    noLegs_0_1.set(LegExerciseStyle_95);
    InstrumentLeg_95.insert(LegExerciseStyle_95.getString());
    FIX::LegFactor LegFactor_95;
    LegFactor_95.setString("2133374");
    noLegs_0_1.set(LegFactor_95);
    InstrumentLeg_95.insert(LegFactor_95.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_95(234378246);
    noLegs_0_1.set(LegFlowScheduleType_95);
    InstrumentLeg_95.insert(LegFlowScheduleType_95.getString());
    FIX::LegInstrRegistry LegInstrRegistry_95("STRING_1547367298");
    noLegs_0_1.set(LegInstrRegistry_95);
    InstrumentLeg_95.insert(LegInstrRegistry_95.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_95("LOCALMKTDATE_1470616911");
    noLegs_0_1.set(LegInterestAccrualDate_95);
    InstrumentLeg_95.insert(LegInterestAccrualDate_95.getString());
    FIX::LegIssueDate LegIssueDate_95("LOCALMKTDATE_1661080183");
    noLegs_0_1.set(LegIssueDate_95);
    InstrumentLeg_95.insert(LegIssueDate_95.getString());
    FIX::LegIssuer LegIssuer_95("STRING_1329823629");
    noLegs_0_1.set(LegIssuer_95);
    InstrumentLeg_95.insert(LegIssuer_95.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_95("STRING_381024383");
    noLegs_0_1.set(LegLocaleOfIssue_95);
    InstrumentLeg_95.insert(LegLocaleOfIssue_95.getString());
    FIX::LegMaturityDate LegMaturityDate_95("LOCALMKTDATE_1399197042");
    noLegs_0_1.set(LegMaturityDate_95);
    InstrumentLeg_95.insert(LegMaturityDate_95.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_95("MONTHYEAR_1501222334");
    noLegs_0_1.set(LegMaturityMonthYear_95);
    InstrumentLeg_95.insert(LegMaturityMonthYear_95.getString());
    FIX::LegMaturityTime LegMaturityTime_95("TZTIMEONLY_988651734");
    noLegs_0_1.set(LegMaturityTime_95);
    InstrumentLeg_95.insert(LegMaturityTime_95.getString());
    FIX::LegOptAttribute LegOptAttribute_95('4');
    noLegs_0_1.set(LegOptAttribute_95);
    InstrumentLeg_95.insert(LegOptAttribute_95.getString());
    FIX::LegOptionRatio LegOptionRatio_95;
    LegOptionRatio_95.setString("4985876");
    noLegs_0_1.set(LegOptionRatio_95);
    InstrumentLeg_95.insert(LegOptionRatio_95.getString());
    FIX::LegPool LegPool_95("STRING_972783547");
    noLegs_0_1.set(LegPool_95);
    InstrumentLeg_95.insert(LegPool_95.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_95("STRING_1441435809");
    noLegs_0_1.set(LegPriceUnitOfMeasure_95);
    InstrumentLeg_95.insert(LegPriceUnitOfMeasure_95.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_95;
    LegPriceUnitOfMeasureQty_95.setString("7900726");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_95);
    InstrumentLeg_95.insert(LegPriceUnitOfMeasureQty_95.getString());
    FIX::LegProduct LegProduct_95(415670198);
    noLegs_0_1.set(LegProduct_95);
    InstrumentLeg_95.insert(LegProduct_95.getString());
    FIX::LegPutOrCall LegPutOrCall_95(1672772443);
    noLegs_0_1.set(LegPutOrCall_95);
    InstrumentLeg_95.insert(LegPutOrCall_95.getString());
    FIX::LegRatioQty LegRatioQty_95;
    LegRatioQty_95.setString("17384933");
    noLegs_0_1.set(LegRatioQty_95);
    InstrumentLeg_95.insert(LegRatioQty_95.getString());
    FIX::LegRedemptionDate LegRedemptionDate_95("LOCALMKTDATE_57099093");
    noLegs_0_1.set(LegRedemptionDate_95);
    InstrumentLeg_95.insert(LegRedemptionDate_95.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_95("STRING_264507252");
    noLegs_0_1.set(LegRepoCollateralSecurityType_95);
    InstrumentLeg_95.insert(LegRepoCollateralSecurityType_95.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_95;
    LegRepurchaseRate_95.setString("22.690000");
    noLegs_0_1.set(LegRepurchaseRate_95);
    InstrumentLeg_95.insert(LegRepurchaseRate_95.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_95(1658418197);
    noLegs_0_1.set(LegRepurchaseTerm_95);
    InstrumentLeg_95.insert(LegRepurchaseTerm_95.getString());
    FIX::LegSecurityDesc LegSecurityDesc_95("STRING_14453536");
    noLegs_0_1.set(LegSecurityDesc_95);
    InstrumentLeg_95.insert(LegSecurityDesc_95.getString());
    FIX::LegSecurityExchange LegSecurityExchange_95("EXCHANGE_932521255");
    noLegs_0_1.set(LegSecurityExchange_95);
    InstrumentLeg_95.insert(LegSecurityExchange_95.getString());
    FIX::LegSecurityID LegSecurityID_95("STRING_2044855441");
    noLegs_0_1.set(LegSecurityID_95);
    InstrumentLeg_95.insert(LegSecurityID_95.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_95("STRING_221231993");
    noLegs_0_1.set(LegSecurityIDSource_95);
    InstrumentLeg_95.insert(LegSecurityIDSource_95.getString());
    FIX::LegSecuritySubType LegSecuritySubType_95("STRING_1304630190");
    noLegs_0_1.set(LegSecuritySubType_95);
    InstrumentLeg_95.insert(LegSecuritySubType_95.getString());
    FIX::LegSecurityType LegSecurityType_95("STRING_1939081418");
    noLegs_0_1.set(LegSecurityType_95);
    InstrumentLeg_95.insert(LegSecurityType_95.getString());
    FIX::LegSide LegSide_95('5');
    noLegs_0_1.set(LegSide_95);
    InstrumentLeg_95.insert(LegSide_95.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_95("STRING_2139714011");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_95);
    InstrumentLeg_95.insert(LegStateOrProvinceOfIssue_95.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_95("JPY");
    noLegs_0_1.set(LegStrikeCurrency_95);
    InstrumentLeg_95.insert(LegStrikeCurrency_95.getString());
    FIX::LegStrikePrice LegStrikePrice_95;
    LegStrikePrice_95.setString("2266086");
    noLegs_0_1.set(LegStrikePrice_95);
    InstrumentLeg_95.insert(LegStrikePrice_95.getString());
    FIX::LegSymbol LegSymbol_95("STRING_1435804235");
    noLegs_0_1.set(LegSymbol_95);
    InstrumentLeg_95.insert(LegSymbol_95.getString());
    FIX::LegSymbolSfx LegSymbolSfx_95("STRING_104405213");
    noLegs_0_1.set(LegSymbolSfx_95);
    InstrumentLeg_95.insert(LegSymbolSfx_95.getString());
    FIX::LegTimeUnit LegTimeUnit_95("STRING_1887688793");
    noLegs_0_1.set(LegTimeUnit_95);
    InstrumentLeg_95.insert(LegTimeUnit_95.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_95("STRING_618144216");
    noLegs_0_1.set(LegUnitOfMeasure_95);
    InstrumentLeg_95.insert(LegUnitOfMeasure_95.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_95;
    LegUnitOfMeasureQty_95.setString("4854295");
    noLegs_0_1.set(LegUnitOfMeasureQty_95);
    InstrumentLeg_95.insert(LegUnitOfMeasureQty_95.getString());
    all_values.push_back(InstrumentLeg_95);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_169;
      FIX::LegSecurityAltID LegSecurityAltID_169("STRING_2119366550");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_169);
      LegSecAltIDGrp_NoLegSecurityAltID_169.insert(LegSecurityAltID_169.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_169("STRING_1474081331");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_169);
      LegSecAltIDGrp_NoLegSecurityAltID_169.insert(LegSecurityAltIDSource_169.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_169);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_96;
    FIX::EncodedLegIssuer EncodedLegIssuer_96("DATA_1579685745");
    noLegs_0_2.set(EncodedLegIssuer_96);
    InstrumentLeg_96.insert(EncodedLegIssuer_96.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_96(470470511);
    noLegs_0_2.set(EncodedLegIssuerLen_96);
    InstrumentLeg_96.insert(EncodedLegIssuerLen_96.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_96("DATA_299381231");
    noLegs_0_2.set(EncodedLegSecurityDesc_96);
    InstrumentLeg_96.insert(EncodedLegSecurityDesc_96.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_96(873637906);
    noLegs_0_2.set(EncodedLegSecurityDescLen_96);
    InstrumentLeg_96.insert(EncodedLegSecurityDescLen_96.getString());
    FIX::LegCFICode LegCFICode_96("STRING_1260543150");
    noLegs_0_2.set(LegCFICode_96);
    InstrumentLeg_96.insert(LegCFICode_96.getString());
    FIX::LegContractMultiplier LegContractMultiplier_96;
    LegContractMultiplier_96.setString("7150514");
    noLegs_0_2.set(LegContractMultiplier_96);
    InstrumentLeg_96.insert(LegContractMultiplier_96.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_96(398926702);
    noLegs_0_2.set(LegContractMultiplierUnit_96);
    InstrumentLeg_96.insert(LegContractMultiplierUnit_96.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_96("MONTHYEAR_851552840");
    noLegs_0_2.set(LegContractSettlMonth_96);
    InstrumentLeg_96.insert(LegContractSettlMonth_96.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_96("COUNTRY_772150522");
    noLegs_0_2.set(LegCountryOfIssue_96);
    InstrumentLeg_96.insert(LegCountryOfIssue_96.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_96("LOCALMKTDATE_663433954");
    noLegs_0_2.set(LegCouponPaymentDate_96);
    InstrumentLeg_96.insert(LegCouponPaymentDate_96.getString());
    FIX::LegCouponRate LegCouponRate_96;
    LegCouponRate_96.setString("14.620000");
    noLegs_0_2.set(LegCouponRate_96);
    InstrumentLeg_96.insert(LegCouponRate_96.getString());
    FIX::LegCreditRating LegCreditRating_96("STRING_283085072");
    noLegs_0_2.set(LegCreditRating_96);
    InstrumentLeg_96.insert(LegCreditRating_96.getString());
    FIX::LegCurrency LegCurrency_96("CHF");
    noLegs_0_2.set(LegCurrency_96);
    InstrumentLeg_96.insert(LegCurrency_96.getString());
    FIX::LegDatedDate LegDatedDate_96("LOCALMKTDATE_180456865");
    noLegs_0_2.set(LegDatedDate_96);
    InstrumentLeg_96.insert(LegDatedDate_96.getString());
    FIX::LegExerciseStyle LegExerciseStyle_96(899119483);
    noLegs_0_2.set(LegExerciseStyle_96);
    InstrumentLeg_96.insert(LegExerciseStyle_96.getString());
    FIX::LegFactor LegFactor_96;
    LegFactor_96.setString("2323592");
    noLegs_0_2.set(LegFactor_96);
    InstrumentLeg_96.insert(LegFactor_96.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_96(2119538284);
    noLegs_0_2.set(LegFlowScheduleType_96);
    InstrumentLeg_96.insert(LegFlowScheduleType_96.getString());
    FIX::LegInstrRegistry LegInstrRegistry_96("STRING_1467054023");
    noLegs_0_2.set(LegInstrRegistry_96);
    InstrumentLeg_96.insert(LegInstrRegistry_96.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_96("LOCALMKTDATE_224589623");
    noLegs_0_2.set(LegInterestAccrualDate_96);
    InstrumentLeg_96.insert(LegInterestAccrualDate_96.getString());
    FIX::LegIssueDate LegIssueDate_96("LOCALMKTDATE_2007975221");
    noLegs_0_2.set(LegIssueDate_96);
    InstrumentLeg_96.insert(LegIssueDate_96.getString());
    FIX::LegIssuer LegIssuer_96("STRING_100842325");
    noLegs_0_2.set(LegIssuer_96);
    InstrumentLeg_96.insert(LegIssuer_96.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_96("STRING_451198232");
    noLegs_0_2.set(LegLocaleOfIssue_96);
    InstrumentLeg_96.insert(LegLocaleOfIssue_96.getString());
    FIX::LegMaturityDate LegMaturityDate_96("LOCALMKTDATE_1296295808");
    noLegs_0_2.set(LegMaturityDate_96);
    InstrumentLeg_96.insert(LegMaturityDate_96.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_96("MONTHYEAR_205247539");
    noLegs_0_2.set(LegMaturityMonthYear_96);
    InstrumentLeg_96.insert(LegMaturityMonthYear_96.getString());
    FIX::LegMaturityTime LegMaturityTime_96("TZTIMEONLY_191403377");
    noLegs_0_2.set(LegMaturityTime_96);
    InstrumentLeg_96.insert(LegMaturityTime_96.getString());
    FIX::LegOptAttribute LegOptAttribute_96('1');
    noLegs_0_2.set(LegOptAttribute_96);
    InstrumentLeg_96.insert(LegOptAttribute_96.getString());
    FIX::LegOptionRatio LegOptionRatio_96;
    LegOptionRatio_96.setString("6906771");
    noLegs_0_2.set(LegOptionRatio_96);
    InstrumentLeg_96.insert(LegOptionRatio_96.getString());
    FIX::LegPool LegPool_96("STRING_1330805565");
    noLegs_0_2.set(LegPool_96);
    InstrumentLeg_96.insert(LegPool_96.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_96("STRING_1886322926");
    noLegs_0_2.set(LegPriceUnitOfMeasure_96);
    InstrumentLeg_96.insert(LegPriceUnitOfMeasure_96.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_96;
    LegPriceUnitOfMeasureQty_96.setString("172748");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_96);
    InstrumentLeg_96.insert(LegPriceUnitOfMeasureQty_96.getString());
    FIX::LegProduct LegProduct_96(763007662);
    noLegs_0_2.set(LegProduct_96);
    InstrumentLeg_96.insert(LegProduct_96.getString());
    FIX::LegPutOrCall LegPutOrCall_96(209309789);
    noLegs_0_2.set(LegPutOrCall_96);
    InstrumentLeg_96.insert(LegPutOrCall_96.getString());
    FIX::LegRatioQty LegRatioQty_96;
    LegRatioQty_96.setString("3166560");
    noLegs_0_2.set(LegRatioQty_96);
    InstrumentLeg_96.insert(LegRatioQty_96.getString());
    FIX::LegRedemptionDate LegRedemptionDate_96("LOCALMKTDATE_1636645568");
    noLegs_0_2.set(LegRedemptionDate_96);
    InstrumentLeg_96.insert(LegRedemptionDate_96.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_96("STRING_1469852939");
    noLegs_0_2.set(LegRepoCollateralSecurityType_96);
    InstrumentLeg_96.insert(LegRepoCollateralSecurityType_96.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_96;
    LegRepurchaseRate_96.setString("74.790000");
    noLegs_0_2.set(LegRepurchaseRate_96);
    InstrumentLeg_96.insert(LegRepurchaseRate_96.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_96(2035572270);
    noLegs_0_2.set(LegRepurchaseTerm_96);
    InstrumentLeg_96.insert(LegRepurchaseTerm_96.getString());
    FIX::LegSecurityDesc LegSecurityDesc_96("STRING_173922131");
    noLegs_0_2.set(LegSecurityDesc_96);
    InstrumentLeg_96.insert(LegSecurityDesc_96.getString());
    FIX::LegSecurityExchange LegSecurityExchange_96("EXCHANGE_1803858002");
    noLegs_0_2.set(LegSecurityExchange_96);
    InstrumentLeg_96.insert(LegSecurityExchange_96.getString());
    FIX::LegSecurityID LegSecurityID_96("STRING_551522576");
    noLegs_0_2.set(LegSecurityID_96);
    InstrumentLeg_96.insert(LegSecurityID_96.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_96("STRING_316613593");
    noLegs_0_2.set(LegSecurityIDSource_96);
    InstrumentLeg_96.insert(LegSecurityIDSource_96.getString());
    FIX::LegSecuritySubType LegSecuritySubType_96("STRING_2086943074");
    noLegs_0_2.set(LegSecuritySubType_96);
    InstrumentLeg_96.insert(LegSecuritySubType_96.getString());
    FIX::LegSecurityType LegSecurityType_96("STRING_1229410066");
    noLegs_0_2.set(LegSecurityType_96);
    InstrumentLeg_96.insert(LegSecurityType_96.getString());
    FIX::LegSide LegSide_96('1');
    noLegs_0_2.set(LegSide_96);
    InstrumentLeg_96.insert(LegSide_96.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_96("STRING_119916291");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_96);
    InstrumentLeg_96.insert(LegStateOrProvinceOfIssue_96.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_96("USD");
    noLegs_0_2.set(LegStrikeCurrency_96);
    InstrumentLeg_96.insert(LegStrikeCurrency_96.getString());
    FIX::LegStrikePrice LegStrikePrice_96;
    LegStrikePrice_96.setString("919709");
    noLegs_0_2.set(LegStrikePrice_96);
    InstrumentLeg_96.insert(LegStrikePrice_96.getString());
    FIX::LegSymbol LegSymbol_96("STRING_1448099925");
    noLegs_0_2.set(LegSymbol_96);
    InstrumentLeg_96.insert(LegSymbol_96.getString());
    FIX::LegSymbolSfx LegSymbolSfx_96("STRING_1848775193");
    noLegs_0_2.set(LegSymbolSfx_96);
    InstrumentLeg_96.insert(LegSymbolSfx_96.getString());
    FIX::LegTimeUnit LegTimeUnit_96("STRING_2099946148");
    noLegs_0_2.set(LegTimeUnit_96);
    InstrumentLeg_96.insert(LegTimeUnit_96.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_96("STRING_1548942250");
    noLegs_0_2.set(LegUnitOfMeasure_96);
    InstrumentLeg_96.insert(LegUnitOfMeasure_96.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_96;
    LegUnitOfMeasureQty_96.setString("1524897");
    noLegs_0_2.set(LegUnitOfMeasureQty_96);
    InstrumentLeg_96.insert(LegUnitOfMeasureQty_96.getString());
    all_values.push_back(InstrumentLeg_96);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_170;
      FIX::LegSecurityAltID LegSecurityAltID_170("STRING_1754189789");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_170);
      LegSecAltIDGrp_NoLegSecurityAltID_170.insert(LegSecurityAltID_170.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_170("STRING_343893155");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_170);
      LegSecAltIDGrp_NoLegSecurityAltID_170.insert(LegSecurityAltIDSource_170.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_170);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_171;
      FIX::LegSecurityAltID LegSecurityAltID_171("STRING_1015714684");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_171);
      LegSecAltIDGrp_NoLegSecurityAltID_171.insert(LegSecurityAltID_171.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_171("STRING_297383277");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_171);
      LegSecAltIDGrp_NoLegSecurityAltID_171.insert(LegSecurityAltIDSource_171.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_171);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_69;
  FIX::AttachmentPoint AttachmentPoint_69;
  AttachmentPoint_69.setString("87.200000");
  msg.set(AttachmentPoint_69);
  Instrument_69.insert(AttachmentPoint_69.getString());
  FIX::CFICode CFICode_69("STRING_754553962");
  msg.set(CFICode_69);
  Instrument_69.insert(CFICode_69.getString());
  FIX::CPProgram CPProgram_69(2);
  msg.set(CPProgram_69);
  Instrument_69.insert(CPProgram_69.getString());
  FIX::CPRegType CPRegType_69("STRING_290222734");
  msg.set(CPRegType_69);
  Instrument_69.insert(CPRegType_69.getString());
  FIX::CapPrice CapPrice_69;
  CapPrice_69.setString("9638637");
  msg.set(CapPrice_69);
  Instrument_69.insert(CapPrice_69.getString());
  FIX::ContractMultiplier ContractMultiplier_69;
  ContractMultiplier_69.setString("6313141");
  msg.set(ContractMultiplier_69);
  Instrument_69.insert(ContractMultiplier_69.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_69(1);
  msg.set(ContractMultiplierUnit_69);
  Instrument_69.insert(ContractMultiplierUnit_69.getString());
  FIX::ContractSettlMonth ContractSettlMonth_69("MONTHYEAR_286233042");
  msg.set(ContractSettlMonth_69);
  Instrument_69.insert(ContractSettlMonth_69.getString());
  FIX::CountryOfIssue CountryOfIssue_69("COUNTRY_1663021627");
  msg.set(CountryOfIssue_69);
  Instrument_69.insert(CountryOfIssue_69.getString());
  FIX::CouponPaymentDate CouponPaymentDate_69("LOCALMKTDATE_1814956925");
  msg.set(CouponPaymentDate_69);
  Instrument_69.insert(CouponPaymentDate_69.getString());
  FIX::CouponRate CouponRate_69;
  CouponRate_69.setString("51.740000");
  msg.set(CouponRate_69);
  Instrument_69.insert(CouponRate_69.getString());
  FIX::CreditRating CreditRating_69("STRING_1319395981");
  msg.set(CreditRating_69);
  Instrument_69.insert(CreditRating_69.getString());
  FIX::DatedDate DatedDate_69("LOCALMKTDATE_218995854");
  msg.set(DatedDate_69);
  Instrument_69.insert(DatedDate_69.getString());
  FIX::DetachmentPoint DetachmentPoint_69;
  DetachmentPoint_69.setString("87.670000");
  msg.set(DetachmentPoint_69);
  Instrument_69.insert(DetachmentPoint_69.getString());
  FIX::EncodedIssuer EncodedIssuer_69("DATA_1258855407");
  msg.set(EncodedIssuer_69);
  Instrument_69.insert(EncodedIssuer_69.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_69(1448405920);
  msg.set(EncodedIssuerLen_69);
  Instrument_69.insert(EncodedIssuerLen_69.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_69("DATA_21111430");
  msg.set(EncodedSecurityDesc_69);
  Instrument_69.insert(EncodedSecurityDesc_69.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_69(1378771698);
  msg.set(EncodedSecurityDescLen_69);
  Instrument_69.insert(EncodedSecurityDescLen_69.getString());
  FIX::ExerciseStyle ExerciseStyle_69(2);
  msg.set(ExerciseStyle_69);
  Instrument_69.insert(ExerciseStyle_69.getString());
  FIX::Factor Factor_69;
  Factor_69.setString("16452970");
  msg.set(Factor_69);
  Instrument_69.insert(Factor_69.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_69(true);
  msg.set(FlexProductEligibilityIndicator_69);
  Instrument_69.insert(FlexProductEligibilityIndicator_69.getString());
  FIX::FlexibleIndicator FlexibleIndicator_69(false);
  msg.set(FlexibleIndicator_69);
  Instrument_69.insert(FlexibleIndicator_69.getString());
  FIX::FloorPrice FloorPrice_69;
  FloorPrice_69.setString("13465885");
  msg.set(FloorPrice_69);
  Instrument_69.insert(FloorPrice_69.getString());
  FIX::FlowScheduleType FlowScheduleType_69(1);
  msg.set(FlowScheduleType_69);
  Instrument_69.insert(FlowScheduleType_69.getString());
  FIX::InstrRegistry InstrRegistry_69("STRING_131526701");
  msg.set(InstrRegistry_69);
  Instrument_69.insert(InstrRegistry_69.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_69('1');
  msg.set(InstrmtAssignmentMethod_69);
  Instrument_69.insert(InstrmtAssignmentMethod_69.getString());
  FIX::InterestAccrualDate InterestAccrualDate_69("LOCALMKTDATE_524479787");
  msg.set(InterestAccrualDate_69);
  Instrument_69.insert(InterestAccrualDate_69.getString());
  FIX::IssueDate IssueDate_69("LOCALMKTDATE_1885716491");
  msg.set(IssueDate_69);
  Instrument_69.insert(IssueDate_69.getString());
  FIX::Issuer Issuer_69("STRING_1842971480");
  msg.set(Issuer_69);
  Instrument_69.insert(Issuer_69.getString());
  FIX::ListMethod ListMethod_69(1);
  msg.set(ListMethod_69);
  Instrument_69.insert(ListMethod_69.getString());
  FIX::LocaleOfIssue LocaleOfIssue_69("STRING_35616120");
  msg.set(LocaleOfIssue_69);
  Instrument_69.insert(LocaleOfIssue_69.getString());
  FIX::MaturityDate MaturityDate_69("LOCALMKTDATE_1370186552");
  msg.set(MaturityDate_69);
  Instrument_69.insert(MaturityDate_69.getString());
  FIX::MaturityMonthYear MaturityMonthYear_69("MONTHYEAR_147264786");
  msg.set(MaturityMonthYear_69);
  Instrument_69.insert(MaturityMonthYear_69.getString());
  FIX::MaturityTime MaturityTime_69("TZTIMEONLY_350274217");
  msg.set(MaturityTime_69);
  Instrument_69.insert(MaturityTime_69.getString());
  FIX::MinPriceIncrement MinPriceIncrement_69;
  MinPriceIncrement_69.setString("16604092");
  msg.set(MinPriceIncrement_69);
  Instrument_69.insert(MinPriceIncrement_69.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_69;
  MinPriceIncrementAmount_69.setString("11111285");
  msg.set(MinPriceIncrementAmount_69);
  Instrument_69.insert(MinPriceIncrementAmount_69.getString());
  FIX::NTPositionLimit NTPositionLimit_69(981588365);
  msg.set(NTPositionLimit_69);
  Instrument_69.insert(NTPositionLimit_69.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_69;
  NotionalPercentageOutstanding_69.setString("39.420000");
  msg.set(NotionalPercentageOutstanding_69);
  Instrument_69.insert(NotionalPercentageOutstanding_69.getString());
  FIX::OptAttribute OptAttribute_69('1');
  msg.set(OptAttribute_69);
  Instrument_69.insert(OptAttribute_69.getString());
  FIX::OptPayoutAmount OptPayoutAmount_69;
  OptPayoutAmount_69.setString("4971263");
  msg.set(OptPayoutAmount_69);
  Instrument_69.insert(OptPayoutAmount_69.getString());
  FIX::OptPayoutType OptPayoutType_69(1);
  msg.set(OptPayoutType_69);
  Instrument_69.insert(OptPayoutType_69.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_69;
  OriginalNotionalPercentageOutstanding_69.setString("67.540000");
  msg.set(OriginalNotionalPercentageOutstanding_69);
  Instrument_69.insert(OriginalNotionalPercentageOutstanding_69.getString());
  FIX::Pool Pool_69("STRING_1816522325");
  msg.set(Pool_69);
  Instrument_69.insert(Pool_69.getString());
  FIX::PositionLimit PositionLimit_69(1326263073);
  msg.set(PositionLimit_69);
  Instrument_69.insert(PositionLimit_69.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_69("STRING_INX");
  msg.set(PriceQuoteMethod_69);
  Instrument_69.insert(PriceQuoteMethod_69.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_69("STRING_927894084");
  msg.set(PriceUnitOfMeasure_69);
  Instrument_69.insert(PriceUnitOfMeasure_69.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_69;
  PriceUnitOfMeasureQty_69.setString("6271853");
  msg.set(PriceUnitOfMeasureQty_69);
  Instrument_69.insert(PriceUnitOfMeasureQty_69.getString());
  FIX::Product Product_71(3);
  msg.set(Product_71);
  Instrument_69.insert(Product_71.getString());
  FIX::ProductComplex ProductComplex_69("STRING_159182134");
  msg.set(ProductComplex_69);
  Instrument_69.insert(ProductComplex_69.getString());
  FIX::PutOrCall PutOrCall_69(0);
  msg.set(PutOrCall_69);
  Instrument_69.insert(PutOrCall_69.getString());
  FIX::RedemptionDate RedemptionDate_69("LOCALMKTDATE_5726657");
  msg.set(RedemptionDate_69);
  Instrument_69.insert(RedemptionDate_69.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_69("STRING_1629924760");
  msg.set(RepoCollateralSecurityType_69);
  Instrument_69.insert(RepoCollateralSecurityType_69.getString());
  FIX::RepurchaseRate RepurchaseRate_69;
  RepurchaseRate_69.setString("16.190000");
  msg.set(RepurchaseRate_69);
  Instrument_69.insert(RepurchaseRate_69.getString());
  FIX::RepurchaseTerm RepurchaseTerm_69(1352315203);
  msg.set(RepurchaseTerm_69);
  Instrument_69.insert(RepurchaseTerm_69.getString());
  FIX::RestructuringType RestructuringType_69("STRING_XR");
  msg.set(RestructuringType_69);
  Instrument_69.insert(RestructuringType_69.getString());
  FIX::SecurityDesc SecurityDesc_69("STRING_770748320");
  msg.set(SecurityDesc_69);
  Instrument_69.insert(SecurityDesc_69.getString());
  FIX::SecurityExchange SecurityExchange_69("EXCHANGE_703909880");
  msg.set(SecurityExchange_69);
  Instrument_69.insert(SecurityExchange_69.getString());
  FIX::SecurityGroup SecurityGroup_69("STRING_1430126026");
  msg.set(SecurityGroup_69);
  Instrument_69.insert(SecurityGroup_69.getString());
  FIX::SecurityID SecurityID_69("STRING_508981163");
  msg.set(SecurityID_69);
  Instrument_69.insert(SecurityID_69.getString());
  FIX::SecurityIDSource SecurityIDSource_69("STRING_B");
  msg.set(SecurityIDSource_69);
  Instrument_69.insert(SecurityIDSource_69.getString());
  FIX::SecurityStatus SecurityStatus_69("STRING_2");
  msg.set(SecurityStatus_69);
  Instrument_69.insert(SecurityStatus_69.getString());
  FIX::SecuritySubType SecuritySubType_70("STRING_544597284");
  msg.set(SecuritySubType_70);
  Instrument_69.insert(SecuritySubType_70.getString());
  FIX::SecurityType SecurityType_71("STRING_MT");
  msg.set(SecurityType_71);
  Instrument_69.insert(SecurityType_71.getString());
  FIX::Seniority Seniority_69("STRING_SB");
  msg.set(Seniority_69);
  Instrument_69.insert(Seniority_69.getString());
  FIX::SettlMethod SettlMethod_69('P');
  msg.set(SettlMethod_69);
  Instrument_69.insert(SettlMethod_69.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_69("STRING_1282509903");
  msg.set(SettleOnOpenFlag_69);
  Instrument_69.insert(SettleOnOpenFlag_69.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_69("STRING_2081230173");
  msg.set(StateOrProvinceOfIssue_69);
  Instrument_69.insert(StateOrProvinceOfIssue_69.getString());
  FIX::StrikeCurrency StrikeCurrency_69("EUR");
  msg.set(StrikeCurrency_69);
  Instrument_69.insert(StrikeCurrency_69.getString());
  FIX::StrikeMultiplier StrikeMultiplier_69;
  StrikeMultiplier_69.setString("13311081");
  msg.set(StrikeMultiplier_69);
  Instrument_69.insert(StrikeMultiplier_69.getString());
  FIX::StrikePrice StrikePrice_69;
  StrikePrice_69.setString("2261025");
  msg.set(StrikePrice_69);
  Instrument_69.insert(StrikePrice_69.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_69(3);
  msg.set(StrikePriceBoundaryMethod_69);
  Instrument_69.insert(StrikePriceBoundaryMethod_69.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_69;
  StrikePriceBoundaryPrecision_69.setString("12.110000");
  msg.set(StrikePriceBoundaryPrecision_69);
  Instrument_69.insert(StrikePriceBoundaryPrecision_69.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_69(4);
  msg.set(StrikePriceDeterminationMethod_69);
  Instrument_69.insert(StrikePriceDeterminationMethod_69.getString());
  FIX::StrikeValue StrikeValue_69;
  StrikeValue_69.setString("8608668");
  msg.set(StrikeValue_69);
  Instrument_69.insert(StrikeValue_69.getString());
  FIX::Symbol Symbol_69("STRING_1527943084");
  msg.set(Symbol_69);
  Instrument_69.insert(Symbol_69.getString());
  FIX::SymbolSfx SymbolSfx_69("STRING_WI");
  msg.set(SymbolSfx_69);
  Instrument_69.insert(SymbolSfx_69.getString());
  FIX::TimeUnit TimeUnit_69("STRING_H");
  msg.set(TimeUnit_69);
  Instrument_69.insert(TimeUnit_69.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_69(1);
  msg.set(UnderlyingPriceDeterminationMethod_69);
  Instrument_69.insert(UnderlyingPriceDeterminationMethod_69.getString());
  FIX::UnitOfMeasure UnitOfMeasure_69("STRING_MMbbl");
  msg.set(UnitOfMeasure_69);
  Instrument_69.insert(UnitOfMeasure_69.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_69;
  UnitOfMeasureQty_69.setString("13972057");
  msg.set(UnitOfMeasureQty_69);
  Instrument_69.insert(UnitOfMeasureQty_69.getString());
  FIX::ValuationMethod ValuationMethod_69("STRING_EQTY");
  msg.set(ValuationMethod_69);
  Instrument_69.insert(ValuationMethod_69.getString());
  all_values.push_back(Instrument_69);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositions::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_132;
    FIX::ComplexEventCondition ComplexEventCondition_132(2);
    noComplexEvents_0_0.set(ComplexEventCondition_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventCondition_132.getString());
    FIX::ComplexEventPrice ComplexEventPrice_132;
    ComplexEventPrice_132.setString("12464146");
    noComplexEvents_0_0.set(ComplexEventPrice_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventPrice_132.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_132(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceBoundaryMethod_132.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_132;
    ComplexEventPriceBoundaryPrecision_132.setString("20.000000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceBoundaryPrecision_132.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_132(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventPriceTimeType_132.getString());
    FIX::ComplexEventType ComplexEventType_132(5);
    noComplexEvents_0_0.set(ComplexEventType_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexEventType_132.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_132;
    ComplexOptPayoutAmount_132.setString("11686731");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_132);
    ComplexEvents_NoComplexEvents_132.insert(ComplexOptPayoutAmount_132.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_132);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_272;
      FIX::ComplexEventEndDate ComplexEventEndDate_272(FIX::UTCTIMESTAMP(15, 29, 4, 5, 22011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_272);
      ComplexEventDates_NoComplexEventDates_272.insert(ComplexEventEndDate_272.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_272(FIX::UTCTIMESTAMP(14, 34, 22, 15, 102015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_272);
      ComplexEventDates_NoComplexEventDates_272.insert(ComplexEventStartDate_272.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_272);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_538;
        FIX::ComplexEventEndTime ComplexEventEndTime_538(FIX::UTCTIMEONLY(21, 34, 42));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_538);
        ComplexEventTimes_NoComplexEventTimes_538.insert(ComplexEventEndTime_538.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_538(FIX::UTCTIMEONLY(3, 40, 5));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_538);
        ComplexEventTimes_NoComplexEventTimes_538.insert(ComplexEventStartTime_538.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_538);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_273;
      FIX::ComplexEventEndDate ComplexEventEndDate_273(FIX::UTCTIMESTAMP(1, 35, 14, 10, 112010));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_273);
      ComplexEventDates_NoComplexEventDates_273.insert(ComplexEventEndDate_273.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_273(FIX::UTCTIMESTAMP(11, 37, 52, 12, 32005));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_273);
      ComplexEventDates_NoComplexEventDates_273.insert(ComplexEventStartDate_273.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_273);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_539;
        FIX::ComplexEventEndTime ComplexEventEndTime_539(FIX::UTCTIMEONLY(12, 12, 32));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_539);
        ComplexEventTimes_NoComplexEventTimes_539.insert(ComplexEventEndTime_539.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_539(FIX::UTCTIMEONLY(1, 53, 1));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_539);
        ComplexEventTimes_NoComplexEventTimes_539.insert(ComplexEventStartTime_539.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_539);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_540;
        FIX::ComplexEventEndTime ComplexEventEndTime_540(FIX::UTCTIMEONLY(18, 36, 38));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_540);
        ComplexEventTimes_NoComplexEventTimes_540.insert(ComplexEventEndTime_540.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_540(FIX::UTCTIMEONLY(7, 10, 11));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_540);
        ComplexEventTimes_NoComplexEventTimes_540.insert(ComplexEventStartTime_540.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_540);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
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
    multiset<string> EvntGrp_NoEvents_133;
    FIX::EventDate EventDate_133("LOCALMKTDATE_89838795");
    noEvents_0_0.set(EventDate_133);
    EvntGrp_NoEvents_133.insert(EventDate_133.getString());
    FIX::EventPx EventPx_133;
    EventPx_133.setString("2244613");
    noEvents_0_0.set(EventPx_133);
    EvntGrp_NoEvents_133.insert(EventPx_133.getString());
    FIX::EventText EventText_133("STRING_2045254772");
    noEvents_0_0.set(EventText_133);
    EvntGrp_NoEvents_133.insert(EventText_133.getString());
    FIX::EventTime EventTime_133(FIX::UTCTIMESTAMP(12, 34, 52, 8, 122000));
    noEvents_0_0.set(EventTime_133);
    EvntGrp_NoEvents_133.insert(EventTime_133.getString());
    FIX::EventType EventType_133(5);
    noEvents_0_0.set(EventType_133);
    EvntGrp_NoEvents_133.insert(EventType_133.getString());
    all_values.push_back(EvntGrp_NoEvents_133);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_134;
    FIX::EventDate EventDate_134("LOCALMKTDATE_201770034");
    noEvents_0_1.set(EventDate_134);
    EvntGrp_NoEvents_134.insert(EventDate_134.getString());
    FIX::EventPx EventPx_134;
    EventPx_134.setString("19810030");
    noEvents_0_1.set(EventPx_134);
    EvntGrp_NoEvents_134.insert(EventPx_134.getString());
    FIX::EventText EventText_134("STRING_274612621");
    noEvents_0_1.set(EventText_134);
    EvntGrp_NoEvents_134.insert(EventText_134.getString());
    FIX::EventTime EventTime_134(FIX::UTCTIMESTAMP(22, 13, 36, 25, 42015));
    noEvents_0_1.set(EventTime_134);
    EvntGrp_NoEvents_134.insert(EventTime_134.getString());
    FIX::EventType EventType_134(16);
    noEvents_0_1.set(EventType_134);
    EvntGrp_NoEvents_134.insert(EventType_134.getString());
    all_values.push_back(EvntGrp_NoEvents_134);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_135;
    FIX::EventDate EventDate_135("LOCALMKTDATE_1924393390");
    noEvents_0_2.set(EventDate_135);
    EvntGrp_NoEvents_135.insert(EventDate_135.getString());
    FIX::EventPx EventPx_135;
    EventPx_135.setString("7230254");
    noEvents_0_2.set(EventPx_135);
    EvntGrp_NoEvents_135.insert(EventPx_135.getString());
    FIX::EventText EventText_135("STRING_1516279243");
    noEvents_0_2.set(EventText_135);
    EvntGrp_NoEvents_135.insert(EventText_135.getString());
    FIX::EventTime EventTime_135(FIX::UTCTIMESTAMP(9, 26, 42, 16, 122015));
    noEvents_0_2.set(EventTime_135);
    EvntGrp_NoEvents_135.insert(EventTime_135.getString());
    FIX::EventType EventType_135(7);
    noEvents_0_2.set(EventType_135);
    EvntGrp_NoEvents_135.insert(EventType_135.getString());
    all_values.push_back(EvntGrp_NoEvents_135);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_129;
    FIX::InstrumentPartyID InstrumentPartyID_129("STRING_1600483218");
    noInstrumentParties_0_0.set(InstrumentPartyID_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyID_129.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_129('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyIDSource_129.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_129(503596593);
    noInstrumentParties_0_0.set(InstrumentPartyRole_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyRole_129.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_129);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254;
      FIX::InstrumentPartySubID InstrumentPartySubID_254("STRING_207811687");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_254);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254.insert(InstrumentPartySubID_254.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_254(441665857);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_254);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254.insert(InstrumentPartySubIDType_254.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255;
      FIX::InstrumentPartySubID InstrumentPartySubID_255("STRING_1261754439");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_255);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255.insert(InstrumentPartySubID_255.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_255(314498971);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_255);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255.insert(InstrumentPartySubIDType_255.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256;
      FIX::InstrumentPartySubID InstrumentPartySubID_256("STRING_643435891");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_256);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256.insert(InstrumentPartySubID_256.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_256(1095273865);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_256);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256.insert(InstrumentPartySubIDType_256.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_130;
    FIX::InstrumentPartyID InstrumentPartyID_130("STRING_589111592");
    noInstrumentParties_0_1.set(InstrumentPartyID_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyID_130.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_130('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyIDSource_130.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_130(118023255);
    noInstrumentParties_0_1.set(InstrumentPartyRole_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyRole_130.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_130);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257;
      FIX::InstrumentPartySubID InstrumentPartySubID_257("STRING_675235263");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_257);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257.insert(InstrumentPartySubID_257.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_257(1693759288);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_257);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257.insert(InstrumentPartySubIDType_257.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258;
      FIX::InstrumentPartySubID InstrumentPartySubID_258("STRING_346346085");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_258);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258.insert(InstrumentPartySubID_258.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_258(1231880004);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_258);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258.insert(InstrumentPartySubIDType_258.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259;
      FIX::InstrumentPartySubID InstrumentPartySubID_259("STRING_1457170895");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_259);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259.insert(InstrumentPartySubID_259.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_259(123255827);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_259);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259.insert(InstrumentPartySubIDType_259.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_131;
    FIX::InstrumentPartyID InstrumentPartyID_131("STRING_1954905436");
    noInstrumentParties_0_2.set(InstrumentPartyID_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyID_131.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_131('8');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyIDSource_131.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_131(1651381828);
    noInstrumentParties_0_2.set(InstrumentPartyRole_131);
    InstrumentParties_NoInstrumentParties_131.insert(InstrumentPartyRole_131.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_131);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260;
      FIX::InstrumentPartySubID InstrumentPartySubID_260("STRING_467576548");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_260);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260.insert(InstrumentPartySubID_260.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_260(255602582);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_260);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260.insert(InstrumentPartySubIDType_260.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_143;
    FIX::SecurityAltID SecurityAltID_143("STRING_938375224");
    noSecurityAltID_0_0.set(SecurityAltID_143);
    SecAltIDGrp_NoSecurityAltID_143.insert(SecurityAltID_143.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_143("STRING_1097145780");
    noSecurityAltID_0_0.set(SecurityAltIDSource_143);
    SecAltIDGrp_NoSecurityAltID_143.insert(SecurityAltIDSource_143.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_143);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_144;
    FIX::SecurityAltID SecurityAltID_144("STRING_1595228573");
    noSecurityAltID_0_1.set(SecurityAltID_144);
    SecAltIDGrp_NoSecurityAltID_144.insert(SecurityAltID_144.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_144("STRING_1306945023");
    noSecurityAltID_0_1.set(SecurityAltIDSource_144);
    SecAltIDGrp_NoSecurityAltID_144.insert(SecurityAltIDSource_144.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_144);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_145;
    FIX::SecurityAltID SecurityAltID_145("STRING_550145350");
    noSecurityAltID_0_2.set(SecurityAltID_145);
    SecAltIDGrp_NoSecurityAltID_145.insert(SecurityAltID_145.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_145("STRING_1632129764");
    noSecurityAltID_0_2.set(SecurityAltIDSource_145);
    SecAltIDGrp_NoSecurityAltID_145.insert(SecurityAltIDSource_145.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_145);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_138;
  FIX::SecurityXML SecurityXML_139("XMLDATA_1810541617");
  msg.set(SecurityXML_139);
  FIX::SecurityXMLLen SecurityXMLLen_69(1633424713);
  msg.set(SecurityXMLLen_69);
  FIX::SecurityXMLSchema SecurityXMLSchema_69("STRING_1839941451");
  msg.set(SecurityXMLSchema_69);
  SecurityXML_138.insert(SecurityXMLSchema_69.getString());
  all_values.push_back(SecurityXML_138);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_129;
    FIX::PartyID PartyID_129("STRING_747695504");
    noPartyIDs_0_0.set(PartyID_129);
    Parties_NoPartyIDs_129.insert(PartyID_129.getString());
    FIX::PartyIDSource PartyIDSource_129('4');
    noPartyIDs_0_0.set(PartyIDSource_129);
    Parties_NoPartyIDs_129.insert(PartyIDSource_129.getString());
    FIX::PartyRole PartyRole_129(27);
    noPartyIDs_0_0.set(PartyRole_129);
    Parties_NoPartyIDs_129.insert(PartyRole_129.getString());
    all_values.push_back(Parties_NoPartyIDs_129);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_256;
      FIX::PartySubID PartySubID_256("STRING_596068366");
      noPartySubIDs_0_1_0.set(PartySubID_256);
      PtysSubGrp_NoPartySubIDs_256.insert(PartySubID_256.getString());
      FIX::PartySubIDType PartySubIDType_256(13);
      noPartySubIDs_0_1_0.set(PartySubIDType_256);
      PtysSubGrp_NoPartySubIDs_256.insert(PartySubIDType_256.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_256);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::RequestForPositions::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_24;
    FIX::TradingSessionID TradingSessionID_72("STRING_1");
    noTradingSessions_0_0.set(TradingSessionID_72);
    TrdgSesGrp_NoTradingSessions_24.insert(TradingSessionID_72.getString());
    FIX::TradingSessionSubID TradingSessionSubID_72("STRING_5");
    noTradingSessions_0_0.set(TradingSessionSubID_72);
    TrdgSesGrp_NoTradingSessions_24.insert(TradingSessionSubID_72.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_24);

    msg.addGroup(noTradingSessions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_117;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_117("DATA_1389837009");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingIssuer_117.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_117(1806332551);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingIssuerLen_117.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_117("DATA_816955512");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingSecurityDesc_117.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_117(1513092837);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingSecurityDescLen_117.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_117;
    UnderlyingAdjustedQuantity_117.setString("16137543");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_117);
    UnderlyingInstrument_117.insert(UnderlyingAdjustedQuantity_117.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_117;
    UnderlyingAllocationPercent_117.setString("20.020000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_117);
    UnderlyingInstrument_117.insert(UnderlyingAllocationPercent_117.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_117;
    UnderlyingAttachmentPoint_117.setString("10.170000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_117);
    UnderlyingInstrument_117.insert(UnderlyingAttachmentPoint_117.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_117("STRING_131746058");
    noUnderlyings_0_0.set(UnderlyingCFICode_117);
    UnderlyingInstrument_117.insert(UnderlyingCFICode_117.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_117("STRING_2110498551");
    noUnderlyings_0_0.set(UnderlyingCPProgram_117);
    UnderlyingInstrument_117.insert(UnderlyingCPProgram_117.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_117("STRING_1272593599");
    noUnderlyings_0_0.set(UnderlyingCPRegType_117);
    UnderlyingInstrument_117.insert(UnderlyingCPRegType_117.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_117;
    UnderlyingCapValue_117.setString("761255");
    noUnderlyings_0_0.set(UnderlyingCapValue_117);
    UnderlyingInstrument_117.insert(UnderlyingCapValue_117.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_117;
    UnderlyingCashAmount_117.setString("9013901");
    noUnderlyings_0_0.set(UnderlyingCashAmount_117);
    UnderlyingInstrument_117.insert(UnderlyingCashAmount_117.getString());
    FIX::UnderlyingCashType UnderlyingCashType_117("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_117);
    UnderlyingInstrument_117.insert(UnderlyingCashType_117.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_117;
    UnderlyingContractMultiplier_117.setString("16713540");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_117);
    UnderlyingInstrument_117.insert(UnderlyingContractMultiplier_117.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_117(60851502);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_117);
    UnderlyingInstrument_117.insert(UnderlyingContractMultiplierUnit_117.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_117("COUNTRY_772401082");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingCountryOfIssue_117.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_117("LOCALMKTDATE_1156000213");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_117);
    UnderlyingInstrument_117.insert(UnderlyingCouponPaymentDate_117.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_117;
    UnderlyingCouponRate_117.setString("31.190000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_117);
    UnderlyingInstrument_117.insert(UnderlyingCouponRate_117.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_117("STRING_258342147");
    noUnderlyings_0_0.set(UnderlyingCreditRating_117);
    UnderlyingInstrument_117.insert(UnderlyingCreditRating_117.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_117("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_117);
    UnderlyingInstrument_117.insert(UnderlyingCurrency_117.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_117;
    UnderlyingCurrentValue_117.setString("10060376");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_117);
    UnderlyingInstrument_117.insert(UnderlyingCurrentValue_117.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_117;
    UnderlyingDetachmentPoint_117.setString("47.900000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_117);
    UnderlyingInstrument_117.insert(UnderlyingDetachmentPoint_117.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_117;
    UnderlyingDirtyPrice_117.setString("5767930");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_117);
    UnderlyingInstrument_117.insert(UnderlyingDirtyPrice_117.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_117;
    UnderlyingEndPrice_117.setString("7015233");
    noUnderlyings_0_0.set(UnderlyingEndPrice_117);
    UnderlyingInstrument_117.insert(UnderlyingEndPrice_117.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_117;
    UnderlyingEndValue_117.setString("14514831");
    noUnderlyings_0_0.set(UnderlyingEndValue_117);
    UnderlyingInstrument_117.insert(UnderlyingEndValue_117.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_117(476010298);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_117);
    UnderlyingInstrument_117.insert(UnderlyingExerciseStyle_117.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_117;
    UnderlyingFXRate_117.setString("5150323");
    noUnderlyings_0_0.set(UnderlyingFXRate_117);
    UnderlyingInstrument_117.insert(UnderlyingFXRate_117.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_117('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_117);
    UnderlyingInstrument_117.insert(UnderlyingFXRateCalc_117.getString());
    FIX::UnderlyingFactor UnderlyingFactor_117;
    UnderlyingFactor_117.setString("10504628");
    noUnderlyings_0_0.set(UnderlyingFactor_117);
    UnderlyingInstrument_117.insert(UnderlyingFactor_117.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_117(2022300612);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_117);
    UnderlyingInstrument_117.insert(UnderlyingFlowScheduleType_117.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_117("STRING_1737327443");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_117);
    UnderlyingInstrument_117.insert(UnderlyingInstrRegistry_117.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_117("LOCALMKTDATE_709311749");
    noUnderlyings_0_0.set(UnderlyingIssueDate_117);
    UnderlyingInstrument_117.insert(UnderlyingIssueDate_117.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_117("STRING_691772476");
    noUnderlyings_0_0.set(UnderlyingIssuer_117);
    UnderlyingInstrument_117.insert(UnderlyingIssuer_117.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_117("STRING_1102936632");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingLocaleOfIssue_117.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_117("LOCALMKTDATE_175582441");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityDate_117.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_117("MONTHYEAR_187210831");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityMonthYear_117.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_117("TZTIMEONLY_2119927649");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityTime_117.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_117;
    UnderlyingNotionalPercentageOutstanding_117.setString("84.990000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_117);
    UnderlyingInstrument_117.insert(UnderlyingNotionalPercentageOutstanding_117.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_117('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_117);
    UnderlyingInstrument_117.insert(UnderlyingOptAttribute_117.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_117;
    UnderlyingOriginalNotionalPercentageOutstanding_117.setString("76.000000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_117);
    UnderlyingInstrument_117.insert(UnderlyingOriginalNotionalPercentageOutstanding_117.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_117("STRING_383454023");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_117);
    UnderlyingInstrument_117.insert(UnderlyingPriceUnitOfMeasure_117.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_117;
    UnderlyingPriceUnitOfMeasureQty_117.setString("10516158");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_117);
    UnderlyingInstrument_117.insert(UnderlyingPriceUnitOfMeasureQty_117.getString());
    FIX::UnderlyingProduct UnderlyingProduct_117(1467293332);
    noUnderlyings_0_0.set(UnderlyingProduct_117);
    UnderlyingInstrument_117.insert(UnderlyingProduct_117.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_117(2054808121);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_117);
    UnderlyingInstrument_117.insert(UnderlyingPutOrCall_117.getString());
    FIX::UnderlyingPx UnderlyingPx_117;
    UnderlyingPx_117.setString("11124673");
    noUnderlyings_0_0.set(UnderlyingPx_117);
    UnderlyingInstrument_117.insert(UnderlyingPx_117.getString());
    FIX::UnderlyingQty UnderlyingQty_117;
    UnderlyingQty_117.setString("922107");
    noUnderlyings_0_0.set(UnderlyingQty_117);
    UnderlyingInstrument_117.insert(UnderlyingQty_117.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_117("LOCALMKTDATE_1063324686");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_117);
    UnderlyingInstrument_117.insert(UnderlyingRedemptionDate_117.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_117("STRING_836376835");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_117);
    UnderlyingInstrument_117.insert(UnderlyingRepoCollateralSecurityType_117.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_117;
    UnderlyingRepurchaseRate_117.setString("29.130000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_117);
    UnderlyingInstrument_117.insert(UnderlyingRepurchaseRate_117.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_117(1911782703);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_117);
    UnderlyingInstrument_117.insert(UnderlyingRepurchaseTerm_117.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_117("STRING_665010132");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_117);
    UnderlyingInstrument_117.insert(UnderlyingRestructuringType_117.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_117("STRING_1356590564");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityDesc_117.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_117("EXCHANGE_619713845");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityExchange_117.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_117("STRING_1241803147");
    noUnderlyings_0_0.set(UnderlyingSecurityID_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityID_117.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_117("STRING_2058113936");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityIDSource_117.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_117("STRING_2071197002");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_117);
    UnderlyingInstrument_117.insert(UnderlyingSecuritySubType_117.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_117("STRING_1717813445");
    noUnderlyings_0_0.set(UnderlyingSecurityType_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityType_117.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_117("STRING_425662636");
    noUnderlyings_0_0.set(UnderlyingSeniority_117);
    UnderlyingInstrument_117.insert(UnderlyingSeniority_117.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_117("STRING_271203788");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_117);
    UnderlyingInstrument_117.insert(UnderlyingSettlMethod_117.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_117(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_117);
    UnderlyingInstrument_117.insert(UnderlyingSettlementType_117.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_117;
    UnderlyingStartValue_117.setString("3004796");
    noUnderlyings_0_0.set(UnderlyingStartValue_117);
    UnderlyingInstrument_117.insert(UnderlyingStartValue_117.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_117("STRING_2008531231");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingStateOrProvinceOfIssue_117.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_117("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_117);
    UnderlyingInstrument_117.insert(UnderlyingStrikeCurrency_117.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_117;
    UnderlyingStrikePrice_117.setString("9639842");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_117);
    UnderlyingInstrument_117.insert(UnderlyingStrikePrice_117.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_117("STRING_1505686833");
    noUnderlyings_0_0.set(UnderlyingSymbol_117);
    UnderlyingInstrument_117.insert(UnderlyingSymbol_117.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_117("STRING_1179462908");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_117);
    UnderlyingInstrument_117.insert(UnderlyingSymbolSfx_117.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_117("STRING_936428216");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_117);
    UnderlyingInstrument_117.insert(UnderlyingTimeUnit_117.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_117("STRING_1813015332");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_117);
    UnderlyingInstrument_117.insert(UnderlyingUnitOfMeasure_117.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_117;
    UnderlyingUnitOfMeasureQty_117.setString("13296886");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_117);
    UnderlyingInstrument_117.insert(UnderlyingUnitOfMeasureQty_117.getString());
    all_values.push_back(UnderlyingInstrument_117);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_235;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_235("STRING_48985707");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_235);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_235.insert(UnderlyingSecurityAltID_235.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_235("STRING_233820855");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_235);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_235.insert(UnderlyingSecurityAltIDSource_235.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_236;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_236("STRING_1501275500");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_236);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_236.insert(UnderlyingSecurityAltID_236.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_236("STRING_2103793828");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_236);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_236.insert(UnderlyingSecurityAltIDSource_236.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_222;
      FIX::UnderlyingStipType UnderlyingStipType_222("STRING_1593486266");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_222);
      UnderlyingStipulations_NoUnderlyingStips_222.insert(UnderlyingStipType_222.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_222("STRING_1019634867");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_222);
      UnderlyingStipulations_NoUnderlyingStips_222.insert(UnderlyingStipValue_222.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_222);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_223;
      FIX::UnderlyingStipType UnderlyingStipType_223("STRING_35181405");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_223);
      UnderlyingStipulations_NoUnderlyingStips_223.insert(UnderlyingStipType_223.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_223("STRING_1944039179");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_223);
      UnderlyingStipulations_NoUnderlyingStips_223.insert(UnderlyingStipValue_223.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_223);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_236;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_236("STRING_700191538");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyID_236.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_236('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyIDSource_236.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_236(1403647767);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyRole_236.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_236);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_461("STRING_1063776383");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_461);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461.insert(UnderlyingInstrumentPartySubID_461.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_461(1327361122);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_461);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461.insert(UnderlyingInstrumentPartySubIDType_461.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_462("STRING_1512324482");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_462);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462.insert(UnderlyingInstrumentPartySubID_462.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_462(1489439019);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_462);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462.insert(UnderlyingInstrumentPartySubIDType_462.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_463("STRING_1598564910");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_463);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463.insert(UnderlyingInstrumentPartySubID_463.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_463(2133117125);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_463);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463.insert(UnderlyingInstrumentPartySubIDType_463.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_237;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_237("STRING_1789918620");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyID_237.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_237('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyIDSource_237.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_237(1315737869);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyRole_237.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_237);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_464("STRING_276113060");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_464);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464.insert(UnderlyingInstrumentPartySubID_464.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_464(673941054);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_464);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464.insert(UnderlyingInstrumentPartySubIDType_464.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_465("STRING_1814149957");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_465);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465.insert(UnderlyingInstrumentPartySubID_465.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_465(1212541276);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_465);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465.insert(UnderlyingInstrumentPartySubIDType_465.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_466("STRING_339472738");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_466);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466.insert(UnderlyingInstrumentPartySubID_466.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_466(996354951);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_466);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466.insert(UnderlyingInstrumentPartySubIDType_466.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_118;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_118("DATA_1246523444");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingIssuer_118.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_118(388458446);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingIssuerLen_118.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_118("DATA_1230175806");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingSecurityDesc_118.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_118(600315297);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_118);
    UnderlyingInstrument_118.insert(EncodedUnderlyingSecurityDescLen_118.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_118;
    UnderlyingAdjustedQuantity_118.setString("3447686");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_118);
    UnderlyingInstrument_118.insert(UnderlyingAdjustedQuantity_118.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_118;
    UnderlyingAllocationPercent_118.setString("3.760000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_118);
    UnderlyingInstrument_118.insert(UnderlyingAllocationPercent_118.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_118;
    UnderlyingAttachmentPoint_118.setString("79.150000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_118);
    UnderlyingInstrument_118.insert(UnderlyingAttachmentPoint_118.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_118("STRING_1364403493");
    noUnderlyings_0_1.set(UnderlyingCFICode_118);
    UnderlyingInstrument_118.insert(UnderlyingCFICode_118.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_118("STRING_464161782");
    noUnderlyings_0_1.set(UnderlyingCPProgram_118);
    UnderlyingInstrument_118.insert(UnderlyingCPProgram_118.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_118("STRING_1990357095");
    noUnderlyings_0_1.set(UnderlyingCPRegType_118);
    UnderlyingInstrument_118.insert(UnderlyingCPRegType_118.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_118;
    UnderlyingCapValue_118.setString("8537");
    noUnderlyings_0_1.set(UnderlyingCapValue_118);
    UnderlyingInstrument_118.insert(UnderlyingCapValue_118.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_118;
    UnderlyingCashAmount_118.setString("11643533");
    noUnderlyings_0_1.set(UnderlyingCashAmount_118);
    UnderlyingInstrument_118.insert(UnderlyingCashAmount_118.getString());
    FIX::UnderlyingCashType UnderlyingCashType_118("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_118);
    UnderlyingInstrument_118.insert(UnderlyingCashType_118.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_118;
    UnderlyingContractMultiplier_118.setString("14045015");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_118);
    UnderlyingInstrument_118.insert(UnderlyingContractMultiplier_118.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_118(958864357);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_118);
    UnderlyingInstrument_118.insert(UnderlyingContractMultiplierUnit_118.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_118("COUNTRY_2059795926");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingCountryOfIssue_118.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_118("LOCALMKTDATE_584379009");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_118);
    UnderlyingInstrument_118.insert(UnderlyingCouponPaymentDate_118.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_118;
    UnderlyingCouponRate_118.setString("51.910000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_118);
    UnderlyingInstrument_118.insert(UnderlyingCouponRate_118.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_118("STRING_1401751297");
    noUnderlyings_0_1.set(UnderlyingCreditRating_118);
    UnderlyingInstrument_118.insert(UnderlyingCreditRating_118.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_118("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_118);
    UnderlyingInstrument_118.insert(UnderlyingCurrency_118.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_118;
    UnderlyingCurrentValue_118.setString("10441862");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_118);
    UnderlyingInstrument_118.insert(UnderlyingCurrentValue_118.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_118;
    UnderlyingDetachmentPoint_118.setString("27.640000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_118);
    UnderlyingInstrument_118.insert(UnderlyingDetachmentPoint_118.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_118;
    UnderlyingDirtyPrice_118.setString("16250765");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_118);
    UnderlyingInstrument_118.insert(UnderlyingDirtyPrice_118.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_118;
    UnderlyingEndPrice_118.setString("16788733");
    noUnderlyings_0_1.set(UnderlyingEndPrice_118);
    UnderlyingInstrument_118.insert(UnderlyingEndPrice_118.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_118;
    UnderlyingEndValue_118.setString("17711858");
    noUnderlyings_0_1.set(UnderlyingEndValue_118);
    UnderlyingInstrument_118.insert(UnderlyingEndValue_118.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_118(151533945);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_118);
    UnderlyingInstrument_118.insert(UnderlyingExerciseStyle_118.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_118;
    UnderlyingFXRate_118.setString("13455396");
    noUnderlyings_0_1.set(UnderlyingFXRate_118);
    UnderlyingInstrument_118.insert(UnderlyingFXRate_118.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_118('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_118);
    UnderlyingInstrument_118.insert(UnderlyingFXRateCalc_118.getString());
    FIX::UnderlyingFactor UnderlyingFactor_118;
    UnderlyingFactor_118.setString("4910066");
    noUnderlyings_0_1.set(UnderlyingFactor_118);
    UnderlyingInstrument_118.insert(UnderlyingFactor_118.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_118(194410930);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_118);
    UnderlyingInstrument_118.insert(UnderlyingFlowScheduleType_118.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_118("STRING_2082766896");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_118);
    UnderlyingInstrument_118.insert(UnderlyingInstrRegistry_118.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_118("LOCALMKTDATE_879465129");
    noUnderlyings_0_1.set(UnderlyingIssueDate_118);
    UnderlyingInstrument_118.insert(UnderlyingIssueDate_118.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_118("STRING_1424586736");
    noUnderlyings_0_1.set(UnderlyingIssuer_118);
    UnderlyingInstrument_118.insert(UnderlyingIssuer_118.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_118("STRING_535598545");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingLocaleOfIssue_118.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_118("LOCALMKTDATE_1224233756");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityDate_118.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_118("MONTHYEAR_1853567113");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityMonthYear_118.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_118("TZTIMEONLY_581916461");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_118);
    UnderlyingInstrument_118.insert(UnderlyingMaturityTime_118.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_118;
    UnderlyingNotionalPercentageOutstanding_118.setString("36.010000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_118);
    UnderlyingInstrument_118.insert(UnderlyingNotionalPercentageOutstanding_118.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_118('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_118);
    UnderlyingInstrument_118.insert(UnderlyingOptAttribute_118.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_118;
    UnderlyingOriginalNotionalPercentageOutstanding_118.setString("99.080000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_118);
    UnderlyingInstrument_118.insert(UnderlyingOriginalNotionalPercentageOutstanding_118.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_118("STRING_442007369");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_118);
    UnderlyingInstrument_118.insert(UnderlyingPriceUnitOfMeasure_118.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_118;
    UnderlyingPriceUnitOfMeasureQty_118.setString("13345985");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_118);
    UnderlyingInstrument_118.insert(UnderlyingPriceUnitOfMeasureQty_118.getString());
    FIX::UnderlyingProduct UnderlyingProduct_118(1420809450);
    noUnderlyings_0_1.set(UnderlyingProduct_118);
    UnderlyingInstrument_118.insert(UnderlyingProduct_118.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_118(1846508904);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_118);
    UnderlyingInstrument_118.insert(UnderlyingPutOrCall_118.getString());
    FIX::UnderlyingPx UnderlyingPx_118;
    UnderlyingPx_118.setString("1459792");
    noUnderlyings_0_1.set(UnderlyingPx_118);
    UnderlyingInstrument_118.insert(UnderlyingPx_118.getString());
    FIX::UnderlyingQty UnderlyingQty_118;
    UnderlyingQty_118.setString("13331217");
    noUnderlyings_0_1.set(UnderlyingQty_118);
    UnderlyingInstrument_118.insert(UnderlyingQty_118.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_118("LOCALMKTDATE_283404265");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_118);
    UnderlyingInstrument_118.insert(UnderlyingRedemptionDate_118.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_118("STRING_469684467");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_118);
    UnderlyingInstrument_118.insert(UnderlyingRepoCollateralSecurityType_118.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_118;
    UnderlyingRepurchaseRate_118.setString("93.780000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_118);
    UnderlyingInstrument_118.insert(UnderlyingRepurchaseRate_118.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_118(318864536);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_118);
    UnderlyingInstrument_118.insert(UnderlyingRepurchaseTerm_118.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_118("STRING_779023136");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_118);
    UnderlyingInstrument_118.insert(UnderlyingRestructuringType_118.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_118("STRING_1631575647");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityDesc_118.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_118("EXCHANGE_1813937300");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityExchange_118.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_118("STRING_256616027");
    noUnderlyings_0_1.set(UnderlyingSecurityID_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityID_118.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_118("STRING_1162965318");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityIDSource_118.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_118("STRING_1437639476");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_118);
    UnderlyingInstrument_118.insert(UnderlyingSecuritySubType_118.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_118("STRING_408149972");
    noUnderlyings_0_1.set(UnderlyingSecurityType_118);
    UnderlyingInstrument_118.insert(UnderlyingSecurityType_118.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_118("STRING_361021297");
    noUnderlyings_0_1.set(UnderlyingSeniority_118);
    UnderlyingInstrument_118.insert(UnderlyingSeniority_118.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_118("STRING_126399280");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_118);
    UnderlyingInstrument_118.insert(UnderlyingSettlMethod_118.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_118(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_118);
    UnderlyingInstrument_118.insert(UnderlyingSettlementType_118.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_118;
    UnderlyingStartValue_118.setString("5554322");
    noUnderlyings_0_1.set(UnderlyingStartValue_118);
    UnderlyingInstrument_118.insert(UnderlyingStartValue_118.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_118("STRING_61682528");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_118);
    UnderlyingInstrument_118.insert(UnderlyingStateOrProvinceOfIssue_118.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_118("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_118);
    UnderlyingInstrument_118.insert(UnderlyingStrikeCurrency_118.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_118;
    UnderlyingStrikePrice_118.setString("5972810");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_118);
    UnderlyingInstrument_118.insert(UnderlyingStrikePrice_118.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_118("STRING_855371893");
    noUnderlyings_0_1.set(UnderlyingSymbol_118);
    UnderlyingInstrument_118.insert(UnderlyingSymbol_118.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_118("STRING_1686102429");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_118);
    UnderlyingInstrument_118.insert(UnderlyingSymbolSfx_118.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_118("STRING_1179197535");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_118);
    UnderlyingInstrument_118.insert(UnderlyingTimeUnit_118.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_118("STRING_1296525494");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_118);
    UnderlyingInstrument_118.insert(UnderlyingUnitOfMeasure_118.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_118;
    UnderlyingUnitOfMeasureQty_118.setString("18563476");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_118);
    UnderlyingInstrument_118.insert(UnderlyingUnitOfMeasureQty_118.getString());
    all_values.push_back(UnderlyingInstrument_118);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_237;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_237("STRING_1738532863");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_237);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_237.insert(UnderlyingSecurityAltID_237.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_237("STRING_1043462595");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_237);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_237.insert(UnderlyingSecurityAltIDSource_237.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_224;
      FIX::UnderlyingStipType UnderlyingStipType_224("STRING_1437558119");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_224);
      UnderlyingStipulations_NoUnderlyingStips_224.insert(UnderlyingStipType_224.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_224("STRING_1189441871");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_224);
      UnderlyingStipulations_NoUnderlyingStips_224.insert(UnderlyingStipValue_224.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_224);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_225;
      FIX::UnderlyingStipType UnderlyingStipType_225("STRING_62951326");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_225);
      UnderlyingStipulations_NoUnderlyingStips_225.insert(UnderlyingStipType_225.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_225("STRING_1720962384");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_225);
      UnderlyingStipulations_NoUnderlyingStips_225.insert(UnderlyingStipValue_225.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_225);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_238;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_238("STRING_650340704");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyID_238.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_238('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyIDSource_238.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_238(290665827);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyRole_238.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_238);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_467("STRING_1706280572");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_467);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467.insert(UnderlyingInstrumentPartySubID_467.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_467(547281854);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_467);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467.insert(UnderlyingInstrumentPartySubIDType_467.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::RequestForPositions::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_119;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_119("DATA_1297398021");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingIssuer_119.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_119(996436400);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingIssuerLen_119.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_119("DATA_955431826");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingSecurityDesc_119.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_119(1658419319);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_119);
    UnderlyingInstrument_119.insert(EncodedUnderlyingSecurityDescLen_119.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_119;
    UnderlyingAdjustedQuantity_119.setString("11228356");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_119);
    UnderlyingInstrument_119.insert(UnderlyingAdjustedQuantity_119.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_119;
    UnderlyingAllocationPercent_119.setString("84.820000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_119);
    UnderlyingInstrument_119.insert(UnderlyingAllocationPercent_119.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_119;
    UnderlyingAttachmentPoint_119.setString("78.990000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_119);
    UnderlyingInstrument_119.insert(UnderlyingAttachmentPoint_119.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_119("STRING_1184518209");
    noUnderlyings_0_2.set(UnderlyingCFICode_119);
    UnderlyingInstrument_119.insert(UnderlyingCFICode_119.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_119("STRING_1485726619");
    noUnderlyings_0_2.set(UnderlyingCPProgram_119);
    UnderlyingInstrument_119.insert(UnderlyingCPProgram_119.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_119("STRING_2046386863");
    noUnderlyings_0_2.set(UnderlyingCPRegType_119);
    UnderlyingInstrument_119.insert(UnderlyingCPRegType_119.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_119;
    UnderlyingCapValue_119.setString("17817992");
    noUnderlyings_0_2.set(UnderlyingCapValue_119);
    UnderlyingInstrument_119.insert(UnderlyingCapValue_119.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_119;
    UnderlyingCashAmount_119.setString("1936148");
    noUnderlyings_0_2.set(UnderlyingCashAmount_119);
    UnderlyingInstrument_119.insert(UnderlyingCashAmount_119.getString());
    FIX::UnderlyingCashType UnderlyingCashType_119("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_119);
    UnderlyingInstrument_119.insert(UnderlyingCashType_119.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_119;
    UnderlyingContractMultiplier_119.setString("8135131");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_119);
    UnderlyingInstrument_119.insert(UnderlyingContractMultiplier_119.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_119(1490140358);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_119);
    UnderlyingInstrument_119.insert(UnderlyingContractMultiplierUnit_119.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_119("COUNTRY_1293869673");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingCountryOfIssue_119.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_119("LOCALMKTDATE_270016965");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_119);
    UnderlyingInstrument_119.insert(UnderlyingCouponPaymentDate_119.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_119;
    UnderlyingCouponRate_119.setString("95.740000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_119);
    UnderlyingInstrument_119.insert(UnderlyingCouponRate_119.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_119("STRING_189848621");
    noUnderlyings_0_2.set(UnderlyingCreditRating_119);
    UnderlyingInstrument_119.insert(UnderlyingCreditRating_119.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_119("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_119);
    UnderlyingInstrument_119.insert(UnderlyingCurrency_119.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_119;
    UnderlyingCurrentValue_119.setString("13792904");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_119);
    UnderlyingInstrument_119.insert(UnderlyingCurrentValue_119.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_119;
    UnderlyingDetachmentPoint_119.setString("15.360000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_119);
    UnderlyingInstrument_119.insert(UnderlyingDetachmentPoint_119.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_119;
    UnderlyingDirtyPrice_119.setString("20922264");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_119);
    UnderlyingInstrument_119.insert(UnderlyingDirtyPrice_119.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_119;
    UnderlyingEndPrice_119.setString("8909331");
    noUnderlyings_0_2.set(UnderlyingEndPrice_119);
    UnderlyingInstrument_119.insert(UnderlyingEndPrice_119.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_119;
    UnderlyingEndValue_119.setString("18606222");
    noUnderlyings_0_2.set(UnderlyingEndValue_119);
    UnderlyingInstrument_119.insert(UnderlyingEndValue_119.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_119(1984569702);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_119);
    UnderlyingInstrument_119.insert(UnderlyingExerciseStyle_119.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_119;
    UnderlyingFXRate_119.setString("11815990");
    noUnderlyings_0_2.set(UnderlyingFXRate_119);
    UnderlyingInstrument_119.insert(UnderlyingFXRate_119.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_119('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_119);
    UnderlyingInstrument_119.insert(UnderlyingFXRateCalc_119.getString());
    FIX::UnderlyingFactor UnderlyingFactor_119;
    UnderlyingFactor_119.setString("15433666");
    noUnderlyings_0_2.set(UnderlyingFactor_119);
    UnderlyingInstrument_119.insert(UnderlyingFactor_119.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_119(1728880865);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_119);
    UnderlyingInstrument_119.insert(UnderlyingFlowScheduleType_119.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_119("STRING_1144969317");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_119);
    UnderlyingInstrument_119.insert(UnderlyingInstrRegistry_119.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_119("LOCALMKTDATE_392319379");
    noUnderlyings_0_2.set(UnderlyingIssueDate_119);
    UnderlyingInstrument_119.insert(UnderlyingIssueDate_119.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_119("STRING_536829044");
    noUnderlyings_0_2.set(UnderlyingIssuer_119);
    UnderlyingInstrument_119.insert(UnderlyingIssuer_119.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_119("STRING_655904988");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingLocaleOfIssue_119.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_119("LOCALMKTDATE_1515155060");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityDate_119.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_119("MONTHYEAR_243933878");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityMonthYear_119.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_119("TZTIMEONLY_722272887");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_119);
    UnderlyingInstrument_119.insert(UnderlyingMaturityTime_119.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_119;
    UnderlyingNotionalPercentageOutstanding_119.setString("96.210000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_119);
    UnderlyingInstrument_119.insert(UnderlyingNotionalPercentageOutstanding_119.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_119('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_119);
    UnderlyingInstrument_119.insert(UnderlyingOptAttribute_119.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_119;
    UnderlyingOriginalNotionalPercentageOutstanding_119.setString("61.030000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_119);
    UnderlyingInstrument_119.insert(UnderlyingOriginalNotionalPercentageOutstanding_119.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_119("STRING_186505256");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_119);
    UnderlyingInstrument_119.insert(UnderlyingPriceUnitOfMeasure_119.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_119;
    UnderlyingPriceUnitOfMeasureQty_119.setString("19232753");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_119);
    UnderlyingInstrument_119.insert(UnderlyingPriceUnitOfMeasureQty_119.getString());
    FIX::UnderlyingProduct UnderlyingProduct_119(58698100);
    noUnderlyings_0_2.set(UnderlyingProduct_119);
    UnderlyingInstrument_119.insert(UnderlyingProduct_119.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_119(1000018426);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_119);
    UnderlyingInstrument_119.insert(UnderlyingPutOrCall_119.getString());
    FIX::UnderlyingPx UnderlyingPx_119;
    UnderlyingPx_119.setString("12659320");
    noUnderlyings_0_2.set(UnderlyingPx_119);
    UnderlyingInstrument_119.insert(UnderlyingPx_119.getString());
    FIX::UnderlyingQty UnderlyingQty_119;
    UnderlyingQty_119.setString("13525677");
    noUnderlyings_0_2.set(UnderlyingQty_119);
    UnderlyingInstrument_119.insert(UnderlyingQty_119.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_119("LOCALMKTDATE_1270035391");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_119);
    UnderlyingInstrument_119.insert(UnderlyingRedemptionDate_119.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_119("STRING_199637997");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_119);
    UnderlyingInstrument_119.insert(UnderlyingRepoCollateralSecurityType_119.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_119;
    UnderlyingRepurchaseRate_119.setString("63.940000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_119);
    UnderlyingInstrument_119.insert(UnderlyingRepurchaseRate_119.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_119(269881953);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_119);
    UnderlyingInstrument_119.insert(UnderlyingRepurchaseTerm_119.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_119("STRING_570902043");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_119);
    UnderlyingInstrument_119.insert(UnderlyingRestructuringType_119.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_119("STRING_774223239");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityDesc_119.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_119("EXCHANGE_1480163490");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityExchange_119.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_119("STRING_515644825");
    noUnderlyings_0_2.set(UnderlyingSecurityID_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityID_119.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_119("STRING_1665156422");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityIDSource_119.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_119("STRING_1193302082");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_119);
    UnderlyingInstrument_119.insert(UnderlyingSecuritySubType_119.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_119("STRING_352730879");
    noUnderlyings_0_2.set(UnderlyingSecurityType_119);
    UnderlyingInstrument_119.insert(UnderlyingSecurityType_119.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_119("STRING_699271785");
    noUnderlyings_0_2.set(UnderlyingSeniority_119);
    UnderlyingInstrument_119.insert(UnderlyingSeniority_119.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_119("STRING_1040873378");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_119);
    UnderlyingInstrument_119.insert(UnderlyingSettlMethod_119.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_119(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_119);
    UnderlyingInstrument_119.insert(UnderlyingSettlementType_119.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_119;
    UnderlyingStartValue_119.setString("2806690");
    noUnderlyings_0_2.set(UnderlyingStartValue_119);
    UnderlyingInstrument_119.insert(UnderlyingStartValue_119.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_119("STRING_38359048");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_119);
    UnderlyingInstrument_119.insert(UnderlyingStateOrProvinceOfIssue_119.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_119("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_119);
    UnderlyingInstrument_119.insert(UnderlyingStrikeCurrency_119.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_119;
    UnderlyingStrikePrice_119.setString("6942640");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_119);
    UnderlyingInstrument_119.insert(UnderlyingStrikePrice_119.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_119("STRING_1656088298");
    noUnderlyings_0_2.set(UnderlyingSymbol_119);
    UnderlyingInstrument_119.insert(UnderlyingSymbol_119.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_119("STRING_1061431925");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_119);
    UnderlyingInstrument_119.insert(UnderlyingSymbolSfx_119.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_119("STRING_1416536924");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_119);
    UnderlyingInstrument_119.insert(UnderlyingTimeUnit_119.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_119("STRING_60794271");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_119);
    UnderlyingInstrument_119.insert(UnderlyingUnitOfMeasure_119.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_119;
    UnderlyingUnitOfMeasureQty_119.setString("6436087");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_119);
    UnderlyingInstrument_119.insert(UnderlyingUnitOfMeasureQty_119.getString());
    all_values.push_back(UnderlyingInstrument_119);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_238;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_238("STRING_247299527");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_238);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_238.insert(UnderlyingSecurityAltID_238.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_238("STRING_419400487");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_238);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_238.insert(UnderlyingSecurityAltIDSource_238.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_239;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_239("STRING_2096411127");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_239);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_239.insert(UnderlyingSecurityAltID_239.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_239("STRING_1247317953");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_239);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_239.insert(UnderlyingSecurityAltIDSource_239.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_240;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_240("STRING_1685332558");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_240);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_240.insert(UnderlyingSecurityAltID_240.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_240("STRING_1301495252");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_240);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_240.insert(UnderlyingSecurityAltIDSource_240.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_226;
      FIX::UnderlyingStipType UnderlyingStipType_226("STRING_1884970556");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_226);
      UnderlyingStipulations_NoUnderlyingStips_226.insert(UnderlyingStipType_226.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_226("STRING_696427999");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_226);
      UnderlyingStipulations_NoUnderlyingStips_226.insert(UnderlyingStipValue_226.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_226);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_227;
      FIX::UnderlyingStipType UnderlyingStipType_227("STRING_639751649");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_227);
      UnderlyingStipulations_NoUnderlyingStips_227.insert(UnderlyingStipType_227.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_227("STRING_308388951");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_227);
      UnderlyingStipulations_NoUnderlyingStips_227.insert(UnderlyingStipValue_227.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_227);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_228;
      FIX::UnderlyingStipType UnderlyingStipType_228("STRING_1470651238");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_228);
      UnderlyingStipulations_NoUnderlyingStips_228.insert(UnderlyingStipType_228.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_228("STRING_2119915139");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_228);
      UnderlyingStipulations_NoUnderlyingStips_228.insert(UnderlyingStipValue_228.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_228);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_239;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_239("STRING_988324012");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyID_239.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_239('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyIDSource_239.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_239(1176764655);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_239);
      UndlyInstrumentParties_NoUndlyInstrumentParties_239.insert(UnderlyingInstrumentPartyRole_239.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_239);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_468("STRING_59123304");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_468);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468.insert(UnderlyingInstrumentPartySubID_468.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_468(925378514);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_468);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468.insert(UnderlyingInstrumentPartySubIDType_468.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_469("STRING_1968264801");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_469);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469.insert(UnderlyingInstrumentPartySubID_469.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_469(97482352);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_469);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469.insert(UnderlyingInstrumentPartySubIDType_469.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_470("STRING_1066311752");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_470);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470.insert(UnderlyingInstrumentPartySubID_470.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_470(638279200);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_470);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470.insert(UnderlyingInstrumentPartySubIDType_470.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_240;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_240("STRING_791746389");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyID_240.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_240('5');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyIDSource_240.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_240(1699711125);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_240);
      UndlyInstrumentParties_NoUndlyInstrumentParties_240.insert(UnderlyingInstrumentPartyRole_240.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_240);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositions::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_471("STRING_635710673");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_471);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471.insert(UnderlyingInstrumentPartySubID_471.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_471(195836251);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_471);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471.insert(UnderlyingInstrumentPartySubIDType_471.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
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
