#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/QuoteRequestReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequestReject, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteRequestReject msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteRequestReject_0;
  FIX::EncodedText EncodedText_72("DATA_1721149981");
  msg.set(EncodedText_72);
  QuoteRequestReject_0.insert(EncodedText_72.getString());
  FIX::EncodedTextLen EncodedTextLen_72(1860329554);
  msg.set(EncodedTextLen_72);
  QuoteRequestReject_0.insert(EncodedTextLen_72.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_14(false);
  msg.set(PreTradeAnonymity_14);
  QuoteRequestReject_0.insert(PreTradeAnonymity_14.getString());
  FIX::PrivateQuote PrivateQuote_2(true);
  msg.set(PrivateQuote_2);
  QuoteRequestReject_0.insert(PrivateQuote_2.getString());
  FIX::QuoteReqID QuoteReqID_5("STRING_1622983534");
  msg.set(QuoteReqID_5);
  QuoteRequestReject_0.insert(QuoteReqID_5.getString());
  FIX::QuoteRequestRejectReason QuoteRequestRejectReason_0(6);
  msg.set(QuoteRequestRejectReason_0);
  QuoteRequestReject_0.insert(QuoteRequestRejectReason_0.getString());
  FIX::RFQReqID RFQReqID_1("STRING_512049183");
  msg.set(RFQReqID_1);
  QuoteRequestReject_0.insert(RFQReqID_1.getString());
  FIX::RespondentType RespondentType_1(1);
  msg.set(RespondentType_1);
  QuoteRequestReject_0.insert(RespondentType_1.getString());
  FIX::Text Text_72("STRING_1130300546");
  msg.set(Text_72);
  QuoteRequestReject_0.insert(Text_72.getString());
  all_values.push_back(QuoteRequestReject_0);

  // QuotReqRjctGrp
  // Group QuotReqRjctGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_0;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_0;
    FIX::Account Account_35("STRING_1203395466");
    noRelatedSym_0_0.set(Account_35);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Account_35.getString());
    FIX::AccountType AccountType_31(2);
    noRelatedSym_0_0.set(AccountType_31);
    QuotReqRjctGrp_NoRelatedSym_0.insert(AccountType_31.getString());
    FIX::AcctIDSource AcctIDSource_28(4);
    noRelatedSym_0_0.set(AcctIDSource_28);
    QuotReqRjctGrp_NoRelatedSym_0.insert(AcctIDSource_28.getString());
    FIX::Currency Currency_47("EUR");
    noRelatedSym_0_0.set(Currency_47);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Currency_47.getString());
    FIX::ExpireTime ExpireTime_17(FIX::UTCTIMESTAMP(11, 54, 42, 22, 12009));
    noRelatedSym_0_0.set(ExpireTime_17);
    QuotReqRjctGrp_NoRelatedSym_0.insert(ExpireTime_17.getString());
    FIX::OrdType OrdType_49('J');
    noRelatedSym_0_0.set(OrdType_49);
    QuotReqRjctGrp_NoRelatedSym_0.insert(OrdType_49.getString());
    FIX::OrderQty2 OrderQty2_12;
    OrderQty2_12.setString("15733626");
    noRelatedSym_0_0.set(OrderQty2_12);
    QuotReqRjctGrp_NoRelatedSym_0.insert(OrderQty2_12.getString());
    FIX::PrevClosePx PrevClosePx_12;
    PrevClosePx_12.setString("2562906");
    noRelatedSym_0_0.set(PrevClosePx_12);
    QuotReqRjctGrp_NoRelatedSym_0.insert(PrevClosePx_12.getString());
    FIX::Price Price_22;
    Price_22.setString("2035430");
    noRelatedSym_0_0.set(Price_22);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Price_22.getString());
    FIX::Price2 Price2_7;
    Price2_7.setString("19544909");
    noRelatedSym_0_0.set(Price2_7);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Price2_7.getString());
    FIX::PriceType PriceType_36(16);
    noRelatedSym_0_0.set(PriceType_36);
    QuotReqRjctGrp_NoRelatedSym_0.insert(PriceType_36.getString());
    FIX::QtyType QtyType_27(1);
    noRelatedSym_0_0.set(QtyType_27);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QtyType_27.getString());
    FIX::QuotePriceType QuotePriceType_2(10);
    noRelatedSym_0_0.set(QuotePriceType_2);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuotePriceType_2.getString());
    FIX::QuoteRequestType QuoteRequestType_2(1);
    noRelatedSym_0_0.set(QuoteRequestType_2);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuoteRequestType_2.getString());
    FIX::QuoteType QuoteType_8(1);
    noRelatedSym_0_0.set(QuoteType_8);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuoteType_8.getString());
    FIX::SettlDate SettlDate_34("LOCALMKTDATE_508741515");
    noRelatedSym_0_0.set(SettlDate_34);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlDate_34.getString());
    FIX::SettlDate2 SettlDate2_12("LOCALMKTDATE_774623733");
    noRelatedSym_0_0.set(SettlDate2_12);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlDate2_12.getString());
    FIX::SettlType SettlType_25("STRING_8");
    noRelatedSym_0_0.set(SettlType_25);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlType_25.getString());
    FIX::Side Side_42('A');
    noRelatedSym_0_0.set(Side_42);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Side_42.getString());
    FIX::TradeOriginationDate TradeOriginationDate_22("LOCALMKTDATE_102463375");
    noRelatedSym_0_0.set(TradeOriginationDate_22);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradeOriginationDate_22.getString());
    FIX::TradingSessionID TradingSessionID_64("STRING_6");
    noRelatedSym_0_0.set(TradingSessionID_64);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradingSessionID_64.getString());
    FIX::TradingSessionSubID TradingSessionSubID_64("STRING_5");
    noRelatedSym_0_0.set(TradingSessionSubID_64);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradingSessionSubID_64.getString());
    FIX::TransactTime TransactTime_48(FIX::UTCTIMESTAMP(19, 55, 37, 14, 72000));
    noRelatedSym_0_0.set(TransactTime_48);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TransactTime_48.getString());
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_21;
    FIX::AgreementCurrency AgreementCurrency_21("USD");
    noRelatedSym_0_0.set(AgreementCurrency_21);
    FinancingDetails_21.insert(AgreementCurrency_21.getString());
    FIX::AgreementDate AgreementDate_21("LOCALMKTDATE_740852292");
    noRelatedSym_0_0.set(AgreementDate_21);
    FinancingDetails_21.insert(AgreementDate_21.getString());
    FIX::AgreementDesc AgreementDesc_21("STRING_1958585009");
    noRelatedSym_0_0.set(AgreementDesc_21);
    FinancingDetails_21.insert(AgreementDesc_21.getString());
    FIX::AgreementID AgreementID_21("STRING_355731352");
    noRelatedSym_0_0.set(AgreementID_21);
    FinancingDetails_21.insert(AgreementID_21.getString());
    FIX::DeliveryType DeliveryType_21(1);
    noRelatedSym_0_0.set(DeliveryType_21);
    FinancingDetails_21.insert(DeliveryType_21.getString());
    FIX::EndDate EndDate_21("LOCALMKTDATE_1856907210");
    noRelatedSym_0_0.set(EndDate_21);
    FinancingDetails_21.insert(EndDate_21.getString());
    FIX::MarginRatio MarginRatio_21;
    MarginRatio_21.setString("67.380000");
    noRelatedSym_0_0.set(MarginRatio_21);
    FinancingDetails_21.insert(MarginRatio_21.getString());
    FIX::StartDate StartDate_21("LOCALMKTDATE_1879492775");
    noRelatedSym_0_0.set(StartDate_21);
    FinancingDetails_21.insert(StartDate_21.getString());
    FIX::TerminationType TerminationType_21(3);
    noRelatedSym_0_0.set(TerminationType_21);
    FinancingDetails_21.insert(TerminationType_21.getString());
    all_values.push_back(FinancingDetails_21);

    // Instrument
    multiset<string> Instrument_61;
    FIX::AttachmentPoint AttachmentPoint_61;
    AttachmentPoint_61.setString("97.600000");
    noRelatedSym_0_0.set(AttachmentPoint_61);
    Instrument_61.insert(AttachmentPoint_61.getString());
    FIX::CFICode CFICode_61("STRING_1686500069");
    noRelatedSym_0_0.set(CFICode_61);
    Instrument_61.insert(CFICode_61.getString());
    FIX::CPProgram CPProgram_61(99);
    noRelatedSym_0_0.set(CPProgram_61);
    Instrument_61.insert(CPProgram_61.getString());
    FIX::CPRegType CPRegType_61("STRING_1212757897");
    noRelatedSym_0_0.set(CPRegType_61);
    Instrument_61.insert(CPRegType_61.getString());
    FIX::CapPrice CapPrice_61;
    CapPrice_61.setString("3349120");
    noRelatedSym_0_0.set(CapPrice_61);
    Instrument_61.insert(CapPrice_61.getString());
    FIX::ContractMultiplier ContractMultiplier_61;
    ContractMultiplier_61.setString("10817294");
    noRelatedSym_0_0.set(ContractMultiplier_61);
    Instrument_61.insert(ContractMultiplier_61.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_61(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_61);
    Instrument_61.insert(ContractMultiplierUnit_61.getString());
    FIX::ContractSettlMonth ContractSettlMonth_61("MONTHYEAR_843653545");
    noRelatedSym_0_0.set(ContractSettlMonth_61);
    Instrument_61.insert(ContractSettlMonth_61.getString());
    FIX::CountryOfIssue CountryOfIssue_61("COUNTRY_1856353210");
    noRelatedSym_0_0.set(CountryOfIssue_61);
    Instrument_61.insert(CountryOfIssue_61.getString());
    FIX::CouponPaymentDate CouponPaymentDate_61("LOCALMKTDATE_1753192890");
    noRelatedSym_0_0.set(CouponPaymentDate_61);
    Instrument_61.insert(CouponPaymentDate_61.getString());
    FIX::CouponRate CouponRate_61;
    CouponRate_61.setString("49.460000");
    noRelatedSym_0_0.set(CouponRate_61);
    Instrument_61.insert(CouponRate_61.getString());
    FIX::CreditRating CreditRating_61("STRING_1958816585");
    noRelatedSym_0_0.set(CreditRating_61);
    Instrument_61.insert(CreditRating_61.getString());
    FIX::DatedDate DatedDate_61("LOCALMKTDATE_153188950");
    noRelatedSym_0_0.set(DatedDate_61);
    Instrument_61.insert(DatedDate_61.getString());
    FIX::DetachmentPoint DetachmentPoint_61;
    DetachmentPoint_61.setString("23.750000");
    noRelatedSym_0_0.set(DetachmentPoint_61);
    Instrument_61.insert(DetachmentPoint_61.getString());
    FIX::EncodedIssuer EncodedIssuer_61("DATA_1044096859");
    noRelatedSym_0_0.set(EncodedIssuer_61);
    Instrument_61.insert(EncodedIssuer_61.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_61(985229225);
    noRelatedSym_0_0.set(EncodedIssuerLen_61);
    Instrument_61.insert(EncodedIssuerLen_61.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_61("DATA_810281622");
    noRelatedSym_0_0.set(EncodedSecurityDesc_61);
    Instrument_61.insert(EncodedSecurityDesc_61.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_61(1182833936);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_61);
    Instrument_61.insert(EncodedSecurityDescLen_61.getString());
    FIX::ExerciseStyle ExerciseStyle_61(1);
    noRelatedSym_0_0.set(ExerciseStyle_61);
    Instrument_61.insert(ExerciseStyle_61.getString());
    FIX::Factor Factor_61;
    Factor_61.setString("10884866");
    noRelatedSym_0_0.set(Factor_61);
    Instrument_61.insert(Factor_61.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_61(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_61);
    Instrument_61.insert(FlexProductEligibilityIndicator_61.getString());
    FIX::FlexibleIndicator FlexibleIndicator_61(false);
    noRelatedSym_0_0.set(FlexibleIndicator_61);
    Instrument_61.insert(FlexibleIndicator_61.getString());
    FIX::FloorPrice FloorPrice_61;
    FloorPrice_61.setString("1702296");
    noRelatedSym_0_0.set(FloorPrice_61);
    Instrument_61.insert(FloorPrice_61.getString());
    FIX::FlowScheduleType FlowScheduleType_61(2);
    noRelatedSym_0_0.set(FlowScheduleType_61);
    Instrument_61.insert(FlowScheduleType_61.getString());
    FIX::InstrRegistry InstrRegistry_61("STRING_980952326");
    noRelatedSym_0_0.set(InstrRegistry_61);
    Instrument_61.insert(InstrRegistry_61.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_61('5');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_61);
    Instrument_61.insert(InstrmtAssignmentMethod_61.getString());
    FIX::InterestAccrualDate InterestAccrualDate_61("LOCALMKTDATE_141482532");
    noRelatedSym_0_0.set(InterestAccrualDate_61);
    Instrument_61.insert(InterestAccrualDate_61.getString());
    FIX::IssueDate IssueDate_61("LOCALMKTDATE_690375889");
    noRelatedSym_0_0.set(IssueDate_61);
    Instrument_61.insert(IssueDate_61.getString());
    FIX::Issuer Issuer_61("STRING_603837736");
    noRelatedSym_0_0.set(Issuer_61);
    Instrument_61.insert(Issuer_61.getString());
    FIX::ListMethod ListMethod_61(0);
    noRelatedSym_0_0.set(ListMethod_61);
    Instrument_61.insert(ListMethod_61.getString());
    FIX::LocaleOfIssue LocaleOfIssue_61("STRING_656090079");
    noRelatedSym_0_0.set(LocaleOfIssue_61);
    Instrument_61.insert(LocaleOfIssue_61.getString());
    FIX::MaturityDate MaturityDate_61("LOCALMKTDATE_885257497");
    noRelatedSym_0_0.set(MaturityDate_61);
    Instrument_61.insert(MaturityDate_61.getString());
    FIX::MaturityMonthYear MaturityMonthYear_61("MONTHYEAR_1559991729");
    noRelatedSym_0_0.set(MaturityMonthYear_61);
    Instrument_61.insert(MaturityMonthYear_61.getString());
    FIX::MaturityTime MaturityTime_61("TZTIMEONLY_1747103498");
    noRelatedSym_0_0.set(MaturityTime_61);
    Instrument_61.insert(MaturityTime_61.getString());
    FIX::MinPriceIncrement MinPriceIncrement_61;
    MinPriceIncrement_61.setString("20980153");
    noRelatedSym_0_0.set(MinPriceIncrement_61);
    Instrument_61.insert(MinPriceIncrement_61.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_61;
    MinPriceIncrementAmount_61.setString("18949037");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_61);
    Instrument_61.insert(MinPriceIncrementAmount_61.getString());
    FIX::NTPositionLimit NTPositionLimit_61(681349327);
    noRelatedSym_0_0.set(NTPositionLimit_61);
    Instrument_61.insert(NTPositionLimit_61.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_61;
    NotionalPercentageOutstanding_61.setString("41.120000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_61);
    Instrument_61.insert(NotionalPercentageOutstanding_61.getString());
    FIX::OptAttribute OptAttribute_61('5');
    noRelatedSym_0_0.set(OptAttribute_61);
    Instrument_61.insert(OptAttribute_61.getString());
    FIX::OptPayoutAmount OptPayoutAmount_61;
    OptPayoutAmount_61.setString("3902188");
    noRelatedSym_0_0.set(OptPayoutAmount_61);
    Instrument_61.insert(OptPayoutAmount_61.getString());
    FIX::OptPayoutType OptPayoutType_61(1);
    noRelatedSym_0_0.set(OptPayoutType_61);
    Instrument_61.insert(OptPayoutType_61.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_61;
    OriginalNotionalPercentageOutstanding_61.setString("86.020000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_61);
    Instrument_61.insert(OriginalNotionalPercentageOutstanding_61.getString());
    FIX::Pool Pool_61("STRING_201551827");
    noRelatedSym_0_0.set(Pool_61);
    Instrument_61.insert(Pool_61.getString());
    FIX::PositionLimit PositionLimit_61(1427192305);
    noRelatedSym_0_0.set(PositionLimit_61);
    Instrument_61.insert(PositionLimit_61.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_61("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_61);
    Instrument_61.insert(PriceQuoteMethod_61.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_61("STRING_1245648686");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_61);
    Instrument_61.insert(PriceUnitOfMeasure_61.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_61;
    PriceUnitOfMeasureQty_61.setString("2649378");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_61);
    Instrument_61.insert(PriceUnitOfMeasureQty_61.getString());
    FIX::Product Product_63(9);
    noRelatedSym_0_0.set(Product_63);
    Instrument_61.insert(Product_63.getString());
    FIX::ProductComplex ProductComplex_61("STRING_280998975");
    noRelatedSym_0_0.set(ProductComplex_61);
    Instrument_61.insert(ProductComplex_61.getString());
    FIX::PutOrCall PutOrCall_61(1);
    noRelatedSym_0_0.set(PutOrCall_61);
    Instrument_61.insert(PutOrCall_61.getString());
    FIX::RedemptionDate RedemptionDate_61("LOCALMKTDATE_313901943");
    noRelatedSym_0_0.set(RedemptionDate_61);
    Instrument_61.insert(RedemptionDate_61.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_61("STRING_1522982730");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_61);
    Instrument_61.insert(RepoCollateralSecurityType_61.getString());
    FIX::RepurchaseRate RepurchaseRate_61;
    RepurchaseRate_61.setString("45.460000");
    noRelatedSym_0_0.set(RepurchaseRate_61);
    Instrument_61.insert(RepurchaseRate_61.getString());
    FIX::RepurchaseTerm RepurchaseTerm_61(484131590);
    noRelatedSym_0_0.set(RepurchaseTerm_61);
    Instrument_61.insert(RepurchaseTerm_61.getString());
    FIX::RestructuringType RestructuringType_61("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_61);
    Instrument_61.insert(RestructuringType_61.getString());
    FIX::SecurityDesc SecurityDesc_61("STRING_879743225");
    noRelatedSym_0_0.set(SecurityDesc_61);
    Instrument_61.insert(SecurityDesc_61.getString());
    FIX::SecurityExchange SecurityExchange_61("EXCHANGE_1010092588");
    noRelatedSym_0_0.set(SecurityExchange_61);
    Instrument_61.insert(SecurityExchange_61.getString());
    FIX::SecurityGroup SecurityGroup_61("STRING_1499817662");
    noRelatedSym_0_0.set(SecurityGroup_61);
    Instrument_61.insert(SecurityGroup_61.getString());
    FIX::SecurityID SecurityID_61("STRING_1570119114");
    noRelatedSym_0_0.set(SecurityID_61);
    Instrument_61.insert(SecurityID_61.getString());
    FIX::SecurityIDSource SecurityIDSource_61("STRING_8");
    noRelatedSym_0_0.set(SecurityIDSource_61);
    Instrument_61.insert(SecurityIDSource_61.getString());
    FIX::SecurityStatus SecurityStatus_61("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_61);
    Instrument_61.insert(SecurityStatus_61.getString());
    FIX::SecuritySubType SecuritySubType_62("STRING_78725545");
    noRelatedSym_0_0.set(SecuritySubType_62);
    Instrument_61.insert(SecuritySubType_62.getString());
    FIX::SecurityType SecurityType_63("STRING_SPCLO");
    noRelatedSym_0_0.set(SecurityType_63);
    Instrument_61.insert(SecurityType_63.getString());
    FIX::Seniority Seniority_61("STRING_SR");
    noRelatedSym_0_0.set(Seniority_61);
    Instrument_61.insert(Seniority_61.getString());
    FIX::SettlMethod SettlMethod_61('C');
    noRelatedSym_0_0.set(SettlMethod_61);
    Instrument_61.insert(SettlMethod_61.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_61("STRING_302235920");
    noRelatedSym_0_0.set(SettleOnOpenFlag_61);
    Instrument_61.insert(SettleOnOpenFlag_61.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_61("STRING_533237514");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_61);
    Instrument_61.insert(StateOrProvinceOfIssue_61.getString());
    FIX::StrikeCurrency StrikeCurrency_61("USD");
    noRelatedSym_0_0.set(StrikeCurrency_61);
    Instrument_61.insert(StrikeCurrency_61.getString());
    FIX::StrikeMultiplier StrikeMultiplier_61;
    StrikeMultiplier_61.setString("11243111");
    noRelatedSym_0_0.set(StrikeMultiplier_61);
    Instrument_61.insert(StrikeMultiplier_61.getString());
    FIX::StrikePrice StrikePrice_61;
    StrikePrice_61.setString("7499136");
    noRelatedSym_0_0.set(StrikePrice_61);
    Instrument_61.insert(StrikePrice_61.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_61(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_61);
    Instrument_61.insert(StrikePriceBoundaryMethod_61.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_61;
    StrikePriceBoundaryPrecision_61.setString("61.240000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_61);
    Instrument_61.insert(StrikePriceBoundaryPrecision_61.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_61(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_61);
    Instrument_61.insert(StrikePriceDeterminationMethod_61.getString());
    FIX::StrikeValue StrikeValue_61;
    StrikeValue_61.setString("3767583");
    noRelatedSym_0_0.set(StrikeValue_61);
    Instrument_61.insert(StrikeValue_61.getString());
    FIX::Symbol Symbol_61("STRING_958413453");
    noRelatedSym_0_0.set(Symbol_61);
    Instrument_61.insert(Symbol_61.getString());
    FIX::SymbolSfx SymbolSfx_61("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_61);
    Instrument_61.insert(SymbolSfx_61.getString());
    FIX::TimeUnit TimeUnit_61("STRING_Yr");
    noRelatedSym_0_0.set(TimeUnit_61);
    Instrument_61.insert(TimeUnit_61.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_61(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_61);
    Instrument_61.insert(UnderlyingPriceDeterminationMethod_61.getString());
    FIX::UnitOfMeasure UnitOfMeasure_61("STRING_Alw");
    noRelatedSym_0_0.set(UnitOfMeasure_61);
    Instrument_61.insert(UnitOfMeasure_61.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_61;
    UnitOfMeasureQty_61.setString("15181198");
    noRelatedSym_0_0.set(UnitOfMeasureQty_61);
    Instrument_61.insert(UnitOfMeasureQty_61.getString());
    FIX::ValuationMethod ValuationMethod_61("STRING_CDSD");
    noRelatedSym_0_0.set(ValuationMethod_61);
    Instrument_61.insert(ValuationMethod_61.getString());
    all_values.push_back(Instrument_61);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_117;
      FIX::ComplexEventCondition ComplexEventCondition_117(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_117);
      ComplexEvents_NoComplexEvents_117.insert(ComplexEventCondition_117.getString());
      FIX::ComplexEventPrice ComplexEventPrice_117;
      ComplexEventPrice_117.setString("9818622");
      noComplexEvents_0_1_0.set(ComplexEventPrice_117);
      ComplexEvents_NoComplexEvents_117.insert(ComplexEventPrice_117.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_117(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_117);
      ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceBoundaryMethod_117.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_117;
      ComplexEventPriceBoundaryPrecision_117.setString("3.350000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_117);
      ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceBoundaryPrecision_117.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_117(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_117);
      ComplexEvents_NoComplexEvents_117.insert(ComplexEventPriceTimeType_117.getString());
      FIX::ComplexEventType ComplexEventType_117(4);
      noComplexEvents_0_1_0.set(ComplexEventType_117);
      ComplexEvents_NoComplexEvents_117.insert(ComplexEventType_117.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_117;
      ComplexOptPayoutAmount_117.setString("17192894");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_117);
      ComplexEvents_NoComplexEvents_117.insert(ComplexOptPayoutAmount_117.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_117);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_242;
        FIX::ComplexEventEndDate ComplexEventEndDate_242(FIX::UTCTIMESTAMP(10, 49, 17, 22, 102011));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_242);
        ComplexEventDates_NoComplexEventDates_242.insert(ComplexEventEndDate_242.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_242(FIX::UTCTIMESTAMP(1, 41, 39, 13, 22006));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_242);
        ComplexEventDates_NoComplexEventDates_242.insert(ComplexEventStartDate_242.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_242);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_476;
          FIX::ComplexEventEndTime ComplexEventEndTime_476(FIX::UTCTIMEONLY(16, 0, 46));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_476);
          ComplexEventTimes_NoComplexEventTimes_476.insert(ComplexEventEndTime_476.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_476(FIX::UTCTIMEONLY(19, 25, 51));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_476);
          ComplexEventTimes_NoComplexEventTimes_476.insert(ComplexEventStartTime_476.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_476);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_477;
          FIX::ComplexEventEndTime ComplexEventEndTime_477(FIX::UTCTIMEONLY(11, 49, 56));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_477);
          ComplexEventTimes_NoComplexEventTimes_477.insert(ComplexEventEndTime_477.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_477(FIX::UTCTIMEONLY(1, 57, 12));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_477);
          ComplexEventTimes_NoComplexEventTimes_477.insert(ComplexEventStartTime_477.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_477);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_243;
        FIX::ComplexEventEndDate ComplexEventEndDate_243(FIX::UTCTIMESTAMP(20, 53, 40, 2, 72009));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_243);
        ComplexEventDates_NoComplexEventDates_243.insert(ComplexEventEndDate_243.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_243(FIX::UTCTIMESTAMP(23, 24, 0, 16, 22010));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_243);
        ComplexEventDates_NoComplexEventDates_243.insert(ComplexEventStartDate_243.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_243);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_478;
          FIX::ComplexEventEndTime ComplexEventEndTime_478(FIX::UTCTIMEONLY(12, 10, 41));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_478);
          ComplexEventTimes_NoComplexEventTimes_478.insert(ComplexEventEndTime_478.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_478(FIX::UTCTIMEONLY(9, 58, 42));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_478);
          ComplexEventTimes_NoComplexEventTimes_478.insert(ComplexEventStartTime_478.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_478);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_244;
        FIX::ComplexEventEndDate ComplexEventEndDate_244(FIX::UTCTIMESTAMP(9, 31, 11, 6, 12015));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_244);
        ComplexEventDates_NoComplexEventDates_244.insert(ComplexEventEndDate_244.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_244(FIX::UTCTIMESTAMP(23, 33, 11, 19, 82009));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_244);
        ComplexEventDates_NoComplexEventDates_244.insert(ComplexEventStartDate_244.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_244);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_479;
          FIX::ComplexEventEndTime ComplexEventEndTime_479(FIX::UTCTIMEONLY(1, 14, 32));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_479);
          ComplexEventTimes_NoComplexEventTimes_479.insert(ComplexEventEndTime_479.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_479(FIX::UTCTIMEONLY(19, 16, 15));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_479);
          ComplexEventTimes_NoComplexEventTimes_479.insert(ComplexEventStartTime_479.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_479);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_480;
          FIX::ComplexEventEndTime ComplexEventEndTime_480(FIX::UTCTIMEONLY(5, 25, 43));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_480);
          ComplexEventTimes_NoComplexEventTimes_480.insert(ComplexEventEndTime_480.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_480(FIX::UTCTIMEONLY(11, 41, 14));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_480);
          ComplexEventTimes_NoComplexEventTimes_480.insert(ComplexEventStartTime_480.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_480);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_121;
      FIX::EventDate EventDate_121("LOCALMKTDATE_37383199");
      noEvents_0_1_0.set(EventDate_121);
      EvntGrp_NoEvents_121.insert(EventDate_121.getString());
      FIX::EventPx EventPx_121;
      EventPx_121.setString("4107199");
      noEvents_0_1_0.set(EventPx_121);
      EvntGrp_NoEvents_121.insert(EventPx_121.getString());
      FIX::EventText EventText_121("STRING_75555609");
      noEvents_0_1_0.set(EventText_121);
      EvntGrp_NoEvents_121.insert(EventText_121.getString());
      FIX::EventTime EventTime_121(FIX::UTCTIMESTAMP(1, 18, 0, 8, 82015));
      noEvents_0_1_0.set(EventTime_121);
      EvntGrp_NoEvents_121.insert(EventTime_121.getString());
      FIX::EventType EventType_121(12);
      noEvents_0_1_0.set(EventType_121);
      EvntGrp_NoEvents_121.insert(EventType_121.getString());
      all_values.push_back(EvntGrp_NoEvents_121);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_112;
      FIX::InstrumentPartyID InstrumentPartyID_112("STRING_1993509061");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_112);
      InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyID_112.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_112('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_112);
      InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyIDSource_112.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_112(582239907);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_112);
      InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyRole_112.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_112);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222;
        FIX::InstrumentPartySubID InstrumentPartySubID_222("STRING_634780355");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_222);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222.insert(InstrumentPartySubID_222.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_222(2101043279);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_222);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222.insert(InstrumentPartySubIDType_222.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_113;
      FIX::InstrumentPartyID InstrumentPartyID_113("STRING_990777347");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_113);
      InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyID_113.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_113('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_113);
      InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyIDSource_113.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_113(85742767);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_113);
      InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyRole_113.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_113);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223;
        FIX::InstrumentPartySubID InstrumentPartySubID_223("STRING_1426873664");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_223);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223.insert(InstrumentPartySubID_223.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_223(270886668);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_223);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223.insert(InstrumentPartySubIDType_223.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_126;
      FIX::SecurityAltID SecurityAltID_126("STRING_1969586727");
      noSecurityAltID_0_1_0.set(SecurityAltID_126);
      SecAltIDGrp_NoSecurityAltID_126.insert(SecurityAltID_126.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_126("STRING_131718140");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_126);
      SecAltIDGrp_NoSecurityAltID_126.insert(SecurityAltIDSource_126.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_126);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_127;
      FIX::SecurityAltID SecurityAltID_127("STRING_2065441579");
      noSecurityAltID_0_1_1.set(SecurityAltID_127);
      SecAltIDGrp_NoSecurityAltID_127.insert(SecurityAltID_127.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_127("STRING_781566300");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_127);
      SecAltIDGrp_NoSecurityAltID_127.insert(SecurityAltIDSource_127.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_127);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_128;
      FIX::SecurityAltID SecurityAltID_128("STRING_1144576174");
      noSecurityAltID_0_1_2.set(SecurityAltID_128);
      SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltID_128.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_128("STRING_496302377");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_128);
      SecAltIDGrp_NoSecurityAltID_128.insert(SecurityAltIDSource_128.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_128);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_122;
    FIX::SecurityXML SecurityXML_123("XMLDATA_818949499");
    noRelatedSym_0_0.set(SecurityXML_123);
    FIX::SecurityXMLLen SecurityXMLLen_61(1555296131);
    noRelatedSym_0_0.set(SecurityXMLLen_61);
    FIX::SecurityXMLSchema SecurityXMLSchema_61("STRING_571857987");
    noRelatedSym_0_0.set(SecurityXMLSchema_61);
    SecurityXML_122.insert(SecurityXMLSchema_61.getString());
    all_values.push_back(SecurityXML_122);

    // OrderQtyData
    multiset<string> OrderQtyData_22;
    FIX::CashOrderQty CashOrderQty_22;
    CashOrderQty_22.setString("5873773");
    noRelatedSym_0_0.set(CashOrderQty_22);
    OrderQtyData_22.insert(CashOrderQty_22.getString());
    FIX::OrderPercent OrderPercent_22;
    OrderPercent_22.setString("10.520000");
    noRelatedSym_0_0.set(OrderPercent_22);
    OrderQtyData_22.insert(OrderPercent_22.getString());
    FIX::OrderQty OrderQty_31;
    OrderQty_31.setString("4090730");
    noRelatedSym_0_0.set(OrderQty_31);
    OrderQtyData_22.insert(OrderQty_31.getString());
    FIX::RoundingDirection RoundingDirection_22('0');
    noRelatedSym_0_0.set(RoundingDirection_22);
    OrderQtyData_22.insert(RoundingDirection_22.getString());
    FIX::RoundingModulus RoundingModulus_22;
    RoundingModulus_22.setString("13059282");
    noRelatedSym_0_0.set(RoundingModulus_22);
    OrderQtyData_22.insert(RoundingModulus_22.getString());
    all_values.push_back(OrderQtyData_22);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_114;
      FIX::PartyID PartyID_114("STRING_983643288");
      noPartyIDs_0_1_0.set(PartyID_114);
      Parties_NoPartyIDs_114.insert(PartyID_114.getString());
      FIX::PartyIDSource PartyIDSource_114('1');
      noPartyIDs_0_1_0.set(PartyIDSource_114);
      Parties_NoPartyIDs_114.insert(PartyIDSource_114.getString());
      FIX::PartyRole PartyRole_114(34);
      noPartyIDs_0_1_0.set(PartyRole_114);
      Parties_NoPartyIDs_114.insert(PartyRole_114.getString());
      all_values.push_back(Parties_NoPartyIDs_114);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_223;
        FIX::PartySubID PartySubID_223("STRING_1743385568");
        noPartySubIDs_0_0_2_0.set(PartySubID_223);
        PtysSubGrp_NoPartySubIDs_223.insert(PartySubID_223.getString());
        FIX::PartySubIDType PartySubIDType_223(21);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_223);
        PtysSubGrp_NoPartySubIDs_223.insert(PartySubIDType_223.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_223);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_224;
        FIX::PartySubID PartySubID_224("STRING_1115879483");
        noPartySubIDs_0_0_2_1.set(PartySubID_224);
        PtysSubGrp_NoPartySubIDs_224.insert(PartySubID_224.getString());
        FIX::PartySubIDType PartySubIDType_224(33);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_224);
        PtysSubGrp_NoPartySubIDs_224.insert(PartySubIDType_224.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_224);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_225;
        FIX::PartySubID PartySubID_225("STRING_1040559686");
        noPartySubIDs_0_0_2_2.set(PartySubID_225);
        PtysSubGrp_NoPartySubIDs_225.insert(PartySubID_225.getString());
        FIX::PartySubIDType PartySubIDType_225(27);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_225);
        PtysSubGrp_NoPartySubIDs_225.insert(PartySubIDType_225.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_225);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_7;
      FIX::QuoteQualifier QuoteQualifier_7('1');
      noQuoteQualifiers_0_1_0.set(QuoteQualifier_7);
      QuotQualGrp_NoQuoteQualifiers_7.insert(QuoteQualifier_7.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_7);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_8;
      FIX::QuoteQualifier QuoteQualifier_8('1');
      noQuoteQualifiers_0_1_1.set(QuoteQualifier_8);
      QuotQualGrp_NoQuoteQualifiers_8.insert(QuoteQualifier_8.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_8);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_2;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_9;
      FIX::QuoteQualifier QuoteQualifier_9('9');
      noQuoteQualifiers_0_1_2.set(QuoteQualifier_9);
      QuotQualGrp_NoQuoteQualifiers_9.insert(QuoteQualifier_9.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_9);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_2);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_5;
      FIX::LegOrderQty LegOrderQty_11;
      LegOrderQty_11.setString("13247930");
      noLegs_0_1_0.set(LegOrderQty_11);
      QuotReqLegsGrp_NoLegs_5.insert(LegOrderQty_11.getString());
      FIX::LegQty LegQty_11;
      LegQty_11.setString("8062949");
      noLegs_0_1_0.set(LegQty_11);
      QuotReqLegsGrp_NoLegs_5.insert(LegQty_11.getString());
      FIX::LegRefID LegRefID_11("STRING_1528907262");
      noLegs_0_1_0.set(LegRefID_11);
      QuotReqLegsGrp_NoLegs_5.insert(LegRefID_11.getString());
      FIX::LegSettlDate LegSettlDate_11("LOCALMKTDATE_1242750938");
      noLegs_0_1_0.set(LegSettlDate_11);
      QuotReqLegsGrp_NoLegs_5.insert(LegSettlDate_11.getString());
      FIX::LegSettlType LegSettlType_11('1');
      noLegs_0_1_0.set(LegSettlType_11);
      QuotReqLegsGrp_NoLegs_5.insert(LegSettlType_11.getString());
      FIX::LegSwapType LegSwapType_11(2);
      noLegs_0_1_0.set(LegSwapType_11);
      QuotReqLegsGrp_NoLegs_5.insert(LegSwapType_11.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_5);

      // InstrumentLeg
      multiset<string> InstrumentLeg_80;
      FIX::EncodedLegIssuer EncodedLegIssuer_80("DATA_1739053315");
      noLegs_0_1_0.set(EncodedLegIssuer_80);
      InstrumentLeg_80.insert(EncodedLegIssuer_80.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_80(259327104);
      noLegs_0_1_0.set(EncodedLegIssuerLen_80);
      InstrumentLeg_80.insert(EncodedLegIssuerLen_80.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_80("DATA_2081295920");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_80);
      InstrumentLeg_80.insert(EncodedLegSecurityDesc_80.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_80(163427654);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_80);
      InstrumentLeg_80.insert(EncodedLegSecurityDescLen_80.getString());
      FIX::LegCFICode LegCFICode_80("STRING_846704477");
      noLegs_0_1_0.set(LegCFICode_80);
      InstrumentLeg_80.insert(LegCFICode_80.getString());
      FIX::LegContractMultiplier LegContractMultiplier_80;
      LegContractMultiplier_80.setString("21078069");
      noLegs_0_1_0.set(LegContractMultiplier_80);
      InstrumentLeg_80.insert(LegContractMultiplier_80.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_80(572500672);
      noLegs_0_1_0.set(LegContractMultiplierUnit_80);
      InstrumentLeg_80.insert(LegContractMultiplierUnit_80.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_80("MONTHYEAR_897597002");
      noLegs_0_1_0.set(LegContractSettlMonth_80);
      InstrumentLeg_80.insert(LegContractSettlMonth_80.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_80("COUNTRY_1266251601");
      noLegs_0_1_0.set(LegCountryOfIssue_80);
      InstrumentLeg_80.insert(LegCountryOfIssue_80.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_80("LOCALMKTDATE_495427745");
      noLegs_0_1_0.set(LegCouponPaymentDate_80);
      InstrumentLeg_80.insert(LegCouponPaymentDate_80.getString());
      FIX::LegCouponRate LegCouponRate_80;
      LegCouponRate_80.setString("2.910000");
      noLegs_0_1_0.set(LegCouponRate_80);
      InstrumentLeg_80.insert(LegCouponRate_80.getString());
      FIX::LegCreditRating LegCreditRating_80("STRING_1098529261");
      noLegs_0_1_0.set(LegCreditRating_80);
      InstrumentLeg_80.insert(LegCreditRating_80.getString());
      FIX::LegCurrency LegCurrency_80("USD");
      noLegs_0_1_0.set(LegCurrency_80);
      InstrumentLeg_80.insert(LegCurrency_80.getString());
      FIX::LegDatedDate LegDatedDate_80("LOCALMKTDATE_694431181");
      noLegs_0_1_0.set(LegDatedDate_80);
      InstrumentLeg_80.insert(LegDatedDate_80.getString());
      FIX::LegExerciseStyle LegExerciseStyle_80(2087187948);
      noLegs_0_1_0.set(LegExerciseStyle_80);
      InstrumentLeg_80.insert(LegExerciseStyle_80.getString());
      FIX::LegFactor LegFactor_80;
      LegFactor_80.setString("16793048");
      noLegs_0_1_0.set(LegFactor_80);
      InstrumentLeg_80.insert(LegFactor_80.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_80(925113457);
      noLegs_0_1_0.set(LegFlowScheduleType_80);
      InstrumentLeg_80.insert(LegFlowScheduleType_80.getString());
      FIX::LegInstrRegistry LegInstrRegistry_80("STRING_980263986");
      noLegs_0_1_0.set(LegInstrRegistry_80);
      InstrumentLeg_80.insert(LegInstrRegistry_80.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_80("LOCALMKTDATE_1638478011");
      noLegs_0_1_0.set(LegInterestAccrualDate_80);
      InstrumentLeg_80.insert(LegInterestAccrualDate_80.getString());
      FIX::LegIssueDate LegIssueDate_80("LOCALMKTDATE_482431666");
      noLegs_0_1_0.set(LegIssueDate_80);
      InstrumentLeg_80.insert(LegIssueDate_80.getString());
      FIX::LegIssuer LegIssuer_80("STRING_2106566439");
      noLegs_0_1_0.set(LegIssuer_80);
      InstrumentLeg_80.insert(LegIssuer_80.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_80("STRING_524121529");
      noLegs_0_1_0.set(LegLocaleOfIssue_80);
      InstrumentLeg_80.insert(LegLocaleOfIssue_80.getString());
      FIX::LegMaturityDate LegMaturityDate_80("LOCALMKTDATE_1466623540");
      noLegs_0_1_0.set(LegMaturityDate_80);
      InstrumentLeg_80.insert(LegMaturityDate_80.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_80("MONTHYEAR_1356271913");
      noLegs_0_1_0.set(LegMaturityMonthYear_80);
      InstrumentLeg_80.insert(LegMaturityMonthYear_80.getString());
      FIX::LegMaturityTime LegMaturityTime_80("TZTIMEONLY_1848914535");
      noLegs_0_1_0.set(LegMaturityTime_80);
      InstrumentLeg_80.insert(LegMaturityTime_80.getString());
      FIX::LegOptAttribute LegOptAttribute_80('1');
      noLegs_0_1_0.set(LegOptAttribute_80);
      InstrumentLeg_80.insert(LegOptAttribute_80.getString());
      FIX::LegOptionRatio LegOptionRatio_80;
      LegOptionRatio_80.setString("7376955");
      noLegs_0_1_0.set(LegOptionRatio_80);
      InstrumentLeg_80.insert(LegOptionRatio_80.getString());
      FIX::LegPool LegPool_80("STRING_944181825");
      noLegs_0_1_0.set(LegPool_80);
      InstrumentLeg_80.insert(LegPool_80.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_80("STRING_1713296097");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_80);
      InstrumentLeg_80.insert(LegPriceUnitOfMeasure_80.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_80;
      LegPriceUnitOfMeasureQty_80.setString("12636953");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_80);
      InstrumentLeg_80.insert(LegPriceUnitOfMeasureQty_80.getString());
      FIX::LegProduct LegProduct_80(535751493);
      noLegs_0_1_0.set(LegProduct_80);
      InstrumentLeg_80.insert(LegProduct_80.getString());
      FIX::LegPutOrCall LegPutOrCall_80(1972623202);
      noLegs_0_1_0.set(LegPutOrCall_80);
      InstrumentLeg_80.insert(LegPutOrCall_80.getString());
      FIX::LegRatioQty LegRatioQty_80;
      LegRatioQty_80.setString("11975075");
      noLegs_0_1_0.set(LegRatioQty_80);
      InstrumentLeg_80.insert(LegRatioQty_80.getString());
      FIX::LegRedemptionDate LegRedemptionDate_80("LOCALMKTDATE_699179147");
      noLegs_0_1_0.set(LegRedemptionDate_80);
      InstrumentLeg_80.insert(LegRedemptionDate_80.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_80("STRING_671844031");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_80);
      InstrumentLeg_80.insert(LegRepoCollateralSecurityType_80.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_80;
      LegRepurchaseRate_80.setString("9.140000");
      noLegs_0_1_0.set(LegRepurchaseRate_80);
      InstrumentLeg_80.insert(LegRepurchaseRate_80.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_80(1271679819);
      noLegs_0_1_0.set(LegRepurchaseTerm_80);
      InstrumentLeg_80.insert(LegRepurchaseTerm_80.getString());
      FIX::LegSecurityDesc LegSecurityDesc_80("STRING_1569441034");
      noLegs_0_1_0.set(LegSecurityDesc_80);
      InstrumentLeg_80.insert(LegSecurityDesc_80.getString());
      FIX::LegSecurityExchange LegSecurityExchange_80("EXCHANGE_276598868");
      noLegs_0_1_0.set(LegSecurityExchange_80);
      InstrumentLeg_80.insert(LegSecurityExchange_80.getString());
      FIX::LegSecurityID LegSecurityID_80("STRING_1767107564");
      noLegs_0_1_0.set(LegSecurityID_80);
      InstrumentLeg_80.insert(LegSecurityID_80.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_80("STRING_1303197677");
      noLegs_0_1_0.set(LegSecurityIDSource_80);
      InstrumentLeg_80.insert(LegSecurityIDSource_80.getString());
      FIX::LegSecuritySubType LegSecuritySubType_80("STRING_1375128129");
      noLegs_0_1_0.set(LegSecuritySubType_80);
      InstrumentLeg_80.insert(LegSecuritySubType_80.getString());
      FIX::LegSecurityType LegSecurityType_80("STRING_619811809");
      noLegs_0_1_0.set(LegSecurityType_80);
      InstrumentLeg_80.insert(LegSecurityType_80.getString());
      FIX::LegSide LegSide_80('1');
      noLegs_0_1_0.set(LegSide_80);
      InstrumentLeg_80.insert(LegSide_80.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_80("STRING_2069559310");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_80);
      InstrumentLeg_80.insert(LegStateOrProvinceOfIssue_80.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_80("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_80);
      InstrumentLeg_80.insert(LegStrikeCurrency_80.getString());
      FIX::LegStrikePrice LegStrikePrice_80;
      LegStrikePrice_80.setString("8471891");
      noLegs_0_1_0.set(LegStrikePrice_80);
      InstrumentLeg_80.insert(LegStrikePrice_80.getString());
      FIX::LegSymbol LegSymbol_80("STRING_1539780095");
      noLegs_0_1_0.set(LegSymbol_80);
      InstrumentLeg_80.insert(LegSymbol_80.getString());
      FIX::LegSymbolSfx LegSymbolSfx_80("STRING_889438564");
      noLegs_0_1_0.set(LegSymbolSfx_80);
      InstrumentLeg_80.insert(LegSymbolSfx_80.getString());
      FIX::LegTimeUnit LegTimeUnit_80("STRING_1329620786");
      noLegs_0_1_0.set(LegTimeUnit_80);
      InstrumentLeg_80.insert(LegTimeUnit_80.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_80("STRING_1498862887");
      noLegs_0_1_0.set(LegUnitOfMeasure_80);
      InstrumentLeg_80.insert(LegUnitOfMeasure_80.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_80;
      LegUnitOfMeasureQty_80.setString("14135600");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_80);
      InstrumentLeg_80.insert(LegUnitOfMeasureQty_80.getString());
      all_values.push_back(InstrumentLeg_80);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_139;
        FIX::LegSecurityAltID LegSecurityAltID_139("STRING_707651152");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_139);
        LegSecAltIDGrp_NoLegSecurityAltID_139.insert(LegSecurityAltID_139.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_139("STRING_1114990981");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_139);
        LegSecAltIDGrp_NoLegSecurityAltID_139.insert(LegSecurityAltIDSource_139.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_139);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_140;
        FIX::LegSecurityAltID LegSecurityAltID_140("STRING_774195522");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_140);
        LegSecAltIDGrp_NoLegSecurityAltID_140.insert(LegSecurityAltID_140.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_140("STRING_1445346680");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_140);
        LegSecAltIDGrp_NoLegSecurityAltID_140.insert(LegSecurityAltIDSource_140.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_140);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_6;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_6("GBP");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurveCurrency_6.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_6("STRING_561558349");
      noLegs_0_1_0.set(LegBenchmarkCurveName_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurveName_6.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_6("STRING_447440651");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurvePoint_6.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_6;
      LegBenchmarkPrice_6.setString("1651475");
      noLegs_0_1_0.set(LegBenchmarkPrice_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkPrice_6.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_6(1759065939);
      noLegs_0_1_0.set(LegBenchmarkPriceType_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkPriceType_6.getString());
      all_values.push_back(LegBenchmarkCurveData_6);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_27;
        FIX::LegStipulationType LegStipulationType_27("STRING_836991557");
        noLegStipulations_0_0_2_0.set(LegStipulationType_27);
        LegStipulations_NoLegStipulations_27.insert(LegStipulationType_27.getString());
        FIX::LegStipulationValue LegStipulationValue_27("STRING_769413205");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_27);
        LegStipulations_NoLegStipulations_27.insert(LegStipulationValue_27.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_27);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_28;
        FIX::LegStipulationType LegStipulationType_28("STRING_270815970");
        noLegStipulations_0_0_2_1.set(LegStipulationType_28);
        LegStipulations_NoLegStipulations_28.insert(LegStipulationType_28.getString());
        FIX::LegStipulationValue LegStipulationValue_28("STRING_258948943");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_28);
        LegStipulations_NoLegStipulations_28.insert(LegStipulationValue_28.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_28);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_29;
        FIX::LegStipulationType LegStipulationType_29("STRING_1046012073");
        noLegStipulations_0_0_2_2.set(LegStipulationType_29);
        LegStipulations_NoLegStipulations_29.insert(LegStipulationType_29.getString());
        FIX::LegStipulationValue LegStipulationValue_29("STRING_2037923535");
        noLegStipulations_0_0_2_2.set(LegStipulationValue_29);
        LegStipulations_NoLegStipulations_29.insert(LegStipulationValue_29.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_29);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_104;
        FIX::NestedPartyID NestedPartyID_104("STRING_273656554");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyID_104.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_104('5');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyIDSource_104.getString());
        FIX::NestedPartyRole NestedPartyRole_104(1281285994);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyRole_104.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_104);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_196;
          FIX::NestedPartySubID NestedPartySubID_196("STRING_1069767806");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_196);
          NstdPtysSubGrp_NoNestedPartySubIDs_196.insert(NestedPartySubID_196.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_196(532246547);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_196);
          NstdPtysSubGrp_NoNestedPartySubIDs_196.insert(NestedPartySubIDType_196.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_196);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_197;
          FIX::NestedPartySubID NestedPartySubID_197("STRING_1042921336");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_197);
          NstdPtysSubGrp_NoNestedPartySubIDs_197.insert(NestedPartySubID_197.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_197(462064253);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_197);
          NstdPtysSubGrp_NoNestedPartySubIDs_197.insert(NestedPartySubIDType_197.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_197);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_6;
      FIX::LegOrderQty LegOrderQty_12;
      LegOrderQty_12.setString("14216851");
      noLegs_0_1_1.set(LegOrderQty_12);
      QuotReqLegsGrp_NoLegs_6.insert(LegOrderQty_12.getString());
      FIX::LegQty LegQty_12;
      LegQty_12.setString("2250584");
      noLegs_0_1_1.set(LegQty_12);
      QuotReqLegsGrp_NoLegs_6.insert(LegQty_12.getString());
      FIX::LegRefID LegRefID_12("STRING_1960927140");
      noLegs_0_1_1.set(LegRefID_12);
      QuotReqLegsGrp_NoLegs_6.insert(LegRefID_12.getString());
      FIX::LegSettlDate LegSettlDate_12("LOCALMKTDATE_687761557");
      noLegs_0_1_1.set(LegSettlDate_12);
      QuotReqLegsGrp_NoLegs_6.insert(LegSettlDate_12.getString());
      FIX::LegSettlType LegSettlType_12('8');
      noLegs_0_1_1.set(LegSettlType_12);
      QuotReqLegsGrp_NoLegs_6.insert(LegSettlType_12.getString());
      FIX::LegSwapType LegSwapType_12(2);
      noLegs_0_1_1.set(LegSwapType_12);
      QuotReqLegsGrp_NoLegs_6.insert(LegSwapType_12.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_6);

      // InstrumentLeg
      multiset<string> InstrumentLeg_81;
      FIX::EncodedLegIssuer EncodedLegIssuer_81("DATA_1802752538");
      noLegs_0_1_1.set(EncodedLegIssuer_81);
      InstrumentLeg_81.insert(EncodedLegIssuer_81.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_81(1648014675);
      noLegs_0_1_1.set(EncodedLegIssuerLen_81);
      InstrumentLeg_81.insert(EncodedLegIssuerLen_81.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_81("DATA_1966441325");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_81);
      InstrumentLeg_81.insert(EncodedLegSecurityDesc_81.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_81(1714441697);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_81);
      InstrumentLeg_81.insert(EncodedLegSecurityDescLen_81.getString());
      FIX::LegCFICode LegCFICode_81("STRING_1988022647");
      noLegs_0_1_1.set(LegCFICode_81);
      InstrumentLeg_81.insert(LegCFICode_81.getString());
      FIX::LegContractMultiplier LegContractMultiplier_81;
      LegContractMultiplier_81.setString("3805160");
      noLegs_0_1_1.set(LegContractMultiplier_81);
      InstrumentLeg_81.insert(LegContractMultiplier_81.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_81(14398700);
      noLegs_0_1_1.set(LegContractMultiplierUnit_81);
      InstrumentLeg_81.insert(LegContractMultiplierUnit_81.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_81("MONTHYEAR_5686525");
      noLegs_0_1_1.set(LegContractSettlMonth_81);
      InstrumentLeg_81.insert(LegContractSettlMonth_81.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_81("COUNTRY_2139581966");
      noLegs_0_1_1.set(LegCountryOfIssue_81);
      InstrumentLeg_81.insert(LegCountryOfIssue_81.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_81("LOCALMKTDATE_1161018499");
      noLegs_0_1_1.set(LegCouponPaymentDate_81);
      InstrumentLeg_81.insert(LegCouponPaymentDate_81.getString());
      FIX::LegCouponRate LegCouponRate_81;
      LegCouponRate_81.setString("80.820000");
      noLegs_0_1_1.set(LegCouponRate_81);
      InstrumentLeg_81.insert(LegCouponRate_81.getString());
      FIX::LegCreditRating LegCreditRating_81("STRING_761511523");
      noLegs_0_1_1.set(LegCreditRating_81);
      InstrumentLeg_81.insert(LegCreditRating_81.getString());
      FIX::LegCurrency LegCurrency_81("GBP");
      noLegs_0_1_1.set(LegCurrency_81);
      InstrumentLeg_81.insert(LegCurrency_81.getString());
      FIX::LegDatedDate LegDatedDate_81("LOCALMKTDATE_1807523597");
      noLegs_0_1_1.set(LegDatedDate_81);
      InstrumentLeg_81.insert(LegDatedDate_81.getString());
      FIX::LegExerciseStyle LegExerciseStyle_81(1322274357);
      noLegs_0_1_1.set(LegExerciseStyle_81);
      InstrumentLeg_81.insert(LegExerciseStyle_81.getString());
      FIX::LegFactor LegFactor_81;
      LegFactor_81.setString("5162899");
      noLegs_0_1_1.set(LegFactor_81);
      InstrumentLeg_81.insert(LegFactor_81.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_81(2081180151);
      noLegs_0_1_1.set(LegFlowScheduleType_81);
      InstrumentLeg_81.insert(LegFlowScheduleType_81.getString());
      FIX::LegInstrRegistry LegInstrRegistry_81("STRING_1832526053");
      noLegs_0_1_1.set(LegInstrRegistry_81);
      InstrumentLeg_81.insert(LegInstrRegistry_81.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_81("LOCALMKTDATE_1797575992");
      noLegs_0_1_1.set(LegInterestAccrualDate_81);
      InstrumentLeg_81.insert(LegInterestAccrualDate_81.getString());
      FIX::LegIssueDate LegIssueDate_81("LOCALMKTDATE_129428720");
      noLegs_0_1_1.set(LegIssueDate_81);
      InstrumentLeg_81.insert(LegIssueDate_81.getString());
      FIX::LegIssuer LegIssuer_81("STRING_754810211");
      noLegs_0_1_1.set(LegIssuer_81);
      InstrumentLeg_81.insert(LegIssuer_81.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_81("STRING_182338892");
      noLegs_0_1_1.set(LegLocaleOfIssue_81);
      InstrumentLeg_81.insert(LegLocaleOfIssue_81.getString());
      FIX::LegMaturityDate LegMaturityDate_81("LOCALMKTDATE_1172350057");
      noLegs_0_1_1.set(LegMaturityDate_81);
      InstrumentLeg_81.insert(LegMaturityDate_81.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_81("MONTHYEAR_1216874465");
      noLegs_0_1_1.set(LegMaturityMonthYear_81);
      InstrumentLeg_81.insert(LegMaturityMonthYear_81.getString());
      FIX::LegMaturityTime LegMaturityTime_81("TZTIMEONLY_1604024004");
      noLegs_0_1_1.set(LegMaturityTime_81);
      InstrumentLeg_81.insert(LegMaturityTime_81.getString());
      FIX::LegOptAttribute LegOptAttribute_81('1');
      noLegs_0_1_1.set(LegOptAttribute_81);
      InstrumentLeg_81.insert(LegOptAttribute_81.getString());
      FIX::LegOptionRatio LegOptionRatio_81;
      LegOptionRatio_81.setString("10303179");
      noLegs_0_1_1.set(LegOptionRatio_81);
      InstrumentLeg_81.insert(LegOptionRatio_81.getString());
      FIX::LegPool LegPool_81("STRING_144301913");
      noLegs_0_1_1.set(LegPool_81);
      InstrumentLeg_81.insert(LegPool_81.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_81("STRING_123744036");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_81);
      InstrumentLeg_81.insert(LegPriceUnitOfMeasure_81.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_81;
      LegPriceUnitOfMeasureQty_81.setString("15514126");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_81);
      InstrumentLeg_81.insert(LegPriceUnitOfMeasureQty_81.getString());
      FIX::LegProduct LegProduct_81(1947054452);
      noLegs_0_1_1.set(LegProduct_81);
      InstrumentLeg_81.insert(LegProduct_81.getString());
      FIX::LegPutOrCall LegPutOrCall_81(1771758711);
      noLegs_0_1_1.set(LegPutOrCall_81);
      InstrumentLeg_81.insert(LegPutOrCall_81.getString());
      FIX::LegRatioQty LegRatioQty_81;
      LegRatioQty_81.setString("13703702");
      noLegs_0_1_1.set(LegRatioQty_81);
      InstrumentLeg_81.insert(LegRatioQty_81.getString());
      FIX::LegRedemptionDate LegRedemptionDate_81("LOCALMKTDATE_1514012501");
      noLegs_0_1_1.set(LegRedemptionDate_81);
      InstrumentLeg_81.insert(LegRedemptionDate_81.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_81("STRING_1612297710");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_81);
      InstrumentLeg_81.insert(LegRepoCollateralSecurityType_81.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_81;
      LegRepurchaseRate_81.setString("63.070000");
      noLegs_0_1_1.set(LegRepurchaseRate_81);
      InstrumentLeg_81.insert(LegRepurchaseRate_81.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_81(1528411201);
      noLegs_0_1_1.set(LegRepurchaseTerm_81);
      InstrumentLeg_81.insert(LegRepurchaseTerm_81.getString());
      FIX::LegSecurityDesc LegSecurityDesc_81("STRING_1617984235");
      noLegs_0_1_1.set(LegSecurityDesc_81);
      InstrumentLeg_81.insert(LegSecurityDesc_81.getString());
      FIX::LegSecurityExchange LegSecurityExchange_81("EXCHANGE_1742984625");
      noLegs_0_1_1.set(LegSecurityExchange_81);
      InstrumentLeg_81.insert(LegSecurityExchange_81.getString());
      FIX::LegSecurityID LegSecurityID_81("STRING_541946053");
      noLegs_0_1_1.set(LegSecurityID_81);
      InstrumentLeg_81.insert(LegSecurityID_81.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_81("STRING_313178669");
      noLegs_0_1_1.set(LegSecurityIDSource_81);
      InstrumentLeg_81.insert(LegSecurityIDSource_81.getString());
      FIX::LegSecuritySubType LegSecuritySubType_81("STRING_357012500");
      noLegs_0_1_1.set(LegSecuritySubType_81);
      InstrumentLeg_81.insert(LegSecuritySubType_81.getString());
      FIX::LegSecurityType LegSecurityType_81("STRING_1973780523");
      noLegs_0_1_1.set(LegSecurityType_81);
      InstrumentLeg_81.insert(LegSecurityType_81.getString());
      FIX::LegSide LegSide_81('1');
      noLegs_0_1_1.set(LegSide_81);
      InstrumentLeg_81.insert(LegSide_81.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_81("STRING_17052449");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_81);
      InstrumentLeg_81.insert(LegStateOrProvinceOfIssue_81.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_81("GBP");
      noLegs_0_1_1.set(LegStrikeCurrency_81);
      InstrumentLeg_81.insert(LegStrikeCurrency_81.getString());
      FIX::LegStrikePrice LegStrikePrice_81;
      LegStrikePrice_81.setString("20982326");
      noLegs_0_1_1.set(LegStrikePrice_81);
      InstrumentLeg_81.insert(LegStrikePrice_81.getString());
      FIX::LegSymbol LegSymbol_81("STRING_833613637");
      noLegs_0_1_1.set(LegSymbol_81);
      InstrumentLeg_81.insert(LegSymbol_81.getString());
      FIX::LegSymbolSfx LegSymbolSfx_81("STRING_1581188038");
      noLegs_0_1_1.set(LegSymbolSfx_81);
      InstrumentLeg_81.insert(LegSymbolSfx_81.getString());
      FIX::LegTimeUnit LegTimeUnit_81("STRING_80177673");
      noLegs_0_1_1.set(LegTimeUnit_81);
      InstrumentLeg_81.insert(LegTimeUnit_81.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_81("STRING_1588423849");
      noLegs_0_1_1.set(LegUnitOfMeasure_81);
      InstrumentLeg_81.insert(LegUnitOfMeasure_81.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_81;
      LegUnitOfMeasureQty_81.setString("17635269");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_81);
      InstrumentLeg_81.insert(LegUnitOfMeasureQty_81.getString());
      all_values.push_back(InstrumentLeg_81);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_141;
        FIX::LegSecurityAltID LegSecurityAltID_141("STRING_657814666");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_141);
        LegSecAltIDGrp_NoLegSecurityAltID_141.insert(LegSecurityAltID_141.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_141("STRING_1220067286");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_141);
        LegSecAltIDGrp_NoLegSecurityAltID_141.insert(LegSecurityAltIDSource_141.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_141);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_142;
        FIX::LegSecurityAltID LegSecurityAltID_142("STRING_502452614");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_142);
        LegSecAltIDGrp_NoLegSecurityAltID_142.insert(LegSecurityAltID_142.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_142("STRING_1688132623");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_142);
        LegSecAltIDGrp_NoLegSecurityAltID_142.insert(LegSecurityAltIDSource_142.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_142);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_7;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_7("GBP");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurveCurrency_7.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_7("STRING_1092061578");
      noLegs_0_1_1.set(LegBenchmarkCurveName_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurveName_7.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_7("STRING_1163940004");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurvePoint_7.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_7;
      LegBenchmarkPrice_7.setString("2504717");
      noLegs_0_1_1.set(LegBenchmarkPrice_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkPrice_7.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_7(314948210);
      noLegs_0_1_1.set(LegBenchmarkPriceType_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkPriceType_7.getString());
      all_values.push_back(LegBenchmarkCurveData_7);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_30;
        FIX::LegStipulationType LegStipulationType_30("STRING_1862769423");
        noLegStipulations_0_1_2_0.set(LegStipulationType_30);
        LegStipulations_NoLegStipulations_30.insert(LegStipulationType_30.getString());
        FIX::LegStipulationValue LegStipulationValue_30("STRING_2065834517");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_30);
        LegStipulations_NoLegStipulations_30.insert(LegStipulationValue_30.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_30);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_31;
        FIX::LegStipulationType LegStipulationType_31("STRING_2058880058");
        noLegStipulations_0_1_2_1.set(LegStipulationType_31);
        LegStipulations_NoLegStipulations_31.insert(LegStipulationType_31.getString());
        FIX::LegStipulationValue LegStipulationValue_31("STRING_1333270010");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_31);
        LegStipulations_NoLegStipulations_31.insert(LegStipulationValue_31.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_31);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_105;
        FIX::NestedPartyID NestedPartyID_105("STRING_453342463");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyID_105.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_105('1');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyIDSource_105.getString());
        FIX::NestedPartyRole NestedPartyRole_105(2018347994);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyRole_105.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_105);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_198;
          FIX::NestedPartySubID NestedPartySubID_198("STRING_913770727");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_198);
          NstdPtysSubGrp_NoNestedPartySubIDs_198.insert(NestedPartySubID_198.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_198(2035400444);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_198);
          NstdPtysSubGrp_NoNestedPartySubIDs_198.insert(NestedPartySubIDType_198.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_198);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_199;
          FIX::NestedPartySubID NestedPartySubID_199("STRING_1428210570");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_199);
          NstdPtysSubGrp_NoNestedPartySubIDs_199.insert(NestedPartySubID_199.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_199(697382773);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_199);
          NstdPtysSubGrp_NoNestedPartySubIDs_199.insert(NestedPartySubIDType_199.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_199);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_200;
          FIX::NestedPartySubID NestedPartySubID_200("STRING_1986149397");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_200);
          NstdPtysSubGrp_NoNestedPartySubIDs_200.insert(NestedPartySubID_200.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_200(114340560);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_200);
          NstdPtysSubGrp_NoNestedPartySubIDs_200.insert(NestedPartySubIDType_200.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_200);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_24;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_24("USD");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurveCurrency_24.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_24("STRING_EUREPO");
    noRelatedSym_0_0.set(BenchmarkCurveName_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurveName_24.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_24("STRING_1894614094");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurvePoint_24.getString());
    FIX::BenchmarkPrice BenchmarkPrice_24;
    BenchmarkPrice_24.setString("11713711");
    noRelatedSym_0_0.set(BenchmarkPrice_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkPrice_24.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_24(213095427);
    noRelatedSym_0_0.set(BenchmarkPriceType_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkPriceType_24.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_24("STRING_967197732");
    noRelatedSym_0_0.set(BenchmarkSecurityID_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkSecurityID_24.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_24("STRING_1673823767");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkSecurityIDSource_24.getString());
    FIX::Spread Spread_24;
    Spread_24.setString("19012280");
    noRelatedSym_0_0.set(Spread_24);
    SpreadOrBenchmarkCurveData_24.insert(Spread_24.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_24);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_42;
      FIX::StipulationType StipulationType_42("STRING_YIELD");
      noStipulations_0_1_0.set(StipulationType_42);
      Stipulations_NoStipulations_42.insert(StipulationType_42.getString());
      FIX::StipulationValue StipulationValue_42("STRING_845805980");
      noStipulations_0_1_0.set(StipulationValue_42);
      Stipulations_NoStipulations_42.insert(StipulationValue_42.getString());
      all_values.push_back(Stipulations_NoStipulations_42);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_43;
      FIX::StipulationType StipulationType_43("STRING_HAIRCUT");
      noStipulations_0_1_1.set(StipulationType_43);
      Stipulations_NoStipulations_43.insert(StipulationType_43.getString());
      FIX::StipulationValue StipulationValue_43("STRING_403008482");
      noStipulations_0_1_1.set(StipulationValue_43);
      Stipulations_NoStipulations_43.insert(StipulationValue_43.getString());
      all_values.push_back(Stipulations_NoStipulations_43);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_44;
      FIX::StipulationType StipulationType_44("STRING_PROD");
      noStipulations_0_1_2.set(StipulationType_44);
      Stipulations_NoStipulations_44.insert(StipulationType_44.getString());
      FIX::StipulationValue StipulationValue_44("STRING_1878492145");
      noStipulations_0_1_2.set(StipulationValue_44);
      Stipulations_NoStipulations_44.insert(StipulationValue_44.getString());
      all_values.push_back(Stipulations_NoStipulations_44);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_99;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_99("DATA_1079105059");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingIssuer_99.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_99(1789888556);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingIssuerLen_99.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_99("DATA_1451564267");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingSecurityDesc_99.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_99(592956905);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingSecurityDescLen_99.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_99;
      UnderlyingAdjustedQuantity_99.setString("957473");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_99);
      UnderlyingInstrument_99.insert(UnderlyingAdjustedQuantity_99.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_99;
      UnderlyingAllocationPercent_99.setString("92.980000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_99);
      UnderlyingInstrument_99.insert(UnderlyingAllocationPercent_99.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_99;
      UnderlyingAttachmentPoint_99.setString("12.520000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_99);
      UnderlyingInstrument_99.insert(UnderlyingAttachmentPoint_99.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_99("STRING_375386710");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_99);
      UnderlyingInstrument_99.insert(UnderlyingCFICode_99.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_99("STRING_1864300025");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_99);
      UnderlyingInstrument_99.insert(UnderlyingCPProgram_99.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_99("STRING_351738048");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_99);
      UnderlyingInstrument_99.insert(UnderlyingCPRegType_99.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_99;
      UnderlyingCapValue_99.setString("18035972");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_99);
      UnderlyingInstrument_99.insert(UnderlyingCapValue_99.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_99;
      UnderlyingCashAmount_99.setString("4141991");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_99);
      UnderlyingInstrument_99.insert(UnderlyingCashAmount_99.getString());
      FIX::UnderlyingCashType UnderlyingCashType_99("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_99);
      UnderlyingInstrument_99.insert(UnderlyingCashType_99.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_99;
      UnderlyingContractMultiplier_99.setString("19179378");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_99);
      UnderlyingInstrument_99.insert(UnderlyingContractMultiplier_99.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_99(545286314);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_99);
      UnderlyingInstrument_99.insert(UnderlyingContractMultiplierUnit_99.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_99("COUNTRY_109247219");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingCountryOfIssue_99.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_99("LOCALMKTDATE_1473218601");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_99);
      UnderlyingInstrument_99.insert(UnderlyingCouponPaymentDate_99.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_99;
      UnderlyingCouponRate_99.setString("67.600000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_99);
      UnderlyingInstrument_99.insert(UnderlyingCouponRate_99.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_99("STRING_1280618372");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_99);
      UnderlyingInstrument_99.insert(UnderlyingCreditRating_99.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_99("JPY");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_99);
      UnderlyingInstrument_99.insert(UnderlyingCurrency_99.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_99;
      UnderlyingCurrentValue_99.setString("8069584");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_99);
      UnderlyingInstrument_99.insert(UnderlyingCurrentValue_99.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_99;
      UnderlyingDetachmentPoint_99.setString("84.310000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_99);
      UnderlyingInstrument_99.insert(UnderlyingDetachmentPoint_99.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_99;
      UnderlyingDirtyPrice_99.setString("14436977");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_99);
      UnderlyingInstrument_99.insert(UnderlyingDirtyPrice_99.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_99;
      UnderlyingEndPrice_99.setString("9594952");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_99);
      UnderlyingInstrument_99.insert(UnderlyingEndPrice_99.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_99;
      UnderlyingEndValue_99.setString("1383807");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_99);
      UnderlyingInstrument_99.insert(UnderlyingEndValue_99.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_99(644237417);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_99);
      UnderlyingInstrument_99.insert(UnderlyingExerciseStyle_99.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_99;
      UnderlyingFXRate_99.setString("13625037");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_99);
      UnderlyingInstrument_99.insert(UnderlyingFXRate_99.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_99('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_99);
      UnderlyingInstrument_99.insert(UnderlyingFXRateCalc_99.getString());
      FIX::UnderlyingFactor UnderlyingFactor_99;
      UnderlyingFactor_99.setString("3752459");
      noUnderlyings_0_1_0.set(UnderlyingFactor_99);
      UnderlyingInstrument_99.insert(UnderlyingFactor_99.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_99(1480797999);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_99);
      UnderlyingInstrument_99.insert(UnderlyingFlowScheduleType_99.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_99("STRING_230756365");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_99);
      UnderlyingInstrument_99.insert(UnderlyingInstrRegistry_99.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_99("LOCALMKTDATE_17650823");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_99);
      UnderlyingInstrument_99.insert(UnderlyingIssueDate_99.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_99("STRING_784878618");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_99);
      UnderlyingInstrument_99.insert(UnderlyingIssuer_99.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_99("STRING_823713271");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingLocaleOfIssue_99.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_99("LOCALMKTDATE_113398194");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityDate_99.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_99("MONTHYEAR_1735407917");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityMonthYear_99.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_99("TZTIMEONLY_1287534523");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityTime_99.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_99;
      UnderlyingNotionalPercentageOutstanding_99.setString("49.040000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_99);
      UnderlyingInstrument_99.insert(UnderlyingNotionalPercentageOutstanding_99.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_99('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_99);
      UnderlyingInstrument_99.insert(UnderlyingOptAttribute_99.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_99;
      UnderlyingOriginalNotionalPercentageOutstanding_99.setString("25.710000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_99);
      UnderlyingInstrument_99.insert(UnderlyingOriginalNotionalPercentageOutstanding_99.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_99("STRING_144898537");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_99);
      UnderlyingInstrument_99.insert(UnderlyingPriceUnitOfMeasure_99.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_99;
      UnderlyingPriceUnitOfMeasureQty_99.setString("18664234");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_99);
      UnderlyingInstrument_99.insert(UnderlyingPriceUnitOfMeasureQty_99.getString());
      FIX::UnderlyingProduct UnderlyingProduct_99(1829676368);
      noUnderlyings_0_1_0.set(UnderlyingProduct_99);
      UnderlyingInstrument_99.insert(UnderlyingProduct_99.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_99(2062836377);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_99);
      UnderlyingInstrument_99.insert(UnderlyingPutOrCall_99.getString());
      FIX::UnderlyingPx UnderlyingPx_99;
      UnderlyingPx_99.setString("2642261");
      noUnderlyings_0_1_0.set(UnderlyingPx_99);
      UnderlyingInstrument_99.insert(UnderlyingPx_99.getString());
      FIX::UnderlyingQty UnderlyingQty_99;
      UnderlyingQty_99.setString("19389235");
      noUnderlyings_0_1_0.set(UnderlyingQty_99);
      UnderlyingInstrument_99.insert(UnderlyingQty_99.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_99("LOCALMKTDATE_1388571331");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_99);
      UnderlyingInstrument_99.insert(UnderlyingRedemptionDate_99.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_99("STRING_556642871");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_99);
      UnderlyingInstrument_99.insert(UnderlyingRepoCollateralSecurityType_99.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_99;
      UnderlyingRepurchaseRate_99.setString("83.120000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_99);
      UnderlyingInstrument_99.insert(UnderlyingRepurchaseRate_99.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_99(927401711);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_99);
      UnderlyingInstrument_99.insert(UnderlyingRepurchaseTerm_99.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_99("STRING_1816257363");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_99);
      UnderlyingInstrument_99.insert(UnderlyingRestructuringType_99.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_99("STRING_1879016803");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityDesc_99.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_99("EXCHANGE_219976494");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityExchange_99.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_99("STRING_1112471492");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityID_99.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_99("STRING_691028416");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityIDSource_99.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_99("STRING_358357258");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_99);
      UnderlyingInstrument_99.insert(UnderlyingSecuritySubType_99.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_99("STRING_1756708910");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityType_99.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_99("STRING_2053532158");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_99);
      UnderlyingInstrument_99.insert(UnderlyingSeniority_99.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_99("STRING_1657492212");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_99);
      UnderlyingInstrument_99.insert(UnderlyingSettlMethod_99.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_99(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_99);
      UnderlyingInstrument_99.insert(UnderlyingSettlementType_99.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_99;
      UnderlyingStartValue_99.setString("13868465");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_99);
      UnderlyingInstrument_99.insert(UnderlyingStartValue_99.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_99("STRING_1888248577");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingStateOrProvinceOfIssue_99.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_99("JPY");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_99);
      UnderlyingInstrument_99.insert(UnderlyingStrikeCurrency_99.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_99;
      UnderlyingStrikePrice_99.setString("5644782");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_99);
      UnderlyingInstrument_99.insert(UnderlyingStrikePrice_99.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_99("STRING_115520194");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_99);
      UnderlyingInstrument_99.insert(UnderlyingSymbol_99.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_99("STRING_1759649397");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_99);
      UnderlyingInstrument_99.insert(UnderlyingSymbolSfx_99.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_99("STRING_1852012723");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_99);
      UnderlyingInstrument_99.insert(UnderlyingTimeUnit_99.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_99("STRING_604305099");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_99);
      UnderlyingInstrument_99.insert(UnderlyingUnitOfMeasure_99.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_99;
      UnderlyingUnitOfMeasureQty_99.setString("10643900");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_99);
      UnderlyingInstrument_99.insert(UnderlyingUnitOfMeasureQty_99.getString());
      all_values.push_back(UnderlyingInstrument_99);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_198;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_198("STRING_749203636");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltID_198.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_198("STRING_783329841");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltIDSource_198.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_191;
        FIX::UnderlyingStipType UnderlyingStipType_191("STRING_664556365");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_191);
        UnderlyingStipulations_NoUnderlyingStips_191.insert(UnderlyingStipType_191.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_191("STRING_1047555952");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_191);
        UnderlyingStipulations_NoUnderlyingStips_191.insert(UnderlyingStipValue_191.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_191);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_204;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_204("STRING_2053127696");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyID_204.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_204('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyIDSource_204.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_204(1889492618);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_204);
        UndlyInstrumentParties_NoUndlyInstrumentParties_204.insert(UnderlyingInstrumentPartyRole_204.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_204);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_402("STRING_1272972538");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_402);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402.insert(UnderlyingInstrumentPartySubID_402.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_402(1621025773);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_402);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402.insert(UnderlyingInstrumentPartySubIDType_402.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_19;
    FIX::Yield Yield_19;
    Yield_19.setString("22.540000");
    noRelatedSym_0_0.set(Yield_19);
    YieldData_19.insert(Yield_19.getString());
    FIX::YieldCalcDate YieldCalcDate_19("LOCALMKTDATE_237960383");
    noRelatedSym_0_0.set(YieldCalcDate_19);
    YieldData_19.insert(YieldCalcDate_19.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_19("LOCALMKTDATE_164570541");
    noRelatedSym_0_0.set(YieldRedemptionDate_19);
    YieldData_19.insert(YieldRedemptionDate_19.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_19;
    YieldRedemptionPrice_19.setString("14113795");
    noRelatedSym_0_0.set(YieldRedemptionPrice_19);
    YieldData_19.insert(YieldRedemptionPrice_19.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_19(1994669293);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_19);
    YieldData_19.insert(YieldRedemptionPriceType_19.getString());
    FIX::YieldType YieldType_19("STRING_VALUE1_32");
    noRelatedSym_0_0.set(YieldType_19);
    YieldData_19.insert(YieldType_19.getString());
    all_values.push_back(YieldData_19);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_1;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_1;
    FIX::Account Account_36("STRING_921388076");
    noRelatedSym_0_1.set(Account_36);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Account_36.getString());
    FIX::AccountType AccountType_32(8);
    noRelatedSym_0_1.set(AccountType_32);
    QuotReqRjctGrp_NoRelatedSym_1.insert(AccountType_32.getString());
    FIX::AcctIDSource AcctIDSource_29(1);
    noRelatedSym_0_1.set(AcctIDSource_29);
    QuotReqRjctGrp_NoRelatedSym_1.insert(AcctIDSource_29.getString());
    FIX::Currency Currency_48("JPY");
    noRelatedSym_0_1.set(Currency_48);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Currency_48.getString());
    FIX::ExpireTime ExpireTime_18(FIX::UTCTIMESTAMP(14, 44, 12, 10, 42014));
    noRelatedSym_0_1.set(ExpireTime_18);
    QuotReqRjctGrp_NoRelatedSym_1.insert(ExpireTime_18.getString());
    FIX::OrdType OrdType_50('1');
    noRelatedSym_0_1.set(OrdType_50);
    QuotReqRjctGrp_NoRelatedSym_1.insert(OrdType_50.getString());
    FIX::OrderQty2 OrderQty2_13;
    OrderQty2_13.setString("13028077");
    noRelatedSym_0_1.set(OrderQty2_13);
    QuotReqRjctGrp_NoRelatedSym_1.insert(OrderQty2_13.getString());
    FIX::PrevClosePx PrevClosePx_13;
    PrevClosePx_13.setString("7941090");
    noRelatedSym_0_1.set(PrevClosePx_13);
    QuotReqRjctGrp_NoRelatedSym_1.insert(PrevClosePx_13.getString());
    FIX::Price Price_23;
    Price_23.setString("11534726");
    noRelatedSym_0_1.set(Price_23);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Price_23.getString());
    FIX::Price2 Price2_8;
    Price2_8.setString("19673641");
    noRelatedSym_0_1.set(Price2_8);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Price2_8.getString());
    FIX::PriceType PriceType_37(4);
    noRelatedSym_0_1.set(PriceType_37);
    QuotReqRjctGrp_NoRelatedSym_1.insert(PriceType_37.getString());
    FIX::QtyType QtyType_28(1);
    noRelatedSym_0_1.set(QtyType_28);
    QuotReqRjctGrp_NoRelatedSym_1.insert(QtyType_28.getString());
    FIX::QuotePriceType QuotePriceType_3(6);
    noRelatedSym_0_1.set(QuotePriceType_3);
    QuotReqRjctGrp_NoRelatedSym_1.insert(QuotePriceType_3.getString());
    FIX::QuoteRequestType QuoteRequestType_3(1);
    noRelatedSym_0_1.set(QuoteRequestType_3);
    QuotReqRjctGrp_NoRelatedSym_1.insert(QuoteRequestType_3.getString());
    FIX::QuoteType QuoteType_9(3);
    noRelatedSym_0_1.set(QuoteType_9);
    QuotReqRjctGrp_NoRelatedSym_1.insert(QuoteType_9.getString());
    FIX::SettlDate SettlDate_35("LOCALMKTDATE_558570277");
    noRelatedSym_0_1.set(SettlDate_35);
    QuotReqRjctGrp_NoRelatedSym_1.insert(SettlDate_35.getString());
    FIX::SettlDate2 SettlDate2_13("LOCALMKTDATE_423869046");
    noRelatedSym_0_1.set(SettlDate2_13);
    QuotReqRjctGrp_NoRelatedSym_1.insert(SettlDate2_13.getString());
    FIX::SettlType SettlType_26("STRING_0");
    noRelatedSym_0_1.set(SettlType_26);
    QuotReqRjctGrp_NoRelatedSym_1.insert(SettlType_26.getString());
    FIX::Side Side_43('5');
    noRelatedSym_0_1.set(Side_43);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Side_43.getString());
    FIX::TradeOriginationDate TradeOriginationDate_23("LOCALMKTDATE_661829429");
    noRelatedSym_0_1.set(TradeOriginationDate_23);
    QuotReqRjctGrp_NoRelatedSym_1.insert(TradeOriginationDate_23.getString());
    FIX::TradingSessionID TradingSessionID_65("STRING_5");
    noRelatedSym_0_1.set(TradingSessionID_65);
    QuotReqRjctGrp_NoRelatedSym_1.insert(TradingSessionID_65.getString());
    FIX::TradingSessionSubID TradingSessionSubID_65("STRING_7");
    noRelatedSym_0_1.set(TradingSessionSubID_65);
    QuotReqRjctGrp_NoRelatedSym_1.insert(TradingSessionSubID_65.getString());
    FIX::TransactTime TransactTime_49(FIX::UTCTIMESTAMP(10, 13, 56, 0, 82010));
    noRelatedSym_0_1.set(TransactTime_49);
    QuotReqRjctGrp_NoRelatedSym_1.insert(TransactTime_49.getString());
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_1);

    // FinancingDetails
    multiset<string> FinancingDetails_22;
    FIX::AgreementCurrency AgreementCurrency_22("CHF");
    noRelatedSym_0_1.set(AgreementCurrency_22);
    FinancingDetails_22.insert(AgreementCurrency_22.getString());
    FIX::AgreementDate AgreementDate_22("LOCALMKTDATE_123749735");
    noRelatedSym_0_1.set(AgreementDate_22);
    FinancingDetails_22.insert(AgreementDate_22.getString());
    FIX::AgreementDesc AgreementDesc_22("STRING_1159725742");
    noRelatedSym_0_1.set(AgreementDesc_22);
    FinancingDetails_22.insert(AgreementDesc_22.getString());
    FIX::AgreementID AgreementID_22("STRING_321853671");
    noRelatedSym_0_1.set(AgreementID_22);
    FinancingDetails_22.insert(AgreementID_22.getString());
    FIX::DeliveryType DeliveryType_22(2);
    noRelatedSym_0_1.set(DeliveryType_22);
    FinancingDetails_22.insert(DeliveryType_22.getString());
    FIX::EndDate EndDate_22("LOCALMKTDATE_1170504930");
    noRelatedSym_0_1.set(EndDate_22);
    FinancingDetails_22.insert(EndDate_22.getString());
    FIX::MarginRatio MarginRatio_22;
    MarginRatio_22.setString("19.520000");
    noRelatedSym_0_1.set(MarginRatio_22);
    FinancingDetails_22.insert(MarginRatio_22.getString());
    FIX::StartDate StartDate_22("LOCALMKTDATE_1980161602");
    noRelatedSym_0_1.set(StartDate_22);
    FinancingDetails_22.insert(StartDate_22.getString());
    FIX::TerminationType TerminationType_22(4);
    noRelatedSym_0_1.set(TerminationType_22);
    FinancingDetails_22.insert(TerminationType_22.getString());
    all_values.push_back(FinancingDetails_22);

    // Instrument
    multiset<string> Instrument_62;
    FIX::AttachmentPoint AttachmentPoint_62;
    AttachmentPoint_62.setString("45.990000");
    noRelatedSym_0_1.set(AttachmentPoint_62);
    Instrument_62.insert(AttachmentPoint_62.getString());
    FIX::CFICode CFICode_62("STRING_1800042071");
    noRelatedSym_0_1.set(CFICode_62);
    Instrument_62.insert(CFICode_62.getString());
    FIX::CPProgram CPProgram_62(1);
    noRelatedSym_0_1.set(CPProgram_62);
    Instrument_62.insert(CPProgram_62.getString());
    FIX::CPRegType CPRegType_62("STRING_1426227904");
    noRelatedSym_0_1.set(CPRegType_62);
    Instrument_62.insert(CPRegType_62.getString());
    FIX::CapPrice CapPrice_62;
    CapPrice_62.setString("15255665");
    noRelatedSym_0_1.set(CapPrice_62);
    Instrument_62.insert(CapPrice_62.getString());
    FIX::ContractMultiplier ContractMultiplier_62;
    ContractMultiplier_62.setString("8096918");
    noRelatedSym_0_1.set(ContractMultiplier_62);
    Instrument_62.insert(ContractMultiplier_62.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_62(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_62);
    Instrument_62.insert(ContractMultiplierUnit_62.getString());
    FIX::ContractSettlMonth ContractSettlMonth_62("MONTHYEAR_2084136866");
    noRelatedSym_0_1.set(ContractSettlMonth_62);
    Instrument_62.insert(ContractSettlMonth_62.getString());
    FIX::CountryOfIssue CountryOfIssue_62("COUNTRY_1233560847");
    noRelatedSym_0_1.set(CountryOfIssue_62);
    Instrument_62.insert(CountryOfIssue_62.getString());
    FIX::CouponPaymentDate CouponPaymentDate_62("LOCALMKTDATE_30634579");
    noRelatedSym_0_1.set(CouponPaymentDate_62);
    Instrument_62.insert(CouponPaymentDate_62.getString());
    FIX::CouponRate CouponRate_62;
    CouponRate_62.setString("57.500000");
    noRelatedSym_0_1.set(CouponRate_62);
    Instrument_62.insert(CouponRate_62.getString());
    FIX::CreditRating CreditRating_62("STRING_1895390276");
    noRelatedSym_0_1.set(CreditRating_62);
    Instrument_62.insert(CreditRating_62.getString());
    FIX::DatedDate DatedDate_62("LOCALMKTDATE_1381663169");
    noRelatedSym_0_1.set(DatedDate_62);
    Instrument_62.insert(DatedDate_62.getString());
    FIX::DetachmentPoint DetachmentPoint_62;
    DetachmentPoint_62.setString("4.980000");
    noRelatedSym_0_1.set(DetachmentPoint_62);
    Instrument_62.insert(DetachmentPoint_62.getString());
    FIX::EncodedIssuer EncodedIssuer_62("DATA_256921703");
    noRelatedSym_0_1.set(EncodedIssuer_62);
    Instrument_62.insert(EncodedIssuer_62.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_62(655827163);
    noRelatedSym_0_1.set(EncodedIssuerLen_62);
    Instrument_62.insert(EncodedIssuerLen_62.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_62("DATA_2073126971");
    noRelatedSym_0_1.set(EncodedSecurityDesc_62);
    Instrument_62.insert(EncodedSecurityDesc_62.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_62(597593599);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_62);
    Instrument_62.insert(EncodedSecurityDescLen_62.getString());
    FIX::ExerciseStyle ExerciseStyle_62(0);
    noRelatedSym_0_1.set(ExerciseStyle_62);
    Instrument_62.insert(ExerciseStyle_62.getString());
    FIX::Factor Factor_62;
    Factor_62.setString("2371891");
    noRelatedSym_0_1.set(Factor_62);
    Instrument_62.insert(Factor_62.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_62(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_62);
    Instrument_62.insert(FlexProductEligibilityIndicator_62.getString());
    FIX::FlexibleIndicator FlexibleIndicator_62(true);
    noRelatedSym_0_1.set(FlexibleIndicator_62);
    Instrument_62.insert(FlexibleIndicator_62.getString());
    FIX::FloorPrice FloorPrice_62;
    FloorPrice_62.setString("17753661");
    noRelatedSym_0_1.set(FloorPrice_62);
    Instrument_62.insert(FloorPrice_62.getString());
    FIX::FlowScheduleType FlowScheduleType_62(3);
    noRelatedSym_0_1.set(FlowScheduleType_62);
    Instrument_62.insert(FlowScheduleType_62.getString());
    FIX::InstrRegistry InstrRegistry_62("STRING_465551764");
    noRelatedSym_0_1.set(InstrRegistry_62);
    Instrument_62.insert(InstrRegistry_62.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_62('2');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_62);
    Instrument_62.insert(InstrmtAssignmentMethod_62.getString());
    FIX::InterestAccrualDate InterestAccrualDate_62("LOCALMKTDATE_1573147903");
    noRelatedSym_0_1.set(InterestAccrualDate_62);
    Instrument_62.insert(InterestAccrualDate_62.getString());
    FIX::IssueDate IssueDate_62("LOCALMKTDATE_1636056695");
    noRelatedSym_0_1.set(IssueDate_62);
    Instrument_62.insert(IssueDate_62.getString());
    FIX::Issuer Issuer_62("STRING_399068167");
    noRelatedSym_0_1.set(Issuer_62);
    Instrument_62.insert(Issuer_62.getString());
    FIX::ListMethod ListMethod_62(1);
    noRelatedSym_0_1.set(ListMethod_62);
    Instrument_62.insert(ListMethod_62.getString());
    FIX::LocaleOfIssue LocaleOfIssue_62("STRING_1453187006");
    noRelatedSym_0_1.set(LocaleOfIssue_62);
    Instrument_62.insert(LocaleOfIssue_62.getString());
    FIX::MaturityDate MaturityDate_62("LOCALMKTDATE_2001872766");
    noRelatedSym_0_1.set(MaturityDate_62);
    Instrument_62.insert(MaturityDate_62.getString());
    FIX::MaturityMonthYear MaturityMonthYear_62("MONTHYEAR_1058384280");
    noRelatedSym_0_1.set(MaturityMonthYear_62);
    Instrument_62.insert(MaturityMonthYear_62.getString());
    FIX::MaturityTime MaturityTime_62("TZTIMEONLY_964498651");
    noRelatedSym_0_1.set(MaturityTime_62);
    Instrument_62.insert(MaturityTime_62.getString());
    FIX::MinPriceIncrement MinPriceIncrement_62;
    MinPriceIncrement_62.setString("12806170");
    noRelatedSym_0_1.set(MinPriceIncrement_62);
    Instrument_62.insert(MinPriceIncrement_62.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_62;
    MinPriceIncrementAmount_62.setString("4364672");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_62);
    Instrument_62.insert(MinPriceIncrementAmount_62.getString());
    FIX::NTPositionLimit NTPositionLimit_62(1774190451);
    noRelatedSym_0_1.set(NTPositionLimit_62);
    Instrument_62.insert(NTPositionLimit_62.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_62;
    NotionalPercentageOutstanding_62.setString("35.530000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_62);
    Instrument_62.insert(NotionalPercentageOutstanding_62.getString());
    FIX::OptAttribute OptAttribute_62('3');
    noRelatedSym_0_1.set(OptAttribute_62);
    Instrument_62.insert(OptAttribute_62.getString());
    FIX::OptPayoutAmount OptPayoutAmount_62;
    OptPayoutAmount_62.setString("8602676");
    noRelatedSym_0_1.set(OptPayoutAmount_62);
    Instrument_62.insert(OptPayoutAmount_62.getString());
    FIX::OptPayoutType OptPayoutType_62(3);
    noRelatedSym_0_1.set(OptPayoutType_62);
    Instrument_62.insert(OptPayoutType_62.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_62;
    OriginalNotionalPercentageOutstanding_62.setString("61.890000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_62);
    Instrument_62.insert(OriginalNotionalPercentageOutstanding_62.getString());
    FIX::Pool Pool_62("STRING_608174279");
    noRelatedSym_0_1.set(Pool_62);
    Instrument_62.insert(Pool_62.getString());
    FIX::PositionLimit PositionLimit_62(1537091302);
    noRelatedSym_0_1.set(PositionLimit_62);
    Instrument_62.insert(PositionLimit_62.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_62("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_62);
    Instrument_62.insert(PriceQuoteMethod_62.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_62("STRING_865095982");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_62);
    Instrument_62.insert(PriceUnitOfMeasure_62.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_62;
    PriceUnitOfMeasureQty_62.setString("454348");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_62);
    Instrument_62.insert(PriceUnitOfMeasureQty_62.getString());
    FIX::Product Product_64(3);
    noRelatedSym_0_1.set(Product_64);
    Instrument_62.insert(Product_64.getString());
    FIX::ProductComplex ProductComplex_62("STRING_1462689581");
    noRelatedSym_0_1.set(ProductComplex_62);
    Instrument_62.insert(ProductComplex_62.getString());
    FIX::PutOrCall PutOrCall_62(1);
    noRelatedSym_0_1.set(PutOrCall_62);
    Instrument_62.insert(PutOrCall_62.getString());
    FIX::RedemptionDate RedemptionDate_62("LOCALMKTDATE_212965517");
    noRelatedSym_0_1.set(RedemptionDate_62);
    Instrument_62.insert(RedemptionDate_62.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_62("STRING_87250251");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_62);
    Instrument_62.insert(RepoCollateralSecurityType_62.getString());
    FIX::RepurchaseRate RepurchaseRate_62;
    RepurchaseRate_62.setString("75.590000");
    noRelatedSym_0_1.set(RepurchaseRate_62);
    Instrument_62.insert(RepurchaseRate_62.getString());
    FIX::RepurchaseTerm RepurchaseTerm_62(1988331709);
    noRelatedSym_0_1.set(RepurchaseTerm_62);
    Instrument_62.insert(RepurchaseTerm_62.getString());
    FIX::RestructuringType RestructuringType_62("STRING_FR");
    noRelatedSym_0_1.set(RestructuringType_62);
    Instrument_62.insert(RestructuringType_62.getString());
    FIX::SecurityDesc SecurityDesc_62("STRING_1204269324");
    noRelatedSym_0_1.set(SecurityDesc_62);
    Instrument_62.insert(SecurityDesc_62.getString());
    FIX::SecurityExchange SecurityExchange_62("EXCHANGE_1938067925");
    noRelatedSym_0_1.set(SecurityExchange_62);
    Instrument_62.insert(SecurityExchange_62.getString());
    FIX::SecurityGroup SecurityGroup_62("STRING_408708560");
    noRelatedSym_0_1.set(SecurityGroup_62);
    Instrument_62.insert(SecurityGroup_62.getString());
    FIX::SecurityID SecurityID_62("STRING_692842371");
    noRelatedSym_0_1.set(SecurityID_62);
    Instrument_62.insert(SecurityID_62.getString());
    FIX::SecurityIDSource SecurityIDSource_62("STRING_F");
    noRelatedSym_0_1.set(SecurityIDSource_62);
    Instrument_62.insert(SecurityIDSource_62.getString());
    FIX::SecurityStatus SecurityStatus_62("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_62);
    Instrument_62.insert(SecurityStatus_62.getString());
    FIX::SecuritySubType SecuritySubType_63("STRING_2146029377");
    noRelatedSym_0_1.set(SecuritySubType_63);
    Instrument_62.insert(SecuritySubType_63.getString());
    FIX::SecurityType SecurityType_64("STRING_LQN");
    noRelatedSym_0_1.set(SecurityType_64);
    Instrument_62.insert(SecurityType_64.getString());
    FIX::Seniority Seniority_62("STRING_SR");
    noRelatedSym_0_1.set(Seniority_62);
    Instrument_62.insert(Seniority_62.getString());
    FIX::SettlMethod SettlMethod_62('C');
    noRelatedSym_0_1.set(SettlMethod_62);
    Instrument_62.insert(SettlMethod_62.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_62("STRING_1324658585");
    noRelatedSym_0_1.set(SettleOnOpenFlag_62);
    Instrument_62.insert(SettleOnOpenFlag_62.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_62("STRING_1161902271");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_62);
    Instrument_62.insert(StateOrProvinceOfIssue_62.getString());
    FIX::StrikeCurrency StrikeCurrency_62("CHF");
    noRelatedSym_0_1.set(StrikeCurrency_62);
    Instrument_62.insert(StrikeCurrency_62.getString());
    FIX::StrikeMultiplier StrikeMultiplier_62;
    StrikeMultiplier_62.setString("15350227");
    noRelatedSym_0_1.set(StrikeMultiplier_62);
    Instrument_62.insert(StrikeMultiplier_62.getString());
    FIX::StrikePrice StrikePrice_62;
    StrikePrice_62.setString("14500188");
    noRelatedSym_0_1.set(StrikePrice_62);
    Instrument_62.insert(StrikePrice_62.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_62(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_62);
    Instrument_62.insert(StrikePriceBoundaryMethod_62.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_62;
    StrikePriceBoundaryPrecision_62.setString("52.510000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_62);
    Instrument_62.insert(StrikePriceBoundaryPrecision_62.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_62(2);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_62);
    Instrument_62.insert(StrikePriceDeterminationMethod_62.getString());
    FIX::StrikeValue StrikeValue_62;
    StrikeValue_62.setString("9944879");
    noRelatedSym_0_1.set(StrikeValue_62);
    Instrument_62.insert(StrikeValue_62.getString());
    FIX::Symbol Symbol_62("STRING_1359038290");
    noRelatedSym_0_1.set(Symbol_62);
    Instrument_62.insert(Symbol_62.getString());
    FIX::SymbolSfx SymbolSfx_62("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_62);
    Instrument_62.insert(SymbolSfx_62.getString());
    FIX::TimeUnit TimeUnit_62("STRING_H");
    noRelatedSym_0_1.set(TimeUnit_62);
    Instrument_62.insert(TimeUnit_62.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_62(2);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_62);
    Instrument_62.insert(UnderlyingPriceDeterminationMethod_62.getString());
    FIX::UnitOfMeasure UnitOfMeasure_62("STRING_lbs");
    noRelatedSym_0_1.set(UnitOfMeasure_62);
    Instrument_62.insert(UnitOfMeasure_62.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_62;
    UnitOfMeasureQty_62.setString("3253306");
    noRelatedSym_0_1.set(UnitOfMeasureQty_62);
    Instrument_62.insert(UnitOfMeasureQty_62.getString());
    FIX::ValuationMethod ValuationMethod_62("STRING_FUT");
    noRelatedSym_0_1.set(ValuationMethod_62);
    Instrument_62.insert(ValuationMethod_62.getString());
    all_values.push_back(Instrument_62);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_118;
      FIX::ComplexEventCondition ComplexEventCondition_118(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_118);
      ComplexEvents_NoComplexEvents_118.insert(ComplexEventCondition_118.getString());
      FIX::ComplexEventPrice ComplexEventPrice_118;
      ComplexEventPrice_118.setString("13886282");
      noComplexEvents_1_1_0.set(ComplexEventPrice_118);
      ComplexEvents_NoComplexEvents_118.insert(ComplexEventPrice_118.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_118(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_118);
      ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceBoundaryMethod_118.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_118;
      ComplexEventPriceBoundaryPrecision_118.setString("38.690000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_118);
      ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceBoundaryPrecision_118.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_118(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_118);
      ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceTimeType_118.getString());
      FIX::ComplexEventType ComplexEventType_118(3);
      noComplexEvents_1_1_0.set(ComplexEventType_118);
      ComplexEvents_NoComplexEvents_118.insert(ComplexEventType_118.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_118;
      ComplexOptPayoutAmount_118.setString("8136762");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_118);
      ComplexEvents_NoComplexEvents_118.insert(ComplexOptPayoutAmount_118.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_118);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_245;
        FIX::ComplexEventEndDate ComplexEventEndDate_245(FIX::UTCTIMESTAMP(2, 57, 36, 18, 72007));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_245);
        ComplexEventDates_NoComplexEventDates_245.insert(ComplexEventEndDate_245.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_245(FIX::UTCTIMESTAMP(9, 1, 21, 13, 92010));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_245);
        ComplexEventDates_NoComplexEventDates_245.insert(ComplexEventStartDate_245.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_245);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_481;
          FIX::ComplexEventEndTime ComplexEventEndTime_481(FIX::UTCTIMEONLY(2, 20, 20));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_481);
          ComplexEventTimes_NoComplexEventTimes_481.insert(ComplexEventEndTime_481.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_481(FIX::UTCTIMEONLY(10, 31, 59));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_481);
          ComplexEventTimes_NoComplexEventTimes_481.insert(ComplexEventStartTime_481.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_481);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_122;
      FIX::EventDate EventDate_122("LOCALMKTDATE_861173656");
      noEvents_1_1_0.set(EventDate_122);
      EvntGrp_NoEvents_122.insert(EventDate_122.getString());
      FIX::EventPx EventPx_122;
      EventPx_122.setString("16371629");
      noEvents_1_1_0.set(EventPx_122);
      EvntGrp_NoEvents_122.insert(EventPx_122.getString());
      FIX::EventText EventText_122("STRING_746586289");
      noEvents_1_1_0.set(EventText_122);
      EvntGrp_NoEvents_122.insert(EventText_122.getString());
      FIX::EventTime EventTime_122(FIX::UTCTIMESTAMP(17, 30, 51, 12, 12004));
      noEvents_1_1_0.set(EventTime_122);
      EvntGrp_NoEvents_122.insert(EventTime_122.getString());
      FIX::EventType EventType_122(1);
      noEvents_1_1_0.set(EventType_122);
      EvntGrp_NoEvents_122.insert(EventType_122.getString());
      all_values.push_back(EvntGrp_NoEvents_122);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_114;
      FIX::InstrumentPartyID InstrumentPartyID_114("STRING_1117271795");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_114);
      InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyID_114.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_114('9');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_114);
      InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyIDSource_114.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_114(70317441);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_114);
      InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyRole_114.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_114);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224;
        FIX::InstrumentPartySubID InstrumentPartySubID_224("STRING_1305669013");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_224);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224.insert(InstrumentPartySubID_224.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_224(1737870162);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_224);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224.insert(InstrumentPartySubIDType_224.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_129;
      FIX::SecurityAltID SecurityAltID_129("STRING_831548618");
      noSecurityAltID_1_1_0.set(SecurityAltID_129);
      SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltID_129.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_129("STRING_1168648700");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_129);
      SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltIDSource_129.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_129);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_130;
      FIX::SecurityAltID SecurityAltID_130("STRING_702702806");
      noSecurityAltID_1_1_1.set(SecurityAltID_130);
      SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltID_130.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_130("STRING_1716466513");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_130);
      SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltIDSource_130.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_130);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_131;
      FIX::SecurityAltID SecurityAltID_131("STRING_1375232686");
      noSecurityAltID_1_1_2.set(SecurityAltID_131);
      SecAltIDGrp_NoSecurityAltID_131.insert(SecurityAltID_131.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_131("STRING_2086560046");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_131);
      SecAltIDGrp_NoSecurityAltID_131.insert(SecurityAltIDSource_131.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_131);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_124;
    FIX::SecurityXML SecurityXML_125("XMLDATA_1788715413");
    noRelatedSym_0_1.set(SecurityXML_125);
    FIX::SecurityXMLLen SecurityXMLLen_62(1672828053);
    noRelatedSym_0_1.set(SecurityXMLLen_62);
    FIX::SecurityXMLSchema SecurityXMLSchema_62("STRING_1648264273");
    noRelatedSym_0_1.set(SecurityXMLSchema_62);
    SecurityXML_124.insert(SecurityXMLSchema_62.getString());
    all_values.push_back(SecurityXML_124);

    // OrderQtyData
    multiset<string> OrderQtyData_23;
    FIX::CashOrderQty CashOrderQty_23;
    CashOrderQty_23.setString("12612608");
    noRelatedSym_0_1.set(CashOrderQty_23);
    OrderQtyData_23.insert(CashOrderQty_23.getString());
    FIX::OrderPercent OrderPercent_23;
    OrderPercent_23.setString("14.050000");
    noRelatedSym_0_1.set(OrderPercent_23);
    OrderQtyData_23.insert(OrderPercent_23.getString());
    FIX::OrderQty OrderQty_32;
    OrderQty_32.setString("1265330");
    noRelatedSym_0_1.set(OrderQty_32);
    OrderQtyData_23.insert(OrderQty_32.getString());
    FIX::RoundingDirection RoundingDirection_23('1');
    noRelatedSym_0_1.set(RoundingDirection_23);
    OrderQtyData_23.insert(RoundingDirection_23.getString());
    FIX::RoundingModulus RoundingModulus_23;
    RoundingModulus_23.setString("16383643");
    noRelatedSym_0_1.set(RoundingModulus_23);
    OrderQtyData_23.insert(RoundingModulus_23.getString());
    all_values.push_back(OrderQtyData_23);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_115;
      FIX::PartyID PartyID_115("STRING_2015337010");
      noPartyIDs_1_1_0.set(PartyID_115);
      Parties_NoPartyIDs_115.insert(PartyID_115.getString());
      FIX::PartyIDSource PartyIDSource_115('7');
      noPartyIDs_1_1_0.set(PartyIDSource_115);
      Parties_NoPartyIDs_115.insert(PartyIDSource_115.getString());
      FIX::PartyRole PartyRole_115(17);
      noPartyIDs_1_1_0.set(PartyRole_115);
      Parties_NoPartyIDs_115.insert(PartyRole_115.getString());
      all_values.push_back(Parties_NoPartyIDs_115);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_226;
        FIX::PartySubID PartySubID_226("STRING_699849883");
        noPartySubIDs_1_0_2_0.set(PartySubID_226);
        PtysSubGrp_NoPartySubIDs_226.insert(PartySubID_226.getString());
        FIX::PartySubIDType PartySubIDType_226(32);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_226);
        PtysSubGrp_NoPartySubIDs_226.insert(PartySubIDType_226.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_226);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_10;
      FIX::QuoteQualifier QuoteQualifier_10('6');
      noQuoteQualifiers_1_1_0.set(QuoteQualifier_10);
      QuotQualGrp_NoQuoteQualifiers_10.insert(QuoteQualifier_10.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_10);

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_11;
      FIX::QuoteQualifier QuoteQualifier_11('3');
      noQuoteQualifiers_1_1_1.set(QuoteQualifier_11);
      QuotQualGrp_NoQuoteQualifiers_11.insert(QuoteQualifier_11.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_11);

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_1);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_1_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_7;
      FIX::LegOrderQty LegOrderQty_13;
      LegOrderQty_13.setString("16053529");
      noLegs_1_1_0.set(LegOrderQty_13);
      QuotReqLegsGrp_NoLegs_7.insert(LegOrderQty_13.getString());
      FIX::LegQty LegQty_13;
      LegQty_13.setString("4340000");
      noLegs_1_1_0.set(LegQty_13);
      QuotReqLegsGrp_NoLegs_7.insert(LegQty_13.getString());
      FIX::LegRefID LegRefID_13("STRING_1635921062");
      noLegs_1_1_0.set(LegRefID_13);
      QuotReqLegsGrp_NoLegs_7.insert(LegRefID_13.getString());
      FIX::LegSettlDate LegSettlDate_13("LOCALMKTDATE_763538333");
      noLegs_1_1_0.set(LegSettlDate_13);
      QuotReqLegsGrp_NoLegs_7.insert(LegSettlDate_13.getString());
      FIX::LegSettlType LegSettlType_13('2');
      noLegs_1_1_0.set(LegSettlType_13);
      QuotReqLegsGrp_NoLegs_7.insert(LegSettlType_13.getString());
      FIX::LegSwapType LegSwapType_13(1);
      noLegs_1_1_0.set(LegSwapType_13);
      QuotReqLegsGrp_NoLegs_7.insert(LegSwapType_13.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_7);

      // InstrumentLeg
      multiset<string> InstrumentLeg_82;
      FIX::EncodedLegIssuer EncodedLegIssuer_82("DATA_1595086951");
      noLegs_1_1_0.set(EncodedLegIssuer_82);
      InstrumentLeg_82.insert(EncodedLegIssuer_82.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_82(1193035278);
      noLegs_1_1_0.set(EncodedLegIssuerLen_82);
      InstrumentLeg_82.insert(EncodedLegIssuerLen_82.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_82("DATA_549908530");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_82);
      InstrumentLeg_82.insert(EncodedLegSecurityDesc_82.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_82(1164069816);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_82);
      InstrumentLeg_82.insert(EncodedLegSecurityDescLen_82.getString());
      FIX::LegCFICode LegCFICode_82("STRING_420784317");
      noLegs_1_1_0.set(LegCFICode_82);
      InstrumentLeg_82.insert(LegCFICode_82.getString());
      FIX::LegContractMultiplier LegContractMultiplier_82;
      LegContractMultiplier_82.setString("4889849");
      noLegs_1_1_0.set(LegContractMultiplier_82);
      InstrumentLeg_82.insert(LegContractMultiplier_82.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_82(805301581);
      noLegs_1_1_0.set(LegContractMultiplierUnit_82);
      InstrumentLeg_82.insert(LegContractMultiplierUnit_82.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_82("MONTHYEAR_2093612370");
      noLegs_1_1_0.set(LegContractSettlMonth_82);
      InstrumentLeg_82.insert(LegContractSettlMonth_82.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_82("COUNTRY_2137249201");
      noLegs_1_1_0.set(LegCountryOfIssue_82);
      InstrumentLeg_82.insert(LegCountryOfIssue_82.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_82("LOCALMKTDATE_2066562418");
      noLegs_1_1_0.set(LegCouponPaymentDate_82);
      InstrumentLeg_82.insert(LegCouponPaymentDate_82.getString());
      FIX::LegCouponRate LegCouponRate_82;
      LegCouponRate_82.setString("37.750000");
      noLegs_1_1_0.set(LegCouponRate_82);
      InstrumentLeg_82.insert(LegCouponRate_82.getString());
      FIX::LegCreditRating LegCreditRating_82("STRING_116298598");
      noLegs_1_1_0.set(LegCreditRating_82);
      InstrumentLeg_82.insert(LegCreditRating_82.getString());
      FIX::LegCurrency LegCurrency_82("CHF");
      noLegs_1_1_0.set(LegCurrency_82);
      InstrumentLeg_82.insert(LegCurrency_82.getString());
      FIX::LegDatedDate LegDatedDate_82("LOCALMKTDATE_989417933");
      noLegs_1_1_0.set(LegDatedDate_82);
      InstrumentLeg_82.insert(LegDatedDate_82.getString());
      FIX::LegExerciseStyle LegExerciseStyle_82(1909366626);
      noLegs_1_1_0.set(LegExerciseStyle_82);
      InstrumentLeg_82.insert(LegExerciseStyle_82.getString());
      FIX::LegFactor LegFactor_82;
      LegFactor_82.setString("21362689");
      noLegs_1_1_0.set(LegFactor_82);
      InstrumentLeg_82.insert(LegFactor_82.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_82(1275316149);
      noLegs_1_1_0.set(LegFlowScheduleType_82);
      InstrumentLeg_82.insert(LegFlowScheduleType_82.getString());
      FIX::LegInstrRegistry LegInstrRegistry_82("STRING_891503812");
      noLegs_1_1_0.set(LegInstrRegistry_82);
      InstrumentLeg_82.insert(LegInstrRegistry_82.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_82("LOCALMKTDATE_688635183");
      noLegs_1_1_0.set(LegInterestAccrualDate_82);
      InstrumentLeg_82.insert(LegInterestAccrualDate_82.getString());
      FIX::LegIssueDate LegIssueDate_82("LOCALMKTDATE_1786215218");
      noLegs_1_1_0.set(LegIssueDate_82);
      InstrumentLeg_82.insert(LegIssueDate_82.getString());
      FIX::LegIssuer LegIssuer_82("STRING_400831338");
      noLegs_1_1_0.set(LegIssuer_82);
      InstrumentLeg_82.insert(LegIssuer_82.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_82("STRING_1352777138");
      noLegs_1_1_0.set(LegLocaleOfIssue_82);
      InstrumentLeg_82.insert(LegLocaleOfIssue_82.getString());
      FIX::LegMaturityDate LegMaturityDate_82("LOCALMKTDATE_2414193");
      noLegs_1_1_0.set(LegMaturityDate_82);
      InstrumentLeg_82.insert(LegMaturityDate_82.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_82("MONTHYEAR_1027430660");
      noLegs_1_1_0.set(LegMaturityMonthYear_82);
      InstrumentLeg_82.insert(LegMaturityMonthYear_82.getString());
      FIX::LegMaturityTime LegMaturityTime_82("TZTIMEONLY_810646458");
      noLegs_1_1_0.set(LegMaturityTime_82);
      InstrumentLeg_82.insert(LegMaturityTime_82.getString());
      FIX::LegOptAttribute LegOptAttribute_82('4');
      noLegs_1_1_0.set(LegOptAttribute_82);
      InstrumentLeg_82.insert(LegOptAttribute_82.getString());
      FIX::LegOptionRatio LegOptionRatio_82;
      LegOptionRatio_82.setString("5158680");
      noLegs_1_1_0.set(LegOptionRatio_82);
      InstrumentLeg_82.insert(LegOptionRatio_82.getString());
      FIX::LegPool LegPool_82("STRING_1574184791");
      noLegs_1_1_0.set(LegPool_82);
      InstrumentLeg_82.insert(LegPool_82.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_82("STRING_460800835");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_82);
      InstrumentLeg_82.insert(LegPriceUnitOfMeasure_82.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_82;
      LegPriceUnitOfMeasureQty_82.setString("3630737");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_82);
      InstrumentLeg_82.insert(LegPriceUnitOfMeasureQty_82.getString());
      FIX::LegProduct LegProduct_82(1021788094);
      noLegs_1_1_0.set(LegProduct_82);
      InstrumentLeg_82.insert(LegProduct_82.getString());
      FIX::LegPutOrCall LegPutOrCall_82(1653836113);
      noLegs_1_1_0.set(LegPutOrCall_82);
      InstrumentLeg_82.insert(LegPutOrCall_82.getString());
      FIX::LegRatioQty LegRatioQty_82;
      LegRatioQty_82.setString("9129823");
      noLegs_1_1_0.set(LegRatioQty_82);
      InstrumentLeg_82.insert(LegRatioQty_82.getString());
      FIX::LegRedemptionDate LegRedemptionDate_82("LOCALMKTDATE_38374262");
      noLegs_1_1_0.set(LegRedemptionDate_82);
      InstrumentLeg_82.insert(LegRedemptionDate_82.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_82("STRING_2074620430");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_82);
      InstrumentLeg_82.insert(LegRepoCollateralSecurityType_82.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_82;
      LegRepurchaseRate_82.setString("72.560000");
      noLegs_1_1_0.set(LegRepurchaseRate_82);
      InstrumentLeg_82.insert(LegRepurchaseRate_82.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_82(843675843);
      noLegs_1_1_0.set(LegRepurchaseTerm_82);
      InstrumentLeg_82.insert(LegRepurchaseTerm_82.getString());
      FIX::LegSecurityDesc LegSecurityDesc_82("STRING_2020749153");
      noLegs_1_1_0.set(LegSecurityDesc_82);
      InstrumentLeg_82.insert(LegSecurityDesc_82.getString());
      FIX::LegSecurityExchange LegSecurityExchange_82("EXCHANGE_1391732810");
      noLegs_1_1_0.set(LegSecurityExchange_82);
      InstrumentLeg_82.insert(LegSecurityExchange_82.getString());
      FIX::LegSecurityID LegSecurityID_82("STRING_762754614");
      noLegs_1_1_0.set(LegSecurityID_82);
      InstrumentLeg_82.insert(LegSecurityID_82.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_82("STRING_1968079280");
      noLegs_1_1_0.set(LegSecurityIDSource_82);
      InstrumentLeg_82.insert(LegSecurityIDSource_82.getString());
      FIX::LegSecuritySubType LegSecuritySubType_82("STRING_1508031408");
      noLegs_1_1_0.set(LegSecuritySubType_82);
      InstrumentLeg_82.insert(LegSecuritySubType_82.getString());
      FIX::LegSecurityType LegSecurityType_82("STRING_656784229");
      noLegs_1_1_0.set(LegSecurityType_82);
      InstrumentLeg_82.insert(LegSecurityType_82.getString());
      FIX::LegSide LegSide_82('1');
      noLegs_1_1_0.set(LegSide_82);
      InstrumentLeg_82.insert(LegSide_82.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_82("STRING_349965693");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_82);
      InstrumentLeg_82.insert(LegStateOrProvinceOfIssue_82.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_82("CAN");
      noLegs_1_1_0.set(LegStrikeCurrency_82);
      InstrumentLeg_82.insert(LegStrikeCurrency_82.getString());
      FIX::LegStrikePrice LegStrikePrice_82;
      LegStrikePrice_82.setString("16252818");
      noLegs_1_1_0.set(LegStrikePrice_82);
      InstrumentLeg_82.insert(LegStrikePrice_82.getString());
      FIX::LegSymbol LegSymbol_82("STRING_1310171019");
      noLegs_1_1_0.set(LegSymbol_82);
      InstrumentLeg_82.insert(LegSymbol_82.getString());
      FIX::LegSymbolSfx LegSymbolSfx_82("STRING_2083710584");
      noLegs_1_1_0.set(LegSymbolSfx_82);
      InstrumentLeg_82.insert(LegSymbolSfx_82.getString());
      FIX::LegTimeUnit LegTimeUnit_82("STRING_1264013413");
      noLegs_1_1_0.set(LegTimeUnit_82);
      InstrumentLeg_82.insert(LegTimeUnit_82.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_82("STRING_1711002358");
      noLegs_1_1_0.set(LegUnitOfMeasure_82);
      InstrumentLeg_82.insert(LegUnitOfMeasure_82.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_82;
      LegUnitOfMeasureQty_82.setString("12890040");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_82);
      InstrumentLeg_82.insert(LegUnitOfMeasureQty_82.getString());
      all_values.push_back(InstrumentLeg_82);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_143;
        FIX::LegSecurityAltID LegSecurityAltID_143("STRING_590949370");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_143);
        LegSecAltIDGrp_NoLegSecurityAltID_143.insert(LegSecurityAltID_143.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_143("STRING_2099650533");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_143);
        LegSecAltIDGrp_NoLegSecurityAltID_143.insert(LegSecurityAltIDSource_143.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_143);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_144;
        FIX::LegSecurityAltID LegSecurityAltID_144("STRING_1702841863");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_144);
        LegSecAltIDGrp_NoLegSecurityAltID_144.insert(LegSecurityAltID_144.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_144("STRING_1106817444");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_144);
        LegSecAltIDGrp_NoLegSecurityAltID_144.insert(LegSecurityAltIDSource_144.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_144);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_8;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_8("USD");
      noLegs_1_1_0.set(LegBenchmarkCurveCurrency_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurveCurrency_8.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_8("STRING_1469891242");
      noLegs_1_1_0.set(LegBenchmarkCurveName_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurveName_8.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_8("STRING_400656122");
      noLegs_1_1_0.set(LegBenchmarkCurvePoint_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurvePoint_8.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_8;
      LegBenchmarkPrice_8.setString("16699951");
      noLegs_1_1_0.set(LegBenchmarkPrice_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkPrice_8.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_8(235389922);
      noLegs_1_1_0.set(LegBenchmarkPriceType_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkPriceType_8.getString());
      all_values.push_back(LegBenchmarkCurveData_8);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_32;
        FIX::LegStipulationType LegStipulationType_32("STRING_1597131946");
        noLegStipulations_1_0_2_0.set(LegStipulationType_32);
        LegStipulations_NoLegStipulations_32.insert(LegStipulationType_32.getString());
        FIX::LegStipulationValue LegStipulationValue_32("STRING_1637357178");
        noLegStipulations_1_0_2_0.set(LegStipulationValue_32);
        LegStipulations_NoLegStipulations_32.insert(LegStipulationValue_32.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_32);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_33;
        FIX::LegStipulationType LegStipulationType_33("STRING_1282706227");
        noLegStipulations_1_0_2_1.set(LegStipulationType_33);
        LegStipulations_NoLegStipulations_33.insert(LegStipulationType_33.getString());
        FIX::LegStipulationValue LegStipulationValue_33("STRING_1470397451");
        noLegStipulations_1_0_2_1.set(LegStipulationValue_33);
        LegStipulations_NoLegStipulations_33.insert(LegStipulationValue_33.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_33);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_106;
        FIX::NestedPartyID NestedPartyID_106("STRING_2045460841");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyID_106.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_106('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyIDSource_106.getString());
        FIX::NestedPartyRole NestedPartyRole_106(242154101);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyRole_106.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_106);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_201;
          FIX::NestedPartySubID NestedPartySubID_201("STRING_549799537");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_201);
          NstdPtysSubGrp_NoNestedPartySubIDs_201.insert(NestedPartySubID_201.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_201(592119794);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_201);
          NstdPtysSubGrp_NoNestedPartySubIDs_201.insert(NestedPartySubIDType_201.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_201);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_202;
          FIX::NestedPartySubID NestedPartySubID_202("STRING_973428630");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_202);
          NstdPtysSubGrp_NoNestedPartySubIDs_202.insert(NestedPartySubID_202.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_202(1944874938);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_202);
          NstdPtysSubGrp_NoNestedPartySubIDs_202.insert(NestedPartySubIDType_202.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_202);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_1_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_8;
      FIX::LegOrderQty LegOrderQty_14;
      LegOrderQty_14.setString("699179");
      noLegs_1_1_1.set(LegOrderQty_14);
      QuotReqLegsGrp_NoLegs_8.insert(LegOrderQty_14.getString());
      FIX::LegQty LegQty_14;
      LegQty_14.setString("1361160");
      noLegs_1_1_1.set(LegQty_14);
      QuotReqLegsGrp_NoLegs_8.insert(LegQty_14.getString());
      FIX::LegRefID LegRefID_14("STRING_1881101875");
      noLegs_1_1_1.set(LegRefID_14);
      QuotReqLegsGrp_NoLegs_8.insert(LegRefID_14.getString());
      FIX::LegSettlDate LegSettlDate_14("LOCALMKTDATE_1333931402");
      noLegs_1_1_1.set(LegSettlDate_14);
      QuotReqLegsGrp_NoLegs_8.insert(LegSettlDate_14.getString());
      FIX::LegSettlType LegSettlType_14('1');
      noLegs_1_1_1.set(LegSettlType_14);
      QuotReqLegsGrp_NoLegs_8.insert(LegSettlType_14.getString());
      FIX::LegSwapType LegSwapType_14(4);
      noLegs_1_1_1.set(LegSwapType_14);
      QuotReqLegsGrp_NoLegs_8.insert(LegSwapType_14.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_8);

      // InstrumentLeg
      multiset<string> InstrumentLeg_83;
      FIX::EncodedLegIssuer EncodedLegIssuer_83("DATA_452875360");
      noLegs_1_1_1.set(EncodedLegIssuer_83);
      InstrumentLeg_83.insert(EncodedLegIssuer_83.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_83(290584082);
      noLegs_1_1_1.set(EncodedLegIssuerLen_83);
      InstrumentLeg_83.insert(EncodedLegIssuerLen_83.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_83("DATA_974789187");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_83);
      InstrumentLeg_83.insert(EncodedLegSecurityDesc_83.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_83(8233575);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_83);
      InstrumentLeg_83.insert(EncodedLegSecurityDescLen_83.getString());
      FIX::LegCFICode LegCFICode_83("STRING_1397401526");
      noLegs_1_1_1.set(LegCFICode_83);
      InstrumentLeg_83.insert(LegCFICode_83.getString());
      FIX::LegContractMultiplier LegContractMultiplier_83;
      LegContractMultiplier_83.setString("3536572");
      noLegs_1_1_1.set(LegContractMultiplier_83);
      InstrumentLeg_83.insert(LegContractMultiplier_83.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_83(24392625);
      noLegs_1_1_1.set(LegContractMultiplierUnit_83);
      InstrumentLeg_83.insert(LegContractMultiplierUnit_83.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_83("MONTHYEAR_719809120");
      noLegs_1_1_1.set(LegContractSettlMonth_83);
      InstrumentLeg_83.insert(LegContractSettlMonth_83.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_83("COUNTRY_754313337");
      noLegs_1_1_1.set(LegCountryOfIssue_83);
      InstrumentLeg_83.insert(LegCountryOfIssue_83.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_83("LOCALMKTDATE_1694387789");
      noLegs_1_1_1.set(LegCouponPaymentDate_83);
      InstrumentLeg_83.insert(LegCouponPaymentDate_83.getString());
      FIX::LegCouponRate LegCouponRate_83;
      LegCouponRate_83.setString("90.420000");
      noLegs_1_1_1.set(LegCouponRate_83);
      InstrumentLeg_83.insert(LegCouponRate_83.getString());
      FIX::LegCreditRating LegCreditRating_83("STRING_1193343721");
      noLegs_1_1_1.set(LegCreditRating_83);
      InstrumentLeg_83.insert(LegCreditRating_83.getString());
      FIX::LegCurrency LegCurrency_83("USD");
      noLegs_1_1_1.set(LegCurrency_83);
      InstrumentLeg_83.insert(LegCurrency_83.getString());
      FIX::LegDatedDate LegDatedDate_83("LOCALMKTDATE_328566300");
      noLegs_1_1_1.set(LegDatedDate_83);
      InstrumentLeg_83.insert(LegDatedDate_83.getString());
      FIX::LegExerciseStyle LegExerciseStyle_83(466949890);
      noLegs_1_1_1.set(LegExerciseStyle_83);
      InstrumentLeg_83.insert(LegExerciseStyle_83.getString());
      FIX::LegFactor LegFactor_83;
      LegFactor_83.setString("13266789");
      noLegs_1_1_1.set(LegFactor_83);
      InstrumentLeg_83.insert(LegFactor_83.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_83(226543494);
      noLegs_1_1_1.set(LegFlowScheduleType_83);
      InstrumentLeg_83.insert(LegFlowScheduleType_83.getString());
      FIX::LegInstrRegistry LegInstrRegistry_83("STRING_1757942973");
      noLegs_1_1_1.set(LegInstrRegistry_83);
      InstrumentLeg_83.insert(LegInstrRegistry_83.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_83("LOCALMKTDATE_1568833014");
      noLegs_1_1_1.set(LegInterestAccrualDate_83);
      InstrumentLeg_83.insert(LegInterestAccrualDate_83.getString());
      FIX::LegIssueDate LegIssueDate_83("LOCALMKTDATE_781304917");
      noLegs_1_1_1.set(LegIssueDate_83);
      InstrumentLeg_83.insert(LegIssueDate_83.getString());
      FIX::LegIssuer LegIssuer_83("STRING_160258862");
      noLegs_1_1_1.set(LegIssuer_83);
      InstrumentLeg_83.insert(LegIssuer_83.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_83("STRING_13469160");
      noLegs_1_1_1.set(LegLocaleOfIssue_83);
      InstrumentLeg_83.insert(LegLocaleOfIssue_83.getString());
      FIX::LegMaturityDate LegMaturityDate_83("LOCALMKTDATE_1754733547");
      noLegs_1_1_1.set(LegMaturityDate_83);
      InstrumentLeg_83.insert(LegMaturityDate_83.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_83("MONTHYEAR_2105133801");
      noLegs_1_1_1.set(LegMaturityMonthYear_83);
      InstrumentLeg_83.insert(LegMaturityMonthYear_83.getString());
      FIX::LegMaturityTime LegMaturityTime_83("TZTIMEONLY_83387150");
      noLegs_1_1_1.set(LegMaturityTime_83);
      InstrumentLeg_83.insert(LegMaturityTime_83.getString());
      FIX::LegOptAttribute LegOptAttribute_83('1');
      noLegs_1_1_1.set(LegOptAttribute_83);
      InstrumentLeg_83.insert(LegOptAttribute_83.getString());
      FIX::LegOptionRatio LegOptionRatio_83;
      LegOptionRatio_83.setString("18387520");
      noLegs_1_1_1.set(LegOptionRatio_83);
      InstrumentLeg_83.insert(LegOptionRatio_83.getString());
      FIX::LegPool LegPool_83("STRING_1417318552");
      noLegs_1_1_1.set(LegPool_83);
      InstrumentLeg_83.insert(LegPool_83.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_83("STRING_1590484261");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_83);
      InstrumentLeg_83.insert(LegPriceUnitOfMeasure_83.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_83;
      LegPriceUnitOfMeasureQty_83.setString("7138906");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_83);
      InstrumentLeg_83.insert(LegPriceUnitOfMeasureQty_83.getString());
      FIX::LegProduct LegProduct_83(1870193913);
      noLegs_1_1_1.set(LegProduct_83);
      InstrumentLeg_83.insert(LegProduct_83.getString());
      FIX::LegPutOrCall LegPutOrCall_83(1881068343);
      noLegs_1_1_1.set(LegPutOrCall_83);
      InstrumentLeg_83.insert(LegPutOrCall_83.getString());
      FIX::LegRatioQty LegRatioQty_83;
      LegRatioQty_83.setString("16886798");
      noLegs_1_1_1.set(LegRatioQty_83);
      InstrumentLeg_83.insert(LegRatioQty_83.getString());
      FIX::LegRedemptionDate LegRedemptionDate_83("LOCALMKTDATE_1878427488");
      noLegs_1_1_1.set(LegRedemptionDate_83);
      InstrumentLeg_83.insert(LegRedemptionDate_83.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_83("STRING_1130986221");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_83);
      InstrumentLeg_83.insert(LegRepoCollateralSecurityType_83.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_83;
      LegRepurchaseRate_83.setString("70.840000");
      noLegs_1_1_1.set(LegRepurchaseRate_83);
      InstrumentLeg_83.insert(LegRepurchaseRate_83.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_83(1902820114);
      noLegs_1_1_1.set(LegRepurchaseTerm_83);
      InstrumentLeg_83.insert(LegRepurchaseTerm_83.getString());
      FIX::LegSecurityDesc LegSecurityDesc_83("STRING_1850795341");
      noLegs_1_1_1.set(LegSecurityDesc_83);
      InstrumentLeg_83.insert(LegSecurityDesc_83.getString());
      FIX::LegSecurityExchange LegSecurityExchange_83("EXCHANGE_649166773");
      noLegs_1_1_1.set(LegSecurityExchange_83);
      InstrumentLeg_83.insert(LegSecurityExchange_83.getString());
      FIX::LegSecurityID LegSecurityID_83("STRING_1449724255");
      noLegs_1_1_1.set(LegSecurityID_83);
      InstrumentLeg_83.insert(LegSecurityID_83.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_83("STRING_658510735");
      noLegs_1_1_1.set(LegSecurityIDSource_83);
      InstrumentLeg_83.insert(LegSecurityIDSource_83.getString());
      FIX::LegSecuritySubType LegSecuritySubType_83("STRING_1842510494");
      noLegs_1_1_1.set(LegSecuritySubType_83);
      InstrumentLeg_83.insert(LegSecuritySubType_83.getString());
      FIX::LegSecurityType LegSecurityType_83("STRING_446276694");
      noLegs_1_1_1.set(LegSecurityType_83);
      InstrumentLeg_83.insert(LegSecurityType_83.getString());
      FIX::LegSide LegSide_83('1');
      noLegs_1_1_1.set(LegSide_83);
      InstrumentLeg_83.insert(LegSide_83.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_83("STRING_23593146");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_83);
      InstrumentLeg_83.insert(LegStateOrProvinceOfIssue_83.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_83("EUR");
      noLegs_1_1_1.set(LegStrikeCurrency_83);
      InstrumentLeg_83.insert(LegStrikeCurrency_83.getString());
      FIX::LegStrikePrice LegStrikePrice_83;
      LegStrikePrice_83.setString("2501366");
      noLegs_1_1_1.set(LegStrikePrice_83);
      InstrumentLeg_83.insert(LegStrikePrice_83.getString());
      FIX::LegSymbol LegSymbol_83("STRING_523685909");
      noLegs_1_1_1.set(LegSymbol_83);
      InstrumentLeg_83.insert(LegSymbol_83.getString());
      FIX::LegSymbolSfx LegSymbolSfx_83("STRING_1851611587");
      noLegs_1_1_1.set(LegSymbolSfx_83);
      InstrumentLeg_83.insert(LegSymbolSfx_83.getString());
      FIX::LegTimeUnit LegTimeUnit_83("STRING_1031441557");
      noLegs_1_1_1.set(LegTimeUnit_83);
      InstrumentLeg_83.insert(LegTimeUnit_83.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_83("STRING_683944772");
      noLegs_1_1_1.set(LegUnitOfMeasure_83);
      InstrumentLeg_83.insert(LegUnitOfMeasure_83.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_83;
      LegUnitOfMeasureQty_83.setString("18650807");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_83);
      InstrumentLeg_83.insert(LegUnitOfMeasureQty_83.getString());
      all_values.push_back(InstrumentLeg_83);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_145;
        FIX::LegSecurityAltID LegSecurityAltID_145("STRING_641594925");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_145);
        LegSecAltIDGrp_NoLegSecurityAltID_145.insert(LegSecurityAltID_145.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_145("STRING_1948467897");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_145);
        LegSecAltIDGrp_NoLegSecurityAltID_145.insert(LegSecurityAltIDSource_145.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_145);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_146;
        FIX::LegSecurityAltID LegSecurityAltID_146("STRING_382057358");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_146);
        LegSecAltIDGrp_NoLegSecurityAltID_146.insert(LegSecurityAltID_146.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_146("STRING_332863305");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_146);
        LegSecAltIDGrp_NoLegSecurityAltID_146.insert(LegSecurityAltIDSource_146.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_146);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_9;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_9("JPY");
      noLegs_1_1_1.set(LegBenchmarkCurveCurrency_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurveCurrency_9.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_9("STRING_1046753987");
      noLegs_1_1_1.set(LegBenchmarkCurveName_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurveName_9.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_9("STRING_941013067");
      noLegs_1_1_1.set(LegBenchmarkCurvePoint_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurvePoint_9.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_9;
      LegBenchmarkPrice_9.setString("17061263");
      noLegs_1_1_1.set(LegBenchmarkPrice_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkPrice_9.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_9(587950208);
      noLegs_1_1_1.set(LegBenchmarkPriceType_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkPriceType_9.getString());
      all_values.push_back(LegBenchmarkCurveData_9);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_34;
        FIX::LegStipulationType LegStipulationType_34("STRING_689628889");
        noLegStipulations_1_1_2_0.set(LegStipulationType_34);
        LegStipulations_NoLegStipulations_34.insert(LegStipulationType_34.getString());
        FIX::LegStipulationValue LegStipulationValue_34("STRING_482803644");
        noLegStipulations_1_1_2_0.set(LegStipulationValue_34);
        LegStipulations_NoLegStipulations_34.insert(LegStipulationValue_34.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_34);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_35;
        FIX::LegStipulationType LegStipulationType_35("STRING_427293373");
        noLegStipulations_1_1_2_1.set(LegStipulationType_35);
        LegStipulations_NoLegStipulations_35.insert(LegStipulationType_35.getString());
        FIX::LegStipulationValue LegStipulationValue_35("STRING_392940582");
        noLegStipulations_1_1_2_1.set(LegStipulationValue_35);
        LegStipulations_NoLegStipulations_35.insert(LegStipulationValue_35.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_35);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_36;
        FIX::LegStipulationType LegStipulationType_36("STRING_1131970417");
        noLegStipulations_1_1_2_2.set(LegStipulationType_36);
        LegStipulations_NoLegStipulations_36.insert(LegStipulationType_36.getString());
        FIX::LegStipulationValue LegStipulationValue_36("STRING_1877017628");
        noLegStipulations_1_1_2_2.set(LegStipulationValue_36);
        LegStipulations_NoLegStipulations_36.insert(LegStipulationValue_36.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_36);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_107;
        FIX::NestedPartyID NestedPartyID_107("STRING_826997263");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyID_107.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_107('1');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyIDSource_107.getString());
        FIX::NestedPartyRole NestedPartyRole_107(7550978);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyRole_107.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_107);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_203;
          FIX::NestedPartySubID NestedPartySubID_203("STRING_1089037258");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_203);
          NstdPtysSubGrp_NoNestedPartySubIDs_203.insert(NestedPartySubID_203.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_203(290329551);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_203);
          NstdPtysSubGrp_NoNestedPartySubIDs_203.insert(NestedPartySubIDType_203.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_203);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_204;
          FIX::NestedPartySubID NestedPartySubID_204("STRING_1100727050");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_204);
          NstdPtysSubGrp_NoNestedPartySubIDs_204.insert(NestedPartySubID_204.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_204(1612723168);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_204);
          NstdPtysSubGrp_NoNestedPartySubIDs_204.insert(NestedPartySubIDType_204.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_204);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_108;
        FIX::NestedPartyID NestedPartyID_108("STRING_2141941138");
        noNestedPartyIDs_1_1_2_1.set(NestedPartyID_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyID_108.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_108('2');
        noNestedPartyIDs_1_1_2_1.set(NestedPartyIDSource_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyIDSource_108.getString());
        FIX::NestedPartyRole NestedPartyRole_108(149184292);
        noNestedPartyIDs_1_1_2_1.set(NestedPartyRole_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyRole_108.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_108);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_205;
          FIX::NestedPartySubID NestedPartySubID_205("STRING_623376416");
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubID_205);
          NstdPtysSubGrp_NoNestedPartySubIDs_205.insert(NestedPartySubID_205.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_205(790779217);
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubIDType_205);
          NstdPtysSubGrp_NoNestedPartySubIDs_205.insert(NestedPartySubIDType_205.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_205);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_109;
        FIX::NestedPartyID NestedPartyID_109("STRING_1660522487");
        noNestedPartyIDs_1_1_2_2.set(NestedPartyID_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyID_109.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_109('1');
        noNestedPartyIDs_1_1_2_2.set(NestedPartyIDSource_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyIDSource_109.getString());
        FIX::NestedPartyRole NestedPartyRole_109(1123642522);
        noNestedPartyIDs_1_1_2_2.set(NestedPartyRole_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyRole_109.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_109);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_206;
          FIX::NestedPartySubID NestedPartySubID_206("STRING_830491747");
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubID_206);
          NstdPtysSubGrp_NoNestedPartySubIDs_206.insert(NestedPartySubID_206.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_206(22912861);
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubIDType_206);
          NstdPtysSubGrp_NoNestedPartySubIDs_206.insert(NestedPartySubIDType_206.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_206);

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_0);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_25;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_25("JPY");
    noRelatedSym_0_1.set(BenchmarkCurveCurrency_25);
    SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurveCurrency_25.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_25("STRING_SONIA");
    noRelatedSym_0_1.set(BenchmarkCurveName_25);
    SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurveName_25.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_25("STRING_196827967");
    noRelatedSym_0_1.set(BenchmarkCurvePoint_25);
    SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurvePoint_25.getString());
    FIX::BenchmarkPrice BenchmarkPrice_25;
    BenchmarkPrice_25.setString("10787633");
    noRelatedSym_0_1.set(BenchmarkPrice_25);
    SpreadOrBenchmarkCurveData_25.insert(BenchmarkPrice_25.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_25(1093666713);
    noRelatedSym_0_1.set(BenchmarkPriceType_25);
    SpreadOrBenchmarkCurveData_25.insert(BenchmarkPriceType_25.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_25("STRING_624121341");
    noRelatedSym_0_1.set(BenchmarkSecurityID_25);
    SpreadOrBenchmarkCurveData_25.insert(BenchmarkSecurityID_25.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_25("STRING_1471703886");
    noRelatedSym_0_1.set(BenchmarkSecurityIDSource_25);
    SpreadOrBenchmarkCurveData_25.insert(BenchmarkSecurityIDSource_25.getString());
    FIX::Spread Spread_25;
    Spread_25.setString("781534");
    noRelatedSym_0_1.set(Spread_25);
    SpreadOrBenchmarkCurveData_25.insert(Spread_25.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_25);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_45;
      FIX::StipulationType StipulationType_45("STRING_RESTRICTED");
      noStipulations_1_1_0.set(StipulationType_45);
      Stipulations_NoStipulations_45.insert(StipulationType_45.getString());
      FIX::StipulationValue StipulationValue_45("STRING_905150745");
      noStipulations_1_1_0.set(StipulationValue_45);
      Stipulations_NoStipulations_45.insert(StipulationValue_45.getString());
      all_values.push_back(Stipulations_NoStipulations_45);

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_100;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_100("DATA_383222534");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingIssuer_100.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_100(1755741154);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingIssuerLen_100.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_100("DATA_1618503254");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingSecurityDesc_100.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_100(673552085);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingSecurityDescLen_100.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_100;
      UnderlyingAdjustedQuantity_100.setString("7089845");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_100);
      UnderlyingInstrument_100.insert(UnderlyingAdjustedQuantity_100.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_100;
      UnderlyingAllocationPercent_100.setString("27.740000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_100);
      UnderlyingInstrument_100.insert(UnderlyingAllocationPercent_100.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_100;
      UnderlyingAttachmentPoint_100.setString("95.750000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_100);
      UnderlyingInstrument_100.insert(UnderlyingAttachmentPoint_100.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_100("STRING_693669516");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_100);
      UnderlyingInstrument_100.insert(UnderlyingCFICode_100.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_100("STRING_1232927066");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_100);
      UnderlyingInstrument_100.insert(UnderlyingCPProgram_100.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_100("STRING_380064164");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_100);
      UnderlyingInstrument_100.insert(UnderlyingCPRegType_100.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_100;
      UnderlyingCapValue_100.setString("13170459");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_100);
      UnderlyingInstrument_100.insert(UnderlyingCapValue_100.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_100;
      UnderlyingCashAmount_100.setString("20237062");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_100);
      UnderlyingInstrument_100.insert(UnderlyingCashAmount_100.getString());
      FIX::UnderlyingCashType UnderlyingCashType_100("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_100);
      UnderlyingInstrument_100.insert(UnderlyingCashType_100.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_100;
      UnderlyingContractMultiplier_100.setString("1749960");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_100);
      UnderlyingInstrument_100.insert(UnderlyingContractMultiplier_100.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_100(999865157);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_100);
      UnderlyingInstrument_100.insert(UnderlyingContractMultiplierUnit_100.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_100("COUNTRY_624444644");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingCountryOfIssue_100.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_100("LOCALMKTDATE_1005487806");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_100);
      UnderlyingInstrument_100.insert(UnderlyingCouponPaymentDate_100.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_100;
      UnderlyingCouponRate_100.setString("80.180000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_100);
      UnderlyingInstrument_100.insert(UnderlyingCouponRate_100.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_100("STRING_149315704");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_100);
      UnderlyingInstrument_100.insert(UnderlyingCreditRating_100.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_100("CHF");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_100);
      UnderlyingInstrument_100.insert(UnderlyingCurrency_100.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_100;
      UnderlyingCurrentValue_100.setString("3461436");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_100);
      UnderlyingInstrument_100.insert(UnderlyingCurrentValue_100.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_100;
      UnderlyingDetachmentPoint_100.setString("18.760000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_100);
      UnderlyingInstrument_100.insert(UnderlyingDetachmentPoint_100.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_100;
      UnderlyingDirtyPrice_100.setString("5798241");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_100);
      UnderlyingInstrument_100.insert(UnderlyingDirtyPrice_100.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_100;
      UnderlyingEndPrice_100.setString("9702650");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_100);
      UnderlyingInstrument_100.insert(UnderlyingEndPrice_100.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_100;
      UnderlyingEndValue_100.setString("17976057");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_100);
      UnderlyingInstrument_100.insert(UnderlyingEndValue_100.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_100(657977634);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_100);
      UnderlyingInstrument_100.insert(UnderlyingExerciseStyle_100.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_100;
      UnderlyingFXRate_100.setString("13239203");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_100);
      UnderlyingInstrument_100.insert(UnderlyingFXRate_100.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_100('D');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_100);
      UnderlyingInstrument_100.insert(UnderlyingFXRateCalc_100.getString());
      FIX::UnderlyingFactor UnderlyingFactor_100;
      UnderlyingFactor_100.setString("15631283");
      noUnderlyings_1_1_0.set(UnderlyingFactor_100);
      UnderlyingInstrument_100.insert(UnderlyingFactor_100.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_100(1853386330);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_100);
      UnderlyingInstrument_100.insert(UnderlyingFlowScheduleType_100.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_100("STRING_409016204");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_100);
      UnderlyingInstrument_100.insert(UnderlyingInstrRegistry_100.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_100("LOCALMKTDATE_1171385886");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_100);
      UnderlyingInstrument_100.insert(UnderlyingIssueDate_100.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_100("STRING_1324405937");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_100);
      UnderlyingInstrument_100.insert(UnderlyingIssuer_100.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_100("STRING_1082568289");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingLocaleOfIssue_100.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_100("LOCALMKTDATE_1880370442");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityDate_100.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_100("MONTHYEAR_260665063");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityMonthYear_100.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_100("TZTIMEONLY_1750577864");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityTime_100.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_100;
      UnderlyingNotionalPercentageOutstanding_100.setString("63.100000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_100);
      UnderlyingInstrument_100.insert(UnderlyingNotionalPercentageOutstanding_100.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_100('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_100);
      UnderlyingInstrument_100.insert(UnderlyingOptAttribute_100.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_100;
      UnderlyingOriginalNotionalPercentageOutstanding_100.setString("20.290000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_100);
      UnderlyingInstrument_100.insert(UnderlyingOriginalNotionalPercentageOutstanding_100.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_100("STRING_1743602243");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_100);
      UnderlyingInstrument_100.insert(UnderlyingPriceUnitOfMeasure_100.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_100;
      UnderlyingPriceUnitOfMeasureQty_100.setString("13698147");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_100);
      UnderlyingInstrument_100.insert(UnderlyingPriceUnitOfMeasureQty_100.getString());
      FIX::UnderlyingProduct UnderlyingProduct_100(2023745032);
      noUnderlyings_1_1_0.set(UnderlyingProduct_100);
      UnderlyingInstrument_100.insert(UnderlyingProduct_100.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_100(1918598302);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_100);
      UnderlyingInstrument_100.insert(UnderlyingPutOrCall_100.getString());
      FIX::UnderlyingPx UnderlyingPx_100;
      UnderlyingPx_100.setString("2221962");
      noUnderlyings_1_1_0.set(UnderlyingPx_100);
      UnderlyingInstrument_100.insert(UnderlyingPx_100.getString());
      FIX::UnderlyingQty UnderlyingQty_100;
      UnderlyingQty_100.setString("5007060");
      noUnderlyings_1_1_0.set(UnderlyingQty_100);
      UnderlyingInstrument_100.insert(UnderlyingQty_100.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_100("LOCALMKTDATE_776602461");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_100);
      UnderlyingInstrument_100.insert(UnderlyingRedemptionDate_100.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_100("STRING_1244974293");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_100);
      UnderlyingInstrument_100.insert(UnderlyingRepoCollateralSecurityType_100.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_100;
      UnderlyingRepurchaseRate_100.setString("17.330000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_100);
      UnderlyingInstrument_100.insert(UnderlyingRepurchaseRate_100.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_100(23741034);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_100);
      UnderlyingInstrument_100.insert(UnderlyingRepurchaseTerm_100.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_100("STRING_731131733");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_100);
      UnderlyingInstrument_100.insert(UnderlyingRestructuringType_100.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_100("STRING_996165405");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityDesc_100.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_100("EXCHANGE_349642910");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityExchange_100.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_100("STRING_1310955885");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityID_100.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_100("STRING_1966430418");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityIDSource_100.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_100("STRING_2147248673");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_100);
      UnderlyingInstrument_100.insert(UnderlyingSecuritySubType_100.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_100("STRING_1968933520");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityType_100.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_100("STRING_1142867105");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_100);
      UnderlyingInstrument_100.insert(UnderlyingSeniority_100.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_100("STRING_25558695");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_100);
      UnderlyingInstrument_100.insert(UnderlyingSettlMethod_100.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_100(5);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_100);
      UnderlyingInstrument_100.insert(UnderlyingSettlementType_100.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_100;
      UnderlyingStartValue_100.setString("8487697");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_100);
      UnderlyingInstrument_100.insert(UnderlyingStartValue_100.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_100("STRING_434574900");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingStateOrProvinceOfIssue_100.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_100("JPY");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_100);
      UnderlyingInstrument_100.insert(UnderlyingStrikeCurrency_100.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_100;
      UnderlyingStrikePrice_100.setString("15171431");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_100);
      UnderlyingInstrument_100.insert(UnderlyingStrikePrice_100.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_100("STRING_141367284");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_100);
      UnderlyingInstrument_100.insert(UnderlyingSymbol_100.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_100("STRING_286357140");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_100);
      UnderlyingInstrument_100.insert(UnderlyingSymbolSfx_100.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_100("STRING_1120237406");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_100);
      UnderlyingInstrument_100.insert(UnderlyingTimeUnit_100.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_100("STRING_567923594");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_100);
      UnderlyingInstrument_100.insert(UnderlyingUnitOfMeasure_100.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_100;
      UnderlyingUnitOfMeasureQty_100.setString("17799492");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_100);
      UnderlyingInstrument_100.insert(UnderlyingUnitOfMeasureQty_100.getString());
      all_values.push_back(UnderlyingInstrument_100);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_199;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_199("STRING_164042189");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltID_199.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_199("STRING_1002280387");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltIDSource_199.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_200;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_200("STRING_979657171");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltID_200.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_200("STRING_2082640492");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltIDSource_200.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_201;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_201("STRING_1224476662");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltID_201);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltID_201.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_201("STRING_1480363200");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltIDSource_201);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltIDSource_201.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_192;
        FIX::UnderlyingStipType UnderlyingStipType_192("STRING_321967308");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_192);
        UnderlyingStipulations_NoUnderlyingStips_192.insert(UnderlyingStipType_192.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_192("STRING_2130384934");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_192);
        UnderlyingStipulations_NoUnderlyingStips_192.insert(UnderlyingStipValue_192.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_192);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_193;
        FIX::UnderlyingStipType UnderlyingStipType_193("STRING_735500339");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_193);
        UnderlyingStipulations_NoUnderlyingStips_193.insert(UnderlyingStipType_193.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_193("STRING_1053099041");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_193);
        UnderlyingStipulations_NoUnderlyingStips_193.insert(UnderlyingStipValue_193.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_193);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_194;
        FIX::UnderlyingStipType UnderlyingStipType_194("STRING_979066691");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_194);
        UnderlyingStipulations_NoUnderlyingStips_194.insert(UnderlyingStipType_194.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_194("STRING_1085143249");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_194);
        UnderlyingStipulations_NoUnderlyingStips_194.insert(UnderlyingStipValue_194.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_194);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_205;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_205("STRING_798013462");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyID_205.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_205('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyIDSource_205.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_205(38021150);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_205);
        UndlyInstrumentParties_NoUndlyInstrumentParties_205.insert(UnderlyingInstrumentPartyRole_205.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_205);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_403("STRING_1110466970");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_403);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403.insert(UnderlyingInstrumentPartySubID_403.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_403(1422599402);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_403);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403.insert(UnderlyingInstrumentPartySubIDType_403.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_101;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_101("DATA_642166706");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingIssuer_101.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_101(1545041870);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingIssuerLen_101.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_101("DATA_1831079891");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingSecurityDesc_101.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_101(667858783);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingSecurityDescLen_101.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_101;
      UnderlyingAdjustedQuantity_101.setString("9147014");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_101);
      UnderlyingInstrument_101.insert(UnderlyingAdjustedQuantity_101.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_101;
      UnderlyingAllocationPercent_101.setString("71.750000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_101);
      UnderlyingInstrument_101.insert(UnderlyingAllocationPercent_101.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_101;
      UnderlyingAttachmentPoint_101.setString("59.230000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_101);
      UnderlyingInstrument_101.insert(UnderlyingAttachmentPoint_101.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_101("STRING_2034938817");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_101);
      UnderlyingInstrument_101.insert(UnderlyingCFICode_101.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_101("STRING_392887122");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_101);
      UnderlyingInstrument_101.insert(UnderlyingCPProgram_101.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_101("STRING_586681545");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_101);
      UnderlyingInstrument_101.insert(UnderlyingCPRegType_101.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_101;
      UnderlyingCapValue_101.setString("9908509");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_101);
      UnderlyingInstrument_101.insert(UnderlyingCapValue_101.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_101;
      UnderlyingCashAmount_101.setString("5569293");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_101);
      UnderlyingInstrument_101.insert(UnderlyingCashAmount_101.getString());
      FIX::UnderlyingCashType UnderlyingCashType_101("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_101);
      UnderlyingInstrument_101.insert(UnderlyingCashType_101.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_101;
      UnderlyingContractMultiplier_101.setString("19705081");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_101);
      UnderlyingInstrument_101.insert(UnderlyingContractMultiplier_101.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_101(492086155);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_101);
      UnderlyingInstrument_101.insert(UnderlyingContractMultiplierUnit_101.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_101("COUNTRY_665954947");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingCountryOfIssue_101.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_101("LOCALMKTDATE_1303387680");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_101);
      UnderlyingInstrument_101.insert(UnderlyingCouponPaymentDate_101.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_101;
      UnderlyingCouponRate_101.setString("54.600000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_101);
      UnderlyingInstrument_101.insert(UnderlyingCouponRate_101.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_101("STRING_987922255");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_101);
      UnderlyingInstrument_101.insert(UnderlyingCreditRating_101.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_101("CAN");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_101);
      UnderlyingInstrument_101.insert(UnderlyingCurrency_101.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_101;
      UnderlyingCurrentValue_101.setString("20410212");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_101);
      UnderlyingInstrument_101.insert(UnderlyingCurrentValue_101.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_101;
      UnderlyingDetachmentPoint_101.setString("20.100000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_101);
      UnderlyingInstrument_101.insert(UnderlyingDetachmentPoint_101.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_101;
      UnderlyingDirtyPrice_101.setString("8770054");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_101);
      UnderlyingInstrument_101.insert(UnderlyingDirtyPrice_101.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_101;
      UnderlyingEndPrice_101.setString("1101089");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_101);
      UnderlyingInstrument_101.insert(UnderlyingEndPrice_101.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_101;
      UnderlyingEndValue_101.setString("9158854");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_101);
      UnderlyingInstrument_101.insert(UnderlyingEndValue_101.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_101(1961913675);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_101);
      UnderlyingInstrument_101.insert(UnderlyingExerciseStyle_101.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_101;
      UnderlyingFXRate_101.setString("1481300");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_101);
      UnderlyingInstrument_101.insert(UnderlyingFXRate_101.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_101('M');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_101);
      UnderlyingInstrument_101.insert(UnderlyingFXRateCalc_101.getString());
      FIX::UnderlyingFactor UnderlyingFactor_101;
      UnderlyingFactor_101.setString("9248969");
      noUnderlyings_1_1_1.set(UnderlyingFactor_101);
      UnderlyingInstrument_101.insert(UnderlyingFactor_101.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_101(1570729479);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_101);
      UnderlyingInstrument_101.insert(UnderlyingFlowScheduleType_101.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_101("STRING_1351449097");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_101);
      UnderlyingInstrument_101.insert(UnderlyingInstrRegistry_101.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_101("LOCALMKTDATE_322455219");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_101);
      UnderlyingInstrument_101.insert(UnderlyingIssueDate_101.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_101("STRING_1254325722");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_101);
      UnderlyingInstrument_101.insert(UnderlyingIssuer_101.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_101("STRING_2019307880");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingLocaleOfIssue_101.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_101("LOCALMKTDATE_1237156631");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityDate_101.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_101("MONTHYEAR_1079289250");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityMonthYear_101.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_101("TZTIMEONLY_826040155");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityTime_101.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_101;
      UnderlyingNotionalPercentageOutstanding_101.setString("18.000000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_101);
      UnderlyingInstrument_101.insert(UnderlyingNotionalPercentageOutstanding_101.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_101('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_101);
      UnderlyingInstrument_101.insert(UnderlyingOptAttribute_101.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_101;
      UnderlyingOriginalNotionalPercentageOutstanding_101.setString("17.000000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_101);
      UnderlyingInstrument_101.insert(UnderlyingOriginalNotionalPercentageOutstanding_101.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_101("STRING_2115462757");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_101);
      UnderlyingInstrument_101.insert(UnderlyingPriceUnitOfMeasure_101.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_101;
      UnderlyingPriceUnitOfMeasureQty_101.setString("20291056");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_101);
      UnderlyingInstrument_101.insert(UnderlyingPriceUnitOfMeasureQty_101.getString());
      FIX::UnderlyingProduct UnderlyingProduct_101(854199985);
      noUnderlyings_1_1_1.set(UnderlyingProduct_101);
      UnderlyingInstrument_101.insert(UnderlyingProduct_101.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_101(1938487237);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_101);
      UnderlyingInstrument_101.insert(UnderlyingPutOrCall_101.getString());
      FIX::UnderlyingPx UnderlyingPx_101;
      UnderlyingPx_101.setString("3737081");
      noUnderlyings_1_1_1.set(UnderlyingPx_101);
      UnderlyingInstrument_101.insert(UnderlyingPx_101.getString());
      FIX::UnderlyingQty UnderlyingQty_101;
      UnderlyingQty_101.setString("15201549");
      noUnderlyings_1_1_1.set(UnderlyingQty_101);
      UnderlyingInstrument_101.insert(UnderlyingQty_101.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_101("LOCALMKTDATE_1094391269");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_101);
      UnderlyingInstrument_101.insert(UnderlyingRedemptionDate_101.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_101("STRING_1577553651");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_101);
      UnderlyingInstrument_101.insert(UnderlyingRepoCollateralSecurityType_101.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_101;
      UnderlyingRepurchaseRate_101.setString("35.390000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_101);
      UnderlyingInstrument_101.insert(UnderlyingRepurchaseRate_101.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_101(233196588);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_101);
      UnderlyingInstrument_101.insert(UnderlyingRepurchaseTerm_101.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_101("STRING_1369415803");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_101);
      UnderlyingInstrument_101.insert(UnderlyingRestructuringType_101.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_101("STRING_254131187");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityDesc_101.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_101("EXCHANGE_351068598");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityExchange_101.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_101("STRING_98937556");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityID_101.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_101("STRING_364240113");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityIDSource_101.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_101("STRING_1266954070");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_101);
      UnderlyingInstrument_101.insert(UnderlyingSecuritySubType_101.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_101("STRING_2060851231");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityType_101.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_101("STRING_512370190");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_101);
      UnderlyingInstrument_101.insert(UnderlyingSeniority_101.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_101("STRING_1976236461");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_101);
      UnderlyingInstrument_101.insert(UnderlyingSettlMethod_101.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_101(2);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_101);
      UnderlyingInstrument_101.insert(UnderlyingSettlementType_101.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_101;
      UnderlyingStartValue_101.setString("20830996");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_101);
      UnderlyingInstrument_101.insert(UnderlyingStartValue_101.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_101("STRING_1180201910");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingStateOrProvinceOfIssue_101.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_101("USD");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_101);
      UnderlyingInstrument_101.insert(UnderlyingStrikeCurrency_101.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_101;
      UnderlyingStrikePrice_101.setString("10520261");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_101);
      UnderlyingInstrument_101.insert(UnderlyingStrikePrice_101.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_101("STRING_250392783");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_101);
      UnderlyingInstrument_101.insert(UnderlyingSymbol_101.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_101("STRING_121747346");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_101);
      UnderlyingInstrument_101.insert(UnderlyingSymbolSfx_101.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_101("STRING_1878066298");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_101);
      UnderlyingInstrument_101.insert(UnderlyingTimeUnit_101.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_101("STRING_1375004584");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_101);
      UnderlyingInstrument_101.insert(UnderlyingUnitOfMeasure_101.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_101;
      UnderlyingUnitOfMeasureQty_101.setString("15939237");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_101);
      UnderlyingInstrument_101.insert(UnderlyingUnitOfMeasureQty_101.getString());
      all_values.push_back(UnderlyingInstrument_101);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_202;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_202("STRING_1342983693");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_202);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltID_202.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_202("STRING_1475545753");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_202);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltIDSource_202.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_203;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_203("STRING_1997504336");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_203);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltID_203.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_203("STRING_1133987282");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_203);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltIDSource_203.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_195;
        FIX::UnderlyingStipType UnderlyingStipType_195("STRING_1370175620");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_195);
        UnderlyingStipulations_NoUnderlyingStips_195.insert(UnderlyingStipType_195.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_195("STRING_80894903");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_195);
        UnderlyingStipulations_NoUnderlyingStips_195.insert(UnderlyingStipValue_195.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_195);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_196;
        FIX::UnderlyingStipType UnderlyingStipType_196("STRING_1279323948");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_196);
        UnderlyingStipulations_NoUnderlyingStips_196.insert(UnderlyingStipType_196.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_196("STRING_1730769159");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_196);
        UnderlyingStipulations_NoUnderlyingStips_196.insert(UnderlyingStipValue_196.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_196);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_206;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_206("STRING_501256103");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyID_206.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_206('1');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyIDSource_206.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_206(665160089);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_206);
        UndlyInstrumentParties_NoUndlyInstrumentParties_206.insert(UnderlyingInstrumentPartyRole_206.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_206);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_404("STRING_201656811");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_404);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404.insert(UnderlyingInstrumentPartySubID_404.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_404(1932114159);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_404);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404.insert(UnderlyingInstrumentPartySubIDType_404.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_207;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_207("STRING_513561242");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyID_207.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_207('7');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyIDSource_207.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_207(1760866972);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_207);
        UndlyInstrumentParties_NoUndlyInstrumentParties_207.insert(UnderlyingInstrumentPartyRole_207.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_207);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_405("STRING_649643023");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_405);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405.insert(UnderlyingInstrumentPartySubID_405.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_405(793585235);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_405);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405.insert(UnderlyingInstrumentPartySubIDType_405.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_406("STRING_365061976");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_406);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406.insert(UnderlyingInstrumentPartySubID_406.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_406(1839584767);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_406);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406.insert(UnderlyingInstrumentPartySubIDType_406.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_407("STRING_1845611378");
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubID_407);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407.insert(UnderlyingInstrumentPartySubID_407.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_407(615454759);
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_407);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407.insert(UnderlyingInstrumentPartySubIDType_407.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_208;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_208("STRING_1961332113");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyID_208.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_208('1');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyIDSource_208.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_208(1990459343);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_208);
        UndlyInstrumentParties_NoUndlyInstrumentParties_208.insert(UnderlyingInstrumentPartyRole_208.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_208);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_408("STRING_572014731");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_408);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408.insert(UnderlyingInstrumentPartySubID_408.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_408(1185959388);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_408);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408.insert(UnderlyingInstrumentPartySubIDType_408.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_409("STRING_735834289");
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubID_409);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409.insert(UnderlyingInstrumentPartySubID_409.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_409(422035419);
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_409);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409.insert(UnderlyingInstrumentPartySubIDType_409.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    // YieldData
    multiset<string> YieldData_20;
    FIX::Yield Yield_20;
    Yield_20.setString("30.220000");
    noRelatedSym_0_1.set(Yield_20);
    YieldData_20.insert(Yield_20.getString());
    FIX::YieldCalcDate YieldCalcDate_20("LOCALMKTDATE_437604585");
    noRelatedSym_0_1.set(YieldCalcDate_20);
    YieldData_20.insert(YieldCalcDate_20.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_20("LOCALMKTDATE_1792211039");
    noRelatedSym_0_1.set(YieldRedemptionDate_20);
    YieldData_20.insert(YieldRedemptionDate_20.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_20;
    YieldRedemptionPrice_20.setString("2533579");
    noRelatedSym_0_1.set(YieldRedemptionPrice_20);
    YieldData_20.insert(YieldRedemptionPrice_20.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_20(1716928533);
    noRelatedSym_0_1.set(YieldRedemptionPriceType_20);
    YieldData_20.insert(YieldRedemptionPriceType_20.getString());
    FIX::YieldType YieldType_20("STRING_TENDER");
    noRelatedSym_0_1.set(YieldType_20);
    YieldData_20.insert(YieldType_20.getString());
    all_values.push_back(YieldData_20);

    msg.addGroup(noRelatedSym_0_1);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_8;
    FIX::RootPartyID RootPartyID_8("STRING_70700988");
    noRootPartyIDs_0_0.set(RootPartyID_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyID_8.getString());
    FIX::RootPartyIDSource RootPartyIDSource_8('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyIDSource_8.getString());
    FIX::RootPartyRole RootPartyRole_8(1232609507);
    noRootPartyIDs_0_0.set(RootPartyRole_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyRole_8.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_8);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_17;
      FIX::RootPartySubID RootPartySubID_17("STRING_1414570060");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_17);
      RootSubParties_NoRootPartySubIDs_17.insert(RootPartySubID_17.getString());
      FIX::RootPartySubIDType RootPartySubIDType_17(1017240018);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_17);
      RootSubParties_NoRootPartySubIDs_17.insert(RootPartySubIDType_17.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_17);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_9;
    FIX::RootPartyID RootPartyID_9("STRING_1184455890");
    noRootPartyIDs_0_1.set(RootPartyID_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyID_9.getString());
    FIX::RootPartyIDSource RootPartyIDSource_9('2');
    noRootPartyIDs_0_1.set(RootPartyIDSource_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyIDSource_9.getString());
    FIX::RootPartyRole RootPartyRole_9(630623343);
    noRootPartyIDs_0_1.set(RootPartyRole_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyRole_9.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_9);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_18;
      FIX::RootPartySubID RootPartySubID_18("STRING_630756437");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_18);
      RootSubParties_NoRootPartySubIDs_18.insert(RootPartySubID_18.getString());
      FIX::RootPartySubIDType RootPartySubIDType_18(1424208578);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_18);
      RootSubParties_NoRootPartySubIDs_18.insert(RootPartySubIDType_18.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_18);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_10;
    FIX::RootPartyID RootPartyID_10("STRING_753860041");
    noRootPartyIDs_0_2.set(RootPartyID_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyID_10.getString());
    FIX::RootPartyIDSource RootPartyIDSource_10('3');
    noRootPartyIDs_0_2.set(RootPartyIDSource_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyIDSource_10.getString());
    FIX::RootPartyRole RootPartyRole_10(1122336308);
    noRootPartyIDs_0_2.set(RootPartyRole_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyRole_10.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_10);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_19;
      FIX::RootPartySubID RootPartySubID_19("STRING_136706022");
      noRootPartySubIDs_2_1_0.set(RootPartySubID_19);
      RootSubParties_NoRootPartySubIDs_19.insert(RootPartySubID_19.getString());
      FIX::RootPartySubIDType RootPartySubIDType_19(551046688);
      noRootPartySubIDs_2_1_0.set(RootPartySubIDType_19);
      RootSubParties_NoRootPartySubIDs_19.insert(RootPartySubIDType_19.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_19);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
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
