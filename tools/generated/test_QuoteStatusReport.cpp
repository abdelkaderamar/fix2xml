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
  FIX::Account Account_38("STRING_1550858855");
  msg.set(Account_38);
  QuoteStatusReport_0.insert(Account_38.getString());
  FIX::AccountType AccountType_34(3);
  msg.set(AccountType_34);
  QuoteStatusReport_0.insert(AccountType_34.getString());
  FIX::AcctIDSource AcctIDSource_31(5);
  msg.set(AcctIDSource_31);
  QuoteStatusReport_0.insert(AcctIDSource_31.getString());
  FIX::BidForwardPoints BidForwardPoints_5;
  BidForwardPoints_5.setString("3772936");
  msg.set(BidForwardPoints_5);
  QuoteStatusReport_0.insert(BidForwardPoints_5.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_5;
  BidForwardPoints2_5.setString("17583024");
  msg.set(BidForwardPoints2_5);
  QuoteStatusReport_0.insert(BidForwardPoints2_5.getString());
  FIX::BidPx BidPx_5;
  BidPx_5.setString("8161554");
  msg.set(BidPx_5);
  QuoteStatusReport_0.insert(BidPx_5.getString());
  FIX::BidSize BidSize_5;
  BidSize_5.setString("3199634");
  msg.set(BidSize_5);
  QuoteStatusReport_0.insert(BidSize_5.getString());
  FIX::BidSpotRate BidSpotRate_5;
  BidSpotRate_5.setString("6939101");
  msg.set(BidSpotRate_5);
  QuoteStatusReport_0.insert(BidSpotRate_5.getString());
  FIX::BidYield BidYield_5;
  BidYield_5.setString("57.390000");
  msg.set(BidYield_5);
  QuoteStatusReport_0.insert(BidYield_5.getString());
  FIX::BookingType BookingType_21(1);
  msg.set(BookingType_21);
  QuoteStatusReport_0.insert(BookingType_21.getString());
  FIX::CommType CommType_22('4');
  msg.set(CommType_22);
  QuoteStatusReport_0.insert(CommType_22.getString());
  FIX::Commission Commission_22;
  Commission_22.setString("6078170");
  msg.set(Commission_22);
  QuoteStatusReport_0.insert(Commission_22.getString());
  FIX::Currency Currency_50("GBP");
  msg.set(Currency_50);
  QuoteStatusReport_0.insert(Currency_50.getString());
  FIX::CustOrderCapacity CustOrderCapacity_18(1);
  msg.set(CustOrderCapacity_18);
  QuoteStatusReport_0.insert(CustOrderCapacity_18.getString());
  FIX::EncodedText EncodedText_74("DATA_903603780");
  msg.set(EncodedText_74);
  QuoteStatusReport_0.insert(EncodedText_74.getString());
  FIX::EncodedTextLen EncodedTextLen_74(1516314903);
  msg.set(EncodedTextLen_74);
  QuoteStatusReport_0.insert(EncodedTextLen_74.getString());
  FIX::ExDestination ExDestination_11("EXCHANGE_1672017637");
  msg.set(ExDestination_11);
  QuoteStatusReport_0.insert(ExDestination_11.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_11('G');
  msg.set(ExDestinationIDSource_11);
  QuoteStatusReport_0.insert(ExDestinationIDSource_11.getString());
  FIX::ExpireTime ExpireTime_19(FIX::UTCTIMESTAMP(8, 1, 9, 15, 32010));
  msg.set(ExpireTime_19);
  QuoteStatusReport_0.insert(ExpireTime_19.getString());
  FIX::MidPx MidPx_5;
  MidPx_5.setString("13051671");
  msg.set(MidPx_5);
  QuoteStatusReport_0.insert(MidPx_5.getString());
  FIX::MidYield MidYield_5;
  MidYield_5.setString("77.050000");
  msg.set(MidYield_5);
  QuoteStatusReport_0.insert(MidYield_5.getString());
  FIX::MinBidSize MinBidSize_2;
  MinBidSize_2.setString("18801408");
  msg.set(MinBidSize_2);
  QuoteStatusReport_0.insert(MinBidSize_2.getString());
  FIX::MinOfferSize MinOfferSize_2;
  MinOfferSize_2.setString("11394936");
  msg.set(MinOfferSize_2);
  QuoteStatusReport_0.insert(MinOfferSize_2.getString());
  FIX::MinQty MinQty_17;
  MinQty_17.setString("8283887");
  msg.set(MinQty_17);
  QuoteStatusReport_0.insert(MinQty_17.getString());
  FIX::MktBidPx MktBidPx_2;
  MktBidPx_2.setString("12835160");
  msg.set(MktBidPx_2);
  QuoteStatusReport_0.insert(MktBidPx_2.getString());
  FIX::MktOfferPx MktOfferPx_2;
  MktOfferPx_2.setString("13961301");
  msg.set(MktOfferPx_2);
  QuoteStatusReport_0.insert(MktOfferPx_2.getString());
  FIX::OfferForwardPoints OfferForwardPoints_5;
  OfferForwardPoints_5.setString("13405653");
  msg.set(OfferForwardPoints_5);
  QuoteStatusReport_0.insert(OfferForwardPoints_5.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_5;
  OfferForwardPoints2_5.setString("16608097");
  msg.set(OfferForwardPoints2_5);
  QuoteStatusReport_0.insert(OfferForwardPoints2_5.getString());
  FIX::OfferPx OfferPx_5;
  OfferPx_5.setString("10069489");
  msg.set(OfferPx_5);
  QuoteStatusReport_0.insert(OfferPx_5.getString());
  FIX::OfferSize OfferSize_5;
  OfferSize_5.setString("92371");
  msg.set(OfferSize_5);
  QuoteStatusReport_0.insert(OfferSize_5.getString());
  FIX::OfferSpotRate OfferSpotRate_5;
  OfferSpotRate_5.setString("19807732");
  msg.set(OfferSpotRate_5);
  QuoteStatusReport_0.insert(OfferSpotRate_5.getString());
  FIX::OfferYield OfferYield_5;
  OfferYield_5.setString("90.950000");
  msg.set(OfferYield_5);
  QuoteStatusReport_0.insert(OfferYield_5.getString());
  FIX::OrdType OrdType_52('6');
  msg.set(OrdType_52);
  QuoteStatusReport_0.insert(OrdType_52.getString());
  FIX::OrderCapacity OrderCapacity_25('A');
  msg.set(OrderCapacity_25);
  QuoteStatusReport_0.insert(OrderCapacity_25.getString());
  FIX::OrderQty2 OrderQty2_15;
  OrderQty2_15.setString("18070480");
  msg.set(OrderQty2_15);
  QuoteStatusReport_0.insert(OrderQty2_15.getString());
  FIX::OrderRestrictions OrderRestrictions_22("MULTIPLECHARVALUE_2");
  msg.set(OrderRestrictions_22);
  QuoteStatusReport_0.insert(OrderRestrictions_22.getString());
  FIX::Price Price_25;
  Price_25.setString("5053399");
  msg.set(Price_25);
  QuoteStatusReport_0.insert(Price_25.getString());
  FIX::PriceType PriceType_39(16);
  msg.set(PriceType_39);
  QuoteStatusReport_0.insert(PriceType_39.getString());
  FIX::QuoteCancelType QuoteCancelType_2(2);
  msg.set(QuoteCancelType_2);
  QuoteStatusReport_0.insert(QuoteCancelType_2.getString());
  FIX::QuoteID QuoteID_13("STRING_1408943716");
  msg.set(QuoteID_13);
  QuoteStatusReport_0.insert(QuoteID_13.getString());
  FIX::QuoteMsgID QuoteMsgID_3("STRING_888010713");
  msg.set(QuoteMsgID_3);
  QuoteStatusReport_0.insert(QuoteMsgID_3.getString());
  FIX::QuoteRejectReason QuoteRejectReason_1(13);
  msg.set(QuoteRejectReason_1);
  QuoteStatusReport_0.insert(QuoteRejectReason_1.getString());
  FIX::QuoteReqID QuoteReqID_6("STRING_1717868711");
  msg.set(QuoteReqID_6);
  QuoteStatusReport_0.insert(QuoteReqID_6.getString());
  FIX::QuoteRespID QuoteRespID_3("STRING_747880544");
  msg.set(QuoteRespID_3);
  QuoteStatusReport_0.insert(QuoteRespID_3.getString());
  FIX::QuoteStatus QuoteStatus_1(8);
  msg.set(QuoteStatus_1);
  QuoteStatusReport_0.insert(QuoteStatus_1.getString());
  FIX::QuoteStatusReqID QuoteStatusReqID_0("STRING_305011864");
  msg.set(QuoteStatusReqID_0);
  QuoteStatusReport_0.insert(QuoteStatusReqID_0.getString());
  FIX::QuoteType QuoteType_11(1);
  msg.set(QuoteType_11);
  QuoteStatusReport_0.insert(QuoteType_11.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_2;
  SettlCurrBidFxRate_2.setString("4477198");
  msg.set(SettlCurrBidFxRate_2);
  QuoteStatusReport_0.insert(SettlCurrBidFxRate_2.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_9('M');
  msg.set(SettlCurrFxRateCalc_9);
  QuoteStatusReport_0.insert(SettlCurrFxRateCalc_9.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_2;
  SettlCurrOfferFxRate_2.setString("10392523");
  msg.set(SettlCurrOfferFxRate_2);
  QuoteStatusReport_0.insert(SettlCurrOfferFxRate_2.getString());
  FIX::SettlDate SettlDate_37("LOCALMKTDATE_1752886973");
  msg.set(SettlDate_37);
  QuoteStatusReport_0.insert(SettlDate_37.getString());
  FIX::SettlDate2 SettlDate2_15("LOCALMKTDATE_1550002427");
  msg.set(SettlDate2_15);
  QuoteStatusReport_0.insert(SettlDate2_15.getString());
  FIX::SettlType SettlType_28("STRING_0");
  msg.set(SettlType_28);
  QuoteStatusReport_0.insert(SettlType_28.getString());
  FIX::Side Side_45('C');
  msg.set(Side_45);
  QuoteStatusReport_0.insert(Side_45.getString());
  FIX::Text Text_74("STRING_230907479");
  msg.set(Text_74);
  QuoteStatusReport_0.insert(Text_74.getString());
  FIX::TradingSessionID TradingSessionID_67("STRING_5");
  msg.set(TradingSessionID_67);
  QuoteStatusReport_0.insert(TradingSessionID_67.getString());
  FIX::TradingSessionSubID TradingSessionSubID_67("STRING_5");
  msg.set(TradingSessionSubID_67);
  QuoteStatusReport_0.insert(TradingSessionSubID_67.getString());
  FIX::TransactTime TransactTime_51(FIX::UTCTIMESTAMP(7, 40, 19, 10, 82017));
  msg.set(TransactTime_51);
  QuoteStatusReport_0.insert(TransactTime_51.getString());
  FIX::ValidUntilTime ValidUntilTime_8(FIX::UTCTIMESTAMP(8, 42, 21, 14, 82017));
  msg.set(ValidUntilTime_8);
  QuoteStatusReport_0.insert(ValidUntilTime_8.getString());
  all_values.push_back(QuoteStatusReport_0);

  // FinancingDetails
  multiset<string> FinancingDetails_24;
  FIX::AgreementCurrency AgreementCurrency_24("GBP");
  msg.set(AgreementCurrency_24);
  FinancingDetails_24.insert(AgreementCurrency_24.getString());
  FIX::AgreementDate AgreementDate_24("LOCALMKTDATE_801857492");
  msg.set(AgreementDate_24);
  FinancingDetails_24.insert(AgreementDate_24.getString());
  FIX::AgreementDesc AgreementDesc_24("STRING_1221019484");
  msg.set(AgreementDesc_24);
  FinancingDetails_24.insert(AgreementDesc_24.getString());
  FIX::AgreementID AgreementID_24("STRING_476887170");
  msg.set(AgreementID_24);
  FinancingDetails_24.insert(AgreementID_24.getString());
  FIX::DeliveryType DeliveryType_24(0);
  msg.set(DeliveryType_24);
  FinancingDetails_24.insert(DeliveryType_24.getString());
  FIX::EndDate EndDate_24("LOCALMKTDATE_236456189");
  msg.set(EndDate_24);
  FinancingDetails_24.insert(EndDate_24.getString());
  FIX::MarginRatio MarginRatio_24;
  MarginRatio_24.setString("69.890000");
  msg.set(MarginRatio_24);
  FinancingDetails_24.insert(MarginRatio_24.getString());
  FIX::StartDate StartDate_24("LOCALMKTDATE_195510430");
  msg.set(StartDate_24);
  FinancingDetails_24.insert(StartDate_24.getString());
  FIX::TerminationType TerminationType_24(1);
  msg.set(TerminationType_24);
  FinancingDetails_24.insert(TerminationType_24.getString());
  all_values.push_back(FinancingDetails_24);

  // Instrument
  multiset<string> Instrument_64;
  FIX::AttachmentPoint AttachmentPoint_64;
  AttachmentPoint_64.setString("3.140000");
  msg.set(AttachmentPoint_64);
  Instrument_64.insert(AttachmentPoint_64.getString());
  FIX::CFICode CFICode_64("STRING_1745512857");
  msg.set(CFICode_64);
  Instrument_64.insert(CFICode_64.getString());
  FIX::CPProgram CPProgram_64(1);
  msg.set(CPProgram_64);
  Instrument_64.insert(CPProgram_64.getString());
  FIX::CPRegType CPRegType_64("STRING_1274907333");
  msg.set(CPRegType_64);
  Instrument_64.insert(CPRegType_64.getString());
  FIX::CapPrice CapPrice_64;
  CapPrice_64.setString("19764203");
  msg.set(CapPrice_64);
  Instrument_64.insert(CapPrice_64.getString());
  FIX::ContractMultiplier ContractMultiplier_64;
  ContractMultiplier_64.setString("19555601");
  msg.set(ContractMultiplier_64);
  Instrument_64.insert(ContractMultiplier_64.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_64(2);
  msg.set(ContractMultiplierUnit_64);
  Instrument_64.insert(ContractMultiplierUnit_64.getString());
  FIX::ContractSettlMonth ContractSettlMonth_64("MONTHYEAR_1400409558");
  msg.set(ContractSettlMonth_64);
  Instrument_64.insert(ContractSettlMonth_64.getString());
  FIX::CountryOfIssue CountryOfIssue_64("COUNTRY_1376828300");
  msg.set(CountryOfIssue_64);
  Instrument_64.insert(CountryOfIssue_64.getString());
  FIX::CouponPaymentDate CouponPaymentDate_64("LOCALMKTDATE_121459777");
  msg.set(CouponPaymentDate_64);
  Instrument_64.insert(CouponPaymentDate_64.getString());
  FIX::CouponRate CouponRate_64;
  CouponRate_64.setString("59.490000");
  msg.set(CouponRate_64);
  Instrument_64.insert(CouponRate_64.getString());
  FIX::CreditRating CreditRating_64("STRING_631385974");
  msg.set(CreditRating_64);
  Instrument_64.insert(CreditRating_64.getString());
  FIX::DatedDate DatedDate_64("LOCALMKTDATE_675327765");
  msg.set(DatedDate_64);
  Instrument_64.insert(DatedDate_64.getString());
  FIX::DetachmentPoint DetachmentPoint_64;
  DetachmentPoint_64.setString("16.020000");
  msg.set(DetachmentPoint_64);
  Instrument_64.insert(DetachmentPoint_64.getString());
  FIX::EncodedIssuer EncodedIssuer_64("DATA_2096058398");
  msg.set(EncodedIssuer_64);
  Instrument_64.insert(EncodedIssuer_64.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_64(888760181);
  msg.set(EncodedIssuerLen_64);
  Instrument_64.insert(EncodedIssuerLen_64.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_64("DATA_1820647244");
  msg.set(EncodedSecurityDesc_64);
  Instrument_64.insert(EncodedSecurityDesc_64.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_64(1918587111);
  msg.set(EncodedSecurityDescLen_64);
  Instrument_64.insert(EncodedSecurityDescLen_64.getString());
  FIX::ExerciseStyle ExerciseStyle_64(1);
  msg.set(ExerciseStyle_64);
  Instrument_64.insert(ExerciseStyle_64.getString());
  FIX::Factor Factor_64;
  Factor_64.setString("10704232");
  msg.set(Factor_64);
  Instrument_64.insert(Factor_64.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_64(false);
  msg.set(FlexProductEligibilityIndicator_64);
  Instrument_64.insert(FlexProductEligibilityIndicator_64.getString());
  FIX::FlexibleIndicator FlexibleIndicator_64(false);
  msg.set(FlexibleIndicator_64);
  Instrument_64.insert(FlexibleIndicator_64.getString());
  FIX::FloorPrice FloorPrice_64;
  FloorPrice_64.setString("16241108");
  msg.set(FloorPrice_64);
  Instrument_64.insert(FloorPrice_64.getString());
  FIX::FlowScheduleType FlowScheduleType_64(0);
  msg.set(FlowScheduleType_64);
  Instrument_64.insert(FlowScheduleType_64.getString());
  FIX::InstrRegistry InstrRegistry_64("STRING_20563183");
  msg.set(InstrRegistry_64);
  Instrument_64.insert(InstrRegistry_64.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_64('2');
  msg.set(InstrmtAssignmentMethod_64);
  Instrument_64.insert(InstrmtAssignmentMethod_64.getString());
  FIX::InterestAccrualDate InterestAccrualDate_64("LOCALMKTDATE_763819094");
  msg.set(InterestAccrualDate_64);
  Instrument_64.insert(InterestAccrualDate_64.getString());
  FIX::IssueDate IssueDate_64("LOCALMKTDATE_257019372");
  msg.set(IssueDate_64);
  Instrument_64.insert(IssueDate_64.getString());
  FIX::Issuer Issuer_64("STRING_878121313");
  msg.set(Issuer_64);
  Instrument_64.insert(Issuer_64.getString());
  FIX::ListMethod ListMethod_64(0);
  msg.set(ListMethod_64);
  Instrument_64.insert(ListMethod_64.getString());
  FIX::LocaleOfIssue LocaleOfIssue_64("STRING_1532727948");
  msg.set(LocaleOfIssue_64);
  Instrument_64.insert(LocaleOfIssue_64.getString());
  FIX::MaturityDate MaturityDate_64("LOCALMKTDATE_1408131627");
  msg.set(MaturityDate_64);
  Instrument_64.insert(MaturityDate_64.getString());
  FIX::MaturityMonthYear MaturityMonthYear_64("MONTHYEAR_557358734");
  msg.set(MaturityMonthYear_64);
  Instrument_64.insert(MaturityMonthYear_64.getString());
  FIX::MaturityTime MaturityTime_64("TZTIMEONLY_1432862476");
  msg.set(MaturityTime_64);
  Instrument_64.insert(MaturityTime_64.getString());
  FIX::MinPriceIncrement MinPriceIncrement_64;
  MinPriceIncrement_64.setString("5355553");
  msg.set(MinPriceIncrement_64);
  Instrument_64.insert(MinPriceIncrement_64.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_64;
  MinPriceIncrementAmount_64.setString("3862954");
  msg.set(MinPriceIncrementAmount_64);
  Instrument_64.insert(MinPriceIncrementAmount_64.getString());
  FIX::NTPositionLimit NTPositionLimit_64(1240939025);
  msg.set(NTPositionLimit_64);
  Instrument_64.insert(NTPositionLimit_64.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_64;
  NotionalPercentageOutstanding_64.setString("61.980000");
  msg.set(NotionalPercentageOutstanding_64);
  Instrument_64.insert(NotionalPercentageOutstanding_64.getString());
  FIX::OptAttribute OptAttribute_64('1');
  msg.set(OptAttribute_64);
  Instrument_64.insert(OptAttribute_64.getString());
  FIX::OptPayoutAmount OptPayoutAmount_64;
  OptPayoutAmount_64.setString("4702836");
  msg.set(OptPayoutAmount_64);
  Instrument_64.insert(OptPayoutAmount_64.getString());
  FIX::OptPayoutType OptPayoutType_64(3);
  msg.set(OptPayoutType_64);
  Instrument_64.insert(OptPayoutType_64.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_64;
  OriginalNotionalPercentageOutstanding_64.setString("72.820000");
  msg.set(OriginalNotionalPercentageOutstanding_64);
  Instrument_64.insert(OriginalNotionalPercentageOutstanding_64.getString());
  FIX::Pool Pool_64("STRING_1101669651");
  msg.set(Pool_64);
  Instrument_64.insert(Pool_64.getString());
  FIX::PositionLimit PositionLimit_64(453310092);
  msg.set(PositionLimit_64);
  Instrument_64.insert(PositionLimit_64.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_64("STRING_STD");
  msg.set(PriceQuoteMethod_64);
  Instrument_64.insert(PriceQuoteMethod_64.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_64("STRING_1050244401");
  msg.set(PriceUnitOfMeasure_64);
  Instrument_64.insert(PriceUnitOfMeasure_64.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_64;
  PriceUnitOfMeasureQty_64.setString("13420702");
  msg.set(PriceUnitOfMeasureQty_64);
  Instrument_64.insert(PriceUnitOfMeasureQty_64.getString());
  FIX::Product Product_66(4);
  msg.set(Product_66);
  Instrument_64.insert(Product_66.getString());
  FIX::ProductComplex ProductComplex_64("STRING_821347865");
  msg.set(ProductComplex_64);
  Instrument_64.insert(ProductComplex_64.getString());
  FIX::PutOrCall PutOrCall_64(1);
  msg.set(PutOrCall_64);
  Instrument_64.insert(PutOrCall_64.getString());
  FIX::RedemptionDate RedemptionDate_64("LOCALMKTDATE_1271725697");
  msg.set(RedemptionDate_64);
  Instrument_64.insert(RedemptionDate_64.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_64("STRING_1823923758");
  msg.set(RepoCollateralSecurityType_64);
  Instrument_64.insert(RepoCollateralSecurityType_64.getString());
  FIX::RepurchaseRate RepurchaseRate_64;
  RepurchaseRate_64.setString("23.800000");
  msg.set(RepurchaseRate_64);
  Instrument_64.insert(RepurchaseRate_64.getString());
  FIX::RepurchaseTerm RepurchaseTerm_64(748352851);
  msg.set(RepurchaseTerm_64);
  Instrument_64.insert(RepurchaseTerm_64.getString());
  FIX::RestructuringType RestructuringType_64("STRING_XR");
  msg.set(RestructuringType_64);
  Instrument_64.insert(RestructuringType_64.getString());
  FIX::SecurityDesc SecurityDesc_64("STRING_636065564");
  msg.set(SecurityDesc_64);
  Instrument_64.insert(SecurityDesc_64.getString());
  FIX::SecurityExchange SecurityExchange_64("EXCHANGE_701867176");
  msg.set(SecurityExchange_64);
  Instrument_64.insert(SecurityExchange_64.getString());
  FIX::SecurityGroup SecurityGroup_64("STRING_97208941");
  msg.set(SecurityGroup_64);
  Instrument_64.insert(SecurityGroup_64.getString());
  FIX::SecurityID SecurityID_64("STRING_893084936");
  msg.set(SecurityID_64);
  Instrument_64.insert(SecurityID_64.getString());
  FIX::SecurityIDSource SecurityIDSource_64("STRING_E");
  msg.set(SecurityIDSource_64);
  Instrument_64.insert(SecurityIDSource_64.getString());
  FIX::SecurityStatus SecurityStatus_64("STRING_1");
  msg.set(SecurityStatus_64);
  Instrument_64.insert(SecurityStatus_64.getString());
  FIX::SecuritySubType SecuritySubType_65("STRING_278329237");
  msg.set(SecuritySubType_65);
  Instrument_64.insert(SecuritySubType_65.getString());
  FIX::SecurityType SecurityType_66("STRING_TAXA");
  msg.set(SecurityType_66);
  Instrument_64.insert(SecurityType_66.getString());
  FIX::Seniority Seniority_64("STRING_SR");
  msg.set(Seniority_64);
  Instrument_64.insert(Seniority_64.getString());
  FIX::SettlMethod SettlMethod_64('P');
  msg.set(SettlMethod_64);
  Instrument_64.insert(SettlMethod_64.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_64("STRING_1376191781");
  msg.set(SettleOnOpenFlag_64);
  Instrument_64.insert(SettleOnOpenFlag_64.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_64("STRING_2000192622");
  msg.set(StateOrProvinceOfIssue_64);
  Instrument_64.insert(StateOrProvinceOfIssue_64.getString());
  FIX::StrikeCurrency StrikeCurrency_64("EUR");
  msg.set(StrikeCurrency_64);
  Instrument_64.insert(StrikeCurrency_64.getString());
  FIX::StrikeMultiplier StrikeMultiplier_64;
  StrikeMultiplier_64.setString("16394139");
  msg.set(StrikeMultiplier_64);
  Instrument_64.insert(StrikeMultiplier_64.getString());
  FIX::StrikePrice StrikePrice_64;
  StrikePrice_64.setString("12749307");
  msg.set(StrikePrice_64);
  Instrument_64.insert(StrikePrice_64.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_64(5);
  msg.set(StrikePriceBoundaryMethod_64);
  Instrument_64.insert(StrikePriceBoundaryMethod_64.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_64;
  StrikePriceBoundaryPrecision_64.setString("12.370000");
  msg.set(StrikePriceBoundaryPrecision_64);
  Instrument_64.insert(StrikePriceBoundaryPrecision_64.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_64(3);
  msg.set(StrikePriceDeterminationMethod_64);
  Instrument_64.insert(StrikePriceDeterminationMethod_64.getString());
  FIX::StrikeValue StrikeValue_64;
  StrikeValue_64.setString("12640067");
  msg.set(StrikeValue_64);
  Instrument_64.insert(StrikeValue_64.getString());
  FIX::Symbol Symbol_64("STRING_492926473");
  msg.set(Symbol_64);
  Instrument_64.insert(Symbol_64.getString());
  FIX::SymbolSfx SymbolSfx_64("STRING_CD");
  msg.set(SymbolSfx_64);
  Instrument_64.insert(SymbolSfx_64.getString());
  FIX::TimeUnit TimeUnit_64("STRING_Wk");
  msg.set(TimeUnit_64);
  Instrument_64.insert(TimeUnit_64.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_64(3);
  msg.set(UnderlyingPriceDeterminationMethod_64);
  Instrument_64.insert(UnderlyingPriceDeterminationMethod_64.getString());
  FIX::UnitOfMeasure UnitOfMeasure_64("STRING_USD");
  msg.set(UnitOfMeasure_64);
  Instrument_64.insert(UnitOfMeasure_64.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_64;
  UnitOfMeasureQty_64.setString("1270684");
  msg.set(UnitOfMeasureQty_64);
  Instrument_64.insert(UnitOfMeasureQty_64.getString());
  FIX::ValuationMethod ValuationMethod_64("STRING_FUT");
  msg.set(ValuationMethod_64);
  Instrument_64.insert(ValuationMethod_64.getString());
  all_values.push_back(Instrument_64);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_122;
    FIX::ComplexEventCondition ComplexEventCondition_122(1);
    noComplexEvents_0_0.set(ComplexEventCondition_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventCondition_122.getString());
    FIX::ComplexEventPrice ComplexEventPrice_122;
    ComplexEventPrice_122.setString("5668238");
    noComplexEvents_0_0.set(ComplexEventPrice_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPrice_122.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_122(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceBoundaryMethod_122.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_122;
    ComplexEventPriceBoundaryPrecision_122.setString("63.540000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceBoundaryPrecision_122.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_122(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceTimeType_122.getString());
    FIX::ComplexEventType ComplexEventType_122(2);
    noComplexEvents_0_0.set(ComplexEventType_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventType_122.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_122;
    ComplexOptPayoutAmount_122.setString("1242376");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexOptPayoutAmount_122.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_122);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_252;
      FIX::ComplexEventEndDate ComplexEventEndDate_252(FIX::UTCTIMESTAMP(0, 41, 14, 9, 42012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_252);
      ComplexEventDates_NoComplexEventDates_252.insert(ComplexEventEndDate_252.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_252(FIX::UTCTIMESTAMP(22, 35, 43, 25, 52008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_252);
      ComplexEventDates_NoComplexEventDates_252.insert(ComplexEventStartDate_252.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_252);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_493;
        FIX::ComplexEventEndTime ComplexEventEndTime_493(FIX::UTCTIMEONLY(2, 38, 44));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_493);
        ComplexEventTimes_NoComplexEventTimes_493.insert(ComplexEventEndTime_493.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_493(FIX::UTCTIMEONLY(4, 36, 6));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_493);
        ComplexEventTimes_NoComplexEventTimes_493.insert(ComplexEventStartTime_493.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_493);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_494;
        FIX::ComplexEventEndTime ComplexEventEndTime_494(FIX::UTCTIMEONLY(7, 20, 45));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_494);
        ComplexEventTimes_NoComplexEventTimes_494.insert(ComplexEventEndTime_494.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_494(FIX::UTCTIMEONLY(4, 8, 58));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_494);
        ComplexEventTimes_NoComplexEventTimes_494.insert(ComplexEventStartTime_494.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_494);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_253;
      FIX::ComplexEventEndDate ComplexEventEndDate_253(FIX::UTCTIMESTAMP(8, 40, 8, 13, 122013));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_253);
      ComplexEventDates_NoComplexEventDates_253.insert(ComplexEventEndDate_253.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_253(FIX::UTCTIMESTAMP(13, 24, 5, 15, 102007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_253);
      ComplexEventDates_NoComplexEventDates_253.insert(ComplexEventStartDate_253.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_253);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_495;
        FIX::ComplexEventEndTime ComplexEventEndTime_495(FIX::UTCTIMEONLY(1, 22, 23));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_495);
        ComplexEventTimes_NoComplexEventTimes_495.insert(ComplexEventEndTime_495.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_495(FIX::UTCTIMEONLY(14, 51, 46));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_495);
        ComplexEventTimes_NoComplexEventTimes_495.insert(ComplexEventStartTime_495.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_495);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_496;
        FIX::ComplexEventEndTime ComplexEventEndTime_496(FIX::UTCTIMEONLY(2, 58, 53));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_496);
        ComplexEventTimes_NoComplexEventTimes_496.insert(ComplexEventEndTime_496.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_496(FIX::UTCTIMEONLY(3, 1, 39));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_496);
        ComplexEventTimes_NoComplexEventTimes_496.insert(ComplexEventStartTime_496.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_496);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_497;
        FIX::ComplexEventEndTime ComplexEventEndTime_497(FIX::UTCTIMEONLY(13, 11, 30));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_497);
        ComplexEventTimes_NoComplexEventTimes_497.insert(ComplexEventEndTime_497.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_497(FIX::UTCTIMEONLY(2, 11, 16));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_497);
        ComplexEventTimes_NoComplexEventTimes_497.insert(ComplexEventStartTime_497.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_497);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_124;
    FIX::EventDate EventDate_124("LOCALMKTDATE_1518505175");
    noEvents_0_0.set(EventDate_124);
    EvntGrp_NoEvents_124.insert(EventDate_124.getString());
    FIX::EventPx EventPx_124;
    EventPx_124.setString("14088600");
    noEvents_0_0.set(EventPx_124);
    EvntGrp_NoEvents_124.insert(EventPx_124.getString());
    FIX::EventText EventText_124("STRING_784010118");
    noEvents_0_0.set(EventText_124);
    EvntGrp_NoEvents_124.insert(EventText_124.getString());
    FIX::EventTime EventTime_124(FIX::UTCTIMESTAMP(20, 2, 27, 17, 12001));
    noEvents_0_0.set(EventTime_124);
    EvntGrp_NoEvents_124.insert(EventTime_124.getString());
    FIX::EventType EventType_124(6);
    noEvents_0_0.set(EventType_124);
    EvntGrp_NoEvents_124.insert(EventType_124.getString());
    all_values.push_back(EvntGrp_NoEvents_124);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_118;
    FIX::InstrumentPartyID InstrumentPartyID_118("STRING_790953026");
    noInstrumentParties_0_0.set(InstrumentPartyID_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyID_118.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_118('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyIDSource_118.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_118(640271415);
    noInstrumentParties_0_0.set(InstrumentPartyRole_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyRole_118.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_118);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230;
      FIX::InstrumentPartySubID InstrumentPartySubID_230("STRING_882546302");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_230);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230.insert(InstrumentPartySubID_230.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_230(2061723908);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_230);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230.insert(InstrumentPartySubIDType_230.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231;
      FIX::InstrumentPartySubID InstrumentPartySubID_231("STRING_563652565");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_231);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231.insert(InstrumentPartySubID_231.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_231(742320321);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_231);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231.insert(InstrumentPartySubIDType_231.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232;
      FIX::InstrumentPartySubID InstrumentPartySubID_232("STRING_1602306602");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_232);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232.insert(InstrumentPartySubID_232.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_232(530649476);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_232);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232.insert(InstrumentPartySubIDType_232.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_119;
    FIX::InstrumentPartyID InstrumentPartyID_119("STRING_1879438362");
    noInstrumentParties_0_1.set(InstrumentPartyID_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyID_119.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_119('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyIDSource_119.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_119(179491799);
    noInstrumentParties_0_1.set(InstrumentPartyRole_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyRole_119.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_119);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233;
      FIX::InstrumentPartySubID InstrumentPartySubID_233("STRING_509805470");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_233);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233.insert(InstrumentPartySubID_233.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_233(280720009);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_233);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233.insert(InstrumentPartySubIDType_233.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234;
      FIX::InstrumentPartySubID InstrumentPartySubID_234("STRING_1876313415");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_234);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234.insert(InstrumentPartySubID_234.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_234(613918627);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_234);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234.insert(InstrumentPartySubIDType_234.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_120;
    FIX::InstrumentPartyID InstrumentPartyID_120("STRING_490105265");
    noInstrumentParties_0_2.set(InstrumentPartyID_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyID_120.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_120('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyIDSource_120.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_120(2022778648);
    noInstrumentParties_0_2.set(InstrumentPartyRole_120);
    InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyRole_120.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_120);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235;
      FIX::InstrumentPartySubID InstrumentPartySubID_235("STRING_882824491");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_235);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235.insert(InstrumentPartySubID_235.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_235(568904165);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_235);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235.insert(InstrumentPartySubIDType_235.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236;
      FIX::InstrumentPartySubID InstrumentPartySubID_236("STRING_68257638");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_236);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236.insert(InstrumentPartySubID_236.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_236(168351711);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_236);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236.insert(InstrumentPartySubIDType_236.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237;
      FIX::InstrumentPartySubID InstrumentPartySubID_237("STRING_1954109570");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_237);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237.insert(InstrumentPartySubID_237.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_237(1209083622);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_237);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237.insert(InstrumentPartySubIDType_237.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_134;
    FIX::SecurityAltID SecurityAltID_134("STRING_1096016408");
    noSecurityAltID_0_0.set(SecurityAltID_134);
    SecAltIDGrp_NoSecurityAltID_134.insert(SecurityAltID_134.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_134("STRING_570278749");
    noSecurityAltID_0_0.set(SecurityAltIDSource_134);
    SecAltIDGrp_NoSecurityAltID_134.insert(SecurityAltIDSource_134.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_134);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_135;
    FIX::SecurityAltID SecurityAltID_135("STRING_2122151880");
    noSecurityAltID_0_1.set(SecurityAltID_135);
    SecAltIDGrp_NoSecurityAltID_135.insert(SecurityAltID_135.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_135("STRING_1131846311");
    noSecurityAltID_0_1.set(SecurityAltIDSource_135);
    SecAltIDGrp_NoSecurityAltID_135.insert(SecurityAltIDSource_135.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_135);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_128;
  FIX::SecurityXML SecurityXML_129("XMLDATA_1210550164");
  msg.set(SecurityXML_129);
  FIX::SecurityXMLLen SecurityXMLLen_64(858820605);
  msg.set(SecurityXMLLen_64);
  FIX::SecurityXMLSchema SecurityXMLSchema_64("STRING_2014392613");
  msg.set(SecurityXMLSchema_64);
  SecurityXML_128.insert(SecurityXMLSchema_64.getString());
  all_values.push_back(SecurityXML_128);

  // LegQuotStatGrp
  // Group LegQuotStatGrp.NoLegs
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_0;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_0;
    FIX::LegOrderQty LegOrderQty_17;
    LegOrderQty_17.setString("14224731");
    noLegs_0_0.set(LegOrderQty_17);
    LegQuotStatGrp_NoLegs_0.insert(LegOrderQty_17.getString());
    FIX::LegQty LegQty_17;
    LegQty_17.setString("6092292");
    noLegs_0_0.set(LegQty_17);
    LegQuotStatGrp_NoLegs_0.insert(LegQty_17.getString());
    FIX::LegSettlDate LegSettlDate_17("LOCALMKTDATE_579613378");
    noLegs_0_0.set(LegSettlDate_17);
    LegQuotStatGrp_NoLegs_0.insert(LegSettlDate_17.getString());
    FIX::LegSettlType LegSettlType_17('1');
    noLegs_0_0.set(LegSettlType_17);
    LegQuotStatGrp_NoLegs_0.insert(LegSettlType_17.getString());
    FIX::LegSwapType LegSwapType_17(2);
    noLegs_0_0.set(LegSwapType_17);
    LegQuotStatGrp_NoLegs_0.insert(LegSwapType_17.getString());
    all_values.push_back(LegQuotStatGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_86;
    FIX::EncodedLegIssuer EncodedLegIssuer_86("DATA_244199754");
    noLegs_0_0.set(EncodedLegIssuer_86);
    InstrumentLeg_86.insert(EncodedLegIssuer_86.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_86(2132614447);
    noLegs_0_0.set(EncodedLegIssuerLen_86);
    InstrumentLeg_86.insert(EncodedLegIssuerLen_86.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_86("DATA_2070817085");
    noLegs_0_0.set(EncodedLegSecurityDesc_86);
    InstrumentLeg_86.insert(EncodedLegSecurityDesc_86.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_86(754005224);
    noLegs_0_0.set(EncodedLegSecurityDescLen_86);
    InstrumentLeg_86.insert(EncodedLegSecurityDescLen_86.getString());
    FIX::LegCFICode LegCFICode_86("STRING_265850808");
    noLegs_0_0.set(LegCFICode_86);
    InstrumentLeg_86.insert(LegCFICode_86.getString());
    FIX::LegContractMultiplier LegContractMultiplier_86;
    LegContractMultiplier_86.setString("17996468");
    noLegs_0_0.set(LegContractMultiplier_86);
    InstrumentLeg_86.insert(LegContractMultiplier_86.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_86(1367923851);
    noLegs_0_0.set(LegContractMultiplierUnit_86);
    InstrumentLeg_86.insert(LegContractMultiplierUnit_86.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_86("MONTHYEAR_755956073");
    noLegs_0_0.set(LegContractSettlMonth_86);
    InstrumentLeg_86.insert(LegContractSettlMonth_86.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_86("COUNTRY_899498148");
    noLegs_0_0.set(LegCountryOfIssue_86);
    InstrumentLeg_86.insert(LegCountryOfIssue_86.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_86("LOCALMKTDATE_1243218852");
    noLegs_0_0.set(LegCouponPaymentDate_86);
    InstrumentLeg_86.insert(LegCouponPaymentDate_86.getString());
    FIX::LegCouponRate LegCouponRate_86;
    LegCouponRate_86.setString("14.570000");
    noLegs_0_0.set(LegCouponRate_86);
    InstrumentLeg_86.insert(LegCouponRate_86.getString());
    FIX::LegCreditRating LegCreditRating_86("STRING_1782322639");
    noLegs_0_0.set(LegCreditRating_86);
    InstrumentLeg_86.insert(LegCreditRating_86.getString());
    FIX::LegCurrency LegCurrency_86("CAN");
    noLegs_0_0.set(LegCurrency_86);
    InstrumentLeg_86.insert(LegCurrency_86.getString());
    FIX::LegDatedDate LegDatedDate_86("LOCALMKTDATE_1950674350");
    noLegs_0_0.set(LegDatedDate_86);
    InstrumentLeg_86.insert(LegDatedDate_86.getString());
    FIX::LegExerciseStyle LegExerciseStyle_86(1618748939);
    noLegs_0_0.set(LegExerciseStyle_86);
    InstrumentLeg_86.insert(LegExerciseStyle_86.getString());
    FIX::LegFactor LegFactor_86;
    LegFactor_86.setString("11599290");
    noLegs_0_0.set(LegFactor_86);
    InstrumentLeg_86.insert(LegFactor_86.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_86(1134389556);
    noLegs_0_0.set(LegFlowScheduleType_86);
    InstrumentLeg_86.insert(LegFlowScheduleType_86.getString());
    FIX::LegInstrRegistry LegInstrRegistry_86("STRING_567281699");
    noLegs_0_0.set(LegInstrRegistry_86);
    InstrumentLeg_86.insert(LegInstrRegistry_86.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_86("LOCALMKTDATE_1730207818");
    noLegs_0_0.set(LegInterestAccrualDate_86);
    InstrumentLeg_86.insert(LegInterestAccrualDate_86.getString());
    FIX::LegIssueDate LegIssueDate_86("LOCALMKTDATE_1109057789");
    noLegs_0_0.set(LegIssueDate_86);
    InstrumentLeg_86.insert(LegIssueDate_86.getString());
    FIX::LegIssuer LegIssuer_86("STRING_1699128011");
    noLegs_0_0.set(LegIssuer_86);
    InstrumentLeg_86.insert(LegIssuer_86.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_86("STRING_793274334");
    noLegs_0_0.set(LegLocaleOfIssue_86);
    InstrumentLeg_86.insert(LegLocaleOfIssue_86.getString());
    FIX::LegMaturityDate LegMaturityDate_86("LOCALMKTDATE_1967878394");
    noLegs_0_0.set(LegMaturityDate_86);
    InstrumentLeg_86.insert(LegMaturityDate_86.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_86("MONTHYEAR_1566036976");
    noLegs_0_0.set(LegMaturityMonthYear_86);
    InstrumentLeg_86.insert(LegMaturityMonthYear_86.getString());
    FIX::LegMaturityTime LegMaturityTime_86("TZTIMEONLY_1918064759");
    noLegs_0_0.set(LegMaturityTime_86);
    InstrumentLeg_86.insert(LegMaturityTime_86.getString());
    FIX::LegOptAttribute LegOptAttribute_86('1');
    noLegs_0_0.set(LegOptAttribute_86);
    InstrumentLeg_86.insert(LegOptAttribute_86.getString());
    FIX::LegOptionRatio LegOptionRatio_86;
    LegOptionRatio_86.setString("277826");
    noLegs_0_0.set(LegOptionRatio_86);
    InstrumentLeg_86.insert(LegOptionRatio_86.getString());
    FIX::LegPool LegPool_86("STRING_350194489");
    noLegs_0_0.set(LegPool_86);
    InstrumentLeg_86.insert(LegPool_86.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_86("STRING_1048506917");
    noLegs_0_0.set(LegPriceUnitOfMeasure_86);
    InstrumentLeg_86.insert(LegPriceUnitOfMeasure_86.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_86;
    LegPriceUnitOfMeasureQty_86.setString("3689666");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_86);
    InstrumentLeg_86.insert(LegPriceUnitOfMeasureQty_86.getString());
    FIX::LegProduct LegProduct_86(594394243);
    noLegs_0_0.set(LegProduct_86);
    InstrumentLeg_86.insert(LegProduct_86.getString());
    FIX::LegPutOrCall LegPutOrCall_86(1033637716);
    noLegs_0_0.set(LegPutOrCall_86);
    InstrumentLeg_86.insert(LegPutOrCall_86.getString());
    FIX::LegRatioQty LegRatioQty_86;
    LegRatioQty_86.setString("2923000");
    noLegs_0_0.set(LegRatioQty_86);
    InstrumentLeg_86.insert(LegRatioQty_86.getString());
    FIX::LegRedemptionDate LegRedemptionDate_86("LOCALMKTDATE_1348399468");
    noLegs_0_0.set(LegRedemptionDate_86);
    InstrumentLeg_86.insert(LegRedemptionDate_86.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_86("STRING_1299488524");
    noLegs_0_0.set(LegRepoCollateralSecurityType_86);
    InstrumentLeg_86.insert(LegRepoCollateralSecurityType_86.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_86;
    LegRepurchaseRate_86.setString("69.060000");
    noLegs_0_0.set(LegRepurchaseRate_86);
    InstrumentLeg_86.insert(LegRepurchaseRate_86.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_86(568839671);
    noLegs_0_0.set(LegRepurchaseTerm_86);
    InstrumentLeg_86.insert(LegRepurchaseTerm_86.getString());
    FIX::LegSecurityDesc LegSecurityDesc_86("STRING_2055444598");
    noLegs_0_0.set(LegSecurityDesc_86);
    InstrumentLeg_86.insert(LegSecurityDesc_86.getString());
    FIX::LegSecurityExchange LegSecurityExchange_86("EXCHANGE_843961406");
    noLegs_0_0.set(LegSecurityExchange_86);
    InstrumentLeg_86.insert(LegSecurityExchange_86.getString());
    FIX::LegSecurityID LegSecurityID_86("STRING_1812058523");
    noLegs_0_0.set(LegSecurityID_86);
    InstrumentLeg_86.insert(LegSecurityID_86.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_86("STRING_1938032407");
    noLegs_0_0.set(LegSecurityIDSource_86);
    InstrumentLeg_86.insert(LegSecurityIDSource_86.getString());
    FIX::LegSecuritySubType LegSecuritySubType_86("STRING_478800398");
    noLegs_0_0.set(LegSecuritySubType_86);
    InstrumentLeg_86.insert(LegSecuritySubType_86.getString());
    FIX::LegSecurityType LegSecurityType_86("STRING_1476697892");
    noLegs_0_0.set(LegSecurityType_86);
    InstrumentLeg_86.insert(LegSecurityType_86.getString());
    FIX::LegSide LegSide_86('1');
    noLegs_0_0.set(LegSide_86);
    InstrumentLeg_86.insert(LegSide_86.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_86("STRING_281991100");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_86);
    InstrumentLeg_86.insert(LegStateOrProvinceOfIssue_86.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_86("CAN");
    noLegs_0_0.set(LegStrikeCurrency_86);
    InstrumentLeg_86.insert(LegStrikeCurrency_86.getString());
    FIX::LegStrikePrice LegStrikePrice_86;
    LegStrikePrice_86.setString("14163806");
    noLegs_0_0.set(LegStrikePrice_86);
    InstrumentLeg_86.insert(LegStrikePrice_86.getString());
    FIX::LegSymbol LegSymbol_86("STRING_1515244883");
    noLegs_0_0.set(LegSymbol_86);
    InstrumentLeg_86.insert(LegSymbol_86.getString());
    FIX::LegSymbolSfx LegSymbolSfx_86("STRING_484047446");
    noLegs_0_0.set(LegSymbolSfx_86);
    InstrumentLeg_86.insert(LegSymbolSfx_86.getString());
    FIX::LegTimeUnit LegTimeUnit_86("STRING_377954798");
    noLegs_0_0.set(LegTimeUnit_86);
    InstrumentLeg_86.insert(LegTimeUnit_86.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_86("STRING_1066889246");
    noLegs_0_0.set(LegUnitOfMeasure_86);
    InstrumentLeg_86.insert(LegUnitOfMeasure_86.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_86;
    LegUnitOfMeasureQty_86.setString("12773217");
    noLegs_0_0.set(LegUnitOfMeasureQty_86);
    InstrumentLeg_86.insert(LegUnitOfMeasureQty_86.getString());
    all_values.push_back(InstrumentLeg_86);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_153;
      FIX::LegSecurityAltID LegSecurityAltID_153("STRING_485442575");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_153);
      LegSecAltIDGrp_NoLegSecurityAltID_153.insert(LegSecurityAltID_153.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_153("STRING_1047902891");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_153);
      LegSecAltIDGrp_NoLegSecurityAltID_153.insert(LegSecurityAltIDSource_153.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_153);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_154;
      FIX::LegSecurityAltID LegSecurityAltID_154("STRING_1441217462");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_154);
      LegSecAltIDGrp_NoLegSecurityAltID_154.insert(LegSecurityAltID_154.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_154("STRING_513225190");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_154);
      LegSecAltIDGrp_NoLegSecurityAltID_154.insert(LegSecurityAltIDSource_154.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_154);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_155;
      FIX::LegSecurityAltID LegSecurityAltID_155("STRING_1398097381");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_155);
      LegSecAltIDGrp_NoLegSecurityAltID_155.insert(LegSecurityAltID_155.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_155("STRING_342240731");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_155);
      LegSecAltIDGrp_NoLegSecurityAltID_155.insert(LegSecurityAltIDSource_155.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_155);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_42;
      FIX::LegStipulationType LegStipulationType_42("STRING_1992491624");
      noLegStipulations_0_1_0.set(LegStipulationType_42);
      LegStipulations_NoLegStipulations_42.insert(LegStipulationType_42.getString());
      FIX::LegStipulationValue LegStipulationValue_42("STRING_1375878447");
      noLegStipulations_0_1_0.set(LegStipulationValue_42);
      LegStipulations_NoLegStipulations_42.insert(LegStipulationValue_42.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_42);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_43;
      FIX::LegStipulationType LegStipulationType_43("STRING_1174491859");
      noLegStipulations_0_1_1.set(LegStipulationType_43);
      LegStipulations_NoLegStipulations_43.insert(LegStipulationType_43.getString());
      FIX::LegStipulationValue LegStipulationValue_43("STRING_1193407444");
      noLegStipulations_0_1_1.set(LegStipulationValue_43);
      LegStipulations_NoLegStipulations_43.insert(LegStipulationValue_43.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_43);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_114;
      FIX::NestedPartyID NestedPartyID_114("STRING_1118955118");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_114);
      NestedParties_NoNestedPartyIDs_114.insert(NestedPartyID_114.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_114('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_114);
      NestedParties_NoNestedPartyIDs_114.insert(NestedPartyIDSource_114.getString());
      FIX::NestedPartyRole NestedPartyRole_114(435844273);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_114);
      NestedParties_NoNestedPartyIDs_114.insert(NestedPartyRole_114.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_114);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_215;
        FIX::NestedPartySubID NestedPartySubID_215("STRING_1426821991");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_215);
        NstdPtysSubGrp_NoNestedPartySubIDs_215.insert(NestedPartySubID_215.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_215(226393032);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_215);
        NstdPtysSubGrp_NoNestedPartySubIDs_215.insert(NestedPartySubIDType_215.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_215);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_115;
      FIX::NestedPartyID NestedPartyID_115("STRING_294233274");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_115);
      NestedParties_NoNestedPartyIDs_115.insert(NestedPartyID_115.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_115('7');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_115);
      NestedParties_NoNestedPartyIDs_115.insert(NestedPartyIDSource_115.getString());
      FIX::NestedPartyRole NestedPartyRole_115(2115270886);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_115);
      NestedParties_NoNestedPartyIDs_115.insert(NestedPartyRole_115.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_115);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_216;
        FIX::NestedPartySubID NestedPartySubID_216("STRING_1703999420");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_216);
        NstdPtysSubGrp_NoNestedPartySubIDs_216.insert(NestedPartySubID_216.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_216(869110514);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_216);
        NstdPtysSubGrp_NoNestedPartySubIDs_216.insert(NestedPartySubIDType_216.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_216);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_217;
        FIX::NestedPartySubID NestedPartySubID_217("STRING_1992605032");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_217);
        NstdPtysSubGrp_NoNestedPartySubIDs_217.insert(NestedPartySubID_217.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_217(1071760655);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_217);
        NstdPtysSubGrp_NoNestedPartySubIDs_217.insert(NestedPartySubIDType_217.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_217);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_218;
        FIX::NestedPartySubID NestedPartySubID_218("STRING_1353157960");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_218);
        NstdPtysSubGrp_NoNestedPartySubIDs_218.insert(NestedPartySubID_218.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_218(223076182);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_218);
        NstdPtysSubGrp_NoNestedPartySubIDs_218.insert(NestedPartySubIDType_218.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_218);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_116;
      FIX::NestedPartyID NestedPartyID_116("STRING_2138649902");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_116);
      NestedParties_NoNestedPartyIDs_116.insert(NestedPartyID_116.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_116('4');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_116);
      NestedParties_NoNestedPartyIDs_116.insert(NestedPartyIDSource_116.getString());
      FIX::NestedPartyRole NestedPartyRole_116(421425726);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_116);
      NestedParties_NoNestedPartyIDs_116.insert(NestedPartyRole_116.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_116);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_219;
        FIX::NestedPartySubID NestedPartySubID_219("STRING_1530898984");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_219);
        NstdPtysSubGrp_NoNestedPartySubIDs_219.insert(NestedPartySubID_219.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_219(1862643188);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_219);
        NstdPtysSubGrp_NoNestedPartySubIDs_219.insert(NestedPartySubIDType_219.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_219);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_220;
        FIX::NestedPartySubID NestedPartySubID_220("STRING_989834019");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_220);
        NstdPtysSubGrp_NoNestedPartySubIDs_220.insert(NestedPartySubID_220.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_220(781512717);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_220);
        NstdPtysSubGrp_NoNestedPartySubIDs_220.insert(NestedPartySubIDType_220.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_220);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_221;
        FIX::NestedPartySubID NestedPartySubID_221("STRING_57400271");
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubID_221);
        NstdPtysSubGrp_NoNestedPartySubIDs_221.insert(NestedPartySubID_221.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_221(1872025825);
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubIDType_221);
        NstdPtysSubGrp_NoNestedPartySubIDs_221.insert(NestedPartySubIDType_221.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_221);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_1;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_1;
    FIX::LegOrderQty LegOrderQty_18;
    LegOrderQty_18.setString("6265206");
    noLegs_0_1.set(LegOrderQty_18);
    LegQuotStatGrp_NoLegs_1.insert(LegOrderQty_18.getString());
    FIX::LegQty LegQty_18;
    LegQty_18.setString("14332787");
    noLegs_0_1.set(LegQty_18);
    LegQuotStatGrp_NoLegs_1.insert(LegQty_18.getString());
    FIX::LegSettlDate LegSettlDate_18("LOCALMKTDATE_899034036");
    noLegs_0_1.set(LegSettlDate_18);
    LegQuotStatGrp_NoLegs_1.insert(LegSettlDate_18.getString());
    FIX::LegSettlType LegSettlType_18('1');
    noLegs_0_1.set(LegSettlType_18);
    LegQuotStatGrp_NoLegs_1.insert(LegSettlType_18.getString());
    FIX::LegSwapType LegSwapType_18(4);
    noLegs_0_1.set(LegSwapType_18);
    LegQuotStatGrp_NoLegs_1.insert(LegSwapType_18.getString());
    all_values.push_back(LegQuotStatGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_87;
    FIX::EncodedLegIssuer EncodedLegIssuer_87("DATA_2017989154");
    noLegs_0_1.set(EncodedLegIssuer_87);
    InstrumentLeg_87.insert(EncodedLegIssuer_87.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_87(1434691606);
    noLegs_0_1.set(EncodedLegIssuerLen_87);
    InstrumentLeg_87.insert(EncodedLegIssuerLen_87.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_87("DATA_249522667");
    noLegs_0_1.set(EncodedLegSecurityDesc_87);
    InstrumentLeg_87.insert(EncodedLegSecurityDesc_87.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_87(1833422031);
    noLegs_0_1.set(EncodedLegSecurityDescLen_87);
    InstrumentLeg_87.insert(EncodedLegSecurityDescLen_87.getString());
    FIX::LegCFICode LegCFICode_87("STRING_714029949");
    noLegs_0_1.set(LegCFICode_87);
    InstrumentLeg_87.insert(LegCFICode_87.getString());
    FIX::LegContractMultiplier LegContractMultiplier_87;
    LegContractMultiplier_87.setString("4759157");
    noLegs_0_1.set(LegContractMultiplier_87);
    InstrumentLeg_87.insert(LegContractMultiplier_87.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_87(2127655305);
    noLegs_0_1.set(LegContractMultiplierUnit_87);
    InstrumentLeg_87.insert(LegContractMultiplierUnit_87.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_87("MONTHYEAR_1470066185");
    noLegs_0_1.set(LegContractSettlMonth_87);
    InstrumentLeg_87.insert(LegContractSettlMonth_87.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_87("COUNTRY_443702938");
    noLegs_0_1.set(LegCountryOfIssue_87);
    InstrumentLeg_87.insert(LegCountryOfIssue_87.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_87("LOCALMKTDATE_556396032");
    noLegs_0_1.set(LegCouponPaymentDate_87);
    InstrumentLeg_87.insert(LegCouponPaymentDate_87.getString());
    FIX::LegCouponRate LegCouponRate_87;
    LegCouponRate_87.setString("19.570000");
    noLegs_0_1.set(LegCouponRate_87);
    InstrumentLeg_87.insert(LegCouponRate_87.getString());
    FIX::LegCreditRating LegCreditRating_87("STRING_1312813452");
    noLegs_0_1.set(LegCreditRating_87);
    InstrumentLeg_87.insert(LegCreditRating_87.getString());
    FIX::LegCurrency LegCurrency_87("CAN");
    noLegs_0_1.set(LegCurrency_87);
    InstrumentLeg_87.insert(LegCurrency_87.getString());
    FIX::LegDatedDate LegDatedDate_87("LOCALMKTDATE_518487764");
    noLegs_0_1.set(LegDatedDate_87);
    InstrumentLeg_87.insert(LegDatedDate_87.getString());
    FIX::LegExerciseStyle LegExerciseStyle_87(624593598);
    noLegs_0_1.set(LegExerciseStyle_87);
    InstrumentLeg_87.insert(LegExerciseStyle_87.getString());
    FIX::LegFactor LegFactor_87;
    LegFactor_87.setString("20895088");
    noLegs_0_1.set(LegFactor_87);
    InstrumentLeg_87.insert(LegFactor_87.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_87(1001483857);
    noLegs_0_1.set(LegFlowScheduleType_87);
    InstrumentLeg_87.insert(LegFlowScheduleType_87.getString());
    FIX::LegInstrRegistry LegInstrRegistry_87("STRING_1046019325");
    noLegs_0_1.set(LegInstrRegistry_87);
    InstrumentLeg_87.insert(LegInstrRegistry_87.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_87("LOCALMKTDATE_418634048");
    noLegs_0_1.set(LegInterestAccrualDate_87);
    InstrumentLeg_87.insert(LegInterestAccrualDate_87.getString());
    FIX::LegIssueDate LegIssueDate_87("LOCALMKTDATE_384899193");
    noLegs_0_1.set(LegIssueDate_87);
    InstrumentLeg_87.insert(LegIssueDate_87.getString());
    FIX::LegIssuer LegIssuer_87("STRING_761178865");
    noLegs_0_1.set(LegIssuer_87);
    InstrumentLeg_87.insert(LegIssuer_87.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_87("STRING_1408468067");
    noLegs_0_1.set(LegLocaleOfIssue_87);
    InstrumentLeg_87.insert(LegLocaleOfIssue_87.getString());
    FIX::LegMaturityDate LegMaturityDate_87("LOCALMKTDATE_1166411910");
    noLegs_0_1.set(LegMaturityDate_87);
    InstrumentLeg_87.insert(LegMaturityDate_87.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_87("MONTHYEAR_818579137");
    noLegs_0_1.set(LegMaturityMonthYear_87);
    InstrumentLeg_87.insert(LegMaturityMonthYear_87.getString());
    FIX::LegMaturityTime LegMaturityTime_87("TZTIMEONLY_1133010244");
    noLegs_0_1.set(LegMaturityTime_87);
    InstrumentLeg_87.insert(LegMaturityTime_87.getString());
    FIX::LegOptAttribute LegOptAttribute_87('1');
    noLegs_0_1.set(LegOptAttribute_87);
    InstrumentLeg_87.insert(LegOptAttribute_87.getString());
    FIX::LegOptionRatio LegOptionRatio_87;
    LegOptionRatio_87.setString("1043742");
    noLegs_0_1.set(LegOptionRatio_87);
    InstrumentLeg_87.insert(LegOptionRatio_87.getString());
    FIX::LegPool LegPool_87("STRING_2032044280");
    noLegs_0_1.set(LegPool_87);
    InstrumentLeg_87.insert(LegPool_87.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_87("STRING_1465377093");
    noLegs_0_1.set(LegPriceUnitOfMeasure_87);
    InstrumentLeg_87.insert(LegPriceUnitOfMeasure_87.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_87;
    LegPriceUnitOfMeasureQty_87.setString("20655362");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_87);
    InstrumentLeg_87.insert(LegPriceUnitOfMeasureQty_87.getString());
    FIX::LegProduct LegProduct_87(1902549787);
    noLegs_0_1.set(LegProduct_87);
    InstrumentLeg_87.insert(LegProduct_87.getString());
    FIX::LegPutOrCall LegPutOrCall_87(752585051);
    noLegs_0_1.set(LegPutOrCall_87);
    InstrumentLeg_87.insert(LegPutOrCall_87.getString());
    FIX::LegRatioQty LegRatioQty_87;
    LegRatioQty_87.setString("1675752");
    noLegs_0_1.set(LegRatioQty_87);
    InstrumentLeg_87.insert(LegRatioQty_87.getString());
    FIX::LegRedemptionDate LegRedemptionDate_87("LOCALMKTDATE_1588488170");
    noLegs_0_1.set(LegRedemptionDate_87);
    InstrumentLeg_87.insert(LegRedemptionDate_87.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_87("STRING_1466615001");
    noLegs_0_1.set(LegRepoCollateralSecurityType_87);
    InstrumentLeg_87.insert(LegRepoCollateralSecurityType_87.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_87;
    LegRepurchaseRate_87.setString("9.690000");
    noLegs_0_1.set(LegRepurchaseRate_87);
    InstrumentLeg_87.insert(LegRepurchaseRate_87.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_87(1568659827);
    noLegs_0_1.set(LegRepurchaseTerm_87);
    InstrumentLeg_87.insert(LegRepurchaseTerm_87.getString());
    FIX::LegSecurityDesc LegSecurityDesc_87("STRING_789197538");
    noLegs_0_1.set(LegSecurityDesc_87);
    InstrumentLeg_87.insert(LegSecurityDesc_87.getString());
    FIX::LegSecurityExchange LegSecurityExchange_87("EXCHANGE_1087193907");
    noLegs_0_1.set(LegSecurityExchange_87);
    InstrumentLeg_87.insert(LegSecurityExchange_87.getString());
    FIX::LegSecurityID LegSecurityID_87("STRING_2125055860");
    noLegs_0_1.set(LegSecurityID_87);
    InstrumentLeg_87.insert(LegSecurityID_87.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_87("STRING_1815779496");
    noLegs_0_1.set(LegSecurityIDSource_87);
    InstrumentLeg_87.insert(LegSecurityIDSource_87.getString());
    FIX::LegSecuritySubType LegSecuritySubType_87("STRING_252523712");
    noLegs_0_1.set(LegSecuritySubType_87);
    InstrumentLeg_87.insert(LegSecuritySubType_87.getString());
    FIX::LegSecurityType LegSecurityType_87("STRING_379089628");
    noLegs_0_1.set(LegSecurityType_87);
    InstrumentLeg_87.insert(LegSecurityType_87.getString());
    FIX::LegSide LegSide_87('1');
    noLegs_0_1.set(LegSide_87);
    InstrumentLeg_87.insert(LegSide_87.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_87("STRING_771011476");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_87);
    InstrumentLeg_87.insert(LegStateOrProvinceOfIssue_87.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_87("USD");
    noLegs_0_1.set(LegStrikeCurrency_87);
    InstrumentLeg_87.insert(LegStrikeCurrency_87.getString());
    FIX::LegStrikePrice LegStrikePrice_87;
    LegStrikePrice_87.setString("17724953");
    noLegs_0_1.set(LegStrikePrice_87);
    InstrumentLeg_87.insert(LegStrikePrice_87.getString());
    FIX::LegSymbol LegSymbol_87("STRING_2049702552");
    noLegs_0_1.set(LegSymbol_87);
    InstrumentLeg_87.insert(LegSymbol_87.getString());
    FIX::LegSymbolSfx LegSymbolSfx_87("STRING_2127297728");
    noLegs_0_1.set(LegSymbolSfx_87);
    InstrumentLeg_87.insert(LegSymbolSfx_87.getString());
    FIX::LegTimeUnit LegTimeUnit_87("STRING_9910878");
    noLegs_0_1.set(LegTimeUnit_87);
    InstrumentLeg_87.insert(LegTimeUnit_87.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_87("STRING_663397769");
    noLegs_0_1.set(LegUnitOfMeasure_87);
    InstrumentLeg_87.insert(LegUnitOfMeasure_87.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_87;
    LegUnitOfMeasureQty_87.setString("13882821");
    noLegs_0_1.set(LegUnitOfMeasureQty_87);
    InstrumentLeg_87.insert(LegUnitOfMeasureQty_87.getString());
    all_values.push_back(InstrumentLeg_87);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_156;
      FIX::LegSecurityAltID LegSecurityAltID_156("STRING_1481976906");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_156);
      LegSecAltIDGrp_NoLegSecurityAltID_156.insert(LegSecurityAltID_156.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_156("STRING_373808743");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_156);
      LegSecAltIDGrp_NoLegSecurityAltID_156.insert(LegSecurityAltIDSource_156.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_156);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_44;
      FIX::LegStipulationType LegStipulationType_44("STRING_1586351114");
      noLegStipulations_1_1_0.set(LegStipulationType_44);
      LegStipulations_NoLegStipulations_44.insert(LegStipulationType_44.getString());
      FIX::LegStipulationValue LegStipulationValue_44("STRING_258369375");
      noLegStipulations_1_1_0.set(LegStipulationValue_44);
      LegStipulations_NoLegStipulations_44.insert(LegStipulationValue_44.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_44);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_45;
      FIX::LegStipulationType LegStipulationType_45("STRING_139665189");
      noLegStipulations_1_1_1.set(LegStipulationType_45);
      LegStipulations_NoLegStipulations_45.insert(LegStipulationType_45.getString());
      FIX::LegStipulationValue LegStipulationValue_45("STRING_1504403715");
      noLegStipulations_1_1_1.set(LegStipulationValue_45);
      LegStipulations_NoLegStipulations_45.insert(LegStipulationValue_45.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_45);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_46;
      FIX::LegStipulationType LegStipulationType_46("STRING_13435514");
      noLegStipulations_1_1_2.set(LegStipulationType_46);
      LegStipulations_NoLegStipulations_46.insert(LegStipulationType_46.getString());
      FIX::LegStipulationValue LegStipulationValue_46("STRING_892250241");
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
      multiset<string> NestedParties_NoNestedPartyIDs_117;
      FIX::NestedPartyID NestedPartyID_117("STRING_1601923684");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_117);
      NestedParties_NoNestedPartyIDs_117.insert(NestedPartyID_117.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_117('2');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_117);
      NestedParties_NoNestedPartyIDs_117.insert(NestedPartyIDSource_117.getString());
      FIX::NestedPartyRole NestedPartyRole_117(167986305);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_117);
      NestedParties_NoNestedPartyIDs_117.insert(NestedPartyRole_117.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_117);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_222;
        FIX::NestedPartySubID NestedPartySubID_222("STRING_1000579132");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_222);
        NstdPtysSubGrp_NoNestedPartySubIDs_222.insert(NestedPartySubID_222.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_222(1255180213);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_222);
        NstdPtysSubGrp_NoNestedPartySubIDs_222.insert(NestedPartySubIDType_222.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_222);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_25;
  FIX::CashOrderQty CashOrderQty_25;
  CashOrderQty_25.setString("10006720");
  msg.set(CashOrderQty_25);
  OrderQtyData_25.insert(CashOrderQty_25.getString());
  FIX::OrderPercent OrderPercent_25;
  OrderPercent_25.setString("49.800000");
  msg.set(OrderPercent_25);
  OrderQtyData_25.insert(OrderPercent_25.getString());
  FIX::OrderQty OrderQty_34;
  OrderQty_34.setString("15077039");
  msg.set(OrderQty_34);
  OrderQtyData_25.insert(OrderQty_34.getString());
  FIX::RoundingDirection RoundingDirection_25('0');
  msg.set(RoundingDirection_25);
  OrderQtyData_25.insert(RoundingDirection_25.getString());
  FIX::RoundingModulus RoundingModulus_25;
  RoundingModulus_25.setString("2880297");
  msg.set(RoundingModulus_25);
  OrderQtyData_25.insert(RoundingModulus_25.getString());
  all_values.push_back(OrderQtyData_25);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_118;
    FIX::PartyID PartyID_118("STRING_235961283");
    noPartyIDs_0_0.set(PartyID_118);
    Parties_NoPartyIDs_118.insert(PartyID_118.getString());
    FIX::PartyIDSource PartyIDSource_118('9');
    noPartyIDs_0_0.set(PartyIDSource_118);
    Parties_NoPartyIDs_118.insert(PartyIDSource_118.getString());
    FIX::PartyRole PartyRole_118(61);
    noPartyIDs_0_0.set(PartyRole_118);
    Parties_NoPartyIDs_118.insert(PartyRole_118.getString());
    all_values.push_back(Parties_NoPartyIDs_118);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_231;
      FIX::PartySubID PartySubID_231("STRING_1976507553");
      noPartySubIDs_0_1_0.set(PartySubID_231);
      PtysSubGrp_NoPartySubIDs_231.insert(PartySubID_231.getString());
      FIX::PartySubIDType PartySubIDType_231(9);
      noPartySubIDs_0_1_0.set(PartySubIDType_231);
      PtysSubGrp_NoPartySubIDs_231.insert(PartySubIDType_231.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_231);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_232;
      FIX::PartySubID PartySubID_232("STRING_801577957");
      noPartySubIDs_0_1_1.set(PartySubID_232);
      PtysSubGrp_NoPartySubIDs_232.insert(PartySubID_232.getString());
      FIX::PartySubIDType PartySubIDType_232(7);
      noPartySubIDs_0_1_1.set(PartySubIDType_232);
      PtysSubGrp_NoPartySubIDs_232.insert(PartySubIDType_232.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_232);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_119;
    FIX::PartyID PartyID_119("STRING_942477106");
    noPartyIDs_0_1.set(PartyID_119);
    Parties_NoPartyIDs_119.insert(PartyID_119.getString());
    FIX::PartyIDSource PartyIDSource_119('H');
    noPartyIDs_0_1.set(PartyIDSource_119);
    Parties_NoPartyIDs_119.insert(PartyIDSource_119.getString());
    FIX::PartyRole PartyRole_119(69);
    noPartyIDs_0_1.set(PartyRole_119);
    Parties_NoPartyIDs_119.insert(PartyRole_119.getString());
    all_values.push_back(Parties_NoPartyIDs_119);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_233;
      FIX::PartySubID PartySubID_233("STRING_1722422329");
      noPartySubIDs_1_1_0.set(PartySubID_233);
      PtysSubGrp_NoPartySubIDs_233.insert(PartySubID_233.getString());
      FIX::PartySubIDType PartySubIDType_233(30);
      noPartySubIDs_1_1_0.set(PartySubIDType_233);
      PtysSubGrp_NoPartySubIDs_233.insert(PartySubIDType_233.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_233);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_120;
    FIX::PartyID PartyID_120("STRING_1903914039");
    noPartyIDs_0_2.set(PartyID_120);
    Parties_NoPartyIDs_120.insert(PartyID_120.getString());
    FIX::PartyIDSource PartyIDSource_120('5');
    noPartyIDs_0_2.set(PartyIDSource_120);
    Parties_NoPartyIDs_120.insert(PartyIDSource_120.getString());
    FIX::PartyRole PartyRole_120(27);
    noPartyIDs_0_2.set(PartyRole_120);
    Parties_NoPartyIDs_120.insert(PartyRole_120.getString());
    all_values.push_back(Parties_NoPartyIDs_120);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_234;
      FIX::PartySubID PartySubID_234("STRING_603837733");
      noPartySubIDs_2_1_0.set(PartySubID_234);
      PtysSubGrp_NoPartySubIDs_234.insert(PartySubID_234.getString());
      FIX::PartySubIDType PartySubIDType_234(20);
      noPartySubIDs_2_1_0.set(PartySubIDType_234);
      PtysSubGrp_NoPartySubIDs_234.insert(PartySubIDType_234.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_234);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_235;
      FIX::PartySubID PartySubID_235("STRING_860062226");
      noPartySubIDs_2_1_1.set(PartySubID_235);
      PtysSubGrp_NoPartySubIDs_235.insert(PartySubID_235.getString());
      FIX::PartySubIDType PartySubIDType_235(9);
      noPartySubIDs_2_1_1.set(PartySubIDType_235);
      PtysSubGrp_NoPartySubIDs_235.insert(PartySubIDType_235.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_235);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_13;
    FIX::QuoteQualifier QuoteQualifier_13('1');
    noQuoteQualifiers_0_0.set(QuoteQualifier_13);
    QuotQualGrp_NoQuoteQualifiers_13.insert(QuoteQualifier_13.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_13);

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_14;
    FIX::QuoteQualifier QuoteQualifier_14('2');
    noQuoteQualifiers_0_1.set(QuoteQualifier_14);
    QuotQualGrp_NoQuoteQualifiers_14.insert(QuoteQualifier_14.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_14);

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_2;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_15;
    FIX::QuoteQualifier QuoteQualifier_15('1');
    noQuoteQualifiers_0_2.set(QuoteQualifier_15);
    QuotQualGrp_NoQuoteQualifiers_15.insert(QuoteQualifier_15.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_15);

    msg.addGroup(noQuoteQualifiers_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_27;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_27("EUR");
  msg.set(BenchmarkCurveCurrency_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurveCurrency_27.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_27("STRING_Euribor");
  msg.set(BenchmarkCurveName_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurveName_27.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_27("STRING_670062485");
  msg.set(BenchmarkCurvePoint_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurvePoint_27.getString());
  FIX::BenchmarkPrice BenchmarkPrice_27;
  BenchmarkPrice_27.setString("15184562");
  msg.set(BenchmarkPrice_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkPrice_27.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_27(661887354);
  msg.set(BenchmarkPriceType_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkPriceType_27.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_27("STRING_519272310");
  msg.set(BenchmarkSecurityID_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkSecurityID_27.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_27("STRING_1274699721");
  msg.set(BenchmarkSecurityIDSource_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkSecurityIDSource_27.getString());
  FIX::Spread Spread_27;
  Spread_27.setString("8000675");
  msg.set(Spread_27);
  SpreadOrBenchmarkCurveData_27.insert(Spread_27.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_27);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_47;
    FIX::StipulationType StipulationType_47("STRING_STRUCT");
    noStipulations_0_0.set(StipulationType_47);
    Stipulations_NoStipulations_47.insert(StipulationType_47.getString());
    FIX::StipulationValue StipulationValue_47("STRING_1601645498");
    noStipulations_0_0.set(StipulationValue_47);
    Stipulations_NoStipulations_47.insert(StipulationValue_47.getString());
    all_values.push_back(Stipulations_NoStipulations_47);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_48;
    FIX::StipulationType StipulationType_48("STRING_PRICE");
    noStipulations_0_1.set(StipulationType_48);
    Stipulations_NoStipulations_48.insert(StipulationType_48.getString());
    FIX::StipulationValue StipulationValue_48("STRING_1983331145");
    noStipulations_0_1.set(StipulationValue_48);
    Stipulations_NoStipulations_48.insert(StipulationValue_48.getString());
    all_values.push_back(Stipulations_NoStipulations_48);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_49;
    FIX::StipulationType StipulationType_49("STRING_HEP");
    noStipulations_0_2.set(StipulationType_49);
    Stipulations_NoStipulations_49.insert(StipulationType_49.getString());
    FIX::StipulationValue StipulationValue_49("STRING_1009233416");
    noStipulations_0_2.set(StipulationValue_49);
    Stipulations_NoStipulations_49.insert(StipulationValue_49.getString());
    all_values.push_back(Stipulations_NoStipulations_49);

    msg.addGroup(noStipulations_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_16;
    FIX::TargetPartyID TargetPartyID_16("STRING_1312655395");
    noTargetPartyIDs_0_0.set(TargetPartyID_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyID_16.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_16('7');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyIDSource_16.getString());
    FIX::TargetPartyRole TargetPartyRole_16(1356526738);
    noTargetPartyIDs_0_0.set(TargetPartyRole_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyRole_16.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_16);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_105;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_105("DATA_426669976");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_105);
    UnderlyingInstrument_105.insert(EncodedUnderlyingIssuer_105.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_105(2005207371);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_105);
    UnderlyingInstrument_105.insert(EncodedUnderlyingIssuerLen_105.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_105("DATA_848351878");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_105);
    UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDesc_105.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_105(1744029698);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_105);
    UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDescLen_105.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_105;
    UnderlyingAdjustedQuantity_105.setString("7177859");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_105);
    UnderlyingInstrument_105.insert(UnderlyingAdjustedQuantity_105.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_105;
    UnderlyingAllocationPercent_105.setString("59.170000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_105);
    UnderlyingInstrument_105.insert(UnderlyingAllocationPercent_105.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_105;
    UnderlyingAttachmentPoint_105.setString("56.360000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_105);
    UnderlyingInstrument_105.insert(UnderlyingAttachmentPoint_105.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_105("STRING_430943660");
    noUnderlyings_0_0.set(UnderlyingCFICode_105);
    UnderlyingInstrument_105.insert(UnderlyingCFICode_105.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_105("STRING_1499696521");
    noUnderlyings_0_0.set(UnderlyingCPProgram_105);
    UnderlyingInstrument_105.insert(UnderlyingCPProgram_105.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_105("STRING_983170002");
    noUnderlyings_0_0.set(UnderlyingCPRegType_105);
    UnderlyingInstrument_105.insert(UnderlyingCPRegType_105.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_105;
    UnderlyingCapValue_105.setString("8129763");
    noUnderlyings_0_0.set(UnderlyingCapValue_105);
    UnderlyingInstrument_105.insert(UnderlyingCapValue_105.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_105;
    UnderlyingCashAmount_105.setString("7394374");
    noUnderlyings_0_0.set(UnderlyingCashAmount_105);
    UnderlyingInstrument_105.insert(UnderlyingCashAmount_105.getString());
    FIX::UnderlyingCashType UnderlyingCashType_105("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_105);
    UnderlyingInstrument_105.insert(UnderlyingCashType_105.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_105;
    UnderlyingContractMultiplier_105.setString("14830388");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_105);
    UnderlyingInstrument_105.insert(UnderlyingContractMultiplier_105.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_105(110410036);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_105);
    UnderlyingInstrument_105.insert(UnderlyingContractMultiplierUnit_105.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_105("COUNTRY_2070983427");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_105);
    UnderlyingInstrument_105.insert(UnderlyingCountryOfIssue_105.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_105("LOCALMKTDATE_2002311147");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_105);
    UnderlyingInstrument_105.insert(UnderlyingCouponPaymentDate_105.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_105;
    UnderlyingCouponRate_105.setString("97.580000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_105);
    UnderlyingInstrument_105.insert(UnderlyingCouponRate_105.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_105("STRING_723567320");
    noUnderlyings_0_0.set(UnderlyingCreditRating_105);
    UnderlyingInstrument_105.insert(UnderlyingCreditRating_105.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_105("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_105);
    UnderlyingInstrument_105.insert(UnderlyingCurrency_105.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_105;
    UnderlyingCurrentValue_105.setString("1777291");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_105);
    UnderlyingInstrument_105.insert(UnderlyingCurrentValue_105.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_105;
    UnderlyingDetachmentPoint_105.setString("59.840000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_105);
    UnderlyingInstrument_105.insert(UnderlyingDetachmentPoint_105.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_105;
    UnderlyingDirtyPrice_105.setString("1143276");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_105);
    UnderlyingInstrument_105.insert(UnderlyingDirtyPrice_105.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_105;
    UnderlyingEndPrice_105.setString("19154458");
    noUnderlyings_0_0.set(UnderlyingEndPrice_105);
    UnderlyingInstrument_105.insert(UnderlyingEndPrice_105.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_105;
    UnderlyingEndValue_105.setString("6304757");
    noUnderlyings_0_0.set(UnderlyingEndValue_105);
    UnderlyingInstrument_105.insert(UnderlyingEndValue_105.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_105(1714423993);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_105);
    UnderlyingInstrument_105.insert(UnderlyingExerciseStyle_105.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_105;
    UnderlyingFXRate_105.setString("10806176");
    noUnderlyings_0_0.set(UnderlyingFXRate_105);
    UnderlyingInstrument_105.insert(UnderlyingFXRate_105.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_105('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_105);
    UnderlyingInstrument_105.insert(UnderlyingFXRateCalc_105.getString());
    FIX::UnderlyingFactor UnderlyingFactor_105;
    UnderlyingFactor_105.setString("9234670");
    noUnderlyings_0_0.set(UnderlyingFactor_105);
    UnderlyingInstrument_105.insert(UnderlyingFactor_105.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_105(1325131777);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_105);
    UnderlyingInstrument_105.insert(UnderlyingFlowScheduleType_105.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_105("STRING_1768379667");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_105);
    UnderlyingInstrument_105.insert(UnderlyingInstrRegistry_105.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_105("LOCALMKTDATE_781190806");
    noUnderlyings_0_0.set(UnderlyingIssueDate_105);
    UnderlyingInstrument_105.insert(UnderlyingIssueDate_105.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_105("STRING_26000007");
    noUnderlyings_0_0.set(UnderlyingIssuer_105);
    UnderlyingInstrument_105.insert(UnderlyingIssuer_105.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_105("STRING_1364925718");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_105);
    UnderlyingInstrument_105.insert(UnderlyingLocaleOfIssue_105.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_105("LOCALMKTDATE_1498976756");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_105);
    UnderlyingInstrument_105.insert(UnderlyingMaturityDate_105.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_105("MONTHYEAR_1646175924");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_105);
    UnderlyingInstrument_105.insert(UnderlyingMaturityMonthYear_105.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_105("TZTIMEONLY_1154447706");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_105);
    UnderlyingInstrument_105.insert(UnderlyingMaturityTime_105.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_105;
    UnderlyingNotionalPercentageOutstanding_105.setString("4.160000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_105);
    UnderlyingInstrument_105.insert(UnderlyingNotionalPercentageOutstanding_105.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_105('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_105);
    UnderlyingInstrument_105.insert(UnderlyingOptAttribute_105.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_105;
    UnderlyingOriginalNotionalPercentageOutstanding_105.setString("77.090000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_105);
    UnderlyingInstrument_105.insert(UnderlyingOriginalNotionalPercentageOutstanding_105.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_105("STRING_595413120");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_105);
    UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasure_105.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_105;
    UnderlyingPriceUnitOfMeasureQty_105.setString("17378261");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_105);
    UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasureQty_105.getString());
    FIX::UnderlyingProduct UnderlyingProduct_105(1399230134);
    noUnderlyings_0_0.set(UnderlyingProduct_105);
    UnderlyingInstrument_105.insert(UnderlyingProduct_105.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_105(2078451957);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_105);
    UnderlyingInstrument_105.insert(UnderlyingPutOrCall_105.getString());
    FIX::UnderlyingPx UnderlyingPx_105;
    UnderlyingPx_105.setString("18482362");
    noUnderlyings_0_0.set(UnderlyingPx_105);
    UnderlyingInstrument_105.insert(UnderlyingPx_105.getString());
    FIX::UnderlyingQty UnderlyingQty_105;
    UnderlyingQty_105.setString("13227299");
    noUnderlyings_0_0.set(UnderlyingQty_105);
    UnderlyingInstrument_105.insert(UnderlyingQty_105.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_105("LOCALMKTDATE_1933279457");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_105);
    UnderlyingInstrument_105.insert(UnderlyingRedemptionDate_105.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_105("STRING_1085862345");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_105);
    UnderlyingInstrument_105.insert(UnderlyingRepoCollateralSecurityType_105.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_105;
    UnderlyingRepurchaseRate_105.setString("72.330000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_105);
    UnderlyingInstrument_105.insert(UnderlyingRepurchaseRate_105.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_105(2136403172);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_105);
    UnderlyingInstrument_105.insert(UnderlyingRepurchaseTerm_105.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_105("STRING_1364342494");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_105);
    UnderlyingInstrument_105.insert(UnderlyingRestructuringType_105.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_105("STRING_76542756");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_105);
    UnderlyingInstrument_105.insert(UnderlyingSecurityDesc_105.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_105("EXCHANGE_1757645508");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_105);
    UnderlyingInstrument_105.insert(UnderlyingSecurityExchange_105.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_105("STRING_1478670140");
    noUnderlyings_0_0.set(UnderlyingSecurityID_105);
    UnderlyingInstrument_105.insert(UnderlyingSecurityID_105.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_105("STRING_1991988641");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_105);
    UnderlyingInstrument_105.insert(UnderlyingSecurityIDSource_105.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_105("STRING_240637612");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_105);
    UnderlyingInstrument_105.insert(UnderlyingSecuritySubType_105.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_105("STRING_1045610485");
    noUnderlyings_0_0.set(UnderlyingSecurityType_105);
    UnderlyingInstrument_105.insert(UnderlyingSecurityType_105.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_105("STRING_925122626");
    noUnderlyings_0_0.set(UnderlyingSeniority_105);
    UnderlyingInstrument_105.insert(UnderlyingSeniority_105.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_105("STRING_1582347303");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_105);
    UnderlyingInstrument_105.insert(UnderlyingSettlMethod_105.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_105(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_105);
    UnderlyingInstrument_105.insert(UnderlyingSettlementType_105.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_105;
    UnderlyingStartValue_105.setString("1027707");
    noUnderlyings_0_0.set(UnderlyingStartValue_105);
    UnderlyingInstrument_105.insert(UnderlyingStartValue_105.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_105("STRING_1203243323");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_105);
    UnderlyingInstrument_105.insert(UnderlyingStateOrProvinceOfIssue_105.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_105("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_105);
    UnderlyingInstrument_105.insert(UnderlyingStrikeCurrency_105.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_105;
    UnderlyingStrikePrice_105.setString("4206853");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_105);
    UnderlyingInstrument_105.insert(UnderlyingStrikePrice_105.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_105("STRING_2101761483");
    noUnderlyings_0_0.set(UnderlyingSymbol_105);
    UnderlyingInstrument_105.insert(UnderlyingSymbol_105.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_105("STRING_1774946686");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_105);
    UnderlyingInstrument_105.insert(UnderlyingSymbolSfx_105.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_105("STRING_1575133099");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_105);
    UnderlyingInstrument_105.insert(UnderlyingTimeUnit_105.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_105("STRING_1884198252");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_105);
    UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasure_105.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_105;
    UnderlyingUnitOfMeasureQty_105.setString("6258518");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_105);
    UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasureQty_105.getString());
    all_values.push_back(UnderlyingInstrument_105);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_210;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_210("STRING_332127724");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_210);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_210.insert(UnderlyingSecurityAltID_210.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_210("STRING_216194386");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_210);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_210.insert(UnderlyingSecurityAltIDSource_210.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_203;
      FIX::UnderlyingStipType UnderlyingStipType_203("STRING_263096034");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_203);
      UnderlyingStipulations_NoUnderlyingStips_203.insert(UnderlyingStipType_203.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_203("STRING_2064430621");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_203);
      UnderlyingStipulations_NoUnderlyingStips_203.insert(UnderlyingStipValue_203.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_203);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_214;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_214("STRING_48891843");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyID_214.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_214('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyIDSource_214.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_214(2038557145);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyRole_214.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_214);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_420("STRING_219668165");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_420);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubID_420.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_420(2115099901);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_420);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubIDType_420.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_106;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_106("DATA_1795456876");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_106);
    UnderlyingInstrument_106.insert(EncodedUnderlyingIssuer_106.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_106(1698338306);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_106);
    UnderlyingInstrument_106.insert(EncodedUnderlyingIssuerLen_106.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_106("DATA_1959604895");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_106);
    UnderlyingInstrument_106.insert(EncodedUnderlyingSecurityDesc_106.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_106(2036094488);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_106);
    UnderlyingInstrument_106.insert(EncodedUnderlyingSecurityDescLen_106.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_106;
    UnderlyingAdjustedQuantity_106.setString("5964651");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_106);
    UnderlyingInstrument_106.insert(UnderlyingAdjustedQuantity_106.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_106;
    UnderlyingAllocationPercent_106.setString("38.730000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_106);
    UnderlyingInstrument_106.insert(UnderlyingAllocationPercent_106.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_106;
    UnderlyingAttachmentPoint_106.setString("81.440000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_106);
    UnderlyingInstrument_106.insert(UnderlyingAttachmentPoint_106.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_106("STRING_418059064");
    noUnderlyings_0_1.set(UnderlyingCFICode_106);
    UnderlyingInstrument_106.insert(UnderlyingCFICode_106.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_106("STRING_840014628");
    noUnderlyings_0_1.set(UnderlyingCPProgram_106);
    UnderlyingInstrument_106.insert(UnderlyingCPProgram_106.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_106("STRING_526717819");
    noUnderlyings_0_1.set(UnderlyingCPRegType_106);
    UnderlyingInstrument_106.insert(UnderlyingCPRegType_106.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_106;
    UnderlyingCapValue_106.setString("10208437");
    noUnderlyings_0_1.set(UnderlyingCapValue_106);
    UnderlyingInstrument_106.insert(UnderlyingCapValue_106.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_106;
    UnderlyingCashAmount_106.setString("9687853");
    noUnderlyings_0_1.set(UnderlyingCashAmount_106);
    UnderlyingInstrument_106.insert(UnderlyingCashAmount_106.getString());
    FIX::UnderlyingCashType UnderlyingCashType_106("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_106);
    UnderlyingInstrument_106.insert(UnderlyingCashType_106.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_106;
    UnderlyingContractMultiplier_106.setString("9751216");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_106);
    UnderlyingInstrument_106.insert(UnderlyingContractMultiplier_106.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_106(596248428);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_106);
    UnderlyingInstrument_106.insert(UnderlyingContractMultiplierUnit_106.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_106("COUNTRY_375052663");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_106);
    UnderlyingInstrument_106.insert(UnderlyingCountryOfIssue_106.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_106("LOCALMKTDATE_711836231");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_106);
    UnderlyingInstrument_106.insert(UnderlyingCouponPaymentDate_106.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_106;
    UnderlyingCouponRate_106.setString("2.630000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_106);
    UnderlyingInstrument_106.insert(UnderlyingCouponRate_106.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_106("STRING_1940319824");
    noUnderlyings_0_1.set(UnderlyingCreditRating_106);
    UnderlyingInstrument_106.insert(UnderlyingCreditRating_106.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_106("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_106);
    UnderlyingInstrument_106.insert(UnderlyingCurrency_106.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_106;
    UnderlyingCurrentValue_106.setString("6098498");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_106);
    UnderlyingInstrument_106.insert(UnderlyingCurrentValue_106.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_106;
    UnderlyingDetachmentPoint_106.setString("99.900000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_106);
    UnderlyingInstrument_106.insert(UnderlyingDetachmentPoint_106.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_106;
    UnderlyingDirtyPrice_106.setString("13552416");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_106);
    UnderlyingInstrument_106.insert(UnderlyingDirtyPrice_106.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_106;
    UnderlyingEndPrice_106.setString("6021097");
    noUnderlyings_0_1.set(UnderlyingEndPrice_106);
    UnderlyingInstrument_106.insert(UnderlyingEndPrice_106.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_106;
    UnderlyingEndValue_106.setString("13559518");
    noUnderlyings_0_1.set(UnderlyingEndValue_106);
    UnderlyingInstrument_106.insert(UnderlyingEndValue_106.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_106(210567293);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_106);
    UnderlyingInstrument_106.insert(UnderlyingExerciseStyle_106.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_106;
    UnderlyingFXRate_106.setString("4931832");
    noUnderlyings_0_1.set(UnderlyingFXRate_106);
    UnderlyingInstrument_106.insert(UnderlyingFXRate_106.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_106('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_106);
    UnderlyingInstrument_106.insert(UnderlyingFXRateCalc_106.getString());
    FIX::UnderlyingFactor UnderlyingFactor_106;
    UnderlyingFactor_106.setString("4302354");
    noUnderlyings_0_1.set(UnderlyingFactor_106);
    UnderlyingInstrument_106.insert(UnderlyingFactor_106.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_106(460799484);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_106);
    UnderlyingInstrument_106.insert(UnderlyingFlowScheduleType_106.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_106("STRING_1041736428");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_106);
    UnderlyingInstrument_106.insert(UnderlyingInstrRegistry_106.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_106("LOCALMKTDATE_2128573765");
    noUnderlyings_0_1.set(UnderlyingIssueDate_106);
    UnderlyingInstrument_106.insert(UnderlyingIssueDate_106.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_106("STRING_272920731");
    noUnderlyings_0_1.set(UnderlyingIssuer_106);
    UnderlyingInstrument_106.insert(UnderlyingIssuer_106.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_106("STRING_930347269");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_106);
    UnderlyingInstrument_106.insert(UnderlyingLocaleOfIssue_106.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_106("LOCALMKTDATE_577555260");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_106);
    UnderlyingInstrument_106.insert(UnderlyingMaturityDate_106.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_106("MONTHYEAR_1010164604");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_106);
    UnderlyingInstrument_106.insert(UnderlyingMaturityMonthYear_106.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_106("TZTIMEONLY_253821765");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_106);
    UnderlyingInstrument_106.insert(UnderlyingMaturityTime_106.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_106;
    UnderlyingNotionalPercentageOutstanding_106.setString("43.250000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_106);
    UnderlyingInstrument_106.insert(UnderlyingNotionalPercentageOutstanding_106.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_106('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_106);
    UnderlyingInstrument_106.insert(UnderlyingOptAttribute_106.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_106;
    UnderlyingOriginalNotionalPercentageOutstanding_106.setString("95.840000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_106);
    UnderlyingInstrument_106.insert(UnderlyingOriginalNotionalPercentageOutstanding_106.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_106("STRING_2016458117");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_106);
    UnderlyingInstrument_106.insert(UnderlyingPriceUnitOfMeasure_106.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_106;
    UnderlyingPriceUnitOfMeasureQty_106.setString("6714809");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_106);
    UnderlyingInstrument_106.insert(UnderlyingPriceUnitOfMeasureQty_106.getString());
    FIX::UnderlyingProduct UnderlyingProduct_106(1727942796);
    noUnderlyings_0_1.set(UnderlyingProduct_106);
    UnderlyingInstrument_106.insert(UnderlyingProduct_106.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_106(844096096);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_106);
    UnderlyingInstrument_106.insert(UnderlyingPutOrCall_106.getString());
    FIX::UnderlyingPx UnderlyingPx_106;
    UnderlyingPx_106.setString("12677294");
    noUnderlyings_0_1.set(UnderlyingPx_106);
    UnderlyingInstrument_106.insert(UnderlyingPx_106.getString());
    FIX::UnderlyingQty UnderlyingQty_106;
    UnderlyingQty_106.setString("21029954");
    noUnderlyings_0_1.set(UnderlyingQty_106);
    UnderlyingInstrument_106.insert(UnderlyingQty_106.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_106("LOCALMKTDATE_1555932328");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_106);
    UnderlyingInstrument_106.insert(UnderlyingRedemptionDate_106.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_106("STRING_342346017");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_106);
    UnderlyingInstrument_106.insert(UnderlyingRepoCollateralSecurityType_106.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_106;
    UnderlyingRepurchaseRate_106.setString("16.350000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_106);
    UnderlyingInstrument_106.insert(UnderlyingRepurchaseRate_106.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_106(452412636);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_106);
    UnderlyingInstrument_106.insert(UnderlyingRepurchaseTerm_106.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_106("STRING_1780640666");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_106);
    UnderlyingInstrument_106.insert(UnderlyingRestructuringType_106.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_106("STRING_358197810");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityDesc_106.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_106("EXCHANGE_1759472626");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityExchange_106.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_106("STRING_988398641");
    noUnderlyings_0_1.set(UnderlyingSecurityID_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityID_106.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_106("STRING_960307544");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityIDSource_106.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_106("STRING_967940811");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_106);
    UnderlyingInstrument_106.insert(UnderlyingSecuritySubType_106.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_106("STRING_1198965934");
    noUnderlyings_0_1.set(UnderlyingSecurityType_106);
    UnderlyingInstrument_106.insert(UnderlyingSecurityType_106.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_106("STRING_1453490775");
    noUnderlyings_0_1.set(UnderlyingSeniority_106);
    UnderlyingInstrument_106.insert(UnderlyingSeniority_106.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_106("STRING_214220363");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_106);
    UnderlyingInstrument_106.insert(UnderlyingSettlMethod_106.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_106(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_106);
    UnderlyingInstrument_106.insert(UnderlyingSettlementType_106.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_106;
    UnderlyingStartValue_106.setString("19142902");
    noUnderlyings_0_1.set(UnderlyingStartValue_106);
    UnderlyingInstrument_106.insert(UnderlyingStartValue_106.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_106("STRING_1255956792");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_106);
    UnderlyingInstrument_106.insert(UnderlyingStateOrProvinceOfIssue_106.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_106("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_106);
    UnderlyingInstrument_106.insert(UnderlyingStrikeCurrency_106.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_106;
    UnderlyingStrikePrice_106.setString("388204");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_106);
    UnderlyingInstrument_106.insert(UnderlyingStrikePrice_106.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_106("STRING_40363123");
    noUnderlyings_0_1.set(UnderlyingSymbol_106);
    UnderlyingInstrument_106.insert(UnderlyingSymbol_106.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_106("STRING_1049891947");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_106);
    UnderlyingInstrument_106.insert(UnderlyingSymbolSfx_106.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_106("STRING_292642178");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_106);
    UnderlyingInstrument_106.insert(UnderlyingTimeUnit_106.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_106("STRING_1035977448");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_106);
    UnderlyingInstrument_106.insert(UnderlyingUnitOfMeasure_106.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_106;
    UnderlyingUnitOfMeasureQty_106.setString("7525875");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_106);
    UnderlyingInstrument_106.insert(UnderlyingUnitOfMeasureQty_106.getString());
    all_values.push_back(UnderlyingInstrument_106);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_211;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_211("STRING_904951917");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_211);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_211.insert(UnderlyingSecurityAltID_211.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_211("STRING_1424068506");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_211);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_211.insert(UnderlyingSecurityAltIDSource_211.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_204;
      FIX::UnderlyingStipType UnderlyingStipType_204("STRING_1749048013");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_204);
      UnderlyingStipulations_NoUnderlyingStips_204.insert(UnderlyingStipType_204.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_204("STRING_544314261");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_204);
      UnderlyingStipulations_NoUnderlyingStips_204.insert(UnderlyingStipValue_204.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_204);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_205;
      FIX::UnderlyingStipType UnderlyingStipType_205("STRING_609152721");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_205);
      UnderlyingStipulations_NoUnderlyingStips_205.insert(UnderlyingStipType_205.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_205("STRING_1157496693");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_205);
      UnderlyingStipulations_NoUnderlyingStips_205.insert(UnderlyingStipValue_205.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_205);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_215;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_215("STRING_357500709");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyID_215.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_215('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyIDSource_215.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_215(519817297);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyRole_215.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_215);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_421("STRING_1221898307");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_421);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubID_421.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_421(1508215938);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_421);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubIDType_421.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_107;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_107("DATA_1676006063");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingIssuer_107.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_107(42355470);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingIssuerLen_107.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_107("DATA_559698224");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingSecurityDesc_107.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_107(982013190);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_107);
    UnderlyingInstrument_107.insert(EncodedUnderlyingSecurityDescLen_107.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_107;
    UnderlyingAdjustedQuantity_107.setString("2565758");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_107);
    UnderlyingInstrument_107.insert(UnderlyingAdjustedQuantity_107.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_107;
    UnderlyingAllocationPercent_107.setString("59.700000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_107);
    UnderlyingInstrument_107.insert(UnderlyingAllocationPercent_107.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_107;
    UnderlyingAttachmentPoint_107.setString("98.010000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_107);
    UnderlyingInstrument_107.insert(UnderlyingAttachmentPoint_107.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_107("STRING_1512532626");
    noUnderlyings_0_2.set(UnderlyingCFICode_107);
    UnderlyingInstrument_107.insert(UnderlyingCFICode_107.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_107("STRING_1651707480");
    noUnderlyings_0_2.set(UnderlyingCPProgram_107);
    UnderlyingInstrument_107.insert(UnderlyingCPProgram_107.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_107("STRING_788547144");
    noUnderlyings_0_2.set(UnderlyingCPRegType_107);
    UnderlyingInstrument_107.insert(UnderlyingCPRegType_107.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_107;
    UnderlyingCapValue_107.setString("15513530");
    noUnderlyings_0_2.set(UnderlyingCapValue_107);
    UnderlyingInstrument_107.insert(UnderlyingCapValue_107.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_107;
    UnderlyingCashAmount_107.setString("16920706");
    noUnderlyings_0_2.set(UnderlyingCashAmount_107);
    UnderlyingInstrument_107.insert(UnderlyingCashAmount_107.getString());
    FIX::UnderlyingCashType UnderlyingCashType_107("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_107);
    UnderlyingInstrument_107.insert(UnderlyingCashType_107.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_107;
    UnderlyingContractMultiplier_107.setString("18439952");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_107);
    UnderlyingInstrument_107.insert(UnderlyingContractMultiplier_107.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_107(580564403);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_107);
    UnderlyingInstrument_107.insert(UnderlyingContractMultiplierUnit_107.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_107("COUNTRY_443542976");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingCountryOfIssue_107.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_107("LOCALMKTDATE_769693331");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_107);
    UnderlyingInstrument_107.insert(UnderlyingCouponPaymentDate_107.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_107;
    UnderlyingCouponRate_107.setString("63.200000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_107);
    UnderlyingInstrument_107.insert(UnderlyingCouponRate_107.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_107("STRING_1867611482");
    noUnderlyings_0_2.set(UnderlyingCreditRating_107);
    UnderlyingInstrument_107.insert(UnderlyingCreditRating_107.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_107("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_107);
    UnderlyingInstrument_107.insert(UnderlyingCurrency_107.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_107;
    UnderlyingCurrentValue_107.setString("2644420");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_107);
    UnderlyingInstrument_107.insert(UnderlyingCurrentValue_107.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_107;
    UnderlyingDetachmentPoint_107.setString("69.620000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_107);
    UnderlyingInstrument_107.insert(UnderlyingDetachmentPoint_107.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_107;
    UnderlyingDirtyPrice_107.setString("970937");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_107);
    UnderlyingInstrument_107.insert(UnderlyingDirtyPrice_107.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_107;
    UnderlyingEndPrice_107.setString("11511023");
    noUnderlyings_0_2.set(UnderlyingEndPrice_107);
    UnderlyingInstrument_107.insert(UnderlyingEndPrice_107.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_107;
    UnderlyingEndValue_107.setString("2425040");
    noUnderlyings_0_2.set(UnderlyingEndValue_107);
    UnderlyingInstrument_107.insert(UnderlyingEndValue_107.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_107(1707003061);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_107);
    UnderlyingInstrument_107.insert(UnderlyingExerciseStyle_107.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_107;
    UnderlyingFXRate_107.setString("16709196");
    noUnderlyings_0_2.set(UnderlyingFXRate_107);
    UnderlyingInstrument_107.insert(UnderlyingFXRate_107.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_107('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_107);
    UnderlyingInstrument_107.insert(UnderlyingFXRateCalc_107.getString());
    FIX::UnderlyingFactor UnderlyingFactor_107;
    UnderlyingFactor_107.setString("7814177");
    noUnderlyings_0_2.set(UnderlyingFactor_107);
    UnderlyingInstrument_107.insert(UnderlyingFactor_107.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_107(1031651961);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_107);
    UnderlyingInstrument_107.insert(UnderlyingFlowScheduleType_107.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_107("STRING_486724957");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_107);
    UnderlyingInstrument_107.insert(UnderlyingInstrRegistry_107.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_107("LOCALMKTDATE_823773191");
    noUnderlyings_0_2.set(UnderlyingIssueDate_107);
    UnderlyingInstrument_107.insert(UnderlyingIssueDate_107.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_107("STRING_1591350185");
    noUnderlyings_0_2.set(UnderlyingIssuer_107);
    UnderlyingInstrument_107.insert(UnderlyingIssuer_107.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_107("STRING_1468738147");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingLocaleOfIssue_107.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_107("LOCALMKTDATE_1080349025");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityDate_107.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_107("MONTHYEAR_1632766155");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityMonthYear_107.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_107("TZTIMEONLY_70074301");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_107);
    UnderlyingInstrument_107.insert(UnderlyingMaturityTime_107.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_107;
    UnderlyingNotionalPercentageOutstanding_107.setString("80.030000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_107);
    UnderlyingInstrument_107.insert(UnderlyingNotionalPercentageOutstanding_107.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_107('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_107);
    UnderlyingInstrument_107.insert(UnderlyingOptAttribute_107.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_107;
    UnderlyingOriginalNotionalPercentageOutstanding_107.setString("14.450000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_107);
    UnderlyingInstrument_107.insert(UnderlyingOriginalNotionalPercentageOutstanding_107.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_107("STRING_1996751042");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_107);
    UnderlyingInstrument_107.insert(UnderlyingPriceUnitOfMeasure_107.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_107;
    UnderlyingPriceUnitOfMeasureQty_107.setString("6815769");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_107);
    UnderlyingInstrument_107.insert(UnderlyingPriceUnitOfMeasureQty_107.getString());
    FIX::UnderlyingProduct UnderlyingProduct_107(549576889);
    noUnderlyings_0_2.set(UnderlyingProduct_107);
    UnderlyingInstrument_107.insert(UnderlyingProduct_107.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_107(1693262611);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_107);
    UnderlyingInstrument_107.insert(UnderlyingPutOrCall_107.getString());
    FIX::UnderlyingPx UnderlyingPx_107;
    UnderlyingPx_107.setString("12621413");
    noUnderlyings_0_2.set(UnderlyingPx_107);
    UnderlyingInstrument_107.insert(UnderlyingPx_107.getString());
    FIX::UnderlyingQty UnderlyingQty_107;
    UnderlyingQty_107.setString("9931198");
    noUnderlyings_0_2.set(UnderlyingQty_107);
    UnderlyingInstrument_107.insert(UnderlyingQty_107.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_107("LOCALMKTDATE_315472294");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_107);
    UnderlyingInstrument_107.insert(UnderlyingRedemptionDate_107.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_107("STRING_600174019");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_107);
    UnderlyingInstrument_107.insert(UnderlyingRepoCollateralSecurityType_107.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_107;
    UnderlyingRepurchaseRate_107.setString("77.000000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_107);
    UnderlyingInstrument_107.insert(UnderlyingRepurchaseRate_107.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_107(1738806535);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_107);
    UnderlyingInstrument_107.insert(UnderlyingRepurchaseTerm_107.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_107("STRING_1687254705");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_107);
    UnderlyingInstrument_107.insert(UnderlyingRestructuringType_107.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_107("STRING_977689795");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityDesc_107.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_107("EXCHANGE_1623809849");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityExchange_107.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_107("STRING_1784348437");
    noUnderlyings_0_2.set(UnderlyingSecurityID_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityID_107.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_107("STRING_2128792169");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityIDSource_107.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_107("STRING_1866313873");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_107);
    UnderlyingInstrument_107.insert(UnderlyingSecuritySubType_107.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_107("STRING_1343867850");
    noUnderlyings_0_2.set(UnderlyingSecurityType_107);
    UnderlyingInstrument_107.insert(UnderlyingSecurityType_107.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_107("STRING_1652228192");
    noUnderlyings_0_2.set(UnderlyingSeniority_107);
    UnderlyingInstrument_107.insert(UnderlyingSeniority_107.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_107("STRING_677032767");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_107);
    UnderlyingInstrument_107.insert(UnderlyingSettlMethod_107.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_107(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_107);
    UnderlyingInstrument_107.insert(UnderlyingSettlementType_107.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_107;
    UnderlyingStartValue_107.setString("5363965");
    noUnderlyings_0_2.set(UnderlyingStartValue_107);
    UnderlyingInstrument_107.insert(UnderlyingStartValue_107.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_107("STRING_1163757725");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_107);
    UnderlyingInstrument_107.insert(UnderlyingStateOrProvinceOfIssue_107.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_107("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_107);
    UnderlyingInstrument_107.insert(UnderlyingStrikeCurrency_107.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_107;
    UnderlyingStrikePrice_107.setString("4850122");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_107);
    UnderlyingInstrument_107.insert(UnderlyingStrikePrice_107.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_107("STRING_1881924138");
    noUnderlyings_0_2.set(UnderlyingSymbol_107);
    UnderlyingInstrument_107.insert(UnderlyingSymbol_107.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_107("STRING_1613029198");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_107);
    UnderlyingInstrument_107.insert(UnderlyingSymbolSfx_107.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_107("STRING_555086525");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_107);
    UnderlyingInstrument_107.insert(UnderlyingTimeUnit_107.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_107("STRING_179838493");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_107);
    UnderlyingInstrument_107.insert(UnderlyingUnitOfMeasure_107.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_107;
    UnderlyingUnitOfMeasureQty_107.setString("6025355");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_107);
    UnderlyingInstrument_107.insert(UnderlyingUnitOfMeasureQty_107.getString());
    all_values.push_back(UnderlyingInstrument_107);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_212;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_212("STRING_29105887");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_212);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_212.insert(UnderlyingSecurityAltID_212.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_212("STRING_1284112482");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_212);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_212.insert(UnderlyingSecurityAltIDSource_212.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_213;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_213("STRING_1963284860");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_213);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_213.insert(UnderlyingSecurityAltID_213.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_213("STRING_1722368498");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_213);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_213.insert(UnderlyingSecurityAltIDSource_213.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_206;
      FIX::UnderlyingStipType UnderlyingStipType_206("STRING_808921078");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_206);
      UnderlyingStipulations_NoUnderlyingStips_206.insert(UnderlyingStipType_206.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_206("STRING_2037840792");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_206);
      UnderlyingStipulations_NoUnderlyingStips_206.insert(UnderlyingStipValue_206.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_206);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_207;
      FIX::UnderlyingStipType UnderlyingStipType_207("STRING_998944200");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_207);
      UnderlyingStipulations_NoUnderlyingStips_207.insert(UnderlyingStipType_207.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_207("STRING_1522168778");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_207);
      UnderlyingStipulations_NoUnderlyingStips_207.insert(UnderlyingStipValue_207.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_207);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_208;
      FIX::UnderlyingStipType UnderlyingStipType_208("STRING_1629163679");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_208);
      UnderlyingStipulations_NoUnderlyingStips_208.insert(UnderlyingStipType_208.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_208("STRING_538715258");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_208);
      UnderlyingStipulations_NoUnderlyingStips_208.insert(UnderlyingStipValue_208.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_208);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_216;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_216("STRING_1105489881");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyID_216.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_216('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyIDSource_216.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_216(333683447);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_216);
      UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyRole_216.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_216);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_422("STRING_1519447897");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_422);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubID_422.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_422(1985911639);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_422);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubIDType_422.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_423("STRING_1501352873");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_423);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubID_423.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_423(1497249819);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_423);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubIDType_423.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_424("STRING_374824497");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_424);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubID_424.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_424(517626950);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_424);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubIDType_424.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_217;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_217("STRING_151341285");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyID_217.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_217('3');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyIDSource_217.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_217(1002639175);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_217);
      UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyRole_217.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_217);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_425("STRING_1968116738");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_425);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubID_425.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_425(1557725700);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_425);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubIDType_425.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_22;
  FIX::Yield Yield_22;
  Yield_22.setString("2.690000");
  msg.set(Yield_22);
  YieldData_22.insert(Yield_22.getString());
  FIX::YieldCalcDate YieldCalcDate_22("LOCALMKTDATE_423168629");
  msg.set(YieldCalcDate_22);
  YieldData_22.insert(YieldCalcDate_22.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_22("LOCALMKTDATE_823950023");
  msg.set(YieldRedemptionDate_22);
  YieldData_22.insert(YieldRedemptionDate_22.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_22;
  YieldRedemptionPrice_22.setString("947261");
  msg.set(YieldRedemptionPrice_22);
  YieldData_22.insert(YieldRedemptionPrice_22.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_22(1707281111);
  msg.set(YieldRedemptionPriceType_22);
  YieldData_22.insert(YieldRedemptionPriceType_22.getString());
  FIX::YieldType YieldType_22("STRING_SIMPLE");
  msg.set(YieldType_22);
  YieldData_22.insert(YieldType_22.getString());
  all_values.push_back(YieldData_22);


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
