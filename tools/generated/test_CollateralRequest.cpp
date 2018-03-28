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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralRequest msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralRequest_0;
  FIX::Account Account_6("STRING_977753150");
  msg.set(Account_6);
  CollateralRequest_0.insert(Account_6.getString());
  FIX::AccountType AccountType_5(2);
  msg.set(AccountType_5);
  CollateralRequest_0.insert(AccountType_5.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_6;
  AccruedInterestAmt_6.setString("20071364");
  msg.set(AccruedInterestAmt_6);
  CollateralRequest_0.insert(AccruedInterestAmt_6.getString());
  FIX::CashOutstanding CashOutstanding_3;
  CashOutstanding_3.setString("14452718");
  msg.set(CashOutstanding_3);
  CollateralRequest_0.insert(CashOutstanding_3.getString());
  FIX::ClOrdID ClOrdID_11("STRING_1353156431");
  msg.set(ClOrdID_11);
  CollateralRequest_0.insert(ClOrdID_11.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_10("LOCALMKTDATE_1705632559");
  msg.set(ClearingBusinessDate_10);
  CollateralRequest_0.insert(ClearingBusinessDate_10.getString());
  FIX::CollAsgnReason CollAsgnReason_1(7);
  msg.set(CollAsgnReason_1);
  CollateralRequest_0.insert(CollAsgnReason_1.getString());
  FIX::CollReqID CollReqID_1("STRING_982772377");
  msg.set(CollReqID_1);
  CollateralRequest_0.insert(CollReqID_1.getString());
  FIX::Currency Currency_10("GBP");
  msg.set(Currency_10);
  CollateralRequest_0.insert(Currency_10.getString());
  FIX::EncodedText EncodedText_17("DATA_1954191837");
  msg.set(EncodedText_17);
  CollateralRequest_0.insert(EncodedText_17.getString());
  FIX::EncodedTextLen EncodedTextLen_17(113597487);
  msg.set(EncodedTextLen_17);
  CollateralRequest_0.insert(EncodedTextLen_17.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_6;
  EndAccruedInterestAmt_6.setString("7024127");
  msg.set(EndAccruedInterestAmt_6);
  CollateralRequest_0.insert(EndAccruedInterestAmt_6.getString());
  FIX::EndCash EndCash_6;
  EndCash_6.setString("6873299");
  msg.set(EndCash_6);
  CollateralRequest_0.insert(EndCash_6.getString());
  FIX::ExpireTime ExpireTime_1(FIX::UTCTIMESTAMP(16, 47, 13, 23, 2, 2002));
  msg.set(ExpireTime_1);
  CollateralRequest_0.insert(ExpireTime_1.getString());
  FIX::MarginExcess MarginExcess_3;
  MarginExcess_3.setString("13313728");
  msg.set(MarginExcess_3);
  CollateralRequest_0.insert(MarginExcess_3.getString());
  FIX::OrderID OrderID_11("STRING_662036689");
  msg.set(OrderID_11);
  CollateralRequest_0.insert(OrderID_11.getString());
  FIX::Price Price_5;
  Price_5.setString("14756994");
  msg.set(Price_5);
  CollateralRequest_0.insert(Price_5.getString());
  FIX::PriceType PriceType_7(10);
  msg.set(PriceType_7);
  CollateralRequest_0.insert(PriceType_7.getString());
  FIX::QtyType QtyType_8(0);
  msg.set(QtyType_8);
  CollateralRequest_0.insert(QtyType_8.getString());
  FIX::Quantity Quantity_9;
  Quantity_9.setString("5931199");
  msg.set(Quantity_9);
  CollateralRequest_0.insert(Quantity_9.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_11("STRING_1325389675");
  msg.set(SecondaryClOrdID_11);
  CollateralRequest_0.insert(SecondaryClOrdID_11.getString());
  FIX::SecondaryOrderID SecondaryOrderID_11("STRING_1572355339");
  msg.set(SecondaryOrderID_11);
  CollateralRequest_0.insert(SecondaryOrderID_11.getString());
  FIX::SettlDate SettlDate_9("LOCALMKTDATE_922940634");
  msg.set(SettlDate_9);
  CollateralRequest_0.insert(SettlDate_9.getString());
  FIX::SettlSessID SettlSessID_6("STRING_EOD");
  msg.set(SettlSessID_6);
  CollateralRequest_0.insert(SettlSessID_6.getString());
  FIX::SettlSessSubID SettlSessSubID_5("STRING_402624841");
  msg.set(SettlSessSubID_5);
  CollateralRequest_0.insert(SettlSessSubID_5.getString());
  FIX::Side Side_8('7');
  msg.set(Side_8);
  CollateralRequest_0.insert(Side_8.getString());
  FIX::StartCash StartCash_6;
  StartCash_6.setString("13021151");
  msg.set(StartCash_6);
  CollateralRequest_0.insert(StartCash_6.getString());
  FIX::Text Text_17("STRING_1847896726");
  msg.set(Text_17);
  CollateralRequest_0.insert(Text_17.getString());
  FIX::TotalNetValue TotalNetValue_3;
  TotalNetValue_3.setString("11582389");
  msg.set(TotalNetValue_3);
  CollateralRequest_0.insert(TotalNetValue_3.getString());
  FIX::TradingSessionID TradingSessionID_10("STRING_4");
  msg.set(TradingSessionID_10);
  CollateralRequest_0.insert(TradingSessionID_10.getString());
  FIX::TradingSessionSubID TradingSessionSubID_10("STRING_1");
  msg.set(TradingSessionSubID_10);
  CollateralRequest_0.insert(TradingSessionSubID_10.getString());
  FIX::TransactTime TransactTime_8(FIX::UTCTIMESTAMP(5, 34, 25, 21, 1, 2001));
  msg.set(TransactTime_8);
  CollateralRequest_0.insert(TransactTime_8.getString());
  all_values.push_back(CollateralRequest_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_6;
    FIX::ExecID ExecID_12("STRING_1877165488");
    noExecs_0_0.set(ExecID_12);
    ExecCollGrp_NoExecs_6.insert(ExecID_12.getString());
    all_values.push_back(ExecCollGrp_NoExecs_6);

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_7;
  FIX::AgreementCurrency AgreementCurrency_7("GBP");
  msg.set(AgreementCurrency_7);
  FinancingDetails_7.insert(AgreementCurrency_7.getString());
  FIX::AgreementDate AgreementDate_7("LOCALMKTDATE_171349719");
  msg.set(AgreementDate_7);
  FinancingDetails_7.insert(AgreementDate_7.getString());
  FIX::AgreementDesc AgreementDesc_7("STRING_625936346");
  msg.set(AgreementDesc_7);
  FinancingDetails_7.insert(AgreementDesc_7.getString());
  FIX::AgreementID AgreementID_7("STRING_1389865217");
  msg.set(AgreementID_7);
  FinancingDetails_7.insert(AgreementID_7.getString());
  FIX::DeliveryType DeliveryType_7(3);
  msg.set(DeliveryType_7);
  FinancingDetails_7.insert(DeliveryType_7.getString());
  FIX::EndDate EndDate_7("LOCALMKTDATE_1287973035");
  msg.set(EndDate_7);
  FinancingDetails_7.insert(EndDate_7.getString());
  FIX::MarginRatio MarginRatio_7;
  MarginRatio_7.setString("10.100000");
  msg.set(MarginRatio_7);
  FinancingDetails_7.insert(MarginRatio_7.getString());
  FIX::StartDate StartDate_7("LOCALMKTDATE_15296506");
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
    FIX::EncodedLegIssuer EncodedLegIssuer_15("DATA_1340686181");
    noLegs_0_0.set(EncodedLegIssuer_15);
    InstrumentLeg_15.insert(EncodedLegIssuer_15.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_15(930909795);
    noLegs_0_0.set(EncodedLegIssuerLen_15);
    InstrumentLeg_15.insert(EncodedLegIssuerLen_15.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_15("DATA_86657992");
    noLegs_0_0.set(EncodedLegSecurityDesc_15);
    InstrumentLeg_15.insert(EncodedLegSecurityDesc_15.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_15(635664880);
    noLegs_0_0.set(EncodedLegSecurityDescLen_15);
    InstrumentLeg_15.insert(EncodedLegSecurityDescLen_15.getString());
    FIX::LegCFICode LegCFICode_15("STRING_1333534636");
    noLegs_0_0.set(LegCFICode_15);
    InstrumentLeg_15.insert(LegCFICode_15.getString());
    FIX::LegContractMultiplier LegContractMultiplier_15;
    LegContractMultiplier_15.setString("20392241");
    noLegs_0_0.set(LegContractMultiplier_15);
    InstrumentLeg_15.insert(LegContractMultiplier_15.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_15(1937780030);
    noLegs_0_0.set(LegContractMultiplierUnit_15);
    InstrumentLeg_15.insert(LegContractMultiplierUnit_15.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_15("MONTHYEAR_1033947715");
    noLegs_0_0.set(LegContractSettlMonth_15);
    InstrumentLeg_15.insert(LegContractSettlMonth_15.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_15("COUNTRY_1049979397");
    noLegs_0_0.set(LegCountryOfIssue_15);
    InstrumentLeg_15.insert(LegCountryOfIssue_15.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_15("LOCALMKTDATE_650560443");
    noLegs_0_0.set(LegCouponPaymentDate_15);
    InstrumentLeg_15.insert(LegCouponPaymentDate_15.getString());
    FIX::LegCouponRate LegCouponRate_15;
    LegCouponRate_15.setString("15.290000");
    noLegs_0_0.set(LegCouponRate_15);
    InstrumentLeg_15.insert(LegCouponRate_15.getString());
    FIX::LegCreditRating LegCreditRating_15("STRING_1043507044");
    noLegs_0_0.set(LegCreditRating_15);
    InstrumentLeg_15.insert(LegCreditRating_15.getString());
    FIX::LegCurrency LegCurrency_15("CAN");
    noLegs_0_0.set(LegCurrency_15);
    InstrumentLeg_15.insert(LegCurrency_15.getString());
    FIX::LegDatedDate LegDatedDate_15("LOCALMKTDATE_843742881");
    noLegs_0_0.set(LegDatedDate_15);
    InstrumentLeg_15.insert(LegDatedDate_15.getString());
    FIX::LegExerciseStyle LegExerciseStyle_15(1488450149);
    noLegs_0_0.set(LegExerciseStyle_15);
    InstrumentLeg_15.insert(LegExerciseStyle_15.getString());
    FIX::LegFactor LegFactor_15;
    LegFactor_15.setString("4503096");
    noLegs_0_0.set(LegFactor_15);
    InstrumentLeg_15.insert(LegFactor_15.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_15(1331308667);
    noLegs_0_0.set(LegFlowScheduleType_15);
    InstrumentLeg_15.insert(LegFlowScheduleType_15.getString());
    FIX::LegInstrRegistry LegInstrRegistry_15("STRING_407458440");
    noLegs_0_0.set(LegInstrRegistry_15);
    InstrumentLeg_15.insert(LegInstrRegistry_15.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_15("LOCALMKTDATE_179991527");
    noLegs_0_0.set(LegInterestAccrualDate_15);
    InstrumentLeg_15.insert(LegInterestAccrualDate_15.getString());
    FIX::LegIssueDate LegIssueDate_15("LOCALMKTDATE_1903009620");
    noLegs_0_0.set(LegIssueDate_15);
    InstrumentLeg_15.insert(LegIssueDate_15.getString());
    FIX::LegIssuer LegIssuer_15("STRING_1430725125");
    noLegs_0_0.set(LegIssuer_15);
    InstrumentLeg_15.insert(LegIssuer_15.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_15("STRING_351341246");
    noLegs_0_0.set(LegLocaleOfIssue_15);
    InstrumentLeg_15.insert(LegLocaleOfIssue_15.getString());
    FIX::LegMaturityDate LegMaturityDate_15("LOCALMKTDATE_381462318");
    noLegs_0_0.set(LegMaturityDate_15);
    InstrumentLeg_15.insert(LegMaturityDate_15.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_15("MONTHYEAR_673106694");
    noLegs_0_0.set(LegMaturityMonthYear_15);
    InstrumentLeg_15.insert(LegMaturityMonthYear_15.getString());
    FIX::LegMaturityTime LegMaturityTime_15("TZTIMEONLY_1854063785");
    noLegs_0_0.set(LegMaturityTime_15);
    InstrumentLeg_15.insert(LegMaturityTime_15.getString());
    FIX::LegOptAttribute LegOptAttribute_15('1');
    noLegs_0_0.set(LegOptAttribute_15);
    InstrumentLeg_15.insert(LegOptAttribute_15.getString());
    FIX::LegOptionRatio LegOptionRatio_15;
    LegOptionRatio_15.setString("13911877");
    noLegs_0_0.set(LegOptionRatio_15);
    InstrumentLeg_15.insert(LegOptionRatio_15.getString());
    FIX::LegPool LegPool_15("STRING_1869360291");
    noLegs_0_0.set(LegPool_15);
    InstrumentLeg_15.insert(LegPool_15.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_15("STRING_1027989809");
    noLegs_0_0.set(LegPriceUnitOfMeasure_15);
    InstrumentLeg_15.insert(LegPriceUnitOfMeasure_15.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_15;
    LegPriceUnitOfMeasureQty_15.setString("5549050");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_15);
    InstrumentLeg_15.insert(LegPriceUnitOfMeasureQty_15.getString());
    FIX::LegProduct LegProduct_15(1062562824);
    noLegs_0_0.set(LegProduct_15);
    InstrumentLeg_15.insert(LegProduct_15.getString());
    FIX::LegPutOrCall LegPutOrCall_15(1958899604);
    noLegs_0_0.set(LegPutOrCall_15);
    InstrumentLeg_15.insert(LegPutOrCall_15.getString());
    FIX::LegRatioQty LegRatioQty_15;
    LegRatioQty_15.setString("6415630");
    noLegs_0_0.set(LegRatioQty_15);
    InstrumentLeg_15.insert(LegRatioQty_15.getString());
    FIX::LegRedemptionDate LegRedemptionDate_15("LOCALMKTDATE_1698227704");
    noLegs_0_0.set(LegRedemptionDate_15);
    InstrumentLeg_15.insert(LegRedemptionDate_15.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_15("STRING_1144950593");
    noLegs_0_0.set(LegRepoCollateralSecurityType_15);
    InstrumentLeg_15.insert(LegRepoCollateralSecurityType_15.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_15;
    LegRepurchaseRate_15.setString("35.330000");
    noLegs_0_0.set(LegRepurchaseRate_15);
    InstrumentLeg_15.insert(LegRepurchaseRate_15.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_15(1488524086);
    noLegs_0_0.set(LegRepurchaseTerm_15);
    InstrumentLeg_15.insert(LegRepurchaseTerm_15.getString());
    FIX::LegSecurityDesc LegSecurityDesc_15("STRING_31414660");
    noLegs_0_0.set(LegSecurityDesc_15);
    InstrumentLeg_15.insert(LegSecurityDesc_15.getString());
    FIX::LegSecurityExchange LegSecurityExchange_15("EXCHANGE_1583282930");
    noLegs_0_0.set(LegSecurityExchange_15);
    InstrumentLeg_15.insert(LegSecurityExchange_15.getString());
    FIX::LegSecurityID LegSecurityID_15("STRING_2139084529");
    noLegs_0_0.set(LegSecurityID_15);
    InstrumentLeg_15.insert(LegSecurityID_15.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_15("STRING_1905106189");
    noLegs_0_0.set(LegSecurityIDSource_15);
    InstrumentLeg_15.insert(LegSecurityIDSource_15.getString());
    FIX::LegSecuritySubType LegSecuritySubType_15("STRING_479306327");
    noLegs_0_0.set(LegSecuritySubType_15);
    InstrumentLeg_15.insert(LegSecuritySubType_15.getString());
    FIX::LegSecurityType LegSecurityType_15("STRING_1004307433");
    noLegs_0_0.set(LegSecurityType_15);
    InstrumentLeg_15.insert(LegSecurityType_15.getString());
    FIX::LegSide LegSide_15('5');
    noLegs_0_0.set(LegSide_15);
    InstrumentLeg_15.insert(LegSide_15.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_15("STRING_1323049208");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_15);
    InstrumentLeg_15.insert(LegStateOrProvinceOfIssue_15.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_15("EUR");
    noLegs_0_0.set(LegStrikeCurrency_15);
    InstrumentLeg_15.insert(LegStrikeCurrency_15.getString());
    FIX::LegStrikePrice LegStrikePrice_15;
    LegStrikePrice_15.setString("5068742");
    noLegs_0_0.set(LegStrikePrice_15);
    InstrumentLeg_15.insert(LegStrikePrice_15.getString());
    FIX::LegSymbol LegSymbol_15("STRING_752732375");
    noLegs_0_0.set(LegSymbol_15);
    InstrumentLeg_15.insert(LegSymbol_15.getString());
    FIX::LegSymbolSfx LegSymbolSfx_15("STRING_1198718010");
    noLegs_0_0.set(LegSymbolSfx_15);
    InstrumentLeg_15.insert(LegSymbolSfx_15.getString());
    FIX::LegTimeUnit LegTimeUnit_15("STRING_262400199");
    noLegs_0_0.set(LegTimeUnit_15);
    InstrumentLeg_15.insert(LegTimeUnit_15.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_15("STRING_35973852");
    noLegs_0_0.set(LegUnitOfMeasure_15);
    InstrumentLeg_15.insert(LegUnitOfMeasure_15.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_15;
    LegUnitOfMeasureQty_15.setString("15500592");
    noLegs_0_0.set(LegUnitOfMeasureQty_15);
    InstrumentLeg_15.insert(LegUnitOfMeasureQty_15.getString());
    all_values.push_back(InstrumentLeg_15);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_26;
      FIX::LegSecurityAltID LegSecurityAltID_26("STRING_709080546");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_26);
      LegSecAltIDGrp_NoLegSecurityAltID_26.insert(LegSecurityAltID_26.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_26("STRING_1256639393");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_26);
      LegSecAltIDGrp_NoLegSecurityAltID_26.insert(LegSecurityAltIDSource_26.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_26);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_12;
  FIX::AttachmentPoint AttachmentPoint_12;
  AttachmentPoint_12.setString("42.230000");
  msg.set(AttachmentPoint_12);
  Instrument_12.insert(AttachmentPoint_12.getString());
  FIX::CFICode CFICode_12("STRING_2100268250");
  msg.set(CFICode_12);
  Instrument_12.insert(CFICode_12.getString());
  FIX::CPProgram CPProgram_12(1);
  msg.set(CPProgram_12);
  Instrument_12.insert(CPProgram_12.getString());
  FIX::CPRegType CPRegType_12("STRING_1193804032");
  msg.set(CPRegType_12);
  Instrument_12.insert(CPRegType_12.getString());
  FIX::CapPrice CapPrice_12;
  CapPrice_12.setString("5076896");
  msg.set(CapPrice_12);
  Instrument_12.insert(CapPrice_12.getString());
  FIX::ContractMultiplier ContractMultiplier_12;
  ContractMultiplier_12.setString("20410788");
  msg.set(ContractMultiplier_12);
  Instrument_12.insert(ContractMultiplier_12.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_12(2);
  msg.set(ContractMultiplierUnit_12);
  Instrument_12.insert(ContractMultiplierUnit_12.getString());
  FIX::ContractSettlMonth ContractSettlMonth_12("MONTHYEAR_1149252719");
  msg.set(ContractSettlMonth_12);
  Instrument_12.insert(ContractSettlMonth_12.getString());
  FIX::CountryOfIssue CountryOfIssue_12("COUNTRY_1591822916");
  msg.set(CountryOfIssue_12);
  Instrument_12.insert(CountryOfIssue_12.getString());
  FIX::CouponPaymentDate CouponPaymentDate_12("LOCALMKTDATE_2686934");
  msg.set(CouponPaymentDate_12);
  Instrument_12.insert(CouponPaymentDate_12.getString());
  FIX::CouponRate CouponRate_12;
  CouponRate_12.setString("62.520000");
  msg.set(CouponRate_12);
  Instrument_12.insert(CouponRate_12.getString());
  FIX::CreditRating CreditRating_12("STRING_932863354");
  msg.set(CreditRating_12);
  Instrument_12.insert(CreditRating_12.getString());
  FIX::DatedDate DatedDate_12("LOCALMKTDATE_34101594");
  msg.set(DatedDate_12);
  Instrument_12.insert(DatedDate_12.getString());
  FIX::DetachmentPoint DetachmentPoint_12;
  DetachmentPoint_12.setString("55.350000");
  msg.set(DetachmentPoint_12);
  Instrument_12.insert(DetachmentPoint_12.getString());
  FIX::EncodedIssuer EncodedIssuer_12("DATA_924464235");
  msg.set(EncodedIssuer_12);
  Instrument_12.insert(EncodedIssuer_12.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_12(1939207783);
  msg.set(EncodedIssuerLen_12);
  Instrument_12.insert(EncodedIssuerLen_12.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_12("DATA_1597661862");
  msg.set(EncodedSecurityDesc_12);
  Instrument_12.insert(EncodedSecurityDesc_12.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_12(1928771668);
  msg.set(EncodedSecurityDescLen_12);
  Instrument_12.insert(EncodedSecurityDescLen_12.getString());
  FIX::ExerciseStyle ExerciseStyle_12(0);
  msg.set(ExerciseStyle_12);
  Instrument_12.insert(ExerciseStyle_12.getString());
  FIX::Factor Factor_12;
  Factor_12.setString("7732274");
  msg.set(Factor_12);
  Instrument_12.insert(Factor_12.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_12(false);
  msg.set(FlexProductEligibilityIndicator_12);
  Instrument_12.insert(FlexProductEligibilityIndicator_12.getString());
  FIX::FlexibleIndicator FlexibleIndicator_12(true);
  msg.set(FlexibleIndicator_12);
  Instrument_12.insert(FlexibleIndicator_12.getString());
  FIX::FloorPrice FloorPrice_12;
  FloorPrice_12.setString("12801016");
  msg.set(FloorPrice_12);
  Instrument_12.insert(FloorPrice_12.getString());
  FIX::FlowScheduleType FlowScheduleType_12(1);
  msg.set(FlowScheduleType_12);
  Instrument_12.insert(FlowScheduleType_12.getString());
  FIX::InstrRegistry InstrRegistry_12("STRING_430101776");
  msg.set(InstrRegistry_12);
  Instrument_12.insert(InstrRegistry_12.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_12('1');
  msg.set(InstrmtAssignmentMethod_12);
  Instrument_12.insert(InstrmtAssignmentMethod_12.getString());
  FIX::InterestAccrualDate InterestAccrualDate_12("LOCALMKTDATE_915268183");
  msg.set(InterestAccrualDate_12);
  Instrument_12.insert(InterestAccrualDate_12.getString());
  FIX::IssueDate IssueDate_12("LOCALMKTDATE_1980161032");
  msg.set(IssueDate_12);
  Instrument_12.insert(IssueDate_12.getString());
  FIX::Issuer Issuer_12("STRING_38880719");
  msg.set(Issuer_12);
  Instrument_12.insert(Issuer_12.getString());
  FIX::ListMethod ListMethod_12(0);
  msg.set(ListMethod_12);
  Instrument_12.insert(ListMethod_12.getString());
  FIX::LocaleOfIssue LocaleOfIssue_12("STRING_1089316777");
  msg.set(LocaleOfIssue_12);
  Instrument_12.insert(LocaleOfIssue_12.getString());
  FIX::MaturityDate MaturityDate_12("LOCALMKTDATE_204694942");
  msg.set(MaturityDate_12);
  Instrument_12.insert(MaturityDate_12.getString());
  FIX::MaturityMonthYear MaturityMonthYear_12("MONTHYEAR_1577133332");
  msg.set(MaturityMonthYear_12);
  Instrument_12.insert(MaturityMonthYear_12.getString());
  FIX::MaturityTime MaturityTime_12("TZTIMEONLY_2067832813");
  msg.set(MaturityTime_12);
  Instrument_12.insert(MaturityTime_12.getString());
  FIX::MinPriceIncrement MinPriceIncrement_12;
  MinPriceIncrement_12.setString("13984989");
  msg.set(MinPriceIncrement_12);
  Instrument_12.insert(MinPriceIncrement_12.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_12;
  MinPriceIncrementAmount_12.setString("20848229");
  msg.set(MinPriceIncrementAmount_12);
  Instrument_12.insert(MinPriceIncrementAmount_12.getString());
  FIX::NTPositionLimit NTPositionLimit_12(1961428025);
  msg.set(NTPositionLimit_12);
  Instrument_12.insert(NTPositionLimit_12.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_12;
  NotionalPercentageOutstanding_12.setString("53.150000");
  msg.set(NotionalPercentageOutstanding_12);
  Instrument_12.insert(NotionalPercentageOutstanding_12.getString());
  FIX::OptAttribute OptAttribute_12('1');
  msg.set(OptAttribute_12);
  Instrument_12.insert(OptAttribute_12.getString());
  FIX::OptPayoutAmount OptPayoutAmount_12;
  OptPayoutAmount_12.setString("14057672");
  msg.set(OptPayoutAmount_12);
  Instrument_12.insert(OptPayoutAmount_12.getString());
  FIX::OptPayoutType OptPayoutType_12(2);
  msg.set(OptPayoutType_12);
  Instrument_12.insert(OptPayoutType_12.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_12;
  OriginalNotionalPercentageOutstanding_12.setString("46.720000");
  msg.set(OriginalNotionalPercentageOutstanding_12);
  Instrument_12.insert(OriginalNotionalPercentageOutstanding_12.getString());
  FIX::Pool Pool_12("STRING_191146999");
  msg.set(Pool_12);
  Instrument_12.insert(Pool_12.getString());
  FIX::PositionLimit PositionLimit_12(293023843);
  msg.set(PositionLimit_12);
  Instrument_12.insert(PositionLimit_12.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_12("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_12);
  Instrument_12.insert(PriceQuoteMethod_12.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_12("STRING_1115611234");
  msg.set(PriceUnitOfMeasure_12);
  Instrument_12.insert(PriceUnitOfMeasure_12.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_12;
  PriceUnitOfMeasureQty_12.setString("847479");
  msg.set(PriceUnitOfMeasureQty_12);
  Instrument_12.insert(PriceUnitOfMeasureQty_12.getString());
  FIX::Product Product_14(10);
  msg.set(Product_14);
  Instrument_12.insert(Product_14.getString());
  FIX::ProductComplex ProductComplex_12("STRING_896899254");
  msg.set(ProductComplex_12);
  Instrument_12.insert(ProductComplex_12.getString());
  FIX::PutOrCall PutOrCall_12(1);
  msg.set(PutOrCall_12);
  Instrument_12.insert(PutOrCall_12.getString());
  FIX::RedemptionDate RedemptionDate_12("LOCALMKTDATE_1963425844");
  msg.set(RedemptionDate_12);
  Instrument_12.insert(RedemptionDate_12.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_12("STRING_1023461210");
  msg.set(RepoCollateralSecurityType_12);
  Instrument_12.insert(RepoCollateralSecurityType_12.getString());
  FIX::RepurchaseRate RepurchaseRate_12;
  RepurchaseRate_12.setString("63.230000");
  msg.set(RepurchaseRate_12);
  Instrument_12.insert(RepurchaseRate_12.getString());
  FIX::RepurchaseTerm RepurchaseTerm_12(1096043846);
  msg.set(RepurchaseTerm_12);
  Instrument_12.insert(RepurchaseTerm_12.getString());
  FIX::RestructuringType RestructuringType_12("STRING_MR");
  msg.set(RestructuringType_12);
  Instrument_12.insert(RestructuringType_12.getString());
  FIX::SecurityDesc SecurityDesc_12("STRING_106374451");
  msg.set(SecurityDesc_12);
  Instrument_12.insert(SecurityDesc_12.getString());
  FIX::SecurityExchange SecurityExchange_12("EXCHANGE_491062047");
  msg.set(SecurityExchange_12);
  Instrument_12.insert(SecurityExchange_12.getString());
  FIX::SecurityGroup SecurityGroup_12("STRING_670540076");
  msg.set(SecurityGroup_12);
  Instrument_12.insert(SecurityGroup_12.getString());
  FIX::SecurityID SecurityID_12("STRING_2086535483");
  msg.set(SecurityID_12);
  Instrument_12.insert(SecurityID_12.getString());
  FIX::SecurityIDSource SecurityIDSource_12("STRING_D");
  msg.set(SecurityIDSource_12);
  Instrument_12.insert(SecurityIDSource_12.getString());
  FIX::SecurityStatus SecurityStatus_12("STRING_1");
  msg.set(SecurityStatus_12);
  Instrument_12.insert(SecurityStatus_12.getString());
  FIX::SecuritySubType SecuritySubType_12("STRING_1028368612");
  msg.set(SecuritySubType_12);
  Instrument_12.insert(SecuritySubType_12.getString());
  FIX::SecurityType SecurityType_14("STRING_CTB");
  msg.set(SecurityType_14);
  Instrument_12.insert(SecurityType_14.getString());
  FIX::Seniority Seniority_12("STRING_SB");
  msg.set(Seniority_12);
  Instrument_12.insert(Seniority_12.getString());
  FIX::SettlMethod SettlMethod_12('P');
  msg.set(SettlMethod_12);
  Instrument_12.insert(SettlMethod_12.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_12("STRING_2133136683");
  msg.set(SettleOnOpenFlag_12);
  Instrument_12.insert(SettleOnOpenFlag_12.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_12("STRING_1661877840");
  msg.set(StateOrProvinceOfIssue_12);
  Instrument_12.insert(StateOrProvinceOfIssue_12.getString());
  FIX::StrikeCurrency StrikeCurrency_12("USD");
  msg.set(StrikeCurrency_12);
  Instrument_12.insert(StrikeCurrency_12.getString());
  FIX::StrikeMultiplier StrikeMultiplier_12;
  StrikeMultiplier_12.setString("6009862");
  msg.set(StrikeMultiplier_12);
  Instrument_12.insert(StrikeMultiplier_12.getString());
  FIX::StrikePrice StrikePrice_12;
  StrikePrice_12.setString("209457");
  msg.set(StrikePrice_12);
  Instrument_12.insert(StrikePrice_12.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_12(1);
  msg.set(StrikePriceBoundaryMethod_12);
  Instrument_12.insert(StrikePriceBoundaryMethod_12.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_12;
  StrikePriceBoundaryPrecision_12.setString("9.320000");
  msg.set(StrikePriceBoundaryPrecision_12);
  Instrument_12.insert(StrikePriceBoundaryPrecision_12.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_12(3);
  msg.set(StrikePriceDeterminationMethod_12);
  Instrument_12.insert(StrikePriceDeterminationMethod_12.getString());
  FIX::StrikeValue StrikeValue_12;
  StrikeValue_12.setString("7938344");
  msg.set(StrikeValue_12);
  Instrument_12.insert(StrikeValue_12.getString());
  FIX::Symbol Symbol_12("STRING_815187492");
  msg.set(Symbol_12);
  Instrument_12.insert(Symbol_12.getString());
  FIX::SymbolSfx SymbolSfx_12("STRING_CD");
  msg.set(SymbolSfx_12);
  Instrument_12.insert(SymbolSfx_12.getString());
  FIX::TimeUnit TimeUnit_12("STRING_Wk");
  msg.set(TimeUnit_12);
  Instrument_12.insert(TimeUnit_12.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_12(2);
  msg.set(UnderlyingPriceDeterminationMethod_12);
  Instrument_12.insert(UnderlyingPriceDeterminationMethod_12.getString());
  FIX::UnitOfMeasure UnitOfMeasure_12("STRING_Alw");
  msg.set(UnitOfMeasure_12);
  Instrument_12.insert(UnitOfMeasure_12.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_12;
  UnitOfMeasureQty_12.setString("13234713");
  msg.set(UnitOfMeasureQty_12);
  Instrument_12.insert(UnitOfMeasureQty_12.getString());
  FIX::ValuationMethod ValuationMethod_12("STRING_CDSD");
  msg.set(ValuationMethod_12);
  Instrument_12.insert(ValuationMethod_12.getString());
  all_values.push_back(Instrument_12);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_22;
    FIX::ComplexEventCondition ComplexEventCondition_22(2);
    noComplexEvents_0_0.set(ComplexEventCondition_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventCondition_22.getString());
    FIX::ComplexEventPrice ComplexEventPrice_22;
    ComplexEventPrice_22.setString("7698883");
    noComplexEvents_0_0.set(ComplexEventPrice_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPrice_22.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_22(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceBoundaryMethod_22.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_22;
    ComplexEventPriceBoundaryPrecision_22.setString("84.580000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceBoundaryPrecision_22.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_22(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceTimeType_22.getString());
    FIX::ComplexEventType ComplexEventType_22(1);
    noComplexEvents_0_0.set(ComplexEventType_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventType_22.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_22;
    ComplexOptPayoutAmount_22.setString("10451702");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexOptPayoutAmount_22.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_22);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_39;
      FIX::ComplexEventEndDate ComplexEventEndDate_39(FIX::UTCTIMESTAMP(10, 22, 0, 4, 6, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_39);
      ComplexEventDates_NoComplexEventDates_39.insert(ComplexEventEndDate_39.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_39(FIX::UTCTIMESTAMP(23, 32, 10, 27, 9, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_39);
      ComplexEventDates_NoComplexEventDates_39.insert(ComplexEventStartDate_39.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_39);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_78;
        FIX::ComplexEventEndTime ComplexEventEndTime_78(FIX::UTCTIMEONLY(21, 25, 34));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_78);
        ComplexEventTimes_NoComplexEventTimes_78.insert(ComplexEventEndTime_78.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_78(FIX::UTCTIMEONLY(20, 55, 53));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_78);
        ComplexEventTimes_NoComplexEventTimes_78.insert(ComplexEventStartTime_78.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_78);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_79;
        FIX::ComplexEventEndTime ComplexEventEndTime_79(FIX::UTCTIMEONLY(19, 15, 34));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_79);
        ComplexEventTimes_NoComplexEventTimes_79.insert(ComplexEventEndTime_79.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_79(FIX::UTCTIMEONLY(13, 20, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_79);
        ComplexEventTimes_NoComplexEventTimes_79.insert(ComplexEventStartTime_79.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_79);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_80;
        FIX::ComplexEventEndTime ComplexEventEndTime_80(FIX::UTCTIMEONLY(22, 45, 14));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_80);
        ComplexEventTimes_NoComplexEventTimes_80.insert(ComplexEventEndTime_80.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_80(FIX::UTCTIMEONLY(14, 6, 57));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_80);
        ComplexEventTimes_NoComplexEventTimes_80.insert(ComplexEventStartTime_80.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_80);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_40;
      FIX::ComplexEventEndDate ComplexEventEndDate_40(FIX::UTCTIMESTAMP(6, 59, 49, 15, 12, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_40);
      ComplexEventDates_NoComplexEventDates_40.insert(ComplexEventEndDate_40.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_40(FIX::UTCTIMESTAMP(8, 17, 1, 12, 7, 2013));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_40);
      ComplexEventDates_NoComplexEventDates_40.insert(ComplexEventStartDate_40.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_40);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_81;
        FIX::ComplexEventEndTime ComplexEventEndTime_81(FIX::UTCTIMEONLY(8, 24, 27));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_81);
        ComplexEventTimes_NoComplexEventTimes_81.insert(ComplexEventEndTime_81.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_81(FIX::UTCTIMEONLY(2, 39, 37));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_81);
        ComplexEventTimes_NoComplexEventTimes_81.insert(ComplexEventStartTime_81.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_81);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_41;
      FIX::ComplexEventEndDate ComplexEventEndDate_41(FIX::UTCTIMESTAMP(2, 23, 11, 8, 6, 2009));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_41);
      ComplexEventDates_NoComplexEventDates_41.insert(ComplexEventEndDate_41.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_41(FIX::UTCTIMESTAMP(7, 40, 0, 17, 12, 2016));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_41);
      ComplexEventDates_NoComplexEventDates_41.insert(ComplexEventStartDate_41.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_41);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_82;
        FIX::ComplexEventEndTime ComplexEventEndTime_82(FIX::UTCTIMEONLY(0, 59, 20));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_82);
        ComplexEventTimes_NoComplexEventTimes_82.insert(ComplexEventEndTime_82.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_82(FIX::UTCTIMEONLY(21, 9, 42));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_82);
        ComplexEventTimes_NoComplexEventTimes_82.insert(ComplexEventStartTime_82.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_82);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_83;
        FIX::ComplexEventEndTime ComplexEventEndTime_83(FIX::UTCTIMEONLY(9, 7, 18));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_83);
        ComplexEventTimes_NoComplexEventTimes_83.insert(ComplexEventEndTime_83.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_83(FIX::UTCTIMEONLY(13, 57, 16));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_83);
        ComplexEventTimes_NoComplexEventTimes_83.insert(ComplexEventStartTime_83.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_83);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_84;
        FIX::ComplexEventEndTime ComplexEventEndTime_84(FIX::UTCTIMEONLY(3, 39, 56));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_84);
        ComplexEventTimes_NoComplexEventTimes_84.insert(ComplexEventEndTime_84.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_84(FIX::UTCTIMEONLY(9, 6, 33));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_84);
        ComplexEventTimes_NoComplexEventTimes_84.insert(ComplexEventStartTime_84.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_84);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_21;
    FIX::EventDate EventDate_21("LOCALMKTDATE_348457058");
    noEvents_0_0.set(EventDate_21);
    EvntGrp_NoEvents_21.insert(EventDate_21.getString());
    FIX::EventPx EventPx_21;
    EventPx_21.setString("15274010");
    noEvents_0_0.set(EventPx_21);
    EvntGrp_NoEvents_21.insert(EventPx_21.getString());
    FIX::EventText EventText_21("STRING_266373397");
    noEvents_0_0.set(EventText_21);
    EvntGrp_NoEvents_21.insert(EventText_21.getString());
    FIX::EventTime EventTime_21(FIX::UTCTIMESTAMP(18, 19, 55, 26, 11, 2003));
    noEvents_0_0.set(EventTime_21);
    EvntGrp_NoEvents_21.insert(EventTime_21.getString());
    FIX::EventType EventType_21(8);
    noEvents_0_0.set(EventType_21);
    EvntGrp_NoEvents_21.insert(EventType_21.getString());
    all_values.push_back(EvntGrp_NoEvents_21);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_22;
    FIX::EventDate EventDate_22("LOCALMKTDATE_1474397767");
    noEvents_0_1.set(EventDate_22);
    EvntGrp_NoEvents_22.insert(EventDate_22.getString());
    FIX::EventPx EventPx_22;
    EventPx_22.setString("886784");
    noEvents_0_1.set(EventPx_22);
    EvntGrp_NoEvents_22.insert(EventPx_22.getString());
    FIX::EventText EventText_22("STRING_1033388270");
    noEvents_0_1.set(EventText_22);
    EvntGrp_NoEvents_22.insert(EventText_22.getString());
    FIX::EventTime EventTime_22(FIX::UTCTIMESTAMP(1, 49, 7, 12, 3, 2009));
    noEvents_0_1.set(EventTime_22);
    EvntGrp_NoEvents_22.insert(EventTime_22.getString());
    FIX::EventType EventType_22(6);
    noEvents_0_1.set(EventType_22);
    EvntGrp_NoEvents_22.insert(EventType_22.getString());
    all_values.push_back(EvntGrp_NoEvents_22);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_23;
    FIX::EventDate EventDate_23("LOCALMKTDATE_5593275");
    noEvents_0_2.set(EventDate_23);
    EvntGrp_NoEvents_23.insert(EventDate_23.getString());
    FIX::EventPx EventPx_23;
    EventPx_23.setString("2167658");
    noEvents_0_2.set(EventPx_23);
    EvntGrp_NoEvents_23.insert(EventPx_23.getString());
    FIX::EventText EventText_23("STRING_100828636");
    noEvents_0_2.set(EventText_23);
    EvntGrp_NoEvents_23.insert(EventText_23.getString());
    FIX::EventTime EventTime_23(FIX::UTCTIMESTAMP(8, 13, 10, 6, 3, 2000));
    noEvents_0_2.set(EventTime_23);
    EvntGrp_NoEvents_23.insert(EventTime_23.getString());
    FIX::EventType EventType_23(9);
    noEvents_0_2.set(EventType_23);
    EvntGrp_NoEvents_23.insert(EventType_23.getString());
    all_values.push_back(EvntGrp_NoEvents_23);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_24;
    FIX::InstrumentPartyID InstrumentPartyID_24("STRING_1445110765");
    noInstrumentParties_0_0.set(InstrumentPartyID_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyID_24.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_24('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyIDSource_24.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_24(1123726910);
    noInstrumentParties_0_0.set(InstrumentPartyRole_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyRole_24.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_24);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45;
      FIX::InstrumentPartySubID InstrumentPartySubID_45("STRING_121739484");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_45);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45.insert(InstrumentPartySubID_45.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_45(2034297960);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_45);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45.insert(InstrumentPartySubIDType_45.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46;
      FIX::InstrumentPartySubID InstrumentPartySubID_46("STRING_403177168");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_46);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46.insert(InstrumentPartySubID_46.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_46(950059892);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_46);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46.insert(InstrumentPartySubIDType_46.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47;
      FIX::InstrumentPartySubID InstrumentPartySubID_47("STRING_1361212079");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_47);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47.insert(InstrumentPartySubID_47.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_47(491855624);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_47);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47.insert(InstrumentPartySubIDType_47.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_27;
    FIX::SecurityAltID SecurityAltID_27("STRING_724286509");
    noSecurityAltID_0_0.set(SecurityAltID_27);
    SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltID_27.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_27("STRING_1623775714");
    noSecurityAltID_0_0.set(SecurityAltIDSource_27);
    SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltIDSource_27.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_27);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_28;
    FIX::SecurityAltID SecurityAltID_28("STRING_311172603");
    noSecurityAltID_0_1.set(SecurityAltID_28);
    SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltID_28.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_28("STRING_1509037376");
    noSecurityAltID_0_1.set(SecurityAltIDSource_28);
    SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltIDSource_28.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_28);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_24;
  FIX::SecurityXML SecurityXML_25("XMLDATA_2116566122");
  msg.set(SecurityXML_25);
  FIX::SecurityXMLLen SecurityXMLLen_12(1928109041);
  msg.set(SecurityXMLLen_12);
  FIX::SecurityXMLSchema SecurityXMLSchema_12("STRING_1616882693");
  msg.set(SecurityXMLSchema_12);
  SecurityXML_24.insert(SecurityXMLSchema_12.getString());
  all_values.push_back(SecurityXML_24);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_17;
    FIX::MiscFeeAmt MiscFeeAmt_17;
    MiscFeeAmt_17.setString("19337023");
    noMiscFees_0_0.set(MiscFeeAmt_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeAmt_17.getString());
    FIX::MiscFeeBasis MiscFeeBasis_17(0);
    noMiscFees_0_0.set(MiscFeeBasis_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeBasis_17.getString());
    FIX::MiscFeeCurr MiscFeeCurr_17("USD");
    noMiscFees_0_0.set(MiscFeeCurr_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeCurr_17.getString());
    FIX::MiscFeeType MiscFeeType_17("STRING_9");
    noMiscFees_0_0.set(MiscFeeType_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeType_17.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_17);

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_27;
    FIX::PartyID PartyID_27("STRING_917955310");
    noPartyIDs_0_0.set(PartyID_27);
    Parties_NoPartyIDs_27.insert(PartyID_27.getString());
    FIX::PartyIDSource PartyIDSource_27('I');
    noPartyIDs_0_0.set(PartyIDSource_27);
    Parties_NoPartyIDs_27.insert(PartyIDSource_27.getString());
    FIX::PartyRole PartyRole_27(69);
    noPartyIDs_0_0.set(PartyRole_27);
    Parties_NoPartyIDs_27.insert(PartyRole_27.getString());
    all_values.push_back(Parties_NoPartyIDs_27);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_55;
      FIX::PartySubID PartySubID_55("STRING_2067076516");
      noPartySubIDs_0_1_0.set(PartySubID_55);
      PtysSubGrp_NoPartySubIDs_55.insert(PartySubID_55.getString());
      FIX::PartySubIDType PartySubIDType_55(7);
      noPartySubIDs_0_1_0.set(PartySubIDType_55);
      PtysSubGrp_NoPartySubIDs_55.insert(PartySubIDType_55.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_55);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_56;
      FIX::PartySubID PartySubID_56("STRING_666790155");
      noPartySubIDs_0_1_1.set(PartySubID_56);
      PtysSubGrp_NoPartySubIDs_56.insert(PartySubID_56.getString());
      FIX::PartySubIDType PartySubIDType_56(28);
      noPartySubIDs_0_1_1.set(PartySubIDType_56);
      PtysSubGrp_NoPartySubIDs_56.insert(PartySubIDType_56.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_56);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_28;
    FIX::PartyID PartyID_28("STRING_1440101777");
    noPartyIDs_0_1.set(PartyID_28);
    Parties_NoPartyIDs_28.insert(PartyID_28.getString());
    FIX::PartyIDSource PartyIDSource_28('G');
    noPartyIDs_0_1.set(PartyIDSource_28);
    Parties_NoPartyIDs_28.insert(PartyIDSource_28.getString());
    FIX::PartyRole PartyRole_28(81);
    noPartyIDs_0_1.set(PartyRole_28);
    Parties_NoPartyIDs_28.insert(PartyRole_28.getString());
    all_values.push_back(Parties_NoPartyIDs_28);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_57;
      FIX::PartySubID PartySubID_57("STRING_486801476");
      noPartySubIDs_1_1_0.set(PartySubID_57);
      PtysSubGrp_NoPartySubIDs_57.insert(PartySubID_57.getString());
      FIX::PartySubIDType PartySubIDType_57(26);
      noPartySubIDs_1_1_0.set(PartySubIDType_57);
      PtysSubGrp_NoPartySubIDs_57.insert(PartySubIDType_57.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_57);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_58;
      FIX::PartySubID PartySubID_58("STRING_540644521");
      noPartySubIDs_1_1_1.set(PartySubID_58);
      PtysSubGrp_NoPartySubIDs_58.insert(PartySubID_58.getString());
      FIX::PartySubIDType PartySubIDType_58(26);
      noPartySubIDs_1_1_1.set(PartySubIDType_58);
      PtysSubGrp_NoPartySubIDs_58.insert(PartySubIDType_58.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_58);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_6;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_6("GBP");
  msg.set(BenchmarkCurveCurrency_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurveCurrency_6.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_6("STRING_MuniAAA");
  msg.set(BenchmarkCurveName_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurveName_6.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_6("STRING_189544452");
  msg.set(BenchmarkCurvePoint_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurvePoint_6.getString());
  FIX::BenchmarkPrice BenchmarkPrice_6;
  BenchmarkPrice_6.setString("6264847");
  msg.set(BenchmarkPrice_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkPrice_6.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_6(424031641);
  msg.set(BenchmarkPriceType_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkPriceType_6.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_6("STRING_2117653493");
  msg.set(BenchmarkSecurityID_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkSecurityID_6.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_6("STRING_95883804");
  msg.set(BenchmarkSecurityIDSource_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkSecurityIDSource_6.getString());
  FIX::Spread Spread_6;
  Spread_6.setString("10269864");
  msg.set(Spread_6);
  SpreadOrBenchmarkCurveData_6.insert(Spread_6.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_6);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_10;
    FIX::StipulationType StipulationType_10("STRING_TEXT");
    noStipulations_0_0.set(StipulationType_10);
    Stipulations_NoStipulations_10.insert(StipulationType_10.getString());
    FIX::StipulationValue StipulationValue_10("STRING_1730769876");
    noStipulations_0_0.set(StipulationValue_10);
    Stipulations_NoStipulations_10.insert(StipulationValue_10.getString());
    all_values.push_back(Stipulations_NoStipulations_10);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_11;
    FIX::StipulationType StipulationType_11("STRING_RATING");
    noStipulations_0_1.set(StipulationType_11);
    Stipulations_NoStipulations_11.insert(StipulationType_11.getString());
    FIX::StipulationValue StipulationValue_11("STRING_43939961");
    noStipulations_0_1.set(StipulationValue_11);
    Stipulations_NoStipulations_11.insert(StipulationValue_11.getString());
    all_values.push_back(Stipulations_NoStipulations_11);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_12;
    FIX::StipulationType StipulationType_12("STRING_ABS");
    noStipulations_0_2.set(StipulationType_12);
    Stipulations_NoStipulations_12.insert(StipulationType_12.getString());
    FIX::StipulationValue StipulationValue_12("STRING_1489548464");
    noStipulations_0_2.set(StipulationValue_12);
    Stipulations_NoStipulations_12.insert(StipulationValue_12.getString());
    all_values.push_back(Stipulations_NoStipulations_12);

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_9;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_9("STRING_589721125");
    noTrades_0_0.set(SecondaryTradeReportID_9);
    TrdCollGrp_NoTrades_9.insert(SecondaryTradeReportID_9.getString());
    FIX::TradeReportID TradeReportID_9("STRING_711227855");
    noTrades_0_0.set(TradeReportID_9);
    TrdCollGrp_NoTrades_9.insert(TradeReportID_9.getString());
    all_values.push_back(TrdCollGrp_NoTrades_9);

    msg.addGroup(noTrades_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_7;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_7("MULTIPLESTRINGVALUE_OVD");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskOrderHandlingInst_7.getString());
    FIX::DeskType DeskType_7("STRING_PF");
    noTrdRegTimestamps_0_0.set(DeskType_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskType_7.getString());
    FIX::DeskTypeSource DeskTypeSource_7(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskTypeSource_7.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_7(FIX::UTCTIMESTAMP(6, 47, 12, 10, 7, 2013));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestamp_7.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_7("STRING_779617247");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestampOrigin_7.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_7(2);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestampType_7.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_7);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_3;
    FIX::CollAction CollAction_3(2);
    noUnderlyings_0_0.set(CollAction_3);
    UndInstrmtCollGrp_NoUnderlyings_3.insert(CollAction_3.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_3);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_21;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_21("DATA_685078863");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingIssuer_21.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_21(1810206875);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingIssuerLen_21.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_21("DATA_1658598054");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingSecurityDesc_21.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_21(655248708);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingSecurityDescLen_21.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_21;
    UnderlyingAdjustedQuantity_21.setString("19060906");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_21);
    UnderlyingInstrument_21.insert(UnderlyingAdjustedQuantity_21.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_21;
    UnderlyingAllocationPercent_21.setString("8.470000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_21);
    UnderlyingInstrument_21.insert(UnderlyingAllocationPercent_21.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_21;
    UnderlyingAttachmentPoint_21.setString("72.220000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_21);
    UnderlyingInstrument_21.insert(UnderlyingAttachmentPoint_21.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_21("STRING_1688139394");
    noUnderlyings_0_0.set(UnderlyingCFICode_21);
    UnderlyingInstrument_21.insert(UnderlyingCFICode_21.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_21("STRING_121387075");
    noUnderlyings_0_0.set(UnderlyingCPProgram_21);
    UnderlyingInstrument_21.insert(UnderlyingCPProgram_21.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_21("STRING_983230376");
    noUnderlyings_0_0.set(UnderlyingCPRegType_21);
    UnderlyingInstrument_21.insert(UnderlyingCPRegType_21.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_21;
    UnderlyingCapValue_21.setString("17320793");
    noUnderlyings_0_0.set(UnderlyingCapValue_21);
    UnderlyingInstrument_21.insert(UnderlyingCapValue_21.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_21;
    UnderlyingCashAmount_21.setString("3589627");
    noUnderlyings_0_0.set(UnderlyingCashAmount_21);
    UnderlyingInstrument_21.insert(UnderlyingCashAmount_21.getString());
    FIX::UnderlyingCashType UnderlyingCashType_21("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_21);
    UnderlyingInstrument_21.insert(UnderlyingCashType_21.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_21;
    UnderlyingContractMultiplier_21.setString("293190");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_21);
    UnderlyingInstrument_21.insert(UnderlyingContractMultiplier_21.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_21(948683871);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_21);
    UnderlyingInstrument_21.insert(UnderlyingContractMultiplierUnit_21.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_21("COUNTRY_1036523047");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingCountryOfIssue_21.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_21("LOCALMKTDATE_393635194");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_21);
    UnderlyingInstrument_21.insert(UnderlyingCouponPaymentDate_21.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_21;
    UnderlyingCouponRate_21.setString("98.630000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_21);
    UnderlyingInstrument_21.insert(UnderlyingCouponRate_21.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_21("STRING_267057410");
    noUnderlyings_0_0.set(UnderlyingCreditRating_21);
    UnderlyingInstrument_21.insert(UnderlyingCreditRating_21.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_21("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_21);
    UnderlyingInstrument_21.insert(UnderlyingCurrency_21.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_21;
    UnderlyingCurrentValue_21.setString("17286997");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_21);
    UnderlyingInstrument_21.insert(UnderlyingCurrentValue_21.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_21;
    UnderlyingDetachmentPoint_21.setString("45.580000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_21);
    UnderlyingInstrument_21.insert(UnderlyingDetachmentPoint_21.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_21;
    UnderlyingDirtyPrice_21.setString("14316405");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_21);
    UnderlyingInstrument_21.insert(UnderlyingDirtyPrice_21.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_21;
    UnderlyingEndPrice_21.setString("15296598");
    noUnderlyings_0_0.set(UnderlyingEndPrice_21);
    UnderlyingInstrument_21.insert(UnderlyingEndPrice_21.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_21;
    UnderlyingEndValue_21.setString("9204771");
    noUnderlyings_0_0.set(UnderlyingEndValue_21);
    UnderlyingInstrument_21.insert(UnderlyingEndValue_21.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_21(1350431635);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_21);
    UnderlyingInstrument_21.insert(UnderlyingExerciseStyle_21.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_21;
    UnderlyingFXRate_21.setString("1617934");
    noUnderlyings_0_0.set(UnderlyingFXRate_21);
    UnderlyingInstrument_21.insert(UnderlyingFXRate_21.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_21('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_21);
    UnderlyingInstrument_21.insert(UnderlyingFXRateCalc_21.getString());
    FIX::UnderlyingFactor UnderlyingFactor_21;
    UnderlyingFactor_21.setString("3866701");
    noUnderlyings_0_0.set(UnderlyingFactor_21);
    UnderlyingInstrument_21.insert(UnderlyingFactor_21.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_21(1396359887);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_21);
    UnderlyingInstrument_21.insert(UnderlyingFlowScheduleType_21.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_21("STRING_2101090396");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_21);
    UnderlyingInstrument_21.insert(UnderlyingInstrRegistry_21.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_21("LOCALMKTDATE_49393330");
    noUnderlyings_0_0.set(UnderlyingIssueDate_21);
    UnderlyingInstrument_21.insert(UnderlyingIssueDate_21.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_21("STRING_907474294");
    noUnderlyings_0_0.set(UnderlyingIssuer_21);
    UnderlyingInstrument_21.insert(UnderlyingIssuer_21.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_21("STRING_608855456");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingLocaleOfIssue_21.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_21("LOCALMKTDATE_1955484009");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityDate_21.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_21("MONTHYEAR_1445575141");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityMonthYear_21.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_21("TZTIMEONLY_1020492678");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityTime_21.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_21;
    UnderlyingNotionalPercentageOutstanding_21.setString("97.550000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_21);
    UnderlyingInstrument_21.insert(UnderlyingNotionalPercentageOutstanding_21.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_21('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_21);
    UnderlyingInstrument_21.insert(UnderlyingOptAttribute_21.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_21;
    UnderlyingOriginalNotionalPercentageOutstanding_21.setString("30.540000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_21);
    UnderlyingInstrument_21.insert(UnderlyingOriginalNotionalPercentageOutstanding_21.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_21("STRING_1080735462");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_21);
    UnderlyingInstrument_21.insert(UnderlyingPriceUnitOfMeasure_21.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_21;
    UnderlyingPriceUnitOfMeasureQty_21.setString("19259249");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_21);
    UnderlyingInstrument_21.insert(UnderlyingPriceUnitOfMeasureQty_21.getString());
    FIX::UnderlyingProduct UnderlyingProduct_21(181534599);
    noUnderlyings_0_0.set(UnderlyingProduct_21);
    UnderlyingInstrument_21.insert(UnderlyingProduct_21.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_21(1110054479);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_21);
    UnderlyingInstrument_21.insert(UnderlyingPutOrCall_21.getString());
    FIX::UnderlyingPx UnderlyingPx_21;
    UnderlyingPx_21.setString("7271251");
    noUnderlyings_0_0.set(UnderlyingPx_21);
    UnderlyingInstrument_21.insert(UnderlyingPx_21.getString());
    FIX::UnderlyingQty UnderlyingQty_21;
    UnderlyingQty_21.setString("12180576");
    noUnderlyings_0_0.set(UnderlyingQty_21);
    UnderlyingInstrument_21.insert(UnderlyingQty_21.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_21("LOCALMKTDATE_1503689673");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_21);
    UnderlyingInstrument_21.insert(UnderlyingRedemptionDate_21.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_21("STRING_434421400");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_21);
    UnderlyingInstrument_21.insert(UnderlyingRepoCollateralSecurityType_21.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_21;
    UnderlyingRepurchaseRate_21.setString("50.560000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_21);
    UnderlyingInstrument_21.insert(UnderlyingRepurchaseRate_21.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_21(1232249004);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_21);
    UnderlyingInstrument_21.insert(UnderlyingRepurchaseTerm_21.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_21("STRING_340431738");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_21);
    UnderlyingInstrument_21.insert(UnderlyingRestructuringType_21.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_21("STRING_1066331137");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityDesc_21.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_21("EXCHANGE_1535563563");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityExchange_21.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_21("STRING_1772072287");
    noUnderlyings_0_0.set(UnderlyingSecurityID_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityID_21.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_21("STRING_448507364");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityIDSource_21.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_21("STRING_308557036");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_21);
    UnderlyingInstrument_21.insert(UnderlyingSecuritySubType_21.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_21("STRING_975020274");
    noUnderlyings_0_0.set(UnderlyingSecurityType_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityType_21.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_21("STRING_610300838");
    noUnderlyings_0_0.set(UnderlyingSeniority_21);
    UnderlyingInstrument_21.insert(UnderlyingSeniority_21.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_21("STRING_1724568568");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_21);
    UnderlyingInstrument_21.insert(UnderlyingSettlMethod_21.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_21(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_21);
    UnderlyingInstrument_21.insert(UnderlyingSettlementType_21.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_21;
    UnderlyingStartValue_21.setString("20066607");
    noUnderlyings_0_0.set(UnderlyingStartValue_21);
    UnderlyingInstrument_21.insert(UnderlyingStartValue_21.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_21("STRING_1678175316");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingStateOrProvinceOfIssue_21.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_21("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_21);
    UnderlyingInstrument_21.insert(UnderlyingStrikeCurrency_21.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_21;
    UnderlyingStrikePrice_21.setString("1395471");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_21);
    UnderlyingInstrument_21.insert(UnderlyingStrikePrice_21.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_21("STRING_1219084069");
    noUnderlyings_0_0.set(UnderlyingSymbol_21);
    UnderlyingInstrument_21.insert(UnderlyingSymbol_21.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_21("STRING_64742864");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_21);
    UnderlyingInstrument_21.insert(UnderlyingSymbolSfx_21.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_21("STRING_1160039803");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_21);
    UnderlyingInstrument_21.insert(UnderlyingTimeUnit_21.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_21("STRING_567740176");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_21);
    UnderlyingInstrument_21.insert(UnderlyingUnitOfMeasure_21.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_21;
    UnderlyingUnitOfMeasureQty_21.setString("16317050");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_21);
    UnderlyingInstrument_21.insert(UnderlyingUnitOfMeasureQty_21.getString());
    all_values.push_back(UnderlyingInstrument_21);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_43;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_43("STRING_1648475639");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_43);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_43.insert(UnderlyingSecurityAltID_43.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_43("STRING_1410146395");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_43);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_43.insert(UnderlyingSecurityAltIDSource_43.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_44;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_44("STRING_1197813809");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_44);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_44.insert(UnderlyingSecurityAltID_44.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_44("STRING_611046470");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_44);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_44.insert(UnderlyingSecurityAltIDSource_44.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_45;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_45("STRING_2137271580");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_45);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_45.insert(UnderlyingSecurityAltID_45.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_45("STRING_268387807");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_45);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_45.insert(UnderlyingSecurityAltIDSource_45.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_38;
      FIX::UnderlyingStipType UnderlyingStipType_38("STRING_424209332");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_38);
      UnderlyingStipulations_NoUnderlyingStips_38.insert(UnderlyingStipType_38.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_38("STRING_1753502864");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_38);
      UnderlyingStipulations_NoUnderlyingStips_38.insert(UnderlyingStipValue_38.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_38);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_39;
      FIX::UnderlyingStipType UnderlyingStipType_39("STRING_1199501500");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_39);
      UnderlyingStipulations_NoUnderlyingStips_39.insert(UnderlyingStipType_39.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_39("STRING_764641070");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_39);
      UnderlyingStipulations_NoUnderlyingStips_39.insert(UnderlyingStipValue_39.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_39);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_40;
      FIX::UnderlyingStipType UnderlyingStipType_40("STRING_672350353");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_40);
      UnderlyingStipulations_NoUnderlyingStips_40.insert(UnderlyingStipType_40.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_40("STRING_587581415");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_40);
      UnderlyingStipulations_NoUnderlyingStips_40.insert(UnderlyingStipValue_40.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_40);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_44;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_44("STRING_1120857717");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyID_44.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_44('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyIDSource_44.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_44(1364249984);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyRole_44.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_44);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_90("STRING_473223371");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_90);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90.insert(UnderlyingInstrumentPartySubID_90.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_90(578456714);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_90);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90.insert(UnderlyingInstrumentPartySubIDType_90.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_91("STRING_1590335632");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_91);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91.insert(UnderlyingInstrumentPartySubID_91.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_91(3915040);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_91);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91.insert(UnderlyingInstrumentPartySubIDType_91.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_92("STRING_1989540421");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_92);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92.insert(UnderlyingInstrumentPartySubID_92.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_92(209503356);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_92);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92.insert(UnderlyingInstrumentPartySubIDType_92.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_45;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_45("STRING_143462165");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyID_45.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_45('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyIDSource_45.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_45(274246220);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyRole_45.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_45);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_93("STRING_1628881019");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_93);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93.insert(UnderlyingInstrumentPartySubID_93.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_93(1905951301);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_93);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93.insert(UnderlyingInstrumentPartySubIDType_93.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_46;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_46("STRING_172297530");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyID_46.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_46('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyIDSource_46.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_46(1168614048);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyRole_46.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_46);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_94("STRING_1740919480");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_94);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94.insert(UnderlyingInstrumentPartySubID_94.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_94(1158401980);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_94);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94.insert(UnderlyingInstrumentPartySubIDType_94.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_95("STRING_1638499147");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_95);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95.insert(UnderlyingInstrumentPartySubID_95.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_95(1708171975);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_95);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95.insert(UnderlyingInstrumentPartySubIDType_95.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_96("STRING_1582611313");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_96);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96.insert(UnderlyingInstrumentPartySubID_96.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_96(1244518363);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_96);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96.insert(UnderlyingInstrumentPartySubIDType_96.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_4;
    FIX::CollAction CollAction_4(0);
    noUnderlyings_0_1.set(CollAction_4);
    UndInstrmtCollGrp_NoUnderlyings_4.insert(CollAction_4.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_4);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_22;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_22("DATA_199768735");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingIssuer_22.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_22(1916868716);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingIssuerLen_22.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_22("DATA_1347771242");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingSecurityDesc_22.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_22(588998445);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingSecurityDescLen_22.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_22;
    UnderlyingAdjustedQuantity_22.setString("8902427");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_22);
    UnderlyingInstrument_22.insert(UnderlyingAdjustedQuantity_22.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_22;
    UnderlyingAllocationPercent_22.setString("60.450000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_22);
    UnderlyingInstrument_22.insert(UnderlyingAllocationPercent_22.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_22;
    UnderlyingAttachmentPoint_22.setString("84.300000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_22);
    UnderlyingInstrument_22.insert(UnderlyingAttachmentPoint_22.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_22("STRING_473917692");
    noUnderlyings_0_1.set(UnderlyingCFICode_22);
    UnderlyingInstrument_22.insert(UnderlyingCFICode_22.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_22("STRING_569649417");
    noUnderlyings_0_1.set(UnderlyingCPProgram_22);
    UnderlyingInstrument_22.insert(UnderlyingCPProgram_22.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_22("STRING_384221496");
    noUnderlyings_0_1.set(UnderlyingCPRegType_22);
    UnderlyingInstrument_22.insert(UnderlyingCPRegType_22.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_22;
    UnderlyingCapValue_22.setString("20642533");
    noUnderlyings_0_1.set(UnderlyingCapValue_22);
    UnderlyingInstrument_22.insert(UnderlyingCapValue_22.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_22;
    UnderlyingCashAmount_22.setString("5735644");
    noUnderlyings_0_1.set(UnderlyingCashAmount_22);
    UnderlyingInstrument_22.insert(UnderlyingCashAmount_22.getString());
    FIX::UnderlyingCashType UnderlyingCashType_22("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_22);
    UnderlyingInstrument_22.insert(UnderlyingCashType_22.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_22;
    UnderlyingContractMultiplier_22.setString("1262730");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_22);
    UnderlyingInstrument_22.insert(UnderlyingContractMultiplier_22.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_22(717026622);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_22);
    UnderlyingInstrument_22.insert(UnderlyingContractMultiplierUnit_22.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_22("COUNTRY_1287419112");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingCountryOfIssue_22.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_22("LOCALMKTDATE_400519253");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_22);
    UnderlyingInstrument_22.insert(UnderlyingCouponPaymentDate_22.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_22;
    UnderlyingCouponRate_22.setString("85.900000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_22);
    UnderlyingInstrument_22.insert(UnderlyingCouponRate_22.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_22("STRING_768816483");
    noUnderlyings_0_1.set(UnderlyingCreditRating_22);
    UnderlyingInstrument_22.insert(UnderlyingCreditRating_22.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_22("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_22);
    UnderlyingInstrument_22.insert(UnderlyingCurrency_22.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_22;
    UnderlyingCurrentValue_22.setString("18986894");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_22);
    UnderlyingInstrument_22.insert(UnderlyingCurrentValue_22.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_22;
    UnderlyingDetachmentPoint_22.setString("9.550000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_22);
    UnderlyingInstrument_22.insert(UnderlyingDetachmentPoint_22.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_22;
    UnderlyingDirtyPrice_22.setString("14154538");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_22);
    UnderlyingInstrument_22.insert(UnderlyingDirtyPrice_22.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_22;
    UnderlyingEndPrice_22.setString("14921253");
    noUnderlyings_0_1.set(UnderlyingEndPrice_22);
    UnderlyingInstrument_22.insert(UnderlyingEndPrice_22.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_22;
    UnderlyingEndValue_22.setString("3385192");
    noUnderlyings_0_1.set(UnderlyingEndValue_22);
    UnderlyingInstrument_22.insert(UnderlyingEndValue_22.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_22(906469311);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_22);
    UnderlyingInstrument_22.insert(UnderlyingExerciseStyle_22.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_22;
    UnderlyingFXRate_22.setString("10528136");
    noUnderlyings_0_1.set(UnderlyingFXRate_22);
    UnderlyingInstrument_22.insert(UnderlyingFXRate_22.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_22('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_22);
    UnderlyingInstrument_22.insert(UnderlyingFXRateCalc_22.getString());
    FIX::UnderlyingFactor UnderlyingFactor_22;
    UnderlyingFactor_22.setString("35040");
    noUnderlyings_0_1.set(UnderlyingFactor_22);
    UnderlyingInstrument_22.insert(UnderlyingFactor_22.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_22(1813003480);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_22);
    UnderlyingInstrument_22.insert(UnderlyingFlowScheduleType_22.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_22("STRING_2120899336");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_22);
    UnderlyingInstrument_22.insert(UnderlyingInstrRegistry_22.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_22("LOCALMKTDATE_1920372742");
    noUnderlyings_0_1.set(UnderlyingIssueDate_22);
    UnderlyingInstrument_22.insert(UnderlyingIssueDate_22.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_22("STRING_1013291074");
    noUnderlyings_0_1.set(UnderlyingIssuer_22);
    UnderlyingInstrument_22.insert(UnderlyingIssuer_22.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_22("STRING_562414133");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingLocaleOfIssue_22.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_22("LOCALMKTDATE_663131879");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityDate_22.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_22("MONTHYEAR_1109717120");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityMonthYear_22.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_22("TZTIMEONLY_368178915");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityTime_22.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_22;
    UnderlyingNotionalPercentageOutstanding_22.setString("95.710000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_22);
    UnderlyingInstrument_22.insert(UnderlyingNotionalPercentageOutstanding_22.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_22('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_22);
    UnderlyingInstrument_22.insert(UnderlyingOptAttribute_22.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_22;
    UnderlyingOriginalNotionalPercentageOutstanding_22.setString("4.110000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_22);
    UnderlyingInstrument_22.insert(UnderlyingOriginalNotionalPercentageOutstanding_22.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_22("STRING_1053819248");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_22);
    UnderlyingInstrument_22.insert(UnderlyingPriceUnitOfMeasure_22.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_22;
    UnderlyingPriceUnitOfMeasureQty_22.setString("1054473");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_22);
    UnderlyingInstrument_22.insert(UnderlyingPriceUnitOfMeasureQty_22.getString());
    FIX::UnderlyingProduct UnderlyingProduct_22(978678681);
    noUnderlyings_0_1.set(UnderlyingProduct_22);
    UnderlyingInstrument_22.insert(UnderlyingProduct_22.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_22(1180092280);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_22);
    UnderlyingInstrument_22.insert(UnderlyingPutOrCall_22.getString());
    FIX::UnderlyingPx UnderlyingPx_22;
    UnderlyingPx_22.setString("8224739");
    noUnderlyings_0_1.set(UnderlyingPx_22);
    UnderlyingInstrument_22.insert(UnderlyingPx_22.getString());
    FIX::UnderlyingQty UnderlyingQty_22;
    UnderlyingQty_22.setString("1186141");
    noUnderlyings_0_1.set(UnderlyingQty_22);
    UnderlyingInstrument_22.insert(UnderlyingQty_22.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_22("LOCALMKTDATE_1580611533");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_22);
    UnderlyingInstrument_22.insert(UnderlyingRedemptionDate_22.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_22("STRING_695518910");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_22);
    UnderlyingInstrument_22.insert(UnderlyingRepoCollateralSecurityType_22.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_22;
    UnderlyingRepurchaseRate_22.setString("6.280000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_22);
    UnderlyingInstrument_22.insert(UnderlyingRepurchaseRate_22.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_22(1739598440);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_22);
    UnderlyingInstrument_22.insert(UnderlyingRepurchaseTerm_22.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_22("STRING_740861383");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_22);
    UnderlyingInstrument_22.insert(UnderlyingRestructuringType_22.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_22("STRING_638636473");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityDesc_22.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_22("EXCHANGE_919715747");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityExchange_22.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_22("STRING_8831548");
    noUnderlyings_0_1.set(UnderlyingSecurityID_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityID_22.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_22("STRING_2130761798");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityIDSource_22.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_22("STRING_1258235034");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_22);
    UnderlyingInstrument_22.insert(UnderlyingSecuritySubType_22.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_22("STRING_915300859");
    noUnderlyings_0_1.set(UnderlyingSecurityType_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityType_22.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_22("STRING_1036091802");
    noUnderlyings_0_1.set(UnderlyingSeniority_22);
    UnderlyingInstrument_22.insert(UnderlyingSeniority_22.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_22("STRING_1031881987");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_22);
    UnderlyingInstrument_22.insert(UnderlyingSettlMethod_22.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_22(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_22);
    UnderlyingInstrument_22.insert(UnderlyingSettlementType_22.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_22;
    UnderlyingStartValue_22.setString("7016116");
    noUnderlyings_0_1.set(UnderlyingStartValue_22);
    UnderlyingInstrument_22.insert(UnderlyingStartValue_22.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_22("STRING_1005297675");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingStateOrProvinceOfIssue_22.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_22("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_22);
    UnderlyingInstrument_22.insert(UnderlyingStrikeCurrency_22.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_22;
    UnderlyingStrikePrice_22.setString("15677118");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_22);
    UnderlyingInstrument_22.insert(UnderlyingStrikePrice_22.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_22("STRING_1354825860");
    noUnderlyings_0_1.set(UnderlyingSymbol_22);
    UnderlyingInstrument_22.insert(UnderlyingSymbol_22.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_22("STRING_677136181");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_22);
    UnderlyingInstrument_22.insert(UnderlyingSymbolSfx_22.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_22("STRING_1935890724");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_22);
    UnderlyingInstrument_22.insert(UnderlyingTimeUnit_22.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_22("STRING_344391783");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_22);
    UnderlyingInstrument_22.insert(UnderlyingUnitOfMeasure_22.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_22;
    UnderlyingUnitOfMeasureQty_22.setString("2090190");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_22);
    UnderlyingInstrument_22.insert(UnderlyingUnitOfMeasureQty_22.getString());
    all_values.push_back(UnderlyingInstrument_22);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_46;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_46("STRING_1398211031");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_46);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_46.insert(UnderlyingSecurityAltID_46.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_46("STRING_314466416");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_46);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_46.insert(UnderlyingSecurityAltIDSource_46.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_47;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_47("STRING_1519486168");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_47);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_47.insert(UnderlyingSecurityAltID_47.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_47("STRING_430819664");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_47);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_47.insert(UnderlyingSecurityAltIDSource_47.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_41;
      FIX::UnderlyingStipType UnderlyingStipType_41("STRING_1638100313");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_41);
      UnderlyingStipulations_NoUnderlyingStips_41.insert(UnderlyingStipType_41.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_41("STRING_2011431197");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_41);
      UnderlyingStipulations_NoUnderlyingStips_41.insert(UnderlyingStipValue_41.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_41);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_47;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_47("STRING_378047293");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyID_47.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_47('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyIDSource_47.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_47(425837030);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyRole_47.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_47);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_97("STRING_375778088");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_97);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97.insert(UnderlyingInstrumentPartySubID_97.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_97(434668578);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_97);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97.insert(UnderlyingInstrumentPartySubIDType_97.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_98("STRING_999961916");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_98);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98.insert(UnderlyingInstrumentPartySubID_98.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_98(1634013123);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_98);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98.insert(UnderlyingInstrumentPartySubIDType_98.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_99("STRING_1349969437");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_99);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99.insert(UnderlyingInstrumentPartySubID_99.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_99(2036053719);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_99);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99.insert(UnderlyingInstrumentPartySubIDType_99.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_48;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_48("STRING_518411462");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyID_48.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_48('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyIDSource_48.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_48(590181705);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyRole_48.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_48);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_100("STRING_812984656");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_100);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100.insert(UnderlyingInstrumentPartySubID_100.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_100(157600766);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_100);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100.insert(UnderlyingInstrumentPartySubIDType_100.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_101("STRING_943937297");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_101);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101.insert(UnderlyingInstrumentPartySubID_101.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_101(20326868);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_101);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101.insert(UnderlyingInstrumentPartySubIDType_101.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_102("STRING_834736947");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_102);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102.insert(UnderlyingInstrumentPartySubID_102.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_102(732344373);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_102);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102.insert(UnderlyingInstrumentPartySubIDType_102.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_49;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_49("STRING_364718651");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyID_49.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_49('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyIDSource_49.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_49(1273151861);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyRole_49.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_49);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_103("STRING_1358222433");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_103);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103.insert(UnderlyingInstrumentPartySubID_103.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_103(645154381);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_103);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103.insert(UnderlyingInstrumentPartySubIDType_103.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_104("STRING_46265699");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_104);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104.insert(UnderlyingInstrumentPartySubID_104.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_104(347679169);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_104);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104.insert(UnderlyingInstrumentPartySubIDType_104.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_105("STRING_135771047");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_105);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105.insert(UnderlyingInstrumentPartySubID_105.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_105(2057696896);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_105);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105.insert(UnderlyingInstrumentPartySubIDType_105.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_5;
    FIX::CollAction CollAction_5(2);
    noUnderlyings_0_2.set(CollAction_5);
    UndInstrmtCollGrp_NoUnderlyings_5.insert(CollAction_5.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_5);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_23;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_23("DATA_513818340");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingIssuer_23.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_23(1513759238);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingIssuerLen_23.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_23("DATA_458491846");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingSecurityDesc_23.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_23(1530502107);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingSecurityDescLen_23.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_23;
    UnderlyingAdjustedQuantity_23.setString("18895373");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_23);
    UnderlyingInstrument_23.insert(UnderlyingAdjustedQuantity_23.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_23;
    UnderlyingAllocationPercent_23.setString("4.240000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_23);
    UnderlyingInstrument_23.insert(UnderlyingAllocationPercent_23.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_23;
    UnderlyingAttachmentPoint_23.setString("3.750000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_23);
    UnderlyingInstrument_23.insert(UnderlyingAttachmentPoint_23.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_23("STRING_1376066801");
    noUnderlyings_0_2.set(UnderlyingCFICode_23);
    UnderlyingInstrument_23.insert(UnderlyingCFICode_23.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_23("STRING_95646213");
    noUnderlyings_0_2.set(UnderlyingCPProgram_23);
    UnderlyingInstrument_23.insert(UnderlyingCPProgram_23.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_23("STRING_271550446");
    noUnderlyings_0_2.set(UnderlyingCPRegType_23);
    UnderlyingInstrument_23.insert(UnderlyingCPRegType_23.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_23;
    UnderlyingCapValue_23.setString("18944782");
    noUnderlyings_0_2.set(UnderlyingCapValue_23);
    UnderlyingInstrument_23.insert(UnderlyingCapValue_23.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_23;
    UnderlyingCashAmount_23.setString("2169368");
    noUnderlyings_0_2.set(UnderlyingCashAmount_23);
    UnderlyingInstrument_23.insert(UnderlyingCashAmount_23.getString());
    FIX::UnderlyingCashType UnderlyingCashType_23("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_23);
    UnderlyingInstrument_23.insert(UnderlyingCashType_23.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_23;
    UnderlyingContractMultiplier_23.setString("12707037");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_23);
    UnderlyingInstrument_23.insert(UnderlyingContractMultiplier_23.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_23(1029921545);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_23);
    UnderlyingInstrument_23.insert(UnderlyingContractMultiplierUnit_23.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_23("COUNTRY_1019332918");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingCountryOfIssue_23.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_23("LOCALMKTDATE_67157402");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_23);
    UnderlyingInstrument_23.insert(UnderlyingCouponPaymentDate_23.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_23;
    UnderlyingCouponRate_23.setString("84.130000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_23);
    UnderlyingInstrument_23.insert(UnderlyingCouponRate_23.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_23("STRING_1854069866");
    noUnderlyings_0_2.set(UnderlyingCreditRating_23);
    UnderlyingInstrument_23.insert(UnderlyingCreditRating_23.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_23("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_23);
    UnderlyingInstrument_23.insert(UnderlyingCurrency_23.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_23;
    UnderlyingCurrentValue_23.setString("7503422");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_23);
    UnderlyingInstrument_23.insert(UnderlyingCurrentValue_23.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_23;
    UnderlyingDetachmentPoint_23.setString("36.360000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_23);
    UnderlyingInstrument_23.insert(UnderlyingDetachmentPoint_23.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_23;
    UnderlyingDirtyPrice_23.setString("10304130");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_23);
    UnderlyingInstrument_23.insert(UnderlyingDirtyPrice_23.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_23;
    UnderlyingEndPrice_23.setString("21085646");
    noUnderlyings_0_2.set(UnderlyingEndPrice_23);
    UnderlyingInstrument_23.insert(UnderlyingEndPrice_23.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_23;
    UnderlyingEndValue_23.setString("5703243");
    noUnderlyings_0_2.set(UnderlyingEndValue_23);
    UnderlyingInstrument_23.insert(UnderlyingEndValue_23.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_23(1076678798);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_23);
    UnderlyingInstrument_23.insert(UnderlyingExerciseStyle_23.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_23;
    UnderlyingFXRate_23.setString("3087601");
    noUnderlyings_0_2.set(UnderlyingFXRate_23);
    UnderlyingInstrument_23.insert(UnderlyingFXRate_23.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_23('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_23);
    UnderlyingInstrument_23.insert(UnderlyingFXRateCalc_23.getString());
    FIX::UnderlyingFactor UnderlyingFactor_23;
    UnderlyingFactor_23.setString("9868920");
    noUnderlyings_0_2.set(UnderlyingFactor_23);
    UnderlyingInstrument_23.insert(UnderlyingFactor_23.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_23(341415006);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_23);
    UnderlyingInstrument_23.insert(UnderlyingFlowScheduleType_23.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_23("STRING_1219913757");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_23);
    UnderlyingInstrument_23.insert(UnderlyingInstrRegistry_23.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_23("LOCALMKTDATE_353167637");
    noUnderlyings_0_2.set(UnderlyingIssueDate_23);
    UnderlyingInstrument_23.insert(UnderlyingIssueDate_23.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_23("STRING_799906852");
    noUnderlyings_0_2.set(UnderlyingIssuer_23);
    UnderlyingInstrument_23.insert(UnderlyingIssuer_23.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_23("STRING_602932216");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingLocaleOfIssue_23.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_23("LOCALMKTDATE_95221315");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityDate_23.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_23("MONTHYEAR_1693067276");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityMonthYear_23.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_23("TZTIMEONLY_985912592");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityTime_23.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_23;
    UnderlyingNotionalPercentageOutstanding_23.setString("81.170000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_23);
    UnderlyingInstrument_23.insert(UnderlyingNotionalPercentageOutstanding_23.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_23('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_23);
    UnderlyingInstrument_23.insert(UnderlyingOptAttribute_23.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_23;
    UnderlyingOriginalNotionalPercentageOutstanding_23.setString("30.380000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_23);
    UnderlyingInstrument_23.insert(UnderlyingOriginalNotionalPercentageOutstanding_23.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_23("STRING_1218282732");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_23);
    UnderlyingInstrument_23.insert(UnderlyingPriceUnitOfMeasure_23.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_23;
    UnderlyingPriceUnitOfMeasureQty_23.setString("20056503");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_23);
    UnderlyingInstrument_23.insert(UnderlyingPriceUnitOfMeasureQty_23.getString());
    FIX::UnderlyingProduct UnderlyingProduct_23(2119195190);
    noUnderlyings_0_2.set(UnderlyingProduct_23);
    UnderlyingInstrument_23.insert(UnderlyingProduct_23.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_23(341502837);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_23);
    UnderlyingInstrument_23.insert(UnderlyingPutOrCall_23.getString());
    FIX::UnderlyingPx UnderlyingPx_23;
    UnderlyingPx_23.setString("8880882");
    noUnderlyings_0_2.set(UnderlyingPx_23);
    UnderlyingInstrument_23.insert(UnderlyingPx_23.getString());
    FIX::UnderlyingQty UnderlyingQty_23;
    UnderlyingQty_23.setString("9910444");
    noUnderlyings_0_2.set(UnderlyingQty_23);
    UnderlyingInstrument_23.insert(UnderlyingQty_23.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_23("LOCALMKTDATE_408660239");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_23);
    UnderlyingInstrument_23.insert(UnderlyingRedemptionDate_23.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_23("STRING_1938336689");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_23);
    UnderlyingInstrument_23.insert(UnderlyingRepoCollateralSecurityType_23.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_23;
    UnderlyingRepurchaseRate_23.setString("6.790000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_23);
    UnderlyingInstrument_23.insert(UnderlyingRepurchaseRate_23.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_23(1208162014);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_23);
    UnderlyingInstrument_23.insert(UnderlyingRepurchaseTerm_23.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_23("STRING_1205820105");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_23);
    UnderlyingInstrument_23.insert(UnderlyingRestructuringType_23.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_23("STRING_1447972914");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityDesc_23.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_23("EXCHANGE_1133332003");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityExchange_23.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_23("STRING_88749557");
    noUnderlyings_0_2.set(UnderlyingSecurityID_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityID_23.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_23("STRING_1409053935");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityIDSource_23.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_23("STRING_1703656373");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_23);
    UnderlyingInstrument_23.insert(UnderlyingSecuritySubType_23.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_23("STRING_1165428355");
    noUnderlyings_0_2.set(UnderlyingSecurityType_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityType_23.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_23("STRING_1717814126");
    noUnderlyings_0_2.set(UnderlyingSeniority_23);
    UnderlyingInstrument_23.insert(UnderlyingSeniority_23.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_23("STRING_262268142");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_23);
    UnderlyingInstrument_23.insert(UnderlyingSettlMethod_23.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_23(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_23);
    UnderlyingInstrument_23.insert(UnderlyingSettlementType_23.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_23;
    UnderlyingStartValue_23.setString("20592291");
    noUnderlyings_0_2.set(UnderlyingStartValue_23);
    UnderlyingInstrument_23.insert(UnderlyingStartValue_23.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_23("STRING_1482181899");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingStateOrProvinceOfIssue_23.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_23("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_23);
    UnderlyingInstrument_23.insert(UnderlyingStrikeCurrency_23.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_23;
    UnderlyingStrikePrice_23.setString("20851141");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_23);
    UnderlyingInstrument_23.insert(UnderlyingStrikePrice_23.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_23("STRING_453225707");
    noUnderlyings_0_2.set(UnderlyingSymbol_23);
    UnderlyingInstrument_23.insert(UnderlyingSymbol_23.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_23("STRING_257235965");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_23);
    UnderlyingInstrument_23.insert(UnderlyingSymbolSfx_23.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_23("STRING_923543060");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_23);
    UnderlyingInstrument_23.insert(UnderlyingTimeUnit_23.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_23("STRING_1924513824");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_23);
    UnderlyingInstrument_23.insert(UnderlyingUnitOfMeasure_23.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_23;
    UnderlyingUnitOfMeasureQty_23.setString("20459494");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_23);
    UnderlyingInstrument_23.insert(UnderlyingUnitOfMeasureQty_23.getString());
    all_values.push_back(UnderlyingInstrument_23);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_48;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_48("STRING_995312908");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_48);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_48.insert(UnderlyingSecurityAltID_48.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_48("STRING_1904116186");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_48);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_48.insert(UnderlyingSecurityAltIDSource_48.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_42;
      FIX::UnderlyingStipType UnderlyingStipType_42("STRING_1336815745");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_42);
      UnderlyingStipulations_NoUnderlyingStips_42.insert(UnderlyingStipType_42.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_42("STRING_644720814");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_42);
      UnderlyingStipulations_NoUnderlyingStips_42.insert(UnderlyingStipValue_42.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_42);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_43;
      FIX::UnderlyingStipType UnderlyingStipType_43("STRING_996278454");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_43);
      UnderlyingStipulations_NoUnderlyingStips_43.insert(UnderlyingStipType_43.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_43("STRING_1745475984");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_43);
      UnderlyingStipulations_NoUnderlyingStips_43.insert(UnderlyingStipValue_43.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_43);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_50;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_50("STRING_1693909133");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyID_50.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_50('8');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyIDSource_50.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_50(1641393961);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_50);
      UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyRole_50.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_50);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_106("STRING_1939486354");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_106);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106.insert(UnderlyingInstrumentPartySubID_106.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_106(1730143518);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_106);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106.insert(UnderlyingInstrumentPartySubIDType_106.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
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
