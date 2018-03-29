#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/QuoteResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteResponse_0;
  FIX::Account Account_38("STRING_1124589511");
  msg.set(Account_38);
  QuoteResponse_0.insert(Account_38.getString());
  FIX::AccountType AccountType_33(7);
  msg.set(AccountType_33);
  QuoteResponse_0.insert(AccountType_33.getString());
  FIX::AcctIDSource AcctIDSource_31(4);
  msg.set(AcctIDSource_31);
  QuoteResponse_0.insert(AcctIDSource_31.getString());
  FIX::BidForwardPoints BidForwardPoints_15;
  BidForwardPoints_15.setString("14955123");
  msg.set(BidForwardPoints_15);
  QuoteResponse_0.insert(BidForwardPoints_15.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_15;
  BidForwardPoints2_15.setString("5661810");
  msg.set(BidForwardPoints2_15);
  QuoteResponse_0.insert(BidForwardPoints2_15.getString());
  FIX::BidPx BidPx_15;
  BidPx_15.setString("18469777");
  msg.set(BidPx_15);
  QuoteResponse_0.insert(BidPx_15.getString());
  FIX::BidSize BidSize_15;
  BidSize_15.setString("13015801");
  msg.set(BidSize_15);
  QuoteResponse_0.insert(BidSize_15.getString());
  FIX::BidSpotRate BidSpotRate_15;
  BidSpotRate_15.setString("17199938");
  msg.set(BidSpotRate_15);
  QuoteResponse_0.insert(BidSpotRate_15.getString());
  FIX::BidYield BidYield_15;
  BidYield_15.setString("39.470000");
  msg.set(BidYield_15);
  QuoteResponse_0.insert(BidYield_15.getString());
  FIX::ClOrdID ClOrdID_43("STRING_1986231235");
  msg.set(ClOrdID_43);
  QuoteResponse_0.insert(ClOrdID_43.getString());
  FIX::CommType CommType_23('3');
  msg.set(CommType_23);
  QuoteResponse_0.insert(CommType_23.getString());
  FIX::Commission Commission_23;
  Commission_23.setString("1069506");
  msg.set(Commission_23);
  QuoteResponse_0.insert(Commission_23.getString());
  FIX::Currency Currency_59("CHF");
  msg.set(Currency_59);
  QuoteResponse_0.insert(Currency_59.getString());
  FIX::CustOrderCapacity CustOrderCapacity_18(3);
  msg.set(CustOrderCapacity_18);
  QuoteResponse_0.insert(CustOrderCapacity_18.getString());
  FIX::EncodedText EncodedText_78("DATA_570234174");
  msg.set(EncodedText_78);
  QuoteResponse_0.insert(EncodedText_78.getString());
  FIX::EncodedTextLen EncodedTextLen_78(92918000);
  msg.set(EncodedTextLen_78);
  QuoteResponse_0.insert(EncodedTextLen_78.getString());
  FIX::ExDestination ExDestination_10("EXCHANGE_1629148906");
  msg.set(ExDestination_10);
  QuoteResponse_0.insert(ExDestination_10.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_10('G');
  msg.set(ExDestinationIDSource_10);
  QuoteResponse_0.insert(ExDestinationIDSource_10.getString());
  FIX::IOIID IOIID_9("STRING_1107540347");
  msg.set(IOIID_9);
  QuoteResponse_0.insert(IOIID_9.getString());
  FIX::MidPx MidPx_15;
  MidPx_15.setString("20177620");
  msg.set(MidPx_15);
  QuoteResponse_0.insert(MidPx_15.getString());
  FIX::MidYield MidYield_15;
  MidYield_15.setString("17.210000");
  msg.set(MidYield_15);
  QuoteResponse_0.insert(MidYield_15.getString());
  FIX::MinBidSize MinBidSize_1;
  MinBidSize_1.setString("17127389");
  msg.set(MinBidSize_1);
  QuoteResponse_0.insert(MinBidSize_1.getString());
  FIX::MinOfferSize MinOfferSize_1;
  MinOfferSize_1.setString("16867278");
  msg.set(MinOfferSize_1);
  QuoteResponse_0.insert(MinOfferSize_1.getString());
  FIX::MinQty MinQty_16;
  MinQty_16.setString("7185474");
  msg.set(MinQty_16);
  QuoteResponse_0.insert(MinQty_16.getString());
  FIX::MktBidPx MktBidPx_1;
  MktBidPx_1.setString("19237305");
  msg.set(MktBidPx_1);
  QuoteResponse_0.insert(MktBidPx_1.getString());
  FIX::MktOfferPx MktOfferPx_1;
  MktOfferPx_1.setString("5045660");
  msg.set(MktOfferPx_1);
  QuoteResponse_0.insert(MktOfferPx_1.getString());
  FIX::OfferForwardPoints OfferForwardPoints_15;
  OfferForwardPoints_15.setString("557442");
  msg.set(OfferForwardPoints_15);
  QuoteResponse_0.insert(OfferForwardPoints_15.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_15;
  OfferForwardPoints2_15.setString("239973");
  msg.set(OfferForwardPoints2_15);
  QuoteResponse_0.insert(OfferForwardPoints2_15.getString());
  FIX::OfferPx OfferPx_15;
  OfferPx_15.setString("8387456");
  msg.set(OfferPx_15);
  QuoteResponse_0.insert(OfferPx_15.getString());
  FIX::OfferSize OfferSize_15;
  OfferSize_15.setString("13665310");
  msg.set(OfferSize_15);
  QuoteResponse_0.insert(OfferSize_15.getString());
  FIX::OfferSpotRate OfferSpotRate_15;
  OfferSpotRate_15.setString("11485868");
  msg.set(OfferSpotRate_15);
  QuoteResponse_0.insert(OfferSpotRate_15.getString());
  FIX::OfferYield OfferYield_15;
  OfferYield_15.setString("56.410000");
  msg.set(OfferYield_15);
  QuoteResponse_0.insert(OfferYield_15.getString());
  FIX::OrdType OrdType_59('I');
  msg.set(OrdType_59);
  QuoteResponse_0.insert(OrdType_59.getString());
  FIX::OrderCapacity OrderCapacity_34('G');
  msg.set(OrderCapacity_34);
  QuoteResponse_0.insert(OrderCapacity_34.getString());
  FIX::OrderQty2 OrderQty2_24;
  OrderQty2_24.setString("18477466");
  msg.set(OrderQty2_24);
  QuoteResponse_0.insert(OrderQty2_24.getString());
  FIX::OrderRestrictions OrderRestrictions_31("MULTIPLECHARVALUE_5");
  msg.set(OrderRestrictions_31);
  QuoteResponse_0.insert(OrderRestrictions_31.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_16(true);
  msg.set(PreTradeAnonymity_16);
  QuoteResponse_0.insert(PreTradeAnonymity_16.getString());
  FIX::Price Price_24;
  Price_24.setString("14202568");
  msg.set(Price_24);
  QuoteResponse_0.insert(Price_24.getString());
  FIX::PriceType PriceType_40(17);
  msg.set(PriceType_40);
  QuoteResponse_0.insert(PriceType_40.getString());
  FIX::QuoteID QuoteID_12("STRING_1636943204");
  msg.set(QuoteID_12);
  QuoteResponse_0.insert(QuoteID_12.getString());
  FIX::QuoteMsgID QuoteMsgID_2("STRING_666116484");
  msg.set(QuoteMsgID_2);
  QuoteResponse_0.insert(QuoteMsgID_2.getString());
  FIX::QuoteRespID QuoteRespID_2("STRING_973343076");
  msg.set(QuoteRespID_2);
  QuoteResponse_0.insert(QuoteRespID_2.getString());
  FIX::QuoteRespType QuoteRespType_0(2);
  msg.set(QuoteRespType_0);
  QuoteResponse_0.insert(QuoteRespType_0.getString());
  FIX::QuoteType QuoteType_9(0);
  msg.set(QuoteType_9);
  QuoteResponse_0.insert(QuoteType_9.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_1;
  SettlCurrBidFxRate_1.setString("16461066");
  msg.set(SettlCurrBidFxRate_1);
  QuoteResponse_0.insert(SettlCurrBidFxRate_1.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_7('D');
  msg.set(SettlCurrFxRateCalc_7);
  QuoteResponse_0.insert(SettlCurrFxRateCalc_7.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_1;
  SettlCurrOfferFxRate_1.setString("7615188");
  msg.set(SettlCurrOfferFxRate_1);
  QuoteResponse_0.insert(SettlCurrOfferFxRate_1.getString());
  FIX::SettlDate SettlDate_49("LOCALMKTDATE_1127771904");
  msg.set(SettlDate_49);
  QuoteResponse_0.insert(SettlDate_49.getString());
  FIX::SettlDate2 SettlDate2_24("LOCALMKTDATE_1025480678");
  msg.set(SettlDate2_24);
  QuoteResponse_0.insert(SettlDate2_24.getString());
  FIX::SettlType SettlType_29("STRING_C");
  msg.set(SettlType_29);
  QuoteResponse_0.insert(SettlType_29.getString());
  FIX::Side Side_45('3');
  msg.set(Side_45);
  QuoteResponse_0.insert(Side_45.getString());
  FIX::Text Text_78("STRING_2078692399");
  msg.set(Text_78);
  QuoteResponse_0.insert(Text_78.getString());
  FIX::TradingSessionID TradingSessionID_85("STRING_1");
  msg.set(TradingSessionID_85);
  QuoteResponse_0.insert(TradingSessionID_85.getString());
  FIX::TradingSessionSubID TradingSessionSubID_85("STRING_3");
  msg.set(TradingSessionSubID_85);
  QuoteResponse_0.insert(TradingSessionSubID_85.getString());
  FIX::TransactTime TransactTime_60(FIX::UTCTIMESTAMP(12, 58, 55, 1, 1, 2009));
  msg.set(TransactTime_60);
  QuoteResponse_0.insert(TransactTime_60.getString());
  FIX::ValidUntilTime ValidUntilTime_18(FIX::UTCTIMESTAMP(14, 48, 6, 11, 3, 2001));
  msg.set(ValidUntilTime_18);
  QuoteResponse_0.insert(ValidUntilTime_18.getString());
  all_values.push_back(QuoteResponse_0);

  all_compo_names.insert("QuoteResponse");

  // FinancingDetails
  multiset<string> FinancingDetails_22;
  FIX::AgreementCurrency AgreementCurrency_22("CAN");
  msg.set(AgreementCurrency_22);
  FinancingDetails_22.insert(AgreementCurrency_22.getString());
  FIX::AgreementDate AgreementDate_22("LOCALMKTDATE_2019932679");
  msg.set(AgreementDate_22);
  FinancingDetails_22.insert(AgreementDate_22.getString());
  FIX::AgreementDesc AgreementDesc_22("STRING_653840928");
  msg.set(AgreementDesc_22);
  FinancingDetails_22.insert(AgreementDesc_22.getString());
  FIX::AgreementID AgreementID_22("STRING_783486195");
  msg.set(AgreementID_22);
  FinancingDetails_22.insert(AgreementID_22.getString());
  FIX::DeliveryType DeliveryType_22(0);
  msg.set(DeliveryType_22);
  FinancingDetails_22.insert(DeliveryType_22.getString());
  FIX::EndDate EndDate_22("LOCALMKTDATE_1322441824");
  msg.set(EndDate_22);
  FinancingDetails_22.insert(EndDate_22.getString());
  FIX::MarginRatio MarginRatio_22;
  MarginRatio_22.setString("91.940000");
  msg.set(MarginRatio_22);
  FinancingDetails_22.insert(MarginRatio_22.getString());
  FIX::StartDate StartDate_22("LOCALMKTDATE_1719504903");
  msg.set(StartDate_22);
  FinancingDetails_22.insert(StartDate_22.getString());
  FIX::TerminationType TerminationType_22(1);
  msg.set(TerminationType_22);
  FinancingDetails_22.insert(TerminationType_22.getString());
  all_values.push_back(FinancingDetails_22);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_72;
  FIX::AttachmentPoint AttachmentPoint_72;
  AttachmentPoint_72.setString("10.980000");
  msg.set(AttachmentPoint_72);
  Instrument_72.insert(AttachmentPoint_72.getString());
  FIX::CFICode CFICode_72("STRING_597501933");
  msg.set(CFICode_72);
  Instrument_72.insert(CFICode_72.getString());
  FIX::CPProgram CPProgram_72(99);
  msg.set(CPProgram_72);
  Instrument_72.insert(CPProgram_72.getString());
  FIX::CPRegType CPRegType_72("STRING_260447725");
  msg.set(CPRegType_72);
  Instrument_72.insert(CPRegType_72.getString());
  FIX::CapPrice CapPrice_72;
  CapPrice_72.setString("5287106");
  msg.set(CapPrice_72);
  Instrument_72.insert(CapPrice_72.getString());
  FIX::ContractMultiplier ContractMultiplier_72;
  ContractMultiplier_72.setString("10923671");
  msg.set(ContractMultiplier_72);
  Instrument_72.insert(ContractMultiplier_72.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_72(1);
  msg.set(ContractMultiplierUnit_72);
  Instrument_72.insert(ContractMultiplierUnit_72.getString());
  FIX::ContractSettlMonth ContractSettlMonth_72("MONTHYEAR_1178466854");
  msg.set(ContractSettlMonth_72);
  Instrument_72.insert(ContractSettlMonth_72.getString());
  FIX::CountryOfIssue CountryOfIssue_72("COUNTRY_155445022");
  msg.set(CountryOfIssue_72);
  Instrument_72.insert(CountryOfIssue_72.getString());
  FIX::CouponPaymentDate CouponPaymentDate_72("LOCALMKTDATE_1839602744");
  msg.set(CouponPaymentDate_72);
  Instrument_72.insert(CouponPaymentDate_72.getString());
  FIX::CouponRate CouponRate_72;
  CouponRate_72.setString("73.090000");
  msg.set(CouponRate_72);
  Instrument_72.insert(CouponRate_72.getString());
  FIX::CreditRating CreditRating_72("STRING_1390003831");
  msg.set(CreditRating_72);
  Instrument_72.insert(CreditRating_72.getString());
  FIX::DatedDate DatedDate_72("LOCALMKTDATE_1572725293");
  msg.set(DatedDate_72);
  Instrument_72.insert(DatedDate_72.getString());
  FIX::DetachmentPoint DetachmentPoint_72;
  DetachmentPoint_72.setString("52.040000");
  msg.set(DetachmentPoint_72);
  Instrument_72.insert(DetachmentPoint_72.getString());
  FIX::EncodedIssuer EncodedIssuer_72("DATA_1625665836");
  msg.set(EncodedIssuer_72);
  Instrument_72.insert(EncodedIssuer_72.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_72(439929835);
  msg.set(EncodedIssuerLen_72);
  Instrument_72.insert(EncodedIssuerLen_72.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_72("DATA_1392917444");
  msg.set(EncodedSecurityDesc_72);
  Instrument_72.insert(EncodedSecurityDesc_72.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_72(210459695);
  msg.set(EncodedSecurityDescLen_72);
  Instrument_72.insert(EncodedSecurityDescLen_72.getString());
  FIX::ExerciseStyle ExerciseStyle_72(2);
  msg.set(ExerciseStyle_72);
  Instrument_72.insert(ExerciseStyle_72.getString());
  FIX::Factor Factor_72;
  Factor_72.setString("3366681");
  msg.set(Factor_72);
  Instrument_72.insert(Factor_72.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_72(true);
  msg.set(FlexProductEligibilityIndicator_72);
  Instrument_72.insert(FlexProductEligibilityIndicator_72.getString());
  FIX::FlexibleIndicator FlexibleIndicator_72(true);
  msg.set(FlexibleIndicator_72);
  Instrument_72.insert(FlexibleIndicator_72.getString());
  FIX::FloorPrice FloorPrice_72;
  FloorPrice_72.setString("1468112");
  msg.set(FloorPrice_72);
  Instrument_72.insert(FloorPrice_72.getString());
  FIX::FlowScheduleType FlowScheduleType_72(1);
  msg.set(FlowScheduleType_72);
  Instrument_72.insert(FlowScheduleType_72.getString());
  FIX::InstrRegistry InstrRegistry_72("STRING_1796446406");
  msg.set(InstrRegistry_72);
  Instrument_72.insert(InstrRegistry_72.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_72('9');
  msg.set(InstrmtAssignmentMethod_72);
  Instrument_72.insert(InstrmtAssignmentMethod_72.getString());
  FIX::InterestAccrualDate InterestAccrualDate_72("LOCALMKTDATE_2050499905");
  msg.set(InterestAccrualDate_72);
  Instrument_72.insert(InterestAccrualDate_72.getString());
  FIX::IssueDate IssueDate_72("LOCALMKTDATE_971404582");
  msg.set(IssueDate_72);
  Instrument_72.insert(IssueDate_72.getString());
  FIX::Issuer Issuer_72("STRING_1212406659");
  msg.set(Issuer_72);
  Instrument_72.insert(Issuer_72.getString());
  FIX::ListMethod ListMethod_72(0);
  msg.set(ListMethod_72);
  Instrument_72.insert(ListMethod_72.getString());
  FIX::LocaleOfIssue LocaleOfIssue_72("STRING_907881654");
  msg.set(LocaleOfIssue_72);
  Instrument_72.insert(LocaleOfIssue_72.getString());
  FIX::MaturityDate MaturityDate_72("LOCALMKTDATE_474804110");
  msg.set(MaturityDate_72);
  Instrument_72.insert(MaturityDate_72.getString());
  FIX::MaturityMonthYear MaturityMonthYear_72("MONTHYEAR_72539445");
  msg.set(MaturityMonthYear_72);
  Instrument_72.insert(MaturityMonthYear_72.getString());
  FIX::MaturityTime MaturityTime_72("TZTIMEONLY_565934322");
  msg.set(MaturityTime_72);
  Instrument_72.insert(MaturityTime_72.getString());
  FIX::MinPriceIncrement MinPriceIncrement_72;
  MinPriceIncrement_72.setString("7352518");
  msg.set(MinPriceIncrement_72);
  Instrument_72.insert(MinPriceIncrement_72.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_72;
  MinPriceIncrementAmount_72.setString("6012501");
  msg.set(MinPriceIncrementAmount_72);
  Instrument_72.insert(MinPriceIncrementAmount_72.getString());
  FIX::NTPositionLimit NTPositionLimit_72(1658301516);
  msg.set(NTPositionLimit_72);
  Instrument_72.insert(NTPositionLimit_72.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_72;
  NotionalPercentageOutstanding_72.setString("40.610000");
  msg.set(NotionalPercentageOutstanding_72);
  Instrument_72.insert(NotionalPercentageOutstanding_72.getString());
  FIX::OptAttribute OptAttribute_72('1');
  msg.set(OptAttribute_72);
  Instrument_72.insert(OptAttribute_72.getString());
  FIX::OptPayoutAmount OptPayoutAmount_72;
  OptPayoutAmount_72.setString("18137465");
  msg.set(OptPayoutAmount_72);
  Instrument_72.insert(OptPayoutAmount_72.getString());
  FIX::OptPayoutType OptPayoutType_72(2);
  msg.set(OptPayoutType_72);
  Instrument_72.insert(OptPayoutType_72.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_72;
  OriginalNotionalPercentageOutstanding_72.setString("6.460000");
  msg.set(OriginalNotionalPercentageOutstanding_72);
  Instrument_72.insert(OriginalNotionalPercentageOutstanding_72.getString());
  FIX::Pool Pool_72("STRING_1056266721");
  msg.set(Pool_72);
  Instrument_72.insert(Pool_72.getString());
  FIX::PositionLimit PositionLimit_72(650354802);
  msg.set(PositionLimit_72);
  Instrument_72.insert(PositionLimit_72.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_72("STRING_INT");
  msg.set(PriceQuoteMethod_72);
  Instrument_72.insert(PriceQuoteMethod_72.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_72("STRING_534448910");
  msg.set(PriceUnitOfMeasure_72);
  Instrument_72.insert(PriceUnitOfMeasure_72.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_72;
  PriceUnitOfMeasureQty_72.setString("10902846");
  msg.set(PriceUnitOfMeasureQty_72);
  Instrument_72.insert(PriceUnitOfMeasureQty_72.getString());
  FIX::Product Product_74(3);
  msg.set(Product_74);
  Instrument_72.insert(Product_74.getString());
  FIX::ProductComplex ProductComplex_72("STRING_744908605");
  msg.set(ProductComplex_72);
  Instrument_72.insert(ProductComplex_72.getString());
  FIX::PutOrCall PutOrCall_72(0);
  msg.set(PutOrCall_72);
  Instrument_72.insert(PutOrCall_72.getString());
  FIX::RedemptionDate RedemptionDate_72("LOCALMKTDATE_759334149");
  msg.set(RedemptionDate_72);
  Instrument_72.insert(RedemptionDate_72.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_72("STRING_1338357775");
  msg.set(RepoCollateralSecurityType_72);
  Instrument_72.insert(RepoCollateralSecurityType_72.getString());
  FIX::RepurchaseRate RepurchaseRate_72;
  RepurchaseRate_72.setString("75.020000");
  msg.set(RepurchaseRate_72);
  Instrument_72.insert(RepurchaseRate_72.getString());
  FIX::RepurchaseTerm RepurchaseTerm_72(906145419);
  msg.set(RepurchaseTerm_72);
  Instrument_72.insert(RepurchaseTerm_72.getString());
  FIX::RestructuringType RestructuringType_72("STRING_FR");
  msg.set(RestructuringType_72);
  Instrument_72.insert(RestructuringType_72.getString());
  FIX::SecurityDesc SecurityDesc_72("STRING_889250260");
  msg.set(SecurityDesc_72);
  Instrument_72.insert(SecurityDesc_72.getString());
  FIX::SecurityExchange SecurityExchange_72("EXCHANGE_1836442885");
  msg.set(SecurityExchange_72);
  Instrument_72.insert(SecurityExchange_72.getString());
  FIX::SecurityGroup SecurityGroup_72("STRING_1707272233");
  msg.set(SecurityGroup_72);
  Instrument_72.insert(SecurityGroup_72.getString());
  FIX::SecurityID SecurityID_72("STRING_1860654842");
  msg.set(SecurityID_72);
  Instrument_72.insert(SecurityID_72.getString());
  FIX::SecurityIDSource SecurityIDSource_72("STRING_3");
  msg.set(SecurityIDSource_72);
  Instrument_72.insert(SecurityIDSource_72.getString());
  FIX::SecurityStatus SecurityStatus_72("STRING_2");
  msg.set(SecurityStatus_72);
  Instrument_72.insert(SecurityStatus_72.getString());
  FIX::SecuritySubType SecuritySubType_73("STRING_621052848");
  msg.set(SecuritySubType_73);
  Instrument_72.insert(SecuritySubType_73.getString());
  FIX::SecurityType SecurityType_74("STRING_ABS");
  msg.set(SecurityType_74);
  Instrument_72.insert(SecurityType_74.getString());
  FIX::Seniority Seniority_72("STRING_SR");
  msg.set(Seniority_72);
  Instrument_72.insert(Seniority_72.getString());
  FIX::SettlMethod SettlMethod_72('P');
  msg.set(SettlMethod_72);
  Instrument_72.insert(SettlMethod_72.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_72("STRING_2111421841");
  msg.set(SettleOnOpenFlag_72);
  Instrument_72.insert(SettleOnOpenFlag_72.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_72("STRING_1856099321");
  msg.set(StateOrProvinceOfIssue_72);
  Instrument_72.insert(StateOrProvinceOfIssue_72.getString());
  FIX::StrikeCurrency StrikeCurrency_72("USD");
  msg.set(StrikeCurrency_72);
  Instrument_72.insert(StrikeCurrency_72.getString());
  FIX::StrikeMultiplier StrikeMultiplier_72;
  StrikeMultiplier_72.setString("14883326");
  msg.set(StrikeMultiplier_72);
  Instrument_72.insert(StrikeMultiplier_72.getString());
  FIX::StrikePrice StrikePrice_72;
  StrikePrice_72.setString("3640679");
  msg.set(StrikePrice_72);
  Instrument_72.insert(StrikePrice_72.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_72(5);
  msg.set(StrikePriceBoundaryMethod_72);
  Instrument_72.insert(StrikePriceBoundaryMethod_72.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_72;
  StrikePriceBoundaryPrecision_72.setString("96.550000");
  msg.set(StrikePriceBoundaryPrecision_72);
  Instrument_72.insert(StrikePriceBoundaryPrecision_72.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_72(4);
  msg.set(StrikePriceDeterminationMethod_72);
  Instrument_72.insert(StrikePriceDeterminationMethod_72.getString());
  FIX::StrikeValue StrikeValue_72;
  StrikeValue_72.setString("12249165");
  msg.set(StrikeValue_72);
  Instrument_72.insert(StrikeValue_72.getString());
  FIX::Symbol Symbol_72("STRING_2034281858");
  msg.set(Symbol_72);
  Instrument_72.insert(Symbol_72.getString());
  FIX::SymbolSfx SymbolSfx_72("STRING_WI");
  msg.set(SymbolSfx_72);
  Instrument_72.insert(SymbolSfx_72.getString());
  FIX::TimeUnit TimeUnit_72("STRING_Yr");
  msg.set(TimeUnit_72);
  Instrument_72.insert(TimeUnit_72.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_72(2);
  msg.set(UnderlyingPriceDeterminationMethod_72);
  Instrument_72.insert(UnderlyingPriceDeterminationMethod_72.getString());
  FIX::UnitOfMeasure UnitOfMeasure_72("STRING_Bbl");
  msg.set(UnitOfMeasure_72);
  Instrument_72.insert(UnitOfMeasure_72.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_72;
  UnitOfMeasureQty_72.setString("2653995");
  msg.set(UnitOfMeasureQty_72);
  Instrument_72.insert(UnitOfMeasureQty_72.getString());
  FIX::ValuationMethod ValuationMethod_72("STRING_CDS");
  msg.set(ValuationMethod_72);
  Instrument_72.insert(ValuationMethod_72.getString());
  all_values.push_back(Instrument_72);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_150;
    FIX::ComplexEventCondition ComplexEventCondition_150(1);
    noComplexEvents_0_0.set(ComplexEventCondition_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventCondition_150.getString());
    FIX::ComplexEventPrice ComplexEventPrice_150;
    ComplexEventPrice_150.setString("19749437");
    noComplexEvents_0_0.set(ComplexEventPrice_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPrice_150.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_150(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryMethod_150.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_150;
    ComplexEventPriceBoundaryPrecision_150.setString("36.940000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceBoundaryPrecision_150.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_150(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventPriceTimeType_150.getString());
    FIX::ComplexEventType ComplexEventType_150(1);
    noComplexEvents_0_0.set(ComplexEventType_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexEventType_150.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_150;
    ComplexOptPayoutAmount_150.setString("21081085");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_150);
    ComplexEvents_NoComplexEvents_150.insert(ComplexOptPayoutAmount_150.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_150);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_306;
      FIX::ComplexEventEndDate ComplexEventEndDate_306(FIX::UTCTIMESTAMP(8, 30, 34, 23, 12, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_306);
      ComplexEventDates_NoComplexEventDates_306.insert(ComplexEventEndDate_306.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_306(FIX::UTCTIMESTAMP(22, 16, 9, 2, 1, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_306);
      ComplexEventDates_NoComplexEventDates_306.insert(ComplexEventStartDate_306.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_306);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_621;
        FIX::ComplexEventEndTime ComplexEventEndTime_621(FIX::UTCTIMEONLY(2, 8, 31));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_621);
        ComplexEventTimes_NoComplexEventTimes_621.insert(ComplexEventEndTime_621.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_621(FIX::UTCTIMEONLY(16, 21, 30));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_621);
        ComplexEventTimes_NoComplexEventTimes_621.insert(ComplexEventStartTime_621.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_621);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_622;
        FIX::ComplexEventEndTime ComplexEventEndTime_622(FIX::UTCTIMEONLY(3, 31, 16));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_622);
        ComplexEventTimes_NoComplexEventTimes_622.insert(ComplexEventEndTime_622.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_622(FIX::UTCTIMEONLY(18, 24, 22));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_622);
        ComplexEventTimes_NoComplexEventTimes_622.insert(ComplexEventStartTime_622.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_622);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_623;
        FIX::ComplexEventEndTime ComplexEventEndTime_623(FIX::UTCTIMEONLY(9, 52, 27));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_623);
        ComplexEventTimes_NoComplexEventTimes_623.insert(ComplexEventEndTime_623.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_623(FIX::UTCTIMEONLY(7, 26, 59));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_623);
        ComplexEventTimes_NoComplexEventTimes_623.insert(ComplexEventStartTime_623.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_623);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_307;
      FIX::ComplexEventEndDate ComplexEventEndDate_307(FIX::UTCTIMESTAMP(7, 8, 35, 23, 10, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_307);
      ComplexEventDates_NoComplexEventDates_307.insert(ComplexEventEndDate_307.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_307(FIX::UTCTIMESTAMP(15, 16, 52, 7, 2, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_307);
      ComplexEventDates_NoComplexEventDates_307.insert(ComplexEventStartDate_307.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_307);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_624;
        FIX::ComplexEventEndTime ComplexEventEndTime_624(FIX::UTCTIMEONLY(17, 45, 48));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_624);
        ComplexEventTimes_NoComplexEventTimes_624.insert(ComplexEventEndTime_624.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_624(FIX::UTCTIMEONLY(3, 12, 5));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_624);
        ComplexEventTimes_NoComplexEventTimes_624.insert(ComplexEventStartTime_624.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_624);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_151;
    FIX::ComplexEventCondition ComplexEventCondition_151(1);
    noComplexEvents_0_1.set(ComplexEventCondition_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventCondition_151.getString());
    FIX::ComplexEventPrice ComplexEventPrice_151;
    ComplexEventPrice_151.setString("21129979");
    noComplexEvents_0_1.set(ComplexEventPrice_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPrice_151.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_151(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceBoundaryMethod_151.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_151;
    ComplexEventPriceBoundaryPrecision_151.setString("43.400000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceBoundaryPrecision_151.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_151(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceTimeType_151.getString());
    FIX::ComplexEventType ComplexEventType_151(2);
    noComplexEvents_0_1.set(ComplexEventType_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexEventType_151.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_151;
    ComplexOptPayoutAmount_151.setString("16593531");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_151);
    ComplexEvents_NoComplexEvents_151.insert(ComplexOptPayoutAmount_151.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_151);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_308;
      FIX::ComplexEventEndDate ComplexEventEndDate_308(FIX::UTCTIMESTAMP(9, 6, 34, 8, 8, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_308);
      ComplexEventDates_NoComplexEventDates_308.insert(ComplexEventEndDate_308.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_308(FIX::UTCTIMESTAMP(14, 42, 13, 21, 8, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_308);
      ComplexEventDates_NoComplexEventDates_308.insert(ComplexEventStartDate_308.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_308);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_625;
        FIX::ComplexEventEndTime ComplexEventEndTime_625(FIX::UTCTIMEONLY(12, 12, 39));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_625);
        ComplexEventTimes_NoComplexEventTimes_625.insert(ComplexEventEndTime_625.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_625(FIX::UTCTIMEONLY(7, 51, 57));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_625);
        ComplexEventTimes_NoComplexEventTimes_625.insert(ComplexEventStartTime_625.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_625);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_626;
        FIX::ComplexEventEndTime ComplexEventEndTime_626(FIX::UTCTIMEONLY(5, 38, 39));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_626);
        ComplexEventTimes_NoComplexEventTimes_626.insert(ComplexEventEndTime_626.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_626(FIX::UTCTIMEONLY(15, 18, 20));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_626);
        ComplexEventTimes_NoComplexEventTimes_626.insert(ComplexEventStartTime_626.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_626);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_627;
        FIX::ComplexEventEndTime ComplexEventEndTime_627(FIX::UTCTIMEONLY(19, 18, 44));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_627);
        ComplexEventTimes_NoComplexEventTimes_627.insert(ComplexEventEndTime_627.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_627(FIX::UTCTIMEONLY(17, 18, 1));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_627);
        ComplexEventTimes_NoComplexEventTimes_627.insert(ComplexEventStartTime_627.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_627);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_145;
    FIX::EventDate EventDate_145("LOCALMKTDATE_1078932660");
    noEvents_0_0.set(EventDate_145);
    EvntGrp_NoEvents_145.insert(EventDate_145.getString());
    FIX::EventPx EventPx_145;
    EventPx_145.setString("13928815");
    noEvents_0_0.set(EventPx_145);
    EvntGrp_NoEvents_145.insert(EventPx_145.getString());
    FIX::EventText EventText_145("STRING_1690533621");
    noEvents_0_0.set(EventText_145);
    EvntGrp_NoEvents_145.insert(EventText_145.getString());
    FIX::EventTime EventTime_145(FIX::UTCTIMESTAMP(22, 48, 11, 26, 1, 2014));
    noEvents_0_0.set(EventTime_145);
    EvntGrp_NoEvents_145.insert(EventTime_145.getString());
    FIX::EventType EventType_145(2);
    noEvents_0_0.set(EventType_145);
    EvntGrp_NoEvents_145.insert(EventType_145.getString());
    all_values.push_back(EvntGrp_NoEvents_145);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_146;
    FIX::EventDate EventDate_146("LOCALMKTDATE_1484126659");
    noEvents_0_1.set(EventDate_146);
    EvntGrp_NoEvents_146.insert(EventDate_146.getString());
    FIX::EventPx EventPx_146;
    EventPx_146.setString("7599193");
    noEvents_0_1.set(EventPx_146);
    EvntGrp_NoEvents_146.insert(EventPx_146.getString());
    FIX::EventText EventText_146("STRING_1108155638");
    noEvents_0_1.set(EventText_146);
    EvntGrp_NoEvents_146.insert(EventText_146.getString());
    FIX::EventTime EventTime_146(FIX::UTCTIMESTAMP(14, 17, 10, 13, 1, 2008));
    noEvents_0_1.set(EventTime_146);
    EvntGrp_NoEvents_146.insert(EventTime_146.getString());
    FIX::EventType EventType_146(19);
    noEvents_0_1.set(EventType_146);
    EvntGrp_NoEvents_146.insert(EventType_146.getString());
    all_values.push_back(EvntGrp_NoEvents_146);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_147;
    FIX::EventDate EventDate_147("LOCALMKTDATE_2072432754");
    noEvents_0_2.set(EventDate_147);
    EvntGrp_NoEvents_147.insert(EventDate_147.getString());
    FIX::EventPx EventPx_147;
    EventPx_147.setString("10051465");
    noEvents_0_2.set(EventPx_147);
    EvntGrp_NoEvents_147.insert(EventPx_147.getString());
    FIX::EventText EventText_147("STRING_347282788");
    noEvents_0_2.set(EventText_147);
    EvntGrp_NoEvents_147.insert(EventText_147.getString());
    FIX::EventTime EventTime_147(FIX::UTCTIMESTAMP(23, 58, 48, 13, 2, 2005));
    noEvents_0_2.set(EventTime_147);
    EvntGrp_NoEvents_147.insert(EventTime_147.getString());
    FIX::EventType EventType_147(13);
    noEvents_0_2.set(EventType_147);
    EvntGrp_NoEvents_147.insert(EventType_147.getString());
    all_values.push_back(EvntGrp_NoEvents_147);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_149;
    FIX::InstrumentPartyID InstrumentPartyID_149("STRING_313024913");
    noInstrumentParties_0_0.set(InstrumentPartyID_149);
    InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyID_149.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_149('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_149);
    InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyIDSource_149.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_149(210623570);
    noInstrumentParties_0_0.set(InstrumentPartyRole_149);
    InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyRole_149.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_149);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289;
      FIX::InstrumentPartySubID InstrumentPartySubID_289("STRING_901498008");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_289);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubID_289.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_289(1303215590);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_289);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289.insert(InstrumentPartySubIDType_289.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290;
      FIX::InstrumentPartySubID InstrumentPartySubID_290("STRING_63204818");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_290);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubID_290.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_290(1034970209);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_290);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290.insert(InstrumentPartySubIDType_290.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291;
      FIX::InstrumentPartySubID InstrumentPartySubID_291("STRING_639858601");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_291);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291.insert(InstrumentPartySubID_291.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_291(823124171);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_291);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291.insert(InstrumentPartySubIDType_291.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_150;
    FIX::InstrumentPartyID InstrumentPartyID_150("STRING_2143125848");
    noInstrumentParties_0_1.set(InstrumentPartyID_150);
    InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyID_150.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_150('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_150);
    InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyIDSource_150.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_150(248488554);
    noInstrumentParties_0_1.set(InstrumentPartyRole_150);
    InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyRole_150.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_150);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292;
      FIX::InstrumentPartySubID InstrumentPartySubID_292("STRING_858750334");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_292);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292.insert(InstrumentPartySubID_292.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_292(1413890819);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_292);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292.insert(InstrumentPartySubIDType_292.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293;
      FIX::InstrumentPartySubID InstrumentPartySubID_293("STRING_446387265");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_293);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293.insert(InstrumentPartySubID_293.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_293(1850052894);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_293);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293.insert(InstrumentPartySubIDType_293.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294;
      FIX::InstrumentPartySubID InstrumentPartySubID_294("STRING_84570429");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_294);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294.insert(InstrumentPartySubID_294.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_294(371336372);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_294);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294.insert(InstrumentPartySubIDType_294.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_133;
    FIX::SecurityAltID SecurityAltID_133("STRING_431853218");
    noSecurityAltID_0_0.set(SecurityAltID_133);
    SecAltIDGrp_NoSecurityAltID_133.insert(SecurityAltID_133.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_133("STRING_929966882");
    noSecurityAltID_0_0.set(SecurityAltIDSource_133);
    SecAltIDGrp_NoSecurityAltID_133.insert(SecurityAltIDSource_133.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_133);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_134;
    FIX::SecurityAltID SecurityAltID_134("STRING_1263797401");
    noSecurityAltID_0_1.set(SecurityAltID_134);
    SecAltIDGrp_NoSecurityAltID_134.insert(SecurityAltID_134.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_134("STRING_2104154736");
    noSecurityAltID_0_1.set(SecurityAltIDSource_134);
    SecAltIDGrp_NoSecurityAltID_134.insert(SecurityAltIDSource_134.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_134);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_144;
  FIX::SecurityXML SecurityXML_145("XMLDATA_387365863");
  msg.set(SecurityXML_145);
  FIX::SecurityXMLLen SecurityXMLLen_72(614805558);
  msg.set(SecurityXMLLen_72);
  FIX::SecurityXMLSchema SecurityXMLSchema_72("STRING_2137669045");
  msg.set(SecurityXMLSchema_72);
  SecurityXML_144.insert(SecurityXMLSchema_72.getString());
  all_values.push_back(SecurityXML_144);
  all_compo_names.insert("SecurityXML");

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_3;
    FIX::LegBidForwardPoints LegBidForwardPoints_3;
    LegBidForwardPoints_3.setString("13586953");
    noLegs_0_0.set(LegBidForwardPoints_3);
    LegQuotGrp_NoLegs_3.insert(LegBidForwardPoints_3.getString());
    FIX::LegBidPx LegBidPx_3;
    LegBidPx_3.setString("17142333");
    noLegs_0_0.set(LegBidPx_3);
    LegQuotGrp_NoLegs_3.insert(LegBidPx_3.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_3;
    LegOfferForwardPoints_3.setString("12367224");
    noLegs_0_0.set(LegOfferForwardPoints_3);
    LegQuotGrp_NoLegs_3.insert(LegOfferForwardPoints_3.getString());
    FIX::LegOfferPx LegOfferPx_3;
    LegOfferPx_3.setString("12783445");
    noLegs_0_0.set(LegOfferPx_3);
    LegQuotGrp_NoLegs_3.insert(LegOfferPx_3.getString());
    FIX::LegOrderQty LegOrderQty_16;
    LegOrderQty_16.setString("19248568");
    noLegs_0_0.set(LegOrderQty_16);
    LegQuotGrp_NoLegs_3.insert(LegOrderQty_16.getString());
    FIX::LegPriceType LegPriceType_3(1387422253);
    noLegs_0_0.set(LegPriceType_3);
    LegQuotGrp_NoLegs_3.insert(LegPriceType_3.getString());
    FIX::LegQty LegQty_16;
    LegQty_16.setString("323588");
    noLegs_0_0.set(LegQty_16);
    LegQuotGrp_NoLegs_3.insert(LegQty_16.getString());
    FIX::LegRefID LegRefID_16("STRING_1080588841");
    noLegs_0_0.set(LegRefID_16);
    LegQuotGrp_NoLegs_3.insert(LegRefID_16.getString());
    FIX::LegSettlDate LegSettlDate_16("LOCALMKTDATE_1450627071");
    noLegs_0_0.set(LegSettlDate_16);
    LegQuotGrp_NoLegs_3.insert(LegSettlDate_16.getString());
    FIX::LegSettlType LegSettlType_16('1');
    noLegs_0_0.set(LegSettlType_16);
    LegQuotGrp_NoLegs_3.insert(LegSettlType_16.getString());
    FIX::LegSwapType LegSwapType_16(4);
    noLegs_0_0.set(LegSwapType_16);
    LegQuotGrp_NoLegs_3.insert(LegSwapType_16.getString());
    all_values.push_back(LegQuotGrp_NoLegs_3);
    all_compo_names.insert("LegQuotGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_115;
    FIX::EncodedLegIssuer EncodedLegIssuer_115("DATA_126267594");
    noLegs_0_0.set(EncodedLegIssuer_115);
    InstrumentLeg_115.insert(EncodedLegIssuer_115.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_115(1062971277);
    noLegs_0_0.set(EncodedLegIssuerLen_115);
    InstrumentLeg_115.insert(EncodedLegIssuerLen_115.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_115("DATA_581433746");
    noLegs_0_0.set(EncodedLegSecurityDesc_115);
    InstrumentLeg_115.insert(EncodedLegSecurityDesc_115.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_115(374756148);
    noLegs_0_0.set(EncodedLegSecurityDescLen_115);
    InstrumentLeg_115.insert(EncodedLegSecurityDescLen_115.getString());
    FIX::LegCFICode LegCFICode_115("STRING_498575646");
    noLegs_0_0.set(LegCFICode_115);
    InstrumentLeg_115.insert(LegCFICode_115.getString());
    FIX::LegContractMultiplier LegContractMultiplier_115;
    LegContractMultiplier_115.setString("14401840");
    noLegs_0_0.set(LegContractMultiplier_115);
    InstrumentLeg_115.insert(LegContractMultiplier_115.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_115(1788646968);
    noLegs_0_0.set(LegContractMultiplierUnit_115);
    InstrumentLeg_115.insert(LegContractMultiplierUnit_115.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_115("MONTHYEAR_944962912");
    noLegs_0_0.set(LegContractSettlMonth_115);
    InstrumentLeg_115.insert(LegContractSettlMonth_115.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_115("COUNTRY_1142753326");
    noLegs_0_0.set(LegCountryOfIssue_115);
    InstrumentLeg_115.insert(LegCountryOfIssue_115.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_115("LOCALMKTDATE_1873217397");
    noLegs_0_0.set(LegCouponPaymentDate_115);
    InstrumentLeg_115.insert(LegCouponPaymentDate_115.getString());
    FIX::LegCouponRate LegCouponRate_115;
    LegCouponRate_115.setString("92.840000");
    noLegs_0_0.set(LegCouponRate_115);
    InstrumentLeg_115.insert(LegCouponRate_115.getString());
    FIX::LegCreditRating LegCreditRating_115("STRING_1850469144");
    noLegs_0_0.set(LegCreditRating_115);
    InstrumentLeg_115.insert(LegCreditRating_115.getString());
    FIX::LegCurrency LegCurrency_115("USD");
    noLegs_0_0.set(LegCurrency_115);
    InstrumentLeg_115.insert(LegCurrency_115.getString());
    FIX::LegDatedDate LegDatedDate_115("LOCALMKTDATE_966782897");
    noLegs_0_0.set(LegDatedDate_115);
    InstrumentLeg_115.insert(LegDatedDate_115.getString());
    FIX::LegExerciseStyle LegExerciseStyle_115(114258055);
    noLegs_0_0.set(LegExerciseStyle_115);
    InstrumentLeg_115.insert(LegExerciseStyle_115.getString());
    FIX::LegFactor LegFactor_115;
    LegFactor_115.setString("4861483");
    noLegs_0_0.set(LegFactor_115);
    InstrumentLeg_115.insert(LegFactor_115.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_115(1581588455);
    noLegs_0_0.set(LegFlowScheduleType_115);
    InstrumentLeg_115.insert(LegFlowScheduleType_115.getString());
    FIX::LegInstrRegistry LegInstrRegistry_115("STRING_104443453");
    noLegs_0_0.set(LegInstrRegistry_115);
    InstrumentLeg_115.insert(LegInstrRegistry_115.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_115("LOCALMKTDATE_1409845885");
    noLegs_0_0.set(LegInterestAccrualDate_115);
    InstrumentLeg_115.insert(LegInterestAccrualDate_115.getString());
    FIX::LegIssueDate LegIssueDate_115("LOCALMKTDATE_792800117");
    noLegs_0_0.set(LegIssueDate_115);
    InstrumentLeg_115.insert(LegIssueDate_115.getString());
    FIX::LegIssuer LegIssuer_115("STRING_1818676781");
    noLegs_0_0.set(LegIssuer_115);
    InstrumentLeg_115.insert(LegIssuer_115.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_115("STRING_499084654");
    noLegs_0_0.set(LegLocaleOfIssue_115);
    InstrumentLeg_115.insert(LegLocaleOfIssue_115.getString());
    FIX::LegMaturityDate LegMaturityDate_115("LOCALMKTDATE_2071144625");
    noLegs_0_0.set(LegMaturityDate_115);
    InstrumentLeg_115.insert(LegMaturityDate_115.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_115("MONTHYEAR_1596050031");
    noLegs_0_0.set(LegMaturityMonthYear_115);
    InstrumentLeg_115.insert(LegMaturityMonthYear_115.getString());
    FIX::LegMaturityTime LegMaturityTime_115("TZTIMEONLY_1886506907");
    noLegs_0_0.set(LegMaturityTime_115);
    InstrumentLeg_115.insert(LegMaturityTime_115.getString());
    FIX::LegOptAttribute LegOptAttribute_115('2');
    noLegs_0_0.set(LegOptAttribute_115);
    InstrumentLeg_115.insert(LegOptAttribute_115.getString());
    FIX::LegOptionRatio LegOptionRatio_115;
    LegOptionRatio_115.setString("5291552");
    noLegs_0_0.set(LegOptionRatio_115);
    InstrumentLeg_115.insert(LegOptionRatio_115.getString());
    FIX::LegPool LegPool_115("STRING_1189650330");
    noLegs_0_0.set(LegPool_115);
    InstrumentLeg_115.insert(LegPool_115.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_115("STRING_1023348922");
    noLegs_0_0.set(LegPriceUnitOfMeasure_115);
    InstrumentLeg_115.insert(LegPriceUnitOfMeasure_115.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_115;
    LegPriceUnitOfMeasureQty_115.setString("1021190");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_115);
    InstrumentLeg_115.insert(LegPriceUnitOfMeasureQty_115.getString());
    FIX::LegProduct LegProduct_115(1315917925);
    noLegs_0_0.set(LegProduct_115);
    InstrumentLeg_115.insert(LegProduct_115.getString());
    FIX::LegPutOrCall LegPutOrCall_115(2086320200);
    noLegs_0_0.set(LegPutOrCall_115);
    InstrumentLeg_115.insert(LegPutOrCall_115.getString());
    FIX::LegRatioQty LegRatioQty_115;
    LegRatioQty_115.setString("6835527");
    noLegs_0_0.set(LegRatioQty_115);
    InstrumentLeg_115.insert(LegRatioQty_115.getString());
    FIX::LegRedemptionDate LegRedemptionDate_115("LOCALMKTDATE_1690674073");
    noLegs_0_0.set(LegRedemptionDate_115);
    InstrumentLeg_115.insert(LegRedemptionDate_115.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_115("STRING_437412198");
    noLegs_0_0.set(LegRepoCollateralSecurityType_115);
    InstrumentLeg_115.insert(LegRepoCollateralSecurityType_115.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_115;
    LegRepurchaseRate_115.setString("68.460000");
    noLegs_0_0.set(LegRepurchaseRate_115);
    InstrumentLeg_115.insert(LegRepurchaseRate_115.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_115(1331837393);
    noLegs_0_0.set(LegRepurchaseTerm_115);
    InstrumentLeg_115.insert(LegRepurchaseTerm_115.getString());
    FIX::LegSecurityDesc LegSecurityDesc_115("STRING_1382375110");
    noLegs_0_0.set(LegSecurityDesc_115);
    InstrumentLeg_115.insert(LegSecurityDesc_115.getString());
    FIX::LegSecurityExchange LegSecurityExchange_115("EXCHANGE_1119006524");
    noLegs_0_0.set(LegSecurityExchange_115);
    InstrumentLeg_115.insert(LegSecurityExchange_115.getString());
    FIX::LegSecurityID LegSecurityID_115("STRING_1057571143");
    noLegs_0_0.set(LegSecurityID_115);
    InstrumentLeg_115.insert(LegSecurityID_115.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_115("STRING_551190746");
    noLegs_0_0.set(LegSecurityIDSource_115);
    InstrumentLeg_115.insert(LegSecurityIDSource_115.getString());
    FIX::LegSecuritySubType LegSecuritySubType_115("STRING_821992020");
    noLegs_0_0.set(LegSecuritySubType_115);
    InstrumentLeg_115.insert(LegSecuritySubType_115.getString());
    FIX::LegSecurityType LegSecurityType_115("STRING_1215158110");
    noLegs_0_0.set(LegSecurityType_115);
    InstrumentLeg_115.insert(LegSecurityType_115.getString());
    FIX::LegSide LegSide_115('6');
    noLegs_0_0.set(LegSide_115);
    InstrumentLeg_115.insert(LegSide_115.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_115("STRING_1788774917");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_115);
    InstrumentLeg_115.insert(LegStateOrProvinceOfIssue_115.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_115("JPY");
    noLegs_0_0.set(LegStrikeCurrency_115);
    InstrumentLeg_115.insert(LegStrikeCurrency_115.getString());
    FIX::LegStrikePrice LegStrikePrice_115;
    LegStrikePrice_115.setString("12228797");
    noLegs_0_0.set(LegStrikePrice_115);
    InstrumentLeg_115.insert(LegStrikePrice_115.getString());
    FIX::LegSymbol LegSymbol_115("STRING_1433859619");
    noLegs_0_0.set(LegSymbol_115);
    InstrumentLeg_115.insert(LegSymbol_115.getString());
    FIX::LegSymbolSfx LegSymbolSfx_115("STRING_398483884");
    noLegs_0_0.set(LegSymbolSfx_115);
    InstrumentLeg_115.insert(LegSymbolSfx_115.getString());
    FIX::LegTimeUnit LegTimeUnit_115("STRING_2015679841");
    noLegs_0_0.set(LegTimeUnit_115);
    InstrumentLeg_115.insert(LegTimeUnit_115.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_115("STRING_1105052752");
    noLegs_0_0.set(LegUnitOfMeasure_115);
    InstrumentLeg_115.insert(LegUnitOfMeasure_115.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_115;
    LegUnitOfMeasureQty_115.setString("8975685");
    noLegs_0_0.set(LegUnitOfMeasureQty_115);
    InstrumentLeg_115.insert(LegUnitOfMeasureQty_115.getString());
    all_values.push_back(InstrumentLeg_115);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_233;
      FIX::LegSecurityAltID LegSecurityAltID_233("STRING_553619135");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_233);
      LegSecAltIDGrp_NoLegSecurityAltID_233.insert(LegSecurityAltID_233.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_233("STRING_636591798");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_233);
      LegSecAltIDGrp_NoLegSecurityAltID_233.insert(LegSecurityAltIDSource_233.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_233);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_234;
      FIX::LegSecurityAltID LegSecurityAltID_234("STRING_1895360663");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_234);
      LegSecAltIDGrp_NoLegSecurityAltID_234.insert(LegSecurityAltID_234.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_234("STRING_1082774360");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_234);
      LegSecAltIDGrp_NoLegSecurityAltID_234.insert(LegSecurityAltIDSource_234.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_234);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_12;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_12("GBP");
    noLegs_0_0.set(LegBenchmarkCurveCurrency_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkCurveCurrency_12.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_12("STRING_1184893379");
    noLegs_0_0.set(LegBenchmarkCurveName_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkCurveName_12.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_12("STRING_994676405");
    noLegs_0_0.set(LegBenchmarkCurvePoint_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkCurvePoint_12.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_12;
    LegBenchmarkPrice_12.setString("7100624");
    noLegs_0_0.set(LegBenchmarkPrice_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkPrice_12.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_12(1868446144);
    noLegs_0_0.set(LegBenchmarkPriceType_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkPriceType_12.getString());
    all_values.push_back(LegBenchmarkCurveData_12);
    all_compo_names.insert("LegBenchmarkCurveData");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_38;
      FIX::LegStipulationType LegStipulationType_38("STRING_1147474688");
      noLegStipulations_0_1_0.set(LegStipulationType_38);
      LegStipulations_NoLegStipulations_38.insert(LegStipulationType_38.getString());
      FIX::LegStipulationValue LegStipulationValue_38("STRING_1844699342");
      noLegStipulations_0_1_0.set(LegStipulationValue_38);
      LegStipulations_NoLegStipulations_38.insert(LegStipulationValue_38.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_38);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_39;
      FIX::LegStipulationType LegStipulationType_39("STRING_1869704224");
      noLegStipulations_0_1_1.set(LegStipulationType_39);
      LegStipulations_NoLegStipulations_39.insert(LegStipulationType_39.getString());
      FIX::LegStipulationValue LegStipulationValue_39("STRING_382366151");
      noLegStipulations_0_1_1.set(LegStipulationValue_39);
      LegStipulations_NoLegStipulations_39.insert(LegStipulationValue_39.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_39);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_40;
      FIX::LegStipulationType LegStipulationType_40("STRING_816222219");
      noLegStipulations_0_1_2.set(LegStipulationType_40);
      LegStipulations_NoLegStipulations_40.insert(LegStipulationType_40.getString());
      FIX::LegStipulationValue LegStipulationValue_40("STRING_779791719");
      noLegStipulations_0_1_2.set(LegStipulationValue_40);
      LegStipulations_NoLegStipulations_40.insert(LegStipulationValue_40.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_40);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_120;
      FIX::NestedPartyID NestedPartyID_120("STRING_1638214239");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyID_120.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_120('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyIDSource_120.getString());
      FIX::NestedPartyRole NestedPartyRole_120(1583530162);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyRole_120.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_120);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_258;
        FIX::NestedPartySubID NestedPartySubID_258("STRING_1176882348");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_258);
        NstdPtysSubGrp_NoNestedPartySubIDs_258.insert(NestedPartySubID_258.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_258(572168161);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_258);
        NstdPtysSubGrp_NoNestedPartySubIDs_258.insert(NestedPartySubIDType_258.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_258);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_259;
        FIX::NestedPartySubID NestedPartySubID_259("STRING_354901585");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_259);
        NstdPtysSubGrp_NoNestedPartySubIDs_259.insert(NestedPartySubID_259.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_259(463258319);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_259);
        NstdPtysSubGrp_NoNestedPartySubIDs_259.insert(NestedPartySubIDType_259.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_259);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_121;
      FIX::NestedPartyID NestedPartyID_121("STRING_970652045");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyID_121.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_121('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyIDSource_121.getString());
      FIX::NestedPartyRole NestedPartyRole_121(1568311071);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyRole_121.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_121);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_260;
        FIX::NestedPartySubID NestedPartySubID_260("STRING_14954949");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_260);
        NstdPtysSubGrp_NoNestedPartySubIDs_260.insert(NestedPartySubID_260.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_260(2121930206);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_260);
        NstdPtysSubGrp_NoNestedPartySubIDs_260.insert(NestedPartySubIDType_260.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_260);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_261;
        FIX::NestedPartySubID NestedPartySubID_261("STRING_357328733");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_261);
        NstdPtysSubGrp_NoNestedPartySubIDs_261.insert(NestedPartySubID_261.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_261(1910315613);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_261);
        NstdPtysSubGrp_NoNestedPartySubIDs_261.insert(NestedPartySubIDType_261.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_261);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_23;
  FIX::CashOrderQty CashOrderQty_23;
  CashOrderQty_23.setString("10572209");
  msg.set(CashOrderQty_23);
  OrderQtyData_23.insert(CashOrderQty_23.getString());
  FIX::OrderPercent OrderPercent_23;
  OrderPercent_23.setString("72.140000");
  msg.set(OrderPercent_23);
  OrderQtyData_23.insert(OrderPercent_23.getString());
  FIX::OrderQty OrderQty_33;
  OrderQty_33.setString("5340579");
  msg.set(OrderQty_33);
  OrderQtyData_23.insert(OrderQty_33.getString());
  FIX::RoundingDirection RoundingDirection_23('2');
  msg.set(RoundingDirection_23);
  OrderQtyData_23.insert(RoundingDirection_23.getString());
  FIX::RoundingModulus RoundingModulus_23;
  RoundingModulus_23.setString("10307636");
  msg.set(RoundingModulus_23);
  OrderQtyData_23.insert(RoundingModulus_23.getString());
  all_values.push_back(OrderQtyData_23);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_113;
    FIX::PartyID PartyID_113("STRING_1963076794");
    noPartyIDs_0_0.set(PartyID_113);
    Parties_NoPartyIDs_113.insert(PartyID_113.getString());
    FIX::PartyIDSource PartyIDSource_113('8');
    noPartyIDs_0_0.set(PartyIDSource_113);
    Parties_NoPartyIDs_113.insert(PartyIDSource_113.getString());
    FIX::PartyRole PartyRole_113(43);
    noPartyIDs_0_0.set(PartyRole_113);
    Parties_NoPartyIDs_113.insert(PartyRole_113.getString());
    all_values.push_back(Parties_NoPartyIDs_113);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_248;
      FIX::PartySubID PartySubID_248("STRING_1290851027");
      noPartySubIDs_0_1_0.set(PartySubID_248);
      PtysSubGrp_NoPartySubIDs_248.insert(PartySubID_248.getString());
      FIX::PartySubIDType PartySubIDType_248(8);
      noPartySubIDs_0_1_0.set(PartySubIDType_248);
      PtysSubGrp_NoPartySubIDs_248.insert(PartySubIDType_248.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_248);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_249;
      FIX::PartySubID PartySubID_249("STRING_329031059");
      noPartySubIDs_0_1_1.set(PartySubID_249);
      PtysSubGrp_NoPartySubIDs_249.insert(PartySubID_249.getString());
      FIX::PartySubIDType PartySubIDType_249(30);
      noPartySubIDs_0_1_1.set(PartySubIDType_249);
      PtysSubGrp_NoPartySubIDs_249.insert(PartySubIDType_249.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_249);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_114;
    FIX::PartyID PartyID_114("STRING_1560034482");
    noPartyIDs_0_1.set(PartyID_114);
    Parties_NoPartyIDs_114.insert(PartyID_114.getString());
    FIX::PartyIDSource PartyIDSource_114('5');
    noPartyIDs_0_1.set(PartyIDSource_114);
    Parties_NoPartyIDs_114.insert(PartyIDSource_114.getString());
    FIX::PartyRole PartyRole_114(9);
    noPartyIDs_0_1.set(PartyRole_114);
    Parties_NoPartyIDs_114.insert(PartyRole_114.getString());
    all_values.push_back(Parties_NoPartyIDs_114);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_250;
      FIX::PartySubID PartySubID_250("STRING_1099267160");
      noPartySubIDs_1_1_0.set(PartySubID_250);
      PtysSubGrp_NoPartySubIDs_250.insert(PartySubID_250.getString());
      FIX::PartySubIDType PartySubIDType_250(13);
      noPartySubIDs_1_1_0.set(PartySubIDType_250);
      PtysSubGrp_NoPartySubIDs_250.insert(PartySubIDType_250.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_250);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_251;
      FIX::PartySubID PartySubID_251("STRING_1568249157");
      noPartySubIDs_1_1_1.set(PartySubID_251);
      PtysSubGrp_NoPartySubIDs_251.insert(PartySubID_251.getString());
      FIX::PartySubIDType PartySubIDType_251(19);
      noPartySubIDs_1_1_1.set(PartySubIDType_251);
      PtysSubGrp_NoPartySubIDs_251.insert(PartySubIDType_251.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_251);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_252;
      FIX::PartySubID PartySubID_252("STRING_1410765947");
      noPartySubIDs_1_1_2.set(PartySubID_252);
      PtysSubGrp_NoPartySubIDs_252.insert(PartySubID_252.getString());
      FIX::PartySubIDType PartySubIDType_252(1);
      noPartySubIDs_1_1_2.set(PartySubIDType_252);
      PtysSubGrp_NoPartySubIDs_252.insert(PartySubIDType_252.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_252);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_115;
    FIX::PartyID PartyID_115("STRING_1677266524");
    noPartyIDs_0_2.set(PartyID_115);
    Parties_NoPartyIDs_115.insert(PartyID_115.getString());
    FIX::PartyIDSource PartyIDSource_115('C');
    noPartyIDs_0_2.set(PartyIDSource_115);
    Parties_NoPartyIDs_115.insert(PartyIDSource_115.getString());
    FIX::PartyRole PartyRole_115(44);
    noPartyIDs_0_2.set(PartyRole_115);
    Parties_NoPartyIDs_115.insert(PartyRole_115.getString());
    all_values.push_back(Parties_NoPartyIDs_115);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_253;
      FIX::PartySubID PartySubID_253("STRING_806039929");
      noPartySubIDs_2_1_0.set(PartySubID_253);
      PtysSubGrp_NoPartySubIDs_253.insert(PartySubID_253.getString());
      FIX::PartySubIDType PartySubIDType_253(12);
      noPartySubIDs_2_1_0.set(PartySubIDType_253);
      PtysSubGrp_NoPartySubIDs_253.insert(PartySubIDType_253.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_253);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_254;
      FIX::PartySubID PartySubID_254("STRING_1455053439");
      noPartySubIDs_2_1_1.set(PartySubID_254);
      PtysSubGrp_NoPartySubIDs_254.insert(PartySubID_254.getString());
      FIX::PartySubIDType PartySubIDType_254(31);
      noPartySubIDs_2_1_1.set(PartySubIDType_254);
      PtysSubGrp_NoPartySubIDs_254.insert(PartySubIDType_254.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_254);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_255;
      FIX::PartySubID PartySubID_255("STRING_505570437");
      noPartySubIDs_2_1_2.set(PartySubID_255);
      PtysSubGrp_NoPartySubIDs_255.insert(PartySubID_255.getString());
      FIX::PartySubIDType PartySubIDType_255(10);
      noPartySubIDs_2_1_2.set(PartySubIDType_255);
      PtysSubGrp_NoPartySubIDs_255.insert(PartySubIDType_255.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_255);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_5;
    FIX::QuoteQualifier QuoteQualifier_5('1');
    noQuoteQualifiers_0_0.set(QuoteQualifier_5);
    QuotQualGrp_NoQuoteQualifiers_5.insert(QuoteQualifier_5.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_5);
    all_compo_names.insert("QuotQualGrp.NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_25;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_25("CAN");
  msg.set(BenchmarkCurveCurrency_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurveCurrency_25.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_25("STRING_OTHER");
  msg.set(BenchmarkCurveName_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurveName_25.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_25("STRING_1329859520");
  msg.set(BenchmarkCurvePoint_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurvePoint_25.getString());
  FIX::BenchmarkPrice BenchmarkPrice_25;
  BenchmarkPrice_25.setString("12862934");
  msg.set(BenchmarkPrice_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkPrice_25.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_25(100848238);
  msg.set(BenchmarkPriceType_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkPriceType_25.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_25("STRING_1956337105");
  msg.set(BenchmarkSecurityID_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkSecurityID_25.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_25("STRING_1615324543");
  msg.set(BenchmarkSecurityIDSource_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkSecurityIDSource_25.getString());
  FIX::Spread Spread_25;
  Spread_25.setString("240073");
  msg.set(Spread_25);
  SpreadOrBenchmarkCurveData_25.insert(Spread_25.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_25);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_41;
    FIX::StipulationType StipulationType_41("STRING_RATING");
    noStipulations_0_0.set(StipulationType_41);
    Stipulations_NoStipulations_41.insert(StipulationType_41.getString());
    FIX::StipulationValue StipulationValue_41("STRING_1942116265");
    noStipulations_0_0.set(StipulationValue_41);
    Stipulations_NoStipulations_41.insert(StipulationValue_41.getString());
    all_values.push_back(Stipulations_NoStipulations_41);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_42;
    FIX::StipulationType StipulationType_42("STRING_GEOG");
    noStipulations_0_1.set(StipulationType_42);
    Stipulations_NoStipulations_42.insert(StipulationType_42.getString());
    FIX::StipulationValue StipulationValue_42("STRING_386869706");
    noStipulations_0_1.set(StipulationValue_42);
    Stipulations_NoStipulations_42.insert(StipulationValue_42.getString());
    all_values.push_back(Stipulations_NoStipulations_42);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_43;
    FIX::StipulationType StipulationType_43("STRING_CUSTOMDATE");
    noStipulations_0_2.set(StipulationType_43);
    Stipulations_NoStipulations_43.insert(StipulationType_43.getString());
    FIX::StipulationValue StipulationValue_43("STRING_1785734445");
    noStipulations_0_2.set(StipulationValue_43);
    Stipulations_NoStipulations_43.insert(StipulationValue_43.getString());
    all_values.push_back(Stipulations_NoStipulations_43);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_106;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_106("DATA_5422545");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_106);
    UnderlyingInstrument_106.insert(EncodedUnderlyingIssuer_106.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_106(29668351);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_106);
    UnderlyingInstrument_106.insert(EncodedUnderlyingIssuerLen_106.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_106("DATA_1370821328");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_106);
    UnderlyingInstrument_106.insert(EncodedUnderlyingSecurityDesc_106.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_106(837015916);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_106);
    UnderlyingInstrument_106.insert(EncodedUnderlyingSecurityDescLen_106.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_106;
    UnderlyingAdjustedQuantity_106.setString("1418228");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_106);
    UnderlyingInstrument_106.insert(UnderlyingAdjustedQuantity_106.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_106;
    UnderlyingAllocationPercent_106.setString("91.540000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_106);
    UnderlyingInstrument_106.insert(UnderlyingAllocationPercent_106.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_106;
    UnderlyingAttachmentPoint_106.setString("58.450000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_106);
    UnderlyingInstrument_106.insert(UnderlyingAttachmentPoint_106.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_106("STRING_611306065");
    noUnderlyings_0_0.set(UnderlyingCFICode_106);
    UnderlyingInstrument_106.insert(UnderlyingCFICode_106.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_106("STRING_223128945");
    noUnderlyings_0_0.set(UnderlyingCPProgram_106);
    UnderlyingInstrument_106.insert(UnderlyingCPProgram_106.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_106("STRING_1358833044");
    noUnderlyings_0_0.set(UnderlyingCPRegType_106);
    UnderlyingInstrument_106.insert(UnderlyingCPRegType_106.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_106;
    UnderlyingCapValue_106.setString("11168765");
    noUnderlyings_0_0.set(UnderlyingCapValue_106);
    UnderlyingInstrument_106.insert(UnderlyingCapValue_106.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_106;
    UnderlyingCashAmount_106.setString("647566");
    noUnderlyings_0_0.set(UnderlyingCashAmount_106);
    UnderlyingInstrument_106.insert(UnderlyingCashAmount_106.getString());
    FIX::UnderlyingCashType UnderlyingCashType_106("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_106);
    UnderlyingInstrument_106.insert(UnderlyingCashType_106.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_106;
    UnderlyingContractMultiplier_106.setString("5057269");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_106);
    UnderlyingInstrument_106.insert(UnderlyingContractMultiplier_106.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_106(1150504726);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_106);
    UnderlyingInstrument_106.insert(UnderlyingContractMultiplierUnit_106.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_106("COUNTRY_795241888");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_106);
    UnderlyingInstrument_106.insert(UnderlyingCountryOfIssue_106.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_106("LOCALMKTDATE_1463207771");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_106);
    UnderlyingInstrument_106.insert(UnderlyingCouponPaymentDate_106.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_106;
    UnderlyingCouponRate_106.setString("5.980000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_106);
    UnderlyingInstrument_106.insert(UnderlyingCouponRate_106.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_106("STRING_2081535372");
    noUnderlyings_0_0.set(UnderlyingCreditRating_106);
    UnderlyingInstrument_106.insert(UnderlyingCreditRating_106.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_106("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_106);
    UnderlyingInstrument_106.insert(UnderlyingCurrency_106.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_106;
    UnderlyingCurrentValue_106.setString("15493762");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_106);
    UnderlyingInstrument_106.insert(UnderlyingCurrentValue_106.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_106;
    UnderlyingDetachmentPoint_106.setString("33.460000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_106);
    UnderlyingInstrument_106.insert(UnderlyingDetachmentPoint_106.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_106;
    UnderlyingDirtyPrice_106.setString("15106219");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_106);
    UnderlyingInstrument_106.insert(UnderlyingDirtyPrice_106.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_106;
    UnderlyingEndPrice_106.setString("8369788");
    noUnderlyings_0_0.set(UnderlyingEndPrice_106);
    UnderlyingInstrument_106.insert(UnderlyingEndPrice_106.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_106;
    UnderlyingEndValue_106.setString("13826959");
    noUnderlyings_0_0.set(UnderlyingEndValue_106);
    UnderlyingInstrument_106.insert(UnderlyingEndValue_106.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_106(1728107282);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_106);
    UnderlyingInstrument_106.insert(UnderlyingExerciseStyle_106.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_106;
    UnderlyingFXRate_106.setString("12238485");
    noUnderlyings_0_0.set(UnderlyingFXRate_106);
    UnderlyingInstrument_106.insert(UnderlyingFXRate_106.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_106('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_106);
    UnderlyingInstrument_106.insert(UnderlyingFXRateCalc_106.getString());
    FIX::UnderlyingFactor UnderlyingFactor_106;
    UnderlyingFactor_106.setString("13663580");
    noUnderlyings_0_0.set(UnderlyingFactor_106);
    UnderlyingInstrument_106.insert(UnderlyingFactor_106.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_106(917403322);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_106);
    UnderlyingInstrument_106.insert(UnderlyingFlowScheduleType_106.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_106("STRING_2130258755");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_106);
    UnderlyingInstrument_106.insert(UnderlyingInstrRegistry_106.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_106("LOCALMKTDATE_1396026430");
    noUnderlyings_0_0.set(UnderlyingIssueDate_106);
    UnderlyingInstrument_106.insert(UnderlyingIssueDate_106.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_106("STRING_140741002");
    noUnderlyings_0_0.set(UnderlyingIssuer_106);
    UnderlyingInstrument_106.insert(UnderlyingIssuer_106.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_106("STRING_819791023");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_106);
    UnderlyingInstrument_106.insert(UnderlyingLocaleOfIssue_106.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_106("LOCALMKTDATE_1537849272");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_106);
    UnderlyingInstrument_106.insert(UnderlyingMaturityDate_106.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_106("MONTHYEAR_1056300156");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_106);
    UnderlyingInstrument_106.insert(UnderlyingMaturityMonthYear_106.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_106("TZTIMEONLY_315363220");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_106);
    UnderlyingInstrument_106.insert(UnderlyingMaturityTime_106.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_106;
    UnderlyingNotionalPercentageOutstanding_106.setString("16.890000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_106);
    UnderlyingInstrument_106.insert(UnderlyingNotionalPercentageOutstanding_106.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_106('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_106);
    UnderlyingInstrument_106.insert(UnderlyingOptAttribute_106.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_106;
    UnderlyingOriginalNotionalPercentageOutstanding_106.setString("62.650000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_106);
    UnderlyingInstrument_106.insert(UnderlyingOriginalNotionalPercentageOutstanding_106.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_106("STRING_1118548191");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_106);
    UnderlyingInstrument_106.insert(UnderlyingPriceUnitOfMeasure_106.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_106;
    UnderlyingPriceUnitOfMeasureQty_106.setString("13441857");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_106);
    UnderlyingInstrument_106.insert(UnderlyingPriceUnitOfMeasureQty_106.getString());
    FIX::UnderlyingProduct UnderlyingProduct_106(695953510);
    noUnderlyings_0_0.set(UnderlyingProduct_106);
    UnderlyingInstrument_106.insert(UnderlyingProduct_106.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_106(1624275103);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_106);
    UnderlyingInstrument_106.insert(UnderlyingPutOrCall_106.getString());
    FIX::UnderlyingPx UnderlyingPx_106;
    UnderlyingPx_106.setString("3472068");
    noUnderlyings_0_0.set(UnderlyingPx_106);
    UnderlyingInstrument_106.insert(UnderlyingPx_106.getString());
    FIX::UnderlyingQty UnderlyingQty_106;
    UnderlyingQty_106.setString("14911953");
    noUnderlyings_0_0.set(UnderlyingQty_106);
    UnderlyingInstrument_106.insert(UnderlyingQty_106.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_106("LOCALMKTDATE_939999226");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_106);
    UnderlyingInstrument_106.insert(UnderlyingRedemptionDate_106.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_106("STRING_680087417");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_106);
    UnderlyingInstrument_106.insert(UnderlyingRepoCollateralSecurityType_106.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_106;
    UnderlyingRepurchaseRate_106.setString("71.230000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_106);
    UnderlyingInstrument_106.insert(UnderlyingRepurchaseRate_106.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_106(356571587);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_106);
    UnderlyingInstrument_106.insert(UnderlyingRepurchaseTerm_106.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_106("STRING_821821472");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_106);
    UnderlyingInstrument_106.insert(UnderlyingRestructuringType_106.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_106("STRING_827139742");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityDesc_106.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_106("EXCHANGE_1944634934");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityExchange_106.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_106("STRING_184959819");
    noUnderlyings_0_0.set(UnderlyingSecurityID_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityID_106.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_106("STRING_1664118555");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityIDSource_106.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_106("STRING_1179847250");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_106);
    UnderlyingInstrument_106.insert(UnderlyingSecuritySubType_106.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_106("STRING_1913067101");
    noUnderlyings_0_0.set(UnderlyingSecurityType_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityType_106.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_106("STRING_740483426");
    noUnderlyings_0_0.set(UnderlyingSeniority_106);
    UnderlyingInstrument_106.insert(UnderlyingSeniority_106.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_106("STRING_1157199812");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_106);
    UnderlyingInstrument_106.insert(UnderlyingSettlMethod_106.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_106(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_106);
    UnderlyingInstrument_106.insert(UnderlyingSettlementType_106.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_106;
    UnderlyingStartValue_106.setString("16578867");
    noUnderlyings_0_0.set(UnderlyingStartValue_106);
    UnderlyingInstrument_106.insert(UnderlyingStartValue_106.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_106("STRING_1139974919");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_106);
    UnderlyingInstrument_106.insert(UnderlyingStateOrProvinceOfIssue_106.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_106("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_106);
    UnderlyingInstrument_106.insert(UnderlyingStrikeCurrency_106.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_106;
    UnderlyingStrikePrice_106.setString("19597659");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_106);
    UnderlyingInstrument_106.insert(UnderlyingStrikePrice_106.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_106("STRING_1918333586");
    noUnderlyings_0_0.set(UnderlyingSymbol_106);
    UnderlyingInstrument_106.insert(UnderlyingSymbol_106.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_106("STRING_707444259");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_106);
    UnderlyingInstrument_106.insert(UnderlyingSymbolSfx_106.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_106("STRING_127645515");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_106);
    UnderlyingInstrument_106.insert(UnderlyingTimeUnit_106.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_106("STRING_1920005275");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_106);
    UnderlyingInstrument_106.insert(UnderlyingUnitOfMeasure_106.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_106;
    UnderlyingUnitOfMeasureQty_106.setString("19868733");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_106);
    UnderlyingInstrument_106.insert(UnderlyingUnitOfMeasureQty_106.getString());
    all_values.push_back(UnderlyingInstrument_106);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_210;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_210("STRING_891069819");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_210);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_210.insert(UnderlyingSecurityAltID_210.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_210("STRING_1183575453");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_210);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_210.insert(UnderlyingSecurityAltIDSource_210.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_211;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_211("STRING_350311643");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_211);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_211.insert(UnderlyingSecurityAltID_211.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_211("STRING_367861274");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_211);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_211.insert(UnderlyingSecurityAltIDSource_211.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_212;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_212("STRING_1530782272");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_212);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_212.insert(UnderlyingSecurityAltID_212.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_212("STRING_1841507042");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_212);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_212.insert(UnderlyingSecurityAltIDSource_212.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_211;
      FIX::UnderlyingStipType UnderlyingStipType_211("STRING_63386041");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_211);
      UnderlyingStipulations_NoUnderlyingStips_211.insert(UnderlyingStipType_211.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_211("STRING_1119270517");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_211);
      UnderlyingStipulations_NoUnderlyingStips_211.insert(UnderlyingStipValue_211.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_211);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_200;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_200("STRING_885207513");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_200);
      UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyID_200.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_200('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_200);
      UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyIDSource_200.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_200(1461583373);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_200);
      UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyRole_200.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_200);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_402("STRING_1463045166");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_402);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402.insert(UnderlyingInstrumentPartySubID_402.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_402(493946975);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_402);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402.insert(UnderlyingInstrumentPartySubIDType_402.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_201;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_201("STRING_835750785");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_201);
      UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyID_201.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_201('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_201);
      UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyIDSource_201.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_201(1651146787);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_201);
      UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyRole_201.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_201);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_403("STRING_1713931692");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_403);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403.insert(UnderlyingInstrumentPartySubID_403.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_403(643638059);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_403);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403.insert(UnderlyingInstrumentPartySubIDType_403.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_202;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_202("STRING_200692984");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_202);
      UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyID_202.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_202('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_202);
      UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyIDSource_202.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_202(455920354);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_202);
      UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyRole_202.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_202);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_404("STRING_2072520055");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_404);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404.insert(UnderlyingInstrumentPartySubID_404.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_404(583565869);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_404);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404.insert(UnderlyingInstrumentPartySubIDType_404.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_107;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_107("DATA_1891548198");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingIssuer_107.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_107(1911909768);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingIssuerLen_107.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_107("DATA_237924002");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingSecurityDesc_107.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_107(635134369);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingSecurityDescLen_107.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_107;
    UnderlyingAdjustedQuantity_107.setString("9480015");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_107);
    UnderlyingInstrument_107.insert(UnderlyingAdjustedQuantity_107.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_107;
    UnderlyingAllocationPercent_107.setString("56.450000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_107);
    UnderlyingInstrument_107.insert(UnderlyingAllocationPercent_107.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_107;
    UnderlyingAttachmentPoint_107.setString("56.430000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_107);
    UnderlyingInstrument_107.insert(UnderlyingAttachmentPoint_107.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_107("STRING_331300197");
    noUnderlyings_0_1.set(UnderlyingCFICode_107);
    UnderlyingInstrument_107.insert(UnderlyingCFICode_107.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_107("STRING_282259039");
    noUnderlyings_0_1.set(UnderlyingCPProgram_107);
    UnderlyingInstrument_107.insert(UnderlyingCPProgram_107.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_107("STRING_163372495");
    noUnderlyings_0_1.set(UnderlyingCPRegType_107);
    UnderlyingInstrument_107.insert(UnderlyingCPRegType_107.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_107;
    UnderlyingCapValue_107.setString("3946862");
    noUnderlyings_0_1.set(UnderlyingCapValue_107);
    UnderlyingInstrument_107.insert(UnderlyingCapValue_107.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_107;
    UnderlyingCashAmount_107.setString("14015295");
    noUnderlyings_0_1.set(UnderlyingCashAmount_107);
    UnderlyingInstrument_107.insert(UnderlyingCashAmount_107.getString());
    FIX::UnderlyingCashType UnderlyingCashType_107("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_107);
    UnderlyingInstrument_107.insert(UnderlyingCashType_107.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_107;
    UnderlyingContractMultiplier_107.setString("12798937");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_107);
    UnderlyingInstrument_107.insert(UnderlyingContractMultiplier_107.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_107(1200456167);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_107);
    UnderlyingInstrument_107.insert(UnderlyingContractMultiplierUnit_107.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_107("COUNTRY_1141904308");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingCountryOfIssue_107.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_107("LOCALMKTDATE_202577436");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_107);
    UnderlyingInstrument_107.insert(UnderlyingCouponPaymentDate_107.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_107;
    UnderlyingCouponRate_107.setString("76.850000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_107);
    UnderlyingInstrument_107.insert(UnderlyingCouponRate_107.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_107("STRING_1635851283");
    noUnderlyings_0_1.set(UnderlyingCreditRating_107);
    UnderlyingInstrument_107.insert(UnderlyingCreditRating_107.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_107("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_107);
    UnderlyingInstrument_107.insert(UnderlyingCurrency_107.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_107;
    UnderlyingCurrentValue_107.setString("11395144");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_107);
    UnderlyingInstrument_107.insert(UnderlyingCurrentValue_107.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_107;
    UnderlyingDetachmentPoint_107.setString("68.910000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_107);
    UnderlyingInstrument_107.insert(UnderlyingDetachmentPoint_107.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_107;
    UnderlyingDirtyPrice_107.setString("1385106");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_107);
    UnderlyingInstrument_107.insert(UnderlyingDirtyPrice_107.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_107;
    UnderlyingEndPrice_107.setString("17831524");
    noUnderlyings_0_1.set(UnderlyingEndPrice_107);
    UnderlyingInstrument_107.insert(UnderlyingEndPrice_107.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_107;
    UnderlyingEndValue_107.setString("10592298");
    noUnderlyings_0_1.set(UnderlyingEndValue_107);
    UnderlyingInstrument_107.insert(UnderlyingEndValue_107.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_107(1503586469);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_107);
    UnderlyingInstrument_107.insert(UnderlyingExerciseStyle_107.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_107;
    UnderlyingFXRate_107.setString("915891");
    noUnderlyings_0_1.set(UnderlyingFXRate_107);
    UnderlyingInstrument_107.insert(UnderlyingFXRate_107.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_107('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_107);
    UnderlyingInstrument_107.insert(UnderlyingFXRateCalc_107.getString());
    FIX::UnderlyingFactor UnderlyingFactor_107;
    UnderlyingFactor_107.setString("14286228");
    noUnderlyings_0_1.set(UnderlyingFactor_107);
    UnderlyingInstrument_107.insert(UnderlyingFactor_107.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_107(675155057);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_107);
    UnderlyingInstrument_107.insert(UnderlyingFlowScheduleType_107.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_107("STRING_774837348");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_107);
    UnderlyingInstrument_107.insert(UnderlyingInstrRegistry_107.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_107("LOCALMKTDATE_1193048996");
    noUnderlyings_0_1.set(UnderlyingIssueDate_107);
    UnderlyingInstrument_107.insert(UnderlyingIssueDate_107.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_107("STRING_913079059");
    noUnderlyings_0_1.set(UnderlyingIssuer_107);
    UnderlyingInstrument_107.insert(UnderlyingIssuer_107.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_107("STRING_1409971717");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingLocaleOfIssue_107.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_107("LOCALMKTDATE_2141050569");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityDate_107.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_107("MONTHYEAR_1501314704");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityMonthYear_107.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_107("TZTIMEONLY_265483712");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityTime_107.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_107;
    UnderlyingNotionalPercentageOutstanding_107.setString("71.190000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_107);
    UnderlyingInstrument_107.insert(UnderlyingNotionalPercentageOutstanding_107.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_107('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_107);
    UnderlyingInstrument_107.insert(UnderlyingOptAttribute_107.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_107;
    UnderlyingOriginalNotionalPercentageOutstanding_107.setString("62.070000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_107);
    UnderlyingInstrument_107.insert(UnderlyingOriginalNotionalPercentageOutstanding_107.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_107("STRING_719553357");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_107);
    UnderlyingInstrument_107.insert(UnderlyingPriceUnitOfMeasure_107.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_107;
    UnderlyingPriceUnitOfMeasureQty_107.setString("10376196");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_107);
    UnderlyingInstrument_107.insert(UnderlyingPriceUnitOfMeasureQty_107.getString());
    FIX::UnderlyingProduct UnderlyingProduct_107(109177141);
    noUnderlyings_0_1.set(UnderlyingProduct_107);
    UnderlyingInstrument_107.insert(UnderlyingProduct_107.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_107(1999447109);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_107);
    UnderlyingInstrument_107.insert(UnderlyingPutOrCall_107.getString());
    FIX::UnderlyingPx UnderlyingPx_107;
    UnderlyingPx_107.setString("905921");
    noUnderlyings_0_1.set(UnderlyingPx_107);
    UnderlyingInstrument_107.insert(UnderlyingPx_107.getString());
    FIX::UnderlyingQty UnderlyingQty_107;
    UnderlyingQty_107.setString("12510814");
    noUnderlyings_0_1.set(UnderlyingQty_107);
    UnderlyingInstrument_107.insert(UnderlyingQty_107.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_107("LOCALMKTDATE_54540898");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_107);
    UnderlyingInstrument_107.insert(UnderlyingRedemptionDate_107.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_107("STRING_606609855");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_107);
    UnderlyingInstrument_107.insert(UnderlyingRepoCollateralSecurityType_107.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_107;
    UnderlyingRepurchaseRate_107.setString("90.850000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_107);
    UnderlyingInstrument_107.insert(UnderlyingRepurchaseRate_107.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_107(1092869120);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_107);
    UnderlyingInstrument_107.insert(UnderlyingRepurchaseTerm_107.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_107("STRING_1178672484");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_107);
    UnderlyingInstrument_107.insert(UnderlyingRestructuringType_107.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_107("STRING_1878963508");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityDesc_107.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_107("EXCHANGE_1951406011");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityExchange_107.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_107("STRING_1317183158");
    noUnderlyings_0_1.set(UnderlyingSecurityID_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityID_107.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_107("STRING_1514632342");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityIDSource_107.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_107("STRING_863152239");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_107);
    UnderlyingInstrument_107.insert(UnderlyingSecuritySubType_107.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_107("STRING_673285979");
    noUnderlyings_0_1.set(UnderlyingSecurityType_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityType_107.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_107("STRING_1606221530");
    noUnderlyings_0_1.set(UnderlyingSeniority_107);
    UnderlyingInstrument_107.insert(UnderlyingSeniority_107.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_107("STRING_1893925037");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_107);
    UnderlyingInstrument_107.insert(UnderlyingSettlMethod_107.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_107(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_107);
    UnderlyingInstrument_107.insert(UnderlyingSettlementType_107.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_107;
    UnderlyingStartValue_107.setString("1338929");
    noUnderlyings_0_1.set(UnderlyingStartValue_107);
    UnderlyingInstrument_107.insert(UnderlyingStartValue_107.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_107("STRING_521278737");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingStateOrProvinceOfIssue_107.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_107("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_107);
    UnderlyingInstrument_107.insert(UnderlyingStrikeCurrency_107.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_107;
    UnderlyingStrikePrice_107.setString("19312504");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_107);
    UnderlyingInstrument_107.insert(UnderlyingStrikePrice_107.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_107("STRING_1141041124");
    noUnderlyings_0_1.set(UnderlyingSymbol_107);
    UnderlyingInstrument_107.insert(UnderlyingSymbol_107.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_107("STRING_400803055");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_107);
    UnderlyingInstrument_107.insert(UnderlyingSymbolSfx_107.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_107("STRING_49250518");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_107);
    UnderlyingInstrument_107.insert(UnderlyingTimeUnit_107.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_107("STRING_1465908243");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_107);
    UnderlyingInstrument_107.insert(UnderlyingUnitOfMeasure_107.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_107;
    UnderlyingUnitOfMeasureQty_107.setString("368931");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_107);
    UnderlyingInstrument_107.insert(UnderlyingUnitOfMeasureQty_107.getString());
    all_values.push_back(UnderlyingInstrument_107);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_213;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_213("STRING_37977953");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_213);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_213.insert(UnderlyingSecurityAltID_213.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_213("STRING_1074512802");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_213);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_213.insert(UnderlyingSecurityAltIDSource_213.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_214;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_214("STRING_587283866");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_214);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_214.insert(UnderlyingSecurityAltID_214.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_214("STRING_2037425062");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_214);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_214.insert(UnderlyingSecurityAltIDSource_214.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_212;
      FIX::UnderlyingStipType UnderlyingStipType_212("STRING_1838365316");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_212);
      UnderlyingStipulations_NoUnderlyingStips_212.insert(UnderlyingStipType_212.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_212("STRING_2091965960");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_212);
      UnderlyingStipulations_NoUnderlyingStips_212.insert(UnderlyingStipValue_212.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_212);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_213;
      FIX::UnderlyingStipType UnderlyingStipType_213("STRING_1771714828");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_213);
      UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipType_213.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_213("STRING_430330753");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_213);
      UnderlyingStipulations_NoUnderlyingStips_213.insert(UnderlyingStipValue_213.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_213);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_203;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_203("STRING_802903665");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_203);
      UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyID_203.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_203('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_203);
      UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyIDSource_203.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_203(841273796);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_203);
      UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyRole_203.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_203);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_405("STRING_1676442955");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_405);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405.insert(UnderlyingInstrumentPartySubID_405.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_405(1704426035);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_405);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405.insert(UnderlyingInstrumentPartySubIDType_405.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_406("STRING_645889154");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_406);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406.insert(UnderlyingInstrumentPartySubID_406.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_406(1135180837);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_406);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406.insert(UnderlyingInstrumentPartySubIDType_406.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_407("STRING_1450867424");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_407);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407.insert(UnderlyingInstrumentPartySubID_407.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_407(600314361);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_407);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407.insert(UnderlyingInstrumentPartySubIDType_407.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_204;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_204("STRING_1269073776");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_204);
      UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyID_204.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_204('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_204);
      UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyIDSource_204.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_204(1747788564);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_204);
      UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyRole_204.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_204);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_408("STRING_1755912967");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_408);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408.insert(UnderlyingInstrumentPartySubID_408.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_408(741346040);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_408);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408.insert(UnderlyingInstrumentPartySubIDType_408.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_409("STRING_569365183");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_409);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409.insert(UnderlyingInstrumentPartySubID_409.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_409(1805163485);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_409);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409.insert(UnderlyingInstrumentPartySubIDType_409.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_410("STRING_59770636");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_410);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410.insert(UnderlyingInstrumentPartySubID_410.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_410(606258334);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_410);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410.insert(UnderlyingInstrumentPartySubIDType_410.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_205;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_205("STRING_135786562");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_205);
      UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyID_205.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_205('9');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_205);
      UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyIDSource_205.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_205(1680771136);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_205);
      UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyRole_205.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_205);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_411("STRING_2135173651");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_411);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411.insert(UnderlyingInstrumentPartySubID_411.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_411(698392461);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_411);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411.insert(UnderlyingInstrumentPartySubIDType_411.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_108;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_108("DATA_413952096");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingIssuer_108.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_108(2079655964);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingIssuerLen_108.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_108("DATA_322623642");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingSecurityDesc_108.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_108(844282849);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingSecurityDescLen_108.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_108;
    UnderlyingAdjustedQuantity_108.setString("9695237");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_108);
    UnderlyingInstrument_108.insert(UnderlyingAdjustedQuantity_108.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_108;
    UnderlyingAllocationPercent_108.setString("73.070000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_108);
    UnderlyingInstrument_108.insert(UnderlyingAllocationPercent_108.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_108;
    UnderlyingAttachmentPoint_108.setString("34.620000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_108);
    UnderlyingInstrument_108.insert(UnderlyingAttachmentPoint_108.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_108("STRING_1810797544");
    noUnderlyings_0_2.set(UnderlyingCFICode_108);
    UnderlyingInstrument_108.insert(UnderlyingCFICode_108.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_108("STRING_1098130482");
    noUnderlyings_0_2.set(UnderlyingCPProgram_108);
    UnderlyingInstrument_108.insert(UnderlyingCPProgram_108.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_108("STRING_535052769");
    noUnderlyings_0_2.set(UnderlyingCPRegType_108);
    UnderlyingInstrument_108.insert(UnderlyingCPRegType_108.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_108;
    UnderlyingCapValue_108.setString("13677399");
    noUnderlyings_0_2.set(UnderlyingCapValue_108);
    UnderlyingInstrument_108.insert(UnderlyingCapValue_108.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_108;
    UnderlyingCashAmount_108.setString("17440196");
    noUnderlyings_0_2.set(UnderlyingCashAmount_108);
    UnderlyingInstrument_108.insert(UnderlyingCashAmount_108.getString());
    FIX::UnderlyingCashType UnderlyingCashType_108("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_108);
    UnderlyingInstrument_108.insert(UnderlyingCashType_108.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_108;
    UnderlyingContractMultiplier_108.setString("6711237");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_108);
    UnderlyingInstrument_108.insert(UnderlyingContractMultiplier_108.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_108(196850349);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_108);
    UnderlyingInstrument_108.insert(UnderlyingContractMultiplierUnit_108.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_108("COUNTRY_791823735");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingCountryOfIssue_108.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_108("LOCALMKTDATE_495786220");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_108);
    UnderlyingInstrument_108.insert(UnderlyingCouponPaymentDate_108.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_108;
    UnderlyingCouponRate_108.setString("89.130000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_108);
    UnderlyingInstrument_108.insert(UnderlyingCouponRate_108.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_108("STRING_960385862");
    noUnderlyings_0_2.set(UnderlyingCreditRating_108);
    UnderlyingInstrument_108.insert(UnderlyingCreditRating_108.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_108("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_108);
    UnderlyingInstrument_108.insert(UnderlyingCurrency_108.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_108;
    UnderlyingCurrentValue_108.setString("15297510");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_108);
    UnderlyingInstrument_108.insert(UnderlyingCurrentValue_108.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_108;
    UnderlyingDetachmentPoint_108.setString("90.240000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_108);
    UnderlyingInstrument_108.insert(UnderlyingDetachmentPoint_108.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_108;
    UnderlyingDirtyPrice_108.setString("5982719");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_108);
    UnderlyingInstrument_108.insert(UnderlyingDirtyPrice_108.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_108;
    UnderlyingEndPrice_108.setString("21360093");
    noUnderlyings_0_2.set(UnderlyingEndPrice_108);
    UnderlyingInstrument_108.insert(UnderlyingEndPrice_108.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_108;
    UnderlyingEndValue_108.setString("20451655");
    noUnderlyings_0_2.set(UnderlyingEndValue_108);
    UnderlyingInstrument_108.insert(UnderlyingEndValue_108.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_108(696020530);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_108);
    UnderlyingInstrument_108.insert(UnderlyingExerciseStyle_108.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_108;
    UnderlyingFXRate_108.setString("16692968");
    noUnderlyings_0_2.set(UnderlyingFXRate_108);
    UnderlyingInstrument_108.insert(UnderlyingFXRate_108.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_108('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_108);
    UnderlyingInstrument_108.insert(UnderlyingFXRateCalc_108.getString());
    FIX::UnderlyingFactor UnderlyingFactor_108;
    UnderlyingFactor_108.setString("6837105");
    noUnderlyings_0_2.set(UnderlyingFactor_108);
    UnderlyingInstrument_108.insert(UnderlyingFactor_108.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_108(220205681);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_108);
    UnderlyingInstrument_108.insert(UnderlyingFlowScheduleType_108.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_108("STRING_1034704463");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_108);
    UnderlyingInstrument_108.insert(UnderlyingInstrRegistry_108.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_108("LOCALMKTDATE_615882850");
    noUnderlyings_0_2.set(UnderlyingIssueDate_108);
    UnderlyingInstrument_108.insert(UnderlyingIssueDate_108.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_108("STRING_542829323");
    noUnderlyings_0_2.set(UnderlyingIssuer_108);
    UnderlyingInstrument_108.insert(UnderlyingIssuer_108.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_108("STRING_1878987313");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingLocaleOfIssue_108.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_108("LOCALMKTDATE_1585406598");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityDate_108.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_108("MONTHYEAR_1668356630");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityMonthYear_108.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_108("TZTIMEONLY_737597127");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityTime_108.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_108;
    UnderlyingNotionalPercentageOutstanding_108.setString("4.950000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_108);
    UnderlyingInstrument_108.insert(UnderlyingNotionalPercentageOutstanding_108.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_108('6');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_108);
    UnderlyingInstrument_108.insert(UnderlyingOptAttribute_108.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_108;
    UnderlyingOriginalNotionalPercentageOutstanding_108.setString("98.970000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_108);
    UnderlyingInstrument_108.insert(UnderlyingOriginalNotionalPercentageOutstanding_108.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_108("STRING_468976778");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_108);
    UnderlyingInstrument_108.insert(UnderlyingPriceUnitOfMeasure_108.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_108;
    UnderlyingPriceUnitOfMeasureQty_108.setString("2155394");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_108);
    UnderlyingInstrument_108.insert(UnderlyingPriceUnitOfMeasureQty_108.getString());
    FIX::UnderlyingProduct UnderlyingProduct_108(795399855);
    noUnderlyings_0_2.set(UnderlyingProduct_108);
    UnderlyingInstrument_108.insert(UnderlyingProduct_108.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_108(1140100486);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_108);
    UnderlyingInstrument_108.insert(UnderlyingPutOrCall_108.getString());
    FIX::UnderlyingPx UnderlyingPx_108;
    UnderlyingPx_108.setString("4123898");
    noUnderlyings_0_2.set(UnderlyingPx_108);
    UnderlyingInstrument_108.insert(UnderlyingPx_108.getString());
    FIX::UnderlyingQty UnderlyingQty_108;
    UnderlyingQty_108.setString("15872235");
    noUnderlyings_0_2.set(UnderlyingQty_108);
    UnderlyingInstrument_108.insert(UnderlyingQty_108.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_108("LOCALMKTDATE_1635886706");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_108);
    UnderlyingInstrument_108.insert(UnderlyingRedemptionDate_108.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_108("STRING_209545066");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_108);
    UnderlyingInstrument_108.insert(UnderlyingRepoCollateralSecurityType_108.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_108;
    UnderlyingRepurchaseRate_108.setString("58.050000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_108);
    UnderlyingInstrument_108.insert(UnderlyingRepurchaseRate_108.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_108(1740102246);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_108);
    UnderlyingInstrument_108.insert(UnderlyingRepurchaseTerm_108.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_108("STRING_748046372");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_108);
    UnderlyingInstrument_108.insert(UnderlyingRestructuringType_108.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_108("STRING_1929876850");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityDesc_108.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_108("EXCHANGE_1501997622");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityExchange_108.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_108("STRING_1346318313");
    noUnderlyings_0_2.set(UnderlyingSecurityID_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityID_108.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_108("STRING_1918402582");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityIDSource_108.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_108("STRING_1399679561");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_108);
    UnderlyingInstrument_108.insert(UnderlyingSecuritySubType_108.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_108("STRING_2042338844");
    noUnderlyings_0_2.set(UnderlyingSecurityType_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityType_108.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_108("STRING_1440215802");
    noUnderlyings_0_2.set(UnderlyingSeniority_108);
    UnderlyingInstrument_108.insert(UnderlyingSeniority_108.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_108("STRING_2020431928");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_108);
    UnderlyingInstrument_108.insert(UnderlyingSettlMethod_108.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_108(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_108);
    UnderlyingInstrument_108.insert(UnderlyingSettlementType_108.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_108;
    UnderlyingStartValue_108.setString("16604214");
    noUnderlyings_0_2.set(UnderlyingStartValue_108);
    UnderlyingInstrument_108.insert(UnderlyingStartValue_108.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_108("STRING_907652743");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingStateOrProvinceOfIssue_108.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_108("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_108);
    UnderlyingInstrument_108.insert(UnderlyingStrikeCurrency_108.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_108;
    UnderlyingStrikePrice_108.setString("6391564");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_108);
    UnderlyingInstrument_108.insert(UnderlyingStrikePrice_108.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_108("STRING_632371530");
    noUnderlyings_0_2.set(UnderlyingSymbol_108);
    UnderlyingInstrument_108.insert(UnderlyingSymbol_108.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_108("STRING_1724123789");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_108);
    UnderlyingInstrument_108.insert(UnderlyingSymbolSfx_108.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_108("STRING_1376753536");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_108);
    UnderlyingInstrument_108.insert(UnderlyingTimeUnit_108.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_108("STRING_1881092025");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_108);
    UnderlyingInstrument_108.insert(UnderlyingUnitOfMeasure_108.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_108;
    UnderlyingUnitOfMeasureQty_108.setString("1956436");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_108);
    UnderlyingInstrument_108.insert(UnderlyingUnitOfMeasureQty_108.getString());
    all_values.push_back(UnderlyingInstrument_108);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_215;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_215("STRING_202585156");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_215);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_215.insert(UnderlyingSecurityAltID_215.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_215("STRING_411183058");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_215);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_215.insert(UnderlyingSecurityAltIDSource_215.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_214;
      FIX::UnderlyingStipType UnderlyingStipType_214("STRING_1342685642");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_214);
      UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipType_214.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_214("STRING_823572860");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_214);
      UnderlyingStipulations_NoUnderlyingStips_214.insert(UnderlyingStipValue_214.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_214);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_206;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_206("STRING_831088700");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_206);
      UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyID_206.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_206('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_206);
      UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyIDSource_206.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_206(1137185388);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_206);
      UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyRole_206.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_206);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_412("STRING_1781164298");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_412);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412.insert(UnderlyingInstrumentPartySubID_412.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_412(919578590);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_412);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412.insert(UnderlyingInstrumentPartySubIDType_412.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_207;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_207("STRING_1925704921");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_207);
      UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyID_207.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_207('9');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_207);
      UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyIDSource_207.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_207(690497524);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_207);
      UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyRole_207.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_207);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_413("STRING_874854160");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_413);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubID_413.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_413(2130713326);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_413);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubIDType_413.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_414("STRING_1050849114");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_414);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubID_414.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_414(1453419890);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_414);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubIDType_414.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_208;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_208("STRING_1643651162");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_208);
      UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyID_208.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_208('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_208);
      UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyIDSource_208.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_208(500384822);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_208);
      UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyRole_208.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_208);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_415("STRING_450174618");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_415);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubID_415.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_415(1132756352);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_415);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubIDType_415.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_416("STRING_1276058462");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_416);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubID_416.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_416(1826928154);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_416);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubIDType_416.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_417("STRING_866364730");
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubID_417);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubID_417.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_417(1471702068);
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubIDType_417);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubIDType_417.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_20;
  FIX::Yield Yield_20;
  Yield_20.setString("42.910000");
  msg.set(Yield_20);
  YieldData_20.insert(Yield_20.getString());
  FIX::YieldCalcDate YieldCalcDate_20("LOCALMKTDATE_1068949886");
  msg.set(YieldCalcDate_20);
  YieldData_20.insert(YieldCalcDate_20.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_20("LOCALMKTDATE_1882885127");
  msg.set(YieldRedemptionDate_20);
  YieldData_20.insert(YieldRedemptionDate_20.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_20;
  YieldRedemptionPrice_20.setString("14786839");
  msg.set(YieldRedemptionPrice_20);
  YieldData_20.insert(YieldRedemptionPrice_20.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_20(264151880);
  msg.set(YieldRedemptionPriceType_20);
  YieldData_20.insert(YieldRedemptionPriceType_20.getString());
  FIX::YieldType YieldType_20("STRING_PUT");
  msg.set(YieldType_20);
  YieldData_20.insert(YieldType_20.getString());
  all_values.push_back(YieldData_20);
  all_compo_names.insert("YieldData");


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
