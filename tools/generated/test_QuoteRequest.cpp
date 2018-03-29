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
  multiset<string> all_compo_names;
  multiset<string> QuoteRequest_0;
  FIX::BookingType BookingType_32(0);
  msg.set(BookingType_32);
  QuoteRequest_0.insert(BookingType_32.getString());
  FIX::ClOrdID ClOrdID_42("STRING_186541324");
  msg.set(ClOrdID_42);
  QuoteRequest_0.insert(ClOrdID_42.getString());
  FIX::EncodedText EncodedText_76("DATA_1892047185");
  msg.set(EncodedText_76);
  QuoteRequest_0.insert(EncodedText_76.getString());
  FIX::EncodedTextLen EncodedTextLen_76(141017484);
  msg.set(EncodedTextLen_76);
  QuoteRequest_0.insert(EncodedTextLen_76.getString());
  FIX::OrderCapacity OrderCapacity_33('A');
  msg.set(OrderCapacity_33);
  QuoteRequest_0.insert(OrderCapacity_33.getString());
  FIX::OrderRestrictions OrderRestrictions_30("MULTIPLECHARVALUE_7");
  msg.set(OrderRestrictions_30);
  QuoteRequest_0.insert(OrderRestrictions_30.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_14(false);
  msg.set(PreTradeAnonymity_14);
  QuoteRequest_0.insert(PreTradeAnonymity_14.getString());
  FIX::PrivateQuote PrivateQuote_1(false);
  msg.set(PrivateQuote_1);
  QuoteRequest_0.insert(PrivateQuote_1.getString());
  FIX::QuoteReqID QuoteReqID_4("STRING_1643954952");
  msg.set(QuoteReqID_4);
  QuoteRequest_0.insert(QuoteReqID_4.getString());
  FIX::RFQReqID RFQReqID_0("STRING_816830387");
  msg.set(RFQReqID_0);
  QuoteRequest_0.insert(RFQReqID_0.getString());
  FIX::RespondentType RespondentType_0(3);
  msg.set(RespondentType_0);
  QuoteRequest_0.insert(RespondentType_0.getString());
  FIX::Text Text_76("STRING_38368232");
  msg.set(Text_76);
  QuoteRequest_0.insert(Text_76.getString());
  all_values.push_back(QuoteRequest_0);

  all_compo_names.insert("QuoteRequest");

  // QuotReqGrp
  // Group QuotReqGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_0;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_0;
    FIX::Account Account_35("STRING_2144337783");
    noRelatedSym_0_0.set(Account_35);
    QuotReqGrp_NoRelatedSym_0.insert(Account_35.getString());
    FIX::AccountType AccountType_30(2);
    noRelatedSym_0_0.set(AccountType_30);
    QuotReqGrp_NoRelatedSym_0.insert(AccountType_30.getString());
    FIX::AcctIDSource AcctIDSource_28(5);
    noRelatedSym_0_0.set(AcctIDSource_28);
    QuotReqGrp_NoRelatedSym_0.insert(AcctIDSource_28.getString());
    FIX::Currency Currency_56("GBP");
    noRelatedSym_0_0.set(Currency_56);
    QuotReqGrp_NoRelatedSym_0.insert(Currency_56.getString());
    FIX::ExpireTime ExpireTime_15(FIX::UTCTIMESTAMP(15, 37, 23, 0, 10, 2000));
    noRelatedSym_0_0.set(ExpireTime_15);
    QuotReqGrp_NoRelatedSym_0.insert(ExpireTime_15.getString());
    FIX::MinQty MinQty_14;
    MinQty_14.setString("7980157");
    noRelatedSym_0_0.set(MinQty_14);
    QuotReqGrp_NoRelatedSym_0.insert(MinQty_14.getString());
    FIX::OrdType OrdType_56('B');
    noRelatedSym_0_0.set(OrdType_56);
    QuotReqGrp_NoRelatedSym_0.insert(OrdType_56.getString());
    FIX::OrderQty2 OrderQty2_21;
    OrderQty2_21.setString("8048967");
    noRelatedSym_0_0.set(OrderQty2_21);
    QuotReqGrp_NoRelatedSym_0.insert(OrderQty2_21.getString());
    FIX::PrevClosePx PrevClosePx_9;
    PrevClosePx_9.setString("19679869");
    noRelatedSym_0_0.set(PrevClosePx_9);
    QuotReqGrp_NoRelatedSym_0.insert(PrevClosePx_9.getString());
    FIX::Price Price_21;
    Price_21.setString("8469296");
    noRelatedSym_0_0.set(Price_21);
    QuotReqGrp_NoRelatedSym_0.insert(Price_21.getString());
    FIX::Price2 Price2_5;
    Price2_5.setString("21376959");
    noRelatedSym_0_0.set(Price2_5);
    QuotReqGrp_NoRelatedSym_0.insert(Price2_5.getString());
    FIX::PriceType PriceType_37(8);
    noRelatedSym_0_0.set(PriceType_37);
    QuotReqGrp_NoRelatedSym_0.insert(PriceType_37.getString());
    FIX::QtyType QtyType_26(0);
    noRelatedSym_0_0.set(QtyType_26);
    QuotReqGrp_NoRelatedSym_0.insert(QtyType_26.getString());
    FIX::QuotePriceType QuotePriceType_0(1);
    noRelatedSym_0_0.set(QuotePriceType_0);
    QuotReqGrp_NoRelatedSym_0.insert(QuotePriceType_0.getString());
    FIX::QuoteRequestType QuoteRequestType_0(1);
    noRelatedSym_0_0.set(QuoteRequestType_0);
    QuotReqGrp_NoRelatedSym_0.insert(QuoteRequestType_0.getString());
    FIX::QuoteType QuoteType_6(0);
    noRelatedSym_0_0.set(QuoteType_6);
    QuotReqGrp_NoRelatedSym_0.insert(QuoteType_6.getString());
    FIX::SettlCurrency SettlCurrency_26("EUR");
    noRelatedSym_0_0.set(SettlCurrency_26);
    QuotReqGrp_NoRelatedSym_0.insert(SettlCurrency_26.getString());
    FIX::SettlDate SettlDate_46("LOCALMKTDATE_1396533593");
    noRelatedSym_0_0.set(SettlDate_46);
    QuotReqGrp_NoRelatedSym_0.insert(SettlDate_46.getString());
    FIX::SettlDate2 SettlDate2_21("LOCALMKTDATE_389089228");
    noRelatedSym_0_0.set(SettlDate2_21);
    QuotReqGrp_NoRelatedSym_0.insert(SettlDate2_21.getString());
    FIX::SettlType SettlType_26("STRING_4");
    noRelatedSym_0_0.set(SettlType_26);
    QuotReqGrp_NoRelatedSym_0.insert(SettlType_26.getString());
    FIX::Side Side_42('4');
    noRelatedSym_0_0.set(Side_42);
    QuotReqGrp_NoRelatedSym_0.insert(Side_42.getString());
    FIX::TradeOriginationDate TradeOriginationDate_20("LOCALMKTDATE_427457460");
    noRelatedSym_0_0.set(TradeOriginationDate_20);
    QuotReqGrp_NoRelatedSym_0.insert(TradeOriginationDate_20.getString());
    FIX::TradingSessionID TradingSessionID_82("STRING_4");
    noRelatedSym_0_0.set(TradingSessionID_82);
    QuotReqGrp_NoRelatedSym_0.insert(TradingSessionID_82.getString());
    FIX::TradingSessionSubID TradingSessionSubID_82("STRING_4");
    noRelatedSym_0_0.set(TradingSessionSubID_82);
    QuotReqGrp_NoRelatedSym_0.insert(TradingSessionSubID_82.getString());
    FIX::TransactTime TransactTime_57(FIX::UTCTIMESTAMP(23, 20, 57, 6, 1, 2008));
    noRelatedSym_0_0.set(TransactTime_57);
    QuotReqGrp_NoRelatedSym_0.insert(TransactTime_57.getString());
    FIX::ValidUntilTime ValidUntilTime_16(FIX::UTCTIMESTAMP(12, 47, 44, 25, 2, 2010));
    noRelatedSym_0_0.set(ValidUntilTime_16);
    QuotReqGrp_NoRelatedSym_0.insert(ValidUntilTime_16.getString());
    all_values.push_back(QuotReqGrp_NoRelatedSym_0);
    all_compo_names.insert("QuotReqGrp.NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_19;
    FIX::AgreementCurrency AgreementCurrency_19("JPY");
    noRelatedSym_0_0.set(AgreementCurrency_19);
    FinancingDetails_19.insert(AgreementCurrency_19.getString());
    FIX::AgreementDate AgreementDate_19("LOCALMKTDATE_1727057188");
    noRelatedSym_0_0.set(AgreementDate_19);
    FinancingDetails_19.insert(AgreementDate_19.getString());
    FIX::AgreementDesc AgreementDesc_19("STRING_948486091");
    noRelatedSym_0_0.set(AgreementDesc_19);
    FinancingDetails_19.insert(AgreementDesc_19.getString());
    FIX::AgreementID AgreementID_19("STRING_1157360923");
    noRelatedSym_0_0.set(AgreementID_19);
    FinancingDetails_19.insert(AgreementID_19.getString());
    FIX::DeliveryType DeliveryType_19(2);
    noRelatedSym_0_0.set(DeliveryType_19);
    FinancingDetails_19.insert(DeliveryType_19.getString());
    FIX::EndDate EndDate_19("LOCALMKTDATE_401682181");
    noRelatedSym_0_0.set(EndDate_19);
    FinancingDetails_19.insert(EndDate_19.getString());
    FIX::MarginRatio MarginRatio_19;
    MarginRatio_19.setString("57.990000");
    noRelatedSym_0_0.set(MarginRatio_19);
    FinancingDetails_19.insert(MarginRatio_19.getString());
    FIX::StartDate StartDate_19("LOCALMKTDATE_206967286");
    noRelatedSym_0_0.set(StartDate_19);
    FinancingDetails_19.insert(StartDate_19.getString());
    FIX::TerminationType TerminationType_19(3);
    noRelatedSym_0_0.set(TerminationType_19);
    FinancingDetails_19.insert(TerminationType_19.getString());
    all_values.push_back(FinancingDetails_19);
    all_compo_names.insert("FinancingDetails");

    // Instrument
    multiset<string> Instrument_69;
    FIX::AttachmentPoint AttachmentPoint_69;
    AttachmentPoint_69.setString("57.440000");
    noRelatedSym_0_0.set(AttachmentPoint_69);
    Instrument_69.insert(AttachmentPoint_69.getString());
    FIX::CFICode CFICode_69("STRING_596056514");
    noRelatedSym_0_0.set(CFICode_69);
    Instrument_69.insert(CFICode_69.getString());
    FIX::CPProgram CPProgram_69(2);
    noRelatedSym_0_0.set(CPProgram_69);
    Instrument_69.insert(CPProgram_69.getString());
    FIX::CPRegType CPRegType_69("STRING_1820789123");
    noRelatedSym_0_0.set(CPRegType_69);
    Instrument_69.insert(CPRegType_69.getString());
    FIX::CapPrice CapPrice_69;
    CapPrice_69.setString("10235139");
    noRelatedSym_0_0.set(CapPrice_69);
    Instrument_69.insert(CapPrice_69.getString());
    FIX::ContractMultiplier ContractMultiplier_69;
    ContractMultiplier_69.setString("16332353");
    noRelatedSym_0_0.set(ContractMultiplier_69);
    Instrument_69.insert(ContractMultiplier_69.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_69(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_69);
    Instrument_69.insert(ContractMultiplierUnit_69.getString());
    FIX::ContractSettlMonth ContractSettlMonth_69("MONTHYEAR_1943306307");
    noRelatedSym_0_0.set(ContractSettlMonth_69);
    Instrument_69.insert(ContractSettlMonth_69.getString());
    FIX::CountryOfIssue CountryOfIssue_69("COUNTRY_1917508669");
    noRelatedSym_0_0.set(CountryOfIssue_69);
    Instrument_69.insert(CountryOfIssue_69.getString());
    FIX::CouponPaymentDate CouponPaymentDate_69("LOCALMKTDATE_1131130530");
    noRelatedSym_0_0.set(CouponPaymentDate_69);
    Instrument_69.insert(CouponPaymentDate_69.getString());
    FIX::CouponRate CouponRate_69;
    CouponRate_69.setString("9.960000");
    noRelatedSym_0_0.set(CouponRate_69);
    Instrument_69.insert(CouponRate_69.getString());
    FIX::CreditRating CreditRating_69("STRING_177390195");
    noRelatedSym_0_0.set(CreditRating_69);
    Instrument_69.insert(CreditRating_69.getString());
    FIX::DatedDate DatedDate_69("LOCALMKTDATE_518481550");
    noRelatedSym_0_0.set(DatedDate_69);
    Instrument_69.insert(DatedDate_69.getString());
    FIX::DetachmentPoint DetachmentPoint_69;
    DetachmentPoint_69.setString("0.940000");
    noRelatedSym_0_0.set(DetachmentPoint_69);
    Instrument_69.insert(DetachmentPoint_69.getString());
    FIX::EncodedIssuer EncodedIssuer_69("DATA_1406442673");
    noRelatedSym_0_0.set(EncodedIssuer_69);
    Instrument_69.insert(EncodedIssuer_69.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_69(1536269938);
    noRelatedSym_0_0.set(EncodedIssuerLen_69);
    Instrument_69.insert(EncodedIssuerLen_69.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_69("DATA_1191726553");
    noRelatedSym_0_0.set(EncodedSecurityDesc_69);
    Instrument_69.insert(EncodedSecurityDesc_69.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_69(190907210);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_69);
    Instrument_69.insert(EncodedSecurityDescLen_69.getString());
    FIX::ExerciseStyle ExerciseStyle_69(2);
    noRelatedSym_0_0.set(ExerciseStyle_69);
    Instrument_69.insert(ExerciseStyle_69.getString());
    FIX::Factor Factor_69;
    Factor_69.setString("4686867");
    noRelatedSym_0_0.set(Factor_69);
    Instrument_69.insert(Factor_69.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_69(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_69);
    Instrument_69.insert(FlexProductEligibilityIndicator_69.getString());
    FIX::FlexibleIndicator FlexibleIndicator_69(true);
    noRelatedSym_0_0.set(FlexibleIndicator_69);
    Instrument_69.insert(FlexibleIndicator_69.getString());
    FIX::FloorPrice FloorPrice_69;
    FloorPrice_69.setString("5925767");
    noRelatedSym_0_0.set(FloorPrice_69);
    Instrument_69.insert(FloorPrice_69.getString());
    FIX::FlowScheduleType FlowScheduleType_69(4);
    noRelatedSym_0_0.set(FlowScheduleType_69);
    Instrument_69.insert(FlowScheduleType_69.getString());
    FIX::InstrRegistry InstrRegistry_69("STRING_1641900359");
    noRelatedSym_0_0.set(InstrRegistry_69);
    Instrument_69.insert(InstrRegistry_69.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_69('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_69);
    Instrument_69.insert(InstrmtAssignmentMethod_69.getString());
    FIX::InterestAccrualDate InterestAccrualDate_69("LOCALMKTDATE_821675017");
    noRelatedSym_0_0.set(InterestAccrualDate_69);
    Instrument_69.insert(InterestAccrualDate_69.getString());
    FIX::IssueDate IssueDate_69("LOCALMKTDATE_2043582540");
    noRelatedSym_0_0.set(IssueDate_69);
    Instrument_69.insert(IssueDate_69.getString());
    FIX::Issuer Issuer_69("STRING_1112779783");
    noRelatedSym_0_0.set(Issuer_69);
    Instrument_69.insert(Issuer_69.getString());
    FIX::ListMethod ListMethod_69(1);
    noRelatedSym_0_0.set(ListMethod_69);
    Instrument_69.insert(ListMethod_69.getString());
    FIX::LocaleOfIssue LocaleOfIssue_69("STRING_230510938");
    noRelatedSym_0_0.set(LocaleOfIssue_69);
    Instrument_69.insert(LocaleOfIssue_69.getString());
    FIX::MaturityDate MaturityDate_69("LOCALMKTDATE_1872155528");
    noRelatedSym_0_0.set(MaturityDate_69);
    Instrument_69.insert(MaturityDate_69.getString());
    FIX::MaturityMonthYear MaturityMonthYear_69("MONTHYEAR_1624698817");
    noRelatedSym_0_0.set(MaturityMonthYear_69);
    Instrument_69.insert(MaturityMonthYear_69.getString());
    FIX::MaturityTime MaturityTime_69("TZTIMEONLY_1314483236");
    noRelatedSym_0_0.set(MaturityTime_69);
    Instrument_69.insert(MaturityTime_69.getString());
    FIX::MinPriceIncrement MinPriceIncrement_69;
    MinPriceIncrement_69.setString("15454610");
    noRelatedSym_0_0.set(MinPriceIncrement_69);
    Instrument_69.insert(MinPriceIncrement_69.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_69;
    MinPriceIncrementAmount_69.setString("5007291");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_69);
    Instrument_69.insert(MinPriceIncrementAmount_69.getString());
    FIX::NTPositionLimit NTPositionLimit_69(800234906);
    noRelatedSym_0_0.set(NTPositionLimit_69);
    Instrument_69.insert(NTPositionLimit_69.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_69;
    NotionalPercentageOutstanding_69.setString("3.450000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_69);
    Instrument_69.insert(NotionalPercentageOutstanding_69.getString());
    FIX::OptAttribute OptAttribute_69('2');
    noRelatedSym_0_0.set(OptAttribute_69);
    Instrument_69.insert(OptAttribute_69.getString());
    FIX::OptPayoutAmount OptPayoutAmount_69;
    OptPayoutAmount_69.setString("5702599");
    noRelatedSym_0_0.set(OptPayoutAmount_69);
    Instrument_69.insert(OptPayoutAmount_69.getString());
    FIX::OptPayoutType OptPayoutType_69(2);
    noRelatedSym_0_0.set(OptPayoutType_69);
    Instrument_69.insert(OptPayoutType_69.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_69;
    OriginalNotionalPercentageOutstanding_69.setString("27.990000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_69);
    Instrument_69.insert(OriginalNotionalPercentageOutstanding_69.getString());
    FIX::Pool Pool_69("STRING_747650122");
    noRelatedSym_0_0.set(Pool_69);
    Instrument_69.insert(Pool_69.getString());
    FIX::PositionLimit PositionLimit_69(1779162425);
    noRelatedSym_0_0.set(PositionLimit_69);
    Instrument_69.insert(PositionLimit_69.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_69("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_69);
    Instrument_69.insert(PriceQuoteMethod_69.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_69("STRING_6609148");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_69);
    Instrument_69.insert(PriceUnitOfMeasure_69.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_69;
    PriceUnitOfMeasureQty_69.setString("11679487");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_69);
    Instrument_69.insert(PriceUnitOfMeasureQty_69.getString());
    FIX::Product Product_71(7);
    noRelatedSym_0_0.set(Product_71);
    Instrument_69.insert(Product_71.getString());
    FIX::ProductComplex ProductComplex_69("STRING_197516358");
    noRelatedSym_0_0.set(ProductComplex_69);
    Instrument_69.insert(ProductComplex_69.getString());
    FIX::PutOrCall PutOrCall_69(0);
    noRelatedSym_0_0.set(PutOrCall_69);
    Instrument_69.insert(PutOrCall_69.getString());
    FIX::RedemptionDate RedemptionDate_69("LOCALMKTDATE_901588942");
    noRelatedSym_0_0.set(RedemptionDate_69);
    Instrument_69.insert(RedemptionDate_69.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_69("STRING_2125268472");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_69);
    Instrument_69.insert(RepoCollateralSecurityType_69.getString());
    FIX::RepurchaseRate RepurchaseRate_69;
    RepurchaseRate_69.setString("97.660000");
    noRelatedSym_0_0.set(RepurchaseRate_69);
    Instrument_69.insert(RepurchaseRate_69.getString());
    FIX::RepurchaseTerm RepurchaseTerm_69(1494165650);
    noRelatedSym_0_0.set(RepurchaseTerm_69);
    Instrument_69.insert(RepurchaseTerm_69.getString());
    FIX::RestructuringType RestructuringType_69("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_69);
    Instrument_69.insert(RestructuringType_69.getString());
    FIX::SecurityDesc SecurityDesc_69("STRING_412886478");
    noRelatedSym_0_0.set(SecurityDesc_69);
    Instrument_69.insert(SecurityDesc_69.getString());
    FIX::SecurityExchange SecurityExchange_69("EXCHANGE_1096619634");
    noRelatedSym_0_0.set(SecurityExchange_69);
    Instrument_69.insert(SecurityExchange_69.getString());
    FIX::SecurityGroup SecurityGroup_69("STRING_159301847");
    noRelatedSym_0_0.set(SecurityGroup_69);
    Instrument_69.insert(SecurityGroup_69.getString());
    FIX::SecurityID SecurityID_69("STRING_308985370");
    noRelatedSym_0_0.set(SecurityID_69);
    Instrument_69.insert(SecurityID_69.getString());
    FIX::SecurityIDSource SecurityIDSource_69("STRING_5");
    noRelatedSym_0_0.set(SecurityIDSource_69);
    Instrument_69.insert(SecurityIDSource_69.getString());
    FIX::SecurityStatus SecurityStatus_69("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_69);
    Instrument_69.insert(SecurityStatus_69.getString());
    FIX::SecuritySubType SecuritySubType_70("STRING_539496309");
    noRelatedSym_0_0.set(SecuritySubType_70);
    Instrument_69.insert(SecuritySubType_70.getString());
    FIX::SecurityType SecurityType_71("STRING_MIO");
    noRelatedSym_0_0.set(SecurityType_71);
    Instrument_69.insert(SecurityType_71.getString());
    FIX::Seniority Seniority_69("STRING_SD");
    noRelatedSym_0_0.set(Seniority_69);
    Instrument_69.insert(Seniority_69.getString());
    FIX::SettlMethod SettlMethod_69('P');
    noRelatedSym_0_0.set(SettlMethod_69);
    Instrument_69.insert(SettlMethod_69.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_69("STRING_1332048653");
    noRelatedSym_0_0.set(SettleOnOpenFlag_69);
    Instrument_69.insert(SettleOnOpenFlag_69.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_69("STRING_1165888463");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_69);
    Instrument_69.insert(StateOrProvinceOfIssue_69.getString());
    FIX::StrikeCurrency StrikeCurrency_69("USD");
    noRelatedSym_0_0.set(StrikeCurrency_69);
    Instrument_69.insert(StrikeCurrency_69.getString());
    FIX::StrikeMultiplier StrikeMultiplier_69;
    StrikeMultiplier_69.setString("14624402");
    noRelatedSym_0_0.set(StrikeMultiplier_69);
    Instrument_69.insert(StrikeMultiplier_69.getString());
    FIX::StrikePrice StrikePrice_69;
    StrikePrice_69.setString("10769907");
    noRelatedSym_0_0.set(StrikePrice_69);
    Instrument_69.insert(StrikePrice_69.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_69(1);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_69);
    Instrument_69.insert(StrikePriceBoundaryMethod_69.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_69;
    StrikePriceBoundaryPrecision_69.setString("94.170000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_69);
    Instrument_69.insert(StrikePriceBoundaryPrecision_69.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_69(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_69);
    Instrument_69.insert(StrikePriceDeterminationMethod_69.getString());
    FIX::StrikeValue StrikeValue_69;
    StrikeValue_69.setString("2064750");
    noRelatedSym_0_0.set(StrikeValue_69);
    Instrument_69.insert(StrikeValue_69.getString());
    FIX::Symbol Symbol_69("STRING_701895015");
    noRelatedSym_0_0.set(Symbol_69);
    Instrument_69.insert(Symbol_69.getString());
    FIX::SymbolSfx SymbolSfx_69("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_69);
    Instrument_69.insert(SymbolSfx_69.getString());
    FIX::TimeUnit TimeUnit_69("STRING_S");
    noRelatedSym_0_0.set(TimeUnit_69);
    Instrument_69.insert(TimeUnit_69.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_69(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_69);
    Instrument_69.insert(UnderlyingPriceDeterminationMethod_69.getString());
    FIX::UnitOfMeasure UnitOfMeasure_69("STRING_t");
    noRelatedSym_0_0.set(UnitOfMeasure_69);
    Instrument_69.insert(UnitOfMeasure_69.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_69;
    UnitOfMeasureQty_69.setString("15994792");
    noRelatedSym_0_0.set(UnitOfMeasureQty_69);
    Instrument_69.insert(UnitOfMeasureQty_69.getString());
    FIX::ValuationMethod ValuationMethod_69("STRING_CDSD");
    noRelatedSym_0_0.set(ValuationMethod_69);
    Instrument_69.insert(ValuationMethod_69.getString());
    all_values.push_back(Instrument_69);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_145;
      FIX::ComplexEventCondition ComplexEventCondition_145(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventCondition_145.getString());
      FIX::ComplexEventPrice ComplexEventPrice_145;
      ComplexEventPrice_145.setString("13830681");
      noComplexEvents_0_1_0.set(ComplexEventPrice_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventPrice_145.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_145(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceBoundaryMethod_145.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_145;
      ComplexEventPriceBoundaryPrecision_145.setString("18.120000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceBoundaryPrecision_145.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_145(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceTimeType_145.getString());
      FIX::ComplexEventType ComplexEventType_145(9);
      noComplexEvents_0_1_0.set(ComplexEventType_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventType_145.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_145;
      ComplexOptPayoutAmount_145.setString("10923371");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexOptPayoutAmount_145.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_145);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_296;
        FIX::ComplexEventEndDate ComplexEventEndDate_296(FIX::UTCTIMESTAMP(3, 58, 23, 5, 4, 2014));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_296);
        ComplexEventDates_NoComplexEventDates_296.insert(ComplexEventEndDate_296.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_296(FIX::UTCTIMESTAMP(2, 4, 35, 11, 10, 2008));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_296);
        ComplexEventDates_NoComplexEventDates_296.insert(ComplexEventStartDate_296.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_296);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_602;
          FIX::ComplexEventEndTime ComplexEventEndTime_602(FIX::UTCTIMEONLY(9, 59, 48));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_602);
          ComplexEventTimes_NoComplexEventTimes_602.insert(ComplexEventEndTime_602.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_602(FIX::UTCTIMEONLY(11, 9, 47));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_602);
          ComplexEventTimes_NoComplexEventTimes_602.insert(ComplexEventStartTime_602.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_602);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_603;
          FIX::ComplexEventEndTime ComplexEventEndTime_603(FIX::UTCTIMEONLY(8, 32, 33));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_603);
          ComplexEventTimes_NoComplexEventTimes_603.insert(ComplexEventEndTime_603.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_603(FIX::UTCTIMEONLY(17, 7, 38));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_603);
          ComplexEventTimes_NoComplexEventTimes_603.insert(ComplexEventStartTime_603.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_603);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_297;
        FIX::ComplexEventEndDate ComplexEventEndDate_297(FIX::UTCTIMESTAMP(23, 36, 4, 16, 9, 2012));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_297);
        ComplexEventDates_NoComplexEventDates_297.insert(ComplexEventEndDate_297.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_297(FIX::UTCTIMESTAMP(10, 46, 19, 17, 12, 2003));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_297);
        ComplexEventDates_NoComplexEventDates_297.insert(ComplexEventStartDate_297.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_297);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_604;
          FIX::ComplexEventEndTime ComplexEventEndTime_604(FIX::UTCTIMEONLY(16, 23, 40));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_604);
          ComplexEventTimes_NoComplexEventTimes_604.insert(ComplexEventEndTime_604.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_604(FIX::UTCTIMEONLY(10, 49, 47));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_604);
          ComplexEventTimes_NoComplexEventTimes_604.insert(ComplexEventStartTime_604.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_604);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_605;
          FIX::ComplexEventEndTime ComplexEventEndTime_605(FIX::UTCTIMEONLY(14, 20, 36));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_605);
          ComplexEventTimes_NoComplexEventTimes_605.insert(ComplexEventEndTime_605.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_605(FIX::UTCTIMEONLY(13, 43, 43));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_605);
          ComplexEventTimes_NoComplexEventTimes_605.insert(ComplexEventStartTime_605.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_605);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_146;
      FIX::ComplexEventCondition ComplexEventCondition_146(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventCondition_146.getString());
      FIX::ComplexEventPrice ComplexEventPrice_146;
      ComplexEventPrice_146.setString("9598595");
      noComplexEvents_0_1_1.set(ComplexEventPrice_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPrice_146.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_146(5);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceBoundaryMethod_146.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_146;
      ComplexEventPriceBoundaryPrecision_146.setString("65.300000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceBoundaryPrecision_146.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_146(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceTimeType_146.getString());
      FIX::ComplexEventType ComplexEventType_146(4);
      noComplexEvents_0_1_1.set(ComplexEventType_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventType_146.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_146;
      ComplexOptPayoutAmount_146.setString("13720727");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexOptPayoutAmount_146.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_146);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_298;
        FIX::ComplexEventEndDate ComplexEventEndDate_298(FIX::UTCTIMESTAMP(18, 2, 23, 2, 11, 2004));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_298);
        ComplexEventDates_NoComplexEventDates_298.insert(ComplexEventEndDate_298.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_298(FIX::UTCTIMESTAMP(2, 9, 7, 3, 12, 2006));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_298);
        ComplexEventDates_NoComplexEventDates_298.insert(ComplexEventStartDate_298.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_298);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_606;
          FIX::ComplexEventEndTime ComplexEventEndTime_606(FIX::UTCTIMEONLY(6, 54, 50));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_606);
          ComplexEventTimes_NoComplexEventTimes_606.insert(ComplexEventEndTime_606.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_606(FIX::UTCTIMEONLY(12, 34, 30));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_606);
          ComplexEventTimes_NoComplexEventTimes_606.insert(ComplexEventStartTime_606.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_606);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_607;
          FIX::ComplexEventEndTime ComplexEventEndTime_607(FIX::UTCTIMEONLY(0, 49, 21));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_607);
          ComplexEventTimes_NoComplexEventTimes_607.insert(ComplexEventEndTime_607.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_607(FIX::UTCTIMEONLY(21, 5, 58));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_607);
          ComplexEventTimes_NoComplexEventTimes_607.insert(ComplexEventStartTime_607.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_607);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

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
      multiset<string> EvntGrp_NoEvents_138;
      FIX::EventDate EventDate_138("LOCALMKTDATE_1754553456");
      noEvents_0_1_0.set(EventDate_138);
      EvntGrp_NoEvents_138.insert(EventDate_138.getString());
      FIX::EventPx EventPx_138;
      EventPx_138.setString("20262565");
      noEvents_0_1_0.set(EventPx_138);
      EvntGrp_NoEvents_138.insert(EventPx_138.getString());
      FIX::EventText EventText_138("STRING_7576349");
      noEvents_0_1_0.set(EventText_138);
      EvntGrp_NoEvents_138.insert(EventText_138.getString());
      FIX::EventTime EventTime_138(FIX::UTCTIMESTAMP(14, 16, 28, 17, 6, 2009));
      noEvents_0_1_0.set(EventTime_138);
      EvntGrp_NoEvents_138.insert(EventTime_138.getString());
      FIX::EventType EventType_138(13);
      noEvents_0_1_0.set(EventType_138);
      EvntGrp_NoEvents_138.insert(EventType_138.getString());
      all_values.push_back(EvntGrp_NoEvents_138);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_139;
      FIX::EventDate EventDate_139("LOCALMKTDATE_283932681");
      noEvents_0_1_1.set(EventDate_139);
      EvntGrp_NoEvents_139.insert(EventDate_139.getString());
      FIX::EventPx EventPx_139;
      EventPx_139.setString("15677967");
      noEvents_0_1_1.set(EventPx_139);
      EvntGrp_NoEvents_139.insert(EventPx_139.getString());
      FIX::EventText EventText_139("STRING_158115438");
      noEvents_0_1_1.set(EventText_139);
      EvntGrp_NoEvents_139.insert(EventText_139.getString());
      FIX::EventTime EventTime_139(FIX::UTCTIMESTAMP(14, 13, 26, 25, 6, 2016));
      noEvents_0_1_1.set(EventTime_139);
      EvntGrp_NoEvents_139.insert(EventTime_139.getString());
      FIX::EventType EventType_139(8);
      noEvents_0_1_1.set(EventType_139);
      EvntGrp_NoEvents_139.insert(EventType_139.getString());
      all_values.push_back(EvntGrp_NoEvents_139);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_140;
      FIX::EventDate EventDate_140("LOCALMKTDATE_1811353647");
      noEvents_0_1_2.set(EventDate_140);
      EvntGrp_NoEvents_140.insert(EventDate_140.getString());
      FIX::EventPx EventPx_140;
      EventPx_140.setString("12907723");
      noEvents_0_1_2.set(EventPx_140);
      EvntGrp_NoEvents_140.insert(EventPx_140.getString());
      FIX::EventText EventText_140("STRING_1020082429");
      noEvents_0_1_2.set(EventText_140);
      EvntGrp_NoEvents_140.insert(EventText_140.getString());
      FIX::EventTime EventTime_140(FIX::UTCTIMESTAMP(11, 10, 46, 17, 1, 2014));
      noEvents_0_1_2.set(EventTime_140);
      EvntGrp_NoEvents_140.insert(EventTime_140.getString());
      FIX::EventType EventType_140(3);
      noEvents_0_1_2.set(EventType_140);
      EvntGrp_NoEvents_140.insert(EventType_140.getString());
      all_values.push_back(EvntGrp_NoEvents_140);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_142;
      FIX::InstrumentPartyID InstrumentPartyID_142("STRING_646151596");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyID_142.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_142('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyIDSource_142.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_142(1052410742);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyRole_142.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_142);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274;
        FIX::InstrumentPartySubID InstrumentPartySubID_274("STRING_292468145");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_274);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274.insert(InstrumentPartySubID_274.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_274(586861511);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_274);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274.insert(InstrumentPartySubIDType_274.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275;
        FIX::InstrumentPartySubID InstrumentPartySubID_275("STRING_1108656912");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_275);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275.insert(InstrumentPartySubID_275.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_275(1883057277);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_275);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275.insert(InstrumentPartySubIDType_275.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276;
        FIX::InstrumentPartySubID InstrumentPartySubID_276("STRING_870794192");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_276);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276.insert(InstrumentPartySubID_276.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_276(528970040);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_276);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276.insert(InstrumentPartySubIDType_276.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_129;
      FIX::SecurityAltID SecurityAltID_129("STRING_1167324788");
      noSecurityAltID_0_1_0.set(SecurityAltID_129);
      SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltID_129.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_129("STRING_891025390");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_129);
      SecAltIDGrp_NoSecurityAltID_129.insert(SecurityAltIDSource_129.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_129);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_130;
      FIX::SecurityAltID SecurityAltID_130("STRING_1999751961");
      noSecurityAltID_0_1_1.set(SecurityAltID_130);
      SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltID_130.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_130("STRING_32981186");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_130);
      SecAltIDGrp_NoSecurityAltID_130.insert(SecurityAltIDSource_130.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_130);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_138;
    FIX::SecurityXML SecurityXML_139("XMLDATA_1799285748");
    noRelatedSym_0_0.set(SecurityXML_139);
    FIX::SecurityXMLLen SecurityXMLLen_69(1420264170);
    noRelatedSym_0_0.set(SecurityXMLLen_69);
    FIX::SecurityXMLSchema SecurityXMLSchema_69("STRING_705007638");
    noRelatedSym_0_0.set(SecurityXMLSchema_69);
    SecurityXML_138.insert(SecurityXMLSchema_69.getString());
    all_values.push_back(SecurityXML_138);
    all_compo_names.insert("SecurityXML");

    // OrderQtyData
    multiset<string> OrderQtyData_20;
    FIX::CashOrderQty CashOrderQty_20;
    CashOrderQty_20.setString("12539302");
    noRelatedSym_0_0.set(CashOrderQty_20);
    OrderQtyData_20.insert(CashOrderQty_20.getString());
    FIX::OrderPercent OrderPercent_20;
    OrderPercent_20.setString("41.690000");
    noRelatedSym_0_0.set(OrderPercent_20);
    OrderQtyData_20.insert(OrderPercent_20.getString());
    FIX::OrderQty OrderQty_30;
    OrderQty_30.setString("19957800");
    noRelatedSym_0_0.set(OrderQty_30);
    OrderQtyData_20.insert(OrderQty_30.getString());
    FIX::RoundingDirection RoundingDirection_20('1');
    noRelatedSym_0_0.set(RoundingDirection_20);
    OrderQtyData_20.insert(RoundingDirection_20.getString());
    FIX::RoundingModulus RoundingModulus_20;
    RoundingModulus_20.setString("19543584");
    noRelatedSym_0_0.set(RoundingModulus_20);
    OrderQtyData_20.insert(RoundingModulus_20.getString());
    all_values.push_back(OrderQtyData_20);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_104;
      FIX::PartyID PartyID_104("STRING_1525315958");
      noPartyIDs_0_1_0.set(PartyID_104);
      Parties_NoPartyIDs_104.insert(PartyID_104.getString());
      FIX::PartyIDSource PartyIDSource_104('4');
      noPartyIDs_0_1_0.set(PartyIDSource_104);
      Parties_NoPartyIDs_104.insert(PartyIDSource_104.getString());
      FIX::PartyRole PartyRole_104(81);
      noPartyIDs_0_1_0.set(PartyRole_104);
      Parties_NoPartyIDs_104.insert(PartyRole_104.getString());
      all_values.push_back(Parties_NoPartyIDs_104);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_232;
        FIX::PartySubID PartySubID_232("STRING_2016280102");
        noPartySubIDs_0_0_2_0.set(PartySubID_232);
        PtysSubGrp_NoPartySubIDs_232.insert(PartySubID_232.getString());
        FIX::PartySubIDType PartySubIDType_232(24);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_232);
        PtysSubGrp_NoPartySubIDs_232.insert(PartySubIDType_232.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_232);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_233;
        FIX::PartySubID PartySubID_233("STRING_251544221");
        noPartySubIDs_0_0_2_1.set(PartySubID_233);
        PtysSubGrp_NoPartySubIDs_233.insert(PartySubID_233.getString());
        FIX::PartySubIDType PartySubIDType_233(13);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_233);
        PtysSubGrp_NoPartySubIDs_233.insert(PartySubIDType_233.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_233);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_105;
      FIX::PartyID PartyID_105("STRING_1612274486");
      noPartyIDs_0_1_1.set(PartyID_105);
      Parties_NoPartyIDs_105.insert(PartyID_105.getString());
      FIX::PartyIDSource PartyIDSource_105('3');
      noPartyIDs_0_1_1.set(PartyIDSource_105);
      Parties_NoPartyIDs_105.insert(PartyIDSource_105.getString());
      FIX::PartyRole PartyRole_105(40);
      noPartyIDs_0_1_1.set(PartyRole_105);
      Parties_NoPartyIDs_105.insert(PartyRole_105.getString());
      all_values.push_back(Parties_NoPartyIDs_105);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_234;
        FIX::PartySubID PartySubID_234("STRING_1890816474");
        noPartySubIDs_0_1_2_0.set(PartySubID_234);
        PtysSubGrp_NoPartySubIDs_234.insert(PartySubID_234.getString());
        FIX::PartySubIDType PartySubIDType_234(31);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_234);
        PtysSubGrp_NoPartySubIDs_234.insert(PartySubIDType_234.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_234);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_235;
        FIX::PartySubID PartySubID_235("STRING_1640316261");
        noPartySubIDs_0_1_2_1.set(PartySubID_235);
        PtysSubGrp_NoPartySubIDs_235.insert(PartySubID_235.getString());
        FIX::PartySubIDType PartySubIDType_235(23);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_235);
        PtysSubGrp_NoPartySubIDs_235.insert(PartySubIDType_235.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_235);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_106;
      FIX::PartyID PartyID_106("STRING_1032311018");
      noPartyIDs_0_1_2.set(PartyID_106);
      Parties_NoPartyIDs_106.insert(PartyID_106.getString());
      FIX::PartyIDSource PartyIDSource_106('1');
      noPartyIDs_0_1_2.set(PartyIDSource_106);
      Parties_NoPartyIDs_106.insert(PartyIDSource_106.getString());
      FIX::PartyRole PartyRole_106(53);
      noPartyIDs_0_1_2.set(PartyRole_106);
      Parties_NoPartyIDs_106.insert(PartyRole_106.getString());
      all_values.push_back(Parties_NoPartyIDs_106);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_236;
        FIX::PartySubID PartySubID_236("STRING_1386273642");
        noPartySubIDs_0_2_2_0.set(PartySubID_236);
        PtysSubGrp_NoPartySubIDs_236.insert(PartySubID_236.getString());
        FIX::PartySubIDType PartySubIDType_236(33);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_236);
        PtysSubGrp_NoPartySubIDs_236.insert(PartySubIDType_236.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_236);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_237;
        FIX::PartySubID PartySubID_237("STRING_1575138509");
        noPartySubIDs_0_2_2_1.set(PartySubID_237);
        PtysSubGrp_NoPartySubIDs_237.insert(PartySubID_237.getString());
        FIX::PartySubIDType PartySubIDType_237(11);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_237);
        PtysSubGrp_NoPartySubIDs_237.insert(PartySubIDType_237.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_237);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_1;
      FIX::QuoteQualifier QuoteQualifier_1('6');
      noQuoteQualifiers_0_1_0.set(QuoteQualifier_1);
      QuotQualGrp_NoQuoteQualifiers_1.insert(QuoteQualifier_1.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_1);
      all_compo_names.insert("QuotQualGrp.NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_0;
      FIX::LegOrderQty LegOrderQty_7;
      LegOrderQty_7.setString("2202533");
      noLegs_0_1_0.set(LegOrderQty_7);
      QuotReqLegsGrp_NoLegs_0.insert(LegOrderQty_7.getString());
      FIX::LegQty LegQty_7;
      LegQty_7.setString("8081140");
      noLegs_0_1_0.set(LegQty_7);
      QuotReqLegsGrp_NoLegs_0.insert(LegQty_7.getString());
      FIX::LegRefID LegRefID_7("STRING_1550063175");
      noLegs_0_1_0.set(LegRefID_7);
      QuotReqLegsGrp_NoLegs_0.insert(LegRefID_7.getString());
      FIX::LegSettlDate LegSettlDate_7("LOCALMKTDATE_1998872167");
      noLegs_0_1_0.set(LegSettlDate_7);
      QuotReqLegsGrp_NoLegs_0.insert(LegSettlDate_7.getString());
      FIX::LegSettlType LegSettlType_7('1');
      noLegs_0_1_0.set(LegSettlType_7);
      QuotReqLegsGrp_NoLegs_0.insert(LegSettlType_7.getString());
      FIX::LegSwapType LegSwapType_7(5);
      noLegs_0_1_0.set(LegSwapType_7);
      QuotReqLegsGrp_NoLegs_0.insert(LegSwapType_7.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_0);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_106;
      FIX::EncodedLegIssuer EncodedLegIssuer_106("DATA_831721603");
      noLegs_0_1_0.set(EncodedLegIssuer_106);
      InstrumentLeg_106.insert(EncodedLegIssuer_106.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_106(1070588282);
      noLegs_0_1_0.set(EncodedLegIssuerLen_106);
      InstrumentLeg_106.insert(EncodedLegIssuerLen_106.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_106("DATA_379418549");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_106);
      InstrumentLeg_106.insert(EncodedLegSecurityDesc_106.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_106(892541880);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_106);
      InstrumentLeg_106.insert(EncodedLegSecurityDescLen_106.getString());
      FIX::LegCFICode LegCFICode_106("STRING_1322132503");
      noLegs_0_1_0.set(LegCFICode_106);
      InstrumentLeg_106.insert(LegCFICode_106.getString());
      FIX::LegContractMultiplier LegContractMultiplier_106;
      LegContractMultiplier_106.setString("8943665");
      noLegs_0_1_0.set(LegContractMultiplier_106);
      InstrumentLeg_106.insert(LegContractMultiplier_106.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_106(357332718);
      noLegs_0_1_0.set(LegContractMultiplierUnit_106);
      InstrumentLeg_106.insert(LegContractMultiplierUnit_106.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_106("MONTHYEAR_478603818");
      noLegs_0_1_0.set(LegContractSettlMonth_106);
      InstrumentLeg_106.insert(LegContractSettlMonth_106.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_106("COUNTRY_289050666");
      noLegs_0_1_0.set(LegCountryOfIssue_106);
      InstrumentLeg_106.insert(LegCountryOfIssue_106.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_106("LOCALMKTDATE_114591702");
      noLegs_0_1_0.set(LegCouponPaymentDate_106);
      InstrumentLeg_106.insert(LegCouponPaymentDate_106.getString());
      FIX::LegCouponRate LegCouponRate_106;
      LegCouponRate_106.setString("66.450000");
      noLegs_0_1_0.set(LegCouponRate_106);
      InstrumentLeg_106.insert(LegCouponRate_106.getString());
      FIX::LegCreditRating LegCreditRating_106("STRING_792391644");
      noLegs_0_1_0.set(LegCreditRating_106);
      InstrumentLeg_106.insert(LegCreditRating_106.getString());
      FIX::LegCurrency LegCurrency_106("USD");
      noLegs_0_1_0.set(LegCurrency_106);
      InstrumentLeg_106.insert(LegCurrency_106.getString());
      FIX::LegDatedDate LegDatedDate_106("LOCALMKTDATE_1824702663");
      noLegs_0_1_0.set(LegDatedDate_106);
      InstrumentLeg_106.insert(LegDatedDate_106.getString());
      FIX::LegExerciseStyle LegExerciseStyle_106(1141429644);
      noLegs_0_1_0.set(LegExerciseStyle_106);
      InstrumentLeg_106.insert(LegExerciseStyle_106.getString());
      FIX::LegFactor LegFactor_106;
      LegFactor_106.setString("4700318");
      noLegs_0_1_0.set(LegFactor_106);
      InstrumentLeg_106.insert(LegFactor_106.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_106(1600555424);
      noLegs_0_1_0.set(LegFlowScheduleType_106);
      InstrumentLeg_106.insert(LegFlowScheduleType_106.getString());
      FIX::LegInstrRegistry LegInstrRegistry_106("STRING_380219638");
      noLegs_0_1_0.set(LegInstrRegistry_106);
      InstrumentLeg_106.insert(LegInstrRegistry_106.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_106("LOCALMKTDATE_136981168");
      noLegs_0_1_0.set(LegInterestAccrualDate_106);
      InstrumentLeg_106.insert(LegInterestAccrualDate_106.getString());
      FIX::LegIssueDate LegIssueDate_106("LOCALMKTDATE_1028210285");
      noLegs_0_1_0.set(LegIssueDate_106);
      InstrumentLeg_106.insert(LegIssueDate_106.getString());
      FIX::LegIssuer LegIssuer_106("STRING_1039273802");
      noLegs_0_1_0.set(LegIssuer_106);
      InstrumentLeg_106.insert(LegIssuer_106.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_106("STRING_508938151");
      noLegs_0_1_0.set(LegLocaleOfIssue_106);
      InstrumentLeg_106.insert(LegLocaleOfIssue_106.getString());
      FIX::LegMaturityDate LegMaturityDate_106("LOCALMKTDATE_1709795353");
      noLegs_0_1_0.set(LegMaturityDate_106);
      InstrumentLeg_106.insert(LegMaturityDate_106.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_106("MONTHYEAR_634978487");
      noLegs_0_1_0.set(LegMaturityMonthYear_106);
      InstrumentLeg_106.insert(LegMaturityMonthYear_106.getString());
      FIX::LegMaturityTime LegMaturityTime_106("TZTIMEONLY_729191496");
      noLegs_0_1_0.set(LegMaturityTime_106);
      InstrumentLeg_106.insert(LegMaturityTime_106.getString());
      FIX::LegOptAttribute LegOptAttribute_106('3');
      noLegs_0_1_0.set(LegOptAttribute_106);
      InstrumentLeg_106.insert(LegOptAttribute_106.getString());
      FIX::LegOptionRatio LegOptionRatio_106;
      LegOptionRatio_106.setString("375580");
      noLegs_0_1_0.set(LegOptionRatio_106);
      InstrumentLeg_106.insert(LegOptionRatio_106.getString());
      FIX::LegPool LegPool_106("STRING_580580016");
      noLegs_0_1_0.set(LegPool_106);
      InstrumentLeg_106.insert(LegPool_106.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_106("STRING_556372130");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_106);
      InstrumentLeg_106.insert(LegPriceUnitOfMeasure_106.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_106;
      LegPriceUnitOfMeasureQty_106.setString("5481801");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_106);
      InstrumentLeg_106.insert(LegPriceUnitOfMeasureQty_106.getString());
      FIX::LegProduct LegProduct_106(1412301619);
      noLegs_0_1_0.set(LegProduct_106);
      InstrumentLeg_106.insert(LegProduct_106.getString());
      FIX::LegPutOrCall LegPutOrCall_106(1626960412);
      noLegs_0_1_0.set(LegPutOrCall_106);
      InstrumentLeg_106.insert(LegPutOrCall_106.getString());
      FIX::LegRatioQty LegRatioQty_106;
      LegRatioQty_106.setString("9275986");
      noLegs_0_1_0.set(LegRatioQty_106);
      InstrumentLeg_106.insert(LegRatioQty_106.getString());
      FIX::LegRedemptionDate LegRedemptionDate_106("LOCALMKTDATE_157359851");
      noLegs_0_1_0.set(LegRedemptionDate_106);
      InstrumentLeg_106.insert(LegRedemptionDate_106.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_106("STRING_801609268");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_106);
      InstrumentLeg_106.insert(LegRepoCollateralSecurityType_106.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_106;
      LegRepurchaseRate_106.setString("52.590000");
      noLegs_0_1_0.set(LegRepurchaseRate_106);
      InstrumentLeg_106.insert(LegRepurchaseRate_106.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_106(514692570);
      noLegs_0_1_0.set(LegRepurchaseTerm_106);
      InstrumentLeg_106.insert(LegRepurchaseTerm_106.getString());
      FIX::LegSecurityDesc LegSecurityDesc_106("STRING_1280213086");
      noLegs_0_1_0.set(LegSecurityDesc_106);
      InstrumentLeg_106.insert(LegSecurityDesc_106.getString());
      FIX::LegSecurityExchange LegSecurityExchange_106("EXCHANGE_2111015925");
      noLegs_0_1_0.set(LegSecurityExchange_106);
      InstrumentLeg_106.insert(LegSecurityExchange_106.getString());
      FIX::LegSecurityID LegSecurityID_106("STRING_629284272");
      noLegs_0_1_0.set(LegSecurityID_106);
      InstrumentLeg_106.insert(LegSecurityID_106.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_106("STRING_1502149731");
      noLegs_0_1_0.set(LegSecurityIDSource_106);
      InstrumentLeg_106.insert(LegSecurityIDSource_106.getString());
      FIX::LegSecuritySubType LegSecuritySubType_106("STRING_755923922");
      noLegs_0_1_0.set(LegSecuritySubType_106);
      InstrumentLeg_106.insert(LegSecuritySubType_106.getString());
      FIX::LegSecurityType LegSecurityType_106("STRING_236708587");
      noLegs_0_1_0.set(LegSecurityType_106);
      InstrumentLeg_106.insert(LegSecurityType_106.getString());
      FIX::LegSide LegSide_106('1');
      noLegs_0_1_0.set(LegSide_106);
      InstrumentLeg_106.insert(LegSide_106.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_106("STRING_433142937");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_106);
      InstrumentLeg_106.insert(LegStateOrProvinceOfIssue_106.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_106("GBP");
      noLegs_0_1_0.set(LegStrikeCurrency_106);
      InstrumentLeg_106.insert(LegStrikeCurrency_106.getString());
      FIX::LegStrikePrice LegStrikePrice_106;
      LegStrikePrice_106.setString("20336983");
      noLegs_0_1_0.set(LegStrikePrice_106);
      InstrumentLeg_106.insert(LegStrikePrice_106.getString());
      FIX::LegSymbol LegSymbol_106("STRING_1758357869");
      noLegs_0_1_0.set(LegSymbol_106);
      InstrumentLeg_106.insert(LegSymbol_106.getString());
      FIX::LegSymbolSfx LegSymbolSfx_106("STRING_797742738");
      noLegs_0_1_0.set(LegSymbolSfx_106);
      InstrumentLeg_106.insert(LegSymbolSfx_106.getString());
      FIX::LegTimeUnit LegTimeUnit_106("STRING_914424998");
      noLegs_0_1_0.set(LegTimeUnit_106);
      InstrumentLeg_106.insert(LegTimeUnit_106.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_106("STRING_650148023");
      noLegs_0_1_0.set(LegUnitOfMeasure_106);
      InstrumentLeg_106.insert(LegUnitOfMeasure_106.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_106;
      LegUnitOfMeasureQty_106.setString("13066808");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_106);
      InstrumentLeg_106.insert(LegUnitOfMeasureQty_106.getString());
      all_values.push_back(InstrumentLeg_106);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_216;
        FIX::LegSecurityAltID LegSecurityAltID_216("STRING_1285126510");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_216);
        LegSecAltIDGrp_NoLegSecurityAltID_216.insert(LegSecurityAltID_216.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_216("STRING_2035872386");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_216);
        LegSecAltIDGrp_NoLegSecurityAltID_216.insert(LegSecurityAltIDSource_216.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_216);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_217;
        FIX::LegSecurityAltID LegSecurityAltID_217("STRING_847162466");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_217);
        LegSecAltIDGrp_NoLegSecurityAltID_217.insert(LegSecurityAltID_217.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_217("STRING_1322684525");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_217);
        LegSecAltIDGrp_NoLegSecurityAltID_217.insert(LegSecurityAltIDSource_217.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_217);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_3;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_3("JPY");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurveCurrency_3.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_3("STRING_1870864636");
      noLegs_0_1_0.set(LegBenchmarkCurveName_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurveName_3.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_3("STRING_1881270373");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurvePoint_3.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_3;
      LegBenchmarkPrice_3.setString("8830113");
      noLegs_0_1_0.set(LegBenchmarkPrice_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkPrice_3.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_3(650979648);
      noLegs_0_1_0.set(LegBenchmarkPriceType_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkPriceType_3.getString());
      all_values.push_back(LegBenchmarkCurveData_3);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_18;
        FIX::LegStipulationType LegStipulationType_18("STRING_1684620628");
        noLegStipulations_0_0_2_0.set(LegStipulationType_18);
        LegStipulations_NoLegStipulations_18.insert(LegStipulationType_18.getString());
        FIX::LegStipulationValue LegStipulationValue_18("STRING_325461259");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_18);
        LegStipulations_NoLegStipulations_18.insert(LegStipulationValue_18.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_18);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_101;
        FIX::NestedPartyID NestedPartyID_101("STRING_817350067");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyID_101.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_101('2');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyIDSource_101.getString());
        FIX::NestedPartyRole NestedPartyRole_101(1035123418);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyRole_101.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_101);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_215;
          FIX::NestedPartySubID NestedPartySubID_215("STRING_1044917459");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_215);
          NstdPtysSubGrp_NoNestedPartySubIDs_215.insert(NestedPartySubID_215.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_215(1271832005);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_215);
          NstdPtysSubGrp_NoNestedPartySubIDs_215.insert(NestedPartySubIDType_215.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_215);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_216;
          FIX::NestedPartySubID NestedPartySubID_216("STRING_362745898");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_216);
          NstdPtysSubGrp_NoNestedPartySubIDs_216.insert(NestedPartySubID_216.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_216(1478060396);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_216);
          NstdPtysSubGrp_NoNestedPartySubIDs_216.insert(NestedPartySubIDType_216.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_216);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_217;
          FIX::NestedPartySubID NestedPartySubID_217("STRING_502486588");
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubID_217);
          NstdPtysSubGrp_NoNestedPartySubIDs_217.insert(NestedPartySubID_217.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_217(1023507468);
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubIDType_217);
          NstdPtysSubGrp_NoNestedPartySubIDs_217.insert(NestedPartySubIDType_217.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_217);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_102;
        FIX::NestedPartyID NestedPartyID_102("STRING_1364275109");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyID_102.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_102('1');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyIDSource_102.getString());
        FIX::NestedPartyRole NestedPartyRole_102(1821250207);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyRole_102.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_102);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_218;
          FIX::NestedPartySubID NestedPartySubID_218("STRING_763508832");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_218);
          NstdPtysSubGrp_NoNestedPartySubIDs_218.insert(NestedPartySubID_218.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_218(980447448);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_218);
          NstdPtysSubGrp_NoNestedPartySubIDs_218.insert(NestedPartySubIDType_218.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_218);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_219;
          FIX::NestedPartySubID NestedPartySubID_219("STRING_607953162");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_219);
          NstdPtysSubGrp_NoNestedPartySubIDs_219.insert(NestedPartySubID_219.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_219(2048635343);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_219);
          NstdPtysSubGrp_NoNestedPartySubIDs_219.insert(NestedPartySubIDType_219.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_219);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_220;
          FIX::NestedPartySubID NestedPartySubID_220("STRING_868836186");
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubID_220);
          NstdPtysSubGrp_NoNestedPartySubIDs_220.insert(NestedPartySubID_220.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_220(1455115628);
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubIDType_220);
          NstdPtysSubGrp_NoNestedPartySubIDs_220.insert(NestedPartySubIDType_220.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_220);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_2);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_1;
      FIX::LegOrderQty LegOrderQty_8;
      LegOrderQty_8.setString("12238362");
      noLegs_0_1_1.set(LegOrderQty_8);
      QuotReqLegsGrp_NoLegs_1.insert(LegOrderQty_8.getString());
      FIX::LegQty LegQty_8;
      LegQty_8.setString("13378049");
      noLegs_0_1_1.set(LegQty_8);
      QuotReqLegsGrp_NoLegs_1.insert(LegQty_8.getString());
      FIX::LegRefID LegRefID_8("STRING_711166576");
      noLegs_0_1_1.set(LegRefID_8);
      QuotReqLegsGrp_NoLegs_1.insert(LegRefID_8.getString());
      FIX::LegSettlDate LegSettlDate_8("LOCALMKTDATE_947217208");
      noLegs_0_1_1.set(LegSettlDate_8);
      QuotReqLegsGrp_NoLegs_1.insert(LegSettlDate_8.getString());
      FIX::LegSettlType LegSettlType_8('1');
      noLegs_0_1_1.set(LegSettlType_8);
      QuotReqLegsGrp_NoLegs_1.insert(LegSettlType_8.getString());
      FIX::LegSwapType LegSwapType_8(2);
      noLegs_0_1_1.set(LegSwapType_8);
      QuotReqLegsGrp_NoLegs_1.insert(LegSwapType_8.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_1);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_107;
      FIX::EncodedLegIssuer EncodedLegIssuer_107("DATA_1598196856");
      noLegs_0_1_1.set(EncodedLegIssuer_107);
      InstrumentLeg_107.insert(EncodedLegIssuer_107.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_107(962738242);
      noLegs_0_1_1.set(EncodedLegIssuerLen_107);
      InstrumentLeg_107.insert(EncodedLegIssuerLen_107.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_107("DATA_1131314917");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_107);
      InstrumentLeg_107.insert(EncodedLegSecurityDesc_107.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_107(1923658116);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_107);
      InstrumentLeg_107.insert(EncodedLegSecurityDescLen_107.getString());
      FIX::LegCFICode LegCFICode_107("STRING_1368577388");
      noLegs_0_1_1.set(LegCFICode_107);
      InstrumentLeg_107.insert(LegCFICode_107.getString());
      FIX::LegContractMultiplier LegContractMultiplier_107;
      LegContractMultiplier_107.setString("19486649");
      noLegs_0_1_1.set(LegContractMultiplier_107);
      InstrumentLeg_107.insert(LegContractMultiplier_107.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_107(65168005);
      noLegs_0_1_1.set(LegContractMultiplierUnit_107);
      InstrumentLeg_107.insert(LegContractMultiplierUnit_107.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_107("MONTHYEAR_256217159");
      noLegs_0_1_1.set(LegContractSettlMonth_107);
      InstrumentLeg_107.insert(LegContractSettlMonth_107.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_107("COUNTRY_2120681135");
      noLegs_0_1_1.set(LegCountryOfIssue_107);
      InstrumentLeg_107.insert(LegCountryOfIssue_107.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_107("LOCALMKTDATE_1110085464");
      noLegs_0_1_1.set(LegCouponPaymentDate_107);
      InstrumentLeg_107.insert(LegCouponPaymentDate_107.getString());
      FIX::LegCouponRate LegCouponRate_107;
      LegCouponRate_107.setString("91.640000");
      noLegs_0_1_1.set(LegCouponRate_107);
      InstrumentLeg_107.insert(LegCouponRate_107.getString());
      FIX::LegCreditRating LegCreditRating_107("STRING_335943385");
      noLegs_0_1_1.set(LegCreditRating_107);
      InstrumentLeg_107.insert(LegCreditRating_107.getString());
      FIX::LegCurrency LegCurrency_107("CHF");
      noLegs_0_1_1.set(LegCurrency_107);
      InstrumentLeg_107.insert(LegCurrency_107.getString());
      FIX::LegDatedDate LegDatedDate_107("LOCALMKTDATE_1359450853");
      noLegs_0_1_1.set(LegDatedDate_107);
      InstrumentLeg_107.insert(LegDatedDate_107.getString());
      FIX::LegExerciseStyle LegExerciseStyle_107(1804937321);
      noLegs_0_1_1.set(LegExerciseStyle_107);
      InstrumentLeg_107.insert(LegExerciseStyle_107.getString());
      FIX::LegFactor LegFactor_107;
      LegFactor_107.setString("21438965");
      noLegs_0_1_1.set(LegFactor_107);
      InstrumentLeg_107.insert(LegFactor_107.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_107(1033217412);
      noLegs_0_1_1.set(LegFlowScheduleType_107);
      InstrumentLeg_107.insert(LegFlowScheduleType_107.getString());
      FIX::LegInstrRegistry LegInstrRegistry_107("STRING_1936153780");
      noLegs_0_1_1.set(LegInstrRegistry_107);
      InstrumentLeg_107.insert(LegInstrRegistry_107.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_107("LOCALMKTDATE_759921747");
      noLegs_0_1_1.set(LegInterestAccrualDate_107);
      InstrumentLeg_107.insert(LegInterestAccrualDate_107.getString());
      FIX::LegIssueDate LegIssueDate_107("LOCALMKTDATE_2013664861");
      noLegs_0_1_1.set(LegIssueDate_107);
      InstrumentLeg_107.insert(LegIssueDate_107.getString());
      FIX::LegIssuer LegIssuer_107("STRING_396623294");
      noLegs_0_1_1.set(LegIssuer_107);
      InstrumentLeg_107.insert(LegIssuer_107.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_107("STRING_661073442");
      noLegs_0_1_1.set(LegLocaleOfIssue_107);
      InstrumentLeg_107.insert(LegLocaleOfIssue_107.getString());
      FIX::LegMaturityDate LegMaturityDate_107("LOCALMKTDATE_735017399");
      noLegs_0_1_1.set(LegMaturityDate_107);
      InstrumentLeg_107.insert(LegMaturityDate_107.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_107("MONTHYEAR_1851738923");
      noLegs_0_1_1.set(LegMaturityMonthYear_107);
      InstrumentLeg_107.insert(LegMaturityMonthYear_107.getString());
      FIX::LegMaturityTime LegMaturityTime_107("TZTIMEONLY_1884909662");
      noLegs_0_1_1.set(LegMaturityTime_107);
      InstrumentLeg_107.insert(LegMaturityTime_107.getString());
      FIX::LegOptAttribute LegOptAttribute_107('2');
      noLegs_0_1_1.set(LegOptAttribute_107);
      InstrumentLeg_107.insert(LegOptAttribute_107.getString());
      FIX::LegOptionRatio LegOptionRatio_107;
      LegOptionRatio_107.setString("4154218");
      noLegs_0_1_1.set(LegOptionRatio_107);
      InstrumentLeg_107.insert(LegOptionRatio_107.getString());
      FIX::LegPool LegPool_107("STRING_684643223");
      noLegs_0_1_1.set(LegPool_107);
      InstrumentLeg_107.insert(LegPool_107.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_107("STRING_996930357");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_107);
      InstrumentLeg_107.insert(LegPriceUnitOfMeasure_107.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_107;
      LegPriceUnitOfMeasureQty_107.setString("20095997");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_107);
      InstrumentLeg_107.insert(LegPriceUnitOfMeasureQty_107.getString());
      FIX::LegProduct LegProduct_107(135356431);
      noLegs_0_1_1.set(LegProduct_107);
      InstrumentLeg_107.insert(LegProduct_107.getString());
      FIX::LegPutOrCall LegPutOrCall_107(1959668599);
      noLegs_0_1_1.set(LegPutOrCall_107);
      InstrumentLeg_107.insert(LegPutOrCall_107.getString());
      FIX::LegRatioQty LegRatioQty_107;
      LegRatioQty_107.setString("9934310");
      noLegs_0_1_1.set(LegRatioQty_107);
      InstrumentLeg_107.insert(LegRatioQty_107.getString());
      FIX::LegRedemptionDate LegRedemptionDate_107("LOCALMKTDATE_2059014547");
      noLegs_0_1_1.set(LegRedemptionDate_107);
      InstrumentLeg_107.insert(LegRedemptionDate_107.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_107("STRING_1180762340");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_107);
      InstrumentLeg_107.insert(LegRepoCollateralSecurityType_107.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_107;
      LegRepurchaseRate_107.setString("23.940000");
      noLegs_0_1_1.set(LegRepurchaseRate_107);
      InstrumentLeg_107.insert(LegRepurchaseRate_107.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_107(2124182552);
      noLegs_0_1_1.set(LegRepurchaseTerm_107);
      InstrumentLeg_107.insert(LegRepurchaseTerm_107.getString());
      FIX::LegSecurityDesc LegSecurityDesc_107("STRING_1436979499");
      noLegs_0_1_1.set(LegSecurityDesc_107);
      InstrumentLeg_107.insert(LegSecurityDesc_107.getString());
      FIX::LegSecurityExchange LegSecurityExchange_107("EXCHANGE_767809881");
      noLegs_0_1_1.set(LegSecurityExchange_107);
      InstrumentLeg_107.insert(LegSecurityExchange_107.getString());
      FIX::LegSecurityID LegSecurityID_107("STRING_1086784368");
      noLegs_0_1_1.set(LegSecurityID_107);
      InstrumentLeg_107.insert(LegSecurityID_107.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_107("STRING_817545015");
      noLegs_0_1_1.set(LegSecurityIDSource_107);
      InstrumentLeg_107.insert(LegSecurityIDSource_107.getString());
      FIX::LegSecuritySubType LegSecuritySubType_107("STRING_1103753266");
      noLegs_0_1_1.set(LegSecuritySubType_107);
      InstrumentLeg_107.insert(LegSecuritySubType_107.getString());
      FIX::LegSecurityType LegSecurityType_107("STRING_1527446580");
      noLegs_0_1_1.set(LegSecurityType_107);
      InstrumentLeg_107.insert(LegSecurityType_107.getString());
      FIX::LegSide LegSide_107('7');
      noLegs_0_1_1.set(LegSide_107);
      InstrumentLeg_107.insert(LegSide_107.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_107("STRING_315720472");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_107);
      InstrumentLeg_107.insert(LegStateOrProvinceOfIssue_107.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_107("EUR");
      noLegs_0_1_1.set(LegStrikeCurrency_107);
      InstrumentLeg_107.insert(LegStrikeCurrency_107.getString());
      FIX::LegStrikePrice LegStrikePrice_107;
      LegStrikePrice_107.setString("13489378");
      noLegs_0_1_1.set(LegStrikePrice_107);
      InstrumentLeg_107.insert(LegStrikePrice_107.getString());
      FIX::LegSymbol LegSymbol_107("STRING_973570385");
      noLegs_0_1_1.set(LegSymbol_107);
      InstrumentLeg_107.insert(LegSymbol_107.getString());
      FIX::LegSymbolSfx LegSymbolSfx_107("STRING_1456931782");
      noLegs_0_1_1.set(LegSymbolSfx_107);
      InstrumentLeg_107.insert(LegSymbolSfx_107.getString());
      FIX::LegTimeUnit LegTimeUnit_107("STRING_1215119097");
      noLegs_0_1_1.set(LegTimeUnit_107);
      InstrumentLeg_107.insert(LegTimeUnit_107.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_107("STRING_1370193680");
      noLegs_0_1_1.set(LegUnitOfMeasure_107);
      InstrumentLeg_107.insert(LegUnitOfMeasure_107.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_107;
      LegUnitOfMeasureQty_107.setString("21180052");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_107);
      InstrumentLeg_107.insert(LegUnitOfMeasureQty_107.getString());
      all_values.push_back(InstrumentLeg_107);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_218;
        FIX::LegSecurityAltID LegSecurityAltID_218("STRING_1074448955");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_218);
        LegSecAltIDGrp_NoLegSecurityAltID_218.insert(LegSecurityAltID_218.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_218("STRING_1855431238");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_218);
        LegSecAltIDGrp_NoLegSecurityAltID_218.insert(LegSecurityAltIDSource_218.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_218);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_4;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_4("USD");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurveCurrency_4.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_4("STRING_392590813");
      noLegs_0_1_1.set(LegBenchmarkCurveName_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurveName_4.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_4("STRING_724921898");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurvePoint_4.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_4;
      LegBenchmarkPrice_4.setString("13519869");
      noLegs_0_1_1.set(LegBenchmarkPrice_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkPrice_4.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_4(527947245);
      noLegs_0_1_1.set(LegBenchmarkPriceType_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkPriceType_4.getString());
      all_values.push_back(LegBenchmarkCurveData_4);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_19;
        FIX::LegStipulationType LegStipulationType_19("STRING_197934357");
        noLegStipulations_0_1_2_0.set(LegStipulationType_19);
        LegStipulations_NoLegStipulations_19.insert(LegStipulationType_19.getString());
        FIX::LegStipulationValue LegStipulationValue_19("STRING_439478144");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_19);
        LegStipulations_NoLegStipulations_19.insert(LegStipulationValue_19.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_19);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_20;
        FIX::LegStipulationType LegStipulationType_20("STRING_1717869190");
        noLegStipulations_0_1_2_1.set(LegStipulationType_20);
        LegStipulations_NoLegStipulations_20.insert(LegStipulationType_20.getString());
        FIX::LegStipulationValue LegStipulationValue_20("STRING_992546751");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_20);
        LegStipulations_NoLegStipulations_20.insert(LegStipulationValue_20.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_20);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_21;
        FIX::LegStipulationType LegStipulationType_21("STRING_416177049");
        noLegStipulations_0_1_2_2.set(LegStipulationType_21);
        LegStipulations_NoLegStipulations_21.insert(LegStipulationType_21.getString());
        FIX::LegStipulationValue LegStipulationValue_21("STRING_1007365041");
        noLegStipulations_0_1_2_2.set(LegStipulationValue_21);
        LegStipulations_NoLegStipulations_21.insert(LegStipulationValue_21.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_21);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_103;
        FIX::NestedPartyID NestedPartyID_103("STRING_1502961417");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyID_103.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_103('1');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyIDSource_103.getString());
        FIX::NestedPartyRole NestedPartyRole_103(716626251);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyRole_103.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_103);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_221;
          FIX::NestedPartySubID NestedPartySubID_221("STRING_378023529");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_221);
          NstdPtysSubGrp_NoNestedPartySubIDs_221.insert(NestedPartySubID_221.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_221(1032346723);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_221);
          NstdPtysSubGrp_NoNestedPartySubIDs_221.insert(NestedPartySubIDType_221.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_221);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_222;
          FIX::NestedPartySubID NestedPartySubID_222("STRING_2067824603");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_222);
          NstdPtysSubGrp_NoNestedPartySubIDs_222.insert(NestedPartySubID_222.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_222(1075033564);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_222);
          NstdPtysSubGrp_NoNestedPartySubIDs_222.insert(NestedPartySubIDType_222.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_222);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_223;
          FIX::NestedPartySubID NestedPartySubID_223("STRING_233800960");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_223);
          NstdPtysSubGrp_NoNestedPartySubIDs_223.insert(NestedPartySubID_223.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_223(893911341);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_223);
          NstdPtysSubGrp_NoNestedPartySubIDs_223.insert(NestedPartySubIDType_223.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_223);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_104;
        FIX::NestedPartyID NestedPartyID_104("STRING_384481698");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyID_104.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_104('1');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyIDSource_104.getString());
        FIX::NestedPartyRole NestedPartyRole_104(116621373);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyRole_104.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_104);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_224;
          FIX::NestedPartySubID NestedPartySubID_224("STRING_1251572906");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_224);
          NstdPtysSubGrp_NoNestedPartySubIDs_224.insert(NestedPartySubID_224.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_224(1191070328);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_224);
          NstdPtysSubGrp_NoNestedPartySubIDs_224.insert(NestedPartySubIDType_224.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_224);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_225;
          FIX::NestedPartySubID NestedPartySubID_225("STRING_62950864");
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubID_225);
          NstdPtysSubGrp_NoNestedPartySubIDs_225.insert(NestedPartySubID_225.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_225(979564447);
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubIDType_225);
          NstdPtysSubGrp_NoNestedPartySubIDs_225.insert(NestedPartySubIDType_225.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_225);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_226;
          FIX::NestedPartySubID NestedPartySubID_226("STRING_533457486");
          noNestedPartySubIDs_0_1_1_3_2.set(NestedPartySubID_226);
          NstdPtysSubGrp_NoNestedPartySubIDs_226.insert(NestedPartySubID_226.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_226(455541678);
          noNestedPartySubIDs_0_1_1_3_2.set(NestedPartySubIDType_226);
          NstdPtysSubGrp_NoNestedPartySubIDs_226.insert(NestedPartySubIDType_226.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_226);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_2;
      FIX::LegOrderQty LegOrderQty_9;
      LegOrderQty_9.setString("17044863");
      noLegs_0_1_2.set(LegOrderQty_9);
      QuotReqLegsGrp_NoLegs_2.insert(LegOrderQty_9.getString());
      FIX::LegQty LegQty_9;
      LegQty_9.setString("18854444");
      noLegs_0_1_2.set(LegQty_9);
      QuotReqLegsGrp_NoLegs_2.insert(LegQty_9.getString());
      FIX::LegRefID LegRefID_9("STRING_983488923");
      noLegs_0_1_2.set(LegRefID_9);
      QuotReqLegsGrp_NoLegs_2.insert(LegRefID_9.getString());
      FIX::LegSettlDate LegSettlDate_9("LOCALMKTDATE_94109548");
      noLegs_0_1_2.set(LegSettlDate_9);
      QuotReqLegsGrp_NoLegs_2.insert(LegSettlDate_9.getString());
      FIX::LegSettlType LegSettlType_9('2');
      noLegs_0_1_2.set(LegSettlType_9);
      QuotReqLegsGrp_NoLegs_2.insert(LegSettlType_9.getString());
      FIX::LegSwapType LegSwapType_9(5);
      noLegs_0_1_2.set(LegSwapType_9);
      QuotReqLegsGrp_NoLegs_2.insert(LegSwapType_9.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_2);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_108;
      FIX::EncodedLegIssuer EncodedLegIssuer_108("DATA_1811978738");
      noLegs_0_1_2.set(EncodedLegIssuer_108);
      InstrumentLeg_108.insert(EncodedLegIssuer_108.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_108(928441894);
      noLegs_0_1_2.set(EncodedLegIssuerLen_108);
      InstrumentLeg_108.insert(EncodedLegIssuerLen_108.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_108("DATA_1839144116");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_108);
      InstrumentLeg_108.insert(EncodedLegSecurityDesc_108.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_108(671860131);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_108);
      InstrumentLeg_108.insert(EncodedLegSecurityDescLen_108.getString());
      FIX::LegCFICode LegCFICode_108("STRING_541314879");
      noLegs_0_1_2.set(LegCFICode_108);
      InstrumentLeg_108.insert(LegCFICode_108.getString());
      FIX::LegContractMultiplier LegContractMultiplier_108;
      LegContractMultiplier_108.setString("11946218");
      noLegs_0_1_2.set(LegContractMultiplier_108);
      InstrumentLeg_108.insert(LegContractMultiplier_108.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_108(349286539);
      noLegs_0_1_2.set(LegContractMultiplierUnit_108);
      InstrumentLeg_108.insert(LegContractMultiplierUnit_108.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_108("MONTHYEAR_1257941130");
      noLegs_0_1_2.set(LegContractSettlMonth_108);
      InstrumentLeg_108.insert(LegContractSettlMonth_108.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_108("COUNTRY_2077546236");
      noLegs_0_1_2.set(LegCountryOfIssue_108);
      InstrumentLeg_108.insert(LegCountryOfIssue_108.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_108("LOCALMKTDATE_727310068");
      noLegs_0_1_2.set(LegCouponPaymentDate_108);
      InstrumentLeg_108.insert(LegCouponPaymentDate_108.getString());
      FIX::LegCouponRate LegCouponRate_108;
      LegCouponRate_108.setString("42.060000");
      noLegs_0_1_2.set(LegCouponRate_108);
      InstrumentLeg_108.insert(LegCouponRate_108.getString());
      FIX::LegCreditRating LegCreditRating_108("STRING_1997887191");
      noLegs_0_1_2.set(LegCreditRating_108);
      InstrumentLeg_108.insert(LegCreditRating_108.getString());
      FIX::LegCurrency LegCurrency_108("JPY");
      noLegs_0_1_2.set(LegCurrency_108);
      InstrumentLeg_108.insert(LegCurrency_108.getString());
      FIX::LegDatedDate LegDatedDate_108("LOCALMKTDATE_744314884");
      noLegs_0_1_2.set(LegDatedDate_108);
      InstrumentLeg_108.insert(LegDatedDate_108.getString());
      FIX::LegExerciseStyle LegExerciseStyle_108(39341682);
      noLegs_0_1_2.set(LegExerciseStyle_108);
      InstrumentLeg_108.insert(LegExerciseStyle_108.getString());
      FIX::LegFactor LegFactor_108;
      LegFactor_108.setString("18255252");
      noLegs_0_1_2.set(LegFactor_108);
      InstrumentLeg_108.insert(LegFactor_108.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_108(860936257);
      noLegs_0_1_2.set(LegFlowScheduleType_108);
      InstrumentLeg_108.insert(LegFlowScheduleType_108.getString());
      FIX::LegInstrRegistry LegInstrRegistry_108("STRING_394344956");
      noLegs_0_1_2.set(LegInstrRegistry_108);
      InstrumentLeg_108.insert(LegInstrRegistry_108.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_108("LOCALMKTDATE_929614482");
      noLegs_0_1_2.set(LegInterestAccrualDate_108);
      InstrumentLeg_108.insert(LegInterestAccrualDate_108.getString());
      FIX::LegIssueDate LegIssueDate_108("LOCALMKTDATE_2052006585");
      noLegs_0_1_2.set(LegIssueDate_108);
      InstrumentLeg_108.insert(LegIssueDate_108.getString());
      FIX::LegIssuer LegIssuer_108("STRING_457295821");
      noLegs_0_1_2.set(LegIssuer_108);
      InstrumentLeg_108.insert(LegIssuer_108.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_108("STRING_1909178929");
      noLegs_0_1_2.set(LegLocaleOfIssue_108);
      InstrumentLeg_108.insert(LegLocaleOfIssue_108.getString());
      FIX::LegMaturityDate LegMaturityDate_108("LOCALMKTDATE_437980424");
      noLegs_0_1_2.set(LegMaturityDate_108);
      InstrumentLeg_108.insert(LegMaturityDate_108.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_108("MONTHYEAR_912837499");
      noLegs_0_1_2.set(LegMaturityMonthYear_108);
      InstrumentLeg_108.insert(LegMaturityMonthYear_108.getString());
      FIX::LegMaturityTime LegMaturityTime_108("TZTIMEONLY_1466181627");
      noLegs_0_1_2.set(LegMaturityTime_108);
      InstrumentLeg_108.insert(LegMaturityTime_108.getString());
      FIX::LegOptAttribute LegOptAttribute_108('1');
      noLegs_0_1_2.set(LegOptAttribute_108);
      InstrumentLeg_108.insert(LegOptAttribute_108.getString());
      FIX::LegOptionRatio LegOptionRatio_108;
      LegOptionRatio_108.setString("18963264");
      noLegs_0_1_2.set(LegOptionRatio_108);
      InstrumentLeg_108.insert(LegOptionRatio_108.getString());
      FIX::LegPool LegPool_108("STRING_1560291175");
      noLegs_0_1_2.set(LegPool_108);
      InstrumentLeg_108.insert(LegPool_108.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_108("STRING_111836352");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_108);
      InstrumentLeg_108.insert(LegPriceUnitOfMeasure_108.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_108;
      LegPriceUnitOfMeasureQty_108.setString("11718098");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_108);
      InstrumentLeg_108.insert(LegPriceUnitOfMeasureQty_108.getString());
      FIX::LegProduct LegProduct_108(1224786265);
      noLegs_0_1_2.set(LegProduct_108);
      InstrumentLeg_108.insert(LegProduct_108.getString());
      FIX::LegPutOrCall LegPutOrCall_108(1040278246);
      noLegs_0_1_2.set(LegPutOrCall_108);
      InstrumentLeg_108.insert(LegPutOrCall_108.getString());
      FIX::LegRatioQty LegRatioQty_108;
      LegRatioQty_108.setString("8634703");
      noLegs_0_1_2.set(LegRatioQty_108);
      InstrumentLeg_108.insert(LegRatioQty_108.getString());
      FIX::LegRedemptionDate LegRedemptionDate_108("LOCALMKTDATE_1896646396");
      noLegs_0_1_2.set(LegRedemptionDate_108);
      InstrumentLeg_108.insert(LegRedemptionDate_108.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_108("STRING_1581593125");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_108);
      InstrumentLeg_108.insert(LegRepoCollateralSecurityType_108.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_108;
      LegRepurchaseRate_108.setString("21.960000");
      noLegs_0_1_2.set(LegRepurchaseRate_108);
      InstrumentLeg_108.insert(LegRepurchaseRate_108.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_108(98449288);
      noLegs_0_1_2.set(LegRepurchaseTerm_108);
      InstrumentLeg_108.insert(LegRepurchaseTerm_108.getString());
      FIX::LegSecurityDesc LegSecurityDesc_108("STRING_692050607");
      noLegs_0_1_2.set(LegSecurityDesc_108);
      InstrumentLeg_108.insert(LegSecurityDesc_108.getString());
      FIX::LegSecurityExchange LegSecurityExchange_108("EXCHANGE_1988154784");
      noLegs_0_1_2.set(LegSecurityExchange_108);
      InstrumentLeg_108.insert(LegSecurityExchange_108.getString());
      FIX::LegSecurityID LegSecurityID_108("STRING_825759356");
      noLegs_0_1_2.set(LegSecurityID_108);
      InstrumentLeg_108.insert(LegSecurityID_108.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_108("STRING_834854813");
      noLegs_0_1_2.set(LegSecurityIDSource_108);
      InstrumentLeg_108.insert(LegSecurityIDSource_108.getString());
      FIX::LegSecuritySubType LegSecuritySubType_108("STRING_1838558327");
      noLegs_0_1_2.set(LegSecuritySubType_108);
      InstrumentLeg_108.insert(LegSecuritySubType_108.getString());
      FIX::LegSecurityType LegSecurityType_108("STRING_480619341");
      noLegs_0_1_2.set(LegSecurityType_108);
      InstrumentLeg_108.insert(LegSecurityType_108.getString());
      FIX::LegSide LegSide_108('1');
      noLegs_0_1_2.set(LegSide_108);
      InstrumentLeg_108.insert(LegSide_108.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_108("STRING_435389564");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_108);
      InstrumentLeg_108.insert(LegStateOrProvinceOfIssue_108.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_108("EUR");
      noLegs_0_1_2.set(LegStrikeCurrency_108);
      InstrumentLeg_108.insert(LegStrikeCurrency_108.getString());
      FIX::LegStrikePrice LegStrikePrice_108;
      LegStrikePrice_108.setString("12963258");
      noLegs_0_1_2.set(LegStrikePrice_108);
      InstrumentLeg_108.insert(LegStrikePrice_108.getString());
      FIX::LegSymbol LegSymbol_108("STRING_914305980");
      noLegs_0_1_2.set(LegSymbol_108);
      InstrumentLeg_108.insert(LegSymbol_108.getString());
      FIX::LegSymbolSfx LegSymbolSfx_108("STRING_1819116037");
      noLegs_0_1_2.set(LegSymbolSfx_108);
      InstrumentLeg_108.insert(LegSymbolSfx_108.getString());
      FIX::LegTimeUnit LegTimeUnit_108("STRING_1200848759");
      noLegs_0_1_2.set(LegTimeUnit_108);
      InstrumentLeg_108.insert(LegTimeUnit_108.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_108("STRING_1371601801");
      noLegs_0_1_2.set(LegUnitOfMeasure_108);
      InstrumentLeg_108.insert(LegUnitOfMeasure_108.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_108;
      LegUnitOfMeasureQty_108.setString("15808113");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_108);
      InstrumentLeg_108.insert(LegUnitOfMeasureQty_108.getString());
      all_values.push_back(InstrumentLeg_108);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_219;
        FIX::LegSecurityAltID LegSecurityAltID_219("STRING_136955652");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_219);
        LegSecAltIDGrp_NoLegSecurityAltID_219.insert(LegSecurityAltID_219.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_219("STRING_899509298");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_219);
        LegSecAltIDGrp_NoLegSecurityAltID_219.insert(LegSecurityAltIDSource_219.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_219);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_220;
        FIX::LegSecurityAltID LegSecurityAltID_220("STRING_1814770392");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_220);
        LegSecAltIDGrp_NoLegSecurityAltID_220.insert(LegSecurityAltID_220.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_220("STRING_2033282074");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_220);
        LegSecAltIDGrp_NoLegSecurityAltID_220.insert(LegSecurityAltIDSource_220.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_220);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_5;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_5("USD");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurveCurrency_5.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_5("STRING_1057608267");
      noLegs_0_1_2.set(LegBenchmarkCurveName_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurveName_5.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_5("STRING_1537103091");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurvePoint_5.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_5;
      LegBenchmarkPrice_5.setString("8194013");
      noLegs_0_1_2.set(LegBenchmarkPrice_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkPrice_5.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_5(1921078577);
      noLegs_0_1_2.set(LegBenchmarkPriceType_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkPriceType_5.getString());
      all_values.push_back(LegBenchmarkCurveData_5);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_22;
        FIX::LegStipulationType LegStipulationType_22("STRING_253510819");
        noLegStipulations_0_2_2_0.set(LegStipulationType_22);
        LegStipulations_NoLegStipulations_22.insert(LegStipulationType_22.getString());
        FIX::LegStipulationValue LegStipulationValue_22("STRING_1831687125");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_22);
        LegStipulations_NoLegStipulations_22.insert(LegStipulationValue_22.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_22);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_23;
        FIX::LegStipulationType LegStipulationType_23("STRING_1384715127");
        noLegStipulations_0_2_2_1.set(LegStipulationType_23);
        LegStipulations_NoLegStipulations_23.insert(LegStipulationType_23.getString());
        FIX::LegStipulationValue LegStipulationValue_23("STRING_945561427");
        noLegStipulations_0_2_2_1.set(LegStipulationValue_23);
        LegStipulations_NoLegStipulations_23.insert(LegStipulationValue_23.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_23);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_24;
        FIX::LegStipulationType LegStipulationType_24("STRING_1672358261");
        noLegStipulations_0_2_2_2.set(LegStipulationType_24);
        LegStipulations_NoLegStipulations_24.insert(LegStipulationType_24.getString());
        FIX::LegStipulationValue LegStipulationValue_24("STRING_62990836");
        noLegStipulations_0_2_2_2.set(LegStipulationValue_24);
        LegStipulations_NoLegStipulations_24.insert(LegStipulationValue_24.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_24);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_105;
        FIX::NestedPartyID NestedPartyID_105("STRING_1363432941");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyID_105.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_105('5');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyIDSource_105.getString());
        FIX::NestedPartyRole NestedPartyRole_105(844392572);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyRole_105.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_105);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_227;
          FIX::NestedPartySubID NestedPartySubID_227("STRING_1063571200");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_227);
          NstdPtysSubGrp_NoNestedPartySubIDs_227.insert(NestedPartySubID_227.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_227(1733894127);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_227);
          NstdPtysSubGrp_NoNestedPartySubIDs_227.insert(NestedPartySubIDType_227.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_227);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_228;
          FIX::NestedPartySubID NestedPartySubID_228("STRING_947664678");
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubID_228);
          NstdPtysSubGrp_NoNestedPartySubIDs_228.insert(NestedPartySubID_228.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_228(1977877180);
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubIDType_228);
          NstdPtysSubGrp_NoNestedPartySubIDs_228.insert(NestedPartySubIDType_228.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_228);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_229;
          FIX::NestedPartySubID NestedPartySubID_229("STRING_1405526516");
          noNestedPartySubIDs_0_2_0_3_2.set(NestedPartySubID_229);
          NstdPtysSubGrp_NoNestedPartySubIDs_229.insert(NestedPartySubID_229.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_229(1029789);
          noNestedPartySubIDs_0_2_0_3_2.set(NestedPartySubIDType_229);
          NstdPtysSubGrp_NoNestedPartySubIDs_229.insert(NestedPartySubIDType_229.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_229);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_2);
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
      multiset<string> RateSource_NoRateSources_15;
      FIX::RateSource RateSource_23(2);
      noRateSources_0_1_0.set(RateSource_23);
      RateSource_NoRateSources_15.insert(RateSource_23.getString());
      FIX::RateSourceType RateSourceType_15(0);
      noRateSources_0_1_0.set(RateSourceType_15);
      RateSource_NoRateSources_15.insert(RateSourceType_15.getString());
      FIX::ReferencePage ReferencePage_15("STRING_1338950985");
      noRateSources_0_1_0.set(ReferencePage_15);
      RateSource_NoRateSources_15.insert(ReferencePage_15.getString());
      all_values.push_back(RateSource_NoRateSources_15);
      all_compo_names.insert("RateSource.NoRateSources");

      noRelatedSym_0_0.addGroup(noRateSources_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_22;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_22("CHF");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurveCurrency_22.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_22("STRING_Treasury");
    noRelatedSym_0_0.set(BenchmarkCurveName_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurveName_22.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_22("STRING_2050680310");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurvePoint_22.getString());
    FIX::BenchmarkPrice BenchmarkPrice_22;
    BenchmarkPrice_22.setString("10862688");
    noRelatedSym_0_0.set(BenchmarkPrice_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkPrice_22.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_22(134874031);
    noRelatedSym_0_0.set(BenchmarkPriceType_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkPriceType_22.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_22("STRING_1440299753");
    noRelatedSym_0_0.set(BenchmarkSecurityID_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkSecurityID_22.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_22("STRING_1905670156");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkSecurityIDSource_22.getString());
    FIX::Spread Spread_22;
    Spread_22.setString("20559526");
    noRelatedSym_0_0.set(Spread_22);
    SpreadOrBenchmarkCurveData_22.insert(Spread_22.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_22);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_34;
      FIX::StipulationType StipulationType_34("STRING_WAM");
      noStipulations_0_1_0.set(StipulationType_34);
      Stipulations_NoStipulations_34.insert(StipulationType_34.getString());
      FIX::StipulationValue StipulationValue_34("STRING_1740156086");
      noStipulations_0_1_0.set(StipulationValue_34);
      Stipulations_NoStipulations_34.insert(StipulationValue_34.getString());
      all_values.push_back(Stipulations_NoStipulations_34);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_35;
      FIX::StipulationType StipulationType_35("STRING_PURPOSE");
      noStipulations_0_1_1.set(StipulationType_35);
      Stipulations_NoStipulations_35.insert(StipulationType_35.getString());
      FIX::StipulationValue StipulationValue_35("STRING_957258754");
      noStipulations_0_1_1.set(StipulationValue_35);
      Stipulations_NoStipulations_35.insert(StipulationValue_35.getString());
      all_values.push_back(Stipulations_NoStipulations_35);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_36;
      FIX::StipulationType StipulationType_36("STRING_BROKERCREDIT");
      noStipulations_0_1_2.set(StipulationType_36);
      Stipulations_NoStipulations_36.insert(StipulationType_36.getString());
      FIX::StipulationValue StipulationValue_36("STRING_2026787908");
      noStipulations_0_1_2.set(StipulationValue_36);
      Stipulations_NoStipulations_36.insert(StipulationValue_36.getString());
      all_values.push_back(Stipulations_NoStipulations_36);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_99;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_99("DATA_480979992");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingIssuer_99.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_99(422914437);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingIssuerLen_99.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_99("DATA_1434583919");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingSecurityDesc_99.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_99(132318849);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_99);
      UnderlyingInstrument_99.insert(EncodedUnderlyingSecurityDescLen_99.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_99;
      UnderlyingAdjustedQuantity_99.setString("14864856");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_99);
      UnderlyingInstrument_99.insert(UnderlyingAdjustedQuantity_99.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_99;
      UnderlyingAllocationPercent_99.setString("43.980000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_99);
      UnderlyingInstrument_99.insert(UnderlyingAllocationPercent_99.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_99;
      UnderlyingAttachmentPoint_99.setString("35.280000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_99);
      UnderlyingInstrument_99.insert(UnderlyingAttachmentPoint_99.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_99("STRING_1316879170");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_99);
      UnderlyingInstrument_99.insert(UnderlyingCFICode_99.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_99("STRING_279037266");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_99);
      UnderlyingInstrument_99.insert(UnderlyingCPProgram_99.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_99("STRING_1081013317");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_99);
      UnderlyingInstrument_99.insert(UnderlyingCPRegType_99.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_99;
      UnderlyingCapValue_99.setString("3713908");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_99);
      UnderlyingInstrument_99.insert(UnderlyingCapValue_99.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_99;
      UnderlyingCashAmount_99.setString("11178914");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_99);
      UnderlyingInstrument_99.insert(UnderlyingCashAmount_99.getString());
      FIX::UnderlyingCashType UnderlyingCashType_99("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_99);
      UnderlyingInstrument_99.insert(UnderlyingCashType_99.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_99;
      UnderlyingContractMultiplier_99.setString("17103418");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_99);
      UnderlyingInstrument_99.insert(UnderlyingContractMultiplier_99.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_99(708771289);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_99);
      UnderlyingInstrument_99.insert(UnderlyingContractMultiplierUnit_99.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_99("COUNTRY_1880534359");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingCountryOfIssue_99.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_99("LOCALMKTDATE_787607604");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_99);
      UnderlyingInstrument_99.insert(UnderlyingCouponPaymentDate_99.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_99;
      UnderlyingCouponRate_99.setString("79.510000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_99);
      UnderlyingInstrument_99.insert(UnderlyingCouponRate_99.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_99("STRING_819319524");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_99);
      UnderlyingInstrument_99.insert(UnderlyingCreditRating_99.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_99("GBP");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_99);
      UnderlyingInstrument_99.insert(UnderlyingCurrency_99.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_99;
      UnderlyingCurrentValue_99.setString("5775060");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_99);
      UnderlyingInstrument_99.insert(UnderlyingCurrentValue_99.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_99;
      UnderlyingDetachmentPoint_99.setString("5.960000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_99);
      UnderlyingInstrument_99.insert(UnderlyingDetachmentPoint_99.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_99;
      UnderlyingDirtyPrice_99.setString("4838660");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_99);
      UnderlyingInstrument_99.insert(UnderlyingDirtyPrice_99.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_99;
      UnderlyingEndPrice_99.setString("5892033");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_99);
      UnderlyingInstrument_99.insert(UnderlyingEndPrice_99.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_99;
      UnderlyingEndValue_99.setString("4236230");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_99);
      UnderlyingInstrument_99.insert(UnderlyingEndValue_99.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_99(300179424);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_99);
      UnderlyingInstrument_99.insert(UnderlyingExerciseStyle_99.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_99;
      UnderlyingFXRate_99.setString("15464621");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_99);
      UnderlyingInstrument_99.insert(UnderlyingFXRate_99.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_99('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_99);
      UnderlyingInstrument_99.insert(UnderlyingFXRateCalc_99.getString());
      FIX::UnderlyingFactor UnderlyingFactor_99;
      UnderlyingFactor_99.setString("1794836");
      noUnderlyings_0_1_0.set(UnderlyingFactor_99);
      UnderlyingInstrument_99.insert(UnderlyingFactor_99.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_99(2136653461);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_99);
      UnderlyingInstrument_99.insert(UnderlyingFlowScheduleType_99.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_99("STRING_22150078");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_99);
      UnderlyingInstrument_99.insert(UnderlyingInstrRegistry_99.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_99("LOCALMKTDATE_602398121");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_99);
      UnderlyingInstrument_99.insert(UnderlyingIssueDate_99.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_99("STRING_1423753732");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_99);
      UnderlyingInstrument_99.insert(UnderlyingIssuer_99.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_99("STRING_154468927");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingLocaleOfIssue_99.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_99("LOCALMKTDATE_2088883759");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityDate_99.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_99("MONTHYEAR_297264482");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityMonthYear_99.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_99("TZTIMEONLY_1234452455");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_99);
      UnderlyingInstrument_99.insert(UnderlyingMaturityTime_99.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_99;
      UnderlyingNotionalPercentageOutstanding_99.setString("92.810000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_99);
      UnderlyingInstrument_99.insert(UnderlyingNotionalPercentageOutstanding_99.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_99('5');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_99);
      UnderlyingInstrument_99.insert(UnderlyingOptAttribute_99.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_99;
      UnderlyingOriginalNotionalPercentageOutstanding_99.setString("21.250000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_99);
      UnderlyingInstrument_99.insert(UnderlyingOriginalNotionalPercentageOutstanding_99.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_99("STRING_1629670136");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_99);
      UnderlyingInstrument_99.insert(UnderlyingPriceUnitOfMeasure_99.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_99;
      UnderlyingPriceUnitOfMeasureQty_99.setString("16941932");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_99);
      UnderlyingInstrument_99.insert(UnderlyingPriceUnitOfMeasureQty_99.getString());
      FIX::UnderlyingProduct UnderlyingProduct_99(741370767);
      noUnderlyings_0_1_0.set(UnderlyingProduct_99);
      UnderlyingInstrument_99.insert(UnderlyingProduct_99.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_99(1192528329);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_99);
      UnderlyingInstrument_99.insert(UnderlyingPutOrCall_99.getString());
      FIX::UnderlyingPx UnderlyingPx_99;
      UnderlyingPx_99.setString("2554808");
      noUnderlyings_0_1_0.set(UnderlyingPx_99);
      UnderlyingInstrument_99.insert(UnderlyingPx_99.getString());
      FIX::UnderlyingQty UnderlyingQty_99;
      UnderlyingQty_99.setString("4744214");
      noUnderlyings_0_1_0.set(UnderlyingQty_99);
      UnderlyingInstrument_99.insert(UnderlyingQty_99.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_99("LOCALMKTDATE_1980135934");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_99);
      UnderlyingInstrument_99.insert(UnderlyingRedemptionDate_99.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_99("STRING_867448793");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_99);
      UnderlyingInstrument_99.insert(UnderlyingRepoCollateralSecurityType_99.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_99;
      UnderlyingRepurchaseRate_99.setString("10.020000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_99);
      UnderlyingInstrument_99.insert(UnderlyingRepurchaseRate_99.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_99(755133921);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_99);
      UnderlyingInstrument_99.insert(UnderlyingRepurchaseTerm_99.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_99("STRING_772232849");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_99);
      UnderlyingInstrument_99.insert(UnderlyingRestructuringType_99.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_99("STRING_1871247035");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityDesc_99.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_99("EXCHANGE_1586084517");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityExchange_99.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_99("STRING_1256098849");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityID_99.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_99("STRING_312966747");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityIDSource_99.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_99("STRING_2009707551");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_99);
      UnderlyingInstrument_99.insert(UnderlyingSecuritySubType_99.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_99("STRING_1556278274");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_99);
      UnderlyingInstrument_99.insert(UnderlyingSecurityType_99.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_99("STRING_1859428861");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_99);
      UnderlyingInstrument_99.insert(UnderlyingSeniority_99.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_99("STRING_1550877637");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_99);
      UnderlyingInstrument_99.insert(UnderlyingSettlMethod_99.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_99(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_99);
      UnderlyingInstrument_99.insert(UnderlyingSettlementType_99.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_99;
      UnderlyingStartValue_99.setString("18485986");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_99);
      UnderlyingInstrument_99.insert(UnderlyingStartValue_99.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_99("STRING_1573027715");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_99);
      UnderlyingInstrument_99.insert(UnderlyingStateOrProvinceOfIssue_99.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_99("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_99);
      UnderlyingInstrument_99.insert(UnderlyingStrikeCurrency_99.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_99;
      UnderlyingStrikePrice_99.setString("17274966");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_99);
      UnderlyingInstrument_99.insert(UnderlyingStrikePrice_99.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_99("STRING_132076543");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_99);
      UnderlyingInstrument_99.insert(UnderlyingSymbol_99.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_99("STRING_1422133242");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_99);
      UnderlyingInstrument_99.insert(UnderlyingSymbolSfx_99.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_99("STRING_814465450");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_99);
      UnderlyingInstrument_99.insert(UnderlyingTimeUnit_99.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_99("STRING_1390355824");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_99);
      UnderlyingInstrument_99.insert(UnderlyingUnitOfMeasure_99.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_99;
      UnderlyingUnitOfMeasureQty_99.setString("19984349");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_99);
      UnderlyingInstrument_99.insert(UnderlyingUnitOfMeasureQty_99.getString());
      all_values.push_back(UnderlyingInstrument_99);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_197;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_197("STRING_872542312");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltID_197.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_197("STRING_1545144543");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_197);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_197.insert(UnderlyingSecurityAltIDSource_197.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_200;
        FIX::UnderlyingStipType UnderlyingStipType_200("STRING_2065070642");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_200);
        UnderlyingStipulations_NoUnderlyingStips_200.insert(UnderlyingStipType_200.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_200("STRING_1800625385");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_200);
        UnderlyingStipulations_NoUnderlyingStips_200.insert(UnderlyingStipValue_200.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_200);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_184;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_184("STRING_1897722928");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyID_184.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_184('5');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyIDSource_184.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_184(1344497174);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_184);
        UndlyInstrumentParties_NoUndlyInstrumentParties_184.insert(UnderlyingInstrumentPartyRole_184.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_184);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_369("STRING_1292823379");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_369);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369.insert(UnderlyingInstrumentPartySubID_369.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_369(1068260561);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_369);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369.insert(UnderlyingInstrumentPartySubIDType_369.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_370("STRING_2091457719");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_370);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370.insert(UnderlyingInstrumentPartySubID_370.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_370(401438581);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_370);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370.insert(UnderlyingInstrumentPartySubIDType_370.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_371("STRING_1381227308");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_371);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371.insert(UnderlyingInstrumentPartySubID_371.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_371(1953681622);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_371);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371.insert(UnderlyingInstrumentPartySubIDType_371.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_17;
    FIX::Yield Yield_17;
    Yield_17.setString("68.550000");
    noRelatedSym_0_0.set(Yield_17);
    YieldData_17.insert(Yield_17.getString());
    FIX::YieldCalcDate YieldCalcDate_17("LOCALMKTDATE_1093172522");
    noRelatedSym_0_0.set(YieldCalcDate_17);
    YieldData_17.insert(YieldCalcDate_17.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_17("LOCALMKTDATE_1357075611");
    noRelatedSym_0_0.set(YieldRedemptionDate_17);
    YieldData_17.insert(YieldRedemptionDate_17.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_17;
    YieldRedemptionPrice_17.setString("15459951");
    noRelatedSym_0_0.set(YieldRedemptionPrice_17);
    YieldData_17.insert(YieldRedemptionPrice_17.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_17(794287549);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_17);
    YieldData_17.insert(YieldRedemptionPriceType_17.getString());
    FIX::YieldType YieldType_17("STRING_SIMPLE");
    noRelatedSym_0_0.set(YieldType_17);
    YieldData_17.insert(YieldType_17.getString());
    all_values.push_back(YieldData_17);
    all_compo_names.insert("YieldData");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_1;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_1;
    FIX::Account Account_36("STRING_1736671597");
    noRelatedSym_0_1.set(Account_36);
    QuotReqGrp_NoRelatedSym_1.insert(Account_36.getString());
    FIX::AccountType AccountType_31(8);
    noRelatedSym_0_1.set(AccountType_31);
    QuotReqGrp_NoRelatedSym_1.insert(AccountType_31.getString());
    FIX::AcctIDSource AcctIDSource_29(99);
    noRelatedSym_0_1.set(AcctIDSource_29);
    QuotReqGrp_NoRelatedSym_1.insert(AcctIDSource_29.getString());
    FIX::Currency Currency_57("GBP");
    noRelatedSym_0_1.set(Currency_57);
    QuotReqGrp_NoRelatedSym_1.insert(Currency_57.getString());
    FIX::ExpireTime ExpireTime_16(FIX::UTCTIMESTAMP(4, 45, 10, 1, 5, 2010));
    noRelatedSym_0_1.set(ExpireTime_16);
    QuotReqGrp_NoRelatedSym_1.insert(ExpireTime_16.getString());
    FIX::MinQty MinQty_15;
    MinQty_15.setString("19017496");
    noRelatedSym_0_1.set(MinQty_15);
    QuotReqGrp_NoRelatedSym_1.insert(MinQty_15.getString());
    FIX::OrdType OrdType_57('F');
    noRelatedSym_0_1.set(OrdType_57);
    QuotReqGrp_NoRelatedSym_1.insert(OrdType_57.getString());
    FIX::OrderQty2 OrderQty2_22;
    OrderQty2_22.setString("17866365");
    noRelatedSym_0_1.set(OrderQty2_22);
    QuotReqGrp_NoRelatedSym_1.insert(OrderQty2_22.getString());
    FIX::PrevClosePx PrevClosePx_10;
    PrevClosePx_10.setString("16519889");
    noRelatedSym_0_1.set(PrevClosePx_10);
    QuotReqGrp_NoRelatedSym_1.insert(PrevClosePx_10.getString());
    FIX::Price Price_22;
    Price_22.setString("6161504");
    noRelatedSym_0_1.set(Price_22);
    QuotReqGrp_NoRelatedSym_1.insert(Price_22.getString());
    FIX::Price2 Price2_6;
    Price2_6.setString("9836500");
    noRelatedSym_0_1.set(Price2_6);
    QuotReqGrp_NoRelatedSym_1.insert(Price2_6.getString());
    FIX::PriceType PriceType_38(3);
    noRelatedSym_0_1.set(PriceType_38);
    QuotReqGrp_NoRelatedSym_1.insert(PriceType_38.getString());
    FIX::QtyType QtyType_27(0);
    noRelatedSym_0_1.set(QtyType_27);
    QuotReqGrp_NoRelatedSym_1.insert(QtyType_27.getString());
    FIX::QuotePriceType QuotePriceType_1(3);
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
    FIX::SettlDate SettlDate_47("LOCALMKTDATE_2120645576");
    noRelatedSym_0_1.set(SettlDate_47);
    QuotReqGrp_NoRelatedSym_1.insert(SettlDate_47.getString());
    FIX::SettlDate2 SettlDate2_22("LOCALMKTDATE_231343186");
    noRelatedSym_0_1.set(SettlDate2_22);
    QuotReqGrp_NoRelatedSym_1.insert(SettlDate2_22.getString());
    FIX::SettlType SettlType_27("STRING_9");
    noRelatedSym_0_1.set(SettlType_27);
    QuotReqGrp_NoRelatedSym_1.insert(SettlType_27.getString());
    FIX::Side Side_43('6');
    noRelatedSym_0_1.set(Side_43);
    QuotReqGrp_NoRelatedSym_1.insert(Side_43.getString());
    FIX::TradeOriginationDate TradeOriginationDate_21("LOCALMKTDATE_1025630735");
    noRelatedSym_0_1.set(TradeOriginationDate_21);
    QuotReqGrp_NoRelatedSym_1.insert(TradeOriginationDate_21.getString());
    FIX::TradingSessionID TradingSessionID_83("STRING_5");
    noRelatedSym_0_1.set(TradingSessionID_83);
    QuotReqGrp_NoRelatedSym_1.insert(TradingSessionID_83.getString());
    FIX::TradingSessionSubID TradingSessionSubID_83("STRING_2");
    noRelatedSym_0_1.set(TradingSessionSubID_83);
    QuotReqGrp_NoRelatedSym_1.insert(TradingSessionSubID_83.getString());
    FIX::TransactTime TransactTime_58(FIX::UTCTIMESTAMP(1, 35, 58, 0, 5, 2005));
    noRelatedSym_0_1.set(TransactTime_58);
    QuotReqGrp_NoRelatedSym_1.insert(TransactTime_58.getString());
    FIX::ValidUntilTime ValidUntilTime_17(FIX::UTCTIMESTAMP(17, 16, 34, 24, 7, 2012));
    noRelatedSym_0_1.set(ValidUntilTime_17);
    QuotReqGrp_NoRelatedSym_1.insert(ValidUntilTime_17.getString());
    all_values.push_back(QuotReqGrp_NoRelatedSym_1);
    all_compo_names.insert("QuotReqGrp.NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_20;
    FIX::AgreementCurrency AgreementCurrency_20("JPY");
    noRelatedSym_0_1.set(AgreementCurrency_20);
    FinancingDetails_20.insert(AgreementCurrency_20.getString());
    FIX::AgreementDate AgreementDate_20("LOCALMKTDATE_1515254740");
    noRelatedSym_0_1.set(AgreementDate_20);
    FinancingDetails_20.insert(AgreementDate_20.getString());
    FIX::AgreementDesc AgreementDesc_20("STRING_1046558519");
    noRelatedSym_0_1.set(AgreementDesc_20);
    FinancingDetails_20.insert(AgreementDesc_20.getString());
    FIX::AgreementID AgreementID_20("STRING_1804001462");
    noRelatedSym_0_1.set(AgreementID_20);
    FinancingDetails_20.insert(AgreementID_20.getString());
    FIX::DeliveryType DeliveryType_20(0);
    noRelatedSym_0_1.set(DeliveryType_20);
    FinancingDetails_20.insert(DeliveryType_20.getString());
    FIX::EndDate EndDate_20("LOCALMKTDATE_1000411047");
    noRelatedSym_0_1.set(EndDate_20);
    FinancingDetails_20.insert(EndDate_20.getString());
    FIX::MarginRatio MarginRatio_20;
    MarginRatio_20.setString("1.830000");
    noRelatedSym_0_1.set(MarginRatio_20);
    FinancingDetails_20.insert(MarginRatio_20.getString());
    FIX::StartDate StartDate_20("LOCALMKTDATE_557852409");
    noRelatedSym_0_1.set(StartDate_20);
    FinancingDetails_20.insert(StartDate_20.getString());
    FIX::TerminationType TerminationType_20(2);
    noRelatedSym_0_1.set(TerminationType_20);
    FinancingDetails_20.insert(TerminationType_20.getString());
    all_values.push_back(FinancingDetails_20);
    all_compo_names.insert("FinancingDetails");

    // Instrument
    multiset<string> Instrument_70;
    FIX::AttachmentPoint AttachmentPoint_70;
    AttachmentPoint_70.setString("21.110000");
    noRelatedSym_0_1.set(AttachmentPoint_70);
    Instrument_70.insert(AttachmentPoint_70.getString());
    FIX::CFICode CFICode_70("STRING_789195595");
    noRelatedSym_0_1.set(CFICode_70);
    Instrument_70.insert(CFICode_70.getString());
    FIX::CPProgram CPProgram_70(1);
    noRelatedSym_0_1.set(CPProgram_70);
    Instrument_70.insert(CPProgram_70.getString());
    FIX::CPRegType CPRegType_70("STRING_1311765557");
    noRelatedSym_0_1.set(CPRegType_70);
    Instrument_70.insert(CPRegType_70.getString());
    FIX::CapPrice CapPrice_70;
    CapPrice_70.setString("18148263");
    noRelatedSym_0_1.set(CapPrice_70);
    Instrument_70.insert(CapPrice_70.getString());
    FIX::ContractMultiplier ContractMultiplier_70;
    ContractMultiplier_70.setString("16298498");
    noRelatedSym_0_1.set(ContractMultiplier_70);
    Instrument_70.insert(ContractMultiplier_70.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_70(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_70);
    Instrument_70.insert(ContractMultiplierUnit_70.getString());
    FIX::ContractSettlMonth ContractSettlMonth_70("MONTHYEAR_464646079");
    noRelatedSym_0_1.set(ContractSettlMonth_70);
    Instrument_70.insert(ContractSettlMonth_70.getString());
    FIX::CountryOfIssue CountryOfIssue_70("COUNTRY_1744744623");
    noRelatedSym_0_1.set(CountryOfIssue_70);
    Instrument_70.insert(CountryOfIssue_70.getString());
    FIX::CouponPaymentDate CouponPaymentDate_70("LOCALMKTDATE_1102236487");
    noRelatedSym_0_1.set(CouponPaymentDate_70);
    Instrument_70.insert(CouponPaymentDate_70.getString());
    FIX::CouponRate CouponRate_70;
    CouponRate_70.setString("17.290000");
    noRelatedSym_0_1.set(CouponRate_70);
    Instrument_70.insert(CouponRate_70.getString());
    FIX::CreditRating CreditRating_70("STRING_889253915");
    noRelatedSym_0_1.set(CreditRating_70);
    Instrument_70.insert(CreditRating_70.getString());
    FIX::DatedDate DatedDate_70("LOCALMKTDATE_895982691");
    noRelatedSym_0_1.set(DatedDate_70);
    Instrument_70.insert(DatedDate_70.getString());
    FIX::DetachmentPoint DetachmentPoint_70;
    DetachmentPoint_70.setString("46.250000");
    noRelatedSym_0_1.set(DetachmentPoint_70);
    Instrument_70.insert(DetachmentPoint_70.getString());
    FIX::EncodedIssuer EncodedIssuer_70("DATA_45825257");
    noRelatedSym_0_1.set(EncodedIssuer_70);
    Instrument_70.insert(EncodedIssuer_70.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_70(526407876);
    noRelatedSym_0_1.set(EncodedIssuerLen_70);
    Instrument_70.insert(EncodedIssuerLen_70.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_70("DATA_379972013");
    noRelatedSym_0_1.set(EncodedSecurityDesc_70);
    Instrument_70.insert(EncodedSecurityDesc_70.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_70(938276991);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_70);
    Instrument_70.insert(EncodedSecurityDescLen_70.getString());
    FIX::ExerciseStyle ExerciseStyle_70(0);
    noRelatedSym_0_1.set(ExerciseStyle_70);
    Instrument_70.insert(ExerciseStyle_70.getString());
    FIX::Factor Factor_70;
    Factor_70.setString("18063329");
    noRelatedSym_0_1.set(Factor_70);
    Instrument_70.insert(Factor_70.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_70(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_70);
    Instrument_70.insert(FlexProductEligibilityIndicator_70.getString());
    FIX::FlexibleIndicator FlexibleIndicator_70(false);
    noRelatedSym_0_1.set(FlexibleIndicator_70);
    Instrument_70.insert(FlexibleIndicator_70.getString());
    FIX::FloorPrice FloorPrice_70;
    FloorPrice_70.setString("17013606");
    noRelatedSym_0_1.set(FloorPrice_70);
    Instrument_70.insert(FloorPrice_70.getString());
    FIX::FlowScheduleType FlowScheduleType_70(4);
    noRelatedSym_0_1.set(FlowScheduleType_70);
    Instrument_70.insert(FlowScheduleType_70.getString());
    FIX::InstrRegistry InstrRegistry_70("STRING_1994337619");
    noRelatedSym_0_1.set(InstrRegistry_70);
    Instrument_70.insert(InstrRegistry_70.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_70('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_70);
    Instrument_70.insert(InstrmtAssignmentMethod_70.getString());
    FIX::InterestAccrualDate InterestAccrualDate_70("LOCALMKTDATE_109850830");
    noRelatedSym_0_1.set(InterestAccrualDate_70);
    Instrument_70.insert(InterestAccrualDate_70.getString());
    FIX::IssueDate IssueDate_70("LOCALMKTDATE_847265018");
    noRelatedSym_0_1.set(IssueDate_70);
    Instrument_70.insert(IssueDate_70.getString());
    FIX::Issuer Issuer_70("STRING_1177324951");
    noRelatedSym_0_1.set(Issuer_70);
    Instrument_70.insert(Issuer_70.getString());
    FIX::ListMethod ListMethod_70(1);
    noRelatedSym_0_1.set(ListMethod_70);
    Instrument_70.insert(ListMethod_70.getString());
    FIX::LocaleOfIssue LocaleOfIssue_70("STRING_1607726567");
    noRelatedSym_0_1.set(LocaleOfIssue_70);
    Instrument_70.insert(LocaleOfIssue_70.getString());
    FIX::MaturityDate MaturityDate_70("LOCALMKTDATE_969933415");
    noRelatedSym_0_1.set(MaturityDate_70);
    Instrument_70.insert(MaturityDate_70.getString());
    FIX::MaturityMonthYear MaturityMonthYear_70("MONTHYEAR_1456898835");
    noRelatedSym_0_1.set(MaturityMonthYear_70);
    Instrument_70.insert(MaturityMonthYear_70.getString());
    FIX::MaturityTime MaturityTime_70("TZTIMEONLY_1337830581");
    noRelatedSym_0_1.set(MaturityTime_70);
    Instrument_70.insert(MaturityTime_70.getString());
    FIX::MinPriceIncrement MinPriceIncrement_70;
    MinPriceIncrement_70.setString("1342153");
    noRelatedSym_0_1.set(MinPriceIncrement_70);
    Instrument_70.insert(MinPriceIncrement_70.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_70;
    MinPriceIncrementAmount_70.setString("11242415");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_70);
    Instrument_70.insert(MinPriceIncrementAmount_70.getString());
    FIX::NTPositionLimit NTPositionLimit_70(820196740);
    noRelatedSym_0_1.set(NTPositionLimit_70);
    Instrument_70.insert(NTPositionLimit_70.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_70;
    NotionalPercentageOutstanding_70.setString("22.760000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_70);
    Instrument_70.insert(NotionalPercentageOutstanding_70.getString());
    FIX::OptAttribute OptAttribute_70('1');
    noRelatedSym_0_1.set(OptAttribute_70);
    Instrument_70.insert(OptAttribute_70.getString());
    FIX::OptPayoutAmount OptPayoutAmount_70;
    OptPayoutAmount_70.setString("4174577");
    noRelatedSym_0_1.set(OptPayoutAmount_70);
    Instrument_70.insert(OptPayoutAmount_70.getString());
    FIX::OptPayoutType OptPayoutType_70(2);
    noRelatedSym_0_1.set(OptPayoutType_70);
    Instrument_70.insert(OptPayoutType_70.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_70;
    OriginalNotionalPercentageOutstanding_70.setString("93.260000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_70);
    Instrument_70.insert(OriginalNotionalPercentageOutstanding_70.getString());
    FIX::Pool Pool_70("STRING_1306711631");
    noRelatedSym_0_1.set(Pool_70);
    Instrument_70.insert(Pool_70.getString());
    FIX::PositionLimit PositionLimit_70(257577807);
    noRelatedSym_0_1.set(PositionLimit_70);
    Instrument_70.insert(PositionLimit_70.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_70("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_70);
    Instrument_70.insert(PriceQuoteMethod_70.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_70("STRING_1352536888");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_70);
    Instrument_70.insert(PriceUnitOfMeasure_70.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_70;
    PriceUnitOfMeasureQty_70.setString("7839856");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_70);
    Instrument_70.insert(PriceUnitOfMeasureQty_70.getString());
    FIX::Product Product_72(2);
    noRelatedSym_0_1.set(Product_72);
    Instrument_70.insert(Product_72.getString());
    FIX::ProductComplex ProductComplex_70("STRING_143330232");
    noRelatedSym_0_1.set(ProductComplex_70);
    Instrument_70.insert(ProductComplex_70.getString());
    FIX::PutOrCall PutOrCall_70(0);
    noRelatedSym_0_1.set(PutOrCall_70);
    Instrument_70.insert(PutOrCall_70.getString());
    FIX::RedemptionDate RedemptionDate_70("LOCALMKTDATE_985151595");
    noRelatedSym_0_1.set(RedemptionDate_70);
    Instrument_70.insert(RedemptionDate_70.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_70("STRING_1613211873");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_70);
    Instrument_70.insert(RepoCollateralSecurityType_70.getString());
    FIX::RepurchaseRate RepurchaseRate_70;
    RepurchaseRate_70.setString("38.190000");
    noRelatedSym_0_1.set(RepurchaseRate_70);
    Instrument_70.insert(RepurchaseRate_70.getString());
    FIX::RepurchaseTerm RepurchaseTerm_70(539028549);
    noRelatedSym_0_1.set(RepurchaseTerm_70);
    Instrument_70.insert(RepurchaseTerm_70.getString());
    FIX::RestructuringType RestructuringType_70("STRING_XR");
    noRelatedSym_0_1.set(RestructuringType_70);
    Instrument_70.insert(RestructuringType_70.getString());
    FIX::SecurityDesc SecurityDesc_70("STRING_1489717790");
    noRelatedSym_0_1.set(SecurityDesc_70);
    Instrument_70.insert(SecurityDesc_70.getString());
    FIX::SecurityExchange SecurityExchange_70("EXCHANGE_1896906965");
    noRelatedSym_0_1.set(SecurityExchange_70);
    Instrument_70.insert(SecurityExchange_70.getString());
    FIX::SecurityGroup SecurityGroup_70("STRING_413231790");
    noRelatedSym_0_1.set(SecurityGroup_70);
    Instrument_70.insert(SecurityGroup_70.getString());
    FIX::SecurityID SecurityID_70("STRING_189499160");
    noRelatedSym_0_1.set(SecurityID_70);
    Instrument_70.insert(SecurityID_70.getString());
    FIX::SecurityIDSource SecurityIDSource_70("STRING_7");
    noRelatedSym_0_1.set(SecurityIDSource_70);
    Instrument_70.insert(SecurityIDSource_70.getString());
    FIX::SecurityStatus SecurityStatus_70("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_70);
    Instrument_70.insert(SecurityStatus_70.getString());
    FIX::SecuritySubType SecuritySubType_71("STRING_1797225727");
    noRelatedSym_0_1.set(SecuritySubType_71);
    Instrument_70.insert(SecuritySubType_71.getString());
    FIX::SecurityType SecurityType_72("STRING_LQN");
    noRelatedSym_0_1.set(SecurityType_72);
    Instrument_70.insert(SecurityType_72.getString());
    FIX::Seniority Seniority_70("STRING_SB");
    noRelatedSym_0_1.set(Seniority_70);
    Instrument_70.insert(Seniority_70.getString());
    FIX::SettlMethod SettlMethod_70('P');
    noRelatedSym_0_1.set(SettlMethod_70);
    Instrument_70.insert(SettlMethod_70.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_70("STRING_2030897007");
    noRelatedSym_0_1.set(SettleOnOpenFlag_70);
    Instrument_70.insert(SettleOnOpenFlag_70.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_70("STRING_1514591734");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_70);
    Instrument_70.insert(StateOrProvinceOfIssue_70.getString());
    FIX::StrikeCurrency StrikeCurrency_70("EUR");
    noRelatedSym_0_1.set(StrikeCurrency_70);
    Instrument_70.insert(StrikeCurrency_70.getString());
    FIX::StrikeMultiplier StrikeMultiplier_70;
    StrikeMultiplier_70.setString("9559956");
    noRelatedSym_0_1.set(StrikeMultiplier_70);
    Instrument_70.insert(StrikeMultiplier_70.getString());
    FIX::StrikePrice StrikePrice_70;
    StrikePrice_70.setString("777434");
    noRelatedSym_0_1.set(StrikePrice_70);
    Instrument_70.insert(StrikePrice_70.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_70(5);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_70);
    Instrument_70.insert(StrikePriceBoundaryMethod_70.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_70;
    StrikePriceBoundaryPrecision_70.setString("13.620000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_70);
    Instrument_70.insert(StrikePriceBoundaryPrecision_70.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_70(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_70);
    Instrument_70.insert(StrikePriceDeterminationMethod_70.getString());
    FIX::StrikeValue StrikeValue_70;
    StrikeValue_70.setString("20569122");
    noRelatedSym_0_1.set(StrikeValue_70);
    Instrument_70.insert(StrikeValue_70.getString());
    FIX::Symbol Symbol_70("STRING_1652001665");
    noRelatedSym_0_1.set(Symbol_70);
    Instrument_70.insert(Symbol_70.getString());
    FIX::SymbolSfx SymbolSfx_70("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_70);
    Instrument_70.insert(SymbolSfx_70.getString());
    FIX::TimeUnit TimeUnit_70("STRING_S");
    noRelatedSym_0_1.set(TimeUnit_70);
    Instrument_70.insert(TimeUnit_70.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_70(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_70);
    Instrument_70.insert(UnderlyingPriceDeterminationMethod_70.getString());
    FIX::UnitOfMeasure UnitOfMeasure_70("STRING_USD");
    noRelatedSym_0_1.set(UnitOfMeasure_70);
    Instrument_70.insert(UnitOfMeasure_70.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_70;
    UnitOfMeasureQty_70.setString("13884989");
    noRelatedSym_0_1.set(UnitOfMeasureQty_70);
    Instrument_70.insert(UnitOfMeasureQty_70.getString());
    FIX::ValuationMethod ValuationMethod_70("STRING_CDSD");
    noRelatedSym_0_1.set(ValuationMethod_70);
    Instrument_70.insert(ValuationMethod_70.getString());
    all_values.push_back(Instrument_70);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_147;
      FIX::ComplexEventCondition ComplexEventCondition_147(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventCondition_147.getString());
      FIX::ComplexEventPrice ComplexEventPrice_147;
      ComplexEventPrice_147.setString("2075168");
      noComplexEvents_1_1_0.set(ComplexEventPrice_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPrice_147.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_147(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryMethod_147.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_147;
      ComplexEventPriceBoundaryPrecision_147.setString("32.750000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryPrecision_147.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_147(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceTimeType_147.getString());
      FIX::ComplexEventType ComplexEventType_147(4);
      noComplexEvents_1_1_0.set(ComplexEventType_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventType_147.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_147;
      ComplexOptPayoutAmount_147.setString("4156124");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexOptPayoutAmount_147.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_147);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_299;
        FIX::ComplexEventEndDate ComplexEventEndDate_299(FIX::UTCTIMESTAMP(19, 31, 5, 0, 4, 2009));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_299);
        ComplexEventDates_NoComplexEventDates_299.insert(ComplexEventEndDate_299.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_299(FIX::UTCTIMESTAMP(22, 55, 38, 25, 6, 2003));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_299);
        ComplexEventDates_NoComplexEventDates_299.insert(ComplexEventStartDate_299.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_299);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_608;
          FIX::ComplexEventEndTime ComplexEventEndTime_608(FIX::UTCTIMEONLY(21, 17, 48));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_608);
          ComplexEventTimes_NoComplexEventTimes_608.insert(ComplexEventEndTime_608.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_608(FIX::UTCTIMEONLY(6, 30, 59));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_608);
          ComplexEventTimes_NoComplexEventTimes_608.insert(ComplexEventStartTime_608.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_608);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_300;
        FIX::ComplexEventEndDate ComplexEventEndDate_300(FIX::UTCTIMESTAMP(20, 56, 59, 24, 4, 2007));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_300);
        ComplexEventDates_NoComplexEventDates_300.insert(ComplexEventEndDate_300.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_300(FIX::UTCTIMESTAMP(23, 50, 47, 12, 12, 2014));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_300);
        ComplexEventDates_NoComplexEventDates_300.insert(ComplexEventStartDate_300.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_300);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_609;
          FIX::ComplexEventEndTime ComplexEventEndTime_609(FIX::UTCTIMEONLY(13, 55, 38));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_609);
          ComplexEventTimes_NoComplexEventTimes_609.insert(ComplexEventEndTime_609.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_609(FIX::UTCTIMEONLY(16, 48, 50));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_609);
          ComplexEventTimes_NoComplexEventTimes_609.insert(ComplexEventStartTime_609.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_609);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_148;
      FIX::ComplexEventCondition ComplexEventCondition_148(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventCondition_148.getString());
      FIX::ComplexEventPrice ComplexEventPrice_148;
      ComplexEventPrice_148.setString("8007169");
      noComplexEvents_1_1_1.set(ComplexEventPrice_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventPrice_148.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_148(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryMethod_148.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_148;
      ComplexEventPriceBoundaryPrecision_148.setString("93.390000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceBoundaryPrecision_148.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_148(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventPriceTimeType_148.getString());
      FIX::ComplexEventType ComplexEventType_148(9);
      noComplexEvents_1_1_1.set(ComplexEventType_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexEventType_148.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_148;
      ComplexOptPayoutAmount_148.setString("16940122");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_148);
      ComplexEvents_NoComplexEvents_148.insert(ComplexOptPayoutAmount_148.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_148);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_301;
        FIX::ComplexEventEndDate ComplexEventEndDate_301(FIX::UTCTIMESTAMP(5, 58, 44, 25, 6, 2013));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_301);
        ComplexEventDates_NoComplexEventDates_301.insert(ComplexEventEndDate_301.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_301(FIX::UTCTIMESTAMP(16, 21, 45, 1, 1, 2003));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_301);
        ComplexEventDates_NoComplexEventDates_301.insert(ComplexEventStartDate_301.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_301);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_610;
          FIX::ComplexEventEndTime ComplexEventEndTime_610(FIX::UTCTIMEONLY(20, 44, 51));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_610);
          ComplexEventTimes_NoComplexEventTimes_610.insert(ComplexEventEndTime_610.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_610(FIX::UTCTIMEONLY(12, 39, 57));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_610);
          ComplexEventTimes_NoComplexEventTimes_610.insert(ComplexEventStartTime_610.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_610);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_611;
          FIX::ComplexEventEndTime ComplexEventEndTime_611(FIX::UTCTIMEONLY(1, 56, 57));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_611);
          ComplexEventTimes_NoComplexEventTimes_611.insert(ComplexEventEndTime_611.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_611(FIX::UTCTIMEONLY(1, 18, 50));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_611);
          ComplexEventTimes_NoComplexEventTimes_611.insert(ComplexEventStartTime_611.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_611);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_302;
        FIX::ComplexEventEndDate ComplexEventEndDate_302(FIX::UTCTIMESTAMP(12, 48, 54, 13, 10, 2007));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_302);
        ComplexEventDates_NoComplexEventDates_302.insert(ComplexEventEndDate_302.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_302(FIX::UTCTIMESTAMP(1, 39, 16, 26, 4, 2007));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_302);
        ComplexEventDates_NoComplexEventDates_302.insert(ComplexEventStartDate_302.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_302);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_612;
          FIX::ComplexEventEndTime ComplexEventEndTime_612(FIX::UTCTIMEONLY(4, 35, 56));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_612);
          ComplexEventTimes_NoComplexEventTimes_612.insert(ComplexEventEndTime_612.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_612(FIX::UTCTIMEONLY(3, 27, 52));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_612);
          ComplexEventTimes_NoComplexEventTimes_612.insert(ComplexEventStartTime_612.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_612);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
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
      multiset<string> EvntGrp_NoEvents_141;
      FIX::EventDate EventDate_141("LOCALMKTDATE_1459811104");
      noEvents_1_1_0.set(EventDate_141);
      EvntGrp_NoEvents_141.insert(EventDate_141.getString());
      FIX::EventPx EventPx_141;
      EventPx_141.setString("16973048");
      noEvents_1_1_0.set(EventPx_141);
      EvntGrp_NoEvents_141.insert(EventPx_141.getString());
      FIX::EventText EventText_141("STRING_1508790251");
      noEvents_1_1_0.set(EventText_141);
      EvntGrp_NoEvents_141.insert(EventText_141.getString());
      FIX::EventTime EventTime_141(FIX::UTCTIMESTAMP(17, 30, 34, 0, 11, 2014));
      noEvents_1_1_0.set(EventTime_141);
      EvntGrp_NoEvents_141.insert(EventTime_141.getString());
      FIX::EventType EventType_141(3);
      noEvents_1_1_0.set(EventType_141);
      EvntGrp_NoEvents_141.insert(EventType_141.getString());
      all_values.push_back(EvntGrp_NoEvents_141);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_142;
      FIX::EventDate EventDate_142("LOCALMKTDATE_2091791703");
      noEvents_1_1_1.set(EventDate_142);
      EvntGrp_NoEvents_142.insert(EventDate_142.getString());
      FIX::EventPx EventPx_142;
      EventPx_142.setString("10928757");
      noEvents_1_1_1.set(EventPx_142);
      EvntGrp_NoEvents_142.insert(EventPx_142.getString());
      FIX::EventText EventText_142("STRING_1427873068");
      noEvents_1_1_1.set(EventText_142);
      EvntGrp_NoEvents_142.insert(EventText_142.getString());
      FIX::EventTime EventTime_142(FIX::UTCTIMESTAMP(1, 59, 42, 27, 3, 2006));
      noEvents_1_1_1.set(EventTime_142);
      EvntGrp_NoEvents_142.insert(EventTime_142.getString());
      FIX::EventType EventType_142(99);
      noEvents_1_1_1.set(EventType_142);
      EvntGrp_NoEvents_142.insert(EventType_142.getString());
      all_values.push_back(EvntGrp_NoEvents_142);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_143;
      FIX::EventDate EventDate_143("LOCALMKTDATE_1664626847");
      noEvents_1_1_2.set(EventDate_143);
      EvntGrp_NoEvents_143.insert(EventDate_143.getString());
      FIX::EventPx EventPx_143;
      EventPx_143.setString("1028065");
      noEvents_1_1_2.set(EventPx_143);
      EvntGrp_NoEvents_143.insert(EventPx_143.getString());
      FIX::EventText EventText_143("STRING_79878926");
      noEvents_1_1_2.set(EventText_143);
      EvntGrp_NoEvents_143.insert(EventText_143.getString());
      FIX::EventTime EventTime_143(FIX::UTCTIMESTAMP(5, 42, 2, 21, 9, 2017));
      noEvents_1_1_2.set(EventTime_143);
      EvntGrp_NoEvents_143.insert(EventTime_143.getString());
      FIX::EventType EventType_143(18);
      noEvents_1_1_2.set(EventType_143);
      EvntGrp_NoEvents_143.insert(EventType_143.getString());
      all_values.push_back(EvntGrp_NoEvents_143);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_143;
      FIX::InstrumentPartyID InstrumentPartyID_143("STRING_1608669763");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyID_143.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_143('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyIDSource_143.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_143(638725221);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyRole_143.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_143);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277;
        FIX::InstrumentPartySubID InstrumentPartySubID_277("STRING_997142150");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_277);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277.insert(InstrumentPartySubID_277.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_277(1269022723);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_277);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277.insert(InstrumentPartySubIDType_277.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278;
        FIX::InstrumentPartySubID InstrumentPartySubID_278("STRING_1637298504");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_278);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278.insert(InstrumentPartySubID_278.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_278(1300871633);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_278);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278.insert(InstrumentPartySubIDType_278.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_144;
      FIX::InstrumentPartyID InstrumentPartyID_144("STRING_1213330779");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyID_144.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_144('5');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyIDSource_144.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_144(581261053);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_144);
      InstrumentParties_NoInstrumentParties_144.insert(InstrumentPartyRole_144.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_144);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279;
        FIX::InstrumentPartySubID InstrumentPartySubID_279("STRING_367287681");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_279);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279.insert(InstrumentPartySubID_279.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_279(885609432);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_279);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279.insert(InstrumentPartySubIDType_279.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280;
        FIX::InstrumentPartySubID InstrumentPartySubID_280("STRING_1794826608");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_280);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280.insert(InstrumentPartySubID_280.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_280(543476308);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_280);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280.insert(InstrumentPartySubIDType_280.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281;
        FIX::InstrumentPartySubID InstrumentPartySubID_281("STRING_764915694");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_281);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281.insert(InstrumentPartySubID_281.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_281(2041598694);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_281);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281.insert(InstrumentPartySubIDType_281.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_281);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_145;
      FIX::InstrumentPartyID InstrumentPartyID_145("STRING_1175829627");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyID_145.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_145('2');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyIDSource_145.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_145(2144405216);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyRole_145.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_145);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282;
        FIX::InstrumentPartySubID InstrumentPartySubID_282("STRING_1802754608");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_282);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282.insert(InstrumentPartySubID_282.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_282(840681773);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_282);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282.insert(InstrumentPartySubIDType_282.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_282);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_131;
      FIX::SecurityAltID SecurityAltID_131("STRING_1433548203");
      noSecurityAltID_1_1_0.set(SecurityAltID_131);
      SecAltIDGrp_NoSecurityAltID_131.insert(SecurityAltID_131.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_131("STRING_1969574930");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_131);
      SecAltIDGrp_NoSecurityAltID_131.insert(SecurityAltIDSource_131.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_131);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_140;
    FIX::SecurityXML SecurityXML_141("XMLDATA_1763448804");
    noRelatedSym_0_1.set(SecurityXML_141);
    FIX::SecurityXMLLen SecurityXMLLen_70(376669254);
    noRelatedSym_0_1.set(SecurityXMLLen_70);
    FIX::SecurityXMLSchema SecurityXMLSchema_70("STRING_500805679");
    noRelatedSym_0_1.set(SecurityXMLSchema_70);
    SecurityXML_140.insert(SecurityXMLSchema_70.getString());
    all_values.push_back(SecurityXML_140);
    all_compo_names.insert("SecurityXML");

    // OrderQtyData
    multiset<string> OrderQtyData_21;
    FIX::CashOrderQty CashOrderQty_21;
    CashOrderQty_21.setString("7717024");
    noRelatedSym_0_1.set(CashOrderQty_21);
    OrderQtyData_21.insert(CashOrderQty_21.getString());
    FIX::OrderPercent OrderPercent_21;
    OrderPercent_21.setString("90.170000");
    noRelatedSym_0_1.set(OrderPercent_21);
    OrderQtyData_21.insert(OrderPercent_21.getString());
    FIX::OrderQty OrderQty_31;
    OrderQty_31.setString("168029");
    noRelatedSym_0_1.set(OrderQty_31);
    OrderQtyData_21.insert(OrderQty_31.getString());
    FIX::RoundingDirection RoundingDirection_21('1');
    noRelatedSym_0_1.set(RoundingDirection_21);
    OrderQtyData_21.insert(RoundingDirection_21.getString());
    FIX::RoundingModulus RoundingModulus_21;
    RoundingModulus_21.setString("4277100");
    noRelatedSym_0_1.set(RoundingModulus_21);
    OrderQtyData_21.insert(RoundingModulus_21.getString());
    all_values.push_back(OrderQtyData_21);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_107;
      FIX::PartyID PartyID_107("STRING_531966792");
      noPartyIDs_1_1_0.set(PartyID_107);
      Parties_NoPartyIDs_107.insert(PartyID_107.getString());
      FIX::PartyIDSource PartyIDSource_107('A');
      noPartyIDs_1_1_0.set(PartyIDSource_107);
      Parties_NoPartyIDs_107.insert(PartyIDSource_107.getString());
      FIX::PartyRole PartyRole_107(31);
      noPartyIDs_1_1_0.set(PartyRole_107);
      Parties_NoPartyIDs_107.insert(PartyRole_107.getString());
      all_values.push_back(Parties_NoPartyIDs_107);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_238;
        FIX::PartySubID PartySubID_238("STRING_500215572");
        noPartySubIDs_1_0_2_0.set(PartySubID_238);
        PtysSubGrp_NoPartySubIDs_238.insert(PartySubID_238.getString());
        FIX::PartySubIDType PartySubIDType_238(13);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_238);
        PtysSubGrp_NoPartySubIDs_238.insert(PartySubIDType_238.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_238);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_108;
      FIX::PartyID PartyID_108("STRING_555892549");
      noPartyIDs_1_1_1.set(PartyID_108);
      Parties_NoPartyIDs_108.insert(PartyID_108.getString());
      FIX::PartyIDSource PartyIDSource_108('9');
      noPartyIDs_1_1_1.set(PartyIDSource_108);
      Parties_NoPartyIDs_108.insert(PartyIDSource_108.getString());
      FIX::PartyRole PartyRole_108(19);
      noPartyIDs_1_1_1.set(PartyRole_108);
      Parties_NoPartyIDs_108.insert(PartyRole_108.getString());
      all_values.push_back(Parties_NoPartyIDs_108);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_239;
        FIX::PartySubID PartySubID_239("STRING_1410979561");
        noPartySubIDs_1_1_2_0.set(PartySubID_239);
        PtysSubGrp_NoPartySubIDs_239.insert(PartySubID_239.getString());
        FIX::PartySubIDType PartySubIDType_239(8);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_239);
        PtysSubGrp_NoPartySubIDs_239.insert(PartySubIDType_239.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_239);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_240;
        FIX::PartySubID PartySubID_240("STRING_97350555");
        noPartySubIDs_1_1_2_1.set(PartySubID_240);
        PtysSubGrp_NoPartySubIDs_240.insert(PartySubID_240.getString());
        FIX::PartySubIDType PartySubIDType_240(7);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_240);
        PtysSubGrp_NoPartySubIDs_240.insert(PartySubIDType_240.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_240);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_241;
        FIX::PartySubID PartySubID_241("STRING_533694494");
        noPartySubIDs_1_1_2_2.set(PartySubID_241);
        PtysSubGrp_NoPartySubIDs_241.insert(PartySubID_241.getString());
        FIX::PartySubIDType PartySubIDType_241(1);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_241);
        PtysSubGrp_NoPartySubIDs_241.insert(PartySubIDType_241.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_241);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_109;
      FIX::PartyID PartyID_109("STRING_1695034095");
      noPartyIDs_1_1_2.set(PartyID_109);
      Parties_NoPartyIDs_109.insert(PartyID_109.getString());
      FIX::PartyIDSource PartyIDSource_109('E');
      noPartyIDs_1_1_2.set(PartyIDSource_109);
      Parties_NoPartyIDs_109.insert(PartyIDSource_109.getString());
      FIX::PartyRole PartyRole_109(46);
      noPartyIDs_1_1_2.set(PartyRole_109);
      Parties_NoPartyIDs_109.insert(PartyRole_109.getString());
      all_values.push_back(Parties_NoPartyIDs_109);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_242;
        FIX::PartySubID PartySubID_242("STRING_1622513657");
        noPartySubIDs_1_2_2_0.set(PartySubID_242);
        PtysSubGrp_NoPartySubIDs_242.insert(PartySubID_242.getString());
        FIX::PartySubIDType PartySubIDType_242(33);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_242);
        PtysSubGrp_NoPartySubIDs_242.insert(PartySubIDType_242.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_242);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_243;
        FIX::PartySubID PartySubID_243("STRING_1280017319");
        noPartySubIDs_1_2_2_1.set(PartySubID_243);
        PtysSubGrp_NoPartySubIDs_243.insert(PartySubID_243.getString());
        FIX::PartySubIDType PartySubIDType_243(12);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_243);
        PtysSubGrp_NoPartySubIDs_243.insert(PartySubIDType_243.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_243);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_2;
      FIX::QuoteQualifier QuoteQualifier_2('2');
      noQuoteQualifiers_1_1_0.set(QuoteQualifier_2);
      QuotQualGrp_NoQuoteQualifiers_2.insert(QuoteQualifier_2.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_2);
      all_compo_names.insert("QuotQualGrp.NoQuoteQualifiers");

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_0);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_3;
      FIX::LegOrderQty LegOrderQty_10;
      LegOrderQty_10.setString("12746537");
      noLegs_1_1_0.set(LegOrderQty_10);
      QuotReqLegsGrp_NoLegs_3.insert(LegOrderQty_10.getString());
      FIX::LegQty LegQty_10;
      LegQty_10.setString("13146638");
      noLegs_1_1_0.set(LegQty_10);
      QuotReqLegsGrp_NoLegs_3.insert(LegQty_10.getString());
      FIX::LegRefID LegRefID_10("STRING_117264732");
      noLegs_1_1_0.set(LegRefID_10);
      QuotReqLegsGrp_NoLegs_3.insert(LegRefID_10.getString());
      FIX::LegSettlDate LegSettlDate_10("LOCALMKTDATE_141115226");
      noLegs_1_1_0.set(LegSettlDate_10);
      QuotReqLegsGrp_NoLegs_3.insert(LegSettlDate_10.getString());
      FIX::LegSettlType LegSettlType_10('1');
      noLegs_1_1_0.set(LegSettlType_10);
      QuotReqLegsGrp_NoLegs_3.insert(LegSettlType_10.getString());
      FIX::LegSwapType LegSwapType_10(1);
      noLegs_1_1_0.set(LegSwapType_10);
      QuotReqLegsGrp_NoLegs_3.insert(LegSwapType_10.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_3);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_109;
      FIX::EncodedLegIssuer EncodedLegIssuer_109("DATA_308448295");
      noLegs_1_1_0.set(EncodedLegIssuer_109);
      InstrumentLeg_109.insert(EncodedLegIssuer_109.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_109(1444444599);
      noLegs_1_1_0.set(EncodedLegIssuerLen_109);
      InstrumentLeg_109.insert(EncodedLegIssuerLen_109.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_109("DATA_535005260");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_109);
      InstrumentLeg_109.insert(EncodedLegSecurityDesc_109.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_109(1057042417);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_109);
      InstrumentLeg_109.insert(EncodedLegSecurityDescLen_109.getString());
      FIX::LegCFICode LegCFICode_109("STRING_2000337148");
      noLegs_1_1_0.set(LegCFICode_109);
      InstrumentLeg_109.insert(LegCFICode_109.getString());
      FIX::LegContractMultiplier LegContractMultiplier_109;
      LegContractMultiplier_109.setString("14025085");
      noLegs_1_1_0.set(LegContractMultiplier_109);
      InstrumentLeg_109.insert(LegContractMultiplier_109.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_109(543762323);
      noLegs_1_1_0.set(LegContractMultiplierUnit_109);
      InstrumentLeg_109.insert(LegContractMultiplierUnit_109.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_109("MONTHYEAR_56089009");
      noLegs_1_1_0.set(LegContractSettlMonth_109);
      InstrumentLeg_109.insert(LegContractSettlMonth_109.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_109("COUNTRY_666004427");
      noLegs_1_1_0.set(LegCountryOfIssue_109);
      InstrumentLeg_109.insert(LegCountryOfIssue_109.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_109("LOCALMKTDATE_795397924");
      noLegs_1_1_0.set(LegCouponPaymentDate_109);
      InstrumentLeg_109.insert(LegCouponPaymentDate_109.getString());
      FIX::LegCouponRate LegCouponRate_109;
      LegCouponRate_109.setString("95.640000");
      noLegs_1_1_0.set(LegCouponRate_109);
      InstrumentLeg_109.insert(LegCouponRate_109.getString());
      FIX::LegCreditRating LegCreditRating_109("STRING_1105329968");
      noLegs_1_1_0.set(LegCreditRating_109);
      InstrumentLeg_109.insert(LegCreditRating_109.getString());
      FIX::LegCurrency LegCurrency_109("EUR");
      noLegs_1_1_0.set(LegCurrency_109);
      InstrumentLeg_109.insert(LegCurrency_109.getString());
      FIX::LegDatedDate LegDatedDate_109("LOCALMKTDATE_652880415");
      noLegs_1_1_0.set(LegDatedDate_109);
      InstrumentLeg_109.insert(LegDatedDate_109.getString());
      FIX::LegExerciseStyle LegExerciseStyle_109(1518057872);
      noLegs_1_1_0.set(LegExerciseStyle_109);
      InstrumentLeg_109.insert(LegExerciseStyle_109.getString());
      FIX::LegFactor LegFactor_109;
      LegFactor_109.setString("11826655");
      noLegs_1_1_0.set(LegFactor_109);
      InstrumentLeg_109.insert(LegFactor_109.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_109(169448930);
      noLegs_1_1_0.set(LegFlowScheduleType_109);
      InstrumentLeg_109.insert(LegFlowScheduleType_109.getString());
      FIX::LegInstrRegistry LegInstrRegistry_109("STRING_993087882");
      noLegs_1_1_0.set(LegInstrRegistry_109);
      InstrumentLeg_109.insert(LegInstrRegistry_109.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_109("LOCALMKTDATE_1939710761");
      noLegs_1_1_0.set(LegInterestAccrualDate_109);
      InstrumentLeg_109.insert(LegInterestAccrualDate_109.getString());
      FIX::LegIssueDate LegIssueDate_109("LOCALMKTDATE_1449466249");
      noLegs_1_1_0.set(LegIssueDate_109);
      InstrumentLeg_109.insert(LegIssueDate_109.getString());
      FIX::LegIssuer LegIssuer_109("STRING_844787145");
      noLegs_1_1_0.set(LegIssuer_109);
      InstrumentLeg_109.insert(LegIssuer_109.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_109("STRING_1050077970");
      noLegs_1_1_0.set(LegLocaleOfIssue_109);
      InstrumentLeg_109.insert(LegLocaleOfIssue_109.getString());
      FIX::LegMaturityDate LegMaturityDate_109("LOCALMKTDATE_1353702415");
      noLegs_1_1_0.set(LegMaturityDate_109);
      InstrumentLeg_109.insert(LegMaturityDate_109.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_109("MONTHYEAR_534341778");
      noLegs_1_1_0.set(LegMaturityMonthYear_109);
      InstrumentLeg_109.insert(LegMaturityMonthYear_109.getString());
      FIX::LegMaturityTime LegMaturityTime_109("TZTIMEONLY_177248113");
      noLegs_1_1_0.set(LegMaturityTime_109);
      InstrumentLeg_109.insert(LegMaturityTime_109.getString());
      FIX::LegOptAttribute LegOptAttribute_109('5');
      noLegs_1_1_0.set(LegOptAttribute_109);
      InstrumentLeg_109.insert(LegOptAttribute_109.getString());
      FIX::LegOptionRatio LegOptionRatio_109;
      LegOptionRatio_109.setString("6516065");
      noLegs_1_1_0.set(LegOptionRatio_109);
      InstrumentLeg_109.insert(LegOptionRatio_109.getString());
      FIX::LegPool LegPool_109("STRING_318363339");
      noLegs_1_1_0.set(LegPool_109);
      InstrumentLeg_109.insert(LegPool_109.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_109("STRING_220029679");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_109);
      InstrumentLeg_109.insert(LegPriceUnitOfMeasure_109.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_109;
      LegPriceUnitOfMeasureQty_109.setString("6863961");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_109);
      InstrumentLeg_109.insert(LegPriceUnitOfMeasureQty_109.getString());
      FIX::LegProduct LegProduct_109(626811635);
      noLegs_1_1_0.set(LegProduct_109);
      InstrumentLeg_109.insert(LegProduct_109.getString());
      FIX::LegPutOrCall LegPutOrCall_109(1664474278);
      noLegs_1_1_0.set(LegPutOrCall_109);
      InstrumentLeg_109.insert(LegPutOrCall_109.getString());
      FIX::LegRatioQty LegRatioQty_109;
      LegRatioQty_109.setString("12214014");
      noLegs_1_1_0.set(LegRatioQty_109);
      InstrumentLeg_109.insert(LegRatioQty_109.getString());
      FIX::LegRedemptionDate LegRedemptionDate_109("LOCALMKTDATE_1683854052");
      noLegs_1_1_0.set(LegRedemptionDate_109);
      InstrumentLeg_109.insert(LegRedemptionDate_109.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_109("STRING_1517327779");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_109);
      InstrumentLeg_109.insert(LegRepoCollateralSecurityType_109.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_109;
      LegRepurchaseRate_109.setString("63.250000");
      noLegs_1_1_0.set(LegRepurchaseRate_109);
      InstrumentLeg_109.insert(LegRepurchaseRate_109.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_109(80132728);
      noLegs_1_1_0.set(LegRepurchaseTerm_109);
      InstrumentLeg_109.insert(LegRepurchaseTerm_109.getString());
      FIX::LegSecurityDesc LegSecurityDesc_109("STRING_1573416788");
      noLegs_1_1_0.set(LegSecurityDesc_109);
      InstrumentLeg_109.insert(LegSecurityDesc_109.getString());
      FIX::LegSecurityExchange LegSecurityExchange_109("EXCHANGE_1142430752");
      noLegs_1_1_0.set(LegSecurityExchange_109);
      InstrumentLeg_109.insert(LegSecurityExchange_109.getString());
      FIX::LegSecurityID LegSecurityID_109("STRING_875530652");
      noLegs_1_1_0.set(LegSecurityID_109);
      InstrumentLeg_109.insert(LegSecurityID_109.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_109("STRING_1726856353");
      noLegs_1_1_0.set(LegSecurityIDSource_109);
      InstrumentLeg_109.insert(LegSecurityIDSource_109.getString());
      FIX::LegSecuritySubType LegSecuritySubType_109("STRING_100277072");
      noLegs_1_1_0.set(LegSecuritySubType_109);
      InstrumentLeg_109.insert(LegSecuritySubType_109.getString());
      FIX::LegSecurityType LegSecurityType_109("STRING_57139422");
      noLegs_1_1_0.set(LegSecurityType_109);
      InstrumentLeg_109.insert(LegSecurityType_109.getString());
      FIX::LegSide LegSide_109('1');
      noLegs_1_1_0.set(LegSide_109);
      InstrumentLeg_109.insert(LegSide_109.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_109("STRING_753157487");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_109);
      InstrumentLeg_109.insert(LegStateOrProvinceOfIssue_109.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_109("JPY");
      noLegs_1_1_0.set(LegStrikeCurrency_109);
      InstrumentLeg_109.insert(LegStrikeCurrency_109.getString());
      FIX::LegStrikePrice LegStrikePrice_109;
      LegStrikePrice_109.setString("9226064");
      noLegs_1_1_0.set(LegStrikePrice_109);
      InstrumentLeg_109.insert(LegStrikePrice_109.getString());
      FIX::LegSymbol LegSymbol_109("STRING_420801528");
      noLegs_1_1_0.set(LegSymbol_109);
      InstrumentLeg_109.insert(LegSymbol_109.getString());
      FIX::LegSymbolSfx LegSymbolSfx_109("STRING_801977089");
      noLegs_1_1_0.set(LegSymbolSfx_109);
      InstrumentLeg_109.insert(LegSymbolSfx_109.getString());
      FIX::LegTimeUnit LegTimeUnit_109("STRING_224589018");
      noLegs_1_1_0.set(LegTimeUnit_109);
      InstrumentLeg_109.insert(LegTimeUnit_109.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_109("STRING_1265588674");
      noLegs_1_1_0.set(LegUnitOfMeasure_109);
      InstrumentLeg_109.insert(LegUnitOfMeasure_109.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_109;
      LegUnitOfMeasureQty_109.setString("18520550");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_109);
      InstrumentLeg_109.insert(LegUnitOfMeasureQty_109.getString());
      all_values.push_back(InstrumentLeg_109);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_221;
        FIX::LegSecurityAltID LegSecurityAltID_221("STRING_1799930452");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_221);
        LegSecAltIDGrp_NoLegSecurityAltID_221.insert(LegSecurityAltID_221.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_221("STRING_2029303173");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_221);
        LegSecAltIDGrp_NoLegSecurityAltID_221.insert(LegSecurityAltIDSource_221.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_221);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_222;
        FIX::LegSecurityAltID LegSecurityAltID_222("STRING_2099174085");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_222);
        LegSecAltIDGrp_NoLegSecurityAltID_222.insert(LegSecurityAltID_222.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_222("STRING_304053315");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_222);
        LegSecAltIDGrp_NoLegSecurityAltID_222.insert(LegSecurityAltIDSource_222.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_222);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_223;
        FIX::LegSecurityAltID LegSecurityAltID_223("STRING_200182864");
        noLegSecurityAltID_1_0_2_2.set(LegSecurityAltID_223);
        LegSecAltIDGrp_NoLegSecurityAltID_223.insert(LegSecurityAltID_223.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_223("STRING_171720116");
        noLegSecurityAltID_1_0_2_2.set(LegSecurityAltIDSource_223);
        LegSecAltIDGrp_NoLegSecurityAltID_223.insert(LegSecurityAltIDSource_223.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_223);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_6;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_6("CHF");
      noLegs_1_1_0.set(LegBenchmarkCurveCurrency_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurveCurrency_6.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_6("STRING_1836194394");
      noLegs_1_1_0.set(LegBenchmarkCurveName_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurveName_6.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_6("STRING_64367327");
      noLegs_1_1_0.set(LegBenchmarkCurvePoint_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurvePoint_6.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_6;
      LegBenchmarkPrice_6.setString("3633649");
      noLegs_1_1_0.set(LegBenchmarkPrice_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkPrice_6.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_6(1206038525);
      noLegs_1_1_0.set(LegBenchmarkPriceType_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkPriceType_6.getString());
      all_values.push_back(LegBenchmarkCurveData_6);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_25;
        FIX::LegStipulationType LegStipulationType_25("STRING_443497632");
        noLegStipulations_1_0_2_0.set(LegStipulationType_25);
        LegStipulations_NoLegStipulations_25.insert(LegStipulationType_25.getString());
        FIX::LegStipulationValue LegStipulationValue_25("STRING_631971666");
        noLegStipulations_1_0_2_0.set(LegStipulationValue_25);
        LegStipulations_NoLegStipulations_25.insert(LegStipulationValue_25.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_25);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_26;
        FIX::LegStipulationType LegStipulationType_26("STRING_1683224405");
        noLegStipulations_1_0_2_1.set(LegStipulationType_26);
        LegStipulations_NoLegStipulations_26.insert(LegStipulationType_26.getString());
        FIX::LegStipulationValue LegStipulationValue_26("STRING_1319028284");
        noLegStipulations_1_0_2_1.set(LegStipulationValue_26);
        LegStipulations_NoLegStipulations_26.insert(LegStipulationValue_26.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_26);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_27;
        FIX::LegStipulationType LegStipulationType_27("STRING_211344371");
        noLegStipulations_1_0_2_2.set(LegStipulationType_27);
        LegStipulations_NoLegStipulations_27.insert(LegStipulationType_27.getString());
        FIX::LegStipulationValue LegStipulationValue_27("STRING_1783501477");
        noLegStipulations_1_0_2_2.set(LegStipulationValue_27);
        LegStipulations_NoLegStipulations_27.insert(LegStipulationValue_27.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_27);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_106;
        FIX::NestedPartyID NestedPartyID_106("STRING_38428763");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyID_106.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_106('3');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyIDSource_106.getString());
        FIX::NestedPartyRole NestedPartyRole_106(803881352);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyRole_106.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_106);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_230;
          FIX::NestedPartySubID NestedPartySubID_230("STRING_1311781734");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_230);
          NstdPtysSubGrp_NoNestedPartySubIDs_230.insert(NestedPartySubID_230.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_230(1224682881);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_230);
          NstdPtysSubGrp_NoNestedPartySubIDs_230.insert(NestedPartySubIDType_230.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_230);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_107;
        FIX::NestedPartyID NestedPartyID_107("STRING_1850155829");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyID_107.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_107('1');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyIDSource_107.getString());
        FIX::NestedPartyRole NestedPartyRole_107(342787907);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyRole_107.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_107);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_231;
          FIX::NestedPartySubID NestedPartySubID_231("STRING_967178539");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_231);
          NstdPtysSubGrp_NoNestedPartySubIDs_231.insert(NestedPartySubID_231.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_231(2142718359);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_231);
          NstdPtysSubGrp_NoNestedPartySubIDs_231.insert(NestedPartySubIDType_231.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_231);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_232;
          FIX::NestedPartySubID NestedPartySubID_232("STRING_1436546766");
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubID_232);
          NstdPtysSubGrp_NoNestedPartySubIDs_232.insert(NestedPartySubID_232.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_232(918868976);
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubIDType_232);
          NstdPtysSubGrp_NoNestedPartySubIDs_232.insert(NestedPartySubIDType_232.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_232);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_233;
          FIX::NestedPartySubID NestedPartySubID_233("STRING_299288027");
          noNestedPartySubIDs_1_0_1_3_2.set(NestedPartySubID_233);
          NstdPtysSubGrp_NoNestedPartySubIDs_233.insert(NestedPartySubID_233.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_233(1636729630);
          noNestedPartySubIDs_1_0_1_3_2.set(NestedPartySubIDType_233);
          NstdPtysSubGrp_NoNestedPartySubIDs_233.insert(NestedPartySubIDType_233.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_233);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_2);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_108;
        FIX::NestedPartyID NestedPartyID_108("STRING_1090589092");
        noNestedPartyIDs_1_0_2_2.set(NestedPartyID_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyID_108.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_108('1');
        noNestedPartyIDs_1_0_2_2.set(NestedPartyIDSource_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyIDSource_108.getString());
        FIX::NestedPartyRole NestedPartyRole_108(316240482);
        noNestedPartyIDs_1_0_2_2.set(NestedPartyRole_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyRole_108.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_108);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_234;
          FIX::NestedPartySubID NestedPartySubID_234("STRING_1354104869");
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubID_234);
          NstdPtysSubGrp_NoNestedPartySubIDs_234.insert(NestedPartySubID_234.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_234(679605386);
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubIDType_234);
          NstdPtysSubGrp_NoNestedPartySubIDs_234.insert(NestedPartySubIDType_234.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_234);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_235;
          FIX::NestedPartySubID NestedPartySubID_235("STRING_1985338364");
          noNestedPartySubIDs_1_0_2_3_1.set(NestedPartySubID_235);
          NstdPtysSubGrp_NoNestedPartySubIDs_235.insert(NestedPartySubID_235.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_235(1894898521);
          noNestedPartySubIDs_1_0_2_3_1.set(NestedPartySubIDType_235);
          NstdPtysSubGrp_NoNestedPartySubIDs_235.insert(NestedPartySubIDType_235.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_235);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_236;
          FIX::NestedPartySubID NestedPartySubID_236("STRING_1123103018");
          noNestedPartySubIDs_1_0_2_3_2.set(NestedPartySubID_236);
          NstdPtysSubGrp_NoNestedPartySubIDs_236.insert(NestedPartySubID_236.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_236(469826382);
          noNestedPartySubIDs_1_0_2_3_2.set(NestedPartySubIDType_236);
          NstdPtysSubGrp_NoNestedPartySubIDs_236.insert(NestedPartySubIDType_236.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_236);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_2);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_1_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_4;
      FIX::LegOrderQty LegOrderQty_11;
      LegOrderQty_11.setString("14306392");
      noLegs_1_1_1.set(LegOrderQty_11);
      QuotReqLegsGrp_NoLegs_4.insert(LegOrderQty_11.getString());
      FIX::LegQty LegQty_11;
      LegQty_11.setString("2946476");
      noLegs_1_1_1.set(LegQty_11);
      QuotReqLegsGrp_NoLegs_4.insert(LegQty_11.getString());
      FIX::LegRefID LegRefID_11("STRING_681170753");
      noLegs_1_1_1.set(LegRefID_11);
      QuotReqLegsGrp_NoLegs_4.insert(LegRefID_11.getString());
      FIX::LegSettlDate LegSettlDate_11("LOCALMKTDATE_1066657108");
      noLegs_1_1_1.set(LegSettlDate_11);
      QuotReqLegsGrp_NoLegs_4.insert(LegSettlDate_11.getString());
      FIX::LegSettlType LegSettlType_11('1');
      noLegs_1_1_1.set(LegSettlType_11);
      QuotReqLegsGrp_NoLegs_4.insert(LegSettlType_11.getString());
      FIX::LegSwapType LegSwapType_11(1);
      noLegs_1_1_1.set(LegSwapType_11);
      QuotReqLegsGrp_NoLegs_4.insert(LegSwapType_11.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_4);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_110;
      FIX::EncodedLegIssuer EncodedLegIssuer_110("DATA_1455832425");
      noLegs_1_1_1.set(EncodedLegIssuer_110);
      InstrumentLeg_110.insert(EncodedLegIssuer_110.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_110(327213064);
      noLegs_1_1_1.set(EncodedLegIssuerLen_110);
      InstrumentLeg_110.insert(EncodedLegIssuerLen_110.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_110("DATA_1767778256");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_110);
      InstrumentLeg_110.insert(EncodedLegSecurityDesc_110.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_110(620130511);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_110);
      InstrumentLeg_110.insert(EncodedLegSecurityDescLen_110.getString());
      FIX::LegCFICode LegCFICode_110("STRING_1551895945");
      noLegs_1_1_1.set(LegCFICode_110);
      InstrumentLeg_110.insert(LegCFICode_110.getString());
      FIX::LegContractMultiplier LegContractMultiplier_110;
      LegContractMultiplier_110.setString("14704504");
      noLegs_1_1_1.set(LegContractMultiplier_110);
      InstrumentLeg_110.insert(LegContractMultiplier_110.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_110(9017616);
      noLegs_1_1_1.set(LegContractMultiplierUnit_110);
      InstrumentLeg_110.insert(LegContractMultiplierUnit_110.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_110("MONTHYEAR_1894683852");
      noLegs_1_1_1.set(LegContractSettlMonth_110);
      InstrumentLeg_110.insert(LegContractSettlMonth_110.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_110("COUNTRY_877694030");
      noLegs_1_1_1.set(LegCountryOfIssue_110);
      InstrumentLeg_110.insert(LegCountryOfIssue_110.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_110("LOCALMKTDATE_976196155");
      noLegs_1_1_1.set(LegCouponPaymentDate_110);
      InstrumentLeg_110.insert(LegCouponPaymentDate_110.getString());
      FIX::LegCouponRate LegCouponRate_110;
      LegCouponRate_110.setString("85.640000");
      noLegs_1_1_1.set(LegCouponRate_110);
      InstrumentLeg_110.insert(LegCouponRate_110.getString());
      FIX::LegCreditRating LegCreditRating_110("STRING_166757148");
      noLegs_1_1_1.set(LegCreditRating_110);
      InstrumentLeg_110.insert(LegCreditRating_110.getString());
      FIX::LegCurrency LegCurrency_110("CAN");
      noLegs_1_1_1.set(LegCurrency_110);
      InstrumentLeg_110.insert(LegCurrency_110.getString());
      FIX::LegDatedDate LegDatedDate_110("LOCALMKTDATE_1803486778");
      noLegs_1_1_1.set(LegDatedDate_110);
      InstrumentLeg_110.insert(LegDatedDate_110.getString());
      FIX::LegExerciseStyle LegExerciseStyle_110(838170575);
      noLegs_1_1_1.set(LegExerciseStyle_110);
      InstrumentLeg_110.insert(LegExerciseStyle_110.getString());
      FIX::LegFactor LegFactor_110;
      LegFactor_110.setString("13314604");
      noLegs_1_1_1.set(LegFactor_110);
      InstrumentLeg_110.insert(LegFactor_110.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_110(2119727260);
      noLegs_1_1_1.set(LegFlowScheduleType_110);
      InstrumentLeg_110.insert(LegFlowScheduleType_110.getString());
      FIX::LegInstrRegistry LegInstrRegistry_110("STRING_1617470414");
      noLegs_1_1_1.set(LegInstrRegistry_110);
      InstrumentLeg_110.insert(LegInstrRegistry_110.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_110("LOCALMKTDATE_538081706");
      noLegs_1_1_1.set(LegInterestAccrualDate_110);
      InstrumentLeg_110.insert(LegInterestAccrualDate_110.getString());
      FIX::LegIssueDate LegIssueDate_110("LOCALMKTDATE_651848998");
      noLegs_1_1_1.set(LegIssueDate_110);
      InstrumentLeg_110.insert(LegIssueDate_110.getString());
      FIX::LegIssuer LegIssuer_110("STRING_1455325130");
      noLegs_1_1_1.set(LegIssuer_110);
      InstrumentLeg_110.insert(LegIssuer_110.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_110("STRING_285496579");
      noLegs_1_1_1.set(LegLocaleOfIssue_110);
      InstrumentLeg_110.insert(LegLocaleOfIssue_110.getString());
      FIX::LegMaturityDate LegMaturityDate_110("LOCALMKTDATE_1774952016");
      noLegs_1_1_1.set(LegMaturityDate_110);
      InstrumentLeg_110.insert(LegMaturityDate_110.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_110("MONTHYEAR_1925151512");
      noLegs_1_1_1.set(LegMaturityMonthYear_110);
      InstrumentLeg_110.insert(LegMaturityMonthYear_110.getString());
      FIX::LegMaturityTime LegMaturityTime_110("TZTIMEONLY_1716135858");
      noLegs_1_1_1.set(LegMaturityTime_110);
      InstrumentLeg_110.insert(LegMaturityTime_110.getString());
      FIX::LegOptAttribute LegOptAttribute_110('2');
      noLegs_1_1_1.set(LegOptAttribute_110);
      InstrumentLeg_110.insert(LegOptAttribute_110.getString());
      FIX::LegOptionRatio LegOptionRatio_110;
      LegOptionRatio_110.setString("4588386");
      noLegs_1_1_1.set(LegOptionRatio_110);
      InstrumentLeg_110.insert(LegOptionRatio_110.getString());
      FIX::LegPool LegPool_110("STRING_635309318");
      noLegs_1_1_1.set(LegPool_110);
      InstrumentLeg_110.insert(LegPool_110.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_110("STRING_1592931382");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_110);
      InstrumentLeg_110.insert(LegPriceUnitOfMeasure_110.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_110;
      LegPriceUnitOfMeasureQty_110.setString("11784381");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_110);
      InstrumentLeg_110.insert(LegPriceUnitOfMeasureQty_110.getString());
      FIX::LegProduct LegProduct_110(2091141743);
      noLegs_1_1_1.set(LegProduct_110);
      InstrumentLeg_110.insert(LegProduct_110.getString());
      FIX::LegPutOrCall LegPutOrCall_110(1920144447);
      noLegs_1_1_1.set(LegPutOrCall_110);
      InstrumentLeg_110.insert(LegPutOrCall_110.getString());
      FIX::LegRatioQty LegRatioQty_110;
      LegRatioQty_110.setString("7987327");
      noLegs_1_1_1.set(LegRatioQty_110);
      InstrumentLeg_110.insert(LegRatioQty_110.getString());
      FIX::LegRedemptionDate LegRedemptionDate_110("LOCALMKTDATE_563788606");
      noLegs_1_1_1.set(LegRedemptionDate_110);
      InstrumentLeg_110.insert(LegRedemptionDate_110.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_110("STRING_1324556744");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_110);
      InstrumentLeg_110.insert(LegRepoCollateralSecurityType_110.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_110;
      LegRepurchaseRate_110.setString("95.300000");
      noLegs_1_1_1.set(LegRepurchaseRate_110);
      InstrumentLeg_110.insert(LegRepurchaseRate_110.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_110(572806223);
      noLegs_1_1_1.set(LegRepurchaseTerm_110);
      InstrumentLeg_110.insert(LegRepurchaseTerm_110.getString());
      FIX::LegSecurityDesc LegSecurityDesc_110("STRING_1071756949");
      noLegs_1_1_1.set(LegSecurityDesc_110);
      InstrumentLeg_110.insert(LegSecurityDesc_110.getString());
      FIX::LegSecurityExchange LegSecurityExchange_110("EXCHANGE_999393560");
      noLegs_1_1_1.set(LegSecurityExchange_110);
      InstrumentLeg_110.insert(LegSecurityExchange_110.getString());
      FIX::LegSecurityID LegSecurityID_110("STRING_1549002378");
      noLegs_1_1_1.set(LegSecurityID_110);
      InstrumentLeg_110.insert(LegSecurityID_110.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_110("STRING_814191865");
      noLegs_1_1_1.set(LegSecurityIDSource_110);
      InstrumentLeg_110.insert(LegSecurityIDSource_110.getString());
      FIX::LegSecuritySubType LegSecuritySubType_110("STRING_1166150708");
      noLegs_1_1_1.set(LegSecuritySubType_110);
      InstrumentLeg_110.insert(LegSecuritySubType_110.getString());
      FIX::LegSecurityType LegSecurityType_110("STRING_1296583862");
      noLegs_1_1_1.set(LegSecurityType_110);
      InstrumentLeg_110.insert(LegSecurityType_110.getString());
      FIX::LegSide LegSide_110('8');
      noLegs_1_1_1.set(LegSide_110);
      InstrumentLeg_110.insert(LegSide_110.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_110("STRING_822153839");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_110);
      InstrumentLeg_110.insert(LegStateOrProvinceOfIssue_110.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_110("CHF");
      noLegs_1_1_1.set(LegStrikeCurrency_110);
      InstrumentLeg_110.insert(LegStrikeCurrency_110.getString());
      FIX::LegStrikePrice LegStrikePrice_110;
      LegStrikePrice_110.setString("7943974");
      noLegs_1_1_1.set(LegStrikePrice_110);
      InstrumentLeg_110.insert(LegStrikePrice_110.getString());
      FIX::LegSymbol LegSymbol_110("STRING_1604741203");
      noLegs_1_1_1.set(LegSymbol_110);
      InstrumentLeg_110.insert(LegSymbol_110.getString());
      FIX::LegSymbolSfx LegSymbolSfx_110("STRING_577973351");
      noLegs_1_1_1.set(LegSymbolSfx_110);
      InstrumentLeg_110.insert(LegSymbolSfx_110.getString());
      FIX::LegTimeUnit LegTimeUnit_110("STRING_1446246450");
      noLegs_1_1_1.set(LegTimeUnit_110);
      InstrumentLeg_110.insert(LegTimeUnit_110.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_110("STRING_912582685");
      noLegs_1_1_1.set(LegUnitOfMeasure_110);
      InstrumentLeg_110.insert(LegUnitOfMeasure_110.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_110;
      LegUnitOfMeasureQty_110.setString("8634699");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_110);
      InstrumentLeg_110.insert(LegUnitOfMeasureQty_110.getString());
      all_values.push_back(InstrumentLeg_110);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_224;
        FIX::LegSecurityAltID LegSecurityAltID_224("STRING_690250549");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_224);
        LegSecAltIDGrp_NoLegSecurityAltID_224.insert(LegSecurityAltID_224.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_224("STRING_432122140");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_224);
        LegSecAltIDGrp_NoLegSecurityAltID_224.insert(LegSecurityAltIDSource_224.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_224);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_225;
        FIX::LegSecurityAltID LegSecurityAltID_225("STRING_995830841");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_225);
        LegSecAltIDGrp_NoLegSecurityAltID_225.insert(LegSecurityAltID_225.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_225("STRING_1149089166");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_225);
        LegSecAltIDGrp_NoLegSecurityAltID_225.insert(LegSecurityAltIDSource_225.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_225);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_7;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_7("EUR");
      noLegs_1_1_1.set(LegBenchmarkCurveCurrency_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurveCurrency_7.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_7("STRING_180043652");
      noLegs_1_1_1.set(LegBenchmarkCurveName_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurveName_7.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_7("STRING_1011089553");
      noLegs_1_1_1.set(LegBenchmarkCurvePoint_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurvePoint_7.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_7;
      LegBenchmarkPrice_7.setString("2139393");
      noLegs_1_1_1.set(LegBenchmarkPrice_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkPrice_7.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_7(978776393);
      noLegs_1_1_1.set(LegBenchmarkPriceType_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkPriceType_7.getString());
      all_values.push_back(LegBenchmarkCurveData_7);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_28;
        FIX::LegStipulationType LegStipulationType_28("STRING_1538496119");
        noLegStipulations_1_1_2_0.set(LegStipulationType_28);
        LegStipulations_NoLegStipulations_28.insert(LegStipulationType_28.getString());
        FIX::LegStipulationValue LegStipulationValue_28("STRING_1100475924");
        noLegStipulations_1_1_2_0.set(LegStipulationValue_28);
        LegStipulations_NoLegStipulations_28.insert(LegStipulationValue_28.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_28);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_29;
        FIX::LegStipulationType LegStipulationType_29("STRING_200735");
        noLegStipulations_1_1_2_1.set(LegStipulationType_29);
        LegStipulations_NoLegStipulations_29.insert(LegStipulationType_29.getString());
        FIX::LegStipulationValue LegStipulationValue_29("STRING_462769420");
        noLegStipulations_1_1_2_1.set(LegStipulationValue_29);
        LegStipulations_NoLegStipulations_29.insert(LegStipulationValue_29.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_29);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_30;
        FIX::LegStipulationType LegStipulationType_30("STRING_2099869484");
        noLegStipulations_1_1_2_2.set(LegStipulationType_30);
        LegStipulations_NoLegStipulations_30.insert(LegStipulationType_30.getString());
        FIX::LegStipulationValue LegStipulationValue_30("STRING_1549203113");
        noLegStipulations_1_1_2_2.set(LegStipulationValue_30);
        LegStipulations_NoLegStipulations_30.insert(LegStipulationValue_30.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_30);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_109;
        FIX::NestedPartyID NestedPartyID_109("STRING_1118536545");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyID_109.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_109('6');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyIDSource_109.getString());
        FIX::NestedPartyRole NestedPartyRole_109(2132876093);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyRole_109.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_109);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_237;
          FIX::NestedPartySubID NestedPartySubID_237("STRING_685574117");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_237);
          NstdPtysSubGrp_NoNestedPartySubIDs_237.insert(NestedPartySubID_237.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_237(25284090);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_237);
          NstdPtysSubGrp_NoNestedPartySubIDs_237.insert(NestedPartySubIDType_237.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_237);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_238;
          FIX::NestedPartySubID NestedPartySubID_238("STRING_587604187");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_238);
          NstdPtysSubGrp_NoNestedPartySubIDs_238.insert(NestedPartySubID_238.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_238(142831672);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_238);
          NstdPtysSubGrp_NoNestedPartySubIDs_238.insert(NestedPartySubIDType_238.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_238);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_239;
          FIX::NestedPartySubID NestedPartySubID_239("STRING_603257441");
          noNestedPartySubIDs_1_1_0_3_2.set(NestedPartySubID_239);
          NstdPtysSubGrp_NoNestedPartySubIDs_239.insert(NestedPartySubID_239.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_239(2033850637);
          noNestedPartySubIDs_1_1_0_3_2.set(NestedPartySubIDType_239);
          NstdPtysSubGrp_NoNestedPartySubIDs_239.insert(NestedPartySubIDType_239.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_239);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_2);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_110;
        FIX::NestedPartyID NestedPartyID_110("STRING_1055414358");
        noNestedPartyIDs_1_1_2_1.set(NestedPartyID_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyID_110.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_110('1');
        noNestedPartyIDs_1_1_2_1.set(NestedPartyIDSource_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyIDSource_110.getString());
        FIX::NestedPartyRole NestedPartyRole_110(960081808);
        noNestedPartyIDs_1_1_2_1.set(NestedPartyRole_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyRole_110.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_110);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_240;
          FIX::NestedPartySubID NestedPartySubID_240("STRING_1898849512");
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubID_240);
          NstdPtysSubGrp_NoNestedPartySubIDs_240.insert(NestedPartySubID_240.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_240(1955912649);
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubIDType_240);
          NstdPtysSubGrp_NoNestedPartySubIDs_240.insert(NestedPartySubIDType_240.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_240);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_241;
          FIX::NestedPartySubID NestedPartySubID_241("STRING_747270426");
          noNestedPartySubIDs_1_1_1_3_1.set(NestedPartySubID_241);
          NstdPtysSubGrp_NoNestedPartySubIDs_241.insert(NestedPartySubID_241.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_241(818797322);
          noNestedPartySubIDs_1_1_1_3_1.set(NestedPartySubIDType_241);
          NstdPtysSubGrp_NoNestedPartySubIDs_241.insert(NestedPartySubIDType_241.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_241);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_1);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_111;
        FIX::NestedPartyID NestedPartyID_111("STRING_249707576");
        noNestedPartyIDs_1_1_2_2.set(NestedPartyID_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyID_111.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_111('9');
        noNestedPartyIDs_1_1_2_2.set(NestedPartyIDSource_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyIDSource_111.getString());
        FIX::NestedPartyRole NestedPartyRole_111(1829886876);
        noNestedPartyIDs_1_1_2_2.set(NestedPartyRole_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyRole_111.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_111);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_242;
          FIX::NestedPartySubID NestedPartySubID_242("STRING_1906090471");
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubID_242);
          NstdPtysSubGrp_NoNestedPartySubIDs_242.insert(NestedPartySubID_242.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_242(1257281388);
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubIDType_242);
          NstdPtysSubGrp_NoNestedPartySubIDs_242.insert(NestedPartySubIDType_242.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_242);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_243;
          FIX::NestedPartySubID NestedPartySubID_243("STRING_2002143070");
          noNestedPartySubIDs_1_1_2_3_1.set(NestedPartySubID_243);
          NstdPtysSubGrp_NoNestedPartySubIDs_243.insert(NestedPartySubID_243.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_243(859082747);
          noNestedPartySubIDs_1_1_2_3_1.set(NestedPartySubIDType_243);
          NstdPtysSubGrp_NoNestedPartySubIDs_243.insert(NestedPartySubIDType_243.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_243);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_244;
          FIX::NestedPartySubID NestedPartySubID_244("STRING_1257482123");
          noNestedPartySubIDs_1_1_2_3_2.set(NestedPartySubID_244);
          NstdPtysSubGrp_NoNestedPartySubIDs_244.insert(NestedPartySubID_244.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_244(317428842);
          noNestedPartySubIDs_1_1_2_3_2.set(NestedPartySubIDType_244);
          NstdPtysSubGrp_NoNestedPartySubIDs_244.insert(NestedPartySubIDType_244.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_244);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_2);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_1_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_5;
      FIX::LegOrderQty LegOrderQty_12;
      LegOrderQty_12.setString("8114685");
      noLegs_1_1_2.set(LegOrderQty_12);
      QuotReqLegsGrp_NoLegs_5.insert(LegOrderQty_12.getString());
      FIX::LegQty LegQty_12;
      LegQty_12.setString("6592015");
      noLegs_1_1_2.set(LegQty_12);
      QuotReqLegsGrp_NoLegs_5.insert(LegQty_12.getString());
      FIX::LegRefID LegRefID_12("STRING_1594390127");
      noLegs_1_1_2.set(LegRefID_12);
      QuotReqLegsGrp_NoLegs_5.insert(LegRefID_12.getString());
      FIX::LegSettlDate LegSettlDate_12("LOCALMKTDATE_1930005129");
      noLegs_1_1_2.set(LegSettlDate_12);
      QuotReqLegsGrp_NoLegs_5.insert(LegSettlDate_12.getString());
      FIX::LegSettlType LegSettlType_12('1');
      noLegs_1_1_2.set(LegSettlType_12);
      QuotReqLegsGrp_NoLegs_5.insert(LegSettlType_12.getString());
      FIX::LegSwapType LegSwapType_12(1);
      noLegs_1_1_2.set(LegSwapType_12);
      QuotReqLegsGrp_NoLegs_5.insert(LegSwapType_12.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_5);
      all_compo_names.insert("QuotReqLegsGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_111;
      FIX::EncodedLegIssuer EncodedLegIssuer_111("DATA_1723211865");
      noLegs_1_1_2.set(EncodedLegIssuer_111);
      InstrumentLeg_111.insert(EncodedLegIssuer_111.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_111(2043079033);
      noLegs_1_1_2.set(EncodedLegIssuerLen_111);
      InstrumentLeg_111.insert(EncodedLegIssuerLen_111.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_111("DATA_1605066662");
      noLegs_1_1_2.set(EncodedLegSecurityDesc_111);
      InstrumentLeg_111.insert(EncodedLegSecurityDesc_111.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_111(163332404);
      noLegs_1_1_2.set(EncodedLegSecurityDescLen_111);
      InstrumentLeg_111.insert(EncodedLegSecurityDescLen_111.getString());
      FIX::LegCFICode LegCFICode_111("STRING_38427057");
      noLegs_1_1_2.set(LegCFICode_111);
      InstrumentLeg_111.insert(LegCFICode_111.getString());
      FIX::LegContractMultiplier LegContractMultiplier_111;
      LegContractMultiplier_111.setString("608404");
      noLegs_1_1_2.set(LegContractMultiplier_111);
      InstrumentLeg_111.insert(LegContractMultiplier_111.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_111(49699394);
      noLegs_1_1_2.set(LegContractMultiplierUnit_111);
      InstrumentLeg_111.insert(LegContractMultiplierUnit_111.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_111("MONTHYEAR_1093841415");
      noLegs_1_1_2.set(LegContractSettlMonth_111);
      InstrumentLeg_111.insert(LegContractSettlMonth_111.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_111("COUNTRY_1527567826");
      noLegs_1_1_2.set(LegCountryOfIssue_111);
      InstrumentLeg_111.insert(LegCountryOfIssue_111.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_111("LOCALMKTDATE_1009781202");
      noLegs_1_1_2.set(LegCouponPaymentDate_111);
      InstrumentLeg_111.insert(LegCouponPaymentDate_111.getString());
      FIX::LegCouponRate LegCouponRate_111;
      LegCouponRate_111.setString("26.750000");
      noLegs_1_1_2.set(LegCouponRate_111);
      InstrumentLeg_111.insert(LegCouponRate_111.getString());
      FIX::LegCreditRating LegCreditRating_111("STRING_1278933690");
      noLegs_1_1_2.set(LegCreditRating_111);
      InstrumentLeg_111.insert(LegCreditRating_111.getString());
      FIX::LegCurrency LegCurrency_111("CHF");
      noLegs_1_1_2.set(LegCurrency_111);
      InstrumentLeg_111.insert(LegCurrency_111.getString());
      FIX::LegDatedDate LegDatedDate_111("LOCALMKTDATE_2097731013");
      noLegs_1_1_2.set(LegDatedDate_111);
      InstrumentLeg_111.insert(LegDatedDate_111.getString());
      FIX::LegExerciseStyle LegExerciseStyle_111(1067917779);
      noLegs_1_1_2.set(LegExerciseStyle_111);
      InstrumentLeg_111.insert(LegExerciseStyle_111.getString());
      FIX::LegFactor LegFactor_111;
      LegFactor_111.setString("2191235");
      noLegs_1_1_2.set(LegFactor_111);
      InstrumentLeg_111.insert(LegFactor_111.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_111(1780134241);
      noLegs_1_1_2.set(LegFlowScheduleType_111);
      InstrumentLeg_111.insert(LegFlowScheduleType_111.getString());
      FIX::LegInstrRegistry LegInstrRegistry_111("STRING_1531564730");
      noLegs_1_1_2.set(LegInstrRegistry_111);
      InstrumentLeg_111.insert(LegInstrRegistry_111.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_111("LOCALMKTDATE_2125214002");
      noLegs_1_1_2.set(LegInterestAccrualDate_111);
      InstrumentLeg_111.insert(LegInterestAccrualDate_111.getString());
      FIX::LegIssueDate LegIssueDate_111("LOCALMKTDATE_889931981");
      noLegs_1_1_2.set(LegIssueDate_111);
      InstrumentLeg_111.insert(LegIssueDate_111.getString());
      FIX::LegIssuer LegIssuer_111("STRING_1386224152");
      noLegs_1_1_2.set(LegIssuer_111);
      InstrumentLeg_111.insert(LegIssuer_111.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_111("STRING_836813102");
      noLegs_1_1_2.set(LegLocaleOfIssue_111);
      InstrumentLeg_111.insert(LegLocaleOfIssue_111.getString());
      FIX::LegMaturityDate LegMaturityDate_111("LOCALMKTDATE_2147414104");
      noLegs_1_1_2.set(LegMaturityDate_111);
      InstrumentLeg_111.insert(LegMaturityDate_111.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_111("MONTHYEAR_1703652994");
      noLegs_1_1_2.set(LegMaturityMonthYear_111);
      InstrumentLeg_111.insert(LegMaturityMonthYear_111.getString());
      FIX::LegMaturityTime LegMaturityTime_111("TZTIMEONLY_1648281686");
      noLegs_1_1_2.set(LegMaturityTime_111);
      InstrumentLeg_111.insert(LegMaturityTime_111.getString());
      FIX::LegOptAttribute LegOptAttribute_111('6');
      noLegs_1_1_2.set(LegOptAttribute_111);
      InstrumentLeg_111.insert(LegOptAttribute_111.getString());
      FIX::LegOptionRatio LegOptionRatio_111;
      LegOptionRatio_111.setString("11505594");
      noLegs_1_1_2.set(LegOptionRatio_111);
      InstrumentLeg_111.insert(LegOptionRatio_111.getString());
      FIX::LegPool LegPool_111("STRING_1430803167");
      noLegs_1_1_2.set(LegPool_111);
      InstrumentLeg_111.insert(LegPool_111.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_111("STRING_2016636960");
      noLegs_1_1_2.set(LegPriceUnitOfMeasure_111);
      InstrumentLeg_111.insert(LegPriceUnitOfMeasure_111.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_111;
      LegPriceUnitOfMeasureQty_111.setString("5828583");
      noLegs_1_1_2.set(LegPriceUnitOfMeasureQty_111);
      InstrumentLeg_111.insert(LegPriceUnitOfMeasureQty_111.getString());
      FIX::LegProduct LegProduct_111(1006531384);
      noLegs_1_1_2.set(LegProduct_111);
      InstrumentLeg_111.insert(LegProduct_111.getString());
      FIX::LegPutOrCall LegPutOrCall_111(1912232345);
      noLegs_1_1_2.set(LegPutOrCall_111);
      InstrumentLeg_111.insert(LegPutOrCall_111.getString());
      FIX::LegRatioQty LegRatioQty_111;
      LegRatioQty_111.setString("404414");
      noLegs_1_1_2.set(LegRatioQty_111);
      InstrumentLeg_111.insert(LegRatioQty_111.getString());
      FIX::LegRedemptionDate LegRedemptionDate_111("LOCALMKTDATE_1169863788");
      noLegs_1_1_2.set(LegRedemptionDate_111);
      InstrumentLeg_111.insert(LegRedemptionDate_111.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_111("STRING_1950659403");
      noLegs_1_1_2.set(LegRepoCollateralSecurityType_111);
      InstrumentLeg_111.insert(LegRepoCollateralSecurityType_111.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_111;
      LegRepurchaseRate_111.setString("18.660000");
      noLegs_1_1_2.set(LegRepurchaseRate_111);
      InstrumentLeg_111.insert(LegRepurchaseRate_111.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_111(1219563182);
      noLegs_1_1_2.set(LegRepurchaseTerm_111);
      InstrumentLeg_111.insert(LegRepurchaseTerm_111.getString());
      FIX::LegSecurityDesc LegSecurityDesc_111("STRING_897017170");
      noLegs_1_1_2.set(LegSecurityDesc_111);
      InstrumentLeg_111.insert(LegSecurityDesc_111.getString());
      FIX::LegSecurityExchange LegSecurityExchange_111("EXCHANGE_1628849693");
      noLegs_1_1_2.set(LegSecurityExchange_111);
      InstrumentLeg_111.insert(LegSecurityExchange_111.getString());
      FIX::LegSecurityID LegSecurityID_111("STRING_81860736");
      noLegs_1_1_2.set(LegSecurityID_111);
      InstrumentLeg_111.insert(LegSecurityID_111.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_111("STRING_1589039845");
      noLegs_1_1_2.set(LegSecurityIDSource_111);
      InstrumentLeg_111.insert(LegSecurityIDSource_111.getString());
      FIX::LegSecuritySubType LegSecuritySubType_111("STRING_760299735");
      noLegs_1_1_2.set(LegSecuritySubType_111);
      InstrumentLeg_111.insert(LegSecuritySubType_111.getString());
      FIX::LegSecurityType LegSecurityType_111("STRING_900070939");
      noLegs_1_1_2.set(LegSecurityType_111);
      InstrumentLeg_111.insert(LegSecurityType_111.getString());
      FIX::LegSide LegSide_111('8');
      noLegs_1_1_2.set(LegSide_111);
      InstrumentLeg_111.insert(LegSide_111.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_111("STRING_710547100");
      noLegs_1_1_2.set(LegStateOrProvinceOfIssue_111);
      InstrumentLeg_111.insert(LegStateOrProvinceOfIssue_111.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_111("CAN");
      noLegs_1_1_2.set(LegStrikeCurrency_111);
      InstrumentLeg_111.insert(LegStrikeCurrency_111.getString());
      FIX::LegStrikePrice LegStrikePrice_111;
      LegStrikePrice_111.setString("3431976");
      noLegs_1_1_2.set(LegStrikePrice_111);
      InstrumentLeg_111.insert(LegStrikePrice_111.getString());
      FIX::LegSymbol LegSymbol_111("STRING_1352069801");
      noLegs_1_1_2.set(LegSymbol_111);
      InstrumentLeg_111.insert(LegSymbol_111.getString());
      FIX::LegSymbolSfx LegSymbolSfx_111("STRING_1077703184");
      noLegs_1_1_2.set(LegSymbolSfx_111);
      InstrumentLeg_111.insert(LegSymbolSfx_111.getString());
      FIX::LegTimeUnit LegTimeUnit_111("STRING_1233129674");
      noLegs_1_1_2.set(LegTimeUnit_111);
      InstrumentLeg_111.insert(LegTimeUnit_111.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_111("STRING_590810306");
      noLegs_1_1_2.set(LegUnitOfMeasure_111);
      InstrumentLeg_111.insert(LegUnitOfMeasure_111.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_111;
      LegUnitOfMeasureQty_111.setString("19145162");
      noLegs_1_1_2.set(LegUnitOfMeasureQty_111);
      InstrumentLeg_111.insert(LegUnitOfMeasureQty_111.getString());
      all_values.push_back(InstrumentLeg_111);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_226;
        FIX::LegSecurityAltID LegSecurityAltID_226("STRING_146979652");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltID_226);
        LegSecAltIDGrp_NoLegSecurityAltID_226.insert(LegSecurityAltID_226.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_226("STRING_1415314324");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltIDSource_226);
        LegSecAltIDGrp_NoLegSecurityAltID_226.insert(LegSecurityAltIDSource_226.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_226);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_227;
        FIX::LegSecurityAltID LegSecurityAltID_227("STRING_1892192175");
        noLegSecurityAltID_1_2_2_1.set(LegSecurityAltID_227);
        LegSecAltIDGrp_NoLegSecurityAltID_227.insert(LegSecurityAltID_227.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_227("STRING_1297539126");
        noLegSecurityAltID_1_2_2_1.set(LegSecurityAltIDSource_227);
        LegSecAltIDGrp_NoLegSecurityAltID_227.insert(LegSecurityAltIDSource_227.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_227);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_8;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_8("EUR");
      noLegs_1_1_2.set(LegBenchmarkCurveCurrency_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurveCurrency_8.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_8("STRING_1880397523");
      noLegs_1_1_2.set(LegBenchmarkCurveName_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurveName_8.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_8("STRING_1705165227");
      noLegs_1_1_2.set(LegBenchmarkCurvePoint_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurvePoint_8.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_8;
      LegBenchmarkPrice_8.setString("15260941");
      noLegs_1_1_2.set(LegBenchmarkPrice_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkPrice_8.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_8(1920838935);
      noLegs_1_1_2.set(LegBenchmarkPriceType_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkPriceType_8.getString());
      all_values.push_back(LegBenchmarkCurveData_8);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_31;
        FIX::LegStipulationType LegStipulationType_31("STRING_1329269940");
        noLegStipulations_1_2_2_0.set(LegStipulationType_31);
        LegStipulations_NoLegStipulations_31.insert(LegStipulationType_31.getString());
        FIX::LegStipulationValue LegStipulationValue_31("STRING_2022120801");
        noLegStipulations_1_2_2_0.set(LegStipulationValue_31);
        LegStipulations_NoLegStipulations_31.insert(LegStipulationValue_31.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_31);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_32;
        FIX::LegStipulationType LegStipulationType_32("STRING_1947108550");
        noLegStipulations_1_2_2_1.set(LegStipulationType_32);
        LegStipulations_NoLegStipulations_32.insert(LegStipulationType_32.getString());
        FIX::LegStipulationValue LegStipulationValue_32("STRING_78803462");
        noLegStipulations_1_2_2_1.set(LegStipulationValue_32);
        LegStipulations_NoLegStipulations_32.insert(LegStipulationValue_32.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_32);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_112;
        FIX::NestedPartyID NestedPartyID_112("STRING_2028969286");
        noNestedPartyIDs_1_2_2_0.set(NestedPartyID_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyID_112.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_112('1');
        noNestedPartyIDs_1_2_2_0.set(NestedPartyIDSource_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyIDSource_112.getString());
        FIX::NestedPartyRole NestedPartyRole_112(116302934);
        noNestedPartyIDs_1_2_2_0.set(NestedPartyRole_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyRole_112.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_112);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_245;
          FIX::NestedPartySubID NestedPartySubID_245("STRING_401208958");
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubID_245);
          NstdPtysSubGrp_NoNestedPartySubIDs_245.insert(NestedPartySubID_245.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_245(826850034);
          noNestedPartySubIDs_1_2_0_3_0.set(NestedPartySubIDType_245);
          NstdPtysSubGrp_NoNestedPartySubIDs_245.insert(NestedPartySubIDType_245.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_245);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_246;
          FIX::NestedPartySubID NestedPartySubID_246("STRING_602061649");
          noNestedPartySubIDs_1_2_0_3_1.set(NestedPartySubID_246);
          NstdPtysSubGrp_NoNestedPartySubIDs_246.insert(NestedPartySubID_246.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_246(1501181788);
          noNestedPartySubIDs_1_2_0_3_1.set(NestedPartySubIDType_246);
          NstdPtysSubGrp_NoNestedPartySubIDs_246.insert(NestedPartySubIDType_246.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_246);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

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
      multiset<string> RateSource_NoRateSources_16;
      FIX::RateSource RateSource_25(2);
      noRateSources_1_1_0.set(RateSource_25);
      RateSource_NoRateSources_16.insert(RateSource_25.getString());
      FIX::RateSourceType RateSourceType_16(0);
      noRateSources_1_1_0.set(RateSourceType_16);
      RateSource_NoRateSources_16.insert(RateSourceType_16.getString());
      FIX::ReferencePage ReferencePage_16("STRING_255693754");
      noRateSources_1_1_0.set(ReferencePage_16);
      RateSource_NoRateSources_16.insert(ReferencePage_16.getString());
      all_values.push_back(RateSource_NoRateSources_16);
      all_compo_names.insert("RateSource.NoRateSources");

      noRelatedSym_0_1.addGroup(noRateSources_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_1_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_17;
      FIX::RateSource RateSource_26(0);
      noRateSources_1_1_1.set(RateSource_26);
      RateSource_NoRateSources_17.insert(RateSource_26.getString());
      FIX::RateSourceType RateSourceType_17(0);
      noRateSources_1_1_1.set(RateSourceType_17);
      RateSource_NoRateSources_17.insert(RateSourceType_17.getString());
      FIX::ReferencePage ReferencePage_17("STRING_1488753885");
      noRateSources_1_1_1.set(ReferencePage_17);
      RateSource_NoRateSources_17.insert(ReferencePage_17.getString());
      all_values.push_back(RateSource_NoRateSources_17);
      all_compo_names.insert("RateSource.NoRateSources");

      noRelatedSym_0_1.addGroup(noRateSources_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_23;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_23("JPY");
    noRelatedSym_0_1.set(BenchmarkCurveCurrency_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurveCurrency_23.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_23("STRING_LIBID");
    noRelatedSym_0_1.set(BenchmarkCurveName_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurveName_23.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_23("STRING_1841976887");
    noRelatedSym_0_1.set(BenchmarkCurvePoint_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurvePoint_23.getString());
    FIX::BenchmarkPrice BenchmarkPrice_23;
    BenchmarkPrice_23.setString("1648984");
    noRelatedSym_0_1.set(BenchmarkPrice_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkPrice_23.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_23(847324251);
    noRelatedSym_0_1.set(BenchmarkPriceType_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkPriceType_23.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_23("STRING_1574890762");
    noRelatedSym_0_1.set(BenchmarkSecurityID_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkSecurityID_23.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_23("STRING_1870063708");
    noRelatedSym_0_1.set(BenchmarkSecurityIDSource_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkSecurityIDSource_23.getString());
    FIX::Spread Spread_23;
    Spread_23.setString("2259347");
    noRelatedSym_0_1.set(Spread_23);
    SpreadOrBenchmarkCurveData_23.insert(Spread_23.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_23);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_37;
      FIX::StipulationType StipulationType_37("STRING_TRADERCREDIT");
      noStipulations_1_1_0.set(StipulationType_37);
      Stipulations_NoStipulations_37.insert(StipulationType_37.getString());
      FIX::StipulationValue StipulationValue_37("STRING_1555204728");
      noStipulations_1_1_0.set(StipulationValue_37);
      Stipulations_NoStipulations_37.insert(StipulationValue_37.getString());
      all_values.push_back(Stipulations_NoStipulations_37);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_38;
      FIX::StipulationType StipulationType_38("STRING_BGNCON");
      noStipulations_1_1_1.set(StipulationType_38);
      Stipulations_NoStipulations_38.insert(StipulationType_38.getString());
      FIX::StipulationValue StipulationValue_38("STRING_249750329");
      noStipulations_1_1_1.set(StipulationValue_38);
      Stipulations_NoStipulations_38.insert(StipulationValue_38.getString());
      all_values.push_back(Stipulations_NoStipulations_38);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_1_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_39;
      FIX::StipulationType StipulationType_39("STRING_PROTECT");
      noStipulations_1_1_2.set(StipulationType_39);
      Stipulations_NoStipulations_39.insert(StipulationType_39.getString());
      FIX::StipulationValue StipulationValue_39("STRING_578886401");
      noStipulations_1_1_2.set(StipulationValue_39);
      Stipulations_NoStipulations_39.insert(StipulationValue_39.getString());
      all_values.push_back(Stipulations_NoStipulations_39);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_100;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_100("DATA_1154367851");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingIssuer_100.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_100(695189335);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingIssuerLen_100.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_100("DATA_912792546");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingSecurityDesc_100.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_100(1555576809);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_100);
      UnderlyingInstrument_100.insert(EncodedUnderlyingSecurityDescLen_100.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_100;
      UnderlyingAdjustedQuantity_100.setString("15220393");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_100);
      UnderlyingInstrument_100.insert(UnderlyingAdjustedQuantity_100.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_100;
      UnderlyingAllocationPercent_100.setString("41.950000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_100);
      UnderlyingInstrument_100.insert(UnderlyingAllocationPercent_100.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_100;
      UnderlyingAttachmentPoint_100.setString("49.490000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_100);
      UnderlyingInstrument_100.insert(UnderlyingAttachmentPoint_100.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_100("STRING_544603450");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_100);
      UnderlyingInstrument_100.insert(UnderlyingCFICode_100.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_100("STRING_1321501997");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_100);
      UnderlyingInstrument_100.insert(UnderlyingCPProgram_100.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_100("STRING_1340676273");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_100);
      UnderlyingInstrument_100.insert(UnderlyingCPRegType_100.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_100;
      UnderlyingCapValue_100.setString("8002972");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_100);
      UnderlyingInstrument_100.insert(UnderlyingCapValue_100.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_100;
      UnderlyingCashAmount_100.setString("17189601");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_100);
      UnderlyingInstrument_100.insert(UnderlyingCashAmount_100.getString());
      FIX::UnderlyingCashType UnderlyingCashType_100("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_100);
      UnderlyingInstrument_100.insert(UnderlyingCashType_100.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_100;
      UnderlyingContractMultiplier_100.setString("1415674");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_100);
      UnderlyingInstrument_100.insert(UnderlyingContractMultiplier_100.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_100(115914219);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_100);
      UnderlyingInstrument_100.insert(UnderlyingContractMultiplierUnit_100.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_100("COUNTRY_1005374873");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingCountryOfIssue_100.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_100("LOCALMKTDATE_1375029853");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_100);
      UnderlyingInstrument_100.insert(UnderlyingCouponPaymentDate_100.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_100;
      UnderlyingCouponRate_100.setString("11.060000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_100);
      UnderlyingInstrument_100.insert(UnderlyingCouponRate_100.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_100("STRING_1170273354");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_100);
      UnderlyingInstrument_100.insert(UnderlyingCreditRating_100.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_100("JPY");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_100);
      UnderlyingInstrument_100.insert(UnderlyingCurrency_100.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_100;
      UnderlyingCurrentValue_100.setString("8928534");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_100);
      UnderlyingInstrument_100.insert(UnderlyingCurrentValue_100.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_100;
      UnderlyingDetachmentPoint_100.setString("52.450000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_100);
      UnderlyingInstrument_100.insert(UnderlyingDetachmentPoint_100.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_100;
      UnderlyingDirtyPrice_100.setString("5860606");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_100);
      UnderlyingInstrument_100.insert(UnderlyingDirtyPrice_100.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_100;
      UnderlyingEndPrice_100.setString("13429788");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_100);
      UnderlyingInstrument_100.insert(UnderlyingEndPrice_100.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_100;
      UnderlyingEndValue_100.setString("18560099");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_100);
      UnderlyingInstrument_100.insert(UnderlyingEndValue_100.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_100(1808943825);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_100);
      UnderlyingInstrument_100.insert(UnderlyingExerciseStyle_100.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_100;
      UnderlyingFXRate_100.setString("15927291");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_100);
      UnderlyingInstrument_100.insert(UnderlyingFXRate_100.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_100('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_100);
      UnderlyingInstrument_100.insert(UnderlyingFXRateCalc_100.getString());
      FIX::UnderlyingFactor UnderlyingFactor_100;
      UnderlyingFactor_100.setString("2403465");
      noUnderlyings_1_1_0.set(UnderlyingFactor_100);
      UnderlyingInstrument_100.insert(UnderlyingFactor_100.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_100(1723965139);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_100);
      UnderlyingInstrument_100.insert(UnderlyingFlowScheduleType_100.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_100("STRING_349418720");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_100);
      UnderlyingInstrument_100.insert(UnderlyingInstrRegistry_100.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_100("LOCALMKTDATE_935535914");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_100);
      UnderlyingInstrument_100.insert(UnderlyingIssueDate_100.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_100("STRING_489274037");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_100);
      UnderlyingInstrument_100.insert(UnderlyingIssuer_100.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_100("STRING_1904995529");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingLocaleOfIssue_100.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_100("LOCALMKTDATE_310091636");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityDate_100.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_100("MONTHYEAR_2004128232");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityMonthYear_100.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_100("TZTIMEONLY_666786831");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_100);
      UnderlyingInstrument_100.insert(UnderlyingMaturityTime_100.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_100;
      UnderlyingNotionalPercentageOutstanding_100.setString("50.860000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_100);
      UnderlyingInstrument_100.insert(UnderlyingNotionalPercentageOutstanding_100.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_100('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_100);
      UnderlyingInstrument_100.insert(UnderlyingOptAttribute_100.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_100;
      UnderlyingOriginalNotionalPercentageOutstanding_100.setString("31.040000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_100);
      UnderlyingInstrument_100.insert(UnderlyingOriginalNotionalPercentageOutstanding_100.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_100("STRING_1654992290");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_100);
      UnderlyingInstrument_100.insert(UnderlyingPriceUnitOfMeasure_100.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_100;
      UnderlyingPriceUnitOfMeasureQty_100.setString("7496230");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_100);
      UnderlyingInstrument_100.insert(UnderlyingPriceUnitOfMeasureQty_100.getString());
      FIX::UnderlyingProduct UnderlyingProduct_100(1399089692);
      noUnderlyings_1_1_0.set(UnderlyingProduct_100);
      UnderlyingInstrument_100.insert(UnderlyingProduct_100.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_100(1796559732);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_100);
      UnderlyingInstrument_100.insert(UnderlyingPutOrCall_100.getString());
      FIX::UnderlyingPx UnderlyingPx_100;
      UnderlyingPx_100.setString("8655372");
      noUnderlyings_1_1_0.set(UnderlyingPx_100);
      UnderlyingInstrument_100.insert(UnderlyingPx_100.getString());
      FIX::UnderlyingQty UnderlyingQty_100;
      UnderlyingQty_100.setString("2569809");
      noUnderlyings_1_1_0.set(UnderlyingQty_100);
      UnderlyingInstrument_100.insert(UnderlyingQty_100.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_100("LOCALMKTDATE_1024105937");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_100);
      UnderlyingInstrument_100.insert(UnderlyingRedemptionDate_100.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_100("STRING_675944717");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_100);
      UnderlyingInstrument_100.insert(UnderlyingRepoCollateralSecurityType_100.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_100;
      UnderlyingRepurchaseRate_100.setString("42.720000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_100);
      UnderlyingInstrument_100.insert(UnderlyingRepurchaseRate_100.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_100(1098976394);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_100);
      UnderlyingInstrument_100.insert(UnderlyingRepurchaseTerm_100.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_100("STRING_2061242937");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_100);
      UnderlyingInstrument_100.insert(UnderlyingRestructuringType_100.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_100("STRING_172624038");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityDesc_100.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_100("EXCHANGE_1399781640");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityExchange_100.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_100("STRING_499819911");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityID_100.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_100("STRING_1515602880");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityIDSource_100.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_100("STRING_1108307966");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_100);
      UnderlyingInstrument_100.insert(UnderlyingSecuritySubType_100.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_100("STRING_161280088");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_100);
      UnderlyingInstrument_100.insert(UnderlyingSecurityType_100.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_100("STRING_960848404");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_100);
      UnderlyingInstrument_100.insert(UnderlyingSeniority_100.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_100("STRING_303358835");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_100);
      UnderlyingInstrument_100.insert(UnderlyingSettlMethod_100.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_100(5);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_100);
      UnderlyingInstrument_100.insert(UnderlyingSettlementType_100.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_100;
      UnderlyingStartValue_100.setString("5373298");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_100);
      UnderlyingInstrument_100.insert(UnderlyingStartValue_100.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_100("STRING_652777555");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_100);
      UnderlyingInstrument_100.insert(UnderlyingStateOrProvinceOfIssue_100.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_100("CHF");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_100);
      UnderlyingInstrument_100.insert(UnderlyingStrikeCurrency_100.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_100;
      UnderlyingStrikePrice_100.setString("4102894");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_100);
      UnderlyingInstrument_100.insert(UnderlyingStrikePrice_100.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_100("STRING_1647254217");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_100);
      UnderlyingInstrument_100.insert(UnderlyingSymbol_100.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_100("STRING_883248517");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_100);
      UnderlyingInstrument_100.insert(UnderlyingSymbolSfx_100.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_100("STRING_1077076267");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_100);
      UnderlyingInstrument_100.insert(UnderlyingTimeUnit_100.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_100("STRING_354465655");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_100);
      UnderlyingInstrument_100.insert(UnderlyingUnitOfMeasure_100.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_100;
      UnderlyingUnitOfMeasureQty_100.setString("20613950");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_100);
      UnderlyingInstrument_100.insert(UnderlyingUnitOfMeasureQty_100.getString());
      all_values.push_back(UnderlyingInstrument_100);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_198;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_198("STRING_2009457945");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltID_198.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_198("STRING_663534491");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_198);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_198.insert(UnderlyingSecurityAltIDSource_198.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_201;
        FIX::UnderlyingStipType UnderlyingStipType_201("STRING_1658534029");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_201);
        UnderlyingStipulations_NoUnderlyingStips_201.insert(UnderlyingStipType_201.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_201("STRING_1529071750");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_201);
        UnderlyingStipulations_NoUnderlyingStips_201.insert(UnderlyingStipValue_201.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_201);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_185;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_185("STRING_535156319");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyID_185.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_185('5');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyIDSource_185.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_185(1872896957);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_185);
        UndlyInstrumentParties_NoUndlyInstrumentParties_185.insert(UnderlyingInstrumentPartyRole_185.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_185);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_372("STRING_2118775757");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_372);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372.insert(UnderlyingInstrumentPartySubID_372.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_372(2045520996);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_372);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372.insert(UnderlyingInstrumentPartySubIDType_372.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_373("STRING_886430705");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_373);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373.insert(UnderlyingInstrumentPartySubID_373.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_373(471112020);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_373);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373.insert(UnderlyingInstrumentPartySubIDType_373.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_186;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_186("STRING_1413640228");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyID_186.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_186('1');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyIDSource_186.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_186(632392109);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_186);
        UndlyInstrumentParties_NoUndlyInstrumentParties_186.insert(UnderlyingInstrumentPartyRole_186.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_186);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_374("STRING_150613858");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_374);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374.insert(UnderlyingInstrumentPartySubID_374.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_374(1034018776);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_374);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374.insert(UnderlyingInstrumentPartySubIDType_374.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_187;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_187("STRING_764334880");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyID_187.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_187('8');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyIDSource_187.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_187(223697709);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_187);
        UndlyInstrumentParties_NoUndlyInstrumentParties_187.insert(UnderlyingInstrumentPartyRole_187.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_187);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_375("STRING_1213680850");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_375);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375.insert(UnderlyingInstrumentPartySubID_375.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_375(1870951926);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_375);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375.insert(UnderlyingInstrumentPartySubIDType_375.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_376("STRING_526703682");
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubID_376);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376.insert(UnderlyingInstrumentPartySubID_376.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_376(143273469);
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_376);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376.insert(UnderlyingInstrumentPartySubIDType_376.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_101;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_101("DATA_77933933");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingIssuer_101.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_101(440615134);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingIssuerLen_101.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_101("DATA_1080329193");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingSecurityDesc_101.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_101(2087391878);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_101);
      UnderlyingInstrument_101.insert(EncodedUnderlyingSecurityDescLen_101.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_101;
      UnderlyingAdjustedQuantity_101.setString("11041496");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_101);
      UnderlyingInstrument_101.insert(UnderlyingAdjustedQuantity_101.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_101;
      UnderlyingAllocationPercent_101.setString("9.610000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_101);
      UnderlyingInstrument_101.insert(UnderlyingAllocationPercent_101.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_101;
      UnderlyingAttachmentPoint_101.setString("22.600000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_101);
      UnderlyingInstrument_101.insert(UnderlyingAttachmentPoint_101.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_101("STRING_485737728");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_101);
      UnderlyingInstrument_101.insert(UnderlyingCFICode_101.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_101("STRING_1714633647");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_101);
      UnderlyingInstrument_101.insert(UnderlyingCPProgram_101.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_101("STRING_2133598579");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_101);
      UnderlyingInstrument_101.insert(UnderlyingCPRegType_101.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_101;
      UnderlyingCapValue_101.setString("5432705");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_101);
      UnderlyingInstrument_101.insert(UnderlyingCapValue_101.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_101;
      UnderlyingCashAmount_101.setString("14400469");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_101);
      UnderlyingInstrument_101.insert(UnderlyingCashAmount_101.getString());
      FIX::UnderlyingCashType UnderlyingCashType_101("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_101);
      UnderlyingInstrument_101.insert(UnderlyingCashType_101.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_101;
      UnderlyingContractMultiplier_101.setString("5145626");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_101);
      UnderlyingInstrument_101.insert(UnderlyingContractMultiplier_101.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_101(1338084304);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_101);
      UnderlyingInstrument_101.insert(UnderlyingContractMultiplierUnit_101.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_101("COUNTRY_359194702");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingCountryOfIssue_101.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_101("LOCALMKTDATE_985674677");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_101);
      UnderlyingInstrument_101.insert(UnderlyingCouponPaymentDate_101.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_101;
      UnderlyingCouponRate_101.setString("8.850000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_101);
      UnderlyingInstrument_101.insert(UnderlyingCouponRate_101.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_101("STRING_206449725");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_101);
      UnderlyingInstrument_101.insert(UnderlyingCreditRating_101.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_101("EUR");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_101);
      UnderlyingInstrument_101.insert(UnderlyingCurrency_101.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_101;
      UnderlyingCurrentValue_101.setString("3570635");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_101);
      UnderlyingInstrument_101.insert(UnderlyingCurrentValue_101.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_101;
      UnderlyingDetachmentPoint_101.setString("19.140000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_101);
      UnderlyingInstrument_101.insert(UnderlyingDetachmentPoint_101.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_101;
      UnderlyingDirtyPrice_101.setString("15955807");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_101);
      UnderlyingInstrument_101.insert(UnderlyingDirtyPrice_101.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_101;
      UnderlyingEndPrice_101.setString("11604549");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_101);
      UnderlyingInstrument_101.insert(UnderlyingEndPrice_101.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_101;
      UnderlyingEndValue_101.setString("7282996");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_101);
      UnderlyingInstrument_101.insert(UnderlyingEndValue_101.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_101(1239035914);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_101);
      UnderlyingInstrument_101.insert(UnderlyingExerciseStyle_101.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_101;
      UnderlyingFXRate_101.setString("2266521");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_101);
      UnderlyingInstrument_101.insert(UnderlyingFXRate_101.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_101('M');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_101);
      UnderlyingInstrument_101.insert(UnderlyingFXRateCalc_101.getString());
      FIX::UnderlyingFactor UnderlyingFactor_101;
      UnderlyingFactor_101.setString("17657395");
      noUnderlyings_1_1_1.set(UnderlyingFactor_101);
      UnderlyingInstrument_101.insert(UnderlyingFactor_101.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_101(369925669);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_101);
      UnderlyingInstrument_101.insert(UnderlyingFlowScheduleType_101.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_101("STRING_529701834");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_101);
      UnderlyingInstrument_101.insert(UnderlyingInstrRegistry_101.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_101("LOCALMKTDATE_58871083");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_101);
      UnderlyingInstrument_101.insert(UnderlyingIssueDate_101.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_101("STRING_1450254862");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_101);
      UnderlyingInstrument_101.insert(UnderlyingIssuer_101.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_101("STRING_469610064");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingLocaleOfIssue_101.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_101("LOCALMKTDATE_1163020708");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityDate_101.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_101("MONTHYEAR_571762176");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityMonthYear_101.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_101("TZTIMEONLY_2068052324");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_101);
      UnderlyingInstrument_101.insert(UnderlyingMaturityTime_101.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_101;
      UnderlyingNotionalPercentageOutstanding_101.setString("84.360000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_101);
      UnderlyingInstrument_101.insert(UnderlyingNotionalPercentageOutstanding_101.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_101('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_101);
      UnderlyingInstrument_101.insert(UnderlyingOptAttribute_101.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_101;
      UnderlyingOriginalNotionalPercentageOutstanding_101.setString("72.550000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_101);
      UnderlyingInstrument_101.insert(UnderlyingOriginalNotionalPercentageOutstanding_101.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_101("STRING_44545336");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_101);
      UnderlyingInstrument_101.insert(UnderlyingPriceUnitOfMeasure_101.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_101;
      UnderlyingPriceUnitOfMeasureQty_101.setString("15789591");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_101);
      UnderlyingInstrument_101.insert(UnderlyingPriceUnitOfMeasureQty_101.getString());
      FIX::UnderlyingProduct UnderlyingProduct_101(1526931252);
      noUnderlyings_1_1_1.set(UnderlyingProduct_101);
      UnderlyingInstrument_101.insert(UnderlyingProduct_101.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_101(559107992);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_101);
      UnderlyingInstrument_101.insert(UnderlyingPutOrCall_101.getString());
      FIX::UnderlyingPx UnderlyingPx_101;
      UnderlyingPx_101.setString("7695597");
      noUnderlyings_1_1_1.set(UnderlyingPx_101);
      UnderlyingInstrument_101.insert(UnderlyingPx_101.getString());
      FIX::UnderlyingQty UnderlyingQty_101;
      UnderlyingQty_101.setString("18861259");
      noUnderlyings_1_1_1.set(UnderlyingQty_101);
      UnderlyingInstrument_101.insert(UnderlyingQty_101.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_101("LOCALMKTDATE_1544782669");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_101);
      UnderlyingInstrument_101.insert(UnderlyingRedemptionDate_101.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_101("STRING_1373800673");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_101);
      UnderlyingInstrument_101.insert(UnderlyingRepoCollateralSecurityType_101.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_101;
      UnderlyingRepurchaseRate_101.setString("56.790000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_101);
      UnderlyingInstrument_101.insert(UnderlyingRepurchaseRate_101.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_101(1015365807);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_101);
      UnderlyingInstrument_101.insert(UnderlyingRepurchaseTerm_101.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_101("STRING_57562894");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_101);
      UnderlyingInstrument_101.insert(UnderlyingRestructuringType_101.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_101("STRING_302155615");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityDesc_101.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_101("EXCHANGE_1519967721");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityExchange_101.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_101("STRING_1653143644");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityID_101.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_101("STRING_1462610613");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityIDSource_101.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_101("STRING_100783696");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_101);
      UnderlyingInstrument_101.insert(UnderlyingSecuritySubType_101.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_101("STRING_744695910");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_101);
      UnderlyingInstrument_101.insert(UnderlyingSecurityType_101.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_101("STRING_1689262812");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_101);
      UnderlyingInstrument_101.insert(UnderlyingSeniority_101.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_101("STRING_552551597");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_101);
      UnderlyingInstrument_101.insert(UnderlyingSettlMethod_101.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_101(2);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_101);
      UnderlyingInstrument_101.insert(UnderlyingSettlementType_101.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_101;
      UnderlyingStartValue_101.setString("20591884");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_101);
      UnderlyingInstrument_101.insert(UnderlyingStartValue_101.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_101("STRING_1082253431");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_101);
      UnderlyingInstrument_101.insert(UnderlyingStateOrProvinceOfIssue_101.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_101("JPY");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_101);
      UnderlyingInstrument_101.insert(UnderlyingStrikeCurrency_101.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_101;
      UnderlyingStrikePrice_101.setString("15518634");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_101);
      UnderlyingInstrument_101.insert(UnderlyingStrikePrice_101.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_101("STRING_1584843651");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_101);
      UnderlyingInstrument_101.insert(UnderlyingSymbol_101.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_101("STRING_1933721872");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_101);
      UnderlyingInstrument_101.insert(UnderlyingSymbolSfx_101.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_101("STRING_1472432172");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_101);
      UnderlyingInstrument_101.insert(UnderlyingTimeUnit_101.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_101("STRING_1086118439");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_101);
      UnderlyingInstrument_101.insert(UnderlyingUnitOfMeasure_101.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_101;
      UnderlyingUnitOfMeasureQty_101.setString("20726340");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_101);
      UnderlyingInstrument_101.insert(UnderlyingUnitOfMeasureQty_101.getString());
      all_values.push_back(UnderlyingInstrument_101);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_199;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_199("STRING_1130663775");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltID_199.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_199("STRING_1504109530");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_199);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_199.insert(UnderlyingSecurityAltIDSource_199.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_202;
        FIX::UnderlyingStipType UnderlyingStipType_202("STRING_1689771768");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_202);
        UnderlyingStipulations_NoUnderlyingStips_202.insert(UnderlyingStipType_202.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_202("STRING_126185670");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_202);
        UnderlyingStipulations_NoUnderlyingStips_202.insert(UnderlyingStipValue_202.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_202);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_203;
        FIX::UnderlyingStipType UnderlyingStipType_203("STRING_497205690");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_203);
        UnderlyingStipulations_NoUnderlyingStips_203.insert(UnderlyingStipType_203.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_203("STRING_1087070789");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_203);
        UnderlyingStipulations_NoUnderlyingStips_203.insert(UnderlyingStipValue_203.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_203);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_188;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_188("STRING_442297721");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyID_188.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_188('2');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyIDSource_188.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_188(1557549238);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_188);
        UndlyInstrumentParties_NoUndlyInstrumentParties_188.insert(UnderlyingInstrumentPartyRole_188.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_188);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_377("STRING_1474920670");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_377);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377.insert(UnderlyingInstrumentPartySubID_377.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_377(1063209234);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_377);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377.insert(UnderlyingInstrumentPartySubIDType_377.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_378("STRING_59580302");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_378);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378.insert(UnderlyingInstrumentPartySubID_378.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_378(1575704367);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_378);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378.insert(UnderlyingInstrumentPartySubIDType_378.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_189;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_189("STRING_1807905144");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyID_189.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_189('1');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyIDSource_189.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_189(2128255964);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_189);
        UndlyInstrumentParties_NoUndlyInstrumentParties_189.insert(UnderlyingInstrumentPartyRole_189.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_189);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_379("STRING_1660547948");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_379);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379.insert(UnderlyingInstrumentPartySubID_379.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_379(1063025748);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_379);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379.insert(UnderlyingInstrumentPartySubIDType_379.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_380("STRING_445196298");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_380);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380.insert(UnderlyingInstrumentPartySubID_380.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_380(875023996);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_380);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380.insert(UnderlyingInstrumentPartySubIDType_380.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_381("STRING_467405596");
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubID_381);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381.insert(UnderlyingInstrumentPartySubID_381.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_381(2030039949);
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_381);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381.insert(UnderlyingInstrumentPartySubIDType_381.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_190;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_190("STRING_661262220");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_190);
        UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyID_190.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_190('1');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_190);
        UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyIDSource_190.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_190(968674741);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_190);
        UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyRole_190.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_190);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_382("STRING_1171469900");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_382);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382.insert(UnderlyingInstrumentPartySubID_382.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_382(2099338516);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_382);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382.insert(UnderlyingInstrumentPartySubIDType_382.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
      multiset<string> UnderlyingInstrument_102;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_102("DATA_2090522149");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingIssuer_102.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_102(1930033284);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingIssuerLen_102.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_102("DATA_1641626636");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDesc_102.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_102(69224172);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_102);
      UnderlyingInstrument_102.insert(EncodedUnderlyingSecurityDescLen_102.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_102;
      UnderlyingAdjustedQuantity_102.setString("2797553");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_102);
      UnderlyingInstrument_102.insert(UnderlyingAdjustedQuantity_102.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_102;
      UnderlyingAllocationPercent_102.setString("37.780000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_102);
      UnderlyingInstrument_102.insert(UnderlyingAllocationPercent_102.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_102;
      UnderlyingAttachmentPoint_102.setString("5.150000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_102);
      UnderlyingInstrument_102.insert(UnderlyingAttachmentPoint_102.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_102("STRING_722053048");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_102);
      UnderlyingInstrument_102.insert(UnderlyingCFICode_102.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_102("STRING_536166727");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_102);
      UnderlyingInstrument_102.insert(UnderlyingCPProgram_102.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_102("STRING_979276105");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_102);
      UnderlyingInstrument_102.insert(UnderlyingCPRegType_102.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_102;
      UnderlyingCapValue_102.setString("14665063");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_102);
      UnderlyingInstrument_102.insert(UnderlyingCapValue_102.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_102;
      UnderlyingCashAmount_102.setString("20110873");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_102);
      UnderlyingInstrument_102.insert(UnderlyingCashAmount_102.getString());
      FIX::UnderlyingCashType UnderlyingCashType_102("STRING_DIFF");
      noUnderlyings_1_1_2.set(UnderlyingCashType_102);
      UnderlyingInstrument_102.insert(UnderlyingCashType_102.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_102;
      UnderlyingContractMultiplier_102.setString("15260866");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_102);
      UnderlyingInstrument_102.insert(UnderlyingContractMultiplier_102.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_102(1439308116);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_102);
      UnderlyingInstrument_102.insert(UnderlyingContractMultiplierUnit_102.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_102("COUNTRY_1702906836");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingCountryOfIssue_102.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_102("LOCALMKTDATE_1127446153");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_102);
      UnderlyingInstrument_102.insert(UnderlyingCouponPaymentDate_102.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_102;
      UnderlyingCouponRate_102.setString("4.330000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_102);
      UnderlyingInstrument_102.insert(UnderlyingCouponRate_102.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_102("STRING_1726280192");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_102);
      UnderlyingInstrument_102.insert(UnderlyingCreditRating_102.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_102("CAN");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_102);
      UnderlyingInstrument_102.insert(UnderlyingCurrency_102.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_102;
      UnderlyingCurrentValue_102.setString("239928");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_102);
      UnderlyingInstrument_102.insert(UnderlyingCurrentValue_102.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_102;
      UnderlyingDetachmentPoint_102.setString("44.490000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_102);
      UnderlyingInstrument_102.insert(UnderlyingDetachmentPoint_102.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_102;
      UnderlyingDirtyPrice_102.setString("8030281");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_102);
      UnderlyingInstrument_102.insert(UnderlyingDirtyPrice_102.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_102;
      UnderlyingEndPrice_102.setString("20540327");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_102);
      UnderlyingInstrument_102.insert(UnderlyingEndPrice_102.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_102;
      UnderlyingEndValue_102.setString("293130");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_102);
      UnderlyingInstrument_102.insert(UnderlyingEndValue_102.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_102(595382249);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_102);
      UnderlyingInstrument_102.insert(UnderlyingExerciseStyle_102.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_102;
      UnderlyingFXRate_102.setString("8752238");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_102);
      UnderlyingInstrument_102.insert(UnderlyingFXRate_102.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_102('D');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_102);
      UnderlyingInstrument_102.insert(UnderlyingFXRateCalc_102.getString());
      FIX::UnderlyingFactor UnderlyingFactor_102;
      UnderlyingFactor_102.setString("17668521");
      noUnderlyings_1_1_2.set(UnderlyingFactor_102);
      UnderlyingInstrument_102.insert(UnderlyingFactor_102.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_102(827078753);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_102);
      UnderlyingInstrument_102.insert(UnderlyingFlowScheduleType_102.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_102("STRING_558764142");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_102);
      UnderlyingInstrument_102.insert(UnderlyingInstrRegistry_102.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_102("LOCALMKTDATE_1549401786");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_102);
      UnderlyingInstrument_102.insert(UnderlyingIssueDate_102.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_102("STRING_321221742");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_102);
      UnderlyingInstrument_102.insert(UnderlyingIssuer_102.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_102("STRING_627988314");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingLocaleOfIssue_102.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_102("LOCALMKTDATE_1829157113");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityDate_102.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_102("MONTHYEAR_902435520");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityMonthYear_102.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_102("TZTIMEONLY_49715181");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_102);
      UnderlyingInstrument_102.insert(UnderlyingMaturityTime_102.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_102;
      UnderlyingNotionalPercentageOutstanding_102.setString("65.130000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_102);
      UnderlyingInstrument_102.insert(UnderlyingNotionalPercentageOutstanding_102.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_102('1');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_102);
      UnderlyingInstrument_102.insert(UnderlyingOptAttribute_102.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_102;
      UnderlyingOriginalNotionalPercentageOutstanding_102.setString("12.870000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_102);
      UnderlyingInstrument_102.insert(UnderlyingOriginalNotionalPercentageOutstanding_102.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_102("STRING_1870232898");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_102);
      UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasure_102.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_102;
      UnderlyingPriceUnitOfMeasureQty_102.setString("13022059");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_102);
      UnderlyingInstrument_102.insert(UnderlyingPriceUnitOfMeasureQty_102.getString());
      FIX::UnderlyingProduct UnderlyingProduct_102(923992978);
      noUnderlyings_1_1_2.set(UnderlyingProduct_102);
      UnderlyingInstrument_102.insert(UnderlyingProduct_102.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_102(1248835937);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_102);
      UnderlyingInstrument_102.insert(UnderlyingPutOrCall_102.getString());
      FIX::UnderlyingPx UnderlyingPx_102;
      UnderlyingPx_102.setString("5940304");
      noUnderlyings_1_1_2.set(UnderlyingPx_102);
      UnderlyingInstrument_102.insert(UnderlyingPx_102.getString());
      FIX::UnderlyingQty UnderlyingQty_102;
      UnderlyingQty_102.setString("4794161");
      noUnderlyings_1_1_2.set(UnderlyingQty_102);
      UnderlyingInstrument_102.insert(UnderlyingQty_102.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_102("LOCALMKTDATE_228798442");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_102);
      UnderlyingInstrument_102.insert(UnderlyingRedemptionDate_102.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_102("STRING_2014110898");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_102);
      UnderlyingInstrument_102.insert(UnderlyingRepoCollateralSecurityType_102.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_102;
      UnderlyingRepurchaseRate_102.setString("27.100000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_102);
      UnderlyingInstrument_102.insert(UnderlyingRepurchaseRate_102.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_102(869308896);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_102);
      UnderlyingInstrument_102.insert(UnderlyingRepurchaseTerm_102.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_102("STRING_202249783");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_102);
      UnderlyingInstrument_102.insert(UnderlyingRestructuringType_102.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_102("STRING_82205553");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityDesc_102.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_102("EXCHANGE_237359697");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityExchange_102.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_102("STRING_1005277912");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityID_102.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_102("STRING_2136238345");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityIDSource_102.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_102("STRING_266672719");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_102);
      UnderlyingInstrument_102.insert(UnderlyingSecuritySubType_102.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_102("STRING_1600660161");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_102);
      UnderlyingInstrument_102.insert(UnderlyingSecurityType_102.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_102("STRING_863978582");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_102);
      UnderlyingInstrument_102.insert(UnderlyingSeniority_102.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_102("STRING_882398359");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_102);
      UnderlyingInstrument_102.insert(UnderlyingSettlMethod_102.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_102(2);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_102);
      UnderlyingInstrument_102.insert(UnderlyingSettlementType_102.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_102;
      UnderlyingStartValue_102.setString("16910573");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_102);
      UnderlyingInstrument_102.insert(UnderlyingStartValue_102.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_102("STRING_1441162501");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_102);
      UnderlyingInstrument_102.insert(UnderlyingStateOrProvinceOfIssue_102.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_102("EUR");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_102);
      UnderlyingInstrument_102.insert(UnderlyingStrikeCurrency_102.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_102;
      UnderlyingStrikePrice_102.setString("20691508");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_102);
      UnderlyingInstrument_102.insert(UnderlyingStrikePrice_102.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_102("STRING_303620267");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_102);
      UnderlyingInstrument_102.insert(UnderlyingSymbol_102.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_102("STRING_767230949");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_102);
      UnderlyingInstrument_102.insert(UnderlyingSymbolSfx_102.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_102("STRING_2118865997");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_102);
      UnderlyingInstrument_102.insert(UnderlyingTimeUnit_102.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_102("STRING_707346780");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_102);
      UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasure_102.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_102;
      UnderlyingUnitOfMeasureQty_102.setString("583495");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_102);
      UnderlyingInstrument_102.insert(UnderlyingUnitOfMeasureQty_102.getString());
      all_values.push_back(UnderlyingInstrument_102);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_200;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_200("STRING_430096030");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltID_200.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_200("STRING_1360555545");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_200);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_200.insert(UnderlyingSecurityAltIDSource_200.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_201;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_201("STRING_1924366614");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltID_201);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltID_201.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_201("STRING_1678931967");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltIDSource_201);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltIDSource_201.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_202;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_202("STRING_1954586010");
        noUnderlyingSecurityAltID_1_2_2_2.set(UnderlyingSecurityAltID_202);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltID_202.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_202("STRING_256299133");
        noUnderlyingSecurityAltID_1_2_2_2.set(UnderlyingSecurityAltIDSource_202);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltIDSource_202.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_204;
        FIX::UnderlyingStipType UnderlyingStipType_204("STRING_1821213260");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_204);
        UnderlyingStipulations_NoUnderlyingStips_204.insert(UnderlyingStipType_204.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_204("STRING_314511843");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_204);
        UnderlyingStipulations_NoUnderlyingStips_204.insert(UnderlyingStipValue_204.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_204);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_205;
        FIX::UnderlyingStipType UnderlyingStipType_205("STRING_629555657");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipType_205);
        UnderlyingStipulations_NoUnderlyingStips_205.insert(UnderlyingStipType_205.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_205("STRING_2023463043");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipValue_205);
        UnderlyingStipulations_NoUnderlyingStips_205.insert(UnderlyingStipValue_205.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_205);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_191;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_191("STRING_866915355");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_191);
        UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyID_191.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_191('8');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_191);
        UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyIDSource_191.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_191(385472093);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_191);
        UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyRole_191.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_191);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_383("STRING_334433820");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_383);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383.insert(UnderlyingInstrumentPartySubID_383.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_383(1249450675);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_383);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383.insert(UnderlyingInstrumentPartySubIDType_383.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_384("STRING_2015986433");
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubID_384);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384.insert(UnderlyingInstrumentPartySubID_384.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_384(1554462484);
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_384);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384.insert(UnderlyingInstrumentPartySubIDType_384.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_18;
    FIX::Yield Yield_18;
    Yield_18.setString("43.630000");
    noRelatedSym_0_1.set(Yield_18);
    YieldData_18.insert(Yield_18.getString());
    FIX::YieldCalcDate YieldCalcDate_18("LOCALMKTDATE_1309665287");
    noRelatedSym_0_1.set(YieldCalcDate_18);
    YieldData_18.insert(YieldCalcDate_18.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_18("LOCALMKTDATE_28925638");
    noRelatedSym_0_1.set(YieldRedemptionDate_18);
    YieldData_18.insert(YieldRedemptionDate_18.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_18;
    YieldRedemptionPrice_18.setString("6578197");
    noRelatedSym_0_1.set(YieldRedemptionPrice_18);
    YieldData_18.insert(YieldRedemptionPrice_18.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_18(1231332454);
    noRelatedSym_0_1.set(YieldRedemptionPriceType_18);
    YieldData_18.insert(YieldRedemptionPriceType_18.getString());
    FIX::YieldType YieldType_18("STRING_TRUE");
    noRelatedSym_0_1.set(YieldType_18);
    YieldData_18.insert(YieldType_18.getString());
    all_values.push_back(YieldData_18);
    all_compo_names.insert("YieldData");

    msg.addGroup(noRelatedSym_0_1);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_6;
    FIX::RootPartyID RootPartyID_6("STRING_1202714803");
    noRootPartyIDs_0_0.set(RootPartyID_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyID_6.getString());
    FIX::RootPartyIDSource RootPartyIDSource_6('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyIDSource_6.getString());
    FIX::RootPartyRole RootPartyRole_6(1483400290);
    noRootPartyIDs_0_0.set(RootPartyRole_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyRole_6.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_6);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_10;
      FIX::RootPartySubID RootPartySubID_10("STRING_1469988715");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_10);
      RootSubParties_NoRootPartySubIDs_10.insert(RootPartySubID_10.getString());
      FIX::RootPartySubIDType RootPartySubIDType_10(696472187);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_10);
      RootSubParties_NoRootPartySubIDs_10.insert(RootPartySubIDType_10.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_10);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_11;
      FIX::RootPartySubID RootPartySubID_11("STRING_1979971406");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_11);
      RootSubParties_NoRootPartySubIDs_11.insert(RootPartySubID_11.getString());
      FIX::RootPartySubIDType RootPartySubIDType_11(1001437034);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_11);
      RootSubParties_NoRootPartySubIDs_11.insert(RootPartySubIDType_11.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_11);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

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
