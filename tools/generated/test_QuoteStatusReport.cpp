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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteStatusReport msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteStatusReport_0;
  FIX::Account Account_36("STRING_1573518442");
  msg.set(Account_36);
  QuoteStatusReport_0.insert(Account_36.getString());
  FIX::AccountType AccountType_31(6);
  msg.set(AccountType_31);
  QuoteStatusReport_0.insert(AccountType_31.getString());
  FIX::AcctIDSource AcctIDSource_29(2);
  msg.set(AcctIDSource_29);
  QuoteStatusReport_0.insert(AcctIDSource_29.getString());
  FIX::BidForwardPoints BidForwardPoints_9;
  BidForwardPoints_9.setString("17234968");
  msg.set(BidForwardPoints_9);
  QuoteStatusReport_0.insert(BidForwardPoints_9.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_9;
  BidForwardPoints2_9.setString("18469873");
  msg.set(BidForwardPoints2_9);
  QuoteStatusReport_0.insert(BidForwardPoints2_9.getString());
  FIX::BidPx BidPx_9;
  BidPx_9.setString("4323816");
  msg.set(BidPx_9);
  QuoteStatusReport_0.insert(BidPx_9.getString());
  FIX::BidSize BidSize_9;
  BidSize_9.setString("5142520");
  msg.set(BidSize_9);
  QuoteStatusReport_0.insert(BidSize_9.getString());
  FIX::BidSpotRate BidSpotRate_9;
  BidSpotRate_9.setString("17397864");
  msg.set(BidSpotRate_9);
  QuoteStatusReport_0.insert(BidSpotRate_9.getString());
  FIX::BidYield BidYield_9;
  BidYield_9.setString("26.830000");
  msg.set(BidYield_9);
  QuoteStatusReport_0.insert(BidYield_9.getString());
  FIX::BookingType BookingType_23(0);
  msg.set(BookingType_23);
  QuoteStatusReport_0.insert(BookingType_23.getString());
  FIX::CommType CommType_22('6');
  msg.set(CommType_22);
  QuoteStatusReport_0.insert(CommType_22.getString());
  FIX::Commission Commission_22;
  Commission_22.setString("12261663");
  msg.set(Commission_22);
  QuoteStatusReport_0.insert(Commission_22.getString());
  FIX::Currency Currency_54("USD");
  msg.set(Currency_54);
  QuoteStatusReport_0.insert(Currency_54.getString());
  FIX::CustOrderCapacity CustOrderCapacity_16(2);
  msg.set(CustOrderCapacity_16);
  QuoteStatusReport_0.insert(CustOrderCapacity_16.getString());
  FIX::EncodedText EncodedText_83("DATA_307224621");
  msg.set(EncodedText_83);
  QuoteStatusReport_0.insert(EncodedText_83.getString());
  FIX::EncodedTextLen EncodedTextLen_83(69254650);
  msg.set(EncodedTextLen_83);
  QuoteStatusReport_0.insert(EncodedTextLen_83.getString());
  FIX::ExDestination ExDestination_9("EXCHANGE_1370571551");
  msg.set(ExDestination_9);
  QuoteStatusReport_0.insert(ExDestination_9.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_9('C');
  msg.set(ExDestinationIDSource_9);
  QuoteStatusReport_0.insert(ExDestinationIDSource_9.getString());
  FIX::ExpireTime ExpireTime_18(FIX::UTCTIMESTAMP(0, 24, 38, 18, 4, 2013));
  msg.set(ExpireTime_18);
  QuoteStatusReport_0.insert(ExpireTime_18.getString());
  FIX::MidPx MidPx_9;
  MidPx_9.setString("2292198");
  msg.set(MidPx_9);
  QuoteStatusReport_0.insert(MidPx_9.getString());
  FIX::MidYield MidYield_9;
  MidYield_9.setString("0.470000");
  msg.set(MidYield_9);
  QuoteStatusReport_0.insert(MidYield_9.getString());
  FIX::MinBidSize MinBidSize_2;
  MinBidSize_2.setString("1289854");
  msg.set(MinBidSize_2);
  QuoteStatusReport_0.insert(MinBidSize_2.getString());
  FIX::MinOfferSize MinOfferSize_2;
  MinOfferSize_2.setString("473205");
  msg.set(MinOfferSize_2);
  QuoteStatusReport_0.insert(MinOfferSize_2.getString());
  FIX::MinQty MinQty_17;
  MinQty_17.setString("16515900");
  msg.set(MinQty_17);
  QuoteStatusReport_0.insert(MinQty_17.getString());
  FIX::MktBidPx MktBidPx_2;
  MktBidPx_2.setString("17025039");
  msg.set(MktBidPx_2);
  QuoteStatusReport_0.insert(MktBidPx_2.getString());
  FIX::MktOfferPx MktOfferPx_2;
  MktOfferPx_2.setString("19975073");
  msg.set(MktOfferPx_2);
  QuoteStatusReport_0.insert(MktOfferPx_2.getString());
  FIX::OfferForwardPoints OfferForwardPoints_9;
  OfferForwardPoints_9.setString("16070202");
  msg.set(OfferForwardPoints_9);
  QuoteStatusReport_0.insert(OfferForwardPoints_9.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_9;
  OfferForwardPoints2_9.setString("12785171");
  msg.set(OfferForwardPoints2_9);
  QuoteStatusReport_0.insert(OfferForwardPoints2_9.getString());
  FIX::OfferPx OfferPx_9;
  OfferPx_9.setString("16970109");
  msg.set(OfferPx_9);
  QuoteStatusReport_0.insert(OfferPx_9.getString());
  FIX::OfferSize OfferSize_9;
  OfferSize_9.setString("20394018");
  msg.set(OfferSize_9);
  QuoteStatusReport_0.insert(OfferSize_9.getString());
  FIX::OfferSpotRate OfferSpotRate_9;
  OfferSpotRate_9.setString("17927692");
  msg.set(OfferSpotRate_9);
  QuoteStatusReport_0.insert(OfferSpotRate_9.getString());
  FIX::OfferYield OfferYield_9;
  OfferYield_9.setString("37.920000");
  msg.set(OfferYield_9);
  QuoteStatusReport_0.insert(OfferYield_9.getString());
  FIX::OrdType OrdType_51('K');
  msg.set(OrdType_51);
  QuoteStatusReport_0.insert(OrdType_51.getString());
  FIX::OrderCapacity OrderCapacity_27('W');
  msg.set(OrderCapacity_27);
  QuoteStatusReport_0.insert(OrderCapacity_27.getString());
  FIX::OrderQty2 OrderQty2_16;
  OrderQty2_16.setString("9547200");
  msg.set(OrderQty2_16);
  QuoteStatusReport_0.insert(OrderQty2_16.getString());
  FIX::OrderRestrictions OrderRestrictions_22("MULTIPLECHARVALUE_E");
  msg.set(OrderRestrictions_22);
  QuoteStatusReport_0.insert(OrderRestrictions_22.getString());
  FIX::Price Price_24;
  Price_24.setString("9632922");
  msg.set(Price_24);
  QuoteStatusReport_0.insert(Price_24.getString());
  FIX::PriceType PriceType_40(16);
  msg.set(PriceType_40);
  QuoteStatusReport_0.insert(PriceType_40.getString());
  FIX::QuoteCancelType QuoteCancelType_2(7);
  msg.set(QuoteCancelType_2);
  QuoteStatusReport_0.insert(QuoteCancelType_2.getString());
  FIX::QuoteID QuoteID_11("STRING_1270516894");
  msg.set(QuoteID_11);
  QuoteStatusReport_0.insert(QuoteID_11.getString());
  FIX::QuoteMsgID QuoteMsgID_3("STRING_521995129");
  msg.set(QuoteMsgID_3);
  QuoteStatusReport_0.insert(QuoteMsgID_3.getString());
  FIX::QuoteRejectReason QuoteRejectReason_1(11);
  msg.set(QuoteRejectReason_1);
  QuoteStatusReport_0.insert(QuoteRejectReason_1.getString());
  FIX::QuoteReqID QuoteReqID_6("STRING_453098762");
  msg.set(QuoteReqID_6);
  QuoteStatusReport_0.insert(QuoteReqID_6.getString());
  FIX::QuoteRespID QuoteRespID_3("STRING_1870099703");
  msg.set(QuoteRespID_3);
  QuoteStatusReport_0.insert(QuoteRespID_3.getString());
  FIX::QuoteStatus QuoteStatus_1(18);
  msg.set(QuoteStatus_1);
  QuoteStatusReport_0.insert(QuoteStatus_1.getString());
  FIX::QuoteStatusReqID QuoteStatusReqID_0("STRING_2081648246");
  msg.set(QuoteStatusReqID_0);
  QuoteStatusReport_0.insert(QuoteStatusReqID_0.getString());
  FIX::QuoteType QuoteType_10(1);
  msg.set(QuoteType_10);
  QuoteStatusReport_0.insert(QuoteType_10.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_2;
  SettlCurrBidFxRate_2.setString("17510958");
  msg.set(SettlCurrBidFxRate_2);
  QuoteStatusReport_0.insert(SettlCurrBidFxRate_2.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_9('D');
  msg.set(SettlCurrFxRateCalc_9);
  QuoteStatusReport_0.insert(SettlCurrFxRateCalc_9.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_2;
  SettlCurrOfferFxRate_2.setString("17115571");
  msg.set(SettlCurrOfferFxRate_2);
  QuoteStatusReport_0.insert(SettlCurrOfferFxRate_2.getString());
  FIX::SettlDate SettlDate_43("LOCALMKTDATE_1980315701");
  msg.set(SettlDate_43);
  QuoteStatusReport_0.insert(SettlDate_43.getString());
  FIX::SettlDate2 SettlDate2_16("LOCALMKTDATE_1684383840");
  msg.set(SettlDate2_16);
  QuoteStatusReport_0.insert(SettlDate2_16.getString());
  FIX::SettlType SettlType_30("STRING_3");
  msg.set(SettlType_30);
  QuoteStatusReport_0.insert(SettlType_30.getString());
  FIX::Side Side_46('5');
  msg.set(Side_46);
  QuoteStatusReport_0.insert(Side_46.getString());
  FIX::Text Text_83("STRING_1188490289");
  msg.set(Text_83);
  QuoteStatusReport_0.insert(Text_83.getString());
  FIX::TradingSessionID TradingSessionID_70("STRING_4");
  msg.set(TradingSessionID_70);
  QuoteStatusReport_0.insert(TradingSessionID_70.getString());
  FIX::TradingSessionSubID TradingSessionSubID_70("STRING_2");
  msg.set(TradingSessionSubID_70);
  QuoteStatusReport_0.insert(TradingSessionSubID_70.getString());
  FIX::TransactTime TransactTime_53(FIX::UTCTIMESTAMP(19, 43, 21, 5, 1, 2005));
  msg.set(TransactTime_53);
  QuoteStatusReport_0.insert(TransactTime_53.getString());
  FIX::ValidUntilTime ValidUntilTime_12(FIX::UTCTIMESTAMP(10, 10, 13, 0, 1, 2017));
  msg.set(ValidUntilTime_12);
  QuoteStatusReport_0.insert(ValidUntilTime_12.getString());
  all_values.push_back(QuoteStatusReport_0);

  // FinancingDetails
  multiset<string> FinancingDetails_22;
  FIX::AgreementCurrency AgreementCurrency_22("USD");
  msg.set(AgreementCurrency_22);
  FinancingDetails_22.insert(AgreementCurrency_22.getString());
  FIX::AgreementDate AgreementDate_22("LOCALMKTDATE_2111973110");
  msg.set(AgreementDate_22);
  FinancingDetails_22.insert(AgreementDate_22.getString());
  FIX::AgreementDesc AgreementDesc_22("STRING_73605536");
  msg.set(AgreementDesc_22);
  FinancingDetails_22.insert(AgreementDesc_22.getString());
  FIX::AgreementID AgreementID_22("STRING_1341637765");
  msg.set(AgreementID_22);
  FinancingDetails_22.insert(AgreementID_22.getString());
  FIX::DeliveryType DeliveryType_22(0);
  msg.set(DeliveryType_22);
  FinancingDetails_22.insert(DeliveryType_22.getString());
  FIX::EndDate EndDate_22("LOCALMKTDATE_1315502209");
  msg.set(EndDate_22);
  FinancingDetails_22.insert(EndDate_22.getString());
  FIX::MarginRatio MarginRatio_22;
  MarginRatio_22.setString("99.330000");
  msg.set(MarginRatio_22);
  FinancingDetails_22.insert(MarginRatio_22.getString());
  FIX::StartDate StartDate_22("LOCALMKTDATE_1062737854");
  msg.set(StartDate_22);
  FinancingDetails_22.insert(StartDate_22.getString());
  FIX::TerminationType TerminationType_22(1);
  msg.set(TerminationType_22);
  FinancingDetails_22.insert(TerminationType_22.getString());
  all_values.push_back(FinancingDetails_22);

  // Instrument
  multiset<string> Instrument_66;
  FIX::AttachmentPoint AttachmentPoint_66;
  AttachmentPoint_66.setString("19.870000");
  msg.set(AttachmentPoint_66);
  Instrument_66.insert(AttachmentPoint_66.getString());
  FIX::CFICode CFICode_66("STRING_599638046");
  msg.set(CFICode_66);
  Instrument_66.insert(CFICode_66.getString());
  FIX::CPProgram CPProgram_66(2);
  msg.set(CPProgram_66);
  Instrument_66.insert(CPProgram_66.getString());
  FIX::CPRegType CPRegType_66("STRING_658234631");
  msg.set(CPRegType_66);
  Instrument_66.insert(CPRegType_66.getString());
  FIX::CapPrice CapPrice_66;
  CapPrice_66.setString("17881283");
  msg.set(CapPrice_66);
  Instrument_66.insert(CapPrice_66.getString());
  FIX::ContractMultiplier ContractMultiplier_66;
  ContractMultiplier_66.setString("19681976");
  msg.set(ContractMultiplier_66);
  Instrument_66.insert(ContractMultiplier_66.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_66(2);
  msg.set(ContractMultiplierUnit_66);
  Instrument_66.insert(ContractMultiplierUnit_66.getString());
  FIX::ContractSettlMonth ContractSettlMonth_66("MONTHYEAR_288671528");
  msg.set(ContractSettlMonth_66);
  Instrument_66.insert(ContractSettlMonth_66.getString());
  FIX::CountryOfIssue CountryOfIssue_66("COUNTRY_347310501");
  msg.set(CountryOfIssue_66);
  Instrument_66.insert(CountryOfIssue_66.getString());
  FIX::CouponPaymentDate CouponPaymentDate_66("LOCALMKTDATE_1815598212");
  msg.set(CouponPaymentDate_66);
  Instrument_66.insert(CouponPaymentDate_66.getString());
  FIX::CouponRate CouponRate_66;
  CouponRate_66.setString("65.300000");
  msg.set(CouponRate_66);
  Instrument_66.insert(CouponRate_66.getString());
  FIX::CreditRating CreditRating_66("STRING_519192511");
  msg.set(CreditRating_66);
  Instrument_66.insert(CreditRating_66.getString());
  FIX::DatedDate DatedDate_66("LOCALMKTDATE_237131992");
  msg.set(DatedDate_66);
  Instrument_66.insert(DatedDate_66.getString());
  FIX::DetachmentPoint DetachmentPoint_66;
  DetachmentPoint_66.setString("23.750000");
  msg.set(DetachmentPoint_66);
  Instrument_66.insert(DetachmentPoint_66.getString());
  FIX::EncodedIssuer EncodedIssuer_66("DATA_2091741340");
  msg.set(EncodedIssuer_66);
  Instrument_66.insert(EncodedIssuer_66.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_66(1760869514);
  msg.set(EncodedIssuerLen_66);
  Instrument_66.insert(EncodedIssuerLen_66.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_66("DATA_882198097");
  msg.set(EncodedSecurityDesc_66);
  Instrument_66.insert(EncodedSecurityDesc_66.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_66(332615145);
  msg.set(EncodedSecurityDescLen_66);
  Instrument_66.insert(EncodedSecurityDescLen_66.getString());
  FIX::ExerciseStyle ExerciseStyle_66(1);
  msg.set(ExerciseStyle_66);
  Instrument_66.insert(ExerciseStyle_66.getString());
  FIX::Factor Factor_66;
  Factor_66.setString("19414228");
  msg.set(Factor_66);
  Instrument_66.insert(Factor_66.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_66(false);
  msg.set(FlexProductEligibilityIndicator_66);
  Instrument_66.insert(FlexProductEligibilityIndicator_66.getString());
  FIX::FlexibleIndicator FlexibleIndicator_66(true);
  msg.set(FlexibleIndicator_66);
  Instrument_66.insert(FlexibleIndicator_66.getString());
  FIX::FloorPrice FloorPrice_66;
  FloorPrice_66.setString("1551871");
  msg.set(FloorPrice_66);
  Instrument_66.insert(FloorPrice_66.getString());
  FIX::FlowScheduleType FlowScheduleType_66(0);
  msg.set(FlowScheduleType_66);
  Instrument_66.insert(FlowScheduleType_66.getString());
  FIX::InstrRegistry InstrRegistry_66("STRING_2014458885");
  msg.set(InstrRegistry_66);
  Instrument_66.insert(InstrRegistry_66.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_66('1');
  msg.set(InstrmtAssignmentMethod_66);
  Instrument_66.insert(InstrmtAssignmentMethod_66.getString());
  FIX::InterestAccrualDate InterestAccrualDate_66("LOCALMKTDATE_1854633015");
  msg.set(InterestAccrualDate_66);
  Instrument_66.insert(InterestAccrualDate_66.getString());
  FIX::IssueDate IssueDate_66("LOCALMKTDATE_1182477446");
  msg.set(IssueDate_66);
  Instrument_66.insert(IssueDate_66.getString());
  FIX::Issuer Issuer_66("STRING_294591170");
  msg.set(Issuer_66);
  Instrument_66.insert(Issuer_66.getString());
  FIX::ListMethod ListMethod_66(1);
  msg.set(ListMethod_66);
  Instrument_66.insert(ListMethod_66.getString());
  FIX::LocaleOfIssue LocaleOfIssue_66("STRING_2062053194");
  msg.set(LocaleOfIssue_66);
  Instrument_66.insert(LocaleOfIssue_66.getString());
  FIX::MaturityDate MaturityDate_66("LOCALMKTDATE_1072673157");
  msg.set(MaturityDate_66);
  Instrument_66.insert(MaturityDate_66.getString());
  FIX::MaturityMonthYear MaturityMonthYear_66("MONTHYEAR_1369525268");
  msg.set(MaturityMonthYear_66);
  Instrument_66.insert(MaturityMonthYear_66.getString());
  FIX::MaturityTime MaturityTime_66("TZTIMEONLY_487204310");
  msg.set(MaturityTime_66);
  Instrument_66.insert(MaturityTime_66.getString());
  FIX::MinPriceIncrement MinPriceIncrement_66;
  MinPriceIncrement_66.setString("17309077");
  msg.set(MinPriceIncrement_66);
  Instrument_66.insert(MinPriceIncrement_66.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_66;
  MinPriceIncrementAmount_66.setString("10101699");
  msg.set(MinPriceIncrementAmount_66);
  Instrument_66.insert(MinPriceIncrementAmount_66.getString());
  FIX::NTPositionLimit NTPositionLimit_66(307918360);
  msg.set(NTPositionLimit_66);
  Instrument_66.insert(NTPositionLimit_66.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_66;
  NotionalPercentageOutstanding_66.setString("87.170000");
  msg.set(NotionalPercentageOutstanding_66);
  Instrument_66.insert(NotionalPercentageOutstanding_66.getString());
  FIX::OptAttribute OptAttribute_66('1');
  msg.set(OptAttribute_66);
  Instrument_66.insert(OptAttribute_66.getString());
  FIX::OptPayoutAmount OptPayoutAmount_66;
  OptPayoutAmount_66.setString("6552288");
  msg.set(OptPayoutAmount_66);
  Instrument_66.insert(OptPayoutAmount_66.getString());
  FIX::OptPayoutType OptPayoutType_66(1);
  msg.set(OptPayoutType_66);
  Instrument_66.insert(OptPayoutType_66.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_66;
  OriginalNotionalPercentageOutstanding_66.setString("80.140000");
  msg.set(OriginalNotionalPercentageOutstanding_66);
  Instrument_66.insert(OriginalNotionalPercentageOutstanding_66.getString());
  FIX::Pool Pool_66("STRING_1174421373");
  msg.set(Pool_66);
  Instrument_66.insert(Pool_66.getString());
  FIX::PositionLimit PositionLimit_66(2024565274);
  msg.set(PositionLimit_66);
  Instrument_66.insert(PositionLimit_66.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_66("STRING_INX");
  msg.set(PriceQuoteMethod_66);
  Instrument_66.insert(PriceQuoteMethod_66.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_66("STRING_1118679065");
  msg.set(PriceUnitOfMeasure_66);
  Instrument_66.insert(PriceUnitOfMeasure_66.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_66;
  PriceUnitOfMeasureQty_66.setString("16379511");
  msg.set(PriceUnitOfMeasureQty_66);
  Instrument_66.insert(PriceUnitOfMeasureQty_66.getString());
  FIX::Product Product_68(3);
  msg.set(Product_68);
  Instrument_66.insert(Product_68.getString());
  FIX::ProductComplex ProductComplex_66("STRING_1451294210");
  msg.set(ProductComplex_66);
  Instrument_66.insert(ProductComplex_66.getString());
  FIX::PutOrCall PutOrCall_66(0);
  msg.set(PutOrCall_66);
  Instrument_66.insert(PutOrCall_66.getString());
  FIX::RedemptionDate RedemptionDate_66("LOCALMKTDATE_558020351");
  msg.set(RedemptionDate_66);
  Instrument_66.insert(RedemptionDate_66.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_66("STRING_1295300055");
  msg.set(RepoCollateralSecurityType_66);
  Instrument_66.insert(RepoCollateralSecurityType_66.getString());
  FIX::RepurchaseRate RepurchaseRate_66;
  RepurchaseRate_66.setString("10.600000");
  msg.set(RepurchaseRate_66);
  Instrument_66.insert(RepurchaseRate_66.getString());
  FIX::RepurchaseTerm RepurchaseTerm_66(713207471);
  msg.set(RepurchaseTerm_66);
  Instrument_66.insert(RepurchaseTerm_66.getString());
  FIX::RestructuringType RestructuringType_66("STRING_MM");
  msg.set(RestructuringType_66);
  Instrument_66.insert(RestructuringType_66.getString());
  FIX::SecurityDesc SecurityDesc_66("STRING_740676297");
  msg.set(SecurityDesc_66);
  Instrument_66.insert(SecurityDesc_66.getString());
  FIX::SecurityExchange SecurityExchange_66("EXCHANGE_62548708");
  msg.set(SecurityExchange_66);
  Instrument_66.insert(SecurityExchange_66.getString());
  FIX::SecurityGroup SecurityGroup_66("STRING_810944730");
  msg.set(SecurityGroup_66);
  Instrument_66.insert(SecurityGroup_66.getString());
  FIX::SecurityID SecurityID_66("STRING_1923153744");
  msg.set(SecurityID_66);
  Instrument_66.insert(SecurityID_66.getString());
  FIX::SecurityIDSource SecurityIDSource_66("STRING_K");
  msg.set(SecurityIDSource_66);
  Instrument_66.insert(SecurityIDSource_66.getString());
  FIX::SecurityStatus SecurityStatus_66("STRING_2");
  msg.set(SecurityStatus_66);
  Instrument_66.insert(SecurityStatus_66.getString());
  FIX::SecuritySubType SecuritySubType_67("STRING_1837723290");
  msg.set(SecuritySubType_67);
  Instrument_66.insert(SecuritySubType_67.getString());
  FIX::SecurityType SecurityType_68("STRING_PZFJ");
  msg.set(SecurityType_68);
  Instrument_66.insert(SecurityType_68.getString());
  FIX::Seniority Seniority_66("STRING_SB");
  msg.set(Seniority_66);
  Instrument_66.insert(Seniority_66.getString());
  FIX::SettlMethod SettlMethod_66('C');
  msg.set(SettlMethod_66);
  Instrument_66.insert(SettlMethod_66.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_66("STRING_1013237177");
  msg.set(SettleOnOpenFlag_66);
  Instrument_66.insert(SettleOnOpenFlag_66.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_66("STRING_1813043527");
  msg.set(StateOrProvinceOfIssue_66);
  Instrument_66.insert(StateOrProvinceOfIssue_66.getString());
  FIX::StrikeCurrency StrikeCurrency_66("JPY");
  msg.set(StrikeCurrency_66);
  Instrument_66.insert(StrikeCurrency_66.getString());
  FIX::StrikeMultiplier StrikeMultiplier_66;
  StrikeMultiplier_66.setString("9644013");
  msg.set(StrikeMultiplier_66);
  Instrument_66.insert(StrikeMultiplier_66.getString());
  FIX::StrikePrice StrikePrice_66;
  StrikePrice_66.setString("11405911");
  msg.set(StrikePrice_66);
  Instrument_66.insert(StrikePrice_66.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_66(1);
  msg.set(StrikePriceBoundaryMethod_66);
  Instrument_66.insert(StrikePriceBoundaryMethod_66.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_66;
  StrikePriceBoundaryPrecision_66.setString("57.290000");
  msg.set(StrikePriceBoundaryPrecision_66);
  Instrument_66.insert(StrikePriceBoundaryPrecision_66.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_66(1);
  msg.set(StrikePriceDeterminationMethod_66);
  Instrument_66.insert(StrikePriceDeterminationMethod_66.getString());
  FIX::StrikeValue StrikeValue_66;
  StrikeValue_66.setString("5021035");
  msg.set(StrikeValue_66);
  Instrument_66.insert(StrikeValue_66.getString());
  FIX::Symbol Symbol_66("STRING_826258822");
  msg.set(Symbol_66);
  Instrument_66.insert(Symbol_66.getString());
  FIX::SymbolSfx SymbolSfx_66("STRING_WI");
  msg.set(SymbolSfx_66);
  Instrument_66.insert(SymbolSfx_66.getString());
  FIX::TimeUnit TimeUnit_66("STRING_Wk");
  msg.set(TimeUnit_66);
  Instrument_66.insert(TimeUnit_66.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_66(1);
  msg.set(UnderlyingPriceDeterminationMethod_66);
  Instrument_66.insert(UnderlyingPriceDeterminationMethod_66.getString());
  FIX::UnitOfMeasure UnitOfMeasure_66("STRING_Gal");
  msg.set(UnitOfMeasure_66);
  Instrument_66.insert(UnitOfMeasure_66.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_66;
  UnitOfMeasureQty_66.setString("10729023");
  msg.set(UnitOfMeasureQty_66);
  Instrument_66.insert(UnitOfMeasureQty_66.getString());
  FIX::ValuationMethod ValuationMethod_66("STRING_EQTY");
  msg.set(ValuationMethod_66);
  Instrument_66.insert(ValuationMethod_66.getString());
  all_values.push_back(Instrument_66);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_128;
    FIX::ComplexEventCondition ComplexEventCondition_128(1);
    noComplexEvents_0_0.set(ComplexEventCondition_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventCondition_128.getString());
    FIX::ComplexEventPrice ComplexEventPrice_128;
    ComplexEventPrice_128.setString("7140841");
    noComplexEvents_0_0.set(ComplexEventPrice_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventPrice_128.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_128(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceBoundaryMethod_128.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_128;
    ComplexEventPriceBoundaryPrecision_128.setString("60.700000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceBoundaryPrecision_128.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_128(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventPriceTimeType_128.getString());
    FIX::ComplexEventType ComplexEventType_128(5);
    noComplexEvents_0_0.set(ComplexEventType_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexEventType_128.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_128;
    ComplexOptPayoutAmount_128.setString("3154661");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_128);
    ComplexEvents_NoComplexEvents_128.insert(ComplexOptPayoutAmount_128.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_128);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_265;
      FIX::ComplexEventEndDate ComplexEventEndDate_265(FIX::UTCTIMESTAMP(0, 3, 22, 25, 9, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_265);
      ComplexEventDates_NoComplexEventDates_265.insert(ComplexEventEndDate_265.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_265(FIX::UTCTIMESTAMP(10, 16, 49, 19, 10, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_265);
      ComplexEventDates_NoComplexEventDates_265.insert(ComplexEventStartDate_265.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_265);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_540;
        FIX::ComplexEventEndTime ComplexEventEndTime_540(FIX::UTCTIMEONLY(2, 26, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_540);
        ComplexEventTimes_NoComplexEventTimes_540.insert(ComplexEventEndTime_540.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_540(FIX::UTCTIMEONLY(6, 47, 48));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_540);
        ComplexEventTimes_NoComplexEventTimes_540.insert(ComplexEventStartTime_540.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_540);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_129;
    FIX::ComplexEventCondition ComplexEventCondition_129(1);
    noComplexEvents_0_1.set(ComplexEventCondition_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventCondition_129.getString());
    FIX::ComplexEventPrice ComplexEventPrice_129;
    ComplexEventPrice_129.setString("1522426");
    noComplexEvents_0_1.set(ComplexEventPrice_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventPrice_129.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_129(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceBoundaryMethod_129.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_129;
    ComplexEventPriceBoundaryPrecision_129.setString("88.800000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceBoundaryPrecision_129.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_129(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventPriceTimeType_129.getString());
    FIX::ComplexEventType ComplexEventType_129(5);
    noComplexEvents_0_1.set(ComplexEventType_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexEventType_129.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_129;
    ComplexOptPayoutAmount_129.setString("9664250");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_129);
    ComplexEvents_NoComplexEvents_129.insert(ComplexOptPayoutAmount_129.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_129);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_266;
      FIX::ComplexEventEndDate ComplexEventEndDate_266(FIX::UTCTIMESTAMP(7, 11, 43, 0, 8, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_266);
      ComplexEventDates_NoComplexEventDates_266.insert(ComplexEventEndDate_266.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_266(FIX::UTCTIMESTAMP(17, 13, 31, 8, 11, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_266);
      ComplexEventDates_NoComplexEventDates_266.insert(ComplexEventStartDate_266.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_266);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_541;
        FIX::ComplexEventEndTime ComplexEventEndTime_541(FIX::UTCTIMEONLY(2, 4, 41));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_541);
        ComplexEventTimes_NoComplexEventTimes_541.insert(ComplexEventEndTime_541.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_541(FIX::UTCTIMEONLY(22, 20, 4));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_541);
        ComplexEventTimes_NoComplexEventTimes_541.insert(ComplexEventStartTime_541.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_541);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_542;
        FIX::ComplexEventEndTime ComplexEventEndTime_542(FIX::UTCTIMEONLY(18, 22, 25));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_542);
        ComplexEventTimes_NoComplexEventTimes_542.insert(ComplexEventEndTime_542.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_542(FIX::UTCTIMEONLY(3, 32, 36));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_542);
        ComplexEventTimes_NoComplexEventTimes_542.insert(ComplexEventStartTime_542.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_542);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_543;
        FIX::ComplexEventEndTime ComplexEventEndTime_543(FIX::UTCTIMEONLY(7, 47, 43));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_543);
        ComplexEventTimes_NoComplexEventTimes_543.insert(ComplexEventEndTime_543.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_543(FIX::UTCTIMEONLY(22, 47, 57));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_543);
        ComplexEventTimes_NoComplexEventTimes_543.insert(ComplexEventStartTime_543.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_543);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_267;
      FIX::ComplexEventEndDate ComplexEventEndDate_267(FIX::UTCTIMESTAMP(4, 20, 12, 7, 5, 2014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_267);
      ComplexEventDates_NoComplexEventDates_267.insert(ComplexEventEndDate_267.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_267(FIX::UTCTIMESTAMP(6, 47, 14, 9, 2, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_267);
      ComplexEventDates_NoComplexEventDates_267.insert(ComplexEventStartDate_267.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_267);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_544;
        FIX::ComplexEventEndTime ComplexEventEndTime_544(FIX::UTCTIMEONLY(5, 7, 12));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_544);
        ComplexEventTimes_NoComplexEventTimes_544.insert(ComplexEventEndTime_544.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_544(FIX::UTCTIMEONLY(23, 36, 37));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_544);
        ComplexEventTimes_NoComplexEventTimes_544.insert(ComplexEventStartTime_544.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_544);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_545;
        FIX::ComplexEventEndTime ComplexEventEndTime_545(FIX::UTCTIMEONLY(7, 16, 30));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_545);
        ComplexEventTimes_NoComplexEventTimes_545.insert(ComplexEventEndTime_545.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_545(FIX::UTCTIMEONLY(18, 9, 59));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_545);
        ComplexEventTimes_NoComplexEventTimes_545.insert(ComplexEventStartTime_545.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_545);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_546;
        FIX::ComplexEventEndTime ComplexEventEndTime_546(FIX::UTCTIMEONLY(2, 19, 54));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_546);
        ComplexEventTimes_NoComplexEventTimes_546.insert(ComplexEventEndTime_546.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_546(FIX::UTCTIMEONLY(23, 36, 26));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_546);
        ComplexEventTimes_NoComplexEventTimes_546.insert(ComplexEventStartTime_546.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_546);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_130;
    FIX::ComplexEventCondition ComplexEventCondition_130(2);
    noComplexEvents_0_2.set(ComplexEventCondition_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventCondition_130.getString());
    FIX::ComplexEventPrice ComplexEventPrice_130;
    ComplexEventPrice_130.setString("9001009");
    noComplexEvents_0_2.set(ComplexEventPrice_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventPrice_130.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_130(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceBoundaryMethod_130.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_130;
    ComplexEventPriceBoundaryPrecision_130.setString("46.940000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceBoundaryPrecision_130.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_130(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventPriceTimeType_130.getString());
    FIX::ComplexEventType ComplexEventType_130(5);
    noComplexEvents_0_2.set(ComplexEventType_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexEventType_130.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_130;
    ComplexOptPayoutAmount_130.setString("1860675");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_130);
    ComplexEvents_NoComplexEvents_130.insert(ComplexOptPayoutAmount_130.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_130);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_268;
      FIX::ComplexEventEndDate ComplexEventEndDate_268(FIX::UTCTIMESTAMP(15, 7, 50, 10, 8, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_268);
      ComplexEventDates_NoComplexEventDates_268.insert(ComplexEventEndDate_268.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_268(FIX::UTCTIMESTAMP(14, 28, 23, 24, 12, 2003));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_268);
      ComplexEventDates_NoComplexEventDates_268.insert(ComplexEventStartDate_268.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_268);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_547;
        FIX::ComplexEventEndTime ComplexEventEndTime_547(FIX::UTCTIMEONLY(15, 58, 15));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_547);
        ComplexEventTimes_NoComplexEventTimes_547.insert(ComplexEventEndTime_547.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_547(FIX::UTCTIMEONLY(13, 43, 30));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_547);
        ComplexEventTimes_NoComplexEventTimes_547.insert(ComplexEventStartTime_547.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_547);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_269;
      FIX::ComplexEventEndDate ComplexEventEndDate_269(FIX::UTCTIMESTAMP(23, 2, 5, 4, 3, 2007));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_269);
      ComplexEventDates_NoComplexEventDates_269.insert(ComplexEventEndDate_269.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_269(FIX::UTCTIMESTAMP(15, 52, 3, 21, 12, 2016));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_269);
      ComplexEventDates_NoComplexEventDates_269.insert(ComplexEventStartDate_269.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_269);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_548;
        FIX::ComplexEventEndTime ComplexEventEndTime_548(FIX::UTCTIMEONLY(5, 6, 16));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_548);
        ComplexEventTimes_NoComplexEventTimes_548.insert(ComplexEventEndTime_548.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_548(FIX::UTCTIMEONLY(5, 41, 37));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_548);
        ComplexEventTimes_NoComplexEventTimes_548.insert(ComplexEventStartTime_548.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_548);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_128;
    FIX::EventDate EventDate_128("LOCALMKTDATE_713166840");
    noEvents_0_0.set(EventDate_128);
    EvntGrp_NoEvents_128.insert(EventDate_128.getString());
    FIX::EventPx EventPx_128;
    EventPx_128.setString("12332275");
    noEvents_0_0.set(EventPx_128);
    EvntGrp_NoEvents_128.insert(EventPx_128.getString());
    FIX::EventText EventText_128("STRING_433867941");
    noEvents_0_0.set(EventText_128);
    EvntGrp_NoEvents_128.insert(EventText_128.getString());
    FIX::EventTime EventTime_128(FIX::UTCTIMESTAMP(9, 4, 26, 11, 8, 2008));
    noEvents_0_0.set(EventTime_128);
    EvntGrp_NoEvents_128.insert(EventTime_128.getString());
    FIX::EventType EventType_128(5);
    noEvents_0_0.set(EventType_128);
    EvntGrp_NoEvents_128.insert(EventType_128.getString());
    all_values.push_back(EvntGrp_NoEvents_128);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_129;
    FIX::EventDate EventDate_129("LOCALMKTDATE_238395175");
    noEvents_0_1.set(EventDate_129);
    EvntGrp_NoEvents_129.insert(EventDate_129.getString());
    FIX::EventPx EventPx_129;
    EventPx_129.setString("3471018");
    noEvents_0_1.set(EventPx_129);
    EvntGrp_NoEvents_129.insert(EventPx_129.getString());
    FIX::EventText EventText_129("STRING_269499801");
    noEvents_0_1.set(EventText_129);
    EvntGrp_NoEvents_129.insert(EventText_129.getString());
    FIX::EventTime EventTime_129(FIX::UTCTIMESTAMP(13, 14, 54, 19, 2, 2010));
    noEvents_0_1.set(EventTime_129);
    EvntGrp_NoEvents_129.insert(EventTime_129.getString());
    FIX::EventType EventType_129(17);
    noEvents_0_1.set(EventType_129);
    EvntGrp_NoEvents_129.insert(EventType_129.getString());
    all_values.push_back(EvntGrp_NoEvents_129);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_130;
    FIX::EventDate EventDate_130("LOCALMKTDATE_1934357885");
    noEvents_0_2.set(EventDate_130);
    EvntGrp_NoEvents_130.insert(EventDate_130.getString());
    FIX::EventPx EventPx_130;
    EventPx_130.setString("3715175");
    noEvents_0_2.set(EventPx_130);
    EvntGrp_NoEvents_130.insert(EventPx_130.getString());
    FIX::EventText EventText_130("STRING_637448062");
    noEvents_0_2.set(EventText_130);
    EvntGrp_NoEvents_130.insert(EventText_130.getString());
    FIX::EventTime EventTime_130(FIX::UTCTIMESTAMP(11, 7, 46, 16, 10, 2016));
    noEvents_0_2.set(EventTime_130);
    EvntGrp_NoEvents_130.insert(EventTime_130.getString());
    FIX::EventType EventType_130(16);
    noEvents_0_2.set(EventType_130);
    EvntGrp_NoEvents_130.insert(EventType_130.getString());
    all_values.push_back(EvntGrp_NoEvents_130);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_130;
    FIX::InstrumentPartyID InstrumentPartyID_130("STRING_163051422");
    noInstrumentParties_0_0.set(InstrumentPartyID_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyID_130.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_130('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyIDSource_130.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_130(1231196439);
    noInstrumentParties_0_0.set(InstrumentPartyRole_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyRole_130.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_130);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267;
      FIX::InstrumentPartySubID InstrumentPartySubID_267("STRING_357401448");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_267);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267.insert(InstrumentPartySubID_267.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_267(53244566);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_267);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267.insert(InstrumentPartySubIDType_267.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268;
      FIX::InstrumentPartySubID InstrumentPartySubID_268("STRING_670651109");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_268);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268.insert(InstrumentPartySubID_268.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_268(59942804);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_268);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268.insert(InstrumentPartySubIDType_268.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269;
      FIX::InstrumentPartySubID InstrumentPartySubID_269("STRING_291639742");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_269);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269.insert(InstrumentPartySubID_269.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_269(1017752931);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_269);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269.insert(InstrumentPartySubIDType_269.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_142;
    FIX::SecurityAltID SecurityAltID_142("STRING_2124126741");
    noSecurityAltID_0_0.set(SecurityAltID_142);
    SecAltIDGrp_NoSecurityAltID_142.insert(SecurityAltID_142.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_142("STRING_974016537");
    noSecurityAltID_0_0.set(SecurityAltIDSource_142);
    SecAltIDGrp_NoSecurityAltID_142.insert(SecurityAltIDSource_142.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_142);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_132;
  FIX::SecurityXML SecurityXML_133("XMLDATA_1491212780");
  msg.set(SecurityXML_133);
  FIX::SecurityXMLLen SecurityXMLLen_66(170896747);
  msg.set(SecurityXMLLen_66);
  FIX::SecurityXMLSchema SecurityXMLSchema_66("STRING_378339808");
  msg.set(SecurityXMLSchema_66);
  SecurityXML_132.insert(SecurityXMLSchema_66.getString());
  all_values.push_back(SecurityXML_132);

  // LegQuotStatGrp
  // Group LegQuotStatGrp.NoLegs
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_0;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_0;
    FIX::LegOrderQty LegOrderQty_21;
    LegOrderQty_21.setString("19727569");
    noLegs_0_0.set(LegOrderQty_21);
    LegQuotStatGrp_NoLegs_0.insert(LegOrderQty_21.getString());
    FIX::LegQty LegQty_21;
    LegQty_21.setString("9450868");
    noLegs_0_0.set(LegQty_21);
    LegQuotStatGrp_NoLegs_0.insert(LegQty_21.getString());
    FIX::LegSettlDate LegSettlDate_21("LOCALMKTDATE_565055962");
    noLegs_0_0.set(LegSettlDate_21);
    LegQuotStatGrp_NoLegs_0.insert(LegSettlDate_21.getString());
    FIX::LegSettlType LegSettlType_21('1');
    noLegs_0_0.set(LegSettlType_21);
    LegQuotStatGrp_NoLegs_0.insert(LegSettlType_21.getString());
    FIX::LegSwapType LegSwapType_21(5);
    noLegs_0_0.set(LegSwapType_21);
    LegQuotStatGrp_NoLegs_0.insert(LegSwapType_21.getString());
    all_values.push_back(LegQuotStatGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_104;
    FIX::EncodedLegIssuer EncodedLegIssuer_104("DATA_2039780796");
    noLegs_0_0.set(EncodedLegIssuer_104);
    InstrumentLeg_104.insert(EncodedLegIssuer_104.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_104(1831873756);
    noLegs_0_0.set(EncodedLegIssuerLen_104);
    InstrumentLeg_104.insert(EncodedLegIssuerLen_104.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_104("DATA_1914378314");
    noLegs_0_0.set(EncodedLegSecurityDesc_104);
    InstrumentLeg_104.insert(EncodedLegSecurityDesc_104.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_104(899042294);
    noLegs_0_0.set(EncodedLegSecurityDescLen_104);
    InstrumentLeg_104.insert(EncodedLegSecurityDescLen_104.getString());
    FIX::LegCFICode LegCFICode_104("STRING_1225922844");
    noLegs_0_0.set(LegCFICode_104);
    InstrumentLeg_104.insert(LegCFICode_104.getString());
    FIX::LegContractMultiplier LegContractMultiplier_104;
    LegContractMultiplier_104.setString("13863156");
    noLegs_0_0.set(LegContractMultiplier_104);
    InstrumentLeg_104.insert(LegContractMultiplier_104.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_104(471470633);
    noLegs_0_0.set(LegContractMultiplierUnit_104);
    InstrumentLeg_104.insert(LegContractMultiplierUnit_104.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_104("MONTHYEAR_1853199479");
    noLegs_0_0.set(LegContractSettlMonth_104);
    InstrumentLeg_104.insert(LegContractSettlMonth_104.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_104("COUNTRY_1292120882");
    noLegs_0_0.set(LegCountryOfIssue_104);
    InstrumentLeg_104.insert(LegCountryOfIssue_104.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_104("LOCALMKTDATE_634522055");
    noLegs_0_0.set(LegCouponPaymentDate_104);
    InstrumentLeg_104.insert(LegCouponPaymentDate_104.getString());
    FIX::LegCouponRate LegCouponRate_104;
    LegCouponRate_104.setString("67.880000");
    noLegs_0_0.set(LegCouponRate_104);
    InstrumentLeg_104.insert(LegCouponRate_104.getString());
    FIX::LegCreditRating LegCreditRating_104("STRING_375833673");
    noLegs_0_0.set(LegCreditRating_104);
    InstrumentLeg_104.insert(LegCreditRating_104.getString());
    FIX::LegCurrency LegCurrency_104("USD");
    noLegs_0_0.set(LegCurrency_104);
    InstrumentLeg_104.insert(LegCurrency_104.getString());
    FIX::LegDatedDate LegDatedDate_104("LOCALMKTDATE_429078240");
    noLegs_0_0.set(LegDatedDate_104);
    InstrumentLeg_104.insert(LegDatedDate_104.getString());
    FIX::LegExerciseStyle LegExerciseStyle_104(1844821633);
    noLegs_0_0.set(LegExerciseStyle_104);
    InstrumentLeg_104.insert(LegExerciseStyle_104.getString());
    FIX::LegFactor LegFactor_104;
    LegFactor_104.setString("11588110");
    noLegs_0_0.set(LegFactor_104);
    InstrumentLeg_104.insert(LegFactor_104.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_104(720717982);
    noLegs_0_0.set(LegFlowScheduleType_104);
    InstrumentLeg_104.insert(LegFlowScheduleType_104.getString());
    FIX::LegInstrRegistry LegInstrRegistry_104("STRING_715090916");
    noLegs_0_0.set(LegInstrRegistry_104);
    InstrumentLeg_104.insert(LegInstrRegistry_104.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_104("LOCALMKTDATE_1488253646");
    noLegs_0_0.set(LegInterestAccrualDate_104);
    InstrumentLeg_104.insert(LegInterestAccrualDate_104.getString());
    FIX::LegIssueDate LegIssueDate_104("LOCALMKTDATE_697361075");
    noLegs_0_0.set(LegIssueDate_104);
    InstrumentLeg_104.insert(LegIssueDate_104.getString());
    FIX::LegIssuer LegIssuer_104("STRING_1689107453");
    noLegs_0_0.set(LegIssuer_104);
    InstrumentLeg_104.insert(LegIssuer_104.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_104("STRING_831982778");
    noLegs_0_0.set(LegLocaleOfIssue_104);
    InstrumentLeg_104.insert(LegLocaleOfIssue_104.getString());
    FIX::LegMaturityDate LegMaturityDate_104("LOCALMKTDATE_868257822");
    noLegs_0_0.set(LegMaturityDate_104);
    InstrumentLeg_104.insert(LegMaturityDate_104.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_104("MONTHYEAR_2067447261");
    noLegs_0_0.set(LegMaturityMonthYear_104);
    InstrumentLeg_104.insert(LegMaturityMonthYear_104.getString());
    FIX::LegMaturityTime LegMaturityTime_104("TZTIMEONLY_1610164503");
    noLegs_0_0.set(LegMaturityTime_104);
    InstrumentLeg_104.insert(LegMaturityTime_104.getString());
    FIX::LegOptAttribute LegOptAttribute_104('6');
    noLegs_0_0.set(LegOptAttribute_104);
    InstrumentLeg_104.insert(LegOptAttribute_104.getString());
    FIX::LegOptionRatio LegOptionRatio_104;
    LegOptionRatio_104.setString("8650504");
    noLegs_0_0.set(LegOptionRatio_104);
    InstrumentLeg_104.insert(LegOptionRatio_104.getString());
    FIX::LegPool LegPool_104("STRING_27736818");
    noLegs_0_0.set(LegPool_104);
    InstrumentLeg_104.insert(LegPool_104.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_104("STRING_890321990");
    noLegs_0_0.set(LegPriceUnitOfMeasure_104);
    InstrumentLeg_104.insert(LegPriceUnitOfMeasure_104.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_104;
    LegPriceUnitOfMeasureQty_104.setString("3001017");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_104);
    InstrumentLeg_104.insert(LegPriceUnitOfMeasureQty_104.getString());
    FIX::LegProduct LegProduct_104(2067517614);
    noLegs_0_0.set(LegProduct_104);
    InstrumentLeg_104.insert(LegProduct_104.getString());
    FIX::LegPutOrCall LegPutOrCall_104(574712098);
    noLegs_0_0.set(LegPutOrCall_104);
    InstrumentLeg_104.insert(LegPutOrCall_104.getString());
    FIX::LegRatioQty LegRatioQty_104;
    LegRatioQty_104.setString("669964");
    noLegs_0_0.set(LegRatioQty_104);
    InstrumentLeg_104.insert(LegRatioQty_104.getString());
    FIX::LegRedemptionDate LegRedemptionDate_104("LOCALMKTDATE_819076260");
    noLegs_0_0.set(LegRedemptionDate_104);
    InstrumentLeg_104.insert(LegRedemptionDate_104.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_104("STRING_1800634942");
    noLegs_0_0.set(LegRepoCollateralSecurityType_104);
    InstrumentLeg_104.insert(LegRepoCollateralSecurityType_104.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_104;
    LegRepurchaseRate_104.setString("20.510000");
    noLegs_0_0.set(LegRepurchaseRate_104);
    InstrumentLeg_104.insert(LegRepurchaseRate_104.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_104(1290546893);
    noLegs_0_0.set(LegRepurchaseTerm_104);
    InstrumentLeg_104.insert(LegRepurchaseTerm_104.getString());
    FIX::LegSecurityDesc LegSecurityDesc_104("STRING_1506350774");
    noLegs_0_0.set(LegSecurityDesc_104);
    InstrumentLeg_104.insert(LegSecurityDesc_104.getString());
    FIX::LegSecurityExchange LegSecurityExchange_104("EXCHANGE_597949286");
    noLegs_0_0.set(LegSecurityExchange_104);
    InstrumentLeg_104.insert(LegSecurityExchange_104.getString());
    FIX::LegSecurityID LegSecurityID_104("STRING_1925068949");
    noLegs_0_0.set(LegSecurityID_104);
    InstrumentLeg_104.insert(LegSecurityID_104.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_104("STRING_100333914");
    noLegs_0_0.set(LegSecurityIDSource_104);
    InstrumentLeg_104.insert(LegSecurityIDSource_104.getString());
    FIX::LegSecuritySubType LegSecuritySubType_104("STRING_973782959");
    noLegs_0_0.set(LegSecuritySubType_104);
    InstrumentLeg_104.insert(LegSecuritySubType_104.getString());
    FIX::LegSecurityType LegSecurityType_104("STRING_951755825");
    noLegs_0_0.set(LegSecurityType_104);
    InstrumentLeg_104.insert(LegSecurityType_104.getString());
    FIX::LegSide LegSide_104('1');
    noLegs_0_0.set(LegSide_104);
    InstrumentLeg_104.insert(LegSide_104.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_104("STRING_1402861199");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_104);
    InstrumentLeg_104.insert(LegStateOrProvinceOfIssue_104.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_104("USD");
    noLegs_0_0.set(LegStrikeCurrency_104);
    InstrumentLeg_104.insert(LegStrikeCurrency_104.getString());
    FIX::LegStrikePrice LegStrikePrice_104;
    LegStrikePrice_104.setString("21235791");
    noLegs_0_0.set(LegStrikePrice_104);
    InstrumentLeg_104.insert(LegStrikePrice_104.getString());
    FIX::LegSymbol LegSymbol_104("STRING_1364184726");
    noLegs_0_0.set(LegSymbol_104);
    InstrumentLeg_104.insert(LegSymbol_104.getString());
    FIX::LegSymbolSfx LegSymbolSfx_104("STRING_1698783189");
    noLegs_0_0.set(LegSymbolSfx_104);
    InstrumentLeg_104.insert(LegSymbolSfx_104.getString());
    FIX::LegTimeUnit LegTimeUnit_104("STRING_673456608");
    noLegs_0_0.set(LegTimeUnit_104);
    InstrumentLeg_104.insert(LegTimeUnit_104.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_104("STRING_905808532");
    noLegs_0_0.set(LegUnitOfMeasure_104);
    InstrumentLeg_104.insert(LegUnitOfMeasure_104.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_104;
    LegUnitOfMeasureQty_104.setString("3832823");
    noLegs_0_0.set(LegUnitOfMeasureQty_104);
    InstrumentLeg_104.insert(LegUnitOfMeasureQty_104.getString());
    all_values.push_back(InstrumentLeg_104);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_208;
      FIX::LegSecurityAltID LegSecurityAltID_208("STRING_825772145");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_208);
      LegSecAltIDGrp_NoLegSecurityAltID_208.insert(LegSecurityAltID_208.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_208("STRING_1993446823");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_208);
      LegSecAltIDGrp_NoLegSecurityAltID_208.insert(LegSecurityAltIDSource_208.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_208);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_41;
      FIX::LegStipulationType LegStipulationType_41("STRING_1690822623");
      noLegStipulations_0_1_0.set(LegStipulationType_41);
      LegStipulations_NoLegStipulations_41.insert(LegStipulationType_41.getString());
      FIX::LegStipulationValue LegStipulationValue_41("STRING_2021183641");
      noLegStipulations_0_1_0.set(LegStipulationValue_41);
      LegStipulations_NoLegStipulations_41.insert(LegStipulationValue_41.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_41);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_42;
      FIX::LegStipulationType LegStipulationType_42("STRING_978083914");
      noLegStipulations_0_1_1.set(LegStipulationType_42);
      LegStipulations_NoLegStipulations_42.insert(LegStipulationType_42.getString());
      FIX::LegStipulationValue LegStipulationValue_42("STRING_1990924380");
      noLegStipulations_0_1_1.set(LegStipulationValue_42);
      LegStipulations_NoLegStipulations_42.insert(LegStipulationValue_42.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_42);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_43;
      FIX::LegStipulationType LegStipulationType_43("STRING_1941217607");
      noLegStipulations_0_1_2.set(LegStipulationType_43);
      LegStipulations_NoLegStipulations_43.insert(LegStipulationType_43.getString());
      FIX::LegStipulationValue LegStipulationValue_43("STRING_1552796013");
      noLegStipulations_0_1_2.set(LegStipulationValue_43);
      LegStipulations_NoLegStipulations_43.insert(LegStipulationValue_43.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_43);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_123;
      FIX::NestedPartyID NestedPartyID_123("STRING_612810219");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyID_123.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_123('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyIDSource_123.getString());
      FIX::NestedPartyRole NestedPartyRole_123(1363749207);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyRole_123.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_123);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_246;
        FIX::NestedPartySubID NestedPartySubID_246("STRING_564814433");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_246);
        NstdPtysSubGrp_NoNestedPartySubIDs_246.insert(NestedPartySubID_246.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_246(1961698493);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_246);
        NstdPtysSubGrp_NoNestedPartySubIDs_246.insert(NestedPartySubIDType_246.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_246);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_124;
      FIX::NestedPartyID NestedPartyID_124("STRING_1680942414");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyID_124.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_124('6');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyIDSource_124.getString());
      FIX::NestedPartyRole NestedPartyRole_124(787997805);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyRole_124.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_124);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_247;
        FIX::NestedPartySubID NestedPartySubID_247("STRING_1864350497");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_247);
        NstdPtysSubGrp_NoNestedPartySubIDs_247.insert(NestedPartySubID_247.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_247(43375356);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_247);
        NstdPtysSubGrp_NoNestedPartySubIDs_247.insert(NestedPartySubIDType_247.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_247);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_1;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_1;
    FIX::LegOrderQty LegOrderQty_22;
    LegOrderQty_22.setString("11343084");
    noLegs_0_1.set(LegOrderQty_22);
    LegQuotStatGrp_NoLegs_1.insert(LegOrderQty_22.getString());
    FIX::LegQty LegQty_22;
    LegQty_22.setString("20748800");
    noLegs_0_1.set(LegQty_22);
    LegQuotStatGrp_NoLegs_1.insert(LegQty_22.getString());
    FIX::LegSettlDate LegSettlDate_22("LOCALMKTDATE_19470890");
    noLegs_0_1.set(LegSettlDate_22);
    LegQuotStatGrp_NoLegs_1.insert(LegSettlDate_22.getString());
    FIX::LegSettlType LegSettlType_22('3');
    noLegs_0_1.set(LegSettlType_22);
    LegQuotStatGrp_NoLegs_1.insert(LegSettlType_22.getString());
    FIX::LegSwapType LegSwapType_22(2);
    noLegs_0_1.set(LegSwapType_22);
    LegQuotStatGrp_NoLegs_1.insert(LegSwapType_22.getString());
    all_values.push_back(LegQuotStatGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_105;
    FIX::EncodedLegIssuer EncodedLegIssuer_105("DATA_692927498");
    noLegs_0_1.set(EncodedLegIssuer_105);
    InstrumentLeg_105.insert(EncodedLegIssuer_105.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_105(1256818011);
    noLegs_0_1.set(EncodedLegIssuerLen_105);
    InstrumentLeg_105.insert(EncodedLegIssuerLen_105.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_105("DATA_2009461900");
    noLegs_0_1.set(EncodedLegSecurityDesc_105);
    InstrumentLeg_105.insert(EncodedLegSecurityDesc_105.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_105(87158281);
    noLegs_0_1.set(EncodedLegSecurityDescLen_105);
    InstrumentLeg_105.insert(EncodedLegSecurityDescLen_105.getString());
    FIX::LegCFICode LegCFICode_105("STRING_2082590157");
    noLegs_0_1.set(LegCFICode_105);
    InstrumentLeg_105.insert(LegCFICode_105.getString());
    FIX::LegContractMultiplier LegContractMultiplier_105;
    LegContractMultiplier_105.setString("18554250");
    noLegs_0_1.set(LegContractMultiplier_105);
    InstrumentLeg_105.insert(LegContractMultiplier_105.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_105(174920205);
    noLegs_0_1.set(LegContractMultiplierUnit_105);
    InstrumentLeg_105.insert(LegContractMultiplierUnit_105.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_105("MONTHYEAR_1625929132");
    noLegs_0_1.set(LegContractSettlMonth_105);
    InstrumentLeg_105.insert(LegContractSettlMonth_105.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_105("COUNTRY_1729125068");
    noLegs_0_1.set(LegCountryOfIssue_105);
    InstrumentLeg_105.insert(LegCountryOfIssue_105.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_105("LOCALMKTDATE_1153004119");
    noLegs_0_1.set(LegCouponPaymentDate_105);
    InstrumentLeg_105.insert(LegCouponPaymentDate_105.getString());
    FIX::LegCouponRate LegCouponRate_105;
    LegCouponRate_105.setString("98.650000");
    noLegs_0_1.set(LegCouponRate_105);
    InstrumentLeg_105.insert(LegCouponRate_105.getString());
    FIX::LegCreditRating LegCreditRating_105("STRING_1522859027");
    noLegs_0_1.set(LegCreditRating_105);
    InstrumentLeg_105.insert(LegCreditRating_105.getString());
    FIX::LegCurrency LegCurrency_105("CAN");
    noLegs_0_1.set(LegCurrency_105);
    InstrumentLeg_105.insert(LegCurrency_105.getString());
    FIX::LegDatedDate LegDatedDate_105("LOCALMKTDATE_2135669247");
    noLegs_0_1.set(LegDatedDate_105);
    InstrumentLeg_105.insert(LegDatedDate_105.getString());
    FIX::LegExerciseStyle LegExerciseStyle_105(1764263792);
    noLegs_0_1.set(LegExerciseStyle_105);
    InstrumentLeg_105.insert(LegExerciseStyle_105.getString());
    FIX::LegFactor LegFactor_105;
    LegFactor_105.setString("5960725");
    noLegs_0_1.set(LegFactor_105);
    InstrumentLeg_105.insert(LegFactor_105.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_105(1891542712);
    noLegs_0_1.set(LegFlowScheduleType_105);
    InstrumentLeg_105.insert(LegFlowScheduleType_105.getString());
    FIX::LegInstrRegistry LegInstrRegistry_105("STRING_181594577");
    noLegs_0_1.set(LegInstrRegistry_105);
    InstrumentLeg_105.insert(LegInstrRegistry_105.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_105("LOCALMKTDATE_410287426");
    noLegs_0_1.set(LegInterestAccrualDate_105);
    InstrumentLeg_105.insert(LegInterestAccrualDate_105.getString());
    FIX::LegIssueDate LegIssueDate_105("LOCALMKTDATE_1425001478");
    noLegs_0_1.set(LegIssueDate_105);
    InstrumentLeg_105.insert(LegIssueDate_105.getString());
    FIX::LegIssuer LegIssuer_105("STRING_846742925");
    noLegs_0_1.set(LegIssuer_105);
    InstrumentLeg_105.insert(LegIssuer_105.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_105("STRING_1198285231");
    noLegs_0_1.set(LegLocaleOfIssue_105);
    InstrumentLeg_105.insert(LegLocaleOfIssue_105.getString());
    FIX::LegMaturityDate LegMaturityDate_105("LOCALMKTDATE_1910216069");
    noLegs_0_1.set(LegMaturityDate_105);
    InstrumentLeg_105.insert(LegMaturityDate_105.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_105("MONTHYEAR_563609774");
    noLegs_0_1.set(LegMaturityMonthYear_105);
    InstrumentLeg_105.insert(LegMaturityMonthYear_105.getString());
    FIX::LegMaturityTime LegMaturityTime_105("TZTIMEONLY_1241660587");
    noLegs_0_1.set(LegMaturityTime_105);
    InstrumentLeg_105.insert(LegMaturityTime_105.getString());
    FIX::LegOptAttribute LegOptAttribute_105('8');
    noLegs_0_1.set(LegOptAttribute_105);
    InstrumentLeg_105.insert(LegOptAttribute_105.getString());
    FIX::LegOptionRatio LegOptionRatio_105;
    LegOptionRatio_105.setString("4910061");
    noLegs_0_1.set(LegOptionRatio_105);
    InstrumentLeg_105.insert(LegOptionRatio_105.getString());
    FIX::LegPool LegPool_105("STRING_1261131477");
    noLegs_0_1.set(LegPool_105);
    InstrumentLeg_105.insert(LegPool_105.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_105("STRING_1248050301");
    noLegs_0_1.set(LegPriceUnitOfMeasure_105);
    InstrumentLeg_105.insert(LegPriceUnitOfMeasure_105.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_105;
    LegPriceUnitOfMeasureQty_105.setString("21171857");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_105);
    InstrumentLeg_105.insert(LegPriceUnitOfMeasureQty_105.getString());
    FIX::LegProduct LegProduct_105(1954058976);
    noLegs_0_1.set(LegProduct_105);
    InstrumentLeg_105.insert(LegProduct_105.getString());
    FIX::LegPutOrCall LegPutOrCall_105(357384665);
    noLegs_0_1.set(LegPutOrCall_105);
    InstrumentLeg_105.insert(LegPutOrCall_105.getString());
    FIX::LegRatioQty LegRatioQty_105;
    LegRatioQty_105.setString("19791640");
    noLegs_0_1.set(LegRatioQty_105);
    InstrumentLeg_105.insert(LegRatioQty_105.getString());
    FIX::LegRedemptionDate LegRedemptionDate_105("LOCALMKTDATE_2041217257");
    noLegs_0_1.set(LegRedemptionDate_105);
    InstrumentLeg_105.insert(LegRedemptionDate_105.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_105("STRING_292491174");
    noLegs_0_1.set(LegRepoCollateralSecurityType_105);
    InstrumentLeg_105.insert(LegRepoCollateralSecurityType_105.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_105;
    LegRepurchaseRate_105.setString("54.270000");
    noLegs_0_1.set(LegRepurchaseRate_105);
    InstrumentLeg_105.insert(LegRepurchaseRate_105.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_105(68653814);
    noLegs_0_1.set(LegRepurchaseTerm_105);
    InstrumentLeg_105.insert(LegRepurchaseTerm_105.getString());
    FIX::LegSecurityDesc LegSecurityDesc_105("STRING_1918420306");
    noLegs_0_1.set(LegSecurityDesc_105);
    InstrumentLeg_105.insert(LegSecurityDesc_105.getString());
    FIX::LegSecurityExchange LegSecurityExchange_105("EXCHANGE_1268746848");
    noLegs_0_1.set(LegSecurityExchange_105);
    InstrumentLeg_105.insert(LegSecurityExchange_105.getString());
    FIX::LegSecurityID LegSecurityID_105("STRING_1221657933");
    noLegs_0_1.set(LegSecurityID_105);
    InstrumentLeg_105.insert(LegSecurityID_105.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_105("STRING_1240306523");
    noLegs_0_1.set(LegSecurityIDSource_105);
    InstrumentLeg_105.insert(LegSecurityIDSource_105.getString());
    FIX::LegSecuritySubType LegSecuritySubType_105("STRING_644122227");
    noLegs_0_1.set(LegSecuritySubType_105);
    InstrumentLeg_105.insert(LegSecuritySubType_105.getString());
    FIX::LegSecurityType LegSecurityType_105("STRING_1779974418");
    noLegs_0_1.set(LegSecurityType_105);
    InstrumentLeg_105.insert(LegSecurityType_105.getString());
    FIX::LegSide LegSide_105('4');
    noLegs_0_1.set(LegSide_105);
    InstrumentLeg_105.insert(LegSide_105.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_105("STRING_632307826");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_105);
    InstrumentLeg_105.insert(LegStateOrProvinceOfIssue_105.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_105("CHF");
    noLegs_0_1.set(LegStrikeCurrency_105);
    InstrumentLeg_105.insert(LegStrikeCurrency_105.getString());
    FIX::LegStrikePrice LegStrikePrice_105;
    LegStrikePrice_105.setString("3763668");
    noLegs_0_1.set(LegStrikePrice_105);
    InstrumentLeg_105.insert(LegStrikePrice_105.getString());
    FIX::LegSymbol LegSymbol_105("STRING_1578349139");
    noLegs_0_1.set(LegSymbol_105);
    InstrumentLeg_105.insert(LegSymbol_105.getString());
    FIX::LegSymbolSfx LegSymbolSfx_105("STRING_1478989903");
    noLegs_0_1.set(LegSymbolSfx_105);
    InstrumentLeg_105.insert(LegSymbolSfx_105.getString());
    FIX::LegTimeUnit LegTimeUnit_105("STRING_1801368368");
    noLegs_0_1.set(LegTimeUnit_105);
    InstrumentLeg_105.insert(LegTimeUnit_105.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_105("STRING_277608416");
    noLegs_0_1.set(LegUnitOfMeasure_105);
    InstrumentLeg_105.insert(LegUnitOfMeasure_105.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_105;
    LegUnitOfMeasureQty_105.setString("5297914");
    noLegs_0_1.set(LegUnitOfMeasureQty_105);
    InstrumentLeg_105.insert(LegUnitOfMeasureQty_105.getString());
    all_values.push_back(InstrumentLeg_105);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_209;
      FIX::LegSecurityAltID LegSecurityAltID_209("STRING_841218191");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_209);
      LegSecAltIDGrp_NoLegSecurityAltID_209.insert(LegSecurityAltID_209.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_209("STRING_1771452073");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_209);
      LegSecAltIDGrp_NoLegSecurityAltID_209.insert(LegSecurityAltIDSource_209.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_209);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_210;
      FIX::LegSecurityAltID LegSecurityAltID_210("STRING_313657963");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_210);
      LegSecAltIDGrp_NoLegSecurityAltID_210.insert(LegSecurityAltID_210.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_210("STRING_1332224357");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_210);
      LegSecAltIDGrp_NoLegSecurityAltID_210.insert(LegSecurityAltIDSource_210.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_210);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_211;
      FIX::LegSecurityAltID LegSecurityAltID_211("STRING_885099903");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_211);
      LegSecAltIDGrp_NoLegSecurityAltID_211.insert(LegSecurityAltID_211.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_211("STRING_1561708265");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_211);
      LegSecAltIDGrp_NoLegSecurityAltID_211.insert(LegSecurityAltIDSource_211.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_211);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_44;
      FIX::LegStipulationType LegStipulationType_44("STRING_691675231");
      noLegStipulations_1_1_0.set(LegStipulationType_44);
      LegStipulations_NoLegStipulations_44.insert(LegStipulationType_44.getString());
      FIX::LegStipulationValue LegStipulationValue_44("STRING_1919092930");
      noLegStipulations_1_1_0.set(LegStipulationValue_44);
      LegStipulations_NoLegStipulations_44.insert(LegStipulationValue_44.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_44);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_45;
      FIX::LegStipulationType LegStipulationType_45("STRING_1133606809");
      noLegStipulations_1_1_1.set(LegStipulationType_45);
      LegStipulations_NoLegStipulations_45.insert(LegStipulationType_45.getString());
      FIX::LegStipulationValue LegStipulationValue_45("STRING_585408840");
      noLegStipulations_1_1_1.set(LegStipulationValue_45);
      LegStipulations_NoLegStipulations_45.insert(LegStipulationValue_45.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_45);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_46;
      FIX::LegStipulationType LegStipulationType_46("STRING_64100456");
      noLegStipulations_1_1_2.set(LegStipulationType_46);
      LegStipulations_NoLegStipulations_46.insert(LegStipulationType_46.getString());
      FIX::LegStipulationValue LegStipulationValue_46("STRING_673228588");
      noLegStipulations_1_1_2.set(LegStipulationValue_46);
      LegStipulations_NoLegStipulations_46.insert(LegStipulationValue_46.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_46);

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_125;
      FIX::NestedPartyID NestedPartyID_125("STRING_1982520762");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyID_125.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_125('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyIDSource_125.getString());
      FIX::NestedPartyRole NestedPartyRole_125(1875720587);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyRole_125.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_125);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_248;
        FIX::NestedPartySubID NestedPartySubID_248("STRING_438614016");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_248);
        NstdPtysSubGrp_NoNestedPartySubIDs_248.insert(NestedPartySubID_248.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_248(1508211357);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_248);
        NstdPtysSubGrp_NoNestedPartySubIDs_248.insert(NestedPartySubIDType_248.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_248);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_249;
        FIX::NestedPartySubID NestedPartySubID_249("STRING_1547973534");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_249);
        NstdPtysSubGrp_NoNestedPartySubIDs_249.insert(NestedPartySubID_249.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_249(1070921842);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_249);
        NstdPtysSubGrp_NoNestedPartySubIDs_249.insert(NestedPartySubIDType_249.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_249);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_126;
      FIX::NestedPartyID NestedPartyID_126("STRING_757482271");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyID_126.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_126('4');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyIDSource_126.getString());
      FIX::NestedPartyRole NestedPartyRole_126(1447288733);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyRole_126.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_126);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_250;
        FIX::NestedPartySubID NestedPartySubID_250("STRING_1948182266");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_250);
        NstdPtysSubGrp_NoNestedPartySubIDs_250.insert(NestedPartySubID_250.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_250(1101173453);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_250);
        NstdPtysSubGrp_NoNestedPartySubIDs_250.insert(NestedPartySubIDType_250.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_250);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_251;
        FIX::NestedPartySubID NestedPartySubID_251("STRING_465956179");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_251);
        NstdPtysSubGrp_NoNestedPartySubIDs_251.insert(NestedPartySubID_251.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_251(330490104);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_251);
        NstdPtysSubGrp_NoNestedPartySubIDs_251.insert(NestedPartySubIDType_251.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_251);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_252;
        FIX::NestedPartySubID NestedPartySubID_252("STRING_517790595");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_252);
        NstdPtysSubGrp_NoNestedPartySubIDs_252.insert(NestedPartySubID_252.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_252(1307174370);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_252);
        NstdPtysSubGrp_NoNestedPartySubIDs_252.insert(NestedPartySubIDType_252.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_252);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_127;
      FIX::NestedPartyID NestedPartyID_127("STRING_2101942178");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyID_127.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_127('8');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyIDSource_127.getString());
      FIX::NestedPartyRole NestedPartyRole_127(491915080);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyRole_127.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_127);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_253;
        FIX::NestedPartySubID NestedPartySubID_253("STRING_245673175");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_253);
        NstdPtysSubGrp_NoNestedPartySubIDs_253.insert(NestedPartySubID_253.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_253(1793841537);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_253);
        NstdPtysSubGrp_NoNestedPartySubIDs_253.insert(NestedPartySubIDType_253.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_253);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_23;
  FIX::CashOrderQty CashOrderQty_23;
  CashOrderQty_23.setString("15312336");
  msg.set(CashOrderQty_23);
  OrderQtyData_23.insert(CashOrderQty_23.getString());
  FIX::OrderPercent OrderPercent_23;
  OrderPercent_23.setString("24.570000");
  msg.set(OrderPercent_23);
  OrderQtyData_23.insert(OrderPercent_23.getString());
  FIX::OrderQty OrderQty_31;
  OrderQty_31.setString("7799646");
  msg.set(OrderQty_31);
  OrderQtyData_23.insert(OrderQty_31.getString());
  FIX::RoundingDirection RoundingDirection_23('1');
  msg.set(RoundingDirection_23);
  OrderQtyData_23.insert(RoundingDirection_23.getString());
  FIX::RoundingModulus RoundingModulus_23;
  RoundingModulus_23.setString("813829");
  msg.set(RoundingModulus_23);
  OrderQtyData_23.insert(RoundingModulus_23.getString());
  all_values.push_back(OrderQtyData_23);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_117;
    FIX::PartyID PartyID_117("STRING_623221510");
    noPartyIDs_0_0.set(PartyID_117);
    Parties_NoPartyIDs_117.insert(PartyID_117.getString());
    FIX::PartyIDSource PartyIDSource_117('2');
    noPartyIDs_0_0.set(PartyIDSource_117);
    Parties_NoPartyIDs_117.insert(PartyIDSource_117.getString());
    FIX::PartyRole PartyRole_117(65);
    noPartyIDs_0_0.set(PartyRole_117);
    Parties_NoPartyIDs_117.insert(PartyRole_117.getString());
    all_values.push_back(Parties_NoPartyIDs_117);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_233;
      FIX::PartySubID PartySubID_233("STRING_991763666");
      noPartySubIDs_0_1_0.set(PartySubID_233);
      PtysSubGrp_NoPartySubIDs_233.insert(PartySubID_233.getString());
      FIX::PartySubIDType PartySubIDType_233(16);
      noPartySubIDs_0_1_0.set(PartySubIDType_233);
      PtysSubGrp_NoPartySubIDs_233.insert(PartySubIDType_233.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_233);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_234;
      FIX::PartySubID PartySubID_234("STRING_1859669807");
      noPartySubIDs_0_1_1.set(PartySubID_234);
      PtysSubGrp_NoPartySubIDs_234.insert(PartySubID_234.getString());
      FIX::PartySubIDType PartySubIDType_234(10);
      noPartySubIDs_0_1_1.set(PartySubIDType_234);
      PtysSubGrp_NoPartySubIDs_234.insert(PartySubIDType_234.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_234);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_10;
    FIX::QuoteQualifier QuoteQualifier_10('4');
    noQuoteQualifiers_0_0.set(QuoteQualifier_10);
    QuotQualGrp_NoQuoteQualifiers_10.insert(QuoteQualifier_10.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_10);

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_11;
    FIX::QuoteQualifier QuoteQualifier_11('8');
    noQuoteQualifiers_0_1.set(QuoteQualifier_11);
    QuotQualGrp_NoQuoteQualifiers_11.insert(QuoteQualifier_11.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_11);

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_2;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_12;
    FIX::QuoteQualifier QuoteQualifier_12('2');
    noQuoteQualifiers_0_2.set(QuoteQualifier_12);
    QuotQualGrp_NoQuoteQualifiers_12.insert(QuoteQualifier_12.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_12);

    msg.addGroup(noQuoteQualifiers_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_26;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_26("GBP");
  msg.set(BenchmarkCurveCurrency_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurveCurrency_26.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_26("STRING_Pfandbriefe");
  msg.set(BenchmarkCurveName_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurveName_26.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_26("STRING_1123972373");
  msg.set(BenchmarkCurvePoint_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurvePoint_26.getString());
  FIX::BenchmarkPrice BenchmarkPrice_26;
  BenchmarkPrice_26.setString("9926346");
  msg.set(BenchmarkPrice_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkPrice_26.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_26(1528506419);
  msg.set(BenchmarkPriceType_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkPriceType_26.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_26("STRING_283663095");
  msg.set(BenchmarkSecurityID_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkSecurityID_26.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_26("STRING_947093169");
  msg.set(BenchmarkSecurityIDSource_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkSecurityIDSource_26.getString());
  FIX::Spread Spread_26;
  Spread_26.setString("2124713");
  msg.set(Spread_26);
  SpreadOrBenchmarkCurveData_26.insert(Spread_26.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_26);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_36;
    FIX::StipulationType StipulationType_36("STRING_BANKQUAL");
    noStipulations_0_0.set(StipulationType_36);
    Stipulations_NoStipulations_36.insert(StipulationType_36.getString());
    FIX::StipulationValue StipulationValue_36("STRING_458144505");
    noStipulations_0_0.set(StipulationValue_36);
    Stipulations_NoStipulations_36.insert(StipulationValue_36.getString());
    all_values.push_back(Stipulations_NoStipulations_36);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_37;
    FIX::StipulationType StipulationType_37("STRING_ORDRINCR");
    noStipulations_0_1.set(StipulationType_37);
    Stipulations_NoStipulations_37.insert(StipulationType_37.getString());
    FIX::StipulationValue StipulationValue_37("STRING_1170401618");
    noStipulations_0_1.set(StipulationValue_37);
    Stipulations_NoStipulations_37.insert(StipulationValue_37.getString());
    all_values.push_back(Stipulations_NoStipulations_37);

    msg.addGroup(noStipulations_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_15;
    FIX::TargetPartyID TargetPartyID_15("STRING_1201900762");
    noTargetPartyIDs_0_0.set(TargetPartyID_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyID_15.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_15('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyIDSource_15.getString());
    FIX::TargetPartyRole TargetPartyRole_15(556809876);
    noTargetPartyIDs_0_0.set(TargetPartyRole_15);
    TargetParties_NoTargetPartyIDs_15.insert(TargetPartyRole_15.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_15);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_100;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_100("DATA_1762781984");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_100);
    UnderlyingInstrument_100.insert(EncodedUnderlyingIssuer_100.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_100(473229904);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_100);
    UnderlyingInstrument_100.insert(EncodedUnderlyingIssuerLen_100.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_100("DATA_1755295476");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_100);
    UnderlyingInstrument_100.insert(EncodedUnderlyingSecurityDesc_100.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_100(2114240433);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_100);
    UnderlyingInstrument_100.insert(EncodedUnderlyingSecurityDescLen_100.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_100;
    UnderlyingAdjustedQuantity_100.setString("14649935");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_100);
    UnderlyingInstrument_100.insert(UnderlyingAdjustedQuantity_100.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_100;
    UnderlyingAllocationPercent_100.setString("9.190000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_100);
    UnderlyingInstrument_100.insert(UnderlyingAllocationPercent_100.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_100;
    UnderlyingAttachmentPoint_100.setString("65.920000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_100);
    UnderlyingInstrument_100.insert(UnderlyingAttachmentPoint_100.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_100("STRING_1857247122");
    noUnderlyings_0_0.set(UnderlyingCFICode_100);
    UnderlyingInstrument_100.insert(UnderlyingCFICode_100.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_100("STRING_1903848204");
    noUnderlyings_0_0.set(UnderlyingCPProgram_100);
    UnderlyingInstrument_100.insert(UnderlyingCPProgram_100.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_100("STRING_148611375");
    noUnderlyings_0_0.set(UnderlyingCPRegType_100);
    UnderlyingInstrument_100.insert(UnderlyingCPRegType_100.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_100;
    UnderlyingCapValue_100.setString("5712093");
    noUnderlyings_0_0.set(UnderlyingCapValue_100);
    UnderlyingInstrument_100.insert(UnderlyingCapValue_100.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_100;
    UnderlyingCashAmount_100.setString("18133905");
    noUnderlyings_0_0.set(UnderlyingCashAmount_100);
    UnderlyingInstrument_100.insert(UnderlyingCashAmount_100.getString());
    FIX::UnderlyingCashType UnderlyingCashType_100("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_100);
    UnderlyingInstrument_100.insert(UnderlyingCashType_100.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_100;
    UnderlyingContractMultiplier_100.setString("12333539");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_100);
    UnderlyingInstrument_100.insert(UnderlyingContractMultiplier_100.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_100(676622751);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_100);
    UnderlyingInstrument_100.insert(UnderlyingContractMultiplierUnit_100.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_100("COUNTRY_1930599941");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_100);
    UnderlyingInstrument_100.insert(UnderlyingCountryOfIssue_100.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_100("LOCALMKTDATE_78504916");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_100);
    UnderlyingInstrument_100.insert(UnderlyingCouponPaymentDate_100.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_100;
    UnderlyingCouponRate_100.setString("55.220000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_100);
    UnderlyingInstrument_100.insert(UnderlyingCouponRate_100.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_100("STRING_66779389");
    noUnderlyings_0_0.set(UnderlyingCreditRating_100);
    UnderlyingInstrument_100.insert(UnderlyingCreditRating_100.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_100("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_100);
    UnderlyingInstrument_100.insert(UnderlyingCurrency_100.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_100;
    UnderlyingCurrentValue_100.setString("8423575");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_100);
    UnderlyingInstrument_100.insert(UnderlyingCurrentValue_100.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_100;
    UnderlyingDetachmentPoint_100.setString("60.390000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_100);
    UnderlyingInstrument_100.insert(UnderlyingDetachmentPoint_100.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_100;
    UnderlyingDirtyPrice_100.setString("7282613");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_100);
    UnderlyingInstrument_100.insert(UnderlyingDirtyPrice_100.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_100;
    UnderlyingEndPrice_100.setString("12642936");
    noUnderlyings_0_0.set(UnderlyingEndPrice_100);
    UnderlyingInstrument_100.insert(UnderlyingEndPrice_100.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_100;
    UnderlyingEndValue_100.setString("18351676");
    noUnderlyings_0_0.set(UnderlyingEndValue_100);
    UnderlyingInstrument_100.insert(UnderlyingEndValue_100.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_100(1203688319);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_100);
    UnderlyingInstrument_100.insert(UnderlyingExerciseStyle_100.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_100;
    UnderlyingFXRate_100.setString("3187107");
    noUnderlyings_0_0.set(UnderlyingFXRate_100);
    UnderlyingInstrument_100.insert(UnderlyingFXRate_100.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_100('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_100);
    UnderlyingInstrument_100.insert(UnderlyingFXRateCalc_100.getString());
    FIX::UnderlyingFactor UnderlyingFactor_100;
    UnderlyingFactor_100.setString("17604981");
    noUnderlyings_0_0.set(UnderlyingFactor_100);
    UnderlyingInstrument_100.insert(UnderlyingFactor_100.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_100(826321144);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_100);
    UnderlyingInstrument_100.insert(UnderlyingFlowScheduleType_100.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_100("STRING_442542819");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_100);
    UnderlyingInstrument_100.insert(UnderlyingInstrRegistry_100.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_100("LOCALMKTDATE_86244451");
    noUnderlyings_0_0.set(UnderlyingIssueDate_100);
    UnderlyingInstrument_100.insert(UnderlyingIssueDate_100.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_100("STRING_434132972");
    noUnderlyings_0_0.set(UnderlyingIssuer_100);
    UnderlyingInstrument_100.insert(UnderlyingIssuer_100.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_100("STRING_409299604");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_100);
    UnderlyingInstrument_100.insert(UnderlyingLocaleOfIssue_100.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_100("LOCALMKTDATE_1551238021");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_100);
    UnderlyingInstrument_100.insert(UnderlyingMaturityDate_100.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_100("MONTHYEAR_1728243891");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_100);
    UnderlyingInstrument_100.insert(UnderlyingMaturityMonthYear_100.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_100("TZTIMEONLY_88242549");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_100);
    UnderlyingInstrument_100.insert(UnderlyingMaturityTime_100.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_100;
    UnderlyingNotionalPercentageOutstanding_100.setString("14.950000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_100);
    UnderlyingInstrument_100.insert(UnderlyingNotionalPercentageOutstanding_100.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_100('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_100);
    UnderlyingInstrument_100.insert(UnderlyingOptAttribute_100.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_100;
    UnderlyingOriginalNotionalPercentageOutstanding_100.setString("39.240000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_100);
    UnderlyingInstrument_100.insert(UnderlyingOriginalNotionalPercentageOutstanding_100.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_100("STRING_1832210886");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_100);
    UnderlyingInstrument_100.insert(UnderlyingPriceUnitOfMeasure_100.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_100;
    UnderlyingPriceUnitOfMeasureQty_100.setString("11505153");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_100);
    UnderlyingInstrument_100.insert(UnderlyingPriceUnitOfMeasureQty_100.getString());
    FIX::UnderlyingProduct UnderlyingProduct_100(1043481492);
    noUnderlyings_0_0.set(UnderlyingProduct_100);
    UnderlyingInstrument_100.insert(UnderlyingProduct_100.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_100(918081163);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_100);
    UnderlyingInstrument_100.insert(UnderlyingPutOrCall_100.getString());
    FIX::UnderlyingPx UnderlyingPx_100;
    UnderlyingPx_100.setString("18271381");
    noUnderlyings_0_0.set(UnderlyingPx_100);
    UnderlyingInstrument_100.insert(UnderlyingPx_100.getString());
    FIX::UnderlyingQty UnderlyingQty_100;
    UnderlyingQty_100.setString("8265977");
    noUnderlyings_0_0.set(UnderlyingQty_100);
    UnderlyingInstrument_100.insert(UnderlyingQty_100.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_100("LOCALMKTDATE_996586079");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_100);
    UnderlyingInstrument_100.insert(UnderlyingRedemptionDate_100.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_100("STRING_1884783648");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_100);
    UnderlyingInstrument_100.insert(UnderlyingRepoCollateralSecurityType_100.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_100;
    UnderlyingRepurchaseRate_100.setString("71.750000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_100);
    UnderlyingInstrument_100.insert(UnderlyingRepurchaseRate_100.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_100(2022184164);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_100);
    UnderlyingInstrument_100.insert(UnderlyingRepurchaseTerm_100.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_100("STRING_7416851");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_100);
    UnderlyingInstrument_100.insert(UnderlyingRestructuringType_100.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_100("STRING_1735734739");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_100);
    UnderlyingInstrument_100.insert(UnderlyingSecurityDesc_100.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_100("EXCHANGE_539466555");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_100);
    UnderlyingInstrument_100.insert(UnderlyingSecurityExchange_100.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_100("STRING_735678208");
    noUnderlyings_0_0.set(UnderlyingSecurityID_100);
    UnderlyingInstrument_100.insert(UnderlyingSecurityID_100.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_100("STRING_852544720");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_100);
    UnderlyingInstrument_100.insert(UnderlyingSecurityIDSource_100.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_100("STRING_227150564");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_100);
    UnderlyingInstrument_100.insert(UnderlyingSecuritySubType_100.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_100("STRING_1939366527");
    noUnderlyings_0_0.set(UnderlyingSecurityType_100);
    UnderlyingInstrument_100.insert(UnderlyingSecurityType_100.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_100("STRING_1171255464");
    noUnderlyings_0_0.set(UnderlyingSeniority_100);
    UnderlyingInstrument_100.insert(UnderlyingSeniority_100.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_100("STRING_1054395047");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_100);
    UnderlyingInstrument_100.insert(UnderlyingSettlMethod_100.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_100(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_100);
    UnderlyingInstrument_100.insert(UnderlyingSettlementType_100.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_100;
    UnderlyingStartValue_100.setString("19975766");
    noUnderlyings_0_0.set(UnderlyingStartValue_100);
    UnderlyingInstrument_100.insert(UnderlyingStartValue_100.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_100("STRING_1496937866");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_100);
    UnderlyingInstrument_100.insert(UnderlyingStateOrProvinceOfIssue_100.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_100("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_100);
    UnderlyingInstrument_100.insert(UnderlyingStrikeCurrency_100.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_100;
    UnderlyingStrikePrice_100.setString("19062374");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_100);
    UnderlyingInstrument_100.insert(UnderlyingStrikePrice_100.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_100("STRING_1042379898");
    noUnderlyings_0_0.set(UnderlyingSymbol_100);
    UnderlyingInstrument_100.insert(UnderlyingSymbol_100.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_100("STRING_2012469824");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_100);
    UnderlyingInstrument_100.insert(UnderlyingSymbolSfx_100.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_100("STRING_1994480019");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_100);
    UnderlyingInstrument_100.insert(UnderlyingTimeUnit_100.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_100("STRING_155897745");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_100);
    UnderlyingInstrument_100.insert(UnderlyingUnitOfMeasure_100.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_100;
    UnderlyingUnitOfMeasureQty_100.setString("13495946");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_100);
    UnderlyingInstrument_100.insert(UnderlyingUnitOfMeasureQty_100.getString());
    all_values.push_back(UnderlyingInstrument_100);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_205;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_205("STRING_1988108631");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_205);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltID_205.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_205("STRING_352626351");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_205);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltIDSource_205.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_206;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_206("STRING_1127331788");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_206);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltID_206.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_206("STRING_758706146");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_206);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltIDSource_206.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_195;
      FIX::UnderlyingStipType UnderlyingStipType_195("STRING_1953929574");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_195);
      UnderlyingStipulations_NoUnderlyingStips_195.insert(UnderlyingStipType_195.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_195("STRING_1755292225");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_195);
      UnderlyingStipulations_NoUnderlyingStips_195.insert(UnderlyingStipValue_195.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_195);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_196;
      FIX::UnderlyingStipType UnderlyingStipType_196("STRING_1917064477");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_196);
      UnderlyingStipulations_NoUnderlyingStips_196.insert(UnderlyingStipType_196.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_196("STRING_699823101");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_196);
      UnderlyingStipulations_NoUnderlyingStips_196.insert(UnderlyingStipValue_196.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_196);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_197;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_197("STRING_1924481329");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_197);
      UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyID_197.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_197('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_197);
      UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyIDSource_197.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_197(21975648);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_197);
      UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyRole_197.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_197);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_393("STRING_1140618913");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_393);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393.insert(UnderlyingInstrumentPartySubID_393.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_393(249126212);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_393);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393.insert(UnderlyingInstrumentPartySubIDType_393.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_198;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_198("STRING_304558768");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_198);
      UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyID_198.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_198('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_198);
      UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyIDSource_198.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_198(1303521259);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_198);
      UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyRole_198.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_198);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_394("STRING_14483689");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_394);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394.insert(UnderlyingInstrumentPartySubID_394.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_394(652975477);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_394);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394.insert(UnderlyingInstrumentPartySubIDType_394.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_395("STRING_1348081719");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_395);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395.insert(UnderlyingInstrumentPartySubID_395.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_395(298709622);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_395);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395.insert(UnderlyingInstrumentPartySubIDType_395.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_199;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_199("STRING_411729300");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_199);
      UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyID_199.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_199('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_199);
      UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyIDSource_199.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_199(163695799);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_199);
      UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyRole_199.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_199);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_396("STRING_398875714");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_396);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396.insert(UnderlyingInstrumentPartySubID_396.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_396(1513290423);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_396);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396.insert(UnderlyingInstrumentPartySubIDType_396.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_397("STRING_342575967");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_397);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397.insert(UnderlyingInstrumentPartySubID_397.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_397(239500698);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_397);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397.insert(UnderlyingInstrumentPartySubIDType_397.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_21;
  FIX::Yield Yield_21;
  Yield_21.setString("67.750000");
  msg.set(Yield_21);
  YieldData_21.insert(Yield_21.getString());
  FIX::YieldCalcDate YieldCalcDate_21("LOCALMKTDATE_1469907755");
  msg.set(YieldCalcDate_21);
  YieldData_21.insert(YieldCalcDate_21.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_21("LOCALMKTDATE_998206844");
  msg.set(YieldRedemptionDate_21);
  YieldData_21.insert(YieldRedemptionDate_21.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_21;
  YieldRedemptionPrice_21.setString("18981976");
  msg.set(YieldRedemptionPrice_21);
  YieldData_21.insert(YieldRedemptionPrice_21.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_21(1276353681);
  msg.set(YieldRedemptionPriceType_21);
  YieldData_21.insert(YieldRedemptionPriceType_21.getString());
  FIX::YieldType YieldType_21("STRING_AFTERTAX");
  msg.set(YieldType_21);
  YieldData_21.insert(YieldType_21.getString());
  all_values.push_back(YieldData_21);


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
