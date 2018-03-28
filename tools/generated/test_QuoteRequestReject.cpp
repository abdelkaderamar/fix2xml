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
  multiset<string> QuoteRequestReject_0;
  FIX::EncodedText EncodedText_70("DATA_487309982");
  msg.set(EncodedText_70);
  QuoteRequestReject_0.insert(EncodedText_70.getString());
  FIX::EncodedTextLen EncodedTextLen_70(1213724712);
  msg.set(EncodedTextLen_70);
  QuoteRequestReject_0.insert(EncodedTextLen_70.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_11(false);
  msg.set(PreTradeAnonymity_11);
  QuoteRequestReject_0.insert(PreTradeAnonymity_11.getString());
  FIX::PrivateQuote PrivateQuote_2(false);
  msg.set(PrivateQuote_2);
  QuoteRequestReject_0.insert(PrivateQuote_2.getString());
  FIX::QuoteReqID QuoteReqID_5("STRING_1904286213");
  msg.set(QuoteReqID_5);
  QuoteRequestReject_0.insert(QuoteReqID_5.getString());
  FIX::QuoteRequestRejectReason QuoteRequestRejectReason_0(6);
  msg.set(QuoteRequestRejectReason_0);
  QuoteRequestReject_0.insert(QuoteRequestRejectReason_0.getString());
  FIX::RFQReqID RFQReqID_1("STRING_905075219");
  msg.set(RFQReqID_1);
  QuoteRequestReject_0.insert(RFQReqID_1.getString());
  FIX::RespondentType RespondentType_1(3);
  msg.set(RespondentType_1);
  QuoteRequestReject_0.insert(RespondentType_1.getString());
  FIX::Text Text_70("STRING_1780133281");
  msg.set(Text_70);
  QuoteRequestReject_0.insert(Text_70.getString());
  all_values.push_back(QuoteRequestReject_0);

  // QuotReqRjctGrp
  // Group QuotReqRjctGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_0;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_0;
    FIX::Account Account_30("STRING_1952921791");
    noRelatedSym_0_0.set(Account_30);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Account_30.getString());
    FIX::AccountType AccountType_27(8);
    noRelatedSym_0_0.set(AccountType_27);
    QuotReqRjctGrp_NoRelatedSym_0.insert(AccountType_27.getString());
    FIX::AcctIDSource AcctIDSource_23(3);
    noRelatedSym_0_0.set(AcctIDSource_23);
    QuotReqRjctGrp_NoRelatedSym_0.insert(AcctIDSource_23.getString());
    FIX::Currency Currency_52("CAN");
    noRelatedSym_0_0.set(Currency_52);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Currency_52.getString());
    FIX::ExpireTime ExpireTime_14(FIX::UTCTIMESTAMP(14, 58, 24, 26, 11, 2002));
    noRelatedSym_0_0.set(ExpireTime_14);
    QuotReqRjctGrp_NoRelatedSym_0.insert(ExpireTime_14.getString());
    FIX::OrdType OrdType_40('A');
    noRelatedSym_0_0.set(OrdType_40);
    QuotReqRjctGrp_NoRelatedSym_0.insert(OrdType_40.getString());
    FIX::OrderQty2 OrderQty2_18;
    OrderQty2_18.setString("20659327");
    noRelatedSym_0_0.set(OrderQty2_18);
    QuotReqRjctGrp_NoRelatedSym_0.insert(OrderQty2_18.getString());
    FIX::PrevClosePx PrevClosePx_9;
    PrevClosePx_9.setString("15943490");
    noRelatedSym_0_0.set(PrevClosePx_9);
    QuotReqRjctGrp_NoRelatedSym_0.insert(PrevClosePx_9.getString());
    FIX::Price Price_19;
    Price_19.setString("10463089");
    noRelatedSym_0_0.set(Price_19);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Price_19.getString());
    FIX::Price2 Price2_5;
    Price2_5.setString("13630380");
    noRelatedSym_0_0.set(Price2_5);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Price2_5.getString());
    FIX::PriceType PriceType_31(1);
    noRelatedSym_0_0.set(PriceType_31);
    QuotReqRjctGrp_NoRelatedSym_0.insert(PriceType_31.getString());
    FIX::QtyType QtyType_23(2);
    noRelatedSym_0_0.set(QtyType_23);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QtyType_23.getString());
    FIX::QuotePriceType QuotePriceType_1(8);
    noRelatedSym_0_0.set(QuotePriceType_1);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuotePriceType_1.getString());
    FIX::QuoteRequestType QuoteRequestType_1(1);
    noRelatedSym_0_0.set(QuoteRequestType_1);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuoteRequestType_1.getString());
    FIX::QuoteType QuoteType_7(0);
    noRelatedSym_0_0.set(QuoteType_7);
    QuotReqRjctGrp_NoRelatedSym_0.insert(QuoteType_7.getString());
    FIX::SettlDate SettlDate_38("LOCALMKTDATE_1845799250");
    noRelatedSym_0_0.set(SettlDate_38);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlDate_38.getString());
    FIX::SettlDate2 SettlDate2_18("LOCALMKTDATE_1660573493");
    noRelatedSym_0_0.set(SettlDate2_18);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlDate2_18.getString());
    FIX::SettlType SettlType_21("STRING_3");
    noRelatedSym_0_0.set(SettlType_21);
    QuotReqRjctGrp_NoRelatedSym_0.insert(SettlType_21.getString());
    FIX::Side Side_36('8');
    noRelatedSym_0_0.set(Side_36);
    QuotReqRjctGrp_NoRelatedSym_0.insert(Side_36.getString());
    FIX::TradeOriginationDate TradeOriginationDate_18("LOCALMKTDATE_1849236394");
    noRelatedSym_0_0.set(TradeOriginationDate_18);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradeOriginationDate_18.getString());
    FIX::TradingSessionID TradingSessionID_64("STRING_3");
    noRelatedSym_0_0.set(TradingSessionID_64);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradingSessionID_64.getString());
    FIX::TradingSessionSubID TradingSessionSubID_64("STRING_3");
    noRelatedSym_0_0.set(TradingSessionSubID_64);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TradingSessionSubID_64.getString());
    FIX::TransactTime TransactTime_54(FIX::UTCTIMESTAMP(21, 33, 33, 9, 11, 2008));
    noRelatedSym_0_0.set(TransactTime_54);
    QuotReqRjctGrp_NoRelatedSym_0.insert(TransactTime_54.getString());
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_21;
    FIX::AgreementCurrency AgreementCurrency_21("JPY");
    noRelatedSym_0_0.set(AgreementCurrency_21);
    FinancingDetails_21.insert(AgreementCurrency_21.getString());
    FIX::AgreementDate AgreementDate_21("LOCALMKTDATE_201196378");
    noRelatedSym_0_0.set(AgreementDate_21);
    FinancingDetails_21.insert(AgreementDate_21.getString());
    FIX::AgreementDesc AgreementDesc_21("STRING_533771942");
    noRelatedSym_0_0.set(AgreementDesc_21);
    FinancingDetails_21.insert(AgreementDesc_21.getString());
    FIX::AgreementID AgreementID_21("STRING_1833424358");
    noRelatedSym_0_0.set(AgreementID_21);
    FinancingDetails_21.insert(AgreementID_21.getString());
    FIX::DeliveryType DeliveryType_21(0);
    noRelatedSym_0_0.set(DeliveryType_21);
    FinancingDetails_21.insert(DeliveryType_21.getString());
    FIX::EndDate EndDate_21("LOCALMKTDATE_415249502");
    noRelatedSym_0_0.set(EndDate_21);
    FinancingDetails_21.insert(EndDate_21.getString());
    FIX::MarginRatio MarginRatio_21;
    MarginRatio_21.setString("94.230000");
    noRelatedSym_0_0.set(MarginRatio_21);
    FinancingDetails_21.insert(MarginRatio_21.getString());
    FIX::StartDate StartDate_21("LOCALMKTDATE_1586252210");
    noRelatedSym_0_0.set(StartDate_21);
    FinancingDetails_21.insert(StartDate_21.getString());
    FIX::TerminationType TerminationType_21(4);
    noRelatedSym_0_0.set(TerminationType_21);
    FinancingDetails_21.insert(TerminationType_21.getString());
    all_values.push_back(FinancingDetails_21);

    // Instrument
    multiset<string> Instrument_70;
    FIX::AttachmentPoint AttachmentPoint_70;
    AttachmentPoint_70.setString("46.770000");
    noRelatedSym_0_0.set(AttachmentPoint_70);
    Instrument_70.insert(AttachmentPoint_70.getString());
    FIX::CFICode CFICode_70("STRING_801806650");
    noRelatedSym_0_0.set(CFICode_70);
    Instrument_70.insert(CFICode_70.getString());
    FIX::CPProgram CPProgram_70(1);
    noRelatedSym_0_0.set(CPProgram_70);
    Instrument_70.insert(CPProgram_70.getString());
    FIX::CPRegType CPRegType_70("STRING_331361139");
    noRelatedSym_0_0.set(CPRegType_70);
    Instrument_70.insert(CPRegType_70.getString());
    FIX::CapPrice CapPrice_70;
    CapPrice_70.setString("14338811");
    noRelatedSym_0_0.set(CapPrice_70);
    Instrument_70.insert(CapPrice_70.getString());
    FIX::ContractMultiplier ContractMultiplier_70;
    ContractMultiplier_70.setString("8009744");
    noRelatedSym_0_0.set(ContractMultiplier_70);
    Instrument_70.insert(ContractMultiplier_70.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_70(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_70);
    Instrument_70.insert(ContractMultiplierUnit_70.getString());
    FIX::ContractSettlMonth ContractSettlMonth_70("MONTHYEAR_1132196790");
    noRelatedSym_0_0.set(ContractSettlMonth_70);
    Instrument_70.insert(ContractSettlMonth_70.getString());
    FIX::CountryOfIssue CountryOfIssue_70("COUNTRY_314064253");
    noRelatedSym_0_0.set(CountryOfIssue_70);
    Instrument_70.insert(CountryOfIssue_70.getString());
    FIX::CouponPaymentDate CouponPaymentDate_70("LOCALMKTDATE_1177639379");
    noRelatedSym_0_0.set(CouponPaymentDate_70);
    Instrument_70.insert(CouponPaymentDate_70.getString());
    FIX::CouponRate CouponRate_70;
    CouponRate_70.setString("49.570000");
    noRelatedSym_0_0.set(CouponRate_70);
    Instrument_70.insert(CouponRate_70.getString());
    FIX::CreditRating CreditRating_70("STRING_15816999");
    noRelatedSym_0_0.set(CreditRating_70);
    Instrument_70.insert(CreditRating_70.getString());
    FIX::DatedDate DatedDate_70("LOCALMKTDATE_248032746");
    noRelatedSym_0_0.set(DatedDate_70);
    Instrument_70.insert(DatedDate_70.getString());
    FIX::DetachmentPoint DetachmentPoint_70;
    DetachmentPoint_70.setString("29.590000");
    noRelatedSym_0_0.set(DetachmentPoint_70);
    Instrument_70.insert(DetachmentPoint_70.getString());
    FIX::EncodedIssuer EncodedIssuer_70("DATA_1497703027");
    noRelatedSym_0_0.set(EncodedIssuer_70);
    Instrument_70.insert(EncodedIssuer_70.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_70(467834583);
    noRelatedSym_0_0.set(EncodedIssuerLen_70);
    Instrument_70.insert(EncodedIssuerLen_70.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_70("DATA_1565992752");
    noRelatedSym_0_0.set(EncodedSecurityDesc_70);
    Instrument_70.insert(EncodedSecurityDesc_70.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_70(1806066940);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_70);
    Instrument_70.insert(EncodedSecurityDescLen_70.getString());
    FIX::ExerciseStyle ExerciseStyle_70(2);
    noRelatedSym_0_0.set(ExerciseStyle_70);
    Instrument_70.insert(ExerciseStyle_70.getString());
    FIX::Factor Factor_70;
    Factor_70.setString("9357239");
    noRelatedSym_0_0.set(Factor_70);
    Instrument_70.insert(Factor_70.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_70(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_70);
    Instrument_70.insert(FlexProductEligibilityIndicator_70.getString());
    FIX::FlexibleIndicator FlexibleIndicator_70(true);
    noRelatedSym_0_0.set(FlexibleIndicator_70);
    Instrument_70.insert(FlexibleIndicator_70.getString());
    FIX::FloorPrice FloorPrice_70;
    FloorPrice_70.setString("17584797");
    noRelatedSym_0_0.set(FloorPrice_70);
    Instrument_70.insert(FloorPrice_70.getString());
    FIX::FlowScheduleType FlowScheduleType_70(4);
    noRelatedSym_0_0.set(FlowScheduleType_70);
    Instrument_70.insert(FlowScheduleType_70.getString());
    FIX::InstrRegistry InstrRegistry_70("STRING_557683392");
    noRelatedSym_0_0.set(InstrRegistry_70);
    Instrument_70.insert(InstrRegistry_70.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_70('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_70);
    Instrument_70.insert(InstrmtAssignmentMethod_70.getString());
    FIX::InterestAccrualDate InterestAccrualDate_70("LOCALMKTDATE_566818071");
    noRelatedSym_0_0.set(InterestAccrualDate_70);
    Instrument_70.insert(InterestAccrualDate_70.getString());
    FIX::IssueDate IssueDate_70("LOCALMKTDATE_972932895");
    noRelatedSym_0_0.set(IssueDate_70);
    Instrument_70.insert(IssueDate_70.getString());
    FIX::Issuer Issuer_70("STRING_683306239");
    noRelatedSym_0_0.set(Issuer_70);
    Instrument_70.insert(Issuer_70.getString());
    FIX::ListMethod ListMethod_70(0);
    noRelatedSym_0_0.set(ListMethod_70);
    Instrument_70.insert(ListMethod_70.getString());
    FIX::LocaleOfIssue LocaleOfIssue_70("STRING_835047778");
    noRelatedSym_0_0.set(LocaleOfIssue_70);
    Instrument_70.insert(LocaleOfIssue_70.getString());
    FIX::MaturityDate MaturityDate_70("LOCALMKTDATE_968500917");
    noRelatedSym_0_0.set(MaturityDate_70);
    Instrument_70.insert(MaturityDate_70.getString());
    FIX::MaturityMonthYear MaturityMonthYear_70("MONTHYEAR_807393284");
    noRelatedSym_0_0.set(MaturityMonthYear_70);
    Instrument_70.insert(MaturityMonthYear_70.getString());
    FIX::MaturityTime MaturityTime_70("TZTIMEONLY_742239791");
    noRelatedSym_0_0.set(MaturityTime_70);
    Instrument_70.insert(MaturityTime_70.getString());
    FIX::MinPriceIncrement MinPriceIncrement_70;
    MinPriceIncrement_70.setString("12998620");
    noRelatedSym_0_0.set(MinPriceIncrement_70);
    Instrument_70.insert(MinPriceIncrement_70.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_70;
    MinPriceIncrementAmount_70.setString("937908");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_70);
    Instrument_70.insert(MinPriceIncrementAmount_70.getString());
    FIX::NTPositionLimit NTPositionLimit_70(1543214198);
    noRelatedSym_0_0.set(NTPositionLimit_70);
    Instrument_70.insert(NTPositionLimit_70.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_70;
    NotionalPercentageOutstanding_70.setString("59.920000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_70);
    Instrument_70.insert(NotionalPercentageOutstanding_70.getString());
    FIX::OptAttribute OptAttribute_70('1');
    noRelatedSym_0_0.set(OptAttribute_70);
    Instrument_70.insert(OptAttribute_70.getString());
    FIX::OptPayoutAmount OptPayoutAmount_70;
    OptPayoutAmount_70.setString("18572784");
    noRelatedSym_0_0.set(OptPayoutAmount_70);
    Instrument_70.insert(OptPayoutAmount_70.getString());
    FIX::OptPayoutType OptPayoutType_70(1);
    noRelatedSym_0_0.set(OptPayoutType_70);
    Instrument_70.insert(OptPayoutType_70.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_70;
    OriginalNotionalPercentageOutstanding_70.setString("25.720000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_70);
    Instrument_70.insert(OriginalNotionalPercentageOutstanding_70.getString());
    FIX::Pool Pool_70("STRING_1873095451");
    noRelatedSym_0_0.set(Pool_70);
    Instrument_70.insert(Pool_70.getString());
    FIX::PositionLimit PositionLimit_70(1442888118);
    noRelatedSym_0_0.set(PositionLimit_70);
    Instrument_70.insert(PositionLimit_70.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_70("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_70);
    Instrument_70.insert(PriceQuoteMethod_70.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_70("STRING_1223314830");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_70);
    Instrument_70.insert(PriceUnitOfMeasure_70.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_70;
    PriceUnitOfMeasureQty_70.setString("19107227");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_70);
    Instrument_70.insert(PriceUnitOfMeasureQty_70.getString());
    FIX::Product Product_72(1);
    noRelatedSym_0_0.set(Product_72);
    Instrument_70.insert(Product_72.getString());
    FIX::ProductComplex ProductComplex_70("STRING_881898122");
    noRelatedSym_0_0.set(ProductComplex_70);
    Instrument_70.insert(ProductComplex_70.getString());
    FIX::PutOrCall PutOrCall_70(1);
    noRelatedSym_0_0.set(PutOrCall_70);
    Instrument_70.insert(PutOrCall_70.getString());
    FIX::RedemptionDate RedemptionDate_70("LOCALMKTDATE_120244893");
    noRelatedSym_0_0.set(RedemptionDate_70);
    Instrument_70.insert(RedemptionDate_70.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_70("STRING_1727200362");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_70);
    Instrument_70.insert(RepoCollateralSecurityType_70.getString());
    FIX::RepurchaseRate RepurchaseRate_70;
    RepurchaseRate_70.setString("2.960000");
    noRelatedSym_0_0.set(RepurchaseRate_70);
    Instrument_70.insert(RepurchaseRate_70.getString());
    FIX::RepurchaseTerm RepurchaseTerm_70(1878724647);
    noRelatedSym_0_0.set(RepurchaseTerm_70);
    Instrument_70.insert(RepurchaseTerm_70.getString());
    FIX::RestructuringType RestructuringType_70("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_70);
    Instrument_70.insert(RestructuringType_70.getString());
    FIX::SecurityDesc SecurityDesc_70("STRING_1354423688");
    noRelatedSym_0_0.set(SecurityDesc_70);
    Instrument_70.insert(SecurityDesc_70.getString());
    FIX::SecurityExchange SecurityExchange_70("EXCHANGE_1175661463");
    noRelatedSym_0_0.set(SecurityExchange_70);
    Instrument_70.insert(SecurityExchange_70.getString());
    FIX::SecurityGroup SecurityGroup_70("STRING_1193033405");
    noRelatedSym_0_0.set(SecurityGroup_70);
    Instrument_70.insert(SecurityGroup_70.getString());
    FIX::SecurityID SecurityID_70("STRING_179872935");
    noRelatedSym_0_0.set(SecurityID_70);
    Instrument_70.insert(SecurityID_70.getString());
    FIX::SecurityIDSource SecurityIDSource_70("STRING_L");
    noRelatedSym_0_0.set(SecurityIDSource_70);
    Instrument_70.insert(SecurityIDSource_70.getString());
    FIX::SecurityStatus SecurityStatus_70("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_70);
    Instrument_70.insert(SecurityStatus_70.getString());
    FIX::SecuritySubType SecuritySubType_71("STRING_1014920713");
    noRelatedSym_0_0.set(SecuritySubType_71);
    Instrument_70.insert(SecuritySubType_71.getString());
    FIX::SecurityType SecurityType_72("STRING_BDN");
    noRelatedSym_0_0.set(SecurityType_72);
    Instrument_70.insert(SecurityType_72.getString());
    FIX::Seniority Seniority_70("STRING_SB");
    noRelatedSym_0_0.set(Seniority_70);
    Instrument_70.insert(Seniority_70.getString());
    FIX::SettlMethod SettlMethod_70('C');
    noRelatedSym_0_0.set(SettlMethod_70);
    Instrument_70.insert(SettlMethod_70.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_70("STRING_1979847028");
    noRelatedSym_0_0.set(SettleOnOpenFlag_70);
    Instrument_70.insert(SettleOnOpenFlag_70.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_70("STRING_2099804148");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_70);
    Instrument_70.insert(StateOrProvinceOfIssue_70.getString());
    FIX::StrikeCurrency StrikeCurrency_70("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_70);
    Instrument_70.insert(StrikeCurrency_70.getString());
    FIX::StrikeMultiplier StrikeMultiplier_70;
    StrikeMultiplier_70.setString("11783081");
    noRelatedSym_0_0.set(StrikeMultiplier_70);
    Instrument_70.insert(StrikeMultiplier_70.getString());
    FIX::StrikePrice StrikePrice_70;
    StrikePrice_70.setString("8626858");
    noRelatedSym_0_0.set(StrikePrice_70);
    Instrument_70.insert(StrikePrice_70.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_70(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_70);
    Instrument_70.insert(StrikePriceBoundaryMethod_70.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_70;
    StrikePriceBoundaryPrecision_70.setString("70.380000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_70);
    Instrument_70.insert(StrikePriceBoundaryPrecision_70.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_70(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_70);
    Instrument_70.insert(StrikePriceDeterminationMethod_70.getString());
    FIX::StrikeValue StrikeValue_70;
    StrikeValue_70.setString("3398392");
    noRelatedSym_0_0.set(StrikeValue_70);
    Instrument_70.insert(StrikeValue_70.getString());
    FIX::Symbol Symbol_70("STRING_610138921");
    noRelatedSym_0_0.set(Symbol_70);
    Instrument_70.insert(Symbol_70.getString());
    FIX::SymbolSfx SymbolSfx_70("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_70);
    Instrument_70.insert(SymbolSfx_70.getString());
    FIX::TimeUnit TimeUnit_70("STRING_Mo");
    noRelatedSym_0_0.set(TimeUnit_70);
    Instrument_70.insert(TimeUnit_70.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_70(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_70);
    Instrument_70.insert(UnderlyingPriceDeterminationMethod_70.getString());
    FIX::UnitOfMeasure UnitOfMeasure_70("STRING_MWh");
    noRelatedSym_0_0.set(UnitOfMeasure_70);
    Instrument_70.insert(UnitOfMeasure_70.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_70;
    UnitOfMeasureQty_70.setString("8759071");
    noRelatedSym_0_0.set(UnitOfMeasureQty_70);
    Instrument_70.insert(UnitOfMeasureQty_70.getString());
    FIX::ValuationMethod ValuationMethod_70("STRING_CDSD");
    noRelatedSym_0_0.set(ValuationMethod_70);
    Instrument_70.insert(ValuationMethod_70.getString());
    all_values.push_back(Instrument_70);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_136;
      FIX::ComplexEventCondition ComplexEventCondition_136(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_136);
      ComplexEvents_NoComplexEvents_136.insert(ComplexEventCondition_136.getString());
      FIX::ComplexEventPrice ComplexEventPrice_136;
      ComplexEventPrice_136.setString("17936294");
      noComplexEvents_0_1_0.set(ComplexEventPrice_136);
      ComplexEvents_NoComplexEvents_136.insert(ComplexEventPrice_136.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_136(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_136);
      ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceBoundaryMethod_136.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_136;
      ComplexEventPriceBoundaryPrecision_136.setString("74.490000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_136);
      ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceBoundaryPrecision_136.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_136(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_136);
      ComplexEvents_NoComplexEvents_136.insert(ComplexEventPriceTimeType_136.getString());
      FIX::ComplexEventType ComplexEventType_136(7);
      noComplexEvents_0_1_0.set(ComplexEventType_136);
      ComplexEvents_NoComplexEvents_136.insert(ComplexEventType_136.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_136;
      ComplexOptPayoutAmount_136.setString("10594603");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_136);
      ComplexEvents_NoComplexEvents_136.insert(ComplexOptPayoutAmount_136.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_136);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_279;
        FIX::ComplexEventEndDate ComplexEventEndDate_279(FIX::UTCTIMESTAMP(18, 29, 5, 27, 2, 2015));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_279);
        ComplexEventDates_NoComplexEventDates_279.insert(ComplexEventEndDate_279.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_279(FIX::UTCTIMESTAMP(10, 19, 0, 14, 11, 2014));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_279);
        ComplexEventDates_NoComplexEventDates_279.insert(ComplexEventStartDate_279.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_279);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_558;
          FIX::ComplexEventEndTime ComplexEventEndTime_558(FIX::UTCTIMEONLY(13, 0, 20));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_558);
          ComplexEventTimes_NoComplexEventTimes_558.insert(ComplexEventEndTime_558.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_558(FIX::UTCTIMEONLY(5, 1, 43));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_558);
          ComplexEventTimes_NoComplexEventTimes_558.insert(ComplexEventStartTime_558.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_558);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_559;
          FIX::ComplexEventEndTime ComplexEventEndTime_559(FIX::UTCTIMEONLY(2, 56, 24));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_559);
          ComplexEventTimes_NoComplexEventTimes_559.insert(ComplexEventEndTime_559.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_559(FIX::UTCTIMEONLY(19, 21, 23));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_559);
          ComplexEventTimes_NoComplexEventTimes_559.insert(ComplexEventStartTime_559.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_559);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_560;
          FIX::ComplexEventEndTime ComplexEventEndTime_560(FIX::UTCTIMEONLY(19, 45, 53));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_560);
          ComplexEventTimes_NoComplexEventTimes_560.insert(ComplexEventEndTime_560.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_560(FIX::UTCTIMEONLY(22, 38, 20));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_560);
          ComplexEventTimes_NoComplexEventTimes_560.insert(ComplexEventStartTime_560.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_560);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_280;
        FIX::ComplexEventEndDate ComplexEventEndDate_280(FIX::UTCTIMESTAMP(14, 21, 47, 8, 4, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_280);
        ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventEndDate_280.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_280(FIX::UTCTIMESTAMP(20, 40, 23, 11, 11, 2005));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_280);
        ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventStartDate_280.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_280);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_561;
          FIX::ComplexEventEndTime ComplexEventEndTime_561(FIX::UTCTIMEONLY(7, 47, 24));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_561);
          ComplexEventTimes_NoComplexEventTimes_561.insert(ComplexEventEndTime_561.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_561(FIX::UTCTIMEONLY(6, 37, 12));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_561);
          ComplexEventTimes_NoComplexEventTimes_561.insert(ComplexEventStartTime_561.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_561);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_562;
          FIX::ComplexEventEndTime ComplexEventEndTime_562(FIX::UTCTIMEONLY(9, 57, 28));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_562);
          ComplexEventTimes_NoComplexEventTimes_562.insert(ComplexEventEndTime_562.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_562(FIX::UTCTIMEONLY(23, 6, 28));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_562);
          ComplexEventTimes_NoComplexEventTimes_562.insert(ComplexEventStartTime_562.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_562);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_563;
          FIX::ComplexEventEndTime ComplexEventEndTime_563(FIX::UTCTIMEONLY(12, 41, 51));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_563);
          ComplexEventTimes_NoComplexEventTimes_563.insert(ComplexEventEndTime_563.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_563(FIX::UTCTIMEONLY(12, 31, 44));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_563);
          ComplexEventTimes_NoComplexEventTimes_563.insert(ComplexEventStartTime_563.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_563);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_281;
        FIX::ComplexEventEndDate ComplexEventEndDate_281(FIX::UTCTIMESTAMP(15, 59, 20, 21, 9, 2016));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_281);
        ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventEndDate_281.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_281(FIX::UTCTIMESTAMP(15, 57, 46, 12, 8, 2006));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_281);
        ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventStartDate_281.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_281);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_564;
          FIX::ComplexEventEndTime ComplexEventEndTime_564(FIX::UTCTIMEONLY(13, 17, 46));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_564);
          ComplexEventTimes_NoComplexEventTimes_564.insert(ComplexEventEndTime_564.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_564(FIX::UTCTIMEONLY(8, 44, 52));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_564);
          ComplexEventTimes_NoComplexEventTimes_564.insert(ComplexEventStartTime_564.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_564);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_565;
          FIX::ComplexEventEndTime ComplexEventEndTime_565(FIX::UTCTIMEONLY(13, 33, 19));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_565);
          ComplexEventTimes_NoComplexEventTimes_565.insert(ComplexEventEndTime_565.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_565(FIX::UTCTIMEONLY(13, 42, 41));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_565);
          ComplexEventTimes_NoComplexEventTimes_565.insert(ComplexEventStartTime_565.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_565);

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
      multiset<string> EvntGrp_NoEvents_142;
      FIX::EventDate EventDate_142("LOCALMKTDATE_1522388866");
      noEvents_0_1_0.set(EventDate_142);
      EvntGrp_NoEvents_142.insert(EventDate_142.getString());
      FIX::EventPx EventPx_142;
      EventPx_142.setString("17045572");
      noEvents_0_1_0.set(EventPx_142);
      EvntGrp_NoEvents_142.insert(EventPx_142.getString());
      FIX::EventText EventText_142("STRING_2090045086");
      noEvents_0_1_0.set(EventText_142);
      EvntGrp_NoEvents_142.insert(EventText_142.getString());
      FIX::EventTime EventTime_142(FIX::UTCTIMESTAMP(13, 48, 37, 1, 3, 2016));
      noEvents_0_1_0.set(EventTime_142);
      EvntGrp_NoEvents_142.insert(EventTime_142.getString());
      FIX::EventType EventType_142(18);
      noEvents_0_1_0.set(EventType_142);
      EvntGrp_NoEvents_142.insert(EventType_142.getString());
      all_values.push_back(EvntGrp_NoEvents_142);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_143;
      FIX::EventDate EventDate_143("LOCALMKTDATE_668018833");
      noEvents_0_1_1.set(EventDate_143);
      EvntGrp_NoEvents_143.insert(EventDate_143.getString());
      FIX::EventPx EventPx_143;
      EventPx_143.setString("8113446");
      noEvents_0_1_1.set(EventPx_143);
      EvntGrp_NoEvents_143.insert(EventPx_143.getString());
      FIX::EventText EventText_143("STRING_268494757");
      noEvents_0_1_1.set(EventText_143);
      EvntGrp_NoEvents_143.insert(EventText_143.getString());
      FIX::EventTime EventTime_143(FIX::UTCTIMESTAMP(9, 54, 1, 25, 7, 2004));
      noEvents_0_1_1.set(EventTime_143);
      EvntGrp_NoEvents_143.insert(EventTime_143.getString());
      FIX::EventType EventType_143(15);
      noEvents_0_1_1.set(EventType_143);
      EvntGrp_NoEvents_143.insert(EventType_143.getString());
      all_values.push_back(EvntGrp_NoEvents_143);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_144;
      FIX::EventDate EventDate_144("LOCALMKTDATE_231005927");
      noEvents_0_1_2.set(EventDate_144);
      EvntGrp_NoEvents_144.insert(EventDate_144.getString());
      FIX::EventPx EventPx_144;
      EventPx_144.setString("20277063");
      noEvents_0_1_2.set(EventPx_144);
      EvntGrp_NoEvents_144.insert(EventPx_144.getString());
      FIX::EventText EventText_144("STRING_3612699");
      noEvents_0_1_2.set(EventText_144);
      EvntGrp_NoEvents_144.insert(EventText_144.getString());
      FIX::EventTime EventTime_144(FIX::UTCTIMESTAMP(8, 53, 49, 2, 8, 2009));
      noEvents_0_1_2.set(EventTime_144);
      EvntGrp_NoEvents_144.insert(EventTime_144.getString());
      FIX::EventType EventType_144(4);
      noEvents_0_1_2.set(EventType_144);
      EvntGrp_NoEvents_144.insert(EventType_144.getString());
      all_values.push_back(EvntGrp_NoEvents_144);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_147;
      FIX::InstrumentPartyID InstrumentPartyID_147("STRING_1264880734");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyID_147.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_147('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyIDSource_147.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_147(565308997);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyRole_147.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_147);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309;
        FIX::InstrumentPartySubID InstrumentPartySubID_309("STRING_133326065");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_309);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309.insert(InstrumentPartySubID_309.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_309(1305241155);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_309);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309.insert(InstrumentPartySubIDType_309.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310;
        FIX::InstrumentPartySubID InstrumentPartySubID_310("STRING_1913167520");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_310);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310.insert(InstrumentPartySubID_310.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_310(864881782);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_310);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310.insert(InstrumentPartySubIDType_310.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_157;
      FIX::SecurityAltID SecurityAltID_157("STRING_577028564");
      noSecurityAltID_0_1_0.set(SecurityAltID_157);
      SecAltIDGrp_NoSecurityAltID_157.insert(SecurityAltID_157.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_157("STRING_1133376539");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_157);
      SecAltIDGrp_NoSecurityAltID_157.insert(SecurityAltIDSource_157.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_157);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_158;
      FIX::SecurityAltID SecurityAltID_158("STRING_127904564");
      noSecurityAltID_0_1_1.set(SecurityAltID_158);
      SecAltIDGrp_NoSecurityAltID_158.insert(SecurityAltID_158.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_158("STRING_1907923541");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_158);
      SecAltIDGrp_NoSecurityAltID_158.insert(SecurityAltIDSource_158.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_158);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_159;
      FIX::SecurityAltID SecurityAltID_159("STRING_679090785");
      noSecurityAltID_0_1_2.set(SecurityAltID_159);
      SecAltIDGrp_NoSecurityAltID_159.insert(SecurityAltID_159.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_159("STRING_351801046");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_159);
      SecAltIDGrp_NoSecurityAltID_159.insert(SecurityAltIDSource_159.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_159);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_140;
    FIX::SecurityXML SecurityXML_141("XMLDATA_126183954");
    noRelatedSym_0_0.set(SecurityXML_141);
    FIX::SecurityXMLLen SecurityXMLLen_70(1356615784);
    noRelatedSym_0_0.set(SecurityXMLLen_70);
    FIX::SecurityXMLSchema SecurityXMLSchema_70("STRING_26256144");
    noRelatedSym_0_0.set(SecurityXMLSchema_70);
    SecurityXML_140.insert(SecurityXMLSchema_70.getString());
    all_values.push_back(SecurityXML_140);

    // OrderQtyData
    multiset<string> OrderQtyData_18;
    FIX::CashOrderQty CashOrderQty_18;
    CashOrderQty_18.setString("7702193");
    noRelatedSym_0_0.set(CashOrderQty_18);
    OrderQtyData_18.insert(CashOrderQty_18.getString());
    FIX::OrderPercent OrderPercent_18;
    OrderPercent_18.setString("17.110000");
    noRelatedSym_0_0.set(OrderPercent_18);
    OrderQtyData_18.insert(OrderPercent_18.getString());
    FIX::OrderQty OrderQty_29;
    OrderQty_29.setString("20539624");
    noRelatedSym_0_0.set(OrderQty_29);
    OrderQtyData_18.insert(OrderQty_29.getString());
    FIX::RoundingDirection RoundingDirection_18('0');
    noRelatedSym_0_0.set(RoundingDirection_18);
    OrderQtyData_18.insert(RoundingDirection_18.getString());
    FIX::RoundingModulus RoundingModulus_18;
    RoundingModulus_18.setString("4479950");
    noRelatedSym_0_0.set(RoundingModulus_18);
    OrderQtyData_18.insert(RoundingModulus_18.getString());
    all_values.push_back(OrderQtyData_18);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_100;
      FIX::PartyID PartyID_100("STRING_1344084281");
      noPartyIDs_0_1_0.set(PartyID_100);
      Parties_NoPartyIDs_100.insert(PartyID_100.getString());
      FIX::PartyIDSource PartyIDSource_100('4');
      noPartyIDs_0_1_0.set(PartyIDSource_100);
      Parties_NoPartyIDs_100.insert(PartyIDSource_100.getString());
      FIX::PartyRole PartyRole_100(27);
      noPartyIDs_0_1_0.set(PartyRole_100);
      Parties_NoPartyIDs_100.insert(PartyRole_100.getString());
      all_values.push_back(Parties_NoPartyIDs_100);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_207;
        FIX::PartySubID PartySubID_207("STRING_969057357");
        noPartySubIDs_0_0_2_0.set(PartySubID_207);
        PtysSubGrp_NoPartySubIDs_207.insert(PartySubID_207.getString());
        FIX::PartySubIDType PartySubIDType_207(22);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_207);
        PtysSubGrp_NoPartySubIDs_207.insert(PartySubIDType_207.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_207);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_208;
        FIX::PartySubID PartySubID_208("STRING_950359781");
        noPartySubIDs_0_0_2_1.set(PartySubID_208);
        PtysSubGrp_NoPartySubIDs_208.insert(PartySubID_208.getString());
        FIX::PartySubIDType PartySubIDType_208(22);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_208);
        PtysSubGrp_NoPartySubIDs_208.insert(PartySubIDType_208.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_208);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_101;
      FIX::PartyID PartyID_101("STRING_1823581373");
      noPartyIDs_0_1_1.set(PartyID_101);
      Parties_NoPartyIDs_101.insert(PartyID_101.getString());
      FIX::PartyIDSource PartyIDSource_101('6');
      noPartyIDs_0_1_1.set(PartyIDSource_101);
      Parties_NoPartyIDs_101.insert(PartyIDSource_101.getString());
      FIX::PartyRole PartyRole_101(78);
      noPartyIDs_0_1_1.set(PartyRole_101);
      Parties_NoPartyIDs_101.insert(PartyRole_101.getString());
      all_values.push_back(Parties_NoPartyIDs_101);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_209;
        FIX::PartySubID PartySubID_209("STRING_673426286");
        noPartySubIDs_0_1_2_0.set(PartySubID_209);
        PtysSubGrp_NoPartySubIDs_209.insert(PartySubID_209.getString());
        FIX::PartySubIDType PartySubIDType_209(23);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_209);
        PtysSubGrp_NoPartySubIDs_209.insert(PartySubIDType_209.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_209);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_210;
        FIX::PartySubID PartySubID_210("STRING_674305573");
        noPartySubIDs_0_1_2_1.set(PartySubID_210);
        PtysSubGrp_NoPartySubIDs_210.insert(PartySubID_210.getString());
        FIX::PartySubIDType PartySubIDType_210(12);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_210);
        PtysSubGrp_NoPartySubIDs_210.insert(PartySubIDType_210.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_210);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_102;
      FIX::PartyID PartyID_102("STRING_1278951984");
      noPartyIDs_0_1_2.set(PartyID_102);
      Parties_NoPartyIDs_102.insert(PartyID_102.getString());
      FIX::PartyIDSource PartyIDSource_102('6');
      noPartyIDs_0_1_2.set(PartyIDSource_102);
      Parties_NoPartyIDs_102.insert(PartyIDSource_102.getString());
      FIX::PartyRole PartyRole_102(69);
      noPartyIDs_0_1_2.set(PartyRole_102);
      Parties_NoPartyIDs_102.insert(PartyRole_102.getString());
      all_values.push_back(Parties_NoPartyIDs_102);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_211;
        FIX::PartySubID PartySubID_211("STRING_339289250");
        noPartySubIDs_0_2_2_0.set(PartySubID_211);
        PtysSubGrp_NoPartySubIDs_211.insert(PartySubID_211.getString());
        FIX::PartySubIDType PartySubIDType_211(33);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_211);
        PtysSubGrp_NoPartySubIDs_211.insert(PartySubIDType_211.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_211);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_5;
      FIX::QuoteQualifier QuoteQualifier_5('1');
      noQuoteQualifiers_0_1_0.set(QuoteQualifier_5);
      QuotQualGrp_NoQuoteQualifiers_5.insert(QuoteQualifier_5.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_5);

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_1;
      FIX::LegOrderQty LegOrderQty_12;
      LegOrderQty_12.setString("19357951");
      noLegs_0_1_0.set(LegOrderQty_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegOrderQty_12.getString());
      FIX::LegQty LegQty_12;
      LegQty_12.setString("11360430");
      noLegs_0_1_0.set(LegQty_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegQty_12.getString());
      FIX::LegRefID LegRefID_12("STRING_911643188");
      noLegs_0_1_0.set(LegRefID_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegRefID_12.getString());
      FIX::LegSettlDate LegSettlDate_12("LOCALMKTDATE_562143580");
      noLegs_0_1_0.set(LegSettlDate_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegSettlDate_12.getString());
      FIX::LegSettlType LegSettlType_12('1');
      noLegs_0_1_0.set(LegSettlType_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegSettlType_12.getString());
      FIX::LegSwapType LegSwapType_12(1);
      noLegs_0_1_0.set(LegSwapType_12);
      QuotReqLegsGrp_NoLegs_1.insert(LegSwapType_12.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_106;
      FIX::EncodedLegIssuer EncodedLegIssuer_106("DATA_1906227861");
      noLegs_0_1_0.set(EncodedLegIssuer_106);
      InstrumentLeg_106.insert(EncodedLegIssuer_106.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_106(1531369977);
      noLegs_0_1_0.set(EncodedLegIssuerLen_106);
      InstrumentLeg_106.insert(EncodedLegIssuerLen_106.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_106("DATA_526678501");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_106);
      InstrumentLeg_106.insert(EncodedLegSecurityDesc_106.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_106(934685525);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_106);
      InstrumentLeg_106.insert(EncodedLegSecurityDescLen_106.getString());
      FIX::LegCFICode LegCFICode_106("STRING_352943686");
      noLegs_0_1_0.set(LegCFICode_106);
      InstrumentLeg_106.insert(LegCFICode_106.getString());
      FIX::LegContractMultiplier LegContractMultiplier_106;
      LegContractMultiplier_106.setString("20831597");
      noLegs_0_1_0.set(LegContractMultiplier_106);
      InstrumentLeg_106.insert(LegContractMultiplier_106.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_106(1885045306);
      noLegs_0_1_0.set(LegContractMultiplierUnit_106);
      InstrumentLeg_106.insert(LegContractMultiplierUnit_106.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_106("MONTHYEAR_439398130");
      noLegs_0_1_0.set(LegContractSettlMonth_106);
      InstrumentLeg_106.insert(LegContractSettlMonth_106.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_106("COUNTRY_1759257515");
      noLegs_0_1_0.set(LegCountryOfIssue_106);
      InstrumentLeg_106.insert(LegCountryOfIssue_106.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_106("LOCALMKTDATE_1253230436");
      noLegs_0_1_0.set(LegCouponPaymentDate_106);
      InstrumentLeg_106.insert(LegCouponPaymentDate_106.getString());
      FIX::LegCouponRate LegCouponRate_106;
      LegCouponRate_106.setString("76.780000");
      noLegs_0_1_0.set(LegCouponRate_106);
      InstrumentLeg_106.insert(LegCouponRate_106.getString());
      FIX::LegCreditRating LegCreditRating_106("STRING_1568681305");
      noLegs_0_1_0.set(LegCreditRating_106);
      InstrumentLeg_106.insert(LegCreditRating_106.getString());
      FIX::LegCurrency LegCurrency_106("USD");
      noLegs_0_1_0.set(LegCurrency_106);
      InstrumentLeg_106.insert(LegCurrency_106.getString());
      FIX::LegDatedDate LegDatedDate_106("LOCALMKTDATE_95503230");
      noLegs_0_1_0.set(LegDatedDate_106);
      InstrumentLeg_106.insert(LegDatedDate_106.getString());
      FIX::LegExerciseStyle LegExerciseStyle_106(278375701);
      noLegs_0_1_0.set(LegExerciseStyle_106);
      InstrumentLeg_106.insert(LegExerciseStyle_106.getString());
      FIX::LegFactor LegFactor_106;
      LegFactor_106.setString("12090294");
      noLegs_0_1_0.set(LegFactor_106);
      InstrumentLeg_106.insert(LegFactor_106.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_106(1903185343);
      noLegs_0_1_0.set(LegFlowScheduleType_106);
      InstrumentLeg_106.insert(LegFlowScheduleType_106.getString());
      FIX::LegInstrRegistry LegInstrRegistry_106("STRING_905482893");
      noLegs_0_1_0.set(LegInstrRegistry_106);
      InstrumentLeg_106.insert(LegInstrRegistry_106.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_106("LOCALMKTDATE_100937663");
      noLegs_0_1_0.set(LegInterestAccrualDate_106);
      InstrumentLeg_106.insert(LegInterestAccrualDate_106.getString());
      FIX::LegIssueDate LegIssueDate_106("LOCALMKTDATE_94990945");
      noLegs_0_1_0.set(LegIssueDate_106);
      InstrumentLeg_106.insert(LegIssueDate_106.getString());
      FIX::LegIssuer LegIssuer_106("STRING_1884391130");
      noLegs_0_1_0.set(LegIssuer_106);
      InstrumentLeg_106.insert(LegIssuer_106.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_106("STRING_1266513495");
      noLegs_0_1_0.set(LegLocaleOfIssue_106);
      InstrumentLeg_106.insert(LegLocaleOfIssue_106.getString());
      FIX::LegMaturityDate LegMaturityDate_106("LOCALMKTDATE_1790895979");
      noLegs_0_1_0.set(LegMaturityDate_106);
      InstrumentLeg_106.insert(LegMaturityDate_106.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_106("MONTHYEAR_742071864");
      noLegs_0_1_0.set(LegMaturityMonthYear_106);
      InstrumentLeg_106.insert(LegMaturityMonthYear_106.getString());
      FIX::LegMaturityTime LegMaturityTime_106("TZTIMEONLY_1054825027");
      noLegs_0_1_0.set(LegMaturityTime_106);
      InstrumentLeg_106.insert(LegMaturityTime_106.getString());
      FIX::LegOptAttribute LegOptAttribute_106('7');
      noLegs_0_1_0.set(LegOptAttribute_106);
      InstrumentLeg_106.insert(LegOptAttribute_106.getString());
      FIX::LegOptionRatio LegOptionRatio_106;
      LegOptionRatio_106.setString("16537150");
      noLegs_0_1_0.set(LegOptionRatio_106);
      InstrumentLeg_106.insert(LegOptionRatio_106.getString());
      FIX::LegPool LegPool_106("STRING_1616968607");
      noLegs_0_1_0.set(LegPool_106);
      InstrumentLeg_106.insert(LegPool_106.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_106("STRING_216009966");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_106);
      InstrumentLeg_106.insert(LegPriceUnitOfMeasure_106.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_106;
      LegPriceUnitOfMeasureQty_106.setString("9264180");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_106);
      InstrumentLeg_106.insert(LegPriceUnitOfMeasureQty_106.getString());
      FIX::LegProduct LegProduct_106(1375712820);
      noLegs_0_1_0.set(LegProduct_106);
      InstrumentLeg_106.insert(LegProduct_106.getString());
      FIX::LegPutOrCall LegPutOrCall_106(1747379943);
      noLegs_0_1_0.set(LegPutOrCall_106);
      InstrumentLeg_106.insert(LegPutOrCall_106.getString());
      FIX::LegRatioQty LegRatioQty_106;
      LegRatioQty_106.setString("14530965");
      noLegs_0_1_0.set(LegRatioQty_106);
      InstrumentLeg_106.insert(LegRatioQty_106.getString());
      FIX::LegRedemptionDate LegRedemptionDate_106("LOCALMKTDATE_162914697");
      noLegs_0_1_0.set(LegRedemptionDate_106);
      InstrumentLeg_106.insert(LegRedemptionDate_106.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_106("STRING_2100323630");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_106);
      InstrumentLeg_106.insert(LegRepoCollateralSecurityType_106.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_106;
      LegRepurchaseRate_106.setString("26.520000");
      noLegs_0_1_0.set(LegRepurchaseRate_106);
      InstrumentLeg_106.insert(LegRepurchaseRate_106.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_106(2047960003);
      noLegs_0_1_0.set(LegRepurchaseTerm_106);
      InstrumentLeg_106.insert(LegRepurchaseTerm_106.getString());
      FIX::LegSecurityDesc LegSecurityDesc_106("STRING_392238112");
      noLegs_0_1_0.set(LegSecurityDesc_106);
      InstrumentLeg_106.insert(LegSecurityDesc_106.getString());
      FIX::LegSecurityExchange LegSecurityExchange_106("EXCHANGE_1000546519");
      noLegs_0_1_0.set(LegSecurityExchange_106);
      InstrumentLeg_106.insert(LegSecurityExchange_106.getString());
      FIX::LegSecurityID LegSecurityID_106("STRING_1153706791");
      noLegs_0_1_0.set(LegSecurityID_106);
      InstrumentLeg_106.insert(LegSecurityID_106.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_106("STRING_1767875791");
      noLegs_0_1_0.set(LegSecurityIDSource_106);
      InstrumentLeg_106.insert(LegSecurityIDSource_106.getString());
      FIX::LegSecuritySubType LegSecuritySubType_106("STRING_421744176");
      noLegs_0_1_0.set(LegSecuritySubType_106);
      InstrumentLeg_106.insert(LegSecuritySubType_106.getString());
      FIX::LegSecurityType LegSecurityType_106("STRING_932879866");
      noLegs_0_1_0.set(LegSecurityType_106);
      InstrumentLeg_106.insert(LegSecurityType_106.getString());
      FIX::LegSide LegSide_106('1');
      noLegs_0_1_0.set(LegSide_106);
      InstrumentLeg_106.insert(LegSide_106.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_106("STRING_517247407");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_106);
      InstrumentLeg_106.insert(LegStateOrProvinceOfIssue_106.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_106("GBP");
      noLegs_0_1_0.set(LegStrikeCurrency_106);
      InstrumentLeg_106.insert(LegStrikeCurrency_106.getString());
      FIX::LegStrikePrice LegStrikePrice_106;
      LegStrikePrice_106.setString("2729491");
      noLegs_0_1_0.set(LegStrikePrice_106);
      InstrumentLeg_106.insert(LegStrikePrice_106.getString());
      FIX::LegSymbol LegSymbol_106("STRING_2116738460");
      noLegs_0_1_0.set(LegSymbol_106);
      InstrumentLeg_106.insert(LegSymbol_106.getString());
      FIX::LegSymbolSfx LegSymbolSfx_106("STRING_860436691");
      noLegs_0_1_0.set(LegSymbolSfx_106);
      InstrumentLeg_106.insert(LegSymbolSfx_106.getString());
      FIX::LegTimeUnit LegTimeUnit_106("STRING_367940047");
      noLegs_0_1_0.set(LegTimeUnit_106);
      InstrumentLeg_106.insert(LegTimeUnit_106.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_106("STRING_1853645943");
      noLegs_0_1_0.set(LegUnitOfMeasure_106);
      InstrumentLeg_106.insert(LegUnitOfMeasure_106.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_106;
      LegUnitOfMeasureQty_106.setString("21269501");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_106);
      InstrumentLeg_106.insert(LegUnitOfMeasureQty_106.getString());
      all_values.push_back(InstrumentLeg_106);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_206;
        FIX::LegSecurityAltID LegSecurityAltID_206("STRING_448234159");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_206);
        LegSecAltIDGrp_NoLegSecurityAltID_206.insert(LegSecurityAltID_206.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_206("STRING_1034291565");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_206);
        LegSecAltIDGrp_NoLegSecurityAltID_206.insert(LegSecurityAltIDSource_206.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_206);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_3;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_3("CHF");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurveCurrency_3.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_3("STRING_503776524");
      noLegs_0_1_0.set(LegBenchmarkCurveName_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurveName_3.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_3("STRING_1006817772");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkCurvePoint_3.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_3;
      LegBenchmarkPrice_3.setString("8808835");
      noLegs_0_1_0.set(LegBenchmarkPrice_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkPrice_3.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_3(1879489344);
      noLegs_0_1_0.set(LegBenchmarkPriceType_3);
      LegBenchmarkCurveData_3.insert(LegBenchmarkPriceType_3.getString());
      all_values.push_back(LegBenchmarkCurveData_3);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_29;
        FIX::LegStipulationType LegStipulationType_29("STRING_186496434");
        noLegStipulations_0_0_2_0.set(LegStipulationType_29);
        LegStipulations_NoLegStipulations_29.insert(LegStipulationType_29.getString());
        FIX::LegStipulationValue LegStipulationValue_29("STRING_2042404041");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_29);
        LegStipulations_NoLegStipulations_29.insert(LegStipulationValue_29.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_29);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_30;
        FIX::LegStipulationType LegStipulationType_30("STRING_559554050");
        noLegStipulations_0_0_2_1.set(LegStipulationType_30);
        LegStipulations_NoLegStipulations_30.insert(LegStipulationType_30.getString());
        FIX::LegStipulationValue LegStipulationValue_30("STRING_1575269086");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_30);
        LegStipulations_NoLegStipulations_30.insert(LegStipulationValue_30.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_30);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_31;
        FIX::LegStipulationType LegStipulationType_31("STRING_1942880396");
        noLegStipulations_0_0_2_2.set(LegStipulationType_31);
        LegStipulations_NoLegStipulations_31.insert(LegStipulationType_31.getString());
        FIX::LegStipulationValue LegStipulationValue_31("STRING_951792162");
        noLegStipulations_0_0_2_2.set(LegStipulationValue_31);
        LegStipulations_NoLegStipulations_31.insert(LegStipulationValue_31.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_31);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_97;
        FIX::NestedPartyID NestedPartyID_97("STRING_949103540");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_97);
        NestedParties_NoNestedPartyIDs_97.insert(NestedPartyID_97.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_97('5');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_97);
        NestedParties_NoNestedPartyIDs_97.insert(NestedPartyIDSource_97.getString());
        FIX::NestedPartyRole NestedPartyRole_97(850076133);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_97);
        NestedParties_NoNestedPartyIDs_97.insert(NestedPartyRole_97.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_97);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_190;
          FIX::NestedPartySubID NestedPartySubID_190("STRING_122653899");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_190);
          NstdPtysSubGrp_NoNestedPartySubIDs_190.insert(NestedPartySubID_190.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_190(1367323540);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_190);
          NstdPtysSubGrp_NoNestedPartySubIDs_190.insert(NestedPartySubIDType_190.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_190);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_2;
      FIX::LegOrderQty LegOrderQty_13;
      LegOrderQty_13.setString("9457553");
      noLegs_0_1_1.set(LegOrderQty_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegOrderQty_13.getString());
      FIX::LegQty LegQty_13;
      LegQty_13.setString("8821529");
      noLegs_0_1_1.set(LegQty_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegQty_13.getString());
      FIX::LegRefID LegRefID_13("STRING_1640272642");
      noLegs_0_1_1.set(LegRefID_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegRefID_13.getString());
      FIX::LegSettlDate LegSettlDate_13("LOCALMKTDATE_915010138");
      noLegs_0_1_1.set(LegSettlDate_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegSettlDate_13.getString());
      FIX::LegSettlType LegSettlType_13('1');
      noLegs_0_1_1.set(LegSettlType_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegSettlType_13.getString());
      FIX::LegSwapType LegSwapType_13(2);
      noLegs_0_1_1.set(LegSwapType_13);
      QuotReqLegsGrp_NoLegs_2.insert(LegSwapType_13.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_2);

      // InstrumentLeg
      multiset<string> InstrumentLeg_107;
      FIX::EncodedLegIssuer EncodedLegIssuer_107("DATA_621172433");
      noLegs_0_1_1.set(EncodedLegIssuer_107);
      InstrumentLeg_107.insert(EncodedLegIssuer_107.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_107(1722056157);
      noLegs_0_1_1.set(EncodedLegIssuerLen_107);
      InstrumentLeg_107.insert(EncodedLegIssuerLen_107.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_107("DATA_2019565067");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_107);
      InstrumentLeg_107.insert(EncodedLegSecurityDesc_107.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_107(1069406592);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_107);
      InstrumentLeg_107.insert(EncodedLegSecurityDescLen_107.getString());
      FIX::LegCFICode LegCFICode_107("STRING_608864074");
      noLegs_0_1_1.set(LegCFICode_107);
      InstrumentLeg_107.insert(LegCFICode_107.getString());
      FIX::LegContractMultiplier LegContractMultiplier_107;
      LegContractMultiplier_107.setString("6628892");
      noLegs_0_1_1.set(LegContractMultiplier_107);
      InstrumentLeg_107.insert(LegContractMultiplier_107.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_107(1023872155);
      noLegs_0_1_1.set(LegContractMultiplierUnit_107);
      InstrumentLeg_107.insert(LegContractMultiplierUnit_107.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_107("MONTHYEAR_1112640599");
      noLegs_0_1_1.set(LegContractSettlMonth_107);
      InstrumentLeg_107.insert(LegContractSettlMonth_107.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_107("COUNTRY_1669706998");
      noLegs_0_1_1.set(LegCountryOfIssue_107);
      InstrumentLeg_107.insert(LegCountryOfIssue_107.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_107("LOCALMKTDATE_1904755727");
      noLegs_0_1_1.set(LegCouponPaymentDate_107);
      InstrumentLeg_107.insert(LegCouponPaymentDate_107.getString());
      FIX::LegCouponRate LegCouponRate_107;
      LegCouponRate_107.setString("62.950000");
      noLegs_0_1_1.set(LegCouponRate_107);
      InstrumentLeg_107.insert(LegCouponRate_107.getString());
      FIX::LegCreditRating LegCreditRating_107("STRING_128937418");
      noLegs_0_1_1.set(LegCreditRating_107);
      InstrumentLeg_107.insert(LegCreditRating_107.getString());
      FIX::LegCurrency LegCurrency_107("CAN");
      noLegs_0_1_1.set(LegCurrency_107);
      InstrumentLeg_107.insert(LegCurrency_107.getString());
      FIX::LegDatedDate LegDatedDate_107("LOCALMKTDATE_688491468");
      noLegs_0_1_1.set(LegDatedDate_107);
      InstrumentLeg_107.insert(LegDatedDate_107.getString());
      FIX::LegExerciseStyle LegExerciseStyle_107(1519037599);
      noLegs_0_1_1.set(LegExerciseStyle_107);
      InstrumentLeg_107.insert(LegExerciseStyle_107.getString());
      FIX::LegFactor LegFactor_107;
      LegFactor_107.setString("5349634");
      noLegs_0_1_1.set(LegFactor_107);
      InstrumentLeg_107.insert(LegFactor_107.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_107(1640283630);
      noLegs_0_1_1.set(LegFlowScheduleType_107);
      InstrumentLeg_107.insert(LegFlowScheduleType_107.getString());
      FIX::LegInstrRegistry LegInstrRegistry_107("STRING_1947369556");
      noLegs_0_1_1.set(LegInstrRegistry_107);
      InstrumentLeg_107.insert(LegInstrRegistry_107.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_107("LOCALMKTDATE_1484066977");
      noLegs_0_1_1.set(LegInterestAccrualDate_107);
      InstrumentLeg_107.insert(LegInterestAccrualDate_107.getString());
      FIX::LegIssueDate LegIssueDate_107("LOCALMKTDATE_64984288");
      noLegs_0_1_1.set(LegIssueDate_107);
      InstrumentLeg_107.insert(LegIssueDate_107.getString());
      FIX::LegIssuer LegIssuer_107("STRING_649962042");
      noLegs_0_1_1.set(LegIssuer_107);
      InstrumentLeg_107.insert(LegIssuer_107.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_107("STRING_1218566735");
      noLegs_0_1_1.set(LegLocaleOfIssue_107);
      InstrumentLeg_107.insert(LegLocaleOfIssue_107.getString());
      FIX::LegMaturityDate LegMaturityDate_107("LOCALMKTDATE_187638187");
      noLegs_0_1_1.set(LegMaturityDate_107);
      InstrumentLeg_107.insert(LegMaturityDate_107.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_107("MONTHYEAR_2017285582");
      noLegs_0_1_1.set(LegMaturityMonthYear_107);
      InstrumentLeg_107.insert(LegMaturityMonthYear_107.getString());
      FIX::LegMaturityTime LegMaturityTime_107("TZTIMEONLY_16838413");
      noLegs_0_1_1.set(LegMaturityTime_107);
      InstrumentLeg_107.insert(LegMaturityTime_107.getString());
      FIX::LegOptAttribute LegOptAttribute_107('1');
      noLegs_0_1_1.set(LegOptAttribute_107);
      InstrumentLeg_107.insert(LegOptAttribute_107.getString());
      FIX::LegOptionRatio LegOptionRatio_107;
      LegOptionRatio_107.setString("15100745");
      noLegs_0_1_1.set(LegOptionRatio_107);
      InstrumentLeg_107.insert(LegOptionRatio_107.getString());
      FIX::LegPool LegPool_107("STRING_931848551");
      noLegs_0_1_1.set(LegPool_107);
      InstrumentLeg_107.insert(LegPool_107.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_107("STRING_664897084");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_107);
      InstrumentLeg_107.insert(LegPriceUnitOfMeasure_107.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_107;
      LegPriceUnitOfMeasureQty_107.setString("13708036");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_107);
      InstrumentLeg_107.insert(LegPriceUnitOfMeasureQty_107.getString());
      FIX::LegProduct LegProduct_107(1553020984);
      noLegs_0_1_1.set(LegProduct_107);
      InstrumentLeg_107.insert(LegProduct_107.getString());
      FIX::LegPutOrCall LegPutOrCall_107(239469593);
      noLegs_0_1_1.set(LegPutOrCall_107);
      InstrumentLeg_107.insert(LegPutOrCall_107.getString());
      FIX::LegRatioQty LegRatioQty_107;
      LegRatioQty_107.setString("12428850");
      noLegs_0_1_1.set(LegRatioQty_107);
      InstrumentLeg_107.insert(LegRatioQty_107.getString());
      FIX::LegRedemptionDate LegRedemptionDate_107("LOCALMKTDATE_474943928");
      noLegs_0_1_1.set(LegRedemptionDate_107);
      InstrumentLeg_107.insert(LegRedemptionDate_107.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_107("STRING_848333668");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_107);
      InstrumentLeg_107.insert(LegRepoCollateralSecurityType_107.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_107;
      LegRepurchaseRate_107.setString("42.630000");
      noLegs_0_1_1.set(LegRepurchaseRate_107);
      InstrumentLeg_107.insert(LegRepurchaseRate_107.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_107(1498816083);
      noLegs_0_1_1.set(LegRepurchaseTerm_107);
      InstrumentLeg_107.insert(LegRepurchaseTerm_107.getString());
      FIX::LegSecurityDesc LegSecurityDesc_107("STRING_1960974267");
      noLegs_0_1_1.set(LegSecurityDesc_107);
      InstrumentLeg_107.insert(LegSecurityDesc_107.getString());
      FIX::LegSecurityExchange LegSecurityExchange_107("EXCHANGE_1427997613");
      noLegs_0_1_1.set(LegSecurityExchange_107);
      InstrumentLeg_107.insert(LegSecurityExchange_107.getString());
      FIX::LegSecurityID LegSecurityID_107("STRING_1256088163");
      noLegs_0_1_1.set(LegSecurityID_107);
      InstrumentLeg_107.insert(LegSecurityID_107.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_107("STRING_658136914");
      noLegs_0_1_1.set(LegSecurityIDSource_107);
      InstrumentLeg_107.insert(LegSecurityIDSource_107.getString());
      FIX::LegSecuritySubType LegSecuritySubType_107("STRING_1556935031");
      noLegs_0_1_1.set(LegSecuritySubType_107);
      InstrumentLeg_107.insert(LegSecuritySubType_107.getString());
      FIX::LegSecurityType LegSecurityType_107("STRING_1199856676");
      noLegs_0_1_1.set(LegSecurityType_107);
      InstrumentLeg_107.insert(LegSecurityType_107.getString());
      FIX::LegSide LegSide_107('1');
      noLegs_0_1_1.set(LegSide_107);
      InstrumentLeg_107.insert(LegSide_107.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_107("STRING_97942851");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_107);
      InstrumentLeg_107.insert(LegStateOrProvinceOfIssue_107.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_107("CHF");
      noLegs_0_1_1.set(LegStrikeCurrency_107);
      InstrumentLeg_107.insert(LegStrikeCurrency_107.getString());
      FIX::LegStrikePrice LegStrikePrice_107;
      LegStrikePrice_107.setString("17382264");
      noLegs_0_1_1.set(LegStrikePrice_107);
      InstrumentLeg_107.insert(LegStrikePrice_107.getString());
      FIX::LegSymbol LegSymbol_107("STRING_371296536");
      noLegs_0_1_1.set(LegSymbol_107);
      InstrumentLeg_107.insert(LegSymbol_107.getString());
      FIX::LegSymbolSfx LegSymbolSfx_107("STRING_1269250370");
      noLegs_0_1_1.set(LegSymbolSfx_107);
      InstrumentLeg_107.insert(LegSymbolSfx_107.getString());
      FIX::LegTimeUnit LegTimeUnit_107("STRING_1803210770");
      noLegs_0_1_1.set(LegTimeUnit_107);
      InstrumentLeg_107.insert(LegTimeUnit_107.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_107("STRING_1021258578");
      noLegs_0_1_1.set(LegUnitOfMeasure_107);
      InstrumentLeg_107.insert(LegUnitOfMeasure_107.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_107;
      LegUnitOfMeasureQty_107.setString("3403334");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_107);
      InstrumentLeg_107.insert(LegUnitOfMeasureQty_107.getString());
      all_values.push_back(InstrumentLeg_107);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_207;
        FIX::LegSecurityAltID LegSecurityAltID_207("STRING_891060513");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_207);
        LegSecAltIDGrp_NoLegSecurityAltID_207.insert(LegSecurityAltID_207.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_207("STRING_357171871");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_207);
        LegSecAltIDGrp_NoLegSecurityAltID_207.insert(LegSecurityAltIDSource_207.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_207);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_4;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_4("GBP");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurveCurrency_4.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_4("STRING_1289020422");
      noLegs_0_1_1.set(LegBenchmarkCurveName_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurveName_4.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_4("STRING_1578053507");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkCurvePoint_4.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_4;
      LegBenchmarkPrice_4.setString("16244550");
      noLegs_0_1_1.set(LegBenchmarkPrice_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkPrice_4.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_4(694557758);
      noLegs_0_1_1.set(LegBenchmarkPriceType_4);
      LegBenchmarkCurveData_4.insert(LegBenchmarkPriceType_4.getString());
      all_values.push_back(LegBenchmarkCurveData_4);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_32;
        FIX::LegStipulationType LegStipulationType_32("STRING_719856450");
        noLegStipulations_0_1_2_0.set(LegStipulationType_32);
        LegStipulations_NoLegStipulations_32.insert(LegStipulationType_32.getString());
        FIX::LegStipulationValue LegStipulationValue_32("STRING_1169501686");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_32);
        LegStipulations_NoLegStipulations_32.insert(LegStipulationValue_32.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_32);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_33;
        FIX::LegStipulationType LegStipulationType_33("STRING_518373121");
        noLegStipulations_0_1_2_1.set(LegStipulationType_33);
        LegStipulations_NoLegStipulations_33.insert(LegStipulationType_33.getString());
        FIX::LegStipulationValue LegStipulationValue_33("STRING_478147066");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_33);
        LegStipulations_NoLegStipulations_33.insert(LegStipulationValue_33.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_33);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_34;
        FIX::LegStipulationType LegStipulationType_34("STRING_520834121");
        noLegStipulations_0_1_2_2.set(LegStipulationType_34);
        LegStipulations_NoLegStipulations_34.insert(LegStipulationType_34.getString());
        FIX::LegStipulationValue LegStipulationValue_34("STRING_331863740");
        noLegStipulations_0_1_2_2.set(LegStipulationValue_34);
        LegStipulations_NoLegStipulations_34.insert(LegStipulationValue_34.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_34);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_98;
        FIX::NestedPartyID NestedPartyID_98("STRING_1776922284");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_98);
        NestedParties_NoNestedPartyIDs_98.insert(NestedPartyID_98.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_98('9');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_98);
        NestedParties_NoNestedPartyIDs_98.insert(NestedPartyIDSource_98.getString());
        FIX::NestedPartyRole NestedPartyRole_98(1315596063);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_98);
        NestedParties_NoNestedPartyIDs_98.insert(NestedPartyRole_98.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_98);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_191;
          FIX::NestedPartySubID NestedPartySubID_191("STRING_240220610");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_191);
          NstdPtysSubGrp_NoNestedPartySubIDs_191.insert(NestedPartySubID_191.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_191(1413538914);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_191);
          NstdPtysSubGrp_NoNestedPartySubIDs_191.insert(NestedPartySubIDType_191.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_191);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_99;
        FIX::NestedPartyID NestedPartyID_99("STRING_1400705941");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_99);
        NestedParties_NoNestedPartyIDs_99.insert(NestedPartyID_99.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_99('2');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_99);
        NestedParties_NoNestedPartyIDs_99.insert(NestedPartyIDSource_99.getString());
        FIX::NestedPartyRole NestedPartyRole_99(1004281748);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_99);
        NestedParties_NoNestedPartyIDs_99.insert(NestedPartyRole_99.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_99);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_192;
          FIX::NestedPartySubID NestedPartySubID_192("STRING_1294654373");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_192);
          NstdPtysSubGrp_NoNestedPartySubIDs_192.insert(NestedPartySubID_192.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_192(660008870);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_192);
          NstdPtysSubGrp_NoNestedPartySubIDs_192.insert(NestedPartySubIDType_192.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_192);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_193;
          FIX::NestedPartySubID NestedPartySubID_193("STRING_645777408");
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubID_193);
          NstdPtysSubGrp_NoNestedPartySubIDs_193.insert(NestedPartySubID_193.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_193(1634987831);
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubIDType_193);
          NstdPtysSubGrp_NoNestedPartySubIDs_193.insert(NestedPartySubIDType_193.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_193);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_100;
        FIX::NestedPartyID NestedPartyID_100("STRING_503374179");
        noNestedPartyIDs_0_1_2_2.set(NestedPartyID_100);
        NestedParties_NoNestedPartyIDs_100.insert(NestedPartyID_100.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_100('1');
        noNestedPartyIDs_0_1_2_2.set(NestedPartyIDSource_100);
        NestedParties_NoNestedPartyIDs_100.insert(NestedPartyIDSource_100.getString());
        FIX::NestedPartyRole NestedPartyRole_100(1992159702);
        noNestedPartyIDs_0_1_2_2.set(NestedPartyRole_100);
        NestedParties_NoNestedPartyIDs_100.insert(NestedPartyRole_100.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_100);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_194;
          FIX::NestedPartySubID NestedPartySubID_194("STRING_1790489363");
          noNestedPartySubIDs_0_1_2_3_0.set(NestedPartySubID_194);
          NstdPtysSubGrp_NoNestedPartySubIDs_194.insert(NestedPartySubID_194.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_194(1133696476);
          noNestedPartySubIDs_0_1_2_3_0.set(NestedPartySubIDType_194);
          NstdPtysSubGrp_NoNestedPartySubIDs_194.insert(NestedPartySubIDType_194.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_194);

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_195;
          FIX::NestedPartySubID NestedPartySubID_195("STRING_847100462");
          noNestedPartySubIDs_0_1_2_3_1.set(NestedPartySubID_195);
          NstdPtysSubGrp_NoNestedPartySubIDs_195.insert(NestedPartySubID_195.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_195(1267460775);
          noNestedPartySubIDs_0_1_2_3_1.set(NestedPartySubIDType_195);
          NstdPtysSubGrp_NoNestedPartySubIDs_195.insert(NestedPartySubIDType_195.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_195);

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_1);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_3;
      FIX::LegOrderQty LegOrderQty_14;
      LegOrderQty_14.setString("18282542");
      noLegs_0_1_2.set(LegOrderQty_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegOrderQty_14.getString());
      FIX::LegQty LegQty_14;
      LegQty_14.setString("5171399");
      noLegs_0_1_2.set(LegQty_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegQty_14.getString());
      FIX::LegRefID LegRefID_14("STRING_1987317226");
      noLegs_0_1_2.set(LegRefID_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegRefID_14.getString());
      FIX::LegSettlDate LegSettlDate_14("LOCALMKTDATE_850272272");
      noLegs_0_1_2.set(LegSettlDate_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegSettlDate_14.getString());
      FIX::LegSettlType LegSettlType_14('1');
      noLegs_0_1_2.set(LegSettlType_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegSettlType_14.getString());
      FIX::LegSwapType LegSwapType_14(1);
      noLegs_0_1_2.set(LegSwapType_14);
      QuotReqLegsGrp_NoLegs_3.insert(LegSwapType_14.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_3);

      // InstrumentLeg
      multiset<string> InstrumentLeg_108;
      FIX::EncodedLegIssuer EncodedLegIssuer_108("DATA_1371106394");
      noLegs_0_1_2.set(EncodedLegIssuer_108);
      InstrumentLeg_108.insert(EncodedLegIssuer_108.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_108(1367376776);
      noLegs_0_1_2.set(EncodedLegIssuerLen_108);
      InstrumentLeg_108.insert(EncodedLegIssuerLen_108.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_108("DATA_76641675");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_108);
      InstrumentLeg_108.insert(EncodedLegSecurityDesc_108.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_108(1000545030);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_108);
      InstrumentLeg_108.insert(EncodedLegSecurityDescLen_108.getString());
      FIX::LegCFICode LegCFICode_108("STRING_209893782");
      noLegs_0_1_2.set(LegCFICode_108);
      InstrumentLeg_108.insert(LegCFICode_108.getString());
      FIX::LegContractMultiplier LegContractMultiplier_108;
      LegContractMultiplier_108.setString("13922377");
      noLegs_0_1_2.set(LegContractMultiplier_108);
      InstrumentLeg_108.insert(LegContractMultiplier_108.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_108(1829840343);
      noLegs_0_1_2.set(LegContractMultiplierUnit_108);
      InstrumentLeg_108.insert(LegContractMultiplierUnit_108.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_108("MONTHYEAR_450114392");
      noLegs_0_1_2.set(LegContractSettlMonth_108);
      InstrumentLeg_108.insert(LegContractSettlMonth_108.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_108("COUNTRY_658293005");
      noLegs_0_1_2.set(LegCountryOfIssue_108);
      InstrumentLeg_108.insert(LegCountryOfIssue_108.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_108("LOCALMKTDATE_1083062636");
      noLegs_0_1_2.set(LegCouponPaymentDate_108);
      InstrumentLeg_108.insert(LegCouponPaymentDate_108.getString());
      FIX::LegCouponRate LegCouponRate_108;
      LegCouponRate_108.setString("83.950000");
      noLegs_0_1_2.set(LegCouponRate_108);
      InstrumentLeg_108.insert(LegCouponRate_108.getString());
      FIX::LegCreditRating LegCreditRating_108("STRING_1662574753");
      noLegs_0_1_2.set(LegCreditRating_108);
      InstrumentLeg_108.insert(LegCreditRating_108.getString());
      FIX::LegCurrency LegCurrency_108("CAN");
      noLegs_0_1_2.set(LegCurrency_108);
      InstrumentLeg_108.insert(LegCurrency_108.getString());
      FIX::LegDatedDate LegDatedDate_108("LOCALMKTDATE_175099976");
      noLegs_0_1_2.set(LegDatedDate_108);
      InstrumentLeg_108.insert(LegDatedDate_108.getString());
      FIX::LegExerciseStyle LegExerciseStyle_108(1353358874);
      noLegs_0_1_2.set(LegExerciseStyle_108);
      InstrumentLeg_108.insert(LegExerciseStyle_108.getString());
      FIX::LegFactor LegFactor_108;
      LegFactor_108.setString("12576769");
      noLegs_0_1_2.set(LegFactor_108);
      InstrumentLeg_108.insert(LegFactor_108.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_108(678474155);
      noLegs_0_1_2.set(LegFlowScheduleType_108);
      InstrumentLeg_108.insert(LegFlowScheduleType_108.getString());
      FIX::LegInstrRegistry LegInstrRegistry_108("STRING_742713147");
      noLegs_0_1_2.set(LegInstrRegistry_108);
      InstrumentLeg_108.insert(LegInstrRegistry_108.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_108("LOCALMKTDATE_1102353007");
      noLegs_0_1_2.set(LegInterestAccrualDate_108);
      InstrumentLeg_108.insert(LegInterestAccrualDate_108.getString());
      FIX::LegIssueDate LegIssueDate_108("LOCALMKTDATE_2095004758");
      noLegs_0_1_2.set(LegIssueDate_108);
      InstrumentLeg_108.insert(LegIssueDate_108.getString());
      FIX::LegIssuer LegIssuer_108("STRING_385718862");
      noLegs_0_1_2.set(LegIssuer_108);
      InstrumentLeg_108.insert(LegIssuer_108.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_108("STRING_88565835");
      noLegs_0_1_2.set(LegLocaleOfIssue_108);
      InstrumentLeg_108.insert(LegLocaleOfIssue_108.getString());
      FIX::LegMaturityDate LegMaturityDate_108("LOCALMKTDATE_794621572");
      noLegs_0_1_2.set(LegMaturityDate_108);
      InstrumentLeg_108.insert(LegMaturityDate_108.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_108("MONTHYEAR_1653179637");
      noLegs_0_1_2.set(LegMaturityMonthYear_108);
      InstrumentLeg_108.insert(LegMaturityMonthYear_108.getString());
      FIX::LegMaturityTime LegMaturityTime_108("TZTIMEONLY_1916820070");
      noLegs_0_1_2.set(LegMaturityTime_108);
      InstrumentLeg_108.insert(LegMaturityTime_108.getString());
      FIX::LegOptAttribute LegOptAttribute_108('1');
      noLegs_0_1_2.set(LegOptAttribute_108);
      InstrumentLeg_108.insert(LegOptAttribute_108.getString());
      FIX::LegOptionRatio LegOptionRatio_108;
      LegOptionRatio_108.setString("14930132");
      noLegs_0_1_2.set(LegOptionRatio_108);
      InstrumentLeg_108.insert(LegOptionRatio_108.getString());
      FIX::LegPool LegPool_108("STRING_619608694");
      noLegs_0_1_2.set(LegPool_108);
      InstrumentLeg_108.insert(LegPool_108.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_108("STRING_199790875");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_108);
      InstrumentLeg_108.insert(LegPriceUnitOfMeasure_108.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_108;
      LegPriceUnitOfMeasureQty_108.setString("18109938");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_108);
      InstrumentLeg_108.insert(LegPriceUnitOfMeasureQty_108.getString());
      FIX::LegProduct LegProduct_108(1990715088);
      noLegs_0_1_2.set(LegProduct_108);
      InstrumentLeg_108.insert(LegProduct_108.getString());
      FIX::LegPutOrCall LegPutOrCall_108(1567167651);
      noLegs_0_1_2.set(LegPutOrCall_108);
      InstrumentLeg_108.insert(LegPutOrCall_108.getString());
      FIX::LegRatioQty LegRatioQty_108;
      LegRatioQty_108.setString("18876355");
      noLegs_0_1_2.set(LegRatioQty_108);
      InstrumentLeg_108.insert(LegRatioQty_108.getString());
      FIX::LegRedemptionDate LegRedemptionDate_108("LOCALMKTDATE_843776471");
      noLegs_0_1_2.set(LegRedemptionDate_108);
      InstrumentLeg_108.insert(LegRedemptionDate_108.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_108("STRING_1777061433");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_108);
      InstrumentLeg_108.insert(LegRepoCollateralSecurityType_108.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_108;
      LegRepurchaseRate_108.setString("96.250000");
      noLegs_0_1_2.set(LegRepurchaseRate_108);
      InstrumentLeg_108.insert(LegRepurchaseRate_108.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_108(526133166);
      noLegs_0_1_2.set(LegRepurchaseTerm_108);
      InstrumentLeg_108.insert(LegRepurchaseTerm_108.getString());
      FIX::LegSecurityDesc LegSecurityDesc_108("STRING_79692178");
      noLegs_0_1_2.set(LegSecurityDesc_108);
      InstrumentLeg_108.insert(LegSecurityDesc_108.getString());
      FIX::LegSecurityExchange LegSecurityExchange_108("EXCHANGE_1790682630");
      noLegs_0_1_2.set(LegSecurityExchange_108);
      InstrumentLeg_108.insert(LegSecurityExchange_108.getString());
      FIX::LegSecurityID LegSecurityID_108("STRING_1609195803");
      noLegs_0_1_2.set(LegSecurityID_108);
      InstrumentLeg_108.insert(LegSecurityID_108.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_108("STRING_555210573");
      noLegs_0_1_2.set(LegSecurityIDSource_108);
      InstrumentLeg_108.insert(LegSecurityIDSource_108.getString());
      FIX::LegSecuritySubType LegSecuritySubType_108("STRING_1305773736");
      noLegs_0_1_2.set(LegSecuritySubType_108);
      InstrumentLeg_108.insert(LegSecuritySubType_108.getString());
      FIX::LegSecurityType LegSecurityType_108("STRING_169293621");
      noLegs_0_1_2.set(LegSecurityType_108);
      InstrumentLeg_108.insert(LegSecurityType_108.getString());
      FIX::LegSide LegSide_108('1');
      noLegs_0_1_2.set(LegSide_108);
      InstrumentLeg_108.insert(LegSide_108.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_108("STRING_1480873712");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_108);
      InstrumentLeg_108.insert(LegStateOrProvinceOfIssue_108.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_108("CHF");
      noLegs_0_1_2.set(LegStrikeCurrency_108);
      InstrumentLeg_108.insert(LegStrikeCurrency_108.getString());
      FIX::LegStrikePrice LegStrikePrice_108;
      LegStrikePrice_108.setString("118642");
      noLegs_0_1_2.set(LegStrikePrice_108);
      InstrumentLeg_108.insert(LegStrikePrice_108.getString());
      FIX::LegSymbol LegSymbol_108("STRING_117881994");
      noLegs_0_1_2.set(LegSymbol_108);
      InstrumentLeg_108.insert(LegSymbol_108.getString());
      FIX::LegSymbolSfx LegSymbolSfx_108("STRING_390446006");
      noLegs_0_1_2.set(LegSymbolSfx_108);
      InstrumentLeg_108.insert(LegSymbolSfx_108.getString());
      FIX::LegTimeUnit LegTimeUnit_108("STRING_2106868977");
      noLegs_0_1_2.set(LegTimeUnit_108);
      InstrumentLeg_108.insert(LegTimeUnit_108.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_108("STRING_503600856");
      noLegs_0_1_2.set(LegUnitOfMeasure_108);
      InstrumentLeg_108.insert(LegUnitOfMeasure_108.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_108;
      LegUnitOfMeasureQty_108.setString("4790118");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_108);
      InstrumentLeg_108.insert(LegUnitOfMeasureQty_108.getString());
      all_values.push_back(InstrumentLeg_108);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_208;
        FIX::LegSecurityAltID LegSecurityAltID_208("STRING_9296845");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_208);
        LegSecAltIDGrp_NoLegSecurityAltID_208.insert(LegSecurityAltID_208.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_208("STRING_248348263");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_208);
        LegSecAltIDGrp_NoLegSecurityAltID_208.insert(LegSecurityAltIDSource_208.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_208);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_209;
        FIX::LegSecurityAltID LegSecurityAltID_209("STRING_2065768388");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_209);
        LegSecAltIDGrp_NoLegSecurityAltID_209.insert(LegSecurityAltID_209.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_209("STRING_1502310061");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_209);
        LegSecAltIDGrp_NoLegSecurityAltID_209.insert(LegSecurityAltIDSource_209.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_209);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_210;
        FIX::LegSecurityAltID LegSecurityAltID_210("STRING_867956958");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltID_210);
        LegSecAltIDGrp_NoLegSecurityAltID_210.insert(LegSecurityAltID_210.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_210("STRING_118075615");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltIDSource_210);
        LegSecAltIDGrp_NoLegSecurityAltID_210.insert(LegSecurityAltIDSource_210.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_210);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_5;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_5("JPY");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurveCurrency_5.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_5("STRING_1685243266");
      noLegs_0_1_2.set(LegBenchmarkCurveName_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurveName_5.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_5("STRING_905972159");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkCurvePoint_5.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_5;
      LegBenchmarkPrice_5.setString("15549648");
      noLegs_0_1_2.set(LegBenchmarkPrice_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkPrice_5.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_5(1314821052);
      noLegs_0_1_2.set(LegBenchmarkPriceType_5);
      LegBenchmarkCurveData_5.insert(LegBenchmarkPriceType_5.getString());
      all_values.push_back(LegBenchmarkCurveData_5);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_35;
        FIX::LegStipulationType LegStipulationType_35("STRING_2081098036");
        noLegStipulations_0_2_2_0.set(LegStipulationType_35);
        LegStipulations_NoLegStipulations_35.insert(LegStipulationType_35.getString());
        FIX::LegStipulationValue LegStipulationValue_35("STRING_1394513230");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_35);
        LegStipulations_NoLegStipulations_35.insert(LegStipulationValue_35.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_35);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_36;
        FIX::LegStipulationType LegStipulationType_36("STRING_1681560767");
        noLegStipulations_0_2_2_1.set(LegStipulationType_36);
        LegStipulations_NoLegStipulations_36.insert(LegStipulationType_36.getString());
        FIX::LegStipulationValue LegStipulationValue_36("STRING_1542810191");
        noLegStipulations_0_2_2_1.set(LegStipulationValue_36);
        LegStipulations_NoLegStipulations_36.insert(LegStipulationValue_36.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_36);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_101;
        FIX::NestedPartyID NestedPartyID_101("STRING_839850855");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyID_101.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_101('1');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyIDSource_101.getString());
        FIX::NestedPartyRole NestedPartyRole_101(2127623498);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_101);
        NestedParties_NoNestedPartyIDs_101.insert(NestedPartyRole_101.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_101);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_196;
          FIX::NestedPartySubID NestedPartySubID_196("STRING_1087272659");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_196);
          NstdPtysSubGrp_NoNestedPartySubIDs_196.insert(NestedPartySubID_196.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_196(1415716497);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_196);
          NstdPtysSubGrp_NoNestedPartySubIDs_196.insert(NestedPartySubIDType_196.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_196);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_102;
        FIX::NestedPartyID NestedPartyID_102("STRING_185105139");
        noNestedPartyIDs_0_2_2_1.set(NestedPartyID_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyID_102.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_102('1');
        noNestedPartyIDs_0_2_2_1.set(NestedPartyIDSource_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyIDSource_102.getString());
        FIX::NestedPartyRole NestedPartyRole_102(1806162503);
        noNestedPartyIDs_0_2_2_1.set(NestedPartyRole_102);
        NestedParties_NoNestedPartyIDs_102.insert(NestedPartyRole_102.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_102);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_197;
          FIX::NestedPartySubID NestedPartySubID_197("STRING_1708755509");
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubID_197);
          NstdPtysSubGrp_NoNestedPartySubIDs_197.insert(NestedPartySubID_197.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_197(137690696);
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubIDType_197);
          NstdPtysSubGrp_NoNestedPartySubIDs_197.insert(NestedPartySubIDType_197.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_197);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_198;
          FIX::NestedPartySubID NestedPartySubID_198("STRING_898497370");
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubID_198);
          NstdPtysSubGrp_NoNestedPartySubIDs_198.insert(NestedPartySubID_198.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_198(1718052354);
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubIDType_198);
          NstdPtysSubGrp_NoNestedPartySubIDs_198.insert(NestedPartySubIDType_198.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_198);

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_1);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_21;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_21("JPY");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_21);
    SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurveCurrency_21.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_21("STRING_Treasury");
    noRelatedSym_0_0.set(BenchmarkCurveName_21);
    SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurveName_21.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_21("STRING_1253995918");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_21);
    SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurvePoint_21.getString());
    FIX::BenchmarkPrice BenchmarkPrice_21;
    BenchmarkPrice_21.setString("9348577");
    noRelatedSym_0_0.set(BenchmarkPrice_21);
    SpreadOrBenchmarkCurveData_21.insert(BenchmarkPrice_21.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_21(91215392);
    noRelatedSym_0_0.set(BenchmarkPriceType_21);
    SpreadOrBenchmarkCurveData_21.insert(BenchmarkPriceType_21.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_21("STRING_1965184316");
    noRelatedSym_0_0.set(BenchmarkSecurityID_21);
    SpreadOrBenchmarkCurveData_21.insert(BenchmarkSecurityID_21.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_21("STRING_472617344");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_21);
    SpreadOrBenchmarkCurveData_21.insert(BenchmarkSecurityIDSource_21.getString());
    FIX::Spread Spread_21;
    Spread_21.setString("9971875");
    noRelatedSym_0_0.set(Spread_21);
    SpreadOrBenchmarkCurveData_21.insert(Spread_21.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_21);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_33;
      FIX::StipulationType StipulationType_33("STRING_MPR");
      noStipulations_0_1_0.set(StipulationType_33);
      Stipulations_NoStipulations_33.insert(StipulationType_33.getString());
      FIX::StipulationValue StipulationValue_33("STRING_888065688");
      noStipulations_0_1_0.set(StipulationValue_33);
      Stipulations_NoStipulations_33.insert(StipulationValue_33.getString());
      all_values.push_back(Stipulations_NoStipulations_33);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_34;
      FIX::StipulationType StipulationType_34("STRING_CUSTOMDATE");
      noStipulations_0_1_1.set(StipulationType_34);
      Stipulations_NoStipulations_34.insert(StipulationType_34.getString());
      FIX::StipulationValue StipulationValue_34("STRING_1034467978");
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
      multiset<string> UnderlyingInstrument_103;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_103("DATA_701606469");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingIssuer_103.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_103(836708134);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingIssuerLen_103.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_103("DATA_1261993663");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDesc_103.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_103(266226633);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_103);
      UnderlyingInstrument_103.insert(EncodedUnderlyingSecurityDescLen_103.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_103;
      UnderlyingAdjustedQuantity_103.setString("8168479");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_103);
      UnderlyingInstrument_103.insert(UnderlyingAdjustedQuantity_103.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_103;
      UnderlyingAllocationPercent_103.setString("45.830000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_103);
      UnderlyingInstrument_103.insert(UnderlyingAllocationPercent_103.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_103;
      UnderlyingAttachmentPoint_103.setString("92.920000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_103);
      UnderlyingInstrument_103.insert(UnderlyingAttachmentPoint_103.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_103("STRING_85080833");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_103);
      UnderlyingInstrument_103.insert(UnderlyingCFICode_103.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_103("STRING_1620339722");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_103);
      UnderlyingInstrument_103.insert(UnderlyingCPProgram_103.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_103("STRING_411170297");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_103);
      UnderlyingInstrument_103.insert(UnderlyingCPRegType_103.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_103;
      UnderlyingCapValue_103.setString("18912433");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_103);
      UnderlyingInstrument_103.insert(UnderlyingCapValue_103.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_103;
      UnderlyingCashAmount_103.setString("17648301");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_103);
      UnderlyingInstrument_103.insert(UnderlyingCashAmount_103.getString());
      FIX::UnderlyingCashType UnderlyingCashType_103("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_103);
      UnderlyingInstrument_103.insert(UnderlyingCashType_103.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_103;
      UnderlyingContractMultiplier_103.setString("20289340");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_103);
      UnderlyingInstrument_103.insert(UnderlyingContractMultiplier_103.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_103(515843912);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_103);
      UnderlyingInstrument_103.insert(UnderlyingContractMultiplierUnit_103.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_103("COUNTRY_1690494512");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingCountryOfIssue_103.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_103("LOCALMKTDATE_267489344");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_103);
      UnderlyingInstrument_103.insert(UnderlyingCouponPaymentDate_103.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_103;
      UnderlyingCouponRate_103.setString("60.230000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_103);
      UnderlyingInstrument_103.insert(UnderlyingCouponRate_103.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_103("STRING_615889632");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_103);
      UnderlyingInstrument_103.insert(UnderlyingCreditRating_103.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_103("CAN");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_103);
      UnderlyingInstrument_103.insert(UnderlyingCurrency_103.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_103;
      UnderlyingCurrentValue_103.setString("7071050");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_103);
      UnderlyingInstrument_103.insert(UnderlyingCurrentValue_103.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_103;
      UnderlyingDetachmentPoint_103.setString("59.310000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_103);
      UnderlyingInstrument_103.insert(UnderlyingDetachmentPoint_103.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_103;
      UnderlyingDirtyPrice_103.setString("5926174");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_103);
      UnderlyingInstrument_103.insert(UnderlyingDirtyPrice_103.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_103;
      UnderlyingEndPrice_103.setString("17042925");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_103);
      UnderlyingInstrument_103.insert(UnderlyingEndPrice_103.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_103;
      UnderlyingEndValue_103.setString("5643678");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_103);
      UnderlyingInstrument_103.insert(UnderlyingEndValue_103.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_103(232572194);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_103);
      UnderlyingInstrument_103.insert(UnderlyingExerciseStyle_103.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_103;
      UnderlyingFXRate_103.setString("4448746");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_103);
      UnderlyingInstrument_103.insert(UnderlyingFXRate_103.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_103('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_103);
      UnderlyingInstrument_103.insert(UnderlyingFXRateCalc_103.getString());
      FIX::UnderlyingFactor UnderlyingFactor_103;
      UnderlyingFactor_103.setString("12670401");
      noUnderlyings_0_1_0.set(UnderlyingFactor_103);
      UnderlyingInstrument_103.insert(UnderlyingFactor_103.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_103(867017424);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_103);
      UnderlyingInstrument_103.insert(UnderlyingFlowScheduleType_103.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_103("STRING_424770568");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_103);
      UnderlyingInstrument_103.insert(UnderlyingInstrRegistry_103.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_103("LOCALMKTDATE_2103748306");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_103);
      UnderlyingInstrument_103.insert(UnderlyingIssueDate_103.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_103("STRING_2129011087");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_103);
      UnderlyingInstrument_103.insert(UnderlyingIssuer_103.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_103("STRING_690997201");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingLocaleOfIssue_103.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_103("LOCALMKTDATE_773112642");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityDate_103.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_103("MONTHYEAR_1416762022");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityMonthYear_103.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_103("TZTIMEONLY_2044496493");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_103);
      UnderlyingInstrument_103.insert(UnderlyingMaturityTime_103.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_103;
      UnderlyingNotionalPercentageOutstanding_103.setString("34.750000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_103);
      UnderlyingInstrument_103.insert(UnderlyingNotionalPercentageOutstanding_103.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_103('8');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_103);
      UnderlyingInstrument_103.insert(UnderlyingOptAttribute_103.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_103;
      UnderlyingOriginalNotionalPercentageOutstanding_103.setString("31.420000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_103);
      UnderlyingInstrument_103.insert(UnderlyingOriginalNotionalPercentageOutstanding_103.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_103("STRING_601953163");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_103);
      UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasure_103.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_103;
      UnderlyingPriceUnitOfMeasureQty_103.setString("5069646");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_103);
      UnderlyingInstrument_103.insert(UnderlyingPriceUnitOfMeasureQty_103.getString());
      FIX::UnderlyingProduct UnderlyingProduct_103(280625300);
      noUnderlyings_0_1_0.set(UnderlyingProduct_103);
      UnderlyingInstrument_103.insert(UnderlyingProduct_103.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_103(483403548);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_103);
      UnderlyingInstrument_103.insert(UnderlyingPutOrCall_103.getString());
      FIX::UnderlyingPx UnderlyingPx_103;
      UnderlyingPx_103.setString("10228085");
      noUnderlyings_0_1_0.set(UnderlyingPx_103);
      UnderlyingInstrument_103.insert(UnderlyingPx_103.getString());
      FIX::UnderlyingQty UnderlyingQty_103;
      UnderlyingQty_103.setString("19711198");
      noUnderlyings_0_1_0.set(UnderlyingQty_103);
      UnderlyingInstrument_103.insert(UnderlyingQty_103.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_103("LOCALMKTDATE_750892892");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_103);
      UnderlyingInstrument_103.insert(UnderlyingRedemptionDate_103.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_103("STRING_207950926");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_103);
      UnderlyingInstrument_103.insert(UnderlyingRepoCollateralSecurityType_103.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_103;
      UnderlyingRepurchaseRate_103.setString("57.960000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_103);
      UnderlyingInstrument_103.insert(UnderlyingRepurchaseRate_103.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_103(124894507);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_103);
      UnderlyingInstrument_103.insert(UnderlyingRepurchaseTerm_103.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_103("STRING_327951027");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_103);
      UnderlyingInstrument_103.insert(UnderlyingRestructuringType_103.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_103("STRING_1146630820");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityDesc_103.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_103("EXCHANGE_1464080438");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityExchange_103.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_103("STRING_920568473");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityID_103.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_103("STRING_703439748");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityIDSource_103.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_103("STRING_2028448259");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_103);
      UnderlyingInstrument_103.insert(UnderlyingSecuritySubType_103.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_103("STRING_1153140667");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_103);
      UnderlyingInstrument_103.insert(UnderlyingSecurityType_103.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_103("STRING_1148314364");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_103);
      UnderlyingInstrument_103.insert(UnderlyingSeniority_103.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_103("STRING_1751612358");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_103);
      UnderlyingInstrument_103.insert(UnderlyingSettlMethod_103.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_103(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_103);
      UnderlyingInstrument_103.insert(UnderlyingSettlementType_103.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_103;
      UnderlyingStartValue_103.setString("20153317");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_103);
      UnderlyingInstrument_103.insert(UnderlyingStartValue_103.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_103("STRING_28899278");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_103);
      UnderlyingInstrument_103.insert(UnderlyingStateOrProvinceOfIssue_103.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_103("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_103);
      UnderlyingInstrument_103.insert(UnderlyingStrikeCurrency_103.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_103;
      UnderlyingStrikePrice_103.setString("7198964");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_103);
      UnderlyingInstrument_103.insert(UnderlyingStrikePrice_103.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_103("STRING_1002074492");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_103);
      UnderlyingInstrument_103.insert(UnderlyingSymbol_103.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_103("STRING_1266137602");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_103);
      UnderlyingInstrument_103.insert(UnderlyingSymbolSfx_103.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_103("STRING_616909324");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_103);
      UnderlyingInstrument_103.insert(UnderlyingTimeUnit_103.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_103("STRING_1860267968");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_103);
      UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasure_103.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_103;
      UnderlyingUnitOfMeasureQty_103.setString("82720");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_103);
      UnderlyingInstrument_103.insert(UnderlyingUnitOfMeasureQty_103.getString());
      all_values.push_back(UnderlyingInstrument_103);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_207;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_207("STRING_314737483");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_207);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltID_207.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_207("STRING_515236689");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_207);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_207.insert(UnderlyingSecurityAltIDSource_207.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_208;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_208("STRING_1205717766");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_208);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_208.insert(UnderlyingSecurityAltID_208.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_208("STRING_798141031");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_208);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_208.insert(UnderlyingSecurityAltIDSource_208.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_191;
        FIX::UnderlyingStipType UnderlyingStipType_191("STRING_1029353930");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_191);
        UnderlyingStipulations_NoUnderlyingStips_191.insert(UnderlyingStipType_191.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_191("STRING_1549033924");
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
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_210;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_210("STRING_1468879727");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyID_210.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_210('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyIDSource_210.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_210(2073947195);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_210);
        UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyRole_210.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_210);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_399("STRING_990525221");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_399);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399.insert(UnderlyingInstrumentPartySubID_399.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_399(847032020);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_399);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399.insert(UnderlyingInstrumentPartySubIDType_399.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_400("STRING_1171466647");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_400);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400.insert(UnderlyingInstrumentPartySubID_400.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_400(871489832);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_400);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400.insert(UnderlyingInstrumentPartySubIDType_400.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_211;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_211("STRING_2000172687");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyID_211.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_211('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyIDSource_211.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_211(475618542);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_211);
        UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyRole_211.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_211);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_401("STRING_40145503");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_401);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401.insert(UnderlyingInstrumentPartySubID_401.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_401(504517820);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_401);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401.insert(UnderlyingInstrumentPartySubIDType_401.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_104;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_104("DATA_354348080");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingIssuer_104.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_104(2037004731);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingIssuerLen_104.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_104("DATA_1224414299");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDesc_104.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_104(1356422573);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_104);
      UnderlyingInstrument_104.insert(EncodedUnderlyingSecurityDescLen_104.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_104;
      UnderlyingAdjustedQuantity_104.setString("11556586");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_104);
      UnderlyingInstrument_104.insert(UnderlyingAdjustedQuantity_104.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_104;
      UnderlyingAllocationPercent_104.setString("36.230000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_104);
      UnderlyingInstrument_104.insert(UnderlyingAllocationPercent_104.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_104;
      UnderlyingAttachmentPoint_104.setString("68.930000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_104);
      UnderlyingInstrument_104.insert(UnderlyingAttachmentPoint_104.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_104("STRING_1163930735");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_104);
      UnderlyingInstrument_104.insert(UnderlyingCFICode_104.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_104("STRING_618932441");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_104);
      UnderlyingInstrument_104.insert(UnderlyingCPProgram_104.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_104("STRING_1383944376");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_104);
      UnderlyingInstrument_104.insert(UnderlyingCPRegType_104.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_104;
      UnderlyingCapValue_104.setString("16791674");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_104);
      UnderlyingInstrument_104.insert(UnderlyingCapValue_104.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_104;
      UnderlyingCashAmount_104.setString("18246502");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_104);
      UnderlyingInstrument_104.insert(UnderlyingCashAmount_104.getString());
      FIX::UnderlyingCashType UnderlyingCashType_104("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_104);
      UnderlyingInstrument_104.insert(UnderlyingCashType_104.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_104;
      UnderlyingContractMultiplier_104.setString("10697290");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_104);
      UnderlyingInstrument_104.insert(UnderlyingContractMultiplier_104.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_104(706520489);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_104);
      UnderlyingInstrument_104.insert(UnderlyingContractMultiplierUnit_104.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_104("COUNTRY_1583635684");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingCountryOfIssue_104.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_104("LOCALMKTDATE_668241537");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_104);
      UnderlyingInstrument_104.insert(UnderlyingCouponPaymentDate_104.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_104;
      UnderlyingCouponRate_104.setString("65.680000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_104);
      UnderlyingInstrument_104.insert(UnderlyingCouponRate_104.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_104("STRING_1110080467");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_104);
      UnderlyingInstrument_104.insert(UnderlyingCreditRating_104.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_104("JPY");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_104);
      UnderlyingInstrument_104.insert(UnderlyingCurrency_104.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_104;
      UnderlyingCurrentValue_104.setString("21006056");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_104);
      UnderlyingInstrument_104.insert(UnderlyingCurrentValue_104.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_104;
      UnderlyingDetachmentPoint_104.setString("71.040000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_104);
      UnderlyingInstrument_104.insert(UnderlyingDetachmentPoint_104.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_104;
      UnderlyingDirtyPrice_104.setString("16674101");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_104);
      UnderlyingInstrument_104.insert(UnderlyingDirtyPrice_104.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_104;
      UnderlyingEndPrice_104.setString("8246118");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_104);
      UnderlyingInstrument_104.insert(UnderlyingEndPrice_104.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_104;
      UnderlyingEndValue_104.setString("12944261");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_104);
      UnderlyingInstrument_104.insert(UnderlyingEndValue_104.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_104(1839707479);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_104);
      UnderlyingInstrument_104.insert(UnderlyingExerciseStyle_104.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_104;
      UnderlyingFXRate_104.setString("13002304");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_104);
      UnderlyingInstrument_104.insert(UnderlyingFXRate_104.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_104('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_104);
      UnderlyingInstrument_104.insert(UnderlyingFXRateCalc_104.getString());
      FIX::UnderlyingFactor UnderlyingFactor_104;
      UnderlyingFactor_104.setString("18798529");
      noUnderlyings_0_1_1.set(UnderlyingFactor_104);
      UnderlyingInstrument_104.insert(UnderlyingFactor_104.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_104(1804748234);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_104);
      UnderlyingInstrument_104.insert(UnderlyingFlowScheduleType_104.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_104("STRING_1774160454");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_104);
      UnderlyingInstrument_104.insert(UnderlyingInstrRegistry_104.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_104("LOCALMKTDATE_1769374065");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_104);
      UnderlyingInstrument_104.insert(UnderlyingIssueDate_104.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_104("STRING_881678885");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_104);
      UnderlyingInstrument_104.insert(UnderlyingIssuer_104.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_104("STRING_983099379");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingLocaleOfIssue_104.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_104("LOCALMKTDATE_777549102");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityDate_104.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_104("MONTHYEAR_575518860");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityMonthYear_104.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_104("TZTIMEONLY_2052306272");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_104);
      UnderlyingInstrument_104.insert(UnderlyingMaturityTime_104.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_104;
      UnderlyingNotionalPercentageOutstanding_104.setString("98.380000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_104);
      UnderlyingInstrument_104.insert(UnderlyingNotionalPercentageOutstanding_104.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_104('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_104);
      UnderlyingInstrument_104.insert(UnderlyingOptAttribute_104.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_104;
      UnderlyingOriginalNotionalPercentageOutstanding_104.setString("70.010000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_104);
      UnderlyingInstrument_104.insert(UnderlyingOriginalNotionalPercentageOutstanding_104.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_104("STRING_1473163615");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_104);
      UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasure_104.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_104;
      UnderlyingPriceUnitOfMeasureQty_104.setString("8716178");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_104);
      UnderlyingInstrument_104.insert(UnderlyingPriceUnitOfMeasureQty_104.getString());
      FIX::UnderlyingProduct UnderlyingProduct_104(1323368761);
      noUnderlyings_0_1_1.set(UnderlyingProduct_104);
      UnderlyingInstrument_104.insert(UnderlyingProduct_104.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_104(395408985);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_104);
      UnderlyingInstrument_104.insert(UnderlyingPutOrCall_104.getString());
      FIX::UnderlyingPx UnderlyingPx_104;
      UnderlyingPx_104.setString("15781383");
      noUnderlyings_0_1_1.set(UnderlyingPx_104);
      UnderlyingInstrument_104.insert(UnderlyingPx_104.getString());
      FIX::UnderlyingQty UnderlyingQty_104;
      UnderlyingQty_104.setString("7595207");
      noUnderlyings_0_1_1.set(UnderlyingQty_104);
      UnderlyingInstrument_104.insert(UnderlyingQty_104.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_104("LOCALMKTDATE_1063650522");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_104);
      UnderlyingInstrument_104.insert(UnderlyingRedemptionDate_104.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_104("STRING_1606054918");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_104);
      UnderlyingInstrument_104.insert(UnderlyingRepoCollateralSecurityType_104.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_104;
      UnderlyingRepurchaseRate_104.setString("12.640000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_104);
      UnderlyingInstrument_104.insert(UnderlyingRepurchaseRate_104.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_104(1658355607);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_104);
      UnderlyingInstrument_104.insert(UnderlyingRepurchaseTerm_104.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_104("STRING_2101998386");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_104);
      UnderlyingInstrument_104.insert(UnderlyingRestructuringType_104.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_104("STRING_1822723304");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityDesc_104.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_104("EXCHANGE_952609063");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityExchange_104.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_104("STRING_1621924853");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityID_104.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_104("STRING_499851528");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityIDSource_104.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_104("STRING_99551559");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_104);
      UnderlyingInstrument_104.insert(UnderlyingSecuritySubType_104.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_104("STRING_1314148684");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_104);
      UnderlyingInstrument_104.insert(UnderlyingSecurityType_104.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_104("STRING_1800081942");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_104);
      UnderlyingInstrument_104.insert(UnderlyingSeniority_104.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_104("STRING_1519363933");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_104);
      UnderlyingInstrument_104.insert(UnderlyingSettlMethod_104.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_104(5);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_104);
      UnderlyingInstrument_104.insert(UnderlyingSettlementType_104.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_104;
      UnderlyingStartValue_104.setString("14573465");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_104);
      UnderlyingInstrument_104.insert(UnderlyingStartValue_104.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_104("STRING_1146040739");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_104);
      UnderlyingInstrument_104.insert(UnderlyingStateOrProvinceOfIssue_104.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_104("CHF");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_104);
      UnderlyingInstrument_104.insert(UnderlyingStrikeCurrency_104.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_104;
      UnderlyingStrikePrice_104.setString("21291401");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_104);
      UnderlyingInstrument_104.insert(UnderlyingStrikePrice_104.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_104("STRING_1445957539");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_104);
      UnderlyingInstrument_104.insert(UnderlyingSymbol_104.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_104("STRING_767060625");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_104);
      UnderlyingInstrument_104.insert(UnderlyingSymbolSfx_104.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_104("STRING_2033962743");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_104);
      UnderlyingInstrument_104.insert(UnderlyingTimeUnit_104.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_104("STRING_1239953729");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_104);
      UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasure_104.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_104;
      UnderlyingUnitOfMeasureQty_104.setString("19615119");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_104);
      UnderlyingInstrument_104.insert(UnderlyingUnitOfMeasureQty_104.getString());
      all_values.push_back(UnderlyingInstrument_104);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_209;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_209("STRING_565633696");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_209);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_209.insert(UnderlyingSecurityAltID_209.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_209("STRING_685646138");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_209);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_209.insert(UnderlyingSecurityAltIDSource_209.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_210;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_210("STRING_351131209");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_210);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_210.insert(UnderlyingSecurityAltID_210.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_210("STRING_961042681");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_210);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_210.insert(UnderlyingSecurityAltIDSource_210.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_211;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_211("STRING_116300839");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltID_211);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_211.insert(UnderlyingSecurityAltID_211.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_211("STRING_1110652006");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltIDSource_211);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_211.insert(UnderlyingSecurityAltIDSource_211.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_192;
        FIX::UnderlyingStipType UnderlyingStipType_192("STRING_1722355757");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_192);
        UnderlyingStipulations_NoUnderlyingStips_192.insert(UnderlyingStipType_192.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_192("STRING_832769622");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_192);
        UnderlyingStipulations_NoUnderlyingStips_192.insert(UnderlyingStipValue_192.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_192);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_193;
        FIX::UnderlyingStipType UnderlyingStipType_193("STRING_1535565162");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_193);
        UnderlyingStipulations_NoUnderlyingStips_193.insert(UnderlyingStipType_193.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_193("STRING_1676870495");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_193);
        UnderlyingStipulations_NoUnderlyingStips_193.insert(UnderlyingStipValue_193.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_193);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_212;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_212("STRING_340690578");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_212);
        UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyID_212.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_212('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_212);
        UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyIDSource_212.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_212(1007860806);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_212);
        UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyRole_212.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_212);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_402("STRING_317976737");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_402);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402.insert(UnderlyingInstrumentPartySubID_402.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_402(660459100);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_402);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402.insert(UnderlyingInstrumentPartySubIDType_402.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_16;
    FIX::Yield Yield_16;
    Yield_16.setString("60.700000");
    noRelatedSym_0_0.set(Yield_16);
    YieldData_16.insert(Yield_16.getString());
    FIX::YieldCalcDate YieldCalcDate_16("LOCALMKTDATE_1364494756");
    noRelatedSym_0_0.set(YieldCalcDate_16);
    YieldData_16.insert(YieldCalcDate_16.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_16("LOCALMKTDATE_2117805628");
    noRelatedSym_0_0.set(YieldRedemptionDate_16);
    YieldData_16.insert(YieldRedemptionDate_16.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_16;
    YieldRedemptionPrice_16.setString("9581631");
    noRelatedSym_0_0.set(YieldRedemptionPrice_16);
    YieldData_16.insert(YieldRedemptionPrice_16.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_16(2032903193);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_16);
    YieldData_16.insert(YieldRedemptionPriceType_16.getString());
    FIX::YieldType YieldType_16("STRING_INVERSEFLOATER");
    noRelatedSym_0_0.set(YieldType_16);
    YieldData_16.insert(YieldType_16.getString());
    all_values.push_back(YieldData_16);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_1;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_1;
    FIX::Account Account_31("STRING_939819632");
    noRelatedSym_0_1.set(Account_31);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Account_31.getString());
    FIX::AccountType AccountType_28(3);
    noRelatedSym_0_1.set(AccountType_28);
    QuotReqRjctGrp_NoRelatedSym_1.insert(AccountType_28.getString());
    FIX::AcctIDSource AcctIDSource_24(3);
    noRelatedSym_0_1.set(AcctIDSource_24);
    QuotReqRjctGrp_NoRelatedSym_1.insert(AcctIDSource_24.getString());
    FIX::Currency Currency_53("EUR");
    noRelatedSym_0_1.set(Currency_53);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Currency_53.getString());
    FIX::ExpireTime ExpireTime_15(FIX::UTCTIMESTAMP(0, 41, 46, 14, 7, 2000));
    noRelatedSym_0_1.set(ExpireTime_15);
    QuotReqRjctGrp_NoRelatedSym_1.insert(ExpireTime_15.getString());
    FIX::OrdType OrdType_41('H');
    noRelatedSym_0_1.set(OrdType_41);
    QuotReqRjctGrp_NoRelatedSym_1.insert(OrdType_41.getString());
    FIX::OrderQty2 OrderQty2_19;
    OrderQty2_19.setString("18277330");
    noRelatedSym_0_1.set(OrderQty2_19);
    QuotReqRjctGrp_NoRelatedSym_1.insert(OrderQty2_19.getString());
    FIX::PrevClosePx PrevClosePx_10;
    PrevClosePx_10.setString("11197717");
    noRelatedSym_0_1.set(PrevClosePx_10);
    QuotReqRjctGrp_NoRelatedSym_1.insert(PrevClosePx_10.getString());
    FIX::Price Price_20;
    Price_20.setString("11303");
    noRelatedSym_0_1.set(Price_20);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Price_20.getString());
    FIX::Price2 Price2_6;
    Price2_6.setString("12158146");
    noRelatedSym_0_1.set(Price2_6);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Price2_6.getString());
    FIX::PriceType PriceType_32(15);
    noRelatedSym_0_1.set(PriceType_32);
    QuotReqRjctGrp_NoRelatedSym_1.insert(PriceType_32.getString());
    FIX::QtyType QtyType_24(0);
    noRelatedSym_0_1.set(QtyType_24);
    QuotReqRjctGrp_NoRelatedSym_1.insert(QtyType_24.getString());
    FIX::QuotePriceType QuotePriceType_2(1);
    noRelatedSym_0_1.set(QuotePriceType_2);
    QuotReqRjctGrp_NoRelatedSym_1.insert(QuotePriceType_2.getString());
    FIX::QuoteRequestType QuoteRequestType_2(1);
    noRelatedSym_0_1.set(QuoteRequestType_2);
    QuotReqRjctGrp_NoRelatedSym_1.insert(QuoteRequestType_2.getString());
    FIX::QuoteType QuoteType_8(0);
    noRelatedSym_0_1.set(QuoteType_8);
    QuotReqRjctGrp_NoRelatedSym_1.insert(QuoteType_8.getString());
    FIX::SettlDate SettlDate_39("LOCALMKTDATE_1996747327");
    noRelatedSym_0_1.set(SettlDate_39);
    QuotReqRjctGrp_NoRelatedSym_1.insert(SettlDate_39.getString());
    FIX::SettlDate2 SettlDate2_19("LOCALMKTDATE_2118447021");
    noRelatedSym_0_1.set(SettlDate2_19);
    QuotReqRjctGrp_NoRelatedSym_1.insert(SettlDate2_19.getString());
    FIX::SettlType SettlType_22("STRING_0");
    noRelatedSym_0_1.set(SettlType_22);
    QuotReqRjctGrp_NoRelatedSym_1.insert(SettlType_22.getString());
    FIX::Side Side_37('6');
    noRelatedSym_0_1.set(Side_37);
    QuotReqRjctGrp_NoRelatedSym_1.insert(Side_37.getString());
    FIX::TradeOriginationDate TradeOriginationDate_19("LOCALMKTDATE_1335458130");
    noRelatedSym_0_1.set(TradeOriginationDate_19);
    QuotReqRjctGrp_NoRelatedSym_1.insert(TradeOriginationDate_19.getString());
    FIX::TradingSessionID TradingSessionID_65("STRING_4");
    noRelatedSym_0_1.set(TradingSessionID_65);
    QuotReqRjctGrp_NoRelatedSym_1.insert(TradingSessionID_65.getString());
    FIX::TradingSessionSubID TradingSessionSubID_65("STRING_4");
    noRelatedSym_0_1.set(TradingSessionSubID_65);
    QuotReqRjctGrp_NoRelatedSym_1.insert(TradingSessionSubID_65.getString());
    FIX::TransactTime TransactTime_55(FIX::UTCTIMESTAMP(14, 35, 11, 5, 8, 2012));
    noRelatedSym_0_1.set(TransactTime_55);
    QuotReqRjctGrp_NoRelatedSym_1.insert(TransactTime_55.getString());
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_1);

    // FinancingDetails
    multiset<string> FinancingDetails_22;
    FIX::AgreementCurrency AgreementCurrency_22("CAN");
    noRelatedSym_0_1.set(AgreementCurrency_22);
    FinancingDetails_22.insert(AgreementCurrency_22.getString());
    FIX::AgreementDate AgreementDate_22("LOCALMKTDATE_1818099137");
    noRelatedSym_0_1.set(AgreementDate_22);
    FinancingDetails_22.insert(AgreementDate_22.getString());
    FIX::AgreementDesc AgreementDesc_22("STRING_1115153788");
    noRelatedSym_0_1.set(AgreementDesc_22);
    FinancingDetails_22.insert(AgreementDesc_22.getString());
    FIX::AgreementID AgreementID_22("STRING_297437537");
    noRelatedSym_0_1.set(AgreementID_22);
    FinancingDetails_22.insert(AgreementID_22.getString());
    FIX::DeliveryType DeliveryType_22(3);
    noRelatedSym_0_1.set(DeliveryType_22);
    FinancingDetails_22.insert(DeliveryType_22.getString());
    FIX::EndDate EndDate_22("LOCALMKTDATE_512569766");
    noRelatedSym_0_1.set(EndDate_22);
    FinancingDetails_22.insert(EndDate_22.getString());
    FIX::MarginRatio MarginRatio_22;
    MarginRatio_22.setString("19.300000");
    noRelatedSym_0_1.set(MarginRatio_22);
    FinancingDetails_22.insert(MarginRatio_22.getString());
    FIX::StartDate StartDate_22("LOCALMKTDATE_1301388480");
    noRelatedSym_0_1.set(StartDate_22);
    FinancingDetails_22.insert(StartDate_22.getString());
    FIX::TerminationType TerminationType_22(2);
    noRelatedSym_0_1.set(TerminationType_22);
    FinancingDetails_22.insert(TerminationType_22.getString());
    all_values.push_back(FinancingDetails_22);

    // Instrument
    multiset<string> Instrument_71;
    FIX::AttachmentPoint AttachmentPoint_71;
    AttachmentPoint_71.setString("22.970000");
    noRelatedSym_0_1.set(AttachmentPoint_71);
    Instrument_71.insert(AttachmentPoint_71.getString());
    FIX::CFICode CFICode_71("STRING_369719444");
    noRelatedSym_0_1.set(CFICode_71);
    Instrument_71.insert(CFICode_71.getString());
    FIX::CPProgram CPProgram_71(2);
    noRelatedSym_0_1.set(CPProgram_71);
    Instrument_71.insert(CPProgram_71.getString());
    FIX::CPRegType CPRegType_71("STRING_2123551942");
    noRelatedSym_0_1.set(CPRegType_71);
    Instrument_71.insert(CPRegType_71.getString());
    FIX::CapPrice CapPrice_71;
    CapPrice_71.setString("19262246");
    noRelatedSym_0_1.set(CapPrice_71);
    Instrument_71.insert(CapPrice_71.getString());
    FIX::ContractMultiplier ContractMultiplier_71;
    ContractMultiplier_71.setString("19344867");
    noRelatedSym_0_1.set(ContractMultiplier_71);
    Instrument_71.insert(ContractMultiplier_71.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_71(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_71);
    Instrument_71.insert(ContractMultiplierUnit_71.getString());
    FIX::ContractSettlMonth ContractSettlMonth_71("MONTHYEAR_1775488313");
    noRelatedSym_0_1.set(ContractSettlMonth_71);
    Instrument_71.insert(ContractSettlMonth_71.getString());
    FIX::CountryOfIssue CountryOfIssue_71("COUNTRY_1905450094");
    noRelatedSym_0_1.set(CountryOfIssue_71);
    Instrument_71.insert(CountryOfIssue_71.getString());
    FIX::CouponPaymentDate CouponPaymentDate_71("LOCALMKTDATE_1523044651");
    noRelatedSym_0_1.set(CouponPaymentDate_71);
    Instrument_71.insert(CouponPaymentDate_71.getString());
    FIX::CouponRate CouponRate_71;
    CouponRate_71.setString("44.140000");
    noRelatedSym_0_1.set(CouponRate_71);
    Instrument_71.insert(CouponRate_71.getString());
    FIX::CreditRating CreditRating_71("STRING_1093424576");
    noRelatedSym_0_1.set(CreditRating_71);
    Instrument_71.insert(CreditRating_71.getString());
    FIX::DatedDate DatedDate_71("LOCALMKTDATE_1523342536");
    noRelatedSym_0_1.set(DatedDate_71);
    Instrument_71.insert(DatedDate_71.getString());
    FIX::DetachmentPoint DetachmentPoint_71;
    DetachmentPoint_71.setString("36.770000");
    noRelatedSym_0_1.set(DetachmentPoint_71);
    Instrument_71.insert(DetachmentPoint_71.getString());
    FIX::EncodedIssuer EncodedIssuer_71("DATA_166818603");
    noRelatedSym_0_1.set(EncodedIssuer_71);
    Instrument_71.insert(EncodedIssuer_71.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_71(1685504166);
    noRelatedSym_0_1.set(EncodedIssuerLen_71);
    Instrument_71.insert(EncodedIssuerLen_71.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_71("DATA_1468308924");
    noRelatedSym_0_1.set(EncodedSecurityDesc_71);
    Instrument_71.insert(EncodedSecurityDesc_71.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_71(571589714);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_71);
    Instrument_71.insert(EncodedSecurityDescLen_71.getString());
    FIX::ExerciseStyle ExerciseStyle_71(0);
    noRelatedSym_0_1.set(ExerciseStyle_71);
    Instrument_71.insert(ExerciseStyle_71.getString());
    FIX::Factor Factor_71;
    Factor_71.setString("17064928");
    noRelatedSym_0_1.set(Factor_71);
    Instrument_71.insert(Factor_71.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_71(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_71);
    Instrument_71.insert(FlexProductEligibilityIndicator_71.getString());
    FIX::FlexibleIndicator FlexibleIndicator_71(false);
    noRelatedSym_0_1.set(FlexibleIndicator_71);
    Instrument_71.insert(FlexibleIndicator_71.getString());
    FIX::FloorPrice FloorPrice_71;
    FloorPrice_71.setString("17987380");
    noRelatedSym_0_1.set(FloorPrice_71);
    Instrument_71.insert(FloorPrice_71.getString());
    FIX::FlowScheduleType FlowScheduleType_71(4);
    noRelatedSym_0_1.set(FlowScheduleType_71);
    Instrument_71.insert(FlowScheduleType_71.getString());
    FIX::InstrRegistry InstrRegistry_71("STRING_1430815309");
    noRelatedSym_0_1.set(InstrRegistry_71);
    Instrument_71.insert(InstrRegistry_71.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_71('2');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_71);
    Instrument_71.insert(InstrmtAssignmentMethod_71.getString());
    FIX::InterestAccrualDate InterestAccrualDate_71("LOCALMKTDATE_544478862");
    noRelatedSym_0_1.set(InterestAccrualDate_71);
    Instrument_71.insert(InterestAccrualDate_71.getString());
    FIX::IssueDate IssueDate_71("LOCALMKTDATE_1943385075");
    noRelatedSym_0_1.set(IssueDate_71);
    Instrument_71.insert(IssueDate_71.getString());
    FIX::Issuer Issuer_71("STRING_1561973870");
    noRelatedSym_0_1.set(Issuer_71);
    Instrument_71.insert(Issuer_71.getString());
    FIX::ListMethod ListMethod_71(0);
    noRelatedSym_0_1.set(ListMethod_71);
    Instrument_71.insert(ListMethod_71.getString());
    FIX::LocaleOfIssue LocaleOfIssue_71("STRING_1428242928");
    noRelatedSym_0_1.set(LocaleOfIssue_71);
    Instrument_71.insert(LocaleOfIssue_71.getString());
    FIX::MaturityDate MaturityDate_71("LOCALMKTDATE_1028902519");
    noRelatedSym_0_1.set(MaturityDate_71);
    Instrument_71.insert(MaturityDate_71.getString());
    FIX::MaturityMonthYear MaturityMonthYear_71("MONTHYEAR_68103139");
    noRelatedSym_0_1.set(MaturityMonthYear_71);
    Instrument_71.insert(MaturityMonthYear_71.getString());
    FIX::MaturityTime MaturityTime_71("TZTIMEONLY_1562259365");
    noRelatedSym_0_1.set(MaturityTime_71);
    Instrument_71.insert(MaturityTime_71.getString());
    FIX::MinPriceIncrement MinPriceIncrement_71;
    MinPriceIncrement_71.setString("10049708");
    noRelatedSym_0_1.set(MinPriceIncrement_71);
    Instrument_71.insert(MinPriceIncrement_71.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_71;
    MinPriceIncrementAmount_71.setString("19943277");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_71);
    Instrument_71.insert(MinPriceIncrementAmount_71.getString());
    FIX::NTPositionLimit NTPositionLimit_71(1349262437);
    noRelatedSym_0_1.set(NTPositionLimit_71);
    Instrument_71.insert(NTPositionLimit_71.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_71;
    NotionalPercentageOutstanding_71.setString("59.120000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_71);
    Instrument_71.insert(NotionalPercentageOutstanding_71.getString());
    FIX::OptAttribute OptAttribute_71('1');
    noRelatedSym_0_1.set(OptAttribute_71);
    Instrument_71.insert(OptAttribute_71.getString());
    FIX::OptPayoutAmount OptPayoutAmount_71;
    OptPayoutAmount_71.setString("11072288");
    noRelatedSym_0_1.set(OptPayoutAmount_71);
    Instrument_71.insert(OptPayoutAmount_71.getString());
    FIX::OptPayoutType OptPayoutType_71(1);
    noRelatedSym_0_1.set(OptPayoutType_71);
    Instrument_71.insert(OptPayoutType_71.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_71;
    OriginalNotionalPercentageOutstanding_71.setString("32.050000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_71);
    Instrument_71.insert(OriginalNotionalPercentageOutstanding_71.getString());
    FIX::Pool Pool_71("STRING_53169811");
    noRelatedSym_0_1.set(Pool_71);
    Instrument_71.insert(Pool_71.getString());
    FIX::PositionLimit PositionLimit_71(1249459451);
    noRelatedSym_0_1.set(PositionLimit_71);
    Instrument_71.insert(PositionLimit_71.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_71("STRING_INT");
    noRelatedSym_0_1.set(PriceQuoteMethod_71);
    Instrument_71.insert(PriceQuoteMethod_71.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_71("STRING_219988414");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_71);
    Instrument_71.insert(PriceUnitOfMeasure_71.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_71;
    PriceUnitOfMeasureQty_71.setString("7874799");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_71);
    Instrument_71.insert(PriceUnitOfMeasureQty_71.getString());
    FIX::Product Product_73(8);
    noRelatedSym_0_1.set(Product_73);
    Instrument_71.insert(Product_73.getString());
    FIX::ProductComplex ProductComplex_71("STRING_791578128");
    noRelatedSym_0_1.set(ProductComplex_71);
    Instrument_71.insert(ProductComplex_71.getString());
    FIX::PutOrCall PutOrCall_71(1);
    noRelatedSym_0_1.set(PutOrCall_71);
    Instrument_71.insert(PutOrCall_71.getString());
    FIX::RedemptionDate RedemptionDate_71("LOCALMKTDATE_1847981409");
    noRelatedSym_0_1.set(RedemptionDate_71);
    Instrument_71.insert(RedemptionDate_71.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_71("STRING_44302470");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_71);
    Instrument_71.insert(RepoCollateralSecurityType_71.getString());
    FIX::RepurchaseRate RepurchaseRate_71;
    RepurchaseRate_71.setString("80.100000");
    noRelatedSym_0_1.set(RepurchaseRate_71);
    Instrument_71.insert(RepurchaseRate_71.getString());
    FIX::RepurchaseTerm RepurchaseTerm_71(1499235812);
    noRelatedSym_0_1.set(RepurchaseTerm_71);
    Instrument_71.insert(RepurchaseTerm_71.getString());
    FIX::RestructuringType RestructuringType_71("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_71);
    Instrument_71.insert(RestructuringType_71.getString());
    FIX::SecurityDesc SecurityDesc_71("STRING_1015579671");
    noRelatedSym_0_1.set(SecurityDesc_71);
    Instrument_71.insert(SecurityDesc_71.getString());
    FIX::SecurityExchange SecurityExchange_71("EXCHANGE_1447927752");
    noRelatedSym_0_1.set(SecurityExchange_71);
    Instrument_71.insert(SecurityExchange_71.getString());
    FIX::SecurityGroup SecurityGroup_71("STRING_1659604811");
    noRelatedSym_0_1.set(SecurityGroup_71);
    Instrument_71.insert(SecurityGroup_71.getString());
    FIX::SecurityID SecurityID_71("STRING_811481098");
    noRelatedSym_0_1.set(SecurityID_71);
    Instrument_71.insert(SecurityID_71.getString());
    FIX::SecurityIDSource SecurityIDSource_71("STRING_1");
    noRelatedSym_0_1.set(SecurityIDSource_71);
    Instrument_71.insert(SecurityIDSource_71.getString());
    FIX::SecurityStatus SecurityStatus_71("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_71);
    Instrument_71.insert(SecurityStatus_71.getString());
    FIX::SecuritySubType SecuritySubType_72("STRING_92240378");
    noRelatedSym_0_1.set(SecuritySubType_72);
    Instrument_71.insert(SecuritySubType_72.getString());
    FIX::SecurityType SecurityType_73("STRING_TBA");
    noRelatedSym_0_1.set(SecurityType_73);
    Instrument_71.insert(SecurityType_73.getString());
    FIX::Seniority Seniority_71("STRING_SB");
    noRelatedSym_0_1.set(Seniority_71);
    Instrument_71.insert(Seniority_71.getString());
    FIX::SettlMethod SettlMethod_71('P');
    noRelatedSym_0_1.set(SettlMethod_71);
    Instrument_71.insert(SettlMethod_71.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_71("STRING_748807658");
    noRelatedSym_0_1.set(SettleOnOpenFlag_71);
    Instrument_71.insert(SettleOnOpenFlag_71.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_71("STRING_1272935770");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_71);
    Instrument_71.insert(StateOrProvinceOfIssue_71.getString());
    FIX::StrikeCurrency StrikeCurrency_71("JPY");
    noRelatedSym_0_1.set(StrikeCurrency_71);
    Instrument_71.insert(StrikeCurrency_71.getString());
    FIX::StrikeMultiplier StrikeMultiplier_71;
    StrikeMultiplier_71.setString("7477845");
    noRelatedSym_0_1.set(StrikeMultiplier_71);
    Instrument_71.insert(StrikeMultiplier_71.getString());
    FIX::StrikePrice StrikePrice_71;
    StrikePrice_71.setString("19635074");
    noRelatedSym_0_1.set(StrikePrice_71);
    Instrument_71.insert(StrikePrice_71.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_71(1);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_71);
    Instrument_71.insert(StrikePriceBoundaryMethod_71.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_71;
    StrikePriceBoundaryPrecision_71.setString("77.670000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_71);
    Instrument_71.insert(StrikePriceBoundaryPrecision_71.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_71(1);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_71);
    Instrument_71.insert(StrikePriceDeterminationMethod_71.getString());
    FIX::StrikeValue StrikeValue_71;
    StrikeValue_71.setString("20749399");
    noRelatedSym_0_1.set(StrikeValue_71);
    Instrument_71.insert(StrikeValue_71.getString());
    FIX::Symbol Symbol_71("STRING_332687353");
    noRelatedSym_0_1.set(Symbol_71);
    Instrument_71.insert(Symbol_71.getString());
    FIX::SymbolSfx SymbolSfx_71("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_71);
    Instrument_71.insert(SymbolSfx_71.getString());
    FIX::TimeUnit TimeUnit_71("STRING_Min");
    noRelatedSym_0_1.set(TimeUnit_71);
    Instrument_71.insert(TimeUnit_71.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_71(1);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_71);
    Instrument_71.insert(UnderlyingPriceDeterminationMethod_71.getString());
    FIX::UnitOfMeasure UnitOfMeasure_71("STRING_t");
    noRelatedSym_0_1.set(UnitOfMeasure_71);
    Instrument_71.insert(UnitOfMeasure_71.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_71;
    UnitOfMeasureQty_71.setString("21315227");
    noRelatedSym_0_1.set(UnitOfMeasureQty_71);
    Instrument_71.insert(UnitOfMeasureQty_71.getString());
    FIX::ValuationMethod ValuationMethod_71("STRING_EQTY");
    noRelatedSym_0_1.set(ValuationMethod_71);
    Instrument_71.insert(ValuationMethod_71.getString());
    all_values.push_back(Instrument_71);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_137;
      FIX::ComplexEventCondition ComplexEventCondition_137(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_137);
      ComplexEvents_NoComplexEvents_137.insert(ComplexEventCondition_137.getString());
      FIX::ComplexEventPrice ComplexEventPrice_137;
      ComplexEventPrice_137.setString("16739094");
      noComplexEvents_1_1_0.set(ComplexEventPrice_137);
      ComplexEvents_NoComplexEvents_137.insert(ComplexEventPrice_137.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_137(4);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_137);
      ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceBoundaryMethod_137.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_137;
      ComplexEventPriceBoundaryPrecision_137.setString("31.320000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_137);
      ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceBoundaryPrecision_137.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_137(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_137);
      ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceTimeType_137.getString());
      FIX::ComplexEventType ComplexEventType_137(3);
      noComplexEvents_1_1_0.set(ComplexEventType_137);
      ComplexEvents_NoComplexEvents_137.insert(ComplexEventType_137.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_137;
      ComplexOptPayoutAmount_137.setString("13958642");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_137);
      ComplexEvents_NoComplexEvents_137.insert(ComplexOptPayoutAmount_137.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_137);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_282;
        FIX::ComplexEventEndDate ComplexEventEndDate_282(FIX::UTCTIMESTAMP(16, 40, 1, 4, 12, 2006));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_282);
        ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventEndDate_282.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_282(FIX::UTCTIMESTAMP(21, 13, 25, 7, 5, 2001));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_282);
        ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventStartDate_282.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_282);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_566;
          FIX::ComplexEventEndTime ComplexEventEndTime_566(FIX::UTCTIMEONLY(12, 45, 2));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_566);
          ComplexEventTimes_NoComplexEventTimes_566.insert(ComplexEventEndTime_566.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_566(FIX::UTCTIMEONLY(8, 7, 8));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_566);
          ComplexEventTimes_NoComplexEventTimes_566.insert(ComplexEventStartTime_566.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_566);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_567;
          FIX::ComplexEventEndTime ComplexEventEndTime_567(FIX::UTCTIMEONLY(21, 23, 37));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_567);
          ComplexEventTimes_NoComplexEventTimes_567.insert(ComplexEventEndTime_567.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_567(FIX::UTCTIMEONLY(18, 27, 46));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_567);
          ComplexEventTimes_NoComplexEventTimes_567.insert(ComplexEventStartTime_567.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_567);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_568;
          FIX::ComplexEventEndTime ComplexEventEndTime_568(FIX::UTCTIMEONLY(0, 18, 48));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_568);
          ComplexEventTimes_NoComplexEventTimes_568.insert(ComplexEventEndTime_568.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_568(FIX::UTCTIMEONLY(17, 52, 33));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_568);
          ComplexEventTimes_NoComplexEventTimes_568.insert(ComplexEventStartTime_568.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_568);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_283;
        FIX::ComplexEventEndDate ComplexEventEndDate_283(FIX::UTCTIMESTAMP(9, 58, 10, 26, 5, 2013));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_283);
        ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventEndDate_283.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_283(FIX::UTCTIMESTAMP(8, 23, 50, 11, 12, 2013));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_283);
        ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventStartDate_283.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_283);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_569;
          FIX::ComplexEventEndTime ComplexEventEndTime_569(FIX::UTCTIMEONLY(14, 47, 22));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_569);
          ComplexEventTimes_NoComplexEventTimes_569.insert(ComplexEventEndTime_569.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_569(FIX::UTCTIMEONLY(17, 42, 31));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_569);
          ComplexEventTimes_NoComplexEventTimes_569.insert(ComplexEventStartTime_569.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_569);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_570;
          FIX::ComplexEventEndTime ComplexEventEndTime_570(FIX::UTCTIMEONLY(10, 49, 47));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_570);
          ComplexEventTimes_NoComplexEventTimes_570.insert(ComplexEventEndTime_570.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_570(FIX::UTCTIMEONLY(7, 39, 39));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_570);
          ComplexEventTimes_NoComplexEventTimes_570.insert(ComplexEventStartTime_570.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_570);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_571;
          FIX::ComplexEventEndTime ComplexEventEndTime_571(FIX::UTCTIMEONLY(13, 29, 4));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_571);
          ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventEndTime_571.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_571(FIX::UTCTIMEONLY(21, 41, 59));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_571);
          ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventStartTime_571.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_571);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_284;
        FIX::ComplexEventEndDate ComplexEventEndDate_284(FIX::UTCTIMESTAMP(8, 41, 8, 12, 7, 2014));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_284);
        ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventEndDate_284.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_284(FIX::UTCTIMESTAMP(9, 11, 55, 2, 5, 2005));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_284);
        ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventStartDate_284.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_284);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_572;
          FIX::ComplexEventEndTime ComplexEventEndTime_572(FIX::UTCTIMEONLY(3, 46, 27));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_572);
          ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventEndTime_572.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_572(FIX::UTCTIMEONLY(21, 6, 28));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_572);
          ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventStartTime_572.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_572);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_573;
          FIX::ComplexEventEndTime ComplexEventEndTime_573(FIX::UTCTIMEONLY(11, 58, 55));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventEndTime_573);
          ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventEndTime_573.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_573(FIX::UTCTIMEONLY(11, 29, 45));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventStartTime_573);
          ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventStartTime_573.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_573);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_574;
          FIX::ComplexEventEndTime ComplexEventEndTime_574(FIX::UTCTIMEONLY(17, 26, 29));
          noComplexEventTimes_1_0_2_3_2.set(ComplexEventEndTime_574);
          ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventEndTime_574.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_574(FIX::UTCTIMEONLY(1, 53, 38));
          noComplexEventTimes_1_0_2_3_2.set(ComplexEventStartTime_574);
          ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventStartTime_574.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_574);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_138;
      FIX::ComplexEventCondition ComplexEventCondition_138(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventCondition_138.getString());
      FIX::ComplexEventPrice ComplexEventPrice_138;
      ComplexEventPrice_138.setString("8818934");
      noComplexEvents_1_1_1.set(ComplexEventPrice_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventPrice_138.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_138(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceBoundaryMethod_138.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_138;
      ComplexEventPriceBoundaryPrecision_138.setString("85.000000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceBoundaryPrecision_138.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_138(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceTimeType_138.getString());
      FIX::ComplexEventType ComplexEventType_138(8);
      noComplexEvents_1_1_1.set(ComplexEventType_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventType_138.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_138;
      ComplexOptPayoutAmount_138.setString("15761964");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexOptPayoutAmount_138.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_138);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_285;
        FIX::ComplexEventEndDate ComplexEventEndDate_285(FIX::UTCTIMESTAMP(19, 35, 28, 17, 6, 2001));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_285);
        ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventEndDate_285.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_285(FIX::UTCTIMESTAMP(9, 39, 32, 23, 3, 2017));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_285);
        ComplexEventDates_NoComplexEventDates_285.insert(ComplexEventStartDate_285.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_285);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_575;
          FIX::ComplexEventEndTime ComplexEventEndTime_575(FIX::UTCTIMEONLY(10, 59, 49));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_575);
          ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventEndTime_575.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_575(FIX::UTCTIMEONLY(12, 42, 46));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_575);
          ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventStartTime_575.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_575);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_576;
          FIX::ComplexEventEndTime ComplexEventEndTime_576(FIX::UTCTIMEONLY(23, 4, 38));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_576);
          ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventEndTime_576.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_576(FIX::UTCTIMEONLY(0, 55, 31));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_576);
          ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventStartTime_576.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_576);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_577;
          FIX::ComplexEventEndTime ComplexEventEndTime_577(FIX::UTCTIMEONLY(19, 6, 51));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventEndTime_577);
          ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventEndTime_577.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_577(FIX::UTCTIMEONLY(16, 40, 4));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventStartTime_577);
          ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventStartTime_577.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_577);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_286;
        FIX::ComplexEventEndDate ComplexEventEndDate_286(FIX::UTCTIMESTAMP(19, 28, 36, 22, 2, 2017));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_286);
        ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventEndDate_286.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_286(FIX::UTCTIMESTAMP(4, 9, 42, 0, 10, 2007));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_286);
        ComplexEventDates_NoComplexEventDates_286.insert(ComplexEventStartDate_286.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_286);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_578;
          FIX::ComplexEventEndTime ComplexEventEndTime_578(FIX::UTCTIMEONLY(4, 15, 2));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_578);
          ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventEndTime_578.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_578(FIX::UTCTIMEONLY(19, 50, 43));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_578);
          ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventStartTime_578.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_578);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_579;
          FIX::ComplexEventEndTime ComplexEventEndTime_579(FIX::UTCTIMEONLY(9, 41, 21));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_579);
          ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventEndTime_579.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_579(FIX::UTCTIMEONLY(9, 54, 49));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_579);
          ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventStartTime_579.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_579);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_139;
      FIX::ComplexEventCondition ComplexEventCondition_139(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventCondition_139.getString());
      FIX::ComplexEventPrice ComplexEventPrice_139;
      ComplexEventPrice_139.setString("11104244");
      noComplexEvents_1_1_2.set(ComplexEventPrice_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPrice_139.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_139(4);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceBoundaryMethod_139.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_139;
      ComplexEventPriceBoundaryPrecision_139.setString("66.510000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceBoundaryPrecision_139.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_139(1);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceTimeType_139.getString());
      FIX::ComplexEventType ComplexEventType_139(2);
      noComplexEvents_1_1_2.set(ComplexEventType_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventType_139.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_139;
      ComplexOptPayoutAmount_139.setString("4430404");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexOptPayoutAmount_139.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_139);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_287;
        FIX::ComplexEventEndDate ComplexEventEndDate_287(FIX::UTCTIMESTAMP(1, 15, 3, 19, 9, 2002));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_287);
        ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventEndDate_287.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_287(FIX::UTCTIMESTAMP(16, 21, 49, 16, 9, 2001));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_287);
        ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventStartDate_287.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_287);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_580;
          FIX::ComplexEventEndTime ComplexEventEndTime_580(FIX::UTCTIMEONLY(16, 12, 3));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_580);
          ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventEndTime_580.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_580(FIX::UTCTIMEONLY(14, 57, 39));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_580);
          ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventStartTime_580.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_580);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_581;
          FIX::ComplexEventEndTime ComplexEventEndTime_581(FIX::UTCTIMEONLY(3, 49, 51));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventEndTime_581);
          ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventEndTime_581.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_581(FIX::UTCTIMEONLY(0, 24, 7));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventStartTime_581);
          ComplexEventTimes_NoComplexEventTimes_581.insert(ComplexEventStartTime_581.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_581);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_145;
      FIX::EventDate EventDate_145("LOCALMKTDATE_1209379573");
      noEvents_1_1_0.set(EventDate_145);
      EvntGrp_NoEvents_145.insert(EventDate_145.getString());
      FIX::EventPx EventPx_145;
      EventPx_145.setString("10227025");
      noEvents_1_1_0.set(EventPx_145);
      EvntGrp_NoEvents_145.insert(EventPx_145.getString());
      FIX::EventText EventText_145("STRING_361566835");
      noEvents_1_1_0.set(EventText_145);
      EvntGrp_NoEvents_145.insert(EventText_145.getString());
      FIX::EventTime EventTime_145(FIX::UTCTIMESTAMP(15, 1, 39, 4, 11, 2005));
      noEvents_1_1_0.set(EventTime_145);
      EvntGrp_NoEvents_145.insert(EventTime_145.getString());
      FIX::EventType EventType_145(17);
      noEvents_1_1_0.set(EventType_145);
      EvntGrp_NoEvents_145.insert(EventType_145.getString());
      all_values.push_back(EvntGrp_NoEvents_145);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_146;
      FIX::EventDate EventDate_146("LOCALMKTDATE_1318336654");
      noEvents_1_1_1.set(EventDate_146);
      EvntGrp_NoEvents_146.insert(EventDate_146.getString());
      FIX::EventPx EventPx_146;
      EventPx_146.setString("11556902");
      noEvents_1_1_1.set(EventPx_146);
      EvntGrp_NoEvents_146.insert(EventPx_146.getString());
      FIX::EventText EventText_146("STRING_1039362079");
      noEvents_1_1_1.set(EventText_146);
      EvntGrp_NoEvents_146.insert(EventText_146.getString());
      FIX::EventTime EventTime_146(FIX::UTCTIMESTAMP(9, 23, 12, 18, 6, 2013));
      noEvents_1_1_1.set(EventTime_146);
      EvntGrp_NoEvents_146.insert(EventTime_146.getString());
      FIX::EventType EventType_146(18);
      noEvents_1_1_1.set(EventType_146);
      EvntGrp_NoEvents_146.insert(EventType_146.getString());
      all_values.push_back(EvntGrp_NoEvents_146);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_148;
      FIX::InstrumentPartyID InstrumentPartyID_148("STRING_405230104");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyID_148.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_148('4');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyIDSource_148.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_148(1368552045);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyRole_148.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_148);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311;
        FIX::InstrumentPartySubID InstrumentPartySubID_311("STRING_611117179");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_311);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311.insert(InstrumentPartySubID_311.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_311(1437048489);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_311);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311.insert(InstrumentPartySubIDType_311.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312;
        FIX::InstrumentPartySubID InstrumentPartySubID_312("STRING_1048278706");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_312);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312.insert(InstrumentPartySubID_312.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_312(742940591);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_312);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312.insert(InstrumentPartySubIDType_312.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313;
        FIX::InstrumentPartySubID InstrumentPartySubID_313("STRING_498944415");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_313);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313.insert(InstrumentPartySubID_313.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_313(2070981301);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_313);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313.insert(InstrumentPartySubIDType_313.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_149;
      FIX::InstrumentPartyID InstrumentPartyID_149("STRING_1104507426");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_149);
      InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyID_149.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_149('2');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_149);
      InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyIDSource_149.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_149(15140373);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_149);
      InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyRole_149.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_149);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314;
        FIX::InstrumentPartySubID InstrumentPartySubID_314("STRING_690596619");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_314);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314.insert(InstrumentPartySubID_314.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_314(135939461);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_314);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314.insert(InstrumentPartySubIDType_314.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315;
        FIX::InstrumentPartySubID InstrumentPartySubID_315("STRING_1103167462");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_315);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315.insert(InstrumentPartySubID_315.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_315(1767113948);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_315);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315.insert(InstrumentPartySubIDType_315.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316;
        FIX::InstrumentPartySubID InstrumentPartySubID_316("STRING_1482070057");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_316);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316.insert(InstrumentPartySubID_316.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_316(274020469);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_316);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316.insert(InstrumentPartySubIDType_316.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_150;
      FIX::InstrumentPartyID InstrumentPartyID_150("STRING_775320540");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_150);
      InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyID_150.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_150('3');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_150);
      InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyIDSource_150.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_150(1755526865);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_150);
      InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyRole_150.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_150);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317;
        FIX::InstrumentPartySubID InstrumentPartySubID_317("STRING_1306814891");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_317);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317.insert(InstrumentPartySubID_317.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_317(332275689);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_317);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317.insert(InstrumentPartySubIDType_317.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_160;
      FIX::SecurityAltID SecurityAltID_160("STRING_1723237853");
      noSecurityAltID_1_1_0.set(SecurityAltID_160);
      SecAltIDGrp_NoSecurityAltID_160.insert(SecurityAltID_160.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_160("STRING_341794751");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_160);
      SecAltIDGrp_NoSecurityAltID_160.insert(SecurityAltIDSource_160.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_160);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_142;
    FIX::SecurityXML SecurityXML_143("XMLDATA_1721793533");
    noRelatedSym_0_1.set(SecurityXML_143);
    FIX::SecurityXMLLen SecurityXMLLen_71(1318850207);
    noRelatedSym_0_1.set(SecurityXMLLen_71);
    FIX::SecurityXMLSchema SecurityXMLSchema_71("STRING_747024855");
    noRelatedSym_0_1.set(SecurityXMLSchema_71);
    SecurityXML_142.insert(SecurityXMLSchema_71.getString());
    all_values.push_back(SecurityXML_142);

    // OrderQtyData
    multiset<string> OrderQtyData_19;
    FIX::CashOrderQty CashOrderQty_19;
    CashOrderQty_19.setString("248546");
    noRelatedSym_0_1.set(CashOrderQty_19);
    OrderQtyData_19.insert(CashOrderQty_19.getString());
    FIX::OrderPercent OrderPercent_19;
    OrderPercent_19.setString("86.040000");
    noRelatedSym_0_1.set(OrderPercent_19);
    OrderQtyData_19.insert(OrderPercent_19.getString());
    FIX::OrderQty OrderQty_30;
    OrderQty_30.setString("6649837");
    noRelatedSym_0_1.set(OrderQty_30);
    OrderQtyData_19.insert(OrderQty_30.getString());
    FIX::RoundingDirection RoundingDirection_19('2');
    noRelatedSym_0_1.set(RoundingDirection_19);
    OrderQtyData_19.insert(RoundingDirection_19.getString());
    FIX::RoundingModulus RoundingModulus_19;
    RoundingModulus_19.setString("19769670");
    noRelatedSym_0_1.set(RoundingModulus_19);
    OrderQtyData_19.insert(RoundingModulus_19.getString());
    all_values.push_back(OrderQtyData_19);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_103;
      FIX::PartyID PartyID_103("STRING_1378912402");
      noPartyIDs_1_1_0.set(PartyID_103);
      Parties_NoPartyIDs_103.insert(PartyID_103.getString());
      FIX::PartyIDSource PartyIDSource_103('1');
      noPartyIDs_1_1_0.set(PartyIDSource_103);
      Parties_NoPartyIDs_103.insert(PartyIDSource_103.getString());
      FIX::PartyRole PartyRole_103(60);
      noPartyIDs_1_1_0.set(PartyRole_103);
      Parties_NoPartyIDs_103.insert(PartyRole_103.getString());
      all_values.push_back(Parties_NoPartyIDs_103);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_212;
        FIX::PartySubID PartySubID_212("STRING_590644000");
        noPartySubIDs_1_0_2_0.set(PartySubID_212);
        PtysSubGrp_NoPartySubIDs_212.insert(PartySubID_212.getString());
        FIX::PartySubIDType PartySubIDType_212(5);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_212);
        PtysSubGrp_NoPartySubIDs_212.insert(PartySubIDType_212.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_212);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_213;
        FIX::PartySubID PartySubID_213("STRING_1621735168");
        noPartySubIDs_1_0_2_1.set(PartySubID_213);
        PtysSubGrp_NoPartySubIDs_213.insert(PartySubID_213.getString());
        FIX::PartySubIDType PartySubIDType_213(11);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_213);
        PtysSubGrp_NoPartySubIDs_213.insert(PartySubIDType_213.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_213);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_214;
        FIX::PartySubID PartySubID_214("STRING_1787839968");
        noPartySubIDs_1_0_2_2.set(PartySubID_214);
        PtysSubGrp_NoPartySubIDs_214.insert(PartySubID_214.getString());
        FIX::PartySubIDType PartySubIDType_214(32);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_214);
        PtysSubGrp_NoPartySubIDs_214.insert(PartySubIDType_214.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_214);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_104;
      FIX::PartyID PartyID_104("STRING_900870919");
      noPartyIDs_1_1_1.set(PartyID_104);
      Parties_NoPartyIDs_104.insert(PartyID_104.getString());
      FIX::PartyIDSource PartyIDSource_104('H');
      noPartyIDs_1_1_1.set(PartyIDSource_104);
      Parties_NoPartyIDs_104.insert(PartyIDSource_104.getString());
      FIX::PartyRole PartyRole_104(82);
      noPartyIDs_1_1_1.set(PartyRole_104);
      Parties_NoPartyIDs_104.insert(PartyRole_104.getString());
      all_values.push_back(Parties_NoPartyIDs_104);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_215;
        FIX::PartySubID PartySubID_215("STRING_1496374865");
        noPartySubIDs_1_1_2_0.set(PartySubID_215);
        PtysSubGrp_NoPartySubIDs_215.insert(PartySubID_215.getString());
        FIX::PartySubIDType PartySubIDType_215(9);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_215);
        PtysSubGrp_NoPartySubIDs_215.insert(PartySubIDType_215.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_215);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_216;
        FIX::PartySubID PartySubID_216("STRING_1427911929");
        noPartySubIDs_1_1_2_1.set(PartySubID_216);
        PtysSubGrp_NoPartySubIDs_216.insert(PartySubID_216.getString());
        FIX::PartySubIDType PartySubIDType_216(4);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_216);
        PtysSubGrp_NoPartySubIDs_216.insert(PartySubIDType_216.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_216);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_217;
        FIX::PartySubID PartySubID_217("STRING_791758359");
        noPartySubIDs_1_1_2_2.set(PartySubID_217);
        PtysSubGrp_NoPartySubIDs_217.insert(PartySubID_217.getString());
        FIX::PartySubIDType PartySubIDType_217(32);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_217);
        PtysSubGrp_NoPartySubIDs_217.insert(PartySubIDType_217.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_217);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_105;
      FIX::PartyID PartyID_105("STRING_231460314");
      noPartyIDs_1_1_2.set(PartyID_105);
      Parties_NoPartyIDs_105.insert(PartyID_105.getString());
      FIX::PartyIDSource PartyIDSource_105('E');
      noPartyIDs_1_1_2.set(PartyIDSource_105);
      Parties_NoPartyIDs_105.insert(PartyIDSource_105.getString());
      FIX::PartyRole PartyRole_105(37);
      noPartyIDs_1_1_2.set(PartyRole_105);
      Parties_NoPartyIDs_105.insert(PartyRole_105.getString());
      all_values.push_back(Parties_NoPartyIDs_105);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_218;
        FIX::PartySubID PartySubID_218("STRING_1880577965");
        noPartySubIDs_1_2_2_0.set(PartySubID_218);
        PtysSubGrp_NoPartySubIDs_218.insert(PartySubID_218.getString());
        FIX::PartySubIDType PartySubIDType_218(7);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_218);
        PtysSubGrp_NoPartySubIDs_218.insert(PartySubIDType_218.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_218);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_219;
        FIX::PartySubID PartySubID_219("STRING_2090229125");
        noPartySubIDs_1_2_2_1.set(PartySubID_219);
        PtysSubGrp_NoPartySubIDs_219.insert(PartySubID_219.getString());
        FIX::PartySubIDType PartySubIDType_219(17);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_219);
        PtysSubGrp_NoPartySubIDs_219.insert(PartySubIDType_219.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_219);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_220;
        FIX::PartySubID PartySubID_220("STRING_984589526");
        noPartySubIDs_1_2_2_2.set(PartySubID_220);
        PtysSubGrp_NoPartySubIDs_220.insert(PartySubID_220.getString());
        FIX::PartySubIDType PartySubIDType_220(8);
        noPartySubIDs_1_2_2_2.set(PartySubIDType_220);
        PtysSubGrp_NoPartySubIDs_220.insert(PartySubIDType_220.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_220);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_6;
      FIX::QuoteQualifier QuoteQualifier_6('2');
      noQuoteQualifiers_1_1_0.set(QuoteQualifier_6);
      QuotQualGrp_NoQuoteQualifiers_6.insert(QuoteQualifier_6.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_6);

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_0);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_1_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_4;
      FIX::LegOrderQty LegOrderQty_15;
      LegOrderQty_15.setString("16006170");
      noLegs_1_1_0.set(LegOrderQty_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegOrderQty_15.getString());
      FIX::LegQty LegQty_15;
      LegQty_15.setString("5519544");
      noLegs_1_1_0.set(LegQty_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegQty_15.getString());
      FIX::LegRefID LegRefID_15("STRING_691300785");
      noLegs_1_1_0.set(LegRefID_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegRefID_15.getString());
      FIX::LegSettlDate LegSettlDate_15("LOCALMKTDATE_1105033919");
      noLegs_1_1_0.set(LegSettlDate_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegSettlDate_15.getString());
      FIX::LegSettlType LegSettlType_15('2');
      noLegs_1_1_0.set(LegSettlType_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegSettlType_15.getString());
      FIX::LegSwapType LegSwapType_15(1);
      noLegs_1_1_0.set(LegSwapType_15);
      QuotReqLegsGrp_NoLegs_4.insert(LegSwapType_15.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_4);

      // InstrumentLeg
      multiset<string> InstrumentLeg_109;
      FIX::EncodedLegIssuer EncodedLegIssuer_109("DATA_745390239");
      noLegs_1_1_0.set(EncodedLegIssuer_109);
      InstrumentLeg_109.insert(EncodedLegIssuer_109.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_109(603624964);
      noLegs_1_1_0.set(EncodedLegIssuerLen_109);
      InstrumentLeg_109.insert(EncodedLegIssuerLen_109.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_109("DATA_725928676");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_109);
      InstrumentLeg_109.insert(EncodedLegSecurityDesc_109.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_109(1867816617);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_109);
      InstrumentLeg_109.insert(EncodedLegSecurityDescLen_109.getString());
      FIX::LegCFICode LegCFICode_109("STRING_1455064416");
      noLegs_1_1_0.set(LegCFICode_109);
      InstrumentLeg_109.insert(LegCFICode_109.getString());
      FIX::LegContractMultiplier LegContractMultiplier_109;
      LegContractMultiplier_109.setString("2546364");
      noLegs_1_1_0.set(LegContractMultiplier_109);
      InstrumentLeg_109.insert(LegContractMultiplier_109.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_109(1216707834);
      noLegs_1_1_0.set(LegContractMultiplierUnit_109);
      InstrumentLeg_109.insert(LegContractMultiplierUnit_109.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_109("MONTHYEAR_1914547085");
      noLegs_1_1_0.set(LegContractSettlMonth_109);
      InstrumentLeg_109.insert(LegContractSettlMonth_109.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_109("COUNTRY_1682548417");
      noLegs_1_1_0.set(LegCountryOfIssue_109);
      InstrumentLeg_109.insert(LegCountryOfIssue_109.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_109("LOCALMKTDATE_1872413943");
      noLegs_1_1_0.set(LegCouponPaymentDate_109);
      InstrumentLeg_109.insert(LegCouponPaymentDate_109.getString());
      FIX::LegCouponRate LegCouponRate_109;
      LegCouponRate_109.setString("17.960000");
      noLegs_1_1_0.set(LegCouponRate_109);
      InstrumentLeg_109.insert(LegCouponRate_109.getString());
      FIX::LegCreditRating LegCreditRating_109("STRING_284517967");
      noLegs_1_1_0.set(LegCreditRating_109);
      InstrumentLeg_109.insert(LegCreditRating_109.getString());
      FIX::LegCurrency LegCurrency_109("GBP");
      noLegs_1_1_0.set(LegCurrency_109);
      InstrumentLeg_109.insert(LegCurrency_109.getString());
      FIX::LegDatedDate LegDatedDate_109("LOCALMKTDATE_608281050");
      noLegs_1_1_0.set(LegDatedDate_109);
      InstrumentLeg_109.insert(LegDatedDate_109.getString());
      FIX::LegExerciseStyle LegExerciseStyle_109(1506701130);
      noLegs_1_1_0.set(LegExerciseStyle_109);
      InstrumentLeg_109.insert(LegExerciseStyle_109.getString());
      FIX::LegFactor LegFactor_109;
      LegFactor_109.setString("14254692");
      noLegs_1_1_0.set(LegFactor_109);
      InstrumentLeg_109.insert(LegFactor_109.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_109(956898765);
      noLegs_1_1_0.set(LegFlowScheduleType_109);
      InstrumentLeg_109.insert(LegFlowScheduleType_109.getString());
      FIX::LegInstrRegistry LegInstrRegistry_109("STRING_1449446608");
      noLegs_1_1_0.set(LegInstrRegistry_109);
      InstrumentLeg_109.insert(LegInstrRegistry_109.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_109("LOCALMKTDATE_1823547316");
      noLegs_1_1_0.set(LegInterestAccrualDate_109);
      InstrumentLeg_109.insert(LegInterestAccrualDate_109.getString());
      FIX::LegIssueDate LegIssueDate_109("LOCALMKTDATE_1941488291");
      noLegs_1_1_0.set(LegIssueDate_109);
      InstrumentLeg_109.insert(LegIssueDate_109.getString());
      FIX::LegIssuer LegIssuer_109("STRING_1221675531");
      noLegs_1_1_0.set(LegIssuer_109);
      InstrumentLeg_109.insert(LegIssuer_109.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_109("STRING_1787404241");
      noLegs_1_1_0.set(LegLocaleOfIssue_109);
      InstrumentLeg_109.insert(LegLocaleOfIssue_109.getString());
      FIX::LegMaturityDate LegMaturityDate_109("LOCALMKTDATE_10022923");
      noLegs_1_1_0.set(LegMaturityDate_109);
      InstrumentLeg_109.insert(LegMaturityDate_109.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_109("MONTHYEAR_1322332316");
      noLegs_1_1_0.set(LegMaturityMonthYear_109);
      InstrumentLeg_109.insert(LegMaturityMonthYear_109.getString());
      FIX::LegMaturityTime LegMaturityTime_109("TZTIMEONLY_1240537652");
      noLegs_1_1_0.set(LegMaturityTime_109);
      InstrumentLeg_109.insert(LegMaturityTime_109.getString());
      FIX::LegOptAttribute LegOptAttribute_109('5');
      noLegs_1_1_0.set(LegOptAttribute_109);
      InstrumentLeg_109.insert(LegOptAttribute_109.getString());
      FIX::LegOptionRatio LegOptionRatio_109;
      LegOptionRatio_109.setString("20136331");
      noLegs_1_1_0.set(LegOptionRatio_109);
      InstrumentLeg_109.insert(LegOptionRatio_109.getString());
      FIX::LegPool LegPool_109("STRING_198087923");
      noLegs_1_1_0.set(LegPool_109);
      InstrumentLeg_109.insert(LegPool_109.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_109("STRING_588183364");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_109);
      InstrumentLeg_109.insert(LegPriceUnitOfMeasure_109.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_109;
      LegPriceUnitOfMeasureQty_109.setString("18386908");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_109);
      InstrumentLeg_109.insert(LegPriceUnitOfMeasureQty_109.getString());
      FIX::LegProduct LegProduct_109(943478163);
      noLegs_1_1_0.set(LegProduct_109);
      InstrumentLeg_109.insert(LegProduct_109.getString());
      FIX::LegPutOrCall LegPutOrCall_109(1191808328);
      noLegs_1_1_0.set(LegPutOrCall_109);
      InstrumentLeg_109.insert(LegPutOrCall_109.getString());
      FIX::LegRatioQty LegRatioQty_109;
      LegRatioQty_109.setString("4171358");
      noLegs_1_1_0.set(LegRatioQty_109);
      InstrumentLeg_109.insert(LegRatioQty_109.getString());
      FIX::LegRedemptionDate LegRedemptionDate_109("LOCALMKTDATE_663811132");
      noLegs_1_1_0.set(LegRedemptionDate_109);
      InstrumentLeg_109.insert(LegRedemptionDate_109.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_109("STRING_499389096");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_109);
      InstrumentLeg_109.insert(LegRepoCollateralSecurityType_109.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_109;
      LegRepurchaseRate_109.setString("23.730000");
      noLegs_1_1_0.set(LegRepurchaseRate_109);
      InstrumentLeg_109.insert(LegRepurchaseRate_109.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_109(1880518966);
      noLegs_1_1_0.set(LegRepurchaseTerm_109);
      InstrumentLeg_109.insert(LegRepurchaseTerm_109.getString());
      FIX::LegSecurityDesc LegSecurityDesc_109("STRING_266452534");
      noLegs_1_1_0.set(LegSecurityDesc_109);
      InstrumentLeg_109.insert(LegSecurityDesc_109.getString());
      FIX::LegSecurityExchange LegSecurityExchange_109("EXCHANGE_206837143");
      noLegs_1_1_0.set(LegSecurityExchange_109);
      InstrumentLeg_109.insert(LegSecurityExchange_109.getString());
      FIX::LegSecurityID LegSecurityID_109("STRING_1605449262");
      noLegs_1_1_0.set(LegSecurityID_109);
      InstrumentLeg_109.insert(LegSecurityID_109.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_109("STRING_825274330");
      noLegs_1_1_0.set(LegSecurityIDSource_109);
      InstrumentLeg_109.insert(LegSecurityIDSource_109.getString());
      FIX::LegSecuritySubType LegSecuritySubType_109("STRING_491355110");
      noLegs_1_1_0.set(LegSecuritySubType_109);
      InstrumentLeg_109.insert(LegSecuritySubType_109.getString());
      FIX::LegSecurityType LegSecurityType_109("STRING_1561839871");
      noLegs_1_1_0.set(LegSecurityType_109);
      InstrumentLeg_109.insert(LegSecurityType_109.getString());
      FIX::LegSide LegSide_109('3');
      noLegs_1_1_0.set(LegSide_109);
      InstrumentLeg_109.insert(LegSide_109.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_109("STRING_1099636160");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_109);
      InstrumentLeg_109.insert(LegStateOrProvinceOfIssue_109.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_109("CAN");
      noLegs_1_1_0.set(LegStrikeCurrency_109);
      InstrumentLeg_109.insert(LegStrikeCurrency_109.getString());
      FIX::LegStrikePrice LegStrikePrice_109;
      LegStrikePrice_109.setString("20565349");
      noLegs_1_1_0.set(LegStrikePrice_109);
      InstrumentLeg_109.insert(LegStrikePrice_109.getString());
      FIX::LegSymbol LegSymbol_109("STRING_223020314");
      noLegs_1_1_0.set(LegSymbol_109);
      InstrumentLeg_109.insert(LegSymbol_109.getString());
      FIX::LegSymbolSfx LegSymbolSfx_109("STRING_1471698481");
      noLegs_1_1_0.set(LegSymbolSfx_109);
      InstrumentLeg_109.insert(LegSymbolSfx_109.getString());
      FIX::LegTimeUnit LegTimeUnit_109("STRING_1850539568");
      noLegs_1_1_0.set(LegTimeUnit_109);
      InstrumentLeg_109.insert(LegTimeUnit_109.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_109("STRING_1444695845");
      noLegs_1_1_0.set(LegUnitOfMeasure_109);
      InstrumentLeg_109.insert(LegUnitOfMeasure_109.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_109;
      LegUnitOfMeasureQty_109.setString("11116190");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_109);
      InstrumentLeg_109.insert(LegUnitOfMeasureQty_109.getString());
      all_values.push_back(InstrumentLeg_109);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_211;
        FIX::LegSecurityAltID LegSecurityAltID_211("STRING_619544513");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_211);
        LegSecAltIDGrp_NoLegSecurityAltID_211.insert(LegSecurityAltID_211.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_211("STRING_204673078");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_211);
        LegSecAltIDGrp_NoLegSecurityAltID_211.insert(LegSecurityAltIDSource_211.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_211);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_6;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_6("GBP");
      noLegs_1_1_0.set(LegBenchmarkCurveCurrency_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurveCurrency_6.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_6("STRING_402761002");
      noLegs_1_1_0.set(LegBenchmarkCurveName_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurveName_6.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_6("STRING_863239591");
      noLegs_1_1_0.set(LegBenchmarkCurvePoint_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkCurvePoint_6.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_6;
      LegBenchmarkPrice_6.setString("1769011");
      noLegs_1_1_0.set(LegBenchmarkPrice_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkPrice_6.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_6(1346239165);
      noLegs_1_1_0.set(LegBenchmarkPriceType_6);
      LegBenchmarkCurveData_6.insert(LegBenchmarkPriceType_6.getString());
      all_values.push_back(LegBenchmarkCurveData_6);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_37;
        FIX::LegStipulationType LegStipulationType_37("STRING_594037061");
        noLegStipulations_1_0_2_0.set(LegStipulationType_37);
        LegStipulations_NoLegStipulations_37.insert(LegStipulationType_37.getString());
        FIX::LegStipulationValue LegStipulationValue_37("STRING_2010050297");
        noLegStipulations_1_0_2_0.set(LegStipulationValue_37);
        LegStipulations_NoLegStipulations_37.insert(LegStipulationValue_37.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_37);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_103;
        FIX::NestedPartyID NestedPartyID_103("STRING_1265809435");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyID_103.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_103('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyIDSource_103.getString());
        FIX::NestedPartyRole NestedPartyRole_103(673405902);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_103);
        NestedParties_NoNestedPartyIDs_103.insert(NestedPartyRole_103.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_103);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_199;
          FIX::NestedPartySubID NestedPartySubID_199("STRING_1201051229");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_199);
          NstdPtysSubGrp_NoNestedPartySubIDs_199.insert(NestedPartySubID_199.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_199(1498680232);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_199);
          NstdPtysSubGrp_NoNestedPartySubIDs_199.insert(NestedPartySubIDType_199.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_199);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_200;
          FIX::NestedPartySubID NestedPartySubID_200("STRING_1964001688");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_200);
          NstdPtysSubGrp_NoNestedPartySubIDs_200.insert(NestedPartySubID_200.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_200(615407453);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_200);
          NstdPtysSubGrp_NoNestedPartySubIDs_200.insert(NestedPartySubIDType_200.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_200);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_201;
          FIX::NestedPartySubID NestedPartySubID_201("STRING_1868845821");
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubID_201);
          NstdPtysSubGrp_NoNestedPartySubIDs_201.insert(NestedPartySubID_201.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_201(916154200);
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubIDType_201);
          NstdPtysSubGrp_NoNestedPartySubIDs_201.insert(NestedPartySubIDType_201.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_201);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_2);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_104;
        FIX::NestedPartyID NestedPartyID_104("STRING_1536464807");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyID_104.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_104('1');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyIDSource_104.getString());
        FIX::NestedPartyRole NestedPartyRole_104(825205477);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_104);
        NestedParties_NoNestedPartyIDs_104.insert(NestedPartyRole_104.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_104);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_202;
          FIX::NestedPartySubID NestedPartySubID_202("STRING_841211819");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_202);
          NstdPtysSubGrp_NoNestedPartySubIDs_202.insert(NestedPartySubID_202.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_202(528261397);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_202);
          NstdPtysSubGrp_NoNestedPartySubIDs_202.insert(NestedPartySubIDType_202.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_202);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_203;
          FIX::NestedPartySubID NestedPartySubID_203("STRING_1056697318");
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubID_203);
          NstdPtysSubGrp_NoNestedPartySubIDs_203.insert(NestedPartySubID_203.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_203(1952830893);
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubIDType_203);
          NstdPtysSubGrp_NoNestedPartySubIDs_203.insert(NestedPartySubIDType_203.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_203);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_105;
        FIX::NestedPartyID NestedPartyID_105("STRING_241340240");
        noNestedPartyIDs_1_0_2_2.set(NestedPartyID_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyID_105.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_105('1');
        noNestedPartyIDs_1_0_2_2.set(NestedPartyIDSource_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyIDSource_105.getString());
        FIX::NestedPartyRole NestedPartyRole_105(10020324);
        noNestedPartyIDs_1_0_2_2.set(NestedPartyRole_105);
        NestedParties_NoNestedPartyIDs_105.insert(NestedPartyRole_105.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_105);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_204;
          FIX::NestedPartySubID NestedPartySubID_204("STRING_14452150");
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubID_204);
          NstdPtysSubGrp_NoNestedPartySubIDs_204.insert(NestedPartySubID_204.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_204(412781326);
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubIDType_204);
          NstdPtysSubGrp_NoNestedPartySubIDs_204.insert(NestedPartySubIDType_204.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_204);

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_205;
          FIX::NestedPartySubID NestedPartySubID_205("STRING_1379636057");
          noNestedPartySubIDs_1_0_2_3_1.set(NestedPartySubID_205);
          NstdPtysSubGrp_NoNestedPartySubIDs_205.insert(NestedPartySubID_205.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_205(191353326);
          noNestedPartySubIDs_1_0_2_3_1.set(NestedPartySubIDType_205);
          NstdPtysSubGrp_NoNestedPartySubIDs_205.insert(NestedPartySubIDType_205.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_205);

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_1);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_1_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_5;
      FIX::LegOrderQty LegOrderQty_16;
      LegOrderQty_16.setString("17590204");
      noLegs_1_1_1.set(LegOrderQty_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegOrderQty_16.getString());
      FIX::LegQty LegQty_16;
      LegQty_16.setString("12872003");
      noLegs_1_1_1.set(LegQty_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegQty_16.getString());
      FIX::LegRefID LegRefID_16("STRING_785390388");
      noLegs_1_1_1.set(LegRefID_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegRefID_16.getString());
      FIX::LegSettlDate LegSettlDate_16("LOCALMKTDATE_1621587140");
      noLegs_1_1_1.set(LegSettlDate_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegSettlDate_16.getString());
      FIX::LegSettlType LegSettlType_16('1');
      noLegs_1_1_1.set(LegSettlType_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegSettlType_16.getString());
      FIX::LegSwapType LegSwapType_16(5);
      noLegs_1_1_1.set(LegSwapType_16);
      QuotReqLegsGrp_NoLegs_5.insert(LegSwapType_16.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_5);

      // InstrumentLeg
      multiset<string> InstrumentLeg_110;
      FIX::EncodedLegIssuer EncodedLegIssuer_110("DATA_1217189107");
      noLegs_1_1_1.set(EncodedLegIssuer_110);
      InstrumentLeg_110.insert(EncodedLegIssuer_110.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_110(220075951);
      noLegs_1_1_1.set(EncodedLegIssuerLen_110);
      InstrumentLeg_110.insert(EncodedLegIssuerLen_110.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_110("DATA_1376362753");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_110);
      InstrumentLeg_110.insert(EncodedLegSecurityDesc_110.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_110(270756689);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_110);
      InstrumentLeg_110.insert(EncodedLegSecurityDescLen_110.getString());
      FIX::LegCFICode LegCFICode_110("STRING_1718756183");
      noLegs_1_1_1.set(LegCFICode_110);
      InstrumentLeg_110.insert(LegCFICode_110.getString());
      FIX::LegContractMultiplier LegContractMultiplier_110;
      LegContractMultiplier_110.setString("11928807");
      noLegs_1_1_1.set(LegContractMultiplier_110);
      InstrumentLeg_110.insert(LegContractMultiplier_110.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_110(886164142);
      noLegs_1_1_1.set(LegContractMultiplierUnit_110);
      InstrumentLeg_110.insert(LegContractMultiplierUnit_110.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_110("MONTHYEAR_1440118357");
      noLegs_1_1_1.set(LegContractSettlMonth_110);
      InstrumentLeg_110.insert(LegContractSettlMonth_110.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_110("COUNTRY_2109034993");
      noLegs_1_1_1.set(LegCountryOfIssue_110);
      InstrumentLeg_110.insert(LegCountryOfIssue_110.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_110("LOCALMKTDATE_275145301");
      noLegs_1_1_1.set(LegCouponPaymentDate_110);
      InstrumentLeg_110.insert(LegCouponPaymentDate_110.getString());
      FIX::LegCouponRate LegCouponRate_110;
      LegCouponRate_110.setString("16.950000");
      noLegs_1_1_1.set(LegCouponRate_110);
      InstrumentLeg_110.insert(LegCouponRate_110.getString());
      FIX::LegCreditRating LegCreditRating_110("STRING_786756822");
      noLegs_1_1_1.set(LegCreditRating_110);
      InstrumentLeg_110.insert(LegCreditRating_110.getString());
      FIX::LegCurrency LegCurrency_110("CAN");
      noLegs_1_1_1.set(LegCurrency_110);
      InstrumentLeg_110.insert(LegCurrency_110.getString());
      FIX::LegDatedDate LegDatedDate_110("LOCALMKTDATE_1315018219");
      noLegs_1_1_1.set(LegDatedDate_110);
      InstrumentLeg_110.insert(LegDatedDate_110.getString());
      FIX::LegExerciseStyle LegExerciseStyle_110(943844092);
      noLegs_1_1_1.set(LegExerciseStyle_110);
      InstrumentLeg_110.insert(LegExerciseStyle_110.getString());
      FIX::LegFactor LegFactor_110;
      LegFactor_110.setString("14561907");
      noLegs_1_1_1.set(LegFactor_110);
      InstrumentLeg_110.insert(LegFactor_110.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_110(1556358459);
      noLegs_1_1_1.set(LegFlowScheduleType_110);
      InstrumentLeg_110.insert(LegFlowScheduleType_110.getString());
      FIX::LegInstrRegistry LegInstrRegistry_110("STRING_472602276");
      noLegs_1_1_1.set(LegInstrRegistry_110);
      InstrumentLeg_110.insert(LegInstrRegistry_110.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_110("LOCALMKTDATE_1466211084");
      noLegs_1_1_1.set(LegInterestAccrualDate_110);
      InstrumentLeg_110.insert(LegInterestAccrualDate_110.getString());
      FIX::LegIssueDate LegIssueDate_110("LOCALMKTDATE_2072754925");
      noLegs_1_1_1.set(LegIssueDate_110);
      InstrumentLeg_110.insert(LegIssueDate_110.getString());
      FIX::LegIssuer LegIssuer_110("STRING_487054427");
      noLegs_1_1_1.set(LegIssuer_110);
      InstrumentLeg_110.insert(LegIssuer_110.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_110("STRING_1878992410");
      noLegs_1_1_1.set(LegLocaleOfIssue_110);
      InstrumentLeg_110.insert(LegLocaleOfIssue_110.getString());
      FIX::LegMaturityDate LegMaturityDate_110("LOCALMKTDATE_1304907335");
      noLegs_1_1_1.set(LegMaturityDate_110);
      InstrumentLeg_110.insert(LegMaturityDate_110.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_110("MONTHYEAR_678407753");
      noLegs_1_1_1.set(LegMaturityMonthYear_110);
      InstrumentLeg_110.insert(LegMaturityMonthYear_110.getString());
      FIX::LegMaturityTime LegMaturityTime_110("TZTIMEONLY_1490529253");
      noLegs_1_1_1.set(LegMaturityTime_110);
      InstrumentLeg_110.insert(LegMaturityTime_110.getString());
      FIX::LegOptAttribute LegOptAttribute_110('4');
      noLegs_1_1_1.set(LegOptAttribute_110);
      InstrumentLeg_110.insert(LegOptAttribute_110.getString());
      FIX::LegOptionRatio LegOptionRatio_110;
      LegOptionRatio_110.setString("14637981");
      noLegs_1_1_1.set(LegOptionRatio_110);
      InstrumentLeg_110.insert(LegOptionRatio_110.getString());
      FIX::LegPool LegPool_110("STRING_964632745");
      noLegs_1_1_1.set(LegPool_110);
      InstrumentLeg_110.insert(LegPool_110.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_110("STRING_2138777713");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_110);
      InstrumentLeg_110.insert(LegPriceUnitOfMeasure_110.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_110;
      LegPriceUnitOfMeasureQty_110.setString("13675143");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_110);
      InstrumentLeg_110.insert(LegPriceUnitOfMeasureQty_110.getString());
      FIX::LegProduct LegProduct_110(34338205);
      noLegs_1_1_1.set(LegProduct_110);
      InstrumentLeg_110.insert(LegProduct_110.getString());
      FIX::LegPutOrCall LegPutOrCall_110(211370016);
      noLegs_1_1_1.set(LegPutOrCall_110);
      InstrumentLeg_110.insert(LegPutOrCall_110.getString());
      FIX::LegRatioQty LegRatioQty_110;
      LegRatioQty_110.setString("5963934");
      noLegs_1_1_1.set(LegRatioQty_110);
      InstrumentLeg_110.insert(LegRatioQty_110.getString());
      FIX::LegRedemptionDate LegRedemptionDate_110("LOCALMKTDATE_305094894");
      noLegs_1_1_1.set(LegRedemptionDate_110);
      InstrumentLeg_110.insert(LegRedemptionDate_110.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_110("STRING_1930126199");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_110);
      InstrumentLeg_110.insert(LegRepoCollateralSecurityType_110.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_110;
      LegRepurchaseRate_110.setString("42.140000");
      noLegs_1_1_1.set(LegRepurchaseRate_110);
      InstrumentLeg_110.insert(LegRepurchaseRate_110.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_110(1191259036);
      noLegs_1_1_1.set(LegRepurchaseTerm_110);
      InstrumentLeg_110.insert(LegRepurchaseTerm_110.getString());
      FIX::LegSecurityDesc LegSecurityDesc_110("STRING_1222760908");
      noLegs_1_1_1.set(LegSecurityDesc_110);
      InstrumentLeg_110.insert(LegSecurityDesc_110.getString());
      FIX::LegSecurityExchange LegSecurityExchange_110("EXCHANGE_1750825559");
      noLegs_1_1_1.set(LegSecurityExchange_110);
      InstrumentLeg_110.insert(LegSecurityExchange_110.getString());
      FIX::LegSecurityID LegSecurityID_110("STRING_1466404337");
      noLegs_1_1_1.set(LegSecurityID_110);
      InstrumentLeg_110.insert(LegSecurityID_110.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_110("STRING_2032392604");
      noLegs_1_1_1.set(LegSecurityIDSource_110);
      InstrumentLeg_110.insert(LegSecurityIDSource_110.getString());
      FIX::LegSecuritySubType LegSecuritySubType_110("STRING_390098733");
      noLegs_1_1_1.set(LegSecuritySubType_110);
      InstrumentLeg_110.insert(LegSecuritySubType_110.getString());
      FIX::LegSecurityType LegSecurityType_110("STRING_1353551111");
      noLegs_1_1_1.set(LegSecurityType_110);
      InstrumentLeg_110.insert(LegSecurityType_110.getString());
      FIX::LegSide LegSide_110('1');
      noLegs_1_1_1.set(LegSide_110);
      InstrumentLeg_110.insert(LegSide_110.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_110("STRING_1705116952");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_110);
      InstrumentLeg_110.insert(LegStateOrProvinceOfIssue_110.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_110("CAN");
      noLegs_1_1_1.set(LegStrikeCurrency_110);
      InstrumentLeg_110.insert(LegStrikeCurrency_110.getString());
      FIX::LegStrikePrice LegStrikePrice_110;
      LegStrikePrice_110.setString("11139917");
      noLegs_1_1_1.set(LegStrikePrice_110);
      InstrumentLeg_110.insert(LegStrikePrice_110.getString());
      FIX::LegSymbol LegSymbol_110("STRING_622513832");
      noLegs_1_1_1.set(LegSymbol_110);
      InstrumentLeg_110.insert(LegSymbol_110.getString());
      FIX::LegSymbolSfx LegSymbolSfx_110("STRING_163187020");
      noLegs_1_1_1.set(LegSymbolSfx_110);
      InstrumentLeg_110.insert(LegSymbolSfx_110.getString());
      FIX::LegTimeUnit LegTimeUnit_110("STRING_1039263041");
      noLegs_1_1_1.set(LegTimeUnit_110);
      InstrumentLeg_110.insert(LegTimeUnit_110.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_110("STRING_1109568259");
      noLegs_1_1_1.set(LegUnitOfMeasure_110);
      InstrumentLeg_110.insert(LegUnitOfMeasure_110.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_110;
      LegUnitOfMeasureQty_110.setString("20421794");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_110);
      InstrumentLeg_110.insert(LegUnitOfMeasureQty_110.getString());
      all_values.push_back(InstrumentLeg_110);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_212;
        FIX::LegSecurityAltID LegSecurityAltID_212("STRING_1787976012");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_212);
        LegSecAltIDGrp_NoLegSecurityAltID_212.insert(LegSecurityAltID_212.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_212("STRING_1385225036");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_212);
        LegSecAltIDGrp_NoLegSecurityAltID_212.insert(LegSecurityAltIDSource_212.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_212);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_213;
        FIX::LegSecurityAltID LegSecurityAltID_213("STRING_641310744");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_213);
        LegSecAltIDGrp_NoLegSecurityAltID_213.insert(LegSecurityAltID_213.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_213("STRING_1104290506");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_213);
        LegSecAltIDGrp_NoLegSecurityAltID_213.insert(LegSecurityAltIDSource_213.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_213);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_214;
        FIX::LegSecurityAltID LegSecurityAltID_214("STRING_202374133");
        noLegSecurityAltID_1_1_2_2.set(LegSecurityAltID_214);
        LegSecAltIDGrp_NoLegSecurityAltID_214.insert(LegSecurityAltID_214.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_214("STRING_632604809");
        noLegSecurityAltID_1_1_2_2.set(LegSecurityAltIDSource_214);
        LegSecAltIDGrp_NoLegSecurityAltID_214.insert(LegSecurityAltIDSource_214.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_214);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_7;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_7("GBP");
      noLegs_1_1_1.set(LegBenchmarkCurveCurrency_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurveCurrency_7.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_7("STRING_843974825");
      noLegs_1_1_1.set(LegBenchmarkCurveName_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurveName_7.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_7("STRING_920714596");
      noLegs_1_1_1.set(LegBenchmarkCurvePoint_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkCurvePoint_7.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_7;
      LegBenchmarkPrice_7.setString("5418072");
      noLegs_1_1_1.set(LegBenchmarkPrice_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkPrice_7.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_7(626617376);
      noLegs_1_1_1.set(LegBenchmarkPriceType_7);
      LegBenchmarkCurveData_7.insert(LegBenchmarkPriceType_7.getString());
      all_values.push_back(LegBenchmarkCurveData_7);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_38;
        FIX::LegStipulationType LegStipulationType_38("STRING_1733066268");
        noLegStipulations_1_1_2_0.set(LegStipulationType_38);
        LegStipulations_NoLegStipulations_38.insert(LegStipulationType_38.getString());
        FIX::LegStipulationValue LegStipulationValue_38("STRING_1849378285");
        noLegStipulations_1_1_2_0.set(LegStipulationValue_38);
        LegStipulations_NoLegStipulations_38.insert(LegStipulationValue_38.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_38);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_39;
        FIX::LegStipulationType LegStipulationType_39("STRING_165847074");
        noLegStipulations_1_1_2_1.set(LegStipulationType_39);
        LegStipulations_NoLegStipulations_39.insert(LegStipulationType_39.getString());
        FIX::LegStipulationValue LegStipulationValue_39("STRING_1051986957");
        noLegStipulations_1_1_2_1.set(LegStipulationValue_39);
        LegStipulations_NoLegStipulations_39.insert(LegStipulationValue_39.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_39);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_40;
        FIX::LegStipulationType LegStipulationType_40("STRING_1734287241");
        noLegStipulations_1_1_2_2.set(LegStipulationType_40);
        LegStipulations_NoLegStipulations_40.insert(LegStipulationType_40.getString());
        FIX::LegStipulationValue LegStipulationValue_40("STRING_555945807");
        noLegStipulations_1_1_2_2.set(LegStipulationValue_40);
        LegStipulations_NoLegStipulations_40.insert(LegStipulationValue_40.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_40);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_106;
        FIX::NestedPartyID NestedPartyID_106("STRING_1122556064");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyID_106.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_106('1');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyIDSource_106.getString());
        FIX::NestedPartyRole NestedPartyRole_106(407965976);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_106);
        NestedParties_NoNestedPartyIDs_106.insert(NestedPartyRole_106.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_106);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_206;
          FIX::NestedPartySubID NestedPartySubID_206("STRING_1227570875");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_206);
          NstdPtysSubGrp_NoNestedPartySubIDs_206.insert(NestedPartySubID_206.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_206(1030479808);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_206);
          NstdPtysSubGrp_NoNestedPartySubIDs_206.insert(NestedPartySubIDType_206.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_206);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_207;
          FIX::NestedPartySubID NestedPartySubID_207("STRING_2130202667");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_207);
          NstdPtysSubGrp_NoNestedPartySubIDs_207.insert(NestedPartySubID_207.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_207(119350268);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_207);
          NstdPtysSubGrp_NoNestedPartySubIDs_207.insert(NestedPartySubIDType_207.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_207);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_22;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_22("USD");
    noRelatedSym_0_1.set(BenchmarkCurveCurrency_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurveCurrency_22.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_22("STRING_LIBID");
    noRelatedSym_0_1.set(BenchmarkCurveName_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurveName_22.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_22("STRING_1780540431");
    noRelatedSym_0_1.set(BenchmarkCurvePoint_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkCurvePoint_22.getString());
    FIX::BenchmarkPrice BenchmarkPrice_22;
    BenchmarkPrice_22.setString("12626398");
    noRelatedSym_0_1.set(BenchmarkPrice_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkPrice_22.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_22(957347740);
    noRelatedSym_0_1.set(BenchmarkPriceType_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkPriceType_22.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_22("STRING_737347289");
    noRelatedSym_0_1.set(BenchmarkSecurityID_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkSecurityID_22.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_22("STRING_1465013971");
    noRelatedSym_0_1.set(BenchmarkSecurityIDSource_22);
    SpreadOrBenchmarkCurveData_22.insert(BenchmarkSecurityIDSource_22.getString());
    FIX::Spread Spread_22;
    Spread_22.setString("15899525");
    noRelatedSym_0_1.set(Spread_22);
    SpreadOrBenchmarkCurveData_22.insert(Spread_22.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_22);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_35;
      FIX::StipulationType StipulationType_35("STRING_ABS");
      noStipulations_1_1_0.set(StipulationType_35);
      Stipulations_NoStipulations_35.insert(StipulationType_35.getString());
      FIX::StipulationValue StipulationValue_35("STRING_286443726");
      noStipulations_1_1_0.set(StipulationValue_35);
      Stipulations_NoStipulations_35.insert(StipulationValue_35.getString());
      all_values.push_back(Stipulations_NoStipulations_35);

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_105;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_105("DATA_96049894");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingIssuer_105.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_105(913061103);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingIssuerLen_105.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_105("DATA_397404574");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDesc_105.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_105(1829116163);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_105);
      UnderlyingInstrument_105.insert(EncodedUnderlyingSecurityDescLen_105.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_105;
      UnderlyingAdjustedQuantity_105.setString("6149557");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_105);
      UnderlyingInstrument_105.insert(UnderlyingAdjustedQuantity_105.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_105;
      UnderlyingAllocationPercent_105.setString("16.480000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_105);
      UnderlyingInstrument_105.insert(UnderlyingAllocationPercent_105.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_105;
      UnderlyingAttachmentPoint_105.setString("94.720000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_105);
      UnderlyingInstrument_105.insert(UnderlyingAttachmentPoint_105.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_105("STRING_201759333");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_105);
      UnderlyingInstrument_105.insert(UnderlyingCFICode_105.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_105("STRING_1119197456");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_105);
      UnderlyingInstrument_105.insert(UnderlyingCPProgram_105.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_105("STRING_991673893");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_105);
      UnderlyingInstrument_105.insert(UnderlyingCPRegType_105.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_105;
      UnderlyingCapValue_105.setString("13243153");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_105);
      UnderlyingInstrument_105.insert(UnderlyingCapValue_105.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_105;
      UnderlyingCashAmount_105.setString("12327765");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_105);
      UnderlyingInstrument_105.insert(UnderlyingCashAmount_105.getString());
      FIX::UnderlyingCashType UnderlyingCashType_105("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_105);
      UnderlyingInstrument_105.insert(UnderlyingCashType_105.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_105;
      UnderlyingContractMultiplier_105.setString("11438473");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_105);
      UnderlyingInstrument_105.insert(UnderlyingContractMultiplier_105.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_105(312863795);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_105);
      UnderlyingInstrument_105.insert(UnderlyingContractMultiplierUnit_105.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_105("COUNTRY_282636029");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingCountryOfIssue_105.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_105("LOCALMKTDATE_1126566416");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_105);
      UnderlyingInstrument_105.insert(UnderlyingCouponPaymentDate_105.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_105;
      UnderlyingCouponRate_105.setString("40.640000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_105);
      UnderlyingInstrument_105.insert(UnderlyingCouponRate_105.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_105("STRING_275200448");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_105);
      UnderlyingInstrument_105.insert(UnderlyingCreditRating_105.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_105("USD");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_105);
      UnderlyingInstrument_105.insert(UnderlyingCurrency_105.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_105;
      UnderlyingCurrentValue_105.setString("20557408");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_105);
      UnderlyingInstrument_105.insert(UnderlyingCurrentValue_105.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_105;
      UnderlyingDetachmentPoint_105.setString("74.080000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_105);
      UnderlyingInstrument_105.insert(UnderlyingDetachmentPoint_105.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_105;
      UnderlyingDirtyPrice_105.setString("17055988");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_105);
      UnderlyingInstrument_105.insert(UnderlyingDirtyPrice_105.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_105;
      UnderlyingEndPrice_105.setString("6456045");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_105);
      UnderlyingInstrument_105.insert(UnderlyingEndPrice_105.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_105;
      UnderlyingEndValue_105.setString("15841513");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_105);
      UnderlyingInstrument_105.insert(UnderlyingEndValue_105.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_105(1148067702);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_105);
      UnderlyingInstrument_105.insert(UnderlyingExerciseStyle_105.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_105;
      UnderlyingFXRate_105.setString("17072729");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_105);
      UnderlyingInstrument_105.insert(UnderlyingFXRate_105.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_105('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_105);
      UnderlyingInstrument_105.insert(UnderlyingFXRateCalc_105.getString());
      FIX::UnderlyingFactor UnderlyingFactor_105;
      UnderlyingFactor_105.setString("14345114");
      noUnderlyings_1_1_0.set(UnderlyingFactor_105);
      UnderlyingInstrument_105.insert(UnderlyingFactor_105.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_105(1542172397);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_105);
      UnderlyingInstrument_105.insert(UnderlyingFlowScheduleType_105.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_105("STRING_1234443936");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_105);
      UnderlyingInstrument_105.insert(UnderlyingInstrRegistry_105.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_105("LOCALMKTDATE_200088884");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_105);
      UnderlyingInstrument_105.insert(UnderlyingIssueDate_105.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_105("STRING_1939576971");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_105);
      UnderlyingInstrument_105.insert(UnderlyingIssuer_105.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_105("STRING_916076451");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingLocaleOfIssue_105.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_105("LOCALMKTDATE_815044624");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityDate_105.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_105("MONTHYEAR_355344972");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityMonthYear_105.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_105("TZTIMEONLY_1649695923");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_105);
      UnderlyingInstrument_105.insert(UnderlyingMaturityTime_105.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_105;
      UnderlyingNotionalPercentageOutstanding_105.setString("39.570000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_105);
      UnderlyingInstrument_105.insert(UnderlyingNotionalPercentageOutstanding_105.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_105('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_105);
      UnderlyingInstrument_105.insert(UnderlyingOptAttribute_105.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_105;
      UnderlyingOriginalNotionalPercentageOutstanding_105.setString("61.680000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_105);
      UnderlyingInstrument_105.insert(UnderlyingOriginalNotionalPercentageOutstanding_105.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_105("STRING_193635706");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_105);
      UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasure_105.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_105;
      UnderlyingPriceUnitOfMeasureQty_105.setString("5598353");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_105);
      UnderlyingInstrument_105.insert(UnderlyingPriceUnitOfMeasureQty_105.getString());
      FIX::UnderlyingProduct UnderlyingProduct_105(1893526037);
      noUnderlyings_1_1_0.set(UnderlyingProduct_105);
      UnderlyingInstrument_105.insert(UnderlyingProduct_105.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_105(1337483102);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_105);
      UnderlyingInstrument_105.insert(UnderlyingPutOrCall_105.getString());
      FIX::UnderlyingPx UnderlyingPx_105;
      UnderlyingPx_105.setString("8726991");
      noUnderlyings_1_1_0.set(UnderlyingPx_105);
      UnderlyingInstrument_105.insert(UnderlyingPx_105.getString());
      FIX::UnderlyingQty UnderlyingQty_105;
      UnderlyingQty_105.setString("286784");
      noUnderlyings_1_1_0.set(UnderlyingQty_105);
      UnderlyingInstrument_105.insert(UnderlyingQty_105.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_105("LOCALMKTDATE_316565870");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_105);
      UnderlyingInstrument_105.insert(UnderlyingRedemptionDate_105.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_105("STRING_1304913207");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_105);
      UnderlyingInstrument_105.insert(UnderlyingRepoCollateralSecurityType_105.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_105;
      UnderlyingRepurchaseRate_105.setString("88.660000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_105);
      UnderlyingInstrument_105.insert(UnderlyingRepurchaseRate_105.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_105(1320547088);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_105);
      UnderlyingInstrument_105.insert(UnderlyingRepurchaseTerm_105.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_105("STRING_2053164268");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_105);
      UnderlyingInstrument_105.insert(UnderlyingRestructuringType_105.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_105("STRING_212136098");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityDesc_105.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_105("EXCHANGE_1439684496");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityExchange_105.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_105("STRING_1611279421");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityID_105.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_105("STRING_857740619");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityIDSource_105.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_105("STRING_876352228");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_105);
      UnderlyingInstrument_105.insert(UnderlyingSecuritySubType_105.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_105("STRING_611863475");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_105);
      UnderlyingInstrument_105.insert(UnderlyingSecurityType_105.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_105("STRING_417529956");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_105);
      UnderlyingInstrument_105.insert(UnderlyingSeniority_105.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_105("STRING_2014746269");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_105);
      UnderlyingInstrument_105.insert(UnderlyingSettlMethod_105.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_105(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_105);
      UnderlyingInstrument_105.insert(UnderlyingSettlementType_105.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_105;
      UnderlyingStartValue_105.setString("19597023");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_105);
      UnderlyingInstrument_105.insert(UnderlyingStartValue_105.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_105("STRING_1101706557");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_105);
      UnderlyingInstrument_105.insert(UnderlyingStateOrProvinceOfIssue_105.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_105("USD");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_105);
      UnderlyingInstrument_105.insert(UnderlyingStrikeCurrency_105.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_105;
      UnderlyingStrikePrice_105.setString("20177830");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_105);
      UnderlyingInstrument_105.insert(UnderlyingStrikePrice_105.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_105("STRING_914024764");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_105);
      UnderlyingInstrument_105.insert(UnderlyingSymbol_105.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_105("STRING_2107140648");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_105);
      UnderlyingInstrument_105.insert(UnderlyingSymbolSfx_105.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_105("STRING_1519995284");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_105);
      UnderlyingInstrument_105.insert(UnderlyingTimeUnit_105.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_105("STRING_1930828721");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_105);
      UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasure_105.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_105;
      UnderlyingUnitOfMeasureQty_105.setString("14341994");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_105);
      UnderlyingInstrument_105.insert(UnderlyingUnitOfMeasureQty_105.getString());
      all_values.push_back(UnderlyingInstrument_105);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_212;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_212("STRING_2124464427");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_212);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_212.insert(UnderlyingSecurityAltID_212.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_212("STRING_1994034776");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_212);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_212.insert(UnderlyingSecurityAltIDSource_212.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_213;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_213("STRING_1759923842");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_213);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_213.insert(UnderlyingSecurityAltID_213.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_213("STRING_1314463882");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_213);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_213.insert(UnderlyingSecurityAltIDSource_213.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_194;
        FIX::UnderlyingStipType UnderlyingStipType_194("STRING_1788602260");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_194);
        UnderlyingStipulations_NoUnderlyingStips_194.insert(UnderlyingStipType_194.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_194("STRING_1631029752");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_194);
        UnderlyingStipulations_NoUnderlyingStips_194.insert(UnderlyingStipValue_194.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_194);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_195;
        FIX::UnderlyingStipType UnderlyingStipType_195("STRING_2024163479");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_195);
        UnderlyingStipulations_NoUnderlyingStips_195.insert(UnderlyingStipType_195.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_195("STRING_2092481127");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_195);
        UnderlyingStipulations_NoUnderlyingStips_195.insert(UnderlyingStipValue_195.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_195);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_196;
        FIX::UnderlyingStipType UnderlyingStipType_196("STRING_804093193");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_196);
        UnderlyingStipulations_NoUnderlyingStips_196.insert(UnderlyingStipType_196.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_196("STRING_1929844099");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_196);
        UnderlyingStipulations_NoUnderlyingStips_196.insert(UnderlyingStipValue_196.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_196);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_213;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_213("STRING_96294041");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_213);
        UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyID_213.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_213('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_213);
        UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyIDSource_213.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_213(1014874196);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_213);
        UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyRole_213.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_213);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_403("STRING_2005503348");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_403);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403.insert(UnderlyingInstrumentPartySubID_403.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_403(1432404152);
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
      multiset<string> UnderlyingInstrument_106;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_106("DATA_839908891");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_106);
      UnderlyingInstrument_106.insert(EncodedUnderlyingIssuer_106.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_106(1904394604);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_106);
      UnderlyingInstrument_106.insert(EncodedUnderlyingIssuerLen_106.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_106("DATA_1244622857");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_106);
      UnderlyingInstrument_106.insert(EncodedUnderlyingSecurityDesc_106.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_106(1941615448);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_106);
      UnderlyingInstrument_106.insert(EncodedUnderlyingSecurityDescLen_106.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_106;
      UnderlyingAdjustedQuantity_106.setString("20033747");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_106);
      UnderlyingInstrument_106.insert(UnderlyingAdjustedQuantity_106.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_106;
      UnderlyingAllocationPercent_106.setString("48.850000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_106);
      UnderlyingInstrument_106.insert(UnderlyingAllocationPercent_106.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_106;
      UnderlyingAttachmentPoint_106.setString("48.090000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_106);
      UnderlyingInstrument_106.insert(UnderlyingAttachmentPoint_106.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_106("STRING_769915861");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_106);
      UnderlyingInstrument_106.insert(UnderlyingCFICode_106.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_106("STRING_808591886");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_106);
      UnderlyingInstrument_106.insert(UnderlyingCPProgram_106.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_106("STRING_1184426445");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_106);
      UnderlyingInstrument_106.insert(UnderlyingCPRegType_106.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_106;
      UnderlyingCapValue_106.setString("5532609");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_106);
      UnderlyingInstrument_106.insert(UnderlyingCapValue_106.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_106;
      UnderlyingCashAmount_106.setString("953076");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_106);
      UnderlyingInstrument_106.insert(UnderlyingCashAmount_106.getString());
      FIX::UnderlyingCashType UnderlyingCashType_106("STRING_DIFF");
      noUnderlyings_1_1_1.set(UnderlyingCashType_106);
      UnderlyingInstrument_106.insert(UnderlyingCashType_106.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_106;
      UnderlyingContractMultiplier_106.setString("5302417");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_106);
      UnderlyingInstrument_106.insert(UnderlyingContractMultiplier_106.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_106(2089342443);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_106);
      UnderlyingInstrument_106.insert(UnderlyingContractMultiplierUnit_106.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_106("COUNTRY_663264443");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_106);
      UnderlyingInstrument_106.insert(UnderlyingCountryOfIssue_106.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_106("LOCALMKTDATE_1844705596");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_106);
      UnderlyingInstrument_106.insert(UnderlyingCouponPaymentDate_106.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_106;
      UnderlyingCouponRate_106.setString("90.670000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_106);
      UnderlyingInstrument_106.insert(UnderlyingCouponRate_106.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_106("STRING_304383056");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_106);
      UnderlyingInstrument_106.insert(UnderlyingCreditRating_106.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_106("USD");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_106);
      UnderlyingInstrument_106.insert(UnderlyingCurrency_106.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_106;
      UnderlyingCurrentValue_106.setString("2493805");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_106);
      UnderlyingInstrument_106.insert(UnderlyingCurrentValue_106.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_106;
      UnderlyingDetachmentPoint_106.setString("48.940000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_106);
      UnderlyingInstrument_106.insert(UnderlyingDetachmentPoint_106.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_106;
      UnderlyingDirtyPrice_106.setString("3201493");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_106);
      UnderlyingInstrument_106.insert(UnderlyingDirtyPrice_106.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_106;
      UnderlyingEndPrice_106.setString("4065141");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_106);
      UnderlyingInstrument_106.insert(UnderlyingEndPrice_106.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_106;
      UnderlyingEndValue_106.setString("811552");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_106);
      UnderlyingInstrument_106.insert(UnderlyingEndValue_106.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_106(1713789222);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_106);
      UnderlyingInstrument_106.insert(UnderlyingExerciseStyle_106.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_106;
      UnderlyingFXRate_106.setString("14213883");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_106);
      UnderlyingInstrument_106.insert(UnderlyingFXRate_106.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_106('M');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_106);
      UnderlyingInstrument_106.insert(UnderlyingFXRateCalc_106.getString());
      FIX::UnderlyingFactor UnderlyingFactor_106;
      UnderlyingFactor_106.setString("15718089");
      noUnderlyings_1_1_1.set(UnderlyingFactor_106);
      UnderlyingInstrument_106.insert(UnderlyingFactor_106.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_106(706308812);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_106);
      UnderlyingInstrument_106.insert(UnderlyingFlowScheduleType_106.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_106("STRING_1893710448");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_106);
      UnderlyingInstrument_106.insert(UnderlyingInstrRegistry_106.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_106("LOCALMKTDATE_1328719879");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_106);
      UnderlyingInstrument_106.insert(UnderlyingIssueDate_106.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_106("STRING_1950931669");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_106);
      UnderlyingInstrument_106.insert(UnderlyingIssuer_106.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_106("STRING_1687842248");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_106);
      UnderlyingInstrument_106.insert(UnderlyingLocaleOfIssue_106.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_106("LOCALMKTDATE_1184610976");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_106);
      UnderlyingInstrument_106.insert(UnderlyingMaturityDate_106.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_106("MONTHYEAR_652382906");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_106);
      UnderlyingInstrument_106.insert(UnderlyingMaturityMonthYear_106.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_106("TZTIMEONLY_1352273409");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_106);
      UnderlyingInstrument_106.insert(UnderlyingMaturityTime_106.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_106;
      UnderlyingNotionalPercentageOutstanding_106.setString("68.370000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_106);
      UnderlyingInstrument_106.insert(UnderlyingNotionalPercentageOutstanding_106.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_106('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_106);
      UnderlyingInstrument_106.insert(UnderlyingOptAttribute_106.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_106;
      UnderlyingOriginalNotionalPercentageOutstanding_106.setString("62.060000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_106);
      UnderlyingInstrument_106.insert(UnderlyingOriginalNotionalPercentageOutstanding_106.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_106("STRING_360304124");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_106);
      UnderlyingInstrument_106.insert(UnderlyingPriceUnitOfMeasure_106.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_106;
      UnderlyingPriceUnitOfMeasureQty_106.setString("15562824");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_106);
      UnderlyingInstrument_106.insert(UnderlyingPriceUnitOfMeasureQty_106.getString());
      FIX::UnderlyingProduct UnderlyingProduct_106(1440040456);
      noUnderlyings_1_1_1.set(UnderlyingProduct_106);
      UnderlyingInstrument_106.insert(UnderlyingProduct_106.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_106(890545839);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_106);
      UnderlyingInstrument_106.insert(UnderlyingPutOrCall_106.getString());
      FIX::UnderlyingPx UnderlyingPx_106;
      UnderlyingPx_106.setString("14981412");
      noUnderlyings_1_1_1.set(UnderlyingPx_106);
      UnderlyingInstrument_106.insert(UnderlyingPx_106.getString());
      FIX::UnderlyingQty UnderlyingQty_106;
      UnderlyingQty_106.setString("21033048");
      noUnderlyings_1_1_1.set(UnderlyingQty_106);
      UnderlyingInstrument_106.insert(UnderlyingQty_106.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_106("LOCALMKTDATE_587767787");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_106);
      UnderlyingInstrument_106.insert(UnderlyingRedemptionDate_106.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_106("STRING_11766673");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_106);
      UnderlyingInstrument_106.insert(UnderlyingRepoCollateralSecurityType_106.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_106;
      UnderlyingRepurchaseRate_106.setString("43.070000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_106);
      UnderlyingInstrument_106.insert(UnderlyingRepurchaseRate_106.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_106(1916019488);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_106);
      UnderlyingInstrument_106.insert(UnderlyingRepurchaseTerm_106.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_106("STRING_549555571");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_106);
      UnderlyingInstrument_106.insert(UnderlyingRestructuringType_106.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_106("STRING_509584842");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityDesc_106.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_106("EXCHANGE_1900880734");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityExchange_106.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_106("STRING_869704921");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityID_106.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_106("STRING_916098954");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityIDSource_106.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_106("STRING_1982036022");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_106);
      UnderlyingInstrument_106.insert(UnderlyingSecuritySubType_106.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_106("STRING_436010496");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_106);
      UnderlyingInstrument_106.insert(UnderlyingSecurityType_106.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_106("STRING_190003614");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_106);
      UnderlyingInstrument_106.insert(UnderlyingSeniority_106.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_106("STRING_888353931");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_106);
      UnderlyingInstrument_106.insert(UnderlyingSettlMethod_106.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_106(4);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_106);
      UnderlyingInstrument_106.insert(UnderlyingSettlementType_106.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_106;
      UnderlyingStartValue_106.setString("8963124");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_106);
      UnderlyingInstrument_106.insert(UnderlyingStartValue_106.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_106("STRING_634580731");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_106);
      UnderlyingInstrument_106.insert(UnderlyingStateOrProvinceOfIssue_106.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_106("EUR");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_106);
      UnderlyingInstrument_106.insert(UnderlyingStrikeCurrency_106.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_106;
      UnderlyingStrikePrice_106.setString("1749393");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_106);
      UnderlyingInstrument_106.insert(UnderlyingStrikePrice_106.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_106("STRING_226182977");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_106);
      UnderlyingInstrument_106.insert(UnderlyingSymbol_106.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_106("STRING_1352143354");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_106);
      UnderlyingInstrument_106.insert(UnderlyingSymbolSfx_106.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_106("STRING_1527212741");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_106);
      UnderlyingInstrument_106.insert(UnderlyingTimeUnit_106.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_106("STRING_33226167");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_106);
      UnderlyingInstrument_106.insert(UnderlyingUnitOfMeasure_106.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_106;
      UnderlyingUnitOfMeasureQty_106.setString("6656344");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_106);
      UnderlyingInstrument_106.insert(UnderlyingUnitOfMeasureQty_106.getString());
      all_values.push_back(UnderlyingInstrument_106);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_214;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_214("STRING_393530291");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_214);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_214.insert(UnderlyingSecurityAltID_214.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_214("STRING_74433309");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_214);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_214.insert(UnderlyingSecurityAltIDSource_214.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_197;
        FIX::UnderlyingStipType UnderlyingStipType_197("STRING_1284076130");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_197);
        UnderlyingStipulations_NoUnderlyingStips_197.insert(UnderlyingStipType_197.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_197("STRING_1572574563");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_197);
        UnderlyingStipulations_NoUnderlyingStips_197.insert(UnderlyingStipValue_197.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_197);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_198;
        FIX::UnderlyingStipType UnderlyingStipType_198("STRING_1164807007");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_198);
        UnderlyingStipulations_NoUnderlyingStips_198.insert(UnderlyingStipType_198.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_198("STRING_1871843918");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_198);
        UnderlyingStipulations_NoUnderlyingStips_198.insert(UnderlyingStipValue_198.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_198);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_199;
        FIX::UnderlyingStipType UnderlyingStipType_199("STRING_1584341236");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipType_199);
        UnderlyingStipulations_NoUnderlyingStips_199.insert(UnderlyingStipType_199.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_199("STRING_1425011314");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipValue_199);
        UnderlyingStipulations_NoUnderlyingStips_199.insert(UnderlyingStipValue_199.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_199);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_214;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_214("STRING_2133896808");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_214);
        UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyID_214.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_214('1');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_214);
        UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyIDSource_214.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_214(1393776845);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_214);
        UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyRole_214.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_214);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_404("STRING_703211463");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_404);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404.insert(UnderlyingInstrumentPartySubID_404.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_404(1228329219);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_404);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404.insert(UnderlyingInstrumentPartySubIDType_404.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_405("STRING_1292128577");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_405);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405.insert(UnderlyingInstrumentPartySubID_405.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_405(893215078);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_405);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405.insert(UnderlyingInstrumentPartySubIDType_405.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_406("STRING_2116683150");
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubID_406);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406.insert(UnderlyingInstrumentPartySubID_406.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_406(1152464348);
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_406);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406.insert(UnderlyingInstrumentPartySubIDType_406.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_215;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_215("STRING_1789527504");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_215);
        UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyID_215.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_215('6');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_215);
        UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyIDSource_215.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_215(194036349);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_215);
        UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyRole_215.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_215);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_407("STRING_778719564");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_407);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407.insert(UnderlyingInstrumentPartySubID_407.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_407(420219327);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_407);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407.insert(UnderlyingInstrumentPartySubIDType_407.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_216;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_216("STRING_1693947658");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_216);
        UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyID_216.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_216('1');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_216);
        UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyIDSource_216.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_216(453445494);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_216);
        UndlyInstrumentParties_NoUndlyInstrumentParties_216.insert(UnderlyingInstrumentPartyRole_216.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_216);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_408("STRING_2074877605");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_408);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408.insert(UnderlyingInstrumentPartySubID_408.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_408(846975785);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_408);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408.insert(UnderlyingInstrumentPartySubIDType_408.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_409("STRING_286531818");
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubID_409);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409.insert(UnderlyingInstrumentPartySubID_409.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_409(1136379712);
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_409);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409.insert(UnderlyingInstrumentPartySubIDType_409.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_410("STRING_2131051916");
          noUndlyInstrumentPartySubIDs_1_1_2_3_2.set(UnderlyingInstrumentPartySubID_410);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410.insert(UnderlyingInstrumentPartySubID_410.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_410(1859106381);
          noUndlyInstrumentPartySubIDs_1_1_2_3_2.set(UnderlyingInstrumentPartySubIDType_410);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410.insert(UnderlyingInstrumentPartySubIDType_410.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    // YieldData
    multiset<string> YieldData_17;
    FIX::Yield Yield_17;
    Yield_17.setString("30.710000");
    noRelatedSym_0_1.set(Yield_17);
    YieldData_17.insert(Yield_17.getString());
    FIX::YieldCalcDate YieldCalcDate_17("LOCALMKTDATE_1855412186");
    noRelatedSym_0_1.set(YieldCalcDate_17);
    YieldData_17.insert(YieldCalcDate_17.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_17("LOCALMKTDATE_1295963970");
    noRelatedSym_0_1.set(YieldRedemptionDate_17);
    YieldData_17.insert(YieldRedemptionDate_17.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_17;
    YieldRedemptionPrice_17.setString("15787143");
    noRelatedSym_0_1.set(YieldRedemptionPrice_17);
    YieldData_17.insert(YieldRedemptionPrice_17.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_17(1348308296);
    noRelatedSym_0_1.set(YieldRedemptionPriceType_17);
    YieldData_17.insert(YieldRedemptionPriceType_17.getString());
    FIX::YieldType YieldType_17("STRING_LASTCLOSE");
    noRelatedSym_0_1.set(YieldType_17);
    YieldData_17.insert(YieldType_17.getString());
    all_values.push_back(YieldData_17);

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_2;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_2;
    FIX::Account Account_32("STRING_1365826895");
    noRelatedSym_0_2.set(Account_32);
    QuotReqRjctGrp_NoRelatedSym_2.insert(Account_32.getString());
    FIX::AccountType AccountType_29(4);
    noRelatedSym_0_2.set(AccountType_29);
    QuotReqRjctGrp_NoRelatedSym_2.insert(AccountType_29.getString());
    FIX::AcctIDSource AcctIDSource_25(4);
    noRelatedSym_0_2.set(AcctIDSource_25);
    QuotReqRjctGrp_NoRelatedSym_2.insert(AcctIDSource_25.getString());
    FIX::Currency Currency_54("GBP");
    noRelatedSym_0_2.set(Currency_54);
    QuotReqRjctGrp_NoRelatedSym_2.insert(Currency_54.getString());
    FIX::ExpireTime ExpireTime_16(FIX::UTCTIMESTAMP(4, 54, 1, 1, 4, 2010));
    noRelatedSym_0_2.set(ExpireTime_16);
    QuotReqRjctGrp_NoRelatedSym_2.insert(ExpireTime_16.getString());
    FIX::OrdType OrdType_42('M');
    noRelatedSym_0_2.set(OrdType_42);
    QuotReqRjctGrp_NoRelatedSym_2.insert(OrdType_42.getString());
    FIX::OrderQty2 OrderQty2_20;
    OrderQty2_20.setString("10271463");
    noRelatedSym_0_2.set(OrderQty2_20);
    QuotReqRjctGrp_NoRelatedSym_2.insert(OrderQty2_20.getString());
    FIX::PrevClosePx PrevClosePx_11;
    PrevClosePx_11.setString("9023765");
    noRelatedSym_0_2.set(PrevClosePx_11);
    QuotReqRjctGrp_NoRelatedSym_2.insert(PrevClosePx_11.getString());
    FIX::Price Price_21;
    Price_21.setString("3450819");
    noRelatedSym_0_2.set(Price_21);
    QuotReqRjctGrp_NoRelatedSym_2.insert(Price_21.getString());
    FIX::Price2 Price2_7;
    Price2_7.setString("11855950");
    noRelatedSym_0_2.set(Price2_7);
    QuotReqRjctGrp_NoRelatedSym_2.insert(Price2_7.getString());
    FIX::PriceType PriceType_33(2);
    noRelatedSym_0_2.set(PriceType_33);
    QuotReqRjctGrp_NoRelatedSym_2.insert(PriceType_33.getString());
    FIX::QtyType QtyType_25(1);
    noRelatedSym_0_2.set(QtyType_25);
    QuotReqRjctGrp_NoRelatedSym_2.insert(QtyType_25.getString());
    FIX::QuotePriceType QuotePriceType_3(9);
    noRelatedSym_0_2.set(QuotePriceType_3);
    QuotReqRjctGrp_NoRelatedSym_2.insert(QuotePriceType_3.getString());
    FIX::QuoteRequestType QuoteRequestType_3(2);
    noRelatedSym_0_2.set(QuoteRequestType_3);
    QuotReqRjctGrp_NoRelatedSym_2.insert(QuoteRequestType_3.getString());
    FIX::QuoteType QuoteType_9(1);
    noRelatedSym_0_2.set(QuoteType_9);
    QuotReqRjctGrp_NoRelatedSym_2.insert(QuoteType_9.getString());
    FIX::SettlDate SettlDate_40("LOCALMKTDATE_101885043");
    noRelatedSym_0_2.set(SettlDate_40);
    QuotReqRjctGrp_NoRelatedSym_2.insert(SettlDate_40.getString());
    FIX::SettlDate2 SettlDate2_20("LOCALMKTDATE_38882417");
    noRelatedSym_0_2.set(SettlDate2_20);
    QuotReqRjctGrp_NoRelatedSym_2.insert(SettlDate2_20.getString());
    FIX::SettlType SettlType_23("STRING_3");
    noRelatedSym_0_2.set(SettlType_23);
    QuotReqRjctGrp_NoRelatedSym_2.insert(SettlType_23.getString());
    FIX::Side Side_38('3');
    noRelatedSym_0_2.set(Side_38);
    QuotReqRjctGrp_NoRelatedSym_2.insert(Side_38.getString());
    FIX::TradeOriginationDate TradeOriginationDate_20("LOCALMKTDATE_1894294603");
    noRelatedSym_0_2.set(TradeOriginationDate_20);
    QuotReqRjctGrp_NoRelatedSym_2.insert(TradeOriginationDate_20.getString());
    FIX::TradingSessionID TradingSessionID_66("STRING_4");
    noRelatedSym_0_2.set(TradingSessionID_66);
    QuotReqRjctGrp_NoRelatedSym_2.insert(TradingSessionID_66.getString());
    FIX::TradingSessionSubID TradingSessionSubID_66("STRING_3");
    noRelatedSym_0_2.set(TradingSessionSubID_66);
    QuotReqRjctGrp_NoRelatedSym_2.insert(TradingSessionSubID_66.getString());
    FIX::TransactTime TransactTime_56(FIX::UTCTIMESTAMP(23, 47, 25, 2, 7, 2001));
    noRelatedSym_0_2.set(TransactTime_56);
    QuotReqRjctGrp_NoRelatedSym_2.insert(TransactTime_56.getString());
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_2);

    // FinancingDetails
    multiset<string> FinancingDetails_23;
    FIX::AgreementCurrency AgreementCurrency_23("JPY");
    noRelatedSym_0_2.set(AgreementCurrency_23);
    FinancingDetails_23.insert(AgreementCurrency_23.getString());
    FIX::AgreementDate AgreementDate_23("LOCALMKTDATE_1009814376");
    noRelatedSym_0_2.set(AgreementDate_23);
    FinancingDetails_23.insert(AgreementDate_23.getString());
    FIX::AgreementDesc AgreementDesc_23("STRING_400981368");
    noRelatedSym_0_2.set(AgreementDesc_23);
    FinancingDetails_23.insert(AgreementDesc_23.getString());
    FIX::AgreementID AgreementID_23("STRING_98300243");
    noRelatedSym_0_2.set(AgreementID_23);
    FinancingDetails_23.insert(AgreementID_23.getString());
    FIX::DeliveryType DeliveryType_23(3);
    noRelatedSym_0_2.set(DeliveryType_23);
    FinancingDetails_23.insert(DeliveryType_23.getString());
    FIX::EndDate EndDate_23("LOCALMKTDATE_883138559");
    noRelatedSym_0_2.set(EndDate_23);
    FinancingDetails_23.insert(EndDate_23.getString());
    FIX::MarginRatio MarginRatio_23;
    MarginRatio_23.setString("81.920000");
    noRelatedSym_0_2.set(MarginRatio_23);
    FinancingDetails_23.insert(MarginRatio_23.getString());
    FIX::StartDate StartDate_23("LOCALMKTDATE_137903891");
    noRelatedSym_0_2.set(StartDate_23);
    FinancingDetails_23.insert(StartDate_23.getString());
    FIX::TerminationType TerminationType_23(1);
    noRelatedSym_0_2.set(TerminationType_23);
    FinancingDetails_23.insert(TerminationType_23.getString());
    all_values.push_back(FinancingDetails_23);

    // Instrument
    multiset<string> Instrument_72;
    FIX::AttachmentPoint AttachmentPoint_72;
    AttachmentPoint_72.setString("1.510000");
    noRelatedSym_0_2.set(AttachmentPoint_72);
    Instrument_72.insert(AttachmentPoint_72.getString());
    FIX::CFICode CFICode_72("STRING_1323498913");
    noRelatedSym_0_2.set(CFICode_72);
    Instrument_72.insert(CFICode_72.getString());
    FIX::CPProgram CPProgram_72(1);
    noRelatedSym_0_2.set(CPProgram_72);
    Instrument_72.insert(CPProgram_72.getString());
    FIX::CPRegType CPRegType_72("STRING_1799180619");
    noRelatedSym_0_2.set(CPRegType_72);
    Instrument_72.insert(CPRegType_72.getString());
    FIX::CapPrice CapPrice_72;
    CapPrice_72.setString("2890042");
    noRelatedSym_0_2.set(CapPrice_72);
    Instrument_72.insert(CapPrice_72.getString());
    FIX::ContractMultiplier ContractMultiplier_72;
    ContractMultiplier_72.setString("10491675");
    noRelatedSym_0_2.set(ContractMultiplier_72);
    Instrument_72.insert(ContractMultiplier_72.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_72(2);
    noRelatedSym_0_2.set(ContractMultiplierUnit_72);
    Instrument_72.insert(ContractMultiplierUnit_72.getString());
    FIX::ContractSettlMonth ContractSettlMonth_72("MONTHYEAR_390889286");
    noRelatedSym_0_2.set(ContractSettlMonth_72);
    Instrument_72.insert(ContractSettlMonth_72.getString());
    FIX::CountryOfIssue CountryOfIssue_72("COUNTRY_1088050006");
    noRelatedSym_0_2.set(CountryOfIssue_72);
    Instrument_72.insert(CountryOfIssue_72.getString());
    FIX::CouponPaymentDate CouponPaymentDate_72("LOCALMKTDATE_1050744275");
    noRelatedSym_0_2.set(CouponPaymentDate_72);
    Instrument_72.insert(CouponPaymentDate_72.getString());
    FIX::CouponRate CouponRate_72;
    CouponRate_72.setString("74.010000");
    noRelatedSym_0_2.set(CouponRate_72);
    Instrument_72.insert(CouponRate_72.getString());
    FIX::CreditRating CreditRating_72("STRING_834860961");
    noRelatedSym_0_2.set(CreditRating_72);
    Instrument_72.insert(CreditRating_72.getString());
    FIX::DatedDate DatedDate_72("LOCALMKTDATE_754559616");
    noRelatedSym_0_2.set(DatedDate_72);
    Instrument_72.insert(DatedDate_72.getString());
    FIX::DetachmentPoint DetachmentPoint_72;
    DetachmentPoint_72.setString("62.530000");
    noRelatedSym_0_2.set(DetachmentPoint_72);
    Instrument_72.insert(DetachmentPoint_72.getString());
    FIX::EncodedIssuer EncodedIssuer_72("DATA_1929980212");
    noRelatedSym_0_2.set(EncodedIssuer_72);
    Instrument_72.insert(EncodedIssuer_72.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_72(1740752087);
    noRelatedSym_0_2.set(EncodedIssuerLen_72);
    Instrument_72.insert(EncodedIssuerLen_72.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_72("DATA_1385942001");
    noRelatedSym_0_2.set(EncodedSecurityDesc_72);
    Instrument_72.insert(EncodedSecurityDesc_72.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_72(1472217309);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_72);
    Instrument_72.insert(EncodedSecurityDescLen_72.getString());
    FIX::ExerciseStyle ExerciseStyle_72(1);
    noRelatedSym_0_2.set(ExerciseStyle_72);
    Instrument_72.insert(ExerciseStyle_72.getString());
    FIX::Factor Factor_72;
    Factor_72.setString("2126588");
    noRelatedSym_0_2.set(Factor_72);
    Instrument_72.insert(Factor_72.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_72(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_72);
    Instrument_72.insert(FlexProductEligibilityIndicator_72.getString());
    FIX::FlexibleIndicator FlexibleIndicator_72(false);
    noRelatedSym_0_2.set(FlexibleIndicator_72);
    Instrument_72.insert(FlexibleIndicator_72.getString());
    FIX::FloorPrice FloorPrice_72;
    FloorPrice_72.setString("20016290");
    noRelatedSym_0_2.set(FloorPrice_72);
    Instrument_72.insert(FloorPrice_72.getString());
    FIX::FlowScheduleType FlowScheduleType_72(2);
    noRelatedSym_0_2.set(FlowScheduleType_72);
    Instrument_72.insert(FlowScheduleType_72.getString());
    FIX::InstrRegistry InstrRegistry_72("STRING_1084314370");
    noRelatedSym_0_2.set(InstrRegistry_72);
    Instrument_72.insert(InstrRegistry_72.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_72('2');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_72);
    Instrument_72.insert(InstrmtAssignmentMethod_72.getString());
    FIX::InterestAccrualDate InterestAccrualDate_72("LOCALMKTDATE_810473374");
    noRelatedSym_0_2.set(InterestAccrualDate_72);
    Instrument_72.insert(InterestAccrualDate_72.getString());
    FIX::IssueDate IssueDate_72("LOCALMKTDATE_1967452929");
    noRelatedSym_0_2.set(IssueDate_72);
    Instrument_72.insert(IssueDate_72.getString());
    FIX::Issuer Issuer_72("STRING_849363845");
    noRelatedSym_0_2.set(Issuer_72);
    Instrument_72.insert(Issuer_72.getString());
    FIX::ListMethod ListMethod_72(0);
    noRelatedSym_0_2.set(ListMethod_72);
    Instrument_72.insert(ListMethod_72.getString());
    FIX::LocaleOfIssue LocaleOfIssue_72("STRING_1605484357");
    noRelatedSym_0_2.set(LocaleOfIssue_72);
    Instrument_72.insert(LocaleOfIssue_72.getString());
    FIX::MaturityDate MaturityDate_72("LOCALMKTDATE_2091363997");
    noRelatedSym_0_2.set(MaturityDate_72);
    Instrument_72.insert(MaturityDate_72.getString());
    FIX::MaturityMonthYear MaturityMonthYear_72("MONTHYEAR_124392531");
    noRelatedSym_0_2.set(MaturityMonthYear_72);
    Instrument_72.insert(MaturityMonthYear_72.getString());
    FIX::MaturityTime MaturityTime_72("TZTIMEONLY_451854149");
    noRelatedSym_0_2.set(MaturityTime_72);
    Instrument_72.insert(MaturityTime_72.getString());
    FIX::MinPriceIncrement MinPriceIncrement_72;
    MinPriceIncrement_72.setString("17430609");
    noRelatedSym_0_2.set(MinPriceIncrement_72);
    Instrument_72.insert(MinPriceIncrement_72.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_72;
    MinPriceIncrementAmount_72.setString("4133967");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_72);
    Instrument_72.insert(MinPriceIncrementAmount_72.getString());
    FIX::NTPositionLimit NTPositionLimit_72(1501021738);
    noRelatedSym_0_2.set(NTPositionLimit_72);
    Instrument_72.insert(NTPositionLimit_72.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_72;
    NotionalPercentageOutstanding_72.setString("65.760000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_72);
    Instrument_72.insert(NotionalPercentageOutstanding_72.getString());
    FIX::OptAttribute OptAttribute_72('8');
    noRelatedSym_0_2.set(OptAttribute_72);
    Instrument_72.insert(OptAttribute_72.getString());
    FIX::OptPayoutAmount OptPayoutAmount_72;
    OptPayoutAmount_72.setString("4415880");
    noRelatedSym_0_2.set(OptPayoutAmount_72);
    Instrument_72.insert(OptPayoutAmount_72.getString());
    FIX::OptPayoutType OptPayoutType_72(3);
    noRelatedSym_0_2.set(OptPayoutType_72);
    Instrument_72.insert(OptPayoutType_72.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_72;
    OriginalNotionalPercentageOutstanding_72.setString("34.620000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_72);
    Instrument_72.insert(OriginalNotionalPercentageOutstanding_72.getString());
    FIX::Pool Pool_72("STRING_1276449057");
    noRelatedSym_0_2.set(Pool_72);
    Instrument_72.insert(Pool_72.getString());
    FIX::PositionLimit PositionLimit_72(1896290468);
    noRelatedSym_0_2.set(PositionLimit_72);
    Instrument_72.insert(PositionLimit_72.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_72("STRING_PCTPAR");
    noRelatedSym_0_2.set(PriceQuoteMethod_72);
    Instrument_72.insert(PriceQuoteMethod_72.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_72("STRING_1058945622");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_72);
    Instrument_72.insert(PriceUnitOfMeasure_72.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_72;
    PriceUnitOfMeasureQty_72.setString("14895589");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_72);
    Instrument_72.insert(PriceUnitOfMeasureQty_72.getString());
    FIX::Product Product_74(1);
    noRelatedSym_0_2.set(Product_74);
    Instrument_72.insert(Product_74.getString());
    FIX::ProductComplex ProductComplex_72("STRING_383679283");
    noRelatedSym_0_2.set(ProductComplex_72);
    Instrument_72.insert(ProductComplex_72.getString());
    FIX::PutOrCall PutOrCall_72(0);
    noRelatedSym_0_2.set(PutOrCall_72);
    Instrument_72.insert(PutOrCall_72.getString());
    FIX::RedemptionDate RedemptionDate_72("LOCALMKTDATE_1235176879");
    noRelatedSym_0_2.set(RedemptionDate_72);
    Instrument_72.insert(RedemptionDate_72.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_72("STRING_1073580754");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_72);
    Instrument_72.insert(RepoCollateralSecurityType_72.getString());
    FIX::RepurchaseRate RepurchaseRate_72;
    RepurchaseRate_72.setString("7.350000");
    noRelatedSym_0_2.set(RepurchaseRate_72);
    Instrument_72.insert(RepurchaseRate_72.getString());
    FIX::RepurchaseTerm RepurchaseTerm_72(1089322289);
    noRelatedSym_0_2.set(RepurchaseTerm_72);
    Instrument_72.insert(RepurchaseTerm_72.getString());
    FIX::RestructuringType RestructuringType_72("STRING_MR");
    noRelatedSym_0_2.set(RestructuringType_72);
    Instrument_72.insert(RestructuringType_72.getString());
    FIX::SecurityDesc SecurityDesc_72("STRING_1680195105");
    noRelatedSym_0_2.set(SecurityDesc_72);
    Instrument_72.insert(SecurityDesc_72.getString());
    FIX::SecurityExchange SecurityExchange_72("EXCHANGE_1041767942");
    noRelatedSym_0_2.set(SecurityExchange_72);
    Instrument_72.insert(SecurityExchange_72.getString());
    FIX::SecurityGroup SecurityGroup_72("STRING_1436286328");
    noRelatedSym_0_2.set(SecurityGroup_72);
    Instrument_72.insert(SecurityGroup_72.getString());
    FIX::SecurityID SecurityID_72("STRING_1500164386");
    noRelatedSym_0_2.set(SecurityID_72);
    Instrument_72.insert(SecurityID_72.getString());
    FIX::SecurityIDSource SecurityIDSource_72("STRING_I");
    noRelatedSym_0_2.set(SecurityIDSource_72);
    Instrument_72.insert(SecurityIDSource_72.getString());
    FIX::SecurityStatus SecurityStatus_72("STRING_1");
    noRelatedSym_0_2.set(SecurityStatus_72);
    Instrument_72.insert(SecurityStatus_72.getString());
    FIX::SecuritySubType SecuritySubType_73("STRING_958165096");
    noRelatedSym_0_2.set(SecuritySubType_73);
    Instrument_72.insert(SecuritySubType_73.getString());
    FIX::SecurityType SecurityType_74("STRING_PROV");
    noRelatedSym_0_2.set(SecurityType_74);
    Instrument_72.insert(SecurityType_74.getString());
    FIX::Seniority Seniority_72("STRING_SD");
    noRelatedSym_0_2.set(Seniority_72);
    Instrument_72.insert(Seniority_72.getString());
    FIX::SettlMethod SettlMethod_72('P');
    noRelatedSym_0_2.set(SettlMethod_72);
    Instrument_72.insert(SettlMethod_72.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_72("STRING_1430589456");
    noRelatedSym_0_2.set(SettleOnOpenFlag_72);
    Instrument_72.insert(SettleOnOpenFlag_72.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_72("STRING_774969251");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_72);
    Instrument_72.insert(StateOrProvinceOfIssue_72.getString());
    FIX::StrikeCurrency StrikeCurrency_72("CHF");
    noRelatedSym_0_2.set(StrikeCurrency_72);
    Instrument_72.insert(StrikeCurrency_72.getString());
    FIX::StrikeMultiplier StrikeMultiplier_72;
    StrikeMultiplier_72.setString("15792553");
    noRelatedSym_0_2.set(StrikeMultiplier_72);
    Instrument_72.insert(StrikeMultiplier_72.getString());
    FIX::StrikePrice StrikePrice_72;
    StrikePrice_72.setString("12051454");
    noRelatedSym_0_2.set(StrikePrice_72);
    Instrument_72.insert(StrikePrice_72.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_72(3);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_72);
    Instrument_72.insert(StrikePriceBoundaryMethod_72.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_72;
    StrikePriceBoundaryPrecision_72.setString("51.260000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_72);
    Instrument_72.insert(StrikePriceBoundaryPrecision_72.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_72(3);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_72);
    Instrument_72.insert(StrikePriceDeterminationMethod_72.getString());
    FIX::StrikeValue StrikeValue_72;
    StrikeValue_72.setString("2646300");
    noRelatedSym_0_2.set(StrikeValue_72);
    Instrument_72.insert(StrikeValue_72.getString());
    FIX::Symbol Symbol_72("STRING_519111194");
    noRelatedSym_0_2.set(Symbol_72);
    Instrument_72.insert(Symbol_72.getString());
    FIX::SymbolSfx SymbolSfx_72("STRING_CD");
    noRelatedSym_0_2.set(SymbolSfx_72);
    Instrument_72.insert(SymbolSfx_72.getString());
    FIX::TimeUnit TimeUnit_72("STRING_Wk");
    noRelatedSym_0_2.set(TimeUnit_72);
    Instrument_72.insert(TimeUnit_72.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_72(3);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_72);
    Instrument_72.insert(UnderlyingPriceDeterminationMethod_72.getString());
    FIX::UnitOfMeasure UnitOfMeasure_72("STRING_Gal");
    noRelatedSym_0_2.set(UnitOfMeasure_72);
    Instrument_72.insert(UnitOfMeasure_72.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_72;
    UnitOfMeasureQty_72.setString("16667366");
    noRelatedSym_0_2.set(UnitOfMeasureQty_72);
    Instrument_72.insert(UnitOfMeasureQty_72.getString());
    FIX::ValuationMethod ValuationMethod_72("STRING_CDSD");
    noRelatedSym_0_2.set(ValuationMethod_72);
    Instrument_72.insert(ValuationMethod_72.getString());
    all_values.push_back(Instrument_72);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_140;
      FIX::ComplexEventCondition ComplexEventCondition_140(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventCondition_140.getString());
      FIX::ComplexEventPrice ComplexEventPrice_140;
      ComplexEventPrice_140.setString("17186447");
      noComplexEvents_2_1_0.set(ComplexEventPrice_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventPrice_140.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_140(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceBoundaryMethod_140.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_140;
      ComplexEventPriceBoundaryPrecision_140.setString("88.920000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceBoundaryPrecision_140.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_140(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventPriceTimeType_140.getString());
      FIX::ComplexEventType ComplexEventType_140(5);
      noComplexEvents_2_1_0.set(ComplexEventType_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexEventType_140.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_140;
      ComplexOptPayoutAmount_140.setString("11480096");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_140);
      ComplexEvents_NoComplexEvents_140.insert(ComplexOptPayoutAmount_140.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_140);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_288;
        FIX::ComplexEventEndDate ComplexEventEndDate_288(FIX::UTCTIMESTAMP(7, 5, 10, 16, 6, 2010));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_288);
        ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventEndDate_288.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_288(FIX::UTCTIMESTAMP(18, 6, 25, 11, 10, 2015));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_288);
        ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventStartDate_288.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_288);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_582;
          FIX::ComplexEventEndTime ComplexEventEndTime_582(FIX::UTCTIMEONLY(15, 38, 53));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_582);
          ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventEndTime_582.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_582(FIX::UTCTIMEONLY(18, 7, 16));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_582);
          ComplexEventTimes_NoComplexEventTimes_582.insert(ComplexEventStartTime_582.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_582);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_583;
          FIX::ComplexEventEndTime ComplexEventEndTime_583(FIX::UTCTIMEONLY(6, 56, 1));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_583);
          ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventEndTime_583.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_583(FIX::UTCTIMEONLY(15, 52, 56));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_583);
          ComplexEventTimes_NoComplexEventTimes_583.insert(ComplexEventStartTime_583.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_583);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_147;
      FIX::EventDate EventDate_147("LOCALMKTDATE_1624878951");
      noEvents_2_1_0.set(EventDate_147);
      EvntGrp_NoEvents_147.insert(EventDate_147.getString());
      FIX::EventPx EventPx_147;
      EventPx_147.setString("12853457");
      noEvents_2_1_0.set(EventPx_147);
      EvntGrp_NoEvents_147.insert(EventPx_147.getString());
      FIX::EventText EventText_147("STRING_823654399");
      noEvents_2_1_0.set(EventText_147);
      EvntGrp_NoEvents_147.insert(EventText_147.getString());
      FIX::EventTime EventTime_147(FIX::UTCTIMESTAMP(22, 33, 40, 21, 5, 2017));
      noEvents_2_1_0.set(EventTime_147);
      EvntGrp_NoEvents_147.insert(EventTime_147.getString());
      FIX::EventType EventType_147(17);
      noEvents_2_1_0.set(EventType_147);
      EvntGrp_NoEvents_147.insert(EventType_147.getString());
      all_values.push_back(EvntGrp_NoEvents_147);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_148;
      FIX::EventDate EventDate_148("LOCALMKTDATE_100792397");
      noEvents_2_1_1.set(EventDate_148);
      EvntGrp_NoEvents_148.insert(EventDate_148.getString());
      FIX::EventPx EventPx_148;
      EventPx_148.setString("13973757");
      noEvents_2_1_1.set(EventPx_148);
      EvntGrp_NoEvents_148.insert(EventPx_148.getString());
      FIX::EventText EventText_148("STRING_160229129");
      noEvents_2_1_1.set(EventText_148);
      EvntGrp_NoEvents_148.insert(EventText_148.getString());
      FIX::EventTime EventTime_148(FIX::UTCTIMESTAMP(19, 8, 9, 10, 7, 2005));
      noEvents_2_1_1.set(EventTime_148);
      EvntGrp_NoEvents_148.insert(EventTime_148.getString());
      FIX::EventType EventType_148(19);
      noEvents_2_1_1.set(EventType_148);
      EvntGrp_NoEvents_148.insert(EventType_148.getString());
      all_values.push_back(EvntGrp_NoEvents_148);

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_149;
      FIX::EventDate EventDate_149("LOCALMKTDATE_874223847");
      noEvents_2_1_2.set(EventDate_149);
      EvntGrp_NoEvents_149.insert(EventDate_149.getString());
      FIX::EventPx EventPx_149;
      EventPx_149.setString("18214533");
      noEvents_2_1_2.set(EventPx_149);
      EvntGrp_NoEvents_149.insert(EventPx_149.getString());
      FIX::EventText EventText_149("STRING_1802928654");
      noEvents_2_1_2.set(EventText_149);
      EvntGrp_NoEvents_149.insert(EventText_149.getString());
      FIX::EventTime EventTime_149(FIX::UTCTIMESTAMP(11, 50, 13, 3, 12, 2002));
      noEvents_2_1_2.set(EventTime_149);
      EvntGrp_NoEvents_149.insert(EventTime_149.getString());
      FIX::EventType EventType_149(1);
      noEvents_2_1_2.set(EventType_149);
      EvntGrp_NoEvents_149.insert(EventType_149.getString());
      all_values.push_back(EvntGrp_NoEvents_149);

      noRelatedSym_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_151;
      FIX::InstrumentPartyID InstrumentPartyID_151("STRING_1234607244");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyID_151.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_151('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyIDSource_151.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_151(1654202512);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyRole_151.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_151);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318;
        FIX::InstrumentPartySubID InstrumentPartySubID_318("STRING_864153067");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_318);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318.insert(InstrumentPartySubID_318.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_318(1597001604);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_318);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318.insert(InstrumentPartySubIDType_318.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319;
        FIX::InstrumentPartySubID InstrumentPartySubID_319("STRING_1938832322");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_319);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319.insert(InstrumentPartySubID_319.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_319(1542625004);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_319);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319.insert(InstrumentPartySubIDType_319.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320;
        FIX::InstrumentPartySubID InstrumentPartySubID_320("STRING_1697794001");
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubID_320);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320.insert(InstrumentPartySubID_320.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_320(1188724399);
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubIDType_320);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320.insert(InstrumentPartySubIDType_320.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_161;
      FIX::SecurityAltID SecurityAltID_161("STRING_328207249");
      noSecurityAltID_2_1_0.set(SecurityAltID_161);
      SecAltIDGrp_NoSecurityAltID_161.insert(SecurityAltID_161.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_161("STRING_1208229578");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_161);
      SecAltIDGrp_NoSecurityAltID_161.insert(SecurityAltIDSource_161.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_161);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_162;
      FIX::SecurityAltID SecurityAltID_162("STRING_951545773");
      noSecurityAltID_2_1_1.set(SecurityAltID_162);
      SecAltIDGrp_NoSecurityAltID_162.insert(SecurityAltID_162.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_162("STRING_1177354258");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_162);
      SecAltIDGrp_NoSecurityAltID_162.insert(SecurityAltIDSource_162.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_162);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_144;
    FIX::SecurityXML SecurityXML_145("XMLDATA_1626599960");
    noRelatedSym_0_2.set(SecurityXML_145);
    FIX::SecurityXMLLen SecurityXMLLen_72(955436623);
    noRelatedSym_0_2.set(SecurityXMLLen_72);
    FIX::SecurityXMLSchema SecurityXMLSchema_72("STRING_579590227");
    noRelatedSym_0_2.set(SecurityXMLSchema_72);
    SecurityXML_144.insert(SecurityXMLSchema_72.getString());
    all_values.push_back(SecurityXML_144);

    // OrderQtyData
    multiset<string> OrderQtyData_20;
    FIX::CashOrderQty CashOrderQty_20;
    CashOrderQty_20.setString("9991847");
    noRelatedSym_0_2.set(CashOrderQty_20);
    OrderQtyData_20.insert(CashOrderQty_20.getString());
    FIX::OrderPercent OrderPercent_20;
    OrderPercent_20.setString("4.700000");
    noRelatedSym_0_2.set(OrderPercent_20);
    OrderQtyData_20.insert(OrderPercent_20.getString());
    FIX::OrderQty OrderQty_31;
    OrderQty_31.setString("2535599");
    noRelatedSym_0_2.set(OrderQty_31);
    OrderQtyData_20.insert(OrderQty_31.getString());
    FIX::RoundingDirection RoundingDirection_20('0');
    noRelatedSym_0_2.set(RoundingDirection_20);
    OrderQtyData_20.insert(RoundingDirection_20.getString());
    FIX::RoundingModulus RoundingModulus_20;
    RoundingModulus_20.setString("10745789");
    noRelatedSym_0_2.set(RoundingModulus_20);
    OrderQtyData_20.insert(RoundingModulus_20.getString());
    all_values.push_back(OrderQtyData_20);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_106;
      FIX::PartyID PartyID_106("STRING_1210383467");
      noPartyIDs_2_1_0.set(PartyID_106);
      Parties_NoPartyIDs_106.insert(PartyID_106.getString());
      FIX::PartyIDSource PartyIDSource_106('E');
      noPartyIDs_2_1_0.set(PartyIDSource_106);
      Parties_NoPartyIDs_106.insert(PartyIDSource_106.getString());
      FIX::PartyRole PartyRole_106(71);
      noPartyIDs_2_1_0.set(PartyRole_106);
      Parties_NoPartyIDs_106.insert(PartyRole_106.getString());
      all_values.push_back(Parties_NoPartyIDs_106);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_221;
        FIX::PartySubID PartySubID_221("STRING_226703192");
        noPartySubIDs_2_0_2_0.set(PartySubID_221);
        PtysSubGrp_NoPartySubIDs_221.insert(PartySubID_221.getString());
        FIX::PartySubIDType PartySubIDType_221(25);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_221);
        PtysSubGrp_NoPartySubIDs_221.insert(PartySubIDType_221.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_221);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_222;
        FIX::PartySubID PartySubID_222("STRING_212968617");
        noPartySubIDs_2_0_2_1.set(PartySubID_222);
        PtysSubGrp_NoPartySubIDs_222.insert(PartySubID_222.getString());
        FIX::PartySubIDType PartySubIDType_222(16);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_222);
        PtysSubGrp_NoPartySubIDs_222.insert(PartySubIDType_222.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_222);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_107;
      FIX::PartyID PartyID_107("STRING_805124315");
      noPartyIDs_2_1_1.set(PartyID_107);
      Parties_NoPartyIDs_107.insert(PartyID_107.getString());
      FIX::PartyIDSource PartyIDSource_107('3');
      noPartyIDs_2_1_1.set(PartyIDSource_107);
      Parties_NoPartyIDs_107.insert(PartyIDSource_107.getString());
      FIX::PartyRole PartyRole_107(80);
      noPartyIDs_2_1_1.set(PartyRole_107);
      Parties_NoPartyIDs_107.insert(PartyRole_107.getString());
      all_values.push_back(Parties_NoPartyIDs_107);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_223;
        FIX::PartySubID PartySubID_223("STRING_1316689085");
        noPartySubIDs_2_1_2_0.set(PartySubID_223);
        PtysSubGrp_NoPartySubIDs_223.insert(PartySubID_223.getString());
        FIX::PartySubIDType PartySubIDType_223(22);
        noPartySubIDs_2_1_2_0.set(PartySubIDType_223);
        PtysSubGrp_NoPartySubIDs_223.insert(PartySubIDType_223.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_223);

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_224;
        FIX::PartySubID PartySubID_224("STRING_1064418739");
        noPartySubIDs_2_1_2_1.set(PartySubID_224);
        PtysSubGrp_NoPartySubIDs_224.insert(PartySubID_224.getString());
        FIX::PartySubIDType PartySubIDType_224(9);
        noPartySubIDs_2_1_2_1.set(PartySubIDType_224);
        PtysSubGrp_NoPartySubIDs_224.insert(PartySubIDType_224.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_224);

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noPartyIDs_2_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_2_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_7;
      FIX::QuoteQualifier QuoteQualifier_7('6');
      noQuoteQualifiers_2_1_0.set(QuoteQualifier_7);
      QuotQualGrp_NoQuoteQualifiers_7.insert(QuoteQualifier_7.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_7);

      noRelatedSym_0_2.addGroup(noQuoteQualifiers_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_2_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_8;
      FIX::QuoteQualifier QuoteQualifier_8('1');
      noQuoteQualifiers_2_1_1.set(QuoteQualifier_8);
      QuotQualGrp_NoQuoteQualifiers_8.insert(QuoteQualifier_8.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_8);

      noRelatedSym_0_2.addGroup(noQuoteQualifiers_2_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_2_1_2;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_9;
      FIX::QuoteQualifier QuoteQualifier_9('1');
      noQuoteQualifiers_2_1_2.set(QuoteQualifier_9);
      QuotQualGrp_NoQuoteQualifiers_9.insert(QuoteQualifier_9.getString());
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_9);

      noRelatedSym_0_2.addGroup(noQuoteQualifiers_2_1_2);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_2_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_6;
      FIX::LegOrderQty LegOrderQty_17;
      LegOrderQty_17.setString("2250772");
      noLegs_2_1_0.set(LegOrderQty_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegOrderQty_17.getString());
      FIX::LegQty LegQty_17;
      LegQty_17.setString("8992589");
      noLegs_2_1_0.set(LegQty_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegQty_17.getString());
      FIX::LegRefID LegRefID_17("STRING_379287973");
      noLegs_2_1_0.set(LegRefID_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegRefID_17.getString());
      FIX::LegSettlDate LegSettlDate_17("LOCALMKTDATE_804667525");
      noLegs_2_1_0.set(LegSettlDate_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegSettlDate_17.getString());
      FIX::LegSettlType LegSettlType_17('1');
      noLegs_2_1_0.set(LegSettlType_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegSettlType_17.getString());
      FIX::LegSwapType LegSwapType_17(1);
      noLegs_2_1_0.set(LegSwapType_17);
      QuotReqLegsGrp_NoLegs_6.insert(LegSwapType_17.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_6);

      // InstrumentLeg
      multiset<string> InstrumentLeg_111;
      FIX::EncodedLegIssuer EncodedLegIssuer_111("DATA_1058227464");
      noLegs_2_1_0.set(EncodedLegIssuer_111);
      InstrumentLeg_111.insert(EncodedLegIssuer_111.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_111(405589851);
      noLegs_2_1_0.set(EncodedLegIssuerLen_111);
      InstrumentLeg_111.insert(EncodedLegIssuerLen_111.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_111("DATA_1136043707");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_111);
      InstrumentLeg_111.insert(EncodedLegSecurityDesc_111.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_111(1870419934);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_111);
      InstrumentLeg_111.insert(EncodedLegSecurityDescLen_111.getString());
      FIX::LegCFICode LegCFICode_111("STRING_1615973318");
      noLegs_2_1_0.set(LegCFICode_111);
      InstrumentLeg_111.insert(LegCFICode_111.getString());
      FIX::LegContractMultiplier LegContractMultiplier_111;
      LegContractMultiplier_111.setString("9742452");
      noLegs_2_1_0.set(LegContractMultiplier_111);
      InstrumentLeg_111.insert(LegContractMultiplier_111.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_111(187517675);
      noLegs_2_1_0.set(LegContractMultiplierUnit_111);
      InstrumentLeg_111.insert(LegContractMultiplierUnit_111.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_111("MONTHYEAR_842080337");
      noLegs_2_1_0.set(LegContractSettlMonth_111);
      InstrumentLeg_111.insert(LegContractSettlMonth_111.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_111("COUNTRY_1200948475");
      noLegs_2_1_0.set(LegCountryOfIssue_111);
      InstrumentLeg_111.insert(LegCountryOfIssue_111.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_111("LOCALMKTDATE_1589833724");
      noLegs_2_1_0.set(LegCouponPaymentDate_111);
      InstrumentLeg_111.insert(LegCouponPaymentDate_111.getString());
      FIX::LegCouponRate LegCouponRate_111;
      LegCouponRate_111.setString("89.540000");
      noLegs_2_1_0.set(LegCouponRate_111);
      InstrumentLeg_111.insert(LegCouponRate_111.getString());
      FIX::LegCreditRating LegCreditRating_111("STRING_514775264");
      noLegs_2_1_0.set(LegCreditRating_111);
      InstrumentLeg_111.insert(LegCreditRating_111.getString());
      FIX::LegCurrency LegCurrency_111("EUR");
      noLegs_2_1_0.set(LegCurrency_111);
      InstrumentLeg_111.insert(LegCurrency_111.getString());
      FIX::LegDatedDate LegDatedDate_111("LOCALMKTDATE_1894098938");
      noLegs_2_1_0.set(LegDatedDate_111);
      InstrumentLeg_111.insert(LegDatedDate_111.getString());
      FIX::LegExerciseStyle LegExerciseStyle_111(1916751774);
      noLegs_2_1_0.set(LegExerciseStyle_111);
      InstrumentLeg_111.insert(LegExerciseStyle_111.getString());
      FIX::LegFactor LegFactor_111;
      LegFactor_111.setString("20914255");
      noLegs_2_1_0.set(LegFactor_111);
      InstrumentLeg_111.insert(LegFactor_111.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_111(917287639);
      noLegs_2_1_0.set(LegFlowScheduleType_111);
      InstrumentLeg_111.insert(LegFlowScheduleType_111.getString());
      FIX::LegInstrRegistry LegInstrRegistry_111("STRING_833686865");
      noLegs_2_1_0.set(LegInstrRegistry_111);
      InstrumentLeg_111.insert(LegInstrRegistry_111.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_111("LOCALMKTDATE_810941310");
      noLegs_2_1_0.set(LegInterestAccrualDate_111);
      InstrumentLeg_111.insert(LegInterestAccrualDate_111.getString());
      FIX::LegIssueDate LegIssueDate_111("LOCALMKTDATE_1129200738");
      noLegs_2_1_0.set(LegIssueDate_111);
      InstrumentLeg_111.insert(LegIssueDate_111.getString());
      FIX::LegIssuer LegIssuer_111("STRING_1453476090");
      noLegs_2_1_0.set(LegIssuer_111);
      InstrumentLeg_111.insert(LegIssuer_111.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_111("STRING_2006147997");
      noLegs_2_1_0.set(LegLocaleOfIssue_111);
      InstrumentLeg_111.insert(LegLocaleOfIssue_111.getString());
      FIX::LegMaturityDate LegMaturityDate_111("LOCALMKTDATE_401859768");
      noLegs_2_1_0.set(LegMaturityDate_111);
      InstrumentLeg_111.insert(LegMaturityDate_111.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_111("MONTHYEAR_877327440");
      noLegs_2_1_0.set(LegMaturityMonthYear_111);
      InstrumentLeg_111.insert(LegMaturityMonthYear_111.getString());
      FIX::LegMaturityTime LegMaturityTime_111("TZTIMEONLY_83741646");
      noLegs_2_1_0.set(LegMaturityTime_111);
      InstrumentLeg_111.insert(LegMaturityTime_111.getString());
      FIX::LegOptAttribute LegOptAttribute_111('1');
      noLegs_2_1_0.set(LegOptAttribute_111);
      InstrumentLeg_111.insert(LegOptAttribute_111.getString());
      FIX::LegOptionRatio LegOptionRatio_111;
      LegOptionRatio_111.setString("12566154");
      noLegs_2_1_0.set(LegOptionRatio_111);
      InstrumentLeg_111.insert(LegOptionRatio_111.getString());
      FIX::LegPool LegPool_111("STRING_888409171");
      noLegs_2_1_0.set(LegPool_111);
      InstrumentLeg_111.insert(LegPool_111.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_111("STRING_1052078852");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_111);
      InstrumentLeg_111.insert(LegPriceUnitOfMeasure_111.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_111;
      LegPriceUnitOfMeasureQty_111.setString("13180802");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_111);
      InstrumentLeg_111.insert(LegPriceUnitOfMeasureQty_111.getString());
      FIX::LegProduct LegProduct_111(1946636635);
      noLegs_2_1_0.set(LegProduct_111);
      InstrumentLeg_111.insert(LegProduct_111.getString());
      FIX::LegPutOrCall LegPutOrCall_111(1457668703);
      noLegs_2_1_0.set(LegPutOrCall_111);
      InstrumentLeg_111.insert(LegPutOrCall_111.getString());
      FIX::LegRatioQty LegRatioQty_111;
      LegRatioQty_111.setString("3066402");
      noLegs_2_1_0.set(LegRatioQty_111);
      InstrumentLeg_111.insert(LegRatioQty_111.getString());
      FIX::LegRedemptionDate LegRedemptionDate_111("LOCALMKTDATE_1669572921");
      noLegs_2_1_0.set(LegRedemptionDate_111);
      InstrumentLeg_111.insert(LegRedemptionDate_111.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_111("STRING_926158374");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_111);
      InstrumentLeg_111.insert(LegRepoCollateralSecurityType_111.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_111;
      LegRepurchaseRate_111.setString("55.510000");
      noLegs_2_1_0.set(LegRepurchaseRate_111);
      InstrumentLeg_111.insert(LegRepurchaseRate_111.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_111(1857090596);
      noLegs_2_1_0.set(LegRepurchaseTerm_111);
      InstrumentLeg_111.insert(LegRepurchaseTerm_111.getString());
      FIX::LegSecurityDesc LegSecurityDesc_111("STRING_1768238711");
      noLegs_2_1_0.set(LegSecurityDesc_111);
      InstrumentLeg_111.insert(LegSecurityDesc_111.getString());
      FIX::LegSecurityExchange LegSecurityExchange_111("EXCHANGE_334350379");
      noLegs_2_1_0.set(LegSecurityExchange_111);
      InstrumentLeg_111.insert(LegSecurityExchange_111.getString());
      FIX::LegSecurityID LegSecurityID_111("STRING_1299440672");
      noLegs_2_1_0.set(LegSecurityID_111);
      InstrumentLeg_111.insert(LegSecurityID_111.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_111("STRING_675804017");
      noLegs_2_1_0.set(LegSecurityIDSource_111);
      InstrumentLeg_111.insert(LegSecurityIDSource_111.getString());
      FIX::LegSecuritySubType LegSecuritySubType_111("STRING_849125643");
      noLegs_2_1_0.set(LegSecuritySubType_111);
      InstrumentLeg_111.insert(LegSecuritySubType_111.getString());
      FIX::LegSecurityType LegSecurityType_111("STRING_1546915064");
      noLegs_2_1_0.set(LegSecurityType_111);
      InstrumentLeg_111.insert(LegSecurityType_111.getString());
      FIX::LegSide LegSide_111('1');
      noLegs_2_1_0.set(LegSide_111);
      InstrumentLeg_111.insert(LegSide_111.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_111("STRING_595740934");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_111);
      InstrumentLeg_111.insert(LegStateOrProvinceOfIssue_111.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_111("JPY");
      noLegs_2_1_0.set(LegStrikeCurrency_111);
      InstrumentLeg_111.insert(LegStrikeCurrency_111.getString());
      FIX::LegStrikePrice LegStrikePrice_111;
      LegStrikePrice_111.setString("15130285");
      noLegs_2_1_0.set(LegStrikePrice_111);
      InstrumentLeg_111.insert(LegStrikePrice_111.getString());
      FIX::LegSymbol LegSymbol_111("STRING_2386408");
      noLegs_2_1_0.set(LegSymbol_111);
      InstrumentLeg_111.insert(LegSymbol_111.getString());
      FIX::LegSymbolSfx LegSymbolSfx_111("STRING_57939986");
      noLegs_2_1_0.set(LegSymbolSfx_111);
      InstrumentLeg_111.insert(LegSymbolSfx_111.getString());
      FIX::LegTimeUnit LegTimeUnit_111("STRING_494745663");
      noLegs_2_1_0.set(LegTimeUnit_111);
      InstrumentLeg_111.insert(LegTimeUnit_111.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_111("STRING_1455862498");
      noLegs_2_1_0.set(LegUnitOfMeasure_111);
      InstrumentLeg_111.insert(LegUnitOfMeasure_111.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_111;
      LegUnitOfMeasureQty_111.setString("20640879");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_111);
      InstrumentLeg_111.insert(LegUnitOfMeasureQty_111.getString());
      all_values.push_back(InstrumentLeg_111);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_215;
        FIX::LegSecurityAltID LegSecurityAltID_215("STRING_185706290");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_215);
        LegSecAltIDGrp_NoLegSecurityAltID_215.insert(LegSecurityAltID_215.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_215("STRING_345981");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_215);
        LegSecAltIDGrp_NoLegSecurityAltID_215.insert(LegSecurityAltIDSource_215.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_215);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_216;
        FIX::LegSecurityAltID LegSecurityAltID_216("STRING_50240543");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltID_216);
        LegSecAltIDGrp_NoLegSecurityAltID_216.insert(LegSecurityAltID_216.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_216("STRING_1442321703");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltIDSource_216);
        LegSecAltIDGrp_NoLegSecurityAltID_216.insert(LegSecurityAltIDSource_216.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_216);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_8;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_8("EUR");
      noLegs_2_1_0.set(LegBenchmarkCurveCurrency_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurveCurrency_8.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_8("STRING_612918265");
      noLegs_2_1_0.set(LegBenchmarkCurveName_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurveName_8.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_8("STRING_687908140");
      noLegs_2_1_0.set(LegBenchmarkCurvePoint_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkCurvePoint_8.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_8;
      LegBenchmarkPrice_8.setString("4125044");
      noLegs_2_1_0.set(LegBenchmarkPrice_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkPrice_8.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_8(919558533);
      noLegs_2_1_0.set(LegBenchmarkPriceType_8);
      LegBenchmarkCurveData_8.insert(LegBenchmarkPriceType_8.getString());
      all_values.push_back(LegBenchmarkCurveData_8);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_41;
        FIX::LegStipulationType LegStipulationType_41("STRING_1338662825");
        noLegStipulations_2_0_2_0.set(LegStipulationType_41);
        LegStipulations_NoLegStipulations_41.insert(LegStipulationType_41.getString());
        FIX::LegStipulationValue LegStipulationValue_41("STRING_52960437");
        noLegStipulations_2_0_2_0.set(LegStipulationValue_41);
        LegStipulations_NoLegStipulations_41.insert(LegStipulationValue_41.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_41);

        noLegs_2_1_0.addGroup(noLegStipulations_2_0_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_107;
        FIX::NestedPartyID NestedPartyID_107("STRING_959417888");
        noNestedPartyIDs_2_0_2_0.set(NestedPartyID_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyID_107.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_107('3');
        noNestedPartyIDs_2_0_2_0.set(NestedPartyIDSource_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyIDSource_107.getString());
        FIX::NestedPartyRole NestedPartyRole_107(1219045035);
        noNestedPartyIDs_2_0_2_0.set(NestedPartyRole_107);
        NestedParties_NoNestedPartyIDs_107.insert(NestedPartyRole_107.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_107);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_208;
          FIX::NestedPartySubID NestedPartySubID_208("STRING_1236436459");
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubID_208);
          NstdPtysSubGrp_NoNestedPartySubIDs_208.insert(NestedPartySubID_208.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_208(618476451);
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubIDType_208);
          NstdPtysSubGrp_NoNestedPartySubIDs_208.insert(NestedPartySubIDType_208.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_208);

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_209;
          FIX::NestedPartySubID NestedPartySubID_209("STRING_938278709");
          noNestedPartySubIDs_2_0_0_3_1.set(NestedPartySubID_209);
          NstdPtysSubGrp_NoNestedPartySubIDs_209.insert(NestedPartySubID_209.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_209(1832177393);
          noNestedPartySubIDs_2_0_0_3_1.set(NestedPartySubIDType_209);
          NstdPtysSubGrp_NoNestedPartySubIDs_209.insert(NestedPartySubIDType_209.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_209);

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_1);
        }
        noLegs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_108;
        FIX::NestedPartyID NestedPartyID_108("STRING_1934659641");
        noNestedPartyIDs_2_0_2_1.set(NestedPartyID_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyID_108.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_108('1');
        noNestedPartyIDs_2_0_2_1.set(NestedPartyIDSource_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyIDSource_108.getString());
        FIX::NestedPartyRole NestedPartyRole_108(1197722318);
        noNestedPartyIDs_2_0_2_1.set(NestedPartyRole_108);
        NestedParties_NoNestedPartyIDs_108.insert(NestedPartyRole_108.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_108);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_210;
          FIX::NestedPartySubID NestedPartySubID_210("STRING_243217371");
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubID_210);
          NstdPtysSubGrp_NoNestedPartySubIDs_210.insert(NestedPartySubID_210.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_210(1692467982);
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubIDType_210);
          NstdPtysSubGrp_NoNestedPartySubIDs_210.insert(NestedPartySubIDType_210.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_210);

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_211;
          FIX::NestedPartySubID NestedPartySubID_211("STRING_1245424899");
          noNestedPartySubIDs_2_0_1_3_1.set(NestedPartySubID_211);
          NstdPtysSubGrp_NoNestedPartySubIDs_211.insert(NestedPartySubID_211.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_211(159821706);
          noNestedPartySubIDs_2_0_1_3_1.set(NestedPartySubIDType_211);
          NstdPtysSubGrp_NoNestedPartySubIDs_211.insert(NestedPartySubIDType_211.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_211);

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_1);
        }
        noLegs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_109;
        FIX::NestedPartyID NestedPartyID_109("STRING_441589766");
        noNestedPartyIDs_2_0_2_2.set(NestedPartyID_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyID_109.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_109('1');
        noNestedPartyIDs_2_0_2_2.set(NestedPartyIDSource_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyIDSource_109.getString());
        FIX::NestedPartyRole NestedPartyRole_109(160167687);
        noNestedPartyIDs_2_0_2_2.set(NestedPartyRole_109);
        NestedParties_NoNestedPartyIDs_109.insert(NestedPartyRole_109.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_109);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_212;
          FIX::NestedPartySubID NestedPartySubID_212("STRING_725969245");
          noNestedPartySubIDs_2_0_2_3_0.set(NestedPartySubID_212);
          NstdPtysSubGrp_NoNestedPartySubIDs_212.insert(NestedPartySubID_212.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_212(1048922840);
          noNestedPartySubIDs_2_0_2_3_0.set(NestedPartySubIDType_212);
          NstdPtysSubGrp_NoNestedPartySubIDs_212.insert(NestedPartySubIDType_212.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_212);

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_213;
          FIX::NestedPartySubID NestedPartySubID_213("STRING_1594149704");
          noNestedPartySubIDs_2_0_2_3_1.set(NestedPartySubID_213);
          NstdPtysSubGrp_NoNestedPartySubIDs_213.insert(NestedPartySubID_213.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_213(1338887510);
          noNestedPartySubIDs_2_0_2_3_1.set(NestedPartySubIDType_213);
          NstdPtysSubGrp_NoNestedPartySubIDs_213.insert(NestedPartySubIDType_213.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_213);

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_1);
        }
        noLegs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_2_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_7;
      FIX::LegOrderQty LegOrderQty_18;
      LegOrderQty_18.setString("17368309");
      noLegs_2_1_1.set(LegOrderQty_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegOrderQty_18.getString());
      FIX::LegQty LegQty_18;
      LegQty_18.setString("20066541");
      noLegs_2_1_1.set(LegQty_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegQty_18.getString());
      FIX::LegRefID LegRefID_18("STRING_110962395");
      noLegs_2_1_1.set(LegRefID_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegRefID_18.getString());
      FIX::LegSettlDate LegSettlDate_18("LOCALMKTDATE_1946828395");
      noLegs_2_1_1.set(LegSettlDate_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegSettlDate_18.getString());
      FIX::LegSettlType LegSettlType_18('1');
      noLegs_2_1_1.set(LegSettlType_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegSettlType_18.getString());
      FIX::LegSwapType LegSwapType_18(1);
      noLegs_2_1_1.set(LegSwapType_18);
      QuotReqLegsGrp_NoLegs_7.insert(LegSwapType_18.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_7);

      // InstrumentLeg
      multiset<string> InstrumentLeg_112;
      FIX::EncodedLegIssuer EncodedLegIssuer_112("DATA_1866432757");
      noLegs_2_1_1.set(EncodedLegIssuer_112);
      InstrumentLeg_112.insert(EncodedLegIssuer_112.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_112(9767572);
      noLegs_2_1_1.set(EncodedLegIssuerLen_112);
      InstrumentLeg_112.insert(EncodedLegIssuerLen_112.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_112("DATA_551233648");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_112);
      InstrumentLeg_112.insert(EncodedLegSecurityDesc_112.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_112(937994144);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_112);
      InstrumentLeg_112.insert(EncodedLegSecurityDescLen_112.getString());
      FIX::LegCFICode LegCFICode_112("STRING_1644989477");
      noLegs_2_1_1.set(LegCFICode_112);
      InstrumentLeg_112.insert(LegCFICode_112.getString());
      FIX::LegContractMultiplier LegContractMultiplier_112;
      LegContractMultiplier_112.setString("17876701");
      noLegs_2_1_1.set(LegContractMultiplier_112);
      InstrumentLeg_112.insert(LegContractMultiplier_112.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_112(1556470595);
      noLegs_2_1_1.set(LegContractMultiplierUnit_112);
      InstrumentLeg_112.insert(LegContractMultiplierUnit_112.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_112("MONTHYEAR_435784538");
      noLegs_2_1_1.set(LegContractSettlMonth_112);
      InstrumentLeg_112.insert(LegContractSettlMonth_112.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_112("COUNTRY_1472363853");
      noLegs_2_1_1.set(LegCountryOfIssue_112);
      InstrumentLeg_112.insert(LegCountryOfIssue_112.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_112("LOCALMKTDATE_1343646589");
      noLegs_2_1_1.set(LegCouponPaymentDate_112);
      InstrumentLeg_112.insert(LegCouponPaymentDate_112.getString());
      FIX::LegCouponRate LegCouponRate_112;
      LegCouponRate_112.setString("19.230000");
      noLegs_2_1_1.set(LegCouponRate_112);
      InstrumentLeg_112.insert(LegCouponRate_112.getString());
      FIX::LegCreditRating LegCreditRating_112("STRING_522602524");
      noLegs_2_1_1.set(LegCreditRating_112);
      InstrumentLeg_112.insert(LegCreditRating_112.getString());
      FIX::LegCurrency LegCurrency_112("USD");
      noLegs_2_1_1.set(LegCurrency_112);
      InstrumentLeg_112.insert(LegCurrency_112.getString());
      FIX::LegDatedDate LegDatedDate_112("LOCALMKTDATE_67586858");
      noLegs_2_1_1.set(LegDatedDate_112);
      InstrumentLeg_112.insert(LegDatedDate_112.getString());
      FIX::LegExerciseStyle LegExerciseStyle_112(231150242);
      noLegs_2_1_1.set(LegExerciseStyle_112);
      InstrumentLeg_112.insert(LegExerciseStyle_112.getString());
      FIX::LegFactor LegFactor_112;
      LegFactor_112.setString("10241010");
      noLegs_2_1_1.set(LegFactor_112);
      InstrumentLeg_112.insert(LegFactor_112.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_112(509176624);
      noLegs_2_1_1.set(LegFlowScheduleType_112);
      InstrumentLeg_112.insert(LegFlowScheduleType_112.getString());
      FIX::LegInstrRegistry LegInstrRegistry_112("STRING_1662281431");
      noLegs_2_1_1.set(LegInstrRegistry_112);
      InstrumentLeg_112.insert(LegInstrRegistry_112.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_112("LOCALMKTDATE_1184268688");
      noLegs_2_1_1.set(LegInterestAccrualDate_112);
      InstrumentLeg_112.insert(LegInterestAccrualDate_112.getString());
      FIX::LegIssueDate LegIssueDate_112("LOCALMKTDATE_1001006933");
      noLegs_2_1_1.set(LegIssueDate_112);
      InstrumentLeg_112.insert(LegIssueDate_112.getString());
      FIX::LegIssuer LegIssuer_112("STRING_240767028");
      noLegs_2_1_1.set(LegIssuer_112);
      InstrumentLeg_112.insert(LegIssuer_112.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_112("STRING_85707880");
      noLegs_2_1_1.set(LegLocaleOfIssue_112);
      InstrumentLeg_112.insert(LegLocaleOfIssue_112.getString());
      FIX::LegMaturityDate LegMaturityDate_112("LOCALMKTDATE_447672989");
      noLegs_2_1_1.set(LegMaturityDate_112);
      InstrumentLeg_112.insert(LegMaturityDate_112.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_112("MONTHYEAR_1579654538");
      noLegs_2_1_1.set(LegMaturityMonthYear_112);
      InstrumentLeg_112.insert(LegMaturityMonthYear_112.getString());
      FIX::LegMaturityTime LegMaturityTime_112("TZTIMEONLY_1822538861");
      noLegs_2_1_1.set(LegMaturityTime_112);
      InstrumentLeg_112.insert(LegMaturityTime_112.getString());
      FIX::LegOptAttribute LegOptAttribute_112('3');
      noLegs_2_1_1.set(LegOptAttribute_112);
      InstrumentLeg_112.insert(LegOptAttribute_112.getString());
      FIX::LegOptionRatio LegOptionRatio_112;
      LegOptionRatio_112.setString("16906169");
      noLegs_2_1_1.set(LegOptionRatio_112);
      InstrumentLeg_112.insert(LegOptionRatio_112.getString());
      FIX::LegPool LegPool_112("STRING_1621883608");
      noLegs_2_1_1.set(LegPool_112);
      InstrumentLeg_112.insert(LegPool_112.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_112("STRING_1504676829");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_112);
      InstrumentLeg_112.insert(LegPriceUnitOfMeasure_112.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_112;
      LegPriceUnitOfMeasureQty_112.setString("18545397");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_112);
      InstrumentLeg_112.insert(LegPriceUnitOfMeasureQty_112.getString());
      FIX::LegProduct LegProduct_112(1340832718);
      noLegs_2_1_1.set(LegProduct_112);
      InstrumentLeg_112.insert(LegProduct_112.getString());
      FIX::LegPutOrCall LegPutOrCall_112(1514444402);
      noLegs_2_1_1.set(LegPutOrCall_112);
      InstrumentLeg_112.insert(LegPutOrCall_112.getString());
      FIX::LegRatioQty LegRatioQty_112;
      LegRatioQty_112.setString("2582897");
      noLegs_2_1_1.set(LegRatioQty_112);
      InstrumentLeg_112.insert(LegRatioQty_112.getString());
      FIX::LegRedemptionDate LegRedemptionDate_112("LOCALMKTDATE_131343214");
      noLegs_2_1_1.set(LegRedemptionDate_112);
      InstrumentLeg_112.insert(LegRedemptionDate_112.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_112("STRING_1011950231");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_112);
      InstrumentLeg_112.insert(LegRepoCollateralSecurityType_112.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_112;
      LegRepurchaseRate_112.setString("98.750000");
      noLegs_2_1_1.set(LegRepurchaseRate_112);
      InstrumentLeg_112.insert(LegRepurchaseRate_112.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_112(1687813810);
      noLegs_2_1_1.set(LegRepurchaseTerm_112);
      InstrumentLeg_112.insert(LegRepurchaseTerm_112.getString());
      FIX::LegSecurityDesc LegSecurityDesc_112("STRING_1447734770");
      noLegs_2_1_1.set(LegSecurityDesc_112);
      InstrumentLeg_112.insert(LegSecurityDesc_112.getString());
      FIX::LegSecurityExchange LegSecurityExchange_112("EXCHANGE_1370840080");
      noLegs_2_1_1.set(LegSecurityExchange_112);
      InstrumentLeg_112.insert(LegSecurityExchange_112.getString());
      FIX::LegSecurityID LegSecurityID_112("STRING_883976751");
      noLegs_2_1_1.set(LegSecurityID_112);
      InstrumentLeg_112.insert(LegSecurityID_112.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_112("STRING_2068796693");
      noLegs_2_1_1.set(LegSecurityIDSource_112);
      InstrumentLeg_112.insert(LegSecurityIDSource_112.getString());
      FIX::LegSecuritySubType LegSecuritySubType_112("STRING_1893442604");
      noLegs_2_1_1.set(LegSecuritySubType_112);
      InstrumentLeg_112.insert(LegSecuritySubType_112.getString());
      FIX::LegSecurityType LegSecurityType_112("STRING_2017185741");
      noLegs_2_1_1.set(LegSecurityType_112);
      InstrumentLeg_112.insert(LegSecurityType_112.getString());
      FIX::LegSide LegSide_112('7');
      noLegs_2_1_1.set(LegSide_112);
      InstrumentLeg_112.insert(LegSide_112.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_112("STRING_1961029462");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_112);
      InstrumentLeg_112.insert(LegStateOrProvinceOfIssue_112.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_112("JPY");
      noLegs_2_1_1.set(LegStrikeCurrency_112);
      InstrumentLeg_112.insert(LegStrikeCurrency_112.getString());
      FIX::LegStrikePrice LegStrikePrice_112;
      LegStrikePrice_112.setString("3227224");
      noLegs_2_1_1.set(LegStrikePrice_112);
      InstrumentLeg_112.insert(LegStrikePrice_112.getString());
      FIX::LegSymbol LegSymbol_112("STRING_1763133767");
      noLegs_2_1_1.set(LegSymbol_112);
      InstrumentLeg_112.insert(LegSymbol_112.getString());
      FIX::LegSymbolSfx LegSymbolSfx_112("STRING_846478380");
      noLegs_2_1_1.set(LegSymbolSfx_112);
      InstrumentLeg_112.insert(LegSymbolSfx_112.getString());
      FIX::LegTimeUnit LegTimeUnit_112("STRING_1323729371");
      noLegs_2_1_1.set(LegTimeUnit_112);
      InstrumentLeg_112.insert(LegTimeUnit_112.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_112("STRING_2003900795");
      noLegs_2_1_1.set(LegUnitOfMeasure_112);
      InstrumentLeg_112.insert(LegUnitOfMeasure_112.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_112;
      LegUnitOfMeasureQty_112.setString("9321862");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_112);
      InstrumentLeg_112.insert(LegUnitOfMeasureQty_112.getString());
      all_values.push_back(InstrumentLeg_112);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_217;
        FIX::LegSecurityAltID LegSecurityAltID_217("STRING_1436071686");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_217);
        LegSecAltIDGrp_NoLegSecurityAltID_217.insert(LegSecurityAltID_217.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_217("STRING_607241474");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_217);
        LegSecAltIDGrp_NoLegSecurityAltID_217.insert(LegSecurityAltIDSource_217.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_217);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_218;
        FIX::LegSecurityAltID LegSecurityAltID_218("STRING_2078245858");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltID_218);
        LegSecAltIDGrp_NoLegSecurityAltID_218.insert(LegSecurityAltID_218.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_218("STRING_979204972");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltIDSource_218);
        LegSecAltIDGrp_NoLegSecurityAltID_218.insert(LegSecurityAltIDSource_218.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_218);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_219;
        FIX::LegSecurityAltID LegSecurityAltID_219("STRING_81641435");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltID_219);
        LegSecAltIDGrp_NoLegSecurityAltID_219.insert(LegSecurityAltID_219.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_219("STRING_1435439039");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltIDSource_219);
        LegSecAltIDGrp_NoLegSecurityAltID_219.insert(LegSecurityAltIDSource_219.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_219);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_9;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_9("CHF");
      noLegs_2_1_1.set(LegBenchmarkCurveCurrency_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurveCurrency_9.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_9("STRING_802399793");
      noLegs_2_1_1.set(LegBenchmarkCurveName_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurveName_9.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_9("STRING_944550857");
      noLegs_2_1_1.set(LegBenchmarkCurvePoint_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkCurvePoint_9.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_9;
      LegBenchmarkPrice_9.setString("15538173");
      noLegs_2_1_1.set(LegBenchmarkPrice_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkPrice_9.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_9(1814350025);
      noLegs_2_1_1.set(LegBenchmarkPriceType_9);
      LegBenchmarkCurveData_9.insert(LegBenchmarkPriceType_9.getString());
      all_values.push_back(LegBenchmarkCurveData_9);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_42;
        FIX::LegStipulationType LegStipulationType_42("STRING_1094147529");
        noLegStipulations_2_1_2_0.set(LegStipulationType_42);
        LegStipulations_NoLegStipulations_42.insert(LegStipulationType_42.getString());
        FIX::LegStipulationValue LegStipulationValue_42("STRING_1114601147");
        noLegStipulations_2_1_2_0.set(LegStipulationValue_42);
        LegStipulations_NoLegStipulations_42.insert(LegStipulationValue_42.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_42);

        noLegs_2_1_1.addGroup(noLegStipulations_2_1_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_110;
        FIX::NestedPartyID NestedPartyID_110("STRING_1978124280");
        noNestedPartyIDs_2_1_2_0.set(NestedPartyID_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyID_110.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_110('1');
        noNestedPartyIDs_2_1_2_0.set(NestedPartyIDSource_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyIDSource_110.getString());
        FIX::NestedPartyRole NestedPartyRole_110(1959826121);
        noNestedPartyIDs_2_1_2_0.set(NestedPartyRole_110);
        NestedParties_NoNestedPartyIDs_110.insert(NestedPartyRole_110.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_110);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_214;
          FIX::NestedPartySubID NestedPartySubID_214("STRING_1821506532");
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubID_214);
          NstdPtysSubGrp_NoNestedPartySubIDs_214.insert(NestedPartySubID_214.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_214(1773371936);
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubIDType_214);
          NstdPtysSubGrp_NoNestedPartySubIDs_214.insert(NestedPartySubIDType_214.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_214);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_215;
          FIX::NestedPartySubID NestedPartySubID_215("STRING_1948678709");
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubID_215);
          NstdPtysSubGrp_NoNestedPartySubIDs_215.insert(NestedPartySubID_215.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_215(1483716225);
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubIDType_215);
          NstdPtysSubGrp_NoNestedPartySubIDs_215.insert(NestedPartySubIDType_215.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_215);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_216;
          FIX::NestedPartySubID NestedPartySubID_216("STRING_2096094374");
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubID_216);
          NstdPtysSubGrp_NoNestedPartySubIDs_216.insert(NestedPartySubID_216.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_216(1564328828);
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubIDType_216);
          NstdPtysSubGrp_NoNestedPartySubIDs_216.insert(NestedPartySubIDType_216.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_216);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_2);
        }
        noLegs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_2_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_8;
      FIX::LegOrderQty LegOrderQty_19;
      LegOrderQty_19.setString("1827109");
      noLegs_2_1_2.set(LegOrderQty_19);
      QuotReqLegsGrp_NoLegs_8.insert(LegOrderQty_19.getString());
      FIX::LegQty LegQty_19;
      LegQty_19.setString("12723400");
      noLegs_2_1_2.set(LegQty_19);
      QuotReqLegsGrp_NoLegs_8.insert(LegQty_19.getString());
      FIX::LegRefID LegRefID_19("STRING_1420745976");
      noLegs_2_1_2.set(LegRefID_19);
      QuotReqLegsGrp_NoLegs_8.insert(LegRefID_19.getString());
      FIX::LegSettlDate LegSettlDate_19("LOCALMKTDATE_1114897218");
      noLegs_2_1_2.set(LegSettlDate_19);
      QuotReqLegsGrp_NoLegs_8.insert(LegSettlDate_19.getString());
      FIX::LegSettlType LegSettlType_19('8');
      noLegs_2_1_2.set(LegSettlType_19);
      QuotReqLegsGrp_NoLegs_8.insert(LegSettlType_19.getString());
      FIX::LegSwapType LegSwapType_19(4);
      noLegs_2_1_2.set(LegSwapType_19);
      QuotReqLegsGrp_NoLegs_8.insert(LegSwapType_19.getString());
      all_values.push_back(QuotReqLegsGrp_NoLegs_8);

      // InstrumentLeg
      multiset<string> InstrumentLeg_113;
      FIX::EncodedLegIssuer EncodedLegIssuer_113("DATA_1722138693");
      noLegs_2_1_2.set(EncodedLegIssuer_113);
      InstrumentLeg_113.insert(EncodedLegIssuer_113.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_113(827021021);
      noLegs_2_1_2.set(EncodedLegIssuerLen_113);
      InstrumentLeg_113.insert(EncodedLegIssuerLen_113.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_113("DATA_1688538986");
      noLegs_2_1_2.set(EncodedLegSecurityDesc_113);
      InstrumentLeg_113.insert(EncodedLegSecurityDesc_113.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_113(1803780128);
      noLegs_2_1_2.set(EncodedLegSecurityDescLen_113);
      InstrumentLeg_113.insert(EncodedLegSecurityDescLen_113.getString());
      FIX::LegCFICode LegCFICode_113("STRING_114976412");
      noLegs_2_1_2.set(LegCFICode_113);
      InstrumentLeg_113.insert(LegCFICode_113.getString());
      FIX::LegContractMultiplier LegContractMultiplier_113;
      LegContractMultiplier_113.setString("2273164");
      noLegs_2_1_2.set(LegContractMultiplier_113);
      InstrumentLeg_113.insert(LegContractMultiplier_113.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_113(1078770633);
      noLegs_2_1_2.set(LegContractMultiplierUnit_113);
      InstrumentLeg_113.insert(LegContractMultiplierUnit_113.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_113("MONTHYEAR_917376206");
      noLegs_2_1_2.set(LegContractSettlMonth_113);
      InstrumentLeg_113.insert(LegContractSettlMonth_113.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_113("COUNTRY_1171867286");
      noLegs_2_1_2.set(LegCountryOfIssue_113);
      InstrumentLeg_113.insert(LegCountryOfIssue_113.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_113("LOCALMKTDATE_485104352");
      noLegs_2_1_2.set(LegCouponPaymentDate_113);
      InstrumentLeg_113.insert(LegCouponPaymentDate_113.getString());
      FIX::LegCouponRate LegCouponRate_113;
      LegCouponRate_113.setString("25.830000");
      noLegs_2_1_2.set(LegCouponRate_113);
      InstrumentLeg_113.insert(LegCouponRate_113.getString());
      FIX::LegCreditRating LegCreditRating_113("STRING_2014894370");
      noLegs_2_1_2.set(LegCreditRating_113);
      InstrumentLeg_113.insert(LegCreditRating_113.getString());
      FIX::LegCurrency LegCurrency_113("JPY");
      noLegs_2_1_2.set(LegCurrency_113);
      InstrumentLeg_113.insert(LegCurrency_113.getString());
      FIX::LegDatedDate LegDatedDate_113("LOCALMKTDATE_2081277887");
      noLegs_2_1_2.set(LegDatedDate_113);
      InstrumentLeg_113.insert(LegDatedDate_113.getString());
      FIX::LegExerciseStyle LegExerciseStyle_113(1409892514);
      noLegs_2_1_2.set(LegExerciseStyle_113);
      InstrumentLeg_113.insert(LegExerciseStyle_113.getString());
      FIX::LegFactor LegFactor_113;
      LegFactor_113.setString("5872742");
      noLegs_2_1_2.set(LegFactor_113);
      InstrumentLeg_113.insert(LegFactor_113.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_113(1893620361);
      noLegs_2_1_2.set(LegFlowScheduleType_113);
      InstrumentLeg_113.insert(LegFlowScheduleType_113.getString());
      FIX::LegInstrRegistry LegInstrRegistry_113("STRING_1110235240");
      noLegs_2_1_2.set(LegInstrRegistry_113);
      InstrumentLeg_113.insert(LegInstrRegistry_113.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_113("LOCALMKTDATE_261297159");
      noLegs_2_1_2.set(LegInterestAccrualDate_113);
      InstrumentLeg_113.insert(LegInterestAccrualDate_113.getString());
      FIX::LegIssueDate LegIssueDate_113("LOCALMKTDATE_1519508649");
      noLegs_2_1_2.set(LegIssueDate_113);
      InstrumentLeg_113.insert(LegIssueDate_113.getString());
      FIX::LegIssuer LegIssuer_113("STRING_911430302");
      noLegs_2_1_2.set(LegIssuer_113);
      InstrumentLeg_113.insert(LegIssuer_113.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_113("STRING_1745013384");
      noLegs_2_1_2.set(LegLocaleOfIssue_113);
      InstrumentLeg_113.insert(LegLocaleOfIssue_113.getString());
      FIX::LegMaturityDate LegMaturityDate_113("LOCALMKTDATE_1468119375");
      noLegs_2_1_2.set(LegMaturityDate_113);
      InstrumentLeg_113.insert(LegMaturityDate_113.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_113("MONTHYEAR_328275482");
      noLegs_2_1_2.set(LegMaturityMonthYear_113);
      InstrumentLeg_113.insert(LegMaturityMonthYear_113.getString());
      FIX::LegMaturityTime LegMaturityTime_113("TZTIMEONLY_1927724341");
      noLegs_2_1_2.set(LegMaturityTime_113);
      InstrumentLeg_113.insert(LegMaturityTime_113.getString());
      FIX::LegOptAttribute LegOptAttribute_113('5');
      noLegs_2_1_2.set(LegOptAttribute_113);
      InstrumentLeg_113.insert(LegOptAttribute_113.getString());
      FIX::LegOptionRatio LegOptionRatio_113;
      LegOptionRatio_113.setString("17490214");
      noLegs_2_1_2.set(LegOptionRatio_113);
      InstrumentLeg_113.insert(LegOptionRatio_113.getString());
      FIX::LegPool LegPool_113("STRING_895137912");
      noLegs_2_1_2.set(LegPool_113);
      InstrumentLeg_113.insert(LegPool_113.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_113("STRING_1489234636");
      noLegs_2_1_2.set(LegPriceUnitOfMeasure_113);
      InstrumentLeg_113.insert(LegPriceUnitOfMeasure_113.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_113;
      LegPriceUnitOfMeasureQty_113.setString("3108718");
      noLegs_2_1_2.set(LegPriceUnitOfMeasureQty_113);
      InstrumentLeg_113.insert(LegPriceUnitOfMeasureQty_113.getString());
      FIX::LegProduct LegProduct_113(469792957);
      noLegs_2_1_2.set(LegProduct_113);
      InstrumentLeg_113.insert(LegProduct_113.getString());
      FIX::LegPutOrCall LegPutOrCall_113(168772009);
      noLegs_2_1_2.set(LegPutOrCall_113);
      InstrumentLeg_113.insert(LegPutOrCall_113.getString());
      FIX::LegRatioQty LegRatioQty_113;
      LegRatioQty_113.setString("19994108");
      noLegs_2_1_2.set(LegRatioQty_113);
      InstrumentLeg_113.insert(LegRatioQty_113.getString());
      FIX::LegRedemptionDate LegRedemptionDate_113("LOCALMKTDATE_126089437");
      noLegs_2_1_2.set(LegRedemptionDate_113);
      InstrumentLeg_113.insert(LegRedemptionDate_113.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_113("STRING_283748422");
      noLegs_2_1_2.set(LegRepoCollateralSecurityType_113);
      InstrumentLeg_113.insert(LegRepoCollateralSecurityType_113.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_113;
      LegRepurchaseRate_113.setString("35.910000");
      noLegs_2_1_2.set(LegRepurchaseRate_113);
      InstrumentLeg_113.insert(LegRepurchaseRate_113.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_113(1204860070);
      noLegs_2_1_2.set(LegRepurchaseTerm_113);
      InstrumentLeg_113.insert(LegRepurchaseTerm_113.getString());
      FIX::LegSecurityDesc LegSecurityDesc_113("STRING_1201124628");
      noLegs_2_1_2.set(LegSecurityDesc_113);
      InstrumentLeg_113.insert(LegSecurityDesc_113.getString());
      FIX::LegSecurityExchange LegSecurityExchange_113("EXCHANGE_1251110877");
      noLegs_2_1_2.set(LegSecurityExchange_113);
      InstrumentLeg_113.insert(LegSecurityExchange_113.getString());
      FIX::LegSecurityID LegSecurityID_113("STRING_1689964422");
      noLegs_2_1_2.set(LegSecurityID_113);
      InstrumentLeg_113.insert(LegSecurityID_113.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_113("STRING_1785367211");
      noLegs_2_1_2.set(LegSecurityIDSource_113);
      InstrumentLeg_113.insert(LegSecurityIDSource_113.getString());
      FIX::LegSecuritySubType LegSecuritySubType_113("STRING_1118521599");
      noLegs_2_1_2.set(LegSecuritySubType_113);
      InstrumentLeg_113.insert(LegSecuritySubType_113.getString());
      FIX::LegSecurityType LegSecurityType_113("STRING_1121732656");
      noLegs_2_1_2.set(LegSecurityType_113);
      InstrumentLeg_113.insert(LegSecurityType_113.getString());
      FIX::LegSide LegSide_113('1');
      noLegs_2_1_2.set(LegSide_113);
      InstrumentLeg_113.insert(LegSide_113.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_113("STRING_1052315839");
      noLegs_2_1_2.set(LegStateOrProvinceOfIssue_113);
      InstrumentLeg_113.insert(LegStateOrProvinceOfIssue_113.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_113("CAN");
      noLegs_2_1_2.set(LegStrikeCurrency_113);
      InstrumentLeg_113.insert(LegStrikeCurrency_113.getString());
      FIX::LegStrikePrice LegStrikePrice_113;
      LegStrikePrice_113.setString("7984525");
      noLegs_2_1_2.set(LegStrikePrice_113);
      InstrumentLeg_113.insert(LegStrikePrice_113.getString());
      FIX::LegSymbol LegSymbol_113("STRING_1494376763");
      noLegs_2_1_2.set(LegSymbol_113);
      InstrumentLeg_113.insert(LegSymbol_113.getString());
      FIX::LegSymbolSfx LegSymbolSfx_113("STRING_37815078");
      noLegs_2_1_2.set(LegSymbolSfx_113);
      InstrumentLeg_113.insert(LegSymbolSfx_113.getString());
      FIX::LegTimeUnit LegTimeUnit_113("STRING_170477553");
      noLegs_2_1_2.set(LegTimeUnit_113);
      InstrumentLeg_113.insert(LegTimeUnit_113.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_113("STRING_258323417");
      noLegs_2_1_2.set(LegUnitOfMeasure_113);
      InstrumentLeg_113.insert(LegUnitOfMeasure_113.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_113;
      LegUnitOfMeasureQty_113.setString("17828284");
      noLegs_2_1_2.set(LegUnitOfMeasureQty_113);
      InstrumentLeg_113.insert(LegUnitOfMeasureQty_113.getString());
      all_values.push_back(InstrumentLeg_113);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_220;
        FIX::LegSecurityAltID LegSecurityAltID_220("STRING_586598900");
        noLegSecurityAltID_2_2_2_0.set(LegSecurityAltID_220);
        LegSecAltIDGrp_NoLegSecurityAltID_220.insert(LegSecurityAltID_220.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_220("STRING_1563069156");
        noLegSecurityAltID_2_2_2_0.set(LegSecurityAltIDSource_220);
        LegSecAltIDGrp_NoLegSecurityAltID_220.insert(LegSecurityAltIDSource_220.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_220);

        noLegs_2_1_2.addGroup(noLegSecurityAltID_2_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_10;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_10("GBP");
      noLegs_2_1_2.set(LegBenchmarkCurveCurrency_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurveCurrency_10.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_10("STRING_310723420");
      noLegs_2_1_2.set(LegBenchmarkCurveName_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurveName_10.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_10("STRING_1573323742");
      noLegs_2_1_2.set(LegBenchmarkCurvePoint_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkCurvePoint_10.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_10;
      LegBenchmarkPrice_10.setString("4990085");
      noLegs_2_1_2.set(LegBenchmarkPrice_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkPrice_10.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_10(780516377);
      noLegs_2_1_2.set(LegBenchmarkPriceType_10);
      LegBenchmarkCurveData_10.insert(LegBenchmarkPriceType_10.getString());
      all_values.push_back(LegBenchmarkCurveData_10);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_43;
        FIX::LegStipulationType LegStipulationType_43("STRING_350935697");
        noLegStipulations_2_2_2_0.set(LegStipulationType_43);
        LegStipulations_NoLegStipulations_43.insert(LegStipulationType_43.getString());
        FIX::LegStipulationValue LegStipulationValue_43("STRING_906605814");
        noLegStipulations_2_2_2_0.set(LegStipulationValue_43);
        LegStipulations_NoLegStipulations_43.insert(LegStipulationValue_43.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_43);

        noLegs_2_1_2.addGroup(noLegStipulations_2_2_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_111;
        FIX::NestedPartyID NestedPartyID_111("STRING_430179288");
        noNestedPartyIDs_2_2_2_0.set(NestedPartyID_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyID_111.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_111('2');
        noNestedPartyIDs_2_2_2_0.set(NestedPartyIDSource_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyIDSource_111.getString());
        FIX::NestedPartyRole NestedPartyRole_111(1079485154);
        noNestedPartyIDs_2_2_2_0.set(NestedPartyRole_111);
        NestedParties_NoNestedPartyIDs_111.insert(NestedPartyRole_111.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_111);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_217;
          FIX::NestedPartySubID NestedPartySubID_217("STRING_1653946658");
          noNestedPartySubIDs_2_2_0_3_0.set(NestedPartySubID_217);
          NstdPtysSubGrp_NoNestedPartySubIDs_217.insert(NestedPartySubID_217.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_217(717368717);
          noNestedPartySubIDs_2_2_0_3_0.set(NestedPartySubIDType_217);
          NstdPtysSubGrp_NoNestedPartySubIDs_217.insert(NestedPartySubIDType_217.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_217);

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_0);
        }
        noLegs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_112;
        FIX::NestedPartyID NestedPartyID_112("STRING_652328117");
        noNestedPartyIDs_2_2_2_1.set(NestedPartyID_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyID_112.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_112('6');
        noNestedPartyIDs_2_2_2_1.set(NestedPartyIDSource_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyIDSource_112.getString());
        FIX::NestedPartyRole NestedPartyRole_112(2054096010);
        noNestedPartyIDs_2_2_2_1.set(NestedPartyRole_112);
        NestedParties_NoNestedPartyIDs_112.insert(NestedPartyRole_112.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_112);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_218;
          FIX::NestedPartySubID NestedPartySubID_218("STRING_1012337190");
          noNestedPartySubIDs_2_2_1_3_0.set(NestedPartySubID_218);
          NstdPtysSubGrp_NoNestedPartySubIDs_218.insert(NestedPartySubID_218.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_218(1830613929);
          noNestedPartySubIDs_2_2_1_3_0.set(NestedPartySubIDType_218);
          NstdPtysSubGrp_NoNestedPartySubIDs_218.insert(NestedPartySubIDType_218.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_218);

          noNestedPartyIDs_2_2_2_1.addGroup(noNestedPartySubIDs_2_2_1_3_0);
        }
        noLegs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_1);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_23;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_23("CHF");
    noRelatedSym_0_2.set(BenchmarkCurveCurrency_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurveCurrency_23.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_23("STRING_LIBID");
    noRelatedSym_0_2.set(BenchmarkCurveName_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurveName_23.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_23("STRING_526090413");
    noRelatedSym_0_2.set(BenchmarkCurvePoint_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkCurvePoint_23.getString());
    FIX::BenchmarkPrice BenchmarkPrice_23;
    BenchmarkPrice_23.setString("6175537");
    noRelatedSym_0_2.set(BenchmarkPrice_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkPrice_23.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_23(1503773822);
    noRelatedSym_0_2.set(BenchmarkPriceType_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkPriceType_23.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_23("STRING_17203693");
    noRelatedSym_0_2.set(BenchmarkSecurityID_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkSecurityID_23.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_23("STRING_1204152623");
    noRelatedSym_0_2.set(BenchmarkSecurityIDSource_23);
    SpreadOrBenchmarkCurveData_23.insert(BenchmarkSecurityIDSource_23.getString());
    FIX::Spread Spread_23;
    Spread_23.setString("9193593");
    noRelatedSym_0_2.set(Spread_23);
    SpreadOrBenchmarkCurveData_23.insert(Spread_23.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_23);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_36;
      FIX::StipulationType StipulationType_36("STRING_POOL");
      noStipulations_2_1_0.set(StipulationType_36);
      Stipulations_NoStipulations_36.insert(StipulationType_36.getString());
      FIX::StipulationValue StipulationValue_36("STRING_1230082750");
      noStipulations_2_1_0.set(StipulationValue_36);
      Stipulations_NoStipulations_36.insert(StipulationValue_36.getString());
      all_values.push_back(Stipulations_NoStipulations_36);

      noRelatedSym_0_2.addGroup(noStipulations_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_2_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_37;
      FIX::StipulationType StipulationType_37("STRING_LEAVEQTY");
      noStipulations_2_1_1.set(StipulationType_37);
      Stipulations_NoStipulations_37.insert(StipulationType_37.getString());
      FIX::StipulationValue StipulationValue_37("STRING_1891297868");
      noStipulations_2_1_1.set(StipulationValue_37);
      Stipulations_NoStipulations_37.insert(StipulationValue_37.getString());
      all_values.push_back(Stipulations_NoStipulations_37);

      noRelatedSym_0_2.addGroup(noStipulations_2_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_107;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_107("DATA_1269228646");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_107);
      UnderlyingInstrument_107.insert(EncodedUnderlyingIssuer_107.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_107(94749918);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_107);
      UnderlyingInstrument_107.insert(EncodedUnderlyingIssuerLen_107.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_107("DATA_769721293");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_107);
      UnderlyingInstrument_107.insert(EncodedUnderlyingSecurityDesc_107.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_107(1147589172);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_107);
      UnderlyingInstrument_107.insert(EncodedUnderlyingSecurityDescLen_107.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_107;
      UnderlyingAdjustedQuantity_107.setString("5249292");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_107);
      UnderlyingInstrument_107.insert(UnderlyingAdjustedQuantity_107.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_107;
      UnderlyingAllocationPercent_107.setString("35.290000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_107);
      UnderlyingInstrument_107.insert(UnderlyingAllocationPercent_107.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_107;
      UnderlyingAttachmentPoint_107.setString("6.780000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_107);
      UnderlyingInstrument_107.insert(UnderlyingAttachmentPoint_107.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_107("STRING_58735724");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_107);
      UnderlyingInstrument_107.insert(UnderlyingCFICode_107.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_107("STRING_240166540");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_107);
      UnderlyingInstrument_107.insert(UnderlyingCPProgram_107.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_107("STRING_796959395");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_107);
      UnderlyingInstrument_107.insert(UnderlyingCPRegType_107.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_107;
      UnderlyingCapValue_107.setString("7110638");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_107);
      UnderlyingInstrument_107.insert(UnderlyingCapValue_107.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_107;
      UnderlyingCashAmount_107.setString("8683622");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_107);
      UnderlyingInstrument_107.insert(UnderlyingCashAmount_107.getString());
      FIX::UnderlyingCashType UnderlyingCashType_107("STRING_DIFF");
      noUnderlyings_2_1_0.set(UnderlyingCashType_107);
      UnderlyingInstrument_107.insert(UnderlyingCashType_107.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_107;
      UnderlyingContractMultiplier_107.setString("2682241");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_107);
      UnderlyingInstrument_107.insert(UnderlyingContractMultiplier_107.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_107(1880699397);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_107);
      UnderlyingInstrument_107.insert(UnderlyingContractMultiplierUnit_107.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_107("COUNTRY_386702038");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_107);
      UnderlyingInstrument_107.insert(UnderlyingCountryOfIssue_107.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_107("LOCALMKTDATE_623837009");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_107);
      UnderlyingInstrument_107.insert(UnderlyingCouponPaymentDate_107.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_107;
      UnderlyingCouponRate_107.setString("60.540000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_107);
      UnderlyingInstrument_107.insert(UnderlyingCouponRate_107.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_107("STRING_107647398");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_107);
      UnderlyingInstrument_107.insert(UnderlyingCreditRating_107.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_107("EUR");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_107);
      UnderlyingInstrument_107.insert(UnderlyingCurrency_107.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_107;
      UnderlyingCurrentValue_107.setString("16114212");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_107);
      UnderlyingInstrument_107.insert(UnderlyingCurrentValue_107.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_107;
      UnderlyingDetachmentPoint_107.setString("11.150000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_107);
      UnderlyingInstrument_107.insert(UnderlyingDetachmentPoint_107.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_107;
      UnderlyingDirtyPrice_107.setString("19141524");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_107);
      UnderlyingInstrument_107.insert(UnderlyingDirtyPrice_107.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_107;
      UnderlyingEndPrice_107.setString("3832969");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_107);
      UnderlyingInstrument_107.insert(UnderlyingEndPrice_107.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_107;
      UnderlyingEndValue_107.setString("12684239");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_107);
      UnderlyingInstrument_107.insert(UnderlyingEndValue_107.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_107(1158958086);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_107);
      UnderlyingInstrument_107.insert(UnderlyingExerciseStyle_107.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_107;
      UnderlyingFXRate_107.setString("16133796");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_107);
      UnderlyingInstrument_107.insert(UnderlyingFXRate_107.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_107('M');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_107);
      UnderlyingInstrument_107.insert(UnderlyingFXRateCalc_107.getString());
      FIX::UnderlyingFactor UnderlyingFactor_107;
      UnderlyingFactor_107.setString("9027723");
      noUnderlyings_2_1_0.set(UnderlyingFactor_107);
      UnderlyingInstrument_107.insert(UnderlyingFactor_107.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_107(1476495133);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_107);
      UnderlyingInstrument_107.insert(UnderlyingFlowScheduleType_107.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_107("STRING_2064785455");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_107);
      UnderlyingInstrument_107.insert(UnderlyingInstrRegistry_107.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_107("LOCALMKTDATE_997522224");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_107);
      UnderlyingInstrument_107.insert(UnderlyingIssueDate_107.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_107("STRING_98732779");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_107);
      UnderlyingInstrument_107.insert(UnderlyingIssuer_107.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_107("STRING_1064890979");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_107);
      UnderlyingInstrument_107.insert(UnderlyingLocaleOfIssue_107.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_107("LOCALMKTDATE_1522451431");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_107);
      UnderlyingInstrument_107.insert(UnderlyingMaturityDate_107.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_107("MONTHYEAR_832436308");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_107);
      UnderlyingInstrument_107.insert(UnderlyingMaturityMonthYear_107.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_107("TZTIMEONLY_1144481657");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_107);
      UnderlyingInstrument_107.insert(UnderlyingMaturityTime_107.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_107;
      UnderlyingNotionalPercentageOutstanding_107.setString("71.550000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_107);
      UnderlyingInstrument_107.insert(UnderlyingNotionalPercentageOutstanding_107.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_107('1');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_107);
      UnderlyingInstrument_107.insert(UnderlyingOptAttribute_107.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_107;
      UnderlyingOriginalNotionalPercentageOutstanding_107.setString("10.520000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_107);
      UnderlyingInstrument_107.insert(UnderlyingOriginalNotionalPercentageOutstanding_107.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_107("STRING_144767348");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_107);
      UnderlyingInstrument_107.insert(UnderlyingPriceUnitOfMeasure_107.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_107;
      UnderlyingPriceUnitOfMeasureQty_107.setString("19409650");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_107);
      UnderlyingInstrument_107.insert(UnderlyingPriceUnitOfMeasureQty_107.getString());
      FIX::UnderlyingProduct UnderlyingProduct_107(497529161);
      noUnderlyings_2_1_0.set(UnderlyingProduct_107);
      UnderlyingInstrument_107.insert(UnderlyingProduct_107.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_107(412991497);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_107);
      UnderlyingInstrument_107.insert(UnderlyingPutOrCall_107.getString());
      FIX::UnderlyingPx UnderlyingPx_107;
      UnderlyingPx_107.setString("16741808");
      noUnderlyings_2_1_0.set(UnderlyingPx_107);
      UnderlyingInstrument_107.insert(UnderlyingPx_107.getString());
      FIX::UnderlyingQty UnderlyingQty_107;
      UnderlyingQty_107.setString("8842311");
      noUnderlyings_2_1_0.set(UnderlyingQty_107);
      UnderlyingInstrument_107.insert(UnderlyingQty_107.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_107("LOCALMKTDATE_1036828506");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_107);
      UnderlyingInstrument_107.insert(UnderlyingRedemptionDate_107.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_107("STRING_1766626859");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_107);
      UnderlyingInstrument_107.insert(UnderlyingRepoCollateralSecurityType_107.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_107;
      UnderlyingRepurchaseRate_107.setString("85.980000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_107);
      UnderlyingInstrument_107.insert(UnderlyingRepurchaseRate_107.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_107(39272280);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_107);
      UnderlyingInstrument_107.insert(UnderlyingRepurchaseTerm_107.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_107("STRING_329142988");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_107);
      UnderlyingInstrument_107.insert(UnderlyingRestructuringType_107.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_107("STRING_455816171");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_107);
      UnderlyingInstrument_107.insert(UnderlyingSecurityDesc_107.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_107("EXCHANGE_1206403395");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_107);
      UnderlyingInstrument_107.insert(UnderlyingSecurityExchange_107.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_107("STRING_95811741");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_107);
      UnderlyingInstrument_107.insert(UnderlyingSecurityID_107.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_107("STRING_839113074");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_107);
      UnderlyingInstrument_107.insert(UnderlyingSecurityIDSource_107.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_107("STRING_327343662");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_107);
      UnderlyingInstrument_107.insert(UnderlyingSecuritySubType_107.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_107("STRING_1254769827");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_107);
      UnderlyingInstrument_107.insert(UnderlyingSecurityType_107.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_107("STRING_305009080");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_107);
      UnderlyingInstrument_107.insert(UnderlyingSeniority_107.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_107("STRING_1122900471");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_107);
      UnderlyingInstrument_107.insert(UnderlyingSettlMethod_107.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_107(4);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_107);
      UnderlyingInstrument_107.insert(UnderlyingSettlementType_107.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_107;
      UnderlyingStartValue_107.setString("17815042");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_107);
      UnderlyingInstrument_107.insert(UnderlyingStartValue_107.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_107("STRING_1040202278");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_107);
      UnderlyingInstrument_107.insert(UnderlyingStateOrProvinceOfIssue_107.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_107("EUR");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_107);
      UnderlyingInstrument_107.insert(UnderlyingStrikeCurrency_107.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_107;
      UnderlyingStrikePrice_107.setString("21050932");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_107);
      UnderlyingInstrument_107.insert(UnderlyingStrikePrice_107.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_107("STRING_382548493");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_107);
      UnderlyingInstrument_107.insert(UnderlyingSymbol_107.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_107("STRING_565189653");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_107);
      UnderlyingInstrument_107.insert(UnderlyingSymbolSfx_107.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_107("STRING_1102091266");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_107);
      UnderlyingInstrument_107.insert(UnderlyingTimeUnit_107.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_107("STRING_1963735648");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_107);
      UnderlyingInstrument_107.insert(UnderlyingUnitOfMeasure_107.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_107;
      UnderlyingUnitOfMeasureQty_107.setString("16377925");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_107);
      UnderlyingInstrument_107.insert(UnderlyingUnitOfMeasureQty_107.getString());
      all_values.push_back(UnderlyingInstrument_107);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_215;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_215("STRING_2108502996");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_215);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_215.insert(UnderlyingSecurityAltID_215.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_215("STRING_1431273909");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_215);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_215.insert(UnderlyingSecurityAltIDSource_215.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_200;
        FIX::UnderlyingStipType UnderlyingStipType_200("STRING_374010845");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_200);
        UnderlyingStipulations_NoUnderlyingStips_200.insert(UnderlyingStipType_200.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_200("STRING_957971066");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_200);
        UnderlyingStipulations_NoUnderlyingStips_200.insert(UnderlyingStipValue_200.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_200);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_201;
        FIX::UnderlyingStipType UnderlyingStipType_201("STRING_130325383");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipType_201);
        UnderlyingStipulations_NoUnderlyingStips_201.insert(UnderlyingStipType_201.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_201("STRING_1410839351");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipValue_201);
        UnderlyingStipulations_NoUnderlyingStips_201.insert(UnderlyingStipValue_201.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_201);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_202;
        FIX::UnderlyingStipType UnderlyingStipType_202("STRING_577114277");
        noUnderlyingStips_2_0_2_2.set(UnderlyingStipType_202);
        UnderlyingStipulations_NoUnderlyingStips_202.insert(UnderlyingStipType_202.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_202("STRING_1122203981");
        noUnderlyingStips_2_0_2_2.set(UnderlyingStipValue_202);
        UnderlyingStipulations_NoUnderlyingStips_202.insert(UnderlyingStipValue_202.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_202);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_217;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_217("STRING_906257265");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_217);
        UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyID_217.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_217('1');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_217);
        UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyIDSource_217.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_217(509031378);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_217);
        UndlyInstrumentParties_NoUndlyInstrumentParties_217.insert(UnderlyingInstrumentPartyRole_217.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_217);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_411("STRING_269649578");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_411);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411.insert(UnderlyingInstrumentPartySubID_411.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_411(836375041);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_411);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411.insert(UnderlyingInstrumentPartySubIDType_411.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_218;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_218("STRING_109355185");
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyID_218);
        UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyID_218.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_218('5');
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyIDSource_218);
        UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyIDSource_218.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_218(1959275512);
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyRole_218);
        UndlyInstrumentParties_NoUndlyInstrumentParties_218.insert(UnderlyingInstrumentPartyRole_218.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_218);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_412("STRING_208679225");
          noUndlyInstrumentPartySubIDs_2_0_1_3_0.set(UnderlyingInstrumentPartySubID_412);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412.insert(UnderlyingInstrumentPartySubID_412.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_412(851994143);
          noUndlyInstrumentPartySubIDs_2_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_412);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412.insert(UnderlyingInstrumentPartySubIDType_412.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_0);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_219;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_219("STRING_1126994381");
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyID_219);
        UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyID_219.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_219('2');
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyIDSource_219);
        UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyIDSource_219.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_219(809603752);
        noUndlyInstrumentParties_2_0_2_2.set(UnderlyingInstrumentPartyRole_219);
        UndlyInstrumentParties_NoUndlyInstrumentParties_219.insert(UnderlyingInstrumentPartyRole_219.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_219);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_413("STRING_506622223");
          noUndlyInstrumentPartySubIDs_2_0_2_3_0.set(UnderlyingInstrumentPartySubID_413);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubID_413.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_413(1911695019);
          noUndlyInstrumentPartySubIDs_2_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_413);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413.insert(UnderlyingInstrumentPartySubIDType_413.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);

          noUndlyInstrumentParties_2_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_3_0);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_0);
    }
    // YieldData
    multiset<string> YieldData_18;
    FIX::Yield Yield_18;
    Yield_18.setString("48.740000");
    noRelatedSym_0_2.set(Yield_18);
    YieldData_18.insert(Yield_18.getString());
    FIX::YieldCalcDate YieldCalcDate_18("LOCALMKTDATE_2144414725");
    noRelatedSym_0_2.set(YieldCalcDate_18);
    YieldData_18.insert(YieldCalcDate_18.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_18("LOCALMKTDATE_660260041");
    noRelatedSym_0_2.set(YieldRedemptionDate_18);
    YieldData_18.insert(YieldRedemptionDate_18.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_18;
    YieldRedemptionPrice_18.setString("12868142");
    noRelatedSym_0_2.set(YieldRedemptionPrice_18);
    YieldData_18.insert(YieldRedemptionPrice_18.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_18(1428204987);
    noRelatedSym_0_2.set(YieldRedemptionPriceType_18);
    YieldData_18.insert(YieldRedemptionPriceType_18.getString());
    FIX::YieldType YieldType_18("STRING_CURRENT");
    noRelatedSym_0_2.set(YieldType_18);
    YieldData_18.insert(YieldType_18.getString());
    all_values.push_back(YieldData_18);

    msg.addGroup(noRelatedSym_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_10;
    FIX::RootPartyID RootPartyID_10("STRING_238692405");
    noRootPartyIDs_0_0.set(RootPartyID_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyID_10.getString());
    FIX::RootPartyIDSource RootPartyIDSource_10('3');
    noRootPartyIDs_0_0.set(RootPartyIDSource_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyIDSource_10.getString());
    FIX::RootPartyRole RootPartyRole_10(924180770);
    noRootPartyIDs_0_0.set(RootPartyRole_10);
    RootParties_NoRootPartyIDs_10.insert(RootPartyRole_10.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_10);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_19;
      FIX::RootPartySubID RootPartySubID_19("STRING_1158883589");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_19);
      RootSubParties_NoRootPartySubIDs_19.insert(RootPartySubID_19.getString());
      FIX::RootPartySubIDType RootPartySubIDType_19(226808753);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_19);
      RootSubParties_NoRootPartySubIDs_19.insert(RootPartySubIDType_19.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_19);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_20;
      FIX::RootPartySubID RootPartySubID_20("STRING_1722063947");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_20);
      RootSubParties_NoRootPartySubIDs_20.insert(RootPartySubID_20.getString());
      FIX::RootPartySubIDType RootPartySubIDType_20(589420093);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_20);
      RootSubParties_NoRootPartySubIDs_20.insert(RootPartySubIDType_20.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_20);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_21;
      FIX::RootPartySubID RootPartySubID_21("STRING_735840131");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_21);
      RootSubParties_NoRootPartySubIDs_21.insert(RootPartySubID_21.getString());
      FIX::RootPartySubIDType RootPartySubIDType_21(576649306);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_21);
      RootSubParties_NoRootPartySubIDs_21.insert(RootPartySubIDType_21.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_21);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_11;
    FIX::RootPartyID RootPartyID_11("STRING_859069671");
    noRootPartyIDs_0_1.set(RootPartyID_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyID_11.getString());
    FIX::RootPartyIDSource RootPartyIDSource_11('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyIDSource_11.getString());
    FIX::RootPartyRole RootPartyRole_11(686004491);
    noRootPartyIDs_0_1.set(RootPartyRole_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyRole_11.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_11);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_22;
      FIX::RootPartySubID RootPartySubID_22("STRING_1384007037");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_22);
      RootSubParties_NoRootPartySubIDs_22.insert(RootPartySubID_22.getString());
      FIX::RootPartySubIDType RootPartySubIDType_22(805418162);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_22);
      RootSubParties_NoRootPartySubIDs_22.insert(RootPartySubIDType_22.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_22);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_23;
      FIX::RootPartySubID RootPartySubID_23("STRING_1642407555");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_23);
      RootSubParties_NoRootPartySubIDs_23.insert(RootPartySubID_23.getString());
      FIX::RootPartySubIDType RootPartySubIDType_23(88517532);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_23);
      RootSubParties_NoRootPartySubIDs_23.insert(RootPartySubIDType_23.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_23);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_12;
    FIX::RootPartyID RootPartyID_12("STRING_1932412543");
    noRootPartyIDs_0_2.set(RootPartyID_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyID_12.getString());
    FIX::RootPartyIDSource RootPartyIDSource_12('1');
    noRootPartyIDs_0_2.set(RootPartyIDSource_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyIDSource_12.getString());
    FIX::RootPartyRole RootPartyRole_12(898121284);
    noRootPartyIDs_0_2.set(RootPartyRole_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyRole_12.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_12);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_24;
      FIX::RootPartySubID RootPartySubID_24("STRING_2090462349");
      noRootPartySubIDs_2_1_0.set(RootPartySubID_24);
      RootSubParties_NoRootPartySubIDs_24.insert(RootPartySubID_24.getString());
      FIX::RootPartySubIDType RootPartySubIDType_24(662332655);
      noRootPartySubIDs_2_1_0.set(RootPartySubIDType_24);
      RootSubParties_NoRootPartySubIDs_24.insert(RootPartySubIDType_24.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_24);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_25;
      FIX::RootPartySubID RootPartySubID_25("STRING_472782995");
      noRootPartySubIDs_2_1_1.set(RootPartySubID_25);
      RootSubParties_NoRootPartySubIDs_25.insert(RootPartySubID_25.getString());
      FIX::RootPartySubIDType RootPartySubIDType_25(2087393426);
      noRootPartySubIDs_2_1_1.set(RootPartySubIDType_25);
      RootSubParties_NoRootPartySubIDs_25.insert(RootPartySubIDType_25.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_25);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_26;
      FIX::RootPartySubID RootPartySubID_26("STRING_1322592697");
      noRootPartySubIDs_2_1_2.set(RootPartySubID_26);
      RootSubParties_NoRootPartySubIDs_26.insert(RootPartySubID_26.getString());
      FIX::RootPartySubIDType RootPartySubIDType_26(1759597217);
      noRootPartySubIDs_2_1_2.set(RootPartySubIDType_26);
      RootSubParties_NoRootPartySubIDs_26.insert(RootPartySubIDType_26.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_26);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
