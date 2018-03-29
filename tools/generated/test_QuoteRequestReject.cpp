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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteRequestReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequestReject_0;
  FIX::EncodedText EncodedText_77("DATA_503574549");
  msg.set(EncodedText_77);
  QuoteRequestReject_0.insert(EncodedText_77.getString());
  FIX::EncodedTextLen EncodedTextLen_77(88786891);
  msg.set(EncodedTextLen_77);
  QuoteRequestReject_0.insert(EncodedTextLen_77.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_15(false);
  msg.set(PreTradeAnonymity_15);
  QuoteRequestReject_0.insert(PreTradeAnonymity_15.getString());
  FIX::PrivateQuote PrivateQuote_2(false);
  msg.set(PrivateQuote_2);
  QuoteRequestReject_0.insert(PrivateQuote_2.getString());
  FIX::QuoteReqID QuoteReqID_5("STRING_403298734");
  msg.set(QuoteReqID_5);
  QuoteRequestReject_0.insert(QuoteReqID_5.getString());
  FIX::QuoteRequestRejectReason QuoteRequestRejectReason_0(2);
  msg.set(QuoteRequestRejectReason_0);
  QuoteRequestReject_0.insert(QuoteRequestRejectReason_0.getString());
  FIX::RFQReqID RFQReqID_1("STRING_53283556");
  msg.set(RFQReqID_1);
  QuoteRequestReject_0.insert(RFQReqID_1.getString());
  FIX::RespondentType RespondentType_1(4);
  msg.set(RespondentType_1);
  QuoteRequestReject_0.insert(RespondentType_1.getString());
  FIX::Text Text_77("STRING_110671160");
  msg.set(Text_77);
  QuoteRequestReject_0.insert(Text_77.getString());
  all_values.push_back(QuoteRequestReject_0);

  all_compo_names.insert("QuoteRequestReject");

  // QuotReqRjctGrp
  // Group QuotReqRjctGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_0;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_0;
    FIX::Account Account_37("STRING_1185488224");
    noRelatedSym_0_0.set(Account_37);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Account_37.getString());
    FIX::AccountType AccountType_32(2);
    noRelatedSym_0_0.set(AccountType_32);
    QuotReqRjctGrp_NoRelatedSym_0.insert(AccountType_32.getString());
    FIX::AcctIDSource AcctIDSource_30(5);
    noRelatedSym_0_0.set(AcctIDSource_30);
    QuotReqRjctGrp_NoRelatedSym_0.insert(AcctIDSource_30.getString());
    FIX::Currency Currency_58("CHF");
    noRelatedSym_0_0.set(Currency_58);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Currency_58.getString());
    FIX::ExpireTime ExpireTime_17(FIX::UTCTIMESTAMP(23, 18, 58, 19, 6, 2013));
    noRelatedSym_0_0.set(ExpireTime_17);
    QuotReqRjctGrp_NoRelatedSym_0.insert(ExpireTime_17.getString());
    FIX::OrdType OrdType_58('M');
    noRelatedSym_0_0.set(OrdType_58);
    QuotReqRjctGrp_NoRelatedSym_0.insert(OrdType_58.getString());
    FIX::OrderQty2 OrderQty2_23;
    OrderQty2_23.setString("5615072");
    noRelatedSym_0_0.set(OrderQty2_23);
    QuotReqRjctGrp_NoRelatedSym_0.insert(OrderQty2_23.getString());
    FIX::PrevClosePx PrevClosePx_11;
    PrevClosePx_11.setString("20773177");
    noRelatedSym_0_0.set(PrevClosePx_11);
    QuotReqRjctGrp_NoRelatedSym_0.insert(PrevClosePx_11.getString());
    FIX::Price Price_23;
    Price_23.setString("3517831");
    noRelatedSym_0_0.set(Price_23);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Price_23.getString());
    FIX::Price2 Price2_7;
    Price2_7.setString("6171120");
    noRelatedSym_0_0.set(Price2_7);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Price2_7.getString());
    FIX::PriceType PriceType_39(4);
    noRelatedSym_0_0.set(PriceType_39);
    QuotReqRjctGrp_NoRelatedSym_0.insert(PriceType_39.getString());
    FIX::QtyType QtyType_28(2);
    noRelatedSym_0_0.set(QtyType_28);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QtyType_28.getString());
    FIX::QuotePriceType QuotePriceType_2(9);
    noRelatedSym_0_0.set(QuotePriceType_2);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuotePriceType_2.getString());
    FIX::QuoteRequestType QuoteRequestType_2(2);
    noRelatedSym_0_0.set(QuoteRequestType_2);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuoteRequestType_2.getString());
    FIX::QuoteType QuoteType_8(1);
    noRelatedSym_0_0.set(QuoteType_8);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuoteType_8.getString());
    FIX::SettlDate SettlDate_48("LOCALMKTDATE_538386709");
    noRelatedSym_0_0.set(SettlDate_48);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlDate_48.getString());
    FIX::SettlDate2 SettlDate2_23("LOCALMKTDATE_1015459996");
    noRelatedSym_0_0.set(SettlDate2_23);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlDate2_23.getString());
    FIX::SettlType SettlType_28("STRING_6");
    noRelatedSym_0_0.set(SettlType_28);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlType_28.getString());
    FIX::Side Side_44('4');
    noRelatedSym_0_0.set(Side_44);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Side_44.getString());
    FIX::TradeOriginationDate TradeOriginationDate_22("LOCALMKTDATE_259215801");
    noRelatedSym_0_0.set(TradeOriginationDate_22);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradeOriginationDate_22.getString());
    FIX::TradingSessionID TradingSessionID_84("STRING_6");
    noRelatedSym_0_0.set(TradingSessionID_84);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradingSessionID_84.getString());
    FIX::TradingSessionSubID TradingSessionSubID_84("STRING_5");
    noRelatedSym_0_0.set(TradingSessionSubID_84);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradingSessionSubID_84.getString());
    FIX::TransactTime TransactTime_59(FIX::UTCTIMESTAMP(6, 31, 35, 18, 12, 2013));
    noRelatedSym_0_0.set(TransactTime_59);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TransactTime_59.getString());
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_0);
    all_compo_names.insert("QuotReqRjctGrp.NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_21;
    FIX::AgreementCurrency AgreementCurrency_21("GBP");
    noRelatedSym_0_0.set(AgreementCurrency_21);
    FinancingDetails_21.insert(AgreementCurrency_21.getString());
    FIX::AgreementDate AgreementDate_21("LOCALMKTDATE_854368225");
    noRelatedSym_0_0.set(AgreementDate_21);
    FinancingDetails_21.insert(AgreementDate_21.getString());
    FIX::AgreementDesc AgreementDesc_21("STRING_1071798528");
    noRelatedSym_0_0.set(AgreementDesc_21);
    FinancingDetails_21.insert(AgreementDesc_21.getString());
    FIX::AgreementID AgreementID_21("STRING_1738456777");
    noRelatedSym_0_0.set(AgreementID_21);
    FinancingDetails_21.insert(AgreementID_21.getString());
    FIX::DeliveryType DeliveryType_21(2);
    noRelatedSym_0_0.set(DeliveryType_21);
    FinancingDetails_21.insert(DeliveryType_21.getString());
    FIX::EndDate EndDate_21("LOCALMKTDATE_2109223591");
    noRelatedSym_0_0.set(EndDate_21);
    FinancingDetails_21.insert(EndDate_21.getString());
    FIX::MarginRatio MarginRatio_21;
    MarginRatio_21.setString("96.310000");
    noRelatedSym_0_0.set(MarginRatio_21);
    FinancingDetails_21.insert(MarginRatio_21.getString());
    FIX::StartDate StartDate_21("LOCALMKTDATE_774667959");
    noRelatedSym_0_0.set(StartDate_21);
    FinancingDetails_21.insert(StartDate_21.getString());
    FIX::TerminationType TerminationType_21(4);
    noRelatedSym_0_0.set(TerminationType_21);
    FinancingDetails_21.insert(TerminationType_21.getString());
    all_values.push_back(FinancingDetails_21);
    all_compo_names.insert("FinancingDetails");

    // Instrument
    multiset<string> Instrument_71;
    FIX::AttachmentPoint AttachmentPoint_71;
    AttachmentPoint_71.setString("27.750000");
    noRelatedSym_0_0.set(AttachmentPoint_71);
    Instrument_71.insert(AttachmentPoint_71.getString());
    FIX::CFICode CFICode_71("STRING_1391780019");
    noRelatedSym_0_0.set(CFICode_71);
    Instrument_71.insert(CFICode_71.getString());
    FIX::CPProgram CPProgram_71(2);
    noRelatedSym_0_0.set(CPProgram_71);
    Instrument_71.insert(CPProgram_71.getString());
    FIX::CPRegType CPRegType_71("STRING_2006878106");
    noRelatedSym_0_0.set(CPRegType_71);
    Instrument_71.insert(CPRegType_71.getString());
    FIX::CapPrice CapPrice_71;
    CapPrice_71.setString("18413798");
    noRelatedSym_0_0.set(CapPrice_71);
    Instrument_71.insert(CapPrice_71.getString());
    FIX::ContractMultiplier ContractMultiplier_71;
    ContractMultiplier_71.setString("15451730");
    noRelatedSym_0_0.set(ContractMultiplier_71);
    Instrument_71.insert(ContractMultiplier_71.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_71(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_71);
    Instrument_71.insert(ContractMultiplierUnit_71.getString());
    FIX::ContractSettlMonth ContractSettlMonth_71("MONTHYEAR_232282898");
    noRelatedSym_0_0.set(ContractSettlMonth_71);
    Instrument_71.insert(ContractSettlMonth_71.getString());
    FIX::CountryOfIssue CountryOfIssue_71("COUNTRY_413149408");
    noRelatedSym_0_0.set(CountryOfIssue_71);
    Instrument_71.insert(CountryOfIssue_71.getString());
    FIX::CouponPaymentDate CouponPaymentDate_71("LOCALMKTDATE_992874734");
    noRelatedSym_0_0.set(CouponPaymentDate_71);
    Instrument_71.insert(CouponPaymentDate_71.getString());
    FIX::CouponRate CouponRate_71;
    CouponRate_71.setString("83.410000");
    noRelatedSym_0_0.set(CouponRate_71);
    Instrument_71.insert(CouponRate_71.getString());
    FIX::CreditRating CreditRating_71("STRING_672365209");
    noRelatedSym_0_0.set(CreditRating_71);
    Instrument_71.insert(CreditRating_71.getString());
    FIX::DatedDate DatedDate_71("LOCALMKTDATE_627808685");
    noRelatedSym_0_0.set(DatedDate_71);
    Instrument_71.insert(DatedDate_71.getString());
    FIX::DetachmentPoint DetachmentPoint_71;
    DetachmentPoint_71.setString("62.680000");
    noRelatedSym_0_0.set(DetachmentPoint_71);
    Instrument_71.insert(DetachmentPoint_71.getString());
    FIX::EncodedIssuer EncodedIssuer_71("DATA_1042252171");
    noRelatedSym_0_0.set(EncodedIssuer_71);
    Instrument_71.insert(EncodedIssuer_71.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_71(1197283499);
    noRelatedSym_0_0.set(EncodedIssuerLen_71);
    Instrument_71.insert(EncodedIssuerLen_71.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_71("DATA_1547892419");
    noRelatedSym_0_0.set(EncodedSecurityDesc_71);
    Instrument_71.insert(EncodedSecurityDesc_71.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_71(508914718);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_71);
    Instrument_71.insert(EncodedSecurityDescLen_71.getString());
    FIX::ExerciseStyle ExerciseStyle_71(2);
    noRelatedSym_0_0.set(ExerciseStyle_71);
    Instrument_71.insert(ExerciseStyle_71.getString());
    FIX::Factor Factor_71;
    Factor_71.setString("4675701");
    noRelatedSym_0_0.set(Factor_71);
    Instrument_71.insert(Factor_71.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_71(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_71);
    Instrument_71.insert(FlexProductEligibilityIndicator_71.getString());
    FIX::FlexibleIndicator FlexibleIndicator_71(true);
    noRelatedSym_0_0.set(FlexibleIndicator_71);
    Instrument_71.insert(FlexibleIndicator_71.getString());
    FIX::FloorPrice FloorPrice_71;
    FloorPrice_71.setString("4677275");
    noRelatedSym_0_0.set(FloorPrice_71);
    Instrument_71.insert(FloorPrice_71.getString());
    FIX::FlowScheduleType FlowScheduleType_71(1);
    noRelatedSym_0_0.set(FlowScheduleType_71);
    Instrument_71.insert(FlowScheduleType_71.getString());
    FIX::InstrRegistry InstrRegistry_71("STRING_179483601");
    noRelatedSym_0_0.set(InstrRegistry_71);
    Instrument_71.insert(InstrRegistry_71.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_71('5');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_71);
    Instrument_71.insert(InstrmtAssignmentMethod_71.getString());
    FIX::InterestAccrualDate InterestAccrualDate_71("LOCALMKTDATE_8384553");
    noRelatedSym_0_0.set(InterestAccrualDate_71);
    Instrument_71.insert(InterestAccrualDate_71.getString());
    FIX::IssueDate IssueDate_71("LOCALMKTDATE_141223544");
    noRelatedSym_0_0.set(IssueDate_71);
    Instrument_71.insert(IssueDate_71.getString());
    FIX::Issuer Issuer_71("STRING_665540304");
    noRelatedSym_0_0.set(Issuer_71);
    Instrument_71.insert(Issuer_71.getString());
    FIX::ListMethod ListMethod_71(0);
    noRelatedSym_0_0.set(ListMethod_71);
    Instrument_71.insert(ListMethod_71.getString());
    FIX::LocaleOfIssue LocaleOfIssue_71("STRING_32797588");
    noRelatedSym_0_0.set(LocaleOfIssue_71);
    Instrument_71.insert(LocaleOfIssue_71.getString());
    FIX::MaturityDate MaturityDate_71("LOCALMKTDATE_1624163079");
    noRelatedSym_0_0.set(MaturityDate_71);
    Instrument_71.insert(MaturityDate_71.getString());
    FIX::MaturityMonthYear MaturityMonthYear_71("MONTHYEAR_27348883");
    noRelatedSym_0_0.set(MaturityMonthYear_71);
    Instrument_71.insert(MaturityMonthYear_71.getString());
    FIX::MaturityTime MaturityTime_71("TZTIMEONLY_1324194446");
    noRelatedSym_0_0.set(MaturityTime_71);
    Instrument_71.insert(MaturityTime_71.getString());
    FIX::MinPriceIncrement MinPriceIncrement_71;
    MinPriceIncrement_71.setString("14835575");
    noRelatedSym_0_0.set(MinPriceIncrement_71);
    Instrument_71.insert(MinPriceIncrement_71.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_71;
    MinPriceIncrementAmount_71.setString("18687287");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_71);
    Instrument_71.insert(MinPriceIncrementAmount_71.getString());
    FIX::NTPositionLimit NTPositionLimit_71(721883858);
    noRelatedSym_0_0.set(NTPositionLimit_71);
    Instrument_71.insert(NTPositionLimit_71.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_71;
    NotionalPercentageOutstanding_71.setString("82.290000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_71);
    Instrument_71.insert(NotionalPercentageOutstanding_71.getString());
    FIX::OptAttribute OptAttribute_71('2');
    noRelatedSym_0_0.set(OptAttribute_71);
    Instrument_71.insert(OptAttribute_71.getString());
    FIX::OptPayoutAmount OptPayoutAmount_71;
    OptPayoutAmount_71.setString("11350332");
    noRelatedSym_0_0.set(OptPayoutAmount_71);
    Instrument_71.insert(OptPayoutAmount_71.getString());
    FIX::OptPayoutType OptPayoutType_71(2);
    noRelatedSym_0_0.set(OptPayoutType_71);
    Instrument_71.insert(OptPayoutType_71.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_71;
    OriginalNotionalPercentageOutstanding_71.setString("63.120000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_71);
    Instrument_71.insert(OriginalNotionalPercentageOutstanding_71.getString());
    FIX::Pool Pool_71("STRING_1807398475");
    noRelatedSym_0_0.set(Pool_71);
    Instrument_71.insert(Pool_71.getString());
    FIX::PositionLimit PositionLimit_71(220498000);
    noRelatedSym_0_0.set(PositionLimit_71);
    Instrument_71.insert(PositionLimit_71.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_71("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_71);
    Instrument_71.insert(PriceQuoteMethod_71.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_71("STRING_702166998");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_71);
    Instrument_71.insert(PriceUnitOfMeasure_71.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_71;
    PriceUnitOfMeasureQty_71.setString("14177815");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_71);
    Instrument_71.insert(PriceUnitOfMeasureQty_71.getString());
    FIX::Product Product_73(10);
    noRelatedSym_0_0.set(Product_73);
    Instrument_71.insert(Product_73.getString());
    FIX::ProductComplex ProductComplex_71("STRING_1211081717");
    noRelatedSym_0_0.set(ProductComplex_71);
    Instrument_71.insert(ProductComplex_71.getString());
    FIX::PutOrCall PutOrCall_71(0);
    noRelatedSym_0_0.set(PutOrCall_71);
    Instrument_71.insert(PutOrCall_71.getString());
    FIX::RedemptionDate RedemptionDate_71("LOCALMKTDATE_1763661525");
    noRelatedSym_0_0.set(RedemptionDate_71);
    Instrument_71.insert(RedemptionDate_71.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_71("STRING_151937354");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_71);
    Instrument_71.insert(RepoCollateralSecurityType_71.getString());
    FIX::RepurchaseRate RepurchaseRate_71;
    RepurchaseRate_71.setString("59.220000");
    noRelatedSym_0_0.set(RepurchaseRate_71);
    Instrument_71.insert(RepurchaseRate_71.getString());
    FIX::RepurchaseTerm RepurchaseTerm_71(83905421);
    noRelatedSym_0_0.set(RepurchaseTerm_71);
    Instrument_71.insert(RepurchaseTerm_71.getString());
    FIX::RestructuringType RestructuringType_71("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_71);
    Instrument_71.insert(RestructuringType_71.getString());
    FIX::SecurityDesc SecurityDesc_71("STRING_1593199523");
    noRelatedSym_0_0.set(SecurityDesc_71);
    Instrument_71.insert(SecurityDesc_71.getString());
    FIX::SecurityExchange SecurityExchange_71("EXCHANGE_142606094");
    noRelatedSym_0_0.set(SecurityExchange_71);
    Instrument_71.insert(SecurityExchange_71.getString());
    FIX::SecurityGroup SecurityGroup_71("STRING_2103029419");
    noRelatedSym_0_0.set(SecurityGroup_71);
    Instrument_71.insert(SecurityGroup_71.getString());
    FIX::SecurityID SecurityID_71("STRING_1734423068");
    noRelatedSym_0_0.set(SecurityID_71);
    Instrument_71.insert(SecurityID_71.getString());
    FIX::SecurityIDSource SecurityIDSource_71("STRING_6");
    noRelatedSym_0_0.set(SecurityIDSource_71);
    Instrument_71.insert(SecurityIDSource_71.getString());
    FIX::SecurityStatus SecurityStatus_71("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_71);
    Instrument_71.insert(SecurityStatus_71.getString());
    FIX::SecuritySubType SecuritySubType_72("STRING_1767220656");
    noRelatedSym_0_0.set(SecuritySubType_72);
    Instrument_71.insert(SecuritySubType_72.getString());
    FIX::SecurityType SecurityType_73("STRING_PS");
    noRelatedSym_0_0.set(SecurityType_73);
    Instrument_71.insert(SecurityType_73.getString());
    FIX::Seniority Seniority_71("STRING_SR");
    noRelatedSym_0_0.set(Seniority_71);
    Instrument_71.insert(Seniority_71.getString());
    FIX::SettlMethod SettlMethod_71('C');
    noRelatedSym_0_0.set(SettlMethod_71);
    Instrument_71.insert(SettlMethod_71.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_71("STRING_1768383368");
    noRelatedSym_0_0.set(SettleOnOpenFlag_71);
    Instrument_71.insert(SettleOnOpenFlag_71.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_71("STRING_487192239");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_71);
    Instrument_71.insert(StateOrProvinceOfIssue_71.getString());
    FIX::StrikeCurrency StrikeCurrency_71("USD");
    noRelatedSym_0_0.set(StrikeCurrency_71);
    Instrument_71.insert(StrikeCurrency_71.getString());
    FIX::StrikeMultiplier StrikeMultiplier_71;
    StrikeMultiplier_71.setString("4407202");
    noRelatedSym_0_0.set(StrikeMultiplier_71);
    Instrument_71.insert(StrikeMultiplier_71.getString());
    FIX::StrikePrice StrikePrice_71;
    StrikePrice_71.setString("6533649");
    noRelatedSym_0_0.set(StrikePrice_71);
    Instrument_71.insert(StrikePrice_71.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_71(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_71);
    Instrument_71.insert(StrikePriceBoundaryMethod_71.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_71;
    StrikePriceBoundaryPrecision_71.setString("65.220000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_71);
    Instrument_71.insert(StrikePriceBoundaryPrecision_71.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_71(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_71);
    Instrument_71.insert(StrikePriceDeterminationMethod_71.getString());
    FIX::StrikeValue StrikeValue_71;
    StrikeValue_71.setString("1813852");
    noRelatedSym_0_0.set(StrikeValue_71);
    Instrument_71.insert(StrikeValue_71.getString());
    FIX::Symbol Symbol_71("STRING_1316415454");
    noRelatedSym_0_0.set(Symbol_71);
    Instrument_71.insert(Symbol_71.getString());
    FIX::SymbolSfx SymbolSfx_71("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_71);
    Instrument_71.insert(SymbolSfx_71.getString());
    FIX::TimeUnit TimeUnit_71("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_71);
    Instrument_71.insert(TimeUnit_71.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_71(2);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_71);
    Instrument_71.insert(UnderlyingPriceDeterminationMethod_71.getString());
    FIX::UnitOfMeasure UnitOfMeasure_71("STRING_MMBtu");
    noRelatedSym_0_0.set(UnitOfMeasure_71);
    Instrument_71.insert(UnitOfMeasure_71.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_71;
    UnitOfMeasureQty_71.setString("17577139");
    noRelatedSym_0_0.set(UnitOfMeasureQty_71);
    Instrument_71.insert(UnitOfMeasureQty_71.getString());
    FIX::ValuationMethod ValuationMethod_71("STRING_CDSD");
    noRelatedSym_0_0.set(ValuationMethod_71);
    Instrument_71.insert(ValuationMethod_71.getString());
    all_values.push_back(Instrument_71);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_149;
      FIX::ComplexEventCondition ComplexEventCondition_149(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventCondition_149.getString());
      FIX::ComplexEventPrice ComplexEventPrice_149;
      ComplexEventPrice_149.setString("1651064");
      noComplexEvents_0_1_0.set(ComplexEventPrice_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPrice_149.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_149(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryMethod_149.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_149;
      ComplexEventPriceBoundaryPrecision_149.setString("21.180000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryPrecision_149.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_149(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceTimeType_149.getString());
      FIX::ComplexEventType ComplexEventType_149(1);
      noComplexEvents_0_1_0.set(ComplexEventType_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventType_149.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_149;
      ComplexOptPayoutAmount_149.setString("566015");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexOptPayoutAmount_149.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_149);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_303;
        FIX::ComplexEventEndDate ComplexEventEndDate_303(FIX::UTCTIMESTAMP(10, 19, 19, 0, 8, 2016));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_303);
        ComplexEventDates_NoComplexEventDates_303.insert(ComplexEventEndDate_303.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_303(FIX::UTCTIMESTAMP(1, 40, 15, 3, 7, 2003));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_303);
        ComplexEventDates_NoComplexEventDates_303.insert(ComplexEventStartDate_303.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_303);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_613;
          FIX::ComplexEventEndTime ComplexEventEndTime_613(FIX::UTCTIMEONLY(22, 59, 5));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_613);
          ComplexEventTimes_NoComplexEventTimes_613.insert(ComplexEventEndTime_613.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_613(FIX::UTCTIMEONLY(3, 39, 47));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_613);
          ComplexEventTimes_NoComplexEventTimes_613.insert(ComplexEventStartTime_613.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_613);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_614;
          FIX::ComplexEventEndTime ComplexEventEndTime_614(FIX::UTCTIMEONLY(18, 25, 19));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_614);
          ComplexEventTimes_NoComplexEventTimes_614.insert(ComplexEventEndTime_614.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_614(FIX::UTCTIMEONLY(1, 17, 24));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_614);
          ComplexEventTimes_NoComplexEventTimes_614.insert(ComplexEventStartTime_614.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_614);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_615;
          FIX::ComplexEventEndTime ComplexEventEndTime_615(FIX::UTCTIMEONLY(7, 35, 36));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_615);
          ComplexEventTimes_NoComplexEventTimes_615.insert(ComplexEventEndTime_615.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_615(FIX::UTCTIMEONLY(19, 27, 41));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_615);
          ComplexEventTimes_NoComplexEventTimes_615.insert(ComplexEventStartTime_615.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_615);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_304;
        FIX::ComplexEventEndDate ComplexEventEndDate_304(FIX::UTCTIMESTAMP(7, 56, 31, 10, 11, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_304);
        ComplexEventDates_NoComplexEventDates_304.insert(ComplexEventEndDate_304.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_304(FIX::UTCTIMESTAMP(12, 55, 48, 19, 11, 2001));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_304);
        ComplexEventDates_NoComplexEventDates_304.insert(ComplexEventStartDate_304.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_304);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_616;
          FIX::ComplexEventEndTime ComplexEventEndTime_616(FIX::UTCTIMEONLY(18, 24, 59));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_616);
          ComplexEventTimes_NoComplexEventTimes_616.insert(ComplexEventEndTime_616.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_616(FIX::UTCTIMEONLY(1, 9, 38));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_616);
          ComplexEventTimes_NoComplexEventTimes_616.insert(ComplexEventStartTime_616.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_616);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_617;
          FIX::ComplexEventEndTime ComplexEventEndTime_617(FIX::UTCTIMEONLY(16, 14, 31));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_617);
          ComplexEventTimes_NoComplexEventTimes_617.insert(ComplexEventEndTime_617.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_617(FIX::UTCTIMEONLY(9, 50, 21));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_617);
          ComplexEventTimes_NoComplexEventTimes_617.insert(ComplexEventStartTime_617.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_617);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_618;
          FIX::ComplexEventEndTime ComplexEventEndTime_618(FIX::UTCTIMEONLY(10, 18, 1));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_618);
          ComplexEventTimes_NoComplexEventTimes_618.insert(ComplexEventEndTime_618.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_618(FIX::UTCTIMEONLY(4, 5, 14));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_618);
          ComplexEventTimes_NoComplexEventTimes_618.insert(ComplexEventStartTime_618.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_618);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_305;
        FIX::ComplexEventEndDate ComplexEventEndDate_305(FIX::UTCTIMESTAMP(1, 54, 7, 27, 7, 2012));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_305);
        ComplexEventDates_NoComplexEventDates_305.insert(ComplexEventEndDate_305.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_305(FIX::UTCTIMESTAMP(0, 30, 15, 6, 1, 2006));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_305);
        ComplexEventDates_NoComplexEventDates_305.insert(ComplexEventStartDate_305.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_305);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_619;
          FIX::ComplexEventEndTime ComplexEventEndTime_619(FIX::UTCTIMEONLY(8, 18, 18));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_619);
          ComplexEventTimes_NoComplexEventTimes_619.insert(ComplexEventEndTime_619.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_619(FIX::UTCTIMEONLY(7, 1, 10));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_619);
          ComplexEventTimes_NoComplexEventTimes_619.insert(ComplexEventStartTime_619.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_619);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_620;
          FIX::ComplexEventEndTime ComplexEventEndTime_620(FIX::UTCTIMEONLY(23, 20, 58));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_620);
          ComplexEventTimes_NoComplexEventTimes_620.insert(ComplexEventEndTime_620.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_620(FIX::UTCTIMEONLY(4, 55, 29));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_620);
          ComplexEventTimes_NoComplexEventTimes_620.insert(ComplexEventStartTime_620.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_620);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

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
      multiset<string> EvntGrp_NoEvents_144;
      FIX::EventDate EventDate_144("LOCALMKTDATE_733279068");
      noEvents_0_1_0.set(EventDate_144);
      EvntGrp_NoEvents_144.insert(EventDate_144.getString());
      FIX::EventPx EventPx_144;
      EventPx_144.setString("9000920");
      noEvents_0_1_0.set(EventPx_144);
      EvntGrp_NoEvents_144.insert(EventPx_144.getString());
      FIX::EventText EventText_144("STRING_2011349096");
      noEvents_0_1_0.set(EventText_144);
      EvntGrp_NoEvents_144.insert(EventText_144.getString());
      FIX::EventTime EventTime_144(FIX::UTCTIMESTAMP(6, 54, 23, 14, 6, 2002));
      noEvents_0_1_0.set(EventTime_144);
      EvntGrp_NoEvents_144.insert(EventTime_144.getString());
      FIX::EventType EventType_144(1);
      noEvents_0_1_0.set(EventType_144);
      EvntGrp_NoEvents_144.insert(EventType_144.getString());
      all_values.push_back(EvntGrp_NoEvents_144);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_146;
      FIX::InstrumentPartyID InstrumentPartyID_146("STRING_500712234");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyID_146.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_146('6');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyIDSource_146.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_146(1055443204);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyRole_146.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_146);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283;
        FIX::InstrumentPartySubID InstrumentPartySubID_283("STRING_1449109103");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_283);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283.insert(InstrumentPartySubID_283.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_283(544446254);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_283);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283.insert(InstrumentPartySubIDType_283.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_283);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_147;
      FIX::InstrumentPartyID InstrumentPartyID_147("STRING_1129727564");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyID_147.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_147('2');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyIDSource_147.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_147(646779915);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyRole_147.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_147);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284;
        FIX::InstrumentPartySubID InstrumentPartySubID_284("STRING_996106291");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_284);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubID_284.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_284(569674626);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_284);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubIDType_284.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285;
        FIX::InstrumentPartySubID InstrumentPartySubID_285("STRING_780697079");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_285);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubID_285.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_285(231184701);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_285);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubIDType_285.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_148;
      FIX::InstrumentPartyID InstrumentPartyID_148("STRING_1507240769");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyID_148.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_148('3');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyIDSource_148.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_148(1173200177);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyRole_148.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_148);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286;
        FIX::InstrumentPartySubID InstrumentPartySubID_286("STRING_2109402632");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_286);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubID_286.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_286(1906479245);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_286);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubIDType_286.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287;
        FIX::InstrumentPartySubID InstrumentPartySubID_287("STRING_267041595");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_287);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubID_287.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_287(1973268080);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_287);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubIDType_287.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288;
        FIX::InstrumentPartySubID InstrumentPartySubID_288("STRING_1109316853");
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubID_288);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubID_288.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_288(1290375345);
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubIDType_288);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288.insert(InstrumentPartySubIDType_288.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_132;
      FIX::SecurityAltID SecurityAltID_132("STRING_1225406257");
      noSecurityAltID_0_1_0.set(SecurityAltID_132);
      SecAltIDGrp_NoSecurityAltID_132.insert(SecurityAltID_132.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_132("STRING_1386951559");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_132);
      SecAltIDGrp_NoSecurityAltID_132.insert(SecurityAltIDSource_132.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_132);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_142;
    FIX::SecurityXML SecurityXML_143("XMLDATA_582356063");
    noRelatedSym_0_0.set(SecurityXML_143);
    FIX::SecurityXMLLen SecurityXMLLen_71(343566547);
    noRelatedSym_0_0.set(SecurityXMLLen_71);
    FIX::SecurityXMLSchema SecurityXMLSchema_71("STRING_1681625959");
    noRelatedSym_0_0.set(SecurityXMLSchema_71);
    SecurityXML_142.insert(SecurityXMLSchema_71.getString());
    all_values.push_back(SecurityXML_142);
    all_compo_names.insert("SecurityXML");

    // OrderQtyData
    multiset<string> OrderQtyData_22;
    FIX::CashOrderQty CashOrderQty_22;
    CashOrderQty_22.setString("18260761");
    noRelatedSym_0_0.set(CashOrderQty_22);
    OrderQtyData_22.insert(CashOrderQty_22.getString());
    FIX::OrderPercent OrderPercent_22;
    OrderPercent_22.setString("87.820000");
    noRelatedSym_0_0.set(OrderPercent_22);
    OrderQtyData_22.insert(OrderPercent_22.getString());
    FIX::OrderQty OrderQty_32;
    OrderQty_32.setString("1475172");
    noRelatedSym_0_0.set(OrderQty_32);
    OrderQtyData_22.insert(OrderQty_32.getString());
    FIX::RoundingDirection RoundingDirection_22('0');
    noRelatedSym_0_0.set(RoundingDirection_22);
    OrderQtyData_22.insert(RoundingDirection_22.getString());
    FIX::RoundingModulus RoundingModulus_22;
    RoundingModulus_22.setString("4860899");
    noRelatedSym_0_0.set(RoundingModulus_22);
    OrderQtyData_22.insert(RoundingModulus_22.getString());
    all_values.push_back(OrderQtyData_22);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_110;
      FIX::PartyID PartyID_110("STRING_1278481971");
      noPartyIDs_0_1_0.set(PartyID_110);
      Parties_NoPartyIDs_110.insert(PartyID_110.getString());
      FIX::PartyIDSource PartyIDSource_110('H');
      noPartyIDs_0_1_0.set(PartyIDSource_110);
      Parties_NoPartyIDs_110.insert(PartyIDSource_110.getString());
      FIX::PartyRole PartyRole_110(2);
      noPartyIDs_0_1_0.set(PartyRole_110);
      Parties_NoPartyIDs_110.insert(PartyRole_110.getString());
      all_values.push_back(Parties_NoPartyIDs_110);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_244;
        FIX::PartySubID PartySubID_244("STRING_569732899");
        noPartySubIDs_0_0_2_0.set(PartySubID_244);
        PtysSubGrp_NoPartySubIDs_244.insert(PartySubID_244.getString());
        FIX::PartySubIDType PartySubIDType_244(7);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_244);
        PtysSubGrp_NoPartySubIDs_244.insert(PartySubIDType_244.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_244);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_111;
      FIX::PartyID PartyID_111("STRING_347452865");
      noPartyIDs_0_1_1.set(PartyID_111);
      Parties_NoPartyIDs_111.insert(PartyID_111.getString());
      FIX::PartyIDSource PartyIDSource_111('C');
      noPartyIDs_0_1_1.set(PartyIDSource_111);
      Parties_NoPartyIDs_111.insert(PartyIDSource_111.getString());
      FIX::PartyRole PartyRole_111(48);
      noPartyIDs_0_1_1.set(PartyRole_111);
      Parties_NoPartyIDs_111.insert(PartyRole_111.getString());
      all_values.push_back(Parties_NoPartyIDs_111);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_245;
        FIX::PartySubID PartySubID_245("STRING_1699685822");
        noPartySubIDs_0_1_2_0.set(PartySubID_245);
        PtysSubGrp_NoPartySubIDs_245.insert(PartySubID_245.getString());
        FIX::PartySubIDType PartySubIDType_245(25);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_245);
        PtysSubGrp_NoPartySubIDs_245.insert(PartySubIDType_245.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_245);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_246;
        FIX::PartySubID PartySubID_246("STRING_1221643165");
        noPartySubIDs_0_1_2_1.set(PartySubID_246);
        PtysSubGrp_NoPartySubIDs_246.insert(PartySubID_246.getString());
        FIX::PartySubIDType PartySubIDType_246(27);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_246);
        PtysSubGrp_NoPartySubIDs_246.insert(PartySubIDType_246.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_246);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_112;
      FIX::PartyID PartyID_112("STRING_1533555012");
      noPartyIDs_0_1_2.set(PartyID_112);
      Parties_NoPartyIDs_112.insert(PartyID_112.getString());
      FIX::PartyIDSource PartyIDSource_112('G');
      noPartyIDs_0_1_2.set(PartyIDSource_112);
      Parties_NoPartyIDs_112.insert(PartyIDSource_112.getString());
      FIX::PartyRole PartyRole_112(64);
      noPartyIDs_0_1_2.set(PartyRole_112);
      Parties_NoPartyIDs_112.insert(PartyRole_112.getString());
      all_values.push_back(Parties_NoPartyIDs_112);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_247;
        FIX::PartySubID PartySubID_247("STRING_631576457");
        noPartySubIDs_0_2_2_0.set(PartySubID_247);
        PtysSubGrp_NoPartySubIDs_247.insert(PartySubID_247.getString());
        FIX::PartySubIDType PartySubIDType_247(12);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_247);
        PtysSubGrp_NoPartySubIDs_247.insert(PartySubIDType_247.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_247);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_3;
      FIX::QuoteQualifier QuoteQualifier_3('2');
      noQuoteQualifiers_0_1_0.set(QuoteQualifier_3);
      QuotQualGrp_NoQuoteQualifiers_3.insert(QuoteQualifier_3.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_3);
      all_compo_names.insert("QuotQualGrp.NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_4;
      FIX::QuoteQualifier QuoteQualifier_4('3');
      noQuoteQualifiers_0_1_1.set(QuoteQualifier_4);
      QuotQualGrp_NoQuoteQualifiers_4.insert(QuoteQualifier_4.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_4);
      all_compo_names.insert("QuotQualGrp.NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_1);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_6;
      FIX::LegOrderQty LegOrderQty_13;
      LegOrderQty_13.setString("15526703");
      noLegs_0_1_0.set(LegOrderQty_13);
      QuotReqLegsGrp_NoLegs_6.insert(LegOrderQty_13.getString());
      FIX::LegQty LegQty_13;
      LegQty_13.setString("320407");
      noLegs_0_1_0.set(LegQty_13);
      QuotReqLegsGrp_NoLegs_6.insert(LegQty_13.getString());
      FIX::LegRefID LegRefID_13("STRING_761156156");
      noLegs_0_1_0.set(LegRefID_13);
      QuotReqLegsGrp_NoLegs_6.insert(LegRefID_13.getString());
      FIX::LegSettlDate LegSettlDate_13("LOCALMKTDATE_1700187543");
      noLegs_0_1_0.set(LegSettlDate_13);
      QuotReqLegsGrp_NoLegs_6.insert(LegSettlDate_13.getString());
      FIX::LegSettlType LegSettlType_13('7');
      noLegs_0_1_0.set(LegSettlType_13);
      QuotReqLegsGrp_NoLegs_6.insert(LegSettlType_13.getString());
      FIX::LegSwapType LegSwapType_13(2);
      noLegs_0_1_0.set(LegSwapType_13);
      QuotReqLegsGrp_NoLegs_6.insert(LegSwapType_13.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_6);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_112;
      FIX::EncodedLegIssuer EncodedLegIssuer_112("DATA_1149330213");
      noLegs_0_1_0.set(EncodedLegIssuer_112);
      InstrumentLeg_112.insert(EncodedLegIssuer_112.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_112(2044558440);
      noLegs_0_1_0.set(EncodedLegIssuerLen_112);
      InstrumentLeg_112.insert(EncodedLegIssuerLen_112.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_112("DATA_715579946");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_112);
      InstrumentLeg_112.insert(EncodedLegSecurityDesc_112.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_112(523398458);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_112);
      InstrumentLeg_112.insert(EncodedLegSecurityDescLen_112.getString());
      FIX::LegCFICode LegCFICode_112("STRING_1822336678");
      noLegs_0_1_0.set(LegCFICode_112);
      InstrumentLeg_112.insert(LegCFICode_112.getString());
      FIX::LegContractMultiplier LegContractMultiplier_112;
      LegContractMultiplier_112.setString("12853128");
      noLegs_0_1_0.set(LegContractMultiplier_112);
      InstrumentLeg_112.insert(LegContractMultiplier_112.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_112(893572995);
      noLegs_0_1_0.set(LegContractMultiplierUnit_112);
      InstrumentLeg_112.insert(LegContractMultiplierUnit_112.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_112("MONTHYEAR_22305895");
      noLegs_0_1_0.set(LegContractSettlMonth_112);
      InstrumentLeg_112.insert(LegContractSettlMonth_112.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_112("COUNTRY_488259176");
      noLegs_0_1_0.set(LegCountryOfIssue_112);
      InstrumentLeg_112.insert(LegCountryOfIssue_112.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_112("LOCALMKTDATE_1494932233");
      noLegs_0_1_0.set(LegCouponPaymentDate_112);
      InstrumentLeg_112.insert(LegCouponPaymentDate_112.getString());
      FIX::LegCouponRate LegCouponRate_112;
      LegCouponRate_112.setString("95.300000");
      noLegs_0_1_0.set(LegCouponRate_112);
      InstrumentLeg_112.insert(LegCouponRate_112.getString());
      FIX::LegCreditRating LegCreditRating_112("STRING_40461350");
      noLegs_0_1_0.set(LegCreditRating_112);
      InstrumentLeg_112.insert(LegCreditRating_112.getString());
      FIX::LegCurrency LegCurrency_112("CAN");
      noLegs_0_1_0.set(LegCurrency_112);
      InstrumentLeg_112.insert(LegCurrency_112.getString());
      FIX::LegDatedDate LegDatedDate_112("LOCALMKTDATE_1702066156");
      noLegs_0_1_0.set(LegDatedDate_112);
      InstrumentLeg_112.insert(LegDatedDate_112.getString());
      FIX::LegExerciseStyle LegExerciseStyle_112(508079364);
      noLegs_0_1_0.set(LegExerciseStyle_112);
      InstrumentLeg_112.insert(LegExerciseStyle_112.getString());
      FIX::LegFactor LegFactor_112;
      LegFactor_112.setString("2923601");
      noLegs_0_1_0.set(LegFactor_112);
      InstrumentLeg_112.insert(LegFactor_112.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_112(1041971746);
      noLegs_0_1_0.set(LegFlowScheduleType_112);
      InstrumentLeg_112.insert(LegFlowScheduleType_112.getString());
      FIX::LegInstrRegistry LegInstrRegistry_112("STRING_1003467582");
      noLegs_0_1_0.set(LegInstrRegistry_112);
      InstrumentLeg_112.insert(LegInstrRegistry_112.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_112("LOCALMKTDATE_923936617");
      noLegs_0_1_0.set(LegInterestAccrualDate_112);
      InstrumentLeg_112.insert(LegInterestAccrualDate_112.getString());
      FIX::LegIssueDate LegIssueDate_112("LOCALMKTDATE_813063923");
      noLegs_0_1_0.set(LegIssueDate_112);
      InstrumentLeg_112.insert(LegIssueDate_112.getString());
      FIX::LegIssuer LegIssuer_112("STRING_576778409");
      noLegs_0_1_0.set(LegIssuer_112);
      InstrumentLeg_112.insert(LegIssuer_112.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_112("STRING_794980986");
      noLegs_0_1_0.set(LegLocaleOfIssue_112);
      InstrumentLeg_112.insert(LegLocaleOfIssue_112.getString());
      FIX::LegMaturityDate LegMaturityDate_112("LOCALMKTDATE_1166512163");
      noLegs_0_1_0.set(LegMaturityDate_112);
      InstrumentLeg_112.insert(LegMaturityDate_112.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_112("MONTHYEAR_493655784");
      noLegs_0_1_0.set(LegMaturityMonthYear_112);
      InstrumentLeg_112.insert(LegMaturityMonthYear_112.getString());
      FIX::LegMaturityTime LegMaturityTime_112("TZTIMEONLY_200167665");
      noLegs_0_1_0.set(LegMaturityTime_112);
      InstrumentLeg_112.insert(LegMaturityTime_112.getString());
      FIX::LegOptAttribute LegOptAttribute_112('1');
      noLegs_0_1_0.set(LegOptAttribute_112);
      InstrumentLeg_112.insert(LegOptAttribute_112.getString());
      FIX::LegOptionRatio LegOptionRatio_112;
      LegOptionRatio_112.setString("12548119");
      noLegs_0_1_0.set(LegOptionRatio_112);
      InstrumentLeg_112.insert(LegOptionRatio_112.getString());
      FIX::LegPool LegPool_112("STRING_1900355208");
      noLegs_0_1_0.set(LegPool_112);
      InstrumentLeg_112.insert(LegPool_112.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_112("STRING_1964629384");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_112);
      InstrumentLeg_112.insert(LegPriceUnitOfMeasure_112.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_112;
      LegPriceUnitOfMeasureQty_112.setString("3545743");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_112);
      InstrumentLeg_112.insert(LegPriceUnitOfMeasureQty_112.getString());
      FIX::LegProduct LegProduct_112(902201774);
      noLegs_0_1_0.set(LegProduct_112);
      InstrumentLeg_112.insert(LegProduct_112.getString());
      FIX::LegPutOrCall LegPutOrCall_112(1861704176);
      noLegs_0_1_0.set(LegPutOrCall_112);
      InstrumentLeg_112.insert(LegPutOrCall_112.getString());
      FIX::LegRatioQty LegRatioQty_112;
      LegRatioQty_112.setString("10701543");
      noLegs_0_1_0.set(LegRatioQty_112);
      InstrumentLeg_112.insert(LegRatioQty_112.getString());
      FIX::LegRedemptionDate LegRedemptionDate_112("LOCALMKTDATE_1425600232");
      noLegs_0_1_0.set(LegRedemptionDate_112);
      InstrumentLeg_112.insert(LegRedemptionDate_112.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_112("STRING_1536557207");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_112);
      InstrumentLeg_112.insert(LegRepoCollateralSecurityType_112.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_112;
      LegRepurchaseRate_112.setString("35.300000");
      noLegs_0_1_0.set(LegRepurchaseRate_112);
      InstrumentLeg_112.insert(LegRepurchaseRate_112.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_112(171689579);
      noLegs_0_1_0.set(LegRepurchaseTerm_112);
      InstrumentLeg_112.insert(LegRepurchaseTerm_112.getString());
      FIX::LegSecurityDesc LegSecurityDesc_112("STRING_1558863102");
      noLegs_0_1_0.set(LegSecurityDesc_112);
      InstrumentLeg_112.insert(LegSecurityDesc_112.getString());
      FIX::LegSecurityExchange LegSecurityExchange_112("EXCHANGE_696242707");
      noLegs_0_1_0.set(LegSecurityExchange_112);
      InstrumentLeg_112.insert(LegSecurityExchange_112.getString());
      FIX::LegSecurityID LegSecurityID_112("STRING_1666621812");
      noLegs_0_1_0.set(LegSecurityID_112);
      InstrumentLeg_112.insert(LegSecurityID_112.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_112("STRING_1288378984");
      noLegs_0_1_0.set(LegSecurityIDSource_112);
      InstrumentLeg_112.insert(LegSecurityIDSource_112.getString());
      FIX::LegSecuritySubType LegSecuritySubType_112("STRING_736704057");
      noLegs_0_1_0.set(LegSecuritySubType_112);
      InstrumentLeg_112.insert(LegSecuritySubType_112.getString());
      FIX::LegSecurityType LegSecurityType_112("STRING_641146164");
      noLegs_0_1_0.set(LegSecurityType_112);
      InstrumentLeg_112.insert(LegSecurityType_112.getString());
      FIX::LegSide LegSide_112('9');
      noLegs_0_1_0.set(LegSide_112);
      InstrumentLeg_112.insert(LegSide_112.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_112("STRING_291286566");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_112);
      InstrumentLeg_112.insert(LegStateOrProvinceOfIssue_112.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_112("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_112);
      InstrumentLeg_112.insert(LegStrikeCurrency_112.getString());
      FIX::LegStrikePrice LegStrikePrice_112;
      LegStrikePrice_112.setString("13332583");
      noLegs_0_1_0.set(LegStrikePrice_112);
      InstrumentLeg_112.insert(LegStrikePrice_112.getString());
      FIX::LegSymbol LegSymbol_112("STRING_5209463");
      noLegs_0_1_0.set(LegSymbol_112);
      InstrumentLeg_112.insert(LegSymbol_112.getString());
      FIX::LegSymbolSfx LegSymbolSfx_112("STRING_1308351161");
      noLegs_0_1_0.set(LegSymbolSfx_112);
      InstrumentLeg_112.insert(LegSymbolSfx_112.getString());
      FIX::LegTimeUnit LegTimeUnit_112("STRING_2146322235");
      noLegs_0_1_0.set(LegTimeUnit_112);
      InstrumentLeg_112.insert(LegTimeUnit_112.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_112("STRING_581987873");
      noLegs_0_1_0.set(LegUnitOfMeasure_112);
      InstrumentLeg_112.insert(LegUnitOfMeasure_112.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_112;
      LegUnitOfMeasureQty_112.setString("21033321");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_112);
      InstrumentLeg_112.insert(LegUnitOfMeasureQty_112.getString());
      all_values.push_back(InstrumentLeg_112);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_228;
        FIX::LegSecurityAltID LegSecurityAltID_228("STRING_1075643657");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_228);
        LegSecAltIDGrp_NoLegSecurityAltID_228.insert(LegSecurityAltID_228.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_228("STRING_156016165");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_228);
        LegSecAltIDGrp_NoLegSecurityAltID_228.insert(LegSecurityAltIDSource_228.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_228);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_9;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_9("CAN");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurveCurrency_9.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_9("STRING_2056371373");
      noLegs_0_1_0.set(LegBenchmarkCurveName_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurveName_9.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_9("STRING_33565754");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurvePoint_9.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_9;
      LegBenchmarkPrice_9.setString("5375463");
      noLegs_0_1_0.set(LegBenchmarkPrice_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkPrice_9.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_9(811089499);
      noLegs_0_1_0.set(LegBenchmarkPriceType_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkPriceType_9.getString());
      all_values.push_back(LegBenchmarkCurveData_9);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_33;
        FIX::LegStipulationType LegStipulationType_33("STRING_1607700668");
        noLegStipulations_0_0_2_0.set(LegStipulationType_33);
        LegStipulations_NoLegStipulations_33.insert(LegStipulationType_33.getString());
        FIX::LegStipulationValue LegStipulationValue_33("STRING_89206084");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_33);
        LegStipulations_NoLegStipulations_33.insert(LegStipulationValue_33.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_33);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_34;
        FIX::LegStipulationType LegStipulationType_34("STRING_1284343490");
        noLegStipulations_0_0_2_1.set(LegStipulationType_34);
        LegStipulations_NoLegStipulations_34.insert(LegStipulationType_34.getString());
        FIX::LegStipulationValue LegStipulationValue_34("STRING_1815684198");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_34);
        LegStipulations_NoLegStipulations_34.insert(LegStipulationValue_34.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_34);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_35;
        FIX::LegStipulationType LegStipulationType_35("STRING_260895663");
        noLegStipulations_0_0_2_2.set(LegStipulationType_35);
        LegStipulations_NoLegStipulations_35.insert(LegStipulationType_35.getString());
        FIX::LegStipulationValue LegStipulationValue_35("STRING_695722944");
        noLegStipulations_0_0_2_2.set(LegStipulationValue_35);
        LegStipulations_NoLegStipulations_35.insert(LegStipulationValue_35.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_35);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_113;
        FIX::NestedPartyID NestedPartyID_113("STRING_1927517476");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_113);
        NestedParties_NoNestedPartyIDs_113.insert(NestedPartyID_113.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_113('1');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_113);
        NestedParties_NoNestedPartyIDs_113.insert(NestedPartyIDSource_113.getString());
        FIX::NestedPartyRole NestedPartyRole_113(1101147315);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_113);
        NestedParties_NoNestedPartyIDs_113.insert(NestedPartyRole_113.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_113);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_247;
          FIX::NestedPartySubID NestedPartySubID_247("STRING_2076156313");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_247);
          NstdPtysSubGrp_NoNestedPartySubIDs_247.insert(NestedPartySubID_247.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_247(1392433881);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_247);
          NstdPtysSubGrp_NoNestedPartySubIDs_247.insert(NestedPartySubIDType_247.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_247);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_248;
          FIX::NestedPartySubID NestedPartySubID_248("STRING_1570405521");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_248);
          NstdPtysSubGrp_NoNestedPartySubIDs_248.insert(NestedPartySubID_248.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_248(313087209);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_248);
          NstdPtysSubGrp_NoNestedPartySubIDs_248.insert(NestedPartySubIDType_248.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_248);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_249;
          FIX::NestedPartySubID NestedPartySubID_249("STRING_578208545");
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubID_249);
          NstdPtysSubGrp_NoNestedPartySubIDs_249.insert(NestedPartySubID_249.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_249(1575614985);
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubIDType_249);
          NstdPtysSubGrp_NoNestedPartySubIDs_249.insert(NestedPartySubIDType_249.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_249);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_114;
        FIX::NestedPartyID NestedPartyID_114("STRING_1621438370");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_114);
        NestedParties_NoNestedPartyIDs_114.insert(NestedPartyID_114.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_114('5');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_114);
        NestedParties_NoNestedPartyIDs_114.insert(NestedPartyIDSource_114.getString());
        FIX::NestedPartyRole NestedPartyRole_114(10119210);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_114);
        NestedParties_NoNestedPartyIDs_114.insert(NestedPartyRole_114.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_114);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_250;
          FIX::NestedPartySubID NestedPartySubID_250("STRING_1742397883");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_250);
          NstdPtysSubGrp_NoNestedPartySubIDs_250.insert(NestedPartySubID_250.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_250(1085762867);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_250);
          NstdPtysSubGrp_NoNestedPartySubIDs_250.insert(NestedPartySubIDType_250.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_250);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_115;
        FIX::NestedPartyID NestedPartyID_115("STRING_1733303035");
        noNestedPartyIDs_0_0_2_2.set(NestedPartyID_115);
        NestedParties_NoNestedPartyIDs_115.insert(NestedPartyID_115.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_115('1');
        noNestedPartyIDs_0_0_2_2.set(NestedPartyIDSource_115);
        NestedParties_NoNestedPartyIDs_115.insert(NestedPartyIDSource_115.getString());
        FIX::NestedPartyRole NestedPartyRole_115(1268734816);
        noNestedPartyIDs_0_0_2_2.set(NestedPartyRole_115);
        NestedParties_NoNestedPartyIDs_115.insert(NestedPartyRole_115.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_115);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_251;
          FIX::NestedPartySubID NestedPartySubID_251("STRING_1992383656");
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubID_251);
          NstdPtysSubGrp_NoNestedPartySubIDs_251.insert(NestedPartySubID_251.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_251(1806281152);
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubIDType_251);
          NstdPtysSubGrp_NoNestedPartySubIDs_251.insert(NestedPartySubIDType_251.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_251);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_0);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_7;
      FIX::LegOrderQty LegOrderQty_14;
      LegOrderQty_14.setString("3057966");
      noLegs_0_1_1.set(LegOrderQty_14);
      QuotReqLegsGrp_NoLegs_7.insert(LegOrderQty_14.getString());
      FIX::LegQty LegQty_14;
      LegQty_14.setString("17401699");
      noLegs_0_1_1.set(LegQty_14);
      QuotReqLegsGrp_NoLegs_7.insert(LegQty_14.getString());
      FIX::LegRefID LegRefID_14("STRING_1266498172");
      noLegs_0_1_1.set(LegRefID_14);
      QuotReqLegsGrp_NoLegs_7.insert(LegRefID_14.getString());
      FIX::LegSettlDate LegSettlDate_14("LOCALMKTDATE_395002696");
      noLegs_0_1_1.set(LegSettlDate_14);
      QuotReqLegsGrp_NoLegs_7.insert(LegSettlDate_14.getString());
      FIX::LegSettlType LegSettlType_14('8');
      noLegs_0_1_1.set(LegSettlType_14);
      QuotReqLegsGrp_NoLegs_7.insert(LegSettlType_14.getString());
      FIX::LegSwapType LegSwapType_14(4);
      noLegs_0_1_1.set(LegSwapType_14);
      QuotReqLegsGrp_NoLegs_7.insert(LegSwapType_14.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_7);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_113;
      FIX::EncodedLegIssuer EncodedLegIssuer_113("DATA_655898359");
      noLegs_0_1_1.set(EncodedLegIssuer_113);
      InstrumentLeg_113.insert(EncodedLegIssuer_113.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_113(1572752725);
      noLegs_0_1_1.set(EncodedLegIssuerLen_113);
      InstrumentLeg_113.insert(EncodedLegIssuerLen_113.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_113("DATA_1299141980");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_113);
      InstrumentLeg_113.insert(EncodedLegSecurityDesc_113.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_113(435932187);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_113);
      InstrumentLeg_113.insert(EncodedLegSecurityDescLen_113.getString());
      FIX::LegCFICode LegCFICode_113("STRING_1409371006");
      noLegs_0_1_1.set(LegCFICode_113);
      InstrumentLeg_113.insert(LegCFICode_113.getString());
      FIX::LegContractMultiplier LegContractMultiplier_113;
      LegContractMultiplier_113.setString("2528056");
      noLegs_0_1_1.set(LegContractMultiplier_113);
      InstrumentLeg_113.insert(LegContractMultiplier_113.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_113(857112180);
      noLegs_0_1_1.set(LegContractMultiplierUnit_113);
      InstrumentLeg_113.insert(LegContractMultiplierUnit_113.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_113("MONTHYEAR_1338043671");
      noLegs_0_1_1.set(LegContractSettlMonth_113);
      InstrumentLeg_113.insert(LegContractSettlMonth_113.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_113("COUNTRY_1645239528");
      noLegs_0_1_1.set(LegCountryOfIssue_113);
      InstrumentLeg_113.insert(LegCountryOfIssue_113.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_113("LOCALMKTDATE_280034053");
      noLegs_0_1_1.set(LegCouponPaymentDate_113);
      InstrumentLeg_113.insert(LegCouponPaymentDate_113.getString());
      FIX::LegCouponRate LegCouponRate_113;
      LegCouponRate_113.setString("8.800000");
      noLegs_0_1_1.set(LegCouponRate_113);
      InstrumentLeg_113.insert(LegCouponRate_113.getString());
      FIX::LegCreditRating LegCreditRating_113("STRING_75964425");
      noLegs_0_1_1.set(LegCreditRating_113);
      InstrumentLeg_113.insert(LegCreditRating_113.getString());
      FIX::LegCurrency LegCurrency_113("EUR");
      noLegs_0_1_1.set(LegCurrency_113);
      InstrumentLeg_113.insert(LegCurrency_113.getString());
      FIX::LegDatedDate LegDatedDate_113("LOCALMKTDATE_653011558");
      noLegs_0_1_1.set(LegDatedDate_113);
      InstrumentLeg_113.insert(LegDatedDate_113.getString());
      FIX::LegExerciseStyle LegExerciseStyle_113(1865768248);
      noLegs_0_1_1.set(LegExerciseStyle_113);
      InstrumentLeg_113.insert(LegExerciseStyle_113.getString());
      FIX::LegFactor LegFactor_113;
      LegFactor_113.setString("5548888");
      noLegs_0_1_1.set(LegFactor_113);
      InstrumentLeg_113.insert(LegFactor_113.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_113(247925794);
      noLegs_0_1_1.set(LegFlowScheduleType_113);
      InstrumentLeg_113.insert(LegFlowScheduleType_113.getString());
      FIX::LegInstrRegistry LegInstrRegistry_113("STRING_804047467");
      noLegs_0_1_1.set(LegInstrRegistry_113);
      InstrumentLeg_113.insert(LegInstrRegistry_113.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_113("LOCALMKTDATE_140708212");
      noLegs_0_1_1.set(LegInterestAccrualDate_113);
      InstrumentLeg_113.insert(LegInterestAccrualDate_113.getString());
      FIX::LegIssueDate LegIssueDate_113("LOCALMKTDATE_59260047");
      noLegs_0_1_1.set(LegIssueDate_113);
      InstrumentLeg_113.insert(LegIssueDate_113.getString());
      FIX::LegIssuer LegIssuer_113("STRING_2072782284");
      noLegs_0_1_1.set(LegIssuer_113);
      InstrumentLeg_113.insert(LegIssuer_113.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_113("STRING_1782898972");
      noLegs_0_1_1.set(LegLocaleOfIssue_113);
      InstrumentLeg_113.insert(LegLocaleOfIssue_113.getString());
      FIX::LegMaturityDate LegMaturityDate_113("LOCALMKTDATE_2051643703");
      noLegs_0_1_1.set(LegMaturityDate_113);
      InstrumentLeg_113.insert(LegMaturityDate_113.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_113("MONTHYEAR_1731579788");
      noLegs_0_1_1.set(LegMaturityMonthYear_113);
      InstrumentLeg_113.insert(LegMaturityMonthYear_113.getString());
      FIX::LegMaturityTime LegMaturityTime_113("TZTIMEONLY_2088695584");
      noLegs_0_1_1.set(LegMaturityTime_113);
      InstrumentLeg_113.insert(LegMaturityTime_113.getString());
      FIX::LegOptAttribute LegOptAttribute_113('1');
      noLegs_0_1_1.set(LegOptAttribute_113);
      InstrumentLeg_113.insert(LegOptAttribute_113.getString());
      FIX::LegOptionRatio LegOptionRatio_113;
      LegOptionRatio_113.setString("8505943");
      noLegs_0_1_1.set(LegOptionRatio_113);
      InstrumentLeg_113.insert(LegOptionRatio_113.getString());
      FIX::LegPool LegPool_113("STRING_336214632");
      noLegs_0_1_1.set(LegPool_113);
      InstrumentLeg_113.insert(LegPool_113.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_113("STRING_373876127");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_113);
      InstrumentLeg_113.insert(LegPriceUnitOfMeasure_113.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_113;
      LegPriceUnitOfMeasureQty_113.setString("17852930");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_113);
      InstrumentLeg_113.insert(LegPriceUnitOfMeasureQty_113.getString());
      FIX::LegProduct LegProduct_113(992112992);
      noLegs_0_1_1.set(LegProduct_113);
      InstrumentLeg_113.insert(LegProduct_113.getString());
      FIX::LegPutOrCall LegPutOrCall_113(1946628853);
      noLegs_0_1_1.set(LegPutOrCall_113);
      InstrumentLeg_113.insert(LegPutOrCall_113.getString());
      FIX::LegRatioQty LegRatioQty_113;
      LegRatioQty_113.setString("9369513");
      noLegs_0_1_1.set(LegRatioQty_113);
      InstrumentLeg_113.insert(LegRatioQty_113.getString());
      FIX::LegRedemptionDate LegRedemptionDate_113("LOCALMKTDATE_1428045179");
      noLegs_0_1_1.set(LegRedemptionDate_113);
      InstrumentLeg_113.insert(LegRedemptionDate_113.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_113("STRING_1208516211");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_113);
      InstrumentLeg_113.insert(LegRepoCollateralSecurityType_113.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_113;
      LegRepurchaseRate_113.setString("70.130000");
      noLegs_0_1_1.set(LegRepurchaseRate_113);
      InstrumentLeg_113.insert(LegRepurchaseRate_113.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_113(137673711);
      noLegs_0_1_1.set(LegRepurchaseTerm_113);
      InstrumentLeg_113.insert(LegRepurchaseTerm_113.getString());
      FIX::LegSecurityDesc LegSecurityDesc_113("STRING_399076235");
      noLegs_0_1_1.set(LegSecurityDesc_113);
      InstrumentLeg_113.insert(LegSecurityDesc_113.getString());
      FIX::LegSecurityExchange LegSecurityExchange_113("EXCHANGE_687512893");
      noLegs_0_1_1.set(LegSecurityExchange_113);
      InstrumentLeg_113.insert(LegSecurityExchange_113.getString());
      FIX::LegSecurityID LegSecurityID_113("STRING_417707765");
      noLegs_0_1_1.set(LegSecurityID_113);
      InstrumentLeg_113.insert(LegSecurityID_113.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_113("STRING_2050207115");
      noLegs_0_1_1.set(LegSecurityIDSource_113);
      InstrumentLeg_113.insert(LegSecurityIDSource_113.getString());
      FIX::LegSecuritySubType LegSecuritySubType_113("STRING_763477319");
      noLegs_0_1_1.set(LegSecuritySubType_113);
      InstrumentLeg_113.insert(LegSecuritySubType_113.getString());
      FIX::LegSecurityType LegSecurityType_113("STRING_125873155");
      noLegs_0_1_1.set(LegSecurityType_113);
      InstrumentLeg_113.insert(LegSecurityType_113.getString());
      FIX::LegSide LegSide_113('1');
      noLegs_0_1_1.set(LegSide_113);
      InstrumentLeg_113.insert(LegSide_113.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_113("STRING_1416488877");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_113);
      InstrumentLeg_113.insert(LegStateOrProvinceOfIssue_113.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_113("CHF");
      noLegs_0_1_1.set(LegStrikeCurrency_113);
      InstrumentLeg_113.insert(LegStrikeCurrency_113.getString());
      FIX::LegStrikePrice LegStrikePrice_113;
      LegStrikePrice_113.setString("16644146");
      noLegs_0_1_1.set(LegStrikePrice_113);
      InstrumentLeg_113.insert(LegStrikePrice_113.getString());
      FIX::LegSymbol LegSymbol_113("STRING_648205223");
      noLegs_0_1_1.set(LegSymbol_113);
      InstrumentLeg_113.insert(LegSymbol_113.getString());
      FIX::LegSymbolSfx LegSymbolSfx_113("STRING_1723406107");
      noLegs_0_1_1.set(LegSymbolSfx_113);
      InstrumentLeg_113.insert(LegSymbolSfx_113.getString());
      FIX::LegTimeUnit LegTimeUnit_113("STRING_1723674719");
      noLegs_0_1_1.set(LegTimeUnit_113);
      InstrumentLeg_113.insert(LegTimeUnit_113.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_113("STRING_573503859");
      noLegs_0_1_1.set(LegUnitOfMeasure_113);
      InstrumentLeg_113.insert(LegUnitOfMeasure_113.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_113;
      LegUnitOfMeasureQty_113.setString("13588214");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_113);
      InstrumentLeg_113.insert(LegUnitOfMeasureQty_113.getString());
      all_values.push_back(InstrumentLeg_113);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_229;
        FIX::LegSecurityAltID LegSecurityAltID_229("STRING_157599999");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_229);
        LegSecAltIDGrp_NoLegSecurityAltID_229.insert(LegSecurityAltID_229.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_229("STRING_1300033368");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_229);
        LegSecAltIDGrp_NoLegSecurityAltID_229.insert(LegSecurityAltIDSource_229.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_229);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_230;
        FIX::LegSecurityAltID LegSecurityAltID_230("STRING_1124681121");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_230);
        LegSecAltIDGrp_NoLegSecurityAltID_230.insert(LegSecurityAltID_230.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_230("STRING_1008194311");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_230);
        LegSecAltIDGrp_NoLegSecurityAltID_230.insert(LegSecurityAltIDSource_230.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_230);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_10;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_10("GBP");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurveCurrency_10.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_10("STRING_646003698");
      noLegs_0_1_1.set(LegBenchmarkCurveName_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurveName_10.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_10("STRING_480877345");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurvePoint_10.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_10;
      LegBenchmarkPrice_10.setString("12977024");
      noLegs_0_1_1.set(LegBenchmarkPrice_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkPrice_10.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_10(1582955064);
      noLegs_0_1_1.set(LegBenchmarkPriceType_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkPriceType_10.getString());
      all_values.push_back(LegBenchmarkCurveData_10);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_36;
        FIX::LegStipulationType LegStipulationType_36("STRING_358735017");
        noLegStipulations_0_1_2_0.set(LegStipulationType_36);
        LegStipulations_NoLegStipulations_36.insert(LegStipulationType_36.getString());
        FIX::LegStipulationValue LegStipulationValue_36("STRING_625228430");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_36);
        LegStipulations_NoLegStipulations_36.insert(LegStipulationValue_36.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_36);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_116;
        FIX::NestedPartyID NestedPartyID_116("STRING_757811252");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_116);
        NestedParties_NoNestedPartyIDs_116.insert(NestedPartyID_116.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_116('1');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_116);
        NestedParties_NoNestedPartyIDs_116.insert(NestedPartyIDSource_116.getString());
        FIX::NestedPartyRole NestedPartyRole_116(316820353);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_116);
        NestedParties_NoNestedPartyIDs_116.insert(NestedPartyRole_116.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_116);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_252;
          FIX::NestedPartySubID NestedPartySubID_252("STRING_2076218642");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_252);
          NstdPtysSubGrp_NoNestedPartySubIDs_252.insert(NestedPartySubID_252.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_252(442693508);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_252);
          NstdPtysSubGrp_NoNestedPartySubIDs_252.insert(NestedPartySubIDType_252.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_252);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_253;
          FIX::NestedPartySubID NestedPartySubID_253("STRING_1688343790");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_253);
          NstdPtysSubGrp_NoNestedPartySubIDs_253.insert(NestedPartySubID_253.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_253(1345223872);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_253);
          NstdPtysSubGrp_NoNestedPartySubIDs_253.insert(NestedPartySubIDType_253.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_253);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_254;
          FIX::NestedPartySubID NestedPartySubID_254("STRING_286851264");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_254);
          NstdPtysSubGrp_NoNestedPartySubIDs_254.insert(NestedPartySubID_254.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_254(1123558037);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_254);
          NstdPtysSubGrp_NoNestedPartySubIDs_254.insert(NestedPartySubIDType_254.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_254);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_117;
        FIX::NestedPartyID NestedPartyID_117("STRING_862154895");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_117);
        NestedParties_NoNestedPartyIDs_117.insert(NestedPartyID_117.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_117('9');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_117);
        NestedParties_NoNestedPartyIDs_117.insert(NestedPartyIDSource_117.getString());
        FIX::NestedPartyRole NestedPartyRole_117(699480497);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_117);
        NestedParties_NoNestedPartyIDs_117.insert(NestedPartyRole_117.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_117);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_255;
          FIX::NestedPartySubID NestedPartySubID_255("STRING_1508560347");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_255);
          NstdPtysSubGrp_NoNestedPartySubIDs_255.insert(NestedPartySubID_255.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_255(2058301929);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_255);
          NstdPtysSubGrp_NoNestedPartySubIDs_255.insert(NestedPartySubIDType_255.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_255);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_8;
      FIX::LegOrderQty LegOrderQty_15;
      LegOrderQty_15.setString("20661807");
      noLegs_0_1_2.set(LegOrderQty_15);
      QuotReqLegsGrp_NoLegs_8.insert(LegOrderQty_15.getString());
      FIX::LegQty LegQty_15;
      LegQty_15.setString("16661603");
      noLegs_0_1_2.set(LegQty_15);
      QuotReqLegsGrp_NoLegs_8.insert(LegQty_15.getString());
      FIX::LegRefID LegRefID_15("STRING_1210851649");
      noLegs_0_1_2.set(LegRefID_15);
      QuotReqLegsGrp_NoLegs_8.insert(LegRefID_15.getString());
      FIX::LegSettlDate LegSettlDate_15("LOCALMKTDATE_1043378214");
      noLegs_0_1_2.set(LegSettlDate_15);
      QuotReqLegsGrp_NoLegs_8.insert(LegSettlDate_15.getString());
      FIX::LegSettlType LegSettlType_15('5');
      noLegs_0_1_2.set(LegSettlType_15);
      QuotReqLegsGrp_NoLegs_8.insert(LegSettlType_15.getString());
      FIX::LegSwapType LegSwapType_15(4);
      noLegs_0_1_2.set(LegSwapType_15);
      QuotReqLegsGrp_NoLegs_8.insert(LegSwapType_15.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_8);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_114;
      FIX::EncodedLegIssuer EncodedLegIssuer_114("DATA_394451814");
      noLegs_0_1_2.set(EncodedLegIssuer_114);
      InstrumentLeg_114.insert(EncodedLegIssuer_114.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_114(1172874708);
      noLegs_0_1_2.set(EncodedLegIssuerLen_114);
      InstrumentLeg_114.insert(EncodedLegIssuerLen_114.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_114("DATA_1180493347");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_114);
      InstrumentLeg_114.insert(EncodedLegSecurityDesc_114.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_114(1692154268);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_114);
      InstrumentLeg_114.insert(EncodedLegSecurityDescLen_114.getString());
      FIX::LegCFICode LegCFICode_114("STRING_608346125");
      noLegs_0_1_2.set(LegCFICode_114);
      InstrumentLeg_114.insert(LegCFICode_114.getString());
      FIX::LegContractMultiplier LegContractMultiplier_114;
      LegContractMultiplier_114.setString("9419322");
      noLegs_0_1_2.set(LegContractMultiplier_114);
      InstrumentLeg_114.insert(LegContractMultiplier_114.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_114(2050889285);
      noLegs_0_1_2.set(LegContractMultiplierUnit_114);
      InstrumentLeg_114.insert(LegContractMultiplierUnit_114.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_114("MONTHYEAR_1233574555");
      noLegs_0_1_2.set(LegContractSettlMonth_114);
      InstrumentLeg_114.insert(LegContractSettlMonth_114.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_114("COUNTRY_841044812");
      noLegs_0_1_2.set(LegCountryOfIssue_114);
      InstrumentLeg_114.insert(LegCountryOfIssue_114.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_114("LOCALMKTDATE_661216889");
      noLegs_0_1_2.set(LegCouponPaymentDate_114);
      InstrumentLeg_114.insert(LegCouponPaymentDate_114.getString());
      FIX::LegCouponRate LegCouponRate_114;
      LegCouponRate_114.setString("22.300000");
      noLegs_0_1_2.set(LegCouponRate_114);
      InstrumentLeg_114.insert(LegCouponRate_114.getString());
      FIX::LegCreditRating LegCreditRating_114("STRING_1157865165");
      noLegs_0_1_2.set(LegCreditRating_114);
      InstrumentLeg_114.insert(LegCreditRating_114.getString());
      FIX::LegCurrency LegCurrency_114("CHF");
      noLegs_0_1_2.set(LegCurrency_114);
      InstrumentLeg_114.insert(LegCurrency_114.getString());
      FIX::LegDatedDate LegDatedDate_114("LOCALMKTDATE_1600558673");
      noLegs_0_1_2.set(LegDatedDate_114);
      InstrumentLeg_114.insert(LegDatedDate_114.getString());
      FIX::LegExerciseStyle LegExerciseStyle_114(862611750);
      noLegs_0_1_2.set(LegExerciseStyle_114);
      InstrumentLeg_114.insert(LegExerciseStyle_114.getString());
      FIX::LegFactor LegFactor_114;
      LegFactor_114.setString("16727910");
      noLegs_0_1_2.set(LegFactor_114);
      InstrumentLeg_114.insert(LegFactor_114.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_114(1887409938);
      noLegs_0_1_2.set(LegFlowScheduleType_114);
      InstrumentLeg_114.insert(LegFlowScheduleType_114.getString());
      FIX::LegInstrRegistry LegInstrRegistry_114("STRING_1986169788");
      noLegs_0_1_2.set(LegInstrRegistry_114);
      InstrumentLeg_114.insert(LegInstrRegistry_114.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_114("LOCALMKTDATE_387462344");
      noLegs_0_1_2.set(LegInterestAccrualDate_114);
      InstrumentLeg_114.insert(LegInterestAccrualDate_114.getString());
      FIX::LegIssueDate LegIssueDate_114("LOCALMKTDATE_674982778");
      noLegs_0_1_2.set(LegIssueDate_114);
      InstrumentLeg_114.insert(LegIssueDate_114.getString());
      FIX::LegIssuer LegIssuer_114("STRING_538166637");
      noLegs_0_1_2.set(LegIssuer_114);
      InstrumentLeg_114.insert(LegIssuer_114.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_114("STRING_825808311");
      noLegs_0_1_2.set(LegLocaleOfIssue_114);
      InstrumentLeg_114.insert(LegLocaleOfIssue_114.getString());
      FIX::LegMaturityDate LegMaturityDate_114("LOCALMKTDATE_36059477");
      noLegs_0_1_2.set(LegMaturityDate_114);
      InstrumentLeg_114.insert(LegMaturityDate_114.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_114("MONTHYEAR_448984918");
      noLegs_0_1_2.set(LegMaturityMonthYear_114);
      InstrumentLeg_114.insert(LegMaturityMonthYear_114.getString());
      FIX::LegMaturityTime LegMaturityTime_114("TZTIMEONLY_744505404");
      noLegs_0_1_2.set(LegMaturityTime_114);
      InstrumentLeg_114.insert(LegMaturityTime_114.getString());
      FIX::LegOptAttribute LegOptAttribute_114('1');
      noLegs_0_1_2.set(LegOptAttribute_114);
      InstrumentLeg_114.insert(LegOptAttribute_114.getString());
      FIX::LegOptionRatio LegOptionRatio_114;
      LegOptionRatio_114.setString("16598365");
      noLegs_0_1_2.set(LegOptionRatio_114);
      InstrumentLeg_114.insert(LegOptionRatio_114.getString());
      FIX::LegPool LegPool_114("STRING_1787883618");
      noLegs_0_1_2.set(LegPool_114);
      InstrumentLeg_114.insert(LegPool_114.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_114("STRING_81607187");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_114);
      InstrumentLeg_114.insert(LegPriceUnitOfMeasure_114.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_114;
      LegPriceUnitOfMeasureQty_114.setString("2119689");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_114);
      InstrumentLeg_114.insert(LegPriceUnitOfMeasureQty_114.getString());
      FIX::LegProduct LegProduct_114(34851784);
      noLegs_0_1_2.set(LegProduct_114);
      InstrumentLeg_114.insert(LegProduct_114.getString());
      FIX::LegPutOrCall LegPutOrCall_114(1254481895);
      noLegs_0_1_2.set(LegPutOrCall_114);
      InstrumentLeg_114.insert(LegPutOrCall_114.getString());
      FIX::LegRatioQty LegRatioQty_114;
      LegRatioQty_114.setString("13924622");
      noLegs_0_1_2.set(LegRatioQty_114);
      InstrumentLeg_114.insert(LegRatioQty_114.getString());
      FIX::LegRedemptionDate LegRedemptionDate_114("LOCALMKTDATE_1727006052");
      noLegs_0_1_2.set(LegRedemptionDate_114);
      InstrumentLeg_114.insert(LegRedemptionDate_114.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_114("STRING_1862828020");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_114);
      InstrumentLeg_114.insert(LegRepoCollateralSecurityType_114.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_114;
      LegRepurchaseRate_114.setString("8.450000");
      noLegs_0_1_2.set(LegRepurchaseRate_114);
      InstrumentLeg_114.insert(LegRepurchaseRate_114.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_114(1630411689);
      noLegs_0_1_2.set(LegRepurchaseTerm_114);
      InstrumentLeg_114.insert(LegRepurchaseTerm_114.getString());
      FIX::LegSecurityDesc LegSecurityDesc_114("STRING_948918927");
      noLegs_0_1_2.set(LegSecurityDesc_114);
      InstrumentLeg_114.insert(LegSecurityDesc_114.getString());
      FIX::LegSecurityExchange LegSecurityExchange_114("EXCHANGE_1027955657");
      noLegs_0_1_2.set(LegSecurityExchange_114);
      InstrumentLeg_114.insert(LegSecurityExchange_114.getString());
      FIX::LegSecurityID LegSecurityID_114("STRING_144144930");
      noLegs_0_1_2.set(LegSecurityID_114);
      InstrumentLeg_114.insert(LegSecurityID_114.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_114("STRING_1347751158");
      noLegs_0_1_2.set(LegSecurityIDSource_114);
      InstrumentLeg_114.insert(LegSecurityIDSource_114.getString());
      FIX::LegSecuritySubType LegSecuritySubType_114("STRING_38337174");
      noLegs_0_1_2.set(LegSecuritySubType_114);
      InstrumentLeg_114.insert(LegSecuritySubType_114.getString());
      FIX::LegSecurityType LegSecurityType_114("STRING_1465896539");
      noLegs_0_1_2.set(LegSecurityType_114);
      InstrumentLeg_114.insert(LegSecurityType_114.getString());
      FIX::LegSide LegSide_114('1');
      noLegs_0_1_2.set(LegSide_114);
      InstrumentLeg_114.insert(LegSide_114.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_114("STRING_1638895848");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_114);
      InstrumentLeg_114.insert(LegStateOrProvinceOfIssue_114.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_114("GBP");
      noLegs_0_1_2.set(LegStrikeCurrency_114);
      InstrumentLeg_114.insert(LegStrikeCurrency_114.getString());
      FIX::LegStrikePrice LegStrikePrice_114;
      LegStrikePrice_114.setString("13788221");
      noLegs_0_1_2.set(LegStrikePrice_114);
      InstrumentLeg_114.insert(LegStrikePrice_114.getString());
      FIX::LegSymbol LegSymbol_114("STRING_19710781");
      noLegs_0_1_2.set(LegSymbol_114);
      InstrumentLeg_114.insert(LegSymbol_114.getString());
      FIX::LegSymbolSfx LegSymbolSfx_114("STRING_1588088176");
      noLegs_0_1_2.set(LegSymbolSfx_114);
      InstrumentLeg_114.insert(LegSymbolSfx_114.getString());
      FIX::LegTimeUnit LegTimeUnit_114("STRING_2053804916");
      noLegs_0_1_2.set(LegTimeUnit_114);
      InstrumentLeg_114.insert(LegTimeUnit_114.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_114("STRING_557877418");
      noLegs_0_1_2.set(LegUnitOfMeasure_114);
      InstrumentLeg_114.insert(LegUnitOfMeasure_114.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_114;
      LegUnitOfMeasureQty_114.setString("2664128");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_114);
      InstrumentLeg_114.insert(LegUnitOfMeasureQty_114.getString());
      all_values.push_back(InstrumentLeg_114);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_231;
        FIX::LegSecurityAltID LegSecurityAltID_231("STRING_1006862336");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_231);
        LegSecAltIDGrp_NoLegSecurityAltID_231.insert(LegSecurityAltID_231.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_231("STRING_1010918243");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_231);
        LegSecAltIDGrp_NoLegSecurityAltID_231.insert(LegSecurityAltIDSource_231.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_231);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_232;
        FIX::LegSecurityAltID LegSecurityAltID_232("STRING_1644600570");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_232);
        LegSecAltIDGrp_NoLegSecurityAltID_232.insert(LegSecurityAltID_232.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_232("STRING_519215256");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_232);
        LegSecAltIDGrp_NoLegSecurityAltID_232.insert(LegSecurityAltIDSource_232.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_232);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_11;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_11("CAN");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_11);
      LegBenchmarkCurveData_11.insert(LegBenchmarkCurveCurrency_11.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_11("STRING_731184178");
      noLegs_0_1_2.set(LegBenchmarkCurveName_11);
      LegBenchmarkCurveData_11.insert(LegBenchmarkCurveName_11.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_11("STRING_686169998");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_11);
      LegBenchmarkCurveData_11.insert(LegBenchmarkCurvePoint_11.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_11;
      LegBenchmarkPrice_11.setString("8332060");
      noLegs_0_1_2.set(LegBenchmarkPrice_11);
      LegBenchmarkCurveData_11.insert(LegBenchmarkPrice_11.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_11(2123646447);
      noLegs_0_1_2.set(LegBenchmarkPriceType_11);
      LegBenchmarkCurveData_11.insert(LegBenchmarkPriceType_11.getString());
      all_values.push_back(LegBenchmarkCurveData_11);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_37;
        FIX::LegStipulationType LegStipulationType_37("STRING_548550377");
        noLegStipulations_0_2_2_0.set(LegStipulationType_37);
        LegStipulations_NoLegStipulations_37.insert(LegStipulationType_37.getString());
        FIX::LegStipulationValue LegStipulationValue_37("STRING_163073645");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_37);
        LegStipulations_NoLegStipulations_37.insert(LegStipulationValue_37.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_37);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_118;
        FIX::NestedPartyID NestedPartyID_118("STRING_1497469304");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_118);
        NestedParties_NoNestedPartyIDs_118.insert(NestedPartyID_118.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_118('1');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_118);
        NestedParties_NoNestedPartyIDs_118.insert(NestedPartyIDSource_118.getString());
        FIX::NestedPartyRole NestedPartyRole_118(2040249022);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_118);
        NestedParties_NoNestedPartyIDs_118.insert(NestedPartyRole_118.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_118);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_256;
          FIX::NestedPartySubID NestedPartySubID_256("STRING_1229366477");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_256);
          NstdPtysSubGrp_NoNestedPartySubIDs_256.insert(NestedPartySubID_256.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_256(1358661913);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_256);
          NstdPtysSubGrp_NoNestedPartySubIDs_256.insert(NestedPartySubIDType_256.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_256);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_119;
        FIX::NestedPartyID NestedPartyID_119("STRING_225571549");
        noNestedPartyIDs_0_2_2_1.set(NestedPartyID_119);
        NestedParties_NoNestedPartyIDs_119.insert(NestedPartyID_119.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_119('7');
        noNestedPartyIDs_0_2_2_1.set(NestedPartyIDSource_119);
        NestedParties_NoNestedPartyIDs_119.insert(NestedPartyIDSource_119.getString());
        FIX::NestedPartyRole NestedPartyRole_119(1539686555);
        noNestedPartyIDs_0_2_2_1.set(NestedPartyRole_119);
        NestedParties_NoNestedPartyIDs_119.insert(NestedPartyRole_119.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_119);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_257;
          FIX::NestedPartySubID NestedPartySubID_257("STRING_2099600815");
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubID_257);
          NstdPtysSubGrp_NoNestedPartySubIDs_257.insert(NestedPartySubID_257.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_257(1559397336);
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubIDType_257);
          NstdPtysSubGrp_NoNestedPartySubIDs_257.insert(NestedPartySubIDType_257.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_257);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_24;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_24("EUR");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurveCurrency_24.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_24("STRING_Treasury");
    noRelatedSym_0_0.set(BenchmarkCurveName_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurveName_24.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_24("STRING_1133214749");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurvePoint_24.getString());
    FIX::BenchmarkPrice BenchmarkPrice_24;
    BenchmarkPrice_24.setString("19483028");
    noRelatedSym_0_0.set(BenchmarkPrice_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkPrice_24.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_24(976653443);
    noRelatedSym_0_0.set(BenchmarkPriceType_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkPriceType_24.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_24("STRING_2144132993");
    noRelatedSym_0_0.set(BenchmarkSecurityID_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkSecurityID_24.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_24("STRING_1445419750");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_24);
    SpreadOrBenchmarkCurveData_24.insert(BenchmarkSecurityIDSource_24.getString());
    FIX::Spread Spread_24;
    Spread_24.setString("14958686");
    noRelatedSym_0_0.set(Spread_24);
    SpreadOrBenchmarkCurveData_24.insert(Spread_24.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_24);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_40;
      FIX::StipulationType StipulationType_40("STRING_MINDNOM");
      noStipulations_0_1_0.set(StipulationType_40);
      Stipulations_NoStipulations_40.insert(StipulationType_40.getString());
      FIX::StipulationValue StipulationValue_40("STRING_79569229");
      noStipulations_0_1_0.set(StipulationValue_40);
      Stipulations_NoStipulations_40.insert(StipulationValue_40.getString());
      all_values.push_back(Stipulations_NoStipulations_40);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_103;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_103("DATA_1857349864");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingIssuer_103.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_103(55732029);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingIssuerLen_103.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_103("DATA_1599829959");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDesc_103.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_103(258416593);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDescLen_103.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_103;
      UnderlyingAdjustedQuantity_103.setString("2188056");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_103);
      UnderlyingInstrument_103.insert(UnderlyingAdjustedQuantity_103.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_103;
      UnderlyingAllocationPercent_103.setString("4.030000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_103);
      UnderlyingInstrument_103.insert(UnderlyingAllocationPercent_103.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_103;
      UnderlyingAttachmentPoint_103.setString("58.970000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_103);
      UnderlyingInstrument_103.insert(UnderlyingAttachmentPoint_103.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_103("STRING_1409834976");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_103);
      UnderlyingInstrument_103.insert(UnderlyingCFICode_103.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_103("STRING_1241215777");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_103);
      UnderlyingInstrument_103.insert(UnderlyingCPProgram_103.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_103("STRING_306139064");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_103);
      UnderlyingInstrument_103.insert(UnderlyingCPRegType_103.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_103;
      UnderlyingCapValue_103.setString("4917178");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_103);
      UnderlyingInstrument_103.insert(UnderlyingCapValue_103.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_103;
      UnderlyingCashAmount_103.setString("4523940");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_103);
      UnderlyingInstrument_103.insert(UnderlyingCashAmount_103.getString());
      FIX::UnderlyingCashType UnderlyingCashType_103("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_103);
      UnderlyingInstrument_103.insert(UnderlyingCashType_103.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_103;
      UnderlyingContractMultiplier_103.setString("12124964");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_103);
      UnderlyingInstrument_103.insert(UnderlyingContractMultiplier_103.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_103(1992080598);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_103);
      UnderlyingInstrument_103.insert(UnderlyingContractMultiplierUnit_103.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_103("COUNTRY_1957907995");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingCountryOfIssue_103.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_103("LOCALMKTDATE_1164613649");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_103);
      UnderlyingInstrument_103.insert(UnderlyingCouponPaymentDate_103.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_103;
      UnderlyingCouponRate_103.setString("42.860000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_103);
      UnderlyingInstrument_103.insert(UnderlyingCouponRate_103.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_103("STRING_677226257");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_103);
      UnderlyingInstrument_103.insert(UnderlyingCreditRating_103.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_103("EUR");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_103);
      UnderlyingInstrument_103.insert(UnderlyingCurrency_103.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_103;
      UnderlyingCurrentValue_103.setString("18104410");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_103);
      UnderlyingInstrument_103.insert(UnderlyingCurrentValue_103.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_103;
      UnderlyingDetachmentPoint_103.setString("12.650000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_103);
      UnderlyingInstrument_103.insert(UnderlyingDetachmentPoint_103.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_103;
      UnderlyingDirtyPrice_103.setString("2029551");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_103);
      UnderlyingInstrument_103.insert(UnderlyingDirtyPrice_103.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_103;
      UnderlyingEndPrice_103.setString("18070903");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_103);
      UnderlyingInstrument_103.insert(UnderlyingEndPrice_103.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_103;
      UnderlyingEndValue_103.setString("1218073");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_103);
      UnderlyingInstrument_103.insert(UnderlyingEndValue_103.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_103(1698823888);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_103);
      UnderlyingInstrument_103.insert(UnderlyingExerciseStyle_103.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_103;
      UnderlyingFXRate_103.setString("3075742");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_103);
      UnderlyingInstrument_103.insert(UnderlyingFXRate_103.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_103('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_103);
      UnderlyingInstrument_103.insert(UnderlyingFXRateCalc_103.getString());
      FIX::UnderlyingFactor UnderlyingFactor_103;
      UnderlyingFactor_103.setString("17783931");
      noUnderlyings_0_1_0.set(UnderlyingFactor_103);
      UnderlyingInstrument_103.insert(UnderlyingFactor_103.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_103(1641711818);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_103);
      UnderlyingInstrument_103.insert(UnderlyingFlowScheduleType_103.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_103("STRING_855817443");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_103);
      UnderlyingInstrument_103.insert(UnderlyingInstrRegistry_103.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_103("LOCALMKTDATE_1834125147");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_103);
      UnderlyingInstrument_103.insert(UnderlyingIssueDate_103.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_103("STRING_1094058129");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_103);
      UnderlyingInstrument_103.insert(UnderlyingIssuer_103.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_103("STRING_1114234036");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingLocaleOfIssue_103.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_103("LOCALMKTDATE_2052930821");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityDate_103.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_103("MONTHYEAR_295024884");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityMonthYear_103.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_103("TZTIMEONLY_722636285");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityTime_103.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_103;
      UnderlyingNotionalPercentageOutstanding_103.setString("21.490000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_103);
      UnderlyingInstrument_103.insert(UnderlyingNotionalPercentageOutstanding_103.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_103('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_103);
      UnderlyingInstrument_103.insert(UnderlyingOptAttribute_103.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_103;
      UnderlyingOriginalNotionalPercentageOutstanding_103.setString("53.490000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_103);
      UnderlyingInstrument_103.insert(UnderlyingOriginalNotionalPercentageOutstanding_103.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_103("STRING_1806999955");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_103);
      UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasure_103.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_103;
      UnderlyingPriceUnitOfMeasureQty_103.setString("19886347");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_103);
      UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasureQty_103.getString());
      FIX::UnderlyingProduct UnderlyingProduct_103(1560485963);
      noUnderlyings_0_1_0.set(UnderlyingProduct_103);
      UnderlyingInstrument_103.insert(UnderlyingProduct_103.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_103(872012789);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_103);
      UnderlyingInstrument_103.insert(UnderlyingPutOrCall_103.getString());
      FIX::UnderlyingPx UnderlyingPx_103;
      UnderlyingPx_103.setString("18332316");
      noUnderlyings_0_1_0.set(UnderlyingPx_103);
      UnderlyingInstrument_103.insert(UnderlyingPx_103.getString());
      FIX::UnderlyingQty UnderlyingQty_103;
      UnderlyingQty_103.setString("13709103");
      noUnderlyings_0_1_0.set(UnderlyingQty_103);
      UnderlyingInstrument_103.insert(UnderlyingQty_103.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_103("LOCALMKTDATE_2036626439");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_103);
      UnderlyingInstrument_103.insert(UnderlyingRedemptionDate_103.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_103("STRING_1089742293");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_103);
      UnderlyingInstrument_103.insert(UnderlyingRepoCollateralSecurityType_103.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_103;
      UnderlyingRepurchaseRate_103.setString("65.670000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_103);
      UnderlyingInstrument_103.insert(UnderlyingRepurchaseRate_103.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_103(912194875);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_103);
      UnderlyingInstrument_103.insert(UnderlyingRepurchaseTerm_103.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_103("STRING_316044039");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_103);
      UnderlyingInstrument_103.insert(UnderlyingRestructuringType_103.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_103("STRING_1711093925");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityDesc_103.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_103("EXCHANGE_1736066140");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityExchange_103.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_103("STRING_518999228");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityID_103.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_103("STRING_1370700629");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityIDSource_103.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_103("STRING_1857873508");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_103);
      UnderlyingInstrument_103.insert(UnderlyingSecuritySubType_103.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_103("STRING_70339468");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityType_103.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_103("STRING_1678274891");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_103);
      UnderlyingInstrument_103.insert(UnderlyingSeniority_103.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_103("STRING_856341087");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_103);
      UnderlyingInstrument_103.insert(UnderlyingSettlMethod_103.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_103(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_103);
      UnderlyingInstrument_103.insert(UnderlyingSettlementType_103.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_103;
      UnderlyingStartValue_103.setString("11725030");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_103);
      UnderlyingInstrument_103.insert(UnderlyingStartValue_103.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_103("STRING_1712158530");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingStateOrProvinceOfIssue_103.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_103("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_103);
      UnderlyingInstrument_103.insert(UnderlyingStrikeCurrency_103.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_103;
      UnderlyingStrikePrice_103.setString("6789089");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_103);
      UnderlyingInstrument_103.insert(UnderlyingStrikePrice_103.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_103("STRING_1440821258");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_103);
      UnderlyingInstrument_103.insert(UnderlyingSymbol_103.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_103("STRING_414102427");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_103);
      UnderlyingInstrument_103.insert(UnderlyingSymbolSfx_103.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_103("STRING_1401545203");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_103);
      UnderlyingInstrument_103.insert(UnderlyingTimeUnit_103.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_103("STRING_608619760");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_103);
      UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasure_103.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_103;
      UnderlyingUnitOfMeasureQty_103.setString("19503430");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_103);
      UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasureQty_103.getString());
      all_values.push_back(UnderlyingInstrument_103);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_203;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_203("STRING_268136067");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_203);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltID_203.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_203("STRING_1791494146");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_203);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltIDSource_203.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_204;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_204("STRING_1843322868");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_204);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltID_204.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_204("STRING_1140148856");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_204);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltIDSource_204.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_206;
        FIX::UnderlyingStipType UnderlyingStipType_206("STRING_1066749530");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_206);
        UnderlyingStipulations_NoUnderlyingStips_206.insert(UnderlyingStipType_206.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_206("STRING_1029291647");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_206);
        UnderlyingStipulations_NoUnderlyingStips_206.insert(UnderlyingStipValue_206.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_206);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_192;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_192("STRING_967402449");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_192);
        UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyID_192.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_192('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_192);
        UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyIDSource_192.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_192(735544838);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_192);
        UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyRole_192.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_192);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_385("STRING_1530069015");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_385);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385.insert(UnderlyingInstrumentPartySubID_385.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_385(1254544066);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_385);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385.insert(UnderlyingInstrumentPartySubIDType_385.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_193;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_193("STRING_1901713355");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyID_193.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_193('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyIDSource_193.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_193(1324883534);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_193);
        UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyRole_193.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_193);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_386("STRING_2096799962");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_386);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386.insert(UnderlyingInstrumentPartySubID_386.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_386(1026132473);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_386);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386.insert(UnderlyingInstrumentPartySubIDType_386.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_387("STRING_457524012");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_387);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387.insert(UnderlyingInstrumentPartySubID_387.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_387(1661474844);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_387);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387.insert(UnderlyingInstrumentPartySubIDType_387.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_388("STRING_414022910");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_388);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388.insert(UnderlyingInstrumentPartySubID_388.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_388(576601555);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_388);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388.insert(UnderlyingInstrumentPartySubIDType_388.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_194;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_194("STRING_192900114");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyID_194.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_194('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyIDSource_194.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_194(990703982);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_194);
        UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyRole_194.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_194);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_389("STRING_315980281");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_389);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389.insert(UnderlyingInstrumentPartySubID_389.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_389(793563424);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_389);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389.insert(UnderlyingInstrumentPartySubIDType_389.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_390("STRING_1877282223");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_390);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390.insert(UnderlyingInstrumentPartySubID_390.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_390(584116348);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_390);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390.insert(UnderlyingInstrumentPartySubIDType_390.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_391("STRING_437573922");
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubID_391);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391.insert(UnderlyingInstrumentPartySubID_391.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_391(1573121443);
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_391);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391.insert(UnderlyingInstrumentPartySubIDType_391.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_104;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_104("DATA_1724265204");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingIssuer_104.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_104(1914816076);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingIssuerLen_104.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_104("DATA_492387325");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDesc_104.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_104(606073204);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDescLen_104.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_104;
      UnderlyingAdjustedQuantity_104.setString("1868332");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_104);
      UnderlyingInstrument_104.insert(UnderlyingAdjustedQuantity_104.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_104;
      UnderlyingAllocationPercent_104.setString("97.740000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_104);
      UnderlyingInstrument_104.insert(UnderlyingAllocationPercent_104.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_104;
      UnderlyingAttachmentPoint_104.setString("60.790000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_104);
      UnderlyingInstrument_104.insert(UnderlyingAttachmentPoint_104.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_104("STRING_922378065");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_104);
      UnderlyingInstrument_104.insert(UnderlyingCFICode_104.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_104("STRING_1990802500");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_104);
      UnderlyingInstrument_104.insert(UnderlyingCPProgram_104.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_104("STRING_1930145094");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_104);
      UnderlyingInstrument_104.insert(UnderlyingCPRegType_104.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_104;
      UnderlyingCapValue_104.setString("294384");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_104);
      UnderlyingInstrument_104.insert(UnderlyingCapValue_104.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_104;
      UnderlyingCashAmount_104.setString("17450322");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_104);
      UnderlyingInstrument_104.insert(UnderlyingCashAmount_104.getString());
      FIX::UnderlyingCashType UnderlyingCashType_104("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_104);
      UnderlyingInstrument_104.insert(UnderlyingCashType_104.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_104;
      UnderlyingContractMultiplier_104.setString("13543220");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_104);
      UnderlyingInstrument_104.insert(UnderlyingContractMultiplier_104.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_104(1030053158);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_104);
      UnderlyingInstrument_104.insert(UnderlyingContractMultiplierUnit_104.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_104("COUNTRY_972436636");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingCountryOfIssue_104.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_104("LOCALMKTDATE_232970842");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_104);
      UnderlyingInstrument_104.insert(UnderlyingCouponPaymentDate_104.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_104;
      UnderlyingCouponRate_104.setString("71.700000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_104);
      UnderlyingInstrument_104.insert(UnderlyingCouponRate_104.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_104("STRING_486427833");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_104);
      UnderlyingInstrument_104.insert(UnderlyingCreditRating_104.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_104("CHF");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_104);
      UnderlyingInstrument_104.insert(UnderlyingCurrency_104.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_104;
      UnderlyingCurrentValue_104.setString("6793279");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_104);
      UnderlyingInstrument_104.insert(UnderlyingCurrentValue_104.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_104;
      UnderlyingDetachmentPoint_104.setString("42.740000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_104);
      UnderlyingInstrument_104.insert(UnderlyingDetachmentPoint_104.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_104;
      UnderlyingDirtyPrice_104.setString("9073990");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_104);
      UnderlyingInstrument_104.insert(UnderlyingDirtyPrice_104.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_104;
      UnderlyingEndPrice_104.setString("1262896");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_104);
      UnderlyingInstrument_104.insert(UnderlyingEndPrice_104.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_104;
      UnderlyingEndValue_104.setString("6703345");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_104);
      UnderlyingInstrument_104.insert(UnderlyingEndValue_104.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_104(1700962484);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_104);
      UnderlyingInstrument_104.insert(UnderlyingExerciseStyle_104.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_104;
      UnderlyingFXRate_104.setString("20035718");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_104);
      UnderlyingInstrument_104.insert(UnderlyingFXRate_104.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_104('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_104);
      UnderlyingInstrument_104.insert(UnderlyingFXRateCalc_104.getString());
      FIX::UnderlyingFactor UnderlyingFactor_104;
      UnderlyingFactor_104.setString("21385364");
      noUnderlyings_0_1_1.set(UnderlyingFactor_104);
      UnderlyingInstrument_104.insert(UnderlyingFactor_104.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_104(1429209635);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_104);
      UnderlyingInstrument_104.insert(UnderlyingFlowScheduleType_104.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_104("STRING_831232459");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_104);
      UnderlyingInstrument_104.insert(UnderlyingInstrRegistry_104.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_104("LOCALMKTDATE_1905868834");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_104);
      UnderlyingInstrument_104.insert(UnderlyingIssueDate_104.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_104("STRING_1921596960");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_104);
      UnderlyingInstrument_104.insert(UnderlyingIssuer_104.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_104("STRING_1437305663");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingLocaleOfIssue_104.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_104("LOCALMKTDATE_2092702061");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityDate_104.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_104("MONTHYEAR_1233903086");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityMonthYear_104.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_104("TZTIMEONLY_1837381742");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityTime_104.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_104;
      UnderlyingNotionalPercentageOutstanding_104.setString("64.780000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_104);
      UnderlyingInstrument_104.insert(UnderlyingNotionalPercentageOutstanding_104.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_104('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_104);
      UnderlyingInstrument_104.insert(UnderlyingOptAttribute_104.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_104;
      UnderlyingOriginalNotionalPercentageOutstanding_104.setString("31.890000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_104);
      UnderlyingInstrument_104.insert(UnderlyingOriginalNotionalPercentageOutstanding_104.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_104("STRING_897034961");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_104);
      UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasure_104.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_104;
      UnderlyingPriceUnitOfMeasureQty_104.setString("6747704");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_104);
      UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasureQty_104.getString());
      FIX::UnderlyingProduct UnderlyingProduct_104(495679863);
      noUnderlyings_0_1_1.set(UnderlyingProduct_104);
      UnderlyingInstrument_104.insert(UnderlyingProduct_104.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_104(103873331);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_104);
      UnderlyingInstrument_104.insert(UnderlyingPutOrCall_104.getString());
      FIX::UnderlyingPx UnderlyingPx_104;
      UnderlyingPx_104.setString("17048236");
      noUnderlyings_0_1_1.set(UnderlyingPx_104);
      UnderlyingInstrument_104.insert(UnderlyingPx_104.getString());
      FIX::UnderlyingQty UnderlyingQty_104;
      UnderlyingQty_104.setString("14681164");
      noUnderlyings_0_1_1.set(UnderlyingQty_104);
      UnderlyingInstrument_104.insert(UnderlyingQty_104.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_104("LOCALMKTDATE_336844173");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_104);
      UnderlyingInstrument_104.insert(UnderlyingRedemptionDate_104.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_104("STRING_1044917180");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_104);
      UnderlyingInstrument_104.insert(UnderlyingRepoCollateralSecurityType_104.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_104;
      UnderlyingRepurchaseRate_104.setString("43.320000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_104);
      UnderlyingInstrument_104.insert(UnderlyingRepurchaseRate_104.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_104(983837926);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_104);
      UnderlyingInstrument_104.insert(UnderlyingRepurchaseTerm_104.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_104("STRING_961612257");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_104);
      UnderlyingInstrument_104.insert(UnderlyingRestructuringType_104.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_104("STRING_486388632");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityDesc_104.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_104("EXCHANGE_1338192200");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityExchange_104.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_104("STRING_1869011317");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityID_104.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_104("STRING_612678249");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityIDSource_104.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_104("STRING_2008526755");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_104);
      UnderlyingInstrument_104.insert(UnderlyingSecuritySubType_104.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_104("STRING_1422490153");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityType_104.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_104("STRING_468766442");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_104);
      UnderlyingInstrument_104.insert(UnderlyingSeniority_104.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_104("STRING_1115494010");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_104);
      UnderlyingInstrument_104.insert(UnderlyingSettlMethod_104.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_104(5);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_104);
      UnderlyingInstrument_104.insert(UnderlyingSettlementType_104.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_104;
      UnderlyingStartValue_104.setString("18979760");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_104);
      UnderlyingInstrument_104.insert(UnderlyingStartValue_104.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_104("STRING_1946726470");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingStateOrProvinceOfIssue_104.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_104("USD");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_104);
      UnderlyingInstrument_104.insert(UnderlyingStrikeCurrency_104.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_104;
      UnderlyingStrikePrice_104.setString("12365484");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_104);
      UnderlyingInstrument_104.insert(UnderlyingStrikePrice_104.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_104("STRING_1117146512");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_104);
      UnderlyingInstrument_104.insert(UnderlyingSymbol_104.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_104("STRING_758508828");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_104);
      UnderlyingInstrument_104.insert(UnderlyingSymbolSfx_104.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_104("STRING_926446580");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_104);
      UnderlyingInstrument_104.insert(UnderlyingTimeUnit_104.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_104("STRING_1984742990");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_104);
      UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasure_104.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_104;
      UnderlyingUnitOfMeasureQty_104.setString("18357307");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_104);
      UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasureQty_104.getString());
      all_values.push_back(UnderlyingInstrument_104);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_205;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_205("STRING_734294304");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_205);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltID_205.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_205("STRING_363017618");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_205);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_205.insert(UnderlyingSecurityAltIDSource_205.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_206;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_206("STRING_894685984");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_206);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltID_206.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_206("STRING_838167635");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_206);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_206.insert(UnderlyingSecurityAltIDSource_206.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_207;
        FIX::UnderlyingStipType UnderlyingStipType_207("STRING_215318835");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_207);
        UnderlyingStipulations_NoUnderlyingStips_207.insert(UnderlyingStipType_207.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_207("STRING_1175011808");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_207);
        UnderlyingStipulations_NoUnderlyingStips_207.insert(UnderlyingStipValue_207.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_207);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_208;
        FIX::UnderlyingStipType UnderlyingStipType_208("STRING_965274808");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_208);
        UnderlyingStipulations_NoUnderlyingStips_208.insert(UnderlyingStipType_208.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_208("STRING_22379520");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_208);
        UnderlyingStipulations_NoUnderlyingStips_208.insert(UnderlyingStipValue_208.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_208);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_195;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_195("STRING_1926887065");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyID_195.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_195('5');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyIDSource_195.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_195(1349558287);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_195);
        UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyRole_195.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_195);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_392("STRING_1121446401");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_392);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392.insert(UnderlyingInstrumentPartySubID_392.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_392(1210601395);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_392);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392.insert(UnderlyingInstrumentPartySubIDType_392.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_393("STRING_923421240");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_393);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393.insert(UnderlyingInstrumentPartySubID_393.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_393(1590212843);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_393);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393.insert(UnderlyingInstrumentPartySubIDType_393.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_196;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_196("STRING_178611757");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyID_196.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_196('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyIDSource_196.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_196(1340705273);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_196);
        UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyRole_196.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_196);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_394("STRING_1361408603");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_394);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394.insert(UnderlyingInstrumentPartySubID_394.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_394(865311015);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_394);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394.insert(UnderlyingInstrumentPartySubIDType_394.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_395("STRING_1214403065");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_395);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395.insert(UnderlyingInstrumentPartySubID_395.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_395(331071467);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_395);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395.insert(UnderlyingInstrumentPartySubIDType_395.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_396("STRING_1623819843");
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubID_396);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396.insert(UnderlyingInstrumentPartySubID_396.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_396(2140849645);
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_396);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396.insert(UnderlyingInstrumentPartySubIDType_396.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_197;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_197("STRING_168330809");
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyID_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyID_197.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_197('1');
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyIDSource_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyIDSource_197.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_197(392372118);
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyRole_197);
        UndlyInstrumentParties_NoUndlyInstrumentParties_197.insert(UnderlyingInstrumentPartyRole_197.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_197);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_397("STRING_1675084581");
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubID_397);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397.insert(UnderlyingInstrumentPartySubID_397.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_397(1287058102);
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_397);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397.insert(UnderlyingInstrumentPartySubIDType_397.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_398("STRING_1740792748");
          noUndlyInstrumentPartySubIDs_0_1_2_3_1.set(UnderlyingInstrumentPartySubID_398);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398.insert(UnderlyingInstrumentPartySubID_398.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_398(1595442209);
          noUndlyInstrumentPartySubIDs_0_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_398);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398.insert(UnderlyingInstrumentPartySubIDType_398.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_399("STRING_1502376937");
          noUndlyInstrumentPartySubIDs_0_1_2_3_2.set(UnderlyingInstrumentPartySubID_399);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399.insert(UnderlyingInstrumentPartySubID_399.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_399(768320909);
          noUndlyInstrumentPartySubIDs_0_1_2_3_2.set(UnderlyingInstrumentPartySubIDType_399);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399.insert(UnderlyingInstrumentPartySubIDType_399.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_105;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_105("DATA_413233369");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingIssuer_105.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_105(1524756457);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingIssuerLen_105.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_105("DATA_779686996");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDesc_105.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_105(192636787);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDescLen_105.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_105;
      UnderlyingAdjustedQuantity_105.setString("20335246");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_105);
      UnderlyingInstrument_105.insert(UnderlyingAdjustedQuantity_105.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_105;
      UnderlyingAllocationPercent_105.setString("52.830000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_105);
      UnderlyingInstrument_105.insert(UnderlyingAllocationPercent_105.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_105;
      UnderlyingAttachmentPoint_105.setString("15.220000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_105);
      UnderlyingInstrument_105.insert(UnderlyingAttachmentPoint_105.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_105("STRING_1007487363");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_105);
      UnderlyingInstrument_105.insert(UnderlyingCFICode_105.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_105("STRING_1192363030");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_105);
      UnderlyingInstrument_105.insert(UnderlyingCPProgram_105.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_105("STRING_616989114");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_105);
      UnderlyingInstrument_105.insert(UnderlyingCPRegType_105.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_105;
      UnderlyingCapValue_105.setString("4502165");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_105);
      UnderlyingInstrument_105.insert(UnderlyingCapValue_105.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_105;
      UnderlyingCashAmount_105.setString("13709747");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_105);
      UnderlyingInstrument_105.insert(UnderlyingCashAmount_105.getString());
      FIX::UnderlyingCashType UnderlyingCashType_105("STRING_DIFF");
      noUnderlyings_0_1_2.set(UnderlyingCashType_105);
      UnderlyingInstrument_105.insert(UnderlyingCashType_105.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_105;
      UnderlyingContractMultiplier_105.setString("17909218");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_105);
      UnderlyingInstrument_105.insert(UnderlyingContractMultiplier_105.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_105(1348829367);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_105);
      UnderlyingInstrument_105.insert(UnderlyingContractMultiplierUnit_105.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_105("COUNTRY_20394574");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingCountryOfIssue_105.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_105("LOCALMKTDATE_508749198");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_105);
      UnderlyingInstrument_105.insert(UnderlyingCouponPaymentDate_105.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_105;
      UnderlyingCouponRate_105.setString("87.840000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_105);
      UnderlyingInstrument_105.insert(UnderlyingCouponRate_105.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_105("STRING_351466041");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_105);
      UnderlyingInstrument_105.insert(UnderlyingCreditRating_105.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_105("CAN");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_105);
      UnderlyingInstrument_105.insert(UnderlyingCurrency_105.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_105;
      UnderlyingCurrentValue_105.setString("5197968");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_105);
      UnderlyingInstrument_105.insert(UnderlyingCurrentValue_105.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_105;
      UnderlyingDetachmentPoint_105.setString("23.570000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_105);
      UnderlyingInstrument_105.insert(UnderlyingDetachmentPoint_105.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_105;
      UnderlyingDirtyPrice_105.setString("8014868");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_105);
      UnderlyingInstrument_105.insert(UnderlyingDirtyPrice_105.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_105;
      UnderlyingEndPrice_105.setString("14224219");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_105);
      UnderlyingInstrument_105.insert(UnderlyingEndPrice_105.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_105;
      UnderlyingEndValue_105.setString("8247532");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_105);
      UnderlyingInstrument_105.insert(UnderlyingEndValue_105.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_105(2088545001);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_105);
      UnderlyingInstrument_105.insert(UnderlyingExerciseStyle_105.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_105;
      UnderlyingFXRate_105.setString("10157310");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_105);
      UnderlyingInstrument_105.insert(UnderlyingFXRate_105.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_105('D');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_105);
      UnderlyingInstrument_105.insert(UnderlyingFXRateCalc_105.getString());
      FIX::UnderlyingFactor UnderlyingFactor_105;
      UnderlyingFactor_105.setString("14434382");
      noUnderlyings_0_1_2.set(UnderlyingFactor_105);
      UnderlyingInstrument_105.insert(UnderlyingFactor_105.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_105(1784051973);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_105);
      UnderlyingInstrument_105.insert(UnderlyingFlowScheduleType_105.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_105("STRING_685945221");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_105);
      UnderlyingInstrument_105.insert(UnderlyingInstrRegistry_105.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_105("LOCALMKTDATE_820711100");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_105);
      UnderlyingInstrument_105.insert(UnderlyingIssueDate_105.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_105("STRING_416255321");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_105);
      UnderlyingInstrument_105.insert(UnderlyingIssuer_105.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_105("STRING_878582008");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingLocaleOfIssue_105.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_105("LOCALMKTDATE_706752062");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityDate_105.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_105("MONTHYEAR_398016957");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityMonthYear_105.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_105("TZTIMEONLY_572149882");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityTime_105.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_105;
      UnderlyingNotionalPercentageOutstanding_105.setString("94.250000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_105);
      UnderlyingInstrument_105.insert(UnderlyingNotionalPercentageOutstanding_105.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_105('1');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_105);
      UnderlyingInstrument_105.insert(UnderlyingOptAttribute_105.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_105;
      UnderlyingOriginalNotionalPercentageOutstanding_105.setString("89.970000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_105);
      UnderlyingInstrument_105.insert(UnderlyingOriginalNotionalPercentageOutstanding_105.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_105("STRING_16972335");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_105);
      UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasure_105.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_105;
      UnderlyingPriceUnitOfMeasureQty_105.setString("8138711");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_105);
      UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasureQty_105.getString());
      FIX::UnderlyingProduct UnderlyingProduct_105(1995608616);
      noUnderlyings_0_1_2.set(UnderlyingProduct_105);
      UnderlyingInstrument_105.insert(UnderlyingProduct_105.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_105(1807894167);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_105);
      UnderlyingInstrument_105.insert(UnderlyingPutOrCall_105.getString());
      FIX::UnderlyingPx UnderlyingPx_105;
      UnderlyingPx_105.setString("152168");
      noUnderlyings_0_1_2.set(UnderlyingPx_105);
      UnderlyingInstrument_105.insert(UnderlyingPx_105.getString());
      FIX::UnderlyingQty UnderlyingQty_105;
      UnderlyingQty_105.setString("20160031");
      noUnderlyings_0_1_2.set(UnderlyingQty_105);
      UnderlyingInstrument_105.insert(UnderlyingQty_105.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_105("LOCALMKTDATE_169159717");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_105);
      UnderlyingInstrument_105.insert(UnderlyingRedemptionDate_105.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_105("STRING_430965631");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_105);
      UnderlyingInstrument_105.insert(UnderlyingRepoCollateralSecurityType_105.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_105;
      UnderlyingRepurchaseRate_105.setString("55.830000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_105);
      UnderlyingInstrument_105.insert(UnderlyingRepurchaseRate_105.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_105(154245111);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_105);
      UnderlyingInstrument_105.insert(UnderlyingRepurchaseTerm_105.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_105("STRING_840080413");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_105);
      UnderlyingInstrument_105.insert(UnderlyingRestructuringType_105.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_105("STRING_739782433");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityDesc_105.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_105("EXCHANGE_1451397468");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityExchange_105.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_105("STRING_1641567312");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityID_105.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_105("STRING_14720749");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityIDSource_105.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_105("STRING_128667111");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_105);
      UnderlyingInstrument_105.insert(UnderlyingSecuritySubType_105.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_105("STRING_1582628666");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityType_105.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_105("STRING_1030451814");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_105);
      UnderlyingInstrument_105.insert(UnderlyingSeniority_105.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_105("STRING_401378963");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_105);
      UnderlyingInstrument_105.insert(UnderlyingSettlMethod_105.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_105(2);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_105);
      UnderlyingInstrument_105.insert(UnderlyingSettlementType_105.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_105;
      UnderlyingStartValue_105.setString("6670201");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_105);
      UnderlyingInstrument_105.insert(UnderlyingStartValue_105.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_105("STRING_1087324184");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingStateOrProvinceOfIssue_105.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_105("EUR");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_105);
      UnderlyingInstrument_105.insert(UnderlyingStrikeCurrency_105.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_105;
      UnderlyingStrikePrice_105.setString("19659061");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_105);
      UnderlyingInstrument_105.insert(UnderlyingStrikePrice_105.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_105("STRING_258562823");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_105);
      UnderlyingInstrument_105.insert(UnderlyingSymbol_105.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_105("STRING_1481292418");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_105);
      UnderlyingInstrument_105.insert(UnderlyingSymbolSfx_105.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_105("STRING_390572427");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_105);
      UnderlyingInstrument_105.insert(UnderlyingTimeUnit_105.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_105("STRING_1972802248");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_105);
      UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasure_105.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_105;
      UnderlyingUnitOfMeasureQty_105.setString("9241887");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_105);
      UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasureQty_105.getString());
      all_values.push_back(UnderlyingInstrument_105);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_207;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_207("STRING_1989774584");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_207);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltID_207.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_207("STRING_1738059885");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_207);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltIDSource_207.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_208;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_208("STRING_1427836392");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltID_208);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_208.insert(UnderlyingSecurityAltID_208.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_208("STRING_1650185103");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltIDSource_208);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_208.insert(UnderlyingSecurityAltIDSource_208.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_209;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_209("STRING_1753276732");
        noUnderlyingSecurityAltID_0_2_2_2.set(UnderlyingSecurityAltID_209);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_209.insert(UnderlyingSecurityAltID_209.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_209("STRING_1296355934");
        noUnderlyingSecurityAltID_0_2_2_2.set(UnderlyingSecurityAltIDSource_209);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_209.insert(UnderlyingSecurityAltIDSource_209.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_209;
        FIX::UnderlyingStipType UnderlyingStipType_209("STRING_36758715");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_209);
        UnderlyingStipulations_NoUnderlyingStips_209.insert(UnderlyingStipType_209.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_209("STRING_1516341517");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_209);
        UnderlyingStipulations_NoUnderlyingStips_209.insert(UnderlyingStipValue_209.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_209);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_210;
        FIX::UnderlyingStipType UnderlyingStipType_210("STRING_1973589932");
        noUnderlyingStips_0_2_2_1.set(UnderlyingStipType_210);
        UnderlyingStipulations_NoUnderlyingStips_210.insert(UnderlyingStipType_210.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_210("STRING_876839128");
        noUnderlyingStips_0_2_2_1.set(UnderlyingStipValue_210);
        UnderlyingStipulations_NoUnderlyingStips_210.insert(UnderlyingStipValue_210.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_210);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_198;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_198("STRING_1277503752");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyID_198.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_198('3');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyIDSource_198.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_198(123361052);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_198);
        UndlyInstrumentParties_NoUndlyInstrumentParties_198.insert(UnderlyingInstrumentPartyRole_198.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_198);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_400("STRING_1953551459");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_400);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400.insert(UnderlyingInstrumentPartySubID_400.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_400(1153812866);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_400);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400.insert(UnderlyingInstrumentPartySubIDType_400.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_199;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_199("STRING_1807549826");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyID_199.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_199('6');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyIDSource_199.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_199(1820833006);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_199);
        UndlyInstrumentParties_NoUndlyInstrumentParties_199.insert(UnderlyingInstrumentPartyRole_199.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_199);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_401("STRING_236461881");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_401);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401.insert(UnderlyingInstrumentPartySubID_401.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_401(756624819);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_401);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401.insert(UnderlyingInstrumentPartySubIDType_401.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_19;
    FIX::Yield Yield_19;
    Yield_19.setString("29.080000");
    noRelatedSym_0_0.set(Yield_19);
    YieldData_19.insert(Yield_19.getString());
    FIX::YieldCalcDate YieldCalcDate_19("LOCALMKTDATE_495024705");
    noRelatedSym_0_0.set(YieldCalcDate_19);
    YieldData_19.insert(YieldCalcDate_19.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_19("LOCALMKTDATE_90433589");
    noRelatedSym_0_0.set(YieldRedemptionDate_19);
    YieldData_19.insert(YieldRedemptionDate_19.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_19;
    YieldRedemptionPrice_19.setString("9563853");
    noRelatedSym_0_0.set(YieldRedemptionPrice_19);
    YieldData_19.insert(YieldRedemptionPrice_19.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_19(320343305);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_19);
    YieldData_19.insert(YieldRedemptionPriceType_19.getString());
    FIX::YieldType YieldType_19("STRING_PROCEEDS");
    noRelatedSym_0_0.set(YieldType_19);
    YieldData_19.insert(YieldType_19.getString());
    all_values.push_back(YieldData_19);
    all_compo_names.insert("YieldData");

    msg.addGroup(noRelatedSym_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_7;
    FIX::RootPartyID RootPartyID_7("STRING_162634241");
    noRootPartyIDs_0_0.set(RootPartyID_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyID_7.getString());
    FIX::RootPartyIDSource RootPartyIDSource_7('6');
    noRootPartyIDs_0_0.set(RootPartyIDSource_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyIDSource_7.getString());
    FIX::RootPartyRole RootPartyRole_7(1816449504);
    noRootPartyIDs_0_0.set(RootPartyRole_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyRole_7.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_7);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_12;
      FIX::RootPartySubID RootPartySubID_12("STRING_210991667");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_12);
      RootSubParties_NoRootPartySubIDs_12.insert(RootPartySubID_12.getString());
      FIX::RootPartySubIDType RootPartySubIDType_12(965321791);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_12);
      RootSubParties_NoRootPartySubIDs_12.insert(RootPartySubIDType_12.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_12);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_13;
      FIX::RootPartySubID RootPartySubID_13("STRING_1484680517");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_13);
      RootSubParties_NoRootPartySubIDs_13.insert(RootPartySubID_13.getString());
      FIX::RootPartySubIDType RootPartySubIDType_13(247750383);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_13);
      RootSubParties_NoRootPartySubIDs_13.insert(RootPartySubIDType_13.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_13);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_14;
      FIX::RootPartySubID RootPartySubID_14("STRING_334179660");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_14);
      RootSubParties_NoRootPartySubIDs_14.insert(RootPartySubID_14.getString());
      FIX::RootPartySubIDType RootPartySubIDType_14(1310786801);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_14);
      RootSubParties_NoRootPartySubIDs_14.insert(RootPartySubIDType_14.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_14);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

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
