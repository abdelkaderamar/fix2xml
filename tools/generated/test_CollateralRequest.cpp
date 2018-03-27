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
  FIX::Account Account_7("STRING_897009724");
  msg.set(Account_7);
  CollateralRequest_0.insert(Account_7.getString());
  FIX::AccountType AccountType_5(3);
  msg.set(AccountType_5);
  CollateralRequest_0.insert(AccountType_5.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_6;
  AccruedInterestAmt_6.setString("19837131");
  msg.set(AccruedInterestAmt_6);
  CollateralRequest_0.insert(AccruedInterestAmt_6.getString());
  FIX::CashOutstanding CashOutstanding_3;
  CashOutstanding_3.setString("5989350");
  msg.set(CashOutstanding_3);
  CollateralRequest_0.insert(CashOutstanding_3.getString());
  FIX::ClOrdID ClOrdID_9("STRING_1281686726");
  msg.set(ClOrdID_9);
  CollateralRequest_0.insert(ClOrdID_9.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_10("LOCALMKTDATE_1767729283");
  msg.set(ClearingBusinessDate_10);
  CollateralRequest_0.insert(ClearingBusinessDate_10.getString());
  FIX::CollAsgnReason CollAsgnReason_1(7);
  msg.set(CollAsgnReason_1);
  CollateralRequest_0.insert(CollAsgnReason_1.getString());
  FIX::CollReqID CollReqID_1("STRING_472937027");
  msg.set(CollReqID_1);
  CollateralRequest_0.insert(CollReqID_1.getString());
  FIX::Currency Currency_10("EUR");
  msg.set(Currency_10);
  CollateralRequest_0.insert(Currency_10.getString());
  FIX::EncodedText EncodedText_17("DATA_786565834");
  msg.set(EncodedText_17);
  CollateralRequest_0.insert(EncodedText_17.getString());
  FIX::EncodedTextLen EncodedTextLen_17(9650800);
  msg.set(EncodedTextLen_17);
  CollateralRequest_0.insert(EncodedTextLen_17.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_6;
  EndAccruedInterestAmt_6.setString("10845830");
  msg.set(EndAccruedInterestAmt_6);
  CollateralRequest_0.insert(EndAccruedInterestAmt_6.getString());
  FIX::EndCash EndCash_6;
  EndCash_6.setString("7450650");
  msg.set(EndCash_6);
  CollateralRequest_0.insert(EndCash_6.getString());
  FIX::ExpireTime ExpireTime_1(FIX::UTCTIMESTAMP(12, 58, 32, 14, 112012));
  msg.set(ExpireTime_1);
  CollateralRequest_0.insert(ExpireTime_1.getString());
  FIX::MarginExcess MarginExcess_3;
  MarginExcess_3.setString("9404130");
  msg.set(MarginExcess_3);
  CollateralRequest_0.insert(MarginExcess_3.getString());
  FIX::OrderID OrderID_9("STRING_1913046459");
  msg.set(OrderID_9);
  CollateralRequest_0.insert(OrderID_9.getString());
  FIX::Price Price_5;
  Price_5.setString("1696211");
  msg.set(Price_5);
  CollateralRequest_0.insert(Price_5.getString());
  FIX::PriceType PriceType_7(1);
  msg.set(PriceType_7);
  CollateralRequest_0.insert(PriceType_7.getString());
  FIX::QtyType QtyType_8(1);
  msg.set(QtyType_8);
  CollateralRequest_0.insert(QtyType_8.getString());
  FIX::Quantity Quantity_9;
  Quantity_9.setString("20757545");
  msg.set(Quantity_9);
  CollateralRequest_0.insert(Quantity_9.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_9("STRING_779012467");
  msg.set(SecondaryClOrdID_9);
  CollateralRequest_0.insert(SecondaryClOrdID_9.getString());
  FIX::SecondaryOrderID SecondaryOrderID_9("STRING_1166456331");
  msg.set(SecondaryOrderID_9);
  CollateralRequest_0.insert(SecondaryOrderID_9.getString());
  FIX::SettlDate SettlDate_10("LOCALMKTDATE_1615324888");
  msg.set(SettlDate_10);
  CollateralRequest_0.insert(SettlDate_10.getString());
  FIX::SettlSessID SettlSessID_6("STRING_RTH");
  msg.set(SettlSessID_6);
  CollateralRequest_0.insert(SettlSessID_6.getString());
  FIX::SettlSessSubID SettlSessSubID_5("STRING_2063466055");
  msg.set(SettlSessSubID_5);
  CollateralRequest_0.insert(SettlSessSubID_5.getString());
  FIX::Side Side_9('4');
  msg.set(Side_9);
  CollateralRequest_0.insert(Side_9.getString());
  FIX::StartCash StartCash_6;
  StartCash_6.setString("10344443");
  msg.set(StartCash_6);
  CollateralRequest_0.insert(StartCash_6.getString());
  FIX::Text Text_17("STRING_514917407");
  msg.set(Text_17);
  CollateralRequest_0.insert(Text_17.getString());
  FIX::TotalNetValue TotalNetValue_3;
  TotalNetValue_3.setString("6633513");
  msg.set(TotalNetValue_3);
  CollateralRequest_0.insert(TotalNetValue_3.getString());
  FIX::TradingSessionID TradingSessionID_11("STRING_6");
  msg.set(TradingSessionID_11);
  CollateralRequest_0.insert(TradingSessionID_11.getString());
  FIX::TradingSessionSubID TradingSessionSubID_11("STRING_3");
  msg.set(TradingSessionSubID_11);
  CollateralRequest_0.insert(TradingSessionSubID_11.getString());
  FIX::TransactTime TransactTime_8(FIX::UTCTIMESTAMP(5, 46, 59, 2, 22006));
  msg.set(TransactTime_8);
  CollateralRequest_0.insert(TransactTime_8.getString());
  all_values.push_back(CollateralRequest_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_7;
    FIX::ExecID ExecID_15("STRING_1686711277");
    noExecs_0_0.set(ExecID_15);
    ExecCollGrp_NoExecs_7.insert(ExecID_15.getString());
    all_values.push_back(ExecCollGrp_NoExecs_7);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_8;
    FIX::ExecID ExecID_16("STRING_1856770727");
    noExecs_0_1.set(ExecID_16);
    ExecCollGrp_NoExecs_8.insert(ExecID_16.getString());
    all_values.push_back(ExecCollGrp_NoExecs_8);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_7;
  FIX::AgreementCurrency AgreementCurrency_7("CAN");
  msg.set(AgreementCurrency_7);
  FinancingDetails_7.insert(AgreementCurrency_7.getString());
  FIX::AgreementDate AgreementDate_7("LOCALMKTDATE_1832634289");
  msg.set(AgreementDate_7);
  FinancingDetails_7.insert(AgreementDate_7.getString());
  FIX::AgreementDesc AgreementDesc_7("STRING_1001318884");
  msg.set(AgreementDesc_7);
  FinancingDetails_7.insert(AgreementDesc_7.getString());
  FIX::AgreementID AgreementID_7("STRING_1184224920");
  msg.set(AgreementID_7);
  FinancingDetails_7.insert(AgreementID_7.getString());
  FIX::DeliveryType DeliveryType_7(1);
  msg.set(DeliveryType_7);
  FinancingDetails_7.insert(DeliveryType_7.getString());
  FIX::EndDate EndDate_7("LOCALMKTDATE_1170940051");
  msg.set(EndDate_7);
  FinancingDetails_7.insert(EndDate_7.getString());
  FIX::MarginRatio MarginRatio_7;
  MarginRatio_7.setString("3.560000");
  msg.set(MarginRatio_7);
  FinancingDetails_7.insert(MarginRatio_7.getString());
  FIX::StartDate StartDate_7("LOCALMKTDATE_242339798");
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
    multiset<string> InstrumentLeg_18;
    FIX::EncodedLegIssuer EncodedLegIssuer_18("DATA_1408796129");
    noLegs_0_0.set(EncodedLegIssuer_18);
    InstrumentLeg_18.insert(EncodedLegIssuer_18.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_18(567052236);
    noLegs_0_0.set(EncodedLegIssuerLen_18);
    InstrumentLeg_18.insert(EncodedLegIssuerLen_18.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_18("DATA_1342744045");
    noLegs_0_0.set(EncodedLegSecurityDesc_18);
    InstrumentLeg_18.insert(EncodedLegSecurityDesc_18.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_18(1324778537);
    noLegs_0_0.set(EncodedLegSecurityDescLen_18);
    InstrumentLeg_18.insert(EncodedLegSecurityDescLen_18.getString());
    FIX::LegCFICode LegCFICode_18("STRING_2096200496");
    noLegs_0_0.set(LegCFICode_18);
    InstrumentLeg_18.insert(LegCFICode_18.getString());
    FIX::LegContractMultiplier LegContractMultiplier_18;
    LegContractMultiplier_18.setString("2297047");
    noLegs_0_0.set(LegContractMultiplier_18);
    InstrumentLeg_18.insert(LegContractMultiplier_18.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_18(1839695944);
    noLegs_0_0.set(LegContractMultiplierUnit_18);
    InstrumentLeg_18.insert(LegContractMultiplierUnit_18.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_18("MONTHYEAR_612068185");
    noLegs_0_0.set(LegContractSettlMonth_18);
    InstrumentLeg_18.insert(LegContractSettlMonth_18.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_18("COUNTRY_884394795");
    noLegs_0_0.set(LegCountryOfIssue_18);
    InstrumentLeg_18.insert(LegCountryOfIssue_18.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_18("LOCALMKTDATE_1481652455");
    noLegs_0_0.set(LegCouponPaymentDate_18);
    InstrumentLeg_18.insert(LegCouponPaymentDate_18.getString());
    FIX::LegCouponRate LegCouponRate_18;
    LegCouponRate_18.setString("65.500000");
    noLegs_0_0.set(LegCouponRate_18);
    InstrumentLeg_18.insert(LegCouponRate_18.getString());
    FIX::LegCreditRating LegCreditRating_18("STRING_700113889");
    noLegs_0_0.set(LegCreditRating_18);
    InstrumentLeg_18.insert(LegCreditRating_18.getString());
    FIX::LegCurrency LegCurrency_18("CAN");
    noLegs_0_0.set(LegCurrency_18);
    InstrumentLeg_18.insert(LegCurrency_18.getString());
    FIX::LegDatedDate LegDatedDate_18("LOCALMKTDATE_525483783");
    noLegs_0_0.set(LegDatedDate_18);
    InstrumentLeg_18.insert(LegDatedDate_18.getString());
    FIX::LegExerciseStyle LegExerciseStyle_18(12363294);
    noLegs_0_0.set(LegExerciseStyle_18);
    InstrumentLeg_18.insert(LegExerciseStyle_18.getString());
    FIX::LegFactor LegFactor_18;
    LegFactor_18.setString("20441627");
    noLegs_0_0.set(LegFactor_18);
    InstrumentLeg_18.insert(LegFactor_18.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_18(1529870761);
    noLegs_0_0.set(LegFlowScheduleType_18);
    InstrumentLeg_18.insert(LegFlowScheduleType_18.getString());
    FIX::LegInstrRegistry LegInstrRegistry_18("STRING_1699074572");
    noLegs_0_0.set(LegInstrRegistry_18);
    InstrumentLeg_18.insert(LegInstrRegistry_18.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_18("LOCALMKTDATE_1753449789");
    noLegs_0_0.set(LegInterestAccrualDate_18);
    InstrumentLeg_18.insert(LegInterestAccrualDate_18.getString());
    FIX::LegIssueDate LegIssueDate_18("LOCALMKTDATE_1506892163");
    noLegs_0_0.set(LegIssueDate_18);
    InstrumentLeg_18.insert(LegIssueDate_18.getString());
    FIX::LegIssuer LegIssuer_18("STRING_1942886431");
    noLegs_0_0.set(LegIssuer_18);
    InstrumentLeg_18.insert(LegIssuer_18.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_18("STRING_1438600430");
    noLegs_0_0.set(LegLocaleOfIssue_18);
    InstrumentLeg_18.insert(LegLocaleOfIssue_18.getString());
    FIX::LegMaturityDate LegMaturityDate_18("LOCALMKTDATE_360727399");
    noLegs_0_0.set(LegMaturityDate_18);
    InstrumentLeg_18.insert(LegMaturityDate_18.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_18("MONTHYEAR_979627703");
    noLegs_0_0.set(LegMaturityMonthYear_18);
    InstrumentLeg_18.insert(LegMaturityMonthYear_18.getString());
    FIX::LegMaturityTime LegMaturityTime_18("TZTIMEONLY_889313883");
    noLegs_0_0.set(LegMaturityTime_18);
    InstrumentLeg_18.insert(LegMaturityTime_18.getString());
    FIX::LegOptAttribute LegOptAttribute_18('1');
    noLegs_0_0.set(LegOptAttribute_18);
    InstrumentLeg_18.insert(LegOptAttribute_18.getString());
    FIX::LegOptionRatio LegOptionRatio_18;
    LegOptionRatio_18.setString("3451444");
    noLegs_0_0.set(LegOptionRatio_18);
    InstrumentLeg_18.insert(LegOptionRatio_18.getString());
    FIX::LegPool LegPool_18("STRING_1131653682");
    noLegs_0_0.set(LegPool_18);
    InstrumentLeg_18.insert(LegPool_18.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_18("STRING_483394798");
    noLegs_0_0.set(LegPriceUnitOfMeasure_18);
    InstrumentLeg_18.insert(LegPriceUnitOfMeasure_18.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_18;
    LegPriceUnitOfMeasureQty_18.setString("4896735");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_18);
    InstrumentLeg_18.insert(LegPriceUnitOfMeasureQty_18.getString());
    FIX::LegProduct LegProduct_18(392966163);
    noLegs_0_0.set(LegProduct_18);
    InstrumentLeg_18.insert(LegProduct_18.getString());
    FIX::LegPutOrCall LegPutOrCall_18(1050447035);
    noLegs_0_0.set(LegPutOrCall_18);
    InstrumentLeg_18.insert(LegPutOrCall_18.getString());
    FIX::LegRatioQty LegRatioQty_18;
    LegRatioQty_18.setString("18324176");
    noLegs_0_0.set(LegRatioQty_18);
    InstrumentLeg_18.insert(LegRatioQty_18.getString());
    FIX::LegRedemptionDate LegRedemptionDate_18("LOCALMKTDATE_1717744700");
    noLegs_0_0.set(LegRedemptionDate_18);
    InstrumentLeg_18.insert(LegRedemptionDate_18.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_18("STRING_999163883");
    noLegs_0_0.set(LegRepoCollateralSecurityType_18);
    InstrumentLeg_18.insert(LegRepoCollateralSecurityType_18.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_18;
    LegRepurchaseRate_18.setString("24.110000");
    noLegs_0_0.set(LegRepurchaseRate_18);
    InstrumentLeg_18.insert(LegRepurchaseRate_18.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_18(1409956997);
    noLegs_0_0.set(LegRepurchaseTerm_18);
    InstrumentLeg_18.insert(LegRepurchaseTerm_18.getString());
    FIX::LegSecurityDesc LegSecurityDesc_18("STRING_1611232068");
    noLegs_0_0.set(LegSecurityDesc_18);
    InstrumentLeg_18.insert(LegSecurityDesc_18.getString());
    FIX::LegSecurityExchange LegSecurityExchange_18("EXCHANGE_799033559");
    noLegs_0_0.set(LegSecurityExchange_18);
    InstrumentLeg_18.insert(LegSecurityExchange_18.getString());
    FIX::LegSecurityID LegSecurityID_18("STRING_744125804");
    noLegs_0_0.set(LegSecurityID_18);
    InstrumentLeg_18.insert(LegSecurityID_18.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_18("STRING_1212104971");
    noLegs_0_0.set(LegSecurityIDSource_18);
    InstrumentLeg_18.insert(LegSecurityIDSource_18.getString());
    FIX::LegSecuritySubType LegSecuritySubType_18("STRING_1499147448");
    noLegs_0_0.set(LegSecuritySubType_18);
    InstrumentLeg_18.insert(LegSecuritySubType_18.getString());
    FIX::LegSecurityType LegSecurityType_18("STRING_2022583977");
    noLegs_0_0.set(LegSecurityType_18);
    InstrumentLeg_18.insert(LegSecurityType_18.getString());
    FIX::LegSide LegSide_18('5');
    noLegs_0_0.set(LegSide_18);
    InstrumentLeg_18.insert(LegSide_18.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_18("STRING_2024631231");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_18);
    InstrumentLeg_18.insert(LegStateOrProvinceOfIssue_18.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_18("GBP");
    noLegs_0_0.set(LegStrikeCurrency_18);
    InstrumentLeg_18.insert(LegStrikeCurrency_18.getString());
    FIX::LegStrikePrice LegStrikePrice_18;
    LegStrikePrice_18.setString("14070183");
    noLegs_0_0.set(LegStrikePrice_18);
    InstrumentLeg_18.insert(LegStrikePrice_18.getString());
    FIX::LegSymbol LegSymbol_18("STRING_1586538195");
    noLegs_0_0.set(LegSymbol_18);
    InstrumentLeg_18.insert(LegSymbol_18.getString());
    FIX::LegSymbolSfx LegSymbolSfx_18("STRING_90993627");
    noLegs_0_0.set(LegSymbolSfx_18);
    InstrumentLeg_18.insert(LegSymbolSfx_18.getString());
    FIX::LegTimeUnit LegTimeUnit_18("STRING_766426859");
    noLegs_0_0.set(LegTimeUnit_18);
    InstrumentLeg_18.insert(LegTimeUnit_18.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_18("STRING_1381940979");
    noLegs_0_0.set(LegUnitOfMeasure_18);
    InstrumentLeg_18.insert(LegUnitOfMeasure_18.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_18;
    LegUnitOfMeasureQty_18.setString("15295940");
    noLegs_0_0.set(LegUnitOfMeasureQty_18);
    InstrumentLeg_18.insert(LegUnitOfMeasureQty_18.getString());
    all_values.push_back(InstrumentLeg_18);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_29;
      FIX::LegSecurityAltID LegSecurityAltID_29("STRING_214085034");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_29);
      LegSecAltIDGrp_NoLegSecurityAltID_29.insert(LegSecurityAltID_29.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_29("STRING_271424293");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_29);
      LegSecAltIDGrp_NoLegSecurityAltID_29.insert(LegSecurityAltIDSource_29.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_29);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_11;
  FIX::AttachmentPoint AttachmentPoint_11;
  AttachmentPoint_11.setString("80.600000");
  msg.set(AttachmentPoint_11);
  Instrument_11.insert(AttachmentPoint_11.getString());
  FIX::CFICode CFICode_11("STRING_559229446");
  msg.set(CFICode_11);
  Instrument_11.insert(CFICode_11.getString());
  FIX::CPProgram CPProgram_11(2);
  msg.set(CPProgram_11);
  Instrument_11.insert(CPProgram_11.getString());
  FIX::CPRegType CPRegType_11("STRING_994732859");
  msg.set(CPRegType_11);
  Instrument_11.insert(CPRegType_11.getString());
  FIX::CapPrice CapPrice_11;
  CapPrice_11.setString("10489030");
  msg.set(CapPrice_11);
  Instrument_11.insert(CapPrice_11.getString());
  FIX::ContractMultiplier ContractMultiplier_11;
  ContractMultiplier_11.setString("17960441");
  msg.set(ContractMultiplier_11);
  Instrument_11.insert(ContractMultiplier_11.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_11(1);
  msg.set(ContractMultiplierUnit_11);
  Instrument_11.insert(ContractMultiplierUnit_11.getString());
  FIX::ContractSettlMonth ContractSettlMonth_11("MONTHYEAR_733837019");
  msg.set(ContractSettlMonth_11);
  Instrument_11.insert(ContractSettlMonth_11.getString());
  FIX::CountryOfIssue CountryOfIssue_11("COUNTRY_1366305191");
  msg.set(CountryOfIssue_11);
  Instrument_11.insert(CountryOfIssue_11.getString());
  FIX::CouponPaymentDate CouponPaymentDate_11("LOCALMKTDATE_896860129");
  msg.set(CouponPaymentDate_11);
  Instrument_11.insert(CouponPaymentDate_11.getString());
  FIX::CouponRate CouponRate_11;
  CouponRate_11.setString("57.830000");
  msg.set(CouponRate_11);
  Instrument_11.insert(CouponRate_11.getString());
  FIX::CreditRating CreditRating_11("STRING_628778540");
  msg.set(CreditRating_11);
  Instrument_11.insert(CreditRating_11.getString());
  FIX::DatedDate DatedDate_11("LOCALMKTDATE_360608549");
  msg.set(DatedDate_11);
  Instrument_11.insert(DatedDate_11.getString());
  FIX::DetachmentPoint DetachmentPoint_11;
  DetachmentPoint_11.setString("93.420000");
  msg.set(DetachmentPoint_11);
  Instrument_11.insert(DetachmentPoint_11.getString());
  FIX::EncodedIssuer EncodedIssuer_11("DATA_1372904344");
  msg.set(EncodedIssuer_11);
  Instrument_11.insert(EncodedIssuer_11.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_11(1572713520);
  msg.set(EncodedIssuerLen_11);
  Instrument_11.insert(EncodedIssuerLen_11.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_11("DATA_799173142");
  msg.set(EncodedSecurityDesc_11);
  Instrument_11.insert(EncodedSecurityDesc_11.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_11(1248004673);
  msg.set(EncodedSecurityDescLen_11);
  Instrument_11.insert(EncodedSecurityDescLen_11.getString());
  FIX::ExerciseStyle ExerciseStyle_11(0);
  msg.set(ExerciseStyle_11);
  Instrument_11.insert(ExerciseStyle_11.getString());
  FIX::Factor Factor_11;
  Factor_11.setString("6763207");
  msg.set(Factor_11);
  Instrument_11.insert(Factor_11.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_11(false);
  msg.set(FlexProductEligibilityIndicator_11);
  Instrument_11.insert(FlexProductEligibilityIndicator_11.getString());
  FIX::FlexibleIndicator FlexibleIndicator_11(false);
  msg.set(FlexibleIndicator_11);
  Instrument_11.insert(FlexibleIndicator_11.getString());
  FIX::FloorPrice FloorPrice_11;
  FloorPrice_11.setString("20833390");
  msg.set(FloorPrice_11);
  Instrument_11.insert(FloorPrice_11.getString());
  FIX::FlowScheduleType FlowScheduleType_11(4);
  msg.set(FlowScheduleType_11);
  Instrument_11.insert(FlowScheduleType_11.getString());
  FIX::InstrRegistry InstrRegistry_11("STRING_589599411");
  msg.set(InstrRegistry_11);
  Instrument_11.insert(InstrRegistry_11.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_11('7');
  msg.set(InstrmtAssignmentMethod_11);
  Instrument_11.insert(InstrmtAssignmentMethod_11.getString());
  FIX::InterestAccrualDate InterestAccrualDate_11("LOCALMKTDATE_1956463823");
  msg.set(InterestAccrualDate_11);
  Instrument_11.insert(InterestAccrualDate_11.getString());
  FIX::IssueDate IssueDate_11("LOCALMKTDATE_2119193469");
  msg.set(IssueDate_11);
  Instrument_11.insert(IssueDate_11.getString());
  FIX::Issuer Issuer_11("STRING_1829436538");
  msg.set(Issuer_11);
  Instrument_11.insert(Issuer_11.getString());
  FIX::ListMethod ListMethod_11(0);
  msg.set(ListMethod_11);
  Instrument_11.insert(ListMethod_11.getString());
  FIX::LocaleOfIssue LocaleOfIssue_11("STRING_243134114");
  msg.set(LocaleOfIssue_11);
  Instrument_11.insert(LocaleOfIssue_11.getString());
  FIX::MaturityDate MaturityDate_11("LOCALMKTDATE_193290950");
  msg.set(MaturityDate_11);
  Instrument_11.insert(MaturityDate_11.getString());
  FIX::MaturityMonthYear MaturityMonthYear_11("MONTHYEAR_582294656");
  msg.set(MaturityMonthYear_11);
  Instrument_11.insert(MaturityMonthYear_11.getString());
  FIX::MaturityTime MaturityTime_11("TZTIMEONLY_1646212090");
  msg.set(MaturityTime_11);
  Instrument_11.insert(MaturityTime_11.getString());
  FIX::MinPriceIncrement MinPriceIncrement_11;
  MinPriceIncrement_11.setString("11880238");
  msg.set(MinPriceIncrement_11);
  Instrument_11.insert(MinPriceIncrement_11.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_11;
  MinPriceIncrementAmount_11.setString("16311976");
  msg.set(MinPriceIncrementAmount_11);
  Instrument_11.insert(MinPriceIncrementAmount_11.getString());
  FIX::NTPositionLimit NTPositionLimit_11(1294772581);
  msg.set(NTPositionLimit_11);
  Instrument_11.insert(NTPositionLimit_11.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_11;
  NotionalPercentageOutstanding_11.setString("0.550000");
  msg.set(NotionalPercentageOutstanding_11);
  Instrument_11.insert(NotionalPercentageOutstanding_11.getString());
  FIX::OptAttribute OptAttribute_11('2');
  msg.set(OptAttribute_11);
  Instrument_11.insert(OptAttribute_11.getString());
  FIX::OptPayoutAmount OptPayoutAmount_11;
  OptPayoutAmount_11.setString("5135941");
  msg.set(OptPayoutAmount_11);
  Instrument_11.insert(OptPayoutAmount_11.getString());
  FIX::OptPayoutType OptPayoutType_11(2);
  msg.set(OptPayoutType_11);
  Instrument_11.insert(OptPayoutType_11.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_11;
  OriginalNotionalPercentageOutstanding_11.setString("68.450000");
  msg.set(OriginalNotionalPercentageOutstanding_11);
  Instrument_11.insert(OriginalNotionalPercentageOutstanding_11.getString());
  FIX::Pool Pool_11("STRING_1142372665");
  msg.set(Pool_11);
  Instrument_11.insert(Pool_11.getString());
  FIX::PositionLimit PositionLimit_11(195705086);
  msg.set(PositionLimit_11);
  Instrument_11.insert(PositionLimit_11.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_11("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_11);
  Instrument_11.insert(PriceQuoteMethod_11.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_11("STRING_367793361");
  msg.set(PriceUnitOfMeasure_11);
  Instrument_11.insert(PriceUnitOfMeasure_11.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_11;
  PriceUnitOfMeasureQty_11.setString("17684186");
  msg.set(PriceUnitOfMeasureQty_11);
  Instrument_11.insert(PriceUnitOfMeasureQty_11.getString());
  FIX::Product Product_13(5);
  msg.set(Product_13);
  Instrument_11.insert(Product_13.getString());
  FIX::ProductComplex ProductComplex_11("STRING_1615798035");
  msg.set(ProductComplex_11);
  Instrument_11.insert(ProductComplex_11.getString());
  FIX::PutOrCall PutOrCall_11(1);
  msg.set(PutOrCall_11);
  Instrument_11.insert(PutOrCall_11.getString());
  FIX::RedemptionDate RedemptionDate_11("LOCALMKTDATE_1641546406");
  msg.set(RedemptionDate_11);
  Instrument_11.insert(RedemptionDate_11.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_11("STRING_603782684");
  msg.set(RepoCollateralSecurityType_11);
  Instrument_11.insert(RepoCollateralSecurityType_11.getString());
  FIX::RepurchaseRate RepurchaseRate_11;
  RepurchaseRate_11.setString("90.390000");
  msg.set(RepurchaseRate_11);
  Instrument_11.insert(RepurchaseRate_11.getString());
  FIX::RepurchaseTerm RepurchaseTerm_11(1577401827);
  msg.set(RepurchaseTerm_11);
  Instrument_11.insert(RepurchaseTerm_11.getString());
  FIX::RestructuringType RestructuringType_11("STRING_FR");
  msg.set(RestructuringType_11);
  Instrument_11.insert(RestructuringType_11.getString());
  FIX::SecurityDesc SecurityDesc_11("STRING_722718450");
  msg.set(SecurityDesc_11);
  Instrument_11.insert(SecurityDesc_11.getString());
  FIX::SecurityExchange SecurityExchange_11("EXCHANGE_132200459");
  msg.set(SecurityExchange_11);
  Instrument_11.insert(SecurityExchange_11.getString());
  FIX::SecurityGroup SecurityGroup_11("STRING_987285704");
  msg.set(SecurityGroup_11);
  Instrument_11.insert(SecurityGroup_11.getString());
  FIX::SecurityID SecurityID_11("STRING_694428271");
  msg.set(SecurityID_11);
  Instrument_11.insert(SecurityID_11.getString());
  FIX::SecurityIDSource SecurityIDSource_11("STRING_2");
  msg.set(SecurityIDSource_11);
  Instrument_11.insert(SecurityIDSource_11.getString());
  FIX::SecurityStatus SecurityStatus_11("STRING_1");
  msg.set(SecurityStatus_11);
  Instrument_11.insert(SecurityStatus_11.getString());
  FIX::SecuritySubType SecuritySubType_11("STRING_937562385");
  msg.set(SecuritySubType_11);
  Instrument_11.insert(SecuritySubType_11.getString());
  FIX::SecurityType SecurityType_13("STRING_CTB");
  msg.set(SecurityType_13);
  Instrument_11.insert(SecurityType_13.getString());
  FIX::Seniority Seniority_11("STRING_SB");
  msg.set(Seniority_11);
  Instrument_11.insert(Seniority_11.getString());
  FIX::SettlMethod SettlMethod_11('P');
  msg.set(SettlMethod_11);
  Instrument_11.insert(SettlMethod_11.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_11("STRING_1195468109");
  msg.set(SettleOnOpenFlag_11);
  Instrument_11.insert(SettleOnOpenFlag_11.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_11("STRING_1076359613");
  msg.set(StateOrProvinceOfIssue_11);
  Instrument_11.insert(StateOrProvinceOfIssue_11.getString());
  FIX::StrikeCurrency StrikeCurrency_11("EUR");
  msg.set(StrikeCurrency_11);
  Instrument_11.insert(StrikeCurrency_11.getString());
  FIX::StrikeMultiplier StrikeMultiplier_11;
  StrikeMultiplier_11.setString("12939106");
  msg.set(StrikeMultiplier_11);
  Instrument_11.insert(StrikeMultiplier_11.getString());
  FIX::StrikePrice StrikePrice_11;
  StrikePrice_11.setString("971738");
  msg.set(StrikePrice_11);
  Instrument_11.insert(StrikePrice_11.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_11(2);
  msg.set(StrikePriceBoundaryMethod_11);
  Instrument_11.insert(StrikePriceBoundaryMethod_11.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_11;
  StrikePriceBoundaryPrecision_11.setString("38.730000");
  msg.set(StrikePriceBoundaryPrecision_11);
  Instrument_11.insert(StrikePriceBoundaryPrecision_11.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_11(3);
  msg.set(StrikePriceDeterminationMethod_11);
  Instrument_11.insert(StrikePriceDeterminationMethod_11.getString());
  FIX::StrikeValue StrikeValue_11;
  StrikeValue_11.setString("1645061");
  msg.set(StrikeValue_11);
  Instrument_11.insert(StrikeValue_11.getString());
  FIX::Symbol Symbol_11("STRING_178506413");
  msg.set(Symbol_11);
  Instrument_11.insert(Symbol_11.getString());
  FIX::SymbolSfx SymbolSfx_11("STRING_WI");
  msg.set(SymbolSfx_11);
  Instrument_11.insert(SymbolSfx_11.getString());
  FIX::TimeUnit TimeUnit_11("STRING_Wk");
  msg.set(TimeUnit_11);
  Instrument_11.insert(TimeUnit_11.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_11(3);
  msg.set(UnderlyingPriceDeterminationMethod_11);
  Instrument_11.insert(UnderlyingPriceDeterminationMethod_11.getString());
  FIX::UnitOfMeasure UnitOfMeasure_11("STRING_Bbl");
  msg.set(UnitOfMeasure_11);
  Instrument_11.insert(UnitOfMeasure_11.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_11;
  UnitOfMeasureQty_11.setString("15674380");
  msg.set(UnitOfMeasureQty_11);
  Instrument_11.insert(UnitOfMeasureQty_11.getString());
  FIX::ValuationMethod ValuationMethod_11("STRING_CDS");
  msg.set(ValuationMethod_11);
  Instrument_11.insert(ValuationMethod_11.getString());
  all_values.push_back(Instrument_11);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_24;
    FIX::ComplexEventCondition ComplexEventCondition_24(1);
    noComplexEvents_0_0.set(ComplexEventCondition_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventCondition_24.getString());
    FIX::ComplexEventPrice ComplexEventPrice_24;
    ComplexEventPrice_24.setString("677130");
    noComplexEvents_0_0.set(ComplexEventPrice_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPrice_24.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_24(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryMethod_24.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_24;
    ComplexEventPriceBoundaryPrecision_24.setString("18.420000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryPrecision_24.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_24(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceTimeType_24.getString());
    FIX::ComplexEventType ComplexEventType_24(1);
    noComplexEvents_0_0.set(ComplexEventType_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventType_24.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_24;
    ComplexOptPayoutAmount_24.setString("9702201");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexOptPayoutAmount_24.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_24);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_52;
      FIX::ComplexEventEndDate ComplexEventEndDate_52(FIX::UTCTIMESTAMP(11, 1, 55, 26, 82007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_52);
      ComplexEventDates_NoComplexEventDates_52.insert(ComplexEventEndDate_52.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_52(FIX::UTCTIMESTAMP(8, 37, 12, 25, 112008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_52);
      ComplexEventDates_NoComplexEventDates_52.insert(ComplexEventStartDate_52.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_52);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_98;
        FIX::ComplexEventEndTime ComplexEventEndTime_98(FIX::UTCTIMEONLY(1, 59, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_98);
        ComplexEventTimes_NoComplexEventTimes_98.insert(ComplexEventEndTime_98.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_98(FIX::UTCTIMEONLY(20, 43, 30));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_98);
        ComplexEventTimes_NoComplexEventTimes_98.insert(ComplexEventStartTime_98.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_98);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_99;
        FIX::ComplexEventEndTime ComplexEventEndTime_99(FIX::UTCTIMEONLY(15, 13, 27));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_99);
        ComplexEventTimes_NoComplexEventTimes_99.insert(ComplexEventEndTime_99.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_99(FIX::UTCTIMEONLY(8, 41, 9));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_99);
        ComplexEventTimes_NoComplexEventTimes_99.insert(ComplexEventStartTime_99.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_99);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_100;
        FIX::ComplexEventEndTime ComplexEventEndTime_100(FIX::UTCTIMEONLY(20, 10, 41));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_100);
        ComplexEventTimes_NoComplexEventTimes_100.insert(ComplexEventEndTime_100.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_100(FIX::UTCTIMEONLY(5, 22, 29));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_100);
        ComplexEventTimes_NoComplexEventTimes_100.insert(ComplexEventStartTime_100.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_100);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_25;
    FIX::ComplexEventCondition ComplexEventCondition_25(2);
    noComplexEvents_0_1.set(ComplexEventCondition_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventCondition_25.getString());
    FIX::ComplexEventPrice ComplexEventPrice_25;
    ComplexEventPrice_25.setString("11734692");
    noComplexEvents_0_1.set(ComplexEventPrice_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPrice_25.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_25(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceBoundaryMethod_25.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_25;
    ComplexEventPriceBoundaryPrecision_25.setString("26.830000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceBoundaryPrecision_25.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_25(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceTimeType_25.getString());
    FIX::ComplexEventType ComplexEventType_25(1);
    noComplexEvents_0_1.set(ComplexEventType_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventType_25.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_25;
    ComplexOptPayoutAmount_25.setString("14327399");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexOptPayoutAmount_25.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_25);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_53;
      FIX::ComplexEventEndDate ComplexEventEndDate_53(FIX::UTCTIMESTAMP(23, 43, 25, 15, 32007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_53);
      ComplexEventDates_NoComplexEventDates_53.insert(ComplexEventEndDate_53.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_53(FIX::UTCTIMESTAMP(5, 1, 32, 1, 22011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_53);
      ComplexEventDates_NoComplexEventDates_53.insert(ComplexEventStartDate_53.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_53);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_101;
        FIX::ComplexEventEndTime ComplexEventEndTime_101(FIX::UTCTIMEONLY(5, 40, 36));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_101);
        ComplexEventTimes_NoComplexEventTimes_101.insert(ComplexEventEndTime_101.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_101(FIX::UTCTIMEONLY(22, 58, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_101);
        ComplexEventTimes_NoComplexEventTimes_101.insert(ComplexEventStartTime_101.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_101);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_102;
        FIX::ComplexEventEndTime ComplexEventEndTime_102(FIX::UTCTIMEONLY(1, 34, 10));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_102);
        ComplexEventTimes_NoComplexEventTimes_102.insert(ComplexEventEndTime_102.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_102(FIX::UTCTIMEONLY(14, 6, 3));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_102);
        ComplexEventTimes_NoComplexEventTimes_102.insert(ComplexEventStartTime_102.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_102);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_103;
        FIX::ComplexEventEndTime ComplexEventEndTime_103(FIX::UTCTIMEONLY(9, 38, 48));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_103);
        ComplexEventTimes_NoComplexEventTimes_103.insert(ComplexEventEndTime_103.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_103(FIX::UTCTIMEONLY(4, 43, 1));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_103);
        ComplexEventTimes_NoComplexEventTimes_103.insert(ComplexEventStartTime_103.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_103);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_54;
      FIX::ComplexEventEndDate ComplexEventEndDate_54(FIX::UTCTIMESTAMP(12, 25, 59, 6, 72017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_54);
      ComplexEventDates_NoComplexEventDates_54.insert(ComplexEventEndDate_54.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_54(FIX::UTCTIMESTAMP(3, 9, 41, 3, 122001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_54);
      ComplexEventDates_NoComplexEventDates_54.insert(ComplexEventStartDate_54.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_54);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_104;
        FIX::ComplexEventEndTime ComplexEventEndTime_104(FIX::UTCTIMEONLY(8, 50, 29));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_104);
        ComplexEventTimes_NoComplexEventTimes_104.insert(ComplexEventEndTime_104.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_104(FIX::UTCTIMEONLY(8, 28, 14));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_104);
        ComplexEventTimes_NoComplexEventTimes_104.insert(ComplexEventStartTime_104.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_104);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_23;
    FIX::EventDate EventDate_23("LOCALMKTDATE_1325790493");
    noEvents_0_0.set(EventDate_23);
    EvntGrp_NoEvents_23.insert(EventDate_23.getString());
    FIX::EventPx EventPx_23;
    EventPx_23.setString("15718262");
    noEvents_0_0.set(EventPx_23);
    EvntGrp_NoEvents_23.insert(EventPx_23.getString());
    FIX::EventText EventText_23("STRING_306214739");
    noEvents_0_0.set(EventText_23);
    EvntGrp_NoEvents_23.insert(EventText_23.getString());
    FIX::EventTime EventTime_23(FIX::UTCTIMESTAMP(13, 35, 12, 19, 122011));
    noEvents_0_0.set(EventTime_23);
    EvntGrp_NoEvents_23.insert(EventTime_23.getString());
    FIX::EventType EventType_23(19);
    noEvents_0_0.set(EventType_23);
    EvntGrp_NoEvents_23.insert(EventType_23.getString());
    all_values.push_back(EvntGrp_NoEvents_23);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_24;
    FIX::EventDate EventDate_24("LOCALMKTDATE_687944945");
    noEvents_0_1.set(EventDate_24);
    EvntGrp_NoEvents_24.insert(EventDate_24.getString());
    FIX::EventPx EventPx_24;
    EventPx_24.setString("581825");
    noEvents_0_1.set(EventPx_24);
    EvntGrp_NoEvents_24.insert(EventPx_24.getString());
    FIX::EventText EventText_24("STRING_548142707");
    noEvents_0_1.set(EventText_24);
    EvntGrp_NoEvents_24.insert(EventText_24.getString());
    FIX::EventTime EventTime_24(FIX::UTCTIMESTAMP(7, 56, 43, 6, 92000));
    noEvents_0_1.set(EventTime_24);
    EvntGrp_NoEvents_24.insert(EventTime_24.getString());
    FIX::EventType EventType_24(11);
    noEvents_0_1.set(EventType_24);
    EvntGrp_NoEvents_24.insert(EventType_24.getString());
    all_values.push_back(EvntGrp_NoEvents_24);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_20;
    FIX::InstrumentPartyID InstrumentPartyID_20("STRING_1380366266");
    noInstrumentParties_0_0.set(InstrumentPartyID_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyID_20.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_20('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyIDSource_20.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_20(1661699160);
    noInstrumentParties_0_0.set(InstrumentPartyRole_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyRole_20.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_20);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36;
      FIX::InstrumentPartySubID InstrumentPartySubID_36("STRING_1481871129");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_36);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36.insert(InstrumentPartySubID_36.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_36(559753220);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_36);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36.insert(InstrumentPartySubIDType_36.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37;
      FIX::InstrumentPartySubID InstrumentPartySubID_37("STRING_648483703");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_37);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37.insert(InstrumentPartySubID_37.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_37(986981841);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_37);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37.insert(InstrumentPartySubIDType_37.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_21;
    FIX::InstrumentPartyID InstrumentPartyID_21("STRING_1885543714");
    noInstrumentParties_0_1.set(InstrumentPartyID_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyID_21.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_21('7');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyIDSource_21.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_21(1293196580);
    noInstrumentParties_0_1.set(InstrumentPartyRole_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyRole_21.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_21);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38;
      FIX::InstrumentPartySubID InstrumentPartySubID_38("STRING_1076286556");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_38);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38.insert(InstrumentPartySubID_38.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_38(1591327675);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_38);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38.insert(InstrumentPartySubIDType_38.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_25;
    FIX::SecurityAltID SecurityAltID_25("STRING_787511555");
    noSecurityAltID_0_0.set(SecurityAltID_25);
    SecAltIDGrp_NoSecurityAltID_25.insert(SecurityAltID_25.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_25("STRING_819316439");
    noSecurityAltID_0_0.set(SecurityAltIDSource_25);
    SecAltIDGrp_NoSecurityAltID_25.insert(SecurityAltIDSource_25.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_25);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_22;
  FIX::SecurityXML SecurityXML_23("XMLDATA_2145918138");
  msg.set(SecurityXML_23);
  FIX::SecurityXMLLen SecurityXMLLen_11(951106133);
  msg.set(SecurityXMLLen_11);
  FIX::SecurityXMLSchema SecurityXMLSchema_11("STRING_1507261384");
  msg.set(SecurityXMLSchema_11);
  SecurityXML_22.insert(SecurityXMLSchema_11.getString());
  all_values.push_back(SecurityXML_22);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_12;
    FIX::MiscFeeAmt MiscFeeAmt_12;
    MiscFeeAmt_12.setString("14992488");
    noMiscFees_0_0.set(MiscFeeAmt_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeAmt_12.getString());
    FIX::MiscFeeBasis MiscFeeBasis_12(1);
    noMiscFees_0_0.set(MiscFeeBasis_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeBasis_12.getString());
    FIX::MiscFeeCurr MiscFeeCurr_12("CAN");
    noMiscFees_0_0.set(MiscFeeCurr_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeCurr_12.getString());
    FIX::MiscFeeType MiscFeeType_12("STRING_11");
    noMiscFees_0_0.set(MiscFeeType_12);
    MiscFeesGrp_NoMiscFees_12.insert(MiscFeeType_12.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_12);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_13;
    FIX::MiscFeeAmt MiscFeeAmt_13;
    MiscFeeAmt_13.setString("10160199");
    noMiscFees_0_1.set(MiscFeeAmt_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeAmt_13.getString());
    FIX::MiscFeeBasis MiscFeeBasis_13(2);
    noMiscFees_0_1.set(MiscFeeBasis_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeBasis_13.getString());
    FIX::MiscFeeCurr MiscFeeCurr_13("GBP");
    noMiscFees_0_1.set(MiscFeeCurr_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeCurr_13.getString());
    FIX::MiscFeeType MiscFeeType_13("STRING_9");
    noMiscFees_0_1.set(MiscFeeType_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeType_13.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_13);

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_14;
    FIX::MiscFeeAmt MiscFeeAmt_14;
    MiscFeeAmt_14.setString("14787909");
    noMiscFees_0_2.set(MiscFeeAmt_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeAmt_14.getString());
    FIX::MiscFeeBasis MiscFeeBasis_14(0);
    noMiscFees_0_2.set(MiscFeeBasis_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeBasis_14.getString());
    FIX::MiscFeeCurr MiscFeeCurr_14("USD");
    noMiscFees_0_2.set(MiscFeeCurr_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeCurr_14.getString());
    FIX::MiscFeeType MiscFeeType_14("STRING_14");
    noMiscFees_0_2.set(MiscFeeType_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeType_14.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_14);

    msg.addGroup(noMiscFees_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_26;
    FIX::PartyID PartyID_26("STRING_1480512439");
    noPartyIDs_0_0.set(PartyID_26);
    Parties_NoPartyIDs_26.insert(PartyID_26.getString());
    FIX::PartyIDSource PartyIDSource_26('4');
    noPartyIDs_0_0.set(PartyIDSource_26);
    Parties_NoPartyIDs_26.insert(PartyIDSource_26.getString());
    FIX::PartyRole PartyRole_26(4);
    noPartyIDs_0_0.set(PartyRole_26);
    Parties_NoPartyIDs_26.insert(PartyRole_26.getString());
    all_values.push_back(Parties_NoPartyIDs_26);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_56;
      FIX::PartySubID PartySubID_56("STRING_428683262");
      noPartySubIDs_0_1_0.set(PartySubID_56);
      PtysSubGrp_NoPartySubIDs_56.insert(PartySubID_56.getString());
      FIX::PartySubIDType PartySubIDType_56(16);
      noPartySubIDs_0_1_0.set(PartySubIDType_56);
      PtysSubGrp_NoPartySubIDs_56.insert(PartySubIDType_56.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_56);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_57;
      FIX::PartySubID PartySubID_57("STRING_482141635");
      noPartySubIDs_0_1_1.set(PartySubID_57);
      PtysSubGrp_NoPartySubIDs_57.insert(PartySubID_57.getString());
      FIX::PartySubIDType PartySubIDType_57(23);
      noPartySubIDs_0_1_1.set(PartySubIDType_57);
      PtysSubGrp_NoPartySubIDs_57.insert(PartySubIDType_57.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_57);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_58;
      FIX::PartySubID PartySubID_58("STRING_488936648");
      noPartySubIDs_0_1_2.set(PartySubID_58);
      PtysSubGrp_NoPartySubIDs_58.insert(PartySubID_58.getString());
      FIX::PartySubIDType PartySubIDType_58(5);
      noPartySubIDs_0_1_2.set(PartySubIDType_58);
      PtysSubGrp_NoPartySubIDs_58.insert(PartySubIDType_58.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_58);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_27;
    FIX::PartyID PartyID_27("STRING_691843729");
    noPartyIDs_0_1.set(PartyID_27);
    Parties_NoPartyIDs_27.insert(PartyID_27.getString());
    FIX::PartyIDSource PartyIDSource_27('2');
    noPartyIDs_0_1.set(PartyIDSource_27);
    Parties_NoPartyIDs_27.insert(PartyIDSource_27.getString());
    FIX::PartyRole PartyRole_27(42);
    noPartyIDs_0_1.set(PartyRole_27);
    Parties_NoPartyIDs_27.insert(PartyRole_27.getString());
    all_values.push_back(Parties_NoPartyIDs_27);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_59;
      FIX::PartySubID PartySubID_59("STRING_543988160");
      noPartySubIDs_1_1_0.set(PartySubID_59);
      PtysSubGrp_NoPartySubIDs_59.insert(PartySubID_59.getString());
      FIX::PartySubIDType PartySubIDType_59(4);
      noPartySubIDs_1_1_0.set(PartySubIDType_59);
      PtysSubGrp_NoPartySubIDs_59.insert(PartySubIDType_59.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_59);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_6;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_6("CAN");
  msg.set(BenchmarkCurveCurrency_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurveCurrency_6.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_6("STRING_Euribor");
  msg.set(BenchmarkCurveName_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurveName_6.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_6("STRING_1296644067");
  msg.set(BenchmarkCurvePoint_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurvePoint_6.getString());
  FIX::BenchmarkPrice BenchmarkPrice_6;
  BenchmarkPrice_6.setString("20408409");
  msg.set(BenchmarkPrice_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkPrice_6.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_6(33507539);
  msg.set(BenchmarkPriceType_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkPriceType_6.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_6("STRING_1395068708");
  msg.set(BenchmarkSecurityID_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkSecurityID_6.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_6("STRING_378519724");
  msg.set(BenchmarkSecurityIDSource_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkSecurityIDSource_6.getString());
  FIX::Spread Spread_6;
  Spread_6.setString("4104969");
  msg.set(Spread_6);
  SpreadOrBenchmarkCurveData_6.insert(Spread_6.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_6);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_11;
    FIX::StipulationType StipulationType_11("STRING_ISSUER");
    noStipulations_0_0.set(StipulationType_11);
    Stipulations_NoStipulations_11.insert(StipulationType_11.getString());
    FIX::StipulationValue StipulationValue_11("STRING_301701915");
    noStipulations_0_0.set(StipulationValue_11);
    Stipulations_NoStipulations_11.insert(StipulationValue_11.getString());
    all_values.push_back(Stipulations_NoStipulations_11);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_12;
    FIX::StipulationType StipulationType_12("STRING_ORDRINCR");
    noStipulations_0_1.set(StipulationType_12);
    Stipulations_NoStipulations_12.insert(StipulationType_12.getString());
    FIX::StipulationValue StipulationValue_12("STRING_1636109220");
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
    multiset<string> TrdCollGrp_NoTrades_8;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_8("STRING_891433495");
    noTrades_0_0.set(SecondaryTradeReportID_8);
    TrdCollGrp_NoTrades_8.insert(SecondaryTradeReportID_8.getString());
    FIX::TradeReportID TradeReportID_8("STRING_771595902");
    noTrades_0_0.set(TradeReportID_8);
    TrdCollGrp_NoTrades_8.insert(TradeReportID_8.getString());
    all_values.push_back(TrdCollGrp_NoTrades_8);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_9;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_9("STRING_941678311");
    noTrades_0_1.set(SecondaryTradeReportID_9);
    TrdCollGrp_NoTrades_9.insert(SecondaryTradeReportID_9.getString());
    FIX::TradeReportID TradeReportID_9("STRING_297288574");
    noTrades_0_1.set(TradeReportID_9);
    TrdCollGrp_NoTrades_9.insert(TradeReportID_9.getString());
    all_values.push_back(TrdCollGrp_NoTrades_9);

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_6;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_6("MULTIPLESTRINGVALUE_MAC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskOrderHandlingInst_6.getString());
    FIX::DeskType DeskType_6("STRING_S");
    noTrdRegTimestamps_0_0.set(DeskType_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskType_6.getString());
    FIX::DeskTypeSource DeskTypeSource_6(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskTypeSource_6.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_6(FIX::UTCTIMESTAMP(1, 24, 17, 13, 102001));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestamp_6.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_6("STRING_1547399946");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestampOrigin_6.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_6(6);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestampType_6.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_6);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_1;
    FIX::CollAction CollAction_1(0);
    noUnderlyings_0_0.set(CollAction_1);
    UndInstrmtCollGrp_NoUnderlyings_1.insert(CollAction_1.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_1);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_15;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_15("DATA_617465353");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingIssuer_15.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_15(1862381672);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingIssuerLen_15.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_15("DATA_1579151423");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDesc_15.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_15(2012534061);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_15);
    UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDescLen_15.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_15;
    UnderlyingAdjustedQuantity_15.setString("934177");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_15);
    UnderlyingInstrument_15.insert(UnderlyingAdjustedQuantity_15.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_15;
    UnderlyingAllocationPercent_15.setString("83.940000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_15);
    UnderlyingInstrument_15.insert(UnderlyingAllocationPercent_15.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_15;
    UnderlyingAttachmentPoint_15.setString("63.800000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_15);
    UnderlyingInstrument_15.insert(UnderlyingAttachmentPoint_15.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_15("STRING_1433538479");
    noUnderlyings_0_0.set(UnderlyingCFICode_15);
    UnderlyingInstrument_15.insert(UnderlyingCFICode_15.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_15("STRING_143866662");
    noUnderlyings_0_0.set(UnderlyingCPProgram_15);
    UnderlyingInstrument_15.insert(UnderlyingCPProgram_15.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_15("STRING_2347436");
    noUnderlyings_0_0.set(UnderlyingCPRegType_15);
    UnderlyingInstrument_15.insert(UnderlyingCPRegType_15.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_15;
    UnderlyingCapValue_15.setString("9221640");
    noUnderlyings_0_0.set(UnderlyingCapValue_15);
    UnderlyingInstrument_15.insert(UnderlyingCapValue_15.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_15;
    UnderlyingCashAmount_15.setString("8965267");
    noUnderlyings_0_0.set(UnderlyingCashAmount_15);
    UnderlyingInstrument_15.insert(UnderlyingCashAmount_15.getString());
    FIX::UnderlyingCashType UnderlyingCashType_15("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_15);
    UnderlyingInstrument_15.insert(UnderlyingCashType_15.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_15;
    UnderlyingContractMultiplier_15.setString("16937599");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_15);
    UnderlyingInstrument_15.insert(UnderlyingContractMultiplier_15.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_15(1838205054);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_15);
    UnderlyingInstrument_15.insert(UnderlyingContractMultiplierUnit_15.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_15("COUNTRY_1191069506");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingCountryOfIssue_15.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_15("LOCALMKTDATE_746555471");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_15);
    UnderlyingInstrument_15.insert(UnderlyingCouponPaymentDate_15.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_15;
    UnderlyingCouponRate_15.setString("24.650000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_15);
    UnderlyingInstrument_15.insert(UnderlyingCouponRate_15.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_15("STRING_1970499716");
    noUnderlyings_0_0.set(UnderlyingCreditRating_15);
    UnderlyingInstrument_15.insert(UnderlyingCreditRating_15.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_15("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_15);
    UnderlyingInstrument_15.insert(UnderlyingCurrency_15.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_15;
    UnderlyingCurrentValue_15.setString("18720994");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_15);
    UnderlyingInstrument_15.insert(UnderlyingCurrentValue_15.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_15;
    UnderlyingDetachmentPoint_15.setString("84.620000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_15);
    UnderlyingInstrument_15.insert(UnderlyingDetachmentPoint_15.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_15;
    UnderlyingDirtyPrice_15.setString("15751717");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_15);
    UnderlyingInstrument_15.insert(UnderlyingDirtyPrice_15.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_15;
    UnderlyingEndPrice_15.setString("18469748");
    noUnderlyings_0_0.set(UnderlyingEndPrice_15);
    UnderlyingInstrument_15.insert(UnderlyingEndPrice_15.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_15;
    UnderlyingEndValue_15.setString("11053164");
    noUnderlyings_0_0.set(UnderlyingEndValue_15);
    UnderlyingInstrument_15.insert(UnderlyingEndValue_15.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_15(371891430);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_15);
    UnderlyingInstrument_15.insert(UnderlyingExerciseStyle_15.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_15;
    UnderlyingFXRate_15.setString("12468911");
    noUnderlyings_0_0.set(UnderlyingFXRate_15);
    UnderlyingInstrument_15.insert(UnderlyingFXRate_15.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_15('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_15);
    UnderlyingInstrument_15.insert(UnderlyingFXRateCalc_15.getString());
    FIX::UnderlyingFactor UnderlyingFactor_15;
    UnderlyingFactor_15.setString("1934321");
    noUnderlyings_0_0.set(UnderlyingFactor_15);
    UnderlyingInstrument_15.insert(UnderlyingFactor_15.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_15(645051434);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_15);
    UnderlyingInstrument_15.insert(UnderlyingFlowScheduleType_15.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_15("STRING_1043603103");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_15);
    UnderlyingInstrument_15.insert(UnderlyingInstrRegistry_15.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_15("LOCALMKTDATE_2055813816");
    noUnderlyings_0_0.set(UnderlyingIssueDate_15);
    UnderlyingInstrument_15.insert(UnderlyingIssueDate_15.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_15("STRING_76719209");
    noUnderlyings_0_0.set(UnderlyingIssuer_15);
    UnderlyingInstrument_15.insert(UnderlyingIssuer_15.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_15("STRING_908653516");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingLocaleOfIssue_15.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_15("LOCALMKTDATE_1747916");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityDate_15.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_15("MONTHYEAR_2066367604");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityMonthYear_15.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_15("TZTIMEONLY_1500079896");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_15);
    UnderlyingInstrument_15.insert(UnderlyingMaturityTime_15.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_15;
    UnderlyingNotionalPercentageOutstanding_15.setString("63.960000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_15);
    UnderlyingInstrument_15.insert(UnderlyingNotionalPercentageOutstanding_15.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_15('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_15);
    UnderlyingInstrument_15.insert(UnderlyingOptAttribute_15.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_15;
    UnderlyingOriginalNotionalPercentageOutstanding_15.setString("73.330000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_15);
    UnderlyingInstrument_15.insert(UnderlyingOriginalNotionalPercentageOutstanding_15.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_15("STRING_209966800");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_15);
    UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasure_15.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_15;
    UnderlyingPriceUnitOfMeasureQty_15.setString("9592773");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_15);
    UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasureQty_15.getString());
    FIX::UnderlyingProduct UnderlyingProduct_15(248724617);
    noUnderlyings_0_0.set(UnderlyingProduct_15);
    UnderlyingInstrument_15.insert(UnderlyingProduct_15.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_15(1903726754);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_15);
    UnderlyingInstrument_15.insert(UnderlyingPutOrCall_15.getString());
    FIX::UnderlyingPx UnderlyingPx_15;
    UnderlyingPx_15.setString("6499987");
    noUnderlyings_0_0.set(UnderlyingPx_15);
    UnderlyingInstrument_15.insert(UnderlyingPx_15.getString());
    FIX::UnderlyingQty UnderlyingQty_15;
    UnderlyingQty_15.setString("14397941");
    noUnderlyings_0_0.set(UnderlyingQty_15);
    UnderlyingInstrument_15.insert(UnderlyingQty_15.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_15("LOCALMKTDATE_502798578");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_15);
    UnderlyingInstrument_15.insert(UnderlyingRedemptionDate_15.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_15("STRING_1912111231");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_15);
    UnderlyingInstrument_15.insert(UnderlyingRepoCollateralSecurityType_15.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_15;
    UnderlyingRepurchaseRate_15.setString("1.920000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_15);
    UnderlyingInstrument_15.insert(UnderlyingRepurchaseRate_15.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_15(174676856);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_15);
    UnderlyingInstrument_15.insert(UnderlyingRepurchaseTerm_15.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_15("STRING_939584107");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_15);
    UnderlyingInstrument_15.insert(UnderlyingRestructuringType_15.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_15("STRING_987426013");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityDesc_15.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_15("EXCHANGE_1611205319");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityExchange_15.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_15("STRING_367272180");
    noUnderlyings_0_0.set(UnderlyingSecurityID_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityID_15.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_15("STRING_686917264");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityIDSource_15.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_15("STRING_569038135");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_15);
    UnderlyingInstrument_15.insert(UnderlyingSecuritySubType_15.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_15("STRING_739163610");
    noUnderlyings_0_0.set(UnderlyingSecurityType_15);
    UnderlyingInstrument_15.insert(UnderlyingSecurityType_15.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_15("STRING_1933808462");
    noUnderlyings_0_0.set(UnderlyingSeniority_15);
    UnderlyingInstrument_15.insert(UnderlyingSeniority_15.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_15("STRING_995175885");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_15);
    UnderlyingInstrument_15.insert(UnderlyingSettlMethod_15.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_15(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_15);
    UnderlyingInstrument_15.insert(UnderlyingSettlementType_15.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_15;
    UnderlyingStartValue_15.setString("4313762");
    noUnderlyings_0_0.set(UnderlyingStartValue_15);
    UnderlyingInstrument_15.insert(UnderlyingStartValue_15.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_15("STRING_2038778988");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_15);
    UnderlyingInstrument_15.insert(UnderlyingStateOrProvinceOfIssue_15.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_15("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_15);
    UnderlyingInstrument_15.insert(UnderlyingStrikeCurrency_15.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_15;
    UnderlyingStrikePrice_15.setString("7999488");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_15);
    UnderlyingInstrument_15.insert(UnderlyingStrikePrice_15.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_15("STRING_842673840");
    noUnderlyings_0_0.set(UnderlyingSymbol_15);
    UnderlyingInstrument_15.insert(UnderlyingSymbol_15.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_15("STRING_426979413");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_15);
    UnderlyingInstrument_15.insert(UnderlyingSymbolSfx_15.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_15("STRING_152545104");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_15);
    UnderlyingInstrument_15.insert(UnderlyingTimeUnit_15.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_15("STRING_130476588");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_15);
    UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasure_15.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_15;
    UnderlyingUnitOfMeasureQty_15.setString("4897300");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_15);
    UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasureQty_15.getString());
    all_values.push_back(UnderlyingInstrument_15);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_28;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_28("STRING_340443388");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltID_28.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_28("STRING_1449007392");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltIDSource_28.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_24;
      FIX::UnderlyingStipType UnderlyingStipType_24("STRING_96686494");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_24);
      UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipType_24.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_24("STRING_2099006158");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_24);
      UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipValue_24.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_24);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_25;
      FIX::UnderlyingStipType UnderlyingStipType_25("STRING_1196007530");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_25);
      UnderlyingStipulations_NoUnderlyingStips_25.insert(UnderlyingStipType_25.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_25("STRING_599485072");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_25);
      UnderlyingStipulations_NoUnderlyingStips_25.insert(UnderlyingStipValue_25.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_25);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_26;
      FIX::UnderlyingStipType UnderlyingStipType_26("STRING_1863633742");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipType_26.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_26("STRING_311334074");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipValue_26.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_26);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_27;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_27("STRING_655734201");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyID_27.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_27('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyIDSource_27.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_27(237883600);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyRole_27.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_27);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_51("STRING_1985677352");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_51);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51.insert(UnderlyingInstrumentPartySubID_51.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_51(806921735);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_51);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51.insert(UnderlyingInstrumentPartySubIDType_51.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_52("STRING_1762169992");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_52);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52.insert(UnderlyingInstrumentPartySubID_52.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_52(1772002166);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_52);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52.insert(UnderlyingInstrumentPartySubIDType_52.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_28;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_28("STRING_1802097620");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyID_28.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_28('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyIDSource_28.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_28(55894766);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyRole_28.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_28);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_53("STRING_1388208023");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_53);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53.insert(UnderlyingInstrumentPartySubID_53.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_53(563990223);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_53);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53.insert(UnderlyingInstrumentPartySubIDType_53.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
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
