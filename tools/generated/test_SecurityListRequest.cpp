#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityListRequest_0;
  FIX::Currency Currency_57("USD");
  msg.set(Currency_57);
  SecurityListRequest_0.insert(Currency_57.getString());
  FIX::EncodedText EncodedText_81("DATA_2006885146");
  msg.set(EncodedText_81);
  SecurityListRequest_0.insert(EncodedText_81.getString());
  FIX::EncodedTextLen EncodedTextLen_81(1571373268);
  msg.set(EncodedTextLen_81);
  SecurityListRequest_0.insert(EncodedTextLen_81.getString());
  FIX::MarketID MarketID_22("EXCHANGE_1980107145");
  msg.set(MarketID_22);
  SecurityListRequest_0.insert(MarketID_22.getString());
  FIX::MarketSegmentID MarketSegmentID_22("STRING_1261109648");
  msg.set(MarketSegmentID_22);
  SecurityListRequest_0.insert(MarketSegmentID_22.getString());
  FIX::SecurityListID SecurityListID_1("STRING_828953497");
  msg.set(SecurityListID_1);
  SecurityListRequest_0.insert(SecurityListID_1.getString());
  FIX::SecurityListRequestType SecurityListRequestType_1(1);
  msg.set(SecurityListRequestType_1);
  SecurityListRequest_0.insert(SecurityListRequestType_1.getString());
  FIX::SecurityListType SecurityListType_1(2);
  msg.set(SecurityListType_1);
  SecurityListRequest_0.insert(SecurityListType_1.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_1(1);
  msg.set(SecurityListTypeSource_1);
  SecurityListRequest_0.insert(SecurityListTypeSource_1.getString());
  FIX::SecurityReqID SecurityReqID_7("STRING_291032544");
  msg.set(SecurityReqID_7);
  SecurityListRequest_0.insert(SecurityReqID_7.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_10('0');
  msg.set(SubscriptionRequestType_10);
  SecurityListRequest_0.insert(SubscriptionRequestType_10.getString());
  FIX::Text Text_81("STRING_1001220665");
  msg.set(Text_81);
  SecurityListRequest_0.insert(Text_81.getString());
  FIX::TradingSessionID TradingSessionID_87("STRING_6");
  msg.set(TradingSessionID_87);
  SecurityListRequest_0.insert(TradingSessionID_87.getString());
  FIX::TradingSessionSubID TradingSessionSubID_87("STRING_6");
  msg.set(TradingSessionSubID_87);
  SecurityListRequest_0.insert(TradingSessionSubID_87.getString());
  all_values.push_back(SecurityListRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_27;
  FIX::AgreementCurrency AgreementCurrency_27("USD");
  msg.set(AgreementCurrency_27);
  FinancingDetails_27.insert(AgreementCurrency_27.getString());
  FIX::AgreementDate AgreementDate_27("LOCALMKTDATE_839768924");
  msg.set(AgreementDate_27);
  FinancingDetails_27.insert(AgreementDate_27.getString());
  FIX::AgreementDesc AgreementDesc_27("STRING_1869603112");
  msg.set(AgreementDesc_27);
  FinancingDetails_27.insert(AgreementDesc_27.getString());
  FIX::AgreementID AgreementID_27("STRING_571999737");
  msg.set(AgreementID_27);
  FinancingDetails_27.insert(AgreementID_27.getString());
  FIX::DeliveryType DeliveryType_27(3);
  msg.set(DeliveryType_27);
  FinancingDetails_27.insert(DeliveryType_27.getString());
  FIX::EndDate EndDate_27("LOCALMKTDATE_2139456097");
  msg.set(EndDate_27);
  FinancingDetails_27.insert(EndDate_27.getString());
  FIX::MarginRatio MarginRatio_27;
  MarginRatio_27.setString("41.650000");
  msg.set(MarginRatio_27);
  FinancingDetails_27.insert(MarginRatio_27.getString());
  FIX::StartDate StartDate_27("LOCALMKTDATE_1341970349");
  msg.set(StartDate_27);
  FinancingDetails_27.insert(StartDate_27.getString());
  FIX::TerminationType TerminationType_27(2);
  msg.set(TerminationType_27);
  FinancingDetails_27.insert(TerminationType_27.getString());
  all_values.push_back(FinancingDetails_27);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_106;
    FIX::EncodedLegIssuer EncodedLegIssuer_106("DATA_619582875");
    noLegs_0_0.set(EncodedLegIssuer_106);
    InstrumentLeg_106.insert(EncodedLegIssuer_106.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_106(298355467);
    noLegs_0_0.set(EncodedLegIssuerLen_106);
    InstrumentLeg_106.insert(EncodedLegIssuerLen_106.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_106("DATA_1608671411");
    noLegs_0_0.set(EncodedLegSecurityDesc_106);
    InstrumentLeg_106.insert(EncodedLegSecurityDesc_106.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_106(147297500);
    noLegs_0_0.set(EncodedLegSecurityDescLen_106);
    InstrumentLeg_106.insert(EncodedLegSecurityDescLen_106.getString());
    FIX::LegCFICode LegCFICode_106("STRING_1731246730");
    noLegs_0_0.set(LegCFICode_106);
    InstrumentLeg_106.insert(LegCFICode_106.getString());
    FIX::LegContractMultiplier LegContractMultiplier_106;
    LegContractMultiplier_106.setString("20526435");
    noLegs_0_0.set(LegContractMultiplier_106);
    InstrumentLeg_106.insert(LegContractMultiplier_106.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_106(1681615724);
    noLegs_0_0.set(LegContractMultiplierUnit_106);
    InstrumentLeg_106.insert(LegContractMultiplierUnit_106.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_106("MONTHYEAR_1590648229");
    noLegs_0_0.set(LegContractSettlMonth_106);
    InstrumentLeg_106.insert(LegContractSettlMonth_106.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_106("COUNTRY_1476533160");
    noLegs_0_0.set(LegCountryOfIssue_106);
    InstrumentLeg_106.insert(LegCountryOfIssue_106.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_106("LOCALMKTDATE_1514239222");
    noLegs_0_0.set(LegCouponPaymentDate_106);
    InstrumentLeg_106.insert(LegCouponPaymentDate_106.getString());
    FIX::LegCouponRate LegCouponRate_106;
    LegCouponRate_106.setString("42.290000");
    noLegs_0_0.set(LegCouponRate_106);
    InstrumentLeg_106.insert(LegCouponRate_106.getString());
    FIX::LegCreditRating LegCreditRating_106("STRING_158003010");
    noLegs_0_0.set(LegCreditRating_106);
    InstrumentLeg_106.insert(LegCreditRating_106.getString());
    FIX::LegCurrency LegCurrency_106("EUR");
    noLegs_0_0.set(LegCurrency_106);
    InstrumentLeg_106.insert(LegCurrency_106.getString());
    FIX::LegDatedDate LegDatedDate_106("LOCALMKTDATE_1383736689");
    noLegs_0_0.set(LegDatedDate_106);
    InstrumentLeg_106.insert(LegDatedDate_106.getString());
    FIX::LegExerciseStyle LegExerciseStyle_106(1576268847);
    noLegs_0_0.set(LegExerciseStyle_106);
    InstrumentLeg_106.insert(LegExerciseStyle_106.getString());
    FIX::LegFactor LegFactor_106;
    LegFactor_106.setString("8126639");
    noLegs_0_0.set(LegFactor_106);
    InstrumentLeg_106.insert(LegFactor_106.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_106(237473706);
    noLegs_0_0.set(LegFlowScheduleType_106);
    InstrumentLeg_106.insert(LegFlowScheduleType_106.getString());
    FIX::LegInstrRegistry LegInstrRegistry_106("STRING_1741453839");
    noLegs_0_0.set(LegInstrRegistry_106);
    InstrumentLeg_106.insert(LegInstrRegistry_106.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_106("LOCALMKTDATE_168293478");
    noLegs_0_0.set(LegInterestAccrualDate_106);
    InstrumentLeg_106.insert(LegInterestAccrualDate_106.getString());
    FIX::LegIssueDate LegIssueDate_106("LOCALMKTDATE_1369330862");
    noLegs_0_0.set(LegIssueDate_106);
    InstrumentLeg_106.insert(LegIssueDate_106.getString());
    FIX::LegIssuer LegIssuer_106("STRING_145408531");
    noLegs_0_0.set(LegIssuer_106);
    InstrumentLeg_106.insert(LegIssuer_106.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_106("STRING_1008062402");
    noLegs_0_0.set(LegLocaleOfIssue_106);
    InstrumentLeg_106.insert(LegLocaleOfIssue_106.getString());
    FIX::LegMaturityDate LegMaturityDate_106("LOCALMKTDATE_1091450326");
    noLegs_0_0.set(LegMaturityDate_106);
    InstrumentLeg_106.insert(LegMaturityDate_106.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_106("MONTHYEAR_717408268");
    noLegs_0_0.set(LegMaturityMonthYear_106);
    InstrumentLeg_106.insert(LegMaturityMonthYear_106.getString());
    FIX::LegMaturityTime LegMaturityTime_106("TZTIMEONLY_1701189421");
    noLegs_0_0.set(LegMaturityTime_106);
    InstrumentLeg_106.insert(LegMaturityTime_106.getString());
    FIX::LegOptAttribute LegOptAttribute_106('1');
    noLegs_0_0.set(LegOptAttribute_106);
    InstrumentLeg_106.insert(LegOptAttribute_106.getString());
    FIX::LegOptionRatio LegOptionRatio_106;
    LegOptionRatio_106.setString("13653724");
    noLegs_0_0.set(LegOptionRatio_106);
    InstrumentLeg_106.insert(LegOptionRatio_106.getString());
    FIX::LegPool LegPool_106("STRING_895676122");
    noLegs_0_0.set(LegPool_106);
    InstrumentLeg_106.insert(LegPool_106.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_106("STRING_1162614661");
    noLegs_0_0.set(LegPriceUnitOfMeasure_106);
    InstrumentLeg_106.insert(LegPriceUnitOfMeasure_106.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_106;
    LegPriceUnitOfMeasureQty_106.setString("1289562");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_106);
    InstrumentLeg_106.insert(LegPriceUnitOfMeasureQty_106.getString());
    FIX::LegProduct LegProduct_106(1515258997);
    noLegs_0_0.set(LegProduct_106);
    InstrumentLeg_106.insert(LegProduct_106.getString());
    FIX::LegPutOrCall LegPutOrCall_106(1460970128);
    noLegs_0_0.set(LegPutOrCall_106);
    InstrumentLeg_106.insert(LegPutOrCall_106.getString());
    FIX::LegRatioQty LegRatioQty_106;
    LegRatioQty_106.setString("17376276");
    noLegs_0_0.set(LegRatioQty_106);
    InstrumentLeg_106.insert(LegRatioQty_106.getString());
    FIX::LegRedemptionDate LegRedemptionDate_106("LOCALMKTDATE_1662556498");
    noLegs_0_0.set(LegRedemptionDate_106);
    InstrumentLeg_106.insert(LegRedemptionDate_106.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_106("STRING_1044733210");
    noLegs_0_0.set(LegRepoCollateralSecurityType_106);
    InstrumentLeg_106.insert(LegRepoCollateralSecurityType_106.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_106;
    LegRepurchaseRate_106.setString("75.770000");
    noLegs_0_0.set(LegRepurchaseRate_106);
    InstrumentLeg_106.insert(LegRepurchaseRate_106.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_106(1196688574);
    noLegs_0_0.set(LegRepurchaseTerm_106);
    InstrumentLeg_106.insert(LegRepurchaseTerm_106.getString());
    FIX::LegSecurityDesc LegSecurityDesc_106("STRING_487897791");
    noLegs_0_0.set(LegSecurityDesc_106);
    InstrumentLeg_106.insert(LegSecurityDesc_106.getString());
    FIX::LegSecurityExchange LegSecurityExchange_106("EXCHANGE_971837089");
    noLegs_0_0.set(LegSecurityExchange_106);
    InstrumentLeg_106.insert(LegSecurityExchange_106.getString());
    FIX::LegSecurityID LegSecurityID_106("STRING_563444148");
    noLegs_0_0.set(LegSecurityID_106);
    InstrumentLeg_106.insert(LegSecurityID_106.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_106("STRING_1192172021");
    noLegs_0_0.set(LegSecurityIDSource_106);
    InstrumentLeg_106.insert(LegSecurityIDSource_106.getString());
    FIX::LegSecuritySubType LegSecuritySubType_106("STRING_1129840099");
    noLegs_0_0.set(LegSecuritySubType_106);
    InstrumentLeg_106.insert(LegSecuritySubType_106.getString());
    FIX::LegSecurityType LegSecurityType_106("STRING_1848680452");
    noLegs_0_0.set(LegSecurityType_106);
    InstrumentLeg_106.insert(LegSecurityType_106.getString());
    FIX::LegSide LegSide_106('3');
    noLegs_0_0.set(LegSide_106);
    InstrumentLeg_106.insert(LegSide_106.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_106("STRING_366093140");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_106);
    InstrumentLeg_106.insert(LegStateOrProvinceOfIssue_106.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_106("USD");
    noLegs_0_0.set(LegStrikeCurrency_106);
    InstrumentLeg_106.insert(LegStrikeCurrency_106.getString());
    FIX::LegStrikePrice LegStrikePrice_106;
    LegStrikePrice_106.setString("6035668");
    noLegs_0_0.set(LegStrikePrice_106);
    InstrumentLeg_106.insert(LegStrikePrice_106.getString());
    FIX::LegSymbol LegSymbol_106("STRING_871435842");
    noLegs_0_0.set(LegSymbol_106);
    InstrumentLeg_106.insert(LegSymbol_106.getString());
    FIX::LegSymbolSfx LegSymbolSfx_106("STRING_1334150353");
    noLegs_0_0.set(LegSymbolSfx_106);
    InstrumentLeg_106.insert(LegSymbolSfx_106.getString());
    FIX::LegTimeUnit LegTimeUnit_106("STRING_1972897709");
    noLegs_0_0.set(LegTimeUnit_106);
    InstrumentLeg_106.insert(LegTimeUnit_106.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_106("STRING_1016844373");
    noLegs_0_0.set(LegUnitOfMeasure_106);
    InstrumentLeg_106.insert(LegUnitOfMeasure_106.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_106;
    LegUnitOfMeasureQty_106.setString("1947291");
    noLegs_0_0.set(LegUnitOfMeasureQty_106);
    InstrumentLeg_106.insert(LegUnitOfMeasureQty_106.getString());
    all_values.push_back(InstrumentLeg_106);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_188;
      FIX::LegSecurityAltID LegSecurityAltID_188("STRING_1734252641");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_188);
      LegSecAltIDGrp_NoLegSecurityAltID_188.insert(LegSecurityAltID_188.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_188("STRING_1895918529");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_188);
      LegSecAltIDGrp_NoLegSecurityAltID_188.insert(LegSecurityAltIDSource_188.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_188);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_189;
      FIX::LegSecurityAltID LegSecurityAltID_189("STRING_2000287162");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_189);
      LegSecAltIDGrp_NoLegSecurityAltID_189.insert(LegSecurityAltID_189.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_189("STRING_952141426");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_189);
      LegSecAltIDGrp_NoLegSecurityAltID_189.insert(LegSecurityAltIDSource_189.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_189);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_107;
    FIX::EncodedLegIssuer EncodedLegIssuer_107("DATA_644111003");
    noLegs_0_1.set(EncodedLegIssuer_107);
    InstrumentLeg_107.insert(EncodedLegIssuer_107.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_107(1015418175);
    noLegs_0_1.set(EncodedLegIssuerLen_107);
    InstrumentLeg_107.insert(EncodedLegIssuerLen_107.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_107("DATA_1081097700");
    noLegs_0_1.set(EncodedLegSecurityDesc_107);
    InstrumentLeg_107.insert(EncodedLegSecurityDesc_107.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_107(11886353);
    noLegs_0_1.set(EncodedLegSecurityDescLen_107);
    InstrumentLeg_107.insert(EncodedLegSecurityDescLen_107.getString());
    FIX::LegCFICode LegCFICode_107("STRING_328904655");
    noLegs_0_1.set(LegCFICode_107);
    InstrumentLeg_107.insert(LegCFICode_107.getString());
    FIX::LegContractMultiplier LegContractMultiplier_107;
    LegContractMultiplier_107.setString("6712417");
    noLegs_0_1.set(LegContractMultiplier_107);
    InstrumentLeg_107.insert(LegContractMultiplier_107.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_107(1674442851);
    noLegs_0_1.set(LegContractMultiplierUnit_107);
    InstrumentLeg_107.insert(LegContractMultiplierUnit_107.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_107("MONTHYEAR_1373637866");
    noLegs_0_1.set(LegContractSettlMonth_107);
    InstrumentLeg_107.insert(LegContractSettlMonth_107.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_107("COUNTRY_166545666");
    noLegs_0_1.set(LegCountryOfIssue_107);
    InstrumentLeg_107.insert(LegCountryOfIssue_107.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_107("LOCALMKTDATE_723647777");
    noLegs_0_1.set(LegCouponPaymentDate_107);
    InstrumentLeg_107.insert(LegCouponPaymentDate_107.getString());
    FIX::LegCouponRate LegCouponRate_107;
    LegCouponRate_107.setString("56.570000");
    noLegs_0_1.set(LegCouponRate_107);
    InstrumentLeg_107.insert(LegCouponRate_107.getString());
    FIX::LegCreditRating LegCreditRating_107("STRING_1138382755");
    noLegs_0_1.set(LegCreditRating_107);
    InstrumentLeg_107.insert(LegCreditRating_107.getString());
    FIX::LegCurrency LegCurrency_107("GBP");
    noLegs_0_1.set(LegCurrency_107);
    InstrumentLeg_107.insert(LegCurrency_107.getString());
    FIX::LegDatedDate LegDatedDate_107("LOCALMKTDATE_120739207");
    noLegs_0_1.set(LegDatedDate_107);
    InstrumentLeg_107.insert(LegDatedDate_107.getString());
    FIX::LegExerciseStyle LegExerciseStyle_107(988288730);
    noLegs_0_1.set(LegExerciseStyle_107);
    InstrumentLeg_107.insert(LegExerciseStyle_107.getString());
    FIX::LegFactor LegFactor_107;
    LegFactor_107.setString("12594169");
    noLegs_0_1.set(LegFactor_107);
    InstrumentLeg_107.insert(LegFactor_107.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_107(486832347);
    noLegs_0_1.set(LegFlowScheduleType_107);
    InstrumentLeg_107.insert(LegFlowScheduleType_107.getString());
    FIX::LegInstrRegistry LegInstrRegistry_107("STRING_118270733");
    noLegs_0_1.set(LegInstrRegistry_107);
    InstrumentLeg_107.insert(LegInstrRegistry_107.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_107("LOCALMKTDATE_277790153");
    noLegs_0_1.set(LegInterestAccrualDate_107);
    InstrumentLeg_107.insert(LegInterestAccrualDate_107.getString());
    FIX::LegIssueDate LegIssueDate_107("LOCALMKTDATE_1090399194");
    noLegs_0_1.set(LegIssueDate_107);
    InstrumentLeg_107.insert(LegIssueDate_107.getString());
    FIX::LegIssuer LegIssuer_107("STRING_989706576");
    noLegs_0_1.set(LegIssuer_107);
    InstrumentLeg_107.insert(LegIssuer_107.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_107("STRING_1611940506");
    noLegs_0_1.set(LegLocaleOfIssue_107);
    InstrumentLeg_107.insert(LegLocaleOfIssue_107.getString());
    FIX::LegMaturityDate LegMaturityDate_107("LOCALMKTDATE_915813255");
    noLegs_0_1.set(LegMaturityDate_107);
    InstrumentLeg_107.insert(LegMaturityDate_107.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_107("MONTHYEAR_2006550949");
    noLegs_0_1.set(LegMaturityMonthYear_107);
    InstrumentLeg_107.insert(LegMaturityMonthYear_107.getString());
    FIX::LegMaturityTime LegMaturityTime_107("TZTIMEONLY_1806669613");
    noLegs_0_1.set(LegMaturityTime_107);
    InstrumentLeg_107.insert(LegMaturityTime_107.getString());
    FIX::LegOptAttribute LegOptAttribute_107('1');
    noLegs_0_1.set(LegOptAttribute_107);
    InstrumentLeg_107.insert(LegOptAttribute_107.getString());
    FIX::LegOptionRatio LegOptionRatio_107;
    LegOptionRatio_107.setString("15933199");
    noLegs_0_1.set(LegOptionRatio_107);
    InstrumentLeg_107.insert(LegOptionRatio_107.getString());
    FIX::LegPool LegPool_107("STRING_1555104494");
    noLegs_0_1.set(LegPool_107);
    InstrumentLeg_107.insert(LegPool_107.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_107("STRING_1685481157");
    noLegs_0_1.set(LegPriceUnitOfMeasure_107);
    InstrumentLeg_107.insert(LegPriceUnitOfMeasure_107.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_107;
    LegPriceUnitOfMeasureQty_107.setString("3979777");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_107);
    InstrumentLeg_107.insert(LegPriceUnitOfMeasureQty_107.getString());
    FIX::LegProduct LegProduct_107(51731850);
    noLegs_0_1.set(LegProduct_107);
    InstrumentLeg_107.insert(LegProduct_107.getString());
    FIX::LegPutOrCall LegPutOrCall_107(553415684);
    noLegs_0_1.set(LegPutOrCall_107);
    InstrumentLeg_107.insert(LegPutOrCall_107.getString());
    FIX::LegRatioQty LegRatioQty_107;
    LegRatioQty_107.setString("14790754");
    noLegs_0_1.set(LegRatioQty_107);
    InstrumentLeg_107.insert(LegRatioQty_107.getString());
    FIX::LegRedemptionDate LegRedemptionDate_107("LOCALMKTDATE_63618203");
    noLegs_0_1.set(LegRedemptionDate_107);
    InstrumentLeg_107.insert(LegRedemptionDate_107.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_107("STRING_882320340");
    noLegs_0_1.set(LegRepoCollateralSecurityType_107);
    InstrumentLeg_107.insert(LegRepoCollateralSecurityType_107.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_107;
    LegRepurchaseRate_107.setString("35.100000");
    noLegs_0_1.set(LegRepurchaseRate_107);
    InstrumentLeg_107.insert(LegRepurchaseRate_107.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_107(1738061054);
    noLegs_0_1.set(LegRepurchaseTerm_107);
    InstrumentLeg_107.insert(LegRepurchaseTerm_107.getString());
    FIX::LegSecurityDesc LegSecurityDesc_107("STRING_108474558");
    noLegs_0_1.set(LegSecurityDesc_107);
    InstrumentLeg_107.insert(LegSecurityDesc_107.getString());
    FIX::LegSecurityExchange LegSecurityExchange_107("EXCHANGE_169379176");
    noLegs_0_1.set(LegSecurityExchange_107);
    InstrumentLeg_107.insert(LegSecurityExchange_107.getString());
    FIX::LegSecurityID LegSecurityID_107("STRING_314225183");
    noLegs_0_1.set(LegSecurityID_107);
    InstrumentLeg_107.insert(LegSecurityID_107.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_107("STRING_1970010215");
    noLegs_0_1.set(LegSecurityIDSource_107);
    InstrumentLeg_107.insert(LegSecurityIDSource_107.getString());
    FIX::LegSecuritySubType LegSecuritySubType_107("STRING_1307761932");
    noLegs_0_1.set(LegSecuritySubType_107);
    InstrumentLeg_107.insert(LegSecuritySubType_107.getString());
    FIX::LegSecurityType LegSecurityType_107("STRING_1601317109");
    noLegs_0_1.set(LegSecurityType_107);
    InstrumentLeg_107.insert(LegSecurityType_107.getString());
    FIX::LegSide LegSide_107('7');
    noLegs_0_1.set(LegSide_107);
    InstrumentLeg_107.insert(LegSide_107.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_107("STRING_1428501139");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_107);
    InstrumentLeg_107.insert(LegStateOrProvinceOfIssue_107.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_107("USD");
    noLegs_0_1.set(LegStrikeCurrency_107);
    InstrumentLeg_107.insert(LegStrikeCurrency_107.getString());
    FIX::LegStrikePrice LegStrikePrice_107;
    LegStrikePrice_107.setString("19153334");
    noLegs_0_1.set(LegStrikePrice_107);
    InstrumentLeg_107.insert(LegStrikePrice_107.getString());
    FIX::LegSymbol LegSymbol_107("STRING_560392925");
    noLegs_0_1.set(LegSymbol_107);
    InstrumentLeg_107.insert(LegSymbol_107.getString());
    FIX::LegSymbolSfx LegSymbolSfx_107("STRING_118474029");
    noLegs_0_1.set(LegSymbolSfx_107);
    InstrumentLeg_107.insert(LegSymbolSfx_107.getString());
    FIX::LegTimeUnit LegTimeUnit_107("STRING_858249033");
    noLegs_0_1.set(LegTimeUnit_107);
    InstrumentLeg_107.insert(LegTimeUnit_107.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_107("STRING_1550099501");
    noLegs_0_1.set(LegUnitOfMeasure_107);
    InstrumentLeg_107.insert(LegUnitOfMeasure_107.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_107;
    LegUnitOfMeasureQty_107.setString("17304145");
    noLegs_0_1.set(LegUnitOfMeasureQty_107);
    InstrumentLeg_107.insert(LegUnitOfMeasureQty_107.getString());
    all_values.push_back(InstrumentLeg_107);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_190;
      FIX::LegSecurityAltID LegSecurityAltID_190("STRING_1409166802");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_190);
      LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltID_190.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_190("STRING_1389600501");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_190);
      LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltIDSource_190.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_190);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_108;
    FIX::EncodedLegIssuer EncodedLegIssuer_108("DATA_1459256283");
    noLegs_0_2.set(EncodedLegIssuer_108);
    InstrumentLeg_108.insert(EncodedLegIssuer_108.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_108(855003097);
    noLegs_0_2.set(EncodedLegIssuerLen_108);
    InstrumentLeg_108.insert(EncodedLegIssuerLen_108.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_108("DATA_797221347");
    noLegs_0_2.set(EncodedLegSecurityDesc_108);
    InstrumentLeg_108.insert(EncodedLegSecurityDesc_108.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_108(997253792);
    noLegs_0_2.set(EncodedLegSecurityDescLen_108);
    InstrumentLeg_108.insert(EncodedLegSecurityDescLen_108.getString());
    FIX::LegCFICode LegCFICode_108("STRING_1252980819");
    noLegs_0_2.set(LegCFICode_108);
    InstrumentLeg_108.insert(LegCFICode_108.getString());
    FIX::LegContractMultiplier LegContractMultiplier_108;
    LegContractMultiplier_108.setString("8489531");
    noLegs_0_2.set(LegContractMultiplier_108);
    InstrumentLeg_108.insert(LegContractMultiplier_108.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_108(1550669476);
    noLegs_0_2.set(LegContractMultiplierUnit_108);
    InstrumentLeg_108.insert(LegContractMultiplierUnit_108.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_108("MONTHYEAR_584572592");
    noLegs_0_2.set(LegContractSettlMonth_108);
    InstrumentLeg_108.insert(LegContractSettlMonth_108.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_108("COUNTRY_912571400");
    noLegs_0_2.set(LegCountryOfIssue_108);
    InstrumentLeg_108.insert(LegCountryOfIssue_108.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_108("LOCALMKTDATE_285506168");
    noLegs_0_2.set(LegCouponPaymentDate_108);
    InstrumentLeg_108.insert(LegCouponPaymentDate_108.getString());
    FIX::LegCouponRate LegCouponRate_108;
    LegCouponRate_108.setString("61.030000");
    noLegs_0_2.set(LegCouponRate_108);
    InstrumentLeg_108.insert(LegCouponRate_108.getString());
    FIX::LegCreditRating LegCreditRating_108("STRING_503148806");
    noLegs_0_2.set(LegCreditRating_108);
    InstrumentLeg_108.insert(LegCreditRating_108.getString());
    FIX::LegCurrency LegCurrency_108("CAN");
    noLegs_0_2.set(LegCurrency_108);
    InstrumentLeg_108.insert(LegCurrency_108.getString());
    FIX::LegDatedDate LegDatedDate_108("LOCALMKTDATE_817373990");
    noLegs_0_2.set(LegDatedDate_108);
    InstrumentLeg_108.insert(LegDatedDate_108.getString());
    FIX::LegExerciseStyle LegExerciseStyle_108(216507294);
    noLegs_0_2.set(LegExerciseStyle_108);
    InstrumentLeg_108.insert(LegExerciseStyle_108.getString());
    FIX::LegFactor LegFactor_108;
    LegFactor_108.setString("20645472");
    noLegs_0_2.set(LegFactor_108);
    InstrumentLeg_108.insert(LegFactor_108.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_108(271207451);
    noLegs_0_2.set(LegFlowScheduleType_108);
    InstrumentLeg_108.insert(LegFlowScheduleType_108.getString());
    FIX::LegInstrRegistry LegInstrRegistry_108("STRING_945257892");
    noLegs_0_2.set(LegInstrRegistry_108);
    InstrumentLeg_108.insert(LegInstrRegistry_108.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_108("LOCALMKTDATE_1345564702");
    noLegs_0_2.set(LegInterestAccrualDate_108);
    InstrumentLeg_108.insert(LegInterestAccrualDate_108.getString());
    FIX::LegIssueDate LegIssueDate_108("LOCALMKTDATE_713329643");
    noLegs_0_2.set(LegIssueDate_108);
    InstrumentLeg_108.insert(LegIssueDate_108.getString());
    FIX::LegIssuer LegIssuer_108("STRING_785941768");
    noLegs_0_2.set(LegIssuer_108);
    InstrumentLeg_108.insert(LegIssuer_108.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_108("STRING_1113414541");
    noLegs_0_2.set(LegLocaleOfIssue_108);
    InstrumentLeg_108.insert(LegLocaleOfIssue_108.getString());
    FIX::LegMaturityDate LegMaturityDate_108("LOCALMKTDATE_1273722568");
    noLegs_0_2.set(LegMaturityDate_108);
    InstrumentLeg_108.insert(LegMaturityDate_108.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_108("MONTHYEAR_904415798");
    noLegs_0_2.set(LegMaturityMonthYear_108);
    InstrumentLeg_108.insert(LegMaturityMonthYear_108.getString());
    FIX::LegMaturityTime LegMaturityTime_108("TZTIMEONLY_1971663574");
    noLegs_0_2.set(LegMaturityTime_108);
    InstrumentLeg_108.insert(LegMaturityTime_108.getString());
    FIX::LegOptAttribute LegOptAttribute_108('6');
    noLegs_0_2.set(LegOptAttribute_108);
    InstrumentLeg_108.insert(LegOptAttribute_108.getString());
    FIX::LegOptionRatio LegOptionRatio_108;
    LegOptionRatio_108.setString("4873466");
    noLegs_0_2.set(LegOptionRatio_108);
    InstrumentLeg_108.insert(LegOptionRatio_108.getString());
    FIX::LegPool LegPool_108("STRING_1598242214");
    noLegs_0_2.set(LegPool_108);
    InstrumentLeg_108.insert(LegPool_108.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_108("STRING_2085505223");
    noLegs_0_2.set(LegPriceUnitOfMeasure_108);
    InstrumentLeg_108.insert(LegPriceUnitOfMeasure_108.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_108;
    LegPriceUnitOfMeasureQty_108.setString("18769471");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_108);
    InstrumentLeg_108.insert(LegPriceUnitOfMeasureQty_108.getString());
    FIX::LegProduct LegProduct_108(910014849);
    noLegs_0_2.set(LegProduct_108);
    InstrumentLeg_108.insert(LegProduct_108.getString());
    FIX::LegPutOrCall LegPutOrCall_108(793024673);
    noLegs_0_2.set(LegPutOrCall_108);
    InstrumentLeg_108.insert(LegPutOrCall_108.getString());
    FIX::LegRatioQty LegRatioQty_108;
    LegRatioQty_108.setString("5266848");
    noLegs_0_2.set(LegRatioQty_108);
    InstrumentLeg_108.insert(LegRatioQty_108.getString());
    FIX::LegRedemptionDate LegRedemptionDate_108("LOCALMKTDATE_1907268641");
    noLegs_0_2.set(LegRedemptionDate_108);
    InstrumentLeg_108.insert(LegRedemptionDate_108.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_108("STRING_2046005492");
    noLegs_0_2.set(LegRepoCollateralSecurityType_108);
    InstrumentLeg_108.insert(LegRepoCollateralSecurityType_108.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_108;
    LegRepurchaseRate_108.setString("80.830000");
    noLegs_0_2.set(LegRepurchaseRate_108);
    InstrumentLeg_108.insert(LegRepurchaseRate_108.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_108(1310454470);
    noLegs_0_2.set(LegRepurchaseTerm_108);
    InstrumentLeg_108.insert(LegRepurchaseTerm_108.getString());
    FIX::LegSecurityDesc LegSecurityDesc_108("STRING_483094436");
    noLegs_0_2.set(LegSecurityDesc_108);
    InstrumentLeg_108.insert(LegSecurityDesc_108.getString());
    FIX::LegSecurityExchange LegSecurityExchange_108("EXCHANGE_140725836");
    noLegs_0_2.set(LegSecurityExchange_108);
    InstrumentLeg_108.insert(LegSecurityExchange_108.getString());
    FIX::LegSecurityID LegSecurityID_108("STRING_1595960638");
    noLegs_0_2.set(LegSecurityID_108);
    InstrumentLeg_108.insert(LegSecurityID_108.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_108("STRING_1070500539");
    noLegs_0_2.set(LegSecurityIDSource_108);
    InstrumentLeg_108.insert(LegSecurityIDSource_108.getString());
    FIX::LegSecuritySubType LegSecuritySubType_108("STRING_643874642");
    noLegs_0_2.set(LegSecuritySubType_108);
    InstrumentLeg_108.insert(LegSecuritySubType_108.getString());
    FIX::LegSecurityType LegSecurityType_108("STRING_1989941365");
    noLegs_0_2.set(LegSecurityType_108);
    InstrumentLeg_108.insert(LegSecurityType_108.getString());
    FIX::LegSide LegSide_108('1');
    noLegs_0_2.set(LegSide_108);
    InstrumentLeg_108.insert(LegSide_108.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_108("STRING_1461248632");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_108);
    InstrumentLeg_108.insert(LegStateOrProvinceOfIssue_108.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_108("USD");
    noLegs_0_2.set(LegStrikeCurrency_108);
    InstrumentLeg_108.insert(LegStrikeCurrency_108.getString());
    FIX::LegStrikePrice LegStrikePrice_108;
    LegStrikePrice_108.setString("17324560");
    noLegs_0_2.set(LegStrikePrice_108);
    InstrumentLeg_108.insert(LegStrikePrice_108.getString());
    FIX::LegSymbol LegSymbol_108("STRING_1004222903");
    noLegs_0_2.set(LegSymbol_108);
    InstrumentLeg_108.insert(LegSymbol_108.getString());
    FIX::LegSymbolSfx LegSymbolSfx_108("STRING_942430437");
    noLegs_0_2.set(LegSymbolSfx_108);
    InstrumentLeg_108.insert(LegSymbolSfx_108.getString());
    FIX::LegTimeUnit LegTimeUnit_108("STRING_298302079");
    noLegs_0_2.set(LegTimeUnit_108);
    InstrumentLeg_108.insert(LegTimeUnit_108.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_108("STRING_1790164671");
    noLegs_0_2.set(LegUnitOfMeasure_108);
    InstrumentLeg_108.insert(LegUnitOfMeasure_108.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_108;
    LegUnitOfMeasureQty_108.setString("20558449");
    noLegs_0_2.set(LegUnitOfMeasureQty_108);
    InstrumentLeg_108.insert(LegUnitOfMeasureQty_108.getString());
    all_values.push_back(InstrumentLeg_108);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_191;
      FIX::LegSecurityAltID LegSecurityAltID_191("STRING_547096821");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_191);
      LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltID_191.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_191("STRING_1880024904");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_191);
      LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltIDSource_191.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_191);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_192;
      FIX::LegSecurityAltID LegSecurityAltID_192("STRING_100879420");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_192);
      LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltID_192.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_192("STRING_1034443507");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_192);
      LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltIDSource_192.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_192);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_193;
      FIX::LegSecurityAltID LegSecurityAltID_193("STRING_1330783470");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_193);
      LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltID_193.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_193("STRING_38900995");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_193);
      LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltIDSource_193.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_193);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_75;
  FIX::AttachmentPoint AttachmentPoint_75;
  AttachmentPoint_75.setString("70.450000");
  msg.set(AttachmentPoint_75);
  Instrument_75.insert(AttachmentPoint_75.getString());
  FIX::CFICode CFICode_75("STRING_93314672");
  msg.set(CFICode_75);
  Instrument_75.insert(CFICode_75.getString());
  FIX::CPProgram CPProgram_75(1);
  msg.set(CPProgram_75);
  Instrument_75.insert(CPProgram_75.getString());
  FIX::CPRegType CPRegType_75("STRING_1290591931");
  msg.set(CPRegType_75);
  Instrument_75.insert(CPRegType_75.getString());
  FIX::CapPrice CapPrice_75;
  CapPrice_75.setString("20005833");
  msg.set(CapPrice_75);
  Instrument_75.insert(CapPrice_75.getString());
  FIX::ContractMultiplier ContractMultiplier_75;
  ContractMultiplier_75.setString("7304475");
  msg.set(ContractMultiplier_75);
  Instrument_75.insert(ContractMultiplier_75.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_75(2);
  msg.set(ContractMultiplierUnit_75);
  Instrument_75.insert(ContractMultiplierUnit_75.getString());
  FIX::ContractSettlMonth ContractSettlMonth_75("MONTHYEAR_1163554135");
  msg.set(ContractSettlMonth_75);
  Instrument_75.insert(ContractSettlMonth_75.getString());
  FIX::CountryOfIssue CountryOfIssue_75("COUNTRY_1213541949");
  msg.set(CountryOfIssue_75);
  Instrument_75.insert(CountryOfIssue_75.getString());
  FIX::CouponPaymentDate CouponPaymentDate_75("LOCALMKTDATE_659472203");
  msg.set(CouponPaymentDate_75);
  Instrument_75.insert(CouponPaymentDate_75.getString());
  FIX::CouponRate CouponRate_75;
  CouponRate_75.setString("11.260000");
  msg.set(CouponRate_75);
  Instrument_75.insert(CouponRate_75.getString());
  FIX::CreditRating CreditRating_75("STRING_136558840");
  msg.set(CreditRating_75);
  Instrument_75.insert(CreditRating_75.getString());
  FIX::DatedDate DatedDate_75("LOCALMKTDATE_1303346845");
  msg.set(DatedDate_75);
  Instrument_75.insert(DatedDate_75.getString());
  FIX::DetachmentPoint DetachmentPoint_75;
  DetachmentPoint_75.setString("88.430000");
  msg.set(DetachmentPoint_75);
  Instrument_75.insert(DetachmentPoint_75.getString());
  FIX::EncodedIssuer EncodedIssuer_75("DATA_1963844659");
  msg.set(EncodedIssuer_75);
  Instrument_75.insert(EncodedIssuer_75.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_75(617111830);
  msg.set(EncodedIssuerLen_75);
  Instrument_75.insert(EncodedIssuerLen_75.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_75("DATA_513453854");
  msg.set(EncodedSecurityDesc_75);
  Instrument_75.insert(EncodedSecurityDesc_75.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_75(1560710394);
  msg.set(EncodedSecurityDescLen_75);
  Instrument_75.insert(EncodedSecurityDescLen_75.getString());
  FIX::ExerciseStyle ExerciseStyle_75(0);
  msg.set(ExerciseStyle_75);
  Instrument_75.insert(ExerciseStyle_75.getString());
  FIX::Factor Factor_75;
  Factor_75.setString("15176767");
  msg.set(Factor_75);
  Instrument_75.insert(Factor_75.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_75(false);
  msg.set(FlexProductEligibilityIndicator_75);
  Instrument_75.insert(FlexProductEligibilityIndicator_75.getString());
  FIX::FlexibleIndicator FlexibleIndicator_75(false);
  msg.set(FlexibleIndicator_75);
  Instrument_75.insert(FlexibleIndicator_75.getString());
  FIX::FloorPrice FloorPrice_75;
  FloorPrice_75.setString("11603577");
  msg.set(FloorPrice_75);
  Instrument_75.insert(FloorPrice_75.getString());
  FIX::FlowScheduleType FlowScheduleType_75(3);
  msg.set(FlowScheduleType_75);
  Instrument_75.insert(FlowScheduleType_75.getString());
  FIX::InstrRegistry InstrRegistry_75("STRING_2072410992");
  msg.set(InstrRegistry_75);
  Instrument_75.insert(InstrRegistry_75.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_75('1');
  msg.set(InstrmtAssignmentMethod_75);
  Instrument_75.insert(InstrmtAssignmentMethod_75.getString());
  FIX::InterestAccrualDate InterestAccrualDate_75("LOCALMKTDATE_2144043417");
  msg.set(InterestAccrualDate_75);
  Instrument_75.insert(InterestAccrualDate_75.getString());
  FIX::IssueDate IssueDate_75("LOCALMKTDATE_25806764");
  msg.set(IssueDate_75);
  Instrument_75.insert(IssueDate_75.getString());
  FIX::Issuer Issuer_75("STRING_594414461");
  msg.set(Issuer_75);
  Instrument_75.insert(Issuer_75.getString());
  FIX::ListMethod ListMethod_75(1);
  msg.set(ListMethod_75);
  Instrument_75.insert(ListMethod_75.getString());
  FIX::LocaleOfIssue LocaleOfIssue_75("STRING_64707759");
  msg.set(LocaleOfIssue_75);
  Instrument_75.insert(LocaleOfIssue_75.getString());
  FIX::MaturityDate MaturityDate_75("LOCALMKTDATE_1358321506");
  msg.set(MaturityDate_75);
  Instrument_75.insert(MaturityDate_75.getString());
  FIX::MaturityMonthYear MaturityMonthYear_75("MONTHYEAR_1420657911");
  msg.set(MaturityMonthYear_75);
  Instrument_75.insert(MaturityMonthYear_75.getString());
  FIX::MaturityTime MaturityTime_75("TZTIMEONLY_896633428");
  msg.set(MaturityTime_75);
  Instrument_75.insert(MaturityTime_75.getString());
  FIX::MinPriceIncrement MinPriceIncrement_75;
  MinPriceIncrement_75.setString("5014297");
  msg.set(MinPriceIncrement_75);
  Instrument_75.insert(MinPriceIncrement_75.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_75;
  MinPriceIncrementAmount_75.setString("12737575");
  msg.set(MinPriceIncrementAmount_75);
  Instrument_75.insert(MinPriceIncrementAmount_75.getString());
  FIX::NTPositionLimit NTPositionLimit_75(1627080940);
  msg.set(NTPositionLimit_75);
  Instrument_75.insert(NTPositionLimit_75.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_75;
  NotionalPercentageOutstanding_75.setString("61.570000");
  msg.set(NotionalPercentageOutstanding_75);
  Instrument_75.insert(NotionalPercentageOutstanding_75.getString());
  FIX::OptAttribute OptAttribute_75('2');
  msg.set(OptAttribute_75);
  Instrument_75.insert(OptAttribute_75.getString());
  FIX::OptPayoutAmount OptPayoutAmount_75;
  OptPayoutAmount_75.setString("6931392");
  msg.set(OptPayoutAmount_75);
  Instrument_75.insert(OptPayoutAmount_75.getString());
  FIX::OptPayoutType OptPayoutType_75(3);
  msg.set(OptPayoutType_75);
  Instrument_75.insert(OptPayoutType_75.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_75;
  OriginalNotionalPercentageOutstanding_75.setString("91.900000");
  msg.set(OriginalNotionalPercentageOutstanding_75);
  Instrument_75.insert(OriginalNotionalPercentageOutstanding_75.getString());
  FIX::Pool Pool_75("STRING_829698082");
  msg.set(Pool_75);
  Instrument_75.insert(Pool_75.getString());
  FIX::PositionLimit PositionLimit_75(835511557);
  msg.set(PositionLimit_75);
  Instrument_75.insert(PositionLimit_75.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_75("STRING_INX");
  msg.set(PriceQuoteMethod_75);
  Instrument_75.insert(PriceQuoteMethod_75.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_75("STRING_646059093");
  msg.set(PriceUnitOfMeasure_75);
  Instrument_75.insert(PriceUnitOfMeasure_75.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_75;
  PriceUnitOfMeasureQty_75.setString("14526233");
  msg.set(PriceUnitOfMeasureQty_75);
  Instrument_75.insert(PriceUnitOfMeasureQty_75.getString());
  FIX::Product Product_77(6);
  msg.set(Product_77);
  Instrument_75.insert(Product_77.getString());
  FIX::ProductComplex ProductComplex_75("STRING_59285839");
  msg.set(ProductComplex_75);
  Instrument_75.insert(ProductComplex_75.getString());
  FIX::PutOrCall PutOrCall_75(1);
  msg.set(PutOrCall_75);
  Instrument_75.insert(PutOrCall_75.getString());
  FIX::RedemptionDate RedemptionDate_75("LOCALMKTDATE_1239994996");
  msg.set(RedemptionDate_75);
  Instrument_75.insert(RedemptionDate_75.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_75("STRING_414943022");
  msg.set(RepoCollateralSecurityType_75);
  Instrument_75.insert(RepoCollateralSecurityType_75.getString());
  FIX::RepurchaseRate RepurchaseRate_75;
  RepurchaseRate_75.setString("3.500000");
  msg.set(RepurchaseRate_75);
  Instrument_75.insert(RepurchaseRate_75.getString());
  FIX::RepurchaseTerm RepurchaseTerm_75(252869129);
  msg.set(RepurchaseTerm_75);
  Instrument_75.insert(RepurchaseTerm_75.getString());
  FIX::RestructuringType RestructuringType_75("STRING_XR");
  msg.set(RestructuringType_75);
  Instrument_75.insert(RestructuringType_75.getString());
  FIX::SecurityDesc SecurityDesc_75("STRING_2080021342");
  msg.set(SecurityDesc_75);
  Instrument_75.insert(SecurityDesc_75.getString());
  FIX::SecurityExchange SecurityExchange_75("EXCHANGE_1960323731");
  msg.set(SecurityExchange_75);
  Instrument_75.insert(SecurityExchange_75.getString());
  FIX::SecurityGroup SecurityGroup_75("STRING_675521304");
  msg.set(SecurityGroup_75);
  Instrument_75.insert(SecurityGroup_75.getString());
  FIX::SecurityID SecurityID_75("STRING_2105828106");
  msg.set(SecurityID_75);
  Instrument_75.insert(SecurityID_75.getString());
  FIX::SecurityIDSource SecurityIDSource_75("STRING_5");
  msg.set(SecurityIDSource_75);
  Instrument_75.insert(SecurityIDSource_75.getString());
  FIX::SecurityStatus SecurityStatus_75("STRING_1");
  msg.set(SecurityStatus_75);
  Instrument_75.insert(SecurityStatus_75.getString());
  FIX::SecuritySubType SecuritySubType_76("STRING_23052218");
  msg.set(SecuritySubType_76);
  Instrument_75.insert(SecuritySubType_76.getString());
  FIX::SecurityType SecurityType_77("STRING_TRAN");
  msg.set(SecurityType_77);
  Instrument_75.insert(SecurityType_77.getString());
  FIX::Seniority Seniority_75("STRING_SD");
  msg.set(Seniority_75);
  Instrument_75.insert(Seniority_75.getString());
  FIX::SettlMethod SettlMethod_75('C');
  msg.set(SettlMethod_75);
  Instrument_75.insert(SettlMethod_75.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_75("STRING_119522192");
  msg.set(SettleOnOpenFlag_75);
  Instrument_75.insert(SettleOnOpenFlag_75.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_75("STRING_402312736");
  msg.set(StateOrProvinceOfIssue_75);
  Instrument_75.insert(StateOrProvinceOfIssue_75.getString());
  FIX::StrikeCurrency StrikeCurrency_75("CAN");
  msg.set(StrikeCurrency_75);
  Instrument_75.insert(StrikeCurrency_75.getString());
  FIX::StrikeMultiplier StrikeMultiplier_75;
  StrikeMultiplier_75.setString("6921408");
  msg.set(StrikeMultiplier_75);
  Instrument_75.insert(StrikeMultiplier_75.getString());
  FIX::StrikePrice StrikePrice_75;
  StrikePrice_75.setString("10924221");
  msg.set(StrikePrice_75);
  Instrument_75.insert(StrikePrice_75.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_75(2);
  msg.set(StrikePriceBoundaryMethod_75);
  Instrument_75.insert(StrikePriceBoundaryMethod_75.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_75;
  StrikePriceBoundaryPrecision_75.setString("99.910000");
  msg.set(StrikePriceBoundaryPrecision_75);
  Instrument_75.insert(StrikePriceBoundaryPrecision_75.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_75(3);
  msg.set(StrikePriceDeterminationMethod_75);
  Instrument_75.insert(StrikePriceDeterminationMethod_75.getString());
  FIX::StrikeValue StrikeValue_75;
  StrikeValue_75.setString("15073746");
  msg.set(StrikeValue_75);
  Instrument_75.insert(StrikeValue_75.getString());
  FIX::Symbol Symbol_75("STRING_802864377");
  msg.set(Symbol_75);
  Instrument_75.insert(Symbol_75.getString());
  FIX::SymbolSfx SymbolSfx_75("STRING_WI");
  msg.set(SymbolSfx_75);
  Instrument_75.insert(SymbolSfx_75.getString());
  FIX::TimeUnit TimeUnit_75("STRING_Mo");
  msg.set(TimeUnit_75);
  Instrument_75.insert(TimeUnit_75.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_75(1);
  msg.set(UnderlyingPriceDeterminationMethod_75);
  Instrument_75.insert(UnderlyingPriceDeterminationMethod_75.getString());
  FIX::UnitOfMeasure UnitOfMeasure_75("STRING_lbs");
  msg.set(UnitOfMeasure_75);
  Instrument_75.insert(UnitOfMeasure_75.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_75;
  UnitOfMeasureQty_75.setString("3197383");
  msg.set(UnitOfMeasureQty_75);
  Instrument_75.insert(UnitOfMeasureQty_75.getString());
  FIX::ValuationMethod ValuationMethod_75("STRING_CDS");
  msg.set(ValuationMethod_75);
  Instrument_75.insert(ValuationMethod_75.getString());
  all_values.push_back(Instrument_75);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_140;
    FIX::ComplexEventCondition ComplexEventCondition_140(1);
    noComplexEvents_0_0.set(ComplexEventCondition_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventCondition_140.getString());
    FIX::ComplexEventPrice ComplexEventPrice_140;
    ComplexEventPrice_140.setString("20180467");
    noComplexEvents_0_0.set(ComplexEventPrice_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventPrice_140.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_140(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceBoundaryMethod_140.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_140;
    ComplexEventPriceBoundaryPrecision_140.setString("64.090000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceBoundaryPrecision_140.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_140(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceTimeType_140.getString());
    FIX::ComplexEventType ComplexEventType_140(4);
    noComplexEvents_0_0.set(ComplexEventType_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexEventType_140.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_140;
    ComplexOptPayoutAmount_140.setString("2182308");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_140);
    ComplexEvents_NoComplexEvents_140.insert(ComplexOptPayoutAmount_140.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_140);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_292;
      FIX::ComplexEventEndDate ComplexEventEndDate_292(FIX::UTCTIMESTAMP(21, 31, 25, 27, 52017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_292);
      ComplexEventDates_NoComplexEventDates_292.insert(ComplexEventEndDate_292.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_292(FIX::UTCTIMESTAMP(1, 34, 42, 7, 72004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_292);
      ComplexEventDates_NoComplexEventDates_292.insert(ComplexEventStartDate_292.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_292);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_581;
        FIX::ComplexEventEndTime ComplexEventEndTime_581(FIX::UTCTIMEONLY(11, 16, 31));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_581);
        ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventEndTime_581.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_581(FIX::UTCTIMEONLY(12, 16, 20));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_581);
        ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventStartTime_581.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_581);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_293;
      FIX::ComplexEventEndDate ComplexEventEndDate_293(FIX::UTCTIMESTAMP(6, 17, 56, 27, 32009));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_293);
      ComplexEventDates_NoComplexEventDates_293.insert(ComplexEventEndDate_293.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_293(FIX::UTCTIMESTAMP(12, 49, 20, 25, 92016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_293);
      ComplexEventDates_NoComplexEventDates_293.insert(ComplexEventStartDate_293.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_293);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_582;
        FIX::ComplexEventEndTime ComplexEventEndTime_582(FIX::UTCTIMEONLY(9, 1, 44));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_582);
        ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventEndTime_582.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_582(FIX::UTCTIMEONLY(19, 52, 50));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_582);
        ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventStartTime_582.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_582);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_583;
        FIX::ComplexEventEndTime ComplexEventEndTime_583(FIX::UTCTIMEONLY(16, 59, 25));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_583);
        ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventEndTime_583.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_583(FIX::UTCTIMEONLY(15, 42, 18));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_583);
        ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventStartTime_583.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_583);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_584;
        FIX::ComplexEventEndTime ComplexEventEndTime_584(FIX::UTCTIMEONLY(16, 27, 34));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_584);
        ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventEndTime_584.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_584(FIX::UTCTIMEONLY(10, 30, 40));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_584);
        ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventStartTime_584.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_584);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_141;
    FIX::ComplexEventCondition ComplexEventCondition_141(1);
    noComplexEvents_0_1.set(ComplexEventCondition_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventCondition_141.getString());
    FIX::ComplexEventPrice ComplexEventPrice_141;
    ComplexEventPrice_141.setString("14208020");
    noComplexEvents_0_1.set(ComplexEventPrice_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPrice_141.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_141(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceBoundaryMethod_141.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_141;
    ComplexEventPriceBoundaryPrecision_141.setString("84.190000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceBoundaryPrecision_141.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_141(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceTimeType_141.getString());
    FIX::ComplexEventType ComplexEventType_141(4);
    noComplexEvents_0_1.set(ComplexEventType_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventType_141.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_141;
    ComplexOptPayoutAmount_141.setString("10576903");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexOptPayoutAmount_141.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_141);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_294;
      FIX::ComplexEventEndDate ComplexEventEndDate_294(FIX::UTCTIMESTAMP(10, 22, 6, 21, 42007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_294);
      ComplexEventDates_NoComplexEventDates_294.insert(ComplexEventEndDate_294.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_294(FIX::UTCTIMESTAMP(19, 48, 57, 1, 42013));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_294);
      ComplexEventDates_NoComplexEventDates_294.insert(ComplexEventStartDate_294.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_294);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_585;
        FIX::ComplexEventEndTime ComplexEventEndTime_585(FIX::UTCTIMEONLY(23, 59, 36));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_585);
        ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventEndTime_585.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_585(FIX::UTCTIMEONLY(9, 6, 8));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_585);
        ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventStartTime_585.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_585);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_586;
        FIX::ComplexEventEndTime ComplexEventEndTime_586(FIX::UTCTIMEONLY(5, 0, 34));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_586);
        ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventEndTime_586.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_586(FIX::UTCTIMEONLY(17, 12, 47));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_586);
        ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventStartTime_586.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_586);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_295;
      FIX::ComplexEventEndDate ComplexEventEndDate_295(FIX::UTCTIMESTAMP(22, 9, 25, 24, 52014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_295);
      ComplexEventDates_NoComplexEventDates_295.insert(ComplexEventEndDate_295.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_295(FIX::UTCTIMESTAMP(3, 2, 4, 5, 112005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_295);
      ComplexEventDates_NoComplexEventDates_295.insert(ComplexEventStartDate_295.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_295);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_587;
        FIX::ComplexEventEndTime ComplexEventEndTime_587(FIX::UTCTIMEONLY(3, 32, 12));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_587);
        ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventEndTime_587.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_587(FIX::UTCTIMEONLY(22, 19, 30));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_587);
        ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventStartTime_587.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_587);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_588;
        FIX::ComplexEventEndTime ComplexEventEndTime_588(FIX::UTCTIMEONLY(0, 23, 4));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_588);
        ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventEndTime_588.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_588(FIX::UTCTIMEONLY(16, 16, 24));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_588);
        ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventStartTime_588.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_588);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_589;
        FIX::ComplexEventEndTime ComplexEventEndTime_589(FIX::UTCTIMEONLY(2, 26, 0));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_589);
        ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventEndTime_589.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_589(FIX::UTCTIMEONLY(18, 15, 50));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_589);
        ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventStartTime_589.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_589);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_142;
    FIX::ComplexEventCondition ComplexEventCondition_142(1);
    noComplexEvents_0_2.set(ComplexEventCondition_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventCondition_142.getString());
    FIX::ComplexEventPrice ComplexEventPrice_142;
    ComplexEventPrice_142.setString("70506");
    noComplexEvents_0_2.set(ComplexEventPrice_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPrice_142.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_142(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceBoundaryMethod_142.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_142;
    ComplexEventPriceBoundaryPrecision_142.setString("9.230000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceBoundaryPrecision_142.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_142(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceTimeType_142.getString());
    FIX::ComplexEventType ComplexEventType_142(5);
    noComplexEvents_0_2.set(ComplexEventType_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventType_142.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_142;
    ComplexOptPayoutAmount_142.setString("21060818");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexOptPayoutAmount_142.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_142);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_296;
      FIX::ComplexEventEndDate ComplexEventEndDate_296(FIX::UTCTIMESTAMP(20, 24, 47, 18, 82006));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_296);
      ComplexEventDates_NoComplexEventDates_296.insert(ComplexEventEndDate_296.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_296(FIX::UTCTIMESTAMP(23, 41, 16, 9, 22014));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_296);
      ComplexEventDates_NoComplexEventDates_296.insert(ComplexEventStartDate_296.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_296);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_590;
        FIX::ComplexEventEndTime ComplexEventEndTime_590(FIX::UTCTIMEONLY(14, 15, 24));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_590);
        ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventEndTime_590.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_590(FIX::UTCTIMEONLY(22, 39, 11));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_590);
        ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventStartTime_590.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_590);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_297;
      FIX::ComplexEventEndDate ComplexEventEndDate_297(FIX::UTCTIMESTAMP(1, 57, 27, 12, 82015));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_297);
      ComplexEventDates_NoComplexEventDates_297.insert(ComplexEventEndDate_297.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_297(FIX::UTCTIMESTAMP(12, 27, 0, 0, 32011));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_297);
      ComplexEventDates_NoComplexEventDates_297.insert(ComplexEventStartDate_297.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_297);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityListRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_591;
        FIX::ComplexEventEndTime ComplexEventEndTime_591(FIX::UTCTIMEONLY(10, 15, 22));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_591);
        ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventEndTime_591.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_591(FIX::UTCTIMEONLY(8, 46, 17));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_591);
        ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventStartTime_591.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_591);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_144;
    FIX::EventDate EventDate_144("LOCALMKTDATE_1070204056");
    noEvents_0_0.set(EventDate_144);
    EvntGrp_NoEvents_144.insert(EventDate_144.getString());
    FIX::EventPx EventPx_144;
    EventPx_144.setString("16309169");
    noEvents_0_0.set(EventPx_144);
    EvntGrp_NoEvents_144.insert(EventPx_144.getString());
    FIX::EventText EventText_144("STRING_1465088556");
    noEvents_0_0.set(EventText_144);
    EvntGrp_NoEvents_144.insert(EventText_144.getString());
    FIX::EventTime EventTime_144(FIX::UTCTIMESTAMP(10, 8, 32, 10, 22000));
    noEvents_0_0.set(EventTime_144);
    EvntGrp_NoEvents_144.insert(EventTime_144.getString());
    FIX::EventType EventType_144(14);
    noEvents_0_0.set(EventType_144);
    EvntGrp_NoEvents_144.insert(EventType_144.getString());
    all_values.push_back(EvntGrp_NoEvents_144);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_145;
    FIX::EventDate EventDate_145("LOCALMKTDATE_615874925");
    noEvents_0_1.set(EventDate_145);
    EvntGrp_NoEvents_145.insert(EventDate_145.getString());
    FIX::EventPx EventPx_145;
    EventPx_145.setString("17709731");
    noEvents_0_1.set(EventPx_145);
    EvntGrp_NoEvents_145.insert(EventPx_145.getString());
    FIX::EventText EventText_145("STRING_1098954420");
    noEvents_0_1.set(EventText_145);
    EvntGrp_NoEvents_145.insert(EventText_145.getString());
    FIX::EventTime EventTime_145(FIX::UTCTIMESTAMP(22, 28, 41, 2, 72002));
    noEvents_0_1.set(EventTime_145);
    EvntGrp_NoEvents_145.insert(EventTime_145.getString());
    FIX::EventType EventType_145(9);
    noEvents_0_1.set(EventType_145);
    EvntGrp_NoEvents_145.insert(EventType_145.getString());
    all_values.push_back(EvntGrp_NoEvents_145);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::SecurityListRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_146;
    FIX::EventDate EventDate_146("LOCALMKTDATE_1843252236");
    noEvents_0_2.set(EventDate_146);
    EvntGrp_NoEvents_146.insert(EventDate_146.getString());
    FIX::EventPx EventPx_146;
    EventPx_146.setString("18803470");
    noEvents_0_2.set(EventPx_146);
    EvntGrp_NoEvents_146.insert(EventPx_146.getString());
    FIX::EventText EventText_146("STRING_1299380775");
    noEvents_0_2.set(EventText_146);
    EvntGrp_NoEvents_146.insert(EventText_146.getString());
    FIX::EventTime EventTime_146(FIX::UTCTIMESTAMP(6, 3, 28, 3, 42002));
    noEvents_0_2.set(EventTime_146);
    EvntGrp_NoEvents_146.insert(EventTime_146.getString());
    FIX::EventType EventType_146(9);
    noEvents_0_2.set(EventType_146);
    EvntGrp_NoEvents_146.insert(EventType_146.getString());
    all_values.push_back(EvntGrp_NoEvents_146);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityListRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_144;
    FIX::InstrumentPartyID InstrumentPartyID_144("STRING_368775306");
    noInstrumentParties_0_0.set(InstrumentPartyID_144);
    InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyID_144.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_144('5');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_144);
    InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyIDSource_144.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_144(889526151);
    noInstrumentParties_0_0.set(InstrumentPartyRole_144);
    InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyRole_144.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_144);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288;
      FIX::InstrumentPartySubID InstrumentPartySubID_288("STRING_992686229");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_288);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubID_288.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_288(198548552);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_288);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubIDType_288.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289;
      FIX::InstrumentPartySubID InstrumentPartySubID_289("STRING_941343720");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_289);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubID_289.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_289(715433714);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_289);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubIDType_289.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290;
      FIX::InstrumentPartySubID InstrumentPartySubID_290("STRING_814423478");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_290);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubID_290.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_290(564833194);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_290);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubIDType_290.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityListRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_157;
    FIX::SecurityAltID SecurityAltID_157("STRING_2043194419");
    noSecurityAltID_0_0.set(SecurityAltID_157);
    SecAltIDGrp_NoSecurityAltID_157.insert(SecurityAltID_157.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_157("STRING_956013944");
    noSecurityAltID_0_0.set(SecurityAltIDSource_157);
    SecAltIDGrp_NoSecurityAltID_157.insert(SecurityAltIDSource_157.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_157);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_150;
  FIX::SecurityXML SecurityXML_151("XMLDATA_1153117175");
  msg.set(SecurityXML_151);
  FIX::SecurityXMLLen SecurityXMLLen_75(1781753933);
  msg.set(SecurityXMLLen_75);
  FIX::SecurityXMLSchema SecurityXMLSchema_75("STRING_192849430");
  msg.set(SecurityXMLSchema_75);
  SecurityXML_150.insert(SecurityXMLSchema_75.getString());
  all_values.push_back(SecurityXML_150);

  // InstrumentExtension
  multiset<string> InstrumentExtension_12;
  FIX::DeliveryForm DeliveryForm_12(2);
  msg.set(DeliveryForm_12);
  InstrumentExtension_12.insert(DeliveryForm_12.getString());
  FIX::PctAtRisk PctAtRisk_12;
  PctAtRisk_12.setString("41.610000");
  msg.set(PctAtRisk_12);
  InstrumentExtension_12.insert(PctAtRisk_12.getString());
  all_values.push_back(InstrumentExtension_12);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityListRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_26;
    FIX::InstrAttribType InstrAttribType_26(26);
    noInstrAttrib_0_0.set(InstrAttribType_26);
    AttrbGrp_NoInstrAttrib_26.insert(InstrAttribType_26.getString());
    FIX::InstrAttribValue InstrAttribValue_26("STRING_1527657528");
    noInstrAttrib_0_0.set(InstrAttribValue_26);
    AttrbGrp_NoInstrAttrib_26.insert(InstrAttribValue_26.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_26);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_131;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_131("DATA_1999148475");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_131);
    UnderlyingInstrument_131.insert(EncodedUnderlyingIssuer_131.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_131(1974652015);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_131);
    UnderlyingInstrument_131.insert(EncodedUnderlyingIssuerLen_131.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_131("DATA_843921688");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_131);
    UnderlyingInstrument_131.insert(EncodedUnderlyingSecurityDesc_131.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_131(529693655);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_131);
    UnderlyingInstrument_131.insert(EncodedUnderlyingSecurityDescLen_131.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_131;
    UnderlyingAdjustedQuantity_131.setString("18804577");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_131);
    UnderlyingInstrument_131.insert(UnderlyingAdjustedQuantity_131.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_131;
    UnderlyingAllocationPercent_131.setString("9.630000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_131);
    UnderlyingInstrument_131.insert(UnderlyingAllocationPercent_131.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_131;
    UnderlyingAttachmentPoint_131.setString("28.910000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_131);
    UnderlyingInstrument_131.insert(UnderlyingAttachmentPoint_131.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_131("STRING_1269696890");
    noUnderlyings_0_0.set(UnderlyingCFICode_131);
    UnderlyingInstrument_131.insert(UnderlyingCFICode_131.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_131("STRING_390825146");
    noUnderlyings_0_0.set(UnderlyingCPProgram_131);
    UnderlyingInstrument_131.insert(UnderlyingCPProgram_131.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_131("STRING_499218197");
    noUnderlyings_0_0.set(UnderlyingCPRegType_131);
    UnderlyingInstrument_131.insert(UnderlyingCPRegType_131.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_131;
    UnderlyingCapValue_131.setString("18097606");
    noUnderlyings_0_0.set(UnderlyingCapValue_131);
    UnderlyingInstrument_131.insert(UnderlyingCapValue_131.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_131;
    UnderlyingCashAmount_131.setString("12803512");
    noUnderlyings_0_0.set(UnderlyingCashAmount_131);
    UnderlyingInstrument_131.insert(UnderlyingCashAmount_131.getString());
    FIX::UnderlyingCashType UnderlyingCashType_131("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_131);
    UnderlyingInstrument_131.insert(UnderlyingCashType_131.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_131;
    UnderlyingContractMultiplier_131.setString("6549632");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_131);
    UnderlyingInstrument_131.insert(UnderlyingContractMultiplier_131.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_131(1478899850);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_131);
    UnderlyingInstrument_131.insert(UnderlyingContractMultiplierUnit_131.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_131("COUNTRY_405317808");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_131);
    UnderlyingInstrument_131.insert(UnderlyingCountryOfIssue_131.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_131("LOCALMKTDATE_1370396968");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_131);
    UnderlyingInstrument_131.insert(UnderlyingCouponPaymentDate_131.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_131;
    UnderlyingCouponRate_131.setString("96.800000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_131);
    UnderlyingInstrument_131.insert(UnderlyingCouponRate_131.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_131("STRING_970151002");
    noUnderlyings_0_0.set(UnderlyingCreditRating_131);
    UnderlyingInstrument_131.insert(UnderlyingCreditRating_131.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_131("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_131);
    UnderlyingInstrument_131.insert(UnderlyingCurrency_131.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_131;
    UnderlyingCurrentValue_131.setString("19261649");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_131);
    UnderlyingInstrument_131.insert(UnderlyingCurrentValue_131.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_131;
    UnderlyingDetachmentPoint_131.setString("49.820000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_131);
    UnderlyingInstrument_131.insert(UnderlyingDetachmentPoint_131.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_131;
    UnderlyingDirtyPrice_131.setString("18233043");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_131);
    UnderlyingInstrument_131.insert(UnderlyingDirtyPrice_131.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_131;
    UnderlyingEndPrice_131.setString("21190143");
    noUnderlyings_0_0.set(UnderlyingEndPrice_131);
    UnderlyingInstrument_131.insert(UnderlyingEndPrice_131.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_131;
    UnderlyingEndValue_131.setString("10573128");
    noUnderlyings_0_0.set(UnderlyingEndValue_131);
    UnderlyingInstrument_131.insert(UnderlyingEndValue_131.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_131(1470614898);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_131);
    UnderlyingInstrument_131.insert(UnderlyingExerciseStyle_131.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_131;
    UnderlyingFXRate_131.setString("15457644");
    noUnderlyings_0_0.set(UnderlyingFXRate_131);
    UnderlyingInstrument_131.insert(UnderlyingFXRate_131.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_131('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_131);
    UnderlyingInstrument_131.insert(UnderlyingFXRateCalc_131.getString());
    FIX::UnderlyingFactor UnderlyingFactor_131;
    UnderlyingFactor_131.setString("8507887");
    noUnderlyings_0_0.set(UnderlyingFactor_131);
    UnderlyingInstrument_131.insert(UnderlyingFactor_131.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_131(124411603);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_131);
    UnderlyingInstrument_131.insert(UnderlyingFlowScheduleType_131.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_131("STRING_1619124151");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_131);
    UnderlyingInstrument_131.insert(UnderlyingInstrRegistry_131.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_131("LOCALMKTDATE_677957146");
    noUnderlyings_0_0.set(UnderlyingIssueDate_131);
    UnderlyingInstrument_131.insert(UnderlyingIssueDate_131.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_131("STRING_968333291");
    noUnderlyings_0_0.set(UnderlyingIssuer_131);
    UnderlyingInstrument_131.insert(UnderlyingIssuer_131.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_131("STRING_1334158");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_131);
    UnderlyingInstrument_131.insert(UnderlyingLocaleOfIssue_131.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_131("LOCALMKTDATE_410931288");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_131);
    UnderlyingInstrument_131.insert(UnderlyingMaturityDate_131.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_131("MONTHYEAR_1926904254");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_131);
    UnderlyingInstrument_131.insert(UnderlyingMaturityMonthYear_131.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_131("TZTIMEONLY_131777050");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_131);
    UnderlyingInstrument_131.insert(UnderlyingMaturityTime_131.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_131;
    UnderlyingNotionalPercentageOutstanding_131.setString("81.790000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_131);
    UnderlyingInstrument_131.insert(UnderlyingNotionalPercentageOutstanding_131.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_131('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_131);
    UnderlyingInstrument_131.insert(UnderlyingOptAttribute_131.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_131;
    UnderlyingOriginalNotionalPercentageOutstanding_131.setString("52.470000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_131);
    UnderlyingInstrument_131.insert(UnderlyingOriginalNotionalPercentageOutstanding_131.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_131("STRING_1342905204");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_131);
    UnderlyingInstrument_131.insert(UnderlyingPriceUnitOfMeasure_131.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_131;
    UnderlyingPriceUnitOfMeasureQty_131.setString("14505970");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_131);
    UnderlyingInstrument_131.insert(UnderlyingPriceUnitOfMeasureQty_131.getString());
    FIX::UnderlyingProduct UnderlyingProduct_131(94969335);
    noUnderlyings_0_0.set(UnderlyingProduct_131);
    UnderlyingInstrument_131.insert(UnderlyingProduct_131.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_131(1997868458);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_131);
    UnderlyingInstrument_131.insert(UnderlyingPutOrCall_131.getString());
    FIX::UnderlyingPx UnderlyingPx_131;
    UnderlyingPx_131.setString("7820132");
    noUnderlyings_0_0.set(UnderlyingPx_131);
    UnderlyingInstrument_131.insert(UnderlyingPx_131.getString());
    FIX::UnderlyingQty UnderlyingQty_131;
    UnderlyingQty_131.setString("5002871");
    noUnderlyings_0_0.set(UnderlyingQty_131);
    UnderlyingInstrument_131.insert(UnderlyingQty_131.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_131("LOCALMKTDATE_1220781778");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_131);
    UnderlyingInstrument_131.insert(UnderlyingRedemptionDate_131.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_131("STRING_927852934");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_131);
    UnderlyingInstrument_131.insert(UnderlyingRepoCollateralSecurityType_131.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_131;
    UnderlyingRepurchaseRate_131.setString("81.460000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_131);
    UnderlyingInstrument_131.insert(UnderlyingRepurchaseRate_131.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_131(110599586);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_131);
    UnderlyingInstrument_131.insert(UnderlyingRepurchaseTerm_131.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_131("STRING_969403386");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_131);
    UnderlyingInstrument_131.insert(UnderlyingRestructuringType_131.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_131("STRING_1249119445");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityDesc_131.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_131("EXCHANGE_153534568");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityExchange_131.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_131("STRING_645224123");
    noUnderlyings_0_0.set(UnderlyingSecurityID_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityID_131.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_131("STRING_1220650173");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityIDSource_131.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_131("STRING_1210847428");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_131);
    UnderlyingInstrument_131.insert(UnderlyingSecuritySubType_131.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_131("STRING_2115839021");
    noUnderlyings_0_0.set(UnderlyingSecurityType_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityType_131.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_131("STRING_618930952");
    noUnderlyings_0_0.set(UnderlyingSeniority_131);
    UnderlyingInstrument_131.insert(UnderlyingSeniority_131.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_131("STRING_830823104");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_131);
    UnderlyingInstrument_131.insert(UnderlyingSettlMethod_131.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_131(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_131);
    UnderlyingInstrument_131.insert(UnderlyingSettlementType_131.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_131;
    UnderlyingStartValue_131.setString("7433425");
    noUnderlyings_0_0.set(UnderlyingStartValue_131);
    UnderlyingInstrument_131.insert(UnderlyingStartValue_131.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_131("STRING_302463608");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_131);
    UnderlyingInstrument_131.insert(UnderlyingStateOrProvinceOfIssue_131.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_131("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_131);
    UnderlyingInstrument_131.insert(UnderlyingStrikeCurrency_131.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_131;
    UnderlyingStrikePrice_131.setString("3037977");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_131);
    UnderlyingInstrument_131.insert(UnderlyingStrikePrice_131.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_131("STRING_1908032587");
    noUnderlyings_0_0.set(UnderlyingSymbol_131);
    UnderlyingInstrument_131.insert(UnderlyingSymbol_131.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_131("STRING_1491096453");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_131);
    UnderlyingInstrument_131.insert(UnderlyingSymbolSfx_131.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_131("STRING_435574816");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_131);
    UnderlyingInstrument_131.insert(UnderlyingTimeUnit_131.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_131("STRING_1441177118");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_131);
    UnderlyingInstrument_131.insert(UnderlyingUnitOfMeasure_131.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_131;
    UnderlyingUnitOfMeasureQty_131.setString("16613422");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_131);
    UnderlyingInstrument_131.insert(UnderlyingUnitOfMeasureQty_131.getString());
    all_values.push_back(UnderlyingInstrument_131);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_262;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_262("STRING_636598674");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_262);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_262.insert(UnderlyingSecurityAltID_262.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_262("STRING_964455609");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_262);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_262.insert(UnderlyingSecurityAltIDSource_262.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_263;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_263("STRING_1161539399");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_263);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_263.insert(UnderlyingSecurityAltID_263.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_263("STRING_486983484");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_263);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_263.insert(UnderlyingSecurityAltIDSource_263.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_264;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_264("STRING_1746468863");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_264);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_264.insert(UnderlyingSecurityAltID_264.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_264("STRING_1661826543");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_264);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_264.insert(UnderlyingSecurityAltIDSource_264.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_253;
      FIX::UnderlyingStipType UnderlyingStipType_253("STRING_526838149");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_253);
      UnderlyingStipulations_NoUnderlyingStips_253.insert(UnderlyingStipType_253.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_253("STRING_984781042");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_253);
      UnderlyingStipulations_NoUnderlyingStips_253.insert(UnderlyingStipValue_253.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_253);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_254;
      FIX::UnderlyingStipType UnderlyingStipType_254("STRING_1818364848");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_254);
      UnderlyingStipulations_NoUnderlyingStips_254.insert(UnderlyingStipType_254.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_254("STRING_1496241535");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_254);
      UnderlyingStipulations_NoUnderlyingStips_254.insert(UnderlyingStipValue_254.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_254);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_264;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_264("STRING_1971899417");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyID_264.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_264('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyIDSource_264.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_264(1307067012);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyRole_264.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_264);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_517("STRING_2109821031");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_517);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517.insert(UnderlyingInstrumentPartySubID_517.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_517(1925997964);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_517);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517.insert(UnderlyingInstrumentPartySubIDType_517.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_518("STRING_1866086301");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_518);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518.insert(UnderlyingInstrumentPartySubID_518.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_518(781481536);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_518);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518.insert(UnderlyingInstrumentPartySubIDType_518.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityListRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_132;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_132("DATA_521856872");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_132);
    UnderlyingInstrument_132.insert(EncodedUnderlyingIssuer_132.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_132(21066261);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_132);
    UnderlyingInstrument_132.insert(EncodedUnderlyingIssuerLen_132.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_132("DATA_131099186");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_132);
    UnderlyingInstrument_132.insert(EncodedUnderlyingSecurityDesc_132.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_132(86049071);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_132);
    UnderlyingInstrument_132.insert(EncodedUnderlyingSecurityDescLen_132.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_132;
    UnderlyingAdjustedQuantity_132.setString("3248640");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_132);
    UnderlyingInstrument_132.insert(UnderlyingAdjustedQuantity_132.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_132;
    UnderlyingAllocationPercent_132.setString("17.730000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_132);
    UnderlyingInstrument_132.insert(UnderlyingAllocationPercent_132.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_132;
    UnderlyingAttachmentPoint_132.setString("55.240000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_132);
    UnderlyingInstrument_132.insert(UnderlyingAttachmentPoint_132.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_132("STRING_760438844");
    noUnderlyings_0_1.set(UnderlyingCFICode_132);
    UnderlyingInstrument_132.insert(UnderlyingCFICode_132.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_132("STRING_1332825243");
    noUnderlyings_0_1.set(UnderlyingCPProgram_132);
    UnderlyingInstrument_132.insert(UnderlyingCPProgram_132.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_132("STRING_1091004083");
    noUnderlyings_0_1.set(UnderlyingCPRegType_132);
    UnderlyingInstrument_132.insert(UnderlyingCPRegType_132.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_132;
    UnderlyingCapValue_132.setString("18270089");
    noUnderlyings_0_1.set(UnderlyingCapValue_132);
    UnderlyingInstrument_132.insert(UnderlyingCapValue_132.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_132;
    UnderlyingCashAmount_132.setString("19694239");
    noUnderlyings_0_1.set(UnderlyingCashAmount_132);
    UnderlyingInstrument_132.insert(UnderlyingCashAmount_132.getString());
    FIX::UnderlyingCashType UnderlyingCashType_132("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_132);
    UnderlyingInstrument_132.insert(UnderlyingCashType_132.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_132;
    UnderlyingContractMultiplier_132.setString("8410646");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_132);
    UnderlyingInstrument_132.insert(UnderlyingContractMultiplier_132.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_132(308923753);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_132);
    UnderlyingInstrument_132.insert(UnderlyingContractMultiplierUnit_132.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_132("COUNTRY_1654444907");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_132);
    UnderlyingInstrument_132.insert(UnderlyingCountryOfIssue_132.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_132("LOCALMKTDATE_355407555");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_132);
    UnderlyingInstrument_132.insert(UnderlyingCouponPaymentDate_132.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_132;
    UnderlyingCouponRate_132.setString("90.160000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_132);
    UnderlyingInstrument_132.insert(UnderlyingCouponRate_132.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_132("STRING_33799408");
    noUnderlyings_0_1.set(UnderlyingCreditRating_132);
    UnderlyingInstrument_132.insert(UnderlyingCreditRating_132.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_132("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_132);
    UnderlyingInstrument_132.insert(UnderlyingCurrency_132.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_132;
    UnderlyingCurrentValue_132.setString("15300409");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_132);
    UnderlyingInstrument_132.insert(UnderlyingCurrentValue_132.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_132;
    UnderlyingDetachmentPoint_132.setString("54.360000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_132);
    UnderlyingInstrument_132.insert(UnderlyingDetachmentPoint_132.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_132;
    UnderlyingDirtyPrice_132.setString("15119859");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_132);
    UnderlyingInstrument_132.insert(UnderlyingDirtyPrice_132.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_132;
    UnderlyingEndPrice_132.setString("15240229");
    noUnderlyings_0_1.set(UnderlyingEndPrice_132);
    UnderlyingInstrument_132.insert(UnderlyingEndPrice_132.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_132;
    UnderlyingEndValue_132.setString("5861888");
    noUnderlyings_0_1.set(UnderlyingEndValue_132);
    UnderlyingInstrument_132.insert(UnderlyingEndValue_132.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_132(399765534);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_132);
    UnderlyingInstrument_132.insert(UnderlyingExerciseStyle_132.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_132;
    UnderlyingFXRate_132.setString("14863603");
    noUnderlyings_0_1.set(UnderlyingFXRate_132);
    UnderlyingInstrument_132.insert(UnderlyingFXRate_132.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_132('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_132);
    UnderlyingInstrument_132.insert(UnderlyingFXRateCalc_132.getString());
    FIX::UnderlyingFactor UnderlyingFactor_132;
    UnderlyingFactor_132.setString("1183681");
    noUnderlyings_0_1.set(UnderlyingFactor_132);
    UnderlyingInstrument_132.insert(UnderlyingFactor_132.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_132(120358225);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_132);
    UnderlyingInstrument_132.insert(UnderlyingFlowScheduleType_132.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_132("STRING_886559989");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_132);
    UnderlyingInstrument_132.insert(UnderlyingInstrRegistry_132.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_132("LOCALMKTDATE_139434449");
    noUnderlyings_0_1.set(UnderlyingIssueDate_132);
    UnderlyingInstrument_132.insert(UnderlyingIssueDate_132.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_132("STRING_251457411");
    noUnderlyings_0_1.set(UnderlyingIssuer_132);
    UnderlyingInstrument_132.insert(UnderlyingIssuer_132.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_132("STRING_972609060");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_132);
    UnderlyingInstrument_132.insert(UnderlyingLocaleOfIssue_132.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_132("LOCALMKTDATE_464298477");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_132);
    UnderlyingInstrument_132.insert(UnderlyingMaturityDate_132.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_132("MONTHYEAR_143105537");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_132);
    UnderlyingInstrument_132.insert(UnderlyingMaturityMonthYear_132.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_132("TZTIMEONLY_402270937");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_132);
    UnderlyingInstrument_132.insert(UnderlyingMaturityTime_132.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_132;
    UnderlyingNotionalPercentageOutstanding_132.setString("73.220000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_132);
    UnderlyingInstrument_132.insert(UnderlyingNotionalPercentageOutstanding_132.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_132('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_132);
    UnderlyingInstrument_132.insert(UnderlyingOptAttribute_132.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_132;
    UnderlyingOriginalNotionalPercentageOutstanding_132.setString("50.200000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_132);
    UnderlyingInstrument_132.insert(UnderlyingOriginalNotionalPercentageOutstanding_132.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_132("STRING_904262582");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_132);
    UnderlyingInstrument_132.insert(UnderlyingPriceUnitOfMeasure_132.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_132;
    UnderlyingPriceUnitOfMeasureQty_132.setString("12978710");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_132);
    UnderlyingInstrument_132.insert(UnderlyingPriceUnitOfMeasureQty_132.getString());
    FIX::UnderlyingProduct UnderlyingProduct_132(1401251064);
    noUnderlyings_0_1.set(UnderlyingProduct_132);
    UnderlyingInstrument_132.insert(UnderlyingProduct_132.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_132(1745327242);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_132);
    UnderlyingInstrument_132.insert(UnderlyingPutOrCall_132.getString());
    FIX::UnderlyingPx UnderlyingPx_132;
    UnderlyingPx_132.setString("16067948");
    noUnderlyings_0_1.set(UnderlyingPx_132);
    UnderlyingInstrument_132.insert(UnderlyingPx_132.getString());
    FIX::UnderlyingQty UnderlyingQty_132;
    UnderlyingQty_132.setString("9082123");
    noUnderlyings_0_1.set(UnderlyingQty_132);
    UnderlyingInstrument_132.insert(UnderlyingQty_132.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_132("LOCALMKTDATE_2100734798");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_132);
    UnderlyingInstrument_132.insert(UnderlyingRedemptionDate_132.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_132("STRING_1476000171");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_132);
    UnderlyingInstrument_132.insert(UnderlyingRepoCollateralSecurityType_132.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_132;
    UnderlyingRepurchaseRate_132.setString("17.320000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_132);
    UnderlyingInstrument_132.insert(UnderlyingRepurchaseRate_132.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_132(1293439747);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_132);
    UnderlyingInstrument_132.insert(UnderlyingRepurchaseTerm_132.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_132("STRING_1016086740");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_132);
    UnderlyingInstrument_132.insert(UnderlyingRestructuringType_132.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_132("STRING_324569028");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityDesc_132.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_132("EXCHANGE_572561536");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityExchange_132.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_132("STRING_380589077");
    noUnderlyings_0_1.set(UnderlyingSecurityID_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityID_132.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_132("STRING_1848591981");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityIDSource_132.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_132("STRING_1158750337");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_132);
    UnderlyingInstrument_132.insert(UnderlyingSecuritySubType_132.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_132("STRING_780354612");
    noUnderlyings_0_1.set(UnderlyingSecurityType_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityType_132.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_132("STRING_1187468670");
    noUnderlyings_0_1.set(UnderlyingSeniority_132);
    UnderlyingInstrument_132.insert(UnderlyingSeniority_132.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_132("STRING_1523453454");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_132);
    UnderlyingInstrument_132.insert(UnderlyingSettlMethod_132.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_132(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_132);
    UnderlyingInstrument_132.insert(UnderlyingSettlementType_132.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_132;
    UnderlyingStartValue_132.setString("13078268");
    noUnderlyings_0_1.set(UnderlyingStartValue_132);
    UnderlyingInstrument_132.insert(UnderlyingStartValue_132.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_132("STRING_262529796");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_132);
    UnderlyingInstrument_132.insert(UnderlyingStateOrProvinceOfIssue_132.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_132("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_132);
    UnderlyingInstrument_132.insert(UnderlyingStrikeCurrency_132.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_132;
    UnderlyingStrikePrice_132.setString("12351388");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_132);
    UnderlyingInstrument_132.insert(UnderlyingStrikePrice_132.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_132("STRING_1502455727");
    noUnderlyings_0_1.set(UnderlyingSymbol_132);
    UnderlyingInstrument_132.insert(UnderlyingSymbol_132.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_132("STRING_1702389844");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_132);
    UnderlyingInstrument_132.insert(UnderlyingSymbolSfx_132.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_132("STRING_1637409793");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_132);
    UnderlyingInstrument_132.insert(UnderlyingTimeUnit_132.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_132("STRING_579709401");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_132);
    UnderlyingInstrument_132.insert(UnderlyingUnitOfMeasure_132.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_132;
    UnderlyingUnitOfMeasureQty_132.setString("10308369");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_132);
    UnderlyingInstrument_132.insert(UnderlyingUnitOfMeasureQty_132.getString());
    all_values.push_back(UnderlyingInstrument_132);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_265;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_265("STRING_1483971983");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_265);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_265.insert(UnderlyingSecurityAltID_265.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_265("STRING_181224378");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_265);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_265.insert(UnderlyingSecurityAltIDSource_265.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_266;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_266("STRING_236968582");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_266);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_266.insert(UnderlyingSecurityAltID_266.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_266("STRING_1081815578");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_266);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_266.insert(UnderlyingSecurityAltIDSource_266.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_267;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_267("STRING_1788019182");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_267);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_267.insert(UnderlyingSecurityAltID_267.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_267("STRING_1145180906");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_267);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_267.insert(UnderlyingSecurityAltIDSource_267.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_267);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_255;
      FIX::UnderlyingStipType UnderlyingStipType_255("STRING_1116535705");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_255);
      UnderlyingStipulations_NoUnderlyingStips_255.insert(UnderlyingStipType_255.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_255("STRING_2087192638");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_255);
      UnderlyingStipulations_NoUnderlyingStips_255.insert(UnderlyingStipValue_255.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_255);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_256;
      FIX::UnderlyingStipType UnderlyingStipType_256("STRING_181022827");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_256);
      UnderlyingStipulations_NoUnderlyingStips_256.insert(UnderlyingStipType_256.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_256("STRING_2132622445");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_256);
      UnderlyingStipulations_NoUnderlyingStips_256.insert(UnderlyingStipValue_256.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_256);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_257;
      FIX::UnderlyingStipType UnderlyingStipType_257("STRING_264278018");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_257);
      UnderlyingStipulations_NoUnderlyingStips_257.insert(UnderlyingStipType_257.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_257("STRING_753584363");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_257);
      UnderlyingStipulations_NoUnderlyingStips_257.insert(UnderlyingStipValue_257.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_257);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_265;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_265("STRING_2112870000");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyID_265.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_265('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyIDSource_265.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_265(1146082487);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyRole_265.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_265);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_519("STRING_1288304507");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_519);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519.insert(UnderlyingInstrumentPartySubID_519.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_519(2044805287);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_519);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519.insert(UnderlyingInstrumentPartySubIDType_519.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_520("STRING_313198270");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_520);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520.insert(UnderlyingInstrumentPartySubID_520.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_520(1550834303);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_520);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520.insert(UnderlyingInstrumentPartySubIDType_520.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_266;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_266("STRING_935478888");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyID_266.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_266('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyIDSource_266.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_266(638489511);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyRole_266.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_266);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_521("STRING_1427388773");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_521);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521.insert(UnderlyingInstrumentPartySubID_521.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_521(128415657);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_521);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521.insert(UnderlyingInstrumentPartySubIDType_521.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_267;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_267("STRING_870160368");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyID_267.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_267('3');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyIDSource_267.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_267(1111616822);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyRole_267.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_267);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_522("STRING_491966480");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_522);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522.insert(UnderlyingInstrumentPartySubID_522.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_522(1348585404);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_522);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522.insert(UnderlyingInstrumentPartySubIDType_522.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_523("STRING_1288464282");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_523);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523.insert(UnderlyingInstrumentPartySubID_523.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_523(132502014);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_523);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523.insert(UnderlyingInstrumentPartySubIDType_523.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
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
