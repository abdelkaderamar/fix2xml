#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CollateralRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralRequest msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralRequest_0;
  FIX::Account Account_8("STRING_788201075");
  msg.set(Account_8);
  CollateralRequest_0.insert(Account_8.getString());
  FIX::AccountType AccountType_5(6);
  msg.set(AccountType_5);
  CollateralRequest_0.insert(AccountType_5.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_6;
  AccruedInterestAmt_6.setString("13493529");
  msg.set(AccruedInterestAmt_6);
  CollateralRequest_0.insert(AccruedInterestAmt_6.getString());
  FIX::CashOutstanding CashOutstanding_3;
  CashOutstanding_3.setString("19555661");
  msg.set(CashOutstanding_3);
  CollateralRequest_0.insert(CashOutstanding_3.getString());
  FIX::ClOrdID ClOrdID_10("STRING_1865014761");
  msg.set(ClOrdID_10);
  CollateralRequest_0.insert(ClOrdID_10.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_10("LOCALMKTDATE_562186634");
  msg.set(ClearingBusinessDate_10);
  CollateralRequest_0.insert(ClearingBusinessDate_10.getString());
  FIX::CollAsgnReason CollAsgnReason_1(6);
  msg.set(CollAsgnReason_1);
  CollateralRequest_0.insert(CollAsgnReason_1.getString());
  FIX::CollReqID CollReqID_1("STRING_1041177095");
  msg.set(CollReqID_1);
  CollateralRequest_0.insert(CollReqID_1.getString());
  FIX::Currency Currency_10("EUR");
  msg.set(Currency_10);
  CollateralRequest_0.insert(Currency_10.getString());
  FIX::EncodedText EncodedText_19("DATA_117998338");
  msg.set(EncodedText_19);
  CollateralRequest_0.insert(EncodedText_19.getString());
  FIX::EncodedTextLen EncodedTextLen_19(1101950947);
  msg.set(EncodedTextLen_19);
  CollateralRequest_0.insert(EncodedTextLen_19.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_6;
  EndAccruedInterestAmt_6.setString("21453313");
  msg.set(EndAccruedInterestAmt_6);
  CollateralRequest_0.insert(EndAccruedInterestAmt_6.getString());
  FIX::EndCash EndCash_6;
  EndCash_6.setString("20174000");
  msg.set(EndCash_6);
  CollateralRequest_0.insert(EndCash_6.getString());
  FIX::ExpireTime ExpireTime_1(FIX::UTCTIMESTAMP(10, 33, 17, 23, 10, 2009));
  msg.set(ExpireTime_1);
  CollateralRequest_0.insert(ExpireTime_1.getString());
  FIX::MarginExcess MarginExcess_3;
  MarginExcess_3.setString("9152529");
  msg.set(MarginExcess_3);
  CollateralRequest_0.insert(MarginExcess_3.getString());
  FIX::OrderID OrderID_10("STRING_111193544");
  msg.set(OrderID_10);
  CollateralRequest_0.insert(OrderID_10.getString());
  FIX::Price Price_7;
  Price_7.setString("19493605");
  msg.set(Price_7);
  CollateralRequest_0.insert(Price_7.getString());
  FIX::PriceType PriceType_9(14);
  msg.set(PriceType_9);
  CollateralRequest_0.insert(PriceType_9.getString());
  FIX::QtyType QtyType_8(1);
  msg.set(QtyType_8);
  CollateralRequest_0.insert(QtyType_8.getString());
  FIX::Quantity Quantity_9;
  Quantity_9.setString("14021798");
  msg.set(Quantity_9);
  CollateralRequest_0.insert(Quantity_9.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_10("STRING_776153798");
  msg.set(SecondaryClOrdID_10);
  CollateralRequest_0.insert(SecondaryClOrdID_10.getString());
  FIX::SecondaryOrderID SecondaryOrderID_10("STRING_333355425");
  msg.set(SecondaryOrderID_10);
  CollateralRequest_0.insert(SecondaryOrderID_10.getString());
  FIX::SettlDate SettlDate_13("LOCALMKTDATE_927148262");
  msg.set(SettlDate_13);
  CollateralRequest_0.insert(SettlDate_13.getString());
  FIX::SettlSessID SettlSessID_6("STRING_ITD");
  msg.set(SettlSessID_6);
  CollateralRequest_0.insert(SettlSessID_6.getString());
  FIX::SettlSessSubID SettlSessSubID_5("STRING_1121556500");
  msg.set(SettlSessSubID_5);
  CollateralRequest_0.insert(SettlSessSubID_5.getString());
  FIX::Side Side_12('F');
  msg.set(Side_12);
  CollateralRequest_0.insert(Side_12.getString());
  FIX::StartCash StartCash_6;
  StartCash_6.setString("18309911");
  msg.set(StartCash_6);
  CollateralRequest_0.insert(StartCash_6.getString());
  FIX::Text Text_19("STRING_929638998");
  msg.set(Text_19);
  CollateralRequest_0.insert(Text_19.getString());
  FIX::TotalNetValue TotalNetValue_3;
  TotalNetValue_3.setString("14313325");
  msg.set(TotalNetValue_3);
  CollateralRequest_0.insert(TotalNetValue_3.getString());
  FIX::TradingSessionID TradingSessionID_14("STRING_6");
  msg.set(TradingSessionID_14);
  CollateralRequest_0.insert(TradingSessionID_14.getString());
  FIX::TradingSessionSubID TradingSessionSubID_14("STRING_1");
  msg.set(TradingSessionSubID_14);
  CollateralRequest_0.insert(TradingSessionSubID_14.getString());
  FIX::TransactTime TransactTime_8(FIX::UTCTIMESTAMP(13, 59, 25, 1, 3, 2009));
  msg.set(TransactTime_8);
  CollateralRequest_0.insert(TransactTime_8.getString());
  all_values.push_back(CollateralRequest_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_7;
    FIX::ExecID ExecID_14("STRING_1087669116");
    noExecs_0_0.set(ExecID_14);
    ExecCollGrp_NoExecs_7.insert(ExecID_14.getString());
    all_values.push_back(ExecCollGrp_NoExecs_7);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_8;
    FIX::ExecID ExecID_15("STRING_949009668");
    noExecs_0_1.set(ExecID_15);
    ExecCollGrp_NoExecs_8.insert(ExecID_15.getString());
    all_values.push_back(ExecCollGrp_NoExecs_8);

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_9;
    FIX::ExecID ExecID_16("STRING_20578527");
    noExecs_0_2.set(ExecID_16);
    ExecCollGrp_NoExecs_9.insert(ExecID_16.getString());
    all_values.push_back(ExecCollGrp_NoExecs_9);

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_7;
  FIX::AgreementCurrency AgreementCurrency_7("EUR");
  msg.set(AgreementCurrency_7);
  FinancingDetails_7.insert(AgreementCurrency_7.getString());
  FIX::AgreementDate AgreementDate_7("LOCALMKTDATE_42153012");
  msg.set(AgreementDate_7);
  FinancingDetails_7.insert(AgreementDate_7.getString());
  FIX::AgreementDesc AgreementDesc_7("STRING_391159903");
  msg.set(AgreementDesc_7);
  FinancingDetails_7.insert(AgreementDesc_7.getString());
  FIX::AgreementID AgreementID_7("STRING_447979630");
  msg.set(AgreementID_7);
  FinancingDetails_7.insert(AgreementID_7.getString());
  FIX::DeliveryType DeliveryType_7(3);
  msg.set(DeliveryType_7);
  FinancingDetails_7.insert(DeliveryType_7.getString());
  FIX::EndDate EndDate_7("LOCALMKTDATE_1327131134");
  msg.set(EndDate_7);
  FinancingDetails_7.insert(EndDate_7.getString());
  FIX::MarginRatio MarginRatio_7;
  MarginRatio_7.setString("34.290000");
  msg.set(MarginRatio_7);
  FinancingDetails_7.insert(MarginRatio_7.getString());
  FIX::StartDate StartDate_7("LOCALMKTDATE_1246209746");
  msg.set(StartDate_7);
  FinancingDetails_7.insert(StartDate_7.getString());
  FIX::TerminationType TerminationType_7(1);
  msg.set(TerminationType_7);
  FinancingDetails_7.insert(TerminationType_7.getString());
  all_values.push_back(FinancingDetails_7);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_15;
    FIX::EncodedLegIssuer EncodedLegIssuer_15("DATA_25874361");
    noLegs_0_0.set(EncodedLegIssuer_15);
    InstrumentLeg_15.insert(EncodedLegIssuer_15.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_15(437439557);
    noLegs_0_0.set(EncodedLegIssuerLen_15);
    InstrumentLeg_15.insert(EncodedLegIssuerLen_15.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_15("DATA_1262431707");
    noLegs_0_0.set(EncodedLegSecurityDesc_15);
    InstrumentLeg_15.insert(EncodedLegSecurityDesc_15.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_15(1739675767);
    noLegs_0_0.set(EncodedLegSecurityDescLen_15);
    InstrumentLeg_15.insert(EncodedLegSecurityDescLen_15.getString());
    FIX::LegCFICode LegCFICode_15("STRING_120947084");
    noLegs_0_0.set(LegCFICode_15);
    InstrumentLeg_15.insert(LegCFICode_15.getString());
    FIX::LegContractMultiplier LegContractMultiplier_15;
    LegContractMultiplier_15.setString("445870");
    noLegs_0_0.set(LegContractMultiplier_15);
    InstrumentLeg_15.insert(LegContractMultiplier_15.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_15(1023524639);
    noLegs_0_0.set(LegContractMultiplierUnit_15);
    InstrumentLeg_15.insert(LegContractMultiplierUnit_15.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_15("MONTHYEAR_366641245");
    noLegs_0_0.set(LegContractSettlMonth_15);
    InstrumentLeg_15.insert(LegContractSettlMonth_15.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_15("COUNTRY_282184950");
    noLegs_0_0.set(LegCountryOfIssue_15);
    InstrumentLeg_15.insert(LegCountryOfIssue_15.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_15("LOCALMKTDATE_1348550606");
    noLegs_0_0.set(LegCouponPaymentDate_15);
    InstrumentLeg_15.insert(LegCouponPaymentDate_15.getString());
    FIX::LegCouponRate LegCouponRate_15;
    LegCouponRate_15.setString("64.580000");
    noLegs_0_0.set(LegCouponRate_15);
    InstrumentLeg_15.insert(LegCouponRate_15.getString());
    FIX::LegCreditRating LegCreditRating_15("STRING_753020070");
    noLegs_0_0.set(LegCreditRating_15);
    InstrumentLeg_15.insert(LegCreditRating_15.getString());
    FIX::LegCurrency LegCurrency_15("CHF");
    noLegs_0_0.set(LegCurrency_15);
    InstrumentLeg_15.insert(LegCurrency_15.getString());
    FIX::LegDatedDate LegDatedDate_15("LOCALMKTDATE_1221702872");
    noLegs_0_0.set(LegDatedDate_15);
    InstrumentLeg_15.insert(LegDatedDate_15.getString());
    FIX::LegExerciseStyle LegExerciseStyle_15(2104515666);
    noLegs_0_0.set(LegExerciseStyle_15);
    InstrumentLeg_15.insert(LegExerciseStyle_15.getString());
    FIX::LegFactor LegFactor_15;
    LegFactor_15.setString("17362101");
    noLegs_0_0.set(LegFactor_15);
    InstrumentLeg_15.insert(LegFactor_15.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_15(161888341);
    noLegs_0_0.set(LegFlowScheduleType_15);
    InstrumentLeg_15.insert(LegFlowScheduleType_15.getString());
    FIX::LegInstrRegistry LegInstrRegistry_15("STRING_906041687");
    noLegs_0_0.set(LegInstrRegistry_15);
    InstrumentLeg_15.insert(LegInstrRegistry_15.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_15("LOCALMKTDATE_1756788696");
    noLegs_0_0.set(LegInterestAccrualDate_15);
    InstrumentLeg_15.insert(LegInterestAccrualDate_15.getString());
    FIX::LegIssueDate LegIssueDate_15("LOCALMKTDATE_1785278960");
    noLegs_0_0.set(LegIssueDate_15);
    InstrumentLeg_15.insert(LegIssueDate_15.getString());
    FIX::LegIssuer LegIssuer_15("STRING_1242827772");
    noLegs_0_0.set(LegIssuer_15);
    InstrumentLeg_15.insert(LegIssuer_15.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_15("STRING_1798941708");
    noLegs_0_0.set(LegLocaleOfIssue_15);
    InstrumentLeg_15.insert(LegLocaleOfIssue_15.getString());
    FIX::LegMaturityDate LegMaturityDate_15("LOCALMKTDATE_28955216");
    noLegs_0_0.set(LegMaturityDate_15);
    InstrumentLeg_15.insert(LegMaturityDate_15.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_15("MONTHYEAR_1690807402");
    noLegs_0_0.set(LegMaturityMonthYear_15);
    InstrumentLeg_15.insert(LegMaturityMonthYear_15.getString());
    FIX::LegMaturityTime LegMaturityTime_15("TZTIMEONLY_1642971619");
    noLegs_0_0.set(LegMaturityTime_15);
    InstrumentLeg_15.insert(LegMaturityTime_15.getString());
    FIX::LegOptAttribute LegOptAttribute_15('1');
    noLegs_0_0.set(LegOptAttribute_15);
    InstrumentLeg_15.insert(LegOptAttribute_15.getString());
    FIX::LegOptionRatio LegOptionRatio_15;
    LegOptionRatio_15.setString("14983271");
    noLegs_0_0.set(LegOptionRatio_15);
    InstrumentLeg_15.insert(LegOptionRatio_15.getString());
    FIX::LegPool LegPool_15("STRING_741697718");
    noLegs_0_0.set(LegPool_15);
    InstrumentLeg_15.insert(LegPool_15.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_15("STRING_1311887634");
    noLegs_0_0.set(LegPriceUnitOfMeasure_15);
    InstrumentLeg_15.insert(LegPriceUnitOfMeasure_15.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_15;
    LegPriceUnitOfMeasureQty_15.setString("16392023");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_15);
    InstrumentLeg_15.insert(LegPriceUnitOfMeasureQty_15.getString());
    FIX::LegProduct LegProduct_15(767572079);
    noLegs_0_0.set(LegProduct_15);
    InstrumentLeg_15.insert(LegProduct_15.getString());
    FIX::LegPutOrCall LegPutOrCall_15(1749327191);
    noLegs_0_0.set(LegPutOrCall_15);
    InstrumentLeg_15.insert(LegPutOrCall_15.getString());
    FIX::LegRatioQty LegRatioQty_15;
    LegRatioQty_15.setString("7541504");
    noLegs_0_0.set(LegRatioQty_15);
    InstrumentLeg_15.insert(LegRatioQty_15.getString());
    FIX::LegRedemptionDate LegRedemptionDate_15("LOCALMKTDATE_359764198");
    noLegs_0_0.set(LegRedemptionDate_15);
    InstrumentLeg_15.insert(LegRedemptionDate_15.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_15("STRING_1870274275");
    noLegs_0_0.set(LegRepoCollateralSecurityType_15);
    InstrumentLeg_15.insert(LegRepoCollateralSecurityType_15.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_15;
    LegRepurchaseRate_15.setString("75.080000");
    noLegs_0_0.set(LegRepurchaseRate_15);
    InstrumentLeg_15.insert(LegRepurchaseRate_15.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_15(1383288837);
    noLegs_0_0.set(LegRepurchaseTerm_15);
    InstrumentLeg_15.insert(LegRepurchaseTerm_15.getString());
    FIX::LegSecurityDesc LegSecurityDesc_15("STRING_89431872");
    noLegs_0_0.set(LegSecurityDesc_15);
    InstrumentLeg_15.insert(LegSecurityDesc_15.getString());
    FIX::LegSecurityExchange LegSecurityExchange_15("EXCHANGE_1080922459");
    noLegs_0_0.set(LegSecurityExchange_15);
    InstrumentLeg_15.insert(LegSecurityExchange_15.getString());
    FIX::LegSecurityID LegSecurityID_15("STRING_584355795");
    noLegs_0_0.set(LegSecurityID_15);
    InstrumentLeg_15.insert(LegSecurityID_15.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_15("STRING_1097618331");
    noLegs_0_0.set(LegSecurityIDSource_15);
    InstrumentLeg_15.insert(LegSecurityIDSource_15.getString());
    FIX::LegSecuritySubType LegSecuritySubType_15("STRING_1833942529");
    noLegs_0_0.set(LegSecuritySubType_15);
    InstrumentLeg_15.insert(LegSecuritySubType_15.getString());
    FIX::LegSecurityType LegSecurityType_15("STRING_228447059");
    noLegs_0_0.set(LegSecurityType_15);
    InstrumentLeg_15.insert(LegSecurityType_15.getString());
    FIX::LegSide LegSide_15('1');
    noLegs_0_0.set(LegSide_15);
    InstrumentLeg_15.insert(LegSide_15.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_15("STRING_908161753");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_15);
    InstrumentLeg_15.insert(LegStateOrProvinceOfIssue_15.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_15("EUR");
    noLegs_0_0.set(LegStrikeCurrency_15);
    InstrumentLeg_15.insert(LegStrikeCurrency_15.getString());
    FIX::LegStrikePrice LegStrikePrice_15;
    LegStrikePrice_15.setString("10700500");
    noLegs_0_0.set(LegStrikePrice_15);
    InstrumentLeg_15.insert(LegStrikePrice_15.getString());
    FIX::LegSymbol LegSymbol_15("STRING_1091520764");
    noLegs_0_0.set(LegSymbol_15);
    InstrumentLeg_15.insert(LegSymbol_15.getString());
    FIX::LegSymbolSfx LegSymbolSfx_15("STRING_899848871");
    noLegs_0_0.set(LegSymbolSfx_15);
    InstrumentLeg_15.insert(LegSymbolSfx_15.getString());
    FIX::LegTimeUnit LegTimeUnit_15("STRING_707845407");
    noLegs_0_0.set(LegTimeUnit_15);
    InstrumentLeg_15.insert(LegTimeUnit_15.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_15("STRING_186864889");
    noLegs_0_0.set(LegUnitOfMeasure_15);
    InstrumentLeg_15.insert(LegUnitOfMeasure_15.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_15;
    LegUnitOfMeasureQty_15.setString("5513069");
    noLegs_0_0.set(LegUnitOfMeasureQty_15);
    InstrumentLeg_15.insert(LegUnitOfMeasureQty_15.getString());
    all_values.push_back(InstrumentLeg_15);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_32;
      FIX::LegSecurityAltID LegSecurityAltID_32("STRING_1877672291");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_32);
      LegSecAltIDGrp_NoLegSecurityAltID_32.insert(LegSecurityAltID_32.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_32("STRING_46794903");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_32);
      LegSecAltIDGrp_NoLegSecurityAltID_32.insert(LegSecurityAltIDSource_32.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_32);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_33;
      FIX::LegSecurityAltID LegSecurityAltID_33("STRING_2092886973");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_33);
      LegSecAltIDGrp_NoLegSecurityAltID_33.insert(LegSecurityAltID_33.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_33("STRING_1228515827");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_33);
      LegSecAltIDGrp_NoLegSecurityAltID_33.insert(LegSecurityAltIDSource_33.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_33);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_34;
      FIX::LegSecurityAltID LegSecurityAltID_34("STRING_788492621");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_34);
      LegSecAltIDGrp_NoLegSecurityAltID_34.insert(LegSecurityAltID_34.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_34("STRING_1257290959");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_34);
      LegSecAltIDGrp_NoLegSecurityAltID_34.insert(LegSecurityAltIDSource_34.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_34);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_16;
    FIX::EncodedLegIssuer EncodedLegIssuer_16("DATA_720234570");
    noLegs_0_1.set(EncodedLegIssuer_16);
    InstrumentLeg_16.insert(EncodedLegIssuer_16.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_16(1556064700);
    noLegs_0_1.set(EncodedLegIssuerLen_16);
    InstrumentLeg_16.insert(EncodedLegIssuerLen_16.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_16("DATA_859134503");
    noLegs_0_1.set(EncodedLegSecurityDesc_16);
    InstrumentLeg_16.insert(EncodedLegSecurityDesc_16.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_16(1474385021);
    noLegs_0_1.set(EncodedLegSecurityDescLen_16);
    InstrumentLeg_16.insert(EncodedLegSecurityDescLen_16.getString());
    FIX::LegCFICode LegCFICode_16("STRING_1915828899");
    noLegs_0_1.set(LegCFICode_16);
    InstrumentLeg_16.insert(LegCFICode_16.getString());
    FIX::LegContractMultiplier LegContractMultiplier_16;
    LegContractMultiplier_16.setString("5819251");
    noLegs_0_1.set(LegContractMultiplier_16);
    InstrumentLeg_16.insert(LegContractMultiplier_16.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_16(125638881);
    noLegs_0_1.set(LegContractMultiplierUnit_16);
    InstrumentLeg_16.insert(LegContractMultiplierUnit_16.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_16("MONTHYEAR_1151634088");
    noLegs_0_1.set(LegContractSettlMonth_16);
    InstrumentLeg_16.insert(LegContractSettlMonth_16.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_16("COUNTRY_671357003");
    noLegs_0_1.set(LegCountryOfIssue_16);
    InstrumentLeg_16.insert(LegCountryOfIssue_16.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_16("LOCALMKTDATE_1206561340");
    noLegs_0_1.set(LegCouponPaymentDate_16);
    InstrumentLeg_16.insert(LegCouponPaymentDate_16.getString());
    FIX::LegCouponRate LegCouponRate_16;
    LegCouponRate_16.setString("98.840000");
    noLegs_0_1.set(LegCouponRate_16);
    InstrumentLeg_16.insert(LegCouponRate_16.getString());
    FIX::LegCreditRating LegCreditRating_16("STRING_1768975334");
    noLegs_0_1.set(LegCreditRating_16);
    InstrumentLeg_16.insert(LegCreditRating_16.getString());
    FIX::LegCurrency LegCurrency_16("EUR");
    noLegs_0_1.set(LegCurrency_16);
    InstrumentLeg_16.insert(LegCurrency_16.getString());
    FIX::LegDatedDate LegDatedDate_16("LOCALMKTDATE_1323308988");
    noLegs_0_1.set(LegDatedDate_16);
    InstrumentLeg_16.insert(LegDatedDate_16.getString());
    FIX::LegExerciseStyle LegExerciseStyle_16(1801181975);
    noLegs_0_1.set(LegExerciseStyle_16);
    InstrumentLeg_16.insert(LegExerciseStyle_16.getString());
    FIX::LegFactor LegFactor_16;
    LegFactor_16.setString("24323");
    noLegs_0_1.set(LegFactor_16);
    InstrumentLeg_16.insert(LegFactor_16.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_16(466369164);
    noLegs_0_1.set(LegFlowScheduleType_16);
    InstrumentLeg_16.insert(LegFlowScheduleType_16.getString());
    FIX::LegInstrRegistry LegInstrRegistry_16("STRING_723748421");
    noLegs_0_1.set(LegInstrRegistry_16);
    InstrumentLeg_16.insert(LegInstrRegistry_16.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_16("LOCALMKTDATE_1093953137");
    noLegs_0_1.set(LegInterestAccrualDate_16);
    InstrumentLeg_16.insert(LegInterestAccrualDate_16.getString());
    FIX::LegIssueDate LegIssueDate_16("LOCALMKTDATE_1366218035");
    noLegs_0_1.set(LegIssueDate_16);
    InstrumentLeg_16.insert(LegIssueDate_16.getString());
    FIX::LegIssuer LegIssuer_16("STRING_1431593828");
    noLegs_0_1.set(LegIssuer_16);
    InstrumentLeg_16.insert(LegIssuer_16.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_16("STRING_1280818026");
    noLegs_0_1.set(LegLocaleOfIssue_16);
    InstrumentLeg_16.insert(LegLocaleOfIssue_16.getString());
    FIX::LegMaturityDate LegMaturityDate_16("LOCALMKTDATE_1917524967");
    noLegs_0_1.set(LegMaturityDate_16);
    InstrumentLeg_16.insert(LegMaturityDate_16.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_16("MONTHYEAR_20910803");
    noLegs_0_1.set(LegMaturityMonthYear_16);
    InstrumentLeg_16.insert(LegMaturityMonthYear_16.getString());
    FIX::LegMaturityTime LegMaturityTime_16("TZTIMEONLY_1011006669");
    noLegs_0_1.set(LegMaturityTime_16);
    InstrumentLeg_16.insert(LegMaturityTime_16.getString());
    FIX::LegOptAttribute LegOptAttribute_16('1');
    noLegs_0_1.set(LegOptAttribute_16);
    InstrumentLeg_16.insert(LegOptAttribute_16.getString());
    FIX::LegOptionRatio LegOptionRatio_16;
    LegOptionRatio_16.setString("21137977");
    noLegs_0_1.set(LegOptionRatio_16);
    InstrumentLeg_16.insert(LegOptionRatio_16.getString());
    FIX::LegPool LegPool_16("STRING_92038849");
    noLegs_0_1.set(LegPool_16);
    InstrumentLeg_16.insert(LegPool_16.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_16("STRING_605328844");
    noLegs_0_1.set(LegPriceUnitOfMeasure_16);
    InstrumentLeg_16.insert(LegPriceUnitOfMeasure_16.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_16;
    LegPriceUnitOfMeasureQty_16.setString("12236050");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_16);
    InstrumentLeg_16.insert(LegPriceUnitOfMeasureQty_16.getString());
    FIX::LegProduct LegProduct_16(812273419);
    noLegs_0_1.set(LegProduct_16);
    InstrumentLeg_16.insert(LegProduct_16.getString());
    FIX::LegPutOrCall LegPutOrCall_16(13909897);
    noLegs_0_1.set(LegPutOrCall_16);
    InstrumentLeg_16.insert(LegPutOrCall_16.getString());
    FIX::LegRatioQty LegRatioQty_16;
    LegRatioQty_16.setString("20827395");
    noLegs_0_1.set(LegRatioQty_16);
    InstrumentLeg_16.insert(LegRatioQty_16.getString());
    FIX::LegRedemptionDate LegRedemptionDate_16("LOCALMKTDATE_139174792");
    noLegs_0_1.set(LegRedemptionDate_16);
    InstrumentLeg_16.insert(LegRedemptionDate_16.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_16("STRING_1929738796");
    noLegs_0_1.set(LegRepoCollateralSecurityType_16);
    InstrumentLeg_16.insert(LegRepoCollateralSecurityType_16.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_16;
    LegRepurchaseRate_16.setString("10.730000");
    noLegs_0_1.set(LegRepurchaseRate_16);
    InstrumentLeg_16.insert(LegRepurchaseRate_16.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_16(264813674);
    noLegs_0_1.set(LegRepurchaseTerm_16);
    InstrumentLeg_16.insert(LegRepurchaseTerm_16.getString());
    FIX::LegSecurityDesc LegSecurityDesc_16("STRING_933889236");
    noLegs_0_1.set(LegSecurityDesc_16);
    InstrumentLeg_16.insert(LegSecurityDesc_16.getString());
    FIX::LegSecurityExchange LegSecurityExchange_16("EXCHANGE_1188538076");
    noLegs_0_1.set(LegSecurityExchange_16);
    InstrumentLeg_16.insert(LegSecurityExchange_16.getString());
    FIX::LegSecurityID LegSecurityID_16("STRING_1471375014");
    noLegs_0_1.set(LegSecurityID_16);
    InstrumentLeg_16.insert(LegSecurityID_16.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_16("STRING_522395472");
    noLegs_0_1.set(LegSecurityIDSource_16);
    InstrumentLeg_16.insert(LegSecurityIDSource_16.getString());
    FIX::LegSecuritySubType LegSecuritySubType_16("STRING_810029762");
    noLegs_0_1.set(LegSecuritySubType_16);
    InstrumentLeg_16.insert(LegSecuritySubType_16.getString());
    FIX::LegSecurityType LegSecurityType_16("STRING_216911588");
    noLegs_0_1.set(LegSecurityType_16);
    InstrumentLeg_16.insert(LegSecurityType_16.getString());
    FIX::LegSide LegSide_16('3');
    noLegs_0_1.set(LegSide_16);
    InstrumentLeg_16.insert(LegSide_16.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_16("STRING_2133338751");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_16);
    InstrumentLeg_16.insert(LegStateOrProvinceOfIssue_16.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_16("GBP");
    noLegs_0_1.set(LegStrikeCurrency_16);
    InstrumentLeg_16.insert(LegStrikeCurrency_16.getString());
    FIX::LegStrikePrice LegStrikePrice_16;
    LegStrikePrice_16.setString("4522242");
    noLegs_0_1.set(LegStrikePrice_16);
    InstrumentLeg_16.insert(LegStrikePrice_16.getString());
    FIX::LegSymbol LegSymbol_16("STRING_594358336");
    noLegs_0_1.set(LegSymbol_16);
    InstrumentLeg_16.insert(LegSymbol_16.getString());
    FIX::LegSymbolSfx LegSymbolSfx_16("STRING_1435734277");
    noLegs_0_1.set(LegSymbolSfx_16);
    InstrumentLeg_16.insert(LegSymbolSfx_16.getString());
    FIX::LegTimeUnit LegTimeUnit_16("STRING_1818442302");
    noLegs_0_1.set(LegTimeUnit_16);
    InstrumentLeg_16.insert(LegTimeUnit_16.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_16("STRING_2025952165");
    noLegs_0_1.set(LegUnitOfMeasure_16);
    InstrumentLeg_16.insert(LegUnitOfMeasure_16.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_16;
    LegUnitOfMeasureQty_16.setString("5690686");
    noLegs_0_1.set(LegUnitOfMeasureQty_16);
    InstrumentLeg_16.insert(LegUnitOfMeasureQty_16.getString());
    all_values.push_back(InstrumentLeg_16);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_35;
      FIX::LegSecurityAltID LegSecurityAltID_35("STRING_2046862968");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_35);
      LegSecAltIDGrp_NoLegSecurityAltID_35.insert(LegSecurityAltID_35.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_35("STRING_1580075324");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_35);
      LegSecAltIDGrp_NoLegSecurityAltID_35.insert(LegSecurityAltIDSource_35.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_35);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_36;
      FIX::LegSecurityAltID LegSecurityAltID_36("STRING_1405319845");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_36);
      LegSecAltIDGrp_NoLegSecurityAltID_36.insert(LegSecurityAltID_36.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_36("STRING_2013177097");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_36);
      LegSecAltIDGrp_NoLegSecurityAltID_36.insert(LegSecurityAltIDSource_36.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_36);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_37;
      FIX::LegSecurityAltID LegSecurityAltID_37("STRING_1672114173");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_37);
      LegSecAltIDGrp_NoLegSecurityAltID_37.insert(LegSecurityAltID_37.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_37("STRING_2010648689");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_37);
      LegSecAltIDGrp_NoLegSecurityAltID_37.insert(LegSecurityAltIDSource_37.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_37);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_11;
  FIX::AttachmentPoint AttachmentPoint_11;
  AttachmentPoint_11.setString("85.370000");
  msg.set(AttachmentPoint_11);
  Instrument_11.insert(AttachmentPoint_11.getString());
  FIX::CFICode CFICode_11("STRING_336903945");
  msg.set(CFICode_11);
  Instrument_11.insert(CFICode_11.getString());
  FIX::CPProgram CPProgram_11(1);
  msg.set(CPProgram_11);
  Instrument_11.insert(CPProgram_11.getString());
  FIX::CPRegType CPRegType_11("STRING_1024554480");
  msg.set(CPRegType_11);
  Instrument_11.insert(CPRegType_11.getString());
  FIX::CapPrice CapPrice_11;
  CapPrice_11.setString("4760787");
  msg.set(CapPrice_11);
  Instrument_11.insert(CapPrice_11.getString());
  FIX::ContractMultiplier ContractMultiplier_11;
  ContractMultiplier_11.setString("18068137");
  msg.set(ContractMultiplier_11);
  Instrument_11.insert(ContractMultiplier_11.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_11(0);
  msg.set(ContractMultiplierUnit_11);
  Instrument_11.insert(ContractMultiplierUnit_11.getString());
  FIX::ContractSettlMonth ContractSettlMonth_11("MONTHYEAR_740892411");
  msg.set(ContractSettlMonth_11);
  Instrument_11.insert(ContractSettlMonth_11.getString());
  FIX::CountryOfIssue CountryOfIssue_11("COUNTRY_593219323");
  msg.set(CountryOfIssue_11);
  Instrument_11.insert(CountryOfIssue_11.getString());
  FIX::CouponPaymentDate CouponPaymentDate_11("LOCALMKTDATE_582789982");
  msg.set(CouponPaymentDate_11);
  Instrument_11.insert(CouponPaymentDate_11.getString());
  FIX::CouponRate CouponRate_11;
  CouponRate_11.setString("37.780000");
  msg.set(CouponRate_11);
  Instrument_11.insert(CouponRate_11.getString());
  FIX::CreditRating CreditRating_11("STRING_1115614795");
  msg.set(CreditRating_11);
  Instrument_11.insert(CreditRating_11.getString());
  FIX::DatedDate DatedDate_11("LOCALMKTDATE_1392819744");
  msg.set(DatedDate_11);
  Instrument_11.insert(DatedDate_11.getString());
  FIX::DetachmentPoint DetachmentPoint_11;
  DetachmentPoint_11.setString("53.660000");
  msg.set(DetachmentPoint_11);
  Instrument_11.insert(DetachmentPoint_11.getString());
  FIX::EncodedIssuer EncodedIssuer_11("DATA_1454963563");
  msg.set(EncodedIssuer_11);
  Instrument_11.insert(EncodedIssuer_11.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_11(1378674847);
  msg.set(EncodedIssuerLen_11);
  Instrument_11.insert(EncodedIssuerLen_11.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_11("DATA_152305281");
  msg.set(EncodedSecurityDesc_11);
  Instrument_11.insert(EncodedSecurityDesc_11.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_11(1796744703);
  msg.set(EncodedSecurityDescLen_11);
  Instrument_11.insert(EncodedSecurityDescLen_11.getString());
  FIX::ExerciseStyle ExerciseStyle_11(2);
  msg.set(ExerciseStyle_11);
  Instrument_11.insert(ExerciseStyle_11.getString());
  FIX::Factor Factor_11;
  Factor_11.setString("7466636");
  msg.set(Factor_11);
  Instrument_11.insert(Factor_11.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_11(true);
  msg.set(FlexProductEligibilityIndicator_11);
  Instrument_11.insert(FlexProductEligibilityIndicator_11.getString());
  FIX::FlexibleIndicator FlexibleIndicator_11(false);
  msg.set(FlexibleIndicator_11);
  Instrument_11.insert(FlexibleIndicator_11.getString());
  FIX::FloorPrice FloorPrice_11;
  FloorPrice_11.setString("6251321");
  msg.set(FloorPrice_11);
  Instrument_11.insert(FloorPrice_11.getString());
  FIX::FlowScheduleType FlowScheduleType_11(2);
  msg.set(FlowScheduleType_11);
  Instrument_11.insert(FlowScheduleType_11.getString());
  FIX::InstrRegistry InstrRegistry_11("STRING_942857743");
  msg.set(InstrRegistry_11);
  Instrument_11.insert(InstrRegistry_11.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_11('5');
  msg.set(InstrmtAssignmentMethod_11);
  Instrument_11.insert(InstrmtAssignmentMethod_11.getString());
  FIX::InterestAccrualDate InterestAccrualDate_11("LOCALMKTDATE_1086655663");
  msg.set(InterestAccrualDate_11);
  Instrument_11.insert(InterestAccrualDate_11.getString());
  FIX::IssueDate IssueDate_11("LOCALMKTDATE_200693940");
  msg.set(IssueDate_11);
  Instrument_11.insert(IssueDate_11.getString());
  FIX::Issuer Issuer_11("STRING_390204904");
  msg.set(Issuer_11);
  Instrument_11.insert(Issuer_11.getString());
  FIX::ListMethod ListMethod_11(1);
  msg.set(ListMethod_11);
  Instrument_11.insert(ListMethod_11.getString());
  FIX::LocaleOfIssue LocaleOfIssue_11("STRING_63858981");
  msg.set(LocaleOfIssue_11);
  Instrument_11.insert(LocaleOfIssue_11.getString());
  FIX::MaturityDate MaturityDate_11("LOCALMKTDATE_1479503441");
  msg.set(MaturityDate_11);
  Instrument_11.insert(MaturityDate_11.getString());
  FIX::MaturityMonthYear MaturityMonthYear_11("MONTHYEAR_948190134");
  msg.set(MaturityMonthYear_11);
  Instrument_11.insert(MaturityMonthYear_11.getString());
  FIX::MaturityTime MaturityTime_11("TZTIMEONLY_2088417568");
  msg.set(MaturityTime_11);
  Instrument_11.insert(MaturityTime_11.getString());
  FIX::MinPriceIncrement MinPriceIncrement_11;
  MinPriceIncrement_11.setString("3565742");
  msg.set(MinPriceIncrement_11);
  Instrument_11.insert(MinPriceIncrement_11.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_11;
  MinPriceIncrementAmount_11.setString("14242688");
  msg.set(MinPriceIncrementAmount_11);
  Instrument_11.insert(MinPriceIncrementAmount_11.getString());
  FIX::NTPositionLimit NTPositionLimit_11(1747747654);
  msg.set(NTPositionLimit_11);
  Instrument_11.insert(NTPositionLimit_11.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_11;
  NotionalPercentageOutstanding_11.setString("98.260000");
  msg.set(NotionalPercentageOutstanding_11);
  Instrument_11.insert(NotionalPercentageOutstanding_11.getString());
  FIX::OptAttribute OptAttribute_11('1');
  msg.set(OptAttribute_11);
  Instrument_11.insert(OptAttribute_11.getString());
  FIX::OptPayoutAmount OptPayoutAmount_11;
  OptPayoutAmount_11.setString("1934833");
  msg.set(OptPayoutAmount_11);
  Instrument_11.insert(OptPayoutAmount_11.getString());
  FIX::OptPayoutType OptPayoutType_11(3);
  msg.set(OptPayoutType_11);
  Instrument_11.insert(OptPayoutType_11.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_11;
  OriginalNotionalPercentageOutstanding_11.setString("14.130000");
  msg.set(OriginalNotionalPercentageOutstanding_11);
  Instrument_11.insert(OriginalNotionalPercentageOutstanding_11.getString());
  FIX::Pool Pool_11("STRING_1309098125");
  msg.set(Pool_11);
  Instrument_11.insert(Pool_11.getString());
  FIX::PositionLimit PositionLimit_11(1726435905);
  msg.set(PositionLimit_11);
  Instrument_11.insert(PositionLimit_11.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_11("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_11);
  Instrument_11.insert(PriceQuoteMethod_11.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_11("STRING_616578040");
  msg.set(PriceUnitOfMeasure_11);
  Instrument_11.insert(PriceUnitOfMeasure_11.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_11;
  PriceUnitOfMeasureQty_11.setString("9576271");
  msg.set(PriceUnitOfMeasureQty_11);
  Instrument_11.insert(PriceUnitOfMeasureQty_11.getString());
  FIX::Product Product_13(11);
  msg.set(Product_13);
  Instrument_11.insert(Product_13.getString());
  FIX::ProductComplex ProductComplex_11("STRING_265839095");
  msg.set(ProductComplex_11);
  Instrument_11.insert(ProductComplex_11.getString());
  FIX::PutOrCall PutOrCall_11(1);
  msg.set(PutOrCall_11);
  Instrument_11.insert(PutOrCall_11.getString());
  FIX::RedemptionDate RedemptionDate_11("LOCALMKTDATE_1263125677");
  msg.set(RedemptionDate_11);
  Instrument_11.insert(RedemptionDate_11.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_11("STRING_1350834427");
  msg.set(RepoCollateralSecurityType_11);
  Instrument_11.insert(RepoCollateralSecurityType_11.getString());
  FIX::RepurchaseRate RepurchaseRate_11;
  RepurchaseRate_11.setString("3.400000");
  msg.set(RepurchaseRate_11);
  Instrument_11.insert(RepurchaseRate_11.getString());
  FIX::RepurchaseTerm RepurchaseTerm_11(1888257812);
  msg.set(RepurchaseTerm_11);
  Instrument_11.insert(RepurchaseTerm_11.getString());
  FIX::RestructuringType RestructuringType_11("STRING_MM");
  msg.set(RestructuringType_11);
  Instrument_11.insert(RestructuringType_11.getString());
  FIX::SecurityDesc SecurityDesc_11("STRING_938274435");
  msg.set(SecurityDesc_11);
  Instrument_11.insert(SecurityDesc_11.getString());
  FIX::SecurityExchange SecurityExchange_11("EXCHANGE_265285619");
  msg.set(SecurityExchange_11);
  Instrument_11.insert(SecurityExchange_11.getString());
  FIX::SecurityGroup SecurityGroup_11("STRING_1944070429");
  msg.set(SecurityGroup_11);
  Instrument_11.insert(SecurityGroup_11.getString());
  FIX::SecurityID SecurityID_11("STRING_1138968375");
  msg.set(SecurityID_11);
  Instrument_11.insert(SecurityID_11.getString());
  FIX::SecurityIDSource SecurityIDSource_11("STRING_I");
  msg.set(SecurityIDSource_11);
  Instrument_11.insert(SecurityIDSource_11.getString());
  FIX::SecurityStatus SecurityStatus_11("STRING_1");
  msg.set(SecurityStatus_11);
  Instrument_11.insert(SecurityStatus_11.getString());
  FIX::SecuritySubType SecuritySubType_11("STRING_1202827356");
  msg.set(SecuritySubType_11);
  Instrument_11.insert(SecuritySubType_11.getString());
  FIX::SecurityType SecurityType_13("STRING_OOP");
  msg.set(SecurityType_13);
  Instrument_11.insert(SecurityType_13.getString());
  FIX::Seniority Seniority_11("STRING_SB");
  msg.set(Seniority_11);
  Instrument_11.insert(Seniority_11.getString());
  FIX::SettlMethod SettlMethod_11('C');
  msg.set(SettlMethod_11);
  Instrument_11.insert(SettlMethod_11.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_11("STRING_344084589");
  msg.set(SettleOnOpenFlag_11);
  Instrument_11.insert(SettleOnOpenFlag_11.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_11("STRING_632848328");
  msg.set(StateOrProvinceOfIssue_11);
  Instrument_11.insert(StateOrProvinceOfIssue_11.getString());
  FIX::StrikeCurrency StrikeCurrency_11("EUR");
  msg.set(StrikeCurrency_11);
  Instrument_11.insert(StrikeCurrency_11.getString());
  FIX::StrikeMultiplier StrikeMultiplier_11;
  StrikeMultiplier_11.setString("6505259");
  msg.set(StrikeMultiplier_11);
  Instrument_11.insert(StrikeMultiplier_11.getString());
  FIX::StrikePrice StrikePrice_11;
  StrikePrice_11.setString("9375086");
  msg.set(StrikePrice_11);
  Instrument_11.insert(StrikePrice_11.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_11(4);
  msg.set(StrikePriceBoundaryMethod_11);
  Instrument_11.insert(StrikePriceBoundaryMethod_11.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_11;
  StrikePriceBoundaryPrecision_11.setString("73.760000");
  msg.set(StrikePriceBoundaryPrecision_11);
  Instrument_11.insert(StrikePriceBoundaryPrecision_11.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_11(2);
  msg.set(StrikePriceDeterminationMethod_11);
  Instrument_11.insert(StrikePriceDeterminationMethod_11.getString());
  FIX::StrikeValue StrikeValue_11;
  StrikeValue_11.setString("74791");
  msg.set(StrikeValue_11);
  Instrument_11.insert(StrikeValue_11.getString());
  FIX::Symbol Symbol_11("STRING_1097144155");
  msg.set(Symbol_11);
  Instrument_11.insert(Symbol_11.getString());
  FIX::SymbolSfx SymbolSfx_11("STRING_WI");
  msg.set(SymbolSfx_11);
  Instrument_11.insert(SymbolSfx_11.getString());
  FIX::TimeUnit TimeUnit_11("STRING_H");
  msg.set(TimeUnit_11);
  Instrument_11.insert(TimeUnit_11.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_11(4);
  msg.set(UnderlyingPriceDeterminationMethod_11);
  Instrument_11.insert(UnderlyingPriceDeterminationMethod_11.getString());
  FIX::UnitOfMeasure UnitOfMeasure_11("STRING_MMBtu");
  msg.set(UnitOfMeasure_11);
  Instrument_11.insert(UnitOfMeasure_11.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_11;
  UnitOfMeasureQty_11.setString("16061488");
  msg.set(UnitOfMeasureQty_11);
  Instrument_11.insert(UnitOfMeasureQty_11.getString());
  FIX::ValuationMethod ValuationMethod_11("STRING_CDSD");
  msg.set(ValuationMethod_11);
  Instrument_11.insert(ValuationMethod_11.getString());
  all_values.push_back(Instrument_11);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_26;
    FIX::ComplexEventCondition ComplexEventCondition_26(1);
    noComplexEvents_0_0.set(ComplexEventCondition_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventCondition_26.getString());
    FIX::ComplexEventPrice ComplexEventPrice_26;
    ComplexEventPrice_26.setString("4700224");
    noComplexEvents_0_0.set(ComplexEventPrice_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPrice_26.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_26(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryMethod_26.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_26;
    ComplexEventPriceBoundaryPrecision_26.setString("63.390000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryPrecision_26.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_26(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceTimeType_26.getString());
    FIX::ComplexEventType ComplexEventType_26(5);
    noComplexEvents_0_0.set(ComplexEventType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventType_26.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_26;
    ComplexOptPayoutAmount_26.setString("15313247");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexOptPayoutAmount_26.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_26);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_56;
      FIX::ComplexEventEndDate ComplexEventEndDate_56(FIX::UTCTIMESTAMP(15, 26, 58, 19, 12, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_56);
      ComplexEventDates_NoComplexEventDates_56.insert(ComplexEventEndDate_56.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_56(FIX::UTCTIMESTAMP(7, 29, 47, 23, 2, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_56);
      ComplexEventDates_NoComplexEventDates_56.insert(ComplexEventStartDate_56.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_56);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_115;
        FIX::ComplexEventEndTime ComplexEventEndTime_115(FIX::UTCTIMEONLY(14, 57, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_115);
        ComplexEventTimes_NoComplexEventTimes_115.insert(ComplexEventEndTime_115.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_115(FIX::UTCTIMEONLY(6, 43, 46));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_115);
        ComplexEventTimes_NoComplexEventTimes_115.insert(ComplexEventStartTime_115.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_115);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_116;
        FIX::ComplexEventEndTime ComplexEventEndTime_116(FIX::UTCTIMEONLY(20, 35, 54));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_116);
        ComplexEventTimes_NoComplexEventTimes_116.insert(ComplexEventEndTime_116.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_116(FIX::UTCTIMEONLY(10, 28, 2));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_116);
        ComplexEventTimes_NoComplexEventTimes_116.insert(ComplexEventStartTime_116.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_116);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_117;
        FIX::ComplexEventEndTime ComplexEventEndTime_117(FIX::UTCTIMEONLY(11, 20, 10));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_117);
        ComplexEventTimes_NoComplexEventTimes_117.insert(ComplexEventEndTime_117.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_117(FIX::UTCTIMEONLY(0, 16, 29));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_117);
        ComplexEventTimes_NoComplexEventTimes_117.insert(ComplexEventStartTime_117.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_117);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_57;
      FIX::ComplexEventEndDate ComplexEventEndDate_57(FIX::UTCTIMESTAMP(13, 16, 26, 2, 2, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_57);
      ComplexEventDates_NoComplexEventDates_57.insert(ComplexEventEndDate_57.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_57(FIX::UTCTIMESTAMP(19, 31, 57, 25, 6, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_57);
      ComplexEventDates_NoComplexEventDates_57.insert(ComplexEventStartDate_57.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_57);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_118;
        FIX::ComplexEventEndTime ComplexEventEndTime_118(FIX::UTCTIMEONLY(8, 51, 22));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_118);
        ComplexEventTimes_NoComplexEventTimes_118.insert(ComplexEventEndTime_118.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_118(FIX::UTCTIMEONLY(1, 42, 2));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_118);
        ComplexEventTimes_NoComplexEventTimes_118.insert(ComplexEventStartTime_118.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_118);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_119;
        FIX::ComplexEventEndTime ComplexEventEndTime_119(FIX::UTCTIMEONLY(6, 14, 11));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_119);
        ComplexEventTimes_NoComplexEventTimes_119.insert(ComplexEventEndTime_119.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_119(FIX::UTCTIMEONLY(14, 19, 50));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_119);
        ComplexEventTimes_NoComplexEventTimes_119.insert(ComplexEventStartTime_119.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_119);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_120;
        FIX::ComplexEventEndTime ComplexEventEndTime_120(FIX::UTCTIMEONLY(8, 59, 43));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_120);
        ComplexEventTimes_NoComplexEventTimes_120.insert(ComplexEventEndTime_120.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_120(FIX::UTCTIMEONLY(0, 17, 40));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_120);
        ComplexEventTimes_NoComplexEventTimes_120.insert(ComplexEventStartTime_120.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_120);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_58;
      FIX::ComplexEventEndDate ComplexEventEndDate_58(FIX::UTCTIMESTAMP(17, 29, 44, 22, 7, 2002));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_58);
      ComplexEventDates_NoComplexEventDates_58.insert(ComplexEventEndDate_58.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_58(FIX::UTCTIMESTAMP(2, 59, 24, 2, 5, 2005));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_58);
      ComplexEventDates_NoComplexEventDates_58.insert(ComplexEventStartDate_58.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_58);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_121;
        FIX::ComplexEventEndTime ComplexEventEndTime_121(FIX::UTCTIMEONLY(17, 59, 37));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_121);
        ComplexEventTimes_NoComplexEventTimes_121.insert(ComplexEventEndTime_121.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_121(FIX::UTCTIMEONLY(5, 57, 8));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_121);
        ComplexEventTimes_NoComplexEventTimes_121.insert(ComplexEventStartTime_121.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_121);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_122;
        FIX::ComplexEventEndTime ComplexEventEndTime_122(FIX::UTCTIMEONLY(21, 7, 54));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_122);
        ComplexEventTimes_NoComplexEventTimes_122.insert(ComplexEventEndTime_122.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_122(FIX::UTCTIMEONLY(19, 4, 20));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_122);
        ComplexEventTimes_NoComplexEventTimes_122.insert(ComplexEventStartTime_122.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_122);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_123;
        FIX::ComplexEventEndTime ComplexEventEndTime_123(FIX::UTCTIMEONLY(9, 42, 15));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_123);
        ComplexEventTimes_NoComplexEventTimes_123.insert(ComplexEventEndTime_123.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_123(FIX::UTCTIMEONLY(12, 15, 14));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_123);
        ComplexEventTimes_NoComplexEventTimes_123.insert(ComplexEventStartTime_123.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_123);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_27;
    FIX::ComplexEventCondition ComplexEventCondition_27(1);
    noComplexEvents_0_1.set(ComplexEventCondition_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventCondition_27.getString());
    FIX::ComplexEventPrice ComplexEventPrice_27;
    ComplexEventPrice_27.setString("12449873");
    noComplexEvents_0_1.set(ComplexEventPrice_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPrice_27.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_27(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryMethod_27.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_27;
    ComplexEventPriceBoundaryPrecision_27.setString("87.690000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryPrecision_27.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_27(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceTimeType_27.getString());
    FIX::ComplexEventType ComplexEventType_27(9);
    noComplexEvents_0_1.set(ComplexEventType_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexEventType_27.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_27;
    ComplexOptPayoutAmount_27.setString("14297620");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_27);
    ComplexEvents_NoComplexEvents_27.insert(ComplexOptPayoutAmount_27.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_27);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_59;
      FIX::ComplexEventEndDate ComplexEventEndDate_59(FIX::UTCTIMESTAMP(8, 50, 52, 10, 12, 2013));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_59);
      ComplexEventDates_NoComplexEventDates_59.insert(ComplexEventEndDate_59.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_59(FIX::UTCTIMESTAMP(12, 8, 43, 12, 9, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_59);
      ComplexEventDates_NoComplexEventDates_59.insert(ComplexEventStartDate_59.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_59);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_124;
        FIX::ComplexEventEndTime ComplexEventEndTime_124(FIX::UTCTIMEONLY(0, 59, 9));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_124);
        ComplexEventTimes_NoComplexEventTimes_124.insert(ComplexEventEndTime_124.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_124(FIX::UTCTIMEONLY(15, 16, 50));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_124);
        ComplexEventTimes_NoComplexEventTimes_124.insert(ComplexEventStartTime_124.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_124);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_125;
        FIX::ComplexEventEndTime ComplexEventEndTime_125(FIX::UTCTIMEONLY(10, 12, 46));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_125);
        ComplexEventTimes_NoComplexEventTimes_125.insert(ComplexEventEndTime_125.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_125(FIX::UTCTIMEONLY(10, 32, 5));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_125);
        ComplexEventTimes_NoComplexEventTimes_125.insert(ComplexEventStartTime_125.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_125);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_126;
        FIX::ComplexEventEndTime ComplexEventEndTime_126(FIX::UTCTIMEONLY(16, 55, 53));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_126);
        ComplexEventTimes_NoComplexEventTimes_126.insert(ComplexEventEndTime_126.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_126(FIX::UTCTIMEONLY(22, 46, 43));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_126);
        ComplexEventTimes_NoComplexEventTimes_126.insert(ComplexEventStartTime_126.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_126);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_21;
    FIX::EventDate EventDate_21("LOCALMKTDATE_880573546");
    noEvents_0_0.set(EventDate_21);
    EvntGrp_NoEvents_21.insert(EventDate_21.getString());
    FIX::EventPx EventPx_21;
    EventPx_21.setString("6195240");
    noEvents_0_0.set(EventPx_21);
    EvntGrp_NoEvents_21.insert(EventPx_21.getString());
    FIX::EventText EventText_21("STRING_999924175");
    noEvents_0_0.set(EventText_21);
    EvntGrp_NoEvents_21.insert(EventText_21.getString());
    FIX::EventTime EventTime_21(FIX::UTCTIMESTAMP(6, 12, 13, 19, 4, 2014));
    noEvents_0_0.set(EventTime_21);
    EvntGrp_NoEvents_21.insert(EventTime_21.getString());
    FIX::EventType EventType_21(99);
    noEvents_0_0.set(EventType_21);
    EvntGrp_NoEvents_21.insert(EventType_21.getString());
    all_values.push_back(EvntGrp_NoEvents_21);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_17;
    FIX::InstrumentPartyID InstrumentPartyID_17("STRING_1248563911");
    noInstrumentParties_0_0.set(InstrumentPartyID_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyID_17.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_17('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyIDSource_17.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_17(774191880);
    noInstrumentParties_0_0.set(InstrumentPartyRole_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyRole_17.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_17);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39;
      FIX::InstrumentPartySubID InstrumentPartySubID_39("STRING_920054813");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_39);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39.insert(InstrumentPartySubID_39.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_39(2001410926);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_39);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39.insert(InstrumentPartySubIDType_39.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_18;
    FIX::InstrumentPartyID InstrumentPartyID_18("STRING_937651958");
    noInstrumentParties_0_1.set(InstrumentPartyID_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyID_18.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_18('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyIDSource_18.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_18(363424750);
    noInstrumentParties_0_1.set(InstrumentPartyRole_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyRole_18.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_18);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40;
      FIX::InstrumentPartySubID InstrumentPartySubID_40("STRING_1466807368");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_40);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40.insert(InstrumentPartySubID_40.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_40(962742687);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_40);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40.insert(InstrumentPartySubIDType_40.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41;
      FIX::InstrumentPartySubID InstrumentPartySubID_41("STRING_1637653411");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_41);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41.insert(InstrumentPartySubID_41.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_41(1088970373);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_41);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41.insert(InstrumentPartySubIDType_41.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42;
      FIX::InstrumentPartySubID InstrumentPartySubID_42("STRING_1884416541");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_42);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42.insert(InstrumentPartySubID_42.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_42(1141658458);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_42);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42.insert(InstrumentPartySubIDType_42.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_23;
    FIX::SecurityAltID SecurityAltID_23("STRING_1179430437");
    noSecurityAltID_0_0.set(SecurityAltID_23);
    SecAltIDGrp_NoSecurityAltID_23.insert(SecurityAltID_23.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_23("STRING_1346750989");
    noSecurityAltID_0_0.set(SecurityAltIDSource_23);
    SecAltIDGrp_NoSecurityAltID_23.insert(SecurityAltIDSource_23.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_23);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_22;
  FIX::SecurityXML SecurityXML_23("XMLDATA_991358137");
  msg.set(SecurityXML_23);
  FIX::SecurityXMLLen SecurityXMLLen_11(1798954516);
  msg.set(SecurityXMLLen_11);
  FIX::SecurityXMLSchema SecurityXMLSchema_11("STRING_199191516");
  msg.set(SecurityXMLSchema_11);
  SecurityXML_22.insert(SecurityXMLSchema_11.getString());
  all_values.push_back(SecurityXML_22);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_15;
    FIX::MiscFeeAmt MiscFeeAmt_15;
    MiscFeeAmt_15.setString("16020397");
    noMiscFees_0_0.set(MiscFeeAmt_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeAmt_15.getString());
    FIX::MiscFeeBasis MiscFeeBasis_15(1);
    noMiscFees_0_0.set(MiscFeeBasis_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeBasis_15.getString());
    FIX::MiscFeeCurr MiscFeeCurr_15("EUR");
    noMiscFees_0_0.set(MiscFeeCurr_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeCurr_15.getString());
    FIX::MiscFeeType MiscFeeType_15("STRING_9");
    noMiscFees_0_0.set(MiscFeeType_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeType_15.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_15);

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_29;
    FIX::PartyID PartyID_29("STRING_1930180776");
    noPartyIDs_0_0.set(PartyID_29);
    Parties_NoPartyIDs_29.insert(PartyID_29.getString());
    FIX::PartyIDSource PartyIDSource_29('H');
    noPartyIDs_0_0.set(PartyIDSource_29);
    Parties_NoPartyIDs_29.insert(PartyIDSource_29.getString());
    FIX::PartyRole PartyRole_29(76);
    noPartyIDs_0_0.set(PartyRole_29);
    Parties_NoPartyIDs_29.insert(PartyRole_29.getString());
    all_values.push_back(Parties_NoPartyIDs_29);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_60;
      FIX::PartySubID PartySubID_60("STRING_855550259");
      noPartySubIDs_0_1_0.set(PartySubID_60);
      PtysSubGrp_NoPartySubIDs_60.insert(PartySubID_60.getString());
      FIX::PartySubIDType PartySubIDType_60(17);
      noPartySubIDs_0_1_0.set(PartySubIDType_60);
      PtysSubGrp_NoPartySubIDs_60.insert(PartySubIDType_60.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_60);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_61;
      FIX::PartySubID PartySubID_61("STRING_669219783");
      noPartySubIDs_0_1_1.set(PartySubID_61);
      PtysSubGrp_NoPartySubIDs_61.insert(PartySubID_61.getString());
      FIX::PartySubIDType PartySubIDType_61(11);
      noPartySubIDs_0_1_1.set(PartySubIDType_61);
      PtysSubGrp_NoPartySubIDs_61.insert(PartySubIDType_61.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_61);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_62;
      FIX::PartySubID PartySubID_62("STRING_1649032974");
      noPartySubIDs_0_1_2.set(PartySubID_62);
      PtysSubGrp_NoPartySubIDs_62.insert(PartySubID_62.getString());
      FIX::PartySubIDType PartySubIDType_62(19);
      noPartySubIDs_0_1_2.set(PartySubIDType_62);
      PtysSubGrp_NoPartySubIDs_62.insert(PartySubIDType_62.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_62);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_30;
    FIX::PartyID PartyID_30("STRING_1072902288");
    noPartyIDs_0_1.set(PartyID_30);
    Parties_NoPartyIDs_30.insert(PartyID_30.getString());
    FIX::PartyIDSource PartyIDSource_30('C');
    noPartyIDs_0_1.set(PartyIDSource_30);
    Parties_NoPartyIDs_30.insert(PartyIDSource_30.getString());
    FIX::PartyRole PartyRole_30(76);
    noPartyIDs_0_1.set(PartyRole_30);
    Parties_NoPartyIDs_30.insert(PartyRole_30.getString());
    all_values.push_back(Parties_NoPartyIDs_30);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_63;
      FIX::PartySubID PartySubID_63("STRING_897207654");
      noPartySubIDs_1_1_0.set(PartySubID_63);
      PtysSubGrp_NoPartySubIDs_63.insert(PartySubID_63.getString());
      FIX::PartySubIDType PartySubIDType_63(26);
      noPartySubIDs_1_1_0.set(PartySubIDType_63);
      PtysSubGrp_NoPartySubIDs_63.insert(PartySubIDType_63.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_63);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_6;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_6("JPY");
  msg.set(BenchmarkCurveCurrency_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurveCurrency_6.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_6("STRING_SWAP");
  msg.set(BenchmarkCurveName_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurveName_6.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_6("STRING_804524657");
  msg.set(BenchmarkCurvePoint_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurvePoint_6.getString());
  FIX::BenchmarkPrice BenchmarkPrice_6;
  BenchmarkPrice_6.setString("12381334");
  msg.set(BenchmarkPrice_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkPrice_6.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_6(1188559524);
  msg.set(BenchmarkPriceType_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkPriceType_6.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_6("STRING_455995525");
  msg.set(BenchmarkSecurityID_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkSecurityID_6.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_6("STRING_1437324969");
  msg.set(BenchmarkSecurityIDSource_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkSecurityIDSource_6.getString());
  FIX::Spread Spread_6;
  Spread_6.setString("18966858");
  msg.set(Spread_6);
  SpreadOrBenchmarkCurveData_6.insert(Spread_6.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_6);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_11;
    FIX::StipulationType StipulationType_11("STRING_ABS");
    noStipulations_0_0.set(StipulationType_11);
    Stipulations_NoStipulations_11.insert(StipulationType_11.getString());
    FIX::StipulationValue StipulationValue_11("STRING_1912355045");
    noStipulations_0_0.set(StipulationValue_11);
    Stipulations_NoStipulations_11.insert(StipulationValue_11.getString());
    all_values.push_back(Stipulations_NoStipulations_11);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_12;
    FIX::StipulationType StipulationType_12("STRING_YIELD");
    noStipulations_0_1.set(StipulationType_12);
    Stipulations_NoStipulations_12.insert(StipulationType_12.getString());
    FIX::StipulationValue StipulationValue_12("STRING_416965167");
    noStipulations_0_1.set(StipulationValue_12);
    Stipulations_NoStipulations_12.insert(StipulationValue_12.getString());
    all_values.push_back(Stipulations_NoStipulations_12);

    msg.addGroup(noStipulations_0_1);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_7;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_7("STRING_1307363978");
    noTrades_0_0.set(SecondaryTradeReportID_7);
    TrdCollGrp_NoTrades_7.insert(SecondaryTradeReportID_7.getString());
    FIX::TradeReportID TradeReportID_7("STRING_498323546");
    noTrades_0_0.set(TradeReportID_7);
    TrdCollGrp_NoTrades_7.insert(TradeReportID_7.getString());
    all_values.push_back(TrdCollGrp_NoTrades_7);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_8;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_8("STRING_331929035");
    noTrades_0_1.set(SecondaryTradeReportID_8);
    TrdCollGrp_NoTrades_8.insert(SecondaryTradeReportID_8.getString());
    FIX::TradeReportID TradeReportID_8("STRING_1056528947");
    noTrades_0_1.set(TradeReportID_8);
    TrdCollGrp_NoTrades_8.insert(TradeReportID_8.getString());
    all_values.push_back(TrdCollGrp_NoTrades_8);

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_7;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_7("MULTIPLESTRINGVALUE_DIR");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskOrderHandlingInst_7.getString());
    FIX::DeskType DeskType_7("STRING_D");
    noTrdRegTimestamps_0_0.set(DeskType_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskType_7.getString());
    FIX::DeskTypeSource DeskTypeSource_7(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskTypeSource_7.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_7(FIX::UTCTIMESTAMP(1, 42, 8, 15, 2, 2012));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestamp_7.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_7("STRING_487734651");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestampOrigin_7.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_7(7);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestampType_7.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_7);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_8;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_8("MULTIPLESTRINGVALUE_CNH");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskOrderHandlingInst_8.getString());
    FIX::DeskType DeskType_8("STRING_O");
    noTrdRegTimestamps_0_1.set(DeskType_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskType_8.getString());
    FIX::DeskTypeSource DeskTypeSource_8(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskTypeSource_8.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_8(FIX::UTCTIMESTAMP(1, 53, 12, 5, 2, 2007));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestamp_8.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_8("STRING_1387569122");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestampOrigin_8.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_8(6);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestampType_8.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_8);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_2;
    FIX::CollAction CollAction_2(1);
    noUnderlyings_0_0.set(CollAction_2);
    UndInstrmtCollGrp_NoUnderlyings_2.insert(CollAction_2.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_2);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_19;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_19("DATA_210160916");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingIssuer_19.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_19(1094941968);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingIssuerLen_19.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_19("DATA_69874594");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingSecurityDesc_19.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_19(1266689864);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingSecurityDescLen_19.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_19;
    UnderlyingAdjustedQuantity_19.setString("3013321");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_19);
    UnderlyingInstrument_19.insert(UnderlyingAdjustedQuantity_19.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_19;
    UnderlyingAllocationPercent_19.setString("46.450000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_19);
    UnderlyingInstrument_19.insert(UnderlyingAllocationPercent_19.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_19;
    UnderlyingAttachmentPoint_19.setString("49.460000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_19);
    UnderlyingInstrument_19.insert(UnderlyingAttachmentPoint_19.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_19("STRING_217199819");
    noUnderlyings_0_0.set(UnderlyingCFICode_19);
    UnderlyingInstrument_19.insert(UnderlyingCFICode_19.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_19("STRING_1658044022");
    noUnderlyings_0_0.set(UnderlyingCPProgram_19);
    UnderlyingInstrument_19.insert(UnderlyingCPProgram_19.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_19("STRING_101342731");
    noUnderlyings_0_0.set(UnderlyingCPRegType_19);
    UnderlyingInstrument_19.insert(UnderlyingCPRegType_19.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_19;
    UnderlyingCapValue_19.setString("12059698");
    noUnderlyings_0_0.set(UnderlyingCapValue_19);
    UnderlyingInstrument_19.insert(UnderlyingCapValue_19.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_19;
    UnderlyingCashAmount_19.setString("14624576");
    noUnderlyings_0_0.set(UnderlyingCashAmount_19);
    UnderlyingInstrument_19.insert(UnderlyingCashAmount_19.getString());
    FIX::UnderlyingCashType UnderlyingCashType_19("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_19);
    UnderlyingInstrument_19.insert(UnderlyingCashType_19.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_19;
    UnderlyingContractMultiplier_19.setString("20829011");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_19);
    UnderlyingInstrument_19.insert(UnderlyingContractMultiplier_19.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_19(16595268);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_19);
    UnderlyingInstrument_19.insert(UnderlyingContractMultiplierUnit_19.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_19("COUNTRY_990395238");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingCountryOfIssue_19.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_19("LOCALMKTDATE_437442993");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_19);
    UnderlyingInstrument_19.insert(UnderlyingCouponPaymentDate_19.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_19;
    UnderlyingCouponRate_19.setString("90.060000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_19);
    UnderlyingInstrument_19.insert(UnderlyingCouponRate_19.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_19("STRING_1675331275");
    noUnderlyings_0_0.set(UnderlyingCreditRating_19);
    UnderlyingInstrument_19.insert(UnderlyingCreditRating_19.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_19("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_19);
    UnderlyingInstrument_19.insert(UnderlyingCurrency_19.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_19;
    UnderlyingCurrentValue_19.setString("14013431");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_19);
    UnderlyingInstrument_19.insert(UnderlyingCurrentValue_19.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_19;
    UnderlyingDetachmentPoint_19.setString("52.460000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_19);
    UnderlyingInstrument_19.insert(UnderlyingDetachmentPoint_19.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_19;
    UnderlyingDirtyPrice_19.setString("14142310");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_19);
    UnderlyingInstrument_19.insert(UnderlyingDirtyPrice_19.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_19;
    UnderlyingEndPrice_19.setString("8765572");
    noUnderlyings_0_0.set(UnderlyingEndPrice_19);
    UnderlyingInstrument_19.insert(UnderlyingEndPrice_19.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_19;
    UnderlyingEndValue_19.setString("8846689");
    noUnderlyings_0_0.set(UnderlyingEndValue_19);
    UnderlyingInstrument_19.insert(UnderlyingEndValue_19.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_19(1593884317);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_19);
    UnderlyingInstrument_19.insert(UnderlyingExerciseStyle_19.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_19;
    UnderlyingFXRate_19.setString("1166427");
    noUnderlyings_0_0.set(UnderlyingFXRate_19);
    UnderlyingInstrument_19.insert(UnderlyingFXRate_19.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_19('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_19);
    UnderlyingInstrument_19.insert(UnderlyingFXRateCalc_19.getString());
    FIX::UnderlyingFactor UnderlyingFactor_19;
    UnderlyingFactor_19.setString("430190");
    noUnderlyings_0_0.set(UnderlyingFactor_19);
    UnderlyingInstrument_19.insert(UnderlyingFactor_19.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_19(2002071948);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_19);
    UnderlyingInstrument_19.insert(UnderlyingFlowScheduleType_19.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_19("STRING_2145110486");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_19);
    UnderlyingInstrument_19.insert(UnderlyingInstrRegistry_19.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_19("LOCALMKTDATE_1137961059");
    noUnderlyings_0_0.set(UnderlyingIssueDate_19);
    UnderlyingInstrument_19.insert(UnderlyingIssueDate_19.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_19("STRING_2071946542");
    noUnderlyings_0_0.set(UnderlyingIssuer_19);
    UnderlyingInstrument_19.insert(UnderlyingIssuer_19.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_19("STRING_1264316702");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingLocaleOfIssue_19.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_19("LOCALMKTDATE_1439293184");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityDate_19.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_19("MONTHYEAR_1037647539");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityMonthYear_19.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_19("TZTIMEONLY_2109271648");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityTime_19.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_19;
    UnderlyingNotionalPercentageOutstanding_19.setString("30.030000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_19);
    UnderlyingInstrument_19.insert(UnderlyingNotionalPercentageOutstanding_19.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_19('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_19);
    UnderlyingInstrument_19.insert(UnderlyingOptAttribute_19.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_19;
    UnderlyingOriginalNotionalPercentageOutstanding_19.setString("7.320000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_19);
    UnderlyingInstrument_19.insert(UnderlyingOriginalNotionalPercentageOutstanding_19.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_19("STRING_714979157");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_19);
    UnderlyingInstrument_19.insert(UnderlyingPriceUnitOfMeasure_19.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_19;
    UnderlyingPriceUnitOfMeasureQty_19.setString("20106655");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_19);
    UnderlyingInstrument_19.insert(UnderlyingPriceUnitOfMeasureQty_19.getString());
    FIX::UnderlyingProduct UnderlyingProduct_19(565791319);
    noUnderlyings_0_0.set(UnderlyingProduct_19);
    UnderlyingInstrument_19.insert(UnderlyingProduct_19.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_19(650396621);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_19);
    UnderlyingInstrument_19.insert(UnderlyingPutOrCall_19.getString());
    FIX::UnderlyingPx UnderlyingPx_19;
    UnderlyingPx_19.setString("20272608");
    noUnderlyings_0_0.set(UnderlyingPx_19);
    UnderlyingInstrument_19.insert(UnderlyingPx_19.getString());
    FIX::UnderlyingQty UnderlyingQty_19;
    UnderlyingQty_19.setString("15561865");
    noUnderlyings_0_0.set(UnderlyingQty_19);
    UnderlyingInstrument_19.insert(UnderlyingQty_19.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_19("LOCALMKTDATE_1087839614");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_19);
    UnderlyingInstrument_19.insert(UnderlyingRedemptionDate_19.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_19("STRING_489376183");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_19);
    UnderlyingInstrument_19.insert(UnderlyingRepoCollateralSecurityType_19.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_19;
    UnderlyingRepurchaseRate_19.setString("41.840000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_19);
    UnderlyingInstrument_19.insert(UnderlyingRepurchaseRate_19.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_19(684349147);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_19);
    UnderlyingInstrument_19.insert(UnderlyingRepurchaseTerm_19.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_19("STRING_782628732");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_19);
    UnderlyingInstrument_19.insert(UnderlyingRestructuringType_19.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_19("STRING_337893725");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityDesc_19.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_19("EXCHANGE_2043404393");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityExchange_19.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_19("STRING_49376146");
    noUnderlyings_0_0.set(UnderlyingSecurityID_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityID_19.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_19("STRING_1214450992");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityIDSource_19.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_19("STRING_780589728");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_19);
    UnderlyingInstrument_19.insert(UnderlyingSecuritySubType_19.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_19("STRING_1643260463");
    noUnderlyings_0_0.set(UnderlyingSecurityType_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityType_19.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_19("STRING_1331093733");
    noUnderlyings_0_0.set(UnderlyingSeniority_19);
    UnderlyingInstrument_19.insert(UnderlyingSeniority_19.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_19("STRING_568055650");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_19);
    UnderlyingInstrument_19.insert(UnderlyingSettlMethod_19.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_19(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_19);
    UnderlyingInstrument_19.insert(UnderlyingSettlementType_19.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_19;
    UnderlyingStartValue_19.setString("11856820");
    noUnderlyings_0_0.set(UnderlyingStartValue_19);
    UnderlyingInstrument_19.insert(UnderlyingStartValue_19.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_19("STRING_565682488");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingStateOrProvinceOfIssue_19.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_19("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_19);
    UnderlyingInstrument_19.insert(UnderlyingStrikeCurrency_19.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_19;
    UnderlyingStrikePrice_19.setString("18299991");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_19);
    UnderlyingInstrument_19.insert(UnderlyingStrikePrice_19.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_19("STRING_2116050149");
    noUnderlyings_0_0.set(UnderlyingSymbol_19);
    UnderlyingInstrument_19.insert(UnderlyingSymbol_19.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_19("STRING_308818");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_19);
    UnderlyingInstrument_19.insert(UnderlyingSymbolSfx_19.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_19("STRING_1791787190");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_19);
    UnderlyingInstrument_19.insert(UnderlyingTimeUnit_19.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_19("STRING_1625059505");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_19);
    UnderlyingInstrument_19.insert(UnderlyingUnitOfMeasure_19.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_19;
    UnderlyingUnitOfMeasureQty_19.setString("5485167");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_19);
    UnderlyingInstrument_19.insert(UnderlyingUnitOfMeasureQty_19.getString());
    all_values.push_back(UnderlyingInstrument_19);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_42;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_42("STRING_192555014");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_42);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_42.insert(UnderlyingSecurityAltID_42.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_42("STRING_411698639");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_42);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_42.insert(UnderlyingSecurityAltIDSource_42.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_35;
      FIX::UnderlyingStipType UnderlyingStipType_35("STRING_842951635");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_35);
      UnderlyingStipulations_NoUnderlyingStips_35.insert(UnderlyingStipType_35.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_35("STRING_291475816");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_35);
      UnderlyingStipulations_NoUnderlyingStips_35.insert(UnderlyingStipValue_35.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_35);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_36;
      FIX::UnderlyingStipType UnderlyingStipType_36("STRING_1829412150");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_36);
      UnderlyingStipulations_NoUnderlyingStips_36.insert(UnderlyingStipType_36.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_36("STRING_1930791250");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_36);
      UnderlyingStipulations_NoUnderlyingStips_36.insert(UnderlyingStipValue_36.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_36);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_37;
      FIX::UnderlyingStipType UnderlyingStipType_37("STRING_780851999");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_37);
      UnderlyingStipulations_NoUnderlyingStips_37.insert(UnderlyingStipType_37.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_37("STRING_765962687");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_37);
      UnderlyingStipulations_NoUnderlyingStips_37.insert(UnderlyingStipValue_37.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_37);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_38;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_38("STRING_1563480731");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyID_38.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_38('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyIDSource_38.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_38(363577495);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyRole_38.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_38);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_84("STRING_170823756");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_84);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84.insert(UnderlyingInstrumentPartySubID_84.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_84(1144167223);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_84);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84.insert(UnderlyingInstrumentPartySubIDType_84.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_85("STRING_1108633693");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_85);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85.insert(UnderlyingInstrumentPartySubID_85.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_85(1501917489);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_85);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85.insert(UnderlyingInstrumentPartySubIDType_85.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_3;
    FIX::CollAction CollAction_3(2);
    noUnderlyings_0_1.set(CollAction_3);
    UndInstrmtCollGrp_NoUnderlyings_3.insert(CollAction_3.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_3);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_20;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_20("DATA_647429600");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingIssuer_20.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_20(540115874);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingIssuerLen_20.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_20("DATA_130421713");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingSecurityDesc_20.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_20(1324186565);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingSecurityDescLen_20.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_20;
    UnderlyingAdjustedQuantity_20.setString("16502608");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_20);
    UnderlyingInstrument_20.insert(UnderlyingAdjustedQuantity_20.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_20;
    UnderlyingAllocationPercent_20.setString("9.030000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_20);
    UnderlyingInstrument_20.insert(UnderlyingAllocationPercent_20.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_20;
    UnderlyingAttachmentPoint_20.setString("30.670000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_20);
    UnderlyingInstrument_20.insert(UnderlyingAttachmentPoint_20.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_20("STRING_1650569619");
    noUnderlyings_0_1.set(UnderlyingCFICode_20);
    UnderlyingInstrument_20.insert(UnderlyingCFICode_20.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_20("STRING_1604724446");
    noUnderlyings_0_1.set(UnderlyingCPProgram_20);
    UnderlyingInstrument_20.insert(UnderlyingCPProgram_20.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_20("STRING_770328924");
    noUnderlyings_0_1.set(UnderlyingCPRegType_20);
    UnderlyingInstrument_20.insert(UnderlyingCPRegType_20.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_20;
    UnderlyingCapValue_20.setString("516027");
    noUnderlyings_0_1.set(UnderlyingCapValue_20);
    UnderlyingInstrument_20.insert(UnderlyingCapValue_20.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_20;
    UnderlyingCashAmount_20.setString("13121587");
    noUnderlyings_0_1.set(UnderlyingCashAmount_20);
    UnderlyingInstrument_20.insert(UnderlyingCashAmount_20.getString());
    FIX::UnderlyingCashType UnderlyingCashType_20("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_20);
    UnderlyingInstrument_20.insert(UnderlyingCashType_20.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_20;
    UnderlyingContractMultiplier_20.setString("4633013");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_20);
    UnderlyingInstrument_20.insert(UnderlyingContractMultiplier_20.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_20(1585384314);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_20);
    UnderlyingInstrument_20.insert(UnderlyingContractMultiplierUnit_20.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_20("COUNTRY_1805835574");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingCountryOfIssue_20.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_20("LOCALMKTDATE_754777158");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_20);
    UnderlyingInstrument_20.insert(UnderlyingCouponPaymentDate_20.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_20;
    UnderlyingCouponRate_20.setString("28.160000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_20);
    UnderlyingInstrument_20.insert(UnderlyingCouponRate_20.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_20("STRING_1589143176");
    noUnderlyings_0_1.set(UnderlyingCreditRating_20);
    UnderlyingInstrument_20.insert(UnderlyingCreditRating_20.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_20("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_20);
    UnderlyingInstrument_20.insert(UnderlyingCurrency_20.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_20;
    UnderlyingCurrentValue_20.setString("20567999");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_20);
    UnderlyingInstrument_20.insert(UnderlyingCurrentValue_20.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_20;
    UnderlyingDetachmentPoint_20.setString("62.410000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_20);
    UnderlyingInstrument_20.insert(UnderlyingDetachmentPoint_20.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_20;
    UnderlyingDirtyPrice_20.setString("9896482");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_20);
    UnderlyingInstrument_20.insert(UnderlyingDirtyPrice_20.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_20;
    UnderlyingEndPrice_20.setString("2728937");
    noUnderlyings_0_1.set(UnderlyingEndPrice_20);
    UnderlyingInstrument_20.insert(UnderlyingEndPrice_20.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_20;
    UnderlyingEndValue_20.setString("4169994");
    noUnderlyings_0_1.set(UnderlyingEndValue_20);
    UnderlyingInstrument_20.insert(UnderlyingEndValue_20.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_20(1160472024);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_20);
    UnderlyingInstrument_20.insert(UnderlyingExerciseStyle_20.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_20;
    UnderlyingFXRate_20.setString("14170609");
    noUnderlyings_0_1.set(UnderlyingFXRate_20);
    UnderlyingInstrument_20.insert(UnderlyingFXRate_20.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_20('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_20);
    UnderlyingInstrument_20.insert(UnderlyingFXRateCalc_20.getString());
    FIX::UnderlyingFactor UnderlyingFactor_20;
    UnderlyingFactor_20.setString("5149058");
    noUnderlyings_0_1.set(UnderlyingFactor_20);
    UnderlyingInstrument_20.insert(UnderlyingFactor_20.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_20(981800221);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_20);
    UnderlyingInstrument_20.insert(UnderlyingFlowScheduleType_20.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_20("STRING_25579116");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_20);
    UnderlyingInstrument_20.insert(UnderlyingInstrRegistry_20.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_20("LOCALMKTDATE_1055021740");
    noUnderlyings_0_1.set(UnderlyingIssueDate_20);
    UnderlyingInstrument_20.insert(UnderlyingIssueDate_20.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_20("STRING_1112221935");
    noUnderlyings_0_1.set(UnderlyingIssuer_20);
    UnderlyingInstrument_20.insert(UnderlyingIssuer_20.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_20("STRING_1349765682");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingLocaleOfIssue_20.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_20("LOCALMKTDATE_557798894");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityDate_20.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_20("MONTHYEAR_925159190");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityMonthYear_20.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_20("TZTIMEONLY_495035101");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityTime_20.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_20;
    UnderlyingNotionalPercentageOutstanding_20.setString("48.650000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_20);
    UnderlyingInstrument_20.insert(UnderlyingNotionalPercentageOutstanding_20.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_20('3');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_20);
    UnderlyingInstrument_20.insert(UnderlyingOptAttribute_20.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_20;
    UnderlyingOriginalNotionalPercentageOutstanding_20.setString("40.250000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_20);
    UnderlyingInstrument_20.insert(UnderlyingOriginalNotionalPercentageOutstanding_20.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_20("STRING_112487568");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_20);
    UnderlyingInstrument_20.insert(UnderlyingPriceUnitOfMeasure_20.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_20;
    UnderlyingPriceUnitOfMeasureQty_20.setString("16945587");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_20);
    UnderlyingInstrument_20.insert(UnderlyingPriceUnitOfMeasureQty_20.getString());
    FIX::UnderlyingProduct UnderlyingProduct_20(80764315);
    noUnderlyings_0_1.set(UnderlyingProduct_20);
    UnderlyingInstrument_20.insert(UnderlyingProduct_20.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_20(575788911);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_20);
    UnderlyingInstrument_20.insert(UnderlyingPutOrCall_20.getString());
    FIX::UnderlyingPx UnderlyingPx_20;
    UnderlyingPx_20.setString("11324593");
    noUnderlyings_0_1.set(UnderlyingPx_20);
    UnderlyingInstrument_20.insert(UnderlyingPx_20.getString());
    FIX::UnderlyingQty UnderlyingQty_20;
    UnderlyingQty_20.setString("18865998");
    noUnderlyings_0_1.set(UnderlyingQty_20);
    UnderlyingInstrument_20.insert(UnderlyingQty_20.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_20("LOCALMKTDATE_1330566069");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_20);
    UnderlyingInstrument_20.insert(UnderlyingRedemptionDate_20.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_20("STRING_252288543");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_20);
    UnderlyingInstrument_20.insert(UnderlyingRepoCollateralSecurityType_20.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_20;
    UnderlyingRepurchaseRate_20.setString("94.170000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_20);
    UnderlyingInstrument_20.insert(UnderlyingRepurchaseRate_20.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_20(718711579);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_20);
    UnderlyingInstrument_20.insert(UnderlyingRepurchaseTerm_20.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_20("STRING_138080399");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_20);
    UnderlyingInstrument_20.insert(UnderlyingRestructuringType_20.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_20("STRING_1237575695");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityDesc_20.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_20("EXCHANGE_1670337820");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityExchange_20.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_20("STRING_1127728667");
    noUnderlyings_0_1.set(UnderlyingSecurityID_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityID_20.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_20("STRING_1510469467");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityIDSource_20.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_20("STRING_2087337291");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_20);
    UnderlyingInstrument_20.insert(UnderlyingSecuritySubType_20.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_20("STRING_140717043");
    noUnderlyings_0_1.set(UnderlyingSecurityType_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityType_20.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_20("STRING_780046815");
    noUnderlyings_0_1.set(UnderlyingSeniority_20);
    UnderlyingInstrument_20.insert(UnderlyingSeniority_20.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_20("STRING_1465486807");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_20);
    UnderlyingInstrument_20.insert(UnderlyingSettlMethod_20.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_20(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_20);
    UnderlyingInstrument_20.insert(UnderlyingSettlementType_20.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_20;
    UnderlyingStartValue_20.setString("17618470");
    noUnderlyings_0_1.set(UnderlyingStartValue_20);
    UnderlyingInstrument_20.insert(UnderlyingStartValue_20.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_20("STRING_1491065924");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingStateOrProvinceOfIssue_20.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_20("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_20);
    UnderlyingInstrument_20.insert(UnderlyingStrikeCurrency_20.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_20;
    UnderlyingStrikePrice_20.setString("6933479");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_20);
    UnderlyingInstrument_20.insert(UnderlyingStrikePrice_20.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_20("STRING_120959896");
    noUnderlyings_0_1.set(UnderlyingSymbol_20);
    UnderlyingInstrument_20.insert(UnderlyingSymbol_20.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_20("STRING_1651744514");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_20);
    UnderlyingInstrument_20.insert(UnderlyingSymbolSfx_20.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_20("STRING_1188383059");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_20);
    UnderlyingInstrument_20.insert(UnderlyingTimeUnit_20.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_20("STRING_181844761");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_20);
    UnderlyingInstrument_20.insert(UnderlyingUnitOfMeasure_20.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_20;
    UnderlyingUnitOfMeasureQty_20.setString("20341445");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_20);
    UnderlyingInstrument_20.insert(UnderlyingUnitOfMeasureQty_20.getString());
    all_values.push_back(UnderlyingInstrument_20);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_43;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_43("STRING_294332330");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_43);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_43.insert(UnderlyingSecurityAltID_43.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_43("STRING_1581219564");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_43);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_43.insert(UnderlyingSecurityAltIDSource_43.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_38;
      FIX::UnderlyingStipType UnderlyingStipType_38("STRING_870121241");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_38);
      UnderlyingStipulations_NoUnderlyingStips_38.insert(UnderlyingStipType_38.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_38("STRING_566195291");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_38);
      UnderlyingStipulations_NoUnderlyingStips_38.insert(UnderlyingStipValue_38.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_38);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_39;
      FIX::UnderlyingStipType UnderlyingStipType_39("STRING_126143993");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_39);
      UnderlyingStipulations_NoUnderlyingStips_39.insert(UnderlyingStipType_39.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_39("STRING_53203662");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_39);
      UnderlyingStipulations_NoUnderlyingStips_39.insert(UnderlyingStipValue_39.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_39);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_39;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_39("STRING_1454403410");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyID_39.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_39('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyIDSource_39.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_39(956564233);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyRole_39.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_39);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_86("STRING_294769413");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_86);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86.insert(UnderlyingInstrumentPartySubID_86.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_86(2084292900);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_86);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86.insert(UnderlyingInstrumentPartySubIDType_86.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_87("STRING_2054964925");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_87);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87.insert(UnderlyingInstrumentPartySubID_87.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_87(234623056);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_87);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87.insert(UnderlyingInstrumentPartySubIDType_87.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_88("STRING_77526296");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_88);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88.insert(UnderlyingInstrumentPartySubID_88.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_88(687528092);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_88);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88.insert(UnderlyingInstrumentPartySubIDType_88.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_40;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_40("STRING_1700109864");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyID_40.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_40('7');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyIDSource_40.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_40(301891481);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyRole_40.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_40);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_89("STRING_296310207");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_89);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89.insert(UnderlyingInstrumentPartySubID_89.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_89(1028476805);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_89);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89.insert(UnderlyingInstrumentPartySubIDType_89.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_41;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_41("STRING_1737040098");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyID_41.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_41('4');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyIDSource_41.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_41(532737672);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyRole_41.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_41);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_90("STRING_599114865");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_90);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90.insert(UnderlyingInstrumentPartySubID_90.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_90(419398527);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_90);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90.insert(UnderlyingInstrumentPartySubIDType_90.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_91("STRING_1084202945");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_91);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91.insert(UnderlyingInstrumentPartySubID_91.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_91(893447195);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_91);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91.insert(UnderlyingInstrumentPartySubIDType_91.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_92("STRING_2000618091");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_92);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92.insert(UnderlyingInstrumentPartySubID_92.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_92(1471230696);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_92);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92.insert(UnderlyingInstrumentPartySubIDType_92.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
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
