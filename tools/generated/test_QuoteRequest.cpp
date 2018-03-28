#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/QuoteRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteRequest msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteRequest_0;
  FIX::BookingType BookingType_22(2);
  msg.set(BookingType_22);
  QuoteRequest_0.insert(BookingType_22.getString());
  FIX::ClOrdID ClOrdID_42("STRING_43141671");
  msg.set(ClOrdID_42);
  QuoteRequest_0.insert(ClOrdID_42.getString());
  FIX::EncodedText EncodedText_80("DATA_1527320565");
  msg.set(EncodedText_80);
  QuoteRequest_0.insert(EncodedText_80.getString());
  FIX::EncodedTextLen EncodedTextLen_80(121252329);
  msg.set(EncodedTextLen_80);
  QuoteRequest_0.insert(EncodedTextLen_80.getString());
  FIX::OrderCapacity OrderCapacity_25('A');
  msg.set(OrderCapacity_25);
  QuoteRequest_0.insert(OrderCapacity_25.getString());
  FIX::OrderRestrictions OrderRestrictions_20("MULTIPLECHARVALUE_F");
  msg.set(OrderRestrictions_20);
  QuoteRequest_0.insert(OrderRestrictions_20.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_11(true);
  msg.set(PreTradeAnonymity_11);
  QuoteRequest_0.insert(PreTradeAnonymity_11.getString());
  FIX::PrivateQuote PrivateQuote_1(false);
  msg.set(PrivateQuote_1);
  QuoteRequest_0.insert(PrivateQuote_1.getString());
  FIX::QuoteReqID QuoteReqID_4("STRING_467098770");
  msg.set(QuoteReqID_4);
  QuoteRequest_0.insert(QuoteReqID_4.getString());
  FIX::RFQReqID RFQReqID_0("STRING_625352629");
  msg.set(RFQReqID_0);
  QuoteRequest_0.insert(RFQReqID_0.getString());
  FIX::RespondentType RespondentType_0(1);
  msg.set(RespondentType_0);
  QuoteRequest_0.insert(RespondentType_0.getString());
  FIX::Text Text_80("STRING_2006732455");
  msg.set(Text_80);
  QuoteRequest_0.insert(Text_80.getString());
  all_values.push_back(QuoteRequest_0);

  // QuotReqGrp
  // Group QuotReqGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_0;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_0;
    FIX::Account Account_32("STRING_235874992");
    noRelatedSym_0_0.set(Account_32);
    QuotReqGrp_NoRelatedSym_0.insert(Account_32.getString());
    FIX::AccountType AccountType_27(6);
    noRelatedSym_0_0.set(AccountType_27);
    QuotReqGrp_NoRelatedSym_0.insert(AccountType_27.getString());
    FIX::AcctIDSource AcctIDSource_25(4);
    noRelatedSym_0_0.set(AcctIDSource_25);
    QuotReqGrp_NoRelatedSym_0.insert(AcctIDSource_25.getString());
    FIX::Currency Currency_50("CAN");
    noRelatedSym_0_0.set(Currency_50);
    QuotReqGrp_NoRelatedSym_0.insert(Currency_50.getString());
    FIX::ExpireTime ExpireTime_15(FIX::UTCTIMESTAMP(21, 48, 9, 6, 9, 2015));
    noRelatedSym_0_0.set(ExpireTime_15);
    QuotReqGrp_NoRelatedSym_0.insert(ExpireTime_15.getString());
    FIX::MinQty MinQty_14;
    MinQty_14.setString("5570778");
    noRelatedSym_0_0.set(MinQty_14);
    QuotReqGrp_NoRelatedSym_0.insert(MinQty_14.getString());
    FIX::OrdType OrdType_47('A');
    noRelatedSym_0_0.set(OrdType_47);
    QuotReqGrp_NoRelatedSym_0.insert(OrdType_47.getString());
    FIX::OrderQty2 OrderQty2_12;
    OrderQty2_12.setString("4046546");
    noRelatedSym_0_0.set(OrderQty2_12);
    QuotReqGrp_NoRelatedSym_0.insert(OrderQty2_12.getString());
    FIX::PrevClosePx PrevClosePx_8;
    PrevClosePx_8.setString("2666230");
    noRelatedSym_0_0.set(PrevClosePx_8);
    QuotReqGrp_NoRelatedSym_0.insert(PrevClosePx_8.getString());
    FIX::Price Price_20;
    Price_20.setString("5257212");
    noRelatedSym_0_0.set(Price_20);
    QuotReqGrp_NoRelatedSym_0.insert(Price_20.getString());
    FIX::Price2 Price2_3;
    Price2_3.setString("5065871");
    noRelatedSym_0_0.set(Price2_3);
    QuotReqGrp_NoRelatedSym_0.insert(Price2_3.getString());
    FIX::PriceType PriceType_36(6);
    noRelatedSym_0_0.set(PriceType_36);
    QuotReqGrp_NoRelatedSym_0.insert(PriceType_36.getString());
    FIX::QtyType QtyType_23(1);
    noRelatedSym_0_0.set(QtyType_23);
    QuotReqGrp_NoRelatedSym_0.insert(QtyType_23.getString());
    FIX::QuotePriceType QuotePriceType_0(2);
    noRelatedSym_0_0.set(QuotePriceType_0);
    QuotReqGrp_NoRelatedSym_0.insert(QuotePriceType_0.getString());
    FIX::QuoteRequestType QuoteRequestType_0(1);
    noRelatedSym_0_0.set(QuoteRequestType_0);
    QuotReqGrp_NoRelatedSym_0.insert(QuoteRequestType_0.getString());
    FIX::QuoteType QuoteType_6(0);
    noRelatedSym_0_0.set(QuoteType_6);
    QuotReqGrp_NoRelatedSym_0.insert(QuoteType_6.getString());
    FIX::SettlCurrency SettlCurrency_26("GBP");
    noRelatedSym_0_0.set(SettlCurrency_26);
    QuotReqGrp_NoRelatedSym_0.insert(SettlCurrency_26.getString());
    FIX::SettlDate SettlDate_39("LOCALMKTDATE_1488801605");
    noRelatedSym_0_0.set(SettlDate_39);
    QuotReqGrp_NoRelatedSym_0.insert(SettlDate_39.getString());
    FIX::SettlDate2 SettlDate2_12("LOCALMKTDATE_1866748823");
    noRelatedSym_0_0.set(SettlDate2_12);
    QuotReqGrp_NoRelatedSym_0.insert(SettlDate2_12.getString());
    FIX::SettlType SettlType_26("STRING_4");
    noRelatedSym_0_0.set(SettlType_26);
    QuotReqGrp_NoRelatedSym_0.insert(SettlType_26.getString());
    FIX::Side Side_42('2');
    noRelatedSym_0_0.set(Side_42);
    QuotReqGrp_NoRelatedSym_0.insert(Side_42.getString());
    FIX::TradeOriginationDate TradeOriginationDate_19("LOCALMKTDATE_1725997630");
    noRelatedSym_0_0.set(TradeOriginationDate_19);
    QuotReqGrp_NoRelatedSym_0.insert(TradeOriginationDate_19.getString());
    FIX::TradingSessionID TradingSessionID_66("STRING_4");
    noRelatedSym_0_0.set(TradingSessionID_66);
    QuotReqGrp_NoRelatedSym_0.insert(TradingSessionID_66.getString());
    FIX::TradingSessionSubID TradingSessionSubID_66("STRING_7");
    noRelatedSym_0_0.set(TradingSessionSubID_66);
    QuotReqGrp_NoRelatedSym_0.insert(TradingSessionSubID_66.getString());
    FIX::TransactTime TransactTime_49(FIX::UTCTIMESTAMP(1, 0, 3, 3, 10, 2001));
    noRelatedSym_0_0.set(TransactTime_49);
    QuotReqGrp_NoRelatedSym_0.insert(TransactTime_49.getString());
    FIX::ValidUntilTime ValidUntilTime_9(FIX::UTCTIMESTAMP(7, 56, 52, 6, 10, 2017));
    noRelatedSym_0_0.set(ValidUntilTime_9);
    QuotReqGrp_NoRelatedSym_0.insert(ValidUntilTime_9.getString());
    all_values.push_back(QuotReqGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_18;
    FIX::AgreementCurrency AgreementCurrency_18("JPY");
    noRelatedSym_0_0.set(AgreementCurrency_18);
    FinancingDetails_18.insert(AgreementCurrency_18.getString());
    FIX::AgreementDate AgreementDate_18("LOCALMKTDATE_174833239");
    noRelatedSym_0_0.set(AgreementDate_18);
    FinancingDetails_18.insert(AgreementDate_18.getString());
    FIX::AgreementDesc AgreementDesc_18("STRING_1177609290");
    noRelatedSym_0_0.set(AgreementDesc_18);
    FinancingDetails_18.insert(AgreementDesc_18.getString());
    FIX::AgreementID AgreementID_18("STRING_1345519370");
    noRelatedSym_0_0.set(AgreementID_18);
    FinancingDetails_18.insert(AgreementID_18.getString());
    FIX::DeliveryType DeliveryType_18(1);
    noRelatedSym_0_0.set(DeliveryType_18);
    FinancingDetails_18.insert(DeliveryType_18.getString());
    FIX::EndDate EndDate_18("LOCALMKTDATE_1097846820");
    noRelatedSym_0_0.set(EndDate_18);
    FinancingDetails_18.insert(EndDate_18.getString());
    FIX::MarginRatio MarginRatio_18;
    MarginRatio_18.setString("34.580000");
    noRelatedSym_0_0.set(MarginRatio_18);
    FinancingDetails_18.insert(MarginRatio_18.getString());
    FIX::StartDate StartDate_18("LOCALMKTDATE_1460907365");
    noRelatedSym_0_0.set(StartDate_18);
    FinancingDetails_18.insert(StartDate_18.getString());
    FIX::TerminationType TerminationType_18(3);
    noRelatedSym_0_0.set(TerminationType_18);
    FinancingDetails_18.insert(TerminationType_18.getString());
    all_values.push_back(FinancingDetails_18);

    // Instrument
    multiset<string> Instrument_62;
    FIX::AttachmentPoint AttachmentPoint_62;
    AttachmentPoint_62.setString("14.150000");
    noRelatedSym_0_0.set(AttachmentPoint_62);
    Instrument_62.insert(AttachmentPoint_62.getString());
    FIX::CFICode CFICode_62("STRING_1180172540");
    noRelatedSym_0_0.set(CFICode_62);
    Instrument_62.insert(CFICode_62.getString());
    FIX::CPProgram CPProgram_62(2);
    noRelatedSym_0_0.set(CPProgram_62);
    Instrument_62.insert(CPProgram_62.getString());
    FIX::CPRegType CPRegType_62("STRING_296352824");
    noRelatedSym_0_0.set(CPRegType_62);
    Instrument_62.insert(CPRegType_62.getString());
    FIX::CapPrice CapPrice_62;
    CapPrice_62.setString("7586865");
    noRelatedSym_0_0.set(CapPrice_62);
    Instrument_62.insert(CapPrice_62.getString());
    FIX::ContractMultiplier ContractMultiplier_62;
    ContractMultiplier_62.setString("6151910");
    noRelatedSym_0_0.set(ContractMultiplier_62);
    Instrument_62.insert(ContractMultiplier_62.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_62(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_62);
    Instrument_62.insert(ContractMultiplierUnit_62.getString());
    FIX::ContractSettlMonth ContractSettlMonth_62("MONTHYEAR_1462828550");
    noRelatedSym_0_0.set(ContractSettlMonth_62);
    Instrument_62.insert(ContractSettlMonth_62.getString());
    FIX::CountryOfIssue CountryOfIssue_62("COUNTRY_2065224277");
    noRelatedSym_0_0.set(CountryOfIssue_62);
    Instrument_62.insert(CountryOfIssue_62.getString());
    FIX::CouponPaymentDate CouponPaymentDate_62("LOCALMKTDATE_282927485");
    noRelatedSym_0_0.set(CouponPaymentDate_62);
    Instrument_62.insert(CouponPaymentDate_62.getString());
    FIX::CouponRate CouponRate_62;
    CouponRate_62.setString("17.060000");
    noRelatedSym_0_0.set(CouponRate_62);
    Instrument_62.insert(CouponRate_62.getString());
    FIX::CreditRating CreditRating_62("STRING_875184784");
    noRelatedSym_0_0.set(CreditRating_62);
    Instrument_62.insert(CreditRating_62.getString());
    FIX::DatedDate DatedDate_62("LOCALMKTDATE_1971936158");
    noRelatedSym_0_0.set(DatedDate_62);
    Instrument_62.insert(DatedDate_62.getString());
    FIX::DetachmentPoint DetachmentPoint_62;
    DetachmentPoint_62.setString("37.610000");
    noRelatedSym_0_0.set(DetachmentPoint_62);
    Instrument_62.insert(DetachmentPoint_62.getString());
    FIX::EncodedIssuer EncodedIssuer_62("DATA_1224969221");
    noRelatedSym_0_0.set(EncodedIssuer_62);
    Instrument_62.insert(EncodedIssuer_62.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_62(379375718);
    noRelatedSym_0_0.set(EncodedIssuerLen_62);
    Instrument_62.insert(EncodedIssuerLen_62.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_62("DATA_1229840297");
    noRelatedSym_0_0.set(EncodedSecurityDesc_62);
    Instrument_62.insert(EncodedSecurityDesc_62.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_62(488560646);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_62);
    Instrument_62.insert(EncodedSecurityDescLen_62.getString());
    FIX::ExerciseStyle ExerciseStyle_62(2);
    noRelatedSym_0_0.set(ExerciseStyle_62);
    Instrument_62.insert(ExerciseStyle_62.getString());
    FIX::Factor Factor_62;
    Factor_62.setString("14807754");
    noRelatedSym_0_0.set(Factor_62);
    Instrument_62.insert(Factor_62.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_62(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_62);
    Instrument_62.insert(FlexProductEligibilityIndicator_62.getString());
    FIX::FlexibleIndicator FlexibleIndicator_62(false);
    noRelatedSym_0_0.set(FlexibleIndicator_62);
    Instrument_62.insert(FlexibleIndicator_62.getString());
    FIX::FloorPrice FloorPrice_62;
    FloorPrice_62.setString("1099482");
    noRelatedSym_0_0.set(FloorPrice_62);
    Instrument_62.insert(FloorPrice_62.getString());
    FIX::FlowScheduleType FlowScheduleType_62(3);
    noRelatedSym_0_0.set(FlowScheduleType_62);
    Instrument_62.insert(FlowScheduleType_62.getString());
    FIX::InstrRegistry InstrRegistry_62("STRING_1900126527");
    noRelatedSym_0_0.set(InstrRegistry_62);
    Instrument_62.insert(InstrRegistry_62.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_62('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_62);
    Instrument_62.insert(InstrmtAssignmentMethod_62.getString());
    FIX::InterestAccrualDate InterestAccrualDate_62("LOCALMKTDATE_392897281");
    noRelatedSym_0_0.set(InterestAccrualDate_62);
    Instrument_62.insert(InterestAccrualDate_62.getString());
    FIX::IssueDate IssueDate_62("LOCALMKTDATE_850489699");
    noRelatedSym_0_0.set(IssueDate_62);
    Instrument_62.insert(IssueDate_62.getString());
    FIX::Issuer Issuer_62("STRING_1446667445");
    noRelatedSym_0_0.set(Issuer_62);
    Instrument_62.insert(Issuer_62.getString());
    FIX::ListMethod ListMethod_62(1);
    noRelatedSym_0_0.set(ListMethod_62);
    Instrument_62.insert(ListMethod_62.getString());
    FIX::LocaleOfIssue LocaleOfIssue_62("STRING_1062213938");
    noRelatedSym_0_0.set(LocaleOfIssue_62);
    Instrument_62.insert(LocaleOfIssue_62.getString());
    FIX::MaturityDate MaturityDate_62("LOCALMKTDATE_779185212");
    noRelatedSym_0_0.set(MaturityDate_62);
    Instrument_62.insert(MaturityDate_62.getString());
    FIX::MaturityMonthYear MaturityMonthYear_62("MONTHYEAR_886493539");
    noRelatedSym_0_0.set(MaturityMonthYear_62);
    Instrument_62.insert(MaturityMonthYear_62.getString());
    FIX::MaturityTime MaturityTime_62("TZTIMEONLY_1013168224");
    noRelatedSym_0_0.set(MaturityTime_62);
    Instrument_62.insert(MaturityTime_62.getString());
    FIX::MinPriceIncrement MinPriceIncrement_62;
    MinPriceIncrement_62.setString("10755380");
    noRelatedSym_0_0.set(MinPriceIncrement_62);
    Instrument_62.insert(MinPriceIncrement_62.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_62;
    MinPriceIncrementAmount_62.setString("16451800");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_62);
    Instrument_62.insert(MinPriceIncrementAmount_62.getString());
    FIX::NTPositionLimit NTPositionLimit_62(1628359228);
    noRelatedSym_0_0.set(NTPositionLimit_62);
    Instrument_62.insert(NTPositionLimit_62.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_62;
    NotionalPercentageOutstanding_62.setString("72.610000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_62);
    Instrument_62.insert(NotionalPercentageOutstanding_62.getString());
    FIX::OptAttribute OptAttribute_62('9');
    noRelatedSym_0_0.set(OptAttribute_62);
    Instrument_62.insert(OptAttribute_62.getString());
    FIX::OptPayoutAmount OptPayoutAmount_62;
    OptPayoutAmount_62.setString("15460998");
    noRelatedSym_0_0.set(OptPayoutAmount_62);
    Instrument_62.insert(OptPayoutAmount_62.getString());
    FIX::OptPayoutType OptPayoutType_62(1);
    noRelatedSym_0_0.set(OptPayoutType_62);
    Instrument_62.insert(OptPayoutType_62.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_62;
    OriginalNotionalPercentageOutstanding_62.setString("30.220000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_62);
    Instrument_62.insert(OriginalNotionalPercentageOutstanding_62.getString());
    FIX::Pool Pool_62("STRING_273800994");
    noRelatedSym_0_0.set(Pool_62);
    Instrument_62.insert(Pool_62.getString());
    FIX::PositionLimit PositionLimit_62(531497256);
    noRelatedSym_0_0.set(PositionLimit_62);
    Instrument_62.insert(PositionLimit_62.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_62("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_62);
    Instrument_62.insert(PriceQuoteMethod_62.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_62("STRING_1498770215");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_62);
    Instrument_62.insert(PriceUnitOfMeasure_62.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_62;
    PriceUnitOfMeasureQty_62.setString("9108729");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_62);
    Instrument_62.insert(PriceUnitOfMeasureQty_62.getString());
    FIX::Product Product_64(7);
    noRelatedSym_0_0.set(Product_64);
    Instrument_62.insert(Product_64.getString());
    FIX::ProductComplex ProductComplex_62("STRING_1987330861");
    noRelatedSym_0_0.set(ProductComplex_62);
    Instrument_62.insert(ProductComplex_62.getString());
    FIX::PutOrCall PutOrCall_62(1);
    noRelatedSym_0_0.set(PutOrCall_62);
    Instrument_62.insert(PutOrCall_62.getString());
    FIX::RedemptionDate RedemptionDate_62("LOCALMKTDATE_1015228908");
    noRelatedSym_0_0.set(RedemptionDate_62);
    Instrument_62.insert(RedemptionDate_62.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_62("STRING_2144137590");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_62);
    Instrument_62.insert(RepoCollateralSecurityType_62.getString());
    FIX::RepurchaseRate RepurchaseRate_62;
    RepurchaseRate_62.setString("33.600000");
    noRelatedSym_0_0.set(RepurchaseRate_62);
    Instrument_62.insert(RepurchaseRate_62.getString());
    FIX::RepurchaseTerm RepurchaseTerm_62(1125177173);
    noRelatedSym_0_0.set(RepurchaseTerm_62);
    Instrument_62.insert(RepurchaseTerm_62.getString());
    FIX::RestructuringType RestructuringType_62("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_62);
    Instrument_62.insert(RestructuringType_62.getString());
    FIX::SecurityDesc SecurityDesc_62("STRING_729926240");
    noRelatedSym_0_0.set(SecurityDesc_62);
    Instrument_62.insert(SecurityDesc_62.getString());
    FIX::SecurityExchange SecurityExchange_62("EXCHANGE_433161160");
    noRelatedSym_0_0.set(SecurityExchange_62);
    Instrument_62.insert(SecurityExchange_62.getString());
    FIX::SecurityGroup SecurityGroup_62("STRING_721191192");
    noRelatedSym_0_0.set(SecurityGroup_62);
    Instrument_62.insert(SecurityGroup_62.getString());
    FIX::SecurityID SecurityID_62("STRING_1580415939");
    noRelatedSym_0_0.set(SecurityID_62);
    Instrument_62.insert(SecurityID_62.getString());
    FIX::SecurityIDSource SecurityIDSource_62("STRING_I");
    noRelatedSym_0_0.set(SecurityIDSource_62);
    Instrument_62.insert(SecurityIDSource_62.getString());
    FIX::SecurityStatus SecurityStatus_62("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_62);
    Instrument_62.insert(SecurityStatus_62.getString());
    FIX::SecuritySubType SecuritySubType_63("STRING_495146229");
    noRelatedSym_0_0.set(SecuritySubType_63);
    Instrument_62.insert(SecuritySubType_63.getString());
    FIX::SecurityType SecurityType_64("STRING_DINP");
    noRelatedSym_0_0.set(SecurityType_64);
    Instrument_62.insert(SecurityType_64.getString());
    FIX::Seniority Seniority_62("STRING_SR");
    noRelatedSym_0_0.set(Seniority_62);
    Instrument_62.insert(Seniority_62.getString());
    FIX::SettlMethod SettlMethod_62('C');
    noRelatedSym_0_0.set(SettlMethod_62);
    Instrument_62.insert(SettlMethod_62.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_62("STRING_1587068205");
    noRelatedSym_0_0.set(SettleOnOpenFlag_62);
    Instrument_62.insert(SettleOnOpenFlag_62.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_62("STRING_811702145");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_62);
    Instrument_62.insert(StateOrProvinceOfIssue_62.getString());
    FIX::StrikeCurrency StrikeCurrency_62("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_62);
    Instrument_62.insert(StrikeCurrency_62.getString());
    FIX::StrikeMultiplier StrikeMultiplier_62;
    StrikeMultiplier_62.setString("17722271");
    noRelatedSym_0_0.set(StrikeMultiplier_62);
    Instrument_62.insert(StrikeMultiplier_62.getString());
    FIX::StrikePrice StrikePrice_62;
    StrikePrice_62.setString("3878062");
    noRelatedSym_0_0.set(StrikePrice_62);
    Instrument_62.insert(StrikePrice_62.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_62(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_62);
    Instrument_62.insert(StrikePriceBoundaryMethod_62.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_62;
    StrikePriceBoundaryPrecision_62.setString("1.320000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_62);
    Instrument_62.insert(StrikePriceBoundaryPrecision_62.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_62(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_62);
    Instrument_62.insert(StrikePriceDeterminationMethod_62.getString());
    FIX::StrikeValue StrikeValue_62;
    StrikeValue_62.setString("11022438");
    noRelatedSym_0_0.set(StrikeValue_62);
    Instrument_62.insert(StrikeValue_62.getString());
    FIX::Symbol Symbol_62("STRING_207533268");
    noRelatedSym_0_0.set(Symbol_62);
    Instrument_62.insert(Symbol_62.getString());
    FIX::SymbolSfx SymbolSfx_62("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_62);
    Instrument_62.insert(SymbolSfx_62.getString());
    FIX::TimeUnit TimeUnit_62("STRING_Wk");
    noRelatedSym_0_0.set(TimeUnit_62);
    Instrument_62.insert(TimeUnit_62.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_62(2);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_62);
    Instrument_62.insert(UnderlyingPriceDeterminationMethod_62.getString());
    FIX::UnitOfMeasure UnitOfMeasure_62("STRING_Alw");
    noRelatedSym_0_0.set(UnitOfMeasure_62);
    Instrument_62.insert(UnitOfMeasure_62.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_62;
    UnitOfMeasureQty_62.setString("1203992");
    noRelatedSym_0_0.set(UnitOfMeasureQty_62);
    Instrument_62.insert(UnitOfMeasureQty_62.getString());
    FIX::ValuationMethod ValuationMethod_62("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_62);
    Instrument_62.insert(ValuationMethod_62.getString());
    all_values.push_back(Instrument_62);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_120;
      FIX::ComplexEventCondition ComplexEventCondition_120(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_120);
      ComplexEvents_NoComplexEvents_120.insert(ComplexEventCondition_120.getString());
      FIX::ComplexEventPrice ComplexEventPrice_120;
      ComplexEventPrice_120.setString("18823927");
      noComplexEvents_0_1_0.set(ComplexEventPrice_120);
      ComplexEvents_NoComplexEvents_120.insert(ComplexEventPrice_120.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_120(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_120);
      ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceBoundaryMethod_120.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_120;
      ComplexEventPriceBoundaryPrecision_120.setString("88.710000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_120);
      ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceBoundaryPrecision_120.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_120(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_120);
      ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceTimeType_120.getString());
      FIX::ComplexEventType ComplexEventType_120(8);
      noComplexEvents_0_1_0.set(ComplexEventType_120);
      ComplexEvents_NoComplexEvents_120.insert(ComplexEventType_120.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_120;
      ComplexOptPayoutAmount_120.setString("12605411");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_120);
      ComplexEvents_NoComplexEvents_120.insert(ComplexOptPayoutAmount_120.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_120);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_248;
        FIX::ComplexEventEndDate ComplexEventEndDate_248(FIX::UTCTIMESTAMP(8, 3, 59, 26, 1, 2010));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_248);
        ComplexEventDates_NoComplexEventDates_248.insert(ComplexEventEndDate_248.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_248(FIX::UTCTIMESTAMP(15, 26, 28, 27, 3, 2010));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_248);
        ComplexEventDates_NoComplexEventDates_248.insert(ComplexEventStartDate_248.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_248);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_506;
          FIX::ComplexEventEndTime ComplexEventEndTime_506(FIX::UTCTIMEONLY(8, 52, 59));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_506);
          ComplexEventTimes_NoComplexEventTimes_506.insert(ComplexEventEndTime_506.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_506(FIX::UTCTIMEONLY(10, 9, 12));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_506);
          ComplexEventTimes_NoComplexEventTimes_506.insert(ComplexEventStartTime_506.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_506);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_120;
      FIX::EventDate EventDate_120("LOCALMKTDATE_1126441145");
      noEvents_0_1_0.set(EventDate_120);
      EvntGrp_NoEvents_120.insert(EventDate_120.getString());
      FIX::EventPx EventPx_120;
      EventPx_120.setString("9003567");
      noEvents_0_1_0.set(EventPx_120);
      EvntGrp_NoEvents_120.insert(EventPx_120.getString());
      FIX::EventText EventText_120("STRING_4578808");
      noEvents_0_1_0.set(EventText_120);
      EvntGrp_NoEvents_120.insert(EventText_120.getString());
      FIX::EventTime EventTime_120(FIX::UTCTIMESTAMP(14, 51, 54, 6, 4, 2003));
      noEvents_0_1_0.set(EventTime_120);
      EvntGrp_NoEvents_120.insert(EventTime_120.getString());
      FIX::EventType EventType_120(19);
      noEvents_0_1_0.set(EventType_120);
      EvntGrp_NoEvents_120.insert(EventType_120.getString());
      all_values.push_back(EvntGrp_NoEvents_120);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_120;
      FIX::InstrumentPartyID InstrumentPartyID_120("STRING_1458402098");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_120);
      InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyID_120.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_120('6');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_120);
      InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyIDSource_120.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_120(1948066497);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_120);
      InstrumentParties_NoInstrumentParties_120.insert(InstrumentPartyRole_120.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_120);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253;
        FIX::InstrumentPartySubID InstrumentPartySubID_253("STRING_1557552520");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_253);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253.insert(InstrumentPartySubID_253.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_253(146613678);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_253);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253.insert(InstrumentPartySubIDType_253.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_121;
      FIX::InstrumentPartyID InstrumentPartyID_121("STRING_1459612260");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_121);
      InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyID_121.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_121('9');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_121);
      InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyIDSource_121.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_121(1154251744);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_121);
      InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyRole_121.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_121);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254;
        FIX::InstrumentPartySubID InstrumentPartySubID_254("STRING_987195000");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_254);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254.insert(InstrumentPartySubID_254.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_254(27299968);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_254);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254.insert(InstrumentPartySubIDType_254.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255;
        FIX::InstrumentPartySubID InstrumentPartySubID_255("STRING_1954206129");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_255);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255.insert(InstrumentPartySubID_255.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_255(1621511400);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_255);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255.insert(InstrumentPartySubIDType_255.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256;
        FIX::InstrumentPartySubID InstrumentPartySubID_256("STRING_900572859");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_256);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256.insert(InstrumentPartySubID_256.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_256(1180977083);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_256);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256.insert(InstrumentPartySubIDType_256.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_122;
      FIX::InstrumentPartyID InstrumentPartyID_122("STRING_865559761");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_122);
      InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyID_122.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_122('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_122);
      InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyIDSource_122.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_122(1505430669);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_122);
      InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyRole_122.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_122);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257;
        FIX::InstrumentPartySubID InstrumentPartySubID_257("STRING_376113789");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_257);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257.insert(InstrumentPartySubID_257.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_257(1510009477);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_257);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257.insert(InstrumentPartySubIDType_257.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_136;
      FIX::SecurityAltID SecurityAltID_136("STRING_27866931");
      noSecurityAltID_0_1_0.set(SecurityAltID_136);
      SecAltIDGrp_NoSecurityAltID_136.insert(SecurityAltID_136.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_136("STRING_627645800");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_136);
      SecAltIDGrp_NoSecurityAltID_136.insert(SecurityAltIDSource_136.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_136);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_124;
    FIX::SecurityXML SecurityXML_125("XMLDATA_186471746");
    noRelatedSym_0_0.set(SecurityXML_125);
    FIX::SecurityXMLLen SecurityXMLLen_62(1006012329);
    noRelatedSym_0_0.set(SecurityXMLLen_62);
    FIX::SecurityXMLSchema SecurityXMLSchema_62("STRING_1500969515");
    noRelatedSym_0_0.set(SecurityXMLSchema_62);
    SecurityXML_124.insert(SecurityXMLSchema_62.getString());
    all_values.push_back(SecurityXML_124);

    // OrderQtyData
    multiset<string> OrderQtyData_19;
    FIX::CashOrderQty CashOrderQty_19;
    CashOrderQty_19.setString("17933438");
    noRelatedSym_0_0.set(CashOrderQty_19);
    OrderQtyData_19.insert(CashOrderQty_19.getString());
    FIX::OrderPercent OrderPercent_19;
    OrderPercent_19.setString("84.190000");
    noRelatedSym_0_0.set(OrderPercent_19);
    OrderQtyData_19.insert(OrderPercent_19.getString());
    FIX::OrderQty OrderQty_27;
    OrderQty_27.setString("13433277");
    noRelatedSym_0_0.set(OrderQty_27);
    OrderQtyData_19.insert(OrderQty_27.getString());
    FIX::RoundingDirection RoundingDirection_19('2');
    noRelatedSym_0_0.set(RoundingDirection_19);
    OrderQtyData_19.insert(RoundingDirection_19.getString());
    FIX::RoundingModulus RoundingModulus_19;
    RoundingModulus_19.setString("9577809");
    noRelatedSym_0_0.set(RoundingModulus_19);
    OrderQtyData_19.insert(RoundingModulus_19.getString());
    all_values.push_back(OrderQtyData_19);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_110;
      FIX::PartyID PartyID_110("STRING_130412562");
      noPartyIDs_0_1_0.set(PartyID_110);
      Parties_NoPartyIDs_110.insert(PartyID_110.getString());
      FIX::PartyIDSource PartyIDSource_110('C');
      noPartyIDs_0_1_0.set(PartyIDSource_110);
      Parties_NoPartyIDs_110.insert(PartyIDSource_110.getString());
      FIX::PartyRole PartyRole_110(54);
      noPartyIDs_0_1_0.set(PartyRole_110);
      Parties_NoPartyIDs_110.insert(PartyRole_110.getString());
      all_values.push_back(Parties_NoPartyIDs_110);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_222;
        FIX::PartySubID PartySubID_222("STRING_462715169");
        noPartySubIDs_0_0_2_0.set(PartySubID_222);
        PtysSubGrp_NoPartySubIDs_222.insert(PartySubID_222.getString());
        FIX::PartySubIDType PartySubIDType_222(25);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_222);
        PtysSubGrp_NoPartySubIDs_222.insert(PartySubIDType_222.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_222);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_223;
        FIX::PartySubID PartySubID_223("STRING_142891972");
        noPartySubIDs_0_0_2_1.set(PartySubID_223);
        PtysSubGrp_NoPartySubIDs_223.insert(PartySubID_223.getString());
        FIX::PartySubIDType PartySubIDType_223(27);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_223);
        PtysSubGrp_NoPartySubIDs_223.insert(PartySubIDType_223.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_223);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_111;
      FIX::PartyID PartyID_111("STRING_324592373");
      noPartyIDs_0_1_1.set(PartyID_111);
      Parties_NoPartyIDs_111.insert(PartyID_111.getString());
      FIX::PartyIDSource PartyIDSource_111('7');
      noPartyIDs_0_1_1.set(PartyIDSource_111);
      Parties_NoPartyIDs_111.insert(PartyIDSource_111.getString());
      FIX::PartyRole PartyRole_111(83);
      noPartyIDs_0_1_1.set(PartyRole_111);
      Parties_NoPartyIDs_111.insert(PartyRole_111.getString());
      all_values.push_back(Parties_NoPartyIDs_111);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_224;
        FIX::PartySubID PartySubID_224("STRING_1130591536");
        noPartySubIDs_0_1_2_0.set(PartySubID_224);
        PtysSubGrp_NoPartySubIDs_224.insert(PartySubID_224.getString());
        FIX::PartySubIDType PartySubIDType_224(18);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_224);
        PtysSubGrp_NoPartySubIDs_224.insert(PartySubIDType_224.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_224);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_225;
        FIX::PartySubID PartySubID_225("STRING_700922296");
        noPartySubIDs_0_1_2_1.set(PartySubID_225);
        PtysSubGrp_NoPartySubIDs_225.insert(PartySubID_225.getString());
        FIX::PartySubIDType PartySubIDType_225(24);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_225);
        PtysSubGrp_NoPartySubIDs_225.insert(PartySubIDType_225.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_225);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_226;
        FIX::PartySubID PartySubID_226("STRING_1634014941");
        noPartySubIDs_0_1_2_2.set(PartySubID_226);
        PtysSubGrp_NoPartySubIDs_226.insert(PartySubID_226.getString());
        FIX::PartySubIDType PartySubIDType_226(5);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_226);
        PtysSubGrp_NoPartySubIDs_226.insert(PartySubIDType_226.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_226);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_3;
      FIX::QuoteQualifier QuoteQualifier_3('6');
      noQuoteQualifiers_0_1_0.set(QuoteQualifier_3);
      QuotQualGrp_NoQuoteQualifiers_3.insert(QuoteQualifier_3.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_3);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_4;
      FIX::QuoteQualifier QuoteQualifier_4('1');
      noQuoteQualifiers_0_1_1.set(QuoteQualifier_4);
      QuotQualGrp_NoQuoteQualifiers_4.insert(QuoteQualifier_4.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_4);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_1);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_0;
      FIX::LegOrderQty LegOrderQty_11;
      LegOrderQty_11.setString("8120317");
      noLegs_0_1_0.set(LegOrderQty_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegOrderQty_11.getString());
      FIX::LegQty LegQty_11;
      LegQty_11.setString("21109153");
      noLegs_0_1_0.set(LegQty_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegQty_11.getString());
      FIX::LegRefID LegRefID_11("STRING_1979679703");
      noLegs_0_1_0.set(LegRefID_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegRefID_11.getString());
      FIX::LegSettlDate LegSettlDate_11("LOCALMKTDATE_457891954");
      noLegs_0_1_0.set(LegSettlDate_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegSettlDate_11.getString());
      FIX::LegSettlType LegSettlType_11('2');
      noLegs_0_1_0.set(LegSettlType_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegSettlType_11.getString());
      FIX::LegSwapType LegSwapType_11(5);
      noLegs_0_1_0.set(LegSwapType_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegSwapType_11.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_94;
      FIX::EncodedLegIssuer EncodedLegIssuer_94("DATA_1562154268");
      noLegs_0_1_0.set(EncodedLegIssuer_94);
      InstrumentLeg_94.insert(EncodedLegIssuer_94.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_94(1250801111);
      noLegs_0_1_0.set(EncodedLegIssuerLen_94);
      InstrumentLeg_94.insert(EncodedLegIssuerLen_94.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_94("DATA_171950817");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_94);
      InstrumentLeg_94.insert(EncodedLegSecurityDesc_94.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_94(1692566830);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_94);
      InstrumentLeg_94.insert(EncodedLegSecurityDescLen_94.getString());
      FIX::LegCFICode LegCFICode_94("STRING_1618650978");
      noLegs_0_1_0.set(LegCFICode_94);
      InstrumentLeg_94.insert(LegCFICode_94.getString());
      FIX::LegContractMultiplier LegContractMultiplier_94;
      LegContractMultiplier_94.setString("14624751");
      noLegs_0_1_0.set(LegContractMultiplier_94);
      InstrumentLeg_94.insert(LegContractMultiplier_94.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_94(1135108005);
      noLegs_0_1_0.set(LegContractMultiplierUnit_94);
      InstrumentLeg_94.insert(LegContractMultiplierUnit_94.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_94("MONTHYEAR_2081366147");
      noLegs_0_1_0.set(LegContractSettlMonth_94);
      InstrumentLeg_94.insert(LegContractSettlMonth_94.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_94("COUNTRY_1759767530");
      noLegs_0_1_0.set(LegCountryOfIssue_94);
      InstrumentLeg_94.insert(LegCountryOfIssue_94.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_94("LOCALMKTDATE_1277999977");
      noLegs_0_1_0.set(LegCouponPaymentDate_94);
      InstrumentLeg_94.insert(LegCouponPaymentDate_94.getString());
      FIX::LegCouponRate LegCouponRate_94;
      LegCouponRate_94.setString("26.680000");
      noLegs_0_1_0.set(LegCouponRate_94);
      InstrumentLeg_94.insert(LegCouponRate_94.getString());
      FIX::LegCreditRating LegCreditRating_94("STRING_2084359903");
      noLegs_0_1_0.set(LegCreditRating_94);
      InstrumentLeg_94.insert(LegCreditRating_94.getString());
      FIX::LegCurrency LegCurrency_94("JPY");
      noLegs_0_1_0.set(LegCurrency_94);
      InstrumentLeg_94.insert(LegCurrency_94.getString());
      FIX::LegDatedDate LegDatedDate_94("LOCALMKTDATE_1162041487");
      noLegs_0_1_0.set(LegDatedDate_94);
      InstrumentLeg_94.insert(LegDatedDate_94.getString());
      FIX::LegExerciseStyle LegExerciseStyle_94(210722319);
      noLegs_0_1_0.set(LegExerciseStyle_94);
      InstrumentLeg_94.insert(LegExerciseStyle_94.getString());
      FIX::LegFactor LegFactor_94;
      LegFactor_94.setString("19497446");
      noLegs_0_1_0.set(LegFactor_94);
      InstrumentLeg_94.insert(LegFactor_94.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_94(1862963784);
      noLegs_0_1_0.set(LegFlowScheduleType_94);
      InstrumentLeg_94.insert(LegFlowScheduleType_94.getString());
      FIX::LegInstrRegistry LegInstrRegistry_94("STRING_699260876");
      noLegs_0_1_0.set(LegInstrRegistry_94);
      InstrumentLeg_94.insert(LegInstrRegistry_94.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_94("LOCALMKTDATE_1436275918");
      noLegs_0_1_0.set(LegInterestAccrualDate_94);
      InstrumentLeg_94.insert(LegInterestAccrualDate_94.getString());
      FIX::LegIssueDate LegIssueDate_94("LOCALMKTDATE_792516221");
      noLegs_0_1_0.set(LegIssueDate_94);
      InstrumentLeg_94.insert(LegIssueDate_94.getString());
      FIX::LegIssuer LegIssuer_94("STRING_550325263");
      noLegs_0_1_0.set(LegIssuer_94);
      InstrumentLeg_94.insert(LegIssuer_94.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_94("STRING_2061835911");
      noLegs_0_1_0.set(LegLocaleOfIssue_94);
      InstrumentLeg_94.insert(LegLocaleOfIssue_94.getString());
      FIX::LegMaturityDate LegMaturityDate_94("LOCALMKTDATE_1897419238");
      noLegs_0_1_0.set(LegMaturityDate_94);
      InstrumentLeg_94.insert(LegMaturityDate_94.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_94("MONTHYEAR_1029035451");
      noLegs_0_1_0.set(LegMaturityMonthYear_94);
      InstrumentLeg_94.insert(LegMaturityMonthYear_94.getString());
      FIX::LegMaturityTime LegMaturityTime_94("TZTIMEONLY_726384002");
      noLegs_0_1_0.set(LegMaturityTime_94);
      InstrumentLeg_94.insert(LegMaturityTime_94.getString());
      FIX::LegOptAttribute LegOptAttribute_94('1');
      noLegs_0_1_0.set(LegOptAttribute_94);
      InstrumentLeg_94.insert(LegOptAttribute_94.getString());
      FIX::LegOptionRatio LegOptionRatio_94;
      LegOptionRatio_94.setString("8612315");
      noLegs_0_1_0.set(LegOptionRatio_94);
      InstrumentLeg_94.insert(LegOptionRatio_94.getString());
      FIX::LegPool LegPool_94("STRING_1184275957");
      noLegs_0_1_0.set(LegPool_94);
      InstrumentLeg_94.insert(LegPool_94.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_94("STRING_6387405");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_94);
      InstrumentLeg_94.insert(LegPriceUnitOfMeasure_94.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_94;
      LegPriceUnitOfMeasureQty_94.setString("20367553");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_94);
      InstrumentLeg_94.insert(LegPriceUnitOfMeasureQty_94.getString());
      FIX::LegProduct LegProduct_94(598946577);
      noLegs_0_1_0.set(LegProduct_94);
      InstrumentLeg_94.insert(LegProduct_94.getString());
      FIX::LegPutOrCall LegPutOrCall_94(1257188517);
      noLegs_0_1_0.set(LegPutOrCall_94);
      InstrumentLeg_94.insert(LegPutOrCall_94.getString());
      FIX::LegRatioQty LegRatioQty_94;
      LegRatioQty_94.setString("612225");
      noLegs_0_1_0.set(LegRatioQty_94);
      InstrumentLeg_94.insert(LegRatioQty_94.getString());
      FIX::LegRedemptionDate LegRedemptionDate_94("LOCALMKTDATE_144029759");
      noLegs_0_1_0.set(LegRedemptionDate_94);
      InstrumentLeg_94.insert(LegRedemptionDate_94.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_94("STRING_728355847");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_94);
      InstrumentLeg_94.insert(LegRepoCollateralSecurityType_94.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_94;
      LegRepurchaseRate_94.setString("76.360000");
      noLegs_0_1_0.set(LegRepurchaseRate_94);
      InstrumentLeg_94.insert(LegRepurchaseRate_94.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_94(1279137765);
      noLegs_0_1_0.set(LegRepurchaseTerm_94);
      InstrumentLeg_94.insert(LegRepurchaseTerm_94.getString());
      FIX::LegSecurityDesc LegSecurityDesc_94("STRING_662238346");
      noLegs_0_1_0.set(LegSecurityDesc_94);
      InstrumentLeg_94.insert(LegSecurityDesc_94.getString());
      FIX::LegSecurityExchange LegSecurityExchange_94("EXCHANGE_1135981518");
      noLegs_0_1_0.set(LegSecurityExchange_94);
      InstrumentLeg_94.insert(LegSecurityExchange_94.getString());
      FIX::LegSecurityID LegSecurityID_94("STRING_409654094");
      noLegs_0_1_0.set(LegSecurityID_94);
      InstrumentLeg_94.insert(LegSecurityID_94.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_94("STRING_2046031014");
      noLegs_0_1_0.set(LegSecurityIDSource_94);
      InstrumentLeg_94.insert(LegSecurityIDSource_94.getString());
      FIX::LegSecuritySubType LegSecuritySubType_94("STRING_1072857773");
      noLegs_0_1_0.set(LegSecuritySubType_94);
      InstrumentLeg_94.insert(LegSecuritySubType_94.getString());
      FIX::LegSecurityType LegSecurityType_94("STRING_1637268525");
      noLegs_0_1_0.set(LegSecurityType_94);
      InstrumentLeg_94.insert(LegSecurityType_94.getString());
      FIX::LegSide LegSide_94('5');
      noLegs_0_1_0.set(LegSide_94);
      InstrumentLeg_94.insert(LegSide_94.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_94("STRING_87415613");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_94);
      InstrumentLeg_94.insert(LegStateOrProvinceOfIssue_94.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_94("CAN");
      noLegs_0_1_0.set(LegStrikeCurrency_94);
      InstrumentLeg_94.insert(LegStrikeCurrency_94.getString());
      FIX::LegStrikePrice LegStrikePrice_94;
      LegStrikePrice_94.setString("19503793");
      noLegs_0_1_0.set(LegStrikePrice_94);
      InstrumentLeg_94.insert(LegStrikePrice_94.getString());
      FIX::LegSymbol LegSymbol_94("STRING_399768072");
      noLegs_0_1_0.set(LegSymbol_94);
      InstrumentLeg_94.insert(LegSymbol_94.getString());
      FIX::LegSymbolSfx LegSymbolSfx_94("STRING_1297331204");
      noLegs_0_1_0.set(LegSymbolSfx_94);
      InstrumentLeg_94.insert(LegSymbolSfx_94.getString());
      FIX::LegTimeUnit LegTimeUnit_94("STRING_595411970");
      noLegs_0_1_0.set(LegTimeUnit_94);
      InstrumentLeg_94.insert(LegTimeUnit_94.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_94("STRING_950093336");
      noLegs_0_1_0.set(LegUnitOfMeasure_94);
      InstrumentLeg_94.insert(LegUnitOfMeasure_94.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_94;
      LegUnitOfMeasureQty_94.setString("12116834");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_94);
      InstrumentLeg_94.insert(LegUnitOfMeasureQty_94.getString());
      all_values.push_back(InstrumentLeg_94);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_188;
        FIX::LegSecurityAltID LegSecurityAltID_188("STRING_1979128787");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_188);
        LegSecAltIDGrp_NoLegSecurityAltID_188.insert(LegSecurityAltID_188.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_188("STRING_1938067470");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_188);
        LegSecAltIDGrp_NoLegSecurityAltID_188.insert(LegSecurityAltIDSource_188.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_188);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_189;
        FIX::LegSecurityAltID LegSecurityAltID_189("STRING_58714848");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_189);
        LegSecAltIDGrp_NoLegSecurityAltID_189.insert(LegSecurityAltID_189.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_189("STRING_692876645");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_189);
        LegSecAltIDGrp_NoLegSecurityAltID_189.insert(LegSecurityAltIDSource_189.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_189);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_3;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_3("JPY");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurveCurrency_3.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_3("STRING_582148338");
      noLegs_0_1_0.set(LegBenchmarkCurveName_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurveName_3.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_3("STRING_1573806356");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurvePoint_3.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_3;
      LegBenchmarkPrice_3.setString("13222907");
      noLegs_0_1_0.set(LegBenchmarkPrice_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkPrice_3.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_3(643370849);
      noLegs_0_1_0.set(LegBenchmarkPriceType_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkPriceType_3.getString());
      all_values.push_back(LegBenchmarkCurveData_3);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_22;
        FIX::LegStipulationType LegStipulationType_22("STRING_2050646618");
        noLegStipulations_0_0_2_0.set(LegStipulationType_22);
        LegStipulations_NoLegStipulations_22.insert(LegStipulationType_22.getString());
        FIX::LegStipulationValue LegStipulationValue_22("STRING_19584838");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_22);
        LegStipulations_NoLegStipulations_22.insert(LegStipulationValue_22.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_22);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_23;
        FIX::LegStipulationType LegStipulationType_23("STRING_849490232");
        noLegStipulations_0_0_2_1.set(LegStipulationType_23);
        LegStipulations_NoLegStipulations_23.insert(LegStipulationType_23.getString());
        FIX::LegStipulationValue LegStipulationValue_23("STRING_565401316");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_23);
        LegStipulations_NoLegStipulations_23.insert(LegStipulationValue_23.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_23);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_104;
        FIX::NestedPartyID NestedPartyID_104("STRING_1259144327");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyID_104.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_104('4');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyIDSource_104.getString());
        FIX::NestedPartyRole NestedPartyRole_104(80940482);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyRole_104.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_104);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_207;
          FIX::NestedPartySubID NestedPartySubID_207("STRING_522742991");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_207);
          NstdPtysSubGrp_NoNestedPartySubIDs_207.insert(NestedPartySubID_207.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_207(168356095);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_207);
          NstdPtysSubGrp_NoNestedPartySubIDs_207.insert(NestedPartySubIDType_207.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_207);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_105;
        FIX::NestedPartyID NestedPartyID_105("STRING_449436400");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyID_105.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_105('3');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyIDSource_105.getString());
        FIX::NestedPartyRole NestedPartyRole_105(2118735492);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyRole_105.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_105);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_208;
          FIX::NestedPartySubID NestedPartySubID_208("STRING_1681129480");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_208);
          NstdPtysSubGrp_NoNestedPartySubIDs_208.insert(NestedPartySubID_208.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_208(566663814);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_208);
          NstdPtysSubGrp_NoNestedPartySubIDs_208.insert(NestedPartySubIDType_208.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_208);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_209;
          FIX::NestedPartySubID NestedPartySubID_209("STRING_1799297808");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_209);
          NstdPtysSubGrp_NoNestedPartySubIDs_209.insert(NestedPartySubID_209.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_209(745329300);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_209);
          NstdPtysSubGrp_NoNestedPartySubIDs_209.insert(NestedPartySubIDType_209.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_209);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_1;
      FIX::LegOrderQty LegOrderQty_12;
      LegOrderQty_12.setString("9120113");
      noLegs_0_1_1.set(LegOrderQty_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegOrderQty_12.getString());
      FIX::LegQty LegQty_12;
      LegQty_12.setString("16309429");
      noLegs_0_1_1.set(LegQty_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegQty_12.getString());
      FIX::LegRefID LegRefID_12("STRING_535913122");
      noLegs_0_1_1.set(LegRefID_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegRefID_12.getString());
      FIX::LegSettlDate LegSettlDate_12("LOCALMKTDATE_970726223");
      noLegs_0_1_1.set(LegSettlDate_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegSettlDate_12.getString());
      FIX::LegSettlType LegSettlType_12('1');
      noLegs_0_1_1.set(LegSettlType_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegSettlType_12.getString());
      FIX::LegSwapType LegSwapType_12(2);
      noLegs_0_1_1.set(LegSwapType_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegSwapType_12.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_95;
      FIX::EncodedLegIssuer EncodedLegIssuer_95("DATA_1035828477");
      noLegs_0_1_1.set(EncodedLegIssuer_95);
      InstrumentLeg_95.insert(EncodedLegIssuer_95.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_95(758484283);
      noLegs_0_1_1.set(EncodedLegIssuerLen_95);
      InstrumentLeg_95.insert(EncodedLegIssuerLen_95.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_95("DATA_937095609");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_95);
      InstrumentLeg_95.insert(EncodedLegSecurityDesc_95.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_95(210635600);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_95);
      InstrumentLeg_95.insert(EncodedLegSecurityDescLen_95.getString());
      FIX::LegCFICode LegCFICode_95("STRING_1401855132");
      noLegs_0_1_1.set(LegCFICode_95);
      InstrumentLeg_95.insert(LegCFICode_95.getString());
      FIX::LegContractMultiplier LegContractMultiplier_95;
      LegContractMultiplier_95.setString("5074480");
      noLegs_0_1_1.set(LegContractMultiplier_95);
      InstrumentLeg_95.insert(LegContractMultiplier_95.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_95(113798570);
      noLegs_0_1_1.set(LegContractMultiplierUnit_95);
      InstrumentLeg_95.insert(LegContractMultiplierUnit_95.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_95("MONTHYEAR_1421439970");
      noLegs_0_1_1.set(LegContractSettlMonth_95);
      InstrumentLeg_95.insert(LegContractSettlMonth_95.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_95("COUNTRY_1356938309");
      noLegs_0_1_1.set(LegCountryOfIssue_95);
      InstrumentLeg_95.insert(LegCountryOfIssue_95.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_95("LOCALMKTDATE_679199886");
      noLegs_0_1_1.set(LegCouponPaymentDate_95);
      InstrumentLeg_95.insert(LegCouponPaymentDate_95.getString());
      FIX::LegCouponRate LegCouponRate_95;
      LegCouponRate_95.setString("26.790000");
      noLegs_0_1_1.set(LegCouponRate_95);
      InstrumentLeg_95.insert(LegCouponRate_95.getString());
      FIX::LegCreditRating LegCreditRating_95("STRING_468598988");
      noLegs_0_1_1.set(LegCreditRating_95);
      InstrumentLeg_95.insert(LegCreditRating_95.getString());
      FIX::LegCurrency LegCurrency_95("CHF");
      noLegs_0_1_1.set(LegCurrency_95);
      InstrumentLeg_95.insert(LegCurrency_95.getString());
      FIX::LegDatedDate LegDatedDate_95("LOCALMKTDATE_1217528192");
      noLegs_0_1_1.set(LegDatedDate_95);
      InstrumentLeg_95.insert(LegDatedDate_95.getString());
      FIX::LegExerciseStyle LegExerciseStyle_95(1665891560);
      noLegs_0_1_1.set(LegExerciseStyle_95);
      InstrumentLeg_95.insert(LegExerciseStyle_95.getString());
      FIX::LegFactor LegFactor_95;
      LegFactor_95.setString("6788192");
      noLegs_0_1_1.set(LegFactor_95);
      InstrumentLeg_95.insert(LegFactor_95.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_95(1666964592);
      noLegs_0_1_1.set(LegFlowScheduleType_95);
      InstrumentLeg_95.insert(LegFlowScheduleType_95.getString());
      FIX::LegInstrRegistry LegInstrRegistry_95("STRING_2049689836");
      noLegs_0_1_1.set(LegInstrRegistry_95);
      InstrumentLeg_95.insert(LegInstrRegistry_95.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_95("LOCALMKTDATE_650071100");
      noLegs_0_1_1.set(LegInterestAccrualDate_95);
      InstrumentLeg_95.insert(LegInterestAccrualDate_95.getString());
      FIX::LegIssueDate LegIssueDate_95("LOCALMKTDATE_368685416");
      noLegs_0_1_1.set(LegIssueDate_95);
      InstrumentLeg_95.insert(LegIssueDate_95.getString());
      FIX::LegIssuer LegIssuer_95("STRING_1583335669");
      noLegs_0_1_1.set(LegIssuer_95);
      InstrumentLeg_95.insert(LegIssuer_95.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_95("STRING_1216734914");
      noLegs_0_1_1.set(LegLocaleOfIssue_95);
      InstrumentLeg_95.insert(LegLocaleOfIssue_95.getString());
      FIX::LegMaturityDate LegMaturityDate_95("LOCALMKTDATE_20499577");
      noLegs_0_1_1.set(LegMaturityDate_95);
      InstrumentLeg_95.insert(LegMaturityDate_95.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_95("MONTHYEAR_181181321");
      noLegs_0_1_1.set(LegMaturityMonthYear_95);
      InstrumentLeg_95.insert(LegMaturityMonthYear_95.getString());
      FIX::LegMaturityTime LegMaturityTime_95("TZTIMEONLY_2128746289");
      noLegs_0_1_1.set(LegMaturityTime_95);
      InstrumentLeg_95.insert(LegMaturityTime_95.getString());
      FIX::LegOptAttribute LegOptAttribute_95('1');
      noLegs_0_1_1.set(LegOptAttribute_95);
      InstrumentLeg_95.insert(LegOptAttribute_95.getString());
      FIX::LegOptionRatio LegOptionRatio_95;
      LegOptionRatio_95.setString("7170944");
      noLegs_0_1_1.set(LegOptionRatio_95);
      InstrumentLeg_95.insert(LegOptionRatio_95.getString());
      FIX::LegPool LegPool_95("STRING_951988865");
      noLegs_0_1_1.set(LegPool_95);
      InstrumentLeg_95.insert(LegPool_95.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_95("STRING_1827778469");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_95);
      InstrumentLeg_95.insert(LegPriceUnitOfMeasure_95.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_95;
      LegPriceUnitOfMeasureQty_95.setString("803836");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_95);
      InstrumentLeg_95.insert(LegPriceUnitOfMeasureQty_95.getString());
      FIX::LegProduct LegProduct_95(1987817342);
      noLegs_0_1_1.set(LegProduct_95);
      InstrumentLeg_95.insert(LegProduct_95.getString());
      FIX::LegPutOrCall LegPutOrCall_95(438779104);
      noLegs_0_1_1.set(LegPutOrCall_95);
      InstrumentLeg_95.insert(LegPutOrCall_95.getString());
      FIX::LegRatioQty LegRatioQty_95;
      LegRatioQty_95.setString("10174793");
      noLegs_0_1_1.set(LegRatioQty_95);
      InstrumentLeg_95.insert(LegRatioQty_95.getString());
      FIX::LegRedemptionDate LegRedemptionDate_95("LOCALMKTDATE_50969295");
      noLegs_0_1_1.set(LegRedemptionDate_95);
      InstrumentLeg_95.insert(LegRedemptionDate_95.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_95("STRING_1840634236");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_95);
      InstrumentLeg_95.insert(LegRepoCollateralSecurityType_95.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_95;
      LegRepurchaseRate_95.setString("73.810000");
      noLegs_0_1_1.set(LegRepurchaseRate_95);
      InstrumentLeg_95.insert(LegRepurchaseRate_95.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_95(164767865);
      noLegs_0_1_1.set(LegRepurchaseTerm_95);
      InstrumentLeg_95.insert(LegRepurchaseTerm_95.getString());
      FIX::LegSecurityDesc LegSecurityDesc_95("STRING_1114590559");
      noLegs_0_1_1.set(LegSecurityDesc_95);
      InstrumentLeg_95.insert(LegSecurityDesc_95.getString());
      FIX::LegSecurityExchange LegSecurityExchange_95("EXCHANGE_734382042");
      noLegs_0_1_1.set(LegSecurityExchange_95);
      InstrumentLeg_95.insert(LegSecurityExchange_95.getString());
      FIX::LegSecurityID LegSecurityID_95("STRING_843967752");
      noLegs_0_1_1.set(LegSecurityID_95);
      InstrumentLeg_95.insert(LegSecurityID_95.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_95("STRING_1544113238");
      noLegs_0_1_1.set(LegSecurityIDSource_95);
      InstrumentLeg_95.insert(LegSecurityIDSource_95.getString());
      FIX::LegSecuritySubType LegSecuritySubType_95("STRING_1202981030");
      noLegs_0_1_1.set(LegSecuritySubType_95);
      InstrumentLeg_95.insert(LegSecuritySubType_95.getString());
      FIX::LegSecurityType LegSecurityType_95("STRING_1987116321");
      noLegs_0_1_1.set(LegSecurityType_95);
      InstrumentLeg_95.insert(LegSecurityType_95.getString());
      FIX::LegSide LegSide_95('2');
      noLegs_0_1_1.set(LegSide_95);
      InstrumentLeg_95.insert(LegSide_95.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_95("STRING_273025574");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_95);
      InstrumentLeg_95.insert(LegStateOrProvinceOfIssue_95.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_95("EUR");
      noLegs_0_1_1.set(LegStrikeCurrency_95);
      InstrumentLeg_95.insert(LegStrikeCurrency_95.getString());
      FIX::LegStrikePrice LegStrikePrice_95;
      LegStrikePrice_95.setString("19399901");
      noLegs_0_1_1.set(LegStrikePrice_95);
      InstrumentLeg_95.insert(LegStrikePrice_95.getString());
      FIX::LegSymbol LegSymbol_95("STRING_1407730421");
      noLegs_0_1_1.set(LegSymbol_95);
      InstrumentLeg_95.insert(LegSymbol_95.getString());
      FIX::LegSymbolSfx LegSymbolSfx_95("STRING_1235983107");
      noLegs_0_1_1.set(LegSymbolSfx_95);
      InstrumentLeg_95.insert(LegSymbolSfx_95.getString());
      FIX::LegTimeUnit LegTimeUnit_95("STRING_161191935");
      noLegs_0_1_1.set(LegTimeUnit_95);
      InstrumentLeg_95.insert(LegTimeUnit_95.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_95("STRING_843582442");
      noLegs_0_1_1.set(LegUnitOfMeasure_95);
      InstrumentLeg_95.insert(LegUnitOfMeasure_95.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_95;
      LegUnitOfMeasureQty_95.setString("3052343");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_95);
      InstrumentLeg_95.insert(LegUnitOfMeasureQty_95.getString());
      all_values.push_back(InstrumentLeg_95);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_190;
        FIX::LegSecurityAltID LegSecurityAltID_190("STRING_1024763763");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_190);
        LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltID_190.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_190("STRING_286497015");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_190);
        LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltIDSource_190.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_190);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_191;
        FIX::LegSecurityAltID LegSecurityAltID_191("STRING_1833134036");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_191);
        LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltID_191.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_191("STRING_1741858206");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_191);
        LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltIDSource_191.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_191);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_4;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_4("CAN");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurveCurrency_4.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_4("STRING_1822241902");
      noLegs_0_1_1.set(LegBenchmarkCurveName_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurveName_4.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_4("STRING_1078819574");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurvePoint_4.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_4;
      LegBenchmarkPrice_4.setString("19522079");
      noLegs_0_1_1.set(LegBenchmarkPrice_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkPrice_4.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_4(692237559);
      noLegs_0_1_1.set(LegBenchmarkPriceType_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkPriceType_4.getString());
      all_values.push_back(LegBenchmarkCurveData_4);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_24;
        FIX::LegStipulationType LegStipulationType_24("STRING_1645358550");
        noLegStipulations_0_1_2_0.set(LegStipulationType_24);
        LegStipulations_NoLegStipulations_24.insert(LegStipulationType_24.getString());
        FIX::LegStipulationValue LegStipulationValue_24("STRING_69681293");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_24);
        LegStipulations_NoLegStipulations_24.insert(LegStipulationValue_24.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_24);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_25;
        FIX::LegStipulationType LegStipulationType_25("STRING_1294556735");
        noLegStipulations_0_1_2_1.set(LegStipulationType_25);
        LegStipulations_NoLegStipulations_25.insert(LegStipulationType_25.getString());
        FIX::LegStipulationValue LegStipulationValue_25("STRING_612465461");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_25);
        LegStipulations_NoLegStipulations_25.insert(LegStipulationValue_25.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_25);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_26;
        FIX::LegStipulationType LegStipulationType_26("STRING_804063335");
        noLegStipulations_0_1_2_2.set(LegStipulationType_26);
        LegStipulations_NoLegStipulations_26.insert(LegStipulationType_26.getString());
        FIX::LegStipulationValue LegStipulationValue_26("STRING_2138524487");
        noLegStipulations_0_1_2_2.set(LegStipulationValue_26);
        LegStipulations_NoLegStipulations_26.insert(LegStipulationValue_26.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_26);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_106;
        FIX::NestedPartyID NestedPartyID_106("STRING_2007044366");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyID_106.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_106('1');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyIDSource_106.getString());
        FIX::NestedPartyRole NestedPartyRole_106(2063671450);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyRole_106.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_106);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_210;
          FIX::NestedPartySubID NestedPartySubID_210("STRING_1336197745");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_210);
          NstdPtysSubGrp_NoNestedPartySubIDs_210.insert(NestedPartySubID_210.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_210(502099809);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_210);
          NstdPtysSubGrp_NoNestedPartySubIDs_210.insert(NestedPartySubIDType_210.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_210);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_211;
          FIX::NestedPartySubID NestedPartySubID_211("STRING_2072576459");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_211);
          NstdPtysSubGrp_NoNestedPartySubIDs_211.insert(NestedPartySubID_211.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_211(596444518);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_211);
          NstdPtysSubGrp_NoNestedPartySubIDs_211.insert(NestedPartySubIDType_211.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_211);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_212;
          FIX::NestedPartySubID NestedPartySubID_212("STRING_1738082916");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_212);
          NstdPtysSubGrp_NoNestedPartySubIDs_212.insert(NestedPartySubID_212.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_212(86284746);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_212);
          NstdPtysSubGrp_NoNestedPartySubIDs_212.insert(NestedPartySubIDType_212.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_212);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_107;
        FIX::NestedPartyID NestedPartyID_107("STRING_1440026961");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyID_107.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_107('2');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyIDSource_107.getString());
        FIX::NestedPartyRole NestedPartyRole_107(267976258);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyRole_107.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_107);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_213;
          FIX::NestedPartySubID NestedPartySubID_213("STRING_182330656");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_213);
          NstdPtysSubGrp_NoNestedPartySubIDs_213.insert(NestedPartySubID_213.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_213(2101110294);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_213);
          NstdPtysSubGrp_NoNestedPartySubIDs_213.insert(NestedPartySubIDType_213.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_213);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_214;
          FIX::NestedPartySubID NestedPartySubID_214("STRING_2059165283");
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubID_214);
          NstdPtysSubGrp_NoNestedPartySubIDs_214.insert(NestedPartySubID_214.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_214(1420816536);
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubIDType_214);
          NstdPtysSubGrp_NoNestedPartySubIDs_214.insert(NestedPartySubIDType_214.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_214);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_108;
        FIX::NestedPartyID NestedPartyID_108("STRING_1467055504");
        noNestedPartyIDs_0_1_2_2.set(NestedPartyID_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyID_108.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_108('1');
        noNestedPartyIDs_0_1_2_2.set(NestedPartyIDSource_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyIDSource_108.getString());
        FIX::NestedPartyRole NestedPartyRole_108(352152463);
        noNestedPartyIDs_0_1_2_2.set(NestedPartyRole_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyRole_108.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_108);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_215;
          FIX::NestedPartySubID NestedPartySubID_215("STRING_278677449");
          noNestedPartySubIDs_0_1_2_3_0.set(NestedPartySubID_215);
          NstdPtysSubGrp_NoNestedPartySubIDs_215.insert(NestedPartySubID_215.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_215(1481941332);
          noNestedPartySubIDs_0_1_2_3_0.set(NestedPartySubIDType_215);
          NstdPtysSubGrp_NoNestedPartySubIDs_215.insert(NestedPartySubIDType_215.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_215);

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_216;
          FIX::NestedPartySubID NestedPartySubID_216("STRING_769654719");
          noNestedPartySubIDs_0_1_2_3_1.set(NestedPartySubID_216);
          NstdPtysSubGrp_NoNestedPartySubIDs_216.insert(NestedPartySubID_216.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_216(348358742);
          noNestedPartySubIDs_0_1_2_3_1.set(NestedPartySubIDType_216);
          NstdPtysSubGrp_NoNestedPartySubIDs_216.insert(NestedPartySubIDType_216.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_216);

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_217;
          FIX::NestedPartySubID NestedPartySubID_217("STRING_629014419");
          noNestedPartySubIDs_0_1_2_3_2.set(NestedPartySubID_217);
          NstdPtysSubGrp_NoNestedPartySubIDs_217.insert(NestedPartySubID_217.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_217(1382120180);
          noNestedPartySubIDs_0_1_2_3_2.set(NestedPartySubIDType_217);
          NstdPtysSubGrp_NoNestedPartySubIDs_217.insert(NestedPartySubIDType_217.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_217);

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_17;
      FIX::RateSource RateSource_27(2);
      noRateSources_0_1_0.set(RateSource_27);
      RateSource_NoRateSources_17.insert(RateSource_27.getString());
      FIX::RateSourceType RateSourceType_17(1);
      noRateSources_0_1_0.set(RateSourceType_17);
      RateSource_NoRateSources_17.insert(RateSourceType_17.getString());
      FIX::ReferencePage ReferencePage_17("STRING_1011982795");
      noRateSources_0_1_0.set(ReferencePage_17);
      RateSource_NoRateSources_17.insert(ReferencePage_17.getString());
      all_values.push_back(RateSource_NoRateSources_17);

      noRelatedSym_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_18;
      FIX::RateSource RateSource_28(2);
      noRateSources_0_1_1.set(RateSource_28);
      RateSource_NoRateSources_18.insert(RateSource_28.getString());
      FIX::RateSourceType RateSourceType_18(1);
      noRateSources_0_1_1.set(RateSourceType_18);
      RateSource_NoRateSources_18.insert(RateSourceType_18.getString());
      FIX::ReferencePage ReferencePage_18("STRING_1144569088");
      noRateSources_0_1_1.set(ReferencePage_18);
      RateSource_NoRateSources_18.insert(ReferencePage_18.getString());
      all_values.push_back(RateSource_NoRateSources_18);

      noRelatedSym_0_0.addGroup(noRateSources_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_22;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_22("USD");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurveCurrency_22.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_22("STRING_OTHER");
    noRelatedSym_0_0.set(BenchmarkCurveName_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurveName_22.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_22("STRING_235887386");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurvePoint_22.getString());
    FIX::BenchmarkPrice BenchmarkPrice_22;
    BenchmarkPrice_22.setString("14001021");
    noRelatedSym_0_0.set(BenchmarkPrice_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkPrice_22.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_22(1155946645);
    noRelatedSym_0_0.set(BenchmarkPriceType_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkPriceType_22.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_22("STRING_1675914347");
    noRelatedSym_0_0.set(BenchmarkSecurityID_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkSecurityID_22.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_22("STRING_1295935752");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkSecurityIDSource_22.getString());
    FIX::Spread Spread_22;
    Spread_22.setString("14239229");
    noRelatedSym_0_0.set(Spread_22);
    SpreadOrBenchmarkCurveData_22.insert(Spread_22.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_22);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_31;
      FIX::StipulationType StipulationType_31("STRING_HAIRCUT");
      noStipulations_0_1_0.set(StipulationType_31);
      Stipulations_NoStipulations_31.insert(StipulationType_31.getString());
      FIX::StipulationValue StipulationValue_31("STRING_1377549549");
      noStipulations_0_1_0.set(StipulationValue_31);
      Stipulations_NoStipulations_31.insert(StipulationValue_31.getString());
      all_values.push_back(Stipulations_NoStipulations_31);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_93;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_93("DATA_751599297");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingIssuer_93.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_93(697121405);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingIssuerLen_93.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_93("DATA_1491342948");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingSecurityDesc_93.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_93(1103751760);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_93);
      UnderlyingInstrument_93.insert(EncodedUnderlyingSecurityDescLen_93.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_93;
      UnderlyingAdjustedQuantity_93.setString("19689012");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_93);
      UnderlyingInstrument_93.insert(UnderlyingAdjustedQuantity_93.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_93;
      UnderlyingAllocationPercent_93.setString("3.970000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_93);
      UnderlyingInstrument_93.insert(UnderlyingAllocationPercent_93.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_93;
      UnderlyingAttachmentPoint_93.setString("94.440000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_93);
      UnderlyingInstrument_93.insert(UnderlyingAttachmentPoint_93.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_93("STRING_591072294");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_93);
      UnderlyingInstrument_93.insert(UnderlyingCFICode_93.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_93("STRING_2118379139");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_93);
      UnderlyingInstrument_93.insert(UnderlyingCPProgram_93.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_93("STRING_1067223864");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_93);
      UnderlyingInstrument_93.insert(UnderlyingCPRegType_93.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_93;
      UnderlyingCapValue_93.setString("19731924");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_93);
      UnderlyingInstrument_93.insert(UnderlyingCapValue_93.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_93;
      UnderlyingCashAmount_93.setString("11233175");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_93);
      UnderlyingInstrument_93.insert(UnderlyingCashAmount_93.getString());
      FIX::UnderlyingCashType UnderlyingCashType_93("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_93);
      UnderlyingInstrument_93.insert(UnderlyingCashType_93.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_93;
      UnderlyingContractMultiplier_93.setString("12169240");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_93);
      UnderlyingInstrument_93.insert(UnderlyingContractMultiplier_93.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_93(2135300364);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_93);
      UnderlyingInstrument_93.insert(UnderlyingContractMultiplierUnit_93.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_93("COUNTRY_2138007893");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingCountryOfIssue_93.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_93("LOCALMKTDATE_376843444");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_93);
      UnderlyingInstrument_93.insert(UnderlyingCouponPaymentDate_93.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_93;
      UnderlyingCouponRate_93.setString("58.040000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_93);
      UnderlyingInstrument_93.insert(UnderlyingCouponRate_93.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_93("STRING_1777450760");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_93);
      UnderlyingInstrument_93.insert(UnderlyingCreditRating_93.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_93("EUR");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_93);
      UnderlyingInstrument_93.insert(UnderlyingCurrency_93.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_93;
      UnderlyingCurrentValue_93.setString("20133381");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_93);
      UnderlyingInstrument_93.insert(UnderlyingCurrentValue_93.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_93;
      UnderlyingDetachmentPoint_93.setString("47.490000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_93);
      UnderlyingInstrument_93.insert(UnderlyingDetachmentPoint_93.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_93;
      UnderlyingDirtyPrice_93.setString("12105107");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_93);
      UnderlyingInstrument_93.insert(UnderlyingDirtyPrice_93.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_93;
      UnderlyingEndPrice_93.setString("15417688");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_93);
      UnderlyingInstrument_93.insert(UnderlyingEndPrice_93.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_93;
      UnderlyingEndValue_93.setString("5874168");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_93);
      UnderlyingInstrument_93.insert(UnderlyingEndValue_93.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_93(486949955);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_93);
      UnderlyingInstrument_93.insert(UnderlyingExerciseStyle_93.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_93;
      UnderlyingFXRate_93.setString("13875066");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_93);
      UnderlyingInstrument_93.insert(UnderlyingFXRate_93.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_93('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_93);
      UnderlyingInstrument_93.insert(UnderlyingFXRateCalc_93.getString());
      FIX::UnderlyingFactor UnderlyingFactor_93;
      UnderlyingFactor_93.setString("18644995");
      noUnderlyings_0_1_0.set(UnderlyingFactor_93);
      UnderlyingInstrument_93.insert(UnderlyingFactor_93.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_93(1144926031);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_93);
      UnderlyingInstrument_93.insert(UnderlyingFlowScheduleType_93.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_93("STRING_669798910");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_93);
      UnderlyingInstrument_93.insert(UnderlyingInstrRegistry_93.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_93("LOCALMKTDATE_414137262");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_93);
      UnderlyingInstrument_93.insert(UnderlyingIssueDate_93.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_93("STRING_488785331");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_93);
      UnderlyingInstrument_93.insert(UnderlyingIssuer_93.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_93("STRING_1773550670");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingLocaleOfIssue_93.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_93("LOCALMKTDATE_235554837");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityDate_93.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_93("MONTHYEAR_111322080");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityMonthYear_93.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_93("TZTIMEONLY_64276467");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_93);
      UnderlyingInstrument_93.insert(UnderlyingMaturityTime_93.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_93;
      UnderlyingNotionalPercentageOutstanding_93.setString("71.310000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_93);
      UnderlyingInstrument_93.insert(UnderlyingNotionalPercentageOutstanding_93.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_93('8');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_93);
      UnderlyingInstrument_93.insert(UnderlyingOptAttribute_93.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_93;
      UnderlyingOriginalNotionalPercentageOutstanding_93.setString("3.310000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_93);
      UnderlyingInstrument_93.insert(UnderlyingOriginalNotionalPercentageOutstanding_93.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_93("STRING_652335958");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_93);
      UnderlyingInstrument_93.insert(UnderlyingPriceUnitOfMeasure_93.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_93;
      UnderlyingPriceUnitOfMeasureQty_93.setString("12055351");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_93);
      UnderlyingInstrument_93.insert(UnderlyingPriceUnitOfMeasureQty_93.getString());
      FIX::UnderlyingProduct UnderlyingProduct_93(671295805);
      noUnderlyings_0_1_0.set(UnderlyingProduct_93);
      UnderlyingInstrument_93.insert(UnderlyingProduct_93.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_93(1869260017);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_93);
      UnderlyingInstrument_93.insert(UnderlyingPutOrCall_93.getString());
      FIX::UnderlyingPx UnderlyingPx_93;
      UnderlyingPx_93.setString("11933518");
      noUnderlyings_0_1_0.set(UnderlyingPx_93);
      UnderlyingInstrument_93.insert(UnderlyingPx_93.getString());
      FIX::UnderlyingQty UnderlyingQty_93;
      UnderlyingQty_93.setString("6618200");
      noUnderlyings_0_1_0.set(UnderlyingQty_93);
      UnderlyingInstrument_93.insert(UnderlyingQty_93.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_93("LOCALMKTDATE_98619813");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_93);
      UnderlyingInstrument_93.insert(UnderlyingRedemptionDate_93.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_93("STRING_178254012");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_93);
      UnderlyingInstrument_93.insert(UnderlyingRepoCollateralSecurityType_93.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_93;
      UnderlyingRepurchaseRate_93.setString("71.630000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_93);
      UnderlyingInstrument_93.insert(UnderlyingRepurchaseRate_93.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_93(137482451);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_93);
      UnderlyingInstrument_93.insert(UnderlyingRepurchaseTerm_93.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_93("STRING_232818067");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_93);
      UnderlyingInstrument_93.insert(UnderlyingRestructuringType_93.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_93("STRING_157641661");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityDesc_93.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_93("EXCHANGE_1576447200");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityExchange_93.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_93("STRING_1443328767");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityID_93.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_93("STRING_1699410507");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityIDSource_93.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_93("STRING_16380405");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_93);
      UnderlyingInstrument_93.insert(UnderlyingSecuritySubType_93.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_93("STRING_1930278722");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_93);
      UnderlyingInstrument_93.insert(UnderlyingSecurityType_93.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_93("STRING_939433480");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_93);
      UnderlyingInstrument_93.insert(UnderlyingSeniority_93.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_93("STRING_2082063667");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_93);
      UnderlyingInstrument_93.insert(UnderlyingSettlMethod_93.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_93(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_93);
      UnderlyingInstrument_93.insert(UnderlyingSettlementType_93.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_93;
      UnderlyingStartValue_93.setString("20843595");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_93);
      UnderlyingInstrument_93.insert(UnderlyingStartValue_93.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_93("STRING_604378929");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_93);
      UnderlyingInstrument_93.insert(UnderlyingStateOrProvinceOfIssue_93.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_93("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_93);
      UnderlyingInstrument_93.insert(UnderlyingStrikeCurrency_93.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_93;
      UnderlyingStrikePrice_93.setString("2304459");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_93);
      UnderlyingInstrument_93.insert(UnderlyingStrikePrice_93.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_93("STRING_149503029");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_93);
      UnderlyingInstrument_93.insert(UnderlyingSymbol_93.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_93("STRING_536983275");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_93);
      UnderlyingInstrument_93.insert(UnderlyingSymbolSfx_93.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_93("STRING_294722419");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_93);
      UnderlyingInstrument_93.insert(UnderlyingTimeUnit_93.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_93("STRING_976130161");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_93);
      UnderlyingInstrument_93.insert(UnderlyingUnitOfMeasure_93.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_93;
      UnderlyingUnitOfMeasureQty_93.setString("6192008");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_93);
      UnderlyingInstrument_93.insert(UnderlyingUnitOfMeasureQty_93.getString());
      all_values.push_back(UnderlyingInstrument_93);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_194;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_194("STRING_1628466119");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_194);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_194.insert(UnderlyingSecurityAltID_194.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_194("STRING_1824735987");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_194);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_194.insert(UnderlyingSecurityAltIDSource_194.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_195;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_195("STRING_2097518555");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_195);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_195.insert(UnderlyingSecurityAltID_195.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_195("STRING_1350242488");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_195);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_195.insert(UnderlyingSecurityAltIDSource_195.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_180;
        FIX::UnderlyingStipType UnderlyingStipType_180("STRING_611854958");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_180);
        UnderlyingStipulations_NoUnderlyingStips_180.insert(UnderlyingStipType_180.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_180("STRING_1448862301");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_180);
        UnderlyingStipulations_NoUnderlyingStips_180.insert(UnderlyingStipValue_180.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_180);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_181;
        FIX::UnderlyingStipType UnderlyingStipType_181("STRING_1048858207");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_181);
        UnderlyingStipulations_NoUnderlyingStips_181.insert(UnderlyingStipType_181.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_181("STRING_903642121");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_181);
        UnderlyingStipulations_NoUnderlyingStips_181.insert(UnderlyingStipValue_181.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_181);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_183;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_183("STRING_1281676274");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyID_183.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_183('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyIDSource_183.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_183(1015308305);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_183);
        UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyRole_183.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_183);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_368("STRING_613210641");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_368);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368.insert(UnderlyingInstrumentPartySubID_368.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_368(1031688711);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_368);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368.insert(UnderlyingInstrumentPartySubIDType_368.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_184;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_184("STRING_360316467");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyID_184.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_184('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyIDSource_184.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_184(966268730);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyRole_184.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_184);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_369("STRING_1489519985");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_369);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369.insert(UnderlyingInstrumentPartySubID_369.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_369(1570647659);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_369);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369.insert(UnderlyingInstrumentPartySubIDType_369.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_370("STRING_1921559238");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_370);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370.insert(UnderlyingInstrumentPartySubID_370.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_370(1915181180);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_370);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370.insert(UnderlyingInstrumentPartySubIDType_370.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_371("STRING_1801093611");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_371);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371.insert(UnderlyingInstrumentPartySubID_371.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_371(2071062267);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_371);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371.insert(UnderlyingInstrumentPartySubIDType_371.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_17;
    FIX::Yield Yield_17;
    Yield_17.setString("8.070000");
    noRelatedSym_0_0.set(Yield_17);
    YieldData_17.insert(Yield_17.getString());
    FIX::YieldCalcDate YieldCalcDate_17("LOCALMKTDATE_2095816030");
    noRelatedSym_0_0.set(YieldCalcDate_17);
    YieldData_17.insert(YieldCalcDate_17.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_17("LOCALMKTDATE_899708780");
    noRelatedSym_0_0.set(YieldRedemptionDate_17);
    YieldData_17.insert(YieldRedemptionDate_17.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_17;
    YieldRedemptionPrice_17.setString("9238816");
    noRelatedSym_0_0.set(YieldRedemptionPrice_17);
    YieldData_17.insert(YieldRedemptionPrice_17.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_17(1374555132);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_17);
    YieldData_17.insert(YieldRedemptionPriceType_17.getString());
    FIX::YieldType YieldType_17("STRING_LONGAVGLIFE");
    noRelatedSym_0_0.set(YieldType_17);
    YieldData_17.insert(YieldType_17.getString());
    all_values.push_back(YieldData_17);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_1;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_1;
    FIX::Account Account_33("STRING_601133993");
    noRelatedSym_0_1.set(Account_33);
    QuotReqGrp_NoRelatedSym_1.insert(Account_33.getString());
    FIX::AccountType AccountType_28(6);
    noRelatedSym_0_1.set(AccountType_28);
    QuotReqGrp_NoRelatedSym_1.insert(AccountType_28.getString());
    FIX::AcctIDSource AcctIDSource_26(5);
    noRelatedSym_0_1.set(AcctIDSource_26);
    QuotReqGrp_NoRelatedSym_1.insert(AcctIDSource_26.getString());
    FIX::Currency Currency_51("USD");
    noRelatedSym_0_1.set(Currency_51);
    QuotReqGrp_NoRelatedSym_1.insert(Currency_51.getString());
    FIX::ExpireTime ExpireTime_16(FIX::UTCTIMESTAMP(11, 11, 39, 25, 2, 2008));
    noRelatedSym_0_1.set(ExpireTime_16);
    QuotReqGrp_NoRelatedSym_1.insert(ExpireTime_16.getString());
    FIX::MinQty MinQty_15;
    MinQty_15.setString("848267");
    noRelatedSym_0_1.set(MinQty_15);
    QuotReqGrp_NoRelatedSym_1.insert(MinQty_15.getString());
    FIX::OrdType OrdType_48('G');
    noRelatedSym_0_1.set(OrdType_48);
    QuotReqGrp_NoRelatedSym_1.insert(OrdType_48.getString());
    FIX::OrderQty2 OrderQty2_13;
    OrderQty2_13.setString("3706868");
    noRelatedSym_0_1.set(OrderQty2_13);
    QuotReqGrp_NoRelatedSym_1.insert(OrderQty2_13.getString());
    FIX::PrevClosePx PrevClosePx_9;
    PrevClosePx_9.setString("4451432");
    noRelatedSym_0_1.set(PrevClosePx_9);
    QuotReqGrp_NoRelatedSym_1.insert(PrevClosePx_9.getString());
    FIX::Price Price_21;
    Price_21.setString("17722583");
    noRelatedSym_0_1.set(Price_21);
    QuotReqGrp_NoRelatedSym_1.insert(Price_21.getString());
    FIX::Price2 Price2_4;
    Price2_4.setString("13369555");
    noRelatedSym_0_1.set(Price2_4);
    QuotReqGrp_NoRelatedSym_1.insert(Price2_4.getString());
    FIX::PriceType PriceType_37(10);
    noRelatedSym_0_1.set(PriceType_37);
    QuotReqGrp_NoRelatedSym_1.insert(PriceType_37.getString());
    FIX::QtyType QtyType_24(1);
    noRelatedSym_0_1.set(QtyType_24);
    QuotReqGrp_NoRelatedSym_1.insert(QtyType_24.getString());
    FIX::QuotePriceType QuotePriceType_1(10);
    noRelatedSym_0_1.set(QuotePriceType_1);
    QuotReqGrp_NoRelatedSym_1.insert(QuotePriceType_1.getString());
    FIX::QuoteRequestType QuoteRequestType_1(2);
    noRelatedSym_0_1.set(QuoteRequestType_1);
    QuotReqGrp_NoRelatedSym_1.insert(QuoteRequestType_1.getString());
    FIX::QuoteType QuoteType_7(1);
    noRelatedSym_0_1.set(QuoteType_7);
    QuotReqGrp_NoRelatedSym_1.insert(QuoteType_7.getString());
    FIX::SettlCurrency SettlCurrency_27("GBP");
    noRelatedSym_0_1.set(SettlCurrency_27);
    QuotReqGrp_NoRelatedSym_1.insert(SettlCurrency_27.getString());
    FIX::SettlDate SettlDate_40("LOCALMKTDATE_1186673045");
    noRelatedSym_0_1.set(SettlDate_40);
    QuotReqGrp_NoRelatedSym_1.insert(SettlDate_40.getString());
    FIX::SettlDate2 SettlDate2_13("LOCALMKTDATE_362061955");
    noRelatedSym_0_1.set(SettlDate2_13);
    QuotReqGrp_NoRelatedSym_1.insert(SettlDate2_13.getString());
    FIX::SettlType SettlType_27("STRING_5");
    noRelatedSym_0_1.set(SettlType_27);
    QuotReqGrp_NoRelatedSym_1.insert(SettlType_27.getString());
    FIX::Side Side_43('C');
    noRelatedSym_0_1.set(Side_43);
    QuotReqGrp_NoRelatedSym_1.insert(Side_43.getString());
    FIX::TradeOriginationDate TradeOriginationDate_20("LOCALMKTDATE_1736617087");
    noRelatedSym_0_1.set(TradeOriginationDate_20);
    QuotReqGrp_NoRelatedSym_1.insert(TradeOriginationDate_20.getString());
    FIX::TradingSessionID TradingSessionID_67("STRING_6");
    noRelatedSym_0_1.set(TradingSessionID_67);
    QuotReqGrp_NoRelatedSym_1.insert(TradingSessionID_67.getString());
    FIX::TradingSessionSubID TradingSessionSubID_67("STRING_6");
    noRelatedSym_0_1.set(TradingSessionSubID_67);
    QuotReqGrp_NoRelatedSym_1.insert(TradingSessionSubID_67.getString());
    FIX::TransactTime TransactTime_50(FIX::UTCTIMESTAMP(13, 13, 49, 15, 6, 2012));
    noRelatedSym_0_1.set(TransactTime_50);
    QuotReqGrp_NoRelatedSym_1.insert(TransactTime_50.getString());
    FIX::ValidUntilTime ValidUntilTime_10(FIX::UTCTIMESTAMP(18, 6, 15, 9, 10, 2000));
    noRelatedSym_0_1.set(ValidUntilTime_10);
    QuotReqGrp_NoRelatedSym_1.insert(ValidUntilTime_10.getString());
    all_values.push_back(QuotReqGrp_NoRelatedSym_1);

    // FinancingDetails
    multiset<string> FinancingDetails_19;
    FIX::AgreementCurrency AgreementCurrency_19("CAN");
    noRelatedSym_0_1.set(AgreementCurrency_19);
    FinancingDetails_19.insert(AgreementCurrency_19.getString());
    FIX::AgreementDate AgreementDate_19("LOCALMKTDATE_1269417832");
    noRelatedSym_0_1.set(AgreementDate_19);
    FinancingDetails_19.insert(AgreementDate_19.getString());
    FIX::AgreementDesc AgreementDesc_19("STRING_604118337");
    noRelatedSym_0_1.set(AgreementDesc_19);
    FinancingDetails_19.insert(AgreementDesc_19.getString());
    FIX::AgreementID AgreementID_19("STRING_1960375579");
    noRelatedSym_0_1.set(AgreementID_19);
    FinancingDetails_19.insert(AgreementID_19.getString());
    FIX::DeliveryType DeliveryType_19(1);
    noRelatedSym_0_1.set(DeliveryType_19);
    FinancingDetails_19.insert(DeliveryType_19.getString());
    FIX::EndDate EndDate_19("LOCALMKTDATE_683464558");
    noRelatedSym_0_1.set(EndDate_19);
    FinancingDetails_19.insert(EndDate_19.getString());
    FIX::MarginRatio MarginRatio_19;
    MarginRatio_19.setString("41.680000");
    noRelatedSym_0_1.set(MarginRatio_19);
    FinancingDetails_19.insert(MarginRatio_19.getString());
    FIX::StartDate StartDate_19("LOCALMKTDATE_295783365");
    noRelatedSym_0_1.set(StartDate_19);
    FinancingDetails_19.insert(StartDate_19.getString());
    FIX::TerminationType TerminationType_19(4);
    noRelatedSym_0_1.set(TerminationType_19);
    FinancingDetails_19.insert(TerminationType_19.getString());
    all_values.push_back(FinancingDetails_19);

    // Instrument
    multiset<string> Instrument_63;
    FIX::AttachmentPoint AttachmentPoint_63;
    AttachmentPoint_63.setString("72.130000");
    noRelatedSym_0_1.set(AttachmentPoint_63);
    Instrument_63.insert(AttachmentPoint_63.getString());
    FIX::CFICode CFICode_63("STRING_657845320");
    noRelatedSym_0_1.set(CFICode_63);
    Instrument_63.insert(CFICode_63.getString());
    FIX::CPProgram CPProgram_63(1);
    noRelatedSym_0_1.set(CPProgram_63);
    Instrument_63.insert(CPProgram_63.getString());
    FIX::CPRegType CPRegType_63("STRING_1844628265");
    noRelatedSym_0_1.set(CPRegType_63);
    Instrument_63.insert(CPRegType_63.getString());
    FIX::CapPrice CapPrice_63;
    CapPrice_63.setString("2469787");
    noRelatedSym_0_1.set(CapPrice_63);
    Instrument_63.insert(CapPrice_63.getString());
    FIX::ContractMultiplier ContractMultiplier_63;
    ContractMultiplier_63.setString("7248642");
    noRelatedSym_0_1.set(ContractMultiplier_63);
    Instrument_63.insert(ContractMultiplier_63.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_63(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_63);
    Instrument_63.insert(ContractMultiplierUnit_63.getString());
    FIX::ContractSettlMonth ContractSettlMonth_63("MONTHYEAR_1160702239");
    noRelatedSym_0_1.set(ContractSettlMonth_63);
    Instrument_63.insert(ContractSettlMonth_63.getString());
    FIX::CountryOfIssue CountryOfIssue_63("COUNTRY_1591639210");
    noRelatedSym_0_1.set(CountryOfIssue_63);
    Instrument_63.insert(CountryOfIssue_63.getString());
    FIX::CouponPaymentDate CouponPaymentDate_63("LOCALMKTDATE_149809247");
    noRelatedSym_0_1.set(CouponPaymentDate_63);
    Instrument_63.insert(CouponPaymentDate_63.getString());
    FIX::CouponRate CouponRate_63;
    CouponRate_63.setString("70.690000");
    noRelatedSym_0_1.set(CouponRate_63);
    Instrument_63.insert(CouponRate_63.getString());
    FIX::CreditRating CreditRating_63("STRING_1343242922");
    noRelatedSym_0_1.set(CreditRating_63);
    Instrument_63.insert(CreditRating_63.getString());
    FIX::DatedDate DatedDate_63("LOCALMKTDATE_411381580");
    noRelatedSym_0_1.set(DatedDate_63);
    Instrument_63.insert(DatedDate_63.getString());
    FIX::DetachmentPoint DetachmentPoint_63;
    DetachmentPoint_63.setString("17.210000");
    noRelatedSym_0_1.set(DetachmentPoint_63);
    Instrument_63.insert(DetachmentPoint_63.getString());
    FIX::EncodedIssuer EncodedIssuer_63("DATA_1566020132");
    noRelatedSym_0_1.set(EncodedIssuer_63);
    Instrument_63.insert(EncodedIssuer_63.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_63(180259287);
    noRelatedSym_0_1.set(EncodedIssuerLen_63);
    Instrument_63.insert(EncodedIssuerLen_63.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_63("DATA_2112883627");
    noRelatedSym_0_1.set(EncodedSecurityDesc_63);
    Instrument_63.insert(EncodedSecurityDesc_63.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_63(1127795499);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_63);
    Instrument_63.insert(EncodedSecurityDescLen_63.getString());
    FIX::ExerciseStyle ExerciseStyle_63(1);
    noRelatedSym_0_1.set(ExerciseStyle_63);
    Instrument_63.insert(ExerciseStyle_63.getString());
    FIX::Factor Factor_63;
    Factor_63.setString("11867061");
    noRelatedSym_0_1.set(Factor_63);
    Instrument_63.insert(Factor_63.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_63(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_63);
    Instrument_63.insert(FlexProductEligibilityIndicator_63.getString());
    FIX::FlexibleIndicator FlexibleIndicator_63(true);
    noRelatedSym_0_1.set(FlexibleIndicator_63);
    Instrument_63.insert(FlexibleIndicator_63.getString());
    FIX::FloorPrice FloorPrice_63;
    FloorPrice_63.setString("20327870");
    noRelatedSym_0_1.set(FloorPrice_63);
    Instrument_63.insert(FloorPrice_63.getString());
    FIX::FlowScheduleType FlowScheduleType_63(3);
    noRelatedSym_0_1.set(FlowScheduleType_63);
    Instrument_63.insert(FlowScheduleType_63.getString());
    FIX::InstrRegistry InstrRegistry_63("STRING_936929804");
    noRelatedSym_0_1.set(InstrRegistry_63);
    Instrument_63.insert(InstrRegistry_63.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_63('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_63);
    Instrument_63.insert(InstrmtAssignmentMethod_63.getString());
    FIX::InterestAccrualDate InterestAccrualDate_63("LOCALMKTDATE_64245711");
    noRelatedSym_0_1.set(InterestAccrualDate_63);
    Instrument_63.insert(InterestAccrualDate_63.getString());
    FIX::IssueDate IssueDate_63("LOCALMKTDATE_1620394362");
    noRelatedSym_0_1.set(IssueDate_63);
    Instrument_63.insert(IssueDate_63.getString());
    FIX::Issuer Issuer_63("STRING_393079457");
    noRelatedSym_0_1.set(Issuer_63);
    Instrument_63.insert(Issuer_63.getString());
    FIX::ListMethod ListMethod_63(0);
    noRelatedSym_0_1.set(ListMethod_63);
    Instrument_63.insert(ListMethod_63.getString());
    FIX::LocaleOfIssue LocaleOfIssue_63("STRING_159300113");
    noRelatedSym_0_1.set(LocaleOfIssue_63);
    Instrument_63.insert(LocaleOfIssue_63.getString());
    FIX::MaturityDate MaturityDate_63("LOCALMKTDATE_127153023");
    noRelatedSym_0_1.set(MaturityDate_63);
    Instrument_63.insert(MaturityDate_63.getString());
    FIX::MaturityMonthYear MaturityMonthYear_63("MONTHYEAR_1017874397");
    noRelatedSym_0_1.set(MaturityMonthYear_63);
    Instrument_63.insert(MaturityMonthYear_63.getString());
    FIX::MaturityTime MaturityTime_63("TZTIMEONLY_1748323133");
    noRelatedSym_0_1.set(MaturityTime_63);
    Instrument_63.insert(MaturityTime_63.getString());
    FIX::MinPriceIncrement MinPriceIncrement_63;
    MinPriceIncrement_63.setString("19717812");
    noRelatedSym_0_1.set(MinPriceIncrement_63);
    Instrument_63.insert(MinPriceIncrement_63.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_63;
    MinPriceIncrementAmount_63.setString("12648531");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_63);
    Instrument_63.insert(MinPriceIncrementAmount_63.getString());
    FIX::NTPositionLimit NTPositionLimit_63(325703730);
    noRelatedSym_0_1.set(NTPositionLimit_63);
    Instrument_63.insert(NTPositionLimit_63.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_63;
    NotionalPercentageOutstanding_63.setString("73.020000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_63);
    Instrument_63.insert(NotionalPercentageOutstanding_63.getString());
    FIX::OptAttribute OptAttribute_63('2');
    noRelatedSym_0_1.set(OptAttribute_63);
    Instrument_63.insert(OptAttribute_63.getString());
    FIX::OptPayoutAmount OptPayoutAmount_63;
    OptPayoutAmount_63.setString("19173429");
    noRelatedSym_0_1.set(OptPayoutAmount_63);
    Instrument_63.insert(OptPayoutAmount_63.getString());
    FIX::OptPayoutType OptPayoutType_63(2);
    noRelatedSym_0_1.set(OptPayoutType_63);
    Instrument_63.insert(OptPayoutType_63.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_63;
    OriginalNotionalPercentageOutstanding_63.setString("88.170000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_63);
    Instrument_63.insert(OriginalNotionalPercentageOutstanding_63.getString());
    FIX::Pool Pool_63("STRING_1113102215");
    noRelatedSym_0_1.set(Pool_63);
    Instrument_63.insert(Pool_63.getString());
    FIX::PositionLimit PositionLimit_63(646838130);
    noRelatedSym_0_1.set(PositionLimit_63);
    Instrument_63.insert(PositionLimit_63.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_63("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_63);
    Instrument_63.insert(PriceQuoteMethod_63.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_63("STRING_531638699");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_63);
    Instrument_63.insert(PriceUnitOfMeasure_63.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_63;
    PriceUnitOfMeasureQty_63.setString("8270974");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_63);
    Instrument_63.insert(PriceUnitOfMeasureQty_63.getString());
    FIX::Product Product_65(10);
    noRelatedSym_0_1.set(Product_65);
    Instrument_63.insert(Product_65.getString());
    FIX::ProductComplex ProductComplex_63("STRING_1659434199");
    noRelatedSym_0_1.set(ProductComplex_63);
    Instrument_63.insert(ProductComplex_63.getString());
    FIX::PutOrCall PutOrCall_63(1);
    noRelatedSym_0_1.set(PutOrCall_63);
    Instrument_63.insert(PutOrCall_63.getString());
    FIX::RedemptionDate RedemptionDate_63("LOCALMKTDATE_109789355");
    noRelatedSym_0_1.set(RedemptionDate_63);
    Instrument_63.insert(RedemptionDate_63.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_63("STRING_572208285");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_63);
    Instrument_63.insert(RepoCollateralSecurityType_63.getString());
    FIX::RepurchaseRate RepurchaseRate_63;
    RepurchaseRate_63.setString("26.430000");
    noRelatedSym_0_1.set(RepurchaseRate_63);
    Instrument_63.insert(RepurchaseRate_63.getString());
    FIX::RepurchaseTerm RepurchaseTerm_63(2142576361);
    noRelatedSym_0_1.set(RepurchaseTerm_63);
    Instrument_63.insert(RepurchaseTerm_63.getString());
    FIX::RestructuringType RestructuringType_63("STRING_XR");
    noRelatedSym_0_1.set(RestructuringType_63);
    Instrument_63.insert(RestructuringType_63.getString());
    FIX::SecurityDesc SecurityDesc_63("STRING_2130802447");
    noRelatedSym_0_1.set(SecurityDesc_63);
    Instrument_63.insert(SecurityDesc_63.getString());
    FIX::SecurityExchange SecurityExchange_63("EXCHANGE_1840771650");
    noRelatedSym_0_1.set(SecurityExchange_63);
    Instrument_63.insert(SecurityExchange_63.getString());
    FIX::SecurityGroup SecurityGroup_63("STRING_818645914");
    noRelatedSym_0_1.set(SecurityGroup_63);
    Instrument_63.insert(SecurityGroup_63.getString());
    FIX::SecurityID SecurityID_63("STRING_1603713162");
    noRelatedSym_0_1.set(SecurityID_63);
    Instrument_63.insert(SecurityID_63.getString());
    FIX::SecurityIDSource SecurityIDSource_63("STRING_E");
    noRelatedSym_0_1.set(SecurityIDSource_63);
    Instrument_63.insert(SecurityIDSource_63.getString());
    FIX::SecurityStatus SecurityStatus_63("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_63);
    Instrument_63.insert(SecurityStatus_63.getString());
    FIX::SecuritySubType SecuritySubType_64("STRING_1763013275");
    noRelatedSym_0_1.set(SecuritySubType_64);
    Instrument_63.insert(SecuritySubType_64.getString());
    FIX::SecurityType SecurityType_65("STRING_PN");
    noRelatedSym_0_1.set(SecurityType_65);
    Instrument_63.insert(SecurityType_65.getString());
    FIX::Seniority Seniority_63("STRING_SR");
    noRelatedSym_0_1.set(Seniority_63);
    Instrument_63.insert(Seniority_63.getString());
    FIX::SettlMethod SettlMethod_63('P');
    noRelatedSym_0_1.set(SettlMethod_63);
    Instrument_63.insert(SettlMethod_63.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_63("STRING_37818122");
    noRelatedSym_0_1.set(SettleOnOpenFlag_63);
    Instrument_63.insert(SettleOnOpenFlag_63.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_63("STRING_1313918896");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_63);
    Instrument_63.insert(StateOrProvinceOfIssue_63.getString());
    FIX::StrikeCurrency StrikeCurrency_63("JPY");
    noRelatedSym_0_1.set(StrikeCurrency_63);
    Instrument_63.insert(StrikeCurrency_63.getString());
    FIX::StrikeMultiplier StrikeMultiplier_63;
    StrikeMultiplier_63.setString("15919906");
    noRelatedSym_0_1.set(StrikeMultiplier_63);
    Instrument_63.insert(StrikeMultiplier_63.getString());
    FIX::StrikePrice StrikePrice_63;
    StrikePrice_63.setString("14594157");
    noRelatedSym_0_1.set(StrikePrice_63);
    Instrument_63.insert(StrikePrice_63.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_63(5);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_63);
    Instrument_63.insert(StrikePriceBoundaryMethod_63.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_63;
    StrikePriceBoundaryPrecision_63.setString("58.140000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_63);
    Instrument_63.insert(StrikePriceBoundaryPrecision_63.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_63(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_63);
    Instrument_63.insert(StrikePriceDeterminationMethod_63.getString());
    FIX::StrikeValue StrikeValue_63;
    StrikeValue_63.setString("10057601");
    noRelatedSym_0_1.set(StrikeValue_63);
    Instrument_63.insert(StrikeValue_63.getString());
    FIX::Symbol Symbol_63("STRING_543649057");
    noRelatedSym_0_1.set(Symbol_63);
    Instrument_63.insert(Symbol_63.getString());
    FIX::SymbolSfx SymbolSfx_63("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_63);
    Instrument_63.insert(SymbolSfx_63.getString());
    FIX::TimeUnit TimeUnit_63("STRING_Mo");
    noRelatedSym_0_1.set(TimeUnit_63);
    Instrument_63.insert(TimeUnit_63.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_63(1);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_63);
    Instrument_63.insert(UnderlyingPriceDeterminationMethod_63.getString());
    FIX::UnitOfMeasure UnitOfMeasure_63("STRING_Bu");
    noRelatedSym_0_1.set(UnitOfMeasure_63);
    Instrument_63.insert(UnitOfMeasure_63.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_63;
    UnitOfMeasureQty_63.setString("5464350");
    noRelatedSym_0_1.set(UnitOfMeasureQty_63);
    Instrument_63.insert(UnitOfMeasureQty_63.getString());
    FIX::ValuationMethod ValuationMethod_63("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_63);
    Instrument_63.insert(ValuationMethod_63.getString());
    all_values.push_back(Instrument_63);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_121;
      FIX::ComplexEventCondition ComplexEventCondition_121(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_121);
      ComplexEvents_NoComplexEvents_121.insert(ComplexEventCondition_121.getString());
      FIX::ComplexEventPrice ComplexEventPrice_121;
      ComplexEventPrice_121.setString("17190979");
      noComplexEvents_1_1_0.set(ComplexEventPrice_121);
      ComplexEvents_NoComplexEvents_121.insert(ComplexEventPrice_121.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_121(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_121);
      ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceBoundaryMethod_121.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_121;
      ComplexEventPriceBoundaryPrecision_121.setString("64.930000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_121);
      ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceBoundaryPrecision_121.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_121(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_121);
      ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceTimeType_121.getString());
      FIX::ComplexEventType ComplexEventType_121(2);
      noComplexEvents_1_1_0.set(ComplexEventType_121);
      ComplexEvents_NoComplexEvents_121.insert(ComplexEventType_121.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_121;
      ComplexOptPayoutAmount_121.setString("11798560");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_121);
      ComplexEvents_NoComplexEvents_121.insert(ComplexOptPayoutAmount_121.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_121);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_249;
        FIX::ComplexEventEndDate ComplexEventEndDate_249(FIX::UTCTIMESTAMP(2, 0, 46, 11, 3, 2000));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_249);
        ComplexEventDates_NoComplexEventDates_249.insert(ComplexEventEndDate_249.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_249(FIX::UTCTIMESTAMP(7, 11, 35, 21, 11, 2003));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_249);
        ComplexEventDates_NoComplexEventDates_249.insert(ComplexEventStartDate_249.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_249);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_507;
          FIX::ComplexEventEndTime ComplexEventEndTime_507(FIX::UTCTIMEONLY(10, 30, 3));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_507);
          ComplexEventTimes_NoComplexEventTimes_507.insert(ComplexEventEndTime_507.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_507(FIX::UTCTIMEONLY(8, 18, 39));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_507);
          ComplexEventTimes_NoComplexEventTimes_507.insert(ComplexEventStartTime_507.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_507);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_508;
          FIX::ComplexEventEndTime ComplexEventEndTime_508(FIX::UTCTIMEONLY(2, 21, 30));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_508);
          ComplexEventTimes_NoComplexEventTimes_508.insert(ComplexEventEndTime_508.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_508(FIX::UTCTIMEONLY(1, 17, 14));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_508);
          ComplexEventTimes_NoComplexEventTimes_508.insert(ComplexEventStartTime_508.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_508);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_509;
          FIX::ComplexEventEndTime ComplexEventEndTime_509(FIX::UTCTIMEONLY(12, 6, 33));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_509);
          ComplexEventTimes_NoComplexEventTimes_509.insert(ComplexEventEndTime_509.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_509(FIX::UTCTIMEONLY(12, 28, 10));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_509);
          ComplexEventTimes_NoComplexEventTimes_509.insert(ComplexEventStartTime_509.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_509);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_250;
        FIX::ComplexEventEndDate ComplexEventEndDate_250(FIX::UTCTIMESTAMP(3, 38, 52, 9, 10, 2009));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_250);
        ComplexEventDates_NoComplexEventDates_250.insert(ComplexEventEndDate_250.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_250(FIX::UTCTIMESTAMP(7, 31, 28, 7, 4, 2015));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_250);
        ComplexEventDates_NoComplexEventDates_250.insert(ComplexEventStartDate_250.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_250);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_510;
          FIX::ComplexEventEndTime ComplexEventEndTime_510(FIX::UTCTIMEONLY(21, 23, 39));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_510);
          ComplexEventTimes_NoComplexEventTimes_510.insert(ComplexEventEndTime_510.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_510(FIX::UTCTIMEONLY(12, 49, 0));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_510);
          ComplexEventTimes_NoComplexEventTimes_510.insert(ComplexEventStartTime_510.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_510);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_511;
          FIX::ComplexEventEndTime ComplexEventEndTime_511(FIX::UTCTIMEONLY(1, 6, 21));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_511);
          ComplexEventTimes_NoComplexEventTimes_511.insert(ComplexEventEndTime_511.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_511(FIX::UTCTIMEONLY(10, 41, 7));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_511);
          ComplexEventTimes_NoComplexEventTimes_511.insert(ComplexEventStartTime_511.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_511);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_251;
        FIX::ComplexEventEndDate ComplexEventEndDate_251(FIX::UTCTIMESTAMP(12, 45, 50, 10, 11, 2010));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_251);
        ComplexEventDates_NoComplexEventDates_251.insert(ComplexEventEndDate_251.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_251(FIX::UTCTIMESTAMP(17, 23, 7, 16, 8, 2016));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_251);
        ComplexEventDates_NoComplexEventDates_251.insert(ComplexEventStartDate_251.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_251);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_512;
          FIX::ComplexEventEndTime ComplexEventEndTime_512(FIX::UTCTIMEONLY(0, 45, 47));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_512);
          ComplexEventTimes_NoComplexEventTimes_512.insert(ComplexEventEndTime_512.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_512(FIX::UTCTIMEONLY(1, 36, 30));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_512);
          ComplexEventTimes_NoComplexEventTimes_512.insert(ComplexEventStartTime_512.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_512);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_513;
          FIX::ComplexEventEndTime ComplexEventEndTime_513(FIX::UTCTIMEONLY(5, 36, 37));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventEndTime_513);
          ComplexEventTimes_NoComplexEventTimes_513.insert(ComplexEventEndTime_513.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_513(FIX::UTCTIMEONLY(14, 10, 45));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventStartTime_513);
          ComplexEventTimes_NoComplexEventTimes_513.insert(ComplexEventStartTime_513.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_513);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_122;
      FIX::ComplexEventCondition ComplexEventCondition_122(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_122);
      ComplexEvents_NoComplexEvents_122.insert(ComplexEventCondition_122.getString());
      FIX::ComplexEventPrice ComplexEventPrice_122;
      ComplexEventPrice_122.setString("21432681");
      noComplexEvents_1_1_1.set(ComplexEventPrice_122);
      ComplexEvents_NoComplexEvents_122.insert(ComplexEventPrice_122.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_122(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_122);
      ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceBoundaryMethod_122.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_122;
      ComplexEventPriceBoundaryPrecision_122.setString("31.470000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_122);
      ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceBoundaryPrecision_122.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_122(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_122);
      ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceTimeType_122.getString());
      FIX::ComplexEventType ComplexEventType_122(3);
      noComplexEvents_1_1_1.set(ComplexEventType_122);
      ComplexEvents_NoComplexEvents_122.insert(ComplexEventType_122.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_122;
      ComplexOptPayoutAmount_122.setString("1962815");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_122);
      ComplexEvents_NoComplexEvents_122.insert(ComplexOptPayoutAmount_122.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_122);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_252;
        FIX::ComplexEventEndDate ComplexEventEndDate_252(FIX::UTCTIMESTAMP(6, 23, 49, 9, 3, 2005));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_252);
        ComplexEventDates_NoComplexEventDates_252.insert(ComplexEventEndDate_252.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_252(FIX::UTCTIMESTAMP(14, 56, 1, 4, 10, 2005));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_252);
        ComplexEventDates_NoComplexEventDates_252.insert(ComplexEventStartDate_252.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_252);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_514;
          FIX::ComplexEventEndTime ComplexEventEndTime_514(FIX::UTCTIMEONLY(23, 58, 27));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_514);
          ComplexEventTimes_NoComplexEventTimes_514.insert(ComplexEventEndTime_514.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_514(FIX::UTCTIMEONLY(12, 29, 26));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_514);
          ComplexEventTimes_NoComplexEventTimes_514.insert(ComplexEventStartTime_514.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_514);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_253;
        FIX::ComplexEventEndDate ComplexEventEndDate_253(FIX::UTCTIMESTAMP(20, 48, 48, 25, 9, 2003));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_253);
        ComplexEventDates_NoComplexEventDates_253.insert(ComplexEventEndDate_253.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_253(FIX::UTCTIMESTAMP(13, 45, 53, 6, 4, 2011));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_253);
        ComplexEventDates_NoComplexEventDates_253.insert(ComplexEventStartDate_253.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_253);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_515;
          FIX::ComplexEventEndTime ComplexEventEndTime_515(FIX::UTCTIMEONLY(1, 53, 5));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_515);
          ComplexEventTimes_NoComplexEventTimes_515.insert(ComplexEventEndTime_515.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_515(FIX::UTCTIMEONLY(18, 35, 55));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_515);
          ComplexEventTimes_NoComplexEventTimes_515.insert(ComplexEventStartTime_515.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_515);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_516;
          FIX::ComplexEventEndTime ComplexEventEndTime_516(FIX::UTCTIMEONLY(14, 53, 26));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_516);
          ComplexEventTimes_NoComplexEventTimes_516.insert(ComplexEventEndTime_516.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_516(FIX::UTCTIMEONLY(17, 56, 45));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_516);
          ComplexEventTimes_NoComplexEventTimes_516.insert(ComplexEventStartTime_516.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_516);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_517;
          FIX::ComplexEventEndTime ComplexEventEndTime_517(FIX::UTCTIMEONLY(16, 33, 46));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_517);
          ComplexEventTimes_NoComplexEventTimes_517.insert(ComplexEventEndTime_517.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_517(FIX::UTCTIMEONLY(9, 17, 31));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_517);
          ComplexEventTimes_NoComplexEventTimes_517.insert(ComplexEventStartTime_517.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_517);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_121;
      FIX::EventDate EventDate_121("LOCALMKTDATE_664673643");
      noEvents_1_1_0.set(EventDate_121);
      EvntGrp_NoEvents_121.insert(EventDate_121.getString());
      FIX::EventPx EventPx_121;
      EventPx_121.setString("6238210");
      noEvents_1_1_0.set(EventPx_121);
      EvntGrp_NoEvents_121.insert(EventPx_121.getString());
      FIX::EventText EventText_121("STRING_363370508");
      noEvents_1_1_0.set(EventText_121);
      EvntGrp_NoEvents_121.insert(EventText_121.getString());
      FIX::EventTime EventTime_121(FIX::UTCTIMESTAMP(15, 13, 58, 16, 11, 2010));
      noEvents_1_1_0.set(EventTime_121);
      EvntGrp_NoEvents_121.insert(EventTime_121.getString());
      FIX::EventType EventType_121(6);
      noEvents_1_1_0.set(EventType_121);
      EvntGrp_NoEvents_121.insert(EventType_121.getString());
      all_values.push_back(EvntGrp_NoEvents_121);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_122;
      FIX::EventDate EventDate_122("LOCALMKTDATE_723756496");
      noEvents_1_1_1.set(EventDate_122);
      EvntGrp_NoEvents_122.insert(EventDate_122.getString());
      FIX::EventPx EventPx_122;
      EventPx_122.setString("18165995");
      noEvents_1_1_1.set(EventPx_122);
      EvntGrp_NoEvents_122.insert(EventPx_122.getString());
      FIX::EventText EventText_122("STRING_399795092");
      noEvents_1_1_1.set(EventText_122);
      EvntGrp_NoEvents_122.insert(EventText_122.getString());
      FIX::EventTime EventTime_122(FIX::UTCTIMESTAMP(1, 25, 42, 20, 12, 2014));
      noEvents_1_1_1.set(EventTime_122);
      EvntGrp_NoEvents_122.insert(EventTime_122.getString());
      FIX::EventType EventType_122(6);
      noEvents_1_1_1.set(EventType_122);
      EvntGrp_NoEvents_122.insert(EventType_122.getString());
      all_values.push_back(EvntGrp_NoEvents_122);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_123;
      FIX::EventDate EventDate_123("LOCALMKTDATE_1473863245");
      noEvents_1_1_2.set(EventDate_123);
      EvntGrp_NoEvents_123.insert(EventDate_123.getString());
      FIX::EventPx EventPx_123;
      EventPx_123.setString("18543439");
      noEvents_1_1_2.set(EventPx_123);
      EvntGrp_NoEvents_123.insert(EventPx_123.getString());
      FIX::EventText EventText_123("STRING_1378174410");
      noEvents_1_1_2.set(EventText_123);
      EvntGrp_NoEvents_123.insert(EventText_123.getString());
      FIX::EventTime EventTime_123(FIX::UTCTIMESTAMP(12, 31, 21, 0, 10, 2012));
      noEvents_1_1_2.set(EventTime_123);
      EvntGrp_NoEvents_123.insert(EventTime_123.getString());
      FIX::EventType EventType_123(5);
      noEvents_1_1_2.set(EventType_123);
      EvntGrp_NoEvents_123.insert(EventType_123.getString());
      all_values.push_back(EvntGrp_NoEvents_123);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_123;
      FIX::InstrumentPartyID InstrumentPartyID_123("STRING_642274990");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_123);
      InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyID_123.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_123('8');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_123);
      InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyIDSource_123.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_123(716293138);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_123);
      InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyRole_123.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_123);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258;
        FIX::InstrumentPartySubID InstrumentPartySubID_258("STRING_774419048");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_258);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258.insert(InstrumentPartySubID_258.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_258(1103718776);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_258);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258.insert(InstrumentPartySubIDType_258.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_124;
      FIX::InstrumentPartyID InstrumentPartyID_124("STRING_1388907905");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_124);
      InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyID_124.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_124('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_124);
      InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyIDSource_124.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_124(1827475272);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_124);
      InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyRole_124.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_124);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259;
        FIX::InstrumentPartySubID InstrumentPartySubID_259("STRING_92802498");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_259);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259.insert(InstrumentPartySubID_259.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_259(1427481507);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_259);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259.insert(InstrumentPartySubIDType_259.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260;
        FIX::InstrumentPartySubID InstrumentPartySubID_260("STRING_2042255669");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_260);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260.insert(InstrumentPartySubID_260.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_260(49593036);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_260);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260.insert(InstrumentPartySubIDType_260.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_125;
      FIX::InstrumentPartyID InstrumentPartyID_125("STRING_1638388389");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_125);
      InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyID_125.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_125('1');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_125);
      InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyIDSource_125.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_125(2118396071);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_125);
      InstrumentParties_NoInstrumentParties_125.insert(InstrumentPartyRole_125.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_125);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261;
        FIX::InstrumentPartySubID InstrumentPartySubID_261("STRING_1214745818");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_261);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261.insert(InstrumentPartySubID_261.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_261(1444775668);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_261);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261.insert(InstrumentPartySubIDType_261.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_137;
      FIX::SecurityAltID SecurityAltID_137("STRING_445436580");
      noSecurityAltID_1_1_0.set(SecurityAltID_137);
      SecAltIDGrp_NoSecurityAltID_137.insert(SecurityAltID_137.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_137("STRING_437649984");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_137);
      SecAltIDGrp_NoSecurityAltID_137.insert(SecurityAltIDSource_137.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_137);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_138;
      FIX::SecurityAltID SecurityAltID_138("STRING_10516374");
      noSecurityAltID_1_1_1.set(SecurityAltID_138);
      SecAltIDGrp_NoSecurityAltID_138.insert(SecurityAltID_138.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_138("STRING_923195311");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_138);
      SecAltIDGrp_NoSecurityAltID_138.insert(SecurityAltIDSource_138.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_138);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_139;
      FIX::SecurityAltID SecurityAltID_139("STRING_1702218766");
      noSecurityAltID_1_1_2.set(SecurityAltID_139);
      SecAltIDGrp_NoSecurityAltID_139.insert(SecurityAltID_139.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_139("STRING_1744230930");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_139);
      SecAltIDGrp_NoSecurityAltID_139.insert(SecurityAltIDSource_139.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_139);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_126;
    FIX::SecurityXML SecurityXML_127("XMLDATA_1705723456");
    noRelatedSym_0_1.set(SecurityXML_127);
    FIX::SecurityXMLLen SecurityXMLLen_63(1483977542);
    noRelatedSym_0_1.set(SecurityXMLLen_63);
    FIX::SecurityXMLSchema SecurityXMLSchema_63("STRING_1954282875");
    noRelatedSym_0_1.set(SecurityXMLSchema_63);
    SecurityXML_126.insert(SecurityXMLSchema_63.getString());
    all_values.push_back(SecurityXML_126);

    // OrderQtyData
    multiset<string> OrderQtyData_20;
    FIX::CashOrderQty CashOrderQty_20;
    CashOrderQty_20.setString("7041384");
    noRelatedSym_0_1.set(CashOrderQty_20);
    OrderQtyData_20.insert(CashOrderQty_20.getString());
    FIX::OrderPercent OrderPercent_20;
    OrderPercent_20.setString("25.330000");
    noRelatedSym_0_1.set(OrderPercent_20);
    OrderQtyData_20.insert(OrderPercent_20.getString());
    FIX::OrderQty OrderQty_28;
    OrderQty_28.setString("6678099");
    noRelatedSym_0_1.set(OrderQty_28);
    OrderQtyData_20.insert(OrderQty_28.getString());
    FIX::RoundingDirection RoundingDirection_20('2');
    noRelatedSym_0_1.set(RoundingDirection_20);
    OrderQtyData_20.insert(RoundingDirection_20.getString());
    FIX::RoundingModulus RoundingModulus_20;
    RoundingModulus_20.setString("15069721");
    noRelatedSym_0_1.set(RoundingModulus_20);
    OrderQtyData_20.insert(RoundingModulus_20.getString());
    all_values.push_back(OrderQtyData_20);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_112;
      FIX::PartyID PartyID_112("STRING_376666727");
      noPartyIDs_1_1_0.set(PartyID_112);
      Parties_NoPartyIDs_112.insert(PartyID_112.getString());
      FIX::PartyIDSource PartyIDSource_112('B');
      noPartyIDs_1_1_0.set(PartyIDSource_112);
      Parties_NoPartyIDs_112.insert(PartyIDSource_112.getString());
      FIX::PartyRole PartyRole_112(14);
      noPartyIDs_1_1_0.set(PartyRole_112);
      Parties_NoPartyIDs_112.insert(PartyRole_112.getString());
      all_values.push_back(Parties_NoPartyIDs_112);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_227;
        FIX::PartySubID PartySubID_227("STRING_1806420279");
        noPartySubIDs_1_0_2_0.set(PartySubID_227);
        PtysSubGrp_NoPartySubIDs_227.insert(PartySubID_227.getString());
        FIX::PartySubIDType PartySubIDType_227(9);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_227);
        PtysSubGrp_NoPartySubIDs_227.insert(PartySubIDType_227.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_227);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_5;
      FIX::QuoteQualifier QuoteQualifier_5('1');
      noQuoteQualifiers_1_1_0.set(QuoteQualifier_5);
      QuotQualGrp_NoQuoteQualifiers_5.insert(QuoteQualifier_5.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_5);

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_0);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_2;
      FIX::LegOrderQty LegOrderQty_13;
      LegOrderQty_13.setString("9750446");
      noLegs_1_1_0.set(LegOrderQty_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegOrderQty_13.getString());
      FIX::LegQty LegQty_13;
      LegQty_13.setString("8999620");
      noLegs_1_1_0.set(LegQty_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegQty_13.getString());
      FIX::LegRefID LegRefID_13("STRING_1248544367");
      noLegs_1_1_0.set(LegRefID_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegRefID_13.getString());
      FIX::LegSettlDate LegSettlDate_13("LOCALMKTDATE_1429707299");
      noLegs_1_1_0.set(LegSettlDate_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegSettlDate_13.getString());
      FIX::LegSettlType LegSettlType_13('2');
      noLegs_1_1_0.set(LegSettlType_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegSettlType_13.getString());
      FIX::LegSwapType LegSwapType_13(5);
      noLegs_1_1_0.set(LegSwapType_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegSwapType_13.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_2);

      // InstrumentLeg
      multiset<string> InstrumentLeg_96;
      FIX::EncodedLegIssuer EncodedLegIssuer_96("DATA_1591230349");
      noLegs_1_1_0.set(EncodedLegIssuer_96);
      InstrumentLeg_96.insert(EncodedLegIssuer_96.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_96(412660803);
      noLegs_1_1_0.set(EncodedLegIssuerLen_96);
      InstrumentLeg_96.insert(EncodedLegIssuerLen_96.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_96("DATA_983486372");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_96);
      InstrumentLeg_96.insert(EncodedLegSecurityDesc_96.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_96(1601746724);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_96);
      InstrumentLeg_96.insert(EncodedLegSecurityDescLen_96.getString());
      FIX::LegCFICode LegCFICode_96("STRING_1335856114");
      noLegs_1_1_0.set(LegCFICode_96);
      InstrumentLeg_96.insert(LegCFICode_96.getString());
      FIX::LegContractMultiplier LegContractMultiplier_96;
      LegContractMultiplier_96.setString("5382214");
      noLegs_1_1_0.set(LegContractMultiplier_96);
      InstrumentLeg_96.insert(LegContractMultiplier_96.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_96(1198494006);
      noLegs_1_1_0.set(LegContractMultiplierUnit_96);
      InstrumentLeg_96.insert(LegContractMultiplierUnit_96.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_96("MONTHYEAR_894095922");
      noLegs_1_1_0.set(LegContractSettlMonth_96);
      InstrumentLeg_96.insert(LegContractSettlMonth_96.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_96("COUNTRY_2022199032");
      noLegs_1_1_0.set(LegCountryOfIssue_96);
      InstrumentLeg_96.insert(LegCountryOfIssue_96.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_96("LOCALMKTDATE_1005293233");
      noLegs_1_1_0.set(LegCouponPaymentDate_96);
      InstrumentLeg_96.insert(LegCouponPaymentDate_96.getString());
      FIX::LegCouponRate LegCouponRate_96;
      LegCouponRate_96.setString("43.830000");
      noLegs_1_1_0.set(LegCouponRate_96);
      InstrumentLeg_96.insert(LegCouponRate_96.getString());
      FIX::LegCreditRating LegCreditRating_96("STRING_2000967917");
      noLegs_1_1_0.set(LegCreditRating_96);
      InstrumentLeg_96.insert(LegCreditRating_96.getString());
      FIX::LegCurrency LegCurrency_96("JPY");
      noLegs_1_1_0.set(LegCurrency_96);
      InstrumentLeg_96.insert(LegCurrency_96.getString());
      FIX::LegDatedDate LegDatedDate_96("LOCALMKTDATE_1360456463");
      noLegs_1_1_0.set(LegDatedDate_96);
      InstrumentLeg_96.insert(LegDatedDate_96.getString());
      FIX::LegExerciseStyle LegExerciseStyle_96(967848544);
      noLegs_1_1_0.set(LegExerciseStyle_96);
      InstrumentLeg_96.insert(LegExerciseStyle_96.getString());
      FIX::LegFactor LegFactor_96;
      LegFactor_96.setString("12478490");
      noLegs_1_1_0.set(LegFactor_96);
      InstrumentLeg_96.insert(LegFactor_96.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_96(2108852914);
      noLegs_1_1_0.set(LegFlowScheduleType_96);
      InstrumentLeg_96.insert(LegFlowScheduleType_96.getString());
      FIX::LegInstrRegistry LegInstrRegistry_96("STRING_2103084953");
      noLegs_1_1_0.set(LegInstrRegistry_96);
      InstrumentLeg_96.insert(LegInstrRegistry_96.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_96("LOCALMKTDATE_1304507412");
      noLegs_1_1_0.set(LegInterestAccrualDate_96);
      InstrumentLeg_96.insert(LegInterestAccrualDate_96.getString());
      FIX::LegIssueDate LegIssueDate_96("LOCALMKTDATE_1767789545");
      noLegs_1_1_0.set(LegIssueDate_96);
      InstrumentLeg_96.insert(LegIssueDate_96.getString());
      FIX::LegIssuer LegIssuer_96("STRING_1183640213");
      noLegs_1_1_0.set(LegIssuer_96);
      InstrumentLeg_96.insert(LegIssuer_96.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_96("STRING_641163622");
      noLegs_1_1_0.set(LegLocaleOfIssue_96);
      InstrumentLeg_96.insert(LegLocaleOfIssue_96.getString());
      FIX::LegMaturityDate LegMaturityDate_96("LOCALMKTDATE_1321498197");
      noLegs_1_1_0.set(LegMaturityDate_96);
      InstrumentLeg_96.insert(LegMaturityDate_96.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_96("MONTHYEAR_313788509");
      noLegs_1_1_0.set(LegMaturityMonthYear_96);
      InstrumentLeg_96.insert(LegMaturityMonthYear_96.getString());
      FIX::LegMaturityTime LegMaturityTime_96("TZTIMEONLY_1616208222");
      noLegs_1_1_0.set(LegMaturityTime_96);
      InstrumentLeg_96.insert(LegMaturityTime_96.getString());
      FIX::LegOptAttribute LegOptAttribute_96('7');
      noLegs_1_1_0.set(LegOptAttribute_96);
      InstrumentLeg_96.insert(LegOptAttribute_96.getString());
      FIX::LegOptionRatio LegOptionRatio_96;
      LegOptionRatio_96.setString("15623328");
      noLegs_1_1_0.set(LegOptionRatio_96);
      InstrumentLeg_96.insert(LegOptionRatio_96.getString());
      FIX::LegPool LegPool_96("STRING_898431874");
      noLegs_1_1_0.set(LegPool_96);
      InstrumentLeg_96.insert(LegPool_96.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_96("STRING_41200825");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_96);
      InstrumentLeg_96.insert(LegPriceUnitOfMeasure_96.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_96;
      LegPriceUnitOfMeasureQty_96.setString("21081692");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_96);
      InstrumentLeg_96.insert(LegPriceUnitOfMeasureQty_96.getString());
      FIX::LegProduct LegProduct_96(342178575);
      noLegs_1_1_0.set(LegProduct_96);
      InstrumentLeg_96.insert(LegProduct_96.getString());
      FIX::LegPutOrCall LegPutOrCall_96(453861628);
      noLegs_1_1_0.set(LegPutOrCall_96);
      InstrumentLeg_96.insert(LegPutOrCall_96.getString());
      FIX::LegRatioQty LegRatioQty_96;
      LegRatioQty_96.setString("9441719");
      noLegs_1_1_0.set(LegRatioQty_96);
      InstrumentLeg_96.insert(LegRatioQty_96.getString());
      FIX::LegRedemptionDate LegRedemptionDate_96("LOCALMKTDATE_1943925299");
      noLegs_1_1_0.set(LegRedemptionDate_96);
      InstrumentLeg_96.insert(LegRedemptionDate_96.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_96("STRING_1789717742");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_96);
      InstrumentLeg_96.insert(LegRepoCollateralSecurityType_96.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_96;
      LegRepurchaseRate_96.setString("34.780000");
      noLegs_1_1_0.set(LegRepurchaseRate_96);
      InstrumentLeg_96.insert(LegRepurchaseRate_96.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_96(994935658);
      noLegs_1_1_0.set(LegRepurchaseTerm_96);
      InstrumentLeg_96.insert(LegRepurchaseTerm_96.getString());
      FIX::LegSecurityDesc LegSecurityDesc_96("STRING_536330016");
      noLegs_1_1_0.set(LegSecurityDesc_96);
      InstrumentLeg_96.insert(LegSecurityDesc_96.getString());
      FIX::LegSecurityExchange LegSecurityExchange_96("EXCHANGE_1357108862");
      noLegs_1_1_0.set(LegSecurityExchange_96);
      InstrumentLeg_96.insert(LegSecurityExchange_96.getString());
      FIX::LegSecurityID LegSecurityID_96("STRING_2000228891");
      noLegs_1_1_0.set(LegSecurityID_96);
      InstrumentLeg_96.insert(LegSecurityID_96.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_96("STRING_2134564399");
      noLegs_1_1_0.set(LegSecurityIDSource_96);
      InstrumentLeg_96.insert(LegSecurityIDSource_96.getString());
      FIX::LegSecuritySubType LegSecuritySubType_96("STRING_1210593132");
      noLegs_1_1_0.set(LegSecuritySubType_96);
      InstrumentLeg_96.insert(LegSecuritySubType_96.getString());
      FIX::LegSecurityType LegSecurityType_96("STRING_1525848432");
      noLegs_1_1_0.set(LegSecurityType_96);
      InstrumentLeg_96.insert(LegSecurityType_96.getString());
      FIX::LegSide LegSide_96('8');
      noLegs_1_1_0.set(LegSide_96);
      InstrumentLeg_96.insert(LegSide_96.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_96("STRING_423565947");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_96);
      InstrumentLeg_96.insert(LegStateOrProvinceOfIssue_96.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_96("USD");
      noLegs_1_1_0.set(LegStrikeCurrency_96);
      InstrumentLeg_96.insert(LegStrikeCurrency_96.getString());
      FIX::LegStrikePrice LegStrikePrice_96;
      LegStrikePrice_96.setString("3849352");
      noLegs_1_1_0.set(LegStrikePrice_96);
      InstrumentLeg_96.insert(LegStrikePrice_96.getString());
      FIX::LegSymbol LegSymbol_96("STRING_301814633");
      noLegs_1_1_0.set(LegSymbol_96);
      InstrumentLeg_96.insert(LegSymbol_96.getString());
      FIX::LegSymbolSfx LegSymbolSfx_96("STRING_1263135910");
      noLegs_1_1_0.set(LegSymbolSfx_96);
      InstrumentLeg_96.insert(LegSymbolSfx_96.getString());
      FIX::LegTimeUnit LegTimeUnit_96("STRING_5241111");
      noLegs_1_1_0.set(LegTimeUnit_96);
      InstrumentLeg_96.insert(LegTimeUnit_96.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_96("STRING_1485454847");
      noLegs_1_1_0.set(LegUnitOfMeasure_96);
      InstrumentLeg_96.insert(LegUnitOfMeasure_96.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_96;
      LegUnitOfMeasureQty_96.setString("19042995");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_96);
      InstrumentLeg_96.insert(LegUnitOfMeasureQty_96.getString());
      all_values.push_back(InstrumentLeg_96);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_192;
        FIX::LegSecurityAltID LegSecurityAltID_192("STRING_1799243356");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_192);
        LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltID_192.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_192("STRING_1373024107");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_192);
        LegSecAltIDGrp_NoLegSecurityAltID_192.insert(LegSecurityAltIDSource_192.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_192);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_193;
        FIX::LegSecurityAltID LegSecurityAltID_193("STRING_1400715911");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_193);
        LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltID_193.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_193("STRING_1214092585");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_193);
        LegSecAltIDGrp_NoLegSecurityAltID_193.insert(LegSecurityAltIDSource_193.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_193);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_5;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_5("EUR");
      noLegs_1_1_0.set(LegBenchmarkCurveCurrency_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurveCurrency_5.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_5("STRING_1174778201");
      noLegs_1_1_0.set(LegBenchmarkCurveName_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurveName_5.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_5("STRING_466150909");
      noLegs_1_1_0.set(LegBenchmarkCurvePoint_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurvePoint_5.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_5;
      LegBenchmarkPrice_5.setString("18957783");
      noLegs_1_1_0.set(LegBenchmarkPrice_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkPrice_5.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_5(2118950189);
      noLegs_1_1_0.set(LegBenchmarkPriceType_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkPriceType_5.getString());
      all_values.push_back(LegBenchmarkCurveData_5);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_27;
        FIX::LegStipulationType LegStipulationType_27("STRING_1538012460");
        noLegStipulations_1_0_2_0.set(LegStipulationType_27);
        LegStipulations_NoLegStipulations_27.insert(LegStipulationType_27.getString());
        FIX::LegStipulationValue LegStipulationValue_27("STRING_1453860019");
        noLegStipulations_1_0_2_0.set(LegStipulationValue_27);
        LegStipulations_NoLegStipulations_27.insert(LegStipulationValue_27.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_27);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_28;
        FIX::LegStipulationType LegStipulationType_28("STRING_1257528218");
        noLegStipulations_1_0_2_1.set(LegStipulationType_28);
        LegStipulations_NoLegStipulations_28.insert(LegStipulationType_28.getString());
        FIX::LegStipulationValue LegStipulationValue_28("STRING_2074342476");
        noLegStipulations_1_0_2_1.set(LegStipulationValue_28);
        LegStipulations_NoLegStipulations_28.insert(LegStipulationValue_28.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_28);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_109;
        FIX::NestedPartyID NestedPartyID_109("STRING_1110273462");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyID_109.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_109('2');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyIDSource_109.getString());
        FIX::NestedPartyRole NestedPartyRole_109(1874078365);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyRole_109.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_109);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_218;
          FIX::NestedPartySubID NestedPartySubID_218("STRING_772202665");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_218);
          NstdPtysSubGrp_NoNestedPartySubIDs_218.insert(NestedPartySubID_218.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_218(150160665);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_218);
          NstdPtysSubGrp_NoNestedPartySubIDs_218.insert(NestedPartySubIDType_218.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_218);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_219;
          FIX::NestedPartySubID NestedPartySubID_219("STRING_834851574");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_219);
          NstdPtysSubGrp_NoNestedPartySubIDs_219.insert(NestedPartySubID_219.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_219(730831164);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_219);
          NstdPtysSubGrp_NoNestedPartySubIDs_219.insert(NestedPartySubIDType_219.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_219);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_110;
        FIX::NestedPartyID NestedPartyID_110("STRING_535095879");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyID_110.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_110('1');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyIDSource_110.getString());
        FIX::NestedPartyRole NestedPartyRole_110(1993967074);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyRole_110.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_110);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_220;
          FIX::NestedPartySubID NestedPartySubID_220("STRING_474637406");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_220);
          NstdPtysSubGrp_NoNestedPartySubIDs_220.insert(NestedPartySubID_220.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_220(1750782959);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_220);
          NstdPtysSubGrp_NoNestedPartySubIDs_220.insert(NestedPartySubIDType_220.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_220);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_1_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_3;
      FIX::LegOrderQty LegOrderQty_14;
      LegOrderQty_14.setString("18670762");
      noLegs_1_1_1.set(LegOrderQty_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegOrderQty_14.getString());
      FIX::LegQty LegQty_14;
      LegQty_14.setString("1263971");
      noLegs_1_1_1.set(LegQty_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegQty_14.getString());
      FIX::LegRefID LegRefID_14("STRING_976323419");
      noLegs_1_1_1.set(LegRefID_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegRefID_14.getString());
      FIX::LegSettlDate LegSettlDate_14("LOCALMKTDATE_1120308563");
      noLegs_1_1_1.set(LegSettlDate_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegSettlDate_14.getString());
      FIX::LegSettlType LegSettlType_14('1');
      noLegs_1_1_1.set(LegSettlType_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegSettlType_14.getString());
      FIX::LegSwapType LegSwapType_14(1);
      noLegs_1_1_1.set(LegSwapType_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegSwapType_14.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_3);

      // InstrumentLeg
      multiset<string> InstrumentLeg_97;
      FIX::EncodedLegIssuer EncodedLegIssuer_97("DATA_414741652");
      noLegs_1_1_1.set(EncodedLegIssuer_97);
      InstrumentLeg_97.insert(EncodedLegIssuer_97.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_97(367784253);
      noLegs_1_1_1.set(EncodedLegIssuerLen_97);
      InstrumentLeg_97.insert(EncodedLegIssuerLen_97.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_97("DATA_1566446661");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_97);
      InstrumentLeg_97.insert(EncodedLegSecurityDesc_97.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_97(163036369);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_97);
      InstrumentLeg_97.insert(EncodedLegSecurityDescLen_97.getString());
      FIX::LegCFICode LegCFICode_97("STRING_339250794");
      noLegs_1_1_1.set(LegCFICode_97);
      InstrumentLeg_97.insert(LegCFICode_97.getString());
      FIX::LegContractMultiplier LegContractMultiplier_97;
      LegContractMultiplier_97.setString("18290392");
      noLegs_1_1_1.set(LegContractMultiplier_97);
      InstrumentLeg_97.insert(LegContractMultiplier_97.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_97(1701048829);
      noLegs_1_1_1.set(LegContractMultiplierUnit_97);
      InstrumentLeg_97.insert(LegContractMultiplierUnit_97.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_97("MONTHYEAR_1793110813");
      noLegs_1_1_1.set(LegContractSettlMonth_97);
      InstrumentLeg_97.insert(LegContractSettlMonth_97.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_97("COUNTRY_939083792");
      noLegs_1_1_1.set(LegCountryOfIssue_97);
      InstrumentLeg_97.insert(LegCountryOfIssue_97.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_97("LOCALMKTDATE_1627907658");
      noLegs_1_1_1.set(LegCouponPaymentDate_97);
      InstrumentLeg_97.insert(LegCouponPaymentDate_97.getString());
      FIX::LegCouponRate LegCouponRate_97;
      LegCouponRate_97.setString("23.980000");
      noLegs_1_1_1.set(LegCouponRate_97);
      InstrumentLeg_97.insert(LegCouponRate_97.getString());
      FIX::LegCreditRating LegCreditRating_97("STRING_2049357254");
      noLegs_1_1_1.set(LegCreditRating_97);
      InstrumentLeg_97.insert(LegCreditRating_97.getString());
      FIX::LegCurrency LegCurrency_97("USD");
      noLegs_1_1_1.set(LegCurrency_97);
      InstrumentLeg_97.insert(LegCurrency_97.getString());
      FIX::LegDatedDate LegDatedDate_97("LOCALMKTDATE_390511852");
      noLegs_1_1_1.set(LegDatedDate_97);
      InstrumentLeg_97.insert(LegDatedDate_97.getString());
      FIX::LegExerciseStyle LegExerciseStyle_97(166566255);
      noLegs_1_1_1.set(LegExerciseStyle_97);
      InstrumentLeg_97.insert(LegExerciseStyle_97.getString());
      FIX::LegFactor LegFactor_97;
      LegFactor_97.setString("1858677");
      noLegs_1_1_1.set(LegFactor_97);
      InstrumentLeg_97.insert(LegFactor_97.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_97(1225363426);
      noLegs_1_1_1.set(LegFlowScheduleType_97);
      InstrumentLeg_97.insert(LegFlowScheduleType_97.getString());
      FIX::LegInstrRegistry LegInstrRegistry_97("STRING_897397419");
      noLegs_1_1_1.set(LegInstrRegistry_97);
      InstrumentLeg_97.insert(LegInstrRegistry_97.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_97("LOCALMKTDATE_720963660");
      noLegs_1_1_1.set(LegInterestAccrualDate_97);
      InstrumentLeg_97.insert(LegInterestAccrualDate_97.getString());
      FIX::LegIssueDate LegIssueDate_97("LOCALMKTDATE_214545986");
      noLegs_1_1_1.set(LegIssueDate_97);
      InstrumentLeg_97.insert(LegIssueDate_97.getString());
      FIX::LegIssuer LegIssuer_97("STRING_743880846");
      noLegs_1_1_1.set(LegIssuer_97);
      InstrumentLeg_97.insert(LegIssuer_97.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_97("STRING_1261300650");
      noLegs_1_1_1.set(LegLocaleOfIssue_97);
      InstrumentLeg_97.insert(LegLocaleOfIssue_97.getString());
      FIX::LegMaturityDate LegMaturityDate_97("LOCALMKTDATE_689183392");
      noLegs_1_1_1.set(LegMaturityDate_97);
      InstrumentLeg_97.insert(LegMaturityDate_97.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_97("MONTHYEAR_347180157");
      noLegs_1_1_1.set(LegMaturityMonthYear_97);
      InstrumentLeg_97.insert(LegMaturityMonthYear_97.getString());
      FIX::LegMaturityTime LegMaturityTime_97("TZTIMEONLY_980893302");
      noLegs_1_1_1.set(LegMaturityTime_97);
      InstrumentLeg_97.insert(LegMaturityTime_97.getString());
      FIX::LegOptAttribute LegOptAttribute_97('8');
      noLegs_1_1_1.set(LegOptAttribute_97);
      InstrumentLeg_97.insert(LegOptAttribute_97.getString());
      FIX::LegOptionRatio LegOptionRatio_97;
      LegOptionRatio_97.setString("13235035");
      noLegs_1_1_1.set(LegOptionRatio_97);
      InstrumentLeg_97.insert(LegOptionRatio_97.getString());
      FIX::LegPool LegPool_97("STRING_2101201865");
      noLegs_1_1_1.set(LegPool_97);
      InstrumentLeg_97.insert(LegPool_97.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_97("STRING_8586559");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_97);
      InstrumentLeg_97.insert(LegPriceUnitOfMeasure_97.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_97;
      LegPriceUnitOfMeasureQty_97.setString("2763156");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_97);
      InstrumentLeg_97.insert(LegPriceUnitOfMeasureQty_97.getString());
      FIX::LegProduct LegProduct_97(368459869);
      noLegs_1_1_1.set(LegProduct_97);
      InstrumentLeg_97.insert(LegProduct_97.getString());
      FIX::LegPutOrCall LegPutOrCall_97(376370812);
      noLegs_1_1_1.set(LegPutOrCall_97);
      InstrumentLeg_97.insert(LegPutOrCall_97.getString());
      FIX::LegRatioQty LegRatioQty_97;
      LegRatioQty_97.setString("18427623");
      noLegs_1_1_1.set(LegRatioQty_97);
      InstrumentLeg_97.insert(LegRatioQty_97.getString());
      FIX::LegRedemptionDate LegRedemptionDate_97("LOCALMKTDATE_531496238");
      noLegs_1_1_1.set(LegRedemptionDate_97);
      InstrumentLeg_97.insert(LegRedemptionDate_97.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_97("STRING_715621606");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_97);
      InstrumentLeg_97.insert(LegRepoCollateralSecurityType_97.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_97;
      LegRepurchaseRate_97.setString("79.160000");
      noLegs_1_1_1.set(LegRepurchaseRate_97);
      InstrumentLeg_97.insert(LegRepurchaseRate_97.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_97(85061420);
      noLegs_1_1_1.set(LegRepurchaseTerm_97);
      InstrumentLeg_97.insert(LegRepurchaseTerm_97.getString());
      FIX::LegSecurityDesc LegSecurityDesc_97("STRING_361248771");
      noLegs_1_1_1.set(LegSecurityDesc_97);
      InstrumentLeg_97.insert(LegSecurityDesc_97.getString());
      FIX::LegSecurityExchange LegSecurityExchange_97("EXCHANGE_315918061");
      noLegs_1_1_1.set(LegSecurityExchange_97);
      InstrumentLeg_97.insert(LegSecurityExchange_97.getString());
      FIX::LegSecurityID LegSecurityID_97("STRING_1712969078");
      noLegs_1_1_1.set(LegSecurityID_97);
      InstrumentLeg_97.insert(LegSecurityID_97.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_97("STRING_670361170");
      noLegs_1_1_1.set(LegSecurityIDSource_97);
      InstrumentLeg_97.insert(LegSecurityIDSource_97.getString());
      FIX::LegSecuritySubType LegSecuritySubType_97("STRING_217791667");
      noLegs_1_1_1.set(LegSecuritySubType_97);
      InstrumentLeg_97.insert(LegSecuritySubType_97.getString());
      FIX::LegSecurityType LegSecurityType_97("STRING_1107332668");
      noLegs_1_1_1.set(LegSecurityType_97);
      InstrumentLeg_97.insert(LegSecurityType_97.getString());
      FIX::LegSide LegSide_97('7');
      noLegs_1_1_1.set(LegSide_97);
      InstrumentLeg_97.insert(LegSide_97.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_97("STRING_608303520");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_97);
      InstrumentLeg_97.insert(LegStateOrProvinceOfIssue_97.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_97("EUR");
      noLegs_1_1_1.set(LegStrikeCurrency_97);
      InstrumentLeg_97.insert(LegStrikeCurrency_97.getString());
      FIX::LegStrikePrice LegStrikePrice_97;
      LegStrikePrice_97.setString("18336669");
      noLegs_1_1_1.set(LegStrikePrice_97);
      InstrumentLeg_97.insert(LegStrikePrice_97.getString());
      FIX::LegSymbol LegSymbol_97("STRING_23812695");
      noLegs_1_1_1.set(LegSymbol_97);
      InstrumentLeg_97.insert(LegSymbol_97.getString());
      FIX::LegSymbolSfx LegSymbolSfx_97("STRING_1612899727");
      noLegs_1_1_1.set(LegSymbolSfx_97);
      InstrumentLeg_97.insert(LegSymbolSfx_97.getString());
      FIX::LegTimeUnit LegTimeUnit_97("STRING_2048212932");
      noLegs_1_1_1.set(LegTimeUnit_97);
      InstrumentLeg_97.insert(LegTimeUnit_97.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_97("STRING_767693541");
      noLegs_1_1_1.set(LegUnitOfMeasure_97);
      InstrumentLeg_97.insert(LegUnitOfMeasure_97.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_97;
      LegUnitOfMeasureQty_97.setString("7267167");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_97);
      InstrumentLeg_97.insert(LegUnitOfMeasureQty_97.getString());
      all_values.push_back(InstrumentLeg_97);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_194;
        FIX::LegSecurityAltID LegSecurityAltID_194("STRING_1114873698");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_194);
        LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltID_194.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_194("STRING_1707610031");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_194);
        LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltIDSource_194.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_194);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_6;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_6("EUR");
      noLegs_1_1_1.set(LegBenchmarkCurveCurrency_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurveCurrency_6.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_6("STRING_1661328248");
      noLegs_1_1_1.set(LegBenchmarkCurveName_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurveName_6.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_6("STRING_1414079744");
      noLegs_1_1_1.set(LegBenchmarkCurvePoint_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurvePoint_6.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_6;
      LegBenchmarkPrice_6.setString("5672093");
      noLegs_1_1_1.set(LegBenchmarkPrice_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkPrice_6.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_6(2029788117);
      noLegs_1_1_1.set(LegBenchmarkPriceType_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkPriceType_6.getString());
      all_values.push_back(LegBenchmarkCurveData_6);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_29;
        FIX::LegStipulationType LegStipulationType_29("STRING_262488002");
        noLegStipulations_1_1_2_0.set(LegStipulationType_29);
        LegStipulations_NoLegStipulations_29.insert(LegStipulationType_29.getString());
        FIX::LegStipulationValue LegStipulationValue_29("STRING_413800708");
        noLegStipulations_1_1_2_0.set(LegStipulationValue_29);
        LegStipulations_NoLegStipulations_29.insert(LegStipulationValue_29.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_29);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_111;
        FIX::NestedPartyID NestedPartyID_111("STRING_1786805919");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyID_111.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_111('4');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyIDSource_111.getString());
        FIX::NestedPartyRole NestedPartyRole_111(719837286);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyRole_111.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_111);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_221;
          FIX::NestedPartySubID NestedPartySubID_221("STRING_64347558");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_221);
          NstdPtysSubGrp_NoNestedPartySubIDs_221.insert(NestedPartySubID_221.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_221(1390198456);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_221);
          NstdPtysSubGrp_NoNestedPartySubIDs_221.insert(NestedPartySubIDType_221.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_221);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_222;
          FIX::NestedPartySubID NestedPartySubID_222("STRING_173031999");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_222);
          NstdPtysSubGrp_NoNestedPartySubIDs_222.insert(NestedPartySubID_222.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_222(1171680226);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_222);
          NstdPtysSubGrp_NoNestedPartySubIDs_222.insert(NestedPartySubIDType_222.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_222);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_1_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_4;
      FIX::LegOrderQty LegOrderQty_15;
      LegOrderQty_15.setString("20962667");
      noLegs_1_1_2.set(LegOrderQty_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegOrderQty_15.getString());
      FIX::LegQty LegQty_15;
      LegQty_15.setString("7813355");
      noLegs_1_1_2.set(LegQty_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegQty_15.getString());
      FIX::LegRefID LegRefID_15("STRING_298095501");
      noLegs_1_1_2.set(LegRefID_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegRefID_15.getString());
      FIX::LegSettlDate LegSettlDate_15("LOCALMKTDATE_840719161");
      noLegs_1_1_2.set(LegSettlDate_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegSettlDate_15.getString());
      FIX::LegSettlType LegSettlType_15('4');
      noLegs_1_1_2.set(LegSettlType_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegSettlType_15.getString());
      FIX::LegSwapType LegSwapType_15(1);
      noLegs_1_1_2.set(LegSwapType_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegSwapType_15.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_4);

      // InstrumentLeg
      multiset<string> InstrumentLeg_98;
      FIX::EncodedLegIssuer EncodedLegIssuer_98("DATA_306135240");
      noLegs_1_1_2.set(EncodedLegIssuer_98);
      InstrumentLeg_98.insert(EncodedLegIssuer_98.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_98(368248102);
      noLegs_1_1_2.set(EncodedLegIssuerLen_98);
      InstrumentLeg_98.insert(EncodedLegIssuerLen_98.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_98("DATA_1089601737");
      noLegs_1_1_2.set(EncodedLegSecurityDesc_98);
      InstrumentLeg_98.insert(EncodedLegSecurityDesc_98.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_98(1032851970);
      noLegs_1_1_2.set(EncodedLegSecurityDescLen_98);
      InstrumentLeg_98.insert(EncodedLegSecurityDescLen_98.getString());
      FIX::LegCFICode LegCFICode_98("STRING_958160779");
      noLegs_1_1_2.set(LegCFICode_98);
      InstrumentLeg_98.insert(LegCFICode_98.getString());
      FIX::LegContractMultiplier LegContractMultiplier_98;
      LegContractMultiplier_98.setString("569917");
      noLegs_1_1_2.set(LegContractMultiplier_98);
      InstrumentLeg_98.insert(LegContractMultiplier_98.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_98(592978353);
      noLegs_1_1_2.set(LegContractMultiplierUnit_98);
      InstrumentLeg_98.insert(LegContractMultiplierUnit_98.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_98("MONTHYEAR_216170316");
      noLegs_1_1_2.set(LegContractSettlMonth_98);
      InstrumentLeg_98.insert(LegContractSettlMonth_98.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_98("COUNTRY_347885415");
      noLegs_1_1_2.set(LegCountryOfIssue_98);
      InstrumentLeg_98.insert(LegCountryOfIssue_98.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_98("LOCALMKTDATE_106822954");
      noLegs_1_1_2.set(LegCouponPaymentDate_98);
      InstrumentLeg_98.insert(LegCouponPaymentDate_98.getString());
      FIX::LegCouponRate LegCouponRate_98;
      LegCouponRate_98.setString("0.600000");
      noLegs_1_1_2.set(LegCouponRate_98);
      InstrumentLeg_98.insert(LegCouponRate_98.getString());
      FIX::LegCreditRating LegCreditRating_98("STRING_915094723");
      noLegs_1_1_2.set(LegCreditRating_98);
      InstrumentLeg_98.insert(LegCreditRating_98.getString());
      FIX::LegCurrency LegCurrency_98("USD");
      noLegs_1_1_2.set(LegCurrency_98);
      InstrumentLeg_98.insert(LegCurrency_98.getString());
      FIX::LegDatedDate LegDatedDate_98("LOCALMKTDATE_1177582725");
      noLegs_1_1_2.set(LegDatedDate_98);
      InstrumentLeg_98.insert(LegDatedDate_98.getString());
      FIX::LegExerciseStyle LegExerciseStyle_98(402928131);
      noLegs_1_1_2.set(LegExerciseStyle_98);
      InstrumentLeg_98.insert(LegExerciseStyle_98.getString());
      FIX::LegFactor LegFactor_98;
      LegFactor_98.setString("16318054");
      noLegs_1_1_2.set(LegFactor_98);
      InstrumentLeg_98.insert(LegFactor_98.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_98(816904996);
      noLegs_1_1_2.set(LegFlowScheduleType_98);
      InstrumentLeg_98.insert(LegFlowScheduleType_98.getString());
      FIX::LegInstrRegistry LegInstrRegistry_98("STRING_901790259");
      noLegs_1_1_2.set(LegInstrRegistry_98);
      InstrumentLeg_98.insert(LegInstrRegistry_98.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_98("LOCALMKTDATE_204159122");
      noLegs_1_1_2.set(LegInterestAccrualDate_98);
      InstrumentLeg_98.insert(LegInterestAccrualDate_98.getString());
      FIX::LegIssueDate LegIssueDate_98("LOCALMKTDATE_772145328");
      noLegs_1_1_2.set(LegIssueDate_98);
      InstrumentLeg_98.insert(LegIssueDate_98.getString());
      FIX::LegIssuer LegIssuer_98("STRING_966137817");
      noLegs_1_1_2.set(LegIssuer_98);
      InstrumentLeg_98.insert(LegIssuer_98.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_98("STRING_1594357578");
      noLegs_1_1_2.set(LegLocaleOfIssue_98);
      InstrumentLeg_98.insert(LegLocaleOfIssue_98.getString());
      FIX::LegMaturityDate LegMaturityDate_98("LOCALMKTDATE_945177328");
      noLegs_1_1_2.set(LegMaturityDate_98);
      InstrumentLeg_98.insert(LegMaturityDate_98.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_98("MONTHYEAR_2137818043");
      noLegs_1_1_2.set(LegMaturityMonthYear_98);
      InstrumentLeg_98.insert(LegMaturityMonthYear_98.getString());
      FIX::LegMaturityTime LegMaturityTime_98("TZTIMEONLY_1543140673");
      noLegs_1_1_2.set(LegMaturityTime_98);
      InstrumentLeg_98.insert(LegMaturityTime_98.getString());
      FIX::LegOptAttribute LegOptAttribute_98('1');
      noLegs_1_1_2.set(LegOptAttribute_98);
      InstrumentLeg_98.insert(LegOptAttribute_98.getString());
      FIX::LegOptionRatio LegOptionRatio_98;
      LegOptionRatio_98.setString("2884298");
      noLegs_1_1_2.set(LegOptionRatio_98);
      InstrumentLeg_98.insert(LegOptionRatio_98.getString());
      FIX::LegPool LegPool_98("STRING_236376186");
      noLegs_1_1_2.set(LegPool_98);
      InstrumentLeg_98.insert(LegPool_98.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_98("STRING_46548017");
      noLegs_1_1_2.set(LegPriceUnitOfMeasure_98);
      InstrumentLeg_98.insert(LegPriceUnitOfMeasure_98.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_98;
      LegPriceUnitOfMeasureQty_98.setString("6103380");
      noLegs_1_1_2.set(LegPriceUnitOfMeasureQty_98);
      InstrumentLeg_98.insert(LegPriceUnitOfMeasureQty_98.getString());
      FIX::LegProduct LegProduct_98(542511427);
      noLegs_1_1_2.set(LegProduct_98);
      InstrumentLeg_98.insert(LegProduct_98.getString());
      FIX::LegPutOrCall LegPutOrCall_98(414796120);
      noLegs_1_1_2.set(LegPutOrCall_98);
      InstrumentLeg_98.insert(LegPutOrCall_98.getString());
      FIX::LegRatioQty LegRatioQty_98;
      LegRatioQty_98.setString("16999398");
      noLegs_1_1_2.set(LegRatioQty_98);
      InstrumentLeg_98.insert(LegRatioQty_98.getString());
      FIX::LegRedemptionDate LegRedemptionDate_98("LOCALMKTDATE_1575363397");
      noLegs_1_1_2.set(LegRedemptionDate_98);
      InstrumentLeg_98.insert(LegRedemptionDate_98.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_98("STRING_1372956899");
      noLegs_1_1_2.set(LegRepoCollateralSecurityType_98);
      InstrumentLeg_98.insert(LegRepoCollateralSecurityType_98.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_98;
      LegRepurchaseRate_98.setString("16.190000");
      noLegs_1_1_2.set(LegRepurchaseRate_98);
      InstrumentLeg_98.insert(LegRepurchaseRate_98.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_98(20858102);
      noLegs_1_1_2.set(LegRepurchaseTerm_98);
      InstrumentLeg_98.insert(LegRepurchaseTerm_98.getString());
      FIX::LegSecurityDesc LegSecurityDesc_98("STRING_1589127215");
      noLegs_1_1_2.set(LegSecurityDesc_98);
      InstrumentLeg_98.insert(LegSecurityDesc_98.getString());
      FIX::LegSecurityExchange LegSecurityExchange_98("EXCHANGE_2104817034");
      noLegs_1_1_2.set(LegSecurityExchange_98);
      InstrumentLeg_98.insert(LegSecurityExchange_98.getString());
      FIX::LegSecurityID LegSecurityID_98("STRING_127681056");
      noLegs_1_1_2.set(LegSecurityID_98);
      InstrumentLeg_98.insert(LegSecurityID_98.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_98("STRING_1071893627");
      noLegs_1_1_2.set(LegSecurityIDSource_98);
      InstrumentLeg_98.insert(LegSecurityIDSource_98.getString());
      FIX::LegSecuritySubType LegSecuritySubType_98("STRING_872428109");
      noLegs_1_1_2.set(LegSecuritySubType_98);
      InstrumentLeg_98.insert(LegSecuritySubType_98.getString());
      FIX::LegSecurityType LegSecurityType_98("STRING_116808480");
      noLegs_1_1_2.set(LegSecurityType_98);
      InstrumentLeg_98.insert(LegSecurityType_98.getString());
      FIX::LegSide LegSide_98('1');
      noLegs_1_1_2.set(LegSide_98);
      InstrumentLeg_98.insert(LegSide_98.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_98("STRING_2050010834");
      noLegs_1_1_2.set(LegStateOrProvinceOfIssue_98);
      InstrumentLeg_98.insert(LegStateOrProvinceOfIssue_98.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_98("EUR");
      noLegs_1_1_2.set(LegStrikeCurrency_98);
      InstrumentLeg_98.insert(LegStrikeCurrency_98.getString());
      FIX::LegStrikePrice LegStrikePrice_98;
      LegStrikePrice_98.setString("7194321");
      noLegs_1_1_2.set(LegStrikePrice_98);
      InstrumentLeg_98.insert(LegStrikePrice_98.getString());
      FIX::LegSymbol LegSymbol_98("STRING_1421526871");
      noLegs_1_1_2.set(LegSymbol_98);
      InstrumentLeg_98.insert(LegSymbol_98.getString());
      FIX::LegSymbolSfx LegSymbolSfx_98("STRING_2033591553");
      noLegs_1_1_2.set(LegSymbolSfx_98);
      InstrumentLeg_98.insert(LegSymbolSfx_98.getString());
      FIX::LegTimeUnit LegTimeUnit_98("STRING_1491577511");
      noLegs_1_1_2.set(LegTimeUnit_98);
      InstrumentLeg_98.insert(LegTimeUnit_98.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_98("STRING_240181040");
      noLegs_1_1_2.set(LegUnitOfMeasure_98);
      InstrumentLeg_98.insert(LegUnitOfMeasure_98.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_98;
      LegUnitOfMeasureQty_98.setString("14804654");
      noLegs_1_1_2.set(LegUnitOfMeasureQty_98);
      InstrumentLeg_98.insert(LegUnitOfMeasureQty_98.getString());
      all_values.push_back(InstrumentLeg_98);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_195;
        FIX::LegSecurityAltID LegSecurityAltID_195("STRING_230515436");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltID_195);
        LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltID_195.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_195("STRING_876122509");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltIDSource_195);
        LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltIDSource_195.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_195);

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_196;
        FIX::LegSecurityAltID LegSecurityAltID_196("STRING_2015784039");
        noLegSecurityAltID_1_2_2_1.set(LegSecurityAltID_196);
        LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltID_196.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_196("STRING_518945333");
        noLegSecurityAltID_1_2_2_1.set(LegSecurityAltIDSource_196);
        LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltIDSource_196.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_196);

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_7;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_7("GBP");
      noLegs_1_1_2.set(LegBenchmarkCurveCurrency_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurveCurrency_7.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_7("STRING_1129283426");
      noLegs_1_1_2.set(LegBenchmarkCurveName_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurveName_7.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_7("STRING_1655010122");
      noLegs_1_1_2.set(LegBenchmarkCurvePoint_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurvePoint_7.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_7;
      LegBenchmarkPrice_7.setString("3296445");
      noLegs_1_1_2.set(LegBenchmarkPrice_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkPrice_7.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_7(681739609);
      noLegs_1_1_2.set(LegBenchmarkPriceType_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkPriceType_7.getString());
      all_values.push_back(LegBenchmarkCurveData_7);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_30;
        FIX::LegStipulationType LegStipulationType_30("STRING_1702601428");
        noLegStipulations_1_2_2_0.set(LegStipulationType_30);
        LegStipulations_NoLegStipulations_30.insert(LegStipulationType_30.getString());
        FIX::LegStipulationValue LegStipulationValue_30("STRING_291187580");
        noLegStipulations_1_2_2_0.set(LegStipulationValue_30);
        LegStipulations_NoLegStipulations_30.insert(LegStipulationValue_30.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_30);

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_31;
        FIX::LegStipulationType LegStipulationType_31("STRING_1103747974");
        noLegStipulations_1_2_2_1.set(LegStipulationType_31);
        LegStipulations_NoLegStipulations_31.insert(LegStipulationType_31.getString());
        FIX::LegStipulationValue LegStipulationValue_31("STRING_1144244995");
        noLegStipulations_1_2_2_1.set(LegStipulationValue_31);
        LegStipulations_NoLegStipulations_31.insert(LegStipulationValue_31.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_31);

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_112;
        FIX::NestedPartyID NestedPartyID_112("STRING_1231429030");
        noNestedPartyIDs_1_2_2_0.set(NestedPartyID_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyID_112.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_112('6');
        noNestedPartyIDs_1_2_2_0.set(NestedPartyIDSource_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyIDSource_112.getString());
        FIX::NestedPartyRole NestedPartyRole_112(1120949075);
        noNestedPartyIDs_1_2_2_0.set(NestedPartyRole_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyRole_112.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_112);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_223;
          FIX::NestedPartySubID NestedPartySubID_223("STRING_266281923");
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubID_223);
          NstdPtysSubGrp_NoNestedPartySubIDs_223.insert(NestedPartySubID_223.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_223(1023476262);
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubIDType_223);
          NstdPtysSubGrp_NoNestedPartySubIDs_223.insert(NestedPartySubIDType_223.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_223);

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_224;
          FIX::NestedPartySubID NestedPartySubID_224("STRING_1867974122");
          noNestedPartySubIDs_1_2_0_3_1.set(NestedPartySubID_224);
          NstdPtysSubGrp_NoNestedPartySubIDs_224.insert(NestedPartySubID_224.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_224(2095714354);
          noNestedPartySubIDs_1_2_0_3_1.set(NestedPartySubIDType_224);
          NstdPtysSubGrp_NoNestedPartySubIDs_224.insert(NestedPartySubIDType_224.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_224);

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_1);
        }
        noLegs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_1_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_19;
      FIX::RateSource RateSource_30(1);
      noRateSources_1_1_0.set(RateSource_30);
      RateSource_NoRateSources_19.insert(RateSource_30.getString());
      FIX::RateSourceType RateSourceType_19(0);
      noRateSources_1_1_0.set(RateSourceType_19);
      RateSource_NoRateSources_19.insert(RateSourceType_19.getString());
      FIX::ReferencePage ReferencePage_19("STRING_1087002308");
      noRateSources_1_1_0.set(ReferencePage_19);
      RateSource_NoRateSources_19.insert(ReferencePage_19.getString());
      all_values.push_back(RateSource_NoRateSources_19);

      noRelatedSym_0_1.addGroup(noRateSources_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_1_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_20;
      FIX::RateSource RateSource_31(1);
      noRateSources_1_1_1.set(RateSource_31);
      RateSource_NoRateSources_20.insert(RateSource_31.getString());
      FIX::RateSourceType RateSourceType_20(0);
      noRateSources_1_1_1.set(RateSourceType_20);
      RateSource_NoRateSources_20.insert(RateSourceType_20.getString());
      FIX::ReferencePage ReferencePage_20("STRING_1376273500");
      noRateSources_1_1_1.set(ReferencePage_20);
      RateSource_NoRateSources_20.insert(ReferencePage_20.getString());
      all_values.push_back(RateSource_NoRateSources_20);

      noRelatedSym_0_1.addGroup(noRateSources_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_1_1_2;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_21;
      FIX::RateSource RateSource_32(1);
      noRateSources_1_1_2.set(RateSource_32);
      RateSource_NoRateSources_21.insert(RateSource_32.getString());
      FIX::RateSourceType RateSourceType_21(1);
      noRateSources_1_1_2.set(RateSourceType_21);
      RateSource_NoRateSources_21.insert(RateSourceType_21.getString());
      FIX::ReferencePage ReferencePage_21("STRING_1244573891");
      noRateSources_1_1_2.set(ReferencePage_21);
      RateSource_NoRateSources_21.insert(ReferencePage_21.getString());
      all_values.push_back(RateSource_NoRateSources_21);

      noRelatedSym_0_1.addGroup(noRateSources_1_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_23;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_23("USD");
    noRelatedSym_0_1.set(BenchmarkCurveCurrency_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurveCurrency_23.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_23("STRING_Treasury");
    noRelatedSym_0_1.set(BenchmarkCurveName_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurveName_23.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_23("STRING_1113458933");
    noRelatedSym_0_1.set(BenchmarkCurvePoint_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurvePoint_23.getString());
    FIX::BenchmarkPrice BenchmarkPrice_23;
    BenchmarkPrice_23.setString("6634681");
    noRelatedSym_0_1.set(BenchmarkPrice_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkPrice_23.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_23(1489066828);
    noRelatedSym_0_1.set(BenchmarkPriceType_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkPriceType_23.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_23("STRING_1795198542");
    noRelatedSym_0_1.set(BenchmarkSecurityID_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkSecurityID_23.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_23("STRING_1746357998");
    noRelatedSym_0_1.set(BenchmarkSecurityIDSource_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkSecurityIDSource_23.getString());
    FIX::Spread Spread_23;
    Spread_23.setString("10441846");
    noRelatedSym_0_1.set(Spread_23);
    SpreadOrBenchmarkCurveData_23.insert(Spread_23.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_23);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_32;
      FIX::StipulationType StipulationType_32("STRING_COUPON");
      noStipulations_1_1_0.set(StipulationType_32);
      Stipulations_NoStipulations_32.insert(StipulationType_32.getString());
      FIX::StipulationValue StipulationValue_32("STRING_40945955");
      noStipulations_1_1_0.set(StipulationValue_32);
      Stipulations_NoStipulations_32.insert(StipulationValue_32.getString());
      all_values.push_back(Stipulations_NoStipulations_32);

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_94;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_94("DATA_1934051355");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingIssuer_94.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_94(109600930);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingIssuerLen_94.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_94("DATA_1308372517");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingSecurityDesc_94.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_94(1134805217);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingSecurityDescLen_94.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_94;
      UnderlyingAdjustedQuantity_94.setString("3758828");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_94);
      UnderlyingInstrument_94.insert(UnderlyingAdjustedQuantity_94.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_94;
      UnderlyingAllocationPercent_94.setString("51.310000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_94);
      UnderlyingInstrument_94.insert(UnderlyingAllocationPercent_94.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_94;
      UnderlyingAttachmentPoint_94.setString("56.910000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_94);
      UnderlyingInstrument_94.insert(UnderlyingAttachmentPoint_94.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_94("STRING_324113560");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_94);
      UnderlyingInstrument_94.insert(UnderlyingCFICode_94.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_94("STRING_1927273576");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_94);
      UnderlyingInstrument_94.insert(UnderlyingCPProgram_94.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_94("STRING_1997313036");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_94);
      UnderlyingInstrument_94.insert(UnderlyingCPRegType_94.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_94;
      UnderlyingCapValue_94.setString("1584521");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_94);
      UnderlyingInstrument_94.insert(UnderlyingCapValue_94.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_94;
      UnderlyingCashAmount_94.setString("8667922");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_94);
      UnderlyingInstrument_94.insert(UnderlyingCashAmount_94.getString());
      FIX::UnderlyingCashType UnderlyingCashType_94("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_94);
      UnderlyingInstrument_94.insert(UnderlyingCashType_94.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_94;
      UnderlyingContractMultiplier_94.setString("14732562");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_94);
      UnderlyingInstrument_94.insert(UnderlyingContractMultiplier_94.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_94(95582088);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_94);
      UnderlyingInstrument_94.insert(UnderlyingContractMultiplierUnit_94.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_94("COUNTRY_697257947");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingCountryOfIssue_94.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_94("LOCALMKTDATE_1516699225");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_94);
      UnderlyingInstrument_94.insert(UnderlyingCouponPaymentDate_94.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_94;
      UnderlyingCouponRate_94.setString("59.790000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_94);
      UnderlyingInstrument_94.insert(UnderlyingCouponRate_94.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_94("STRING_681433454");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_94);
      UnderlyingInstrument_94.insert(UnderlyingCreditRating_94.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_94("CHF");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_94);
      UnderlyingInstrument_94.insert(UnderlyingCurrency_94.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_94;
      UnderlyingCurrentValue_94.setString("17948923");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_94);
      UnderlyingInstrument_94.insert(UnderlyingCurrentValue_94.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_94;
      UnderlyingDetachmentPoint_94.setString("53.560000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_94);
      UnderlyingInstrument_94.insert(UnderlyingDetachmentPoint_94.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_94;
      UnderlyingDirtyPrice_94.setString("18411614");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_94);
      UnderlyingInstrument_94.insert(UnderlyingDirtyPrice_94.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_94;
      UnderlyingEndPrice_94.setString("14426072");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_94);
      UnderlyingInstrument_94.insert(UnderlyingEndPrice_94.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_94;
      UnderlyingEndValue_94.setString("7874997");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_94);
      UnderlyingInstrument_94.insert(UnderlyingEndValue_94.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_94(737862419);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_94);
      UnderlyingInstrument_94.insert(UnderlyingExerciseStyle_94.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_94;
      UnderlyingFXRate_94.setString("13815097");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_94);
      UnderlyingInstrument_94.insert(UnderlyingFXRate_94.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_94('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_94);
      UnderlyingInstrument_94.insert(UnderlyingFXRateCalc_94.getString());
      FIX::UnderlyingFactor UnderlyingFactor_94;
      UnderlyingFactor_94.setString("7788083");
      noUnderlyings_1_1_0.set(UnderlyingFactor_94);
      UnderlyingInstrument_94.insert(UnderlyingFactor_94.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_94(1568933198);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_94);
      UnderlyingInstrument_94.insert(UnderlyingFlowScheduleType_94.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_94("STRING_1276689738");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_94);
      UnderlyingInstrument_94.insert(UnderlyingInstrRegistry_94.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_94("LOCALMKTDATE_888409305");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_94);
      UnderlyingInstrument_94.insert(UnderlyingIssueDate_94.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_94("STRING_729822067");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_94);
      UnderlyingInstrument_94.insert(UnderlyingIssuer_94.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_94("STRING_264011308");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingLocaleOfIssue_94.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_94("LOCALMKTDATE_1264292158");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityDate_94.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_94("MONTHYEAR_914187198");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityMonthYear_94.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_94("TZTIMEONLY_1119306999");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityTime_94.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_94;
      UnderlyingNotionalPercentageOutstanding_94.setString("57.180000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_94);
      UnderlyingInstrument_94.insert(UnderlyingNotionalPercentageOutstanding_94.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_94('6');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_94);
      UnderlyingInstrument_94.insert(UnderlyingOptAttribute_94.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_94;
      UnderlyingOriginalNotionalPercentageOutstanding_94.setString("63.880000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_94);
      UnderlyingInstrument_94.insert(UnderlyingOriginalNotionalPercentageOutstanding_94.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_94("STRING_1746857890");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_94);
      UnderlyingInstrument_94.insert(UnderlyingPriceUnitOfMeasure_94.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_94;
      UnderlyingPriceUnitOfMeasureQty_94.setString("15607693");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_94);
      UnderlyingInstrument_94.insert(UnderlyingPriceUnitOfMeasureQty_94.getString());
      FIX::UnderlyingProduct UnderlyingProduct_94(53680514);
      noUnderlyings_1_1_0.set(UnderlyingProduct_94);
      UnderlyingInstrument_94.insert(UnderlyingProduct_94.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_94(1072630510);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_94);
      UnderlyingInstrument_94.insert(UnderlyingPutOrCall_94.getString());
      FIX::UnderlyingPx UnderlyingPx_94;
      UnderlyingPx_94.setString("16563514");
      noUnderlyings_1_1_0.set(UnderlyingPx_94);
      UnderlyingInstrument_94.insert(UnderlyingPx_94.getString());
      FIX::UnderlyingQty UnderlyingQty_94;
      UnderlyingQty_94.setString("7509384");
      noUnderlyings_1_1_0.set(UnderlyingQty_94);
      UnderlyingInstrument_94.insert(UnderlyingQty_94.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_94("LOCALMKTDATE_441846087");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_94);
      UnderlyingInstrument_94.insert(UnderlyingRedemptionDate_94.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_94("STRING_849023782");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_94);
      UnderlyingInstrument_94.insert(UnderlyingRepoCollateralSecurityType_94.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_94;
      UnderlyingRepurchaseRate_94.setString("19.150000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_94);
      UnderlyingInstrument_94.insert(UnderlyingRepurchaseRate_94.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_94(967003317);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_94);
      UnderlyingInstrument_94.insert(UnderlyingRepurchaseTerm_94.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_94("STRING_1201118413");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_94);
      UnderlyingInstrument_94.insert(UnderlyingRestructuringType_94.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_94("STRING_1079780654");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityDesc_94.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_94("EXCHANGE_8145025");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityExchange_94.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_94("STRING_894796224");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityID_94.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_94("STRING_374904288");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityIDSource_94.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_94("STRING_795644732");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_94);
      UnderlyingInstrument_94.insert(UnderlyingSecuritySubType_94.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_94("STRING_1632658643");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityType_94.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_94("STRING_1756414044");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_94);
      UnderlyingInstrument_94.insert(UnderlyingSeniority_94.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_94("STRING_138283116");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_94);
      UnderlyingInstrument_94.insert(UnderlyingSettlMethod_94.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_94(5);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_94);
      UnderlyingInstrument_94.insert(UnderlyingSettlementType_94.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_94;
      UnderlyingStartValue_94.setString("11778635");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_94);
      UnderlyingInstrument_94.insert(UnderlyingStartValue_94.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_94("STRING_1414972854");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingStateOrProvinceOfIssue_94.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_94("EUR");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_94);
      UnderlyingInstrument_94.insert(UnderlyingStrikeCurrency_94.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_94;
      UnderlyingStrikePrice_94.setString("16789841");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_94);
      UnderlyingInstrument_94.insert(UnderlyingStrikePrice_94.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_94("STRING_269201185");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_94);
      UnderlyingInstrument_94.insert(UnderlyingSymbol_94.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_94("STRING_674389211");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_94);
      UnderlyingInstrument_94.insert(UnderlyingSymbolSfx_94.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_94("STRING_650807514");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_94);
      UnderlyingInstrument_94.insert(UnderlyingTimeUnit_94.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_94("STRING_1857606904");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_94);
      UnderlyingInstrument_94.insert(UnderlyingUnitOfMeasure_94.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_94;
      UnderlyingUnitOfMeasureQty_94.setString("13683663");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_94);
      UnderlyingInstrument_94.insert(UnderlyingUnitOfMeasureQty_94.getString());
      all_values.push_back(UnderlyingInstrument_94);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_196;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_196("STRING_1456981146");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltID_196.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_196("STRING_781652052");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltIDSource_196.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_197;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_197("STRING_1673624416");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltID_197.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_197("STRING_382128009");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltIDSource_197.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_198;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_198("STRING_290519855");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltID_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltID_198.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_198("STRING_277079229");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltIDSource_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltIDSource_198.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_182;
        FIX::UnderlyingStipType UnderlyingStipType_182("STRING_1139543637");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_182);
        UnderlyingStipulations_NoUnderlyingStips_182.insert(UnderlyingStipType_182.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_182("STRING_1709451145");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_182);
        UnderlyingStipulations_NoUnderlyingStips_182.insert(UnderlyingStipValue_182.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_182);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_185;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_185("STRING_193178403");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyID_185.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_185('6');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyIDSource_185.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_185(1799122439);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyRole_185.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_185);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_372("STRING_1016652439");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_372);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372.insert(UnderlyingInstrumentPartySubID_372.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_372(447283523);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_372);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372.insert(UnderlyingInstrumentPartySubIDType_372.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_95;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_95("DATA_573149623");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingIssuer_95.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_95(625582836);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingIssuerLen_95.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_95("DATA_585566639");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingSecurityDesc_95.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_95(837132993);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingSecurityDescLen_95.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_95;
      UnderlyingAdjustedQuantity_95.setString("18034464");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_95);
      UnderlyingInstrument_95.insert(UnderlyingAdjustedQuantity_95.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_95;
      UnderlyingAllocationPercent_95.setString("94.940000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_95);
      UnderlyingInstrument_95.insert(UnderlyingAllocationPercent_95.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_95;
      UnderlyingAttachmentPoint_95.setString("56.680000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_95);
      UnderlyingInstrument_95.insert(UnderlyingAttachmentPoint_95.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_95("STRING_1563648444");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_95);
      UnderlyingInstrument_95.insert(UnderlyingCFICode_95.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_95("STRING_1532040008");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_95);
      UnderlyingInstrument_95.insert(UnderlyingCPProgram_95.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_95("STRING_111243205");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_95);
      UnderlyingInstrument_95.insert(UnderlyingCPRegType_95.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_95;
      UnderlyingCapValue_95.setString("905540");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_95);
      UnderlyingInstrument_95.insert(UnderlyingCapValue_95.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_95;
      UnderlyingCashAmount_95.setString("353638");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_95);
      UnderlyingInstrument_95.insert(UnderlyingCashAmount_95.getString());
      FIX::UnderlyingCashType UnderlyingCashType_95("STRING_DIFF");
      noUnderlyings_1_1_1.set(UnderlyingCashType_95);
      UnderlyingInstrument_95.insert(UnderlyingCashType_95.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_95;
      UnderlyingContractMultiplier_95.setString("14589203");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_95);
      UnderlyingInstrument_95.insert(UnderlyingContractMultiplier_95.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_95(1655307776);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_95);
      UnderlyingInstrument_95.insert(UnderlyingContractMultiplierUnit_95.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_95("COUNTRY_1278347608");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingCountryOfIssue_95.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_95("LOCALMKTDATE_93088749");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_95);
      UnderlyingInstrument_95.insert(UnderlyingCouponPaymentDate_95.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_95;
      UnderlyingCouponRate_95.setString("85.440000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_95);
      UnderlyingInstrument_95.insert(UnderlyingCouponRate_95.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_95("STRING_1660475617");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_95);
      UnderlyingInstrument_95.insert(UnderlyingCreditRating_95.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_95("GBP");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_95);
      UnderlyingInstrument_95.insert(UnderlyingCurrency_95.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_95;
      UnderlyingCurrentValue_95.setString("3369660");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_95);
      UnderlyingInstrument_95.insert(UnderlyingCurrentValue_95.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_95;
      UnderlyingDetachmentPoint_95.setString("22.410000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_95);
      UnderlyingInstrument_95.insert(UnderlyingDetachmentPoint_95.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_95;
      UnderlyingDirtyPrice_95.setString("10204952");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_95);
      UnderlyingInstrument_95.insert(UnderlyingDirtyPrice_95.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_95;
      UnderlyingEndPrice_95.setString("21279434");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_95);
      UnderlyingInstrument_95.insert(UnderlyingEndPrice_95.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_95;
      UnderlyingEndValue_95.setString("17163306");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_95);
      UnderlyingInstrument_95.insert(UnderlyingEndValue_95.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_95(1662243422);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_95);
      UnderlyingInstrument_95.insert(UnderlyingExerciseStyle_95.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_95;
      UnderlyingFXRate_95.setString("17795822");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_95);
      UnderlyingInstrument_95.insert(UnderlyingFXRate_95.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_95('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_95);
      UnderlyingInstrument_95.insert(UnderlyingFXRateCalc_95.getString());
      FIX::UnderlyingFactor UnderlyingFactor_95;
      UnderlyingFactor_95.setString("5314122");
      noUnderlyings_1_1_1.set(UnderlyingFactor_95);
      UnderlyingInstrument_95.insert(UnderlyingFactor_95.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_95(79382145);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_95);
      UnderlyingInstrument_95.insert(UnderlyingFlowScheduleType_95.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_95("STRING_1229971247");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_95);
      UnderlyingInstrument_95.insert(UnderlyingInstrRegistry_95.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_95("LOCALMKTDATE_1156995050");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_95);
      UnderlyingInstrument_95.insert(UnderlyingIssueDate_95.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_95("STRING_664948785");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_95);
      UnderlyingInstrument_95.insert(UnderlyingIssuer_95.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_95("STRING_2067104240");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingLocaleOfIssue_95.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_95("LOCALMKTDATE_812957832");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityDate_95.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_95("MONTHYEAR_518004631");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityMonthYear_95.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_95("TZTIMEONLY_1909146260");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityTime_95.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_95;
      UnderlyingNotionalPercentageOutstanding_95.setString("26.280000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_95);
      UnderlyingInstrument_95.insert(UnderlyingNotionalPercentageOutstanding_95.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_95('2');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_95);
      UnderlyingInstrument_95.insert(UnderlyingOptAttribute_95.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_95;
      UnderlyingOriginalNotionalPercentageOutstanding_95.setString("94.650000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_95);
      UnderlyingInstrument_95.insert(UnderlyingOriginalNotionalPercentageOutstanding_95.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_95("STRING_319676636");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_95);
      UnderlyingInstrument_95.insert(UnderlyingPriceUnitOfMeasure_95.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_95;
      UnderlyingPriceUnitOfMeasureQty_95.setString("20854085");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_95);
      UnderlyingInstrument_95.insert(UnderlyingPriceUnitOfMeasureQty_95.getString());
      FIX::UnderlyingProduct UnderlyingProduct_95(1841755927);
      noUnderlyings_1_1_1.set(UnderlyingProduct_95);
      UnderlyingInstrument_95.insert(UnderlyingProduct_95.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_95(1778596981);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_95);
      UnderlyingInstrument_95.insert(UnderlyingPutOrCall_95.getString());
      FIX::UnderlyingPx UnderlyingPx_95;
      UnderlyingPx_95.setString("15932326");
      noUnderlyings_1_1_1.set(UnderlyingPx_95);
      UnderlyingInstrument_95.insert(UnderlyingPx_95.getString());
      FIX::UnderlyingQty UnderlyingQty_95;
      UnderlyingQty_95.setString("9726198");
      noUnderlyings_1_1_1.set(UnderlyingQty_95);
      UnderlyingInstrument_95.insert(UnderlyingQty_95.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_95("LOCALMKTDATE_1871685730");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_95);
      UnderlyingInstrument_95.insert(UnderlyingRedemptionDate_95.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_95("STRING_627197539");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_95);
      UnderlyingInstrument_95.insert(UnderlyingRepoCollateralSecurityType_95.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_95;
      UnderlyingRepurchaseRate_95.setString("18.560000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_95);
      UnderlyingInstrument_95.insert(UnderlyingRepurchaseRate_95.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_95(107810686);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_95);
      UnderlyingInstrument_95.insert(UnderlyingRepurchaseTerm_95.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_95("STRING_2085725313");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_95);
      UnderlyingInstrument_95.insert(UnderlyingRestructuringType_95.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_95("STRING_822577921");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityDesc_95.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_95("EXCHANGE_1630962927");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityExchange_95.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_95("STRING_958736936");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityID_95.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_95("STRING_803037752");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityIDSource_95.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_95("STRING_1199809924");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_95);
      UnderlyingInstrument_95.insert(UnderlyingSecuritySubType_95.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_95("STRING_473496710");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityType_95.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_95("STRING_435136374");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_95);
      UnderlyingInstrument_95.insert(UnderlyingSeniority_95.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_95("STRING_1856631548");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_95);
      UnderlyingInstrument_95.insert(UnderlyingSettlMethod_95.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_95(4);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_95);
      UnderlyingInstrument_95.insert(UnderlyingSettlementType_95.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_95;
      UnderlyingStartValue_95.setString("5145185");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_95);
      UnderlyingInstrument_95.insert(UnderlyingStartValue_95.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_95("STRING_939119147");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingStateOrProvinceOfIssue_95.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_95("EUR");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_95);
      UnderlyingInstrument_95.insert(UnderlyingStrikeCurrency_95.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_95;
      UnderlyingStrikePrice_95.setString("8587397");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_95);
      UnderlyingInstrument_95.insert(UnderlyingStrikePrice_95.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_95("STRING_827378159");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_95);
      UnderlyingInstrument_95.insert(UnderlyingSymbol_95.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_95("STRING_1697471936");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_95);
      UnderlyingInstrument_95.insert(UnderlyingSymbolSfx_95.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_95("STRING_620402351");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_95);
      UnderlyingInstrument_95.insert(UnderlyingTimeUnit_95.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_95("STRING_1056500787");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_95);
      UnderlyingInstrument_95.insert(UnderlyingUnitOfMeasure_95.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_95;
      UnderlyingUnitOfMeasureQty_95.setString("16000329");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_95);
      UnderlyingInstrument_95.insert(UnderlyingUnitOfMeasureQty_95.getString());
      all_values.push_back(UnderlyingInstrument_95);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_199;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_199("STRING_1376177423");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltID_199.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_199("STRING_1537957793");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltIDSource_199.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_183;
        FIX::UnderlyingStipType UnderlyingStipType_183("STRING_1007290756");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_183);
        UnderlyingStipulations_NoUnderlyingStips_183.insert(UnderlyingStipType_183.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_183("STRING_983706788");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_183);
        UnderlyingStipulations_NoUnderlyingStips_183.insert(UnderlyingStipValue_183.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_183);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_184;
        FIX::UnderlyingStipType UnderlyingStipType_184("STRING_1160200334");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_184);
        UnderlyingStipulations_NoUnderlyingStips_184.insert(UnderlyingStipType_184.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_184("STRING_731492838");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_184);
        UnderlyingStipulations_NoUnderlyingStips_184.insert(UnderlyingStipValue_184.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_184);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_185;
        FIX::UnderlyingStipType UnderlyingStipType_185("STRING_1610904327");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipType_185);
        UnderlyingStipulations_NoUnderlyingStips_185.insert(UnderlyingStipType_185.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_185("STRING_1645812190");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipValue_185);
        UnderlyingStipulations_NoUnderlyingStips_185.insert(UnderlyingStipValue_185.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_185);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_186;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_186("STRING_1549145992");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyID_186.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_186('3');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyIDSource_186.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_186(322782804);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyRole_186.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_186);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_373("STRING_1123944216");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_373);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373.insert(UnderlyingInstrumentPartySubID_373.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_373(1522592728);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_373);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373.insert(UnderlyingInstrumentPartySubIDType_373.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_374("STRING_833895990");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_374);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374.insert(UnderlyingInstrumentPartySubID_374.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_374(1559080591);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_374);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374.insert(UnderlyingInstrumentPartySubIDType_374.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_187;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_187("STRING_1231740628");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyID_187.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_187('1');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyIDSource_187.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_187(2073599111);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyRole_187.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_187);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_375("STRING_1853225241");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_375);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375.insert(UnderlyingInstrumentPartySubID_375.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_375(1105582768);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_375);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375.insert(UnderlyingInstrumentPartySubIDType_375.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_376("STRING_882115866");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_376);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376.insert(UnderlyingInstrumentPartySubID_376.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_376(533119752);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_376);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376.insert(UnderlyingInstrumentPartySubIDType_376.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    // YieldData
    multiset<string> YieldData_18;
    FIX::Yield Yield_18;
    Yield_18.setString("10.560000");
    noRelatedSym_0_1.set(Yield_18);
    YieldData_18.insert(Yield_18.getString());
    FIX::YieldCalcDate YieldCalcDate_18("LOCALMKTDATE_1502518217");
    noRelatedSym_0_1.set(YieldCalcDate_18);
    YieldData_18.insert(YieldCalcDate_18.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_18("LOCALMKTDATE_1589620540");
    noRelatedSym_0_1.set(YieldRedemptionDate_18);
    YieldData_18.insert(YieldRedemptionDate_18.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_18;
    YieldRedemptionPrice_18.setString("1081203");
    noRelatedSym_0_1.set(YieldRedemptionPrice_18);
    YieldData_18.insert(YieldRedemptionPrice_18.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_18(1995826385);
    noRelatedSym_0_1.set(YieldRedemptionPriceType_18);
    YieldData_18.insert(YieldRedemptionPriceType_18.getString());
    FIX::YieldType YieldType_18("STRING_AVGMATURITY");
    noRelatedSym_0_1.set(YieldType_18);
    YieldData_18.insert(YieldType_18.getString());
    all_values.push_back(YieldData_18);

    msg.addGroup(noRelatedSym_0_1);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_7;
    FIX::RootPartyID RootPartyID_7("STRING_35923185");
    noRootPartyIDs_0_0.set(RootPartyID_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyID_7.getString());
    FIX::RootPartyIDSource RootPartyIDSource_7('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyIDSource_7.getString());
    FIX::RootPartyRole RootPartyRole_7(482301269);
    noRootPartyIDs_0_0.set(RootPartyRole_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyRole_7.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_7);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_17;
      FIX::RootPartySubID RootPartySubID_17("STRING_409614262");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_17);
      RootSubParties_NoRootPartySubIDs_17.insert(RootPartySubID_17.getString());
      FIX::RootPartySubIDType RootPartySubIDType_17(2093205596);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_17);
      RootSubParties_NoRootPartySubIDs_17.insert(RootPartySubIDType_17.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_17);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_18;
      FIX::RootPartySubID RootPartySubID_18("STRING_694452062");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_18);
      RootSubParties_NoRootPartySubIDs_18.insert(RootPartySubID_18.getString());
      FIX::RootPartySubIDType RootPartySubIDType_18(1248917787);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_18);
      RootSubParties_NoRootPartySubIDs_18.insert(RootPartySubIDType_18.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_18);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_19;
      FIX::RootPartySubID RootPartySubID_19("STRING_1494867940");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_19);
      RootSubParties_NoRootPartySubIDs_19.insert(RootPartySubID_19.getString());
      FIX::RootPartySubIDType RootPartySubIDType_19(1015358526);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_19);
      RootSubParties_NoRootPartySubIDs_19.insert(RootPartySubIDType_19.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_19);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteRequest::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_8;
    FIX::RootPartyID RootPartyID_8("STRING_1571700591");
    noRootPartyIDs_0_1.set(RootPartyID_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyID_8.getString());
    FIX::RootPartyIDSource RootPartyIDSource_8('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyIDSource_8.getString());
    FIX::RootPartyRole RootPartyRole_8(2139302742);
    noRootPartyIDs_0_1.set(RootPartyRole_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyRole_8.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_8);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_20;
      FIX::RootPartySubID RootPartySubID_20("STRING_541679562");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_20);
      RootSubParties_NoRootPartySubIDs_20.insert(RootPartySubID_20.getString());
      FIX::RootPartySubIDType RootPartySubIDType_20(1550899685);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_20);
      RootSubParties_NoRootPartySubIDs_20.insert(RootPartySubIDType_20.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_20);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_21;
      FIX::RootPartySubID RootPartySubID_21("STRING_31066651");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_21);
      RootSubParties_NoRootPartySubIDs_21.insert(RootPartySubID_21.getString());
      FIX::RootPartySubIDType RootPartySubIDType_21(233000829);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_21);
      RootSubParties_NoRootPartySubIDs_21.insert(RootPartySubIDType_21.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_21);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_22;
      FIX::RootPartySubID RootPartySubID_22("STRING_1477015148");
      noRootPartySubIDs_1_1_2.set(RootPartySubID_22);
      RootSubParties_NoRootPartySubIDs_22.insert(RootPartySubID_22.getString());
      FIX::RootPartySubIDType RootPartySubIDType_22(54442778);
      noRootPartySubIDs_1_1_2.set(RootPartySubIDType_22);
      RootSubParties_NoRootPartySubIDs_22.insert(RootPartySubIDType_22.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_22);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteRequest::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_9;
    FIX::RootPartyID RootPartyID_9("STRING_2086226071");
    noRootPartyIDs_0_2.set(RootPartyID_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyID_9.getString());
    FIX::RootPartyIDSource RootPartyIDSource_9('4');
    noRootPartyIDs_0_2.set(RootPartyIDSource_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyIDSource_9.getString());
    FIX::RootPartyRole RootPartyRole_9(936558644);
    noRootPartyIDs_0_2.set(RootPartyRole_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyRole_9.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_9);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_23;
      FIX::RootPartySubID RootPartySubID_23("STRING_1090685324");
      noRootPartySubIDs_2_1_0.set(RootPartySubID_23);
      RootSubParties_NoRootPartySubIDs_23.insert(RootPartySubID_23.getString());
      FIX::RootPartySubIDType RootPartySubIDType_23(291593213);
      noRootPartySubIDs_2_1_0.set(RootPartySubIDType_23);
      RootSubParties_NoRootPartySubIDs_23.insert(RootPartySubIDType_23.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_23);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_24;
      FIX::RootPartySubID RootPartySubID_24("STRING_2061482715");
      noRootPartySubIDs_2_1_1.set(RootPartySubID_24);
      RootSubParties_NoRootPartySubIDs_24.insert(RootPartySubID_24.getString());
      FIX::RootPartySubIDType RootPartySubIDType_24(1198805660);
      noRootPartySubIDs_2_1_1.set(RootPartySubIDType_24);
      RootSubParties_NoRootPartySubIDs_24.insert(RootPartySubIDType_24.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_24);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_25;
      FIX::RootPartySubID RootPartySubID_25("STRING_139935950");
      noRootPartySubIDs_2_1_2.set(RootPartySubID_25);
      RootSubParties_NoRootPartySubIDs_25.insert(RootPartySubID_25.getString());
      FIX::RootPartySubIDType RootPartySubIDType_25(732313383);
      noRootPartySubIDs_2_1_2.set(RootPartySubIDType_25);
      RootSubParties_NoRootPartySubIDs_25.insert(RootPartySubIDType_25.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_25);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_2);
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
