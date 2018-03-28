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
  FIX::EncodedText EncodedText_81("DATA_697400141");
  msg.set(EncodedText_81);
  QuoteRequestReject_0.insert(EncodedText_81.getString());
  FIX::EncodedTextLen EncodedTextLen_81(175859135);
  msg.set(EncodedTextLen_81);
  QuoteRequestReject_0.insert(EncodedTextLen_81.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_12(false);
  msg.set(PreTradeAnonymity_12);
  QuoteRequestReject_0.insert(PreTradeAnonymity_12.getString());
  FIX::PrivateQuote PrivateQuote_2(true);
  msg.set(PrivateQuote_2);
  QuoteRequestReject_0.insert(PrivateQuote_2.getString());
  FIX::QuoteReqID QuoteReqID_5("STRING_1371982655");
  msg.set(QuoteReqID_5);
  QuoteRequestReject_0.insert(QuoteReqID_5.getString());
  FIX::QuoteRequestRejectReason QuoteRequestRejectReason_0(6);
  msg.set(QuoteRequestRejectReason_0);
  QuoteRequestReject_0.insert(QuoteRequestRejectReason_0.getString());
  FIX::RFQReqID RFQReqID_1("STRING_1125423358");
  msg.set(RFQReqID_1);
  QuoteRequestReject_0.insert(RFQReqID_1.getString());
  FIX::RespondentType RespondentType_1(2);
  msg.set(RespondentType_1);
  QuoteRequestReject_0.insert(RespondentType_1.getString());
  FIX::Text Text_81("STRING_2068966856");
  msg.set(Text_81);
  QuoteRequestReject_0.insert(Text_81.getString());
  all_values.push_back(QuoteRequestReject_0);

  // QuotReqRjctGrp
  // Group QuotReqRjctGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_0;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_0;
    FIX::Account Account_34("STRING_934309595");
    noRelatedSym_0_0.set(Account_34);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Account_34.getString());
    FIX::AccountType AccountType_29(3);
    noRelatedSym_0_0.set(AccountType_29);
    QuotReqRjctGrp_NoRelatedSym_0.insert(AccountType_29.getString());
    FIX::AcctIDSource AcctIDSource_27(1);
    noRelatedSym_0_0.set(AcctIDSource_27);
    QuotReqRjctGrp_NoRelatedSym_0.insert(AcctIDSource_27.getString());
    FIX::Currency Currency_52("USD");
    noRelatedSym_0_0.set(Currency_52);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Currency_52.getString());
    FIX::ExpireTime ExpireTime_17(FIX::UTCTIMESTAMP(7, 13, 34, 15, 4, 2009));
    noRelatedSym_0_0.set(ExpireTime_17);
    QuotReqRjctGrp_NoRelatedSym_0.insert(ExpireTime_17.getString());
    FIX::OrdType OrdType_49('1');
    noRelatedSym_0_0.set(OrdType_49);
    QuotReqRjctGrp_NoRelatedSym_0.insert(OrdType_49.getString());
    FIX::OrderQty2 OrderQty2_14;
    OrderQty2_14.setString("13145778");
    noRelatedSym_0_0.set(OrderQty2_14);
    QuotReqRjctGrp_NoRelatedSym_0.insert(OrderQty2_14.getString());
    FIX::PrevClosePx PrevClosePx_10;
    PrevClosePx_10.setString("13658762");
    noRelatedSym_0_0.set(PrevClosePx_10);
    QuotReqRjctGrp_NoRelatedSym_0.insert(PrevClosePx_10.getString());
    FIX::Price Price_22;
    Price_22.setString("11848758");
    noRelatedSym_0_0.set(Price_22);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Price_22.getString());
    FIX::Price2 Price2_5;
    Price2_5.setString("16061711");
    noRelatedSym_0_0.set(Price2_5);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Price2_5.getString());
    FIX::PriceType PriceType_38(5);
    noRelatedSym_0_0.set(PriceType_38);
    QuotReqRjctGrp_NoRelatedSym_0.insert(PriceType_38.getString());
    FIX::QtyType QtyType_25(2);
    noRelatedSym_0_0.set(QtyType_25);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QtyType_25.getString());
    FIX::QuotePriceType QuotePriceType_2(10);
    noRelatedSym_0_0.set(QuotePriceType_2);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuotePriceType_2.getString());
    FIX::QuoteRequestType QuoteRequestType_2(2);
    noRelatedSym_0_0.set(QuoteRequestType_2);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuoteRequestType_2.getString());
    FIX::QuoteType QuoteType_8(1);
    noRelatedSym_0_0.set(QuoteType_8);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuoteType_8.getString());
    FIX::SettlDate SettlDate_41("LOCALMKTDATE_1921966194");
    noRelatedSym_0_0.set(SettlDate_41);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlDate_41.getString());
    FIX::SettlDate2 SettlDate2_14("LOCALMKTDATE_275139822");
    noRelatedSym_0_0.set(SettlDate2_14);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlDate2_14.getString());
    FIX::SettlType SettlType_28("STRING_C");
    noRelatedSym_0_0.set(SettlType_28);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlType_28.getString());
    FIX::Side Side_44('2');
    noRelatedSym_0_0.set(Side_44);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Side_44.getString());
    FIX::TradeOriginationDate TradeOriginationDate_21("LOCALMKTDATE_1095188891");
    noRelatedSym_0_0.set(TradeOriginationDate_21);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradeOriginationDate_21.getString());
    FIX::TradingSessionID TradingSessionID_68("STRING_2");
    noRelatedSym_0_0.set(TradingSessionID_68);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradingSessionID_68.getString());
    FIX::TradingSessionSubID TradingSessionSubID_68("STRING_3");
    noRelatedSym_0_0.set(TradingSessionSubID_68);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradingSessionSubID_68.getString());
    FIX::TransactTime TransactTime_51(FIX::UTCTIMESTAMP(7, 25, 31, 21, 4, 2008));
    noRelatedSym_0_0.set(TransactTime_51);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TransactTime_51.getString());
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_20;
    FIX::AgreementCurrency AgreementCurrency_20("JPY");
    noRelatedSym_0_0.set(AgreementCurrency_20);
    FinancingDetails_20.insert(AgreementCurrency_20.getString());
    FIX::AgreementDate AgreementDate_20("LOCALMKTDATE_978458547");
    noRelatedSym_0_0.set(AgreementDate_20);
    FinancingDetails_20.insert(AgreementDate_20.getString());
    FIX::AgreementDesc AgreementDesc_20("STRING_1274696716");
    noRelatedSym_0_0.set(AgreementDesc_20);
    FinancingDetails_20.insert(AgreementDesc_20.getString());
    FIX::AgreementID AgreementID_20("STRING_766991861");
    noRelatedSym_0_0.set(AgreementID_20);
    FinancingDetails_20.insert(AgreementID_20.getString());
    FIX::DeliveryType DeliveryType_20(3);
    noRelatedSym_0_0.set(DeliveryType_20);
    FinancingDetails_20.insert(DeliveryType_20.getString());
    FIX::EndDate EndDate_20("LOCALMKTDATE_21227105");
    noRelatedSym_0_0.set(EndDate_20);
    FinancingDetails_20.insert(EndDate_20.getString());
    FIX::MarginRatio MarginRatio_20;
    MarginRatio_20.setString("23.570000");
    noRelatedSym_0_0.set(MarginRatio_20);
    FinancingDetails_20.insert(MarginRatio_20.getString());
    FIX::StartDate StartDate_20("LOCALMKTDATE_523572046");
    noRelatedSym_0_0.set(StartDate_20);
    FinancingDetails_20.insert(StartDate_20.getString());
    FIX::TerminationType TerminationType_20(2);
    noRelatedSym_0_0.set(TerminationType_20);
    FinancingDetails_20.insert(TerminationType_20.getString());
    all_values.push_back(FinancingDetails_20);

    // Instrument
    multiset<string> Instrument_64;
    FIX::AttachmentPoint AttachmentPoint_64;
    AttachmentPoint_64.setString("81.780000");
    noRelatedSym_0_0.set(AttachmentPoint_64);
    Instrument_64.insert(AttachmentPoint_64.getString());
    FIX::CFICode CFICode_64("STRING_2129743155");
    noRelatedSym_0_0.set(CFICode_64);
    Instrument_64.insert(CFICode_64.getString());
    FIX::CPProgram CPProgram_64(1);
    noRelatedSym_0_0.set(CPProgram_64);
    Instrument_64.insert(CPProgram_64.getString());
    FIX::CPRegType CPRegType_64("STRING_134772362");
    noRelatedSym_0_0.set(CPRegType_64);
    Instrument_64.insert(CPRegType_64.getString());
    FIX::CapPrice CapPrice_64;
    CapPrice_64.setString("17283665");
    noRelatedSym_0_0.set(CapPrice_64);
    Instrument_64.insert(CapPrice_64.getString());
    FIX::ContractMultiplier ContractMultiplier_64;
    ContractMultiplier_64.setString("3841999");
    noRelatedSym_0_0.set(ContractMultiplier_64);
    Instrument_64.insert(ContractMultiplier_64.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_64(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_64);
    Instrument_64.insert(ContractMultiplierUnit_64.getString());
    FIX::ContractSettlMonth ContractSettlMonth_64("MONTHYEAR_1502849112");
    noRelatedSym_0_0.set(ContractSettlMonth_64);
    Instrument_64.insert(ContractSettlMonth_64.getString());
    FIX::CountryOfIssue CountryOfIssue_64("COUNTRY_659339786");
    noRelatedSym_0_0.set(CountryOfIssue_64);
    Instrument_64.insert(CountryOfIssue_64.getString());
    FIX::CouponPaymentDate CouponPaymentDate_64("LOCALMKTDATE_1034186071");
    noRelatedSym_0_0.set(CouponPaymentDate_64);
    Instrument_64.insert(CouponPaymentDate_64.getString());
    FIX::CouponRate CouponRate_64;
    CouponRate_64.setString("6.660000");
    noRelatedSym_0_0.set(CouponRate_64);
    Instrument_64.insert(CouponRate_64.getString());
    FIX::CreditRating CreditRating_64("STRING_1754528678");
    noRelatedSym_0_0.set(CreditRating_64);
    Instrument_64.insert(CreditRating_64.getString());
    FIX::DatedDate DatedDate_64("LOCALMKTDATE_2125425165");
    noRelatedSym_0_0.set(DatedDate_64);
    Instrument_64.insert(DatedDate_64.getString());
    FIX::DetachmentPoint DetachmentPoint_64;
    DetachmentPoint_64.setString("69.360000");
    noRelatedSym_0_0.set(DetachmentPoint_64);
    Instrument_64.insert(DetachmentPoint_64.getString());
    FIX::EncodedIssuer EncodedIssuer_64("DATA_623717130");
    noRelatedSym_0_0.set(EncodedIssuer_64);
    Instrument_64.insert(EncodedIssuer_64.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_64(1541988260);
    noRelatedSym_0_0.set(EncodedIssuerLen_64);
    Instrument_64.insert(EncodedIssuerLen_64.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_64("DATA_1419489154");
    noRelatedSym_0_0.set(EncodedSecurityDesc_64);
    Instrument_64.insert(EncodedSecurityDesc_64.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_64(986089381);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_64);
    Instrument_64.insert(EncodedSecurityDescLen_64.getString());
    FIX::ExerciseStyle ExerciseStyle_64(2);
    noRelatedSym_0_0.set(ExerciseStyle_64);
    Instrument_64.insert(ExerciseStyle_64.getString());
    FIX::Factor Factor_64;
    Factor_64.setString("503764");
    noRelatedSym_0_0.set(Factor_64);
    Instrument_64.insert(Factor_64.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_64(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_64);
    Instrument_64.insert(FlexProductEligibilityIndicator_64.getString());
    FIX::FlexibleIndicator FlexibleIndicator_64(true);
    noRelatedSym_0_0.set(FlexibleIndicator_64);
    Instrument_64.insert(FlexibleIndicator_64.getString());
    FIX::FloorPrice FloorPrice_64;
    FloorPrice_64.setString("11582920");
    noRelatedSym_0_0.set(FloorPrice_64);
    Instrument_64.insert(FloorPrice_64.getString());
    FIX::FlowScheduleType FlowScheduleType_64(0);
    noRelatedSym_0_0.set(FlowScheduleType_64);
    Instrument_64.insert(FlowScheduleType_64.getString());
    FIX::InstrRegistry InstrRegistry_64("STRING_585780748");
    noRelatedSym_0_0.set(InstrRegistry_64);
    Instrument_64.insert(InstrRegistry_64.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_64('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_64);
    Instrument_64.insert(InstrmtAssignmentMethod_64.getString());
    FIX::InterestAccrualDate InterestAccrualDate_64("LOCALMKTDATE_1828424154");
    noRelatedSym_0_0.set(InterestAccrualDate_64);
    Instrument_64.insert(InterestAccrualDate_64.getString());
    FIX::IssueDate IssueDate_64("LOCALMKTDATE_607007853");
    noRelatedSym_0_0.set(IssueDate_64);
    Instrument_64.insert(IssueDate_64.getString());
    FIX::Issuer Issuer_64("STRING_638982618");
    noRelatedSym_0_0.set(Issuer_64);
    Instrument_64.insert(Issuer_64.getString());
    FIX::ListMethod ListMethod_64(0);
    noRelatedSym_0_0.set(ListMethod_64);
    Instrument_64.insert(ListMethod_64.getString());
    FIX::LocaleOfIssue LocaleOfIssue_64("STRING_1994111170");
    noRelatedSym_0_0.set(LocaleOfIssue_64);
    Instrument_64.insert(LocaleOfIssue_64.getString());
    FIX::MaturityDate MaturityDate_64("LOCALMKTDATE_537557148");
    noRelatedSym_0_0.set(MaturityDate_64);
    Instrument_64.insert(MaturityDate_64.getString());
    FIX::MaturityMonthYear MaturityMonthYear_64("MONTHYEAR_186772059");
    noRelatedSym_0_0.set(MaturityMonthYear_64);
    Instrument_64.insert(MaturityMonthYear_64.getString());
    FIX::MaturityTime MaturityTime_64("TZTIMEONLY_366122472");
    noRelatedSym_0_0.set(MaturityTime_64);
    Instrument_64.insert(MaturityTime_64.getString());
    FIX::MinPriceIncrement MinPriceIncrement_64;
    MinPriceIncrement_64.setString("6723295");
    noRelatedSym_0_0.set(MinPriceIncrement_64);
    Instrument_64.insert(MinPriceIncrement_64.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_64;
    MinPriceIncrementAmount_64.setString("19151386");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_64);
    Instrument_64.insert(MinPriceIncrementAmount_64.getString());
    FIX::NTPositionLimit NTPositionLimit_64(750322436);
    noRelatedSym_0_0.set(NTPositionLimit_64);
    Instrument_64.insert(NTPositionLimit_64.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_64;
    NotionalPercentageOutstanding_64.setString("98.460000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_64);
    Instrument_64.insert(NotionalPercentageOutstanding_64.getString());
    FIX::OptAttribute OptAttribute_64('1');
    noRelatedSym_0_0.set(OptAttribute_64);
    Instrument_64.insert(OptAttribute_64.getString());
    FIX::OptPayoutAmount OptPayoutAmount_64;
    OptPayoutAmount_64.setString("14096622");
    noRelatedSym_0_0.set(OptPayoutAmount_64);
    Instrument_64.insert(OptPayoutAmount_64.getString());
    FIX::OptPayoutType OptPayoutType_64(1);
    noRelatedSym_0_0.set(OptPayoutType_64);
    Instrument_64.insert(OptPayoutType_64.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_64;
    OriginalNotionalPercentageOutstanding_64.setString("47.560000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_64);
    Instrument_64.insert(OriginalNotionalPercentageOutstanding_64.getString());
    FIX::Pool Pool_64("STRING_1016707253");
    noRelatedSym_0_0.set(Pool_64);
    Instrument_64.insert(Pool_64.getString());
    FIX::PositionLimit PositionLimit_64(605343787);
    noRelatedSym_0_0.set(PositionLimit_64);
    Instrument_64.insert(PositionLimit_64.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_64("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_64);
    Instrument_64.insert(PriceQuoteMethod_64.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_64("STRING_1640424383");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_64);
    Instrument_64.insert(PriceUnitOfMeasure_64.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_64;
    PriceUnitOfMeasureQty_64.setString("21473320");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_64);
    Instrument_64.insert(PriceUnitOfMeasureQty_64.getString());
    FIX::Product Product_66(2);
    noRelatedSym_0_0.set(Product_66);
    Instrument_64.insert(Product_66.getString());
    FIX::ProductComplex ProductComplex_64("STRING_479030116");
    noRelatedSym_0_0.set(ProductComplex_64);
    Instrument_64.insert(ProductComplex_64.getString());
    FIX::PutOrCall PutOrCall_64(1);
    noRelatedSym_0_0.set(PutOrCall_64);
    Instrument_64.insert(PutOrCall_64.getString());
    FIX::RedemptionDate RedemptionDate_64("LOCALMKTDATE_514479963");
    noRelatedSym_0_0.set(RedemptionDate_64);
    Instrument_64.insert(RedemptionDate_64.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_64("STRING_2120001572");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_64);
    Instrument_64.insert(RepoCollateralSecurityType_64.getString());
    FIX::RepurchaseRate RepurchaseRate_64;
    RepurchaseRate_64.setString("50.090000");
    noRelatedSym_0_0.set(RepurchaseRate_64);
    Instrument_64.insert(RepurchaseRate_64.getString());
    FIX::RepurchaseTerm RepurchaseTerm_64(1672772010);
    noRelatedSym_0_0.set(RepurchaseTerm_64);
    Instrument_64.insert(RepurchaseTerm_64.getString());
    FIX::RestructuringType RestructuringType_64("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_64);
    Instrument_64.insert(RestructuringType_64.getString());
    FIX::SecurityDesc SecurityDesc_64("STRING_1035855757");
    noRelatedSym_0_0.set(SecurityDesc_64);
    Instrument_64.insert(SecurityDesc_64.getString());
    FIX::SecurityExchange SecurityExchange_64("EXCHANGE_1450572271");
    noRelatedSym_0_0.set(SecurityExchange_64);
    Instrument_64.insert(SecurityExchange_64.getString());
    FIX::SecurityGroup SecurityGroup_64("STRING_125404785");
    noRelatedSym_0_0.set(SecurityGroup_64);
    Instrument_64.insert(SecurityGroup_64.getString());
    FIX::SecurityID SecurityID_64("STRING_1642863610");
    noRelatedSym_0_0.set(SecurityID_64);
    Instrument_64.insert(SecurityID_64.getString());
    FIX::SecurityIDSource SecurityIDSource_64("STRING_G");
    noRelatedSym_0_0.set(SecurityIDSource_64);
    Instrument_64.insert(SecurityIDSource_64.getString());
    FIX::SecurityStatus SecurityStatus_64("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_64);
    Instrument_64.insert(SecurityStatus_64.getString());
    FIX::SecuritySubType SecuritySubType_65("STRING_1489491133");
    noRelatedSym_0_0.set(SecuritySubType_65);
    Instrument_64.insert(SecuritySubType_65.getString());
    FIX::SecurityType SecurityType_66("STRING_TPRN");
    noRelatedSym_0_0.set(SecurityType_66);
    Instrument_64.insert(SecurityType_66.getString());
    FIX::Seniority Seniority_64("STRING_SD");
    noRelatedSym_0_0.set(Seniority_64);
    Instrument_64.insert(Seniority_64.getString());
    FIX::SettlMethod SettlMethod_64('P');
    noRelatedSym_0_0.set(SettlMethod_64);
    Instrument_64.insert(SettlMethod_64.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_64("STRING_1151957899");
    noRelatedSym_0_0.set(SettleOnOpenFlag_64);
    Instrument_64.insert(SettleOnOpenFlag_64.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_64("STRING_284344374");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_64);
    Instrument_64.insert(StateOrProvinceOfIssue_64.getString());
    FIX::StrikeCurrency StrikeCurrency_64("USD");
    noRelatedSym_0_0.set(StrikeCurrency_64);
    Instrument_64.insert(StrikeCurrency_64.getString());
    FIX::StrikeMultiplier StrikeMultiplier_64;
    StrikeMultiplier_64.setString("15548484");
    noRelatedSym_0_0.set(StrikeMultiplier_64);
    Instrument_64.insert(StrikeMultiplier_64.getString());
    FIX::StrikePrice StrikePrice_64;
    StrikePrice_64.setString("18681146");
    noRelatedSym_0_0.set(StrikePrice_64);
    Instrument_64.insert(StrikePrice_64.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_64(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_64);
    Instrument_64.insert(StrikePriceBoundaryMethod_64.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_64;
    StrikePriceBoundaryPrecision_64.setString("95.720000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_64);
    Instrument_64.insert(StrikePriceBoundaryPrecision_64.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_64(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_64);
    Instrument_64.insert(StrikePriceDeterminationMethod_64.getString());
    FIX::StrikeValue StrikeValue_64;
    StrikeValue_64.setString("19779201");
    noRelatedSym_0_0.set(StrikeValue_64);
    Instrument_64.insert(StrikeValue_64.getString());
    FIX::Symbol Symbol_64("STRING_224313969");
    noRelatedSym_0_0.set(Symbol_64);
    Instrument_64.insert(Symbol_64.getString());
    FIX::SymbolSfx SymbolSfx_64("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_64);
    Instrument_64.insert(SymbolSfx_64.getString());
    FIX::TimeUnit TimeUnit_64("STRING_Yr");
    noRelatedSym_0_0.set(TimeUnit_64);
    Instrument_64.insert(TimeUnit_64.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_64(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_64);
    Instrument_64.insert(UnderlyingPriceDeterminationMethod_64.getString());
    FIX::UnitOfMeasure UnitOfMeasure_64("STRING_Bu");
    noRelatedSym_0_0.set(UnitOfMeasure_64);
    Instrument_64.insert(UnitOfMeasure_64.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_64;
    UnitOfMeasureQty_64.setString("9692758");
    noRelatedSym_0_0.set(UnitOfMeasureQty_64);
    Instrument_64.insert(UnitOfMeasureQty_64.getString());
    FIX::ValuationMethod ValuationMethod_64("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_64);
    Instrument_64.insert(ValuationMethod_64.getString());
    all_values.push_back(Instrument_64);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_123;
      FIX::ComplexEventCondition ComplexEventCondition_123(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_123);
      ComplexEvents_NoComplexEvents_123.insert(ComplexEventCondition_123.getString());
      FIX::ComplexEventPrice ComplexEventPrice_123;
      ComplexEventPrice_123.setString("7281858");
      noComplexEvents_0_1_0.set(ComplexEventPrice_123);
      ComplexEvents_NoComplexEvents_123.insert(ComplexEventPrice_123.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_123(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_123);
      ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceBoundaryMethod_123.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_123;
      ComplexEventPriceBoundaryPrecision_123.setString("30.030000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_123);
      ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceBoundaryPrecision_123.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_123(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_123);
      ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceTimeType_123.getString());
      FIX::ComplexEventType ComplexEventType_123(2);
      noComplexEvents_0_1_0.set(ComplexEventType_123);
      ComplexEvents_NoComplexEvents_123.insert(ComplexEventType_123.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_123;
      ComplexOptPayoutAmount_123.setString("19505866");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_123);
      ComplexEvents_NoComplexEvents_123.insert(ComplexOptPayoutAmount_123.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_123);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_254;
        FIX::ComplexEventEndDate ComplexEventEndDate_254(FIX::UTCTIMESTAMP(10, 18, 15, 23, 3, 2002));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_254);
        ComplexEventDates_NoComplexEventDates_254.insert(ComplexEventEndDate_254.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_254(FIX::UTCTIMESTAMP(0, 6, 57, 16, 8, 2001));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_254);
        ComplexEventDates_NoComplexEventDates_254.insert(ComplexEventStartDate_254.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_254);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_518;
          FIX::ComplexEventEndTime ComplexEventEndTime_518(FIX::UTCTIMEONLY(19, 29, 59));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_518);
          ComplexEventTimes_NoComplexEventTimes_518.insert(ComplexEventEndTime_518.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_518(FIX::UTCTIMEONLY(1, 14, 57));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_518);
          ComplexEventTimes_NoComplexEventTimes_518.insert(ComplexEventStartTime_518.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_518);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_519;
          FIX::ComplexEventEndTime ComplexEventEndTime_519(FIX::UTCTIMEONLY(0, 5, 22));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_519);
          ComplexEventTimes_NoComplexEventTimes_519.insert(ComplexEventEndTime_519.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_519(FIX::UTCTIMEONLY(18, 7, 58));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_519);
          ComplexEventTimes_NoComplexEventTimes_519.insert(ComplexEventStartTime_519.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_519);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_520;
          FIX::ComplexEventEndTime ComplexEventEndTime_520(FIX::UTCTIMEONLY(10, 16, 24));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_520);
          ComplexEventTimes_NoComplexEventTimes_520.insert(ComplexEventEndTime_520.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_520(FIX::UTCTIMEONLY(10, 26, 34));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_520);
          ComplexEventTimes_NoComplexEventTimes_520.insert(ComplexEventStartTime_520.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_520);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_124;
      FIX::ComplexEventCondition ComplexEventCondition_124(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_124);
      ComplexEvents_NoComplexEvents_124.insert(ComplexEventCondition_124.getString());
      FIX::ComplexEventPrice ComplexEventPrice_124;
      ComplexEventPrice_124.setString("8842214");
      noComplexEvents_0_1_1.set(ComplexEventPrice_124);
      ComplexEvents_NoComplexEvents_124.insert(ComplexEventPrice_124.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_124(5);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_124);
      ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceBoundaryMethod_124.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_124;
      ComplexEventPriceBoundaryPrecision_124.setString("93.220000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_124);
      ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceBoundaryPrecision_124.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_124(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_124);
      ComplexEvents_NoComplexEvents_124.insert(ComplexEventPriceTimeType_124.getString());
      FIX::ComplexEventType ComplexEventType_124(8);
      noComplexEvents_0_1_1.set(ComplexEventType_124);
      ComplexEvents_NoComplexEvents_124.insert(ComplexEventType_124.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_124;
      ComplexOptPayoutAmount_124.setString("3220909");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_124);
      ComplexEvents_NoComplexEvents_124.insert(ComplexOptPayoutAmount_124.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_124);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_255;
        FIX::ComplexEventEndDate ComplexEventEndDate_255(FIX::UTCTIMESTAMP(11, 19, 3, 16, 11, 2000));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_255);
        ComplexEventDates_NoComplexEventDates_255.insert(ComplexEventEndDate_255.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_255(FIX::UTCTIMESTAMP(2, 58, 57, 22, 5, 2003));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_255);
        ComplexEventDates_NoComplexEventDates_255.insert(ComplexEventStartDate_255.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_255);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_521;
          FIX::ComplexEventEndTime ComplexEventEndTime_521(FIX::UTCTIMEONLY(7, 33, 38));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_521);
          ComplexEventTimes_NoComplexEventTimes_521.insert(ComplexEventEndTime_521.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_521(FIX::UTCTIMEONLY(23, 56, 35));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_521);
          ComplexEventTimes_NoComplexEventTimes_521.insert(ComplexEventStartTime_521.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_521);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_256;
        FIX::ComplexEventEndDate ComplexEventEndDate_256(FIX::UTCTIMESTAMP(9, 59, 40, 5, 11, 2010));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_256);
        ComplexEventDates_NoComplexEventDates_256.insert(ComplexEventEndDate_256.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_256(FIX::UTCTIMESTAMP(8, 37, 57, 27, 6, 2005));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_256);
        ComplexEventDates_NoComplexEventDates_256.insert(ComplexEventStartDate_256.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_256);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_522;
          FIX::ComplexEventEndTime ComplexEventEndTime_522(FIX::UTCTIMEONLY(13, 50, 22));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_522);
          ComplexEventTimes_NoComplexEventTimes_522.insert(ComplexEventEndTime_522.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_522(FIX::UTCTIMEONLY(22, 19, 32));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_522);
          ComplexEventTimes_NoComplexEventTimes_522.insert(ComplexEventStartTime_522.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_522);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_523;
          FIX::ComplexEventEndTime ComplexEventEndTime_523(FIX::UTCTIMEONLY(6, 5, 30));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_523);
          ComplexEventTimes_NoComplexEventTimes_523.insert(ComplexEventEndTime_523.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_523(FIX::UTCTIMEONLY(16, 18, 42));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_523);
          ComplexEventTimes_NoComplexEventTimes_523.insert(ComplexEventStartTime_523.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_523);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_125;
      FIX::ComplexEventCondition ComplexEventCondition_125(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_125);
      ComplexEvents_NoComplexEvents_125.insert(ComplexEventCondition_125.getString());
      FIX::ComplexEventPrice ComplexEventPrice_125;
      ComplexEventPrice_125.setString("19279519");
      noComplexEvents_0_1_2.set(ComplexEventPrice_125);
      ComplexEvents_NoComplexEvents_125.insert(ComplexEventPrice_125.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_125(4);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_125);
      ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceBoundaryMethod_125.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_125;
      ComplexEventPriceBoundaryPrecision_125.setString("50.070000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_125);
      ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceBoundaryPrecision_125.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_125(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_125);
      ComplexEvents_NoComplexEvents_125.insert(ComplexEventPriceTimeType_125.getString());
      FIX::ComplexEventType ComplexEventType_125(3);
      noComplexEvents_0_1_2.set(ComplexEventType_125);
      ComplexEvents_NoComplexEvents_125.insert(ComplexEventType_125.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_125;
      ComplexOptPayoutAmount_125.setString("15781947");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_125);
      ComplexEvents_NoComplexEvents_125.insert(ComplexOptPayoutAmount_125.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_125);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_257;
        FIX::ComplexEventEndDate ComplexEventEndDate_257(FIX::UTCTIMESTAMP(6, 0, 47, 3, 12, 2013));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_257);
        ComplexEventDates_NoComplexEventDates_257.insert(ComplexEventEndDate_257.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_257(FIX::UTCTIMESTAMP(4, 13, 15, 23, 12, 2014));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_257);
        ComplexEventDates_NoComplexEventDates_257.insert(ComplexEventStartDate_257.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_257);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_524;
          FIX::ComplexEventEndTime ComplexEventEndTime_524(FIX::UTCTIMEONLY(21, 48, 13));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_524);
          ComplexEventTimes_NoComplexEventTimes_524.insert(ComplexEventEndTime_524.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_524(FIX::UTCTIMEONLY(21, 32, 14));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_524);
          ComplexEventTimes_NoComplexEventTimes_524.insert(ComplexEventStartTime_524.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_524);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_258;
        FIX::ComplexEventEndDate ComplexEventEndDate_258(FIX::UTCTIMESTAMP(16, 39, 18, 9, 3, 2011));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_258);
        ComplexEventDates_NoComplexEventDates_258.insert(ComplexEventEndDate_258.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_258(FIX::UTCTIMESTAMP(13, 29, 48, 12, 6, 2015));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_258);
        ComplexEventDates_NoComplexEventDates_258.insert(ComplexEventStartDate_258.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_258);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_525;
          FIX::ComplexEventEndTime ComplexEventEndTime_525(FIX::UTCTIMEONLY(19, 48, 12));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_525);
          ComplexEventTimes_NoComplexEventTimes_525.insert(ComplexEventEndTime_525.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_525(FIX::UTCTIMEONLY(12, 31, 10));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_525);
          ComplexEventTimes_NoComplexEventTimes_525.insert(ComplexEventStartTime_525.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_525);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_526;
          FIX::ComplexEventEndTime ComplexEventEndTime_526(FIX::UTCTIMEONLY(4, 51, 45));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_526);
          ComplexEventTimes_NoComplexEventTimes_526.insert(ComplexEventEndTime_526.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_526(FIX::UTCTIMEONLY(0, 9, 50));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_526);
          ComplexEventTimes_NoComplexEventTimes_526.insert(ComplexEventStartTime_526.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_526);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_527;
          FIX::ComplexEventEndTime ComplexEventEndTime_527(FIX::UTCTIMEONLY(1, 29, 42));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventEndTime_527);
          ComplexEventTimes_NoComplexEventTimes_527.insert(ComplexEventEndTime_527.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_527(FIX::UTCTIMEONLY(23, 17, 39));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventStartTime_527);
          ComplexEventTimes_NoComplexEventTimes_527.insert(ComplexEventStartTime_527.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_527);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_259;
        FIX::ComplexEventEndDate ComplexEventEndDate_259(FIX::UTCTIMESTAMP(3, 19, 29, 0, 12, 2004));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_259);
        ComplexEventDates_NoComplexEventDates_259.insert(ComplexEventEndDate_259.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_259(FIX::UTCTIMESTAMP(10, 53, 38, 5, 10, 2007));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_259);
        ComplexEventDates_NoComplexEventDates_259.insert(ComplexEventStartDate_259.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_259);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_528;
          FIX::ComplexEventEndTime ComplexEventEndTime_528(FIX::UTCTIMEONLY(5, 35, 33));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_528);
          ComplexEventTimes_NoComplexEventTimes_528.insert(ComplexEventEndTime_528.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_528(FIX::UTCTIMEONLY(15, 42, 23));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_528);
          ComplexEventTimes_NoComplexEventTimes_528.insert(ComplexEventStartTime_528.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_528);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_529;
          FIX::ComplexEventEndTime ComplexEventEndTime_529(FIX::UTCTIMEONLY(23, 44, 28));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventEndTime_529);
          ComplexEventTimes_NoComplexEventTimes_529.insert(ComplexEventEndTime_529.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_529(FIX::UTCTIMEONLY(7, 38, 9));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventStartTime_529);
          ComplexEventTimes_NoComplexEventTimes_529.insert(ComplexEventStartTime_529.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_529);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_530;
          FIX::ComplexEventEndTime ComplexEventEndTime_530(FIX::UTCTIMEONLY(21, 20, 28));
          noComplexEventTimes_0_2_2_3_2.set(ComplexEventEndTime_530);
          ComplexEventTimes_NoComplexEventTimes_530.insert(ComplexEventEndTime_530.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_530(FIX::UTCTIMEONLY(7, 25, 10));
          noComplexEventTimes_0_2_2_3_2.set(ComplexEventStartTime_530);
          ComplexEventTimes_NoComplexEventTimes_530.insert(ComplexEventStartTime_530.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_530);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_124;
      FIX::EventDate EventDate_124("LOCALMKTDATE_619282210");
      noEvents_0_1_0.set(EventDate_124);
      EvntGrp_NoEvents_124.insert(EventDate_124.getString());
      FIX::EventPx EventPx_124;
      EventPx_124.setString("19602738");
      noEvents_0_1_0.set(EventPx_124);
      EvntGrp_NoEvents_124.insert(EventPx_124.getString());
      FIX::EventText EventText_124("STRING_139656639");
      noEvents_0_1_0.set(EventText_124);
      EvntGrp_NoEvents_124.insert(EventText_124.getString());
      FIX::EventTime EventTime_124(FIX::UTCTIMESTAMP(9, 23, 31, 6, 11, 2005));
      noEvents_0_1_0.set(EventTime_124);
      EvntGrp_NoEvents_124.insert(EventTime_124.getString());
      FIX::EventType EventType_124(12);
      noEvents_0_1_0.set(EventType_124);
      EvntGrp_NoEvents_124.insert(EventType_124.getString());
      all_values.push_back(EvntGrp_NoEvents_124);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_126;
      FIX::InstrumentPartyID InstrumentPartyID_126("STRING_2003378927");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_126);
      InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyID_126.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_126('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_126);
      InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyIDSource_126.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_126(417279832);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_126);
      InstrumentParties_NoInstrumentParties_126.insert(InstrumentPartyRole_126.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_126);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262;
        FIX::InstrumentPartySubID InstrumentPartySubID_262("STRING_2094062478");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_262);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262.insert(InstrumentPartySubID_262.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_262(1663582460);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_262);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262.insert(InstrumentPartySubIDType_262.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_127;
      FIX::InstrumentPartyID InstrumentPartyID_127("STRING_646167657");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_127);
      InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyID_127.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_127('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_127);
      InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyIDSource_127.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_127(671287190);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_127);
      InstrumentParties_NoInstrumentParties_127.insert(InstrumentPartyRole_127.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_127);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263;
        FIX::InstrumentPartySubID InstrumentPartySubID_263("STRING_135730545");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_263);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263.insert(InstrumentPartySubID_263.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_263(1202962019);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_263);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263.insert(InstrumentPartySubIDType_263.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264;
        FIX::InstrumentPartySubID InstrumentPartySubID_264("STRING_952542138");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_264);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264.insert(InstrumentPartySubID_264.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_264(1986397213);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_264);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264.insert(InstrumentPartySubIDType_264.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_140;
      FIX::SecurityAltID SecurityAltID_140("STRING_555363114");
      noSecurityAltID_0_1_0.set(SecurityAltID_140);
      SecAltIDGrp_NoSecurityAltID_140.insert(SecurityAltID_140.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_140("STRING_861144510");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_140);
      SecAltIDGrp_NoSecurityAltID_140.insert(SecurityAltIDSource_140.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_140);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_128;
    FIX::SecurityXML SecurityXML_129("XMLDATA_654994119");
    noRelatedSym_0_0.set(SecurityXML_129);
    FIX::SecurityXMLLen SecurityXMLLen_64(213685972);
    noRelatedSym_0_0.set(SecurityXMLLen_64);
    FIX::SecurityXMLSchema SecurityXMLSchema_64("STRING_1480426720");
    noRelatedSym_0_0.set(SecurityXMLSchema_64);
    SecurityXML_128.insert(SecurityXMLSchema_64.getString());
    all_values.push_back(SecurityXML_128);

    // OrderQtyData
    multiset<string> OrderQtyData_21;
    FIX::CashOrderQty CashOrderQty_21;
    CashOrderQty_21.setString("4677843");
    noRelatedSym_0_0.set(CashOrderQty_21);
    OrderQtyData_21.insert(CashOrderQty_21.getString());
    FIX::OrderPercent OrderPercent_21;
    OrderPercent_21.setString("26.110000");
    noRelatedSym_0_0.set(OrderPercent_21);
    OrderQtyData_21.insert(OrderPercent_21.getString());
    FIX::OrderQty OrderQty_29;
    OrderQty_29.setString("14652396");
    noRelatedSym_0_0.set(OrderQty_29);
    OrderQtyData_21.insert(OrderQty_29.getString());
    FIX::RoundingDirection RoundingDirection_21('0');
    noRelatedSym_0_0.set(RoundingDirection_21);
    OrderQtyData_21.insert(RoundingDirection_21.getString());
    FIX::RoundingModulus RoundingModulus_21;
    RoundingModulus_21.setString("9481265");
    noRelatedSym_0_0.set(RoundingModulus_21);
    OrderQtyData_21.insert(RoundingModulus_21.getString());
    all_values.push_back(OrderQtyData_21);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_113;
      FIX::PartyID PartyID_113("STRING_1805772983");
      noPartyIDs_0_1_0.set(PartyID_113);
      Parties_NoPartyIDs_113.insert(PartyID_113.getString());
      FIX::PartyIDSource PartyIDSource_113('F');
      noPartyIDs_0_1_0.set(PartyIDSource_113);
      Parties_NoPartyIDs_113.insert(PartyIDSource_113.getString());
      FIX::PartyRole PartyRole_113(9);
      noPartyIDs_0_1_0.set(PartyRole_113);
      Parties_NoPartyIDs_113.insert(PartyRole_113.getString());
      all_values.push_back(Parties_NoPartyIDs_113);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_228;
        FIX::PartySubID PartySubID_228("STRING_325821411");
        noPartySubIDs_0_0_2_0.set(PartySubID_228);
        PtysSubGrp_NoPartySubIDs_228.insert(PartySubID_228.getString());
        FIX::PartySubIDType PartySubIDType_228(9);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_228);
        PtysSubGrp_NoPartySubIDs_228.insert(PartySubIDType_228.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_228);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_114;
      FIX::PartyID PartyID_114("STRING_1671519601");
      noPartyIDs_0_1_1.set(PartyID_114);
      Parties_NoPartyIDs_114.insert(PartyID_114.getString());
      FIX::PartyIDSource PartyIDSource_114('3');
      noPartyIDs_0_1_1.set(PartyIDSource_114);
      Parties_NoPartyIDs_114.insert(PartyIDSource_114.getString());
      FIX::PartyRole PartyRole_114(15);
      noPartyIDs_0_1_1.set(PartyRole_114);
      Parties_NoPartyIDs_114.insert(PartyRole_114.getString());
      all_values.push_back(Parties_NoPartyIDs_114);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_229;
        FIX::PartySubID PartySubID_229("STRING_259200055");
        noPartySubIDs_0_1_2_0.set(PartySubID_229);
        PtysSubGrp_NoPartySubIDs_229.insert(PartySubID_229.getString());
        FIX::PartySubIDType PartySubIDType_229(12);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_229);
        PtysSubGrp_NoPartySubIDs_229.insert(PartySubIDType_229.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_229);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_115;
      FIX::PartyID PartyID_115("STRING_956024877");
      noPartyIDs_0_1_2.set(PartyID_115);
      Parties_NoPartyIDs_115.insert(PartyID_115.getString());
      FIX::PartyIDSource PartyIDSource_115('G');
      noPartyIDs_0_1_2.set(PartyIDSource_115);
      Parties_NoPartyIDs_115.insert(PartyIDSource_115.getString());
      FIX::PartyRole PartyRole_115(10);
      noPartyIDs_0_1_2.set(PartyRole_115);
      Parties_NoPartyIDs_115.insert(PartyRole_115.getString());
      all_values.push_back(Parties_NoPartyIDs_115);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_230;
        FIX::PartySubID PartySubID_230("STRING_2133449265");
        noPartySubIDs_0_2_2_0.set(PartySubID_230);
        PtysSubGrp_NoPartySubIDs_230.insert(PartySubID_230.getString());
        FIX::PartySubIDType PartySubIDType_230(12);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_230);
        PtysSubGrp_NoPartySubIDs_230.insert(PartySubIDType_230.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_230);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_6;
      FIX::QuoteQualifier QuoteQualifier_6('8');
      noQuoteQualifiers_0_1_0.set(QuoteQualifier_6);
      QuotQualGrp_NoQuoteQualifiers_6.insert(QuoteQualifier_6.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_6);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_5;
      FIX::LegOrderQty LegOrderQty_16;
      LegOrderQty_16.setString("17918134");
      noLegs_0_1_0.set(LegOrderQty_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegOrderQty_16.getString());
      FIX::LegQty LegQty_16;
      LegQty_16.setString("14787296");
      noLegs_0_1_0.set(LegQty_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegQty_16.getString());
      FIX::LegRefID LegRefID_16("STRING_1715433822");
      noLegs_0_1_0.set(LegRefID_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegRefID_16.getString());
      FIX::LegSettlDate LegSettlDate_16("LOCALMKTDATE_1124756571");
      noLegs_0_1_0.set(LegSettlDate_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegSettlDate_16.getString());
      FIX::LegSettlType LegSettlType_16('1');
      noLegs_0_1_0.set(LegSettlType_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegSettlType_16.getString());
      FIX::LegSwapType LegSwapType_16(2);
      noLegs_0_1_0.set(LegSwapType_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegSwapType_16.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_5);

      // InstrumentLeg
      multiset<string> InstrumentLeg_99;
      FIX::EncodedLegIssuer EncodedLegIssuer_99("DATA_442512538");
      noLegs_0_1_0.set(EncodedLegIssuer_99);
      InstrumentLeg_99.insert(EncodedLegIssuer_99.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_99(321395441);
      noLegs_0_1_0.set(EncodedLegIssuerLen_99);
      InstrumentLeg_99.insert(EncodedLegIssuerLen_99.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_99("DATA_869419320");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_99);
      InstrumentLeg_99.insert(EncodedLegSecurityDesc_99.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_99(253137277);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_99);
      InstrumentLeg_99.insert(EncodedLegSecurityDescLen_99.getString());
      FIX::LegCFICode LegCFICode_99("STRING_2127168425");
      noLegs_0_1_0.set(LegCFICode_99);
      InstrumentLeg_99.insert(LegCFICode_99.getString());
      FIX::LegContractMultiplier LegContractMultiplier_99;
      LegContractMultiplier_99.setString("14722199");
      noLegs_0_1_0.set(LegContractMultiplier_99);
      InstrumentLeg_99.insert(LegContractMultiplier_99.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_99(876268521);
      noLegs_0_1_0.set(LegContractMultiplierUnit_99);
      InstrumentLeg_99.insert(LegContractMultiplierUnit_99.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_99("MONTHYEAR_233078124");
      noLegs_0_1_0.set(LegContractSettlMonth_99);
      InstrumentLeg_99.insert(LegContractSettlMonth_99.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_99("COUNTRY_1798041397");
      noLegs_0_1_0.set(LegCountryOfIssue_99);
      InstrumentLeg_99.insert(LegCountryOfIssue_99.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_99("LOCALMKTDATE_1355295045");
      noLegs_0_1_0.set(LegCouponPaymentDate_99);
      InstrumentLeg_99.insert(LegCouponPaymentDate_99.getString());
      FIX::LegCouponRate LegCouponRate_99;
      LegCouponRate_99.setString("77.250000");
      noLegs_0_1_0.set(LegCouponRate_99);
      InstrumentLeg_99.insert(LegCouponRate_99.getString());
      FIX::LegCreditRating LegCreditRating_99("STRING_393658992");
      noLegs_0_1_0.set(LegCreditRating_99);
      InstrumentLeg_99.insert(LegCreditRating_99.getString());
      FIX::LegCurrency LegCurrency_99("CAN");
      noLegs_0_1_0.set(LegCurrency_99);
      InstrumentLeg_99.insert(LegCurrency_99.getString());
      FIX::LegDatedDate LegDatedDate_99("LOCALMKTDATE_652859047");
      noLegs_0_1_0.set(LegDatedDate_99);
      InstrumentLeg_99.insert(LegDatedDate_99.getString());
      FIX::LegExerciseStyle LegExerciseStyle_99(2033311875);
      noLegs_0_1_0.set(LegExerciseStyle_99);
      InstrumentLeg_99.insert(LegExerciseStyle_99.getString());
      FIX::LegFactor LegFactor_99;
      LegFactor_99.setString("1837537");
      noLegs_0_1_0.set(LegFactor_99);
      InstrumentLeg_99.insert(LegFactor_99.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_99(1583346293);
      noLegs_0_1_0.set(LegFlowScheduleType_99);
      InstrumentLeg_99.insert(LegFlowScheduleType_99.getString());
      FIX::LegInstrRegistry LegInstrRegistry_99("STRING_2027154472");
      noLegs_0_1_0.set(LegInstrRegistry_99);
      InstrumentLeg_99.insert(LegInstrRegistry_99.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_99("LOCALMKTDATE_1275509161");
      noLegs_0_1_0.set(LegInterestAccrualDate_99);
      InstrumentLeg_99.insert(LegInterestAccrualDate_99.getString());
      FIX::LegIssueDate LegIssueDate_99("LOCALMKTDATE_1569311911");
      noLegs_0_1_0.set(LegIssueDate_99);
      InstrumentLeg_99.insert(LegIssueDate_99.getString());
      FIX::LegIssuer LegIssuer_99("STRING_826055560");
      noLegs_0_1_0.set(LegIssuer_99);
      InstrumentLeg_99.insert(LegIssuer_99.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_99("STRING_58694501");
      noLegs_0_1_0.set(LegLocaleOfIssue_99);
      InstrumentLeg_99.insert(LegLocaleOfIssue_99.getString());
      FIX::LegMaturityDate LegMaturityDate_99("LOCALMKTDATE_245563777");
      noLegs_0_1_0.set(LegMaturityDate_99);
      InstrumentLeg_99.insert(LegMaturityDate_99.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_99("MONTHYEAR_180319762");
      noLegs_0_1_0.set(LegMaturityMonthYear_99);
      InstrumentLeg_99.insert(LegMaturityMonthYear_99.getString());
      FIX::LegMaturityTime LegMaturityTime_99("TZTIMEONLY_1850508000");
      noLegs_0_1_0.set(LegMaturityTime_99);
      InstrumentLeg_99.insert(LegMaturityTime_99.getString());
      FIX::LegOptAttribute LegOptAttribute_99('1');
      noLegs_0_1_0.set(LegOptAttribute_99);
      InstrumentLeg_99.insert(LegOptAttribute_99.getString());
      FIX::LegOptionRatio LegOptionRatio_99;
      LegOptionRatio_99.setString("18957535");
      noLegs_0_1_0.set(LegOptionRatio_99);
      InstrumentLeg_99.insert(LegOptionRatio_99.getString());
      FIX::LegPool LegPool_99("STRING_827780923");
      noLegs_0_1_0.set(LegPool_99);
      InstrumentLeg_99.insert(LegPool_99.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_99("STRING_1523323706");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_99);
      InstrumentLeg_99.insert(LegPriceUnitOfMeasure_99.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_99;
      LegPriceUnitOfMeasureQty_99.setString("18170463");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_99);
      InstrumentLeg_99.insert(LegPriceUnitOfMeasureQty_99.getString());
      FIX::LegProduct LegProduct_99(1270293461);
      noLegs_0_1_0.set(LegProduct_99);
      InstrumentLeg_99.insert(LegProduct_99.getString());
      FIX::LegPutOrCall LegPutOrCall_99(1844719148);
      noLegs_0_1_0.set(LegPutOrCall_99);
      InstrumentLeg_99.insert(LegPutOrCall_99.getString());
      FIX::LegRatioQty LegRatioQty_99;
      LegRatioQty_99.setString("5389820");
      noLegs_0_1_0.set(LegRatioQty_99);
      InstrumentLeg_99.insert(LegRatioQty_99.getString());
      FIX::LegRedemptionDate LegRedemptionDate_99("LOCALMKTDATE_1523430739");
      noLegs_0_1_0.set(LegRedemptionDate_99);
      InstrumentLeg_99.insert(LegRedemptionDate_99.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_99("STRING_1824403925");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_99);
      InstrumentLeg_99.insert(LegRepoCollateralSecurityType_99.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_99;
      LegRepurchaseRate_99.setString("20.280000");
      noLegs_0_1_0.set(LegRepurchaseRate_99);
      InstrumentLeg_99.insert(LegRepurchaseRate_99.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_99(252215612);
      noLegs_0_1_0.set(LegRepurchaseTerm_99);
      InstrumentLeg_99.insert(LegRepurchaseTerm_99.getString());
      FIX::LegSecurityDesc LegSecurityDesc_99("STRING_2057482049");
      noLegs_0_1_0.set(LegSecurityDesc_99);
      InstrumentLeg_99.insert(LegSecurityDesc_99.getString());
      FIX::LegSecurityExchange LegSecurityExchange_99("EXCHANGE_1661759777");
      noLegs_0_1_0.set(LegSecurityExchange_99);
      InstrumentLeg_99.insert(LegSecurityExchange_99.getString());
      FIX::LegSecurityID LegSecurityID_99("STRING_1607510657");
      noLegs_0_1_0.set(LegSecurityID_99);
      InstrumentLeg_99.insert(LegSecurityID_99.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_99("STRING_1814596126");
      noLegs_0_1_0.set(LegSecurityIDSource_99);
      InstrumentLeg_99.insert(LegSecurityIDSource_99.getString());
      FIX::LegSecuritySubType LegSecuritySubType_99("STRING_2055418769");
      noLegs_0_1_0.set(LegSecuritySubType_99);
      InstrumentLeg_99.insert(LegSecuritySubType_99.getString());
      FIX::LegSecurityType LegSecurityType_99("STRING_1904988465");
      noLegs_0_1_0.set(LegSecurityType_99);
      InstrumentLeg_99.insert(LegSecurityType_99.getString());
      FIX::LegSide LegSide_99('1');
      noLegs_0_1_0.set(LegSide_99);
      InstrumentLeg_99.insert(LegSide_99.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_99("STRING_560794169");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_99);
      InstrumentLeg_99.insert(LegStateOrProvinceOfIssue_99.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_99("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_99);
      InstrumentLeg_99.insert(LegStrikeCurrency_99.getString());
      FIX::LegStrikePrice LegStrikePrice_99;
      LegStrikePrice_99.setString("21441404");
      noLegs_0_1_0.set(LegStrikePrice_99);
      InstrumentLeg_99.insert(LegStrikePrice_99.getString());
      FIX::LegSymbol LegSymbol_99("STRING_1670487516");
      noLegs_0_1_0.set(LegSymbol_99);
      InstrumentLeg_99.insert(LegSymbol_99.getString());
      FIX::LegSymbolSfx LegSymbolSfx_99("STRING_354104240");
      noLegs_0_1_0.set(LegSymbolSfx_99);
      InstrumentLeg_99.insert(LegSymbolSfx_99.getString());
      FIX::LegTimeUnit LegTimeUnit_99("STRING_1565968725");
      noLegs_0_1_0.set(LegTimeUnit_99);
      InstrumentLeg_99.insert(LegTimeUnit_99.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_99("STRING_349059429");
      noLegs_0_1_0.set(LegUnitOfMeasure_99);
      InstrumentLeg_99.insert(LegUnitOfMeasure_99.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_99;
      LegUnitOfMeasureQty_99.setString("4127987");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_99);
      InstrumentLeg_99.insert(LegUnitOfMeasureQty_99.getString());
      all_values.push_back(InstrumentLeg_99);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_197;
        FIX::LegSecurityAltID LegSecurityAltID_197("STRING_529379191");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_197);
        LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltID_197.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_197("STRING_115823094");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_197);
        LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltIDSource_197.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_197);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_198;
        FIX::LegSecurityAltID LegSecurityAltID_198("STRING_1388342264");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_198);
        LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltID_198.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_198("STRING_277649128");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_198);
        LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltIDSource_198.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_198);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_8;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_8("CHF");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurveCurrency_8.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_8("STRING_2094695498");
      noLegs_0_1_0.set(LegBenchmarkCurveName_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurveName_8.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_8("STRING_66413830");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurvePoint_8.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_8;
      LegBenchmarkPrice_8.setString("4614178");
      noLegs_0_1_0.set(LegBenchmarkPrice_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkPrice_8.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_8(486193892);
      noLegs_0_1_0.set(LegBenchmarkPriceType_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkPriceType_8.getString());
      all_values.push_back(LegBenchmarkCurveData_8);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_32;
        FIX::LegStipulationType LegStipulationType_32("STRING_138338100");
        noLegStipulations_0_0_2_0.set(LegStipulationType_32);
        LegStipulations_NoLegStipulations_32.insert(LegStipulationType_32.getString());
        FIX::LegStipulationValue LegStipulationValue_32("STRING_349912273");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_32);
        LegStipulations_NoLegStipulations_32.insert(LegStipulationValue_32.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_32);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_33;
        FIX::LegStipulationType LegStipulationType_33("STRING_1842060182");
        noLegStipulations_0_0_2_1.set(LegStipulationType_33);
        LegStipulations_NoLegStipulations_33.insert(LegStipulationType_33.getString());
        FIX::LegStipulationValue LegStipulationValue_33("STRING_48336501");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_33);
        LegStipulations_NoLegStipulations_33.insert(LegStipulationValue_33.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_33);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_34;
        FIX::LegStipulationType LegStipulationType_34("STRING_2011672050");
        noLegStipulations_0_0_2_2.set(LegStipulationType_34);
        LegStipulations_NoLegStipulations_34.insert(LegStipulationType_34.getString());
        FIX::LegStipulationValue LegStipulationValue_34("STRING_1302087191");
        noLegStipulations_0_0_2_2.set(LegStipulationValue_34);
        LegStipulations_NoLegStipulations_34.insert(LegStipulationValue_34.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_34);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_113;
        FIX::NestedPartyID NestedPartyID_113("STRING_1919607172");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_113);
        NestedParties_NoNestedPartyIDs_113.insert(NestedPartyID_113.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_113('1');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_113);
        NestedParties_NoNestedPartyIDs_113.insert(NestedPartyIDSource_113.getString());
        FIX::NestedPartyRole NestedPartyRole_113(757773967);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_113);
        NestedParties_NoNestedPartyIDs_113.insert(NestedPartyRole_113.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_113);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_225;
          FIX::NestedPartySubID NestedPartySubID_225("STRING_702925052");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_225);
          NstdPtysSubGrp_NoNestedPartySubIDs_225.insert(NestedPartySubID_225.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_225(1983852694);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_225);
          NstdPtysSubGrp_NoNestedPartySubIDs_225.insert(NestedPartySubIDType_225.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_225);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_226;
          FIX::NestedPartySubID NestedPartySubID_226("STRING_329574507");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_226);
          NstdPtysSubGrp_NoNestedPartySubIDs_226.insert(NestedPartySubID_226.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_226(225928921);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_226);
          NstdPtysSubGrp_NoNestedPartySubIDs_226.insert(NestedPartySubIDType_226.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_226);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_114;
        FIX::NestedPartyID NestedPartyID_114("STRING_190473287");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_114);
        NestedParties_NoNestedPartyIDs_114.insert(NestedPartyID_114.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_114('1');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_114);
        NestedParties_NoNestedPartyIDs_114.insert(NestedPartyIDSource_114.getString());
        FIX::NestedPartyRole NestedPartyRole_114(574988350);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_114);
        NestedParties_NoNestedPartyIDs_114.insert(NestedPartyRole_114.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_114);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_227;
          FIX::NestedPartySubID NestedPartySubID_227("STRING_1559592087");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_227);
          NstdPtysSubGrp_NoNestedPartySubIDs_227.insert(NestedPartySubID_227.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_227(1104367541);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_227);
          NstdPtysSubGrp_NoNestedPartySubIDs_227.insert(NestedPartySubIDType_227.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_227);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_228;
          FIX::NestedPartySubID NestedPartySubID_228("STRING_719095123");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_228);
          NstdPtysSubGrp_NoNestedPartySubIDs_228.insert(NestedPartySubID_228.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_228(800450704);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_228);
          NstdPtysSubGrp_NoNestedPartySubIDs_228.insert(NestedPartySubIDType_228.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_228);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_6;
      FIX::LegOrderQty LegOrderQty_17;
      LegOrderQty_17.setString("13820166");
      noLegs_0_1_1.set(LegOrderQty_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegOrderQty_17.getString());
      FIX::LegQty LegQty_17;
      LegQty_17.setString("16626991");
      noLegs_0_1_1.set(LegQty_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegQty_17.getString());
      FIX::LegRefID LegRefID_17("STRING_1564633027");
      noLegs_0_1_1.set(LegRefID_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegRefID_17.getString());
      FIX::LegSettlDate LegSettlDate_17("LOCALMKTDATE_1329228519");
      noLegs_0_1_1.set(LegSettlDate_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegSettlDate_17.getString());
      FIX::LegSettlType LegSettlType_17('1');
      noLegs_0_1_1.set(LegSettlType_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegSettlType_17.getString());
      FIX::LegSwapType LegSwapType_17(4);
      noLegs_0_1_1.set(LegSwapType_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegSwapType_17.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_6);

      // InstrumentLeg
      multiset<string> InstrumentLeg_100;
      FIX::EncodedLegIssuer EncodedLegIssuer_100("DATA_1815422412");
      noLegs_0_1_1.set(EncodedLegIssuer_100);
      InstrumentLeg_100.insert(EncodedLegIssuer_100.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_100(1171473892);
      noLegs_0_1_1.set(EncodedLegIssuerLen_100);
      InstrumentLeg_100.insert(EncodedLegIssuerLen_100.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_100("DATA_16905302");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_100);
      InstrumentLeg_100.insert(EncodedLegSecurityDesc_100.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_100(17851037);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_100);
      InstrumentLeg_100.insert(EncodedLegSecurityDescLen_100.getString());
      FIX::LegCFICode LegCFICode_100("STRING_866050426");
      noLegs_0_1_1.set(LegCFICode_100);
      InstrumentLeg_100.insert(LegCFICode_100.getString());
      FIX::LegContractMultiplier LegContractMultiplier_100;
      LegContractMultiplier_100.setString("652418");
      noLegs_0_1_1.set(LegContractMultiplier_100);
      InstrumentLeg_100.insert(LegContractMultiplier_100.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_100(2029523087);
      noLegs_0_1_1.set(LegContractMultiplierUnit_100);
      InstrumentLeg_100.insert(LegContractMultiplierUnit_100.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_100("MONTHYEAR_20653969");
      noLegs_0_1_1.set(LegContractSettlMonth_100);
      InstrumentLeg_100.insert(LegContractSettlMonth_100.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_100("COUNTRY_1928174430");
      noLegs_0_1_1.set(LegCountryOfIssue_100);
      InstrumentLeg_100.insert(LegCountryOfIssue_100.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_100("LOCALMKTDATE_1801646611");
      noLegs_0_1_1.set(LegCouponPaymentDate_100);
      InstrumentLeg_100.insert(LegCouponPaymentDate_100.getString());
      FIX::LegCouponRate LegCouponRate_100;
      LegCouponRate_100.setString("59.780000");
      noLegs_0_1_1.set(LegCouponRate_100);
      InstrumentLeg_100.insert(LegCouponRate_100.getString());
      FIX::LegCreditRating LegCreditRating_100("STRING_538464750");
      noLegs_0_1_1.set(LegCreditRating_100);
      InstrumentLeg_100.insert(LegCreditRating_100.getString());
      FIX::LegCurrency LegCurrency_100("JPY");
      noLegs_0_1_1.set(LegCurrency_100);
      InstrumentLeg_100.insert(LegCurrency_100.getString());
      FIX::LegDatedDate LegDatedDate_100("LOCALMKTDATE_374833796");
      noLegs_0_1_1.set(LegDatedDate_100);
      InstrumentLeg_100.insert(LegDatedDate_100.getString());
      FIX::LegExerciseStyle LegExerciseStyle_100(316655164);
      noLegs_0_1_1.set(LegExerciseStyle_100);
      InstrumentLeg_100.insert(LegExerciseStyle_100.getString());
      FIX::LegFactor LegFactor_100;
      LegFactor_100.setString("20090999");
      noLegs_0_1_1.set(LegFactor_100);
      InstrumentLeg_100.insert(LegFactor_100.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_100(565307083);
      noLegs_0_1_1.set(LegFlowScheduleType_100);
      InstrumentLeg_100.insert(LegFlowScheduleType_100.getString());
      FIX::LegInstrRegistry LegInstrRegistry_100("STRING_64714749");
      noLegs_0_1_1.set(LegInstrRegistry_100);
      InstrumentLeg_100.insert(LegInstrRegistry_100.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_100("LOCALMKTDATE_436604653");
      noLegs_0_1_1.set(LegInterestAccrualDate_100);
      InstrumentLeg_100.insert(LegInterestAccrualDate_100.getString());
      FIX::LegIssueDate LegIssueDate_100("LOCALMKTDATE_1168579112");
      noLegs_0_1_1.set(LegIssueDate_100);
      InstrumentLeg_100.insert(LegIssueDate_100.getString());
      FIX::LegIssuer LegIssuer_100("STRING_1624306836");
      noLegs_0_1_1.set(LegIssuer_100);
      InstrumentLeg_100.insert(LegIssuer_100.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_100("STRING_1540972195");
      noLegs_0_1_1.set(LegLocaleOfIssue_100);
      InstrumentLeg_100.insert(LegLocaleOfIssue_100.getString());
      FIX::LegMaturityDate LegMaturityDate_100("LOCALMKTDATE_1887674235");
      noLegs_0_1_1.set(LegMaturityDate_100);
      InstrumentLeg_100.insert(LegMaturityDate_100.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_100("MONTHYEAR_277273892");
      noLegs_0_1_1.set(LegMaturityMonthYear_100);
      InstrumentLeg_100.insert(LegMaturityMonthYear_100.getString());
      FIX::LegMaturityTime LegMaturityTime_100("TZTIMEONLY_775505216");
      noLegs_0_1_1.set(LegMaturityTime_100);
      InstrumentLeg_100.insert(LegMaturityTime_100.getString());
      FIX::LegOptAttribute LegOptAttribute_100('1');
      noLegs_0_1_1.set(LegOptAttribute_100);
      InstrumentLeg_100.insert(LegOptAttribute_100.getString());
      FIX::LegOptionRatio LegOptionRatio_100;
      LegOptionRatio_100.setString("18419069");
      noLegs_0_1_1.set(LegOptionRatio_100);
      InstrumentLeg_100.insert(LegOptionRatio_100.getString());
      FIX::LegPool LegPool_100("STRING_2104733736");
      noLegs_0_1_1.set(LegPool_100);
      InstrumentLeg_100.insert(LegPool_100.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_100("STRING_984519050");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_100);
      InstrumentLeg_100.insert(LegPriceUnitOfMeasure_100.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_100;
      LegPriceUnitOfMeasureQty_100.setString("17204741");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_100);
      InstrumentLeg_100.insert(LegPriceUnitOfMeasureQty_100.getString());
      FIX::LegProduct LegProduct_100(1772672500);
      noLegs_0_1_1.set(LegProduct_100);
      InstrumentLeg_100.insert(LegProduct_100.getString());
      FIX::LegPutOrCall LegPutOrCall_100(8509294);
      noLegs_0_1_1.set(LegPutOrCall_100);
      InstrumentLeg_100.insert(LegPutOrCall_100.getString());
      FIX::LegRatioQty LegRatioQty_100;
      LegRatioQty_100.setString("17373794");
      noLegs_0_1_1.set(LegRatioQty_100);
      InstrumentLeg_100.insert(LegRatioQty_100.getString());
      FIX::LegRedemptionDate LegRedemptionDate_100("LOCALMKTDATE_1790523537");
      noLegs_0_1_1.set(LegRedemptionDate_100);
      InstrumentLeg_100.insert(LegRedemptionDate_100.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_100("STRING_874559720");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_100);
      InstrumentLeg_100.insert(LegRepoCollateralSecurityType_100.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_100;
      LegRepurchaseRate_100.setString("12.260000");
      noLegs_0_1_1.set(LegRepurchaseRate_100);
      InstrumentLeg_100.insert(LegRepurchaseRate_100.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_100(1672562976);
      noLegs_0_1_1.set(LegRepurchaseTerm_100);
      InstrumentLeg_100.insert(LegRepurchaseTerm_100.getString());
      FIX::LegSecurityDesc LegSecurityDesc_100("STRING_895213689");
      noLegs_0_1_1.set(LegSecurityDesc_100);
      InstrumentLeg_100.insert(LegSecurityDesc_100.getString());
      FIX::LegSecurityExchange LegSecurityExchange_100("EXCHANGE_1583312009");
      noLegs_0_1_1.set(LegSecurityExchange_100);
      InstrumentLeg_100.insert(LegSecurityExchange_100.getString());
      FIX::LegSecurityID LegSecurityID_100("STRING_1326725940");
      noLegs_0_1_1.set(LegSecurityID_100);
      InstrumentLeg_100.insert(LegSecurityID_100.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_100("STRING_1975459667");
      noLegs_0_1_1.set(LegSecurityIDSource_100);
      InstrumentLeg_100.insert(LegSecurityIDSource_100.getString());
      FIX::LegSecuritySubType LegSecuritySubType_100("STRING_2121776759");
      noLegs_0_1_1.set(LegSecuritySubType_100);
      InstrumentLeg_100.insert(LegSecuritySubType_100.getString());
      FIX::LegSecurityType LegSecurityType_100("STRING_1313806596");
      noLegs_0_1_1.set(LegSecurityType_100);
      InstrumentLeg_100.insert(LegSecurityType_100.getString());
      FIX::LegSide LegSide_100('1');
      noLegs_0_1_1.set(LegSide_100);
      InstrumentLeg_100.insert(LegSide_100.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_100("STRING_349126907");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_100);
      InstrumentLeg_100.insert(LegStateOrProvinceOfIssue_100.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_100("CAN");
      noLegs_0_1_1.set(LegStrikeCurrency_100);
      InstrumentLeg_100.insert(LegStrikeCurrency_100.getString());
      FIX::LegStrikePrice LegStrikePrice_100;
      LegStrikePrice_100.setString("9144339");
      noLegs_0_1_1.set(LegStrikePrice_100);
      InstrumentLeg_100.insert(LegStrikePrice_100.getString());
      FIX::LegSymbol LegSymbol_100("STRING_1695176509");
      noLegs_0_1_1.set(LegSymbol_100);
      InstrumentLeg_100.insert(LegSymbol_100.getString());
      FIX::LegSymbolSfx LegSymbolSfx_100("STRING_1909368007");
      noLegs_0_1_1.set(LegSymbolSfx_100);
      InstrumentLeg_100.insert(LegSymbolSfx_100.getString());
      FIX::LegTimeUnit LegTimeUnit_100("STRING_2083013103");
      noLegs_0_1_1.set(LegTimeUnit_100);
      InstrumentLeg_100.insert(LegTimeUnit_100.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_100("STRING_1171999698");
      noLegs_0_1_1.set(LegUnitOfMeasure_100);
      InstrumentLeg_100.insert(LegUnitOfMeasure_100.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_100;
      LegUnitOfMeasureQty_100.setString("13028565");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_100);
      InstrumentLeg_100.insert(LegUnitOfMeasureQty_100.getString());
      all_values.push_back(InstrumentLeg_100);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_199;
        FIX::LegSecurityAltID LegSecurityAltID_199("STRING_1449273590");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_199);
        LegSecAltIDGrp_NoLegSecurityAltID_199.insert(LegSecurityAltID_199.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_199("STRING_2078361770");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_199);
        LegSecAltIDGrp_NoLegSecurityAltID_199.insert(LegSecurityAltIDSource_199.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_199);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_200;
        FIX::LegSecurityAltID LegSecurityAltID_200("STRING_1078609770");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_200);
        LegSecAltIDGrp_NoLegSecurityAltID_200.insert(LegSecurityAltID_200.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_200("STRING_1143696862");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_200);
        LegSecAltIDGrp_NoLegSecurityAltID_200.insert(LegSecurityAltIDSource_200.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_200);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_201;
        FIX::LegSecurityAltID LegSecurityAltID_201("STRING_2035611858");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_201);
        LegSecAltIDGrp_NoLegSecurityAltID_201.insert(LegSecurityAltID_201.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_201("STRING_2063128820");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_201);
        LegSecAltIDGrp_NoLegSecurityAltID_201.insert(LegSecurityAltIDSource_201.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_201);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_9;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_9("GBP");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurveCurrency_9.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_9("STRING_2071638114");
      noLegs_0_1_1.set(LegBenchmarkCurveName_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurveName_9.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_9("STRING_306583111");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurvePoint_9.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_9;
      LegBenchmarkPrice_9.setString("13038405");
      noLegs_0_1_1.set(LegBenchmarkPrice_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkPrice_9.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_9(798714186);
      noLegs_0_1_1.set(LegBenchmarkPriceType_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkPriceType_9.getString());
      all_values.push_back(LegBenchmarkCurveData_9);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_35;
        FIX::LegStipulationType LegStipulationType_35("STRING_828919928");
        noLegStipulations_0_1_2_0.set(LegStipulationType_35);
        LegStipulations_NoLegStipulations_35.insert(LegStipulationType_35.getString());
        FIX::LegStipulationValue LegStipulationValue_35("STRING_1693927876");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_35);
        LegStipulations_NoLegStipulations_35.insert(LegStipulationValue_35.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_35);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_36;
        FIX::LegStipulationType LegStipulationType_36("STRING_1545032698");
        noLegStipulations_0_1_2_1.set(LegStipulationType_36);
        LegStipulations_NoLegStipulations_36.insert(LegStipulationType_36.getString());
        FIX::LegStipulationValue LegStipulationValue_36("STRING_8162220");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_36);
        LegStipulations_NoLegStipulations_36.insert(LegStipulationValue_36.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_36);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_115;
        FIX::NestedPartyID NestedPartyID_115("STRING_1519325809");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_115);
        NestedParties_NoNestedPartyIDs_115.insert(NestedPartyID_115.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_115('1');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_115);
        NestedParties_NoNestedPartyIDs_115.insert(NestedPartyIDSource_115.getString());
        FIX::NestedPartyRole NestedPartyRole_115(985567297);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_115);
        NestedParties_NoNestedPartyIDs_115.insert(NestedPartyRole_115.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_115);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_229;
          FIX::NestedPartySubID NestedPartySubID_229("STRING_804946929");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_229);
          NstdPtysSubGrp_NoNestedPartySubIDs_229.insert(NestedPartySubID_229.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_229(310847003);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_229);
          NstdPtysSubGrp_NoNestedPartySubIDs_229.insert(NestedPartySubIDType_229.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_229);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_230;
          FIX::NestedPartySubID NestedPartySubID_230("STRING_635403060");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_230);
          NstdPtysSubGrp_NoNestedPartySubIDs_230.insert(NestedPartySubID_230.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_230(352639790);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_230);
          NstdPtysSubGrp_NoNestedPartySubIDs_230.insert(NestedPartySubIDType_230.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_230);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_116;
        FIX::NestedPartyID NestedPartyID_116("STRING_72731362");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_116);
        NestedParties_NoNestedPartyIDs_116.insert(NestedPartyID_116.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_116('5');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_116);
        NestedParties_NoNestedPartyIDs_116.insert(NestedPartyIDSource_116.getString());
        FIX::NestedPartyRole NestedPartyRole_116(1524639488);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_116);
        NestedParties_NoNestedPartyIDs_116.insert(NestedPartyRole_116.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_116);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_231;
          FIX::NestedPartySubID NestedPartySubID_231("STRING_246652558");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_231);
          NstdPtysSubGrp_NoNestedPartySubIDs_231.insert(NestedPartySubID_231.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_231(826429431);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_231);
          NstdPtysSubGrp_NoNestedPartySubIDs_231.insert(NestedPartySubIDType_231.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_231);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_232;
          FIX::NestedPartySubID NestedPartySubID_232("STRING_1306466038");
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubID_232);
          NstdPtysSubGrp_NoNestedPartySubIDs_232.insert(NestedPartySubID_232.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_232(1325262329);
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubIDType_232);
          NstdPtysSubGrp_NoNestedPartySubIDs_232.insert(NestedPartySubIDType_232.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_232);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_7;
      FIX::LegOrderQty LegOrderQty_18;
      LegOrderQty_18.setString("19701262");
      noLegs_0_1_2.set(LegOrderQty_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegOrderQty_18.getString());
      FIX::LegQty LegQty_18;
      LegQty_18.setString("11945942");
      noLegs_0_1_2.set(LegQty_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegQty_18.getString());
      FIX::LegRefID LegRefID_18("STRING_1240907501");
      noLegs_0_1_2.set(LegRefID_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegRefID_18.getString());
      FIX::LegSettlDate LegSettlDate_18("LOCALMKTDATE_539329980");
      noLegs_0_1_2.set(LegSettlDate_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegSettlDate_18.getString());
      FIX::LegSettlType LegSettlType_18('7');
      noLegs_0_1_2.set(LegSettlType_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegSettlType_18.getString());
      FIX::LegSwapType LegSwapType_18(1);
      noLegs_0_1_2.set(LegSwapType_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegSwapType_18.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_7);

      // InstrumentLeg
      multiset<string> InstrumentLeg_101;
      FIX::EncodedLegIssuer EncodedLegIssuer_101("DATA_845913091");
      noLegs_0_1_2.set(EncodedLegIssuer_101);
      InstrumentLeg_101.insert(EncodedLegIssuer_101.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_101(2011751911);
      noLegs_0_1_2.set(EncodedLegIssuerLen_101);
      InstrumentLeg_101.insert(EncodedLegIssuerLen_101.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_101("DATA_1963776154");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_101);
      InstrumentLeg_101.insert(EncodedLegSecurityDesc_101.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_101(807633781);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_101);
      InstrumentLeg_101.insert(EncodedLegSecurityDescLen_101.getString());
      FIX::LegCFICode LegCFICode_101("STRING_693188191");
      noLegs_0_1_2.set(LegCFICode_101);
      InstrumentLeg_101.insert(LegCFICode_101.getString());
      FIX::LegContractMultiplier LegContractMultiplier_101;
      LegContractMultiplier_101.setString("15102203");
      noLegs_0_1_2.set(LegContractMultiplier_101);
      InstrumentLeg_101.insert(LegContractMultiplier_101.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_101(205182831);
      noLegs_0_1_2.set(LegContractMultiplierUnit_101);
      InstrumentLeg_101.insert(LegContractMultiplierUnit_101.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_101("MONTHYEAR_701350411");
      noLegs_0_1_2.set(LegContractSettlMonth_101);
      InstrumentLeg_101.insert(LegContractSettlMonth_101.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_101("COUNTRY_884640630");
      noLegs_0_1_2.set(LegCountryOfIssue_101);
      InstrumentLeg_101.insert(LegCountryOfIssue_101.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_101("LOCALMKTDATE_1724508641");
      noLegs_0_1_2.set(LegCouponPaymentDate_101);
      InstrumentLeg_101.insert(LegCouponPaymentDate_101.getString());
      FIX::LegCouponRate LegCouponRate_101;
      LegCouponRate_101.setString("92.270000");
      noLegs_0_1_2.set(LegCouponRate_101);
      InstrumentLeg_101.insert(LegCouponRate_101.getString());
      FIX::LegCreditRating LegCreditRating_101("STRING_1870207927");
      noLegs_0_1_2.set(LegCreditRating_101);
      InstrumentLeg_101.insert(LegCreditRating_101.getString());
      FIX::LegCurrency LegCurrency_101("GBP");
      noLegs_0_1_2.set(LegCurrency_101);
      InstrumentLeg_101.insert(LegCurrency_101.getString());
      FIX::LegDatedDate LegDatedDate_101("LOCALMKTDATE_33571282");
      noLegs_0_1_2.set(LegDatedDate_101);
      InstrumentLeg_101.insert(LegDatedDate_101.getString());
      FIX::LegExerciseStyle LegExerciseStyle_101(2080880770);
      noLegs_0_1_2.set(LegExerciseStyle_101);
      InstrumentLeg_101.insert(LegExerciseStyle_101.getString());
      FIX::LegFactor LegFactor_101;
      LegFactor_101.setString("10334222");
      noLegs_0_1_2.set(LegFactor_101);
      InstrumentLeg_101.insert(LegFactor_101.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_101(106302644);
      noLegs_0_1_2.set(LegFlowScheduleType_101);
      InstrumentLeg_101.insert(LegFlowScheduleType_101.getString());
      FIX::LegInstrRegistry LegInstrRegistry_101("STRING_504329637");
      noLegs_0_1_2.set(LegInstrRegistry_101);
      InstrumentLeg_101.insert(LegInstrRegistry_101.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_101("LOCALMKTDATE_410578139");
      noLegs_0_1_2.set(LegInterestAccrualDate_101);
      InstrumentLeg_101.insert(LegInterestAccrualDate_101.getString());
      FIX::LegIssueDate LegIssueDate_101("LOCALMKTDATE_1481890560");
      noLegs_0_1_2.set(LegIssueDate_101);
      InstrumentLeg_101.insert(LegIssueDate_101.getString());
      FIX::LegIssuer LegIssuer_101("STRING_750982196");
      noLegs_0_1_2.set(LegIssuer_101);
      InstrumentLeg_101.insert(LegIssuer_101.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_101("STRING_1237007570");
      noLegs_0_1_2.set(LegLocaleOfIssue_101);
      InstrumentLeg_101.insert(LegLocaleOfIssue_101.getString());
      FIX::LegMaturityDate LegMaturityDate_101("LOCALMKTDATE_640872951");
      noLegs_0_1_2.set(LegMaturityDate_101);
      InstrumentLeg_101.insert(LegMaturityDate_101.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_101("MONTHYEAR_2076244525");
      noLegs_0_1_2.set(LegMaturityMonthYear_101);
      InstrumentLeg_101.insert(LegMaturityMonthYear_101.getString());
      FIX::LegMaturityTime LegMaturityTime_101("TZTIMEONLY_1059650215");
      noLegs_0_1_2.set(LegMaturityTime_101);
      InstrumentLeg_101.insert(LegMaturityTime_101.getString());
      FIX::LegOptAttribute LegOptAttribute_101('1');
      noLegs_0_1_2.set(LegOptAttribute_101);
      InstrumentLeg_101.insert(LegOptAttribute_101.getString());
      FIX::LegOptionRatio LegOptionRatio_101;
      LegOptionRatio_101.setString("11696683");
      noLegs_0_1_2.set(LegOptionRatio_101);
      InstrumentLeg_101.insert(LegOptionRatio_101.getString());
      FIX::LegPool LegPool_101("STRING_1598980196");
      noLegs_0_1_2.set(LegPool_101);
      InstrumentLeg_101.insert(LegPool_101.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_101("STRING_395894863");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_101);
      InstrumentLeg_101.insert(LegPriceUnitOfMeasure_101.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_101;
      LegPriceUnitOfMeasureQty_101.setString("1872466");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_101);
      InstrumentLeg_101.insert(LegPriceUnitOfMeasureQty_101.getString());
      FIX::LegProduct LegProduct_101(297409639);
      noLegs_0_1_2.set(LegProduct_101);
      InstrumentLeg_101.insert(LegProduct_101.getString());
      FIX::LegPutOrCall LegPutOrCall_101(260163126);
      noLegs_0_1_2.set(LegPutOrCall_101);
      InstrumentLeg_101.insert(LegPutOrCall_101.getString());
      FIX::LegRatioQty LegRatioQty_101;
      LegRatioQty_101.setString("35392");
      noLegs_0_1_2.set(LegRatioQty_101);
      InstrumentLeg_101.insert(LegRatioQty_101.getString());
      FIX::LegRedemptionDate LegRedemptionDate_101("LOCALMKTDATE_1105043420");
      noLegs_0_1_2.set(LegRedemptionDate_101);
      InstrumentLeg_101.insert(LegRedemptionDate_101.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_101("STRING_953351317");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_101);
      InstrumentLeg_101.insert(LegRepoCollateralSecurityType_101.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_101;
      LegRepurchaseRate_101.setString("95.870000");
      noLegs_0_1_2.set(LegRepurchaseRate_101);
      InstrumentLeg_101.insert(LegRepurchaseRate_101.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_101(1310226252);
      noLegs_0_1_2.set(LegRepurchaseTerm_101);
      InstrumentLeg_101.insert(LegRepurchaseTerm_101.getString());
      FIX::LegSecurityDesc LegSecurityDesc_101("STRING_1654701728");
      noLegs_0_1_2.set(LegSecurityDesc_101);
      InstrumentLeg_101.insert(LegSecurityDesc_101.getString());
      FIX::LegSecurityExchange LegSecurityExchange_101("EXCHANGE_250916569");
      noLegs_0_1_2.set(LegSecurityExchange_101);
      InstrumentLeg_101.insert(LegSecurityExchange_101.getString());
      FIX::LegSecurityID LegSecurityID_101("STRING_887251245");
      noLegs_0_1_2.set(LegSecurityID_101);
      InstrumentLeg_101.insert(LegSecurityID_101.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_101("STRING_1530537308");
      noLegs_0_1_2.set(LegSecurityIDSource_101);
      InstrumentLeg_101.insert(LegSecurityIDSource_101.getString());
      FIX::LegSecuritySubType LegSecuritySubType_101("STRING_2121124497");
      noLegs_0_1_2.set(LegSecuritySubType_101);
      InstrumentLeg_101.insert(LegSecuritySubType_101.getString());
      FIX::LegSecurityType LegSecurityType_101("STRING_185245307");
      noLegs_0_1_2.set(LegSecurityType_101);
      InstrumentLeg_101.insert(LegSecurityType_101.getString());
      FIX::LegSide LegSide_101('6');
      noLegs_0_1_2.set(LegSide_101);
      InstrumentLeg_101.insert(LegSide_101.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_101("STRING_7212131");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_101);
      InstrumentLeg_101.insert(LegStateOrProvinceOfIssue_101.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_101("EUR");
      noLegs_0_1_2.set(LegStrikeCurrency_101);
      InstrumentLeg_101.insert(LegStrikeCurrency_101.getString());
      FIX::LegStrikePrice LegStrikePrice_101;
      LegStrikePrice_101.setString("1135147");
      noLegs_0_1_2.set(LegStrikePrice_101);
      InstrumentLeg_101.insert(LegStrikePrice_101.getString());
      FIX::LegSymbol LegSymbol_101("STRING_622972066");
      noLegs_0_1_2.set(LegSymbol_101);
      InstrumentLeg_101.insert(LegSymbol_101.getString());
      FIX::LegSymbolSfx LegSymbolSfx_101("STRING_1507836607");
      noLegs_0_1_2.set(LegSymbolSfx_101);
      InstrumentLeg_101.insert(LegSymbolSfx_101.getString());
      FIX::LegTimeUnit LegTimeUnit_101("STRING_1595405336");
      noLegs_0_1_2.set(LegTimeUnit_101);
      InstrumentLeg_101.insert(LegTimeUnit_101.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_101("STRING_1373954262");
      noLegs_0_1_2.set(LegUnitOfMeasure_101);
      InstrumentLeg_101.insert(LegUnitOfMeasure_101.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_101;
      LegUnitOfMeasureQty_101.setString("5973605");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_101);
      InstrumentLeg_101.insert(LegUnitOfMeasureQty_101.getString());
      all_values.push_back(InstrumentLeg_101);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_202;
        FIX::LegSecurityAltID LegSecurityAltID_202("STRING_1302715139");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_202);
        LegSecAltIDGrp_NoLegSecurityAltID_202.insert(LegSecurityAltID_202.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_202("STRING_1657010745");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_202);
        LegSecAltIDGrp_NoLegSecurityAltID_202.insert(LegSecurityAltIDSource_202.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_202);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_10;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_10("GBP");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurveCurrency_10.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_10("STRING_1108507293");
      noLegs_0_1_2.set(LegBenchmarkCurveName_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurveName_10.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_10("STRING_172673055");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurvePoint_10.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_10;
      LegBenchmarkPrice_10.setString("5121465");
      noLegs_0_1_2.set(LegBenchmarkPrice_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkPrice_10.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_10(1405916932);
      noLegs_0_1_2.set(LegBenchmarkPriceType_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkPriceType_10.getString());
      all_values.push_back(LegBenchmarkCurveData_10);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_37;
        FIX::LegStipulationType LegStipulationType_37("STRING_515685773");
        noLegStipulations_0_2_2_0.set(LegStipulationType_37);
        LegStipulations_NoLegStipulations_37.insert(LegStipulationType_37.getString());
        FIX::LegStipulationValue LegStipulationValue_37("STRING_363476705");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_37);
        LegStipulations_NoLegStipulations_37.insert(LegStipulationValue_37.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_37);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_117;
        FIX::NestedPartyID NestedPartyID_117("STRING_2029445361");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_117);
        NestedParties_NoNestedPartyIDs_117.insert(NestedPartyID_117.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_117('1');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_117);
        NestedParties_NoNestedPartyIDs_117.insert(NestedPartyIDSource_117.getString());
        FIX::NestedPartyRole NestedPartyRole_117(893405579);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_117);
        NestedParties_NoNestedPartyIDs_117.insert(NestedPartyRole_117.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_117);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_233;
          FIX::NestedPartySubID NestedPartySubID_233("STRING_413470554");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_233);
          NstdPtysSubGrp_NoNestedPartySubIDs_233.insert(NestedPartySubID_233.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_233(276459239);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_233);
          NstdPtysSubGrp_NoNestedPartySubIDs_233.insert(NestedPartySubIDType_233.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_233);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_234;
          FIX::NestedPartySubID NestedPartySubID_234("STRING_106519131");
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubID_234);
          NstdPtysSubGrp_NoNestedPartySubIDs_234.insert(NestedPartySubID_234.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_234(598715861);
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubIDType_234);
          NstdPtysSubGrp_NoNestedPartySubIDs_234.insert(NestedPartySubIDType_234.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_234);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_235;
          FIX::NestedPartySubID NestedPartySubID_235("STRING_340295408");
          noNestedPartySubIDs_0_2_0_3_2.set(NestedPartySubID_235);
          NstdPtysSubGrp_NoNestedPartySubIDs_235.insert(NestedPartySubID_235.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_235(113731263);
          noNestedPartySubIDs_0_2_0_3_2.set(NestedPartySubIDType_235);
          NstdPtysSubGrp_NoNestedPartySubIDs_235.insert(NestedPartySubIDType_235.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_235);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_2);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_118;
        FIX::NestedPartyID NestedPartyID_118("STRING_717358290");
        noNestedPartyIDs_0_2_2_1.set(NestedPartyID_118);
        NestedParties_NoNestedPartyIDs_118.insert(NestedPartyID_118.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_118('1');
        noNestedPartyIDs_0_2_2_1.set(NestedPartyIDSource_118);
        NestedParties_NoNestedPartyIDs_118.insert(NestedPartyIDSource_118.getString());
        FIX::NestedPartyRole NestedPartyRole_118(227246039);
        noNestedPartyIDs_0_2_2_1.set(NestedPartyRole_118);
        NestedParties_NoNestedPartyIDs_118.insert(NestedPartyRole_118.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_118);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_236;
          FIX::NestedPartySubID NestedPartySubID_236("STRING_797906834");
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubID_236);
          NstdPtysSubGrp_NoNestedPartySubIDs_236.insert(NestedPartySubID_236.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_236(1822651375);
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubIDType_236);
          NstdPtysSubGrp_NoNestedPartySubIDs_236.insert(NestedPartySubIDType_236.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_236);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_237;
          FIX::NestedPartySubID NestedPartySubID_237("STRING_566800971");
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubID_237);
          NstdPtysSubGrp_NoNestedPartySubIDs_237.insert(NestedPartySubID_237.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_237(1395267364);
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubIDType_237);
          NstdPtysSubGrp_NoNestedPartySubIDs_237.insert(NestedPartySubIDType_237.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_237);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_1);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_119;
        FIX::NestedPartyID NestedPartyID_119("STRING_1911446015");
        noNestedPartyIDs_0_2_2_2.set(NestedPartyID_119);
        NestedParties_NoNestedPartyIDs_119.insert(NestedPartyID_119.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_119('1');
        noNestedPartyIDs_0_2_2_2.set(NestedPartyIDSource_119);
        NestedParties_NoNestedPartyIDs_119.insert(NestedPartyIDSource_119.getString());
        FIX::NestedPartyRole NestedPartyRole_119(904794461);
        noNestedPartyIDs_0_2_2_2.set(NestedPartyRole_119);
        NestedParties_NoNestedPartyIDs_119.insert(NestedPartyRole_119.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_119);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_238;
          FIX::NestedPartySubID NestedPartySubID_238("STRING_46932332");
          noNestedPartySubIDs_0_2_2_3_0.set(NestedPartySubID_238);
          NstdPtysSubGrp_NoNestedPartySubIDs_238.insert(NestedPartySubID_238.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_238(2013301754);
          noNestedPartySubIDs_0_2_2_3_0.set(NestedPartySubIDType_238);
          NstdPtysSubGrp_NoNestedPartySubIDs_238.insert(NestedPartySubIDType_238.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_238);

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_0);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_24;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_24("CAN");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurveCurrency_24.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_24("STRING_SWAP");
    noRelatedSym_0_0.set(BenchmarkCurveName_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurveName_24.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_24("STRING_146249795");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurvePoint_24.getString());
    FIX::BenchmarkPrice BenchmarkPrice_24;
    BenchmarkPrice_24.setString("10747646");
    noRelatedSym_0_0.set(BenchmarkPrice_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkPrice_24.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_24(1635211743);
    noRelatedSym_0_0.set(BenchmarkPriceType_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkPriceType_24.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_24("STRING_1532437294");
    noRelatedSym_0_0.set(BenchmarkSecurityID_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkSecurityID_24.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_24("STRING_956726387");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkSecurityIDSource_24.getString());
    FIX::Spread Spread_24;
    Spread_24.setString("11614310");
    noRelatedSym_0_0.set(Spread_24);
    SpreadOrBenchmarkCurveData_24.insert(Spread_24.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_24);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_33;
      FIX::StipulationType StipulationType_33("STRING_PROD");
      noStipulations_0_1_0.set(StipulationType_33);
      Stipulations_NoStipulations_33.insert(StipulationType_33.getString());
      FIX::StipulationValue StipulationValue_33("STRING_1574901606");
      noStipulations_0_1_0.set(StipulationValue_33);
      Stipulations_NoStipulations_33.insert(StipulationValue_33.getString());
      all_values.push_back(Stipulations_NoStipulations_33);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_34;
      FIX::StipulationType StipulationType_34("STRING_PRIMARY");
      noStipulations_0_1_1.set(StipulationType_34);
      Stipulations_NoStipulations_34.insert(StipulationType_34.getString());
      FIX::StipulationValue StipulationValue_34("STRING_1196123801");
      noStipulations_0_1_1.set(StipulationValue_34);
      Stipulations_NoStipulations_34.insert(StipulationValue_34.getString());
      all_values.push_back(Stipulations_NoStipulations_34);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_96;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_96("DATA_895113873");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingIssuer_96.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_96(1309855064);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingIssuerLen_96.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_96("DATA_743492109");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingSecurityDesc_96.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_96(185184100);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingSecurityDescLen_96.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_96;
      UnderlyingAdjustedQuantity_96.setString("15371011");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_96);
      UnderlyingInstrument_96.insert(UnderlyingAdjustedQuantity_96.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_96;
      UnderlyingAllocationPercent_96.setString("24.660000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_96);
      UnderlyingInstrument_96.insert(UnderlyingAllocationPercent_96.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_96;
      UnderlyingAttachmentPoint_96.setString("9.350000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_96);
      UnderlyingInstrument_96.insert(UnderlyingAttachmentPoint_96.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_96("STRING_1212268831");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_96);
      UnderlyingInstrument_96.insert(UnderlyingCFICode_96.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_96("STRING_503139789");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_96);
      UnderlyingInstrument_96.insert(UnderlyingCPProgram_96.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_96("STRING_230874651");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_96);
      UnderlyingInstrument_96.insert(UnderlyingCPRegType_96.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_96;
      UnderlyingCapValue_96.setString("9762311");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_96);
      UnderlyingInstrument_96.insert(UnderlyingCapValue_96.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_96;
      UnderlyingCashAmount_96.setString("2251722");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_96);
      UnderlyingInstrument_96.insert(UnderlyingCashAmount_96.getString());
      FIX::UnderlyingCashType UnderlyingCashType_96("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_96);
      UnderlyingInstrument_96.insert(UnderlyingCashType_96.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_96;
      UnderlyingContractMultiplier_96.setString("5169717");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_96);
      UnderlyingInstrument_96.insert(UnderlyingContractMultiplier_96.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_96(272104584);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_96);
      UnderlyingInstrument_96.insert(UnderlyingContractMultiplierUnit_96.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_96("COUNTRY_1001487218");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingCountryOfIssue_96.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_96("LOCALMKTDATE_230385370");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_96);
      UnderlyingInstrument_96.insert(UnderlyingCouponPaymentDate_96.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_96;
      UnderlyingCouponRate_96.setString("34.850000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_96);
      UnderlyingInstrument_96.insert(UnderlyingCouponRate_96.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_96("STRING_125738608");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_96);
      UnderlyingInstrument_96.insert(UnderlyingCreditRating_96.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_96("CHF");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_96);
      UnderlyingInstrument_96.insert(UnderlyingCurrency_96.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_96;
      UnderlyingCurrentValue_96.setString("17609503");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_96);
      UnderlyingInstrument_96.insert(UnderlyingCurrentValue_96.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_96;
      UnderlyingDetachmentPoint_96.setString("24.590000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_96);
      UnderlyingInstrument_96.insert(UnderlyingDetachmentPoint_96.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_96;
      UnderlyingDirtyPrice_96.setString("7151908");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_96);
      UnderlyingInstrument_96.insert(UnderlyingDirtyPrice_96.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_96;
      UnderlyingEndPrice_96.setString("7748977");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_96);
      UnderlyingInstrument_96.insert(UnderlyingEndPrice_96.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_96;
      UnderlyingEndValue_96.setString("399480");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_96);
      UnderlyingInstrument_96.insert(UnderlyingEndValue_96.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_96(1804795569);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_96);
      UnderlyingInstrument_96.insert(UnderlyingExerciseStyle_96.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_96;
      UnderlyingFXRate_96.setString("2023157");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_96);
      UnderlyingInstrument_96.insert(UnderlyingFXRate_96.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_96('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_96);
      UnderlyingInstrument_96.insert(UnderlyingFXRateCalc_96.getString());
      FIX::UnderlyingFactor UnderlyingFactor_96;
      UnderlyingFactor_96.setString("8534357");
      noUnderlyings_0_1_0.set(UnderlyingFactor_96);
      UnderlyingInstrument_96.insert(UnderlyingFactor_96.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_96(228449534);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_96);
      UnderlyingInstrument_96.insert(UnderlyingFlowScheduleType_96.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_96("STRING_1489880374");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_96);
      UnderlyingInstrument_96.insert(UnderlyingInstrRegistry_96.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_96("LOCALMKTDATE_15807139");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_96);
      UnderlyingInstrument_96.insert(UnderlyingIssueDate_96.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_96("STRING_971941644");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_96);
      UnderlyingInstrument_96.insert(UnderlyingIssuer_96.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_96("STRING_1675064475");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingLocaleOfIssue_96.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_96("LOCALMKTDATE_1552908242");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityDate_96.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_96("MONTHYEAR_908280462");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityMonthYear_96.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_96("TZTIMEONLY_510671762");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityTime_96.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_96;
      UnderlyingNotionalPercentageOutstanding_96.setString("34.250000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_96);
      UnderlyingInstrument_96.insert(UnderlyingNotionalPercentageOutstanding_96.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_96('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_96);
      UnderlyingInstrument_96.insert(UnderlyingOptAttribute_96.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_96;
      UnderlyingOriginalNotionalPercentageOutstanding_96.setString("64.130000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_96);
      UnderlyingInstrument_96.insert(UnderlyingOriginalNotionalPercentageOutstanding_96.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_96("STRING_1593924623");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_96);
      UnderlyingInstrument_96.insert(UnderlyingPriceUnitOfMeasure_96.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_96;
      UnderlyingPriceUnitOfMeasureQty_96.setString("16365925");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_96);
      UnderlyingInstrument_96.insert(UnderlyingPriceUnitOfMeasureQty_96.getString());
      FIX::UnderlyingProduct UnderlyingProduct_96(1877215525);
      noUnderlyings_0_1_0.set(UnderlyingProduct_96);
      UnderlyingInstrument_96.insert(UnderlyingProduct_96.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_96(2110896380);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_96);
      UnderlyingInstrument_96.insert(UnderlyingPutOrCall_96.getString());
      FIX::UnderlyingPx UnderlyingPx_96;
      UnderlyingPx_96.setString("19086970");
      noUnderlyings_0_1_0.set(UnderlyingPx_96);
      UnderlyingInstrument_96.insert(UnderlyingPx_96.getString());
      FIX::UnderlyingQty UnderlyingQty_96;
      UnderlyingQty_96.setString("7312190");
      noUnderlyings_0_1_0.set(UnderlyingQty_96);
      UnderlyingInstrument_96.insert(UnderlyingQty_96.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_96("LOCALMKTDATE_193798102");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_96);
      UnderlyingInstrument_96.insert(UnderlyingRedemptionDate_96.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_96("STRING_592396923");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_96);
      UnderlyingInstrument_96.insert(UnderlyingRepoCollateralSecurityType_96.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_96;
      UnderlyingRepurchaseRate_96.setString("77.030000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_96);
      UnderlyingInstrument_96.insert(UnderlyingRepurchaseRate_96.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_96(570433267);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_96);
      UnderlyingInstrument_96.insert(UnderlyingRepurchaseTerm_96.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_96("STRING_350861435");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_96);
      UnderlyingInstrument_96.insert(UnderlyingRestructuringType_96.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_96("STRING_470424407");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityDesc_96.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_96("EXCHANGE_332022078");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityExchange_96.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_96("STRING_1066052334");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityID_96.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_96("STRING_1245322164");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityIDSource_96.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_96("STRING_371970114");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_96);
      UnderlyingInstrument_96.insert(UnderlyingSecuritySubType_96.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_96("STRING_723364255");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityType_96.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_96("STRING_1447637879");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_96);
      UnderlyingInstrument_96.insert(UnderlyingSeniority_96.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_96("STRING_966736616");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_96);
      UnderlyingInstrument_96.insert(UnderlyingSettlMethod_96.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_96(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_96);
      UnderlyingInstrument_96.insert(UnderlyingSettlementType_96.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_96;
      UnderlyingStartValue_96.setString("16760874");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_96);
      UnderlyingInstrument_96.insert(UnderlyingStartValue_96.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_96("STRING_309133342");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingStateOrProvinceOfIssue_96.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_96("CAN");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_96);
      UnderlyingInstrument_96.insert(UnderlyingStrikeCurrency_96.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_96;
      UnderlyingStrikePrice_96.setString("19841978");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_96);
      UnderlyingInstrument_96.insert(UnderlyingStrikePrice_96.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_96("STRING_998031711");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_96);
      UnderlyingInstrument_96.insert(UnderlyingSymbol_96.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_96("STRING_1408825871");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_96);
      UnderlyingInstrument_96.insert(UnderlyingSymbolSfx_96.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_96("STRING_347385931");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_96);
      UnderlyingInstrument_96.insert(UnderlyingTimeUnit_96.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_96("STRING_1615725136");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_96);
      UnderlyingInstrument_96.insert(UnderlyingUnitOfMeasure_96.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_96;
      UnderlyingUnitOfMeasureQty_96.setString("6727624");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_96);
      UnderlyingInstrument_96.insert(UnderlyingUnitOfMeasureQty_96.getString());
      all_values.push_back(UnderlyingInstrument_96);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_200;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_200("STRING_1062166112");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltID_200.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_200("STRING_161871329");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltIDSource_200.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_186;
        FIX::UnderlyingStipType UnderlyingStipType_186("STRING_1025578844");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_186);
        UnderlyingStipulations_NoUnderlyingStips_186.insert(UnderlyingStipType_186.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_186("STRING_2070568415");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_186);
        UnderlyingStipulations_NoUnderlyingStips_186.insert(UnderlyingStipValue_186.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_186);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_187;
        FIX::UnderlyingStipType UnderlyingStipType_187("STRING_1549883316");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_187);
        UnderlyingStipulations_NoUnderlyingStips_187.insert(UnderlyingStipType_187.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_187("STRING_1219376946");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_187);
        UnderlyingStipulations_NoUnderlyingStips_187.insert(UnderlyingStipValue_187.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_187);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_188;
        FIX::UnderlyingStipType UnderlyingStipType_188("STRING_515481691");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_188);
        UnderlyingStipulations_NoUnderlyingStips_188.insert(UnderlyingStipType_188.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_188("STRING_259357372");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_188);
        UnderlyingStipulations_NoUnderlyingStips_188.insert(UnderlyingStipValue_188.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_188);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_188;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_188("STRING_866343126");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyID_188.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_188('7');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyIDSource_188.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_188(2121832291);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyRole_188.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_188);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_377("STRING_1975103943");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_377);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377.insert(UnderlyingInstrumentPartySubID_377.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_377(346318757);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_377);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377.insert(UnderlyingInstrumentPartySubIDType_377.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_189;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_189("STRING_508276067");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyID_189.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_189('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyIDSource_189.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_189(1313055373);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyRole_189.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_189);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_378("STRING_803861940");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_378);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378.insert(UnderlyingInstrumentPartySubID_378.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_378(1622188716);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_378);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378.insert(UnderlyingInstrumentPartySubIDType_378.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_19;
    FIX::Yield Yield_19;
    Yield_19.setString("95.130000");
    noRelatedSym_0_0.set(Yield_19);
    YieldData_19.insert(Yield_19.getString());
    FIX::YieldCalcDate YieldCalcDate_19("LOCALMKTDATE_1304407349");
    noRelatedSym_0_0.set(YieldCalcDate_19);
    YieldData_19.insert(YieldCalcDate_19.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_19("LOCALMKTDATE_1458902885");
    noRelatedSym_0_0.set(YieldRedemptionDate_19);
    YieldData_19.insert(YieldRedemptionDate_19.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_19;
    YieldRedemptionPrice_19.setString("3807475");
    noRelatedSym_0_0.set(YieldRedemptionPrice_19);
    YieldData_19.insert(YieldRedemptionPrice_19.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_19(565749573);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_19);
    YieldData_19.insert(YieldRedemptionPriceType_19.getString());
    FIX::YieldType YieldType_19("STRING_PREVCLOSE");
    noRelatedSym_0_0.set(YieldType_19);
    YieldData_19.insert(YieldType_19.getString());
    all_values.push_back(YieldData_19);

    msg.addGroup(noRelatedSym_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_10;
    FIX::RootPartyID RootPartyID_10("STRING_1238512047");
    noRootPartyIDs_0_0.set(RootPartyID_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyID_10.getString());
    FIX::RootPartyIDSource RootPartyIDSource_10('7');
    noRootPartyIDs_0_0.set(RootPartyIDSource_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyIDSource_10.getString());
    FIX::RootPartyRole RootPartyRole_10(911155176);
    noRootPartyIDs_0_0.set(RootPartyRole_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyRole_10.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_10);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_26;
      FIX::RootPartySubID RootPartySubID_26("STRING_1566401735");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_26);
      RootSubParties_NoRootPartySubIDs_26.insert(RootPartySubID_26.getString());
      FIX::RootPartySubIDType RootPartySubIDType_26(1936734020);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_26);
      RootSubParties_NoRootPartySubIDs_26.insert(RootPartySubIDType_26.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_26);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_27;
      FIX::RootPartySubID RootPartySubID_27("STRING_1323468144");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_27);
      RootSubParties_NoRootPartySubIDs_27.insert(RootPartySubID_27.getString());
      FIX::RootPartySubIDType RootPartySubIDType_27(968801403);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_27);
      RootSubParties_NoRootPartySubIDs_27.insert(RootPartySubIDType_27.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_27);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_28;
      FIX::RootPartySubID RootPartySubID_28("STRING_1008627318");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_28);
      RootSubParties_NoRootPartySubIDs_28.insert(RootPartySubID_28.getString());
      FIX::RootPartySubIDType RootPartySubIDType_28(1838949835);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_28);
      RootSubParties_NoRootPartySubIDs_28.insert(RootPartySubIDType_28.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_28);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
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
