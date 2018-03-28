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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteRequest msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteRequest_0;
  FIX::BookingType BookingType_25(2);
  msg.set(BookingType_25);
  QuoteRequest_0.insert(BookingType_25.getString());
  FIX::ClOrdID ClOrdID_41("STRING_1164369561");
  msg.set(ClOrdID_41);
  QuoteRequest_0.insert(ClOrdID_41.getString());
  FIX::EncodedText EncodedText_69("DATA_555891462");
  msg.set(EncodedText_69);
  QuoteRequest_0.insert(EncodedText_69.getString());
  FIX::EncodedTextLen EncodedTextLen_69(2101376754);
  msg.set(EncodedTextLen_69);
  QuoteRequest_0.insert(EncodedTextLen_69.getString());
  FIX::OrderCapacity OrderCapacity_27('I');
  msg.set(OrderCapacity_27);
  QuoteRequest_0.insert(OrderCapacity_27.getString());
  FIX::OrderRestrictions OrderRestrictions_25("MULTIPLECHARVALUE_2");
  msg.set(OrderRestrictions_25);
  QuoteRequest_0.insert(OrderRestrictions_25.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_10(true);
  msg.set(PreTradeAnonymity_10);
  QuoteRequest_0.insert(PreTradeAnonymity_10.getString());
  FIX::PrivateQuote PrivateQuote_1(false);
  msg.set(PrivateQuote_1);
  QuoteRequest_0.insert(PrivateQuote_1.getString());
  FIX::QuoteReqID QuoteReqID_4("STRING_635556787");
  msg.set(QuoteReqID_4);
  QuoteRequest_0.insert(QuoteReqID_4.getString());
  FIX::RFQReqID RFQReqID_0("STRING_1490857281");
  msg.set(RFQReqID_0);
  QuoteRequest_0.insert(RFQReqID_0.getString());
  FIX::RespondentType RespondentType_0(3);
  msg.set(RespondentType_0);
  QuoteRequest_0.insert(RespondentType_0.getString());
  FIX::Text Text_69("STRING_920002647");
  msg.set(Text_69);
  QuoteRequest_0.insert(Text_69.getString());
  all_values.push_back(QuoteRequest_0);

  // QuotReqGrp
  // Group QuotReqGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_0;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_0;
    FIX::Account Account_29("STRING_278615798");
    noRelatedSym_0_0.set(Account_29);
    QuotReqGrp_NoRelatedSym_0.insert(Account_29.getString());
    FIX::AccountType AccountType_26(3);
    noRelatedSym_0_0.set(AccountType_26);
    QuotReqGrp_NoRelatedSym_0.insert(AccountType_26.getString());
    FIX::AcctIDSource AcctIDSource_22(2);
    noRelatedSym_0_0.set(AcctIDSource_22);
    QuotReqGrp_NoRelatedSym_0.insert(AcctIDSource_22.getString());
    FIX::Currency Currency_51("CHF");
    noRelatedSym_0_0.set(Currency_51);
    QuotReqGrp_NoRelatedSym_0.insert(Currency_51.getString());
    FIX::ExpireTime ExpireTime_13(FIX::UTCTIMESTAMP(17, 57, 35, 24, 2, 2013));
    noRelatedSym_0_0.set(ExpireTime_13);
    QuotReqGrp_NoRelatedSym_0.insert(ExpireTime_13.getString());
    FIX::MinQty MinQty_12;
    MinQty_12.setString("19068318");
    noRelatedSym_0_0.set(MinQty_12);
    QuotReqGrp_NoRelatedSym_0.insert(MinQty_12.getString());
    FIX::OrdType OrdType_39('B');
    noRelatedSym_0_0.set(OrdType_39);
    QuotReqGrp_NoRelatedSym_0.insert(OrdType_39.getString());
    FIX::OrderQty2 OrderQty2_17;
    OrderQty2_17.setString("6906051");
    noRelatedSym_0_0.set(OrderQty2_17);
    QuotReqGrp_NoRelatedSym_0.insert(OrderQty2_17.getString());
    FIX::PrevClosePx PrevClosePx_8;
    PrevClosePx_8.setString("5131703");
    noRelatedSym_0_0.set(PrevClosePx_8);
    QuotReqGrp_NoRelatedSym_0.insert(PrevClosePx_8.getString());
    FIX::Price Price_18;
    Price_18.setString("4939712");
    noRelatedSym_0_0.set(Price_18);
    QuotReqGrp_NoRelatedSym_0.insert(Price_18.getString());
    FIX::Price2 Price2_4;
    Price2_4.setString("19635661");
    noRelatedSym_0_0.set(Price2_4);
    QuotReqGrp_NoRelatedSym_0.insert(Price2_4.getString());
    FIX::PriceType PriceType_30(9);
    noRelatedSym_0_0.set(PriceType_30);
    QuotReqGrp_NoRelatedSym_0.insert(PriceType_30.getString());
    FIX::QtyType QtyType_22(2);
    noRelatedSym_0_0.set(QtyType_22);
    QuotReqGrp_NoRelatedSym_0.insert(QtyType_22.getString());
    FIX::QuotePriceType QuotePriceType_0(7);
    noRelatedSym_0_0.set(QuotePriceType_0);
    QuotReqGrp_NoRelatedSym_0.insert(QuotePriceType_0.getString());
    FIX::QuoteRequestType QuoteRequestType_0(1);
    noRelatedSym_0_0.set(QuoteRequestType_0);
    QuotReqGrp_NoRelatedSym_0.insert(QuoteRequestType_0.getString());
    FIX::QuoteType QuoteType_6(3);
    noRelatedSym_0_0.set(QuoteType_6);
    QuotReqGrp_NoRelatedSym_0.insert(QuoteType_6.getString());
    FIX::SettlCurrency SettlCurrency_23("EUR");
    noRelatedSym_0_0.set(SettlCurrency_23);
    QuotReqGrp_NoRelatedSym_0.insert(SettlCurrency_23.getString());
    FIX::SettlDate SettlDate_37("LOCALMKTDATE_648483056");
    noRelatedSym_0_0.set(SettlDate_37);
    QuotReqGrp_NoRelatedSym_0.insert(SettlDate_37.getString());
    FIX::SettlDate2 SettlDate2_17("LOCALMKTDATE_1467736955");
    noRelatedSym_0_0.set(SettlDate2_17);
    QuotReqGrp_NoRelatedSym_0.insert(SettlDate2_17.getString());
    FIX::SettlType SettlType_20("STRING_8");
    noRelatedSym_0_0.set(SettlType_20);
    QuotReqGrp_NoRelatedSym_0.insert(SettlType_20.getString());
    FIX::Side Side_35('3');
    noRelatedSym_0_0.set(Side_35);
    QuotReqGrp_NoRelatedSym_0.insert(Side_35.getString());
    FIX::TradeOriginationDate TradeOriginationDate_17("LOCALMKTDATE_240255954");
    noRelatedSym_0_0.set(TradeOriginationDate_17);
    QuotReqGrp_NoRelatedSym_0.insert(TradeOriginationDate_17.getString());
    FIX::TradingSessionID TradingSessionID_63("STRING_3");
    noRelatedSym_0_0.set(TradingSessionID_63);
    QuotReqGrp_NoRelatedSym_0.insert(TradingSessionID_63.getString());
    FIX::TradingSessionSubID TradingSessionSubID_63("STRING_6");
    noRelatedSym_0_0.set(TradingSessionSubID_63);
    QuotReqGrp_NoRelatedSym_0.insert(TradingSessionSubID_63.getString());
    FIX::TransactTime TransactTime_53(FIX::UTCTIMESTAMP(7, 44, 25, 4, 6, 2003));
    noRelatedSym_0_0.set(TransactTime_53);
    QuotReqGrp_NoRelatedSym_0.insert(TransactTime_53.getString());
    FIX::ValidUntilTime ValidUntilTime_13(FIX::UTCTIMESTAMP(17, 4, 41, 22, 3, 2015));
    noRelatedSym_0_0.set(ValidUntilTime_13);
    QuotReqGrp_NoRelatedSym_0.insert(ValidUntilTime_13.getString());
    all_values.push_back(QuotReqGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_20;
    FIX::AgreementCurrency AgreementCurrency_20("EUR");
    noRelatedSym_0_0.set(AgreementCurrency_20);
    FinancingDetails_20.insert(AgreementCurrency_20.getString());
    FIX::AgreementDate AgreementDate_20("LOCALMKTDATE_857234159");
    noRelatedSym_0_0.set(AgreementDate_20);
    FinancingDetails_20.insert(AgreementDate_20.getString());
    FIX::AgreementDesc AgreementDesc_20("STRING_1330956209");
    noRelatedSym_0_0.set(AgreementDesc_20);
    FinancingDetails_20.insert(AgreementDesc_20.getString());
    FIX::AgreementID AgreementID_20("STRING_838378538");
    noRelatedSym_0_0.set(AgreementID_20);
    FinancingDetails_20.insert(AgreementID_20.getString());
    FIX::DeliveryType DeliveryType_20(1);
    noRelatedSym_0_0.set(DeliveryType_20);
    FinancingDetails_20.insert(DeliveryType_20.getString());
    FIX::EndDate EndDate_20("LOCALMKTDATE_2006851679");
    noRelatedSym_0_0.set(EndDate_20);
    FinancingDetails_20.insert(EndDate_20.getString());
    FIX::MarginRatio MarginRatio_20;
    MarginRatio_20.setString("91.690000");
    noRelatedSym_0_0.set(MarginRatio_20);
    FinancingDetails_20.insert(MarginRatio_20.getString());
    FIX::StartDate StartDate_20("LOCALMKTDATE_2061388252");
    noRelatedSym_0_0.set(StartDate_20);
    FinancingDetails_20.insert(StartDate_20.getString());
    FIX::TerminationType TerminationType_20(3);
    noRelatedSym_0_0.set(TerminationType_20);
    FinancingDetails_20.insert(TerminationType_20.getString());
    all_values.push_back(FinancingDetails_20);

    // Instrument
    multiset<string> Instrument_69;
    FIX::AttachmentPoint AttachmentPoint_69;
    AttachmentPoint_69.setString("85.770000");
    noRelatedSym_0_0.set(AttachmentPoint_69);
    Instrument_69.insert(AttachmentPoint_69.getString());
    FIX::CFICode CFICode_69("STRING_1381641559");
    noRelatedSym_0_0.set(CFICode_69);
    Instrument_69.insert(CFICode_69.getString());
    FIX::CPProgram CPProgram_69(2);
    noRelatedSym_0_0.set(CPProgram_69);
    Instrument_69.insert(CPProgram_69.getString());
    FIX::CPRegType CPRegType_69("STRING_2054172067");
    noRelatedSym_0_0.set(CPRegType_69);
    Instrument_69.insert(CPRegType_69.getString());
    FIX::CapPrice CapPrice_69;
    CapPrice_69.setString("16218975");
    noRelatedSym_0_0.set(CapPrice_69);
    Instrument_69.insert(CapPrice_69.getString());
    FIX::ContractMultiplier ContractMultiplier_69;
    ContractMultiplier_69.setString("13577292");
    noRelatedSym_0_0.set(ContractMultiplier_69);
    Instrument_69.insert(ContractMultiplier_69.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_69(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_69);
    Instrument_69.insert(ContractMultiplierUnit_69.getString());
    FIX::ContractSettlMonth ContractSettlMonth_69("MONTHYEAR_628560981");
    noRelatedSym_0_0.set(ContractSettlMonth_69);
    Instrument_69.insert(ContractSettlMonth_69.getString());
    FIX::CountryOfIssue CountryOfIssue_69("COUNTRY_2032944213");
    noRelatedSym_0_0.set(CountryOfIssue_69);
    Instrument_69.insert(CountryOfIssue_69.getString());
    FIX::CouponPaymentDate CouponPaymentDate_69("LOCALMKTDATE_1537785005");
    noRelatedSym_0_0.set(CouponPaymentDate_69);
    Instrument_69.insert(CouponPaymentDate_69.getString());
    FIX::CouponRate CouponRate_69;
    CouponRate_69.setString("68.790000");
    noRelatedSym_0_0.set(CouponRate_69);
    Instrument_69.insert(CouponRate_69.getString());
    FIX::CreditRating CreditRating_69("STRING_756375649");
    noRelatedSym_0_0.set(CreditRating_69);
    Instrument_69.insert(CreditRating_69.getString());
    FIX::DatedDate DatedDate_69("LOCALMKTDATE_2063260150");
    noRelatedSym_0_0.set(DatedDate_69);
    Instrument_69.insert(DatedDate_69.getString());
    FIX::DetachmentPoint DetachmentPoint_69;
    DetachmentPoint_69.setString("58.740000");
    noRelatedSym_0_0.set(DetachmentPoint_69);
    Instrument_69.insert(DetachmentPoint_69.getString());
    FIX::EncodedIssuer EncodedIssuer_69("DATA_867755441");
    noRelatedSym_0_0.set(EncodedIssuer_69);
    Instrument_69.insert(EncodedIssuer_69.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_69(252211784);
    noRelatedSym_0_0.set(EncodedIssuerLen_69);
    Instrument_69.insert(EncodedIssuerLen_69.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_69("DATA_1240624738");
    noRelatedSym_0_0.set(EncodedSecurityDesc_69);
    Instrument_69.insert(EncodedSecurityDesc_69.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_69(1218302002);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_69);
    Instrument_69.insert(EncodedSecurityDescLen_69.getString());
    FIX::ExerciseStyle ExerciseStyle_69(1);
    noRelatedSym_0_0.set(ExerciseStyle_69);
    Instrument_69.insert(ExerciseStyle_69.getString());
    FIX::Factor Factor_69;
    Factor_69.setString("20741749");
    noRelatedSym_0_0.set(Factor_69);
    Instrument_69.insert(Factor_69.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_69(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_69);
    Instrument_69.insert(FlexProductEligibilityIndicator_69.getString());
    FIX::FlexibleIndicator FlexibleIndicator_69(true);
    noRelatedSym_0_0.set(FlexibleIndicator_69);
    Instrument_69.insert(FlexibleIndicator_69.getString());
    FIX::FloorPrice FloorPrice_69;
    FloorPrice_69.setString("12542126");
    noRelatedSym_0_0.set(FloorPrice_69);
    Instrument_69.insert(FloorPrice_69.getString());
    FIX::FlowScheduleType FlowScheduleType_69(3);
    noRelatedSym_0_0.set(FlowScheduleType_69);
    Instrument_69.insert(FlowScheduleType_69.getString());
    FIX::InstrRegistry InstrRegistry_69("STRING_140421675");
    noRelatedSym_0_0.set(InstrRegistry_69);
    Instrument_69.insert(InstrRegistry_69.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_69('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_69);
    Instrument_69.insert(InstrmtAssignmentMethod_69.getString());
    FIX::InterestAccrualDate InterestAccrualDate_69("LOCALMKTDATE_50928645");
    noRelatedSym_0_0.set(InterestAccrualDate_69);
    Instrument_69.insert(InterestAccrualDate_69.getString());
    FIX::IssueDate IssueDate_69("LOCALMKTDATE_2147273355");
    noRelatedSym_0_0.set(IssueDate_69);
    Instrument_69.insert(IssueDate_69.getString());
    FIX::Issuer Issuer_69("STRING_1744616716");
    noRelatedSym_0_0.set(Issuer_69);
    Instrument_69.insert(Issuer_69.getString());
    FIX::ListMethod ListMethod_69(0);
    noRelatedSym_0_0.set(ListMethod_69);
    Instrument_69.insert(ListMethod_69.getString());
    FIX::LocaleOfIssue LocaleOfIssue_69("STRING_1150613237");
    noRelatedSym_0_0.set(LocaleOfIssue_69);
    Instrument_69.insert(LocaleOfIssue_69.getString());
    FIX::MaturityDate MaturityDate_69("LOCALMKTDATE_2045125293");
    noRelatedSym_0_0.set(MaturityDate_69);
    Instrument_69.insert(MaturityDate_69.getString());
    FIX::MaturityMonthYear MaturityMonthYear_69("MONTHYEAR_1346474809");
    noRelatedSym_0_0.set(MaturityMonthYear_69);
    Instrument_69.insert(MaturityMonthYear_69.getString());
    FIX::MaturityTime MaturityTime_69("TZTIMEONLY_788782252");
    noRelatedSym_0_0.set(MaturityTime_69);
    Instrument_69.insert(MaturityTime_69.getString());
    FIX::MinPriceIncrement MinPriceIncrement_69;
    MinPriceIncrement_69.setString("19518137");
    noRelatedSym_0_0.set(MinPriceIncrement_69);
    Instrument_69.insert(MinPriceIncrement_69.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_69;
    MinPriceIncrementAmount_69.setString("8208886");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_69);
    Instrument_69.insert(MinPriceIncrementAmount_69.getString());
    FIX::NTPositionLimit NTPositionLimit_69(2146511466);
    noRelatedSym_0_0.set(NTPositionLimit_69);
    Instrument_69.insert(NTPositionLimit_69.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_69;
    NotionalPercentageOutstanding_69.setString("77.730000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_69);
    Instrument_69.insert(NotionalPercentageOutstanding_69.getString());
    FIX::OptAttribute OptAttribute_69('1');
    noRelatedSym_0_0.set(OptAttribute_69);
    Instrument_69.insert(OptAttribute_69.getString());
    FIX::OptPayoutAmount OptPayoutAmount_69;
    OptPayoutAmount_69.setString("20319720");
    noRelatedSym_0_0.set(OptPayoutAmount_69);
    Instrument_69.insert(OptPayoutAmount_69.getString());
    FIX::OptPayoutType OptPayoutType_69(3);
    noRelatedSym_0_0.set(OptPayoutType_69);
    Instrument_69.insert(OptPayoutType_69.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_69;
    OriginalNotionalPercentageOutstanding_69.setString("65.350000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_69);
    Instrument_69.insert(OriginalNotionalPercentageOutstanding_69.getString());
    FIX::Pool Pool_69("STRING_640864032");
    noRelatedSym_0_0.set(Pool_69);
    Instrument_69.insert(Pool_69.getString());
    FIX::PositionLimit PositionLimit_69(1049375633);
    noRelatedSym_0_0.set(PositionLimit_69);
    Instrument_69.insert(PositionLimit_69.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_69("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_69);
    Instrument_69.insert(PriceQuoteMethod_69.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_69("STRING_1508619474");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_69);
    Instrument_69.insert(PriceUnitOfMeasure_69.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_69;
    PriceUnitOfMeasureQty_69.setString("13015874");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_69);
    Instrument_69.insert(PriceUnitOfMeasureQty_69.getString());
    FIX::Product Product_71(5);
    noRelatedSym_0_0.set(Product_71);
    Instrument_69.insert(Product_71.getString());
    FIX::ProductComplex ProductComplex_69("STRING_579437828");
    noRelatedSym_0_0.set(ProductComplex_69);
    Instrument_69.insert(ProductComplex_69.getString());
    FIX::PutOrCall PutOrCall_69(1);
    noRelatedSym_0_0.set(PutOrCall_69);
    Instrument_69.insert(PutOrCall_69.getString());
    FIX::RedemptionDate RedemptionDate_69("LOCALMKTDATE_1119754759");
    noRelatedSym_0_0.set(RedemptionDate_69);
    Instrument_69.insert(RedemptionDate_69.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_69("STRING_691407878");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_69);
    Instrument_69.insert(RepoCollateralSecurityType_69.getString());
    FIX::RepurchaseRate RepurchaseRate_69;
    RepurchaseRate_69.setString("81.530000");
    noRelatedSym_0_0.set(RepurchaseRate_69);
    Instrument_69.insert(RepurchaseRate_69.getString());
    FIX::RepurchaseTerm RepurchaseTerm_69(226483769);
    noRelatedSym_0_0.set(RepurchaseTerm_69);
    Instrument_69.insert(RepurchaseTerm_69.getString());
    FIX::RestructuringType RestructuringType_69("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_69);
    Instrument_69.insert(RestructuringType_69.getString());
    FIX::SecurityDesc SecurityDesc_69("STRING_599469829");
    noRelatedSym_0_0.set(SecurityDesc_69);
    Instrument_69.insert(SecurityDesc_69.getString());
    FIX::SecurityExchange SecurityExchange_69("EXCHANGE_171591316");
    noRelatedSym_0_0.set(SecurityExchange_69);
    Instrument_69.insert(SecurityExchange_69.getString());
    FIX::SecurityGroup SecurityGroup_69("STRING_1711540732");
    noRelatedSym_0_0.set(SecurityGroup_69);
    Instrument_69.insert(SecurityGroup_69.getString());
    FIX::SecurityID SecurityID_69("STRING_599259536");
    noRelatedSym_0_0.set(SecurityID_69);
    Instrument_69.insert(SecurityID_69.getString());
    FIX::SecurityIDSource SecurityIDSource_69("STRING_4");
    noRelatedSym_0_0.set(SecurityIDSource_69);
    Instrument_69.insert(SecurityIDSource_69.getString());
    FIX::SecurityStatus SecurityStatus_69("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_69);
    Instrument_69.insert(SecurityStatus_69.getString());
    FIX::SecuritySubType SecuritySubType_70("STRING_1749872773");
    noRelatedSym_0_0.set(SecuritySubType_70);
    Instrument_69.insert(SecuritySubType_70.getString());
    FIX::SecurityType SecurityType_71("STRING_DEFLTED");
    noRelatedSym_0_0.set(SecurityType_71);
    Instrument_69.insert(SecurityType_71.getString());
    FIX::Seniority Seniority_69("STRING_SD");
    noRelatedSym_0_0.set(Seniority_69);
    Instrument_69.insert(Seniority_69.getString());
    FIX::SettlMethod SettlMethod_69('C');
    noRelatedSym_0_0.set(SettlMethod_69);
    Instrument_69.insert(SettlMethod_69.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_69("STRING_1618179743");
    noRelatedSym_0_0.set(SettleOnOpenFlag_69);
    Instrument_69.insert(SettleOnOpenFlag_69.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_69("STRING_1696253818");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_69);
    Instrument_69.insert(StateOrProvinceOfIssue_69.getString());
    FIX::StrikeCurrency StrikeCurrency_69("CHF");
    noRelatedSym_0_0.set(StrikeCurrency_69);
    Instrument_69.insert(StrikeCurrency_69.getString());
    FIX::StrikeMultiplier StrikeMultiplier_69;
    StrikeMultiplier_69.setString("9982198");
    noRelatedSym_0_0.set(StrikeMultiplier_69);
    Instrument_69.insert(StrikeMultiplier_69.getString());
    FIX::StrikePrice StrikePrice_69;
    StrikePrice_69.setString("2746875");
    noRelatedSym_0_0.set(StrikePrice_69);
    Instrument_69.insert(StrikePrice_69.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_69(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_69);
    Instrument_69.insert(StrikePriceBoundaryMethod_69.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_69;
    StrikePriceBoundaryPrecision_69.setString("27.140000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_69);
    Instrument_69.insert(StrikePriceBoundaryPrecision_69.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_69(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_69);
    Instrument_69.insert(StrikePriceDeterminationMethod_69.getString());
    FIX::StrikeValue StrikeValue_69;
    StrikeValue_69.setString("12494849");
    noRelatedSym_0_0.set(StrikeValue_69);
    Instrument_69.insert(StrikeValue_69.getString());
    FIX::Symbol Symbol_69("STRING_445741476");
    noRelatedSym_0_0.set(Symbol_69);
    Instrument_69.insert(Symbol_69.getString());
    FIX::SymbolSfx SymbolSfx_69("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_69);
    Instrument_69.insert(SymbolSfx_69.getString());
    FIX::TimeUnit TimeUnit_69("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_69);
    Instrument_69.insert(TimeUnit_69.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_69(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_69);
    Instrument_69.insert(UnderlyingPriceDeterminationMethod_69.getString());
    FIX::UnitOfMeasure UnitOfMeasure_69("STRING_t");
    noRelatedSym_0_0.set(UnitOfMeasure_69);
    Instrument_69.insert(UnitOfMeasure_69.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_69;
    UnitOfMeasureQty_69.setString("20531714");
    noRelatedSym_0_0.set(UnitOfMeasureQty_69);
    Instrument_69.insert(UnitOfMeasureQty_69.getString());
    FIX::ValuationMethod ValuationMethod_69("STRING_FUTDA");
    noRelatedSym_0_0.set(ValuationMethod_69);
    Instrument_69.insert(ValuationMethod_69.getString());
    all_values.push_back(Instrument_69);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_134;
      FIX::ComplexEventCondition ComplexEventCondition_134(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventCondition_134.getString());
      FIX::ComplexEventPrice ComplexEventPrice_134;
      ComplexEventPrice_134.setString("8375598");
      noComplexEvents_0_1_0.set(ComplexEventPrice_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventPrice_134.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_134(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceBoundaryMethod_134.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_134;
      ComplexEventPriceBoundaryPrecision_134.setString("57.750000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceBoundaryPrecision_134.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_134(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventPriceTimeType_134.getString());
      FIX::ComplexEventType ComplexEventType_134(2);
      noComplexEvents_0_1_0.set(ComplexEventType_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexEventType_134.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_134;
      ComplexOptPayoutAmount_134.setString("15634653");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_134);
      ComplexEvents_NoComplexEvents_134.insert(ComplexOptPayoutAmount_134.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_134);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_276;
        FIX::ComplexEventEndDate ComplexEventEndDate_276(FIX::UTCTIMESTAMP(4, 28, 4, 22, 4, 2006));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_276);
        ComplexEventDates_NoComplexEventDates_276.insert(ComplexEventEndDate_276.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_276(FIX::UTCTIMESTAMP(16, 1, 21, 16, 9, 2011));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_276);
        ComplexEventDates_NoComplexEventDates_276.insert(ComplexEventStartDate_276.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_276);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_551;
          FIX::ComplexEventEndTime ComplexEventEndTime_551(FIX::UTCTIMEONLY(22, 34, 39));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_551);
          ComplexEventTimes_NoComplexEventTimes_551.insert(ComplexEventEndTime_551.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_551(FIX::UTCTIMEONLY(2, 58, 32));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_551);
          ComplexEventTimes_NoComplexEventTimes_551.insert(ComplexEventStartTime_551.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_551);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_552;
          FIX::ComplexEventEndTime ComplexEventEndTime_552(FIX::UTCTIMEONLY(18, 27, 7));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_552);
          ComplexEventTimes_NoComplexEventTimes_552.insert(ComplexEventEndTime_552.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_552(FIX::UTCTIMEONLY(1, 10, 36));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_552);
          ComplexEventTimes_NoComplexEventTimes_552.insert(ComplexEventStartTime_552.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_552);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_553;
          FIX::ComplexEventEndTime ComplexEventEndTime_553(FIX::UTCTIMEONLY(7, 4, 10));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_553);
          ComplexEventTimes_NoComplexEventTimes_553.insert(ComplexEventEndTime_553.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_553(FIX::UTCTIMEONLY(12, 4, 36));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_553);
          ComplexEventTimes_NoComplexEventTimes_553.insert(ComplexEventStartTime_553.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_553);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_277;
        FIX::ComplexEventEndDate ComplexEventEndDate_277(FIX::UTCTIMESTAMP(10, 57, 16, 22, 7, 2007));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_277);
        ComplexEventDates_NoComplexEventDates_277.insert(ComplexEventEndDate_277.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_277(FIX::UTCTIMESTAMP(5, 3, 41, 21, 6, 2016));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_277);
        ComplexEventDates_NoComplexEventDates_277.insert(ComplexEventStartDate_277.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_277);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_554;
          FIX::ComplexEventEndTime ComplexEventEndTime_554(FIX::UTCTIMEONLY(22, 13, 13));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_554);
          ComplexEventTimes_NoComplexEventTimes_554.insert(ComplexEventEndTime_554.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_554(FIX::UTCTIMEONLY(6, 24, 2));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_554);
          ComplexEventTimes_NoComplexEventTimes_554.insert(ComplexEventStartTime_554.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_554);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_555;
          FIX::ComplexEventEndTime ComplexEventEndTime_555(FIX::UTCTIMEONLY(11, 58, 42));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_555);
          ComplexEventTimes_NoComplexEventTimes_555.insert(ComplexEventEndTime_555.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_555(FIX::UTCTIMEONLY(22, 39, 36));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_555);
          ComplexEventTimes_NoComplexEventTimes_555.insert(ComplexEventStartTime_555.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_555);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_135;
      FIX::ComplexEventCondition ComplexEventCondition_135(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventCondition_135.getString());
      FIX::ComplexEventPrice ComplexEventPrice_135;
      ComplexEventPrice_135.setString("6822694");
      noComplexEvents_0_1_1.set(ComplexEventPrice_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventPrice_135.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_135(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceBoundaryMethod_135.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_135;
      ComplexEventPriceBoundaryPrecision_135.setString("14.470000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceBoundaryPrecision_135.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_135(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceTimeType_135.getString());
      FIX::ComplexEventType ComplexEventType_135(4);
      noComplexEvents_0_1_1.set(ComplexEventType_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexEventType_135.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_135;
      ComplexOptPayoutAmount_135.setString("12034131");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_135);
      ComplexEvents_NoComplexEvents_135.insert(ComplexOptPayoutAmount_135.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_135);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_278;
        FIX::ComplexEventEndDate ComplexEventEndDate_278(FIX::UTCTIMESTAMP(11, 14, 59, 1, 7, 2009));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_278);
        ComplexEventDates_NoComplexEventDates_278.insert(ComplexEventEndDate_278.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_278(FIX::UTCTIMESTAMP(21, 50, 48, 14, 9, 2010));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_278);
        ComplexEventDates_NoComplexEventDates_278.insert(ComplexEventStartDate_278.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_278);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_556;
          FIX::ComplexEventEndTime ComplexEventEndTime_556(FIX::UTCTIMEONLY(3, 39, 7));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_556);
          ComplexEventTimes_NoComplexEventTimes_556.insert(ComplexEventEndTime_556.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_556(FIX::UTCTIMEONLY(5, 38, 8));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_556);
          ComplexEventTimes_NoComplexEventTimes_556.insert(ComplexEventStartTime_556.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_556);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_557;
          FIX::ComplexEventEndTime ComplexEventEndTime_557(FIX::UTCTIMEONLY(3, 26, 56));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_557);
          ComplexEventTimes_NoComplexEventTimes_557.insert(ComplexEventEndTime_557.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_557(FIX::UTCTIMEONLY(15, 44, 3));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_557);
          ComplexEventTimes_NoComplexEventTimes_557.insert(ComplexEventStartTime_557.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_557);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_140;
      FIX::EventDate EventDate_140("LOCALMKTDATE_321382416");
      noEvents_0_1_0.set(EventDate_140);
      EvntGrp_NoEvents_140.insert(EventDate_140.getString());
      FIX::EventPx EventPx_140;
      EventPx_140.setString("18128596");
      noEvents_0_1_0.set(EventPx_140);
      EvntGrp_NoEvents_140.insert(EventPx_140.getString());
      FIX::EventText EventText_140("STRING_159019863");
      noEvents_0_1_0.set(EventText_140);
      EvntGrp_NoEvents_140.insert(EventText_140.getString());
      FIX::EventTime EventTime_140(FIX::UTCTIMESTAMP(16, 48, 24, 5, 7, 2004));
      noEvents_0_1_0.set(EventTime_140);
      EvntGrp_NoEvents_140.insert(EventTime_140.getString());
      FIX::EventType EventType_140(17);
      noEvents_0_1_0.set(EventType_140);
      EvntGrp_NoEvents_140.insert(EventType_140.getString());
      all_values.push_back(EvntGrp_NoEvents_140);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_141;
      FIX::EventDate EventDate_141("LOCALMKTDATE_622941751");
      noEvents_0_1_1.set(EventDate_141);
      EvntGrp_NoEvents_141.insert(EventDate_141.getString());
      FIX::EventPx EventPx_141;
      EventPx_141.setString("6427108");
      noEvents_0_1_1.set(EventPx_141);
      EvntGrp_NoEvents_141.insert(EventPx_141.getString());
      FIX::EventText EventText_141("STRING_82123108");
      noEvents_0_1_1.set(EventText_141);
      EvntGrp_NoEvents_141.insert(EventText_141.getString());
      FIX::EventTime EventTime_141(FIX::UTCTIMESTAMP(8, 7, 3, 24, 2, 2000));
      noEvents_0_1_1.set(EventTime_141);
      EvntGrp_NoEvents_141.insert(EventTime_141.getString());
      FIX::EventType EventType_141(6);
      noEvents_0_1_1.set(EventType_141);
      EvntGrp_NoEvents_141.insert(EventType_141.getString());
      all_values.push_back(EvntGrp_NoEvents_141);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_144;
      FIX::InstrumentPartyID InstrumentPartyID_144("STRING_745234009");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyID_144.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_144('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyIDSource_144.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_144(1151965121);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyRole_144.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_144);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302;
        FIX::InstrumentPartySubID InstrumentPartySubID_302("STRING_1268020730");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_302);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302.insert(InstrumentPartySubID_302.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_302(1682535326);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_302);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302.insert(InstrumentPartySubIDType_302.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303;
        FIX::InstrumentPartySubID InstrumentPartySubID_303("STRING_578054663");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_303);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303.insert(InstrumentPartySubID_303.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_303(1272146395);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_303);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303.insert(InstrumentPartySubIDType_303.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304;
        FIX::InstrumentPartySubID InstrumentPartySubID_304("STRING_2003917742");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_304);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304.insert(InstrumentPartySubID_304.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_304(243430713);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_304);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304.insert(InstrumentPartySubIDType_304.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_145;
      FIX::InstrumentPartyID InstrumentPartyID_145("STRING_1431166258");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyID_145.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_145('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyIDSource_145.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_145(1976651858);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyRole_145.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_145);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305;
        FIX::InstrumentPartySubID InstrumentPartySubID_305("STRING_435045307");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_305);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305.insert(InstrumentPartySubID_305.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_305(1362888767);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_305);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305.insert(InstrumentPartySubIDType_305.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_146;
      FIX::InstrumentPartyID InstrumentPartyID_146("STRING_1786029069");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyID_146.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_146('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyIDSource_146.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_146(598912535);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyRole_146.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_146);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306;
        FIX::InstrumentPartySubID InstrumentPartySubID_306("STRING_2122306932");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_306);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306.insert(InstrumentPartySubID_306.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_306(681035644);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_306);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306.insert(InstrumentPartySubIDType_306.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307;
        FIX::InstrumentPartySubID InstrumentPartySubID_307("STRING_524364748");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_307);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307.insert(InstrumentPartySubID_307.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_307(411615037);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_307);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307.insert(InstrumentPartySubIDType_307.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308;
        FIX::InstrumentPartySubID InstrumentPartySubID_308("STRING_1849353551");
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubID_308);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308.insert(InstrumentPartySubID_308.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_308(333800784);
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubIDType_308);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308.insert(InstrumentPartySubIDType_308.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_154;
      FIX::SecurityAltID SecurityAltID_154("STRING_1355198728");
      noSecurityAltID_0_1_0.set(SecurityAltID_154);
      SecAltIDGrp_NoSecurityAltID_154.insert(SecurityAltID_154.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_154("STRING_270001078");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_154);
      SecAltIDGrp_NoSecurityAltID_154.insert(SecurityAltIDSource_154.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_154);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_155;
      FIX::SecurityAltID SecurityAltID_155("STRING_816641986");
      noSecurityAltID_0_1_1.set(SecurityAltID_155);
      SecAltIDGrp_NoSecurityAltID_155.insert(SecurityAltID_155.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_155("STRING_1032523154");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_155);
      SecAltIDGrp_NoSecurityAltID_155.insert(SecurityAltIDSource_155.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_155);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_156;
      FIX::SecurityAltID SecurityAltID_156("STRING_1015235087");
      noSecurityAltID_0_1_2.set(SecurityAltID_156);
      SecAltIDGrp_NoSecurityAltID_156.insert(SecurityAltID_156.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_156("STRING_216147670");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_156);
      SecAltIDGrp_NoSecurityAltID_156.insert(SecurityAltIDSource_156.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_156);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_138;
    FIX::SecurityXML SecurityXML_139("XMLDATA_37004627");
    noRelatedSym_0_0.set(SecurityXML_139);
    FIX::SecurityXMLLen SecurityXMLLen_69(1128135487);
    noRelatedSym_0_0.set(SecurityXMLLen_69);
    FIX::SecurityXMLSchema SecurityXMLSchema_69("STRING_1484168400");
    noRelatedSym_0_0.set(SecurityXMLSchema_69);
    SecurityXML_138.insert(SecurityXMLSchema_69.getString());
    all_values.push_back(SecurityXML_138);

    // OrderQtyData
    multiset<string> OrderQtyData_17;
    FIX::CashOrderQty CashOrderQty_17;
    CashOrderQty_17.setString("17195399");
    noRelatedSym_0_0.set(CashOrderQty_17);
    OrderQtyData_17.insert(CashOrderQty_17.getString());
    FIX::OrderPercent OrderPercent_17;
    OrderPercent_17.setString("1.510000");
    noRelatedSym_0_0.set(OrderPercent_17);
    OrderQtyData_17.insert(OrderPercent_17.getString());
    FIX::OrderQty OrderQty_28;
    OrderQty_28.setString("6088311");
    noRelatedSym_0_0.set(OrderQty_28);
    OrderQtyData_17.insert(OrderQty_28.getString());
    FIX::RoundingDirection RoundingDirection_17('1');
    noRelatedSym_0_0.set(RoundingDirection_17);
    OrderQtyData_17.insert(RoundingDirection_17.getString());
    FIX::RoundingModulus RoundingModulus_17;
    RoundingModulus_17.setString("19496208");
    noRelatedSym_0_0.set(RoundingModulus_17);
    OrderQtyData_17.insert(RoundingModulus_17.getString());
    all_values.push_back(OrderQtyData_17);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_98;
      FIX::PartyID PartyID_98("STRING_872320610");
      noPartyIDs_0_1_0.set(PartyID_98);
      Parties_NoPartyIDs_98.insert(PartyID_98.getString());
      FIX::PartyIDSource PartyIDSource_98('A');
      noPartyIDs_0_1_0.set(PartyIDSource_98);
      Parties_NoPartyIDs_98.insert(PartyIDSource_98.getString());
      FIX::PartyRole PartyRole_98(18);
      noPartyIDs_0_1_0.set(PartyRole_98);
      Parties_NoPartyIDs_98.insert(PartyRole_98.getString());
      all_values.push_back(Parties_NoPartyIDs_98);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_203;
        FIX::PartySubID PartySubID_203("STRING_994194194");
        noPartySubIDs_0_0_2_0.set(PartySubID_203);
        PtysSubGrp_NoPartySubIDs_203.insert(PartySubID_203.getString());
        FIX::PartySubIDType PartySubIDType_203(16);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_203);
        PtysSubGrp_NoPartySubIDs_203.insert(PartySubIDType_203.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_203);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_99;
      FIX::PartyID PartyID_99("STRING_639478381");
      noPartyIDs_0_1_1.set(PartyID_99);
      Parties_NoPartyIDs_99.insert(PartyID_99.getString());
      FIX::PartyIDSource PartyIDSource_99('3');
      noPartyIDs_0_1_1.set(PartyIDSource_99);
      Parties_NoPartyIDs_99.insert(PartyIDSource_99.getString());
      FIX::PartyRole PartyRole_99(4);
      noPartyIDs_0_1_1.set(PartyRole_99);
      Parties_NoPartyIDs_99.insert(PartyRole_99.getString());
      all_values.push_back(Parties_NoPartyIDs_99);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_204;
        FIX::PartySubID PartySubID_204("STRING_126658725");
        noPartySubIDs_0_1_2_0.set(PartySubID_204);
        PtysSubGrp_NoPartySubIDs_204.insert(PartySubID_204.getString());
        FIX::PartySubIDType PartySubIDType_204(2);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_204);
        PtysSubGrp_NoPartySubIDs_204.insert(PartySubIDType_204.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_204);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_205;
        FIX::PartySubID PartySubID_205("STRING_1025916702");
        noPartySubIDs_0_1_2_1.set(PartySubID_205);
        PtysSubGrp_NoPartySubIDs_205.insert(PartySubID_205.getString());
        FIX::PartySubIDType PartySubIDType_205(31);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_205);
        PtysSubGrp_NoPartySubIDs_205.insert(PartySubIDType_205.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_205);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_206;
        FIX::PartySubID PartySubID_206("STRING_1642951243");
        noPartySubIDs_0_1_2_2.set(PartySubID_206);
        PtysSubGrp_NoPartySubIDs_206.insert(PartySubID_206.getString());
        FIX::PartySubIDType PartySubIDType_206(13);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_206);
        PtysSubGrp_NoPartySubIDs_206.insert(PartySubIDType_206.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_206);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_2;
      FIX::QuoteQualifier QuoteQualifier_2('1');
      noQuoteQualifiers_0_1_0.set(QuoteQualifier_2);
      QuotQualGrp_NoQuoteQualifiers_2.insert(QuoteQualifier_2.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_2);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_3;
      FIX::QuoteQualifier QuoteQualifier_3('4');
      noQuoteQualifiers_0_1_1.set(QuoteQualifier_3);
      QuotQualGrp_NoQuoteQualifiers_3.insert(QuoteQualifier_3.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_3);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_2;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_4;
      FIX::QuoteQualifier QuoteQualifier_4('6');
      noQuoteQualifiers_0_1_2.set(QuoteQualifier_4);
      QuotQualGrp_NoQuoteQualifiers_4.insert(QuoteQualifier_4.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_4);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_2);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_0;
      FIX::LegOrderQty LegOrderQty_11;
      LegOrderQty_11.setString("6627864");
      noLegs_0_1_0.set(LegOrderQty_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegOrderQty_11.getString());
      FIX::LegQty LegQty_11;
      LegQty_11.setString("1057714");
      noLegs_0_1_0.set(LegQty_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegQty_11.getString());
      FIX::LegRefID LegRefID_11("STRING_1908839248");
      noLegs_0_1_0.set(LegRefID_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegRefID_11.getString());
      FIX::LegSettlDate LegSettlDate_11("LOCALMKTDATE_2146954873");
      noLegs_0_1_0.set(LegSettlDate_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegSettlDate_11.getString());
      FIX::LegSettlType LegSettlType_11('1');
      noLegs_0_1_0.set(LegSettlType_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegSettlType_11.getString());
      FIX::LegSwapType LegSwapType_11(5);
      noLegs_0_1_0.set(LegSwapType_11);
      QuotReqLegsGrp_NoLegs_0.insert(LegSwapType_11.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_105;
      FIX::EncodedLegIssuer EncodedLegIssuer_105("DATA_608302372");
      noLegs_0_1_0.set(EncodedLegIssuer_105);
      InstrumentLeg_105.insert(EncodedLegIssuer_105.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_105(1253801844);
      noLegs_0_1_0.set(EncodedLegIssuerLen_105);
      InstrumentLeg_105.insert(EncodedLegIssuerLen_105.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_105("DATA_1269682968");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_105);
      InstrumentLeg_105.insert(EncodedLegSecurityDesc_105.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_105(500816130);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_105);
      InstrumentLeg_105.insert(EncodedLegSecurityDescLen_105.getString());
      FIX::LegCFICode LegCFICode_105("STRING_2126122454");
      noLegs_0_1_0.set(LegCFICode_105);
      InstrumentLeg_105.insert(LegCFICode_105.getString());
      FIX::LegContractMultiplier LegContractMultiplier_105;
      LegContractMultiplier_105.setString("9009883");
      noLegs_0_1_0.set(LegContractMultiplier_105);
      InstrumentLeg_105.insert(LegContractMultiplier_105.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_105(1385569247);
      noLegs_0_1_0.set(LegContractMultiplierUnit_105);
      InstrumentLeg_105.insert(LegContractMultiplierUnit_105.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_105("MONTHYEAR_1286004724");
      noLegs_0_1_0.set(LegContractSettlMonth_105);
      InstrumentLeg_105.insert(LegContractSettlMonth_105.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_105("COUNTRY_1895182588");
      noLegs_0_1_0.set(LegCountryOfIssue_105);
      InstrumentLeg_105.insert(LegCountryOfIssue_105.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_105("LOCALMKTDATE_1908867786");
      noLegs_0_1_0.set(LegCouponPaymentDate_105);
      InstrumentLeg_105.insert(LegCouponPaymentDate_105.getString());
      FIX::LegCouponRate LegCouponRate_105;
      LegCouponRate_105.setString("31.050000");
      noLegs_0_1_0.set(LegCouponRate_105);
      InstrumentLeg_105.insert(LegCouponRate_105.getString());
      FIX::LegCreditRating LegCreditRating_105("STRING_1340805670");
      noLegs_0_1_0.set(LegCreditRating_105);
      InstrumentLeg_105.insert(LegCreditRating_105.getString());
      FIX::LegCurrency LegCurrency_105("GBP");
      noLegs_0_1_0.set(LegCurrency_105);
      InstrumentLeg_105.insert(LegCurrency_105.getString());
      FIX::LegDatedDate LegDatedDate_105("LOCALMKTDATE_1467464395");
      noLegs_0_1_0.set(LegDatedDate_105);
      InstrumentLeg_105.insert(LegDatedDate_105.getString());
      FIX::LegExerciseStyle LegExerciseStyle_105(1855320308);
      noLegs_0_1_0.set(LegExerciseStyle_105);
      InstrumentLeg_105.insert(LegExerciseStyle_105.getString());
      FIX::LegFactor LegFactor_105;
      LegFactor_105.setString("14182178");
      noLegs_0_1_0.set(LegFactor_105);
      InstrumentLeg_105.insert(LegFactor_105.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_105(1295993024);
      noLegs_0_1_0.set(LegFlowScheduleType_105);
      InstrumentLeg_105.insert(LegFlowScheduleType_105.getString());
      FIX::LegInstrRegistry LegInstrRegistry_105("STRING_1350787904");
      noLegs_0_1_0.set(LegInstrRegistry_105);
      InstrumentLeg_105.insert(LegInstrRegistry_105.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_105("LOCALMKTDATE_1048214641");
      noLegs_0_1_0.set(LegInterestAccrualDate_105);
      InstrumentLeg_105.insert(LegInterestAccrualDate_105.getString());
      FIX::LegIssueDate LegIssueDate_105("LOCALMKTDATE_332236734");
      noLegs_0_1_0.set(LegIssueDate_105);
      InstrumentLeg_105.insert(LegIssueDate_105.getString());
      FIX::LegIssuer LegIssuer_105("STRING_1116256577");
      noLegs_0_1_0.set(LegIssuer_105);
      InstrumentLeg_105.insert(LegIssuer_105.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_105("STRING_1494853443");
      noLegs_0_1_0.set(LegLocaleOfIssue_105);
      InstrumentLeg_105.insert(LegLocaleOfIssue_105.getString());
      FIX::LegMaturityDate LegMaturityDate_105("LOCALMKTDATE_401003597");
      noLegs_0_1_0.set(LegMaturityDate_105);
      InstrumentLeg_105.insert(LegMaturityDate_105.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_105("MONTHYEAR_1896960338");
      noLegs_0_1_0.set(LegMaturityMonthYear_105);
      InstrumentLeg_105.insert(LegMaturityMonthYear_105.getString());
      FIX::LegMaturityTime LegMaturityTime_105("TZTIMEONLY_10156268");
      noLegs_0_1_0.set(LegMaturityTime_105);
      InstrumentLeg_105.insert(LegMaturityTime_105.getString());
      FIX::LegOptAttribute LegOptAttribute_105('5');
      noLegs_0_1_0.set(LegOptAttribute_105);
      InstrumentLeg_105.insert(LegOptAttribute_105.getString());
      FIX::LegOptionRatio LegOptionRatio_105;
      LegOptionRatio_105.setString("16583159");
      noLegs_0_1_0.set(LegOptionRatio_105);
      InstrumentLeg_105.insert(LegOptionRatio_105.getString());
      FIX::LegPool LegPool_105("STRING_9627493");
      noLegs_0_1_0.set(LegPool_105);
      InstrumentLeg_105.insert(LegPool_105.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_105("STRING_184602885");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_105);
      InstrumentLeg_105.insert(LegPriceUnitOfMeasure_105.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_105;
      LegPriceUnitOfMeasureQty_105.setString("9783780");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_105);
      InstrumentLeg_105.insert(LegPriceUnitOfMeasureQty_105.getString());
      FIX::LegProduct LegProduct_105(617929865);
      noLegs_0_1_0.set(LegProduct_105);
      InstrumentLeg_105.insert(LegProduct_105.getString());
      FIX::LegPutOrCall LegPutOrCall_105(1438404729);
      noLegs_0_1_0.set(LegPutOrCall_105);
      InstrumentLeg_105.insert(LegPutOrCall_105.getString());
      FIX::LegRatioQty LegRatioQty_105;
      LegRatioQty_105.setString("1005773");
      noLegs_0_1_0.set(LegRatioQty_105);
      InstrumentLeg_105.insert(LegRatioQty_105.getString());
      FIX::LegRedemptionDate LegRedemptionDate_105("LOCALMKTDATE_1118745996");
      noLegs_0_1_0.set(LegRedemptionDate_105);
      InstrumentLeg_105.insert(LegRedemptionDate_105.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_105("STRING_1417043535");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_105);
      InstrumentLeg_105.insert(LegRepoCollateralSecurityType_105.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_105;
      LegRepurchaseRate_105.setString("57.570000");
      noLegs_0_1_0.set(LegRepurchaseRate_105);
      InstrumentLeg_105.insert(LegRepurchaseRate_105.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_105(356831595);
      noLegs_0_1_0.set(LegRepurchaseTerm_105);
      InstrumentLeg_105.insert(LegRepurchaseTerm_105.getString());
      FIX::LegSecurityDesc LegSecurityDesc_105("STRING_555564611");
      noLegs_0_1_0.set(LegSecurityDesc_105);
      InstrumentLeg_105.insert(LegSecurityDesc_105.getString());
      FIX::LegSecurityExchange LegSecurityExchange_105("EXCHANGE_749264697");
      noLegs_0_1_0.set(LegSecurityExchange_105);
      InstrumentLeg_105.insert(LegSecurityExchange_105.getString());
      FIX::LegSecurityID LegSecurityID_105("STRING_118215733");
      noLegs_0_1_0.set(LegSecurityID_105);
      InstrumentLeg_105.insert(LegSecurityID_105.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_105("STRING_333564068");
      noLegs_0_1_0.set(LegSecurityIDSource_105);
      InstrumentLeg_105.insert(LegSecurityIDSource_105.getString());
      FIX::LegSecuritySubType LegSecuritySubType_105("STRING_2090070367");
      noLegs_0_1_0.set(LegSecuritySubType_105);
      InstrumentLeg_105.insert(LegSecuritySubType_105.getString());
      FIX::LegSecurityType LegSecurityType_105("STRING_664385582");
      noLegs_0_1_0.set(LegSecurityType_105);
      InstrumentLeg_105.insert(LegSecurityType_105.getString());
      FIX::LegSide LegSide_105('7');
      noLegs_0_1_0.set(LegSide_105);
      InstrumentLeg_105.insert(LegSide_105.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_105("STRING_1410051115");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_105);
      InstrumentLeg_105.insert(LegStateOrProvinceOfIssue_105.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_105("GBP");
      noLegs_0_1_0.set(LegStrikeCurrency_105);
      InstrumentLeg_105.insert(LegStrikeCurrency_105.getString());
      FIX::LegStrikePrice LegStrikePrice_105;
      LegStrikePrice_105.setString("5585604");
      noLegs_0_1_0.set(LegStrikePrice_105);
      InstrumentLeg_105.insert(LegStrikePrice_105.getString());
      FIX::LegSymbol LegSymbol_105("STRING_1723010147");
      noLegs_0_1_0.set(LegSymbol_105);
      InstrumentLeg_105.insert(LegSymbol_105.getString());
      FIX::LegSymbolSfx LegSymbolSfx_105("STRING_1044814009");
      noLegs_0_1_0.set(LegSymbolSfx_105);
      InstrumentLeg_105.insert(LegSymbolSfx_105.getString());
      FIX::LegTimeUnit LegTimeUnit_105("STRING_890797225");
      noLegs_0_1_0.set(LegTimeUnit_105);
      InstrumentLeg_105.insert(LegTimeUnit_105.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_105("STRING_691783076");
      noLegs_0_1_0.set(LegUnitOfMeasure_105);
      InstrumentLeg_105.insert(LegUnitOfMeasure_105.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_105;
      LegUnitOfMeasureQty_105.setString("3921838");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_105);
      InstrumentLeg_105.insert(LegUnitOfMeasureQty_105.getString());
      all_values.push_back(InstrumentLeg_105);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_204;
        FIX::LegSecurityAltID LegSecurityAltID_204("STRING_441259767");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_204);
        LegSecAltIDGrp_NoLegSecurityAltID_204.insert(LegSecurityAltID_204.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_204("STRING_402340072");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_204);
        LegSecAltIDGrp_NoLegSecurityAltID_204.insert(LegSecurityAltIDSource_204.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_204);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_205;
        FIX::LegSecurityAltID LegSecurityAltID_205("STRING_1798575911");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_205);
        LegSecAltIDGrp_NoLegSecurityAltID_205.insert(LegSecurityAltID_205.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_205("STRING_2099575706");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_205);
        LegSecAltIDGrp_NoLegSecurityAltID_205.insert(LegSecurityAltIDSource_205.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_205);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_2;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_2("GBP");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkCurveCurrency_2.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_2("STRING_930470100");
      noLegs_0_1_0.set(LegBenchmarkCurveName_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkCurveName_2.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_2("STRING_1029897431");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkCurvePoint_2.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_2;
      LegBenchmarkPrice_2.setString("12740998");
      noLegs_0_1_0.set(LegBenchmarkPrice_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkPrice_2.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_2(1031047463);
      noLegs_0_1_0.set(LegBenchmarkPriceType_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkPriceType_2.getString());
      all_values.push_back(LegBenchmarkCurveData_2);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_28;
        FIX::LegStipulationType LegStipulationType_28("STRING_543659765");
        noLegStipulations_0_0_2_0.set(LegStipulationType_28);
        LegStipulations_NoLegStipulations_28.insert(LegStipulationType_28.getString());
        FIX::LegStipulationValue LegStipulationValue_28("STRING_2032613220");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_28);
        LegStipulations_NoLegStipulations_28.insert(LegStipulationValue_28.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_28);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_96;
        FIX::NestedPartyID NestedPartyID_96("STRING_1099224376");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_96);
        NestedParties_NoNestedPartyIDs_96.insert(NestedPartyID_96.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_96('6');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_96);
        NestedParties_NoNestedPartyIDs_96.insert(NestedPartyIDSource_96.getString());
        FIX::NestedPartyRole NestedPartyRole_96(476207108);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_96);
        NestedParties_NoNestedPartyIDs_96.insert(NestedPartyRole_96.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_96);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_188;
          FIX::NestedPartySubID NestedPartySubID_188("STRING_576980989");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_188);
          NstdPtysSubGrp_NoNestedPartySubIDs_188.insert(NestedPartySubID_188.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_188(1140592690);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_188);
          NstdPtysSubGrp_NoNestedPartySubIDs_188.insert(NestedPartySubIDType_188.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_188);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_189;
          FIX::NestedPartySubID NestedPartySubID_189("STRING_11169988");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_189);
          NstdPtysSubGrp_NoNestedPartySubIDs_189.insert(NestedPartySubID_189.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_189(1987032104);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_189);
          NstdPtysSubGrp_NoNestedPartySubIDs_189.insert(NestedPartySubIDType_189.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_189);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_13;
      FIX::RateSource RateSource_20(0);
      noRateSources_0_1_0.set(RateSource_20);
      RateSource_NoRateSources_13.insert(RateSource_20.getString());
      FIX::RateSourceType RateSourceType_13(1);
      noRateSources_0_1_0.set(RateSourceType_13);
      RateSource_NoRateSources_13.insert(RateSourceType_13.getString());
      FIX::ReferencePage ReferencePage_13("STRING_1088341432");
      noRateSources_0_1_0.set(ReferencePage_13);
      RateSource_NoRateSources_13.insert(ReferencePage_13.getString());
      all_values.push_back(RateSource_NoRateSources_13);

      noRelatedSym_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_14;
      FIX::RateSource RateSource_21(1);
      noRateSources_0_1_1.set(RateSource_21);
      RateSource_NoRateSources_14.insert(RateSource_21.getString());
      FIX::RateSourceType RateSourceType_14(1);
      noRateSources_0_1_1.set(RateSourceType_14);
      RateSource_NoRateSources_14.insert(RateSourceType_14.getString());
      FIX::ReferencePage ReferencePage_14("STRING_1780124509");
      noRateSources_0_1_1.set(ReferencePage_14);
      RateSource_NoRateSources_14.insert(ReferencePage_14.getString());
      all_values.push_back(RateSource_NoRateSources_14);

      noRelatedSym_0_0.addGroup(noRateSources_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_20;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_20("GBP");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_20);
    SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurveCurrency_20.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_20("STRING_Pfandbriefe");
    noRelatedSym_0_0.set(BenchmarkCurveName_20);
    SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurveName_20.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_20("STRING_1847107242");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_20);
    SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurvePoint_20.getString());
    FIX::BenchmarkPrice BenchmarkPrice_20;
    BenchmarkPrice_20.setString("843156");
    noRelatedSym_0_0.set(BenchmarkPrice_20);
    SpreadOrBenchmarkCurveData_20.insert(BenchmarkPrice_20.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_20(25992686);
    noRelatedSym_0_0.set(BenchmarkPriceType_20);
    SpreadOrBenchmarkCurveData_20.insert(BenchmarkPriceType_20.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_20("STRING_111591159");
    noRelatedSym_0_0.set(BenchmarkSecurityID_20);
    SpreadOrBenchmarkCurveData_20.insert(BenchmarkSecurityID_20.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_20("STRING_2067494408");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_20);
    SpreadOrBenchmarkCurveData_20.insert(BenchmarkSecurityIDSource_20.getString());
    FIX::Spread Spread_20;
    Spread_20.setString("9564627");
    noRelatedSym_0_0.set(Spread_20);
    SpreadOrBenchmarkCurveData_20.insert(Spread_20.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_20);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_30;
      FIX::StipulationType StipulationType_30("STRING_PPC");
      noStipulations_0_1_0.set(StipulationType_30);
      Stipulations_NoStipulations_30.insert(StipulationType_30.getString());
      FIX::StipulationValue StipulationValue_30("STRING_1987510249");
      noStipulations_0_1_0.set(StipulationValue_30);
      Stipulations_NoStipulations_30.insert(StipulationValue_30.getString());
      all_values.push_back(Stipulations_NoStipulations_30);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_31;
      FIX::StipulationType StipulationType_31("STRING_YIELD");
      noStipulations_0_1_1.set(StipulationType_31);
      Stipulations_NoStipulations_31.insert(StipulationType_31.getString());
      FIX::StipulationValue StipulationValue_31("STRING_1737770402");
      noStipulations_0_1_1.set(StipulationValue_31);
      Stipulations_NoStipulations_31.insert(StipulationValue_31.getString());
      all_values.push_back(Stipulations_NoStipulations_31);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_32;
      FIX::StipulationType StipulationType_32("STRING_INTERNALQTY");
      noStipulations_0_1_2.set(StipulationType_32);
      Stipulations_NoStipulations_32.insert(StipulationType_32.getString());
      FIX::StipulationValue StipulationValue_32("STRING_1500639744");
      noStipulations_0_1_2.set(StipulationValue_32);
      Stipulations_NoStipulations_32.insert(StipulationValue_32.getString());
      all_values.push_back(Stipulations_NoStipulations_32);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_100;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_100("DATA_359550443");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingIssuer_100.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_100(1976846852);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingIssuerLen_100.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_100("DATA_2122299576");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingSecurityDesc_100.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_100(936531432);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingSecurityDescLen_100.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_100;
      UnderlyingAdjustedQuantity_100.setString("9699558");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_100);
      UnderlyingInstrument_100.insert(UnderlyingAdjustedQuantity_100.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_100;
      UnderlyingAllocationPercent_100.setString("95.640000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_100);
      UnderlyingInstrument_100.insert(UnderlyingAllocationPercent_100.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_100;
      UnderlyingAttachmentPoint_100.setString("98.880000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_100);
      UnderlyingInstrument_100.insert(UnderlyingAttachmentPoint_100.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_100("STRING_335287180");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_100);
      UnderlyingInstrument_100.insert(UnderlyingCFICode_100.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_100("STRING_2141238920");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_100);
      UnderlyingInstrument_100.insert(UnderlyingCPProgram_100.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_100("STRING_1174188835");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_100);
      UnderlyingInstrument_100.insert(UnderlyingCPRegType_100.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_100;
      UnderlyingCapValue_100.setString("14236286");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_100);
      UnderlyingInstrument_100.insert(UnderlyingCapValue_100.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_100;
      UnderlyingCashAmount_100.setString("10463386");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_100);
      UnderlyingInstrument_100.insert(UnderlyingCashAmount_100.getString());
      FIX::UnderlyingCashType UnderlyingCashType_100("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_100);
      UnderlyingInstrument_100.insert(UnderlyingCashType_100.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_100;
      UnderlyingContractMultiplier_100.setString("10562694");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_100);
      UnderlyingInstrument_100.insert(UnderlyingContractMultiplier_100.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_100(343622158);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_100);
      UnderlyingInstrument_100.insert(UnderlyingContractMultiplierUnit_100.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_100("COUNTRY_748834708");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingCountryOfIssue_100.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_100("LOCALMKTDATE_1130170101");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_100);
      UnderlyingInstrument_100.insert(UnderlyingCouponPaymentDate_100.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_100;
      UnderlyingCouponRate_100.setString("57.520000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_100);
      UnderlyingInstrument_100.insert(UnderlyingCouponRate_100.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_100("STRING_833150320");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_100);
      UnderlyingInstrument_100.insert(UnderlyingCreditRating_100.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_100("USD");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_100);
      UnderlyingInstrument_100.insert(UnderlyingCurrency_100.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_100;
      UnderlyingCurrentValue_100.setString("7531610");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_100);
      UnderlyingInstrument_100.insert(UnderlyingCurrentValue_100.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_100;
      UnderlyingDetachmentPoint_100.setString("55.740000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_100);
      UnderlyingInstrument_100.insert(UnderlyingDetachmentPoint_100.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_100;
      UnderlyingDirtyPrice_100.setString("12963255");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_100);
      UnderlyingInstrument_100.insert(UnderlyingDirtyPrice_100.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_100;
      UnderlyingEndPrice_100.setString("19472717");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_100);
      UnderlyingInstrument_100.insert(UnderlyingEndPrice_100.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_100;
      UnderlyingEndValue_100.setString("19526521");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_100);
      UnderlyingInstrument_100.insert(UnderlyingEndValue_100.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_100(291490224);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_100);
      UnderlyingInstrument_100.insert(UnderlyingExerciseStyle_100.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_100;
      UnderlyingFXRate_100.setString("15375584");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_100);
      UnderlyingInstrument_100.insert(UnderlyingFXRate_100.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_100('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_100);
      UnderlyingInstrument_100.insert(UnderlyingFXRateCalc_100.getString());
      FIX::UnderlyingFactor UnderlyingFactor_100;
      UnderlyingFactor_100.setString("17921299");
      noUnderlyings_0_1_0.set(UnderlyingFactor_100);
      UnderlyingInstrument_100.insert(UnderlyingFactor_100.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_100(79585955);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_100);
      UnderlyingInstrument_100.insert(UnderlyingFlowScheduleType_100.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_100("STRING_2037358792");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_100);
      UnderlyingInstrument_100.insert(UnderlyingInstrRegistry_100.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_100("LOCALMKTDATE_1621493172");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_100);
      UnderlyingInstrument_100.insert(UnderlyingIssueDate_100.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_100("STRING_54401883");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_100);
      UnderlyingInstrument_100.insert(UnderlyingIssuer_100.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_100("STRING_826406576");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingLocaleOfIssue_100.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_100("LOCALMKTDATE_443965418");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityDate_100.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_100("MONTHYEAR_40387799");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityMonthYear_100.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_100("TZTIMEONLY_1602486464");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityTime_100.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_100;
      UnderlyingNotionalPercentageOutstanding_100.setString("25.980000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_100);
      UnderlyingInstrument_100.insert(UnderlyingNotionalPercentageOutstanding_100.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_100('3');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_100);
      UnderlyingInstrument_100.insert(UnderlyingOptAttribute_100.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_100;
      UnderlyingOriginalNotionalPercentageOutstanding_100.setString("16.510000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_100);
      UnderlyingInstrument_100.insert(UnderlyingOriginalNotionalPercentageOutstanding_100.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_100("STRING_55397563");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_100);
      UnderlyingInstrument_100.insert(UnderlyingPriceUnitOfMeasure_100.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_100;
      UnderlyingPriceUnitOfMeasureQty_100.setString("10804817");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_100);
      UnderlyingInstrument_100.insert(UnderlyingPriceUnitOfMeasureQty_100.getString());
      FIX::UnderlyingProduct UnderlyingProduct_100(944803012);
      noUnderlyings_0_1_0.set(UnderlyingProduct_100);
      UnderlyingInstrument_100.insert(UnderlyingProduct_100.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_100(1111667036);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_100);
      UnderlyingInstrument_100.insert(UnderlyingPutOrCall_100.getString());
      FIX::UnderlyingPx UnderlyingPx_100;
      UnderlyingPx_100.setString("14241038");
      noUnderlyings_0_1_0.set(UnderlyingPx_100);
      UnderlyingInstrument_100.insert(UnderlyingPx_100.getString());
      FIX::UnderlyingQty UnderlyingQty_100;
      UnderlyingQty_100.setString("16936377");
      noUnderlyings_0_1_0.set(UnderlyingQty_100);
      UnderlyingInstrument_100.insert(UnderlyingQty_100.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_100("LOCALMKTDATE_94353490");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_100);
      UnderlyingInstrument_100.insert(UnderlyingRedemptionDate_100.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_100("STRING_1467349619");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_100);
      UnderlyingInstrument_100.insert(UnderlyingRepoCollateralSecurityType_100.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_100;
      UnderlyingRepurchaseRate_100.setString("43.920000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_100);
      UnderlyingInstrument_100.insert(UnderlyingRepurchaseRate_100.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_100(1250516277);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_100);
      UnderlyingInstrument_100.insert(UnderlyingRepurchaseTerm_100.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_100("STRING_1622186531");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_100);
      UnderlyingInstrument_100.insert(UnderlyingRestructuringType_100.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_100("STRING_1132465472");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityDesc_100.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_100("EXCHANGE_1215658203");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityExchange_100.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_100("STRING_771028385");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityID_100.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_100("STRING_932253542");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityIDSource_100.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_100("STRING_1020826731");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_100);
      UnderlyingInstrument_100.insert(UnderlyingSecuritySubType_100.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_100("STRING_1062518609");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityType_100.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_100("STRING_322328366");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_100);
      UnderlyingInstrument_100.insert(UnderlyingSeniority_100.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_100("STRING_551151432");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_100);
      UnderlyingInstrument_100.insert(UnderlyingSettlMethod_100.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_100(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_100);
      UnderlyingInstrument_100.insert(UnderlyingSettlementType_100.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_100;
      UnderlyingStartValue_100.setString("4019143");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_100);
      UnderlyingInstrument_100.insert(UnderlyingStartValue_100.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_100("STRING_441026576");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingStateOrProvinceOfIssue_100.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_100("JPY");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_100);
      UnderlyingInstrument_100.insert(UnderlyingStrikeCurrency_100.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_100;
      UnderlyingStrikePrice_100.setString("12674331");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_100);
      UnderlyingInstrument_100.insert(UnderlyingStrikePrice_100.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_100("STRING_625139872");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_100);
      UnderlyingInstrument_100.insert(UnderlyingSymbol_100.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_100("STRING_496704003");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_100);
      UnderlyingInstrument_100.insert(UnderlyingSymbolSfx_100.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_100("STRING_722435968");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_100);
      UnderlyingInstrument_100.insert(UnderlyingTimeUnit_100.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_100("STRING_1404392470");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_100);
      UnderlyingInstrument_100.insert(UnderlyingUnitOfMeasure_100.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_100;
      UnderlyingUnitOfMeasureQty_100.setString("5308470");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_100);
      UnderlyingInstrument_100.insert(UnderlyingUnitOfMeasureQty_100.getString());
      all_values.push_back(UnderlyingInstrument_100);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_202;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_202("STRING_1459790033");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_202);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltID_202.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_202("STRING_1611328782");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_202);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltIDSource_202.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_203;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_203("STRING_148946983");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_203);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltID_203.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_203("STRING_423973422");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_203);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltIDSource_203.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_204;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_204("STRING_887949000");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_204);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltID_204.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_204("STRING_1842584704");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_204);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltIDSource_204.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_186;
        FIX::UnderlyingStipType UnderlyingStipType_186("STRING_207814971");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_186);
        UnderlyingStipulations_NoUnderlyingStips_186.insert(UnderlyingStipType_186.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_186("STRING_74405448");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_186);
        UnderlyingStipulations_NoUnderlyingStips_186.insert(UnderlyingStipValue_186.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_186);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_187;
        FIX::UnderlyingStipType UnderlyingStipType_187("STRING_1768843189");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_187);
        UnderlyingStipulations_NoUnderlyingStips_187.insert(UnderlyingStipType_187.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_187("STRING_1830001502");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_187);
        UnderlyingStipulations_NoUnderlyingStips_187.insert(UnderlyingStipValue_187.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_187);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_205;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_205("STRING_837017745");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyID_205.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_205('4');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyIDSource_205.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_205(2139124463);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyRole_205.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_205);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_391("STRING_1516064849");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_391);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391.insert(UnderlyingInstrumentPartySubID_391.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_391(313969181);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_391);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391.insert(UnderlyingInstrumentPartySubIDType_391.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_101;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_101("DATA_261512260");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingIssuer_101.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_101(75746131);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingIssuerLen_101.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_101("DATA_715883502");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingSecurityDesc_101.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_101(702538836);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingSecurityDescLen_101.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_101;
      UnderlyingAdjustedQuantity_101.setString("2569205");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_101);
      UnderlyingInstrument_101.insert(UnderlyingAdjustedQuantity_101.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_101;
      UnderlyingAllocationPercent_101.setString("97.060000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_101);
      UnderlyingInstrument_101.insert(UnderlyingAllocationPercent_101.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_101;
      UnderlyingAttachmentPoint_101.setString("19.880000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_101);
      UnderlyingInstrument_101.insert(UnderlyingAttachmentPoint_101.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_101("STRING_882060456");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_101);
      UnderlyingInstrument_101.insert(UnderlyingCFICode_101.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_101("STRING_1668903709");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_101);
      UnderlyingInstrument_101.insert(UnderlyingCPProgram_101.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_101("STRING_544924308");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_101);
      UnderlyingInstrument_101.insert(UnderlyingCPRegType_101.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_101;
      UnderlyingCapValue_101.setString("1389692");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_101);
      UnderlyingInstrument_101.insert(UnderlyingCapValue_101.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_101;
      UnderlyingCashAmount_101.setString("522671");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_101);
      UnderlyingInstrument_101.insert(UnderlyingCashAmount_101.getString());
      FIX::UnderlyingCashType UnderlyingCashType_101("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_101);
      UnderlyingInstrument_101.insert(UnderlyingCashType_101.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_101;
      UnderlyingContractMultiplier_101.setString("15987593");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_101);
      UnderlyingInstrument_101.insert(UnderlyingContractMultiplier_101.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_101(1663595917);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_101);
      UnderlyingInstrument_101.insert(UnderlyingContractMultiplierUnit_101.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_101("COUNTRY_2045498911");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingCountryOfIssue_101.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_101("LOCALMKTDATE_2022732734");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_101);
      UnderlyingInstrument_101.insert(UnderlyingCouponPaymentDate_101.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_101;
      UnderlyingCouponRate_101.setString("12.690000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_101);
      UnderlyingInstrument_101.insert(UnderlyingCouponRate_101.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_101("STRING_1740599967");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_101);
      UnderlyingInstrument_101.insert(UnderlyingCreditRating_101.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_101("CHF");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_101);
      UnderlyingInstrument_101.insert(UnderlyingCurrency_101.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_101;
      UnderlyingCurrentValue_101.setString("18150054");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_101);
      UnderlyingInstrument_101.insert(UnderlyingCurrentValue_101.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_101;
      UnderlyingDetachmentPoint_101.setString("55.400000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_101);
      UnderlyingInstrument_101.insert(UnderlyingDetachmentPoint_101.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_101;
      UnderlyingDirtyPrice_101.setString("2943940");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_101);
      UnderlyingInstrument_101.insert(UnderlyingDirtyPrice_101.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_101;
      UnderlyingEndPrice_101.setString("8743926");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_101);
      UnderlyingInstrument_101.insert(UnderlyingEndPrice_101.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_101;
      UnderlyingEndValue_101.setString("8519532");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_101);
      UnderlyingInstrument_101.insert(UnderlyingEndValue_101.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_101(747940335);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_101);
      UnderlyingInstrument_101.insert(UnderlyingExerciseStyle_101.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_101;
      UnderlyingFXRate_101.setString("8660335");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_101);
      UnderlyingInstrument_101.insert(UnderlyingFXRate_101.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_101('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_101);
      UnderlyingInstrument_101.insert(UnderlyingFXRateCalc_101.getString());
      FIX::UnderlyingFactor UnderlyingFactor_101;
      UnderlyingFactor_101.setString("1165215");
      noUnderlyings_0_1_1.set(UnderlyingFactor_101);
      UnderlyingInstrument_101.insert(UnderlyingFactor_101.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_101(1180002684);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_101);
      UnderlyingInstrument_101.insert(UnderlyingFlowScheduleType_101.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_101("STRING_823826373");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_101);
      UnderlyingInstrument_101.insert(UnderlyingInstrRegistry_101.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_101("LOCALMKTDATE_192267668");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_101);
      UnderlyingInstrument_101.insert(UnderlyingIssueDate_101.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_101("STRING_1895886186");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_101);
      UnderlyingInstrument_101.insert(UnderlyingIssuer_101.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_101("STRING_1526365209");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingLocaleOfIssue_101.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_101("LOCALMKTDATE_449188252");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityDate_101.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_101("MONTHYEAR_920602244");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityMonthYear_101.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_101("TZTIMEONLY_1348853549");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityTime_101.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_101;
      UnderlyingNotionalPercentageOutstanding_101.setString("87.090000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_101);
      UnderlyingInstrument_101.insert(UnderlyingNotionalPercentageOutstanding_101.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_101('4');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_101);
      UnderlyingInstrument_101.insert(UnderlyingOptAttribute_101.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_101;
      UnderlyingOriginalNotionalPercentageOutstanding_101.setString("78.570000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_101);
      UnderlyingInstrument_101.insert(UnderlyingOriginalNotionalPercentageOutstanding_101.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_101("STRING_1470217988");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_101);
      UnderlyingInstrument_101.insert(UnderlyingPriceUnitOfMeasure_101.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_101;
      UnderlyingPriceUnitOfMeasureQty_101.setString("4942894");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_101);
      UnderlyingInstrument_101.insert(UnderlyingPriceUnitOfMeasureQty_101.getString());
      FIX::UnderlyingProduct UnderlyingProduct_101(1642846136);
      noUnderlyings_0_1_1.set(UnderlyingProduct_101);
      UnderlyingInstrument_101.insert(UnderlyingProduct_101.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_101(921493652);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_101);
      UnderlyingInstrument_101.insert(UnderlyingPutOrCall_101.getString());
      FIX::UnderlyingPx UnderlyingPx_101;
      UnderlyingPx_101.setString("104017");
      noUnderlyings_0_1_1.set(UnderlyingPx_101);
      UnderlyingInstrument_101.insert(UnderlyingPx_101.getString());
      FIX::UnderlyingQty UnderlyingQty_101;
      UnderlyingQty_101.setString("15408613");
      noUnderlyings_0_1_1.set(UnderlyingQty_101);
      UnderlyingInstrument_101.insert(UnderlyingQty_101.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_101("LOCALMKTDATE_796742739");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_101);
      UnderlyingInstrument_101.insert(UnderlyingRedemptionDate_101.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_101("STRING_414462979");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_101);
      UnderlyingInstrument_101.insert(UnderlyingRepoCollateralSecurityType_101.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_101;
      UnderlyingRepurchaseRate_101.setString("77.180000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_101);
      UnderlyingInstrument_101.insert(UnderlyingRepurchaseRate_101.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_101(1190318737);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_101);
      UnderlyingInstrument_101.insert(UnderlyingRepurchaseTerm_101.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_101("STRING_1026339220");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_101);
      UnderlyingInstrument_101.insert(UnderlyingRestructuringType_101.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_101("STRING_801499486");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityDesc_101.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_101("EXCHANGE_1205254277");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityExchange_101.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_101("STRING_1320733315");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityID_101.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_101("STRING_1675892174");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityIDSource_101.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_101("STRING_2057207562");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_101);
      UnderlyingInstrument_101.insert(UnderlyingSecuritySubType_101.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_101("STRING_2068673651");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityType_101.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_101("STRING_394442030");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_101);
      UnderlyingInstrument_101.insert(UnderlyingSeniority_101.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_101("STRING_472038027");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_101);
      UnderlyingInstrument_101.insert(UnderlyingSettlMethod_101.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_101(4);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_101);
      UnderlyingInstrument_101.insert(UnderlyingSettlementType_101.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_101;
      UnderlyingStartValue_101.setString("15744447");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_101);
      UnderlyingInstrument_101.insert(UnderlyingStartValue_101.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_101("STRING_1295864400");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingStateOrProvinceOfIssue_101.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_101("EUR");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_101);
      UnderlyingInstrument_101.insert(UnderlyingStrikeCurrency_101.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_101;
      UnderlyingStrikePrice_101.setString("6747459");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_101);
      UnderlyingInstrument_101.insert(UnderlyingStrikePrice_101.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_101("STRING_679167460");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_101);
      UnderlyingInstrument_101.insert(UnderlyingSymbol_101.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_101("STRING_95965849");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_101);
      UnderlyingInstrument_101.insert(UnderlyingSymbolSfx_101.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_101("STRING_2023599510");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_101);
      UnderlyingInstrument_101.insert(UnderlyingTimeUnit_101.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_101("STRING_2010416169");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_101);
      UnderlyingInstrument_101.insert(UnderlyingUnitOfMeasure_101.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_101;
      UnderlyingUnitOfMeasureQty_101.setString("5379881");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_101);
      UnderlyingInstrument_101.insert(UnderlyingUnitOfMeasureQty_101.getString());
      all_values.push_back(UnderlyingInstrument_101);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_205;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_205("STRING_1333150509");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_205);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltID_205.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_205("STRING_1032277595");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_205);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltIDSource_205.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_188;
        FIX::UnderlyingStipType UnderlyingStipType_188("STRING_107160514");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_188);
        UnderlyingStipulations_NoUnderlyingStips_188.insert(UnderlyingStipType_188.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_188("STRING_1042679305");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_188);
        UnderlyingStipulations_NoUnderlyingStips_188.insert(UnderlyingStipValue_188.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_188);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_189;
        FIX::UnderlyingStipType UnderlyingStipType_189("STRING_658633959");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_189);
        UnderlyingStipulations_NoUnderlyingStips_189.insert(UnderlyingStipType_189.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_189("STRING_903903253");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_189);
        UnderlyingStipulations_NoUnderlyingStips_189.insert(UnderlyingStipValue_189.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_189);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_206;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_206("STRING_1792611678");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyID_206.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_206('2');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyIDSource_206.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_206(335997856);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyRole_206.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_206);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_392("STRING_1151992620");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_392);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392.insert(UnderlyingInstrumentPartySubID_392.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_392(1656731171);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_392);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392.insert(UnderlyingInstrumentPartySubIDType_392.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_393("STRING_2122519690");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_393);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393.insert(UnderlyingInstrumentPartySubID_393.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_393(1061716534);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_393);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393.insert(UnderlyingInstrumentPartySubIDType_393.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_394("STRING_1577921174");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_394);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394.insert(UnderlyingInstrumentPartySubID_394.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_394(369478072);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_394);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394.insert(UnderlyingInstrumentPartySubIDType_394.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_207;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_207("STRING_1533754562");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyID_207.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_207('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyIDSource_207.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_207(1943922787);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyRole_207.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_207);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_395("STRING_1845611922");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_395);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395.insert(UnderlyingInstrumentPartySubID_395.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_395(1119286392);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_395);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395.insert(UnderlyingInstrumentPartySubIDType_395.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_208;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_208("STRING_1356881276");
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyID_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyID_208.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_208('3');
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyIDSource_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyIDSource_208.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_208(1215252241);
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyRole_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyRole_208.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_208);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_396("STRING_240228256");
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubID_396);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396.insert(UnderlyingInstrumentPartySubID_396.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_396(1753240396);
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_396);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396.insert(UnderlyingInstrumentPartySubIDType_396.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_102;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_102("DATA_855407210");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingIssuer_102.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_102(1573378766);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingIssuerLen_102.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_102("DATA_638034344");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDesc_102.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_102(2120663418);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDescLen_102.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_102;
      UnderlyingAdjustedQuantity_102.setString("16805392");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_102);
      UnderlyingInstrument_102.insert(UnderlyingAdjustedQuantity_102.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_102;
      UnderlyingAllocationPercent_102.setString("36.490000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_102);
      UnderlyingInstrument_102.insert(UnderlyingAllocationPercent_102.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_102;
      UnderlyingAttachmentPoint_102.setString("37.290000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_102);
      UnderlyingInstrument_102.insert(UnderlyingAttachmentPoint_102.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_102("STRING_436958885");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_102);
      UnderlyingInstrument_102.insert(UnderlyingCFICode_102.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_102("STRING_990372285");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_102);
      UnderlyingInstrument_102.insert(UnderlyingCPProgram_102.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_102("STRING_276941759");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_102);
      UnderlyingInstrument_102.insert(UnderlyingCPRegType_102.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_102;
      UnderlyingCapValue_102.setString("3836972");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_102);
      UnderlyingInstrument_102.insert(UnderlyingCapValue_102.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_102;
      UnderlyingCashAmount_102.setString("13263701");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_102);
      UnderlyingInstrument_102.insert(UnderlyingCashAmount_102.getString());
      FIX::UnderlyingCashType UnderlyingCashType_102("STRING_DIFF");
      noUnderlyings_0_1_2.set(UnderlyingCashType_102);
      UnderlyingInstrument_102.insert(UnderlyingCashType_102.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_102;
      UnderlyingContractMultiplier_102.setString("15356898");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_102);
      UnderlyingInstrument_102.insert(UnderlyingContractMultiplier_102.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_102(835617664);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_102);
      UnderlyingInstrument_102.insert(UnderlyingContractMultiplierUnit_102.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_102("COUNTRY_698605318");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingCountryOfIssue_102.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_102("LOCALMKTDATE_449922734");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_102);
      UnderlyingInstrument_102.insert(UnderlyingCouponPaymentDate_102.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_102;
      UnderlyingCouponRate_102.setString("51.910000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_102);
      UnderlyingInstrument_102.insert(UnderlyingCouponRate_102.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_102("STRING_1068083390");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_102);
      UnderlyingInstrument_102.insert(UnderlyingCreditRating_102.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_102("CAN");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_102);
      UnderlyingInstrument_102.insert(UnderlyingCurrency_102.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_102;
      UnderlyingCurrentValue_102.setString("8645225");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_102);
      UnderlyingInstrument_102.insert(UnderlyingCurrentValue_102.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_102;
      UnderlyingDetachmentPoint_102.setString("89.620000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_102);
      UnderlyingInstrument_102.insert(UnderlyingDetachmentPoint_102.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_102;
      UnderlyingDirtyPrice_102.setString("15798161");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_102);
      UnderlyingInstrument_102.insert(UnderlyingDirtyPrice_102.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_102;
      UnderlyingEndPrice_102.setString("19838089");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_102);
      UnderlyingInstrument_102.insert(UnderlyingEndPrice_102.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_102;
      UnderlyingEndValue_102.setString("18752102");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_102);
      UnderlyingInstrument_102.insert(UnderlyingEndValue_102.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_102(1957111915);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_102);
      UnderlyingInstrument_102.insert(UnderlyingExerciseStyle_102.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_102;
      UnderlyingFXRate_102.setString("10515775");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_102);
      UnderlyingInstrument_102.insert(UnderlyingFXRate_102.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_102('M');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_102);
      UnderlyingInstrument_102.insert(UnderlyingFXRateCalc_102.getString());
      FIX::UnderlyingFactor UnderlyingFactor_102;
      UnderlyingFactor_102.setString("498565");
      noUnderlyings_0_1_2.set(UnderlyingFactor_102);
      UnderlyingInstrument_102.insert(UnderlyingFactor_102.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_102(657334263);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_102);
      UnderlyingInstrument_102.insert(UnderlyingFlowScheduleType_102.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_102("STRING_1816130939");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_102);
      UnderlyingInstrument_102.insert(UnderlyingInstrRegistry_102.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_102("LOCALMKTDATE_1623235289");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_102);
      UnderlyingInstrument_102.insert(UnderlyingIssueDate_102.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_102("STRING_1295368607");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_102);
      UnderlyingInstrument_102.insert(UnderlyingIssuer_102.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_102("STRING_1789310709");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingLocaleOfIssue_102.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_102("LOCALMKTDATE_1156290921");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityDate_102.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_102("MONTHYEAR_828598608");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityMonthYear_102.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_102("TZTIMEONLY_273640790");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityTime_102.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_102;
      UnderlyingNotionalPercentageOutstanding_102.setString("98.060000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_102);
      UnderlyingInstrument_102.insert(UnderlyingNotionalPercentageOutstanding_102.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_102('1');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_102);
      UnderlyingInstrument_102.insert(UnderlyingOptAttribute_102.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_102;
      UnderlyingOriginalNotionalPercentageOutstanding_102.setString("25.500000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_102);
      UnderlyingInstrument_102.insert(UnderlyingOriginalNotionalPercentageOutstanding_102.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_102("STRING_1976947034");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_102);
      UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasure_102.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_102;
      UnderlyingPriceUnitOfMeasureQty_102.setString("9978573");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_102);
      UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasureQty_102.getString());
      FIX::UnderlyingProduct UnderlyingProduct_102(1274151825);
      noUnderlyings_0_1_2.set(UnderlyingProduct_102);
      UnderlyingInstrument_102.insert(UnderlyingProduct_102.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_102(1365153233);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_102);
      UnderlyingInstrument_102.insert(UnderlyingPutOrCall_102.getString());
      FIX::UnderlyingPx UnderlyingPx_102;
      UnderlyingPx_102.setString("18334750");
      noUnderlyings_0_1_2.set(UnderlyingPx_102);
      UnderlyingInstrument_102.insert(UnderlyingPx_102.getString());
      FIX::UnderlyingQty UnderlyingQty_102;
      UnderlyingQty_102.setString("19727571");
      noUnderlyings_0_1_2.set(UnderlyingQty_102);
      UnderlyingInstrument_102.insert(UnderlyingQty_102.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_102("LOCALMKTDATE_1815075967");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_102);
      UnderlyingInstrument_102.insert(UnderlyingRedemptionDate_102.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_102("STRING_2099530242");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_102);
      UnderlyingInstrument_102.insert(UnderlyingRepoCollateralSecurityType_102.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_102;
      UnderlyingRepurchaseRate_102.setString("68.860000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_102);
      UnderlyingInstrument_102.insert(UnderlyingRepurchaseRate_102.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_102(1651269615);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_102);
      UnderlyingInstrument_102.insert(UnderlyingRepurchaseTerm_102.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_102("STRING_1833734499");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_102);
      UnderlyingInstrument_102.insert(UnderlyingRestructuringType_102.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_102("STRING_1757879415");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityDesc_102.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_102("EXCHANGE_22114930");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityExchange_102.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_102("STRING_1266067031");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityID_102.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_102("STRING_1594204689");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityIDSource_102.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_102("STRING_1897325168");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_102);
      UnderlyingInstrument_102.insert(UnderlyingSecuritySubType_102.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_102("STRING_1075695298");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityType_102.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_102("STRING_498298556");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_102);
      UnderlyingInstrument_102.insert(UnderlyingSeniority_102.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_102("STRING_710565249");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_102);
      UnderlyingInstrument_102.insert(UnderlyingSettlMethod_102.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_102(5);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_102);
      UnderlyingInstrument_102.insert(UnderlyingSettlementType_102.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_102;
      UnderlyingStartValue_102.setString("11556328");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_102);
      UnderlyingInstrument_102.insert(UnderlyingStartValue_102.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_102("STRING_379212540");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingStateOrProvinceOfIssue_102.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_102("CHF");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_102);
      UnderlyingInstrument_102.insert(UnderlyingStrikeCurrency_102.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_102;
      UnderlyingStrikePrice_102.setString("210396");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_102);
      UnderlyingInstrument_102.insert(UnderlyingStrikePrice_102.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_102("STRING_1757594385");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_102);
      UnderlyingInstrument_102.insert(UnderlyingSymbol_102.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_102("STRING_1132116387");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_102);
      UnderlyingInstrument_102.insert(UnderlyingSymbolSfx_102.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_102("STRING_294680392");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_102);
      UnderlyingInstrument_102.insert(UnderlyingTimeUnit_102.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_102("STRING_1203360543");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_102);
      UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasure_102.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_102;
      UnderlyingUnitOfMeasureQty_102.setString("8036036");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_102);
      UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasureQty_102.getString());
      all_values.push_back(UnderlyingInstrument_102);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_206;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_206("STRING_1032823929");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_206);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltID_206.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_206("STRING_1801461019");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_206);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltIDSource_206.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_190;
        FIX::UnderlyingStipType UnderlyingStipType_190("STRING_250493515");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_190);
        UnderlyingStipulations_NoUnderlyingStips_190.insert(UnderlyingStipType_190.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_190("STRING_1487452422");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_190);
        UnderlyingStipulations_NoUnderlyingStips_190.insert(UnderlyingStipValue_190.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_190);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_209;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_209("STRING_2065569482");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyID_209.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_209('1');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyIDSource_209.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_209(690561501);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_209);
        UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyRole_209.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_209);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_397("STRING_1125749868");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_397);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397.insert(UnderlyingInstrumentPartySubID_397.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_397(300957268);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_397);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397.insert(UnderlyingInstrumentPartySubIDType_397.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_398("STRING_1591470380");
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubID_398);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398.insert(UnderlyingInstrumentPartySubID_398.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_398(244333251);
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_398);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398.insert(UnderlyingInstrumentPartySubIDType_398.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_15;
    FIX::Yield Yield_15;
    Yield_15.setString("19.570000");
    noRelatedSym_0_0.set(Yield_15);
    YieldData_15.insert(Yield_15.getString());
    FIX::YieldCalcDate YieldCalcDate_15("LOCALMKTDATE_1341311900");
    noRelatedSym_0_0.set(YieldCalcDate_15);
    YieldData_15.insert(YieldCalcDate_15.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_15("LOCALMKTDATE_1320028550");
    noRelatedSym_0_0.set(YieldRedemptionDate_15);
    YieldData_15.insert(YieldRedemptionDate_15.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_15;
    YieldRedemptionPrice_15.setString("2459768");
    noRelatedSym_0_0.set(YieldRedemptionPrice_15);
    YieldData_15.insert(YieldRedemptionPrice_15.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_15(2051877150);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_15);
    YieldData_15.insert(YieldRedemptionPriceType_15.getString());
    FIX::YieldType YieldType_15("STRING_PROCEEDS");
    noRelatedSym_0_0.set(YieldType_15);
    YieldData_15.insert(YieldType_15.getString());
    all_values.push_back(YieldData_15);

    msg.addGroup(noRelatedSym_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_8;
    FIX::RootPartyID RootPartyID_8("STRING_283606042");
    noRootPartyIDs_0_0.set(RootPartyID_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyID_8.getString());
    FIX::RootPartyIDSource RootPartyIDSource_8('8');
    noRootPartyIDs_0_0.set(RootPartyIDSource_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyIDSource_8.getString());
    FIX::RootPartyRole RootPartyRole_8(1705127464);
    noRootPartyIDs_0_0.set(RootPartyRole_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyRole_8.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_8);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_16;
      FIX::RootPartySubID RootPartySubID_16("STRING_509510924");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_16);
      RootSubParties_NoRootPartySubIDs_16.insert(RootPartySubID_16.getString());
      FIX::RootPartySubIDType RootPartySubIDType_16(689760203);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_16);
      RootSubParties_NoRootPartySubIDs_16.insert(RootPartySubIDType_16.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_16);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteRequest::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_9;
    FIX::RootPartyID RootPartyID_9("STRING_599326036");
    noRootPartyIDs_0_1.set(RootPartyID_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyID_9.getString());
    FIX::RootPartyIDSource RootPartyIDSource_9('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyIDSource_9.getString());
    FIX::RootPartyRole RootPartyRole_9(1493363836);
    noRootPartyIDs_0_1.set(RootPartyRole_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyRole_9.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_9);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_17;
      FIX::RootPartySubID RootPartySubID_17("STRING_598211749");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_17);
      RootSubParties_NoRootPartySubIDs_17.insert(RootPartySubID_17.getString());
      FIX::RootPartySubIDType RootPartySubIDType_17(1147341208);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_17);
      RootSubParties_NoRootPartySubIDs_17.insert(RootPartySubIDType_17.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_17);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_18;
      FIX::RootPartySubID RootPartySubID_18("STRING_1416520097");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_18);
      RootSubParties_NoRootPartySubIDs_18.insert(RootPartySubID_18.getString());
      FIX::RootPartySubIDType RootPartySubIDType_18(848705264);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_18);
      RootSubParties_NoRootPartySubIDs_18.insert(RootPartySubIDType_18.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_18);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
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
