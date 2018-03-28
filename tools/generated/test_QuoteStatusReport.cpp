#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/QuoteStatusReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteStatusReport msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteStatusReport_0;
  FIX::Account Account_34("STRING_1188701875");
  msg.set(Account_34);
  QuoteStatusReport_0.insert(Account_34.getString());
  FIX::AccountType AccountType_31(2);
  msg.set(AccountType_31);
  QuoteStatusReport_0.insert(AccountType_31.getString());
  FIX::AcctIDSource AcctIDSource_27(4);
  msg.set(AcctIDSource_27);
  QuoteStatusReport_0.insert(AcctIDSource_27.getString());
  FIX::BidForwardPoints BidForwardPoints_13;
  BidForwardPoints_13.setString("17166533");
  msg.set(BidForwardPoints_13);
  QuoteStatusReport_0.insert(BidForwardPoints_13.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_13;
  BidForwardPoints2_13.setString("12226005");
  msg.set(BidForwardPoints2_13);
  QuoteStatusReport_0.insert(BidForwardPoints2_13.getString());
  FIX::BidPx BidPx_13;
  BidPx_13.setString("3448654");
  msg.set(BidPx_13);
  QuoteStatusReport_0.insert(BidPx_13.getString());
  FIX::BidSize BidSize_13;
  BidSize_13.setString("9690536");
  msg.set(BidSize_13);
  QuoteStatusReport_0.insert(BidSize_13.getString());
  FIX::BidSpotRate BidSpotRate_13;
  BidSpotRate_13.setString("5400377");
  msg.set(BidSpotRate_13);
  QuoteStatusReport_0.insert(BidSpotRate_13.getString());
  FIX::BidYield BidYield_13;
  BidYield_13.setString("70.070000");
  msg.set(BidYield_13);
  QuoteStatusReport_0.insert(BidYield_13.getString());
  FIX::BookingType BookingType_26(2);
  msg.set(BookingType_26);
  QuoteStatusReport_0.insert(BookingType_26.getString());
  FIX::CommType CommType_20('3');
  msg.set(CommType_20);
  QuoteStatusReport_0.insert(CommType_20.getString());
  FIX::Commission Commission_20;
  Commission_20.setString("16640154");
  msg.set(Commission_20);
  QuoteStatusReport_0.insert(Commission_20.getString());
  FIX::Currency Currency_56("CHF");
  msg.set(Currency_56);
  QuoteStatusReport_0.insert(Currency_56.getString());
  FIX::CustOrderCapacity CustOrderCapacity_15(1);
  msg.set(CustOrderCapacity_15);
  QuoteStatusReport_0.insert(CustOrderCapacity_15.getString());
  FIX::EncodedText EncodedText_72("DATA_420883522");
  msg.set(EncodedText_72);
  QuoteStatusReport_0.insert(EncodedText_72.getString());
  FIX::EncodedTextLen EncodedTextLen_72(785481589);
  msg.set(EncodedTextLen_72);
  QuoteStatusReport_0.insert(EncodedTextLen_72.getString());
  FIX::ExDestination ExDestination_10("EXCHANGE_1998668774");
  msg.set(ExDestination_10);
  QuoteStatusReport_0.insert(ExDestination_10.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_10('C');
  msg.set(ExDestinationIDSource_10);
  QuoteStatusReport_0.insert(ExDestinationIDSource_10.getString());
  FIX::ExpireTime ExpireTime_17(FIX::UTCTIMESTAMP(1, 50, 42, 1, 4, 2010));
  msg.set(ExpireTime_17);
  QuoteStatusReport_0.insert(ExpireTime_17.getString());
  FIX::MidPx MidPx_13;
  MidPx_13.setString("6443966");
  msg.set(MidPx_13);
  QuoteStatusReport_0.insert(MidPx_13.getString());
  FIX::MidYield MidYield_13;
  MidYield_13.setString("60.250000");
  msg.set(MidYield_13);
  QuoteStatusReport_0.insert(MidYield_13.getString());
  FIX::MinBidSize MinBidSize_2;
  MinBidSize_2.setString("1048724");
  msg.set(MinBidSize_2);
  QuoteStatusReport_0.insert(MinBidSize_2.getString());
  FIX::MinOfferSize MinOfferSize_2;
  MinOfferSize_2.setString("7979513");
  msg.set(MinOfferSize_2);
  QuoteStatusReport_0.insert(MinOfferSize_2.getString());
  FIX::MinQty MinQty_14;
  MinQty_14.setString("7484632");
  msg.set(MinQty_14);
  QuoteStatusReport_0.insert(MinQty_14.getString());
  FIX::MktBidPx MktBidPx_2;
  MktBidPx_2.setString("12935743");
  msg.set(MktBidPx_2);
  QuoteStatusReport_0.insert(MktBidPx_2.getString());
  FIX::MktOfferPx MktOfferPx_2;
  MktOfferPx_2.setString("4652882");
  msg.set(MktOfferPx_2);
  QuoteStatusReport_0.insert(MktOfferPx_2.getString());
  FIX::OfferForwardPoints OfferForwardPoints_13;
  OfferForwardPoints_13.setString("13376238");
  msg.set(OfferForwardPoints_13);
  QuoteStatusReport_0.insert(OfferForwardPoints_13.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_13;
  OfferForwardPoints2_13.setString("8627440");
  msg.set(OfferForwardPoints2_13);
  QuoteStatusReport_0.insert(OfferForwardPoints2_13.getString());
  FIX::OfferPx OfferPx_13;
  OfferPx_13.setString("16878887");
  msg.set(OfferPx_13);
  QuoteStatusReport_0.insert(OfferPx_13.getString());
  FIX::OfferSize OfferSize_13;
  OfferSize_13.setString("16824893");
  msg.set(OfferSize_13);
  QuoteStatusReport_0.insert(OfferSize_13.getString());
  FIX::OfferSpotRate OfferSpotRate_13;
  OfferSpotRate_13.setString("18317976");
  msg.set(OfferSpotRate_13);
  QuoteStatusReport_0.insert(OfferSpotRate_13.getString());
  FIX::OfferYield OfferYield_13;
  OfferYield_13.setString("28.580000");
  msg.set(OfferYield_13);
  QuoteStatusReport_0.insert(OfferYield_13.getString());
  FIX::OrdType OrdType_44('D');
  msg.set(OrdType_44);
  QuoteStatusReport_0.insert(OrdType_44.getString());
  FIX::OrderCapacity OrderCapacity_29('A');
  msg.set(OrderCapacity_29);
  QuoteStatusReport_0.insert(OrderCapacity_29.getString());
  FIX::OrderQty2 OrderQty2_22;
  OrderQty2_22.setString("820141");
  msg.set(OrderQty2_22);
  QuoteStatusReport_0.insert(OrderQty2_22.getString());
  FIX::OrderRestrictions OrderRestrictions_27("MULTIPLECHARVALUE_5");
  msg.set(OrderRestrictions_27);
  QuoteStatusReport_0.insert(OrderRestrictions_27.getString());
  FIX::Price Price_23;
  Price_23.setString("16724242");
  msg.set(Price_23);
  QuoteStatusReport_0.insert(Price_23.getString());
  FIX::PriceType PriceType_35(1);
  msg.set(PriceType_35);
  QuoteStatusReport_0.insert(PriceType_35.getString());
  FIX::QuoteCancelType QuoteCancelType_2(4);
  msg.set(QuoteCancelType_2);
  QuoteStatusReport_0.insert(QuoteCancelType_2.getString());
  FIX::QuoteID QuoteID_12("STRING_2093307761");
  msg.set(QuoteID_12);
  QuoteStatusReport_0.insert(QuoteID_12.getString());
  FIX::QuoteMsgID QuoteMsgID_3("STRING_531538883");
  msg.set(QuoteMsgID_3);
  QuoteStatusReport_0.insert(QuoteMsgID_3.getString());
  FIX::QuoteRejectReason QuoteRejectReason_1(8);
  msg.set(QuoteRejectReason_1);
  QuoteStatusReport_0.insert(QuoteRejectReason_1.getString());
  FIX::QuoteReqID QuoteReqID_6("STRING_1742652934");
  msg.set(QuoteReqID_6);
  QuoteStatusReport_0.insert(QuoteReqID_6.getString());
  FIX::QuoteRespID QuoteRespID_3("STRING_979046756");
  msg.set(QuoteRespID_3);
  QuoteStatusReport_0.insert(QuoteRespID_3.getString());
  FIX::QuoteStatus QuoteStatus_1(10);
  msg.set(QuoteStatus_1);
  QuoteStatusReport_0.insert(QuoteStatus_1.getString());
  FIX::QuoteStatusReqID QuoteStatusReqID_0("STRING_868640597");
  msg.set(QuoteStatusReqID_0);
  QuoteStatusReport_0.insert(QuoteStatusReqID_0.getString());
  FIX::QuoteType QuoteType_11(2);
  msg.set(QuoteType_11);
  QuoteStatusReport_0.insert(QuoteType_11.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_2;
  SettlCurrBidFxRate_2.setString("19725321");
  msg.set(SettlCurrBidFxRate_2);
  QuoteStatusReport_0.insert(SettlCurrBidFxRate_2.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_10('M');
  msg.set(SettlCurrFxRateCalc_10);
  QuoteStatusReport_0.insert(SettlCurrFxRateCalc_10.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_2;
  SettlCurrOfferFxRate_2.setString("16775561");
  msg.set(SettlCurrOfferFxRate_2);
  QuoteStatusReport_0.insert(SettlCurrOfferFxRate_2.getString());
  FIX::SettlDate SettlDate_42("LOCALMKTDATE_469445086");
  msg.set(SettlDate_42);
  QuoteStatusReport_0.insert(SettlDate_42.getString());
  FIX::SettlDate2 SettlDate2_22("LOCALMKTDATE_212386546");
  msg.set(SettlDate2_22);
  QuoteStatusReport_0.insert(SettlDate2_22.getString());
  FIX::SettlType SettlType_25("STRING_7");
  msg.set(SettlType_25);
  QuoteStatusReport_0.insert(SettlType_25.getString());
  FIX::Side Side_40('7');
  msg.set(Side_40);
  QuoteStatusReport_0.insert(Side_40.getString());
  FIX::Text Text_72("STRING_960849784");
  msg.set(Text_72);
  QuoteStatusReport_0.insert(Text_72.getString());
  FIX::TradingSessionID TradingSessionID_68("STRING_2");
  msg.set(TradingSessionID_68);
  QuoteStatusReport_0.insert(TradingSessionID_68.getString());
  FIX::TradingSessionSubID TradingSessionSubID_68("STRING_6");
  msg.set(TradingSessionSubID_68);
  QuoteStatusReport_0.insert(TradingSessionSubID_68.getString());
  FIX::TransactTime TransactTime_58(FIX::UTCTIMESTAMP(16, 34, 27, 19, 5, 2014));
  msg.set(TransactTime_58);
  QuoteStatusReport_0.insert(TransactTime_58.getString());
  FIX::ValidUntilTime ValidUntilTime_15(FIX::UTCTIMESTAMP(7, 27, 28, 13, 3, 2013));
  msg.set(ValidUntilTime_15);
  QuoteStatusReport_0.insert(ValidUntilTime_15.getString());
  all_values.push_back(QuoteStatusReport_0);

  // FinancingDetails
  multiset<string> FinancingDetails_25;
  FIX::AgreementCurrency AgreementCurrency_25("EUR");
  msg.set(AgreementCurrency_25);
  FinancingDetails_25.insert(AgreementCurrency_25.getString());
  FIX::AgreementDate AgreementDate_25("LOCALMKTDATE_826795287");
  msg.set(AgreementDate_25);
  FinancingDetails_25.insert(AgreementDate_25.getString());
  FIX::AgreementDesc AgreementDesc_25("STRING_544706092");
  msg.set(AgreementDesc_25);
  FinancingDetails_25.insert(AgreementDesc_25.getString());
  FIX::AgreementID AgreementID_25("STRING_385753626");
  msg.set(AgreementID_25);
  FinancingDetails_25.insert(AgreementID_25.getString());
  FIX::DeliveryType DeliveryType_25(0);
  msg.set(DeliveryType_25);
  FinancingDetails_25.insert(DeliveryType_25.getString());
  FIX::EndDate EndDate_25("LOCALMKTDATE_1776735331");
  msg.set(EndDate_25);
  FinancingDetails_25.insert(EndDate_25.getString());
  FIX::MarginRatio MarginRatio_25;
  MarginRatio_25.setString("21.110000");
  msg.set(MarginRatio_25);
  FinancingDetails_25.insert(MarginRatio_25.getString());
  FIX::StartDate StartDate_25("LOCALMKTDATE_15226405");
  msg.set(StartDate_25);
  FinancingDetails_25.insert(StartDate_25.getString());
  FIX::TerminationType TerminationType_25(2);
  msg.set(TerminationType_25);
  FinancingDetails_25.insert(TerminationType_25.getString());
  all_values.push_back(FinancingDetails_25);

  // Instrument
  multiset<string> Instrument_74;
  FIX::AttachmentPoint AttachmentPoint_74;
  AttachmentPoint_74.setString("71.970000");
  msg.set(AttachmentPoint_74);
  Instrument_74.insert(AttachmentPoint_74.getString());
  FIX::CFICode CFICode_74("STRING_227612951");
  msg.set(CFICode_74);
  Instrument_74.insert(CFICode_74.getString());
  FIX::CPProgram CPProgram_74(2);
  msg.set(CPProgram_74);
  Instrument_74.insert(CPProgram_74.getString());
  FIX::CPRegType CPRegType_74("STRING_1947643651");
  msg.set(CPRegType_74);
  Instrument_74.insert(CPRegType_74.getString());
  FIX::CapPrice CapPrice_74;
  CapPrice_74.setString("11884627");
  msg.set(CapPrice_74);
  Instrument_74.insert(CapPrice_74.getString());
  FIX::ContractMultiplier ContractMultiplier_74;
  ContractMultiplier_74.setString("18702720");
  msg.set(ContractMultiplier_74);
  Instrument_74.insert(ContractMultiplier_74.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_74(2);
  msg.set(ContractMultiplierUnit_74);
  Instrument_74.insert(ContractMultiplierUnit_74.getString());
  FIX::ContractSettlMonth ContractSettlMonth_74("MONTHYEAR_1339452754");
  msg.set(ContractSettlMonth_74);
  Instrument_74.insert(ContractSettlMonth_74.getString());
  FIX::CountryOfIssue CountryOfIssue_74("COUNTRY_1514051791");
  msg.set(CountryOfIssue_74);
  Instrument_74.insert(CountryOfIssue_74.getString());
  FIX::CouponPaymentDate CouponPaymentDate_74("LOCALMKTDATE_658450775");
  msg.set(CouponPaymentDate_74);
  Instrument_74.insert(CouponPaymentDate_74.getString());
  FIX::CouponRate CouponRate_74;
  CouponRate_74.setString("84.730000");
  msg.set(CouponRate_74);
  Instrument_74.insert(CouponRate_74.getString());
  FIX::CreditRating CreditRating_74("STRING_842145538");
  msg.set(CreditRating_74);
  Instrument_74.insert(CreditRating_74.getString());
  FIX::DatedDate DatedDate_74("LOCALMKTDATE_2011983387");
  msg.set(DatedDate_74);
  Instrument_74.insert(DatedDate_74.getString());
  FIX::DetachmentPoint DetachmentPoint_74;
  DetachmentPoint_74.setString("69.010000");
  msg.set(DetachmentPoint_74);
  Instrument_74.insert(DetachmentPoint_74.getString());
  FIX::EncodedIssuer EncodedIssuer_74("DATA_455523188");
  msg.set(EncodedIssuer_74);
  Instrument_74.insert(EncodedIssuer_74.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_74(1300046546);
  msg.set(EncodedIssuerLen_74);
  Instrument_74.insert(EncodedIssuerLen_74.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_74("DATA_2120449888");
  msg.set(EncodedSecurityDesc_74);
  Instrument_74.insert(EncodedSecurityDesc_74.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_74(1741325076);
  msg.set(EncodedSecurityDescLen_74);
  Instrument_74.insert(EncodedSecurityDescLen_74.getString());
  FIX::ExerciseStyle ExerciseStyle_74(2);
  msg.set(ExerciseStyle_74);
  Instrument_74.insert(ExerciseStyle_74.getString());
  FIX::Factor Factor_74;
  Factor_74.setString("11178001");
  msg.set(Factor_74);
  Instrument_74.insert(Factor_74.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_74(false);
  msg.set(FlexProductEligibilityIndicator_74);
  Instrument_74.insert(FlexProductEligibilityIndicator_74.getString());
  FIX::FlexibleIndicator FlexibleIndicator_74(true);
  msg.set(FlexibleIndicator_74);
  Instrument_74.insert(FlexibleIndicator_74.getString());
  FIX::FloorPrice FloorPrice_74;
  FloorPrice_74.setString("4376565");
  msg.set(FloorPrice_74);
  Instrument_74.insert(FloorPrice_74.getString());
  FIX::FlowScheduleType FlowScheduleType_74(1);
  msg.set(FlowScheduleType_74);
  Instrument_74.insert(FlowScheduleType_74.getString());
  FIX::InstrRegistry InstrRegistry_74("STRING_444532428");
  msg.set(InstrRegistry_74);
  Instrument_74.insert(InstrRegistry_74.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_74('8');
  msg.set(InstrmtAssignmentMethod_74);
  Instrument_74.insert(InstrmtAssignmentMethod_74.getString());
  FIX::InterestAccrualDate InterestAccrualDate_74("LOCALMKTDATE_1200214953");
  msg.set(InterestAccrualDate_74);
  Instrument_74.insert(InterestAccrualDate_74.getString());
  FIX::IssueDate IssueDate_74("LOCALMKTDATE_73784111");
  msg.set(IssueDate_74);
  Instrument_74.insert(IssueDate_74.getString());
  FIX::Issuer Issuer_74("STRING_1034212247");
  msg.set(Issuer_74);
  Instrument_74.insert(Issuer_74.getString());
  FIX::ListMethod ListMethod_74(0);
  msg.set(ListMethod_74);
  Instrument_74.insert(ListMethod_74.getString());
  FIX::LocaleOfIssue LocaleOfIssue_74("STRING_1380591917");
  msg.set(LocaleOfIssue_74);
  Instrument_74.insert(LocaleOfIssue_74.getString());
  FIX::MaturityDate MaturityDate_74("LOCALMKTDATE_1714459444");
  msg.set(MaturityDate_74);
  Instrument_74.insert(MaturityDate_74.getString());
  FIX::MaturityMonthYear MaturityMonthYear_74("MONTHYEAR_1443054309");
  msg.set(MaturityMonthYear_74);
  Instrument_74.insert(MaturityMonthYear_74.getString());
  FIX::MaturityTime MaturityTime_74("TZTIMEONLY_174861037");
  msg.set(MaturityTime_74);
  Instrument_74.insert(MaturityTime_74.getString());
  FIX::MinPriceIncrement MinPriceIncrement_74;
  MinPriceIncrement_74.setString("15146194");
  msg.set(MinPriceIncrement_74);
  Instrument_74.insert(MinPriceIncrement_74.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_74;
  MinPriceIncrementAmount_74.setString("4840333");
  msg.set(MinPriceIncrementAmount_74);
  Instrument_74.insert(MinPriceIncrementAmount_74.getString());
  FIX::NTPositionLimit NTPositionLimit_74(2045133133);
  msg.set(NTPositionLimit_74);
  Instrument_74.insert(NTPositionLimit_74.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_74;
  NotionalPercentageOutstanding_74.setString("4.680000");
  msg.set(NotionalPercentageOutstanding_74);
  Instrument_74.insert(NotionalPercentageOutstanding_74.getString());
  FIX::OptAttribute OptAttribute_74('1');
  msg.set(OptAttribute_74);
  Instrument_74.insert(OptAttribute_74.getString());
  FIX::OptPayoutAmount OptPayoutAmount_74;
  OptPayoutAmount_74.setString("14117012");
  msg.set(OptPayoutAmount_74);
  Instrument_74.insert(OptPayoutAmount_74.getString());
  FIX::OptPayoutType OptPayoutType_74(1);
  msg.set(OptPayoutType_74);
  Instrument_74.insert(OptPayoutType_74.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_74;
  OriginalNotionalPercentageOutstanding_74.setString("9.760000");
  msg.set(OriginalNotionalPercentageOutstanding_74);
  Instrument_74.insert(OriginalNotionalPercentageOutstanding_74.getString());
  FIX::Pool Pool_74("STRING_106363167");
  msg.set(Pool_74);
  Instrument_74.insert(Pool_74.getString());
  FIX::PositionLimit PositionLimit_74(1422930982);
  msg.set(PositionLimit_74);
  Instrument_74.insert(PositionLimit_74.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_74("STRING_INX");
  msg.set(PriceQuoteMethod_74);
  Instrument_74.insert(PriceQuoteMethod_74.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_74("STRING_561886355");
  msg.set(PriceUnitOfMeasure_74);
  Instrument_74.insert(PriceUnitOfMeasure_74.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_74;
  PriceUnitOfMeasureQty_74.setString("5754938");
  msg.set(PriceUnitOfMeasureQty_74);
  Instrument_74.insert(PriceUnitOfMeasureQty_74.getString());
  FIX::Product Product_76(1);
  msg.set(Product_76);
  Instrument_74.insert(Product_76.getString());
  FIX::ProductComplex ProductComplex_74("STRING_155727783");
  msg.set(ProductComplex_74);
  Instrument_74.insert(ProductComplex_74.getString());
  FIX::PutOrCall PutOrCall_74(0);
  msg.set(PutOrCall_74);
  Instrument_74.insert(PutOrCall_74.getString());
  FIX::RedemptionDate RedemptionDate_74("LOCALMKTDATE_1091670636");
  msg.set(RedemptionDate_74);
  Instrument_74.insert(RedemptionDate_74.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_74("STRING_981195212");
  msg.set(RepoCollateralSecurityType_74);
  Instrument_74.insert(RepoCollateralSecurityType_74.getString());
  FIX::RepurchaseRate RepurchaseRate_74;
  RepurchaseRate_74.setString("72.160000");
  msg.set(RepurchaseRate_74);
  Instrument_74.insert(RepurchaseRate_74.getString());
  FIX::RepurchaseTerm RepurchaseTerm_74(1529327146);
  msg.set(RepurchaseTerm_74);
  Instrument_74.insert(RepurchaseTerm_74.getString());
  FIX::RestructuringType RestructuringType_74("STRING_FR");
  msg.set(RestructuringType_74);
  Instrument_74.insert(RestructuringType_74.getString());
  FIX::SecurityDesc SecurityDesc_74("STRING_1254019645");
  msg.set(SecurityDesc_74);
  Instrument_74.insert(SecurityDesc_74.getString());
  FIX::SecurityExchange SecurityExchange_74("EXCHANGE_205253635");
  msg.set(SecurityExchange_74);
  Instrument_74.insert(SecurityExchange_74.getString());
  FIX::SecurityGroup SecurityGroup_74("STRING_1686189233");
  msg.set(SecurityGroup_74);
  Instrument_74.insert(SecurityGroup_74.getString());
  FIX::SecurityID SecurityID_74("STRING_1327803756");
  msg.set(SecurityID_74);
  Instrument_74.insert(SecurityID_74.getString());
  FIX::SecurityIDSource SecurityIDSource_74("STRING_7");
  msg.set(SecurityIDSource_74);
  Instrument_74.insert(SecurityIDSource_74.getString());
  FIX::SecurityStatus SecurityStatus_74("STRING_2");
  msg.set(SecurityStatus_74);
  Instrument_74.insert(SecurityStatus_74.getString());
  FIX::SecuritySubType SecuritySubType_75("STRING_560912025");
  msg.set(SecuritySubType_75);
  Instrument_74.insert(SecuritySubType_75.getString());
  FIX::SecurityType SecurityType_76("STRING_BOX");
  msg.set(SecurityType_76);
  Instrument_74.insert(SecurityType_76.getString());
  FIX::Seniority Seniority_74("STRING_SB");
  msg.set(Seniority_74);
  Instrument_74.insert(Seniority_74.getString());
  FIX::SettlMethod SettlMethod_74('P');
  msg.set(SettlMethod_74);
  Instrument_74.insert(SettlMethod_74.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_74("STRING_173577478");
  msg.set(SettleOnOpenFlag_74);
  Instrument_74.insert(SettleOnOpenFlag_74.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_74("STRING_533751001");
  msg.set(StateOrProvinceOfIssue_74);
  Instrument_74.insert(StateOrProvinceOfIssue_74.getString());
  FIX::StrikeCurrency StrikeCurrency_74("GBP");
  msg.set(StrikeCurrency_74);
  Instrument_74.insert(StrikeCurrency_74.getString());
  FIX::StrikeMultiplier StrikeMultiplier_74;
  StrikeMultiplier_74.setString("2097535");
  msg.set(StrikeMultiplier_74);
  Instrument_74.insert(StrikeMultiplier_74.getString());
  FIX::StrikePrice StrikePrice_74;
  StrikePrice_74.setString("20451238");
  msg.set(StrikePrice_74);
  Instrument_74.insert(StrikePrice_74.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_74(2);
  msg.set(StrikePriceBoundaryMethod_74);
  Instrument_74.insert(StrikePriceBoundaryMethod_74.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_74;
  StrikePriceBoundaryPrecision_74.setString("44.790000");
  msg.set(StrikePriceBoundaryPrecision_74);
  Instrument_74.insert(StrikePriceBoundaryPrecision_74.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_74(4);
  msg.set(StrikePriceDeterminationMethod_74);
  Instrument_74.insert(StrikePriceDeterminationMethod_74.getString());
  FIX::StrikeValue StrikeValue_74;
  StrikeValue_74.setString("19074365");
  msg.set(StrikeValue_74);
  Instrument_74.insert(StrikeValue_74.getString());
  FIX::Symbol Symbol_74("STRING_912108709");
  msg.set(Symbol_74);
  Instrument_74.insert(Symbol_74.getString());
  FIX::SymbolSfx SymbolSfx_74("STRING_CD");
  msg.set(SymbolSfx_74);
  Instrument_74.insert(SymbolSfx_74.getString());
  FIX::TimeUnit TimeUnit_74("STRING_S");
  msg.set(TimeUnit_74);
  Instrument_74.insert(TimeUnit_74.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_74(4);
  msg.set(UnderlyingPriceDeterminationMethod_74);
  Instrument_74.insert(UnderlyingPriceDeterminationMethod_74.getString());
  FIX::UnitOfMeasure UnitOfMeasure_74("STRING_Bcf");
  msg.set(UnitOfMeasure_74);
  Instrument_74.insert(UnitOfMeasure_74.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_74;
  UnitOfMeasureQty_74.setString("12451076");
  msg.set(UnitOfMeasureQty_74);
  Instrument_74.insert(UnitOfMeasureQty_74.getString());
  FIX::ValuationMethod ValuationMethod_74("STRING_EQTY");
  msg.set(ValuationMethod_74);
  Instrument_74.insert(ValuationMethod_74.getString());
  all_values.push_back(Instrument_74);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_143;
    FIX::ComplexEventCondition ComplexEventCondition_143(1);
    noComplexEvents_0_0.set(ComplexEventCondition_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventCondition_143.getString());
    FIX::ComplexEventPrice ComplexEventPrice_143;
    ComplexEventPrice_143.setString("13594933");
    noComplexEvents_0_0.set(ComplexEventPrice_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventPrice_143.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_143(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceBoundaryMethod_143.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_143;
    ComplexEventPriceBoundaryPrecision_143.setString("8.510000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceBoundaryPrecision_143.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_143(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceTimeType_143.getString());
    FIX::ComplexEventType ComplexEventType_143(7);
    noComplexEvents_0_0.set(ComplexEventType_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexEventType_143.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_143;
    ComplexOptPayoutAmount_143.setString("3414509");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_143);
    ComplexEvents_NoComplexEvents_143.insert(ComplexOptPayoutAmount_143.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_143);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_292;
      FIX::ComplexEventEndDate ComplexEventEndDate_292(FIX::UTCTIMESTAMP(17, 2, 59, 24, 2, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_292);
      ComplexEventDates_NoComplexEventDates_292.insert(ComplexEventEndDate_292.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_292(FIX::UTCTIMESTAMP(7, 44, 44, 25, 4, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_292);
      ComplexEventDates_NoComplexEventDates_292.insert(ComplexEventStartDate_292.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_292);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_591;
        FIX::ComplexEventEndTime ComplexEventEndTime_591(FIX::UTCTIMEONLY(6, 34, 23));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_591);
        ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventEndTime_591.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_591(FIX::UTCTIMEONLY(11, 31, 33));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_591);
        ComplexEventTimes_NoComplexEventTimes_591.insert(ComplexEventStartTime_591.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_591);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_592;
        FIX::ComplexEventEndTime ComplexEventEndTime_592(FIX::UTCTIMEONLY(5, 19, 40));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_592);
        ComplexEventTimes_NoComplexEventTimes_592.insert(ComplexEventEndTime_592.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_592(FIX::UTCTIMEONLY(3, 0, 21));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_592);
        ComplexEventTimes_NoComplexEventTimes_592.insert(ComplexEventStartTime_592.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_592);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_593;
        FIX::ComplexEventEndTime ComplexEventEndTime_593(FIX::UTCTIMEONLY(21, 16, 5));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_593);
        ComplexEventTimes_NoComplexEventTimes_593.insert(ComplexEventEndTime_593.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_593(FIX::UTCTIMEONLY(5, 6, 5));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_593);
        ComplexEventTimes_NoComplexEventTimes_593.insert(ComplexEventStartTime_593.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_593);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_293;
      FIX::ComplexEventEndDate ComplexEventEndDate_293(FIX::UTCTIMESTAMP(6, 49, 9, 5, 10, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_293);
      ComplexEventDates_NoComplexEventDates_293.insert(ComplexEventEndDate_293.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_293(FIX::UTCTIMESTAMP(16, 52, 37, 12, 5, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_293);
      ComplexEventDates_NoComplexEventDates_293.insert(ComplexEventStartDate_293.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_293);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_594;
        FIX::ComplexEventEndTime ComplexEventEndTime_594(FIX::UTCTIMEONLY(5, 57, 38));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_594);
        ComplexEventTimes_NoComplexEventTimes_594.insert(ComplexEventEndTime_594.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_594(FIX::UTCTIMEONLY(12, 30, 29));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_594);
        ComplexEventTimes_NoComplexEventTimes_594.insert(ComplexEventStartTime_594.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_594);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_595;
        FIX::ComplexEventEndTime ComplexEventEndTime_595(FIX::UTCTIMEONLY(3, 45, 51));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_595);
        ComplexEventTimes_NoComplexEventTimes_595.insert(ComplexEventEndTime_595.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_595(FIX::UTCTIMEONLY(14, 49, 49));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_595);
        ComplexEventTimes_NoComplexEventTimes_595.insert(ComplexEventStartTime_595.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_595);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_294;
      FIX::ComplexEventEndDate ComplexEventEndDate_294(FIX::UTCTIMESTAMP(11, 38, 32, 5, 1, 2014));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_294);
      ComplexEventDates_NoComplexEventDates_294.insert(ComplexEventEndDate_294.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_294(FIX::UTCTIMESTAMP(16, 35, 44, 16, 4, 2015));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_294);
      ComplexEventDates_NoComplexEventDates_294.insert(ComplexEventStartDate_294.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_294);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_596;
        FIX::ComplexEventEndTime ComplexEventEndTime_596(FIX::UTCTIMEONLY(18, 10, 26));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_596);
        ComplexEventTimes_NoComplexEventTimes_596.insert(ComplexEventEndTime_596.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_596(FIX::UTCTIMEONLY(2, 56, 31));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_596);
        ComplexEventTimes_NoComplexEventTimes_596.insert(ComplexEventStartTime_596.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_596);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_151;
    FIX::EventDate EventDate_151("LOCALMKTDATE_1784263403");
    noEvents_0_0.set(EventDate_151);
    EvntGrp_NoEvents_151.insert(EventDate_151.getString());
    FIX::EventPx EventPx_151;
    EventPx_151.setString("8354238");
    noEvents_0_0.set(EventPx_151);
    EvntGrp_NoEvents_151.insert(EventPx_151.getString());
    FIX::EventText EventText_151("STRING_1678707860");
    noEvents_0_0.set(EventText_151);
    EvntGrp_NoEvents_151.insert(EventText_151.getString());
    FIX::EventTime EventTime_151(FIX::UTCTIMESTAMP(10, 1, 48, 20, 6, 2009));
    noEvents_0_0.set(EventTime_151);
    EvntGrp_NoEvents_151.insert(EventTime_151.getString());
    FIX::EventType EventType_151(17);
    noEvents_0_0.set(EventType_151);
    EvntGrp_NoEvents_151.insert(EventType_151.getString());
    all_values.push_back(EvntGrp_NoEvents_151);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_153;
    FIX::InstrumentPartyID InstrumentPartyID_153("STRING_1345432083");
    noInstrumentParties_0_0.set(InstrumentPartyID_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyID_153.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_153('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyIDSource_153.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_153(1576065745);
    noInstrumentParties_0_0.set(InstrumentPartyRole_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyRole_153.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_153);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322;
      FIX::InstrumentPartySubID InstrumentPartySubID_322("STRING_1590353062");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_322);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322.insert(InstrumentPartySubID_322.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_322(184393021);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_322);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322.insert(InstrumentPartySubIDType_322.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323;
      FIX::InstrumentPartySubID InstrumentPartySubID_323("STRING_1345916419");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_323);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323.insert(InstrumentPartySubID_323.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_323(838048265);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_323);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323.insert(InstrumentPartySubIDType_323.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324;
      FIX::InstrumentPartySubID InstrumentPartySubID_324("STRING_1653497506");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_324);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324.insert(InstrumentPartySubID_324.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_324(877624352);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_324);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324.insert(InstrumentPartySubIDType_324.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_154;
    FIX::InstrumentPartyID InstrumentPartyID_154("STRING_1496541233");
    noInstrumentParties_0_1.set(InstrumentPartyID_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyID_154.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_154('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyIDSource_154.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_154(2012180263);
    noInstrumentParties_0_1.set(InstrumentPartyRole_154);
    InstrumentParties_NoInstrumentParties_154.insert(InstrumentPartyRole_154.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_154);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325;
      FIX::InstrumentPartySubID InstrumentPartySubID_325("STRING_484365935");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_325);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325.insert(InstrumentPartySubID_325.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_325(944483785);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_325);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325.insert(InstrumentPartySubIDType_325.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_166;
    FIX::SecurityAltID SecurityAltID_166("STRING_947594346");
    noSecurityAltID_0_0.set(SecurityAltID_166);
    SecAltIDGrp_NoSecurityAltID_166.insert(SecurityAltID_166.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_166("STRING_646041354");
    noSecurityAltID_0_0.set(SecurityAltIDSource_166);
    SecAltIDGrp_NoSecurityAltID_166.insert(SecurityAltIDSource_166.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_166);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_167;
    FIX::SecurityAltID SecurityAltID_167("STRING_1521108384");
    noSecurityAltID_0_1.set(SecurityAltID_167);
    SecAltIDGrp_NoSecurityAltID_167.insert(SecurityAltID_167.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_167("STRING_1783018222");
    noSecurityAltID_0_1.set(SecurityAltIDSource_167);
    SecAltIDGrp_NoSecurityAltID_167.insert(SecurityAltIDSource_167.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_167);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_168;
    FIX::SecurityAltID SecurityAltID_168("STRING_177265566");
    noSecurityAltID_0_2.set(SecurityAltID_168);
    SecAltIDGrp_NoSecurityAltID_168.insert(SecurityAltID_168.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_168("STRING_1532858003");
    noSecurityAltID_0_2.set(SecurityAltIDSource_168);
    SecAltIDGrp_NoSecurityAltID_168.insert(SecurityAltIDSource_168.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_168);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_148;
  FIX::SecurityXML SecurityXML_149("XMLDATA_453460824");
  msg.set(SecurityXML_149);
  FIX::SecurityXMLLen SecurityXMLLen_74(1663677127);
  msg.set(SecurityXMLLen_74);
  FIX::SecurityXMLSchema SecurityXMLSchema_74("STRING_1939228992");
  msg.set(SecurityXMLSchema_74);
  SecurityXML_148.insert(SecurityXMLSchema_74.getString());
  all_values.push_back(SecurityXML_148);

  // LegQuotStatGrp
  // Group LegQuotStatGrp.NoLegs
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_0;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_0;
    FIX::LegOrderQty LegOrderQty_21;
    LegOrderQty_21.setString("19157237");
    noLegs_0_0.set(LegOrderQty_21);
    LegQuotStatGrp_NoLegs_0.insert(LegOrderQty_21.getString());
    FIX::LegQty LegQty_21;
    LegQty_21.setString("6341043");
    noLegs_0_0.set(LegQty_21);
    LegQuotStatGrp_NoLegs_0.insert(LegQty_21.getString());
    FIX::LegSettlDate LegSettlDate_21("LOCALMKTDATE_1629183173");
    noLegs_0_0.set(LegSettlDate_21);
    LegQuotStatGrp_NoLegs_0.insert(LegSettlDate_21.getString());
    FIX::LegSettlType LegSettlType_21('1');
    noLegs_0_0.set(LegSettlType_21);
    LegQuotStatGrp_NoLegs_0.insert(LegSettlType_21.getString());
    FIX::LegSwapType LegSwapType_21(4);
    noLegs_0_0.set(LegSwapType_21);
    LegQuotStatGrp_NoLegs_0.insert(LegSwapType_21.getString());
    all_values.push_back(LegQuotStatGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_115;
    FIX::EncodedLegIssuer EncodedLegIssuer_115("DATA_940208492");
    noLegs_0_0.set(EncodedLegIssuer_115);
    InstrumentLeg_115.insert(EncodedLegIssuer_115.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_115(1358501391);
    noLegs_0_0.set(EncodedLegIssuerLen_115);
    InstrumentLeg_115.insert(EncodedLegIssuerLen_115.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_115("DATA_191767561");
    noLegs_0_0.set(EncodedLegSecurityDesc_115);
    InstrumentLeg_115.insert(EncodedLegSecurityDesc_115.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_115(383077906);
    noLegs_0_0.set(EncodedLegSecurityDescLen_115);
    InstrumentLeg_115.insert(EncodedLegSecurityDescLen_115.getString());
    FIX::LegCFICode LegCFICode_115("STRING_1542894413");
    noLegs_0_0.set(LegCFICode_115);
    InstrumentLeg_115.insert(LegCFICode_115.getString());
    FIX::LegContractMultiplier LegContractMultiplier_115;
    LegContractMultiplier_115.setString("15376839");
    noLegs_0_0.set(LegContractMultiplier_115);
    InstrumentLeg_115.insert(LegContractMultiplier_115.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_115(1221126171);
    noLegs_0_0.set(LegContractMultiplierUnit_115);
    InstrumentLeg_115.insert(LegContractMultiplierUnit_115.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_115("MONTHYEAR_1048908271");
    noLegs_0_0.set(LegContractSettlMonth_115);
    InstrumentLeg_115.insert(LegContractSettlMonth_115.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_115("COUNTRY_267824684");
    noLegs_0_0.set(LegCountryOfIssue_115);
    InstrumentLeg_115.insert(LegCountryOfIssue_115.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_115("LOCALMKTDATE_570183756");
    noLegs_0_0.set(LegCouponPaymentDate_115);
    InstrumentLeg_115.insert(LegCouponPaymentDate_115.getString());
    FIX::LegCouponRate LegCouponRate_115;
    LegCouponRate_115.setString("90.440000");
    noLegs_0_0.set(LegCouponRate_115);
    InstrumentLeg_115.insert(LegCouponRate_115.getString());
    FIX::LegCreditRating LegCreditRating_115("STRING_132521299");
    noLegs_0_0.set(LegCreditRating_115);
    InstrumentLeg_115.insert(LegCreditRating_115.getString());
    FIX::LegCurrency LegCurrency_115("CHF");
    noLegs_0_0.set(LegCurrency_115);
    InstrumentLeg_115.insert(LegCurrency_115.getString());
    FIX::LegDatedDate LegDatedDate_115("LOCALMKTDATE_1077005085");
    noLegs_0_0.set(LegDatedDate_115);
    InstrumentLeg_115.insert(LegDatedDate_115.getString());
    FIX::LegExerciseStyle LegExerciseStyle_115(886487269);
    noLegs_0_0.set(LegExerciseStyle_115);
    InstrumentLeg_115.insert(LegExerciseStyle_115.getString());
    FIX::LegFactor LegFactor_115;
    LegFactor_115.setString("6056756");
    noLegs_0_0.set(LegFactor_115);
    InstrumentLeg_115.insert(LegFactor_115.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_115(1723046439);
    noLegs_0_0.set(LegFlowScheduleType_115);
    InstrumentLeg_115.insert(LegFlowScheduleType_115.getString());
    FIX::LegInstrRegistry LegInstrRegistry_115("STRING_260112005");
    noLegs_0_0.set(LegInstrRegistry_115);
    InstrumentLeg_115.insert(LegInstrRegistry_115.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_115("LOCALMKTDATE_241210251");
    noLegs_0_0.set(LegInterestAccrualDate_115);
    InstrumentLeg_115.insert(LegInterestAccrualDate_115.getString());
    FIX::LegIssueDate LegIssueDate_115("LOCALMKTDATE_1900312005");
    noLegs_0_0.set(LegIssueDate_115);
    InstrumentLeg_115.insert(LegIssueDate_115.getString());
    FIX::LegIssuer LegIssuer_115("STRING_1792970008");
    noLegs_0_0.set(LegIssuer_115);
    InstrumentLeg_115.insert(LegIssuer_115.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_115("STRING_694671075");
    noLegs_0_0.set(LegLocaleOfIssue_115);
    InstrumentLeg_115.insert(LegLocaleOfIssue_115.getString());
    FIX::LegMaturityDate LegMaturityDate_115("LOCALMKTDATE_1416505484");
    noLegs_0_0.set(LegMaturityDate_115);
    InstrumentLeg_115.insert(LegMaturityDate_115.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_115("MONTHYEAR_1584715352");
    noLegs_0_0.set(LegMaturityMonthYear_115);
    InstrumentLeg_115.insert(LegMaturityMonthYear_115.getString());
    FIX::LegMaturityTime LegMaturityTime_115("TZTIMEONLY_2121690072");
    noLegs_0_0.set(LegMaturityTime_115);
    InstrumentLeg_115.insert(LegMaturityTime_115.getString());
    FIX::LegOptAttribute LegOptAttribute_115('1');
    noLegs_0_0.set(LegOptAttribute_115);
    InstrumentLeg_115.insert(LegOptAttribute_115.getString());
    FIX::LegOptionRatio LegOptionRatio_115;
    LegOptionRatio_115.setString("713360");
    noLegs_0_0.set(LegOptionRatio_115);
    InstrumentLeg_115.insert(LegOptionRatio_115.getString());
    FIX::LegPool LegPool_115("STRING_1603389597");
    noLegs_0_0.set(LegPool_115);
    InstrumentLeg_115.insert(LegPool_115.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_115("STRING_967181247");
    noLegs_0_0.set(LegPriceUnitOfMeasure_115);
    InstrumentLeg_115.insert(LegPriceUnitOfMeasure_115.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_115;
    LegPriceUnitOfMeasureQty_115.setString("20508724");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_115);
    InstrumentLeg_115.insert(LegPriceUnitOfMeasureQty_115.getString());
    FIX::LegProduct LegProduct_115(396114441);
    noLegs_0_0.set(LegProduct_115);
    InstrumentLeg_115.insert(LegProduct_115.getString());
    FIX::LegPutOrCall LegPutOrCall_115(178198991);
    noLegs_0_0.set(LegPutOrCall_115);
    InstrumentLeg_115.insert(LegPutOrCall_115.getString());
    FIX::LegRatioQty LegRatioQty_115;
    LegRatioQty_115.setString("951563");
    noLegs_0_0.set(LegRatioQty_115);
    InstrumentLeg_115.insert(LegRatioQty_115.getString());
    FIX::LegRedemptionDate LegRedemptionDate_115("LOCALMKTDATE_779192347");
    noLegs_0_0.set(LegRedemptionDate_115);
    InstrumentLeg_115.insert(LegRedemptionDate_115.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_115("STRING_1721093404");
    noLegs_0_0.set(LegRepoCollateralSecurityType_115);
    InstrumentLeg_115.insert(LegRepoCollateralSecurityType_115.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_115;
    LegRepurchaseRate_115.setString("3.420000");
    noLegs_0_0.set(LegRepurchaseRate_115);
    InstrumentLeg_115.insert(LegRepurchaseRate_115.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_115(2000318518);
    noLegs_0_0.set(LegRepurchaseTerm_115);
    InstrumentLeg_115.insert(LegRepurchaseTerm_115.getString());
    FIX::LegSecurityDesc LegSecurityDesc_115("STRING_622518027");
    noLegs_0_0.set(LegSecurityDesc_115);
    InstrumentLeg_115.insert(LegSecurityDesc_115.getString());
    FIX::LegSecurityExchange LegSecurityExchange_115("EXCHANGE_1900665027");
    noLegs_0_0.set(LegSecurityExchange_115);
    InstrumentLeg_115.insert(LegSecurityExchange_115.getString());
    FIX::LegSecurityID LegSecurityID_115("STRING_423018626");
    noLegs_0_0.set(LegSecurityID_115);
    InstrumentLeg_115.insert(LegSecurityID_115.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_115("STRING_1943717072");
    noLegs_0_0.set(LegSecurityIDSource_115);
    InstrumentLeg_115.insert(LegSecurityIDSource_115.getString());
    FIX::LegSecuritySubType LegSecuritySubType_115("STRING_2033186326");
    noLegs_0_0.set(LegSecuritySubType_115);
    InstrumentLeg_115.insert(LegSecuritySubType_115.getString());
    FIX::LegSecurityType LegSecurityType_115("STRING_1572660915");
    noLegs_0_0.set(LegSecurityType_115);
    InstrumentLeg_115.insert(LegSecurityType_115.getString());
    FIX::LegSide LegSide_115('1');
    noLegs_0_0.set(LegSide_115);
    InstrumentLeg_115.insert(LegSide_115.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_115("STRING_962707763");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_115);
    InstrumentLeg_115.insert(LegStateOrProvinceOfIssue_115.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_115("CHF");
    noLegs_0_0.set(LegStrikeCurrency_115);
    InstrumentLeg_115.insert(LegStrikeCurrency_115.getString());
    FIX::LegStrikePrice LegStrikePrice_115;
    LegStrikePrice_115.setString("5382705");
    noLegs_0_0.set(LegStrikePrice_115);
    InstrumentLeg_115.insert(LegStrikePrice_115.getString());
    FIX::LegSymbol LegSymbol_115("STRING_571776541");
    noLegs_0_0.set(LegSymbol_115);
    InstrumentLeg_115.insert(LegSymbol_115.getString());
    FIX::LegSymbolSfx LegSymbolSfx_115("STRING_301200684");
    noLegs_0_0.set(LegSymbolSfx_115);
    InstrumentLeg_115.insert(LegSymbolSfx_115.getString());
    FIX::LegTimeUnit LegTimeUnit_115("STRING_291098911");
    noLegs_0_0.set(LegTimeUnit_115);
    InstrumentLeg_115.insert(LegTimeUnit_115.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_115("STRING_217262901");
    noLegs_0_0.set(LegUnitOfMeasure_115);
    InstrumentLeg_115.insert(LegUnitOfMeasure_115.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_115;
    LegUnitOfMeasureQty_115.setString("9958717");
    noLegs_0_0.set(LegUnitOfMeasureQty_115);
    InstrumentLeg_115.insert(LegUnitOfMeasureQty_115.getString());
    all_values.push_back(InstrumentLeg_115);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_223;
      FIX::LegSecurityAltID LegSecurityAltID_223("STRING_1801978254");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_223);
      LegSecAltIDGrp_NoLegSecurityAltID_223.insert(LegSecurityAltID_223.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_223("STRING_970078184");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_223);
      LegSecAltIDGrp_NoLegSecurityAltID_223.insert(LegSecurityAltIDSource_223.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_223);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_224;
      FIX::LegSecurityAltID LegSecurityAltID_224("STRING_744866349");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_224);
      LegSecAltIDGrp_NoLegSecurityAltID_224.insert(LegSecurityAltID_224.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_224("STRING_1873314289");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_224);
      LegSecAltIDGrp_NoLegSecurityAltID_224.insert(LegSecurityAltIDSource_224.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_224);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_46;
      FIX::LegStipulationType LegStipulationType_46("STRING_1712047596");
      noLegStipulations_0_1_0.set(LegStipulationType_46);
      LegStipulations_NoLegStipulations_46.insert(LegStipulationType_46.getString());
      FIX::LegStipulationValue LegStipulationValue_46("STRING_1776703091");
      noLegStipulations_0_1_0.set(LegStipulationValue_46);
      LegStipulations_NoLegStipulations_46.insert(LegStipulationValue_46.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_46);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_115;
      FIX::NestedPartyID NestedPartyID_115("STRING_1890246587");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_115);
      NestedParties_NoNestedPartyIDs_115.insert(NestedPartyID_115.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_115('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_115);
      NestedParties_NoNestedPartyIDs_115.insert(NestedPartyIDSource_115.getString());
      FIX::NestedPartyRole NestedPartyRole_115(1601290921);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_115);
      NestedParties_NoNestedPartyIDs_115.insert(NestedPartyRole_115.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_115);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_223;
        FIX::NestedPartySubID NestedPartySubID_223("STRING_1357216148");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_223);
        NstdPtysSubGrp_NoNestedPartySubIDs_223.insert(NestedPartySubID_223.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_223(1454125791);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_223);
        NstdPtysSubGrp_NoNestedPartySubIDs_223.insert(NestedPartySubIDType_223.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_223);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_224;
        FIX::NestedPartySubID NestedPartySubID_224("STRING_2086374371");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_224);
        NstdPtysSubGrp_NoNestedPartySubIDs_224.insert(NestedPartySubID_224.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_224(1110397527);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_224);
        NstdPtysSubGrp_NoNestedPartySubIDs_224.insert(NestedPartySubIDType_224.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_224);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_1;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_1;
    FIX::LegOrderQty LegOrderQty_22;
    LegOrderQty_22.setString("18771444");
    noLegs_0_1.set(LegOrderQty_22);
    LegQuotStatGrp_NoLegs_1.insert(LegOrderQty_22.getString());
    FIX::LegQty LegQty_22;
    LegQty_22.setString("18826077");
    noLegs_0_1.set(LegQty_22);
    LegQuotStatGrp_NoLegs_1.insert(LegQty_22.getString());
    FIX::LegSettlDate LegSettlDate_22("LOCALMKTDATE_996100205");
    noLegs_0_1.set(LegSettlDate_22);
    LegQuotStatGrp_NoLegs_1.insert(LegSettlDate_22.getString());
    FIX::LegSettlType LegSettlType_22('1');
    noLegs_0_1.set(LegSettlType_22);
    LegQuotStatGrp_NoLegs_1.insert(LegSettlType_22.getString());
    FIX::LegSwapType LegSwapType_22(4);
    noLegs_0_1.set(LegSwapType_22);
    LegQuotStatGrp_NoLegs_1.insert(LegSwapType_22.getString());
    all_values.push_back(LegQuotStatGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_116;
    FIX::EncodedLegIssuer EncodedLegIssuer_116("DATA_1958807969");
    noLegs_0_1.set(EncodedLegIssuer_116);
    InstrumentLeg_116.insert(EncodedLegIssuer_116.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_116(1613986220);
    noLegs_0_1.set(EncodedLegIssuerLen_116);
    InstrumentLeg_116.insert(EncodedLegIssuerLen_116.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_116("DATA_1396912983");
    noLegs_0_1.set(EncodedLegSecurityDesc_116);
    InstrumentLeg_116.insert(EncodedLegSecurityDesc_116.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_116(349594875);
    noLegs_0_1.set(EncodedLegSecurityDescLen_116);
    InstrumentLeg_116.insert(EncodedLegSecurityDescLen_116.getString());
    FIX::LegCFICode LegCFICode_116("STRING_38279113");
    noLegs_0_1.set(LegCFICode_116);
    InstrumentLeg_116.insert(LegCFICode_116.getString());
    FIX::LegContractMultiplier LegContractMultiplier_116;
    LegContractMultiplier_116.setString("16981136");
    noLegs_0_1.set(LegContractMultiplier_116);
    InstrumentLeg_116.insert(LegContractMultiplier_116.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_116(640693787);
    noLegs_0_1.set(LegContractMultiplierUnit_116);
    InstrumentLeg_116.insert(LegContractMultiplierUnit_116.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_116("MONTHYEAR_255542015");
    noLegs_0_1.set(LegContractSettlMonth_116);
    InstrumentLeg_116.insert(LegContractSettlMonth_116.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_116("COUNTRY_546501780");
    noLegs_0_1.set(LegCountryOfIssue_116);
    InstrumentLeg_116.insert(LegCountryOfIssue_116.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_116("LOCALMKTDATE_200814535");
    noLegs_0_1.set(LegCouponPaymentDate_116);
    InstrumentLeg_116.insert(LegCouponPaymentDate_116.getString());
    FIX::LegCouponRate LegCouponRate_116;
    LegCouponRate_116.setString("2.690000");
    noLegs_0_1.set(LegCouponRate_116);
    InstrumentLeg_116.insert(LegCouponRate_116.getString());
    FIX::LegCreditRating LegCreditRating_116("STRING_1516579964");
    noLegs_0_1.set(LegCreditRating_116);
    InstrumentLeg_116.insert(LegCreditRating_116.getString());
    FIX::LegCurrency LegCurrency_116("JPY");
    noLegs_0_1.set(LegCurrency_116);
    InstrumentLeg_116.insert(LegCurrency_116.getString());
    FIX::LegDatedDate LegDatedDate_116("LOCALMKTDATE_1942564097");
    noLegs_0_1.set(LegDatedDate_116);
    InstrumentLeg_116.insert(LegDatedDate_116.getString());
    FIX::LegExerciseStyle LegExerciseStyle_116(510244832);
    noLegs_0_1.set(LegExerciseStyle_116);
    InstrumentLeg_116.insert(LegExerciseStyle_116.getString());
    FIX::LegFactor LegFactor_116;
    LegFactor_116.setString("14125703");
    noLegs_0_1.set(LegFactor_116);
    InstrumentLeg_116.insert(LegFactor_116.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_116(617179023);
    noLegs_0_1.set(LegFlowScheduleType_116);
    InstrumentLeg_116.insert(LegFlowScheduleType_116.getString());
    FIX::LegInstrRegistry LegInstrRegistry_116("STRING_253007772");
    noLegs_0_1.set(LegInstrRegistry_116);
    InstrumentLeg_116.insert(LegInstrRegistry_116.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_116("LOCALMKTDATE_1136946159");
    noLegs_0_1.set(LegInterestAccrualDate_116);
    InstrumentLeg_116.insert(LegInterestAccrualDate_116.getString());
    FIX::LegIssueDate LegIssueDate_116("LOCALMKTDATE_70986296");
    noLegs_0_1.set(LegIssueDate_116);
    InstrumentLeg_116.insert(LegIssueDate_116.getString());
    FIX::LegIssuer LegIssuer_116("STRING_1716864115");
    noLegs_0_1.set(LegIssuer_116);
    InstrumentLeg_116.insert(LegIssuer_116.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_116("STRING_346678659");
    noLegs_0_1.set(LegLocaleOfIssue_116);
    InstrumentLeg_116.insert(LegLocaleOfIssue_116.getString());
    FIX::LegMaturityDate LegMaturityDate_116("LOCALMKTDATE_1525112087");
    noLegs_0_1.set(LegMaturityDate_116);
    InstrumentLeg_116.insert(LegMaturityDate_116.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_116("MONTHYEAR_1655754838");
    noLegs_0_1.set(LegMaturityMonthYear_116);
    InstrumentLeg_116.insert(LegMaturityMonthYear_116.getString());
    FIX::LegMaturityTime LegMaturityTime_116("TZTIMEONLY_1457076186");
    noLegs_0_1.set(LegMaturityTime_116);
    InstrumentLeg_116.insert(LegMaturityTime_116.getString());
    FIX::LegOptAttribute LegOptAttribute_116('1');
    noLegs_0_1.set(LegOptAttribute_116);
    InstrumentLeg_116.insert(LegOptAttribute_116.getString());
    FIX::LegOptionRatio LegOptionRatio_116;
    LegOptionRatio_116.setString("13908789");
    noLegs_0_1.set(LegOptionRatio_116);
    InstrumentLeg_116.insert(LegOptionRatio_116.getString());
    FIX::LegPool LegPool_116("STRING_305692743");
    noLegs_0_1.set(LegPool_116);
    InstrumentLeg_116.insert(LegPool_116.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_116("STRING_409610893");
    noLegs_0_1.set(LegPriceUnitOfMeasure_116);
    InstrumentLeg_116.insert(LegPriceUnitOfMeasure_116.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_116;
    LegPriceUnitOfMeasureQty_116.setString("5803178");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_116);
    InstrumentLeg_116.insert(LegPriceUnitOfMeasureQty_116.getString());
    FIX::LegProduct LegProduct_116(117017064);
    noLegs_0_1.set(LegProduct_116);
    InstrumentLeg_116.insert(LegProduct_116.getString());
    FIX::LegPutOrCall LegPutOrCall_116(2023597113);
    noLegs_0_1.set(LegPutOrCall_116);
    InstrumentLeg_116.insert(LegPutOrCall_116.getString());
    FIX::LegRatioQty LegRatioQty_116;
    LegRatioQty_116.setString("19772308");
    noLegs_0_1.set(LegRatioQty_116);
    InstrumentLeg_116.insert(LegRatioQty_116.getString());
    FIX::LegRedemptionDate LegRedemptionDate_116("LOCALMKTDATE_466611940");
    noLegs_0_1.set(LegRedemptionDate_116);
    InstrumentLeg_116.insert(LegRedemptionDate_116.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_116("STRING_2061876227");
    noLegs_0_1.set(LegRepoCollateralSecurityType_116);
    InstrumentLeg_116.insert(LegRepoCollateralSecurityType_116.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_116;
    LegRepurchaseRate_116.setString("8.910000");
    noLegs_0_1.set(LegRepurchaseRate_116);
    InstrumentLeg_116.insert(LegRepurchaseRate_116.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_116(1107305727);
    noLegs_0_1.set(LegRepurchaseTerm_116);
    InstrumentLeg_116.insert(LegRepurchaseTerm_116.getString());
    FIX::LegSecurityDesc LegSecurityDesc_116("STRING_169934594");
    noLegs_0_1.set(LegSecurityDesc_116);
    InstrumentLeg_116.insert(LegSecurityDesc_116.getString());
    FIX::LegSecurityExchange LegSecurityExchange_116("EXCHANGE_2074362671");
    noLegs_0_1.set(LegSecurityExchange_116);
    InstrumentLeg_116.insert(LegSecurityExchange_116.getString());
    FIX::LegSecurityID LegSecurityID_116("STRING_1308120262");
    noLegs_0_1.set(LegSecurityID_116);
    InstrumentLeg_116.insert(LegSecurityID_116.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_116("STRING_79971215");
    noLegs_0_1.set(LegSecurityIDSource_116);
    InstrumentLeg_116.insert(LegSecurityIDSource_116.getString());
    FIX::LegSecuritySubType LegSecuritySubType_116("STRING_1443458987");
    noLegs_0_1.set(LegSecuritySubType_116);
    InstrumentLeg_116.insert(LegSecuritySubType_116.getString());
    FIX::LegSecurityType LegSecurityType_116("STRING_106317498");
    noLegs_0_1.set(LegSecurityType_116);
    InstrumentLeg_116.insert(LegSecurityType_116.getString());
    FIX::LegSide LegSide_116('1');
    noLegs_0_1.set(LegSide_116);
    InstrumentLeg_116.insert(LegSide_116.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_116("STRING_1238539436");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_116);
    InstrumentLeg_116.insert(LegStateOrProvinceOfIssue_116.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_116("CHF");
    noLegs_0_1.set(LegStrikeCurrency_116);
    InstrumentLeg_116.insert(LegStrikeCurrency_116.getString());
    FIX::LegStrikePrice LegStrikePrice_116;
    LegStrikePrice_116.setString("18557184");
    noLegs_0_1.set(LegStrikePrice_116);
    InstrumentLeg_116.insert(LegStrikePrice_116.getString());
    FIX::LegSymbol LegSymbol_116("STRING_869570102");
    noLegs_0_1.set(LegSymbol_116);
    InstrumentLeg_116.insert(LegSymbol_116.getString());
    FIX::LegSymbolSfx LegSymbolSfx_116("STRING_117871342");
    noLegs_0_1.set(LegSymbolSfx_116);
    InstrumentLeg_116.insert(LegSymbolSfx_116.getString());
    FIX::LegTimeUnit LegTimeUnit_116("STRING_1926704755");
    noLegs_0_1.set(LegTimeUnit_116);
    InstrumentLeg_116.insert(LegTimeUnit_116.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_116("STRING_438950570");
    noLegs_0_1.set(LegUnitOfMeasure_116);
    InstrumentLeg_116.insert(LegUnitOfMeasure_116.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_116;
    LegUnitOfMeasureQty_116.setString("4645500");
    noLegs_0_1.set(LegUnitOfMeasureQty_116);
    InstrumentLeg_116.insert(LegUnitOfMeasureQty_116.getString());
    all_values.push_back(InstrumentLeg_116);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_225;
      FIX::LegSecurityAltID LegSecurityAltID_225("STRING_2094705408");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_225);
      LegSecAltIDGrp_NoLegSecurityAltID_225.insert(LegSecurityAltID_225.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_225("STRING_1921626187");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_225);
      LegSecAltIDGrp_NoLegSecurityAltID_225.insert(LegSecurityAltIDSource_225.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_225);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_226;
      FIX::LegSecurityAltID LegSecurityAltID_226("STRING_411622403");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_226);
      LegSecAltIDGrp_NoLegSecurityAltID_226.insert(LegSecurityAltID_226.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_226("STRING_1338100746");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_226);
      LegSecAltIDGrp_NoLegSecurityAltID_226.insert(LegSecurityAltIDSource_226.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_226);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_47;
      FIX::LegStipulationType LegStipulationType_47("STRING_821233296");
      noLegStipulations_1_1_0.set(LegStipulationType_47);
      LegStipulations_NoLegStipulations_47.insert(LegStipulationType_47.getString());
      FIX::LegStipulationValue LegStipulationValue_47("STRING_1918418634");
      noLegStipulations_1_1_0.set(LegStipulationValue_47);
      LegStipulations_NoLegStipulations_47.insert(LegStipulationValue_47.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_47);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_48;
      FIX::LegStipulationType LegStipulationType_48("STRING_196852347");
      noLegStipulations_1_1_1.set(LegStipulationType_48);
      LegStipulations_NoLegStipulations_48.insert(LegStipulationType_48.getString());
      FIX::LegStipulationValue LegStipulationValue_48("STRING_697346761");
      noLegStipulations_1_1_1.set(LegStipulationValue_48);
      LegStipulations_NoLegStipulations_48.insert(LegStipulationValue_48.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_48);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_49;
      FIX::LegStipulationType LegStipulationType_49("STRING_1748165857");
      noLegStipulations_1_1_2.set(LegStipulationType_49);
      LegStipulations_NoLegStipulations_49.insert(LegStipulationType_49.getString());
      FIX::LegStipulationValue LegStipulationValue_49("STRING_663464287");
      noLegStipulations_1_1_2.set(LegStipulationValue_49);
      LegStipulations_NoLegStipulations_49.insert(LegStipulationValue_49.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_49);

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_116;
      FIX::NestedPartyID NestedPartyID_116("STRING_1128543101");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_116);
      NestedParties_NoNestedPartyIDs_116.insert(NestedPartyID_116.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_116('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_116);
      NestedParties_NoNestedPartyIDs_116.insert(NestedPartyIDSource_116.getString());
      FIX::NestedPartyRole NestedPartyRole_116(781673934);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_116);
      NestedParties_NoNestedPartyIDs_116.insert(NestedPartyRole_116.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_116);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_225;
        FIX::NestedPartySubID NestedPartySubID_225("STRING_931406628");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_225);
        NstdPtysSubGrp_NoNestedPartySubIDs_225.insert(NestedPartySubID_225.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_225(861645149);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_225);
        NstdPtysSubGrp_NoNestedPartySubIDs_225.insert(NestedPartySubIDType_225.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_225);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_226;
        FIX::NestedPartySubID NestedPartySubID_226("STRING_351397464");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_226);
        NstdPtysSubGrp_NoNestedPartySubIDs_226.insert(NestedPartySubID_226.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_226(1037724126);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_226);
        NstdPtysSubGrp_NoNestedPartySubIDs_226.insert(NestedPartySubIDType_226.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_226);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_227;
        FIX::NestedPartySubID NestedPartySubID_227("STRING_577483627");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_227);
        NstdPtysSubGrp_NoNestedPartySubIDs_227.insert(NestedPartySubID_227.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_227(1589936900);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_227);
        NstdPtysSubGrp_NoNestedPartySubIDs_227.insert(NestedPartySubIDType_227.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_227);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_117;
      FIX::NestedPartyID NestedPartyID_117("STRING_1654286456");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_117);
      NestedParties_NoNestedPartyIDs_117.insert(NestedPartyID_117.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_117('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_117);
      NestedParties_NoNestedPartyIDs_117.insert(NestedPartyIDSource_117.getString());
      FIX::NestedPartyRole NestedPartyRole_117(1298171712);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_117);
      NestedParties_NoNestedPartyIDs_117.insert(NestedPartyRole_117.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_117);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_228;
        FIX::NestedPartySubID NestedPartySubID_228("STRING_1823763800");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_228);
        NstdPtysSubGrp_NoNestedPartySubIDs_228.insert(NestedPartySubID_228.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_228(1077392819);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_228);
        NstdPtysSubGrp_NoNestedPartySubIDs_228.insert(NestedPartySubIDType_228.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_228);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_2;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_2;
    FIX::LegOrderQty LegOrderQty_23;
    LegOrderQty_23.setString("8153234");
    noLegs_0_2.set(LegOrderQty_23);
    LegQuotStatGrp_NoLegs_2.insert(LegOrderQty_23.getString());
    FIX::LegQty LegQty_23;
    LegQty_23.setString("1408301");
    noLegs_0_2.set(LegQty_23);
    LegQuotStatGrp_NoLegs_2.insert(LegQty_23.getString());
    FIX::LegSettlDate LegSettlDate_23("LOCALMKTDATE_234242366");
    noLegs_0_2.set(LegSettlDate_23);
    LegQuotStatGrp_NoLegs_2.insert(LegSettlDate_23.getString());
    FIX::LegSettlType LegSettlType_23('7');
    noLegs_0_2.set(LegSettlType_23);
    LegQuotStatGrp_NoLegs_2.insert(LegSettlType_23.getString());
    FIX::LegSwapType LegSwapType_23(1);
    noLegs_0_2.set(LegSwapType_23);
    LegQuotStatGrp_NoLegs_2.insert(LegSwapType_23.getString());
    all_values.push_back(LegQuotStatGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_117;
    FIX::EncodedLegIssuer EncodedLegIssuer_117("DATA_645864769");
    noLegs_0_2.set(EncodedLegIssuer_117);
    InstrumentLeg_117.insert(EncodedLegIssuer_117.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_117(2100645987);
    noLegs_0_2.set(EncodedLegIssuerLen_117);
    InstrumentLeg_117.insert(EncodedLegIssuerLen_117.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_117("DATA_2142291622");
    noLegs_0_2.set(EncodedLegSecurityDesc_117);
    InstrumentLeg_117.insert(EncodedLegSecurityDesc_117.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_117(1467098065);
    noLegs_0_2.set(EncodedLegSecurityDescLen_117);
    InstrumentLeg_117.insert(EncodedLegSecurityDescLen_117.getString());
    FIX::LegCFICode LegCFICode_117("STRING_1871580973");
    noLegs_0_2.set(LegCFICode_117);
    InstrumentLeg_117.insert(LegCFICode_117.getString());
    FIX::LegContractMultiplier LegContractMultiplier_117;
    LegContractMultiplier_117.setString("1916603");
    noLegs_0_2.set(LegContractMultiplier_117);
    InstrumentLeg_117.insert(LegContractMultiplier_117.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_117(16961178);
    noLegs_0_2.set(LegContractMultiplierUnit_117);
    InstrumentLeg_117.insert(LegContractMultiplierUnit_117.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_117("MONTHYEAR_1472263183");
    noLegs_0_2.set(LegContractSettlMonth_117);
    InstrumentLeg_117.insert(LegContractSettlMonth_117.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_117("COUNTRY_855124608");
    noLegs_0_2.set(LegCountryOfIssue_117);
    InstrumentLeg_117.insert(LegCountryOfIssue_117.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_117("LOCALMKTDATE_628700519");
    noLegs_0_2.set(LegCouponPaymentDate_117);
    InstrumentLeg_117.insert(LegCouponPaymentDate_117.getString());
    FIX::LegCouponRate LegCouponRate_117;
    LegCouponRate_117.setString("26.360000");
    noLegs_0_2.set(LegCouponRate_117);
    InstrumentLeg_117.insert(LegCouponRate_117.getString());
    FIX::LegCreditRating LegCreditRating_117("STRING_478410974");
    noLegs_0_2.set(LegCreditRating_117);
    InstrumentLeg_117.insert(LegCreditRating_117.getString());
    FIX::LegCurrency LegCurrency_117("USD");
    noLegs_0_2.set(LegCurrency_117);
    InstrumentLeg_117.insert(LegCurrency_117.getString());
    FIX::LegDatedDate LegDatedDate_117("LOCALMKTDATE_1409817602");
    noLegs_0_2.set(LegDatedDate_117);
    InstrumentLeg_117.insert(LegDatedDate_117.getString());
    FIX::LegExerciseStyle LegExerciseStyle_117(124535955);
    noLegs_0_2.set(LegExerciseStyle_117);
    InstrumentLeg_117.insert(LegExerciseStyle_117.getString());
    FIX::LegFactor LegFactor_117;
    LegFactor_117.setString("18601422");
    noLegs_0_2.set(LegFactor_117);
    InstrumentLeg_117.insert(LegFactor_117.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_117(300058080);
    noLegs_0_2.set(LegFlowScheduleType_117);
    InstrumentLeg_117.insert(LegFlowScheduleType_117.getString());
    FIX::LegInstrRegistry LegInstrRegistry_117("STRING_702019582");
    noLegs_0_2.set(LegInstrRegistry_117);
    InstrumentLeg_117.insert(LegInstrRegistry_117.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_117("LOCALMKTDATE_1302595477");
    noLegs_0_2.set(LegInterestAccrualDate_117);
    InstrumentLeg_117.insert(LegInterestAccrualDate_117.getString());
    FIX::LegIssueDate LegIssueDate_117("LOCALMKTDATE_1954344537");
    noLegs_0_2.set(LegIssueDate_117);
    InstrumentLeg_117.insert(LegIssueDate_117.getString());
    FIX::LegIssuer LegIssuer_117("STRING_260428392");
    noLegs_0_2.set(LegIssuer_117);
    InstrumentLeg_117.insert(LegIssuer_117.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_117("STRING_453283541");
    noLegs_0_2.set(LegLocaleOfIssue_117);
    InstrumentLeg_117.insert(LegLocaleOfIssue_117.getString());
    FIX::LegMaturityDate LegMaturityDate_117("LOCALMKTDATE_183233800");
    noLegs_0_2.set(LegMaturityDate_117);
    InstrumentLeg_117.insert(LegMaturityDate_117.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_117("MONTHYEAR_2084192192");
    noLegs_0_2.set(LegMaturityMonthYear_117);
    InstrumentLeg_117.insert(LegMaturityMonthYear_117.getString());
    FIX::LegMaturityTime LegMaturityTime_117("TZTIMEONLY_1530676360");
    noLegs_0_2.set(LegMaturityTime_117);
    InstrumentLeg_117.insert(LegMaturityTime_117.getString());
    FIX::LegOptAttribute LegOptAttribute_117('9');
    noLegs_0_2.set(LegOptAttribute_117);
    InstrumentLeg_117.insert(LegOptAttribute_117.getString());
    FIX::LegOptionRatio LegOptionRatio_117;
    LegOptionRatio_117.setString("775386");
    noLegs_0_2.set(LegOptionRatio_117);
    InstrumentLeg_117.insert(LegOptionRatio_117.getString());
    FIX::LegPool LegPool_117("STRING_1764918726");
    noLegs_0_2.set(LegPool_117);
    InstrumentLeg_117.insert(LegPool_117.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_117("STRING_1761102522");
    noLegs_0_2.set(LegPriceUnitOfMeasure_117);
    InstrumentLeg_117.insert(LegPriceUnitOfMeasure_117.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_117;
    LegPriceUnitOfMeasureQty_117.setString("21399950");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_117);
    InstrumentLeg_117.insert(LegPriceUnitOfMeasureQty_117.getString());
    FIX::LegProduct LegProduct_117(263299847);
    noLegs_0_2.set(LegProduct_117);
    InstrumentLeg_117.insert(LegProduct_117.getString());
    FIX::LegPutOrCall LegPutOrCall_117(1714264862);
    noLegs_0_2.set(LegPutOrCall_117);
    InstrumentLeg_117.insert(LegPutOrCall_117.getString());
    FIX::LegRatioQty LegRatioQty_117;
    LegRatioQty_117.setString("21348030");
    noLegs_0_2.set(LegRatioQty_117);
    InstrumentLeg_117.insert(LegRatioQty_117.getString());
    FIX::LegRedemptionDate LegRedemptionDate_117("LOCALMKTDATE_1730397912");
    noLegs_0_2.set(LegRedemptionDate_117);
    InstrumentLeg_117.insert(LegRedemptionDate_117.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_117("STRING_1438362187");
    noLegs_0_2.set(LegRepoCollateralSecurityType_117);
    InstrumentLeg_117.insert(LegRepoCollateralSecurityType_117.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_117;
    LegRepurchaseRate_117.setString("96.850000");
    noLegs_0_2.set(LegRepurchaseRate_117);
    InstrumentLeg_117.insert(LegRepurchaseRate_117.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_117(1747359091);
    noLegs_0_2.set(LegRepurchaseTerm_117);
    InstrumentLeg_117.insert(LegRepurchaseTerm_117.getString());
    FIX::LegSecurityDesc LegSecurityDesc_117("STRING_763141722");
    noLegs_0_2.set(LegSecurityDesc_117);
    InstrumentLeg_117.insert(LegSecurityDesc_117.getString());
    FIX::LegSecurityExchange LegSecurityExchange_117("EXCHANGE_1034104293");
    noLegs_0_2.set(LegSecurityExchange_117);
    InstrumentLeg_117.insert(LegSecurityExchange_117.getString());
    FIX::LegSecurityID LegSecurityID_117("STRING_228575962");
    noLegs_0_2.set(LegSecurityID_117);
    InstrumentLeg_117.insert(LegSecurityID_117.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_117("STRING_1216464358");
    noLegs_0_2.set(LegSecurityIDSource_117);
    InstrumentLeg_117.insert(LegSecurityIDSource_117.getString());
    FIX::LegSecuritySubType LegSecuritySubType_117("STRING_1512515268");
    noLegs_0_2.set(LegSecuritySubType_117);
    InstrumentLeg_117.insert(LegSecuritySubType_117.getString());
    FIX::LegSecurityType LegSecurityType_117("STRING_1638950415");
    noLegs_0_2.set(LegSecurityType_117);
    InstrumentLeg_117.insert(LegSecurityType_117.getString());
    FIX::LegSide LegSide_117('5');
    noLegs_0_2.set(LegSide_117);
    InstrumentLeg_117.insert(LegSide_117.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_117("STRING_774849222");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_117);
    InstrumentLeg_117.insert(LegStateOrProvinceOfIssue_117.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_117("EUR");
    noLegs_0_2.set(LegStrikeCurrency_117);
    InstrumentLeg_117.insert(LegStrikeCurrency_117.getString());
    FIX::LegStrikePrice LegStrikePrice_117;
    LegStrikePrice_117.setString("10749073");
    noLegs_0_2.set(LegStrikePrice_117);
    InstrumentLeg_117.insert(LegStrikePrice_117.getString());
    FIX::LegSymbol LegSymbol_117("STRING_318022304");
    noLegs_0_2.set(LegSymbol_117);
    InstrumentLeg_117.insert(LegSymbol_117.getString());
    FIX::LegSymbolSfx LegSymbolSfx_117("STRING_1592979524");
    noLegs_0_2.set(LegSymbolSfx_117);
    InstrumentLeg_117.insert(LegSymbolSfx_117.getString());
    FIX::LegTimeUnit LegTimeUnit_117("STRING_881768192");
    noLegs_0_2.set(LegTimeUnit_117);
    InstrumentLeg_117.insert(LegTimeUnit_117.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_117("STRING_578450696");
    noLegs_0_2.set(LegUnitOfMeasure_117);
    InstrumentLeg_117.insert(LegUnitOfMeasure_117.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_117;
    LegUnitOfMeasureQty_117.setString("20462630");
    noLegs_0_2.set(LegUnitOfMeasureQty_117);
    InstrumentLeg_117.insert(LegUnitOfMeasureQty_117.getString());
    all_values.push_back(InstrumentLeg_117);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_227;
      FIX::LegSecurityAltID LegSecurityAltID_227("STRING_515159240");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_227);
      LegSecAltIDGrp_NoLegSecurityAltID_227.insert(LegSecurityAltID_227.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_227("STRING_1429455778");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_227);
      LegSecAltIDGrp_NoLegSecurityAltID_227.insert(LegSecurityAltIDSource_227.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_227);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_50;
      FIX::LegStipulationType LegStipulationType_50("STRING_592697937");
      noLegStipulations_2_1_0.set(LegStipulationType_50);
      LegStipulations_NoLegStipulations_50.insert(LegStipulationType_50.getString());
      FIX::LegStipulationValue LegStipulationValue_50("STRING_1046890856");
      noLegStipulations_2_1_0.set(LegStipulationValue_50);
      LegStipulations_NoLegStipulations_50.insert(LegStipulationValue_50.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_50);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_118;
      FIX::NestedPartyID NestedPartyID_118("STRING_585209326");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_118);
      NestedParties_NoNestedPartyIDs_118.insert(NestedPartyID_118.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_118('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_118);
      NestedParties_NoNestedPartyIDs_118.insert(NestedPartyIDSource_118.getString());
      FIX::NestedPartyRole NestedPartyRole_118(1243959361);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_118);
      NestedParties_NoNestedPartyIDs_118.insert(NestedPartyRole_118.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_118);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_229;
        FIX::NestedPartySubID NestedPartySubID_229("STRING_893104968");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_229);
        NstdPtysSubGrp_NoNestedPartySubIDs_229.insert(NestedPartySubID_229.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_229(534837901);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_229);
        NstdPtysSubGrp_NoNestedPartySubIDs_229.insert(NestedPartySubIDType_229.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_229);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_230;
        FIX::NestedPartySubID NestedPartySubID_230("STRING_751508375");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_230);
        NstdPtysSubGrp_NoNestedPartySubIDs_230.insert(NestedPartySubID_230.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_230(492980411);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_230);
        NstdPtysSubGrp_NoNestedPartySubIDs_230.insert(NestedPartySubIDType_230.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_230);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_231;
        FIX::NestedPartySubID NestedPartySubID_231("STRING_1297979623");
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubID_231);
        NstdPtysSubGrp_NoNestedPartySubIDs_231.insert(NestedPartySubID_231.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_231(1785612668);
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubIDType_231);
        NstdPtysSubGrp_NoNestedPartySubIDs_231.insert(NestedPartySubIDType_231.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_231);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_119;
      FIX::NestedPartyID NestedPartyID_119("STRING_721556373");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_119);
      NestedParties_NoNestedPartyIDs_119.insert(NestedPartyID_119.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_119('3');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_119);
      NestedParties_NoNestedPartyIDs_119.insert(NestedPartyIDSource_119.getString());
      FIX::NestedPartyRole NestedPartyRole_119(1150644288);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_119);
      NestedParties_NoNestedPartyIDs_119.insert(NestedPartyRole_119.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_119);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_232;
        FIX::NestedPartySubID NestedPartySubID_232("STRING_944685805");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_232);
        NstdPtysSubGrp_NoNestedPartySubIDs_232.insert(NestedPartySubID_232.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_232(1925493511);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_232);
        NstdPtysSubGrp_NoNestedPartySubIDs_232.insert(NestedPartySubIDType_232.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_232);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_233;
        FIX::NestedPartySubID NestedPartySubID_233("STRING_1976509511");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_233);
        NstdPtysSubGrp_NoNestedPartySubIDs_233.insert(NestedPartySubID_233.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_233(1235069852);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_233);
        NstdPtysSubGrp_NoNestedPartySubIDs_233.insert(NestedPartySubIDType_233.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_233);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_234;
        FIX::NestedPartySubID NestedPartySubID_234("STRING_852917166");
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubID_234);
        NstdPtysSubGrp_NoNestedPartySubIDs_234.insert(NestedPartySubID_234.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_234(147048168);
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubIDType_234);
        NstdPtysSubGrp_NoNestedPartySubIDs_234.insert(NestedPartySubIDType_234.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_234);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_22;
  FIX::CashOrderQty CashOrderQty_22;
  CashOrderQty_22.setString("6805657");
  msg.set(CashOrderQty_22);
  OrderQtyData_22.insert(CashOrderQty_22.getString());
  FIX::OrderPercent OrderPercent_22;
  OrderPercent_22.setString("53.580000");
  msg.set(OrderPercent_22);
  OrderQtyData_22.insert(OrderPercent_22.getString());
  FIX::OrderQty OrderQty_33;
  OrderQty_33.setString("7254988");
  msg.set(OrderQty_33);
  OrderQtyData_22.insert(OrderQty_33.getString());
  FIX::RoundingDirection RoundingDirection_22('2');
  msg.set(RoundingDirection_22);
  OrderQtyData_22.insert(RoundingDirection_22.getString());
  FIX::RoundingModulus RoundingModulus_22;
  RoundingModulus_22.setString("6522037");
  msg.set(RoundingModulus_22);
  OrderQtyData_22.insert(RoundingModulus_22.getString());
  all_values.push_back(OrderQtyData_22);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_110;
    FIX::PartyID PartyID_110("STRING_2008800924");
    noPartyIDs_0_0.set(PartyID_110);
    Parties_NoPartyIDs_110.insert(PartyID_110.getString());
    FIX::PartyIDSource PartyIDSource_110('D');
    noPartyIDs_0_0.set(PartyIDSource_110);
    Parties_NoPartyIDs_110.insert(PartyIDSource_110.getString());
    FIX::PartyRole PartyRole_110(15);
    noPartyIDs_0_0.set(PartyRole_110);
    Parties_NoPartyIDs_110.insert(PartyRole_110.getString());
    all_values.push_back(Parties_NoPartyIDs_110);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_229;
      FIX::PartySubID PartySubID_229("STRING_97973826");
      noPartySubIDs_0_1_0.set(PartySubID_229);
      PtysSubGrp_NoPartySubIDs_229.insert(PartySubID_229.getString());
      FIX::PartySubIDType PartySubIDType_229(21);
      noPartySubIDs_0_1_0.set(PartySubIDType_229);
      PtysSubGrp_NoPartySubIDs_229.insert(PartySubIDType_229.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_229);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_230;
      FIX::PartySubID PartySubID_230("STRING_70915189");
      noPartySubIDs_0_1_1.set(PartySubID_230);
      PtysSubGrp_NoPartySubIDs_230.insert(PartySubID_230.getString());
      FIX::PartySubIDType PartySubIDType_230(3);
      noPartySubIDs_0_1_1.set(PartySubIDType_230);
      PtysSubGrp_NoPartySubIDs_230.insert(PartySubIDType_230.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_230);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_111;
    FIX::PartyID PartyID_111("STRING_843610411");
    noPartyIDs_0_1.set(PartyID_111);
    Parties_NoPartyIDs_111.insert(PartyID_111.getString());
    FIX::PartyIDSource PartyIDSource_111('3');
    noPartyIDs_0_1.set(PartyIDSource_111);
    Parties_NoPartyIDs_111.insert(PartyIDSource_111.getString());
    FIX::PartyRole PartyRole_111(83);
    noPartyIDs_0_1.set(PartyRole_111);
    Parties_NoPartyIDs_111.insert(PartyRole_111.getString());
    all_values.push_back(Parties_NoPartyIDs_111);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_231;
      FIX::PartySubID PartySubID_231("STRING_1457000569");
      noPartySubIDs_1_1_0.set(PartySubID_231);
      PtysSubGrp_NoPartySubIDs_231.insert(PartySubID_231.getString());
      FIX::PartySubIDType PartySubIDType_231(33);
      noPartySubIDs_1_1_0.set(PartySubIDType_231);
      PtysSubGrp_NoPartySubIDs_231.insert(PartySubIDType_231.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_231);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_112;
    FIX::PartyID PartyID_112("STRING_1233247806");
    noPartyIDs_0_2.set(PartyID_112);
    Parties_NoPartyIDs_112.insert(PartyID_112.getString());
    FIX::PartyIDSource PartyIDSource_112('8');
    noPartyIDs_0_2.set(PartyIDSource_112);
    Parties_NoPartyIDs_112.insert(PartyIDSource_112.getString());
    FIX::PartyRole PartyRole_112(19);
    noPartyIDs_0_2.set(PartyRole_112);
    Parties_NoPartyIDs_112.insert(PartyRole_112.getString());
    all_values.push_back(Parties_NoPartyIDs_112);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_232;
      FIX::PartySubID PartySubID_232("STRING_244096435");
      noPartySubIDs_2_1_0.set(PartySubID_232);
      PtysSubGrp_NoPartySubIDs_232.insert(PartySubID_232.getString());
      FIX::PartySubIDType PartySubIDType_232(21);
      noPartySubIDs_2_1_0.set(PartySubIDType_232);
      PtysSubGrp_NoPartySubIDs_232.insert(PartySubIDType_232.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_232);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_233;
      FIX::PartySubID PartySubID_233("STRING_14418310");
      noPartySubIDs_2_1_1.set(PartySubID_233);
      PtysSubGrp_NoPartySubIDs_233.insert(PartySubID_233.getString());
      FIX::PartySubIDType PartySubIDType_233(9);
      noPartySubIDs_2_1_1.set(PartySubIDType_233);
      PtysSubGrp_NoPartySubIDs_233.insert(PartySubIDType_233.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_233);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_234;
      FIX::PartySubID PartySubID_234("STRING_1426499408");
      noPartySubIDs_2_1_2.set(PartySubID_234);
      PtysSubGrp_NoPartySubIDs_234.insert(PartySubID_234.getString());
      FIX::PartySubIDType PartySubIDType_234(8);
      noPartySubIDs_2_1_2.set(PartySubIDType_234);
      PtysSubGrp_NoPartySubIDs_234.insert(PartySubIDType_234.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_234);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_13;
    FIX::QuoteQualifier QuoteQualifier_13('2');
    noQuoteQualifiers_0_0.set(QuoteQualifier_13);
    QuotQualGrp_NoQuoteQualifiers_13.insert(QuoteQualifier_13.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_13);

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_14;
    FIX::QuoteQualifier QuoteQualifier_14('4');
    noQuoteQualifiers_0_1.set(QuoteQualifier_14);
    QuotQualGrp_NoQuoteQualifiers_14.insert(QuoteQualifier_14.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_14);

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_2;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_15;
    FIX::QuoteQualifier QuoteQualifier_15('9');
    noQuoteQualifiers_0_2.set(QuoteQualifier_15);
    QuotQualGrp_NoQuoteQualifiers_15.insert(QuoteQualifier_15.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_15);

    msg.addGroup(noQuoteQualifiers_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_25;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_25("JPY");
  msg.set(BenchmarkCurveCurrency_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurveCurrency_25.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_25("STRING_LIBID");
  msg.set(BenchmarkCurveName_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurveName_25.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_25("STRING_400243912");
  msg.set(BenchmarkCurvePoint_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurvePoint_25.getString());
  FIX::BenchmarkPrice BenchmarkPrice_25;
  BenchmarkPrice_25.setString("16750202");
  msg.set(BenchmarkPrice_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkPrice_25.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_25(1872199831);
  msg.set(BenchmarkPriceType_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkPriceType_25.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_25("STRING_1308452045");
  msg.set(BenchmarkSecurityID_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkSecurityID_25.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_25("STRING_1772994041");
  msg.set(BenchmarkSecurityIDSource_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkSecurityIDSource_25.getString());
  FIX::Spread Spread_25;
  Spread_25.setString("21432815");
  msg.set(Spread_25);
  SpreadOrBenchmarkCurveData_25.insert(Spread_25.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_25);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_39;
    FIX::StipulationType StipulationType_39("STRING_INTERNALQTY");
    noStipulations_0_0.set(StipulationType_39);
    Stipulations_NoStipulations_39.insert(StipulationType_39.getString());
    FIX::StipulationValue StipulationValue_39("STRING_839408315");
    noStipulations_0_0.set(StipulationValue_39);
    Stipulations_NoStipulations_39.insert(StipulationValue_39.getString());
    all_values.push_back(Stipulations_NoStipulations_39);

    msg.addGroup(noStipulations_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_13;
    FIX::TargetPartyID TargetPartyID_13("STRING_696731022");
    noTargetPartyIDs_0_0.set(TargetPartyID_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyID_13.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_13('2');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyIDSource_13.getString());
    FIX::TargetPartyRole TargetPartyRole_13(1652904312);
    noTargetPartyIDs_0_0.set(TargetPartyRole_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyRole_13.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_13);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_14;
    FIX::TargetPartyID TargetPartyID_14("STRING_1723998087");
    noTargetPartyIDs_0_1.set(TargetPartyID_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyID_14.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_14('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyIDSource_14.getString());
    FIX::TargetPartyRole TargetPartyRole_14(1683977607);
    noTargetPartyIDs_0_1.set(TargetPartyRole_14);
    TargetParties_NoTargetPartyIDs_14.insert(TargetPartyRole_14.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_14);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_15;
    FIX::TargetPartyID TargetPartyID_15("STRING_970741837");
    noTargetPartyIDs_0_2.set(TargetPartyID_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyID_15.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_15('1');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyIDSource_15.getString());
    FIX::TargetPartyRole TargetPartyRole_15(1928074042);
    noTargetPartyIDs_0_2.set(TargetPartyRole_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyRole_15.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_15);

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_109;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_109("DATA_1771118016");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingIssuer_109.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_109(2001196341);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingIssuerLen_109.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_109("DATA_441187153");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingSecurityDesc_109.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_109(490969844);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingSecurityDescLen_109.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_109;
    UnderlyingAdjustedQuantity_109.setString("738831");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_109);
    UnderlyingInstrument_109.insert(UnderlyingAdjustedQuantity_109.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_109;
    UnderlyingAllocationPercent_109.setString("86.420000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_109);
    UnderlyingInstrument_109.insert(UnderlyingAllocationPercent_109.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_109;
    UnderlyingAttachmentPoint_109.setString("70.300000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_109);
    UnderlyingInstrument_109.insert(UnderlyingAttachmentPoint_109.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_109("STRING_1019552492");
    noUnderlyings_0_0.set(UnderlyingCFICode_109);
    UnderlyingInstrument_109.insert(UnderlyingCFICode_109.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_109("STRING_939695277");
    noUnderlyings_0_0.set(UnderlyingCPProgram_109);
    UnderlyingInstrument_109.insert(UnderlyingCPProgram_109.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_109("STRING_2052247918");
    noUnderlyings_0_0.set(UnderlyingCPRegType_109);
    UnderlyingInstrument_109.insert(UnderlyingCPRegType_109.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_109;
    UnderlyingCapValue_109.setString("10583962");
    noUnderlyings_0_0.set(UnderlyingCapValue_109);
    UnderlyingInstrument_109.insert(UnderlyingCapValue_109.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_109;
    UnderlyingCashAmount_109.setString("13399391");
    noUnderlyings_0_0.set(UnderlyingCashAmount_109);
    UnderlyingInstrument_109.insert(UnderlyingCashAmount_109.getString());
    FIX::UnderlyingCashType UnderlyingCashType_109("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_109);
    UnderlyingInstrument_109.insert(UnderlyingCashType_109.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_109;
    UnderlyingContractMultiplier_109.setString("7831124");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_109);
    UnderlyingInstrument_109.insert(UnderlyingContractMultiplier_109.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_109(500907586);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_109);
    UnderlyingInstrument_109.insert(UnderlyingContractMultiplierUnit_109.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_109("COUNTRY_1205294879");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingCountryOfIssue_109.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_109("LOCALMKTDATE_778910367");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_109);
    UnderlyingInstrument_109.insert(UnderlyingCouponPaymentDate_109.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_109;
    UnderlyingCouponRate_109.setString("48.200000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_109);
    UnderlyingInstrument_109.insert(UnderlyingCouponRate_109.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_109("STRING_25254812");
    noUnderlyings_0_0.set(UnderlyingCreditRating_109);
    UnderlyingInstrument_109.insert(UnderlyingCreditRating_109.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_109("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_109);
    UnderlyingInstrument_109.insert(UnderlyingCurrency_109.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_109;
    UnderlyingCurrentValue_109.setString("7219858");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_109);
    UnderlyingInstrument_109.insert(UnderlyingCurrentValue_109.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_109;
    UnderlyingDetachmentPoint_109.setString("21.350000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_109);
    UnderlyingInstrument_109.insert(UnderlyingDetachmentPoint_109.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_109;
    UnderlyingDirtyPrice_109.setString("15815992");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_109);
    UnderlyingInstrument_109.insert(UnderlyingDirtyPrice_109.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_109;
    UnderlyingEndPrice_109.setString("2985002");
    noUnderlyings_0_0.set(UnderlyingEndPrice_109);
    UnderlyingInstrument_109.insert(UnderlyingEndPrice_109.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_109;
    UnderlyingEndValue_109.setString("12781697");
    noUnderlyings_0_0.set(UnderlyingEndValue_109);
    UnderlyingInstrument_109.insert(UnderlyingEndValue_109.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_109(1118093187);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_109);
    UnderlyingInstrument_109.insert(UnderlyingExerciseStyle_109.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_109;
    UnderlyingFXRate_109.setString("12692421");
    noUnderlyings_0_0.set(UnderlyingFXRate_109);
    UnderlyingInstrument_109.insert(UnderlyingFXRate_109.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_109('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_109);
    UnderlyingInstrument_109.insert(UnderlyingFXRateCalc_109.getString());
    FIX::UnderlyingFactor UnderlyingFactor_109;
    UnderlyingFactor_109.setString("8986835");
    noUnderlyings_0_0.set(UnderlyingFactor_109);
    UnderlyingInstrument_109.insert(UnderlyingFactor_109.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_109(283929856);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_109);
    UnderlyingInstrument_109.insert(UnderlyingFlowScheduleType_109.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_109("STRING_511020174");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_109);
    UnderlyingInstrument_109.insert(UnderlyingInstrRegistry_109.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_109("LOCALMKTDATE_752396275");
    noUnderlyings_0_0.set(UnderlyingIssueDate_109);
    UnderlyingInstrument_109.insert(UnderlyingIssueDate_109.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_109("STRING_725117009");
    noUnderlyings_0_0.set(UnderlyingIssuer_109);
    UnderlyingInstrument_109.insert(UnderlyingIssuer_109.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_109("STRING_1001990018");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingLocaleOfIssue_109.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_109("LOCALMKTDATE_826279436");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityDate_109.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_109("MONTHYEAR_1125885651");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityMonthYear_109.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_109("TZTIMEONLY_1947497049");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityTime_109.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_109;
    UnderlyingNotionalPercentageOutstanding_109.setString("19.280000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_109);
    UnderlyingInstrument_109.insert(UnderlyingNotionalPercentageOutstanding_109.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_109('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_109);
    UnderlyingInstrument_109.insert(UnderlyingOptAttribute_109.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_109;
    UnderlyingOriginalNotionalPercentageOutstanding_109.setString("13.190000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_109);
    UnderlyingInstrument_109.insert(UnderlyingOriginalNotionalPercentageOutstanding_109.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_109("STRING_756744560");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_109);
    UnderlyingInstrument_109.insert(UnderlyingPriceUnitOfMeasure_109.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_109;
    UnderlyingPriceUnitOfMeasureQty_109.setString("12580364");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_109);
    UnderlyingInstrument_109.insert(UnderlyingPriceUnitOfMeasureQty_109.getString());
    FIX::UnderlyingProduct UnderlyingProduct_109(1284562157);
    noUnderlyings_0_0.set(UnderlyingProduct_109);
    UnderlyingInstrument_109.insert(UnderlyingProduct_109.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_109(1539857024);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_109);
    UnderlyingInstrument_109.insert(UnderlyingPutOrCall_109.getString());
    FIX::UnderlyingPx UnderlyingPx_109;
    UnderlyingPx_109.setString("17589440");
    noUnderlyings_0_0.set(UnderlyingPx_109);
    UnderlyingInstrument_109.insert(UnderlyingPx_109.getString());
    FIX::UnderlyingQty UnderlyingQty_109;
    UnderlyingQty_109.setString("3423733");
    noUnderlyings_0_0.set(UnderlyingQty_109);
    UnderlyingInstrument_109.insert(UnderlyingQty_109.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_109("LOCALMKTDATE_171283743");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_109);
    UnderlyingInstrument_109.insert(UnderlyingRedemptionDate_109.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_109("STRING_1491735229");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_109);
    UnderlyingInstrument_109.insert(UnderlyingRepoCollateralSecurityType_109.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_109;
    UnderlyingRepurchaseRate_109.setString("82.000000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_109);
    UnderlyingInstrument_109.insert(UnderlyingRepurchaseRate_109.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_109(1789602426);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_109);
    UnderlyingInstrument_109.insert(UnderlyingRepurchaseTerm_109.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_109("STRING_1420430145");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_109);
    UnderlyingInstrument_109.insert(UnderlyingRestructuringType_109.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_109("STRING_1089614035");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityDesc_109.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_109("EXCHANGE_1547480913");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityExchange_109.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_109("STRING_854545726");
    noUnderlyings_0_0.set(UnderlyingSecurityID_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityID_109.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_109("STRING_1388114309");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityIDSource_109.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_109("STRING_678167012");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_109);
    UnderlyingInstrument_109.insert(UnderlyingSecuritySubType_109.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_109("STRING_1972638913");
    noUnderlyings_0_0.set(UnderlyingSecurityType_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityType_109.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_109("STRING_509872773");
    noUnderlyings_0_0.set(UnderlyingSeniority_109);
    UnderlyingInstrument_109.insert(UnderlyingSeniority_109.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_109("STRING_1565552818");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_109);
    UnderlyingInstrument_109.insert(UnderlyingSettlMethod_109.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_109(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_109);
    UnderlyingInstrument_109.insert(UnderlyingSettlementType_109.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_109;
    UnderlyingStartValue_109.setString("7938026");
    noUnderlyings_0_0.set(UnderlyingStartValue_109);
    UnderlyingInstrument_109.insert(UnderlyingStartValue_109.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_109("STRING_2076572992");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingStateOrProvinceOfIssue_109.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_109("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_109);
    UnderlyingInstrument_109.insert(UnderlyingStrikeCurrency_109.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_109;
    UnderlyingStrikePrice_109.setString("9310793");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_109);
    UnderlyingInstrument_109.insert(UnderlyingStrikePrice_109.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_109("STRING_155030911");
    noUnderlyings_0_0.set(UnderlyingSymbol_109);
    UnderlyingInstrument_109.insert(UnderlyingSymbol_109.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_109("STRING_497321642");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_109);
    UnderlyingInstrument_109.insert(UnderlyingSymbolSfx_109.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_109("STRING_731092763");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_109);
    UnderlyingInstrument_109.insert(UnderlyingTimeUnit_109.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_109("STRING_2000862839");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_109);
    UnderlyingInstrument_109.insert(UnderlyingUnitOfMeasure_109.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_109;
    UnderlyingUnitOfMeasureQty_109.setString("4154189");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_109);
    UnderlyingInstrument_109.insert(UnderlyingUnitOfMeasureQty_109.getString());
    all_values.push_back(UnderlyingInstrument_109);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_217;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_217("STRING_610123751");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_217);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_217.insert(UnderlyingSecurityAltID_217.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_217("STRING_1673455394");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_217);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_217.insert(UnderlyingSecurityAltIDSource_217.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_204;
      FIX::UnderlyingStipType UnderlyingStipType_204("STRING_2497127");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_204);
      UnderlyingStipulations_NoUnderlyingStips_204.insert(UnderlyingStipType_204.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_204("STRING_1284915803");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_204);
      UnderlyingStipulations_NoUnderlyingStips_204.insert(UnderlyingStipValue_204.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_204);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_205;
      FIX::UnderlyingStipType UnderlyingStipType_205("STRING_2062805980");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_205);
      UnderlyingStipulations_NoUnderlyingStips_205.insert(UnderlyingStipType_205.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_205("STRING_173780871");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_205);
      UnderlyingStipulations_NoUnderlyingStips_205.insert(UnderlyingStipValue_205.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_205);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_206;
      FIX::UnderlyingStipType UnderlyingStipType_206("STRING_629167384");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_206);
      UnderlyingStipulations_NoUnderlyingStips_206.insert(UnderlyingStipType_206.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_206("STRING_282950532");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_206);
      UnderlyingStipulations_NoUnderlyingStips_206.insert(UnderlyingStipValue_206.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_206);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_221;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_221("STRING_2049597530");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyID_221.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_221('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyIDSource_221.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_221(1363380562);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_221);
      UndlyInstrumentParties_NoUndlyInstrumentParties_221.insert(UnderlyingInstrumentPartyRole_221.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_221);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_415("STRING_613195229");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_415);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubID_415.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_415(2041547575);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_415);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubIDType_415.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_416("STRING_581814873");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_416);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubID_416.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_416(1123068002);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_416);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubIDType_416.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_110;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_110("DATA_1459616745");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingIssuer_110.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_110(1305653721);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingIssuerLen_110.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_110("DATA_1916870632");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingSecurityDesc_110.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_110(1388706089);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingSecurityDescLen_110.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_110;
    UnderlyingAdjustedQuantity_110.setString("6344051");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_110);
    UnderlyingInstrument_110.insert(UnderlyingAdjustedQuantity_110.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_110;
    UnderlyingAllocationPercent_110.setString("66.230000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_110);
    UnderlyingInstrument_110.insert(UnderlyingAllocationPercent_110.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_110;
    UnderlyingAttachmentPoint_110.setString("18.030000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_110);
    UnderlyingInstrument_110.insert(UnderlyingAttachmentPoint_110.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_110("STRING_789436107");
    noUnderlyings_0_1.set(UnderlyingCFICode_110);
    UnderlyingInstrument_110.insert(UnderlyingCFICode_110.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_110("STRING_1785628265");
    noUnderlyings_0_1.set(UnderlyingCPProgram_110);
    UnderlyingInstrument_110.insert(UnderlyingCPProgram_110.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_110("STRING_903394567");
    noUnderlyings_0_1.set(UnderlyingCPRegType_110);
    UnderlyingInstrument_110.insert(UnderlyingCPRegType_110.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_110;
    UnderlyingCapValue_110.setString("6428152");
    noUnderlyings_0_1.set(UnderlyingCapValue_110);
    UnderlyingInstrument_110.insert(UnderlyingCapValue_110.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_110;
    UnderlyingCashAmount_110.setString("535635");
    noUnderlyings_0_1.set(UnderlyingCashAmount_110);
    UnderlyingInstrument_110.insert(UnderlyingCashAmount_110.getString());
    FIX::UnderlyingCashType UnderlyingCashType_110("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_110);
    UnderlyingInstrument_110.insert(UnderlyingCashType_110.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_110;
    UnderlyingContractMultiplier_110.setString("12529390");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_110);
    UnderlyingInstrument_110.insert(UnderlyingContractMultiplier_110.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_110(1727018935);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_110);
    UnderlyingInstrument_110.insert(UnderlyingContractMultiplierUnit_110.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_110("COUNTRY_912213946");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingCountryOfIssue_110.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_110("LOCALMKTDATE_1255436177");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_110);
    UnderlyingInstrument_110.insert(UnderlyingCouponPaymentDate_110.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_110;
    UnderlyingCouponRate_110.setString("10.900000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_110);
    UnderlyingInstrument_110.insert(UnderlyingCouponRate_110.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_110("STRING_827536278");
    noUnderlyings_0_1.set(UnderlyingCreditRating_110);
    UnderlyingInstrument_110.insert(UnderlyingCreditRating_110.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_110("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_110);
    UnderlyingInstrument_110.insert(UnderlyingCurrency_110.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_110;
    UnderlyingCurrentValue_110.setString("11104868");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_110);
    UnderlyingInstrument_110.insert(UnderlyingCurrentValue_110.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_110;
    UnderlyingDetachmentPoint_110.setString("66.970000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_110);
    UnderlyingInstrument_110.insert(UnderlyingDetachmentPoint_110.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_110;
    UnderlyingDirtyPrice_110.setString("13957323");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_110);
    UnderlyingInstrument_110.insert(UnderlyingDirtyPrice_110.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_110;
    UnderlyingEndPrice_110.setString("3355677");
    noUnderlyings_0_1.set(UnderlyingEndPrice_110);
    UnderlyingInstrument_110.insert(UnderlyingEndPrice_110.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_110;
    UnderlyingEndValue_110.setString("4610136");
    noUnderlyings_0_1.set(UnderlyingEndValue_110);
    UnderlyingInstrument_110.insert(UnderlyingEndValue_110.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_110(4908316);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_110);
    UnderlyingInstrument_110.insert(UnderlyingExerciseStyle_110.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_110;
    UnderlyingFXRate_110.setString("9487629");
    noUnderlyings_0_1.set(UnderlyingFXRate_110);
    UnderlyingInstrument_110.insert(UnderlyingFXRate_110.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_110('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_110);
    UnderlyingInstrument_110.insert(UnderlyingFXRateCalc_110.getString());
    FIX::UnderlyingFactor UnderlyingFactor_110;
    UnderlyingFactor_110.setString("5867231");
    noUnderlyings_0_1.set(UnderlyingFactor_110);
    UnderlyingInstrument_110.insert(UnderlyingFactor_110.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_110(2071830962);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_110);
    UnderlyingInstrument_110.insert(UnderlyingFlowScheduleType_110.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_110("STRING_1814694283");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_110);
    UnderlyingInstrument_110.insert(UnderlyingInstrRegistry_110.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_110("LOCALMKTDATE_1892376911");
    noUnderlyings_0_1.set(UnderlyingIssueDate_110);
    UnderlyingInstrument_110.insert(UnderlyingIssueDate_110.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_110("STRING_1841217946");
    noUnderlyings_0_1.set(UnderlyingIssuer_110);
    UnderlyingInstrument_110.insert(UnderlyingIssuer_110.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_110("STRING_1055916724");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingLocaleOfIssue_110.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_110("LOCALMKTDATE_379298459");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityDate_110.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_110("MONTHYEAR_982040921");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityMonthYear_110.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_110("TZTIMEONLY_1228218528");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityTime_110.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_110;
    UnderlyingNotionalPercentageOutstanding_110.setString("45.660000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_110);
    UnderlyingInstrument_110.insert(UnderlyingNotionalPercentageOutstanding_110.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_110('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_110);
    UnderlyingInstrument_110.insert(UnderlyingOptAttribute_110.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_110;
    UnderlyingOriginalNotionalPercentageOutstanding_110.setString("30.950000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_110);
    UnderlyingInstrument_110.insert(UnderlyingOriginalNotionalPercentageOutstanding_110.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_110("STRING_1811549864");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_110);
    UnderlyingInstrument_110.insert(UnderlyingPriceUnitOfMeasure_110.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_110;
    UnderlyingPriceUnitOfMeasureQty_110.setString("6737490");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_110);
    UnderlyingInstrument_110.insert(UnderlyingPriceUnitOfMeasureQty_110.getString());
    FIX::UnderlyingProduct UnderlyingProduct_110(1323394449);
    noUnderlyings_0_1.set(UnderlyingProduct_110);
    UnderlyingInstrument_110.insert(UnderlyingProduct_110.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_110(917005265);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_110);
    UnderlyingInstrument_110.insert(UnderlyingPutOrCall_110.getString());
    FIX::UnderlyingPx UnderlyingPx_110;
    UnderlyingPx_110.setString("2532843");
    noUnderlyings_0_1.set(UnderlyingPx_110);
    UnderlyingInstrument_110.insert(UnderlyingPx_110.getString());
    FIX::UnderlyingQty UnderlyingQty_110;
    UnderlyingQty_110.setString("881247");
    noUnderlyings_0_1.set(UnderlyingQty_110);
    UnderlyingInstrument_110.insert(UnderlyingQty_110.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_110("LOCALMKTDATE_24957794");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_110);
    UnderlyingInstrument_110.insert(UnderlyingRedemptionDate_110.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_110("STRING_1117735457");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_110);
    UnderlyingInstrument_110.insert(UnderlyingRepoCollateralSecurityType_110.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_110;
    UnderlyingRepurchaseRate_110.setString("10.250000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_110);
    UnderlyingInstrument_110.insert(UnderlyingRepurchaseRate_110.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_110(1454174842);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_110);
    UnderlyingInstrument_110.insert(UnderlyingRepurchaseTerm_110.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_110("STRING_463870283");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_110);
    UnderlyingInstrument_110.insert(UnderlyingRestructuringType_110.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_110("STRING_2026147835");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityDesc_110.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_110("EXCHANGE_551807891");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityExchange_110.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_110("STRING_1859602640");
    noUnderlyings_0_1.set(UnderlyingSecurityID_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityID_110.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_110("STRING_214231918");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityIDSource_110.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_110("STRING_1012821503");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_110);
    UnderlyingInstrument_110.insert(UnderlyingSecuritySubType_110.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_110("STRING_1864510956");
    noUnderlyings_0_1.set(UnderlyingSecurityType_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityType_110.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_110("STRING_1162994878");
    noUnderlyings_0_1.set(UnderlyingSeniority_110);
    UnderlyingInstrument_110.insert(UnderlyingSeniority_110.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_110("STRING_1367899041");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_110);
    UnderlyingInstrument_110.insert(UnderlyingSettlMethod_110.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_110(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_110);
    UnderlyingInstrument_110.insert(UnderlyingSettlementType_110.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_110;
    UnderlyingStartValue_110.setString("10873421");
    noUnderlyings_0_1.set(UnderlyingStartValue_110);
    UnderlyingInstrument_110.insert(UnderlyingStartValue_110.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_110("STRING_1035109677");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingStateOrProvinceOfIssue_110.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_110("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_110);
    UnderlyingInstrument_110.insert(UnderlyingStrikeCurrency_110.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_110;
    UnderlyingStrikePrice_110.setString("20910264");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_110);
    UnderlyingInstrument_110.insert(UnderlyingStrikePrice_110.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_110("STRING_427942220");
    noUnderlyings_0_1.set(UnderlyingSymbol_110);
    UnderlyingInstrument_110.insert(UnderlyingSymbol_110.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_110("STRING_1763117412");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_110);
    UnderlyingInstrument_110.insert(UnderlyingSymbolSfx_110.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_110("STRING_1171761281");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_110);
    UnderlyingInstrument_110.insert(UnderlyingTimeUnit_110.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_110("STRING_1596676786");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_110);
    UnderlyingInstrument_110.insert(UnderlyingUnitOfMeasure_110.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_110;
    UnderlyingUnitOfMeasureQty_110.setString("2358193");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_110);
    UnderlyingInstrument_110.insert(UnderlyingUnitOfMeasureQty_110.getString());
    all_values.push_back(UnderlyingInstrument_110);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_218;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_218("STRING_1260743002");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_218);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_218.insert(UnderlyingSecurityAltID_218.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_218("STRING_909568383");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_218);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_218.insert(UnderlyingSecurityAltIDSource_218.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_219;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_219("STRING_331801529");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_219);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_219.insert(UnderlyingSecurityAltID_219.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_219("STRING_30264620");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_219);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_219.insert(UnderlyingSecurityAltIDSource_219.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_207;
      FIX::UnderlyingStipType UnderlyingStipType_207("STRING_419926276");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_207);
      UnderlyingStipulations_NoUnderlyingStips_207.insert(UnderlyingStipType_207.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_207("STRING_55222414");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_207);
      UnderlyingStipulations_NoUnderlyingStips_207.insert(UnderlyingStipValue_207.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_207);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_208;
      FIX::UnderlyingStipType UnderlyingStipType_208("STRING_133104559");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_208);
      UnderlyingStipulations_NoUnderlyingStips_208.insert(UnderlyingStipType_208.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_208("STRING_1335587301");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_208);
      UnderlyingStipulations_NoUnderlyingStips_208.insert(UnderlyingStipValue_208.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_208);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_222;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_222("STRING_596974843");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_222);
      UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyID_222.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_222('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_222);
      UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyIDSource_222.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_222(2061205148);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_222);
      UndlyInstrumentParties_NoUndlyInstrumentParties_222.insert(UnderlyingInstrumentPartyRole_222.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_222);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_417("STRING_1428483407");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_417);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubID_417.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_417(926543003);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_417);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubIDType_417.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_418("STRING_26121143");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_418);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubID_418.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_418(443994637);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_418);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubIDType_418.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_20;
  FIX::Yield Yield_20;
  Yield_20.setString("83.970000");
  msg.set(Yield_20);
  YieldData_20.insert(Yield_20.getString());
  FIX::YieldCalcDate YieldCalcDate_20("LOCALMKTDATE_329871642");
  msg.set(YieldCalcDate_20);
  YieldData_20.insert(YieldCalcDate_20.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_20("LOCALMKTDATE_1531336829");
  msg.set(YieldRedemptionDate_20);
  YieldData_20.insert(YieldRedemptionDate_20.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_20;
  YieldRedemptionPrice_20.setString("11820680");
  msg.set(YieldRedemptionPrice_20);
  YieldData_20.insert(YieldRedemptionPrice_20.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_20(378515403);
  msg.set(YieldRedemptionPriceType_20);
  YieldData_20.insert(YieldRedemptionPriceType_20.getString());
  FIX::YieldType YieldType_20("STRING_PROCEEDS");
  msg.set(YieldType_20);
  YieldData_20.insert(YieldType_20.getString());
  all_values.push_back(YieldData_20);


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
