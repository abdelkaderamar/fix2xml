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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteResponse msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteResponse_0;
  FIX::Account Account_37("STRING_1212290496");
  msg.set(Account_37);
  QuoteResponse_0.insert(Account_37.getString());
  FIX::AccountType AccountType_33(7);
  msg.set(AccountType_33);
  QuoteResponse_0.insert(AccountType_33.getString());
  FIX::AcctIDSource AcctIDSource_30(3);
  msg.set(AcctIDSource_30);
  QuoteResponse_0.insert(AcctIDSource_30.getString());
  FIX::BidForwardPoints BidForwardPoints_4;
  BidForwardPoints_4.setString("2507662");
  msg.set(BidForwardPoints_4);
  QuoteResponse_0.insert(BidForwardPoints_4.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_4;
  BidForwardPoints2_4.setString("1328288");
  msg.set(BidForwardPoints2_4);
  QuoteResponse_0.insert(BidForwardPoints2_4.getString());
  FIX::BidPx BidPx_4;
  BidPx_4.setString("15450968");
  msg.set(BidPx_4);
  QuoteResponse_0.insert(BidPx_4.getString());
  FIX::BidSize BidSize_4;
  BidSize_4.setString("4232292");
  msg.set(BidSize_4);
  QuoteResponse_0.insert(BidSize_4.getString());
  FIX::BidSpotRate BidSpotRate_4;
  BidSpotRate_4.setString("5704334");
  msg.set(BidSpotRate_4);
  QuoteResponse_0.insert(BidSpotRate_4.getString());
  FIX::BidYield BidYield_4;
  BidYield_4.setString("42.310000");
  msg.set(BidYield_4);
  QuoteResponse_0.insert(BidYield_4.getString());
  FIX::ClOrdID ClOrdID_43("STRING_676587185");
  msg.set(ClOrdID_43);
  QuoteResponse_0.insert(ClOrdID_43.getString());
  FIX::CommType CommType_21('1');
  msg.set(CommType_21);
  QuoteResponse_0.insert(CommType_21.getString());
  FIX::Commission Commission_21;
  Commission_21.setString("4178371");
  msg.set(Commission_21);
  QuoteResponse_0.insert(Commission_21.getString());
  FIX::Currency Currency_49("USD");
  msg.set(Currency_49);
  QuoteResponse_0.insert(Currency_49.getString());
  FIX::CustOrderCapacity CustOrderCapacity_17(3);
  msg.set(CustOrderCapacity_17);
  QuoteResponse_0.insert(CustOrderCapacity_17.getString());
  FIX::EncodedText EncodedText_73("DATA_329162462");
  msg.set(EncodedText_73);
  QuoteResponse_0.insert(EncodedText_73.getString());
  FIX::EncodedTextLen EncodedTextLen_73(881473954);
  msg.set(EncodedTextLen_73);
  QuoteResponse_0.insert(EncodedTextLen_73.getString());
  FIX::ExDestination ExDestination_10("EXCHANGE_897836794");
  msg.set(ExDestination_10);
  QuoteResponse_0.insert(ExDestination_10.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_10('B');
  msg.set(ExDestinationIDSource_10);
  QuoteResponse_0.insert(ExDestinationIDSource_10.getString());
  FIX::IOIID IOIID_9("STRING_2065929844");
  msg.set(IOIID_9);
  QuoteResponse_0.insert(IOIID_9.getString());
  FIX::MidPx MidPx_4;
  MidPx_4.setString("8789502");
  msg.set(MidPx_4);
  QuoteResponse_0.insert(MidPx_4.getString());
  FIX::MidYield MidYield_4;
  MidYield_4.setString("58.230000");
  msg.set(MidYield_4);
  QuoteResponse_0.insert(MidYield_4.getString());
  FIX::MinBidSize MinBidSize_1;
  MinBidSize_1.setString("3072442");
  msg.set(MinBidSize_1);
  QuoteResponse_0.insert(MinBidSize_1.getString());
  FIX::MinOfferSize MinOfferSize_1;
  MinOfferSize_1.setString("15097066");
  msg.set(MinOfferSize_1);
  QuoteResponse_0.insert(MinOfferSize_1.getString());
  FIX::MinQty MinQty_16;
  MinQty_16.setString("12537507");
  msg.set(MinQty_16);
  QuoteResponse_0.insert(MinQty_16.getString());
  FIX::MktBidPx MktBidPx_1;
  MktBidPx_1.setString("10611043");
  msg.set(MktBidPx_1);
  QuoteResponse_0.insert(MktBidPx_1.getString());
  FIX::MktOfferPx MktOfferPx_1;
  MktOfferPx_1.setString("18325642");
  msg.set(MktOfferPx_1);
  QuoteResponse_0.insert(MktOfferPx_1.getString());
  FIX::OfferForwardPoints OfferForwardPoints_4;
  OfferForwardPoints_4.setString("2286034");
  msg.set(OfferForwardPoints_4);
  QuoteResponse_0.insert(OfferForwardPoints_4.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_4;
  OfferForwardPoints2_4.setString("2829354");
  msg.set(OfferForwardPoints2_4);
  QuoteResponse_0.insert(OfferForwardPoints2_4.getString());
  FIX::OfferPx OfferPx_4;
  OfferPx_4.setString("19692702");
  msg.set(OfferPx_4);
  QuoteResponse_0.insert(OfferPx_4.getString());
  FIX::OfferSize OfferSize_4;
  OfferSize_4.setString("7796501");
  msg.set(OfferSize_4);
  QuoteResponse_0.insert(OfferSize_4.getString());
  FIX::OfferSpotRate OfferSpotRate_4;
  OfferSpotRate_4.setString("14952259");
  msg.set(OfferSpotRate_4);
  QuoteResponse_0.insert(OfferSpotRate_4.getString());
  FIX::OfferYield OfferYield_4;
  OfferYield_4.setString("47.830000");
  msg.set(OfferYield_4);
  QuoteResponse_0.insert(OfferYield_4.getString());
  FIX::OrdType OrdType_51('J');
  msg.set(OrdType_51);
  QuoteResponse_0.insert(OrdType_51.getString());
  FIX::OrderCapacity OrderCapacity_24('G');
  msg.set(OrderCapacity_24);
  QuoteResponse_0.insert(OrderCapacity_24.getString());
  FIX::OrderQty2 OrderQty2_14;
  OrderQty2_14.setString("14990936");
  msg.set(OrderQty2_14);
  QuoteResponse_0.insert(OrderQty2_14.getString());
  FIX::OrderRestrictions OrderRestrictions_21("MULTIPLECHARVALUE_4");
  msg.set(OrderRestrictions_21);
  QuoteResponse_0.insert(OrderRestrictions_21.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_15(false);
  msg.set(PreTradeAnonymity_15);
  QuoteResponse_0.insert(PreTradeAnonymity_15.getString());
  FIX::Price Price_24;
  Price_24.setString("20695270");
  msg.set(Price_24);
  QuoteResponse_0.insert(Price_24.getString());
  FIX::PriceType PriceType_38(18);
  msg.set(PriceType_38);
  QuoteResponse_0.insert(PriceType_38.getString());
  FIX::QuoteID QuoteID_12("STRING_698324986");
  msg.set(QuoteID_12);
  QuoteResponse_0.insert(QuoteID_12.getString());
  FIX::QuoteMsgID QuoteMsgID_2("STRING_61921732");
  msg.set(QuoteMsgID_2);
  QuoteResponse_0.insert(QuoteMsgID_2.getString());
  FIX::QuoteRespID QuoteRespID_2("STRING_760502430");
  msg.set(QuoteRespID_2);
  QuoteResponse_0.insert(QuoteRespID_2.getString());
  FIX::QuoteRespType QuoteRespType_0(6);
  msg.set(QuoteRespType_0);
  QuoteResponse_0.insert(QuoteRespType_0.getString());
  FIX::QuoteType QuoteType_10(3);
  msg.set(QuoteType_10);
  QuoteResponse_0.insert(QuoteType_10.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_1;
  SettlCurrBidFxRate_1.setString("2437691");
  msg.set(SettlCurrBidFxRate_1);
  QuoteResponse_0.insert(SettlCurrBidFxRate_1.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_8('D');
  msg.set(SettlCurrFxRateCalc_8);
  QuoteResponse_0.insert(SettlCurrFxRateCalc_8.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_1;
  SettlCurrOfferFxRate_1.setString("11539749");
  msg.set(SettlCurrOfferFxRate_1);
  QuoteResponse_0.insert(SettlCurrOfferFxRate_1.getString());
  FIX::SettlDate SettlDate_36("LOCALMKTDATE_1141605958");
  msg.set(SettlDate_36);
  QuoteResponse_0.insert(SettlDate_36.getString());
  FIX::SettlDate2 SettlDate2_14("LOCALMKTDATE_1470442884");
  msg.set(SettlDate2_14);
  QuoteResponse_0.insert(SettlDate2_14.getString());
  FIX::SettlType SettlType_27("STRING_5");
  msg.set(SettlType_27);
  QuoteResponse_0.insert(SettlType_27.getString());
  FIX::Side Side_44('7');
  msg.set(Side_44);
  QuoteResponse_0.insert(Side_44.getString());
  FIX::Text Text_73("STRING_1299985059");
  msg.set(Text_73);
  QuoteResponse_0.insert(Text_73.getString());
  FIX::TradingSessionID TradingSessionID_66("STRING_5");
  msg.set(TradingSessionID_66);
  QuoteResponse_0.insert(TradingSessionID_66.getString());
  FIX::TradingSessionSubID TradingSessionSubID_66("STRING_4");
  msg.set(TradingSessionSubID_66);
  QuoteResponse_0.insert(TradingSessionSubID_66.getString());
  FIX::TransactTime TransactTime_50(FIX::UTCTIMESTAMP(9, 58, 18, 13, 42016));
  msg.set(TransactTime_50);
  QuoteResponse_0.insert(TransactTime_50.getString());
  FIX::ValidUntilTime ValidUntilTime_7(FIX::UTCTIMESTAMP(14, 14, 55, 12, 52000));
  msg.set(ValidUntilTime_7);
  QuoteResponse_0.insert(ValidUntilTime_7.getString());
  all_values.push_back(QuoteResponse_0);

  // FinancingDetails
  multiset<string> FinancingDetails_23;
  FIX::AgreementCurrency AgreementCurrency_23("GBP");
  msg.set(AgreementCurrency_23);
  FinancingDetails_23.insert(AgreementCurrency_23.getString());
  FIX::AgreementDate AgreementDate_23("LOCALMKTDATE_242535195");
  msg.set(AgreementDate_23);
  FinancingDetails_23.insert(AgreementDate_23.getString());
  FIX::AgreementDesc AgreementDesc_23("STRING_1591486207");
  msg.set(AgreementDesc_23);
  FinancingDetails_23.insert(AgreementDesc_23.getString());
  FIX::AgreementID AgreementID_23("STRING_1425742346");
  msg.set(AgreementID_23);
  FinancingDetails_23.insert(AgreementID_23.getString());
  FIX::DeliveryType DeliveryType_23(0);
  msg.set(DeliveryType_23);
  FinancingDetails_23.insert(DeliveryType_23.getString());
  FIX::EndDate EndDate_23("LOCALMKTDATE_1863987246");
  msg.set(EndDate_23);
  FinancingDetails_23.insert(EndDate_23.getString());
  FIX::MarginRatio MarginRatio_23;
  MarginRatio_23.setString("15.100000");
  msg.set(MarginRatio_23);
  FinancingDetails_23.insert(MarginRatio_23.getString());
  FIX::StartDate StartDate_23("LOCALMKTDATE_161453540");
  msg.set(StartDate_23);
  FinancingDetails_23.insert(StartDate_23.getString());
  FIX::TerminationType TerminationType_23(4);
  msg.set(TerminationType_23);
  FinancingDetails_23.insert(TerminationType_23.getString());
  all_values.push_back(FinancingDetails_23);

  // Instrument
  multiset<string> Instrument_63;
  FIX::AttachmentPoint AttachmentPoint_63;
  AttachmentPoint_63.setString("38.200000");
  msg.set(AttachmentPoint_63);
  Instrument_63.insert(AttachmentPoint_63.getString());
  FIX::CFICode CFICode_63("STRING_1631896424");
  msg.set(CFICode_63);
  Instrument_63.insert(CFICode_63.getString());
  FIX::CPProgram CPProgram_63(1);
  msg.set(CPProgram_63);
  Instrument_63.insert(CPProgram_63.getString());
  FIX::CPRegType CPRegType_63("STRING_536706338");
  msg.set(CPRegType_63);
  Instrument_63.insert(CPRegType_63.getString());
  FIX::CapPrice CapPrice_63;
  CapPrice_63.setString("7843978");
  msg.set(CapPrice_63);
  Instrument_63.insert(CapPrice_63.getString());
  FIX::ContractMultiplier ContractMultiplier_63;
  ContractMultiplier_63.setString("11750815");
  msg.set(ContractMultiplier_63);
  Instrument_63.insert(ContractMultiplier_63.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_63(2);
  msg.set(ContractMultiplierUnit_63);
  Instrument_63.insert(ContractMultiplierUnit_63.getString());
  FIX::ContractSettlMonth ContractSettlMonth_63("MONTHYEAR_1190650000");
  msg.set(ContractSettlMonth_63);
  Instrument_63.insert(ContractSettlMonth_63.getString());
  FIX::CountryOfIssue CountryOfIssue_63("COUNTRY_1468367688");
  msg.set(CountryOfIssue_63);
  Instrument_63.insert(CountryOfIssue_63.getString());
  FIX::CouponPaymentDate CouponPaymentDate_63("LOCALMKTDATE_839861572");
  msg.set(CouponPaymentDate_63);
  Instrument_63.insert(CouponPaymentDate_63.getString());
  FIX::CouponRate CouponRate_63;
  CouponRate_63.setString("55.790000");
  msg.set(CouponRate_63);
  Instrument_63.insert(CouponRate_63.getString());
  FIX::CreditRating CreditRating_63("STRING_2044589249");
  msg.set(CreditRating_63);
  Instrument_63.insert(CreditRating_63.getString());
  FIX::DatedDate DatedDate_63("LOCALMKTDATE_1729507867");
  msg.set(DatedDate_63);
  Instrument_63.insert(DatedDate_63.getString());
  FIX::DetachmentPoint DetachmentPoint_63;
  DetachmentPoint_63.setString("76.110000");
  msg.set(DetachmentPoint_63);
  Instrument_63.insert(DetachmentPoint_63.getString());
  FIX::EncodedIssuer EncodedIssuer_63("DATA_1968553115");
  msg.set(EncodedIssuer_63);
  Instrument_63.insert(EncodedIssuer_63.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_63(1837935297);
  msg.set(EncodedIssuerLen_63);
  Instrument_63.insert(EncodedIssuerLen_63.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_63("DATA_114777518");
  msg.set(EncodedSecurityDesc_63);
  Instrument_63.insert(EncodedSecurityDesc_63.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_63(1491025523);
  msg.set(EncodedSecurityDescLen_63);
  Instrument_63.insert(EncodedSecurityDescLen_63.getString());
  FIX::ExerciseStyle ExerciseStyle_63(2);
  msg.set(ExerciseStyle_63);
  Instrument_63.insert(ExerciseStyle_63.getString());
  FIX::Factor Factor_63;
  Factor_63.setString("4373521");
  msg.set(Factor_63);
  Instrument_63.insert(Factor_63.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_63(false);
  msg.set(FlexProductEligibilityIndicator_63);
  Instrument_63.insert(FlexProductEligibilityIndicator_63.getString());
  FIX::FlexibleIndicator FlexibleIndicator_63(false);
  msg.set(FlexibleIndicator_63);
  Instrument_63.insert(FlexibleIndicator_63.getString());
  FIX::FloorPrice FloorPrice_63;
  FloorPrice_63.setString("11025920");
  msg.set(FloorPrice_63);
  Instrument_63.insert(FloorPrice_63.getString());
  FIX::FlowScheduleType FlowScheduleType_63(1);
  msg.set(FlowScheduleType_63);
  Instrument_63.insert(FlowScheduleType_63.getString());
  FIX::InstrRegistry InstrRegistry_63("STRING_124056094");
  msg.set(InstrRegistry_63);
  Instrument_63.insert(InstrRegistry_63.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_63('3');
  msg.set(InstrmtAssignmentMethod_63);
  Instrument_63.insert(InstrmtAssignmentMethod_63.getString());
  FIX::InterestAccrualDate InterestAccrualDate_63("LOCALMKTDATE_1315184063");
  msg.set(InterestAccrualDate_63);
  Instrument_63.insert(InterestAccrualDate_63.getString());
  FIX::IssueDate IssueDate_63("LOCALMKTDATE_1988043340");
  msg.set(IssueDate_63);
  Instrument_63.insert(IssueDate_63.getString());
  FIX::Issuer Issuer_63("STRING_2050362263");
  msg.set(Issuer_63);
  Instrument_63.insert(Issuer_63.getString());
  FIX::ListMethod ListMethod_63(1);
  msg.set(ListMethod_63);
  Instrument_63.insert(ListMethod_63.getString());
  FIX::LocaleOfIssue LocaleOfIssue_63("STRING_711038283");
  msg.set(LocaleOfIssue_63);
  Instrument_63.insert(LocaleOfIssue_63.getString());
  FIX::MaturityDate MaturityDate_63("LOCALMKTDATE_566512436");
  msg.set(MaturityDate_63);
  Instrument_63.insert(MaturityDate_63.getString());
  FIX::MaturityMonthYear MaturityMonthYear_63("MONTHYEAR_961050379");
  msg.set(MaturityMonthYear_63);
  Instrument_63.insert(MaturityMonthYear_63.getString());
  FIX::MaturityTime MaturityTime_63("TZTIMEONLY_506454415");
  msg.set(MaturityTime_63);
  Instrument_63.insert(MaturityTime_63.getString());
  FIX::MinPriceIncrement MinPriceIncrement_63;
  MinPriceIncrement_63.setString("11032187");
  msg.set(MinPriceIncrement_63);
  Instrument_63.insert(MinPriceIncrement_63.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_63;
  MinPriceIncrementAmount_63.setString("17454482");
  msg.set(MinPriceIncrementAmount_63);
  Instrument_63.insert(MinPriceIncrementAmount_63.getString());
  FIX::NTPositionLimit NTPositionLimit_63(1681535998);
  msg.set(NTPositionLimit_63);
  Instrument_63.insert(NTPositionLimit_63.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_63;
  NotionalPercentageOutstanding_63.setString("6.280000");
  msg.set(NotionalPercentageOutstanding_63);
  Instrument_63.insert(NotionalPercentageOutstanding_63.getString());
  FIX::OptAttribute OptAttribute_63('7');
  msg.set(OptAttribute_63);
  Instrument_63.insert(OptAttribute_63.getString());
  FIX::OptPayoutAmount OptPayoutAmount_63;
  OptPayoutAmount_63.setString("10024200");
  msg.set(OptPayoutAmount_63);
  Instrument_63.insert(OptPayoutAmount_63.getString());
  FIX::OptPayoutType OptPayoutType_63(3);
  msg.set(OptPayoutType_63);
  Instrument_63.insert(OptPayoutType_63.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_63;
  OriginalNotionalPercentageOutstanding_63.setString("64.980000");
  msg.set(OriginalNotionalPercentageOutstanding_63);
  Instrument_63.insert(OriginalNotionalPercentageOutstanding_63.getString());
  FIX::Pool Pool_63("STRING_899525639");
  msg.set(Pool_63);
  Instrument_63.insert(Pool_63.getString());
  FIX::PositionLimit PositionLimit_63(1297106419);
  msg.set(PositionLimit_63);
  Instrument_63.insert(PositionLimit_63.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_63("STRING_INX");
  msg.set(PriceQuoteMethod_63);
  Instrument_63.insert(PriceQuoteMethod_63.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_63("STRING_720595107");
  msg.set(PriceUnitOfMeasure_63);
  Instrument_63.insert(PriceUnitOfMeasure_63.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_63;
  PriceUnitOfMeasureQty_63.setString("9875580");
  msg.set(PriceUnitOfMeasureQty_63);
  Instrument_63.insert(PriceUnitOfMeasureQty_63.getString());
  FIX::Product Product_65(8);
  msg.set(Product_65);
  Instrument_63.insert(Product_65.getString());
  FIX::ProductComplex ProductComplex_63("STRING_64136982");
  msg.set(ProductComplex_63);
  Instrument_63.insert(ProductComplex_63.getString());
  FIX::PutOrCall PutOrCall_63(1);
  msg.set(PutOrCall_63);
  Instrument_63.insert(PutOrCall_63.getString());
  FIX::RedemptionDate RedemptionDate_63("LOCALMKTDATE_2111293765");
  msg.set(RedemptionDate_63);
  Instrument_63.insert(RedemptionDate_63.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_63("STRING_1099372713");
  msg.set(RepoCollateralSecurityType_63);
  Instrument_63.insert(RepoCollateralSecurityType_63.getString());
  FIX::RepurchaseRate RepurchaseRate_63;
  RepurchaseRate_63.setString("6.650000");
  msg.set(RepurchaseRate_63);
  Instrument_63.insert(RepurchaseRate_63.getString());
  FIX::RepurchaseTerm RepurchaseTerm_63(1066402172);
  msg.set(RepurchaseTerm_63);
  Instrument_63.insert(RepurchaseTerm_63.getString());
  FIX::RestructuringType RestructuringType_63("STRING_FR");
  msg.set(RestructuringType_63);
  Instrument_63.insert(RestructuringType_63.getString());
  FIX::SecurityDesc SecurityDesc_63("STRING_942156759");
  msg.set(SecurityDesc_63);
  Instrument_63.insert(SecurityDesc_63.getString());
  FIX::SecurityExchange SecurityExchange_63("EXCHANGE_1447252925");
  msg.set(SecurityExchange_63);
  Instrument_63.insert(SecurityExchange_63.getString());
  FIX::SecurityGroup SecurityGroup_63("STRING_1544844055");
  msg.set(SecurityGroup_63);
  Instrument_63.insert(SecurityGroup_63.getString());
  FIX::SecurityID SecurityID_63("STRING_782716452");
  msg.set(SecurityID_63);
  Instrument_63.insert(SecurityID_63.getString());
  FIX::SecurityIDSource SecurityIDSource_63("STRING_B");
  msg.set(SecurityIDSource_63);
  Instrument_63.insert(SecurityIDSource_63.getString());
  FIX::SecurityStatus SecurityStatus_63("STRING_1");
  msg.set(SecurityStatus_63);
  Instrument_63.insert(SecurityStatus_63.getString());
  FIX::SecuritySubType SecuritySubType_64("STRING_1493754735");
  msg.set(SecuritySubType_64);
  Instrument_63.insert(SecuritySubType_64.getString());
  FIX::SecurityType SecurityType_65("STRING_DN");
  msg.set(SecurityType_65);
  Instrument_63.insert(SecurityType_65.getString());
  FIX::Seniority Seniority_63("STRING_SR");
  msg.set(Seniority_63);
  Instrument_63.insert(Seniority_63.getString());
  FIX::SettlMethod SettlMethod_63('P');
  msg.set(SettlMethod_63);
  Instrument_63.insert(SettlMethod_63.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_63("STRING_872379103");
  msg.set(SettleOnOpenFlag_63);
  Instrument_63.insert(SettleOnOpenFlag_63.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_63("STRING_1433012955");
  msg.set(StateOrProvinceOfIssue_63);
  Instrument_63.insert(StateOrProvinceOfIssue_63.getString());
  FIX::StrikeCurrency StrikeCurrency_63("CAN");
  msg.set(StrikeCurrency_63);
  Instrument_63.insert(StrikeCurrency_63.getString());
  FIX::StrikeMultiplier StrikeMultiplier_63;
  StrikeMultiplier_63.setString("741438");
  msg.set(StrikeMultiplier_63);
  Instrument_63.insert(StrikeMultiplier_63.getString());
  FIX::StrikePrice StrikePrice_63;
  StrikePrice_63.setString("3891978");
  msg.set(StrikePrice_63);
  Instrument_63.insert(StrikePrice_63.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_63(5);
  msg.set(StrikePriceBoundaryMethod_63);
  Instrument_63.insert(StrikePriceBoundaryMethod_63.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_63;
  StrikePriceBoundaryPrecision_63.setString("3.720000");
  msg.set(StrikePriceBoundaryPrecision_63);
  Instrument_63.insert(StrikePriceBoundaryPrecision_63.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_63(3);
  msg.set(StrikePriceDeterminationMethod_63);
  Instrument_63.insert(StrikePriceDeterminationMethod_63.getString());
  FIX::StrikeValue StrikeValue_63;
  StrikeValue_63.setString("4648210");
  msg.set(StrikeValue_63);
  Instrument_63.insert(StrikeValue_63.getString());
  FIX::Symbol Symbol_63("STRING_2099944482");
  msg.set(Symbol_63);
  Instrument_63.insert(Symbol_63.getString());
  FIX::SymbolSfx SymbolSfx_63("STRING_WI");
  msg.set(SymbolSfx_63);
  Instrument_63.insert(SymbolSfx_63.getString());
  FIX::TimeUnit TimeUnit_63("STRING_H");
  msg.set(TimeUnit_63);
  Instrument_63.insert(TimeUnit_63.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_63(2);
  msg.set(UnderlyingPriceDeterminationMethod_63);
  Instrument_63.insert(UnderlyingPriceDeterminationMethod_63.getString());
  FIX::UnitOfMeasure UnitOfMeasure_63("STRING_MMbbl");
  msg.set(UnitOfMeasure_63);
  Instrument_63.insert(UnitOfMeasure_63.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_63;
  UnitOfMeasureQty_63.setString("15904262");
  msg.set(UnitOfMeasureQty_63);
  Instrument_63.insert(UnitOfMeasureQty_63.getString());
  FIX::ValuationMethod ValuationMethod_63("STRING_CDSD");
  msg.set(ValuationMethod_63);
  Instrument_63.insert(ValuationMethod_63.getString());
  all_values.push_back(Instrument_63);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_119;
    FIX::ComplexEventCondition ComplexEventCondition_119(1);
    noComplexEvents_0_0.set(ComplexEventCondition_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventCondition_119.getString());
    FIX::ComplexEventPrice ComplexEventPrice_119;
    ComplexEventPrice_119.setString("5091311");
    noComplexEvents_0_0.set(ComplexEventPrice_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPrice_119.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_119(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceBoundaryMethod_119.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_119;
    ComplexEventPriceBoundaryPrecision_119.setString("0.300000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceBoundaryPrecision_119.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_119(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceTimeType_119.getString());
    FIX::ComplexEventType ComplexEventType_119(4);
    noComplexEvents_0_0.set(ComplexEventType_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventType_119.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_119;
    ComplexOptPayoutAmount_119.setString("19859164");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexOptPayoutAmount_119.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_119);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_246;
      FIX::ComplexEventEndDate ComplexEventEndDate_246(FIX::UTCTIMESTAMP(9, 49, 35, 0, 92000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_246);
      ComplexEventDates_NoComplexEventDates_246.insert(ComplexEventEndDate_246.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_246(FIX::UTCTIMESTAMP(11, 57, 36, 27, 102011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_246);
      ComplexEventDates_NoComplexEventDates_246.insert(ComplexEventStartDate_246.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_246);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_482;
        FIX::ComplexEventEndTime ComplexEventEndTime_482(FIX::UTCTIMEONLY(8, 3, 17));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_482);
        ComplexEventTimes_NoComplexEventTimes_482.insert(ComplexEventEndTime_482.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_482(FIX::UTCTIMEONLY(16, 16, 25));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_482);
        ComplexEventTimes_NoComplexEventTimes_482.insert(ComplexEventStartTime_482.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_482);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_247;
      FIX::ComplexEventEndDate ComplexEventEndDate_247(FIX::UTCTIMESTAMP(7, 54, 9, 19, 72003));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_247);
      ComplexEventDates_NoComplexEventDates_247.insert(ComplexEventEndDate_247.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_247(FIX::UTCTIMESTAMP(16, 4, 12, 11, 62008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_247);
      ComplexEventDates_NoComplexEventDates_247.insert(ComplexEventStartDate_247.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_247);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_483;
        FIX::ComplexEventEndTime ComplexEventEndTime_483(FIX::UTCTIMEONLY(0, 10, 51));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_483);
        ComplexEventTimes_NoComplexEventTimes_483.insert(ComplexEventEndTime_483.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_483(FIX::UTCTIMEONLY(8, 50, 22));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_483);
        ComplexEventTimes_NoComplexEventTimes_483.insert(ComplexEventStartTime_483.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_483);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_120;
    FIX::ComplexEventCondition ComplexEventCondition_120(2);
    noComplexEvents_0_1.set(ComplexEventCondition_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventCondition_120.getString());
    FIX::ComplexEventPrice ComplexEventPrice_120;
    ComplexEventPrice_120.setString("9045428");
    noComplexEvents_0_1.set(ComplexEventPrice_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPrice_120.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_120(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceBoundaryMethod_120.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_120;
    ComplexEventPriceBoundaryPrecision_120.setString("92.520000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceBoundaryPrecision_120.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_120(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceTimeType_120.getString());
    FIX::ComplexEventType ComplexEventType_120(5);
    noComplexEvents_0_1.set(ComplexEventType_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventType_120.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_120;
    ComplexOptPayoutAmount_120.setString("7615392");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexOptPayoutAmount_120.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_120);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_248;
      FIX::ComplexEventEndDate ComplexEventEndDate_248(FIX::UTCTIMESTAMP(3, 17, 54, 2, 42015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_248);
      ComplexEventDates_NoComplexEventDates_248.insert(ComplexEventEndDate_248.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_248(FIX::UTCTIMESTAMP(7, 1, 18, 10, 112013));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_248);
      ComplexEventDates_NoComplexEventDates_248.insert(ComplexEventStartDate_248.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_248);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_484;
        FIX::ComplexEventEndTime ComplexEventEndTime_484(FIX::UTCTIMEONLY(11, 34, 16));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_484);
        ComplexEventTimes_NoComplexEventTimes_484.insert(ComplexEventEndTime_484.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_484(FIX::UTCTIMEONLY(22, 58, 17));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_484);
        ComplexEventTimes_NoComplexEventTimes_484.insert(ComplexEventStartTime_484.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_484);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_249;
      FIX::ComplexEventEndDate ComplexEventEndDate_249(FIX::UTCTIMESTAMP(0, 42, 54, 15, 92007));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_249);
      ComplexEventDates_NoComplexEventDates_249.insert(ComplexEventEndDate_249.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_249(FIX::UTCTIMESTAMP(13, 58, 0, 19, 102003));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_249);
      ComplexEventDates_NoComplexEventDates_249.insert(ComplexEventStartDate_249.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_249);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_485;
        FIX::ComplexEventEndTime ComplexEventEndTime_485(FIX::UTCTIMEONLY(11, 46, 49));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_485);
        ComplexEventTimes_NoComplexEventTimes_485.insert(ComplexEventEndTime_485.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_485(FIX::UTCTIMEONLY(12, 44, 17));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_485);
        ComplexEventTimes_NoComplexEventTimes_485.insert(ComplexEventStartTime_485.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_485);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_486;
        FIX::ComplexEventEndTime ComplexEventEndTime_486(FIX::UTCTIMEONLY(7, 52, 21));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_486);
        ComplexEventTimes_NoComplexEventTimes_486.insert(ComplexEventEndTime_486.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_486(FIX::UTCTIMEONLY(14, 19, 47));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_486);
        ComplexEventTimes_NoComplexEventTimes_486.insert(ComplexEventStartTime_486.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_486);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_487;
        FIX::ComplexEventEndTime ComplexEventEndTime_487(FIX::UTCTIMEONLY(20, 29, 59));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_487);
        ComplexEventTimes_NoComplexEventTimes_487.insert(ComplexEventEndTime_487.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_487(FIX::UTCTIMEONLY(18, 6, 5));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_487);
        ComplexEventTimes_NoComplexEventTimes_487.insert(ComplexEventStartTime_487.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_487);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_250;
      FIX::ComplexEventEndDate ComplexEventEndDate_250(FIX::UTCTIMESTAMP(16, 5, 19, 1, 22003));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_250);
      ComplexEventDates_NoComplexEventDates_250.insert(ComplexEventEndDate_250.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_250(FIX::UTCTIMESTAMP(12, 41, 50, 21, 72002));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_250);
      ComplexEventDates_NoComplexEventDates_250.insert(ComplexEventStartDate_250.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_250);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_488;
        FIX::ComplexEventEndTime ComplexEventEndTime_488(FIX::UTCTIMEONLY(2, 19, 5));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_488);
        ComplexEventTimes_NoComplexEventTimes_488.insert(ComplexEventEndTime_488.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_488(FIX::UTCTIMEONLY(1, 16, 19));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_488);
        ComplexEventTimes_NoComplexEventTimes_488.insert(ComplexEventStartTime_488.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_488);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_489;
        FIX::ComplexEventEndTime ComplexEventEndTime_489(FIX::UTCTIMEONLY(12, 40, 1));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_489);
        ComplexEventTimes_NoComplexEventTimes_489.insert(ComplexEventEndTime_489.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_489(FIX::UTCTIMEONLY(22, 7, 33));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_489);
        ComplexEventTimes_NoComplexEventTimes_489.insert(ComplexEventStartTime_489.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_489);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_490;
        FIX::ComplexEventEndTime ComplexEventEndTime_490(FIX::UTCTIMEONLY(3, 38, 53));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_490);
        ComplexEventTimes_NoComplexEventTimes_490.insert(ComplexEventEndTime_490.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_490(FIX::UTCTIMEONLY(7, 48, 33));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_490);
        ComplexEventTimes_NoComplexEventTimes_490.insert(ComplexEventStartTime_490.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_490);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_121;
    FIX::ComplexEventCondition ComplexEventCondition_121(2);
    noComplexEvents_0_2.set(ComplexEventCondition_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventCondition_121.getString());
    FIX::ComplexEventPrice ComplexEventPrice_121;
    ComplexEventPrice_121.setString("14109456");
    noComplexEvents_0_2.set(ComplexEventPrice_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPrice_121.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_121(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceBoundaryMethod_121.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_121;
    ComplexEventPriceBoundaryPrecision_121.setString("55.490000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceBoundaryPrecision_121.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_121(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceTimeType_121.getString());
    FIX::ComplexEventType ComplexEventType_121(4);
    noComplexEvents_0_2.set(ComplexEventType_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventType_121.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_121;
    ComplexOptPayoutAmount_121.setString("1578070");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexOptPayoutAmount_121.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_121);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_251;
      FIX::ComplexEventEndDate ComplexEventEndDate_251(FIX::UTCTIMESTAMP(3, 24, 24, 12, 62001));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_251);
      ComplexEventDates_NoComplexEventDates_251.insert(ComplexEventEndDate_251.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_251(FIX::UTCTIMESTAMP(5, 23, 59, 25, 32012));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_251);
      ComplexEventDates_NoComplexEventDates_251.insert(ComplexEventStartDate_251.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_251);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_491;
        FIX::ComplexEventEndTime ComplexEventEndTime_491(FIX::UTCTIMEONLY(14, 16, 53));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_491);
        ComplexEventTimes_NoComplexEventTimes_491.insert(ComplexEventEndTime_491.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_491(FIX::UTCTIMEONLY(12, 41, 0));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_491);
        ComplexEventTimes_NoComplexEventTimes_491.insert(ComplexEventStartTime_491.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_491);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_492;
        FIX::ComplexEventEndTime ComplexEventEndTime_492(FIX::UTCTIMEONLY(3, 16, 44));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_492);
        ComplexEventTimes_NoComplexEventTimes_492.insert(ComplexEventEndTime_492.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_492(FIX::UTCTIMEONLY(22, 40, 15));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_492);
        ComplexEventTimes_NoComplexEventTimes_492.insert(ComplexEventStartTime_492.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_492);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_123;
    FIX::EventDate EventDate_123("LOCALMKTDATE_776367295");
    noEvents_0_0.set(EventDate_123);
    EvntGrp_NoEvents_123.insert(EventDate_123.getString());
    FIX::EventPx EventPx_123;
    EventPx_123.setString("3175016");
    noEvents_0_0.set(EventPx_123);
    EvntGrp_NoEvents_123.insert(EventPx_123.getString());
    FIX::EventText EventText_123("STRING_981466498");
    noEvents_0_0.set(EventText_123);
    EvntGrp_NoEvents_123.insert(EventText_123.getString());
    FIX::EventTime EventTime_123(FIX::UTCTIMESTAMP(20, 33, 58, 22, 12016));
    noEvents_0_0.set(EventTime_123);
    EvntGrp_NoEvents_123.insert(EventTime_123.getString());
    FIX::EventType EventType_123(99);
    noEvents_0_0.set(EventType_123);
    EvntGrp_NoEvents_123.insert(EventType_123.getString());
    all_values.push_back(EvntGrp_NoEvents_123);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_115;
    FIX::InstrumentPartyID InstrumentPartyID_115("STRING_2100127616");
    noInstrumentParties_0_0.set(InstrumentPartyID_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyID_115.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_115('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyIDSource_115.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_115(1761429854);
    noInstrumentParties_0_0.set(InstrumentPartyRole_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyRole_115.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_115);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225;
      FIX::InstrumentPartySubID InstrumentPartySubID_225("STRING_1294392561");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_225);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225.insert(InstrumentPartySubID_225.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_225(1256918759);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_225);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225.insert(InstrumentPartySubIDType_225.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226;
      FIX::InstrumentPartySubID InstrumentPartySubID_226("STRING_731905697");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_226);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226.insert(InstrumentPartySubID_226.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_226(2002982253);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_226);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226.insert(InstrumentPartySubIDType_226.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227;
      FIX::InstrumentPartySubID InstrumentPartySubID_227("STRING_1176145413");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_227);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227.insert(InstrumentPartySubID_227.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_227(1910042118);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_227);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227.insert(InstrumentPartySubIDType_227.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_116;
    FIX::InstrumentPartyID InstrumentPartyID_116("STRING_819319549");
    noInstrumentParties_0_1.set(InstrumentPartyID_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyID_116.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_116('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyIDSource_116.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_116(712852466);
    noInstrumentParties_0_1.set(InstrumentPartyRole_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyRole_116.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_116);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228;
      FIX::InstrumentPartySubID InstrumentPartySubID_228("STRING_35011576");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_228);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228.insert(InstrumentPartySubID_228.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_228(1718586744);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_228);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228.insert(InstrumentPartySubIDType_228.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_117;
    FIX::InstrumentPartyID InstrumentPartyID_117("STRING_1079472254");
    noInstrumentParties_0_2.set(InstrumentPartyID_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyID_117.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_117('7');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyIDSource_117.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_117(693593218);
    noInstrumentParties_0_2.set(InstrumentPartyRole_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyRole_117.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_117);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229;
      FIX::InstrumentPartySubID InstrumentPartySubID_229("STRING_396436630");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_229);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229.insert(InstrumentPartySubID_229.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_229(1675059716);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_229);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229.insert(InstrumentPartySubIDType_229.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_132;
    FIX::SecurityAltID SecurityAltID_132("STRING_1105364611");
    noSecurityAltID_0_0.set(SecurityAltID_132);
    SecAltIDGrp_NoSecurityAltID_132.insert(SecurityAltID_132.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_132("STRING_448195221");
    noSecurityAltID_0_0.set(SecurityAltIDSource_132);
    SecAltIDGrp_NoSecurityAltID_132.insert(SecurityAltIDSource_132.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_132);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_133;
    FIX::SecurityAltID SecurityAltID_133("STRING_566746672");
    noSecurityAltID_0_1.set(SecurityAltID_133);
    SecAltIDGrp_NoSecurityAltID_133.insert(SecurityAltID_133.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_133("STRING_1473082837");
    noSecurityAltID_0_1.set(SecurityAltIDSource_133);
    SecAltIDGrp_NoSecurityAltID_133.insert(SecurityAltIDSource_133.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_133);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_126;
  FIX::SecurityXML SecurityXML_127("XMLDATA_1327963449");
  msg.set(SecurityXML_127);
  FIX::SecurityXMLLen SecurityXMLLen_63(556629462);
  msg.set(SecurityXMLLen_63);
  FIX::SecurityXMLSchema SecurityXMLSchema_63("STRING_1795932836");
  msg.set(SecurityXMLSchema_63);
  SecurityXML_126.insert(SecurityXMLSchema_63.getString());
  all_values.push_back(SecurityXML_126);

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_1;
    FIX::LegBidForwardPoints LegBidForwardPoints_1;
    LegBidForwardPoints_1.setString("5092734");
    noLegs_0_0.set(LegBidForwardPoints_1);
    LegQuotGrp_NoLegs_1.insert(LegBidForwardPoints_1.getString());
    FIX::LegBidPx LegBidPx_1;
    LegBidPx_1.setString("5460035");
    noLegs_0_0.set(LegBidPx_1);
    LegQuotGrp_NoLegs_1.insert(LegBidPx_1.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_1;
    LegOfferForwardPoints_1.setString("683827");
    noLegs_0_0.set(LegOfferForwardPoints_1);
    LegQuotGrp_NoLegs_1.insert(LegOfferForwardPoints_1.getString());
    FIX::LegOfferPx LegOfferPx_1;
    LegOfferPx_1.setString("12955175");
    noLegs_0_0.set(LegOfferPx_1);
    LegQuotGrp_NoLegs_1.insert(LegOfferPx_1.getString());
    FIX::LegOrderQty LegOrderQty_15;
    LegOrderQty_15.setString("18403961");
    noLegs_0_0.set(LegOrderQty_15);
    LegQuotGrp_NoLegs_1.insert(LegOrderQty_15.getString());
    FIX::LegPriceType LegPriceType_1(1325301502);
    noLegs_0_0.set(LegPriceType_1);
    LegQuotGrp_NoLegs_1.insert(LegPriceType_1.getString());
    FIX::LegQty LegQty_15;
    LegQty_15.setString("20274231");
    noLegs_0_0.set(LegQty_15);
    LegQuotGrp_NoLegs_1.insert(LegQty_15.getString());
    FIX::LegRefID LegRefID_15("STRING_1695894760");
    noLegs_0_0.set(LegRefID_15);
    LegQuotGrp_NoLegs_1.insert(LegRefID_15.getString());
    FIX::LegSettlDate LegSettlDate_15("LOCALMKTDATE_353963267");
    noLegs_0_0.set(LegSettlDate_15);
    LegQuotGrp_NoLegs_1.insert(LegSettlDate_15.getString());
    FIX::LegSettlType LegSettlType_15('1');
    noLegs_0_0.set(LegSettlType_15);
    LegQuotGrp_NoLegs_1.insert(LegSettlType_15.getString());
    FIX::LegSwapType LegSwapType_15(2);
    noLegs_0_0.set(LegSwapType_15);
    LegQuotGrp_NoLegs_1.insert(LegSwapType_15.getString());
    all_values.push_back(LegQuotGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_84;
    FIX::EncodedLegIssuer EncodedLegIssuer_84("DATA_712797315");
    noLegs_0_0.set(EncodedLegIssuer_84);
    InstrumentLeg_84.insert(EncodedLegIssuer_84.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_84(355350486);
    noLegs_0_0.set(EncodedLegIssuerLen_84);
    InstrumentLeg_84.insert(EncodedLegIssuerLen_84.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_84("DATA_1238223054");
    noLegs_0_0.set(EncodedLegSecurityDesc_84);
    InstrumentLeg_84.insert(EncodedLegSecurityDesc_84.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_84(747808891);
    noLegs_0_0.set(EncodedLegSecurityDescLen_84);
    InstrumentLeg_84.insert(EncodedLegSecurityDescLen_84.getString());
    FIX::LegCFICode LegCFICode_84("STRING_2073937230");
    noLegs_0_0.set(LegCFICode_84);
    InstrumentLeg_84.insert(LegCFICode_84.getString());
    FIX::LegContractMultiplier LegContractMultiplier_84;
    LegContractMultiplier_84.setString("1702116");
    noLegs_0_0.set(LegContractMultiplier_84);
    InstrumentLeg_84.insert(LegContractMultiplier_84.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_84(826743902);
    noLegs_0_0.set(LegContractMultiplierUnit_84);
    InstrumentLeg_84.insert(LegContractMultiplierUnit_84.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_84("MONTHYEAR_620046800");
    noLegs_0_0.set(LegContractSettlMonth_84);
    InstrumentLeg_84.insert(LegContractSettlMonth_84.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_84("COUNTRY_2026051210");
    noLegs_0_0.set(LegCountryOfIssue_84);
    InstrumentLeg_84.insert(LegCountryOfIssue_84.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_84("LOCALMKTDATE_1223180533");
    noLegs_0_0.set(LegCouponPaymentDate_84);
    InstrumentLeg_84.insert(LegCouponPaymentDate_84.getString());
    FIX::LegCouponRate LegCouponRate_84;
    LegCouponRate_84.setString("28.680000");
    noLegs_0_0.set(LegCouponRate_84);
    InstrumentLeg_84.insert(LegCouponRate_84.getString());
    FIX::LegCreditRating LegCreditRating_84("STRING_1235588043");
    noLegs_0_0.set(LegCreditRating_84);
    InstrumentLeg_84.insert(LegCreditRating_84.getString());
    FIX::LegCurrency LegCurrency_84("CAN");
    noLegs_0_0.set(LegCurrency_84);
    InstrumentLeg_84.insert(LegCurrency_84.getString());
    FIX::LegDatedDate LegDatedDate_84("LOCALMKTDATE_1802334715");
    noLegs_0_0.set(LegDatedDate_84);
    InstrumentLeg_84.insert(LegDatedDate_84.getString());
    FIX::LegExerciseStyle LegExerciseStyle_84(1654144333);
    noLegs_0_0.set(LegExerciseStyle_84);
    InstrumentLeg_84.insert(LegExerciseStyle_84.getString());
    FIX::LegFactor LegFactor_84;
    LegFactor_84.setString("19237815");
    noLegs_0_0.set(LegFactor_84);
    InstrumentLeg_84.insert(LegFactor_84.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_84(211480529);
    noLegs_0_0.set(LegFlowScheduleType_84);
    InstrumentLeg_84.insert(LegFlowScheduleType_84.getString());
    FIX::LegInstrRegistry LegInstrRegistry_84("STRING_1302593521");
    noLegs_0_0.set(LegInstrRegistry_84);
    InstrumentLeg_84.insert(LegInstrRegistry_84.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_84("LOCALMKTDATE_230734427");
    noLegs_0_0.set(LegInterestAccrualDate_84);
    InstrumentLeg_84.insert(LegInterestAccrualDate_84.getString());
    FIX::LegIssueDate LegIssueDate_84("LOCALMKTDATE_720753960");
    noLegs_0_0.set(LegIssueDate_84);
    InstrumentLeg_84.insert(LegIssueDate_84.getString());
    FIX::LegIssuer LegIssuer_84("STRING_1848597114");
    noLegs_0_0.set(LegIssuer_84);
    InstrumentLeg_84.insert(LegIssuer_84.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_84("STRING_299117169");
    noLegs_0_0.set(LegLocaleOfIssue_84);
    InstrumentLeg_84.insert(LegLocaleOfIssue_84.getString());
    FIX::LegMaturityDate LegMaturityDate_84("LOCALMKTDATE_2016271461");
    noLegs_0_0.set(LegMaturityDate_84);
    InstrumentLeg_84.insert(LegMaturityDate_84.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_84("MONTHYEAR_1541509620");
    noLegs_0_0.set(LegMaturityMonthYear_84);
    InstrumentLeg_84.insert(LegMaturityMonthYear_84.getString());
    FIX::LegMaturityTime LegMaturityTime_84("TZTIMEONLY_1624418671");
    noLegs_0_0.set(LegMaturityTime_84);
    InstrumentLeg_84.insert(LegMaturityTime_84.getString());
    FIX::LegOptAttribute LegOptAttribute_84('1');
    noLegs_0_0.set(LegOptAttribute_84);
    InstrumentLeg_84.insert(LegOptAttribute_84.getString());
    FIX::LegOptionRatio LegOptionRatio_84;
    LegOptionRatio_84.setString("10899207");
    noLegs_0_0.set(LegOptionRatio_84);
    InstrumentLeg_84.insert(LegOptionRatio_84.getString());
    FIX::LegPool LegPool_84("STRING_1978381938");
    noLegs_0_0.set(LegPool_84);
    InstrumentLeg_84.insert(LegPool_84.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_84("STRING_1538709032");
    noLegs_0_0.set(LegPriceUnitOfMeasure_84);
    InstrumentLeg_84.insert(LegPriceUnitOfMeasure_84.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_84;
    LegPriceUnitOfMeasureQty_84.setString("14576513");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_84);
    InstrumentLeg_84.insert(LegPriceUnitOfMeasureQty_84.getString());
    FIX::LegProduct LegProduct_84(543695606);
    noLegs_0_0.set(LegProduct_84);
    InstrumentLeg_84.insert(LegProduct_84.getString());
    FIX::LegPutOrCall LegPutOrCall_84(1894059518);
    noLegs_0_0.set(LegPutOrCall_84);
    InstrumentLeg_84.insert(LegPutOrCall_84.getString());
    FIX::LegRatioQty LegRatioQty_84;
    LegRatioQty_84.setString("5483908");
    noLegs_0_0.set(LegRatioQty_84);
    InstrumentLeg_84.insert(LegRatioQty_84.getString());
    FIX::LegRedemptionDate LegRedemptionDate_84("LOCALMKTDATE_1291504497");
    noLegs_0_0.set(LegRedemptionDate_84);
    InstrumentLeg_84.insert(LegRedemptionDate_84.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_84("STRING_1820513101");
    noLegs_0_0.set(LegRepoCollateralSecurityType_84);
    InstrumentLeg_84.insert(LegRepoCollateralSecurityType_84.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_84;
    LegRepurchaseRate_84.setString("24.600000");
    noLegs_0_0.set(LegRepurchaseRate_84);
    InstrumentLeg_84.insert(LegRepurchaseRate_84.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_84(2118248400);
    noLegs_0_0.set(LegRepurchaseTerm_84);
    InstrumentLeg_84.insert(LegRepurchaseTerm_84.getString());
    FIX::LegSecurityDesc LegSecurityDesc_84("STRING_293076253");
    noLegs_0_0.set(LegSecurityDesc_84);
    InstrumentLeg_84.insert(LegSecurityDesc_84.getString());
    FIX::LegSecurityExchange LegSecurityExchange_84("EXCHANGE_597170022");
    noLegs_0_0.set(LegSecurityExchange_84);
    InstrumentLeg_84.insert(LegSecurityExchange_84.getString());
    FIX::LegSecurityID LegSecurityID_84("STRING_1193945285");
    noLegs_0_0.set(LegSecurityID_84);
    InstrumentLeg_84.insert(LegSecurityID_84.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_84("STRING_440699122");
    noLegs_0_0.set(LegSecurityIDSource_84);
    InstrumentLeg_84.insert(LegSecurityIDSource_84.getString());
    FIX::LegSecuritySubType LegSecuritySubType_84("STRING_1832758066");
    noLegs_0_0.set(LegSecuritySubType_84);
    InstrumentLeg_84.insert(LegSecuritySubType_84.getString());
    FIX::LegSecurityType LegSecurityType_84("STRING_1375006781");
    noLegs_0_0.set(LegSecurityType_84);
    InstrumentLeg_84.insert(LegSecurityType_84.getString());
    FIX::LegSide LegSide_84('1');
    noLegs_0_0.set(LegSide_84);
    InstrumentLeg_84.insert(LegSide_84.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_84("STRING_1487609133");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_84);
    InstrumentLeg_84.insert(LegStateOrProvinceOfIssue_84.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_84("JPY");
    noLegs_0_0.set(LegStrikeCurrency_84);
    InstrumentLeg_84.insert(LegStrikeCurrency_84.getString());
    FIX::LegStrikePrice LegStrikePrice_84;
    LegStrikePrice_84.setString("16990896");
    noLegs_0_0.set(LegStrikePrice_84);
    InstrumentLeg_84.insert(LegStrikePrice_84.getString());
    FIX::LegSymbol LegSymbol_84("STRING_36777339");
    noLegs_0_0.set(LegSymbol_84);
    InstrumentLeg_84.insert(LegSymbol_84.getString());
    FIX::LegSymbolSfx LegSymbolSfx_84("STRING_1043549529");
    noLegs_0_0.set(LegSymbolSfx_84);
    InstrumentLeg_84.insert(LegSymbolSfx_84.getString());
    FIX::LegTimeUnit LegTimeUnit_84("STRING_272359975");
    noLegs_0_0.set(LegTimeUnit_84);
    InstrumentLeg_84.insert(LegTimeUnit_84.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_84("STRING_1885374453");
    noLegs_0_0.set(LegUnitOfMeasure_84);
    InstrumentLeg_84.insert(LegUnitOfMeasure_84.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_84;
    LegUnitOfMeasureQty_84.setString("13426666");
    noLegs_0_0.set(LegUnitOfMeasureQty_84);
    InstrumentLeg_84.insert(LegUnitOfMeasureQty_84.getString());
    all_values.push_back(InstrumentLeg_84);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_147;
      FIX::LegSecurityAltID LegSecurityAltID_147("STRING_1279400425");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_147);
      LegSecAltIDGrp_NoLegSecurityAltID_147.insert(LegSecurityAltID_147.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_147("STRING_819601722");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_147);
      LegSecAltIDGrp_NoLegSecurityAltID_147.insert(LegSecurityAltIDSource_147.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_147);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_148;
      FIX::LegSecurityAltID LegSecurityAltID_148("STRING_2037358799");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_148);
      LegSecAltIDGrp_NoLegSecurityAltID_148.insert(LegSecurityAltID_148.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_148("STRING_221837510");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_148);
      LegSecAltIDGrp_NoLegSecurityAltID_148.insert(LegSecurityAltIDSource_148.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_148);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_149;
      FIX::LegSecurityAltID LegSecurityAltID_149("STRING_650500013");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_149);
      LegSecAltIDGrp_NoLegSecurityAltID_149.insert(LegSecurityAltID_149.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_149("STRING_1428584183");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_149);
      LegSecAltIDGrp_NoLegSecurityAltID_149.insert(LegSecurityAltIDSource_149.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_149);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_10;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_10("EUR");
    noLegs_0_0.set(LegBenchmarkCurveCurrency_10);
    LegBenchmarkCurveData_10.insert(LegBenchmarkCurveCurrency_10.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_10("STRING_1175160054");
    noLegs_0_0.set(LegBenchmarkCurveName_10);
    LegBenchmarkCurveData_10.insert(LegBenchmarkCurveName_10.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_10("STRING_80396055");
    noLegs_0_0.set(LegBenchmarkCurvePoint_10);
    LegBenchmarkCurveData_10.insert(LegBenchmarkCurvePoint_10.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_10;
    LegBenchmarkPrice_10.setString("3382164");
    noLegs_0_0.set(LegBenchmarkPrice_10);
    LegBenchmarkCurveData_10.insert(LegBenchmarkPrice_10.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_10(848189507);
    noLegs_0_0.set(LegBenchmarkPriceType_10);
    LegBenchmarkCurveData_10.insert(LegBenchmarkPriceType_10.getString());
    all_values.push_back(LegBenchmarkCurveData_10);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_37;
      FIX::LegStipulationType LegStipulationType_37("STRING_308981220");
      noLegStipulations_0_1_0.set(LegStipulationType_37);
      LegStipulations_NoLegStipulations_37.insert(LegStipulationType_37.getString());
      FIX::LegStipulationValue LegStipulationValue_37("STRING_1141265760");
      noLegStipulations_0_1_0.set(LegStipulationValue_37);
      LegStipulations_NoLegStipulations_37.insert(LegStipulationValue_37.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_37);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_38;
      FIX::LegStipulationType LegStipulationType_38("STRING_1396168538");
      noLegStipulations_0_1_1.set(LegStipulationType_38);
      LegStipulations_NoLegStipulations_38.insert(LegStipulationType_38.getString());
      FIX::LegStipulationValue LegStipulationValue_38("STRING_1502926505");
      noLegStipulations_0_1_1.set(LegStipulationValue_38);
      LegStipulations_NoLegStipulations_38.insert(LegStipulationValue_38.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_38);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_39;
      FIX::LegStipulationType LegStipulationType_39("STRING_1581964882");
      noLegStipulations_0_1_2.set(LegStipulationType_39);
      LegStipulations_NoLegStipulations_39.insert(LegStipulationType_39.getString());
      FIX::LegStipulationValue LegStipulationValue_39("STRING_1081442956");
      noLegStipulations_0_1_2.set(LegStipulationValue_39);
      LegStipulations_NoLegStipulations_39.insert(LegStipulationValue_39.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_39);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_110;
      FIX::NestedPartyID NestedPartyID_110("STRING_470998446");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_110);
      NestedParties_NoNestedPartyIDs_110.insert(NestedPartyID_110.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_110('4');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_110);
      NestedParties_NoNestedPartyIDs_110.insert(NestedPartyIDSource_110.getString());
      FIX::NestedPartyRole NestedPartyRole_110(1612117104);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_110);
      NestedParties_NoNestedPartyIDs_110.insert(NestedPartyRole_110.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_110);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_207;
        FIX::NestedPartySubID NestedPartySubID_207("STRING_2120658105");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_207);
        NstdPtysSubGrp_NoNestedPartySubIDs_207.insert(NestedPartySubID_207.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_207(1648894443);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_207);
        NstdPtysSubGrp_NoNestedPartySubIDs_207.insert(NestedPartySubIDType_207.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_207);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_208;
        FIX::NestedPartySubID NestedPartySubID_208("STRING_179879430");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_208);
        NstdPtysSubGrp_NoNestedPartySubIDs_208.insert(NestedPartySubID_208.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_208(245534432);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_208);
        NstdPtysSubGrp_NoNestedPartySubIDs_208.insert(NestedPartySubIDType_208.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_208);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_111;
      FIX::NestedPartyID NestedPartyID_111("STRING_1386785248");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_111);
      NestedParties_NoNestedPartyIDs_111.insert(NestedPartyID_111.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_111('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_111);
      NestedParties_NoNestedPartyIDs_111.insert(NestedPartyIDSource_111.getString());
      FIX::NestedPartyRole NestedPartyRole_111(386682220);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_111);
      NestedParties_NoNestedPartyIDs_111.insert(NestedPartyRole_111.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_111);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_209;
        FIX::NestedPartySubID NestedPartySubID_209("STRING_194664203");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_209);
        NstdPtysSubGrp_NoNestedPartySubIDs_209.insert(NestedPartySubID_209.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_209(276557371);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_209);
        NstdPtysSubGrp_NoNestedPartySubIDs_209.insert(NestedPartySubIDType_209.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_209);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_210;
        FIX::NestedPartySubID NestedPartySubID_210("STRING_740539536");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_210);
        NstdPtysSubGrp_NoNestedPartySubIDs_210.insert(NestedPartySubID_210.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_210(845164216);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_210);
        NstdPtysSubGrp_NoNestedPartySubIDs_210.insert(NestedPartySubIDType_210.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_210);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_112;
      FIX::NestedPartyID NestedPartyID_112("STRING_1705141555");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_112);
      NestedParties_NoNestedPartyIDs_112.insert(NestedPartyID_112.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_112('2');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_112);
      NestedParties_NoNestedPartyIDs_112.insert(NestedPartyIDSource_112.getString());
      FIX::NestedPartyRole NestedPartyRole_112(2039359835);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_112);
      NestedParties_NoNestedPartyIDs_112.insert(NestedPartyRole_112.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_112);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_211;
        FIX::NestedPartySubID NestedPartySubID_211("STRING_352940847");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_211);
        NstdPtysSubGrp_NoNestedPartySubIDs_211.insert(NestedPartySubID_211.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_211(230092656);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_211);
        NstdPtysSubGrp_NoNestedPartySubIDs_211.insert(NestedPartySubIDType_211.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_211);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_212;
        FIX::NestedPartySubID NestedPartySubID_212("STRING_1581007468");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_212);
        NstdPtysSubGrp_NoNestedPartySubIDs_212.insert(NestedPartySubID_212.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_212(1151939363);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_212);
        NstdPtysSubGrp_NoNestedPartySubIDs_212.insert(NestedPartySubIDType_212.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_212);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_213;
        FIX::NestedPartySubID NestedPartySubID_213("STRING_539073876");
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubID_213);
        NstdPtysSubGrp_NoNestedPartySubIDs_213.insert(NestedPartySubID_213.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_213(574789580);
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubIDType_213);
        NstdPtysSubGrp_NoNestedPartySubIDs_213.insert(NestedPartySubIDType_213.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_213);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_1;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_2;
    FIX::LegBidForwardPoints LegBidForwardPoints_2;
    LegBidForwardPoints_2.setString("4006242");
    noLegs_0_1.set(LegBidForwardPoints_2);
    LegQuotGrp_NoLegs_2.insert(LegBidForwardPoints_2.getString());
    FIX::LegBidPx LegBidPx_2;
    LegBidPx_2.setString("20420003");
    noLegs_0_1.set(LegBidPx_2);
    LegQuotGrp_NoLegs_2.insert(LegBidPx_2.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_2;
    LegOfferForwardPoints_2.setString("92708");
    noLegs_0_1.set(LegOfferForwardPoints_2);
    LegQuotGrp_NoLegs_2.insert(LegOfferForwardPoints_2.getString());
    FIX::LegOfferPx LegOfferPx_2;
    LegOfferPx_2.setString("14820672");
    noLegs_0_1.set(LegOfferPx_2);
    LegQuotGrp_NoLegs_2.insert(LegOfferPx_2.getString());
    FIX::LegOrderQty LegOrderQty_16;
    LegOrderQty_16.setString("6249663");
    noLegs_0_1.set(LegOrderQty_16);
    LegQuotGrp_NoLegs_2.insert(LegOrderQty_16.getString());
    FIX::LegPriceType LegPriceType_2(480269261);
    noLegs_0_1.set(LegPriceType_2);
    LegQuotGrp_NoLegs_2.insert(LegPriceType_2.getString());
    FIX::LegQty LegQty_16;
    LegQty_16.setString("19036356");
    noLegs_0_1.set(LegQty_16);
    LegQuotGrp_NoLegs_2.insert(LegQty_16.getString());
    FIX::LegRefID LegRefID_16("STRING_89599829");
    noLegs_0_1.set(LegRefID_16);
    LegQuotGrp_NoLegs_2.insert(LegRefID_16.getString());
    FIX::LegSettlDate LegSettlDate_16("LOCALMKTDATE_1764082809");
    noLegs_0_1.set(LegSettlDate_16);
    LegQuotGrp_NoLegs_2.insert(LegSettlDate_16.getString());
    FIX::LegSettlType LegSettlType_16('1');
    noLegs_0_1.set(LegSettlType_16);
    LegQuotGrp_NoLegs_2.insert(LegSettlType_16.getString());
    FIX::LegSwapType LegSwapType_16(1);
    noLegs_0_1.set(LegSwapType_16);
    LegQuotGrp_NoLegs_2.insert(LegSwapType_16.getString());
    all_values.push_back(LegQuotGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_85;
    FIX::EncodedLegIssuer EncodedLegIssuer_85("DATA_1943962239");
    noLegs_0_1.set(EncodedLegIssuer_85);
    InstrumentLeg_85.insert(EncodedLegIssuer_85.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_85(2122344541);
    noLegs_0_1.set(EncodedLegIssuerLen_85);
    InstrumentLeg_85.insert(EncodedLegIssuerLen_85.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_85("DATA_977795873");
    noLegs_0_1.set(EncodedLegSecurityDesc_85);
    InstrumentLeg_85.insert(EncodedLegSecurityDesc_85.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_85(1319024720);
    noLegs_0_1.set(EncodedLegSecurityDescLen_85);
    InstrumentLeg_85.insert(EncodedLegSecurityDescLen_85.getString());
    FIX::LegCFICode LegCFICode_85("STRING_361543113");
    noLegs_0_1.set(LegCFICode_85);
    InstrumentLeg_85.insert(LegCFICode_85.getString());
    FIX::LegContractMultiplier LegContractMultiplier_85;
    LegContractMultiplier_85.setString("14964978");
    noLegs_0_1.set(LegContractMultiplier_85);
    InstrumentLeg_85.insert(LegContractMultiplier_85.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_85(1513688924);
    noLegs_0_1.set(LegContractMultiplierUnit_85);
    InstrumentLeg_85.insert(LegContractMultiplierUnit_85.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_85("MONTHYEAR_638100484");
    noLegs_0_1.set(LegContractSettlMonth_85);
    InstrumentLeg_85.insert(LegContractSettlMonth_85.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_85("COUNTRY_89553787");
    noLegs_0_1.set(LegCountryOfIssue_85);
    InstrumentLeg_85.insert(LegCountryOfIssue_85.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_85("LOCALMKTDATE_211369492");
    noLegs_0_1.set(LegCouponPaymentDate_85);
    InstrumentLeg_85.insert(LegCouponPaymentDate_85.getString());
    FIX::LegCouponRate LegCouponRate_85;
    LegCouponRate_85.setString("83.910000");
    noLegs_0_1.set(LegCouponRate_85);
    InstrumentLeg_85.insert(LegCouponRate_85.getString());
    FIX::LegCreditRating LegCreditRating_85("STRING_362098578");
    noLegs_0_1.set(LegCreditRating_85);
    InstrumentLeg_85.insert(LegCreditRating_85.getString());
    FIX::LegCurrency LegCurrency_85("GBP");
    noLegs_0_1.set(LegCurrency_85);
    InstrumentLeg_85.insert(LegCurrency_85.getString());
    FIX::LegDatedDate LegDatedDate_85("LOCALMKTDATE_715039425");
    noLegs_0_1.set(LegDatedDate_85);
    InstrumentLeg_85.insert(LegDatedDate_85.getString());
    FIX::LegExerciseStyle LegExerciseStyle_85(333338336);
    noLegs_0_1.set(LegExerciseStyle_85);
    InstrumentLeg_85.insert(LegExerciseStyle_85.getString());
    FIX::LegFactor LegFactor_85;
    LegFactor_85.setString("3621001");
    noLegs_0_1.set(LegFactor_85);
    InstrumentLeg_85.insert(LegFactor_85.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_85(1866978788);
    noLegs_0_1.set(LegFlowScheduleType_85);
    InstrumentLeg_85.insert(LegFlowScheduleType_85.getString());
    FIX::LegInstrRegistry LegInstrRegistry_85("STRING_872412212");
    noLegs_0_1.set(LegInstrRegistry_85);
    InstrumentLeg_85.insert(LegInstrRegistry_85.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_85("LOCALMKTDATE_936889753");
    noLegs_0_1.set(LegInterestAccrualDate_85);
    InstrumentLeg_85.insert(LegInterestAccrualDate_85.getString());
    FIX::LegIssueDate LegIssueDate_85("LOCALMKTDATE_120119394");
    noLegs_0_1.set(LegIssueDate_85);
    InstrumentLeg_85.insert(LegIssueDate_85.getString());
    FIX::LegIssuer LegIssuer_85("STRING_766928946");
    noLegs_0_1.set(LegIssuer_85);
    InstrumentLeg_85.insert(LegIssuer_85.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_85("STRING_946160568");
    noLegs_0_1.set(LegLocaleOfIssue_85);
    InstrumentLeg_85.insert(LegLocaleOfIssue_85.getString());
    FIX::LegMaturityDate LegMaturityDate_85("LOCALMKTDATE_1602186604");
    noLegs_0_1.set(LegMaturityDate_85);
    InstrumentLeg_85.insert(LegMaturityDate_85.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_85("MONTHYEAR_1391895319");
    noLegs_0_1.set(LegMaturityMonthYear_85);
    InstrumentLeg_85.insert(LegMaturityMonthYear_85.getString());
    FIX::LegMaturityTime LegMaturityTime_85("TZTIMEONLY_1426429829");
    noLegs_0_1.set(LegMaturityTime_85);
    InstrumentLeg_85.insert(LegMaturityTime_85.getString());
    FIX::LegOptAttribute LegOptAttribute_85('1');
    noLegs_0_1.set(LegOptAttribute_85);
    InstrumentLeg_85.insert(LegOptAttribute_85.getString());
    FIX::LegOptionRatio LegOptionRatio_85;
    LegOptionRatio_85.setString("14814951");
    noLegs_0_1.set(LegOptionRatio_85);
    InstrumentLeg_85.insert(LegOptionRatio_85.getString());
    FIX::LegPool LegPool_85("STRING_1043028990");
    noLegs_0_1.set(LegPool_85);
    InstrumentLeg_85.insert(LegPool_85.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_85("STRING_1087665069");
    noLegs_0_1.set(LegPriceUnitOfMeasure_85);
    InstrumentLeg_85.insert(LegPriceUnitOfMeasure_85.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_85;
    LegPriceUnitOfMeasureQty_85.setString("10725057");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_85);
    InstrumentLeg_85.insert(LegPriceUnitOfMeasureQty_85.getString());
    FIX::LegProduct LegProduct_85(839507582);
    noLegs_0_1.set(LegProduct_85);
    InstrumentLeg_85.insert(LegProduct_85.getString());
    FIX::LegPutOrCall LegPutOrCall_85(1062525962);
    noLegs_0_1.set(LegPutOrCall_85);
    InstrumentLeg_85.insert(LegPutOrCall_85.getString());
    FIX::LegRatioQty LegRatioQty_85;
    LegRatioQty_85.setString("20503016");
    noLegs_0_1.set(LegRatioQty_85);
    InstrumentLeg_85.insert(LegRatioQty_85.getString());
    FIX::LegRedemptionDate LegRedemptionDate_85("LOCALMKTDATE_11048654");
    noLegs_0_1.set(LegRedemptionDate_85);
    InstrumentLeg_85.insert(LegRedemptionDate_85.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_85("STRING_1424069075");
    noLegs_0_1.set(LegRepoCollateralSecurityType_85);
    InstrumentLeg_85.insert(LegRepoCollateralSecurityType_85.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_85;
    LegRepurchaseRate_85.setString("58.960000");
    noLegs_0_1.set(LegRepurchaseRate_85);
    InstrumentLeg_85.insert(LegRepurchaseRate_85.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_85(1524737578);
    noLegs_0_1.set(LegRepurchaseTerm_85);
    InstrumentLeg_85.insert(LegRepurchaseTerm_85.getString());
    FIX::LegSecurityDesc LegSecurityDesc_85("STRING_2062169559");
    noLegs_0_1.set(LegSecurityDesc_85);
    InstrumentLeg_85.insert(LegSecurityDesc_85.getString());
    FIX::LegSecurityExchange LegSecurityExchange_85("EXCHANGE_1488869683");
    noLegs_0_1.set(LegSecurityExchange_85);
    InstrumentLeg_85.insert(LegSecurityExchange_85.getString());
    FIX::LegSecurityID LegSecurityID_85("STRING_1736107071");
    noLegs_0_1.set(LegSecurityID_85);
    InstrumentLeg_85.insert(LegSecurityID_85.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_85("STRING_110444303");
    noLegs_0_1.set(LegSecurityIDSource_85);
    InstrumentLeg_85.insert(LegSecurityIDSource_85.getString());
    FIX::LegSecuritySubType LegSecuritySubType_85("STRING_1850968262");
    noLegs_0_1.set(LegSecuritySubType_85);
    InstrumentLeg_85.insert(LegSecuritySubType_85.getString());
    FIX::LegSecurityType LegSecurityType_85("STRING_1839352751");
    noLegs_0_1.set(LegSecurityType_85);
    InstrumentLeg_85.insert(LegSecurityType_85.getString());
    FIX::LegSide LegSide_85('1');
    noLegs_0_1.set(LegSide_85);
    InstrumentLeg_85.insert(LegSide_85.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_85("STRING_418524039");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_85);
    InstrumentLeg_85.insert(LegStateOrProvinceOfIssue_85.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_85("USD");
    noLegs_0_1.set(LegStrikeCurrency_85);
    InstrumentLeg_85.insert(LegStrikeCurrency_85.getString());
    FIX::LegStrikePrice LegStrikePrice_85;
    LegStrikePrice_85.setString("1380191");
    noLegs_0_1.set(LegStrikePrice_85);
    InstrumentLeg_85.insert(LegStrikePrice_85.getString());
    FIX::LegSymbol LegSymbol_85("STRING_897619651");
    noLegs_0_1.set(LegSymbol_85);
    InstrumentLeg_85.insert(LegSymbol_85.getString());
    FIX::LegSymbolSfx LegSymbolSfx_85("STRING_190526933");
    noLegs_0_1.set(LegSymbolSfx_85);
    InstrumentLeg_85.insert(LegSymbolSfx_85.getString());
    FIX::LegTimeUnit LegTimeUnit_85("STRING_258138574");
    noLegs_0_1.set(LegTimeUnit_85);
    InstrumentLeg_85.insert(LegTimeUnit_85.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_85("STRING_1664548598");
    noLegs_0_1.set(LegUnitOfMeasure_85);
    InstrumentLeg_85.insert(LegUnitOfMeasure_85.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_85;
    LegUnitOfMeasureQty_85.setString("11366875");
    noLegs_0_1.set(LegUnitOfMeasureQty_85);
    InstrumentLeg_85.insert(LegUnitOfMeasureQty_85.getString());
    all_values.push_back(InstrumentLeg_85);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_150;
      FIX::LegSecurityAltID LegSecurityAltID_150("STRING_908960269");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_150);
      LegSecAltIDGrp_NoLegSecurityAltID_150.insert(LegSecurityAltID_150.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_150("STRING_415633682");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_150);
      LegSecAltIDGrp_NoLegSecurityAltID_150.insert(LegSecurityAltIDSource_150.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_150);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_151;
      FIX::LegSecurityAltID LegSecurityAltID_151("STRING_1071180138");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_151);
      LegSecAltIDGrp_NoLegSecurityAltID_151.insert(LegSecurityAltID_151.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_151("STRING_242971769");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_151);
      LegSecAltIDGrp_NoLegSecurityAltID_151.insert(LegSecurityAltIDSource_151.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_151);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_152;
      FIX::LegSecurityAltID LegSecurityAltID_152("STRING_1458662672");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_152);
      LegSecAltIDGrp_NoLegSecurityAltID_152.insert(LegSecurityAltID_152.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_152("STRING_11361559");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_152);
      LegSecAltIDGrp_NoLegSecurityAltID_152.insert(LegSecurityAltIDSource_152.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_152);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_11;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_11("GBP");
    noLegs_0_1.set(LegBenchmarkCurveCurrency_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurveCurrency_11.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_11("STRING_1073887521");
    noLegs_0_1.set(LegBenchmarkCurveName_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurveName_11.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_11("STRING_1218295539");
    noLegs_0_1.set(LegBenchmarkCurvePoint_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurvePoint_11.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_11;
    LegBenchmarkPrice_11.setString("1617352");
    noLegs_0_1.set(LegBenchmarkPrice_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkPrice_11.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_11(350472948);
    noLegs_0_1.set(LegBenchmarkPriceType_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkPriceType_11.getString());
    all_values.push_back(LegBenchmarkCurveData_11);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_40;
      FIX::LegStipulationType LegStipulationType_40("STRING_1686472839");
      noLegStipulations_1_1_0.set(LegStipulationType_40);
      LegStipulations_NoLegStipulations_40.insert(LegStipulationType_40.getString());
      FIX::LegStipulationValue LegStipulationValue_40("STRING_265158859");
      noLegStipulations_1_1_0.set(LegStipulationValue_40);
      LegStipulations_NoLegStipulations_40.insert(LegStipulationValue_40.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_40);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_41;
      FIX::LegStipulationType LegStipulationType_41("STRING_1958997471");
      noLegStipulations_1_1_1.set(LegStipulationType_41);
      LegStipulations_NoLegStipulations_41.insert(LegStipulationType_41.getString());
      FIX::LegStipulationValue LegStipulationValue_41("STRING_1275096262");
      noLegStipulations_1_1_1.set(LegStipulationValue_41);
      LegStipulations_NoLegStipulations_41.insert(LegStipulationValue_41.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_41);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_113;
      FIX::NestedPartyID NestedPartyID_113("STRING_1662482085");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_113);
      NestedParties_NoNestedPartyIDs_113.insert(NestedPartyID_113.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_113('9');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_113);
      NestedParties_NoNestedPartyIDs_113.insert(NestedPartyIDSource_113.getString());
      FIX::NestedPartyRole NestedPartyRole_113(1414623818);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_113);
      NestedParties_NoNestedPartyIDs_113.insert(NestedPartyRole_113.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_113);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_214;
        FIX::NestedPartySubID NestedPartySubID_214("STRING_992172804");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_214);
        NstdPtysSubGrp_NoNestedPartySubIDs_214.insert(NestedPartySubID_214.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_214(668260998);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_214);
        NstdPtysSubGrp_NoNestedPartySubIDs_214.insert(NestedPartySubIDType_214.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_214);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_24;
  FIX::CashOrderQty CashOrderQty_24;
  CashOrderQty_24.setString("715416");
  msg.set(CashOrderQty_24);
  OrderQtyData_24.insert(CashOrderQty_24.getString());
  FIX::OrderPercent OrderPercent_24;
  OrderPercent_24.setString("24.560000");
  msg.set(OrderPercent_24);
  OrderQtyData_24.insert(OrderPercent_24.getString());
  FIX::OrderQty OrderQty_33;
  OrderQty_33.setString("8587879");
  msg.set(OrderQty_33);
  OrderQtyData_24.insert(OrderQty_33.getString());
  FIX::RoundingDirection RoundingDirection_24('0');
  msg.set(RoundingDirection_24);
  OrderQtyData_24.insert(RoundingDirection_24.getString());
  FIX::RoundingModulus RoundingModulus_24;
  RoundingModulus_24.setString("14068574");
  msg.set(RoundingModulus_24);
  OrderQtyData_24.insert(RoundingModulus_24.getString());
  all_values.push_back(OrderQtyData_24);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_116;
    FIX::PartyID PartyID_116("STRING_42521760");
    noPartyIDs_0_0.set(PartyID_116);
    Parties_NoPartyIDs_116.insert(PartyID_116.getString());
    FIX::PartyIDSource PartyIDSource_116('3');
    noPartyIDs_0_0.set(PartyIDSource_116);
    Parties_NoPartyIDs_116.insert(PartyIDSource_116.getString());
    FIX::PartyRole PartyRole_116(36);
    noPartyIDs_0_0.set(PartyRole_116);
    Parties_NoPartyIDs_116.insert(PartyRole_116.getString());
    all_values.push_back(Parties_NoPartyIDs_116);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_227;
      FIX::PartySubID PartySubID_227("STRING_411305796");
      noPartySubIDs_0_1_0.set(PartySubID_227);
      PtysSubGrp_NoPartySubIDs_227.insert(PartySubID_227.getString());
      FIX::PartySubIDType PartySubIDType_227(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_227);
      PtysSubGrp_NoPartySubIDs_227.insert(PartySubIDType_227.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_227);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_117;
    FIX::PartyID PartyID_117("STRING_1125063457");
    noPartyIDs_0_1.set(PartyID_117);
    Parties_NoPartyIDs_117.insert(PartyID_117.getString());
    FIX::PartyIDSource PartyIDSource_117('B');
    noPartyIDs_0_1.set(PartyIDSource_117);
    Parties_NoPartyIDs_117.insert(PartyIDSource_117.getString());
    FIX::PartyRole PartyRole_117(35);
    noPartyIDs_0_1.set(PartyRole_117);
    Parties_NoPartyIDs_117.insert(PartyRole_117.getString());
    all_values.push_back(Parties_NoPartyIDs_117);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_228;
      FIX::PartySubID PartySubID_228("STRING_797595228");
      noPartySubIDs_1_1_0.set(PartySubID_228);
      PtysSubGrp_NoPartySubIDs_228.insert(PartySubID_228.getString());
      FIX::PartySubIDType PartySubIDType_228(33);
      noPartySubIDs_1_1_0.set(PartySubIDType_228);
      PtysSubGrp_NoPartySubIDs_228.insert(PartySubIDType_228.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_228);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_229;
      FIX::PartySubID PartySubID_229("STRING_401940278");
      noPartySubIDs_1_1_1.set(PartySubID_229);
      PtysSubGrp_NoPartySubIDs_229.insert(PartySubID_229.getString());
      FIX::PartySubIDType PartySubIDType_229(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_229);
      PtysSubGrp_NoPartySubIDs_229.insert(PartySubIDType_229.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_229);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_230;
      FIX::PartySubID PartySubID_230("STRING_1573699197");
      noPartySubIDs_1_1_2.set(PartySubID_230);
      PtysSubGrp_NoPartySubIDs_230.insert(PartySubID_230.getString());
      FIX::PartySubIDType PartySubIDType_230(14);
      noPartySubIDs_1_1_2.set(PartySubIDType_230);
      PtysSubGrp_NoPartySubIDs_230.insert(PartySubIDType_230.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_230);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_12;
    FIX::QuoteQualifier QuoteQualifier_12('7');
    noQuoteQualifiers_0_0.set(QuoteQualifier_12);
    QuotQualGrp_NoQuoteQualifiers_12.insert(QuoteQualifier_12.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_12);

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_26;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_26("JPY");
  msg.set(BenchmarkCurveCurrency_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurveCurrency_26.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_26("STRING_EUREPO");
  msg.set(BenchmarkCurveName_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurveName_26.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_26("STRING_309842470");
  msg.set(BenchmarkCurvePoint_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurvePoint_26.getString());
  FIX::BenchmarkPrice BenchmarkPrice_26;
  BenchmarkPrice_26.setString("5277577");
  msg.set(BenchmarkPrice_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkPrice_26.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_26(512966334);
  msg.set(BenchmarkPriceType_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkPriceType_26.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_26("STRING_978103468");
  msg.set(BenchmarkSecurityID_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkSecurityID_26.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_26("STRING_599299409");
  msg.set(BenchmarkSecurityIDSource_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkSecurityIDSource_26.getString());
  FIX::Spread Spread_26;
  Spread_26.setString("2552751");
  msg.set(Spread_26);
  SpreadOrBenchmarkCurveData_26.insert(Spread_26.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_26);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_46;
    FIX::StipulationType StipulationType_46("STRING_STRUCT");
    noStipulations_0_0.set(StipulationType_46);
    Stipulations_NoStipulations_46.insert(StipulationType_46.getString());
    FIX::StipulationValue StipulationValue_46("STRING_1662132548");
    noStipulations_0_0.set(StipulationValue_46);
    Stipulations_NoStipulations_46.insert(StipulationValue_46.getString());
    all_values.push_back(Stipulations_NoStipulations_46);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_102;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_102("DATA_971501400");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_102);
    UnderlyingInstrument_102.insert(EncodedUnderlyingIssuer_102.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_102(1830466575);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_102);
    UnderlyingInstrument_102.insert(EncodedUnderlyingIssuerLen_102.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_102("DATA_1948508649");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_102);
    UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDesc_102.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_102(2085203298);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_102);
    UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDescLen_102.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_102;
    UnderlyingAdjustedQuantity_102.setString("942887");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_102);
    UnderlyingInstrument_102.insert(UnderlyingAdjustedQuantity_102.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_102;
    UnderlyingAllocationPercent_102.setString("31.400000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_102);
    UnderlyingInstrument_102.insert(UnderlyingAllocationPercent_102.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_102;
    UnderlyingAttachmentPoint_102.setString("31.080000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_102);
    UnderlyingInstrument_102.insert(UnderlyingAttachmentPoint_102.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_102("STRING_1821072060");
    noUnderlyings_0_0.set(UnderlyingCFICode_102);
    UnderlyingInstrument_102.insert(UnderlyingCFICode_102.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_102("STRING_1248804237");
    noUnderlyings_0_0.set(UnderlyingCPProgram_102);
    UnderlyingInstrument_102.insert(UnderlyingCPProgram_102.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_102("STRING_1114250438");
    noUnderlyings_0_0.set(UnderlyingCPRegType_102);
    UnderlyingInstrument_102.insert(UnderlyingCPRegType_102.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_102;
    UnderlyingCapValue_102.setString("4711836");
    noUnderlyings_0_0.set(UnderlyingCapValue_102);
    UnderlyingInstrument_102.insert(UnderlyingCapValue_102.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_102;
    UnderlyingCashAmount_102.setString("11360305");
    noUnderlyings_0_0.set(UnderlyingCashAmount_102);
    UnderlyingInstrument_102.insert(UnderlyingCashAmount_102.getString());
    FIX::UnderlyingCashType UnderlyingCashType_102("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_102);
    UnderlyingInstrument_102.insert(UnderlyingCashType_102.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_102;
    UnderlyingContractMultiplier_102.setString("17389066");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_102);
    UnderlyingInstrument_102.insert(UnderlyingContractMultiplier_102.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_102(562246144);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_102);
    UnderlyingInstrument_102.insert(UnderlyingContractMultiplierUnit_102.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_102("COUNTRY_35806207");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_102);
    UnderlyingInstrument_102.insert(UnderlyingCountryOfIssue_102.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_102("LOCALMKTDATE_670659848");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_102);
    UnderlyingInstrument_102.insert(UnderlyingCouponPaymentDate_102.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_102;
    UnderlyingCouponRate_102.setString("79.560000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_102);
    UnderlyingInstrument_102.insert(UnderlyingCouponRate_102.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_102("STRING_1078508507");
    noUnderlyings_0_0.set(UnderlyingCreditRating_102);
    UnderlyingInstrument_102.insert(UnderlyingCreditRating_102.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_102("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_102);
    UnderlyingInstrument_102.insert(UnderlyingCurrency_102.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_102;
    UnderlyingCurrentValue_102.setString("13883509");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_102);
    UnderlyingInstrument_102.insert(UnderlyingCurrentValue_102.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_102;
    UnderlyingDetachmentPoint_102.setString("28.760000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_102);
    UnderlyingInstrument_102.insert(UnderlyingDetachmentPoint_102.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_102;
    UnderlyingDirtyPrice_102.setString("12973178");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_102);
    UnderlyingInstrument_102.insert(UnderlyingDirtyPrice_102.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_102;
    UnderlyingEndPrice_102.setString("2189707");
    noUnderlyings_0_0.set(UnderlyingEndPrice_102);
    UnderlyingInstrument_102.insert(UnderlyingEndPrice_102.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_102;
    UnderlyingEndValue_102.setString("2444686");
    noUnderlyings_0_0.set(UnderlyingEndValue_102);
    UnderlyingInstrument_102.insert(UnderlyingEndValue_102.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_102(1552592962);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_102);
    UnderlyingInstrument_102.insert(UnderlyingExerciseStyle_102.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_102;
    UnderlyingFXRate_102.setString("20558621");
    noUnderlyings_0_0.set(UnderlyingFXRate_102);
    UnderlyingInstrument_102.insert(UnderlyingFXRate_102.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_102('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_102);
    UnderlyingInstrument_102.insert(UnderlyingFXRateCalc_102.getString());
    FIX::UnderlyingFactor UnderlyingFactor_102;
    UnderlyingFactor_102.setString("10672418");
    noUnderlyings_0_0.set(UnderlyingFactor_102);
    UnderlyingInstrument_102.insert(UnderlyingFactor_102.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_102(1593261733);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_102);
    UnderlyingInstrument_102.insert(UnderlyingFlowScheduleType_102.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_102("STRING_2144949677");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_102);
    UnderlyingInstrument_102.insert(UnderlyingInstrRegistry_102.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_102("LOCALMKTDATE_750224789");
    noUnderlyings_0_0.set(UnderlyingIssueDate_102);
    UnderlyingInstrument_102.insert(UnderlyingIssueDate_102.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_102("STRING_1394286735");
    noUnderlyings_0_0.set(UnderlyingIssuer_102);
    UnderlyingInstrument_102.insert(UnderlyingIssuer_102.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_102("STRING_2082669327");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_102);
    UnderlyingInstrument_102.insert(UnderlyingLocaleOfIssue_102.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_102("LOCALMKTDATE_844513512");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_102);
    UnderlyingInstrument_102.insert(UnderlyingMaturityDate_102.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_102("MONTHYEAR_770116227");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_102);
    UnderlyingInstrument_102.insert(UnderlyingMaturityMonthYear_102.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_102("TZTIMEONLY_997968787");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_102);
    UnderlyingInstrument_102.insert(UnderlyingMaturityTime_102.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_102;
    UnderlyingNotionalPercentageOutstanding_102.setString("19.240000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_102);
    UnderlyingInstrument_102.insert(UnderlyingNotionalPercentageOutstanding_102.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_102('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_102);
    UnderlyingInstrument_102.insert(UnderlyingOptAttribute_102.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_102;
    UnderlyingOriginalNotionalPercentageOutstanding_102.setString("92.260000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_102);
    UnderlyingInstrument_102.insert(UnderlyingOriginalNotionalPercentageOutstanding_102.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_102("STRING_989285565");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_102);
    UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasure_102.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_102;
    UnderlyingPriceUnitOfMeasureQty_102.setString("10074674");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_102);
    UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasureQty_102.getString());
    FIX::UnderlyingProduct UnderlyingProduct_102(1480926295);
    noUnderlyings_0_0.set(UnderlyingProduct_102);
    UnderlyingInstrument_102.insert(UnderlyingProduct_102.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_102(580708574);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_102);
    UnderlyingInstrument_102.insert(UnderlyingPutOrCall_102.getString());
    FIX::UnderlyingPx UnderlyingPx_102;
    UnderlyingPx_102.setString("15697135");
    noUnderlyings_0_0.set(UnderlyingPx_102);
    UnderlyingInstrument_102.insert(UnderlyingPx_102.getString());
    FIX::UnderlyingQty UnderlyingQty_102;
    UnderlyingQty_102.setString("15167325");
    noUnderlyings_0_0.set(UnderlyingQty_102);
    UnderlyingInstrument_102.insert(UnderlyingQty_102.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_102("LOCALMKTDATE_1251368422");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_102);
    UnderlyingInstrument_102.insert(UnderlyingRedemptionDate_102.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_102("STRING_685787864");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_102);
    UnderlyingInstrument_102.insert(UnderlyingRepoCollateralSecurityType_102.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_102;
    UnderlyingRepurchaseRate_102.setString("73.610000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_102);
    UnderlyingInstrument_102.insert(UnderlyingRepurchaseRate_102.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_102(368779898);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_102);
    UnderlyingInstrument_102.insert(UnderlyingRepurchaseTerm_102.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_102("STRING_1470139350");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_102);
    UnderlyingInstrument_102.insert(UnderlyingRestructuringType_102.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_102("STRING_1836108339");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_102);
    UnderlyingInstrument_102.insert(UnderlyingSecurityDesc_102.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_102("EXCHANGE_13949127");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_102);
    UnderlyingInstrument_102.insert(UnderlyingSecurityExchange_102.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_102("STRING_619973522");
    noUnderlyings_0_0.set(UnderlyingSecurityID_102);
    UnderlyingInstrument_102.insert(UnderlyingSecurityID_102.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_102("STRING_2055079138");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_102);
    UnderlyingInstrument_102.insert(UnderlyingSecurityIDSource_102.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_102("STRING_258417764");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_102);
    UnderlyingInstrument_102.insert(UnderlyingSecuritySubType_102.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_102("STRING_25082836");
    noUnderlyings_0_0.set(UnderlyingSecurityType_102);
    UnderlyingInstrument_102.insert(UnderlyingSecurityType_102.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_102("STRING_1963457688");
    noUnderlyings_0_0.set(UnderlyingSeniority_102);
    UnderlyingInstrument_102.insert(UnderlyingSeniority_102.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_102("STRING_1431866041");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_102);
    UnderlyingInstrument_102.insert(UnderlyingSettlMethod_102.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_102(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_102);
    UnderlyingInstrument_102.insert(UnderlyingSettlementType_102.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_102;
    UnderlyingStartValue_102.setString("14092357");
    noUnderlyings_0_0.set(UnderlyingStartValue_102);
    UnderlyingInstrument_102.insert(UnderlyingStartValue_102.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_102("STRING_1429332070");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_102);
    UnderlyingInstrument_102.insert(UnderlyingStateOrProvinceOfIssue_102.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_102("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_102);
    UnderlyingInstrument_102.insert(UnderlyingStrikeCurrency_102.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_102;
    UnderlyingStrikePrice_102.setString("13645177");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_102);
    UnderlyingInstrument_102.insert(UnderlyingStrikePrice_102.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_102("STRING_539579351");
    noUnderlyings_0_0.set(UnderlyingSymbol_102);
    UnderlyingInstrument_102.insert(UnderlyingSymbol_102.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_102("STRING_1426155087");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_102);
    UnderlyingInstrument_102.insert(UnderlyingSymbolSfx_102.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_102("STRING_215002889");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_102);
    UnderlyingInstrument_102.insert(UnderlyingTimeUnit_102.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_102("STRING_1057681275");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_102);
    UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasure_102.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_102;
    UnderlyingUnitOfMeasureQty_102.setString("12975919");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_102);
    UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasureQty_102.getString());
    all_values.push_back(UnderlyingInstrument_102);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_204;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_204("STRING_2046966841");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_204);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltID_204.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_204("STRING_157575666");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_204);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltIDSource_204.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_205;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_205("STRING_1660664762");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_205);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltID_205.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_205("STRING_480191767");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_205);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltIDSource_205.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_197;
      FIX::UnderlyingStipType UnderlyingStipType_197("STRING_1029913616");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_197);
      UnderlyingStipulations_NoUnderlyingStips_197.insert(UnderlyingStipType_197.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_197("STRING_1731560190");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_197);
      UnderlyingStipulations_NoUnderlyingStips_197.insert(UnderlyingStipValue_197.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_197);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_209;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_209("STRING_1477670978");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_209);
      UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyID_209.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_209('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_209);
      UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyIDSource_209.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_209(1735732788);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_209);
      UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyRole_209.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_209);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_410("STRING_2114289215");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_410);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410.insert(UnderlyingInstrumentPartySubID_410.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_410(208222662);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_410);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410.insert(UnderlyingInstrumentPartySubIDType_410.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_103;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_103("DATA_1073891159");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_103);
    UnderlyingInstrument_103.insert(EncodedUnderlyingIssuer_103.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_103(225223332);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_103);
    UnderlyingInstrument_103.insert(EncodedUnderlyingIssuerLen_103.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_103("DATA_233305498");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_103);
    UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDesc_103.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_103(889865199);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_103);
    UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDescLen_103.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_103;
    UnderlyingAdjustedQuantity_103.setString("16570893");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_103);
    UnderlyingInstrument_103.insert(UnderlyingAdjustedQuantity_103.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_103;
    UnderlyingAllocationPercent_103.setString("1.960000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_103);
    UnderlyingInstrument_103.insert(UnderlyingAllocationPercent_103.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_103;
    UnderlyingAttachmentPoint_103.setString("73.250000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_103);
    UnderlyingInstrument_103.insert(UnderlyingAttachmentPoint_103.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_103("STRING_938937796");
    noUnderlyings_0_1.set(UnderlyingCFICode_103);
    UnderlyingInstrument_103.insert(UnderlyingCFICode_103.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_103("STRING_1020696035");
    noUnderlyings_0_1.set(UnderlyingCPProgram_103);
    UnderlyingInstrument_103.insert(UnderlyingCPProgram_103.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_103("STRING_807656185");
    noUnderlyings_0_1.set(UnderlyingCPRegType_103);
    UnderlyingInstrument_103.insert(UnderlyingCPRegType_103.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_103;
    UnderlyingCapValue_103.setString("1559718");
    noUnderlyings_0_1.set(UnderlyingCapValue_103);
    UnderlyingInstrument_103.insert(UnderlyingCapValue_103.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_103;
    UnderlyingCashAmount_103.setString("15602753");
    noUnderlyings_0_1.set(UnderlyingCashAmount_103);
    UnderlyingInstrument_103.insert(UnderlyingCashAmount_103.getString());
    FIX::UnderlyingCashType UnderlyingCashType_103("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_103);
    UnderlyingInstrument_103.insert(UnderlyingCashType_103.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_103;
    UnderlyingContractMultiplier_103.setString("3709747");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_103);
    UnderlyingInstrument_103.insert(UnderlyingContractMultiplier_103.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_103(470473013);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_103);
    UnderlyingInstrument_103.insert(UnderlyingContractMultiplierUnit_103.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_103("COUNTRY_1383919528");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_103);
    UnderlyingInstrument_103.insert(UnderlyingCountryOfIssue_103.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_103("LOCALMKTDATE_550713255");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_103);
    UnderlyingInstrument_103.insert(UnderlyingCouponPaymentDate_103.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_103;
    UnderlyingCouponRate_103.setString("62.060000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_103);
    UnderlyingInstrument_103.insert(UnderlyingCouponRate_103.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_103("STRING_1541495195");
    noUnderlyings_0_1.set(UnderlyingCreditRating_103);
    UnderlyingInstrument_103.insert(UnderlyingCreditRating_103.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_103("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_103);
    UnderlyingInstrument_103.insert(UnderlyingCurrency_103.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_103;
    UnderlyingCurrentValue_103.setString("11213007");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_103);
    UnderlyingInstrument_103.insert(UnderlyingCurrentValue_103.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_103;
    UnderlyingDetachmentPoint_103.setString("79.860000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_103);
    UnderlyingInstrument_103.insert(UnderlyingDetachmentPoint_103.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_103;
    UnderlyingDirtyPrice_103.setString("4342245");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_103);
    UnderlyingInstrument_103.insert(UnderlyingDirtyPrice_103.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_103;
    UnderlyingEndPrice_103.setString("13868942");
    noUnderlyings_0_1.set(UnderlyingEndPrice_103);
    UnderlyingInstrument_103.insert(UnderlyingEndPrice_103.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_103;
    UnderlyingEndValue_103.setString("4239953");
    noUnderlyings_0_1.set(UnderlyingEndValue_103);
    UnderlyingInstrument_103.insert(UnderlyingEndValue_103.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_103(387080956);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_103);
    UnderlyingInstrument_103.insert(UnderlyingExerciseStyle_103.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_103;
    UnderlyingFXRate_103.setString("9751433");
    noUnderlyings_0_1.set(UnderlyingFXRate_103);
    UnderlyingInstrument_103.insert(UnderlyingFXRate_103.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_103('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_103);
    UnderlyingInstrument_103.insert(UnderlyingFXRateCalc_103.getString());
    FIX::UnderlyingFactor UnderlyingFactor_103;
    UnderlyingFactor_103.setString("3538865");
    noUnderlyings_0_1.set(UnderlyingFactor_103);
    UnderlyingInstrument_103.insert(UnderlyingFactor_103.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_103(1183366009);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_103);
    UnderlyingInstrument_103.insert(UnderlyingFlowScheduleType_103.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_103("STRING_516698497");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_103);
    UnderlyingInstrument_103.insert(UnderlyingInstrRegistry_103.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_103("LOCALMKTDATE_579109856");
    noUnderlyings_0_1.set(UnderlyingIssueDate_103);
    UnderlyingInstrument_103.insert(UnderlyingIssueDate_103.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_103("STRING_1416671507");
    noUnderlyings_0_1.set(UnderlyingIssuer_103);
    UnderlyingInstrument_103.insert(UnderlyingIssuer_103.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_103("STRING_1406563696");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_103);
    UnderlyingInstrument_103.insert(UnderlyingLocaleOfIssue_103.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_103("LOCALMKTDATE_88715581");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_103);
    UnderlyingInstrument_103.insert(UnderlyingMaturityDate_103.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_103("MONTHYEAR_594818055");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_103);
    UnderlyingInstrument_103.insert(UnderlyingMaturityMonthYear_103.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_103("TZTIMEONLY_1558181021");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_103);
    UnderlyingInstrument_103.insert(UnderlyingMaturityTime_103.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_103;
    UnderlyingNotionalPercentageOutstanding_103.setString("33.770000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_103);
    UnderlyingInstrument_103.insert(UnderlyingNotionalPercentageOutstanding_103.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_103('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_103);
    UnderlyingInstrument_103.insert(UnderlyingOptAttribute_103.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_103;
    UnderlyingOriginalNotionalPercentageOutstanding_103.setString("35.590000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_103);
    UnderlyingInstrument_103.insert(UnderlyingOriginalNotionalPercentageOutstanding_103.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_103("STRING_1183625275");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_103);
    UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasure_103.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_103;
    UnderlyingPriceUnitOfMeasureQty_103.setString("10283058");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_103);
    UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasureQty_103.getString());
    FIX::UnderlyingProduct UnderlyingProduct_103(304681184);
    noUnderlyings_0_1.set(UnderlyingProduct_103);
    UnderlyingInstrument_103.insert(UnderlyingProduct_103.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_103(1554600063);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_103);
    UnderlyingInstrument_103.insert(UnderlyingPutOrCall_103.getString());
    FIX::UnderlyingPx UnderlyingPx_103;
    UnderlyingPx_103.setString("14987788");
    noUnderlyings_0_1.set(UnderlyingPx_103);
    UnderlyingInstrument_103.insert(UnderlyingPx_103.getString());
    FIX::UnderlyingQty UnderlyingQty_103;
    UnderlyingQty_103.setString("16886007");
    noUnderlyings_0_1.set(UnderlyingQty_103);
    UnderlyingInstrument_103.insert(UnderlyingQty_103.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_103("LOCALMKTDATE_2105313318");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_103);
    UnderlyingInstrument_103.insert(UnderlyingRedemptionDate_103.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_103("STRING_1868735048");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_103);
    UnderlyingInstrument_103.insert(UnderlyingRepoCollateralSecurityType_103.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_103;
    UnderlyingRepurchaseRate_103.setString("22.590000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_103);
    UnderlyingInstrument_103.insert(UnderlyingRepurchaseRate_103.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_103(21724039);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_103);
    UnderlyingInstrument_103.insert(UnderlyingRepurchaseTerm_103.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_103("STRING_571399374");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_103);
    UnderlyingInstrument_103.insert(UnderlyingRestructuringType_103.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_103("STRING_56429380");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_103);
    UnderlyingInstrument_103.insert(UnderlyingSecurityDesc_103.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_103("EXCHANGE_1115532025");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_103);
    UnderlyingInstrument_103.insert(UnderlyingSecurityExchange_103.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_103("STRING_1005623890");
    noUnderlyings_0_1.set(UnderlyingSecurityID_103);
    UnderlyingInstrument_103.insert(UnderlyingSecurityID_103.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_103("STRING_1443323587");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_103);
    UnderlyingInstrument_103.insert(UnderlyingSecurityIDSource_103.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_103("STRING_1539527341");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_103);
    UnderlyingInstrument_103.insert(UnderlyingSecuritySubType_103.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_103("STRING_1392704846");
    noUnderlyings_0_1.set(UnderlyingSecurityType_103);
    UnderlyingInstrument_103.insert(UnderlyingSecurityType_103.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_103("STRING_270983286");
    noUnderlyings_0_1.set(UnderlyingSeniority_103);
    UnderlyingInstrument_103.insert(UnderlyingSeniority_103.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_103("STRING_982334679");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_103);
    UnderlyingInstrument_103.insert(UnderlyingSettlMethod_103.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_103(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_103);
    UnderlyingInstrument_103.insert(UnderlyingSettlementType_103.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_103;
    UnderlyingStartValue_103.setString("14543492");
    noUnderlyings_0_1.set(UnderlyingStartValue_103);
    UnderlyingInstrument_103.insert(UnderlyingStartValue_103.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_103("STRING_1499033176");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_103);
    UnderlyingInstrument_103.insert(UnderlyingStateOrProvinceOfIssue_103.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_103("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_103);
    UnderlyingInstrument_103.insert(UnderlyingStrikeCurrency_103.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_103;
    UnderlyingStrikePrice_103.setString("7581132");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_103);
    UnderlyingInstrument_103.insert(UnderlyingStrikePrice_103.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_103("STRING_266933160");
    noUnderlyings_0_1.set(UnderlyingSymbol_103);
    UnderlyingInstrument_103.insert(UnderlyingSymbol_103.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_103("STRING_1318355209");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_103);
    UnderlyingInstrument_103.insert(UnderlyingSymbolSfx_103.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_103("STRING_168810598");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_103);
    UnderlyingInstrument_103.insert(UnderlyingTimeUnit_103.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_103("STRING_1294586537");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_103);
    UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasure_103.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_103;
    UnderlyingUnitOfMeasureQty_103.setString("7863856");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_103);
    UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasureQty_103.getString());
    all_values.push_back(UnderlyingInstrument_103);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_206;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_206("STRING_330728165");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_206);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltID_206.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_206("STRING_1814691479");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_206);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltIDSource_206.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_198;
      FIX::UnderlyingStipType UnderlyingStipType_198("STRING_1885328228");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_198);
      UnderlyingStipulations_NoUnderlyingStips_198.insert(UnderlyingStipType_198.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_198("STRING_1165986673");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_198);
      UnderlyingStipulations_NoUnderlyingStips_198.insert(UnderlyingStipValue_198.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_198);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_199;
      FIX::UnderlyingStipType UnderlyingStipType_199("STRING_232962405");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_199);
      UnderlyingStipulations_NoUnderlyingStips_199.insert(UnderlyingStipType_199.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_199("STRING_1843157898");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_199);
      UnderlyingStipulations_NoUnderlyingStips_199.insert(UnderlyingStipValue_199.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_199);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_200;
      FIX::UnderlyingStipType UnderlyingStipType_200("STRING_887238073");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_200);
      UnderlyingStipulations_NoUnderlyingStips_200.insert(UnderlyingStipType_200.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_200("STRING_1315574665");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_200);
      UnderlyingStipulations_NoUnderlyingStips_200.insert(UnderlyingStipValue_200.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_200);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_210;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_210("STRING_1458637447");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_210);
      UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyID_210.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_210('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_210);
      UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyIDSource_210.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_210(832930315);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_210);
      UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyRole_210.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_210);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_411("STRING_667843985");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_411);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411.insert(UnderlyingInstrumentPartySubID_411.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_411(224974008);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_411);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411.insert(UnderlyingInstrumentPartySubIDType_411.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_211;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_211("STRING_1709482535");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_211);
      UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyID_211.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_211('9');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_211);
      UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyIDSource_211.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_211(1207308687);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_211);
      UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyRole_211.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_211);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_412("STRING_245692919");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_412);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412.insert(UnderlyingInstrumentPartySubID_412.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_412(558858215);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_412);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412.insert(UnderlyingInstrumentPartySubIDType_412.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_413("STRING_1486807836");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_413);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubID_413.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_413(969230073);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_413);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubIDType_413.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_414("STRING_1316971440");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_414);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubID_414.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_414(1753740996);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_414);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubIDType_414.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_104;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_104("DATA_140101635");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_104);
    UnderlyingInstrument_104.insert(EncodedUnderlyingIssuer_104.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_104(1485782038);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_104);
    UnderlyingInstrument_104.insert(EncodedUnderlyingIssuerLen_104.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_104("DATA_900843886");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_104);
    UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDesc_104.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_104(926487286);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_104);
    UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDescLen_104.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_104;
    UnderlyingAdjustedQuantity_104.setString("18729461");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_104);
    UnderlyingInstrument_104.insert(UnderlyingAdjustedQuantity_104.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_104;
    UnderlyingAllocationPercent_104.setString("20.510000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_104);
    UnderlyingInstrument_104.insert(UnderlyingAllocationPercent_104.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_104;
    UnderlyingAttachmentPoint_104.setString("51.180000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_104);
    UnderlyingInstrument_104.insert(UnderlyingAttachmentPoint_104.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_104("STRING_417307888");
    noUnderlyings_0_2.set(UnderlyingCFICode_104);
    UnderlyingInstrument_104.insert(UnderlyingCFICode_104.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_104("STRING_969416631");
    noUnderlyings_0_2.set(UnderlyingCPProgram_104);
    UnderlyingInstrument_104.insert(UnderlyingCPProgram_104.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_104("STRING_1759681791");
    noUnderlyings_0_2.set(UnderlyingCPRegType_104);
    UnderlyingInstrument_104.insert(UnderlyingCPRegType_104.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_104;
    UnderlyingCapValue_104.setString("6502702");
    noUnderlyings_0_2.set(UnderlyingCapValue_104);
    UnderlyingInstrument_104.insert(UnderlyingCapValue_104.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_104;
    UnderlyingCashAmount_104.setString("6650908");
    noUnderlyings_0_2.set(UnderlyingCashAmount_104);
    UnderlyingInstrument_104.insert(UnderlyingCashAmount_104.getString());
    FIX::UnderlyingCashType UnderlyingCashType_104("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_104);
    UnderlyingInstrument_104.insert(UnderlyingCashType_104.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_104;
    UnderlyingContractMultiplier_104.setString("19658449");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_104);
    UnderlyingInstrument_104.insert(UnderlyingContractMultiplier_104.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_104(382489170);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_104);
    UnderlyingInstrument_104.insert(UnderlyingContractMultiplierUnit_104.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_104("COUNTRY_1958073663");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_104);
    UnderlyingInstrument_104.insert(UnderlyingCountryOfIssue_104.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_104("LOCALMKTDATE_1190365356");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_104);
    UnderlyingInstrument_104.insert(UnderlyingCouponPaymentDate_104.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_104;
    UnderlyingCouponRate_104.setString("94.850000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_104);
    UnderlyingInstrument_104.insert(UnderlyingCouponRate_104.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_104("STRING_127367704");
    noUnderlyings_0_2.set(UnderlyingCreditRating_104);
    UnderlyingInstrument_104.insert(UnderlyingCreditRating_104.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_104("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_104);
    UnderlyingInstrument_104.insert(UnderlyingCurrency_104.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_104;
    UnderlyingCurrentValue_104.setString("18368502");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_104);
    UnderlyingInstrument_104.insert(UnderlyingCurrentValue_104.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_104;
    UnderlyingDetachmentPoint_104.setString("29.640000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_104);
    UnderlyingInstrument_104.insert(UnderlyingDetachmentPoint_104.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_104;
    UnderlyingDirtyPrice_104.setString("5002185");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_104);
    UnderlyingInstrument_104.insert(UnderlyingDirtyPrice_104.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_104;
    UnderlyingEndPrice_104.setString("9979568");
    noUnderlyings_0_2.set(UnderlyingEndPrice_104);
    UnderlyingInstrument_104.insert(UnderlyingEndPrice_104.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_104;
    UnderlyingEndValue_104.setString("8952458");
    noUnderlyings_0_2.set(UnderlyingEndValue_104);
    UnderlyingInstrument_104.insert(UnderlyingEndValue_104.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_104(1059076749);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_104);
    UnderlyingInstrument_104.insert(UnderlyingExerciseStyle_104.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_104;
    UnderlyingFXRate_104.setString("3372810");
    noUnderlyings_0_2.set(UnderlyingFXRate_104);
    UnderlyingInstrument_104.insert(UnderlyingFXRate_104.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_104('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_104);
    UnderlyingInstrument_104.insert(UnderlyingFXRateCalc_104.getString());
    FIX::UnderlyingFactor UnderlyingFactor_104;
    UnderlyingFactor_104.setString("2285645");
    noUnderlyings_0_2.set(UnderlyingFactor_104);
    UnderlyingInstrument_104.insert(UnderlyingFactor_104.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_104(2091022034);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_104);
    UnderlyingInstrument_104.insert(UnderlyingFlowScheduleType_104.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_104("STRING_2004577592");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_104);
    UnderlyingInstrument_104.insert(UnderlyingInstrRegistry_104.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_104("LOCALMKTDATE_1714346579");
    noUnderlyings_0_2.set(UnderlyingIssueDate_104);
    UnderlyingInstrument_104.insert(UnderlyingIssueDate_104.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_104("STRING_844382272");
    noUnderlyings_0_2.set(UnderlyingIssuer_104);
    UnderlyingInstrument_104.insert(UnderlyingIssuer_104.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_104("STRING_783581230");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_104);
    UnderlyingInstrument_104.insert(UnderlyingLocaleOfIssue_104.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_104("LOCALMKTDATE_1439809126");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_104);
    UnderlyingInstrument_104.insert(UnderlyingMaturityDate_104.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_104("MONTHYEAR_2075954323");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_104);
    UnderlyingInstrument_104.insert(UnderlyingMaturityMonthYear_104.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_104("TZTIMEONLY_1377276348");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_104);
    UnderlyingInstrument_104.insert(UnderlyingMaturityTime_104.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_104;
    UnderlyingNotionalPercentageOutstanding_104.setString("70.140000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_104);
    UnderlyingInstrument_104.insert(UnderlyingNotionalPercentageOutstanding_104.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_104('8');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_104);
    UnderlyingInstrument_104.insert(UnderlyingOptAttribute_104.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_104;
    UnderlyingOriginalNotionalPercentageOutstanding_104.setString("44.910000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_104);
    UnderlyingInstrument_104.insert(UnderlyingOriginalNotionalPercentageOutstanding_104.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_104("STRING_359903659");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_104);
    UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasure_104.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_104;
    UnderlyingPriceUnitOfMeasureQty_104.setString("15629781");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_104);
    UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasureQty_104.getString());
    FIX::UnderlyingProduct UnderlyingProduct_104(1488910707);
    noUnderlyings_0_2.set(UnderlyingProduct_104);
    UnderlyingInstrument_104.insert(UnderlyingProduct_104.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_104(178264970);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_104);
    UnderlyingInstrument_104.insert(UnderlyingPutOrCall_104.getString());
    FIX::UnderlyingPx UnderlyingPx_104;
    UnderlyingPx_104.setString("19454673");
    noUnderlyings_0_2.set(UnderlyingPx_104);
    UnderlyingInstrument_104.insert(UnderlyingPx_104.getString());
    FIX::UnderlyingQty UnderlyingQty_104;
    UnderlyingQty_104.setString("12995007");
    noUnderlyings_0_2.set(UnderlyingQty_104);
    UnderlyingInstrument_104.insert(UnderlyingQty_104.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_104("LOCALMKTDATE_1368630326");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_104);
    UnderlyingInstrument_104.insert(UnderlyingRedemptionDate_104.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_104("STRING_1013403195");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_104);
    UnderlyingInstrument_104.insert(UnderlyingRepoCollateralSecurityType_104.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_104;
    UnderlyingRepurchaseRate_104.setString("84.260000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_104);
    UnderlyingInstrument_104.insert(UnderlyingRepurchaseRate_104.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_104(1079356019);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_104);
    UnderlyingInstrument_104.insert(UnderlyingRepurchaseTerm_104.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_104("STRING_306313041");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_104);
    UnderlyingInstrument_104.insert(UnderlyingRestructuringType_104.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_104("STRING_1116235018");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_104);
    UnderlyingInstrument_104.insert(UnderlyingSecurityDesc_104.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_104("EXCHANGE_1728908983");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_104);
    UnderlyingInstrument_104.insert(UnderlyingSecurityExchange_104.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_104("STRING_806531575");
    noUnderlyings_0_2.set(UnderlyingSecurityID_104);
    UnderlyingInstrument_104.insert(UnderlyingSecurityID_104.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_104("STRING_2114191867");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_104);
    UnderlyingInstrument_104.insert(UnderlyingSecurityIDSource_104.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_104("STRING_476671219");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_104);
    UnderlyingInstrument_104.insert(UnderlyingSecuritySubType_104.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_104("STRING_1865608324");
    noUnderlyings_0_2.set(UnderlyingSecurityType_104);
    UnderlyingInstrument_104.insert(UnderlyingSecurityType_104.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_104("STRING_303989257");
    noUnderlyings_0_2.set(UnderlyingSeniority_104);
    UnderlyingInstrument_104.insert(UnderlyingSeniority_104.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_104("STRING_193663528");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_104);
    UnderlyingInstrument_104.insert(UnderlyingSettlMethod_104.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_104(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_104);
    UnderlyingInstrument_104.insert(UnderlyingSettlementType_104.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_104;
    UnderlyingStartValue_104.setString("2475276");
    noUnderlyings_0_2.set(UnderlyingStartValue_104);
    UnderlyingInstrument_104.insert(UnderlyingStartValue_104.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_104("STRING_50757472");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_104);
    UnderlyingInstrument_104.insert(UnderlyingStateOrProvinceOfIssue_104.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_104("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_104);
    UnderlyingInstrument_104.insert(UnderlyingStrikeCurrency_104.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_104;
    UnderlyingStrikePrice_104.setString("8343387");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_104);
    UnderlyingInstrument_104.insert(UnderlyingStrikePrice_104.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_104("STRING_953361274");
    noUnderlyings_0_2.set(UnderlyingSymbol_104);
    UnderlyingInstrument_104.insert(UnderlyingSymbol_104.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_104("STRING_1020380592");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_104);
    UnderlyingInstrument_104.insert(UnderlyingSymbolSfx_104.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_104("STRING_64131403");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_104);
    UnderlyingInstrument_104.insert(UnderlyingTimeUnit_104.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_104("STRING_662994640");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_104);
    UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasure_104.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_104;
    UnderlyingUnitOfMeasureQty_104.setString("19182678");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_104);
    UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasureQty_104.getString());
    all_values.push_back(UnderlyingInstrument_104);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_207;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_207("STRING_1022898299");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_207);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltID_207.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_207("STRING_1333762438");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_207);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltIDSource_207.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_208;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_208("STRING_395032954");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_208);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_208.insert(UnderlyingSecurityAltID_208.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_208("STRING_1201163269");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_208);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_208.insert(UnderlyingSecurityAltIDSource_208.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_209;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_209("STRING_1131746148");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_209);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_209.insert(UnderlyingSecurityAltID_209.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_209("STRING_1694533676");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_209);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_209.insert(UnderlyingSecurityAltIDSource_209.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_201;
      FIX::UnderlyingStipType UnderlyingStipType_201("STRING_2145149343");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_201);
      UnderlyingStipulations_NoUnderlyingStips_201.insert(UnderlyingStipType_201.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_201("STRING_973918455");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_201);
      UnderlyingStipulations_NoUnderlyingStips_201.insert(UnderlyingStipValue_201.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_201);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_202;
      FIX::UnderlyingStipType UnderlyingStipType_202("STRING_1501665966");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_202);
      UnderlyingStipulations_NoUnderlyingStips_202.insert(UnderlyingStipType_202.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_202("STRING_303978737");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_202);
      UnderlyingStipulations_NoUnderlyingStips_202.insert(UnderlyingStipValue_202.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_202);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_212;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_212("STRING_1083091302");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_212);
      UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyID_212.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_212('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_212);
      UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyIDSource_212.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_212(2056861692);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_212);
      UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyRole_212.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_212);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_415("STRING_828634988");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_415);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubID_415.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_415(213367302);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_415);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415.insert(UnderlyingInstrumentPartySubIDType_415.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_416("STRING_1753426049");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_416);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubID_416.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_416(775324205);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_416);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416.insert(UnderlyingInstrumentPartySubIDType_416.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_213;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_213("STRING_460894946");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_213);
      UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyID_213.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_213('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_213);
      UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyIDSource_213.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_213(288876353);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_213);
      UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyRole_213.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_213);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_417("STRING_491038575");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_417);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubID_417.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_417(1242237627);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_417);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417.insert(UnderlyingInstrumentPartySubIDType_417.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_418("STRING_425701806");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_418);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubID_418.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_418(555169978);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_418);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubIDType_418.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_419("STRING_1905232267");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_419);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubID_419.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_419(196486057);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_419);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubIDType_419.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_21;
  FIX::Yield Yield_21;
  Yield_21.setString("58.730000");
  msg.set(Yield_21);
  YieldData_21.insert(Yield_21.getString());
  FIX::YieldCalcDate YieldCalcDate_21("LOCALMKTDATE_780646918");
  msg.set(YieldCalcDate_21);
  YieldData_21.insert(YieldCalcDate_21.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_21("LOCALMKTDATE_1530248495");
  msg.set(YieldRedemptionDate_21);
  YieldData_21.insert(YieldRedemptionDate_21.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_21;
  YieldRedemptionPrice_21.setString("20038088");
  msg.set(YieldRedemptionPrice_21);
  YieldData_21.insert(YieldRedemptionPrice_21.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_21(1981810188);
  msg.set(YieldRedemptionPriceType_21);
  YieldData_21.insert(YieldRedemptionPriceType_21.getString());
  FIX::YieldType YieldType_21("STRING_GROSS");
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
