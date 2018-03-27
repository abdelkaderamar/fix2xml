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
  FIX::BookingType BookingType_20(2);
  msg.set(BookingType_20);
  QuoteRequest_0.insert(BookingType_20.getString());
  FIX::ClOrdID ClOrdID_42("STRING_436768987");
  msg.set(ClOrdID_42);
  QuoteRequest_0.insert(ClOrdID_42.getString());
  FIX::EncodedText EncodedText_71("DATA_638192043");
  msg.set(EncodedText_71);
  QuoteRequest_0.insert(EncodedText_71.getString());
  FIX::EncodedTextLen EncodedTextLen_71(1956228572);
  msg.set(EncodedTextLen_71);
  QuoteRequest_0.insert(EncodedTextLen_71.getString());
  FIX::OrderCapacity OrderCapacity_23('R');
  msg.set(OrderCapacity_23);
  QuoteRequest_0.insert(OrderCapacity_23.getString());
  FIX::OrderRestrictions OrderRestrictions_20("MULTIPLECHARVALUE_C");
  msg.set(OrderRestrictions_20);
  QuoteRequest_0.insert(OrderRestrictions_20.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_13(false);
  msg.set(PreTradeAnonymity_13);
  QuoteRequest_0.insert(PreTradeAnonymity_13.getString());
  FIX::PrivateQuote PrivateQuote_1(true);
  msg.set(PrivateQuote_1);
  QuoteRequest_0.insert(PrivateQuote_1.getString());
  FIX::QuoteReqID QuoteReqID_4("STRING_975593975");
  msg.set(QuoteReqID_4);
  QuoteRequest_0.insert(QuoteReqID_4.getString());
  FIX::RFQReqID RFQReqID_0("STRING_1785979916");
  msg.set(RFQReqID_0);
  QuoteRequest_0.insert(RFQReqID_0.getString());
  FIX::RespondentType RespondentType_0(4);
  msg.set(RespondentType_0);
  QuoteRequest_0.insert(RespondentType_0.getString());
  FIX::Text Text_71("STRING_537900240");
  msg.set(Text_71);
  QuoteRequest_0.insert(Text_71.getString());
  all_values.push_back(QuoteRequest_0);

  // QuotReqGrp
  // Group QuotReqGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_0;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_0;
    FIX::Account Account_33("STRING_1467387375");
    noRelatedSym_0_0.set(Account_33);
    QuotReqGrp_NoRelatedSym_0.insert(Account_33.getString());
    FIX::AccountType AccountType_29(3);
    noRelatedSym_0_0.set(AccountType_29);
    QuotReqGrp_NoRelatedSym_0.insert(AccountType_29.getString());
    FIX::AcctIDSource AcctIDSource_26(99);
    noRelatedSym_0_0.set(AcctIDSource_26);
    QuotReqGrp_NoRelatedSym_0.insert(AcctIDSource_26.getString());
    FIX::Currency Currency_45("JPY");
    noRelatedSym_0_0.set(Currency_45);
    QuotReqGrp_NoRelatedSym_0.insert(Currency_45.getString());
    FIX::ExpireTime ExpireTime_15(FIX::UTCTIMESTAMP(6, 26, 29, 17, 92006));
    noRelatedSym_0_0.set(ExpireTime_15);
    QuotReqGrp_NoRelatedSym_0.insert(ExpireTime_15.getString());
    FIX::MinQty MinQty_14;
    MinQty_14.setString("12150138");
    noRelatedSym_0_0.set(MinQty_14);
    QuotReqGrp_NoRelatedSym_0.insert(MinQty_14.getString());
    FIX::OrdType OrdType_47('6');
    noRelatedSym_0_0.set(OrdType_47);
    QuotReqGrp_NoRelatedSym_0.insert(OrdType_47.getString());
    FIX::OrderQty2 OrderQty2_10;
    OrderQty2_10.setString("777574");
    noRelatedSym_0_0.set(OrderQty2_10);
    QuotReqGrp_NoRelatedSym_0.insert(OrderQty2_10.getString());
    FIX::PrevClosePx PrevClosePx_10;
    PrevClosePx_10.setString("10114275");
    noRelatedSym_0_0.set(PrevClosePx_10);
    QuotReqGrp_NoRelatedSym_0.insert(PrevClosePx_10.getString());
    FIX::Price Price_20;
    Price_20.setString("4334495");
    noRelatedSym_0_0.set(Price_20);
    QuotReqGrp_NoRelatedSym_0.insert(Price_20.getString());
    FIX::Price2 Price2_5;
    Price2_5.setString("4364530");
    noRelatedSym_0_0.set(Price2_5);
    QuotReqGrp_NoRelatedSym_0.insert(Price2_5.getString());
    FIX::PriceType PriceType_34(18);
    noRelatedSym_0_0.set(PriceType_34);
    QuotReqGrp_NoRelatedSym_0.insert(PriceType_34.getString());
    FIX::QtyType QtyType_25(2);
    noRelatedSym_0_0.set(QtyType_25);
    QuotReqGrp_NoRelatedSym_0.insert(QtyType_25.getString());
    FIX::QuotePriceType QuotePriceType_0(1);
    noRelatedSym_0_0.set(QuotePriceType_0);
    QuotReqGrp_NoRelatedSym_0.insert(QuotePriceType_0.getString());
    FIX::QuoteRequestType QuoteRequestType_0(1);
    noRelatedSym_0_0.set(QuoteRequestType_0);
    QuotReqGrp_NoRelatedSym_0.insert(QuoteRequestType_0.getString());
    FIX::QuoteType QuoteType_6(1);
    noRelatedSym_0_0.set(QuoteType_6);
    QuotReqGrp_NoRelatedSym_0.insert(QuoteType_6.getString());
    FIX::SettlCurrency SettlCurrency_26("EUR");
    noRelatedSym_0_0.set(SettlCurrency_26);
    QuotReqGrp_NoRelatedSym_0.insert(SettlCurrency_26.getString());
    FIX::SettlDate SettlDate_32("LOCALMKTDATE_1443540537");
    noRelatedSym_0_0.set(SettlDate_32);
    QuotReqGrp_NoRelatedSym_0.insert(SettlDate_32.getString());
    FIX::SettlDate2 SettlDate2_10("LOCALMKTDATE_1777966358");
    noRelatedSym_0_0.set(SettlDate2_10);
    QuotReqGrp_NoRelatedSym_0.insert(SettlDate2_10.getString());
    FIX::SettlType SettlType_23("STRING_B");
    noRelatedSym_0_0.set(SettlType_23);
    QuotReqGrp_NoRelatedSym_0.insert(SettlType_23.getString());
    FIX::Side Side_40('9');
    noRelatedSym_0_0.set(Side_40);
    QuotReqGrp_NoRelatedSym_0.insert(Side_40.getString());
    FIX::TradeOriginationDate TradeOriginationDate_20("LOCALMKTDATE_168382950");
    noRelatedSym_0_0.set(TradeOriginationDate_20);
    QuotReqGrp_NoRelatedSym_0.insert(TradeOriginationDate_20.getString());
    FIX::TradingSessionID TradingSessionID_62("STRING_1");
    noRelatedSym_0_0.set(TradingSessionID_62);
    QuotReqGrp_NoRelatedSym_0.insert(TradingSessionID_62.getString());
    FIX::TradingSessionSubID TradingSessionSubID_62("STRING_7");
    noRelatedSym_0_0.set(TradingSessionSubID_62);
    QuotReqGrp_NoRelatedSym_0.insert(TradingSessionSubID_62.getString());
    FIX::TransactTime TransactTime_46(FIX::UTCTIMESTAMP(11, 32, 57, 25, 72015));
    noRelatedSym_0_0.set(TransactTime_46);
    QuotReqGrp_NoRelatedSym_0.insert(TransactTime_46.getString());
    FIX::ValidUntilTime ValidUntilTime_5(FIX::UTCTIMESTAMP(11, 24, 12, 6, 102014));
    noRelatedSym_0_0.set(ValidUntilTime_5);
    QuotReqGrp_NoRelatedSym_0.insert(ValidUntilTime_5.getString());
    all_values.push_back(QuotReqGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_19;
    FIX::AgreementCurrency AgreementCurrency_19("JPY");
    noRelatedSym_0_0.set(AgreementCurrency_19);
    FinancingDetails_19.insert(AgreementCurrency_19.getString());
    FIX::AgreementDate AgreementDate_19("LOCALMKTDATE_1898779181");
    noRelatedSym_0_0.set(AgreementDate_19);
    FinancingDetails_19.insert(AgreementDate_19.getString());
    FIX::AgreementDesc AgreementDesc_19("STRING_107023396");
    noRelatedSym_0_0.set(AgreementDesc_19);
    FinancingDetails_19.insert(AgreementDesc_19.getString());
    FIX::AgreementID AgreementID_19("STRING_2058603126");
    noRelatedSym_0_0.set(AgreementID_19);
    FinancingDetails_19.insert(AgreementID_19.getString());
    FIX::DeliveryType DeliveryType_19(3);
    noRelatedSym_0_0.set(DeliveryType_19);
    FinancingDetails_19.insert(DeliveryType_19.getString());
    FIX::EndDate EndDate_19("LOCALMKTDATE_1279733888");
    noRelatedSym_0_0.set(EndDate_19);
    FinancingDetails_19.insert(EndDate_19.getString());
    FIX::MarginRatio MarginRatio_19;
    MarginRatio_19.setString("99.110000");
    noRelatedSym_0_0.set(MarginRatio_19);
    FinancingDetails_19.insert(MarginRatio_19.getString());
    FIX::StartDate StartDate_19("LOCALMKTDATE_1628313006");
    noRelatedSym_0_0.set(StartDate_19);
    FinancingDetails_19.insert(StartDate_19.getString());
    FIX::TerminationType TerminationType_19(3);
    noRelatedSym_0_0.set(TerminationType_19);
    FinancingDetails_19.insert(TerminationType_19.getString());
    all_values.push_back(FinancingDetails_19);

    // Instrument
    multiset<string> Instrument_59;
    FIX::AttachmentPoint AttachmentPoint_59;
    AttachmentPoint_59.setString("4.490000");
    noRelatedSym_0_0.set(AttachmentPoint_59);
    Instrument_59.insert(AttachmentPoint_59.getString());
    FIX::CFICode CFICode_59("STRING_1258795717");
    noRelatedSym_0_0.set(CFICode_59);
    Instrument_59.insert(CFICode_59.getString());
    FIX::CPProgram CPProgram_59(1);
    noRelatedSym_0_0.set(CPProgram_59);
    Instrument_59.insert(CPProgram_59.getString());
    FIX::CPRegType CPRegType_59("STRING_1776433945");
    noRelatedSym_0_0.set(CPRegType_59);
    Instrument_59.insert(CPRegType_59.getString());
    FIX::CapPrice CapPrice_59;
    CapPrice_59.setString("14271786");
    noRelatedSym_0_0.set(CapPrice_59);
    Instrument_59.insert(CapPrice_59.getString());
    FIX::ContractMultiplier ContractMultiplier_59;
    ContractMultiplier_59.setString("1383196");
    noRelatedSym_0_0.set(ContractMultiplier_59);
    Instrument_59.insert(ContractMultiplier_59.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_59(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_59);
    Instrument_59.insert(ContractMultiplierUnit_59.getString());
    FIX::ContractSettlMonth ContractSettlMonth_59("MONTHYEAR_1140390636");
    noRelatedSym_0_0.set(ContractSettlMonth_59);
    Instrument_59.insert(ContractSettlMonth_59.getString());
    FIX::CountryOfIssue CountryOfIssue_59("COUNTRY_1467564723");
    noRelatedSym_0_0.set(CountryOfIssue_59);
    Instrument_59.insert(CountryOfIssue_59.getString());
    FIX::CouponPaymentDate CouponPaymentDate_59("LOCALMKTDATE_1270116633");
    noRelatedSym_0_0.set(CouponPaymentDate_59);
    Instrument_59.insert(CouponPaymentDate_59.getString());
    FIX::CouponRate CouponRate_59;
    CouponRate_59.setString("39.330000");
    noRelatedSym_0_0.set(CouponRate_59);
    Instrument_59.insert(CouponRate_59.getString());
    FIX::CreditRating CreditRating_59("STRING_1271544712");
    noRelatedSym_0_0.set(CreditRating_59);
    Instrument_59.insert(CreditRating_59.getString());
    FIX::DatedDate DatedDate_59("LOCALMKTDATE_74287711");
    noRelatedSym_0_0.set(DatedDate_59);
    Instrument_59.insert(DatedDate_59.getString());
    FIX::DetachmentPoint DetachmentPoint_59;
    DetachmentPoint_59.setString("96.690000");
    noRelatedSym_0_0.set(DetachmentPoint_59);
    Instrument_59.insert(DetachmentPoint_59.getString());
    FIX::EncodedIssuer EncodedIssuer_59("DATA_1570875070");
    noRelatedSym_0_0.set(EncodedIssuer_59);
    Instrument_59.insert(EncodedIssuer_59.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_59(885871458);
    noRelatedSym_0_0.set(EncodedIssuerLen_59);
    Instrument_59.insert(EncodedIssuerLen_59.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_59("DATA_388612205");
    noRelatedSym_0_0.set(EncodedSecurityDesc_59);
    Instrument_59.insert(EncodedSecurityDesc_59.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_59(807960074);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_59);
    Instrument_59.insert(EncodedSecurityDescLen_59.getString());
    FIX::ExerciseStyle ExerciseStyle_59(2);
    noRelatedSym_0_0.set(ExerciseStyle_59);
    Instrument_59.insert(ExerciseStyle_59.getString());
    FIX::Factor Factor_59;
    Factor_59.setString("11435472");
    noRelatedSym_0_0.set(Factor_59);
    Instrument_59.insert(Factor_59.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_59(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_59);
    Instrument_59.insert(FlexProductEligibilityIndicator_59.getString());
    FIX::FlexibleIndicator FlexibleIndicator_59(true);
    noRelatedSym_0_0.set(FlexibleIndicator_59);
    Instrument_59.insert(FlexibleIndicator_59.getString());
    FIX::FloorPrice FloorPrice_59;
    FloorPrice_59.setString("1844482");
    noRelatedSym_0_0.set(FloorPrice_59);
    Instrument_59.insert(FloorPrice_59.getString());
    FIX::FlowScheduleType FlowScheduleType_59(2);
    noRelatedSym_0_0.set(FlowScheduleType_59);
    Instrument_59.insert(FlowScheduleType_59.getString());
    FIX::InstrRegistry InstrRegistry_59("STRING_1762550240");
    noRelatedSym_0_0.set(InstrRegistry_59);
    Instrument_59.insert(InstrRegistry_59.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_59('9');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_59);
    Instrument_59.insert(InstrmtAssignmentMethod_59.getString());
    FIX::InterestAccrualDate InterestAccrualDate_59("LOCALMKTDATE_700038718");
    noRelatedSym_0_0.set(InterestAccrualDate_59);
    Instrument_59.insert(InterestAccrualDate_59.getString());
    FIX::IssueDate IssueDate_59("LOCALMKTDATE_894800480");
    noRelatedSym_0_0.set(IssueDate_59);
    Instrument_59.insert(IssueDate_59.getString());
    FIX::Issuer Issuer_59("STRING_235807656");
    noRelatedSym_0_0.set(Issuer_59);
    Instrument_59.insert(Issuer_59.getString());
    FIX::ListMethod ListMethod_59(0);
    noRelatedSym_0_0.set(ListMethod_59);
    Instrument_59.insert(ListMethod_59.getString());
    FIX::LocaleOfIssue LocaleOfIssue_59("STRING_305702134");
    noRelatedSym_0_0.set(LocaleOfIssue_59);
    Instrument_59.insert(LocaleOfIssue_59.getString());
    FIX::MaturityDate MaturityDate_59("LOCALMKTDATE_1819588105");
    noRelatedSym_0_0.set(MaturityDate_59);
    Instrument_59.insert(MaturityDate_59.getString());
    FIX::MaturityMonthYear MaturityMonthYear_59("MONTHYEAR_1439663793");
    noRelatedSym_0_0.set(MaturityMonthYear_59);
    Instrument_59.insert(MaturityMonthYear_59.getString());
    FIX::MaturityTime MaturityTime_59("TZTIMEONLY_1781235118");
    noRelatedSym_0_0.set(MaturityTime_59);
    Instrument_59.insert(MaturityTime_59.getString());
    FIX::MinPriceIncrement MinPriceIncrement_59;
    MinPriceIncrement_59.setString("14485384");
    noRelatedSym_0_0.set(MinPriceIncrement_59);
    Instrument_59.insert(MinPriceIncrement_59.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_59;
    MinPriceIncrementAmount_59.setString("7193588");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_59);
    Instrument_59.insert(MinPriceIncrementAmount_59.getString());
    FIX::NTPositionLimit NTPositionLimit_59(1919554766);
    noRelatedSym_0_0.set(NTPositionLimit_59);
    Instrument_59.insert(NTPositionLimit_59.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_59;
    NotionalPercentageOutstanding_59.setString("59.230000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_59);
    Instrument_59.insert(NotionalPercentageOutstanding_59.getString());
    FIX::OptAttribute OptAttribute_59('1');
    noRelatedSym_0_0.set(OptAttribute_59);
    Instrument_59.insert(OptAttribute_59.getString());
    FIX::OptPayoutAmount OptPayoutAmount_59;
    OptPayoutAmount_59.setString("12396358");
    noRelatedSym_0_0.set(OptPayoutAmount_59);
    Instrument_59.insert(OptPayoutAmount_59.getString());
    FIX::OptPayoutType OptPayoutType_59(2);
    noRelatedSym_0_0.set(OptPayoutType_59);
    Instrument_59.insert(OptPayoutType_59.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_59;
    OriginalNotionalPercentageOutstanding_59.setString("97.350000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_59);
    Instrument_59.insert(OriginalNotionalPercentageOutstanding_59.getString());
    FIX::Pool Pool_59("STRING_363696905");
    noRelatedSym_0_0.set(Pool_59);
    Instrument_59.insert(Pool_59.getString());
    FIX::PositionLimit PositionLimit_59(1934450267);
    noRelatedSym_0_0.set(PositionLimit_59);
    Instrument_59.insert(PositionLimit_59.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_59("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_59);
    Instrument_59.insert(PriceQuoteMethod_59.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_59("STRING_1934571975");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_59);
    Instrument_59.insert(PriceUnitOfMeasure_59.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_59;
    PriceUnitOfMeasureQty_59.setString("6728380");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_59);
    Instrument_59.insert(PriceUnitOfMeasureQty_59.getString());
    FIX::Product Product_61(2);
    noRelatedSym_0_0.set(Product_61);
    Instrument_59.insert(Product_61.getString());
    FIX::ProductComplex ProductComplex_59("STRING_595048402");
    noRelatedSym_0_0.set(ProductComplex_59);
    Instrument_59.insert(ProductComplex_59.getString());
    FIX::PutOrCall PutOrCall_59(0);
    noRelatedSym_0_0.set(PutOrCall_59);
    Instrument_59.insert(PutOrCall_59.getString());
    FIX::RedemptionDate RedemptionDate_59("LOCALMKTDATE_42211611");
    noRelatedSym_0_0.set(RedemptionDate_59);
    Instrument_59.insert(RedemptionDate_59.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_59("STRING_717850963");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_59);
    Instrument_59.insert(RepoCollateralSecurityType_59.getString());
    FIX::RepurchaseRate RepurchaseRate_59;
    RepurchaseRate_59.setString("66.420000");
    noRelatedSym_0_0.set(RepurchaseRate_59);
    Instrument_59.insert(RepurchaseRate_59.getString());
    FIX::RepurchaseTerm RepurchaseTerm_59(226659877);
    noRelatedSym_0_0.set(RepurchaseTerm_59);
    Instrument_59.insert(RepurchaseTerm_59.getString());
    FIX::RestructuringType RestructuringType_59("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_59);
    Instrument_59.insert(RestructuringType_59.getString());
    FIX::SecurityDesc SecurityDesc_59("STRING_560933234");
    noRelatedSym_0_0.set(SecurityDesc_59);
    Instrument_59.insert(SecurityDesc_59.getString());
    FIX::SecurityExchange SecurityExchange_59("EXCHANGE_322227621");
    noRelatedSym_0_0.set(SecurityExchange_59);
    Instrument_59.insert(SecurityExchange_59.getString());
    FIX::SecurityGroup SecurityGroup_59("STRING_1291987775");
    noRelatedSym_0_0.set(SecurityGroup_59);
    Instrument_59.insert(SecurityGroup_59.getString());
    FIX::SecurityID SecurityID_59("STRING_1455733714");
    noRelatedSym_0_0.set(SecurityID_59);
    Instrument_59.insert(SecurityID_59.getString());
    FIX::SecurityIDSource SecurityIDSource_59("STRING_K");
    noRelatedSym_0_0.set(SecurityIDSource_59);
    Instrument_59.insert(SecurityIDSource_59.getString());
    FIX::SecurityStatus SecurityStatus_59("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_59);
    Instrument_59.insert(SecurityStatus_59.getString());
    FIX::SecuritySubType SecuritySubType_60("STRING_1761435849");
    noRelatedSym_0_0.set(SecuritySubType_60);
    Instrument_59.insert(SecuritySubType_60.getString());
    FIX::SecurityType SecurityType_61("STRING_MIO");
    noRelatedSym_0_0.set(SecurityType_61);
    Instrument_59.insert(SecurityType_61.getString());
    FIX::Seniority Seniority_59("STRING_SD");
    noRelatedSym_0_0.set(Seniority_59);
    Instrument_59.insert(Seniority_59.getString());
    FIX::SettlMethod SettlMethod_59('P');
    noRelatedSym_0_0.set(SettlMethod_59);
    Instrument_59.insert(SettlMethod_59.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_59("STRING_1678678137");
    noRelatedSym_0_0.set(SettleOnOpenFlag_59);
    Instrument_59.insert(SettleOnOpenFlag_59.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_59("STRING_1484394810");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_59);
    Instrument_59.insert(StateOrProvinceOfIssue_59.getString());
    FIX::StrikeCurrency StrikeCurrency_59("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_59);
    Instrument_59.insert(StrikeCurrency_59.getString());
    FIX::StrikeMultiplier StrikeMultiplier_59;
    StrikeMultiplier_59.setString("11966606");
    noRelatedSym_0_0.set(StrikeMultiplier_59);
    Instrument_59.insert(StrikeMultiplier_59.getString());
    FIX::StrikePrice StrikePrice_59;
    StrikePrice_59.setString("2594106");
    noRelatedSym_0_0.set(StrikePrice_59);
    Instrument_59.insert(StrikePrice_59.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_59(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_59);
    Instrument_59.insert(StrikePriceBoundaryMethod_59.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_59;
    StrikePriceBoundaryPrecision_59.setString("66.990000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_59);
    Instrument_59.insert(StrikePriceBoundaryPrecision_59.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_59(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_59);
    Instrument_59.insert(StrikePriceDeterminationMethod_59.getString());
    FIX::StrikeValue StrikeValue_59;
    StrikeValue_59.setString("17683695");
    noRelatedSym_0_0.set(StrikeValue_59);
    Instrument_59.insert(StrikeValue_59.getString());
    FIX::Symbol Symbol_59("STRING_893242455");
    noRelatedSym_0_0.set(Symbol_59);
    Instrument_59.insert(Symbol_59.getString());
    FIX::SymbolSfx SymbolSfx_59("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_59);
    Instrument_59.insert(SymbolSfx_59.getString());
    FIX::TimeUnit TimeUnit_59("STRING_H");
    noRelatedSym_0_0.set(TimeUnit_59);
    Instrument_59.insert(TimeUnit_59.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_59(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_59);
    Instrument_59.insert(UnderlyingPriceDeterminationMethod_59.getString());
    FIX::UnitOfMeasure UnitOfMeasure_59("STRING_Bcf");
    noRelatedSym_0_0.set(UnitOfMeasure_59);
    Instrument_59.insert(UnitOfMeasure_59.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_59;
    UnitOfMeasureQty_59.setString("17315474");
    noRelatedSym_0_0.set(UnitOfMeasureQty_59);
    Instrument_59.insert(UnitOfMeasureQty_59.getString());
    FIX::ValuationMethod ValuationMethod_59("STRING_FUTDA");
    noRelatedSym_0_0.set(ValuationMethod_59);
    Instrument_59.insert(ValuationMethod_59.getString());
    all_values.push_back(Instrument_59);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_114;
      FIX::ComplexEventCondition ComplexEventCondition_114(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_114);
      ComplexEvents_NoComplexEvents_114.insert(ComplexEventCondition_114.getString());
      FIX::ComplexEventPrice ComplexEventPrice_114;
      ComplexEventPrice_114.setString("607782");
      noComplexEvents_0_1_0.set(ComplexEventPrice_114);
      ComplexEvents_NoComplexEvents_114.insert(ComplexEventPrice_114.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_114(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_114);
      ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceBoundaryMethod_114.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_114;
      ComplexEventPriceBoundaryPrecision_114.setString("36.920000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_114);
      ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceBoundaryPrecision_114.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_114(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_114);
      ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceTimeType_114.getString());
      FIX::ComplexEventType ComplexEventType_114(1);
      noComplexEvents_0_1_0.set(ComplexEventType_114);
      ComplexEvents_NoComplexEvents_114.insert(ComplexEventType_114.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_114;
      ComplexOptPayoutAmount_114.setString("3991137");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_114);
      ComplexEvents_NoComplexEvents_114.insert(ComplexOptPayoutAmount_114.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_114);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_235;
        FIX::ComplexEventEndDate ComplexEventEndDate_235(FIX::UTCTIMESTAMP(23, 29, 16, 27, 72002));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_235);
        ComplexEventDates_NoComplexEventDates_235.insert(ComplexEventEndDate_235.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_235(FIX::UTCTIMESTAMP(15, 10, 40, 24, 22005));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_235);
        ComplexEventDates_NoComplexEventDates_235.insert(ComplexEventStartDate_235.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_235);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_460;
          FIX::ComplexEventEndTime ComplexEventEndTime_460(FIX::UTCTIMEONLY(14, 10, 44));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_460);
          ComplexEventTimes_NoComplexEventTimes_460.insert(ComplexEventEndTime_460.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_460(FIX::UTCTIMEONLY(14, 3, 42));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_460);
          ComplexEventTimes_NoComplexEventTimes_460.insert(ComplexEventStartTime_460.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_460);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_461;
          FIX::ComplexEventEndTime ComplexEventEndTime_461(FIX::UTCTIMEONLY(11, 1, 16));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_461);
          ComplexEventTimes_NoComplexEventTimes_461.insert(ComplexEventEndTime_461.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_461(FIX::UTCTIMEONLY(19, 7, 32));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_461);
          ComplexEventTimes_NoComplexEventTimes_461.insert(ComplexEventStartTime_461.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_461);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_115;
      FIX::ComplexEventCondition ComplexEventCondition_115(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_115);
      ComplexEvents_NoComplexEvents_115.insert(ComplexEventCondition_115.getString());
      FIX::ComplexEventPrice ComplexEventPrice_115;
      ComplexEventPrice_115.setString("416991");
      noComplexEvents_0_1_1.set(ComplexEventPrice_115);
      ComplexEvents_NoComplexEvents_115.insert(ComplexEventPrice_115.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_115(4);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_115);
      ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceBoundaryMethod_115.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_115;
      ComplexEventPriceBoundaryPrecision_115.setString("69.420000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_115);
      ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceBoundaryPrecision_115.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_115(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_115);
      ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceTimeType_115.getString());
      FIX::ComplexEventType ComplexEventType_115(7);
      noComplexEvents_0_1_1.set(ComplexEventType_115);
      ComplexEvents_NoComplexEvents_115.insert(ComplexEventType_115.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_115;
      ComplexOptPayoutAmount_115.setString("7080010");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_115);
      ComplexEvents_NoComplexEvents_115.insert(ComplexOptPayoutAmount_115.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_115);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_236;
        FIX::ComplexEventEndDate ComplexEventEndDate_236(FIX::UTCTIMESTAMP(7, 47, 27, 8, 52013));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_236);
        ComplexEventDates_NoComplexEventDates_236.insert(ComplexEventEndDate_236.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_236(FIX::UTCTIMESTAMP(22, 30, 49, 23, 92011));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_236);
        ComplexEventDates_NoComplexEventDates_236.insert(ComplexEventStartDate_236.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_236);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_462;
          FIX::ComplexEventEndTime ComplexEventEndTime_462(FIX::UTCTIMEONLY(16, 34, 41));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_462);
          ComplexEventTimes_NoComplexEventTimes_462.insert(ComplexEventEndTime_462.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_462(FIX::UTCTIMEONLY(5, 48, 25));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_462);
          ComplexEventTimes_NoComplexEventTimes_462.insert(ComplexEventStartTime_462.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_462);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_463;
          FIX::ComplexEventEndTime ComplexEventEndTime_463(FIX::UTCTIMEONLY(19, 19, 41));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_463);
          ComplexEventTimes_NoComplexEventTimes_463.insert(ComplexEventEndTime_463.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_463(FIX::UTCTIMEONLY(11, 34, 7));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_463);
          ComplexEventTimes_NoComplexEventTimes_463.insert(ComplexEventStartTime_463.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_463);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_464;
          FIX::ComplexEventEndTime ComplexEventEndTime_464(FIX::UTCTIMEONLY(17, 54, 37));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_464);
          ComplexEventTimes_NoComplexEventTimes_464.insert(ComplexEventEndTime_464.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_464(FIX::UTCTIMEONLY(14, 48, 30));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_464);
          ComplexEventTimes_NoComplexEventTimes_464.insert(ComplexEventStartTime_464.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_464);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_237;
        FIX::ComplexEventEndDate ComplexEventEndDate_237(FIX::UTCTIMESTAMP(22, 12, 32, 19, 62011));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_237);
        ComplexEventDates_NoComplexEventDates_237.insert(ComplexEventEndDate_237.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_237(FIX::UTCTIMESTAMP(1, 39, 13, 19, 12002));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_237);
        ComplexEventDates_NoComplexEventDates_237.insert(ComplexEventStartDate_237.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_237);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_465;
          FIX::ComplexEventEndTime ComplexEventEndTime_465(FIX::UTCTIMEONLY(9, 19, 9));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_465);
          ComplexEventTimes_NoComplexEventTimes_465.insert(ComplexEventEndTime_465.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_465(FIX::UTCTIMEONLY(22, 43, 48));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_465);
          ComplexEventTimes_NoComplexEventTimes_465.insert(ComplexEventStartTime_465.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_465);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_466;
          FIX::ComplexEventEndTime ComplexEventEndTime_466(FIX::UTCTIMEONLY(16, 34, 21));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_466);
          ComplexEventTimes_NoComplexEventTimes_466.insert(ComplexEventEndTime_466.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_466(FIX::UTCTIMEONLY(5, 2, 44));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_466);
          ComplexEventTimes_NoComplexEventTimes_466.insert(ComplexEventStartTime_466.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_466);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_467;
          FIX::ComplexEventEndTime ComplexEventEndTime_467(FIX::UTCTIMEONLY(12, 56, 30));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_467);
          ComplexEventTimes_NoComplexEventTimes_467.insert(ComplexEventEndTime_467.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_467(FIX::UTCTIMEONLY(17, 35, 43));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_467);
          ComplexEventTimes_NoComplexEventTimes_467.insert(ComplexEventStartTime_467.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_467);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_238;
        FIX::ComplexEventEndDate ComplexEventEndDate_238(FIX::UTCTIMESTAMP(18, 49, 18, 26, 82014));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_238);
        ComplexEventDates_NoComplexEventDates_238.insert(ComplexEventEndDate_238.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_238(FIX::UTCTIMESTAMP(8, 38, 44, 13, 12007));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_238);
        ComplexEventDates_NoComplexEventDates_238.insert(ComplexEventStartDate_238.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_238);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_468;
          FIX::ComplexEventEndTime ComplexEventEndTime_468(FIX::UTCTIMEONLY(4, 36, 2));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_468);
          ComplexEventTimes_NoComplexEventTimes_468.insert(ComplexEventEndTime_468.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_468(FIX::UTCTIMEONLY(17, 4, 22));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_468);
          ComplexEventTimes_NoComplexEventTimes_468.insert(ComplexEventStartTime_468.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_468);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_469;
          FIX::ComplexEventEndTime ComplexEventEndTime_469(FIX::UTCTIMEONLY(5, 11, 5));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_469);
          ComplexEventTimes_NoComplexEventTimes_469.insert(ComplexEventEndTime_469.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_469(FIX::UTCTIMEONLY(4, 40, 56));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_469);
          ComplexEventTimes_NoComplexEventTimes_469.insert(ComplexEventStartTime_469.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_469);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_470;
          FIX::ComplexEventEndTime ComplexEventEndTime_470(FIX::UTCTIMEONLY(2, 45, 49));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventEndTime_470);
          ComplexEventTimes_NoComplexEventTimes_470.insert(ComplexEventEndTime_470.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_470(FIX::UTCTIMEONLY(4, 16, 19));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventStartTime_470);
          ComplexEventTimes_NoComplexEventTimes_470.insert(ComplexEventStartTime_470.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_470);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_117;
      FIX::EventDate EventDate_117("LOCALMKTDATE_1193396566");
      noEvents_0_1_0.set(EventDate_117);
      EvntGrp_NoEvents_117.insert(EventDate_117.getString());
      FIX::EventPx EventPx_117;
      EventPx_117.setString("18533731");
      noEvents_0_1_0.set(EventPx_117);
      EvntGrp_NoEvents_117.insert(EventPx_117.getString());
      FIX::EventText EventText_117("STRING_1630489153");
      noEvents_0_1_0.set(EventText_117);
      EvntGrp_NoEvents_117.insert(EventText_117.getString());
      FIX::EventTime EventTime_117(FIX::UTCTIMESTAMP(19, 7, 39, 23, 92016));
      noEvents_0_1_0.set(EventTime_117);
      EvntGrp_NoEvents_117.insert(EventTime_117.getString());
      FIX::EventType EventType_117(2);
      noEvents_0_1_0.set(EventType_117);
      EvntGrp_NoEvents_117.insert(EventType_117.getString());
      all_values.push_back(EvntGrp_NoEvents_117);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_108;
      FIX::InstrumentPartyID InstrumentPartyID_108("STRING_1742438378");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_108);
      InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyID_108.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_108('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_108);
      InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyIDSource_108.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_108(830062625);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_108);
      InstrumentParties_NoInstrumentParties_108.insert(InstrumentPartyRole_108.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_108);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211;
        FIX::InstrumentPartySubID InstrumentPartySubID_211("STRING_2130192746");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_211);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211.insert(InstrumentPartySubID_211.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_211(1132374010);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_211);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211.insert(InstrumentPartySubIDType_211.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212;
        FIX::InstrumentPartySubID InstrumentPartySubID_212("STRING_1884128528");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_212);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212.insert(InstrumentPartySubID_212.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_212(1382848583);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_212);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212.insert(InstrumentPartySubIDType_212.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213;
        FIX::InstrumentPartySubID InstrumentPartySubID_213("STRING_1105288603");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_213);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213.insert(InstrumentPartySubID_213.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_213(2112051004);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_213);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213.insert(InstrumentPartySubIDType_213.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_109;
      FIX::InstrumentPartyID InstrumentPartyID_109("STRING_809332494");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_109);
      InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyID_109.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_109('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_109);
      InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyIDSource_109.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_109(1158458561);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_109);
      InstrumentParties_NoInstrumentParties_109.insert(InstrumentPartyRole_109.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_109);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214;
        FIX::InstrumentPartySubID InstrumentPartySubID_214("STRING_2075964666");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_214);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214.insert(InstrumentPartySubID_214.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_214(622960981);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_214);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214.insert(InstrumentPartySubIDType_214.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215;
        FIX::InstrumentPartySubID InstrumentPartySubID_215("STRING_847351552");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_215);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215.insert(InstrumentPartySubID_215.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_215(1957141998);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_215);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215.insert(InstrumentPartySubIDType_215.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216;
        FIX::InstrumentPartySubID InstrumentPartySubID_216("STRING_338550953");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_216);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216.insert(InstrumentPartySubID_216.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_216(2040748118);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_216);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216.insert(InstrumentPartySubIDType_216.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_110;
      FIX::InstrumentPartyID InstrumentPartyID_110("STRING_1663031525");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_110);
      InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyID_110.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_110('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_110);
      InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyIDSource_110.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_110(1030703180);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_110);
      InstrumentParties_NoInstrumentParties_110.insert(InstrumentPartyRole_110.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_110);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217;
        FIX::InstrumentPartySubID InstrumentPartySubID_217("STRING_149621226");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_217);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217.insert(InstrumentPartySubID_217.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_217(868195252);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_217);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217.insert(InstrumentPartySubIDType_217.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218;
        FIX::InstrumentPartySubID InstrumentPartySubID_218("STRING_1612980087");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_218);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218.insert(InstrumentPartySubID_218.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_218(84672942);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_218);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218.insert(InstrumentPartySubIDType_218.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_120;
      FIX::SecurityAltID SecurityAltID_120("STRING_1421465540");
      noSecurityAltID_0_1_0.set(SecurityAltID_120);
      SecAltIDGrp_NoSecurityAltID_120.insert(SecurityAltID_120.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_120("STRING_2096372291");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_120);
      SecAltIDGrp_NoSecurityAltID_120.insert(SecurityAltIDSource_120.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_120);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_121;
      FIX::SecurityAltID SecurityAltID_121("STRING_1073019536");
      noSecurityAltID_0_1_1.set(SecurityAltID_121);
      SecAltIDGrp_NoSecurityAltID_121.insert(SecurityAltID_121.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_121("STRING_732620788");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_121);
      SecAltIDGrp_NoSecurityAltID_121.insert(SecurityAltIDSource_121.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_121);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_122;
      FIX::SecurityAltID SecurityAltID_122("STRING_778951268");
      noSecurityAltID_0_1_2.set(SecurityAltID_122);
      SecAltIDGrp_NoSecurityAltID_122.insert(SecurityAltID_122.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_122("STRING_287268336");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_122);
      SecAltIDGrp_NoSecurityAltID_122.insert(SecurityAltIDSource_122.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_122);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_118;
    FIX::SecurityXML SecurityXML_119("XMLDATA_715329886");
    noRelatedSym_0_0.set(SecurityXML_119);
    FIX::SecurityXMLLen SecurityXMLLen_59(1911325279);
    noRelatedSym_0_0.set(SecurityXMLLen_59);
    FIX::SecurityXMLSchema SecurityXMLSchema_59("STRING_23913216");
    noRelatedSym_0_0.set(SecurityXMLSchema_59);
    SecurityXML_118.insert(SecurityXMLSchema_59.getString());
    all_values.push_back(SecurityXML_118);

    // OrderQtyData
    multiset<string> OrderQtyData_20;
    FIX::CashOrderQty CashOrderQty_20;
    CashOrderQty_20.setString("20981784");
    noRelatedSym_0_0.set(CashOrderQty_20);
    OrderQtyData_20.insert(CashOrderQty_20.getString());
    FIX::OrderPercent OrderPercent_20;
    OrderPercent_20.setString("2.340000");
    noRelatedSym_0_0.set(OrderPercent_20);
    OrderQtyData_20.insert(OrderPercent_20.getString());
    FIX::OrderQty OrderQty_29;
    OrderQty_29.setString("21359642");
    noRelatedSym_0_0.set(OrderQty_29);
    OrderQtyData_20.insert(OrderQty_29.getString());
    FIX::RoundingDirection RoundingDirection_20('2');
    noRelatedSym_0_0.set(RoundingDirection_20);
    OrderQtyData_20.insert(RoundingDirection_20.getString());
    FIX::RoundingModulus RoundingModulus_20;
    RoundingModulus_20.setString("131402");
    noRelatedSym_0_0.set(RoundingModulus_20);
    OrderQtyData_20.insert(RoundingModulus_20.getString());
    all_values.push_back(OrderQtyData_20);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_110;
      FIX::PartyID PartyID_110("STRING_1635258280");
      noPartyIDs_0_1_0.set(PartyID_110);
      Parties_NoPartyIDs_110.insert(PartyID_110.getString());
      FIX::PartyIDSource PartyIDSource_110('8');
      noPartyIDs_0_1_0.set(PartyIDSource_110);
      Parties_NoPartyIDs_110.insert(PartyIDSource_110.getString());
      FIX::PartyRole PartyRole_110(40);
      noPartyIDs_0_1_0.set(PartyRole_110);
      Parties_NoPartyIDs_110.insert(PartyRole_110.getString());
      all_values.push_back(Parties_NoPartyIDs_110);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_215;
        FIX::PartySubID PartySubID_215("STRING_1898763264");
        noPartySubIDs_0_0_2_0.set(PartySubID_215);
        PtysSubGrp_NoPartySubIDs_215.insert(PartySubID_215.getString());
        FIX::PartySubIDType PartySubIDType_215(20);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_215);
        PtysSubGrp_NoPartySubIDs_215.insert(PartySubIDType_215.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_215);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_111;
      FIX::PartyID PartyID_111("STRING_228390654");
      noPartyIDs_0_1_1.set(PartyID_111);
      Parties_NoPartyIDs_111.insert(PartyID_111.getString());
      FIX::PartyIDSource PartyIDSource_111('9');
      noPartyIDs_0_1_1.set(PartyIDSource_111);
      Parties_NoPartyIDs_111.insert(PartyIDSource_111.getString());
      FIX::PartyRole PartyRole_111(6);
      noPartyIDs_0_1_1.set(PartyRole_111);
      Parties_NoPartyIDs_111.insert(PartyRole_111.getString());
      all_values.push_back(Parties_NoPartyIDs_111);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_216;
        FIX::PartySubID PartySubID_216("STRING_1978549526");
        noPartySubIDs_0_1_2_0.set(PartySubID_216);
        PtysSubGrp_NoPartySubIDs_216.insert(PartySubID_216.getString());
        FIX::PartySubIDType PartySubIDType_216(3);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_216);
        PtysSubGrp_NoPartySubIDs_216.insert(PartySubIDType_216.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_216);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_217;
        FIX::PartySubID PartySubID_217("STRING_2127289086");
        noPartySubIDs_0_1_2_1.set(PartySubID_217);
        PtysSubGrp_NoPartySubIDs_217.insert(PartySubID_217.getString());
        FIX::PartySubIDType PartySubIDType_217(22);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_217);
        PtysSubGrp_NoPartySubIDs_217.insert(PartySubIDType_217.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_217);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_218;
        FIX::PartySubID PartySubID_218("STRING_16818045");
        noPartySubIDs_0_1_2_2.set(PartySubID_218);
        PtysSubGrp_NoPartySubIDs_218.insert(PartySubID_218.getString());
        FIX::PartySubIDType PartySubIDType_218(7);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_218);
        PtysSubGrp_NoPartySubIDs_218.insert(PartySubIDType_218.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_218);

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
      FIX::QuoteQualifier QuoteQualifier_3('2');
      noQuoteQualifiers_0_1_0.set(QuoteQualifier_3);
      QuotQualGrp_NoQuoteQualifiers_3.insert(QuoteQualifier_3.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_3);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_4;
      FIX::QuoteQualifier QuoteQualifier_4('3');
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
      FIX::LegOrderQty LegOrderQty_6;
      LegOrderQty_6.setString("7446579");
      noLegs_0_1_0.set(LegOrderQty_6);
      QuotReqLegsGrp_NoLegs_0.insert(LegOrderQty_6.getString());
      FIX::LegQty LegQty_6;
      LegQty_6.setString("6706744");
      noLegs_0_1_0.set(LegQty_6);
      QuotReqLegsGrp_NoLegs_0.insert(LegQty_6.getString());
      FIX::LegRefID LegRefID_6("STRING_18494884");
      noLegs_0_1_0.set(LegRefID_6);
      QuotReqLegsGrp_NoLegs_0.insert(LegRefID_6.getString());
      FIX::LegSettlDate LegSettlDate_6("LOCALMKTDATE_508499588");
      noLegs_0_1_0.set(LegSettlDate_6);
      QuotReqLegsGrp_NoLegs_0.insert(LegSettlDate_6.getString());
      FIX::LegSettlType LegSettlType_6('6');
      noLegs_0_1_0.set(LegSettlType_6);
      QuotReqLegsGrp_NoLegs_0.insert(LegSettlType_6.getString());
      FIX::LegSwapType LegSwapType_6(4);
      noLegs_0_1_0.set(LegSwapType_6);
      QuotReqLegsGrp_NoLegs_0.insert(LegSwapType_6.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_75;
      FIX::EncodedLegIssuer EncodedLegIssuer_75("DATA_1377629822");
      noLegs_0_1_0.set(EncodedLegIssuer_75);
      InstrumentLeg_75.insert(EncodedLegIssuer_75.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_75(683068257);
      noLegs_0_1_0.set(EncodedLegIssuerLen_75);
      InstrumentLeg_75.insert(EncodedLegIssuerLen_75.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_75("DATA_729217022");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_75);
      InstrumentLeg_75.insert(EncodedLegSecurityDesc_75.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_75(1390770070);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_75);
      InstrumentLeg_75.insert(EncodedLegSecurityDescLen_75.getString());
      FIX::LegCFICode LegCFICode_75("STRING_1830007390");
      noLegs_0_1_0.set(LegCFICode_75);
      InstrumentLeg_75.insert(LegCFICode_75.getString());
      FIX::LegContractMultiplier LegContractMultiplier_75;
      LegContractMultiplier_75.setString("2169916");
      noLegs_0_1_0.set(LegContractMultiplier_75);
      InstrumentLeg_75.insert(LegContractMultiplier_75.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_75(1332391336);
      noLegs_0_1_0.set(LegContractMultiplierUnit_75);
      InstrumentLeg_75.insert(LegContractMultiplierUnit_75.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_75("MONTHYEAR_1452423856");
      noLegs_0_1_0.set(LegContractSettlMonth_75);
      InstrumentLeg_75.insert(LegContractSettlMonth_75.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_75("COUNTRY_552117838");
      noLegs_0_1_0.set(LegCountryOfIssue_75);
      InstrumentLeg_75.insert(LegCountryOfIssue_75.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_75("LOCALMKTDATE_1083670952");
      noLegs_0_1_0.set(LegCouponPaymentDate_75);
      InstrumentLeg_75.insert(LegCouponPaymentDate_75.getString());
      FIX::LegCouponRate LegCouponRate_75;
      LegCouponRate_75.setString("12.750000");
      noLegs_0_1_0.set(LegCouponRate_75);
      InstrumentLeg_75.insert(LegCouponRate_75.getString());
      FIX::LegCreditRating LegCreditRating_75("STRING_780508492");
      noLegs_0_1_0.set(LegCreditRating_75);
      InstrumentLeg_75.insert(LegCreditRating_75.getString());
      FIX::LegCurrency LegCurrency_75("USD");
      noLegs_0_1_0.set(LegCurrency_75);
      InstrumentLeg_75.insert(LegCurrency_75.getString());
      FIX::LegDatedDate LegDatedDate_75("LOCALMKTDATE_2039602326");
      noLegs_0_1_0.set(LegDatedDate_75);
      InstrumentLeg_75.insert(LegDatedDate_75.getString());
      FIX::LegExerciseStyle LegExerciseStyle_75(181564323);
      noLegs_0_1_0.set(LegExerciseStyle_75);
      InstrumentLeg_75.insert(LegExerciseStyle_75.getString());
      FIX::LegFactor LegFactor_75;
      LegFactor_75.setString("11280602");
      noLegs_0_1_0.set(LegFactor_75);
      InstrumentLeg_75.insert(LegFactor_75.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_75(2019407765);
      noLegs_0_1_0.set(LegFlowScheduleType_75);
      InstrumentLeg_75.insert(LegFlowScheduleType_75.getString());
      FIX::LegInstrRegistry LegInstrRegistry_75("STRING_1625610289");
      noLegs_0_1_0.set(LegInstrRegistry_75);
      InstrumentLeg_75.insert(LegInstrRegistry_75.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_75("LOCALMKTDATE_1144878301");
      noLegs_0_1_0.set(LegInterestAccrualDate_75);
      InstrumentLeg_75.insert(LegInterestAccrualDate_75.getString());
      FIX::LegIssueDate LegIssueDate_75("LOCALMKTDATE_1329794361");
      noLegs_0_1_0.set(LegIssueDate_75);
      InstrumentLeg_75.insert(LegIssueDate_75.getString());
      FIX::LegIssuer LegIssuer_75("STRING_196154499");
      noLegs_0_1_0.set(LegIssuer_75);
      InstrumentLeg_75.insert(LegIssuer_75.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_75("STRING_1110584990");
      noLegs_0_1_0.set(LegLocaleOfIssue_75);
      InstrumentLeg_75.insert(LegLocaleOfIssue_75.getString());
      FIX::LegMaturityDate LegMaturityDate_75("LOCALMKTDATE_1713200494");
      noLegs_0_1_0.set(LegMaturityDate_75);
      InstrumentLeg_75.insert(LegMaturityDate_75.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_75("MONTHYEAR_1646803145");
      noLegs_0_1_0.set(LegMaturityMonthYear_75);
      InstrumentLeg_75.insert(LegMaturityMonthYear_75.getString());
      FIX::LegMaturityTime LegMaturityTime_75("TZTIMEONLY_1855242948");
      noLegs_0_1_0.set(LegMaturityTime_75);
      InstrumentLeg_75.insert(LegMaturityTime_75.getString());
      FIX::LegOptAttribute LegOptAttribute_75('2');
      noLegs_0_1_0.set(LegOptAttribute_75);
      InstrumentLeg_75.insert(LegOptAttribute_75.getString());
      FIX::LegOptionRatio LegOptionRatio_75;
      LegOptionRatio_75.setString("16652980");
      noLegs_0_1_0.set(LegOptionRatio_75);
      InstrumentLeg_75.insert(LegOptionRatio_75.getString());
      FIX::LegPool LegPool_75("STRING_216258888");
      noLegs_0_1_0.set(LegPool_75);
      InstrumentLeg_75.insert(LegPool_75.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_75("STRING_930979000");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_75);
      InstrumentLeg_75.insert(LegPriceUnitOfMeasure_75.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_75;
      LegPriceUnitOfMeasureQty_75.setString("16344877");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_75);
      InstrumentLeg_75.insert(LegPriceUnitOfMeasureQty_75.getString());
      FIX::LegProduct LegProduct_75(1593888711);
      noLegs_0_1_0.set(LegProduct_75);
      InstrumentLeg_75.insert(LegProduct_75.getString());
      FIX::LegPutOrCall LegPutOrCall_75(1614047257);
      noLegs_0_1_0.set(LegPutOrCall_75);
      InstrumentLeg_75.insert(LegPutOrCall_75.getString());
      FIX::LegRatioQty LegRatioQty_75;
      LegRatioQty_75.setString("2162211");
      noLegs_0_1_0.set(LegRatioQty_75);
      InstrumentLeg_75.insert(LegRatioQty_75.getString());
      FIX::LegRedemptionDate LegRedemptionDate_75("LOCALMKTDATE_837175133");
      noLegs_0_1_0.set(LegRedemptionDate_75);
      InstrumentLeg_75.insert(LegRedemptionDate_75.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_75("STRING_1296570999");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_75);
      InstrumentLeg_75.insert(LegRepoCollateralSecurityType_75.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_75;
      LegRepurchaseRate_75.setString("27.630000");
      noLegs_0_1_0.set(LegRepurchaseRate_75);
      InstrumentLeg_75.insert(LegRepurchaseRate_75.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_75(22082821);
      noLegs_0_1_0.set(LegRepurchaseTerm_75);
      InstrumentLeg_75.insert(LegRepurchaseTerm_75.getString());
      FIX::LegSecurityDesc LegSecurityDesc_75("STRING_601511207");
      noLegs_0_1_0.set(LegSecurityDesc_75);
      InstrumentLeg_75.insert(LegSecurityDesc_75.getString());
      FIX::LegSecurityExchange LegSecurityExchange_75("EXCHANGE_985330601");
      noLegs_0_1_0.set(LegSecurityExchange_75);
      InstrumentLeg_75.insert(LegSecurityExchange_75.getString());
      FIX::LegSecurityID LegSecurityID_75("STRING_1105753773");
      noLegs_0_1_0.set(LegSecurityID_75);
      InstrumentLeg_75.insert(LegSecurityID_75.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_75("STRING_2014902482");
      noLegs_0_1_0.set(LegSecurityIDSource_75);
      InstrumentLeg_75.insert(LegSecurityIDSource_75.getString());
      FIX::LegSecuritySubType LegSecuritySubType_75("STRING_1765839093");
      noLegs_0_1_0.set(LegSecuritySubType_75);
      InstrumentLeg_75.insert(LegSecuritySubType_75.getString());
      FIX::LegSecurityType LegSecurityType_75("STRING_1456252218");
      noLegs_0_1_0.set(LegSecurityType_75);
      InstrumentLeg_75.insert(LegSecurityType_75.getString());
      FIX::LegSide LegSide_75('1');
      noLegs_0_1_0.set(LegSide_75);
      InstrumentLeg_75.insert(LegSide_75.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_75("STRING_1657957772");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_75);
      InstrumentLeg_75.insert(LegStateOrProvinceOfIssue_75.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_75("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_75);
      InstrumentLeg_75.insert(LegStrikeCurrency_75.getString());
      FIX::LegStrikePrice LegStrikePrice_75;
      LegStrikePrice_75.setString("15298818");
      noLegs_0_1_0.set(LegStrikePrice_75);
      InstrumentLeg_75.insert(LegStrikePrice_75.getString());
      FIX::LegSymbol LegSymbol_75("STRING_1115943183");
      noLegs_0_1_0.set(LegSymbol_75);
      InstrumentLeg_75.insert(LegSymbol_75.getString());
      FIX::LegSymbolSfx LegSymbolSfx_75("STRING_1188788896");
      noLegs_0_1_0.set(LegSymbolSfx_75);
      InstrumentLeg_75.insert(LegSymbolSfx_75.getString());
      FIX::LegTimeUnit LegTimeUnit_75("STRING_712192602");
      noLegs_0_1_0.set(LegTimeUnit_75);
      InstrumentLeg_75.insert(LegTimeUnit_75.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_75("STRING_1312097682");
      noLegs_0_1_0.set(LegUnitOfMeasure_75);
      InstrumentLeg_75.insert(LegUnitOfMeasure_75.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_75;
      LegUnitOfMeasureQty_75.setString("1518902");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_75);
      InstrumentLeg_75.insert(LegUnitOfMeasureQty_75.getString());
      all_values.push_back(InstrumentLeg_75);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_133;
        FIX::LegSecurityAltID LegSecurityAltID_133("STRING_811417179");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_133);
        LegSecAltIDGrp_NoLegSecurityAltID_133.insert(LegSecurityAltID_133.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_133("STRING_2007133187");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_133);
        LegSecAltIDGrp_NoLegSecurityAltID_133.insert(LegSecurityAltIDSource_133.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_133);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_1;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_1("JPY");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_1);
      LegBenchmarkCurveData_1.insert(LegBenchmarkCurveCurrency_1.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_1("STRING_75908427");
      noLegs_0_1_0.set(LegBenchmarkCurveName_1);
      LegBenchmarkCurveData_1.insert(LegBenchmarkCurveName_1.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_1("STRING_1445279765");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_1);
      LegBenchmarkCurveData_1.insert(LegBenchmarkCurvePoint_1.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_1;
      LegBenchmarkPrice_1.setString("19637192");
      noLegs_0_1_0.set(LegBenchmarkPrice_1);
      LegBenchmarkCurveData_1.insert(LegBenchmarkPrice_1.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_1(1669797138);
      noLegs_0_1_0.set(LegBenchmarkPriceType_1);
      LegBenchmarkCurveData_1.insert(LegBenchmarkPriceType_1.getString());
      all_values.push_back(LegBenchmarkCurveData_1);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_16;
        FIX::LegStipulationType LegStipulationType_16("STRING_32456757");
        noLegStipulations_0_0_2_0.set(LegStipulationType_16);
        LegStipulations_NoLegStipulations_16.insert(LegStipulationType_16.getString());
        FIX::LegStipulationValue LegStipulationValue_16("STRING_359488623");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_16);
        LegStipulations_NoLegStipulations_16.insert(LegStipulationValue_16.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_16);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_17;
        FIX::LegStipulationType LegStipulationType_17("STRING_60930726");
        noLegStipulations_0_0_2_1.set(LegStipulationType_17);
        LegStipulations_NoLegStipulations_17.insert(LegStipulationType_17.getString());
        FIX::LegStipulationValue LegStipulationValue_17("STRING_465669521");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_17);
        LegStipulations_NoLegStipulations_17.insert(LegStipulationValue_17.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_17);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_98;
        FIX::NestedPartyID NestedPartyID_98("STRING_662441933");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_98);
        NestedParties_NoNestedPartyIDs_98.insert(NestedPartyID_98.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_98('1');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_98);
        NestedParties_NoNestedPartyIDs_98.insert(NestedPartyIDSource_98.getString());
        FIX::NestedPartyRole NestedPartyRole_98(1487325217);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_98);
        NestedParties_NoNestedPartyIDs_98.insert(NestedPartyRole_98.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_98);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_187;
          FIX::NestedPartySubID NestedPartySubID_187("STRING_1069355568");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_187);
          NstdPtysSubGrp_NoNestedPartySubIDs_187.insert(NestedPartySubID_187.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_187(796093788);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_187);
          NstdPtysSubGrp_NoNestedPartySubIDs_187.insert(NestedPartySubIDType_187.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_187);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_99;
        FIX::NestedPartyID NestedPartyID_99("STRING_1593194755");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_99);
        NestedParties_NoNestedPartyIDs_99.insert(NestedPartyID_99.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_99('5');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_99);
        NestedParties_NoNestedPartyIDs_99.insert(NestedPartyIDSource_99.getString());
        FIX::NestedPartyRole NestedPartyRole_99(286426682);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_99);
        NestedParties_NoNestedPartyIDs_99.insert(NestedPartyRole_99.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_99);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_188;
          FIX::NestedPartySubID NestedPartySubID_188("STRING_2109711581");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_188);
          NstdPtysSubGrp_NoNestedPartySubIDs_188.insert(NestedPartySubID_188.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_188(1402369865);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_188);
          NstdPtysSubGrp_NoNestedPartySubIDs_188.insert(NestedPartySubIDType_188.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_188);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_189;
          FIX::NestedPartySubID NestedPartySubID_189("STRING_678410598");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_189);
          NstdPtysSubGrp_NoNestedPartySubIDs_189.insert(NestedPartySubID_189.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_189(674420535);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_189);
          NstdPtysSubGrp_NoNestedPartySubIDs_189.insert(NestedPartySubIDType_189.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_189);

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
      FIX::LegOrderQty LegOrderQty_7;
      LegOrderQty_7.setString("5669838");
      noLegs_0_1_1.set(LegOrderQty_7);
      QuotReqLegsGrp_NoLegs_1.insert(LegOrderQty_7.getString());
      FIX::LegQty LegQty_7;
      LegQty_7.setString("8303008");
      noLegs_0_1_1.set(LegQty_7);
      QuotReqLegsGrp_NoLegs_1.insert(LegQty_7.getString());
      FIX::LegRefID LegRefID_7("STRING_952329984");
      noLegs_0_1_1.set(LegRefID_7);
      QuotReqLegsGrp_NoLegs_1.insert(LegRefID_7.getString());
      FIX::LegSettlDate LegSettlDate_7("LOCALMKTDATE_1378401078");
      noLegs_0_1_1.set(LegSettlDate_7);
      QuotReqLegsGrp_NoLegs_1.insert(LegSettlDate_7.getString());
      FIX::LegSettlType LegSettlType_7('6');
      noLegs_0_1_1.set(LegSettlType_7);
      QuotReqLegsGrp_NoLegs_1.insert(LegSettlType_7.getString());
      FIX::LegSwapType LegSwapType_7(2);
      noLegs_0_1_1.set(LegSwapType_7);
      QuotReqLegsGrp_NoLegs_1.insert(LegSwapType_7.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_76;
      FIX::EncodedLegIssuer EncodedLegIssuer_76("DATA_1707632638");
      noLegs_0_1_1.set(EncodedLegIssuer_76);
      InstrumentLeg_76.insert(EncodedLegIssuer_76.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_76(765858804);
      noLegs_0_1_1.set(EncodedLegIssuerLen_76);
      InstrumentLeg_76.insert(EncodedLegIssuerLen_76.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_76("DATA_764426866");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_76);
      InstrumentLeg_76.insert(EncodedLegSecurityDesc_76.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_76(1523868286);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_76);
      InstrumentLeg_76.insert(EncodedLegSecurityDescLen_76.getString());
      FIX::LegCFICode LegCFICode_76("STRING_288172294");
      noLegs_0_1_1.set(LegCFICode_76);
      InstrumentLeg_76.insert(LegCFICode_76.getString());
      FIX::LegContractMultiplier LegContractMultiplier_76;
      LegContractMultiplier_76.setString("16762702");
      noLegs_0_1_1.set(LegContractMultiplier_76);
      InstrumentLeg_76.insert(LegContractMultiplier_76.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_76(1556325044);
      noLegs_0_1_1.set(LegContractMultiplierUnit_76);
      InstrumentLeg_76.insert(LegContractMultiplierUnit_76.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_76("MONTHYEAR_647660918");
      noLegs_0_1_1.set(LegContractSettlMonth_76);
      InstrumentLeg_76.insert(LegContractSettlMonth_76.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_76("COUNTRY_1737200966");
      noLegs_0_1_1.set(LegCountryOfIssue_76);
      InstrumentLeg_76.insert(LegCountryOfIssue_76.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_76("LOCALMKTDATE_2021994565");
      noLegs_0_1_1.set(LegCouponPaymentDate_76);
      InstrumentLeg_76.insert(LegCouponPaymentDate_76.getString());
      FIX::LegCouponRate LegCouponRate_76;
      LegCouponRate_76.setString("23.620000");
      noLegs_0_1_1.set(LegCouponRate_76);
      InstrumentLeg_76.insert(LegCouponRate_76.getString());
      FIX::LegCreditRating LegCreditRating_76("STRING_252159252");
      noLegs_0_1_1.set(LegCreditRating_76);
      InstrumentLeg_76.insert(LegCreditRating_76.getString());
      FIX::LegCurrency LegCurrency_76("USD");
      noLegs_0_1_1.set(LegCurrency_76);
      InstrumentLeg_76.insert(LegCurrency_76.getString());
      FIX::LegDatedDate LegDatedDate_76("LOCALMKTDATE_782020020");
      noLegs_0_1_1.set(LegDatedDate_76);
      InstrumentLeg_76.insert(LegDatedDate_76.getString());
      FIX::LegExerciseStyle LegExerciseStyle_76(247382959);
      noLegs_0_1_1.set(LegExerciseStyle_76);
      InstrumentLeg_76.insert(LegExerciseStyle_76.getString());
      FIX::LegFactor LegFactor_76;
      LegFactor_76.setString("11651677");
      noLegs_0_1_1.set(LegFactor_76);
      InstrumentLeg_76.insert(LegFactor_76.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_76(227731127);
      noLegs_0_1_1.set(LegFlowScheduleType_76);
      InstrumentLeg_76.insert(LegFlowScheduleType_76.getString());
      FIX::LegInstrRegistry LegInstrRegistry_76("STRING_827212651");
      noLegs_0_1_1.set(LegInstrRegistry_76);
      InstrumentLeg_76.insert(LegInstrRegistry_76.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_76("LOCALMKTDATE_1451594402");
      noLegs_0_1_1.set(LegInterestAccrualDate_76);
      InstrumentLeg_76.insert(LegInterestAccrualDate_76.getString());
      FIX::LegIssueDate LegIssueDate_76("LOCALMKTDATE_1864836477");
      noLegs_0_1_1.set(LegIssueDate_76);
      InstrumentLeg_76.insert(LegIssueDate_76.getString());
      FIX::LegIssuer LegIssuer_76("STRING_789440584");
      noLegs_0_1_1.set(LegIssuer_76);
      InstrumentLeg_76.insert(LegIssuer_76.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_76("STRING_706480619");
      noLegs_0_1_1.set(LegLocaleOfIssue_76);
      InstrumentLeg_76.insert(LegLocaleOfIssue_76.getString());
      FIX::LegMaturityDate LegMaturityDate_76("LOCALMKTDATE_395763427");
      noLegs_0_1_1.set(LegMaturityDate_76);
      InstrumentLeg_76.insert(LegMaturityDate_76.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_76("MONTHYEAR_1463861120");
      noLegs_0_1_1.set(LegMaturityMonthYear_76);
      InstrumentLeg_76.insert(LegMaturityMonthYear_76.getString());
      FIX::LegMaturityTime LegMaturityTime_76("TZTIMEONLY_1273464518");
      noLegs_0_1_1.set(LegMaturityTime_76);
      InstrumentLeg_76.insert(LegMaturityTime_76.getString());
      FIX::LegOptAttribute LegOptAttribute_76('1');
      noLegs_0_1_1.set(LegOptAttribute_76);
      InstrumentLeg_76.insert(LegOptAttribute_76.getString());
      FIX::LegOptionRatio LegOptionRatio_76;
      LegOptionRatio_76.setString("2687074");
      noLegs_0_1_1.set(LegOptionRatio_76);
      InstrumentLeg_76.insert(LegOptionRatio_76.getString());
      FIX::LegPool LegPool_76("STRING_504381948");
      noLegs_0_1_1.set(LegPool_76);
      InstrumentLeg_76.insert(LegPool_76.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_76("STRING_1916014641");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_76);
      InstrumentLeg_76.insert(LegPriceUnitOfMeasure_76.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_76;
      LegPriceUnitOfMeasureQty_76.setString("17353382");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_76);
      InstrumentLeg_76.insert(LegPriceUnitOfMeasureQty_76.getString());
      FIX::LegProduct LegProduct_76(64530938);
      noLegs_0_1_1.set(LegProduct_76);
      InstrumentLeg_76.insert(LegProduct_76.getString());
      FIX::LegPutOrCall LegPutOrCall_76(534389797);
      noLegs_0_1_1.set(LegPutOrCall_76);
      InstrumentLeg_76.insert(LegPutOrCall_76.getString());
      FIX::LegRatioQty LegRatioQty_76;
      LegRatioQty_76.setString("3522814");
      noLegs_0_1_1.set(LegRatioQty_76);
      InstrumentLeg_76.insert(LegRatioQty_76.getString());
      FIX::LegRedemptionDate LegRedemptionDate_76("LOCALMKTDATE_1588399225");
      noLegs_0_1_1.set(LegRedemptionDate_76);
      InstrumentLeg_76.insert(LegRedemptionDate_76.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_76("STRING_822562092");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_76);
      InstrumentLeg_76.insert(LegRepoCollateralSecurityType_76.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_76;
      LegRepurchaseRate_76.setString("16.640000");
      noLegs_0_1_1.set(LegRepurchaseRate_76);
      InstrumentLeg_76.insert(LegRepurchaseRate_76.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_76(997240621);
      noLegs_0_1_1.set(LegRepurchaseTerm_76);
      InstrumentLeg_76.insert(LegRepurchaseTerm_76.getString());
      FIX::LegSecurityDesc LegSecurityDesc_76("STRING_1470223010");
      noLegs_0_1_1.set(LegSecurityDesc_76);
      InstrumentLeg_76.insert(LegSecurityDesc_76.getString());
      FIX::LegSecurityExchange LegSecurityExchange_76("EXCHANGE_1618268982");
      noLegs_0_1_1.set(LegSecurityExchange_76);
      InstrumentLeg_76.insert(LegSecurityExchange_76.getString());
      FIX::LegSecurityID LegSecurityID_76("STRING_871751538");
      noLegs_0_1_1.set(LegSecurityID_76);
      InstrumentLeg_76.insert(LegSecurityID_76.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_76("STRING_351971724");
      noLegs_0_1_1.set(LegSecurityIDSource_76);
      InstrumentLeg_76.insert(LegSecurityIDSource_76.getString());
      FIX::LegSecuritySubType LegSecuritySubType_76("STRING_1870428234");
      noLegs_0_1_1.set(LegSecuritySubType_76);
      InstrumentLeg_76.insert(LegSecuritySubType_76.getString());
      FIX::LegSecurityType LegSecurityType_76("STRING_49778929");
      noLegs_0_1_1.set(LegSecurityType_76);
      InstrumentLeg_76.insert(LegSecurityType_76.getString());
      FIX::LegSide LegSide_76('7');
      noLegs_0_1_1.set(LegSide_76);
      InstrumentLeg_76.insert(LegSide_76.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_76("STRING_504964606");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_76);
      InstrumentLeg_76.insert(LegStateOrProvinceOfIssue_76.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_76("USD");
      noLegs_0_1_1.set(LegStrikeCurrency_76);
      InstrumentLeg_76.insert(LegStrikeCurrency_76.getString());
      FIX::LegStrikePrice LegStrikePrice_76;
      LegStrikePrice_76.setString("7326957");
      noLegs_0_1_1.set(LegStrikePrice_76);
      InstrumentLeg_76.insert(LegStrikePrice_76.getString());
      FIX::LegSymbol LegSymbol_76("STRING_1124374540");
      noLegs_0_1_1.set(LegSymbol_76);
      InstrumentLeg_76.insert(LegSymbol_76.getString());
      FIX::LegSymbolSfx LegSymbolSfx_76("STRING_1190324130");
      noLegs_0_1_1.set(LegSymbolSfx_76);
      InstrumentLeg_76.insert(LegSymbolSfx_76.getString());
      FIX::LegTimeUnit LegTimeUnit_76("STRING_450048562");
      noLegs_0_1_1.set(LegTimeUnit_76);
      InstrumentLeg_76.insert(LegTimeUnit_76.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_76("STRING_1913815125");
      noLegs_0_1_1.set(LegUnitOfMeasure_76);
      InstrumentLeg_76.insert(LegUnitOfMeasure_76.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_76;
      LegUnitOfMeasureQty_76.setString("18968047");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_76);
      InstrumentLeg_76.insert(LegUnitOfMeasureQty_76.getString());
      all_values.push_back(InstrumentLeg_76);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_134;
        FIX::LegSecurityAltID LegSecurityAltID_134("STRING_1230192597");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_134);
        LegSecAltIDGrp_NoLegSecurityAltID_134.insert(LegSecurityAltID_134.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_134("STRING_1022785619");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_134);
        LegSecAltIDGrp_NoLegSecurityAltID_134.insert(LegSecurityAltIDSource_134.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_134);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_2;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_2("CHF");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkCurveCurrency_2.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_2("STRING_1527167567");
      noLegs_0_1_1.set(LegBenchmarkCurveName_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkCurveName_2.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_2("STRING_1840407248");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkCurvePoint_2.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_2;
      LegBenchmarkPrice_2.setString("10867546");
      noLegs_0_1_1.set(LegBenchmarkPrice_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkPrice_2.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_2(1591698506);
      noLegs_0_1_1.set(LegBenchmarkPriceType_2);
      LegBenchmarkCurveData_2.insert(LegBenchmarkPriceType_2.getString());
      all_values.push_back(LegBenchmarkCurveData_2);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_18;
        FIX::LegStipulationType LegStipulationType_18("STRING_1439036034");
        noLegStipulations_0_1_2_0.set(LegStipulationType_18);
        LegStipulations_NoLegStipulations_18.insert(LegStipulationType_18.getString());
        FIX::LegStipulationValue LegStipulationValue_18("STRING_1032614083");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_18);
        LegStipulations_NoLegStipulations_18.insert(LegStipulationValue_18.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_18);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_19;
        FIX::LegStipulationType LegStipulationType_19("STRING_1049875490");
        noLegStipulations_0_1_2_1.set(LegStipulationType_19);
        LegStipulations_NoLegStipulations_19.insert(LegStipulationType_19.getString());
        FIX::LegStipulationValue LegStipulationValue_19("STRING_1320104050");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_19);
        LegStipulations_NoLegStipulations_19.insert(LegStipulationValue_19.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_19);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_20;
        FIX::LegStipulationType LegStipulationType_20("STRING_2029854704");
        noLegStipulations_0_1_2_2.set(LegStipulationType_20);
        LegStipulations_NoLegStipulations_20.insert(LegStipulationType_20.getString());
        FIX::LegStipulationValue LegStipulationValue_20("STRING_372614852");
        noLegStipulations_0_1_2_2.set(LegStipulationValue_20);
        LegStipulations_NoLegStipulations_20.insert(LegStipulationValue_20.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_20);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_100;
        FIX::NestedPartyID NestedPartyID_100("STRING_754122594");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_100);
        NestedParties_NoNestedPartyIDs_100.insert(NestedPartyID_100.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_100('7');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_100);
        NestedParties_NoNestedPartyIDs_100.insert(NestedPartyIDSource_100.getString());
        FIX::NestedPartyRole NestedPartyRole_100(513833971);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_100);
        NestedParties_NoNestedPartyIDs_100.insert(NestedPartyRole_100.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_100);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_190;
          FIX::NestedPartySubID NestedPartySubID_190("STRING_1445632233");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_190);
          NstdPtysSubGrp_NoNestedPartySubIDs_190.insert(NestedPartySubID_190.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_190(1018798578);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_190);
          NstdPtysSubGrp_NoNestedPartySubIDs_190.insert(NestedPartySubIDType_190.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_190);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_191;
          FIX::NestedPartySubID NestedPartySubID_191("STRING_1101063412");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_191);
          NstdPtysSubGrp_NoNestedPartySubIDs_191.insert(NestedPartySubID_191.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_191(1184361961);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_191);
          NstdPtysSubGrp_NoNestedPartySubIDs_191.insert(NestedPartySubIDType_191.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_191);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_2;
      FIX::LegOrderQty LegOrderQty_8;
      LegOrderQty_8.setString("17514943");
      noLegs_0_1_2.set(LegOrderQty_8);
      QuotReqLegsGrp_NoLegs_2.insert(LegOrderQty_8.getString());
      FIX::LegQty LegQty_8;
      LegQty_8.setString("779543");
      noLegs_0_1_2.set(LegQty_8);
      QuotReqLegsGrp_NoLegs_2.insert(LegQty_8.getString());
      FIX::LegRefID LegRefID_8("STRING_227202444");
      noLegs_0_1_2.set(LegRefID_8);
      QuotReqLegsGrp_NoLegs_2.insert(LegRefID_8.getString());
      FIX::LegSettlDate LegSettlDate_8("LOCALMKTDATE_54059226");
      noLegs_0_1_2.set(LegSettlDate_8);
      QuotReqLegsGrp_NoLegs_2.insert(LegSettlDate_8.getString());
      FIX::LegSettlType LegSettlType_8('1');
      noLegs_0_1_2.set(LegSettlType_8);
      QuotReqLegsGrp_NoLegs_2.insert(LegSettlType_8.getString());
      FIX::LegSwapType LegSwapType_8(2);
      noLegs_0_1_2.set(LegSwapType_8);
      QuotReqLegsGrp_NoLegs_2.insert(LegSwapType_8.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_2);

      // InstrumentLeg
      multiset<string> InstrumentLeg_77;
      FIX::EncodedLegIssuer EncodedLegIssuer_77("DATA_899871216");
      noLegs_0_1_2.set(EncodedLegIssuer_77);
      InstrumentLeg_77.insert(EncodedLegIssuer_77.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_77(1074478379);
      noLegs_0_1_2.set(EncodedLegIssuerLen_77);
      InstrumentLeg_77.insert(EncodedLegIssuerLen_77.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_77("DATA_999309165");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_77);
      InstrumentLeg_77.insert(EncodedLegSecurityDesc_77.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_77(824263823);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_77);
      InstrumentLeg_77.insert(EncodedLegSecurityDescLen_77.getString());
      FIX::LegCFICode LegCFICode_77("STRING_425894784");
      noLegs_0_1_2.set(LegCFICode_77);
      InstrumentLeg_77.insert(LegCFICode_77.getString());
      FIX::LegContractMultiplier LegContractMultiplier_77;
      LegContractMultiplier_77.setString("3789930");
      noLegs_0_1_2.set(LegContractMultiplier_77);
      InstrumentLeg_77.insert(LegContractMultiplier_77.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_77(517187423);
      noLegs_0_1_2.set(LegContractMultiplierUnit_77);
      InstrumentLeg_77.insert(LegContractMultiplierUnit_77.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_77("MONTHYEAR_1512649395");
      noLegs_0_1_2.set(LegContractSettlMonth_77);
      InstrumentLeg_77.insert(LegContractSettlMonth_77.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_77("COUNTRY_1970691590");
      noLegs_0_1_2.set(LegCountryOfIssue_77);
      InstrumentLeg_77.insert(LegCountryOfIssue_77.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_77("LOCALMKTDATE_744500821");
      noLegs_0_1_2.set(LegCouponPaymentDate_77);
      InstrumentLeg_77.insert(LegCouponPaymentDate_77.getString());
      FIX::LegCouponRate LegCouponRate_77;
      LegCouponRate_77.setString("17.820000");
      noLegs_0_1_2.set(LegCouponRate_77);
      InstrumentLeg_77.insert(LegCouponRate_77.getString());
      FIX::LegCreditRating LegCreditRating_77("STRING_855822025");
      noLegs_0_1_2.set(LegCreditRating_77);
      InstrumentLeg_77.insert(LegCreditRating_77.getString());
      FIX::LegCurrency LegCurrency_77("USD");
      noLegs_0_1_2.set(LegCurrency_77);
      InstrumentLeg_77.insert(LegCurrency_77.getString());
      FIX::LegDatedDate LegDatedDate_77("LOCALMKTDATE_738193081");
      noLegs_0_1_2.set(LegDatedDate_77);
      InstrumentLeg_77.insert(LegDatedDate_77.getString());
      FIX::LegExerciseStyle LegExerciseStyle_77(19507515);
      noLegs_0_1_2.set(LegExerciseStyle_77);
      InstrumentLeg_77.insert(LegExerciseStyle_77.getString());
      FIX::LegFactor LegFactor_77;
      LegFactor_77.setString("7677115");
      noLegs_0_1_2.set(LegFactor_77);
      InstrumentLeg_77.insert(LegFactor_77.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_77(1492315675);
      noLegs_0_1_2.set(LegFlowScheduleType_77);
      InstrumentLeg_77.insert(LegFlowScheduleType_77.getString());
      FIX::LegInstrRegistry LegInstrRegistry_77("STRING_744094092");
      noLegs_0_1_2.set(LegInstrRegistry_77);
      InstrumentLeg_77.insert(LegInstrRegistry_77.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_77("LOCALMKTDATE_1281545541");
      noLegs_0_1_2.set(LegInterestAccrualDate_77);
      InstrumentLeg_77.insert(LegInterestAccrualDate_77.getString());
      FIX::LegIssueDate LegIssueDate_77("LOCALMKTDATE_148733551");
      noLegs_0_1_2.set(LegIssueDate_77);
      InstrumentLeg_77.insert(LegIssueDate_77.getString());
      FIX::LegIssuer LegIssuer_77("STRING_42242677");
      noLegs_0_1_2.set(LegIssuer_77);
      InstrumentLeg_77.insert(LegIssuer_77.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_77("STRING_152860471");
      noLegs_0_1_2.set(LegLocaleOfIssue_77);
      InstrumentLeg_77.insert(LegLocaleOfIssue_77.getString());
      FIX::LegMaturityDate LegMaturityDate_77("LOCALMKTDATE_1249796963");
      noLegs_0_1_2.set(LegMaturityDate_77);
      InstrumentLeg_77.insert(LegMaturityDate_77.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_77("MONTHYEAR_1226604638");
      noLegs_0_1_2.set(LegMaturityMonthYear_77);
      InstrumentLeg_77.insert(LegMaturityMonthYear_77.getString());
      FIX::LegMaturityTime LegMaturityTime_77("TZTIMEONLY_1904354782");
      noLegs_0_1_2.set(LegMaturityTime_77);
      InstrumentLeg_77.insert(LegMaturityTime_77.getString());
      FIX::LegOptAttribute LegOptAttribute_77('1');
      noLegs_0_1_2.set(LegOptAttribute_77);
      InstrumentLeg_77.insert(LegOptAttribute_77.getString());
      FIX::LegOptionRatio LegOptionRatio_77;
      LegOptionRatio_77.setString("14538070");
      noLegs_0_1_2.set(LegOptionRatio_77);
      InstrumentLeg_77.insert(LegOptionRatio_77.getString());
      FIX::LegPool LegPool_77("STRING_1958414008");
      noLegs_0_1_2.set(LegPool_77);
      InstrumentLeg_77.insert(LegPool_77.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_77("STRING_1172037050");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_77);
      InstrumentLeg_77.insert(LegPriceUnitOfMeasure_77.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_77;
      LegPriceUnitOfMeasureQty_77.setString("14303306");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_77);
      InstrumentLeg_77.insert(LegPriceUnitOfMeasureQty_77.getString());
      FIX::LegProduct LegProduct_77(710801576);
      noLegs_0_1_2.set(LegProduct_77);
      InstrumentLeg_77.insert(LegProduct_77.getString());
      FIX::LegPutOrCall LegPutOrCall_77(99031781);
      noLegs_0_1_2.set(LegPutOrCall_77);
      InstrumentLeg_77.insert(LegPutOrCall_77.getString());
      FIX::LegRatioQty LegRatioQty_77;
      LegRatioQty_77.setString("2821561");
      noLegs_0_1_2.set(LegRatioQty_77);
      InstrumentLeg_77.insert(LegRatioQty_77.getString());
      FIX::LegRedemptionDate LegRedemptionDate_77("LOCALMKTDATE_1535065399");
      noLegs_0_1_2.set(LegRedemptionDate_77);
      InstrumentLeg_77.insert(LegRedemptionDate_77.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_77("STRING_524926566");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_77);
      InstrumentLeg_77.insert(LegRepoCollateralSecurityType_77.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_77;
      LegRepurchaseRate_77.setString("92.290000");
      noLegs_0_1_2.set(LegRepurchaseRate_77);
      InstrumentLeg_77.insert(LegRepurchaseRate_77.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_77(2052252823);
      noLegs_0_1_2.set(LegRepurchaseTerm_77);
      InstrumentLeg_77.insert(LegRepurchaseTerm_77.getString());
      FIX::LegSecurityDesc LegSecurityDesc_77("STRING_2037575961");
      noLegs_0_1_2.set(LegSecurityDesc_77);
      InstrumentLeg_77.insert(LegSecurityDesc_77.getString());
      FIX::LegSecurityExchange LegSecurityExchange_77("EXCHANGE_484357172");
      noLegs_0_1_2.set(LegSecurityExchange_77);
      InstrumentLeg_77.insert(LegSecurityExchange_77.getString());
      FIX::LegSecurityID LegSecurityID_77("STRING_649269996");
      noLegs_0_1_2.set(LegSecurityID_77);
      InstrumentLeg_77.insert(LegSecurityID_77.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_77("STRING_694294095");
      noLegs_0_1_2.set(LegSecurityIDSource_77);
      InstrumentLeg_77.insert(LegSecurityIDSource_77.getString());
      FIX::LegSecuritySubType LegSecuritySubType_77("STRING_1340179197");
      noLegs_0_1_2.set(LegSecuritySubType_77);
      InstrumentLeg_77.insert(LegSecuritySubType_77.getString());
      FIX::LegSecurityType LegSecurityType_77("STRING_296162660");
      noLegs_0_1_2.set(LegSecurityType_77);
      InstrumentLeg_77.insert(LegSecurityType_77.getString());
      FIX::LegSide LegSide_77('6');
      noLegs_0_1_2.set(LegSide_77);
      InstrumentLeg_77.insert(LegSide_77.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_77("STRING_2078372279");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_77);
      InstrumentLeg_77.insert(LegStateOrProvinceOfIssue_77.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_77("CHF");
      noLegs_0_1_2.set(LegStrikeCurrency_77);
      InstrumentLeg_77.insert(LegStrikeCurrency_77.getString());
      FIX::LegStrikePrice LegStrikePrice_77;
      LegStrikePrice_77.setString("14232043");
      noLegs_0_1_2.set(LegStrikePrice_77);
      InstrumentLeg_77.insert(LegStrikePrice_77.getString());
      FIX::LegSymbol LegSymbol_77("STRING_1059764267");
      noLegs_0_1_2.set(LegSymbol_77);
      InstrumentLeg_77.insert(LegSymbol_77.getString());
      FIX::LegSymbolSfx LegSymbolSfx_77("STRING_572889742");
      noLegs_0_1_2.set(LegSymbolSfx_77);
      InstrumentLeg_77.insert(LegSymbolSfx_77.getString());
      FIX::LegTimeUnit LegTimeUnit_77("STRING_1571937857");
      noLegs_0_1_2.set(LegTimeUnit_77);
      InstrumentLeg_77.insert(LegTimeUnit_77.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_77("STRING_1102006944");
      noLegs_0_1_2.set(LegUnitOfMeasure_77);
      InstrumentLeg_77.insert(LegUnitOfMeasure_77.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_77;
      LegUnitOfMeasureQty_77.setString("7257502");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_77);
      InstrumentLeg_77.insert(LegUnitOfMeasureQty_77.getString());
      all_values.push_back(InstrumentLeg_77);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_135;
        FIX::LegSecurityAltID LegSecurityAltID_135("STRING_181127935");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_135);
        LegSecAltIDGrp_NoLegSecurityAltID_135.insert(LegSecurityAltID_135.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_135("STRING_482621348");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_135);
        LegSecAltIDGrp_NoLegSecurityAltID_135.insert(LegSecurityAltIDSource_135.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_135);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_3;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_3("CHF");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurveCurrency_3.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_3("STRING_293551708");
      noLegs_0_1_2.set(LegBenchmarkCurveName_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurveName_3.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_3("STRING_1026555844");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurvePoint_3.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_3;
      LegBenchmarkPrice_3.setString("9177819");
      noLegs_0_1_2.set(LegBenchmarkPrice_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkPrice_3.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_3(1004353285);
      noLegs_0_1_2.set(LegBenchmarkPriceType_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkPriceType_3.getString());
      all_values.push_back(LegBenchmarkCurveData_3);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_21;
        FIX::LegStipulationType LegStipulationType_21("STRING_1199938142");
        noLegStipulations_0_2_2_0.set(LegStipulationType_21);
        LegStipulations_NoLegStipulations_21.insert(LegStipulationType_21.getString());
        FIX::LegStipulationValue LegStipulationValue_21("STRING_391935036");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_21);
        LegStipulations_NoLegStipulations_21.insert(LegStipulationValue_21.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_21);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_101;
        FIX::NestedPartyID NestedPartyID_101("STRING_1861087372");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyID_101.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_101('2');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyIDSource_101.getString());
        FIX::NestedPartyRole NestedPartyRole_101(1540606505);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyRole_101.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_101);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_192;
          FIX::NestedPartySubID NestedPartySubID_192("STRING_945974208");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_192);
          NstdPtysSubGrp_NoNestedPartySubIDs_192.insert(NestedPartySubID_192.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_192(87416952);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_192);
          NstdPtysSubGrp_NoNestedPartySubIDs_192.insert(NestedPartySubIDType_192.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_192);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_193;
          FIX::NestedPartySubID NestedPartySubID_193("STRING_1538140093");
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubID_193);
          NstdPtysSubGrp_NoNestedPartySubIDs_193.insert(NestedPartySubID_193.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_193(1242136868);
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubIDType_193);
          NstdPtysSubGrp_NoNestedPartySubIDs_193.insert(NestedPartySubIDType_193.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_193);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_14;
      FIX::RateSource RateSource_22(0);
      noRateSources_0_1_0.set(RateSource_22);
      RateSource_NoRateSources_14.insert(RateSource_22.getString());
      FIX::RateSourceType RateSourceType_14(1);
      noRateSources_0_1_0.set(RateSourceType_14);
      RateSource_NoRateSources_14.insert(RateSourceType_14.getString());
      FIX::ReferencePage ReferencePage_14("STRING_49877434");
      noRateSources_0_1_0.set(ReferencePage_14);
      RateSource_NoRateSources_14.insert(ReferencePage_14.getString());
      all_values.push_back(RateSource_NoRateSources_14);

      noRelatedSym_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_15;
      FIX::RateSource RateSource_23(99);
      noRateSources_0_1_1.set(RateSource_23);
      RateSource_NoRateSources_15.insert(RateSource_23.getString());
      FIX::RateSourceType RateSourceType_15(1);
      noRateSources_0_1_1.set(RateSourceType_15);
      RateSource_NoRateSources_15.insert(RateSourceType_15.getString());
      FIX::ReferencePage ReferencePage_15("STRING_622767176");
      noRateSources_0_1_1.set(ReferencePage_15);
      RateSource_NoRateSources_15.insert(ReferencePage_15.getString());
      all_values.push_back(RateSource_NoRateSources_15);

      noRelatedSym_0_0.addGroup(noRateSources_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_2;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_16;
      FIX::RateSource RateSource_24(0);
      noRateSources_0_1_2.set(RateSource_24);
      RateSource_NoRateSources_16.insert(RateSource_24.getString());
      FIX::RateSourceType RateSourceType_16(1);
      noRateSources_0_1_2.set(RateSourceType_16);
      RateSource_NoRateSources_16.insert(RateSourceType_16.getString());
      FIX::ReferencePage ReferencePage_16("STRING_1348517390");
      noRateSources_0_1_2.set(ReferencePage_16);
      RateSource_NoRateSources_16.insert(ReferencePage_16.getString());
      all_values.push_back(RateSource_NoRateSources_16);

      noRelatedSym_0_0.addGroup(noRateSources_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_22;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_22("USD");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurveCurrency_22.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_22("STRING_SWAP");
    noRelatedSym_0_0.set(BenchmarkCurveName_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurveName_22.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_22("STRING_697973559");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurvePoint_22.getString());
    FIX::BenchmarkPrice BenchmarkPrice_22;
    BenchmarkPrice_22.setString("12406739");
    noRelatedSym_0_0.set(BenchmarkPrice_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkPrice_22.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_22(2124690446);
    noRelatedSym_0_0.set(BenchmarkPriceType_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkPriceType_22.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_22("STRING_1724529403");
    noRelatedSym_0_0.set(BenchmarkSecurityID_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkSecurityID_22.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_22("STRING_10972261");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkSecurityIDSource_22.getString());
    FIX::Spread Spread_22;
    Spread_22.setString("9815600");
    noRelatedSym_0_0.set(Spread_22);
    SpreadOrBenchmarkCurveData_22.insert(Spread_22.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_22);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_38;
      FIX::StipulationType StipulationType_38("STRING_COUPON");
      noStipulations_0_1_0.set(StipulationType_38);
      Stipulations_NoStipulations_38.insert(StipulationType_38.getString());
      FIX::StipulationValue StipulationValue_38("STRING_1373495120");
      noStipulations_0_1_0.set(StipulationValue_38);
      Stipulations_NoStipulations_38.insert(StipulationValue_38.getString());
      all_values.push_back(Stipulations_NoStipulations_38);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_39;
      FIX::StipulationType StipulationType_39("STRING_COUPON");
      noStipulations_0_1_1.set(StipulationType_39);
      Stipulations_NoStipulations_39.insert(StipulationType_39.getString());
      FIX::StipulationValue StipulationValue_39("STRING_924514128");
      noStipulations_0_1_1.set(StipulationValue_39);
      Stipulations_NoStipulations_39.insert(StipulationValue_39.getString());
      all_values.push_back(Stipulations_NoStipulations_39);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_40;
      FIX::StipulationType StipulationType_40("STRING_AVSIZE");
      noStipulations_0_1_2.set(StipulationType_40);
      Stipulations_NoStipulations_40.insert(StipulationType_40.getString());
      FIX::StipulationValue StipulationValue_40("STRING_1746270429");
      noStipulations_0_1_2.set(StipulationValue_40);
      Stipulations_NoStipulations_40.insert(StipulationValue_40.getString());
      all_values.push_back(Stipulations_NoStipulations_40);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_94;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_94("DATA_468689891");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingIssuer_94.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_94(1833687381);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingIssuerLen_94.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_94("DATA_513131469");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingSecurityDesc_94.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_94(1710826759);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_94);
      UnderlyingInstrument_94.insert(EncodedUnderlyingSecurityDescLen_94.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_94;
      UnderlyingAdjustedQuantity_94.setString("4447369");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_94);
      UnderlyingInstrument_94.insert(UnderlyingAdjustedQuantity_94.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_94;
      UnderlyingAllocationPercent_94.setString("1.940000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_94);
      UnderlyingInstrument_94.insert(UnderlyingAllocationPercent_94.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_94;
      UnderlyingAttachmentPoint_94.setString("1.550000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_94);
      UnderlyingInstrument_94.insert(UnderlyingAttachmentPoint_94.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_94("STRING_494614400");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_94);
      UnderlyingInstrument_94.insert(UnderlyingCFICode_94.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_94("STRING_579425929");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_94);
      UnderlyingInstrument_94.insert(UnderlyingCPProgram_94.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_94("STRING_1591237818");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_94);
      UnderlyingInstrument_94.insert(UnderlyingCPRegType_94.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_94;
      UnderlyingCapValue_94.setString("11173815");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_94);
      UnderlyingInstrument_94.insert(UnderlyingCapValue_94.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_94;
      UnderlyingCashAmount_94.setString("7486295");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_94);
      UnderlyingInstrument_94.insert(UnderlyingCashAmount_94.getString());
      FIX::UnderlyingCashType UnderlyingCashType_94("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_94);
      UnderlyingInstrument_94.insert(UnderlyingCashType_94.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_94;
      UnderlyingContractMultiplier_94.setString("3184153");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_94);
      UnderlyingInstrument_94.insert(UnderlyingContractMultiplier_94.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_94(1592084287);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_94);
      UnderlyingInstrument_94.insert(UnderlyingContractMultiplierUnit_94.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_94("COUNTRY_621587672");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingCountryOfIssue_94.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_94("LOCALMKTDATE_2070408");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_94);
      UnderlyingInstrument_94.insert(UnderlyingCouponPaymentDate_94.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_94;
      UnderlyingCouponRate_94.setString("41.980000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_94);
      UnderlyingInstrument_94.insert(UnderlyingCouponRate_94.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_94("STRING_1862261584");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_94);
      UnderlyingInstrument_94.insert(UnderlyingCreditRating_94.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_94("CHF");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_94);
      UnderlyingInstrument_94.insert(UnderlyingCurrency_94.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_94;
      UnderlyingCurrentValue_94.setString("18732338");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_94);
      UnderlyingInstrument_94.insert(UnderlyingCurrentValue_94.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_94;
      UnderlyingDetachmentPoint_94.setString("72.900000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_94);
      UnderlyingInstrument_94.insert(UnderlyingDetachmentPoint_94.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_94;
      UnderlyingDirtyPrice_94.setString("4222533");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_94);
      UnderlyingInstrument_94.insert(UnderlyingDirtyPrice_94.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_94;
      UnderlyingEndPrice_94.setString("9366606");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_94);
      UnderlyingInstrument_94.insert(UnderlyingEndPrice_94.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_94;
      UnderlyingEndValue_94.setString("1868487");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_94);
      UnderlyingInstrument_94.insert(UnderlyingEndValue_94.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_94(627917257);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_94);
      UnderlyingInstrument_94.insert(UnderlyingExerciseStyle_94.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_94;
      UnderlyingFXRate_94.setString("18611747");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_94);
      UnderlyingInstrument_94.insert(UnderlyingFXRate_94.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_94('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_94);
      UnderlyingInstrument_94.insert(UnderlyingFXRateCalc_94.getString());
      FIX::UnderlyingFactor UnderlyingFactor_94;
      UnderlyingFactor_94.setString("2267040");
      noUnderlyings_0_1_0.set(UnderlyingFactor_94);
      UnderlyingInstrument_94.insert(UnderlyingFactor_94.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_94(836166105);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_94);
      UnderlyingInstrument_94.insert(UnderlyingFlowScheduleType_94.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_94("STRING_178254337");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_94);
      UnderlyingInstrument_94.insert(UnderlyingInstrRegistry_94.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_94("LOCALMKTDATE_2060391420");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_94);
      UnderlyingInstrument_94.insert(UnderlyingIssueDate_94.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_94("STRING_1349297575");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_94);
      UnderlyingInstrument_94.insert(UnderlyingIssuer_94.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_94("STRING_1889081097");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingLocaleOfIssue_94.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_94("LOCALMKTDATE_357644738");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityDate_94.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_94("MONTHYEAR_1183974121");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityMonthYear_94.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_94("TZTIMEONLY_862747604");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_94);
      UnderlyingInstrument_94.insert(UnderlyingMaturityTime_94.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_94;
      UnderlyingNotionalPercentageOutstanding_94.setString("91.380000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_94);
      UnderlyingInstrument_94.insert(UnderlyingNotionalPercentageOutstanding_94.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_94('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_94);
      UnderlyingInstrument_94.insert(UnderlyingOptAttribute_94.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_94;
      UnderlyingOriginalNotionalPercentageOutstanding_94.setString("17.740000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_94);
      UnderlyingInstrument_94.insert(UnderlyingOriginalNotionalPercentageOutstanding_94.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_94("STRING_1969640714");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_94);
      UnderlyingInstrument_94.insert(UnderlyingPriceUnitOfMeasure_94.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_94;
      UnderlyingPriceUnitOfMeasureQty_94.setString("3645459");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_94);
      UnderlyingInstrument_94.insert(UnderlyingPriceUnitOfMeasureQty_94.getString());
      FIX::UnderlyingProduct UnderlyingProduct_94(1322350551);
      noUnderlyings_0_1_0.set(UnderlyingProduct_94);
      UnderlyingInstrument_94.insert(UnderlyingProduct_94.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_94(140572385);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_94);
      UnderlyingInstrument_94.insert(UnderlyingPutOrCall_94.getString());
      FIX::UnderlyingPx UnderlyingPx_94;
      UnderlyingPx_94.setString("19566302");
      noUnderlyings_0_1_0.set(UnderlyingPx_94);
      UnderlyingInstrument_94.insert(UnderlyingPx_94.getString());
      FIX::UnderlyingQty UnderlyingQty_94;
      UnderlyingQty_94.setString("19439382");
      noUnderlyings_0_1_0.set(UnderlyingQty_94);
      UnderlyingInstrument_94.insert(UnderlyingQty_94.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_94("LOCALMKTDATE_142642793");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_94);
      UnderlyingInstrument_94.insert(UnderlyingRedemptionDate_94.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_94("STRING_2099204408");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_94);
      UnderlyingInstrument_94.insert(UnderlyingRepoCollateralSecurityType_94.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_94;
      UnderlyingRepurchaseRate_94.setString("61.590000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_94);
      UnderlyingInstrument_94.insert(UnderlyingRepurchaseRate_94.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_94(121920000);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_94);
      UnderlyingInstrument_94.insert(UnderlyingRepurchaseTerm_94.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_94("STRING_1818824361");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_94);
      UnderlyingInstrument_94.insert(UnderlyingRestructuringType_94.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_94("STRING_1384466357");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityDesc_94.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_94("EXCHANGE_1082757291");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityExchange_94.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_94("STRING_93594047");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityID_94.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_94("STRING_173643310");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityIDSource_94.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_94("STRING_1269606053");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_94);
      UnderlyingInstrument_94.insert(UnderlyingSecuritySubType_94.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_94("STRING_721511304");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_94);
      UnderlyingInstrument_94.insert(UnderlyingSecurityType_94.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_94("STRING_2034818040");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_94);
      UnderlyingInstrument_94.insert(UnderlyingSeniority_94.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_94("STRING_979170499");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_94);
      UnderlyingInstrument_94.insert(UnderlyingSettlMethod_94.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_94(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_94);
      UnderlyingInstrument_94.insert(UnderlyingSettlementType_94.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_94;
      UnderlyingStartValue_94.setString("7235004");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_94);
      UnderlyingInstrument_94.insert(UnderlyingStartValue_94.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_94("STRING_1157424837");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_94);
      UnderlyingInstrument_94.insert(UnderlyingStateOrProvinceOfIssue_94.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_94("GBP");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_94);
      UnderlyingInstrument_94.insert(UnderlyingStrikeCurrency_94.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_94;
      UnderlyingStrikePrice_94.setString("8990222");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_94);
      UnderlyingInstrument_94.insert(UnderlyingStrikePrice_94.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_94("STRING_1218767853");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_94);
      UnderlyingInstrument_94.insert(UnderlyingSymbol_94.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_94("STRING_1109288545");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_94);
      UnderlyingInstrument_94.insert(UnderlyingSymbolSfx_94.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_94("STRING_1761769890");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_94);
      UnderlyingInstrument_94.insert(UnderlyingTimeUnit_94.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_94("STRING_2071026991");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_94);
      UnderlyingInstrument_94.insert(UnderlyingUnitOfMeasure_94.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_94;
      UnderlyingUnitOfMeasureQty_94.setString("7252049");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_94);
      UnderlyingInstrument_94.insert(UnderlyingUnitOfMeasureQty_94.getString());
      all_values.push_back(UnderlyingInstrument_94);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_187;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_187("STRING_1893184057");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_187);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_187.insert(UnderlyingSecurityAltID_187.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_187("STRING_1089750871");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_187);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_187.insert(UnderlyingSecurityAltIDSource_187.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_180;
        FIX::UnderlyingStipType UnderlyingStipType_180("STRING_2033756442");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_180);
        UnderlyingStipulations_NoUnderlyingStips_180.insert(UnderlyingStipType_180.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_180("STRING_898897433");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_180);
        UnderlyingStipulations_NoUnderlyingStips_180.insert(UnderlyingStipValue_180.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_180);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_181;
        FIX::UnderlyingStipType UnderlyingStipType_181("STRING_1039593143");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_181);
        UnderlyingStipulations_NoUnderlyingStips_181.insert(UnderlyingStipType_181.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_181("STRING_28915588");
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
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_195;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_195("STRING_550825654");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyID_195.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_195('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyIDSource_195.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_195(521958907);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyRole_195.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_195);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_384("STRING_1233592879");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_384);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384.insert(UnderlyingInstrumentPartySubID_384.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_384(615552954);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_384);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384.insert(UnderlyingInstrumentPartySubIDType_384.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);

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
      multiset<string> UnderlyingInstrument_95;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_95("DATA_2108935322");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingIssuer_95.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_95(355715285);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingIssuerLen_95.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_95("DATA_1337064259");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingSecurityDesc_95.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_95(1996269714);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_95);
      UnderlyingInstrument_95.insert(EncodedUnderlyingSecurityDescLen_95.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_95;
      UnderlyingAdjustedQuantity_95.setString("13348857");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_95);
      UnderlyingInstrument_95.insert(UnderlyingAdjustedQuantity_95.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_95;
      UnderlyingAllocationPercent_95.setString("59.540000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_95);
      UnderlyingInstrument_95.insert(UnderlyingAllocationPercent_95.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_95;
      UnderlyingAttachmentPoint_95.setString("65.630000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_95);
      UnderlyingInstrument_95.insert(UnderlyingAttachmentPoint_95.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_95("STRING_344826973");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_95);
      UnderlyingInstrument_95.insert(UnderlyingCFICode_95.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_95("STRING_998919069");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_95);
      UnderlyingInstrument_95.insert(UnderlyingCPProgram_95.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_95("STRING_497600988");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_95);
      UnderlyingInstrument_95.insert(UnderlyingCPRegType_95.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_95;
      UnderlyingCapValue_95.setString("12438492");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_95);
      UnderlyingInstrument_95.insert(UnderlyingCapValue_95.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_95;
      UnderlyingCashAmount_95.setString("702032");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_95);
      UnderlyingInstrument_95.insert(UnderlyingCashAmount_95.getString());
      FIX::UnderlyingCashType UnderlyingCashType_95("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_95);
      UnderlyingInstrument_95.insert(UnderlyingCashType_95.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_95;
      UnderlyingContractMultiplier_95.setString("8581355");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_95);
      UnderlyingInstrument_95.insert(UnderlyingContractMultiplier_95.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_95(2141230265);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_95);
      UnderlyingInstrument_95.insert(UnderlyingContractMultiplierUnit_95.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_95("COUNTRY_184610833");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingCountryOfIssue_95.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_95("LOCALMKTDATE_778923517");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_95);
      UnderlyingInstrument_95.insert(UnderlyingCouponPaymentDate_95.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_95;
      UnderlyingCouponRate_95.setString("6.740000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_95);
      UnderlyingInstrument_95.insert(UnderlyingCouponRate_95.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_95("STRING_1274361704");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_95);
      UnderlyingInstrument_95.insert(UnderlyingCreditRating_95.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_95("CHF");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_95);
      UnderlyingInstrument_95.insert(UnderlyingCurrency_95.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_95;
      UnderlyingCurrentValue_95.setString("257754");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_95);
      UnderlyingInstrument_95.insert(UnderlyingCurrentValue_95.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_95;
      UnderlyingDetachmentPoint_95.setString("15.800000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_95);
      UnderlyingInstrument_95.insert(UnderlyingDetachmentPoint_95.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_95;
      UnderlyingDirtyPrice_95.setString("18021190");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_95);
      UnderlyingInstrument_95.insert(UnderlyingDirtyPrice_95.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_95;
      UnderlyingEndPrice_95.setString("8763936");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_95);
      UnderlyingInstrument_95.insert(UnderlyingEndPrice_95.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_95;
      UnderlyingEndValue_95.setString("14649972");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_95);
      UnderlyingInstrument_95.insert(UnderlyingEndValue_95.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_95(1952954645);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_95);
      UnderlyingInstrument_95.insert(UnderlyingExerciseStyle_95.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_95;
      UnderlyingFXRate_95.setString("13983525");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_95);
      UnderlyingInstrument_95.insert(UnderlyingFXRate_95.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_95('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_95);
      UnderlyingInstrument_95.insert(UnderlyingFXRateCalc_95.getString());
      FIX::UnderlyingFactor UnderlyingFactor_95;
      UnderlyingFactor_95.setString("10390638");
      noUnderlyings_0_1_1.set(UnderlyingFactor_95);
      UnderlyingInstrument_95.insert(UnderlyingFactor_95.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_95(2013905545);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_95);
      UnderlyingInstrument_95.insert(UnderlyingFlowScheduleType_95.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_95("STRING_1214257272");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_95);
      UnderlyingInstrument_95.insert(UnderlyingInstrRegistry_95.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_95("LOCALMKTDATE_1394779162");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_95);
      UnderlyingInstrument_95.insert(UnderlyingIssueDate_95.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_95("STRING_1203486156");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_95);
      UnderlyingInstrument_95.insert(UnderlyingIssuer_95.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_95("STRING_1063043338");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingLocaleOfIssue_95.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_95("LOCALMKTDATE_582181298");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityDate_95.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_95("MONTHYEAR_1341282110");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityMonthYear_95.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_95("TZTIMEONLY_1635329901");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_95);
      UnderlyingInstrument_95.insert(UnderlyingMaturityTime_95.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_95;
      UnderlyingNotionalPercentageOutstanding_95.setString("82.720000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_95);
      UnderlyingInstrument_95.insert(UnderlyingNotionalPercentageOutstanding_95.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_95('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_95);
      UnderlyingInstrument_95.insert(UnderlyingOptAttribute_95.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_95;
      UnderlyingOriginalNotionalPercentageOutstanding_95.setString("8.890000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_95);
      UnderlyingInstrument_95.insert(UnderlyingOriginalNotionalPercentageOutstanding_95.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_95("STRING_23373883");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_95);
      UnderlyingInstrument_95.insert(UnderlyingPriceUnitOfMeasure_95.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_95;
      UnderlyingPriceUnitOfMeasureQty_95.setString("2629208");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_95);
      UnderlyingInstrument_95.insert(UnderlyingPriceUnitOfMeasureQty_95.getString());
      FIX::UnderlyingProduct UnderlyingProduct_95(1592336775);
      noUnderlyings_0_1_1.set(UnderlyingProduct_95);
      UnderlyingInstrument_95.insert(UnderlyingProduct_95.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_95(881509385);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_95);
      UnderlyingInstrument_95.insert(UnderlyingPutOrCall_95.getString());
      FIX::UnderlyingPx UnderlyingPx_95;
      UnderlyingPx_95.setString("2566674");
      noUnderlyings_0_1_1.set(UnderlyingPx_95);
      UnderlyingInstrument_95.insert(UnderlyingPx_95.getString());
      FIX::UnderlyingQty UnderlyingQty_95;
      UnderlyingQty_95.setString("17769476");
      noUnderlyings_0_1_1.set(UnderlyingQty_95);
      UnderlyingInstrument_95.insert(UnderlyingQty_95.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_95("LOCALMKTDATE_1660432902");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_95);
      UnderlyingInstrument_95.insert(UnderlyingRedemptionDate_95.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_95("STRING_2143598097");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_95);
      UnderlyingInstrument_95.insert(UnderlyingRepoCollateralSecurityType_95.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_95;
      UnderlyingRepurchaseRate_95.setString("56.640000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_95);
      UnderlyingInstrument_95.insert(UnderlyingRepurchaseRate_95.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_95(1535011339);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_95);
      UnderlyingInstrument_95.insert(UnderlyingRepurchaseTerm_95.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_95("STRING_1769317918");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_95);
      UnderlyingInstrument_95.insert(UnderlyingRestructuringType_95.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_95("STRING_929601153");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityDesc_95.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_95("EXCHANGE_301699271");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityExchange_95.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_95("STRING_1423953327");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityID_95.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_95("STRING_1805994837");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityIDSource_95.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_95("STRING_1766696506");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_95);
      UnderlyingInstrument_95.insert(UnderlyingSecuritySubType_95.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_95("STRING_1229424324");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_95);
      UnderlyingInstrument_95.insert(UnderlyingSecurityType_95.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_95("STRING_1056863780");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_95);
      UnderlyingInstrument_95.insert(UnderlyingSeniority_95.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_95("STRING_872018456");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_95);
      UnderlyingInstrument_95.insert(UnderlyingSettlMethod_95.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_95(2);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_95);
      UnderlyingInstrument_95.insert(UnderlyingSettlementType_95.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_95;
      UnderlyingStartValue_95.setString("9232856");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_95);
      UnderlyingInstrument_95.insert(UnderlyingStartValue_95.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_95("STRING_2086275728");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_95);
      UnderlyingInstrument_95.insert(UnderlyingStateOrProvinceOfIssue_95.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_95("GBP");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_95);
      UnderlyingInstrument_95.insert(UnderlyingStrikeCurrency_95.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_95;
      UnderlyingStrikePrice_95.setString("10018354");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_95);
      UnderlyingInstrument_95.insert(UnderlyingStrikePrice_95.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_95("STRING_2097965014");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_95);
      UnderlyingInstrument_95.insert(UnderlyingSymbol_95.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_95("STRING_1320570296");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_95);
      UnderlyingInstrument_95.insert(UnderlyingSymbolSfx_95.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_95("STRING_489681671");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_95);
      UnderlyingInstrument_95.insert(UnderlyingTimeUnit_95.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_95("STRING_877489638");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_95);
      UnderlyingInstrument_95.insert(UnderlyingUnitOfMeasure_95.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_95;
      UnderlyingUnitOfMeasureQty_95.setString("15132878");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_95);
      UnderlyingInstrument_95.insert(UnderlyingUnitOfMeasureQty_95.getString());
      all_values.push_back(UnderlyingInstrument_95);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_188;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_188("STRING_900863521");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_188);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_188.insert(UnderlyingSecurityAltID_188.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_188("STRING_1776208633");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_188);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_188.insert(UnderlyingSecurityAltIDSource_188.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_189;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_189("STRING_2067465688");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_189);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_189.insert(UnderlyingSecurityAltID_189.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_189("STRING_1782372906");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_189);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_189.insert(UnderlyingSecurityAltIDSource_189.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_182;
        FIX::UnderlyingStipType UnderlyingStipType_182("STRING_1696929648");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_182);
        UnderlyingStipulations_NoUnderlyingStips_182.insert(UnderlyingStipType_182.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_182("STRING_1295322161");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_182);
        UnderlyingStipulations_NoUnderlyingStips_182.insert(UnderlyingStipValue_182.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_182);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_196;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_196("STRING_453271664");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyID_196.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_196('6');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyIDSource_196.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_196(1650824775);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyRole_196.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_196);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_385("STRING_984549124");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_385);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385.insert(UnderlyingInstrumentPartySubID_385.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_385(927294454);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_385);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385.insert(UnderlyingInstrumentPartySubIDType_385.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_386("STRING_1041384006");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_386);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386.insert(UnderlyingInstrumentPartySubID_386.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_386(603761982);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_386);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386.insert(UnderlyingInstrumentPartySubIDType_386.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_387("STRING_9235130");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_387);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387.insert(UnderlyingInstrumentPartySubID_387.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_387(2098247786);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_387);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387.insert(UnderlyingInstrumentPartySubIDType_387.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_197;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_197("STRING_1475780438");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyID_197.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_197('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyIDSource_197.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_197(874049816);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyRole_197.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_197);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_388("STRING_1646023399");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_388);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388.insert(UnderlyingInstrumentPartySubID_388.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_388(853338002);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_388);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388.insert(UnderlyingInstrumentPartySubIDType_388.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_389("STRING_268924288");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_389);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389.insert(UnderlyingInstrumentPartySubID_389.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_389(1596504765);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_389);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389.insert(UnderlyingInstrumentPartySubIDType_389.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_390("STRING_26424650");
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubID_390);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390.insert(UnderlyingInstrumentPartySubID_390.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_390(758605959);
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_390);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390.insert(UnderlyingInstrumentPartySubIDType_390.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_17;
    FIX::Yield Yield_17;
    Yield_17.setString("7.550000");
    noRelatedSym_0_0.set(Yield_17);
    YieldData_17.insert(Yield_17.getString());
    FIX::YieldCalcDate YieldCalcDate_17("LOCALMKTDATE_1539712478");
    noRelatedSym_0_0.set(YieldCalcDate_17);
    YieldData_17.insert(YieldCalcDate_17.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_17("LOCALMKTDATE_1233734872");
    noRelatedSym_0_0.set(YieldRedemptionDate_17);
    YieldData_17.insert(YieldRedemptionDate_17.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_17;
    YieldRedemptionPrice_17.setString("12273742");
    noRelatedSym_0_0.set(YieldRedemptionPrice_17);
    YieldData_17.insert(YieldRedemptionPrice_17.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_17(1168437464);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_17);
    YieldData_17.insert(YieldRedemptionPriceType_17.getString());
    FIX::YieldType YieldType_17("STRING_INFLATION");
    noRelatedSym_0_0.set(YieldType_17);
    YieldData_17.insert(YieldType_17.getString());
    all_values.push_back(YieldData_17);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_1;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_1;
    FIX::Account Account_34("STRING_862263535");
    noRelatedSym_0_1.set(Account_34);
    QuotReqGrp_NoRelatedSym_1.insert(Account_34.getString());
    FIX::AccountType AccountType_30(6);
    noRelatedSym_0_1.set(AccountType_30);
    QuotReqGrp_NoRelatedSym_1.insert(AccountType_30.getString());
    FIX::AcctIDSource AcctIDSource_27(5);
    noRelatedSym_0_1.set(AcctIDSource_27);
    QuotReqGrp_NoRelatedSym_1.insert(AcctIDSource_27.getString());
    FIX::Currency Currency_46("CAN");
    noRelatedSym_0_1.set(Currency_46);
    QuotReqGrp_NoRelatedSym_1.insert(Currency_46.getString());
    FIX::ExpireTime ExpireTime_16(FIX::UTCTIMESTAMP(21, 36, 46, 25, 112016));
    noRelatedSym_0_1.set(ExpireTime_16);
    QuotReqGrp_NoRelatedSym_1.insert(ExpireTime_16.getString());
    FIX::MinQty MinQty_15;
    MinQty_15.setString("1337793");
    noRelatedSym_0_1.set(MinQty_15);
    QuotReqGrp_NoRelatedSym_1.insert(MinQty_15.getString());
    FIX::OrdType OrdType_48('1');
    noRelatedSym_0_1.set(OrdType_48);
    QuotReqGrp_NoRelatedSym_1.insert(OrdType_48.getString());
    FIX::OrderQty2 OrderQty2_11;
    OrderQty2_11.setString("13839718");
    noRelatedSym_0_1.set(OrderQty2_11);
    QuotReqGrp_NoRelatedSym_1.insert(OrderQty2_11.getString());
    FIX::PrevClosePx PrevClosePx_11;
    PrevClosePx_11.setString("16095597");
    noRelatedSym_0_1.set(PrevClosePx_11);
    QuotReqGrp_NoRelatedSym_1.insert(PrevClosePx_11.getString());
    FIX::Price Price_21;
    Price_21.setString("15054471");
    noRelatedSym_0_1.set(Price_21);
    QuotReqGrp_NoRelatedSym_1.insert(Price_21.getString());
    FIX::Price2 Price2_6;
    Price2_6.setString("1105380");
    noRelatedSym_0_1.set(Price2_6);
    QuotReqGrp_NoRelatedSym_1.insert(Price2_6.getString());
    FIX::PriceType PriceType_35(15);
    noRelatedSym_0_1.set(PriceType_35);
    QuotReqGrp_NoRelatedSym_1.insert(PriceType_35.getString());
    FIX::QtyType QtyType_26(0);
    noRelatedSym_0_1.set(QtyType_26);
    QuotReqGrp_NoRelatedSym_1.insert(QtyType_26.getString());
    FIX::QuotePriceType QuotePriceType_1(2);
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
    FIX::SettlDate SettlDate_33("LOCALMKTDATE_779518749");
    noRelatedSym_0_1.set(SettlDate_33);
    QuotReqGrp_NoRelatedSym_1.insert(SettlDate_33.getString());
    FIX::SettlDate2 SettlDate2_11("LOCALMKTDATE_382529542");
    noRelatedSym_0_1.set(SettlDate2_11);
    QuotReqGrp_NoRelatedSym_1.insert(SettlDate2_11.getString());
    FIX::SettlType SettlType_24("STRING_C");
    noRelatedSym_0_1.set(SettlType_24);
    QuotReqGrp_NoRelatedSym_1.insert(SettlType_24.getString());
    FIX::Side Side_41('3');
    noRelatedSym_0_1.set(Side_41);
    QuotReqGrp_NoRelatedSym_1.insert(Side_41.getString());
    FIX::TradeOriginationDate TradeOriginationDate_21("LOCALMKTDATE_1550967006");
    noRelatedSym_0_1.set(TradeOriginationDate_21);
    QuotReqGrp_NoRelatedSym_1.insert(TradeOriginationDate_21.getString());
    FIX::TradingSessionID TradingSessionID_63("STRING_6");
    noRelatedSym_0_1.set(TradingSessionID_63);
    QuotReqGrp_NoRelatedSym_1.insert(TradingSessionID_63.getString());
    FIX::TradingSessionSubID TradingSessionSubID_63("STRING_4");
    noRelatedSym_0_1.set(TradingSessionSubID_63);
    QuotReqGrp_NoRelatedSym_1.insert(TradingSessionSubID_63.getString());
    FIX::TransactTime TransactTime_47(FIX::UTCTIMESTAMP(20, 22, 39, 24, 82003));
    noRelatedSym_0_1.set(TransactTime_47);
    QuotReqGrp_NoRelatedSym_1.insert(TransactTime_47.getString());
    FIX::ValidUntilTime ValidUntilTime_6(FIX::UTCTIMESTAMP(0, 17, 3, 23, 102000));
    noRelatedSym_0_1.set(ValidUntilTime_6);
    QuotReqGrp_NoRelatedSym_1.insert(ValidUntilTime_6.getString());
    all_values.push_back(QuotReqGrp_NoRelatedSym_1);

    // FinancingDetails
    multiset<string> FinancingDetails_20;
    FIX::AgreementCurrency AgreementCurrency_20("JPY");
    noRelatedSym_0_1.set(AgreementCurrency_20);
    FinancingDetails_20.insert(AgreementCurrency_20.getString());
    FIX::AgreementDate AgreementDate_20("LOCALMKTDATE_880835045");
    noRelatedSym_0_1.set(AgreementDate_20);
    FinancingDetails_20.insert(AgreementDate_20.getString());
    FIX::AgreementDesc AgreementDesc_20("STRING_1427248415");
    noRelatedSym_0_1.set(AgreementDesc_20);
    FinancingDetails_20.insert(AgreementDesc_20.getString());
    FIX::AgreementID AgreementID_20("STRING_639490622");
    noRelatedSym_0_1.set(AgreementID_20);
    FinancingDetails_20.insert(AgreementID_20.getString());
    FIX::DeliveryType DeliveryType_20(2);
    noRelatedSym_0_1.set(DeliveryType_20);
    FinancingDetails_20.insert(DeliveryType_20.getString());
    FIX::EndDate EndDate_20("LOCALMKTDATE_425337722");
    noRelatedSym_0_1.set(EndDate_20);
    FinancingDetails_20.insert(EndDate_20.getString());
    FIX::MarginRatio MarginRatio_20;
    MarginRatio_20.setString("86.150000");
    noRelatedSym_0_1.set(MarginRatio_20);
    FinancingDetails_20.insert(MarginRatio_20.getString());
    FIX::StartDate StartDate_20("LOCALMKTDATE_687528169");
    noRelatedSym_0_1.set(StartDate_20);
    FinancingDetails_20.insert(StartDate_20.getString());
    FIX::TerminationType TerminationType_20(1);
    noRelatedSym_0_1.set(TerminationType_20);
    FinancingDetails_20.insert(TerminationType_20.getString());
    all_values.push_back(FinancingDetails_20);

    // Instrument
    multiset<string> Instrument_60;
    FIX::AttachmentPoint AttachmentPoint_60;
    AttachmentPoint_60.setString("73.640000");
    noRelatedSym_0_1.set(AttachmentPoint_60);
    Instrument_60.insert(AttachmentPoint_60.getString());
    FIX::CFICode CFICode_60("STRING_1070057711");
    noRelatedSym_0_1.set(CFICode_60);
    Instrument_60.insert(CFICode_60.getString());
    FIX::CPProgram CPProgram_60(2);
    noRelatedSym_0_1.set(CPProgram_60);
    Instrument_60.insert(CPProgram_60.getString());
    FIX::CPRegType CPRegType_60("STRING_1731426742");
    noRelatedSym_0_1.set(CPRegType_60);
    Instrument_60.insert(CPRegType_60.getString());
    FIX::CapPrice CapPrice_60;
    CapPrice_60.setString("4735410");
    noRelatedSym_0_1.set(CapPrice_60);
    Instrument_60.insert(CapPrice_60.getString());
    FIX::ContractMultiplier ContractMultiplier_60;
    ContractMultiplier_60.setString("11691265");
    noRelatedSym_0_1.set(ContractMultiplier_60);
    Instrument_60.insert(ContractMultiplier_60.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_60(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_60);
    Instrument_60.insert(ContractMultiplierUnit_60.getString());
    FIX::ContractSettlMonth ContractSettlMonth_60("MONTHYEAR_930854299");
    noRelatedSym_0_1.set(ContractSettlMonth_60);
    Instrument_60.insert(ContractSettlMonth_60.getString());
    FIX::CountryOfIssue CountryOfIssue_60("COUNTRY_1868952847");
    noRelatedSym_0_1.set(CountryOfIssue_60);
    Instrument_60.insert(CountryOfIssue_60.getString());
    FIX::CouponPaymentDate CouponPaymentDate_60("LOCALMKTDATE_1037390970");
    noRelatedSym_0_1.set(CouponPaymentDate_60);
    Instrument_60.insert(CouponPaymentDate_60.getString());
    FIX::CouponRate CouponRate_60;
    CouponRate_60.setString("6.100000");
    noRelatedSym_0_1.set(CouponRate_60);
    Instrument_60.insert(CouponRate_60.getString());
    FIX::CreditRating CreditRating_60("STRING_1577730091");
    noRelatedSym_0_1.set(CreditRating_60);
    Instrument_60.insert(CreditRating_60.getString());
    FIX::DatedDate DatedDate_60("LOCALMKTDATE_314634185");
    noRelatedSym_0_1.set(DatedDate_60);
    Instrument_60.insert(DatedDate_60.getString());
    FIX::DetachmentPoint DetachmentPoint_60;
    DetachmentPoint_60.setString("84.250000");
    noRelatedSym_0_1.set(DetachmentPoint_60);
    Instrument_60.insert(DetachmentPoint_60.getString());
    FIX::EncodedIssuer EncodedIssuer_60("DATA_1678331082");
    noRelatedSym_0_1.set(EncodedIssuer_60);
    Instrument_60.insert(EncodedIssuer_60.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_60(1269378425);
    noRelatedSym_0_1.set(EncodedIssuerLen_60);
    Instrument_60.insert(EncodedIssuerLen_60.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_60("DATA_909681254");
    noRelatedSym_0_1.set(EncodedSecurityDesc_60);
    Instrument_60.insert(EncodedSecurityDesc_60.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_60(1064656177);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_60);
    Instrument_60.insert(EncodedSecurityDescLen_60.getString());
    FIX::ExerciseStyle ExerciseStyle_60(2);
    noRelatedSym_0_1.set(ExerciseStyle_60);
    Instrument_60.insert(ExerciseStyle_60.getString());
    FIX::Factor Factor_60;
    Factor_60.setString("11872215");
    noRelatedSym_0_1.set(Factor_60);
    Instrument_60.insert(Factor_60.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_60(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_60);
    Instrument_60.insert(FlexProductEligibilityIndicator_60.getString());
    FIX::FlexibleIndicator FlexibleIndicator_60(true);
    noRelatedSym_0_1.set(FlexibleIndicator_60);
    Instrument_60.insert(FlexibleIndicator_60.getString());
    FIX::FloorPrice FloorPrice_60;
    FloorPrice_60.setString("8227252");
    noRelatedSym_0_1.set(FloorPrice_60);
    Instrument_60.insert(FloorPrice_60.getString());
    FIX::FlowScheduleType FlowScheduleType_60(0);
    noRelatedSym_0_1.set(FlowScheduleType_60);
    Instrument_60.insert(FlowScheduleType_60.getString());
    FIX::InstrRegistry InstrRegistry_60("STRING_40782891");
    noRelatedSym_0_1.set(InstrRegistry_60);
    Instrument_60.insert(InstrRegistry_60.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_60('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_60);
    Instrument_60.insert(InstrmtAssignmentMethod_60.getString());
    FIX::InterestAccrualDate InterestAccrualDate_60("LOCALMKTDATE_265532018");
    noRelatedSym_0_1.set(InterestAccrualDate_60);
    Instrument_60.insert(InterestAccrualDate_60.getString());
    FIX::IssueDate IssueDate_60("LOCALMKTDATE_466120613");
    noRelatedSym_0_1.set(IssueDate_60);
    Instrument_60.insert(IssueDate_60.getString());
    FIX::Issuer Issuer_60("STRING_407230859");
    noRelatedSym_0_1.set(Issuer_60);
    Instrument_60.insert(Issuer_60.getString());
    FIX::ListMethod ListMethod_60(1);
    noRelatedSym_0_1.set(ListMethod_60);
    Instrument_60.insert(ListMethod_60.getString());
    FIX::LocaleOfIssue LocaleOfIssue_60("STRING_648153601");
    noRelatedSym_0_1.set(LocaleOfIssue_60);
    Instrument_60.insert(LocaleOfIssue_60.getString());
    FIX::MaturityDate MaturityDate_60("LOCALMKTDATE_131764576");
    noRelatedSym_0_1.set(MaturityDate_60);
    Instrument_60.insert(MaturityDate_60.getString());
    FIX::MaturityMonthYear MaturityMonthYear_60("MONTHYEAR_2023117899");
    noRelatedSym_0_1.set(MaturityMonthYear_60);
    Instrument_60.insert(MaturityMonthYear_60.getString());
    FIX::MaturityTime MaturityTime_60("TZTIMEONLY_1820616729");
    noRelatedSym_0_1.set(MaturityTime_60);
    Instrument_60.insert(MaturityTime_60.getString());
    FIX::MinPriceIncrement MinPriceIncrement_60;
    MinPriceIncrement_60.setString("18631913");
    noRelatedSym_0_1.set(MinPriceIncrement_60);
    Instrument_60.insert(MinPriceIncrement_60.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_60;
    MinPriceIncrementAmount_60.setString("3491753");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_60);
    Instrument_60.insert(MinPriceIncrementAmount_60.getString());
    FIX::NTPositionLimit NTPositionLimit_60(842259612);
    noRelatedSym_0_1.set(NTPositionLimit_60);
    Instrument_60.insert(NTPositionLimit_60.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_60;
    NotionalPercentageOutstanding_60.setString("36.780000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_60);
    Instrument_60.insert(NotionalPercentageOutstanding_60.getString());
    FIX::OptAttribute OptAttribute_60('1');
    noRelatedSym_0_1.set(OptAttribute_60);
    Instrument_60.insert(OptAttribute_60.getString());
    FIX::OptPayoutAmount OptPayoutAmount_60;
    OptPayoutAmount_60.setString("5637288");
    noRelatedSym_0_1.set(OptPayoutAmount_60);
    Instrument_60.insert(OptPayoutAmount_60.getString());
    FIX::OptPayoutType OptPayoutType_60(3);
    noRelatedSym_0_1.set(OptPayoutType_60);
    Instrument_60.insert(OptPayoutType_60.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_60;
    OriginalNotionalPercentageOutstanding_60.setString("2.300000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_60);
    Instrument_60.insert(OriginalNotionalPercentageOutstanding_60.getString());
    FIX::Pool Pool_60("STRING_2141458902");
    noRelatedSym_0_1.set(Pool_60);
    Instrument_60.insert(Pool_60.getString());
    FIX::PositionLimit PositionLimit_60(1373348833);
    noRelatedSym_0_1.set(PositionLimit_60);
    Instrument_60.insert(PositionLimit_60.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_60("STRING_STD");
    noRelatedSym_0_1.set(PriceQuoteMethod_60);
    Instrument_60.insert(PriceQuoteMethod_60.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_60("STRING_1672306336");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_60);
    Instrument_60.insert(PriceUnitOfMeasure_60.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_60;
    PriceUnitOfMeasureQty_60.setString("4952436");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_60);
    Instrument_60.insert(PriceUnitOfMeasureQty_60.getString());
    FIX::Product Product_62(9);
    noRelatedSym_0_1.set(Product_62);
    Instrument_60.insert(Product_62.getString());
    FIX::ProductComplex ProductComplex_60("STRING_589478865");
    noRelatedSym_0_1.set(ProductComplex_60);
    Instrument_60.insert(ProductComplex_60.getString());
    FIX::PutOrCall PutOrCall_60(0);
    noRelatedSym_0_1.set(PutOrCall_60);
    Instrument_60.insert(PutOrCall_60.getString());
    FIX::RedemptionDate RedemptionDate_60("LOCALMKTDATE_1265334138");
    noRelatedSym_0_1.set(RedemptionDate_60);
    Instrument_60.insert(RedemptionDate_60.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_60("STRING_276948380");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_60);
    Instrument_60.insert(RepoCollateralSecurityType_60.getString());
    FIX::RepurchaseRate RepurchaseRate_60;
    RepurchaseRate_60.setString("1.100000");
    noRelatedSym_0_1.set(RepurchaseRate_60);
    Instrument_60.insert(RepurchaseRate_60.getString());
    FIX::RepurchaseTerm RepurchaseTerm_60(2088059408);
    noRelatedSym_0_1.set(RepurchaseTerm_60);
    Instrument_60.insert(RepurchaseTerm_60.getString());
    FIX::RestructuringType RestructuringType_60("STRING_FR");
    noRelatedSym_0_1.set(RestructuringType_60);
    Instrument_60.insert(RestructuringType_60.getString());
    FIX::SecurityDesc SecurityDesc_60("STRING_1507463001");
    noRelatedSym_0_1.set(SecurityDesc_60);
    Instrument_60.insert(SecurityDesc_60.getString());
    FIX::SecurityExchange SecurityExchange_60("EXCHANGE_1402791652");
    noRelatedSym_0_1.set(SecurityExchange_60);
    Instrument_60.insert(SecurityExchange_60.getString());
    FIX::SecurityGroup SecurityGroup_60("STRING_1110784958");
    noRelatedSym_0_1.set(SecurityGroup_60);
    Instrument_60.insert(SecurityGroup_60.getString());
    FIX::SecurityID SecurityID_60("STRING_1973583614");
    noRelatedSym_0_1.set(SecurityID_60);
    Instrument_60.insert(SecurityID_60.getString());
    FIX::SecurityIDSource SecurityIDSource_60("STRING_D");
    noRelatedSym_0_1.set(SecurityIDSource_60);
    Instrument_60.insert(SecurityIDSource_60.getString());
    FIX::SecurityStatus SecurityStatus_60("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_60);
    Instrument_60.insert(SecurityStatus_60.getString());
    FIX::SecuritySubType SecuritySubType_61("STRING_474253568");
    noRelatedSym_0_1.set(SecuritySubType_61);
    Instrument_60.insert(SecuritySubType_61.getString());
    FIX::SecurityType SecurityType_62("STRING_AN");
    noRelatedSym_0_1.set(SecurityType_62);
    Instrument_60.insert(SecurityType_62.getString());
    FIX::Seniority Seniority_60("STRING_SR");
    noRelatedSym_0_1.set(Seniority_60);
    Instrument_60.insert(Seniority_60.getString());
    FIX::SettlMethod SettlMethod_60('P');
    noRelatedSym_0_1.set(SettlMethod_60);
    Instrument_60.insert(SettlMethod_60.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_60("STRING_1657494758");
    noRelatedSym_0_1.set(SettleOnOpenFlag_60);
    Instrument_60.insert(SettleOnOpenFlag_60.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_60("STRING_141171069");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_60);
    Instrument_60.insert(StateOrProvinceOfIssue_60.getString());
    FIX::StrikeCurrency StrikeCurrency_60("CAN");
    noRelatedSym_0_1.set(StrikeCurrency_60);
    Instrument_60.insert(StrikeCurrency_60.getString());
    FIX::StrikeMultiplier StrikeMultiplier_60;
    StrikeMultiplier_60.setString("14212006");
    noRelatedSym_0_1.set(StrikeMultiplier_60);
    Instrument_60.insert(StrikeMultiplier_60.getString());
    FIX::StrikePrice StrikePrice_60;
    StrikePrice_60.setString("15533750");
    noRelatedSym_0_1.set(StrikePrice_60);
    Instrument_60.insert(StrikePrice_60.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_60(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_60);
    Instrument_60.insert(StrikePriceBoundaryMethod_60.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_60;
    StrikePriceBoundaryPrecision_60.setString("72.720000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_60);
    Instrument_60.insert(StrikePriceBoundaryPrecision_60.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_60(3);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_60);
    Instrument_60.insert(StrikePriceDeterminationMethod_60.getString());
    FIX::StrikeValue StrikeValue_60;
    StrikeValue_60.setString("19633982");
    noRelatedSym_0_1.set(StrikeValue_60);
    Instrument_60.insert(StrikeValue_60.getString());
    FIX::Symbol Symbol_60("STRING_2045682280");
    noRelatedSym_0_1.set(Symbol_60);
    Instrument_60.insert(Symbol_60.getString());
    FIX::SymbolSfx SymbolSfx_60("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_60);
    Instrument_60.insert(SymbolSfx_60.getString());
    FIX::TimeUnit TimeUnit_60("STRING_Min");
    noRelatedSym_0_1.set(TimeUnit_60);
    Instrument_60.insert(TimeUnit_60.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_60(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_60);
    Instrument_60.insert(UnderlyingPriceDeterminationMethod_60.getString());
    FIX::UnitOfMeasure UnitOfMeasure_60("STRING_Bu");
    noRelatedSym_0_1.set(UnitOfMeasure_60);
    Instrument_60.insert(UnitOfMeasure_60.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_60;
    UnitOfMeasureQty_60.setString("10168202");
    noRelatedSym_0_1.set(UnitOfMeasureQty_60);
    Instrument_60.insert(UnitOfMeasureQty_60.getString());
    FIX::ValuationMethod ValuationMethod_60("STRING_EQTY");
    noRelatedSym_0_1.set(ValuationMethod_60);
    Instrument_60.insert(ValuationMethod_60.getString());
    all_values.push_back(Instrument_60);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_116;
      FIX::ComplexEventCondition ComplexEventCondition_116(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_116);
      ComplexEvents_NoComplexEvents_116.insert(ComplexEventCondition_116.getString());
      FIX::ComplexEventPrice ComplexEventPrice_116;
      ComplexEventPrice_116.setString("11822211");
      noComplexEvents_1_1_0.set(ComplexEventPrice_116);
      ComplexEvents_NoComplexEvents_116.insert(ComplexEventPrice_116.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_116(4);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_116);
      ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceBoundaryMethod_116.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_116;
      ComplexEventPriceBoundaryPrecision_116.setString("96.840000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_116);
      ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceBoundaryPrecision_116.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_116(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_116);
      ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceTimeType_116.getString());
      FIX::ComplexEventType ComplexEventType_116(2);
      noComplexEvents_1_1_0.set(ComplexEventType_116);
      ComplexEvents_NoComplexEvents_116.insert(ComplexEventType_116.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_116;
      ComplexOptPayoutAmount_116.setString("16695796");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_116);
      ComplexEvents_NoComplexEvents_116.insert(ComplexOptPayoutAmount_116.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_116);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_239;
        FIX::ComplexEventEndDate ComplexEventEndDate_239(FIX::UTCTIMESTAMP(2, 22, 19, 11, 52010));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_239);
        ComplexEventDates_NoComplexEventDates_239.insert(ComplexEventEndDate_239.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_239(FIX::UTCTIMESTAMP(1, 30, 24, 7, 112007));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_239);
        ComplexEventDates_NoComplexEventDates_239.insert(ComplexEventStartDate_239.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_239);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_471;
          FIX::ComplexEventEndTime ComplexEventEndTime_471(FIX::UTCTIMEONLY(14, 15, 20));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_471);
          ComplexEventTimes_NoComplexEventTimes_471.insert(ComplexEventEndTime_471.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_471(FIX::UTCTIMEONLY(11, 57, 43));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_471);
          ComplexEventTimes_NoComplexEventTimes_471.insert(ComplexEventStartTime_471.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_471);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_240;
        FIX::ComplexEventEndDate ComplexEventEndDate_240(FIX::UTCTIMESTAMP(7, 57, 6, 5, 62004));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_240);
        ComplexEventDates_NoComplexEventDates_240.insert(ComplexEventEndDate_240.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_240(FIX::UTCTIMESTAMP(23, 59, 33, 14, 32013));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_240);
        ComplexEventDates_NoComplexEventDates_240.insert(ComplexEventStartDate_240.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_240);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_472;
          FIX::ComplexEventEndTime ComplexEventEndTime_472(FIX::UTCTIMEONLY(7, 32, 3));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_472);
          ComplexEventTimes_NoComplexEventTimes_472.insert(ComplexEventEndTime_472.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_472(FIX::UTCTIMEONLY(22, 26, 12));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_472);
          ComplexEventTimes_NoComplexEventTimes_472.insert(ComplexEventStartTime_472.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_472);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_473;
          FIX::ComplexEventEndTime ComplexEventEndTime_473(FIX::UTCTIMEONLY(8, 19, 53));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_473);
          ComplexEventTimes_NoComplexEventTimes_473.insert(ComplexEventEndTime_473.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_473(FIX::UTCTIMEONLY(7, 42, 10));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_473);
          ComplexEventTimes_NoComplexEventTimes_473.insert(ComplexEventStartTime_473.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_473);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_474;
          FIX::ComplexEventEndTime ComplexEventEndTime_474(FIX::UTCTIMEONLY(5, 59, 55));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_474);
          ComplexEventTimes_NoComplexEventTimes_474.insert(ComplexEventEndTime_474.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_474(FIX::UTCTIMEONLY(4, 23, 41));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_474);
          ComplexEventTimes_NoComplexEventTimes_474.insert(ComplexEventStartTime_474.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_474);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_241;
        FIX::ComplexEventEndDate ComplexEventEndDate_241(FIX::UTCTIMESTAMP(10, 14, 37, 17, 52010));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_241);
        ComplexEventDates_NoComplexEventDates_241.insert(ComplexEventEndDate_241.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_241(FIX::UTCTIMESTAMP(3, 4, 27, 25, 82010));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_241);
        ComplexEventDates_NoComplexEventDates_241.insert(ComplexEventStartDate_241.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_241);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_475;
          FIX::ComplexEventEndTime ComplexEventEndTime_475(FIX::UTCTIMEONLY(6, 44, 0));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_475);
          ComplexEventTimes_NoComplexEventTimes_475.insert(ComplexEventEndTime_475.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_475(FIX::UTCTIMEONLY(7, 43, 4));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_475);
          ComplexEventTimes_NoComplexEventTimes_475.insert(ComplexEventStartTime_475.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_475);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_118;
      FIX::EventDate EventDate_118("LOCALMKTDATE_1615942260");
      noEvents_1_1_0.set(EventDate_118);
      EvntGrp_NoEvents_118.insert(EventDate_118.getString());
      FIX::EventPx EventPx_118;
      EventPx_118.setString("13731990");
      noEvents_1_1_0.set(EventPx_118);
      EvntGrp_NoEvents_118.insert(EventPx_118.getString());
      FIX::EventText EventText_118("STRING_662977939");
      noEvents_1_1_0.set(EventText_118);
      EvntGrp_NoEvents_118.insert(EventText_118.getString());
      FIX::EventTime EventTime_118(FIX::UTCTIMESTAMP(12, 35, 4, 11, 102005));
      noEvents_1_1_0.set(EventTime_118);
      EvntGrp_NoEvents_118.insert(EventTime_118.getString());
      FIX::EventType EventType_118(18);
      noEvents_1_1_0.set(EventType_118);
      EvntGrp_NoEvents_118.insert(EventType_118.getString());
      all_values.push_back(EvntGrp_NoEvents_118);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_119;
      FIX::EventDate EventDate_119("LOCALMKTDATE_2104682990");
      noEvents_1_1_1.set(EventDate_119);
      EvntGrp_NoEvents_119.insert(EventDate_119.getString());
      FIX::EventPx EventPx_119;
      EventPx_119.setString("1552418");
      noEvents_1_1_1.set(EventPx_119);
      EvntGrp_NoEvents_119.insert(EventPx_119.getString());
      FIX::EventText EventText_119("STRING_1169765389");
      noEvents_1_1_1.set(EventText_119);
      EvntGrp_NoEvents_119.insert(EventText_119.getString());
      FIX::EventTime EventTime_119(FIX::UTCTIMESTAMP(10, 45, 34, 11, 52006));
      noEvents_1_1_1.set(EventTime_119);
      EvntGrp_NoEvents_119.insert(EventTime_119.getString());
      FIX::EventType EventType_119(1);
      noEvents_1_1_1.set(EventType_119);
      EvntGrp_NoEvents_119.insert(EventType_119.getString());
      all_values.push_back(EvntGrp_NoEvents_119);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_120;
      FIX::EventDate EventDate_120("LOCALMKTDATE_1431800804");
      noEvents_1_1_2.set(EventDate_120);
      EvntGrp_NoEvents_120.insert(EventDate_120.getString());
      FIX::EventPx EventPx_120;
      EventPx_120.setString("21368086");
      noEvents_1_1_2.set(EventPx_120);
      EvntGrp_NoEvents_120.insert(EventPx_120.getString());
      FIX::EventText EventText_120("STRING_1585323184");
      noEvents_1_1_2.set(EventText_120);
      EvntGrp_NoEvents_120.insert(EventText_120.getString());
      FIX::EventTime EventTime_120(FIX::UTCTIMESTAMP(12, 40, 19, 16, 12012));
      noEvents_1_1_2.set(EventTime_120);
      EvntGrp_NoEvents_120.insert(EventTime_120.getString());
      FIX::EventType EventType_120(8);
      noEvents_1_1_2.set(EventType_120);
      EvntGrp_NoEvents_120.insert(EventType_120.getString());
      all_values.push_back(EvntGrp_NoEvents_120);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_111;
      FIX::InstrumentPartyID InstrumentPartyID_111("STRING_803888487");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyID_111.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_111('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyIDSource_111.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_111(174341879);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_111);
      InstrumentParties_NoInstrumentParties_111.insert(InstrumentPartyRole_111.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_111);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219;
        FIX::InstrumentPartySubID InstrumentPartySubID_219("STRING_944941495");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_219);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219.insert(InstrumentPartySubID_219.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_219(50858448);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_219);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219.insert(InstrumentPartySubIDType_219.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220;
        FIX::InstrumentPartySubID InstrumentPartySubID_220("STRING_1140178054");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_220);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220.insert(InstrumentPartySubID_220.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_220(656269384);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_220);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220.insert(InstrumentPartySubIDType_220.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221;
        FIX::InstrumentPartySubID InstrumentPartySubID_221("STRING_8057791");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_221);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221.insert(InstrumentPartySubID_221.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_221(1295419877);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_221);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221.insert(InstrumentPartySubIDType_221.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_123;
      FIX::SecurityAltID SecurityAltID_123("STRING_1543176765");
      noSecurityAltID_1_1_0.set(SecurityAltID_123);
      SecAltIDGrp_NoSecurityAltID_123.insert(SecurityAltID_123.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_123("STRING_1778497311");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_123);
      SecAltIDGrp_NoSecurityAltID_123.insert(SecurityAltIDSource_123.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_123);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_124;
      FIX::SecurityAltID SecurityAltID_124("STRING_2003052398");
      noSecurityAltID_1_1_1.set(SecurityAltID_124);
      SecAltIDGrp_NoSecurityAltID_124.insert(SecurityAltID_124.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_124("STRING_250275191");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_124);
      SecAltIDGrp_NoSecurityAltID_124.insert(SecurityAltIDSource_124.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_124);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_125;
      FIX::SecurityAltID SecurityAltID_125("STRING_490821938");
      noSecurityAltID_1_1_2.set(SecurityAltID_125);
      SecAltIDGrp_NoSecurityAltID_125.insert(SecurityAltID_125.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_125("STRING_336304139");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_125);
      SecAltIDGrp_NoSecurityAltID_125.insert(SecurityAltIDSource_125.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_125);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_120;
    FIX::SecurityXML SecurityXML_121("XMLDATA_252488063");
    noRelatedSym_0_1.set(SecurityXML_121);
    FIX::SecurityXMLLen SecurityXMLLen_60(1117937698);
    noRelatedSym_0_1.set(SecurityXMLLen_60);
    FIX::SecurityXMLSchema SecurityXMLSchema_60("STRING_1768104943");
    noRelatedSym_0_1.set(SecurityXMLSchema_60);
    SecurityXML_120.insert(SecurityXMLSchema_60.getString());
    all_values.push_back(SecurityXML_120);

    // OrderQtyData
    multiset<string> OrderQtyData_21;
    FIX::CashOrderQty CashOrderQty_21;
    CashOrderQty_21.setString("2418130");
    noRelatedSym_0_1.set(CashOrderQty_21);
    OrderQtyData_21.insert(CashOrderQty_21.getString());
    FIX::OrderPercent OrderPercent_21;
    OrderPercent_21.setString("72.350000");
    noRelatedSym_0_1.set(OrderPercent_21);
    OrderQtyData_21.insert(OrderPercent_21.getString());
    FIX::OrderQty OrderQty_30;
    OrderQty_30.setString("19780285");
    noRelatedSym_0_1.set(OrderQty_30);
    OrderQtyData_21.insert(OrderQty_30.getString());
    FIX::RoundingDirection RoundingDirection_21('1');
    noRelatedSym_0_1.set(RoundingDirection_21);
    OrderQtyData_21.insert(RoundingDirection_21.getString());
    FIX::RoundingModulus RoundingModulus_21;
    RoundingModulus_21.setString("6649003");
    noRelatedSym_0_1.set(RoundingModulus_21);
    OrderQtyData_21.insert(RoundingModulus_21.getString());
    all_values.push_back(OrderQtyData_21);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_112;
      FIX::PartyID PartyID_112("STRING_1663282902");
      noPartyIDs_1_1_0.set(PartyID_112);
      Parties_NoPartyIDs_112.insert(PartyID_112.getString());
      FIX::PartyIDSource PartyIDSource_112('5');
      noPartyIDs_1_1_0.set(PartyIDSource_112);
      Parties_NoPartyIDs_112.insert(PartyIDSource_112.getString());
      FIX::PartyRole PartyRole_112(37);
      noPartyIDs_1_1_0.set(PartyRole_112);
      Parties_NoPartyIDs_112.insert(PartyRole_112.getString());
      all_values.push_back(Parties_NoPartyIDs_112);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_219;
        FIX::PartySubID PartySubID_219("STRING_31229823");
        noPartySubIDs_1_0_2_0.set(PartySubID_219);
        PtysSubGrp_NoPartySubIDs_219.insert(PartySubID_219.getString());
        FIX::PartySubIDType PartySubIDType_219(12);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_219);
        PtysSubGrp_NoPartySubIDs_219.insert(PartySubIDType_219.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_219);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_113;
      FIX::PartyID PartyID_113("STRING_540253297");
      noPartyIDs_1_1_1.set(PartyID_113);
      Parties_NoPartyIDs_113.insert(PartyID_113.getString());
      FIX::PartyIDSource PartyIDSource_113('8');
      noPartyIDs_1_1_1.set(PartyIDSource_113);
      Parties_NoPartyIDs_113.insert(PartyIDSource_113.getString());
      FIX::PartyRole PartyRole_113(14);
      noPartyIDs_1_1_1.set(PartyRole_113);
      Parties_NoPartyIDs_113.insert(PartyRole_113.getString());
      all_values.push_back(Parties_NoPartyIDs_113);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_220;
        FIX::PartySubID PartySubID_220("STRING_256430151");
        noPartySubIDs_1_1_2_0.set(PartySubID_220);
        PtysSubGrp_NoPartySubIDs_220.insert(PartySubID_220.getString());
        FIX::PartySubIDType PartySubIDType_220(14);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_220);
        PtysSubGrp_NoPartySubIDs_220.insert(PartySubIDType_220.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_220);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_221;
        FIX::PartySubID PartySubID_221("STRING_2141464176");
        noPartySubIDs_1_1_2_1.set(PartySubID_221);
        PtysSubGrp_NoPartySubIDs_221.insert(PartySubID_221.getString());
        FIX::PartySubIDType PartySubIDType_221(5);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_221);
        PtysSubGrp_NoPartySubIDs_221.insert(PartySubIDType_221.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_221);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_222;
        FIX::PartySubID PartySubID_222("STRING_243502021");
        noPartySubIDs_1_1_2_2.set(PartySubID_222);
        PtysSubGrp_NoPartySubIDs_222.insert(PartySubID_222.getString());
        FIX::PartySubIDType PartySubIDType_222(28);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_222);
        PtysSubGrp_NoPartySubIDs_222.insert(PartySubIDType_222.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_222);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_5;
      FIX::QuoteQualifier QuoteQualifier_5('2');
      noQuoteQualifiers_1_1_0.set(QuoteQualifier_5);
      QuotQualGrp_NoQuoteQualifiers_5.insert(QuoteQualifier_5.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_5);

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_6;
      FIX::QuoteQualifier QuoteQualifier_6('1');
      noQuoteQualifiers_1_1_1.set(QuoteQualifier_6);
      QuotQualGrp_NoQuoteQualifiers_6.insert(QuoteQualifier_6.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_6);

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_1);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_3;
      FIX::LegOrderQty LegOrderQty_9;
      LegOrderQty_9.setString("3653376");
      noLegs_1_1_0.set(LegOrderQty_9);
      QuotReqLegsGrp_NoLegs_3.insert(LegOrderQty_9.getString());
      FIX::LegQty LegQty_9;
      LegQty_9.setString("20118881");
      noLegs_1_1_0.set(LegQty_9);
      QuotReqLegsGrp_NoLegs_3.insert(LegQty_9.getString());
      FIX::LegRefID LegRefID_9("STRING_162944314");
      noLegs_1_1_0.set(LegRefID_9);
      QuotReqLegsGrp_NoLegs_3.insert(LegRefID_9.getString());
      FIX::LegSettlDate LegSettlDate_9("LOCALMKTDATE_1483275322");
      noLegs_1_1_0.set(LegSettlDate_9);
      QuotReqLegsGrp_NoLegs_3.insert(LegSettlDate_9.getString());
      FIX::LegSettlType LegSettlType_9('1');
      noLegs_1_1_0.set(LegSettlType_9);
      QuotReqLegsGrp_NoLegs_3.insert(LegSettlType_9.getString());
      FIX::LegSwapType LegSwapType_9(1);
      noLegs_1_1_0.set(LegSwapType_9);
      QuotReqLegsGrp_NoLegs_3.insert(LegSwapType_9.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_3);

      // InstrumentLeg
      multiset<string> InstrumentLeg_78;
      FIX::EncodedLegIssuer EncodedLegIssuer_78("DATA_2039052557");
      noLegs_1_1_0.set(EncodedLegIssuer_78);
      InstrumentLeg_78.insert(EncodedLegIssuer_78.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_78(1463054377);
      noLegs_1_1_0.set(EncodedLegIssuerLen_78);
      InstrumentLeg_78.insert(EncodedLegIssuerLen_78.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_78("DATA_1987970562");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_78);
      InstrumentLeg_78.insert(EncodedLegSecurityDesc_78.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_78(556469264);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_78);
      InstrumentLeg_78.insert(EncodedLegSecurityDescLen_78.getString());
      FIX::LegCFICode LegCFICode_78("STRING_825025440");
      noLegs_1_1_0.set(LegCFICode_78);
      InstrumentLeg_78.insert(LegCFICode_78.getString());
      FIX::LegContractMultiplier LegContractMultiplier_78;
      LegContractMultiplier_78.setString("15037698");
      noLegs_1_1_0.set(LegContractMultiplier_78);
      InstrumentLeg_78.insert(LegContractMultiplier_78.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_78(573045383);
      noLegs_1_1_0.set(LegContractMultiplierUnit_78);
      InstrumentLeg_78.insert(LegContractMultiplierUnit_78.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_78("MONTHYEAR_1334364935");
      noLegs_1_1_0.set(LegContractSettlMonth_78);
      InstrumentLeg_78.insert(LegContractSettlMonth_78.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_78("COUNTRY_325354170");
      noLegs_1_1_0.set(LegCountryOfIssue_78);
      InstrumentLeg_78.insert(LegCountryOfIssue_78.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_78("LOCALMKTDATE_604275207");
      noLegs_1_1_0.set(LegCouponPaymentDate_78);
      InstrumentLeg_78.insert(LegCouponPaymentDate_78.getString());
      FIX::LegCouponRate LegCouponRate_78;
      LegCouponRate_78.setString("92.690000");
      noLegs_1_1_0.set(LegCouponRate_78);
      InstrumentLeg_78.insert(LegCouponRate_78.getString());
      FIX::LegCreditRating LegCreditRating_78("STRING_865607467");
      noLegs_1_1_0.set(LegCreditRating_78);
      InstrumentLeg_78.insert(LegCreditRating_78.getString());
      FIX::LegCurrency LegCurrency_78("JPY");
      noLegs_1_1_0.set(LegCurrency_78);
      InstrumentLeg_78.insert(LegCurrency_78.getString());
      FIX::LegDatedDate LegDatedDate_78("LOCALMKTDATE_203318611");
      noLegs_1_1_0.set(LegDatedDate_78);
      InstrumentLeg_78.insert(LegDatedDate_78.getString());
      FIX::LegExerciseStyle LegExerciseStyle_78(1066277060);
      noLegs_1_1_0.set(LegExerciseStyle_78);
      InstrumentLeg_78.insert(LegExerciseStyle_78.getString());
      FIX::LegFactor LegFactor_78;
      LegFactor_78.setString("15510627");
      noLegs_1_1_0.set(LegFactor_78);
      InstrumentLeg_78.insert(LegFactor_78.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_78(197299139);
      noLegs_1_1_0.set(LegFlowScheduleType_78);
      InstrumentLeg_78.insert(LegFlowScheduleType_78.getString());
      FIX::LegInstrRegistry LegInstrRegistry_78("STRING_1330765002");
      noLegs_1_1_0.set(LegInstrRegistry_78);
      InstrumentLeg_78.insert(LegInstrRegistry_78.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_78("LOCALMKTDATE_1794564820");
      noLegs_1_1_0.set(LegInterestAccrualDate_78);
      InstrumentLeg_78.insert(LegInterestAccrualDate_78.getString());
      FIX::LegIssueDate LegIssueDate_78("LOCALMKTDATE_2017314440");
      noLegs_1_1_0.set(LegIssueDate_78);
      InstrumentLeg_78.insert(LegIssueDate_78.getString());
      FIX::LegIssuer LegIssuer_78("STRING_990946062");
      noLegs_1_1_0.set(LegIssuer_78);
      InstrumentLeg_78.insert(LegIssuer_78.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_78("STRING_1669080505");
      noLegs_1_1_0.set(LegLocaleOfIssue_78);
      InstrumentLeg_78.insert(LegLocaleOfIssue_78.getString());
      FIX::LegMaturityDate LegMaturityDate_78("LOCALMKTDATE_1545414843");
      noLegs_1_1_0.set(LegMaturityDate_78);
      InstrumentLeg_78.insert(LegMaturityDate_78.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_78("MONTHYEAR_901402313");
      noLegs_1_1_0.set(LegMaturityMonthYear_78);
      InstrumentLeg_78.insert(LegMaturityMonthYear_78.getString());
      FIX::LegMaturityTime LegMaturityTime_78("TZTIMEONLY_2034418128");
      noLegs_1_1_0.set(LegMaturityTime_78);
      InstrumentLeg_78.insert(LegMaturityTime_78.getString());
      FIX::LegOptAttribute LegOptAttribute_78('1');
      noLegs_1_1_0.set(LegOptAttribute_78);
      InstrumentLeg_78.insert(LegOptAttribute_78.getString());
      FIX::LegOptionRatio LegOptionRatio_78;
      LegOptionRatio_78.setString("10643466");
      noLegs_1_1_0.set(LegOptionRatio_78);
      InstrumentLeg_78.insert(LegOptionRatio_78.getString());
      FIX::LegPool LegPool_78("STRING_1370209802");
      noLegs_1_1_0.set(LegPool_78);
      InstrumentLeg_78.insert(LegPool_78.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_78("STRING_894845223");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_78);
      InstrumentLeg_78.insert(LegPriceUnitOfMeasure_78.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_78;
      LegPriceUnitOfMeasureQty_78.setString("14691039");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_78);
      InstrumentLeg_78.insert(LegPriceUnitOfMeasureQty_78.getString());
      FIX::LegProduct LegProduct_78(1261778711);
      noLegs_1_1_0.set(LegProduct_78);
      InstrumentLeg_78.insert(LegProduct_78.getString());
      FIX::LegPutOrCall LegPutOrCall_78(210415952);
      noLegs_1_1_0.set(LegPutOrCall_78);
      InstrumentLeg_78.insert(LegPutOrCall_78.getString());
      FIX::LegRatioQty LegRatioQty_78;
      LegRatioQty_78.setString("13095908");
      noLegs_1_1_0.set(LegRatioQty_78);
      InstrumentLeg_78.insert(LegRatioQty_78.getString());
      FIX::LegRedemptionDate LegRedemptionDate_78("LOCALMKTDATE_1818247975");
      noLegs_1_1_0.set(LegRedemptionDate_78);
      InstrumentLeg_78.insert(LegRedemptionDate_78.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_78("STRING_1035441392");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_78);
      InstrumentLeg_78.insert(LegRepoCollateralSecurityType_78.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_78;
      LegRepurchaseRate_78.setString("70.550000");
      noLegs_1_1_0.set(LegRepurchaseRate_78);
      InstrumentLeg_78.insert(LegRepurchaseRate_78.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_78(243809711);
      noLegs_1_1_0.set(LegRepurchaseTerm_78);
      InstrumentLeg_78.insert(LegRepurchaseTerm_78.getString());
      FIX::LegSecurityDesc LegSecurityDesc_78("STRING_222322679");
      noLegs_1_1_0.set(LegSecurityDesc_78);
      InstrumentLeg_78.insert(LegSecurityDesc_78.getString());
      FIX::LegSecurityExchange LegSecurityExchange_78("EXCHANGE_991231225");
      noLegs_1_1_0.set(LegSecurityExchange_78);
      InstrumentLeg_78.insert(LegSecurityExchange_78.getString());
      FIX::LegSecurityID LegSecurityID_78("STRING_848084918");
      noLegs_1_1_0.set(LegSecurityID_78);
      InstrumentLeg_78.insert(LegSecurityID_78.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_78("STRING_722431948");
      noLegs_1_1_0.set(LegSecurityIDSource_78);
      InstrumentLeg_78.insert(LegSecurityIDSource_78.getString());
      FIX::LegSecuritySubType LegSecuritySubType_78("STRING_1856838692");
      noLegs_1_1_0.set(LegSecuritySubType_78);
      InstrumentLeg_78.insert(LegSecuritySubType_78.getString());
      FIX::LegSecurityType LegSecurityType_78("STRING_1657931827");
      noLegs_1_1_0.set(LegSecurityType_78);
      InstrumentLeg_78.insert(LegSecurityType_78.getString());
      FIX::LegSide LegSide_78('1');
      noLegs_1_1_0.set(LegSide_78);
      InstrumentLeg_78.insert(LegSide_78.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_78("STRING_2060157303");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_78);
      InstrumentLeg_78.insert(LegStateOrProvinceOfIssue_78.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_78("CHF");
      noLegs_1_1_0.set(LegStrikeCurrency_78);
      InstrumentLeg_78.insert(LegStrikeCurrency_78.getString());
      FIX::LegStrikePrice LegStrikePrice_78;
      LegStrikePrice_78.setString("1099727");
      noLegs_1_1_0.set(LegStrikePrice_78);
      InstrumentLeg_78.insert(LegStrikePrice_78.getString());
      FIX::LegSymbol LegSymbol_78("STRING_1907490242");
      noLegs_1_1_0.set(LegSymbol_78);
      InstrumentLeg_78.insert(LegSymbol_78.getString());
      FIX::LegSymbolSfx LegSymbolSfx_78("STRING_228589277");
      noLegs_1_1_0.set(LegSymbolSfx_78);
      InstrumentLeg_78.insert(LegSymbolSfx_78.getString());
      FIX::LegTimeUnit LegTimeUnit_78("STRING_2127287234");
      noLegs_1_1_0.set(LegTimeUnit_78);
      InstrumentLeg_78.insert(LegTimeUnit_78.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_78("STRING_750952656");
      noLegs_1_1_0.set(LegUnitOfMeasure_78);
      InstrumentLeg_78.insert(LegUnitOfMeasure_78.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_78;
      LegUnitOfMeasureQty_78.setString("18976697");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_78);
      InstrumentLeg_78.insert(LegUnitOfMeasureQty_78.getString());
      all_values.push_back(InstrumentLeg_78);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_136;
        FIX::LegSecurityAltID LegSecurityAltID_136("STRING_1652354969");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_136);
        LegSecAltIDGrp_NoLegSecurityAltID_136.insert(LegSecurityAltID_136.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_136("STRING_1784604263");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_136);
        LegSecAltIDGrp_NoLegSecurityAltID_136.insert(LegSecurityAltIDSource_136.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_136);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_4;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_4("EUR");
      noLegs_1_1_0.set(LegBenchmarkCurveCurrency_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurveCurrency_4.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_4("STRING_1007330417");
      noLegs_1_1_0.set(LegBenchmarkCurveName_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurveName_4.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_4("STRING_1682399391");
      noLegs_1_1_0.set(LegBenchmarkCurvePoint_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurvePoint_4.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_4;
      LegBenchmarkPrice_4.setString("20383219");
      noLegs_1_1_0.set(LegBenchmarkPrice_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkPrice_4.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_4(121625481);
      noLegs_1_1_0.set(LegBenchmarkPriceType_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkPriceType_4.getString());
      all_values.push_back(LegBenchmarkCurveData_4);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_22;
        FIX::LegStipulationType LegStipulationType_22("STRING_1200429159");
        noLegStipulations_1_0_2_0.set(LegStipulationType_22);
        LegStipulations_NoLegStipulations_22.insert(LegStipulationType_22.getString());
        FIX::LegStipulationValue LegStipulationValue_22("STRING_1939873456");
        noLegStipulations_1_0_2_0.set(LegStipulationValue_22);
        LegStipulations_NoLegStipulations_22.insert(LegStipulationValue_22.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_22);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_23;
        FIX::LegStipulationType LegStipulationType_23("STRING_780773088");
        noLegStipulations_1_0_2_1.set(LegStipulationType_23);
        LegStipulations_NoLegStipulations_23.insert(LegStipulationType_23.getString());
        FIX::LegStipulationValue LegStipulationValue_23("STRING_1866306214");
        noLegStipulations_1_0_2_1.set(LegStipulationValue_23);
        LegStipulations_NoLegStipulations_23.insert(LegStipulationValue_23.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_23);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_24;
        FIX::LegStipulationType LegStipulationType_24("STRING_36199519");
        noLegStipulations_1_0_2_2.set(LegStipulationType_24);
        LegStipulations_NoLegStipulations_24.insert(LegStipulationType_24.getString());
        FIX::LegStipulationValue LegStipulationValue_24("STRING_1003095767");
        noLegStipulations_1_0_2_2.set(LegStipulationValue_24);
        LegStipulations_NoLegStipulations_24.insert(LegStipulationValue_24.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_24);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_102;
        FIX::NestedPartyID NestedPartyID_102("STRING_884284437");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyID_102.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_102('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyIDSource_102.getString());
        FIX::NestedPartyRole NestedPartyRole_102(419408835);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyRole_102.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_102);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_194;
          FIX::NestedPartySubID NestedPartySubID_194("STRING_755973023");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_194);
          NstdPtysSubGrp_NoNestedPartySubIDs_194.insert(NestedPartySubID_194.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_194(332082490);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_194);
          NstdPtysSubGrp_NoNestedPartySubIDs_194.insert(NestedPartySubIDType_194.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_194);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_1_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_4;
      FIX::LegOrderQty LegOrderQty_10;
      LegOrderQty_10.setString("9714578");
      noLegs_1_1_1.set(LegOrderQty_10);
      QuotReqLegsGrp_NoLegs_4.insert(LegOrderQty_10.getString());
      FIX::LegQty LegQty_10;
      LegQty_10.setString("13374811");
      noLegs_1_1_1.set(LegQty_10);
      QuotReqLegsGrp_NoLegs_4.insert(LegQty_10.getString());
      FIX::LegRefID LegRefID_10("STRING_442055284");
      noLegs_1_1_1.set(LegRefID_10);
      QuotReqLegsGrp_NoLegs_4.insert(LegRefID_10.getString());
      FIX::LegSettlDate LegSettlDate_10("LOCALMKTDATE_731464451");
      noLegs_1_1_1.set(LegSettlDate_10);
      QuotReqLegsGrp_NoLegs_4.insert(LegSettlDate_10.getString());
      FIX::LegSettlType LegSettlType_10('1');
      noLegs_1_1_1.set(LegSettlType_10);
      QuotReqLegsGrp_NoLegs_4.insert(LegSettlType_10.getString());
      FIX::LegSwapType LegSwapType_10(4);
      noLegs_1_1_1.set(LegSwapType_10);
      QuotReqLegsGrp_NoLegs_4.insert(LegSwapType_10.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_4);

      // InstrumentLeg
      multiset<string> InstrumentLeg_79;
      FIX::EncodedLegIssuer EncodedLegIssuer_79("DATA_1482417108");
      noLegs_1_1_1.set(EncodedLegIssuer_79);
      InstrumentLeg_79.insert(EncodedLegIssuer_79.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_79(1316256540);
      noLegs_1_1_1.set(EncodedLegIssuerLen_79);
      InstrumentLeg_79.insert(EncodedLegIssuerLen_79.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_79("DATA_1947077300");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_79);
      InstrumentLeg_79.insert(EncodedLegSecurityDesc_79.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_79(987288429);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_79);
      InstrumentLeg_79.insert(EncodedLegSecurityDescLen_79.getString());
      FIX::LegCFICode LegCFICode_79("STRING_953377155");
      noLegs_1_1_1.set(LegCFICode_79);
      InstrumentLeg_79.insert(LegCFICode_79.getString());
      FIX::LegContractMultiplier LegContractMultiplier_79;
      LegContractMultiplier_79.setString("5871478");
      noLegs_1_1_1.set(LegContractMultiplier_79);
      InstrumentLeg_79.insert(LegContractMultiplier_79.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_79(1556506378);
      noLegs_1_1_1.set(LegContractMultiplierUnit_79);
      InstrumentLeg_79.insert(LegContractMultiplierUnit_79.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_79("MONTHYEAR_1960707573");
      noLegs_1_1_1.set(LegContractSettlMonth_79);
      InstrumentLeg_79.insert(LegContractSettlMonth_79.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_79("COUNTRY_122063562");
      noLegs_1_1_1.set(LegCountryOfIssue_79);
      InstrumentLeg_79.insert(LegCountryOfIssue_79.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_79("LOCALMKTDATE_1447344651");
      noLegs_1_1_1.set(LegCouponPaymentDate_79);
      InstrumentLeg_79.insert(LegCouponPaymentDate_79.getString());
      FIX::LegCouponRate LegCouponRate_79;
      LegCouponRate_79.setString("30.540000");
      noLegs_1_1_1.set(LegCouponRate_79);
      InstrumentLeg_79.insert(LegCouponRate_79.getString());
      FIX::LegCreditRating LegCreditRating_79("STRING_2014878906");
      noLegs_1_1_1.set(LegCreditRating_79);
      InstrumentLeg_79.insert(LegCreditRating_79.getString());
      FIX::LegCurrency LegCurrency_79("GBP");
      noLegs_1_1_1.set(LegCurrency_79);
      InstrumentLeg_79.insert(LegCurrency_79.getString());
      FIX::LegDatedDate LegDatedDate_79("LOCALMKTDATE_648168346");
      noLegs_1_1_1.set(LegDatedDate_79);
      InstrumentLeg_79.insert(LegDatedDate_79.getString());
      FIX::LegExerciseStyle LegExerciseStyle_79(219112729);
      noLegs_1_1_1.set(LegExerciseStyle_79);
      InstrumentLeg_79.insert(LegExerciseStyle_79.getString());
      FIX::LegFactor LegFactor_79;
      LegFactor_79.setString("19109223");
      noLegs_1_1_1.set(LegFactor_79);
      InstrumentLeg_79.insert(LegFactor_79.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_79(1651264113);
      noLegs_1_1_1.set(LegFlowScheduleType_79);
      InstrumentLeg_79.insert(LegFlowScheduleType_79.getString());
      FIX::LegInstrRegistry LegInstrRegistry_79("STRING_929166521");
      noLegs_1_1_1.set(LegInstrRegistry_79);
      InstrumentLeg_79.insert(LegInstrRegistry_79.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_79("LOCALMKTDATE_647723171");
      noLegs_1_1_1.set(LegInterestAccrualDate_79);
      InstrumentLeg_79.insert(LegInterestAccrualDate_79.getString());
      FIX::LegIssueDate LegIssueDate_79("LOCALMKTDATE_1229308181");
      noLegs_1_1_1.set(LegIssueDate_79);
      InstrumentLeg_79.insert(LegIssueDate_79.getString());
      FIX::LegIssuer LegIssuer_79("STRING_1348575356");
      noLegs_1_1_1.set(LegIssuer_79);
      InstrumentLeg_79.insert(LegIssuer_79.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_79("STRING_1042455788");
      noLegs_1_1_1.set(LegLocaleOfIssue_79);
      InstrumentLeg_79.insert(LegLocaleOfIssue_79.getString());
      FIX::LegMaturityDate LegMaturityDate_79("LOCALMKTDATE_1985281204");
      noLegs_1_1_1.set(LegMaturityDate_79);
      InstrumentLeg_79.insert(LegMaturityDate_79.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_79("MONTHYEAR_1680657847");
      noLegs_1_1_1.set(LegMaturityMonthYear_79);
      InstrumentLeg_79.insert(LegMaturityMonthYear_79.getString());
      FIX::LegMaturityTime LegMaturityTime_79("TZTIMEONLY_2013913645");
      noLegs_1_1_1.set(LegMaturityTime_79);
      InstrumentLeg_79.insert(LegMaturityTime_79.getString());
      FIX::LegOptAttribute LegOptAttribute_79('1');
      noLegs_1_1_1.set(LegOptAttribute_79);
      InstrumentLeg_79.insert(LegOptAttribute_79.getString());
      FIX::LegOptionRatio LegOptionRatio_79;
      LegOptionRatio_79.setString("21227131");
      noLegs_1_1_1.set(LegOptionRatio_79);
      InstrumentLeg_79.insert(LegOptionRatio_79.getString());
      FIX::LegPool LegPool_79("STRING_597894449");
      noLegs_1_1_1.set(LegPool_79);
      InstrumentLeg_79.insert(LegPool_79.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_79("STRING_593865443");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_79);
      InstrumentLeg_79.insert(LegPriceUnitOfMeasure_79.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_79;
      LegPriceUnitOfMeasureQty_79.setString("3970883");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_79);
      InstrumentLeg_79.insert(LegPriceUnitOfMeasureQty_79.getString());
      FIX::LegProduct LegProduct_79(2080311557);
      noLegs_1_1_1.set(LegProduct_79);
      InstrumentLeg_79.insert(LegProduct_79.getString());
      FIX::LegPutOrCall LegPutOrCall_79(1910121983);
      noLegs_1_1_1.set(LegPutOrCall_79);
      InstrumentLeg_79.insert(LegPutOrCall_79.getString());
      FIX::LegRatioQty LegRatioQty_79;
      LegRatioQty_79.setString("1966820");
      noLegs_1_1_1.set(LegRatioQty_79);
      InstrumentLeg_79.insert(LegRatioQty_79.getString());
      FIX::LegRedemptionDate LegRedemptionDate_79("LOCALMKTDATE_920116338");
      noLegs_1_1_1.set(LegRedemptionDate_79);
      InstrumentLeg_79.insert(LegRedemptionDate_79.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_79("STRING_716015491");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_79);
      InstrumentLeg_79.insert(LegRepoCollateralSecurityType_79.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_79;
      LegRepurchaseRate_79.setString("98.250000");
      noLegs_1_1_1.set(LegRepurchaseRate_79);
      InstrumentLeg_79.insert(LegRepurchaseRate_79.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_79(329139069);
      noLegs_1_1_1.set(LegRepurchaseTerm_79);
      InstrumentLeg_79.insert(LegRepurchaseTerm_79.getString());
      FIX::LegSecurityDesc LegSecurityDesc_79("STRING_529239416");
      noLegs_1_1_1.set(LegSecurityDesc_79);
      InstrumentLeg_79.insert(LegSecurityDesc_79.getString());
      FIX::LegSecurityExchange LegSecurityExchange_79("EXCHANGE_905893388");
      noLegs_1_1_1.set(LegSecurityExchange_79);
      InstrumentLeg_79.insert(LegSecurityExchange_79.getString());
      FIX::LegSecurityID LegSecurityID_79("STRING_1776483720");
      noLegs_1_1_1.set(LegSecurityID_79);
      InstrumentLeg_79.insert(LegSecurityID_79.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_79("STRING_464088822");
      noLegs_1_1_1.set(LegSecurityIDSource_79);
      InstrumentLeg_79.insert(LegSecurityIDSource_79.getString());
      FIX::LegSecuritySubType LegSecuritySubType_79("STRING_773288646");
      noLegs_1_1_1.set(LegSecuritySubType_79);
      InstrumentLeg_79.insert(LegSecuritySubType_79.getString());
      FIX::LegSecurityType LegSecurityType_79("STRING_129290235");
      noLegs_1_1_1.set(LegSecurityType_79);
      InstrumentLeg_79.insert(LegSecurityType_79.getString());
      FIX::LegSide LegSide_79('1');
      noLegs_1_1_1.set(LegSide_79);
      InstrumentLeg_79.insert(LegSide_79.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_79("STRING_1421456992");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_79);
      InstrumentLeg_79.insert(LegStateOrProvinceOfIssue_79.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_79("JPY");
      noLegs_1_1_1.set(LegStrikeCurrency_79);
      InstrumentLeg_79.insert(LegStrikeCurrency_79.getString());
      FIX::LegStrikePrice LegStrikePrice_79;
      LegStrikePrice_79.setString("9252374");
      noLegs_1_1_1.set(LegStrikePrice_79);
      InstrumentLeg_79.insert(LegStrikePrice_79.getString());
      FIX::LegSymbol LegSymbol_79("STRING_1277569486");
      noLegs_1_1_1.set(LegSymbol_79);
      InstrumentLeg_79.insert(LegSymbol_79.getString());
      FIX::LegSymbolSfx LegSymbolSfx_79("STRING_602489942");
      noLegs_1_1_1.set(LegSymbolSfx_79);
      InstrumentLeg_79.insert(LegSymbolSfx_79.getString());
      FIX::LegTimeUnit LegTimeUnit_79("STRING_7061991");
      noLegs_1_1_1.set(LegTimeUnit_79);
      InstrumentLeg_79.insert(LegTimeUnit_79.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_79("STRING_478661194");
      noLegs_1_1_1.set(LegUnitOfMeasure_79);
      InstrumentLeg_79.insert(LegUnitOfMeasure_79.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_79;
      LegUnitOfMeasureQty_79.setString("16449457");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_79);
      InstrumentLeg_79.insert(LegUnitOfMeasureQty_79.getString());
      all_values.push_back(InstrumentLeg_79);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_137;
        FIX::LegSecurityAltID LegSecurityAltID_137("STRING_11835393");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_137);
        LegSecAltIDGrp_NoLegSecurityAltID_137.insert(LegSecurityAltID_137.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_137("STRING_1511375728");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_137);
        LegSecAltIDGrp_NoLegSecurityAltID_137.insert(LegSecurityAltIDSource_137.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_137);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_138;
        FIX::LegSecurityAltID LegSecurityAltID_138("STRING_1020138232");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_138);
        LegSecAltIDGrp_NoLegSecurityAltID_138.insert(LegSecurityAltID_138.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_138("STRING_2134548525");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_138);
        LegSecAltIDGrp_NoLegSecurityAltID_138.insert(LegSecurityAltIDSource_138.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_138);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_5;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_5("CHF");
      noLegs_1_1_1.set(LegBenchmarkCurveCurrency_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurveCurrency_5.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_5("STRING_384153231");
      noLegs_1_1_1.set(LegBenchmarkCurveName_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurveName_5.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_5("STRING_2042098086");
      noLegs_1_1_1.set(LegBenchmarkCurvePoint_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurvePoint_5.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_5;
      LegBenchmarkPrice_5.setString("13766420");
      noLegs_1_1_1.set(LegBenchmarkPrice_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkPrice_5.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_5(580835237);
      noLegs_1_1_1.set(LegBenchmarkPriceType_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkPriceType_5.getString());
      all_values.push_back(LegBenchmarkCurveData_5);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_25;
        FIX::LegStipulationType LegStipulationType_25("STRING_2092657502");
        noLegStipulations_1_1_2_0.set(LegStipulationType_25);
        LegStipulations_NoLegStipulations_25.insert(LegStipulationType_25.getString());
        FIX::LegStipulationValue LegStipulationValue_25("STRING_1364665062");
        noLegStipulations_1_1_2_0.set(LegStipulationValue_25);
        LegStipulations_NoLegStipulations_25.insert(LegStipulationValue_25.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_25);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_26;
        FIX::LegStipulationType LegStipulationType_26("STRING_1143869845");
        noLegStipulations_1_1_2_1.set(LegStipulationType_26);
        LegStipulations_NoLegStipulations_26.insert(LegStipulationType_26.getString());
        FIX::LegStipulationValue LegStipulationValue_26("STRING_474413270");
        noLegStipulations_1_1_2_1.set(LegStipulationValue_26);
        LegStipulations_NoLegStipulations_26.insert(LegStipulationValue_26.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_26);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_103;
        FIX::NestedPartyID NestedPartyID_103("STRING_772869918");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyID_103.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_103('9');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyIDSource_103.getString());
        FIX::NestedPartyRole NestedPartyRole_103(896363448);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyRole_103.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_103);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_195;
          FIX::NestedPartySubID NestedPartySubID_195("STRING_1129830128");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_195);
          NstdPtysSubGrp_NoNestedPartySubIDs_195.insert(NestedPartySubID_195.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_195(170336792);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_195);
          NstdPtysSubGrp_NoNestedPartySubIDs_195.insert(NestedPartySubIDType_195.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_195);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_1_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_17;
      FIX::RateSource RateSource_26(99);
      noRateSources_1_1_0.set(RateSource_26);
      RateSource_NoRateSources_17.insert(RateSource_26.getString());
      FIX::RateSourceType RateSourceType_17(0);
      noRateSources_1_1_0.set(RateSourceType_17);
      RateSource_NoRateSources_17.insert(RateSourceType_17.getString());
      FIX::ReferencePage ReferencePage_17("STRING_380648956");
      noRateSources_1_1_0.set(ReferencePage_17);
      RateSource_NoRateSources_17.insert(ReferencePage_17.getString());
      all_values.push_back(RateSource_NoRateSources_17);

      noRelatedSym_0_1.addGroup(noRateSources_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_1_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_18;
      FIX::RateSource RateSource_27(1);
      noRateSources_1_1_1.set(RateSource_27);
      RateSource_NoRateSources_18.insert(RateSource_27.getString());
      FIX::RateSourceType RateSourceType_18(1);
      noRateSources_1_1_1.set(RateSourceType_18);
      RateSource_NoRateSources_18.insert(RateSourceType_18.getString());
      FIX::ReferencePage ReferencePage_18("STRING_859310151");
      noRateSources_1_1_1.set(ReferencePage_18);
      RateSource_NoRateSources_18.insert(ReferencePage_18.getString());
      all_values.push_back(RateSource_NoRateSources_18);

      noRelatedSym_0_1.addGroup(noRateSources_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_1_1_2;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_19;
      FIX::RateSource RateSource_28(99);
      noRateSources_1_1_2.set(RateSource_28);
      RateSource_NoRateSources_19.insert(RateSource_28.getString());
      FIX::RateSourceType RateSourceType_19(0);
      noRateSources_1_1_2.set(RateSourceType_19);
      RateSource_NoRateSources_19.insert(RateSourceType_19.getString());
      FIX::ReferencePage ReferencePage_19("STRING_871145544");
      noRateSources_1_1_2.set(ReferencePage_19);
      RateSource_NoRateSources_19.insert(ReferencePage_19.getString());
      all_values.push_back(RateSource_NoRateSources_19);

      noRelatedSym_0_1.addGroup(noRateSources_1_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_23;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_23("CHF");
    noRelatedSym_0_1.set(BenchmarkCurveCurrency_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurveCurrency_23.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_23("STRING_EUREPO");
    noRelatedSym_0_1.set(BenchmarkCurveName_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurveName_23.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_23("STRING_510227532");
    noRelatedSym_0_1.set(BenchmarkCurvePoint_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurvePoint_23.getString());
    FIX::BenchmarkPrice BenchmarkPrice_23;
    BenchmarkPrice_23.setString("14341540");
    noRelatedSym_0_1.set(BenchmarkPrice_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkPrice_23.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_23(1242363652);
    noRelatedSym_0_1.set(BenchmarkPriceType_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkPriceType_23.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_23("STRING_404841970");
    noRelatedSym_0_1.set(BenchmarkSecurityID_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkSecurityID_23.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_23("STRING_663312411");
    noRelatedSym_0_1.set(BenchmarkSecurityIDSource_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkSecurityIDSource_23.getString());
    FIX::Spread Spread_23;
    Spread_23.setString("18231988");
    noRelatedSym_0_1.set(Spread_23);
    SpreadOrBenchmarkCurveData_23.insert(Spread_23.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_23);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_41;
      FIX::StipulationType StipulationType_41("STRING_PPL");
      noStipulations_1_1_0.set(StipulationType_41);
      Stipulations_NoStipulations_41.insert(StipulationType_41.getString());
      FIX::StipulationValue StipulationValue_41("STRING_1040380304");
      noStipulations_1_1_0.set(StipulationValue_41);
      Stipulations_NoStipulations_41.insert(StipulationValue_41.getString());
      all_values.push_back(Stipulations_NoStipulations_41);

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_96;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_96("DATA_1082899535");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingIssuer_96.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_96(1163455106);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingIssuerLen_96.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_96("DATA_988828862");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingSecurityDesc_96.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_96(2021401627);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_96);
      UnderlyingInstrument_96.insert(EncodedUnderlyingSecurityDescLen_96.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_96;
      UnderlyingAdjustedQuantity_96.setString("20598185");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_96);
      UnderlyingInstrument_96.insert(UnderlyingAdjustedQuantity_96.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_96;
      UnderlyingAllocationPercent_96.setString("90.160000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_96);
      UnderlyingInstrument_96.insert(UnderlyingAllocationPercent_96.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_96;
      UnderlyingAttachmentPoint_96.setString("81.080000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_96);
      UnderlyingInstrument_96.insert(UnderlyingAttachmentPoint_96.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_96("STRING_82671699");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_96);
      UnderlyingInstrument_96.insert(UnderlyingCFICode_96.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_96("STRING_994068486");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_96);
      UnderlyingInstrument_96.insert(UnderlyingCPProgram_96.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_96("STRING_2088345007");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_96);
      UnderlyingInstrument_96.insert(UnderlyingCPRegType_96.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_96;
      UnderlyingCapValue_96.setString("11782459");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_96);
      UnderlyingInstrument_96.insert(UnderlyingCapValue_96.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_96;
      UnderlyingCashAmount_96.setString("13747174");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_96);
      UnderlyingInstrument_96.insert(UnderlyingCashAmount_96.getString());
      FIX::UnderlyingCashType UnderlyingCashType_96("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_96);
      UnderlyingInstrument_96.insert(UnderlyingCashType_96.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_96;
      UnderlyingContractMultiplier_96.setString("1333985");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_96);
      UnderlyingInstrument_96.insert(UnderlyingContractMultiplier_96.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_96(86543946);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_96);
      UnderlyingInstrument_96.insert(UnderlyingContractMultiplierUnit_96.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_96("COUNTRY_665013475");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingCountryOfIssue_96.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_96("LOCALMKTDATE_1080894331");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_96);
      UnderlyingInstrument_96.insert(UnderlyingCouponPaymentDate_96.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_96;
      UnderlyingCouponRate_96.setString("94.900000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_96);
      UnderlyingInstrument_96.insert(UnderlyingCouponRate_96.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_96("STRING_1213454479");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_96);
      UnderlyingInstrument_96.insert(UnderlyingCreditRating_96.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_96("GBP");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_96);
      UnderlyingInstrument_96.insert(UnderlyingCurrency_96.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_96;
      UnderlyingCurrentValue_96.setString("17236820");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_96);
      UnderlyingInstrument_96.insert(UnderlyingCurrentValue_96.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_96;
      UnderlyingDetachmentPoint_96.setString("51.040000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_96);
      UnderlyingInstrument_96.insert(UnderlyingDetachmentPoint_96.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_96;
      UnderlyingDirtyPrice_96.setString("9107799");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_96);
      UnderlyingInstrument_96.insert(UnderlyingDirtyPrice_96.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_96;
      UnderlyingEndPrice_96.setString("21285239");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_96);
      UnderlyingInstrument_96.insert(UnderlyingEndPrice_96.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_96;
      UnderlyingEndValue_96.setString("8510275");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_96);
      UnderlyingInstrument_96.insert(UnderlyingEndValue_96.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_96(586495158);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_96);
      UnderlyingInstrument_96.insert(UnderlyingExerciseStyle_96.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_96;
      UnderlyingFXRate_96.setString("12006130");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_96);
      UnderlyingInstrument_96.insert(UnderlyingFXRate_96.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_96('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_96);
      UnderlyingInstrument_96.insert(UnderlyingFXRateCalc_96.getString());
      FIX::UnderlyingFactor UnderlyingFactor_96;
      UnderlyingFactor_96.setString("16268754");
      noUnderlyings_1_1_0.set(UnderlyingFactor_96);
      UnderlyingInstrument_96.insert(UnderlyingFactor_96.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_96(1416572025);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_96);
      UnderlyingInstrument_96.insert(UnderlyingFlowScheduleType_96.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_96("STRING_394929669");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_96);
      UnderlyingInstrument_96.insert(UnderlyingInstrRegistry_96.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_96("LOCALMKTDATE_642846920");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_96);
      UnderlyingInstrument_96.insert(UnderlyingIssueDate_96.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_96("STRING_257917240");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_96);
      UnderlyingInstrument_96.insert(UnderlyingIssuer_96.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_96("STRING_268847648");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingLocaleOfIssue_96.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_96("LOCALMKTDATE_555181827");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityDate_96.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_96("MONTHYEAR_1422608");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityMonthYear_96.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_96("TZTIMEONLY_1272595756");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_96);
      UnderlyingInstrument_96.insert(UnderlyingMaturityTime_96.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_96;
      UnderlyingNotionalPercentageOutstanding_96.setString("35.270000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_96);
      UnderlyingInstrument_96.insert(UnderlyingNotionalPercentageOutstanding_96.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_96('9');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_96);
      UnderlyingInstrument_96.insert(UnderlyingOptAttribute_96.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_96;
      UnderlyingOriginalNotionalPercentageOutstanding_96.setString("71.150000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_96);
      UnderlyingInstrument_96.insert(UnderlyingOriginalNotionalPercentageOutstanding_96.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_96("STRING_1816099476");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_96);
      UnderlyingInstrument_96.insert(UnderlyingPriceUnitOfMeasure_96.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_96;
      UnderlyingPriceUnitOfMeasureQty_96.setString("2227248");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_96);
      UnderlyingInstrument_96.insert(UnderlyingPriceUnitOfMeasureQty_96.getString());
      FIX::UnderlyingProduct UnderlyingProduct_96(693921667);
      noUnderlyings_1_1_0.set(UnderlyingProduct_96);
      UnderlyingInstrument_96.insert(UnderlyingProduct_96.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_96(1949498019);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_96);
      UnderlyingInstrument_96.insert(UnderlyingPutOrCall_96.getString());
      FIX::UnderlyingPx UnderlyingPx_96;
      UnderlyingPx_96.setString("3092688");
      noUnderlyings_1_1_0.set(UnderlyingPx_96);
      UnderlyingInstrument_96.insert(UnderlyingPx_96.getString());
      FIX::UnderlyingQty UnderlyingQty_96;
      UnderlyingQty_96.setString("13589351");
      noUnderlyings_1_1_0.set(UnderlyingQty_96);
      UnderlyingInstrument_96.insert(UnderlyingQty_96.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_96("LOCALMKTDATE_882908702");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_96);
      UnderlyingInstrument_96.insert(UnderlyingRedemptionDate_96.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_96("STRING_1266958326");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_96);
      UnderlyingInstrument_96.insert(UnderlyingRepoCollateralSecurityType_96.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_96;
      UnderlyingRepurchaseRate_96.setString("59.740000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_96);
      UnderlyingInstrument_96.insert(UnderlyingRepurchaseRate_96.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_96(1783953406);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_96);
      UnderlyingInstrument_96.insert(UnderlyingRepurchaseTerm_96.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_96("STRING_935374590");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_96);
      UnderlyingInstrument_96.insert(UnderlyingRestructuringType_96.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_96("STRING_1104337");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityDesc_96.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_96("EXCHANGE_1971668510");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityExchange_96.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_96("STRING_1846154506");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityID_96.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_96("STRING_2129628319");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityIDSource_96.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_96("STRING_675212378");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_96);
      UnderlyingInstrument_96.insert(UnderlyingSecuritySubType_96.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_96("STRING_285166016");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_96);
      UnderlyingInstrument_96.insert(UnderlyingSecurityType_96.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_96("STRING_1182757752");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_96);
      UnderlyingInstrument_96.insert(UnderlyingSeniority_96.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_96("STRING_2134726160");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_96);
      UnderlyingInstrument_96.insert(UnderlyingSettlMethod_96.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_96(4);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_96);
      UnderlyingInstrument_96.insert(UnderlyingSettlementType_96.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_96;
      UnderlyingStartValue_96.setString("4518461");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_96);
      UnderlyingInstrument_96.insert(UnderlyingStartValue_96.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_96("STRING_382172181");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_96);
      UnderlyingInstrument_96.insert(UnderlyingStateOrProvinceOfIssue_96.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_96("USD");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_96);
      UnderlyingInstrument_96.insert(UnderlyingStrikeCurrency_96.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_96;
      UnderlyingStrikePrice_96.setString("6510198");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_96);
      UnderlyingInstrument_96.insert(UnderlyingStrikePrice_96.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_96("STRING_962586578");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_96);
      UnderlyingInstrument_96.insert(UnderlyingSymbol_96.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_96("STRING_711185978");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_96);
      UnderlyingInstrument_96.insert(UnderlyingSymbolSfx_96.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_96("STRING_1923615586");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_96);
      UnderlyingInstrument_96.insert(UnderlyingTimeUnit_96.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_96("STRING_1600440105");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_96);
      UnderlyingInstrument_96.insert(UnderlyingUnitOfMeasure_96.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_96;
      UnderlyingUnitOfMeasureQty_96.setString("17066770");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_96);
      UnderlyingInstrument_96.insert(UnderlyingUnitOfMeasureQty_96.getString());
      all_values.push_back(UnderlyingInstrument_96);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_190;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_190("STRING_1269055934");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_190);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_190.insert(UnderlyingSecurityAltID_190.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_190("STRING_1929401962");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_190);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_190.insert(UnderlyingSecurityAltIDSource_190.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_191;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_191("STRING_1683510721");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_191);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_191.insert(UnderlyingSecurityAltID_191.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_191("STRING_1071070305");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_191);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_191.insert(UnderlyingSecurityAltIDSource_191.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_192;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_192("STRING_91187149");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltID_192);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_192.insert(UnderlyingSecurityAltID_192.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_192("STRING_894962216");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltIDSource_192);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_192.insert(UnderlyingSecurityAltIDSource_192.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_183;
        FIX::UnderlyingStipType UnderlyingStipType_183("STRING_1358145475");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_183);
        UnderlyingStipulations_NoUnderlyingStips_183.insert(UnderlyingStipType_183.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_183("STRING_1319868190");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_183);
        UnderlyingStipulations_NoUnderlyingStips_183.insert(UnderlyingStipValue_183.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_183);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_184;
        FIX::UnderlyingStipType UnderlyingStipType_184("STRING_1590448765");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_184);
        UnderlyingStipulations_NoUnderlyingStips_184.insert(UnderlyingStipType_184.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_184("STRING_146036417");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_184);
        UnderlyingStipulations_NoUnderlyingStips_184.insert(UnderlyingStipValue_184.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_184);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_185;
        FIX::UnderlyingStipType UnderlyingStipType_185("STRING_1320972527");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_185);
        UnderlyingStipulations_NoUnderlyingStips_185.insert(UnderlyingStipType_185.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_185("STRING_1414633627");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_185);
        UnderlyingStipulations_NoUnderlyingStips_185.insert(UnderlyingStipValue_185.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_185);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_198;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_198("STRING_1303117199");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyID_198.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_198('2');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyIDSource_198.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_198(129873292);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyRole_198.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_198);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_391("STRING_2077088518");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_391);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391.insert(UnderlyingInstrumentPartySubID_391.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_391(2041914771);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_391);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391.insert(UnderlyingInstrumentPartySubIDType_391.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_199;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_199("STRING_790237433");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyID_199.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_199('3');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyIDSource_199.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_199(301835874);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyRole_199.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_199);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_392("STRING_962796880");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_392);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392.insert(UnderlyingInstrumentPartySubID_392.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_392(1264422452);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_392);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392.insert(UnderlyingInstrumentPartySubIDType_392.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_393("STRING_63703133");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_393);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393.insert(UnderlyingInstrumentPartySubID_393.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_393(738928818);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_393);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393.insert(UnderlyingInstrumentPartySubIDType_393.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_394("STRING_717378910");
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubID_394);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394.insert(UnderlyingInstrumentPartySubID_394.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_394(1770380206);
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_394);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394.insert(UnderlyingInstrumentPartySubIDType_394.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_97;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_97("DATA_1728517872");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingIssuer_97.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_97(1986434844);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingIssuerLen_97.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_97("DATA_1552298520");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingSecurityDesc_97.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_97(1264544945);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_97);
      UnderlyingInstrument_97.insert(EncodedUnderlyingSecurityDescLen_97.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_97;
      UnderlyingAdjustedQuantity_97.setString("9100215");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_97);
      UnderlyingInstrument_97.insert(UnderlyingAdjustedQuantity_97.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_97;
      UnderlyingAllocationPercent_97.setString("56.690000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_97);
      UnderlyingInstrument_97.insert(UnderlyingAllocationPercent_97.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_97;
      UnderlyingAttachmentPoint_97.setString("35.130000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_97);
      UnderlyingInstrument_97.insert(UnderlyingAttachmentPoint_97.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_97("STRING_716516860");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_97);
      UnderlyingInstrument_97.insert(UnderlyingCFICode_97.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_97("STRING_854147497");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_97);
      UnderlyingInstrument_97.insert(UnderlyingCPProgram_97.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_97("STRING_1331891703");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_97);
      UnderlyingInstrument_97.insert(UnderlyingCPRegType_97.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_97;
      UnderlyingCapValue_97.setString("1594819");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_97);
      UnderlyingInstrument_97.insert(UnderlyingCapValue_97.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_97;
      UnderlyingCashAmount_97.setString("10001839");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_97);
      UnderlyingInstrument_97.insert(UnderlyingCashAmount_97.getString());
      FIX::UnderlyingCashType UnderlyingCashType_97("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_97);
      UnderlyingInstrument_97.insert(UnderlyingCashType_97.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_97;
      UnderlyingContractMultiplier_97.setString("15741156");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_97);
      UnderlyingInstrument_97.insert(UnderlyingContractMultiplier_97.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_97(844891190);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_97);
      UnderlyingInstrument_97.insert(UnderlyingContractMultiplierUnit_97.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_97("COUNTRY_1808497781");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingCountryOfIssue_97.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_97("LOCALMKTDATE_1516477962");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_97);
      UnderlyingInstrument_97.insert(UnderlyingCouponPaymentDate_97.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_97;
      UnderlyingCouponRate_97.setString("44.830000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_97);
      UnderlyingInstrument_97.insert(UnderlyingCouponRate_97.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_97("STRING_2146889085");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_97);
      UnderlyingInstrument_97.insert(UnderlyingCreditRating_97.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_97("GBP");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_97);
      UnderlyingInstrument_97.insert(UnderlyingCurrency_97.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_97;
      UnderlyingCurrentValue_97.setString("7896428");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_97);
      UnderlyingInstrument_97.insert(UnderlyingCurrentValue_97.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_97;
      UnderlyingDetachmentPoint_97.setString("98.830000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_97);
      UnderlyingInstrument_97.insert(UnderlyingDetachmentPoint_97.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_97;
      UnderlyingDirtyPrice_97.setString("11710314");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_97);
      UnderlyingInstrument_97.insert(UnderlyingDirtyPrice_97.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_97;
      UnderlyingEndPrice_97.setString("1421600");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_97);
      UnderlyingInstrument_97.insert(UnderlyingEndPrice_97.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_97;
      UnderlyingEndValue_97.setString("5731731");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_97);
      UnderlyingInstrument_97.insert(UnderlyingEndValue_97.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_97(287970284);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_97);
      UnderlyingInstrument_97.insert(UnderlyingExerciseStyle_97.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_97;
      UnderlyingFXRate_97.setString("2058631");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_97);
      UnderlyingInstrument_97.insert(UnderlyingFXRate_97.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_97('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_97);
      UnderlyingInstrument_97.insert(UnderlyingFXRateCalc_97.getString());
      FIX::UnderlyingFactor UnderlyingFactor_97;
      UnderlyingFactor_97.setString("10053491");
      noUnderlyings_1_1_1.set(UnderlyingFactor_97);
      UnderlyingInstrument_97.insert(UnderlyingFactor_97.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_97(1976243365);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_97);
      UnderlyingInstrument_97.insert(UnderlyingFlowScheduleType_97.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_97("STRING_893136158");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_97);
      UnderlyingInstrument_97.insert(UnderlyingInstrRegistry_97.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_97("LOCALMKTDATE_844300390");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_97);
      UnderlyingInstrument_97.insert(UnderlyingIssueDate_97.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_97("STRING_1381058237");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_97);
      UnderlyingInstrument_97.insert(UnderlyingIssuer_97.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_97("STRING_10197455");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingLocaleOfIssue_97.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_97("LOCALMKTDATE_1754321891");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityDate_97.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_97("MONTHYEAR_877060259");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityMonthYear_97.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_97("TZTIMEONLY_22220968");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_97);
      UnderlyingInstrument_97.insert(UnderlyingMaturityTime_97.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_97;
      UnderlyingNotionalPercentageOutstanding_97.setString("51.030000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_97);
      UnderlyingInstrument_97.insert(UnderlyingNotionalPercentageOutstanding_97.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_97('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_97);
      UnderlyingInstrument_97.insert(UnderlyingOptAttribute_97.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_97;
      UnderlyingOriginalNotionalPercentageOutstanding_97.setString("26.710000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_97);
      UnderlyingInstrument_97.insert(UnderlyingOriginalNotionalPercentageOutstanding_97.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_97("STRING_482837080");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_97);
      UnderlyingInstrument_97.insert(UnderlyingPriceUnitOfMeasure_97.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_97;
      UnderlyingPriceUnitOfMeasureQty_97.setString("5839080");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_97);
      UnderlyingInstrument_97.insert(UnderlyingPriceUnitOfMeasureQty_97.getString());
      FIX::UnderlyingProduct UnderlyingProduct_97(1859493254);
      noUnderlyings_1_1_1.set(UnderlyingProduct_97);
      UnderlyingInstrument_97.insert(UnderlyingProduct_97.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_97(2056952685);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_97);
      UnderlyingInstrument_97.insert(UnderlyingPutOrCall_97.getString());
      FIX::UnderlyingPx UnderlyingPx_97;
      UnderlyingPx_97.setString("14287992");
      noUnderlyings_1_1_1.set(UnderlyingPx_97);
      UnderlyingInstrument_97.insert(UnderlyingPx_97.getString());
      FIX::UnderlyingQty UnderlyingQty_97;
      UnderlyingQty_97.setString("15205073");
      noUnderlyings_1_1_1.set(UnderlyingQty_97);
      UnderlyingInstrument_97.insert(UnderlyingQty_97.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_97("LOCALMKTDATE_1425946999");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_97);
      UnderlyingInstrument_97.insert(UnderlyingRedemptionDate_97.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_97("STRING_256080048");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_97);
      UnderlyingInstrument_97.insert(UnderlyingRepoCollateralSecurityType_97.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_97;
      UnderlyingRepurchaseRate_97.setString("28.240000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_97);
      UnderlyingInstrument_97.insert(UnderlyingRepurchaseRate_97.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_97(724546184);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_97);
      UnderlyingInstrument_97.insert(UnderlyingRepurchaseTerm_97.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_97("STRING_1125275654");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_97);
      UnderlyingInstrument_97.insert(UnderlyingRestructuringType_97.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_97("STRING_162072047");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityDesc_97.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_97("EXCHANGE_334922419");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityExchange_97.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_97("STRING_148823486");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityID_97.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_97("STRING_304232073");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityIDSource_97.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_97("STRING_908095535");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_97);
      UnderlyingInstrument_97.insert(UnderlyingSecuritySubType_97.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_97("STRING_436793770");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_97);
      UnderlyingInstrument_97.insert(UnderlyingSecurityType_97.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_97("STRING_510095232");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_97);
      UnderlyingInstrument_97.insert(UnderlyingSeniority_97.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_97("STRING_72713822");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_97);
      UnderlyingInstrument_97.insert(UnderlyingSettlMethod_97.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_97(5);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_97);
      UnderlyingInstrument_97.insert(UnderlyingSettlementType_97.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_97;
      UnderlyingStartValue_97.setString("3388549");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_97);
      UnderlyingInstrument_97.insert(UnderlyingStartValue_97.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_97("STRING_965849980");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_97);
      UnderlyingInstrument_97.insert(UnderlyingStateOrProvinceOfIssue_97.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_97("CAN");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_97);
      UnderlyingInstrument_97.insert(UnderlyingStrikeCurrency_97.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_97;
      UnderlyingStrikePrice_97.setString("9760474");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_97);
      UnderlyingInstrument_97.insert(UnderlyingStrikePrice_97.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_97("STRING_1893281599");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_97);
      UnderlyingInstrument_97.insert(UnderlyingSymbol_97.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_97("STRING_449489798");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_97);
      UnderlyingInstrument_97.insert(UnderlyingSymbolSfx_97.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_97("STRING_998268404");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_97);
      UnderlyingInstrument_97.insert(UnderlyingTimeUnit_97.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_97("STRING_69153054");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_97);
      UnderlyingInstrument_97.insert(UnderlyingUnitOfMeasure_97.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_97;
      UnderlyingUnitOfMeasureQty_97.setString("332139");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_97);
      UnderlyingInstrument_97.insert(UnderlyingUnitOfMeasureQty_97.getString());
      all_values.push_back(UnderlyingInstrument_97);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_193;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_193("STRING_551990135");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_193);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_193.insert(UnderlyingSecurityAltID_193.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_193("STRING_617121929");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_193);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_193.insert(UnderlyingSecurityAltIDSource_193.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_194;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_194("STRING_2064390682");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_194);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_194.insert(UnderlyingSecurityAltID_194.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_194("STRING_461459172");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_194);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_194.insert(UnderlyingSecurityAltIDSource_194.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_195;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_195("STRING_2045921142");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltID_195);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_195.insert(UnderlyingSecurityAltID_195.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_195("STRING_1437414421");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltIDSource_195);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_195.insert(UnderlyingSecurityAltIDSource_195.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_186;
        FIX::UnderlyingStipType UnderlyingStipType_186("STRING_154517542");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_186);
        UnderlyingStipulations_NoUnderlyingStips_186.insert(UnderlyingStipType_186.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_186("STRING_809843598");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_186);
        UnderlyingStipulations_NoUnderlyingStips_186.insert(UnderlyingStipValue_186.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_186);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_187;
        FIX::UnderlyingStipType UnderlyingStipType_187("STRING_464468707");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_187);
        UnderlyingStipulations_NoUnderlyingStips_187.insert(UnderlyingStipType_187.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_187("STRING_1279793196");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_187);
        UnderlyingStipulations_NoUnderlyingStips_187.insert(UnderlyingStipValue_187.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_187);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_200;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_200("STRING_799391127");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_200);
        UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyID_200.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_200('1');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_200);
        UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyIDSource_200.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_200(1276147718);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_200);
        UndlyInstrumentParties_NoUndlyInstrumentParties_200.insert(UnderlyingInstrumentPartyRole_200.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_200);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_395("STRING_1865410452");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_395);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395.insert(UnderlyingInstrumentPartySubID_395.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_395(1786242950);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_395);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395.insert(UnderlyingInstrumentPartySubIDType_395.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_396("STRING_1780200484");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_396);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396.insert(UnderlyingInstrumentPartySubID_396.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_396(1160069769);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_396);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396.insert(UnderlyingInstrumentPartySubIDType_396.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_397("STRING_2125097900");
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubID_397);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397.insert(UnderlyingInstrumentPartySubID_397.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_397(598566817);
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_397);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397.insert(UnderlyingInstrumentPartySubIDType_397.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_201;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_201("STRING_1299029477");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_201);
        UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyID_201.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_201('1');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_201);
        UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyIDSource_201.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_201(1574614253);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_201);
        UndlyInstrumentParties_NoUndlyInstrumentParties_201.insert(UnderlyingInstrumentPartyRole_201.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_201);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_398("STRING_2147017238");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_398);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398.insert(UnderlyingInstrumentPartySubID_398.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_398(425399009);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_398);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398.insert(UnderlyingInstrumentPartySubIDType_398.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_399("STRING_1113980482");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_399);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399.insert(UnderlyingInstrumentPartySubID_399.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_399(32747497);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_399);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399.insert(UnderlyingInstrumentPartySubIDType_399.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_202;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_202("STRING_630296437");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyID_202.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_202('1');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyIDSource_202.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_202(649869426);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_202);
        UndlyInstrumentParties_NoUndlyInstrumentParties_202.insert(UnderlyingInstrumentPartyRole_202.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_202);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_400("STRING_2127429789");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_400);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400.insert(UnderlyingInstrumentPartySubID_400.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_400(548306920);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_400);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400.insert(UnderlyingInstrumentPartySubIDType_400.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_98;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_98("DATA_1984617893");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingIssuer_98.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_98(1867352313);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingIssuerLen_98.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_98("DATA_702824462");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingSecurityDesc_98.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_98(646977843);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_98);
      UnderlyingInstrument_98.insert(EncodedUnderlyingSecurityDescLen_98.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_98;
      UnderlyingAdjustedQuantity_98.setString("1843373");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_98);
      UnderlyingInstrument_98.insert(UnderlyingAdjustedQuantity_98.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_98;
      UnderlyingAllocationPercent_98.setString("76.580000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_98);
      UnderlyingInstrument_98.insert(UnderlyingAllocationPercent_98.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_98;
      UnderlyingAttachmentPoint_98.setString("34.880000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_98);
      UnderlyingInstrument_98.insert(UnderlyingAttachmentPoint_98.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_98("STRING_983728499");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_98);
      UnderlyingInstrument_98.insert(UnderlyingCFICode_98.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_98("STRING_1263750692");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_98);
      UnderlyingInstrument_98.insert(UnderlyingCPProgram_98.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_98("STRING_747557558");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_98);
      UnderlyingInstrument_98.insert(UnderlyingCPRegType_98.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_98;
      UnderlyingCapValue_98.setString("5437315");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_98);
      UnderlyingInstrument_98.insert(UnderlyingCapValue_98.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_98;
      UnderlyingCashAmount_98.setString("9816774");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_98);
      UnderlyingInstrument_98.insert(UnderlyingCashAmount_98.getString());
      FIX::UnderlyingCashType UnderlyingCashType_98("STRING_FIXED");
      noUnderlyings_1_1_2.set(UnderlyingCashType_98);
      UnderlyingInstrument_98.insert(UnderlyingCashType_98.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_98;
      UnderlyingContractMultiplier_98.setString("1764483");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_98);
      UnderlyingInstrument_98.insert(UnderlyingContractMultiplier_98.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_98(2141747266);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_98);
      UnderlyingInstrument_98.insert(UnderlyingContractMultiplierUnit_98.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_98("COUNTRY_363931113");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingCountryOfIssue_98.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_98("LOCALMKTDATE_775015167");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_98);
      UnderlyingInstrument_98.insert(UnderlyingCouponPaymentDate_98.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_98;
      UnderlyingCouponRate_98.setString("30.950000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_98);
      UnderlyingInstrument_98.insert(UnderlyingCouponRate_98.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_98("STRING_2061458553");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_98);
      UnderlyingInstrument_98.insert(UnderlyingCreditRating_98.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_98("CHF");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_98);
      UnderlyingInstrument_98.insert(UnderlyingCurrency_98.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_98;
      UnderlyingCurrentValue_98.setString("20609921");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_98);
      UnderlyingInstrument_98.insert(UnderlyingCurrentValue_98.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_98;
      UnderlyingDetachmentPoint_98.setString("47.820000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_98);
      UnderlyingInstrument_98.insert(UnderlyingDetachmentPoint_98.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_98;
      UnderlyingDirtyPrice_98.setString("13046173");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_98);
      UnderlyingInstrument_98.insert(UnderlyingDirtyPrice_98.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_98;
      UnderlyingEndPrice_98.setString("20937396");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_98);
      UnderlyingInstrument_98.insert(UnderlyingEndPrice_98.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_98;
      UnderlyingEndValue_98.setString("12578412");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_98);
      UnderlyingInstrument_98.insert(UnderlyingEndValue_98.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_98(823104327);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_98);
      UnderlyingInstrument_98.insert(UnderlyingExerciseStyle_98.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_98;
      UnderlyingFXRate_98.setString("5961254");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_98);
      UnderlyingInstrument_98.insert(UnderlyingFXRate_98.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_98('M');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_98);
      UnderlyingInstrument_98.insert(UnderlyingFXRateCalc_98.getString());
      FIX::UnderlyingFactor UnderlyingFactor_98;
      UnderlyingFactor_98.setString("8030504");
      noUnderlyings_1_1_2.set(UnderlyingFactor_98);
      UnderlyingInstrument_98.insert(UnderlyingFactor_98.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_98(1144432338);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_98);
      UnderlyingInstrument_98.insert(UnderlyingFlowScheduleType_98.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_98("STRING_1642178936");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_98);
      UnderlyingInstrument_98.insert(UnderlyingInstrRegistry_98.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_98("LOCALMKTDATE_522919133");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_98);
      UnderlyingInstrument_98.insert(UnderlyingIssueDate_98.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_98("STRING_1847256800");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_98);
      UnderlyingInstrument_98.insert(UnderlyingIssuer_98.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_98("STRING_141673131");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingLocaleOfIssue_98.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_98("LOCALMKTDATE_707256506");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityDate_98.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_98("MONTHYEAR_1682390810");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityMonthYear_98.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_98("TZTIMEONLY_1760566619");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_98);
      UnderlyingInstrument_98.insert(UnderlyingMaturityTime_98.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_98;
      UnderlyingNotionalPercentageOutstanding_98.setString("50.050000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_98);
      UnderlyingInstrument_98.insert(UnderlyingNotionalPercentageOutstanding_98.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_98('7');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_98);
      UnderlyingInstrument_98.insert(UnderlyingOptAttribute_98.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_98;
      UnderlyingOriginalNotionalPercentageOutstanding_98.setString("5.290000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_98);
      UnderlyingInstrument_98.insert(UnderlyingOriginalNotionalPercentageOutstanding_98.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_98("STRING_87232871");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_98);
      UnderlyingInstrument_98.insert(UnderlyingPriceUnitOfMeasure_98.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_98;
      UnderlyingPriceUnitOfMeasureQty_98.setString("17803353");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_98);
      UnderlyingInstrument_98.insert(UnderlyingPriceUnitOfMeasureQty_98.getString());
      FIX::UnderlyingProduct UnderlyingProduct_98(746957389);
      noUnderlyings_1_1_2.set(UnderlyingProduct_98);
      UnderlyingInstrument_98.insert(UnderlyingProduct_98.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_98(263681222);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_98);
      UnderlyingInstrument_98.insert(UnderlyingPutOrCall_98.getString());
      FIX::UnderlyingPx UnderlyingPx_98;
      UnderlyingPx_98.setString("17745989");
      noUnderlyings_1_1_2.set(UnderlyingPx_98);
      UnderlyingInstrument_98.insert(UnderlyingPx_98.getString());
      FIX::UnderlyingQty UnderlyingQty_98;
      UnderlyingQty_98.setString("11108885");
      noUnderlyings_1_1_2.set(UnderlyingQty_98);
      UnderlyingInstrument_98.insert(UnderlyingQty_98.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_98("LOCALMKTDATE_1038696389");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_98);
      UnderlyingInstrument_98.insert(UnderlyingRedemptionDate_98.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_98("STRING_920408416");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_98);
      UnderlyingInstrument_98.insert(UnderlyingRepoCollateralSecurityType_98.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_98;
      UnderlyingRepurchaseRate_98.setString("34.070000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_98);
      UnderlyingInstrument_98.insert(UnderlyingRepurchaseRate_98.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_98(1240842162);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_98);
      UnderlyingInstrument_98.insert(UnderlyingRepurchaseTerm_98.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_98("STRING_1111045291");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_98);
      UnderlyingInstrument_98.insert(UnderlyingRestructuringType_98.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_98("STRING_938371903");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityDesc_98.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_98("EXCHANGE_1868386944");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityExchange_98.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_98("STRING_268179000");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityID_98.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_98("STRING_884627895");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityIDSource_98.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_98("STRING_978744515");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_98);
      UnderlyingInstrument_98.insert(UnderlyingSecuritySubType_98.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_98("STRING_1091283327");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_98);
      UnderlyingInstrument_98.insert(UnderlyingSecurityType_98.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_98("STRING_1480753314");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_98);
      UnderlyingInstrument_98.insert(UnderlyingSeniority_98.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_98("STRING_636305558");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_98);
      UnderlyingInstrument_98.insert(UnderlyingSettlMethod_98.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_98(5);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_98);
      UnderlyingInstrument_98.insert(UnderlyingSettlementType_98.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_98;
      UnderlyingStartValue_98.setString("4777020");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_98);
      UnderlyingInstrument_98.insert(UnderlyingStartValue_98.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_98("STRING_131000846");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_98);
      UnderlyingInstrument_98.insert(UnderlyingStateOrProvinceOfIssue_98.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_98("CAN");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_98);
      UnderlyingInstrument_98.insert(UnderlyingStrikeCurrency_98.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_98;
      UnderlyingStrikePrice_98.setString("2726739");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_98);
      UnderlyingInstrument_98.insert(UnderlyingStrikePrice_98.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_98("STRING_977025787");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_98);
      UnderlyingInstrument_98.insert(UnderlyingSymbol_98.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_98("STRING_1859865967");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_98);
      UnderlyingInstrument_98.insert(UnderlyingSymbolSfx_98.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_98("STRING_2033240596");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_98);
      UnderlyingInstrument_98.insert(UnderlyingTimeUnit_98.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_98("STRING_520527145");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_98);
      UnderlyingInstrument_98.insert(UnderlyingUnitOfMeasure_98.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_98;
      UnderlyingUnitOfMeasureQty_98.setString("5110401");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_98);
      UnderlyingInstrument_98.insert(UnderlyingUnitOfMeasureQty_98.getString());
      all_values.push_back(UnderlyingInstrument_98);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_196;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_196("STRING_607760016");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltID_196.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_196("STRING_143891877");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_196);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_196.insert(UnderlyingSecurityAltIDSource_196.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_197;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_197("STRING_993354867");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltID_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltID_197.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_197("STRING_871441238");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltIDSource_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltIDSource_197.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_188;
        FIX::UnderlyingStipType UnderlyingStipType_188("STRING_2104243369");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_188);
        UnderlyingStipulations_NoUnderlyingStips_188.insert(UnderlyingStipType_188.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_188("STRING_1910137628");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_188);
        UnderlyingStipulations_NoUnderlyingStips_188.insert(UnderlyingStipValue_188.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_188);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_189;
        FIX::UnderlyingStipType UnderlyingStipType_189("STRING_691415614");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipType_189);
        UnderlyingStipulations_NoUnderlyingStips_189.insert(UnderlyingStipType_189.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_189("STRING_981623129");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipValue_189);
        UnderlyingStipulations_NoUnderlyingStips_189.insert(UnderlyingStipValue_189.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_189);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_190;
        FIX::UnderlyingStipType UnderlyingStipType_190("STRING_1003496142");
        noUnderlyingStips_1_2_2_2.set(UnderlyingStipType_190);
        UnderlyingStipulations_NoUnderlyingStips_190.insert(UnderlyingStipType_190.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_190("STRING_1802460905");
        noUnderlyingStips_1_2_2_2.set(UnderlyingStipValue_190);
        UnderlyingStipulations_NoUnderlyingStips_190.insert(UnderlyingStipValue_190.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_190);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_203;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_203("STRING_724399438");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyID_203.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_203('2');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyIDSource_203.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_203(657139279);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_203);
        UndlyInstrumentParties_NoUndlyInstrumentParties_203.insert(UnderlyingInstrumentPartyRole_203.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_203);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_401("STRING_1014439585");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_401);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401.insert(UnderlyingInstrumentPartySubID_401.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_401(2137892593);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_401);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401.insert(UnderlyingInstrumentPartySubIDType_401.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_18;
    FIX::Yield Yield_18;
    Yield_18.setString("58.640000");
    noRelatedSym_0_1.set(Yield_18);
    YieldData_18.insert(Yield_18.getString());
    FIX::YieldCalcDate YieldCalcDate_18("LOCALMKTDATE_761289733");
    noRelatedSym_0_1.set(YieldCalcDate_18);
    YieldData_18.insert(YieldCalcDate_18.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_18("LOCALMKTDATE_468110950");
    noRelatedSym_0_1.set(YieldRedemptionDate_18);
    YieldData_18.insert(YieldRedemptionDate_18.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_18;
    YieldRedemptionPrice_18.setString("3229667");
    noRelatedSym_0_1.set(YieldRedemptionPrice_18);
    YieldData_18.insert(YieldRedemptionPrice_18.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_18(1031059014);
    noRelatedSym_0_1.set(YieldRedemptionPriceType_18);
    YieldData_18.insert(YieldRedemptionPriceType_18.getString());
    FIX::YieldType YieldType_18("STRING_PREVCLOSE");
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
    FIX::RootPartyID RootPartyID_7("STRING_2008084802");
    noRootPartyIDs_0_0.set(RootPartyID_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyID_7.getString());
    FIX::RootPartyIDSource RootPartyIDSource_7('3');
    noRootPartyIDs_0_0.set(RootPartyIDSource_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyIDSource_7.getString());
    FIX::RootPartyRole RootPartyRole_7(481397636);
    noRootPartyIDs_0_0.set(RootPartyRole_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyRole_7.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_7);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_15;
      FIX::RootPartySubID RootPartySubID_15("STRING_869008600");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_15);
      RootSubParties_NoRootPartySubIDs_15.insert(RootPartySubID_15.getString());
      FIX::RootPartySubIDType RootPartySubIDType_15(727795114);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_15);
      RootSubParties_NoRootPartySubIDs_15.insert(RootPartySubIDType_15.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_15);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_16;
      FIX::RootPartySubID RootPartySubID_16("STRING_988888315");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_16);
      RootSubParties_NoRootPartySubIDs_16.insert(RootPartySubID_16.getString());
      FIX::RootPartySubIDType RootPartySubIDType_16(1012900477);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_16);
      RootSubParties_NoRootPartySubIDs_16.insert(RootPartySubIDType_16.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_16);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
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
