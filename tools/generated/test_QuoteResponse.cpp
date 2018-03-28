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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteResponse msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteResponse_0;
  FIX::Account Account_33("STRING_1368114765");
  msg.set(Account_33);
  QuoteResponse_0.insert(Account_33.getString());
  FIX::AccountType AccountType_30(1);
  msg.set(AccountType_30);
  QuoteResponse_0.insert(AccountType_30.getString());
  FIX::AcctIDSource AcctIDSource_26(3);
  msg.set(AcctIDSource_26);
  QuoteResponse_0.insert(AcctIDSource_26.getString());
  FIX::BidForwardPoints BidForwardPoints_12;
  BidForwardPoints_12.setString("16068071");
  msg.set(BidForwardPoints_12);
  QuoteResponse_0.insert(BidForwardPoints_12.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_12;
  BidForwardPoints2_12.setString("12656265");
  msg.set(BidForwardPoints2_12);
  QuoteResponse_0.insert(BidForwardPoints2_12.getString());
  FIX::BidPx BidPx_12;
  BidPx_12.setString("496357");
  msg.set(BidPx_12);
  QuoteResponse_0.insert(BidPx_12.getString());
  FIX::BidSize BidSize_12;
  BidSize_12.setString("2751302");
  msg.set(BidSize_12);
  QuoteResponse_0.insert(BidSize_12.getString());
  FIX::BidSpotRate BidSpotRate_12;
  BidSpotRate_12.setString("2770264");
  msg.set(BidSpotRate_12);
  QuoteResponse_0.insert(BidSpotRate_12.getString());
  FIX::BidYield BidYield_12;
  BidYield_12.setString("45.110000");
  msg.set(BidYield_12);
  QuoteResponse_0.insert(BidYield_12.getString());
  FIX::ClOrdID ClOrdID_42("STRING_1997194152");
  msg.set(ClOrdID_42);
  QuoteResponse_0.insert(ClOrdID_42.getString());
  FIX::CommType CommType_19('5');
  msg.set(CommType_19);
  QuoteResponse_0.insert(CommType_19.getString());
  FIX::Commission Commission_19;
  Commission_19.setString("10122846");
  msg.set(Commission_19);
  QuoteResponse_0.insert(Commission_19.getString());
  FIX::Currency Currency_55("EUR");
  msg.set(Currency_55);
  QuoteResponse_0.insert(Currency_55.getString());
  FIX::CustOrderCapacity CustOrderCapacity_14(4);
  msg.set(CustOrderCapacity_14);
  QuoteResponse_0.insert(CustOrderCapacity_14.getString());
  FIX::EncodedText EncodedText_71("DATA_1112364301");
  msg.set(EncodedText_71);
  QuoteResponse_0.insert(EncodedText_71.getString());
  FIX::EncodedTextLen EncodedTextLen_71(1011760918);
  msg.set(EncodedTextLen_71);
  QuoteResponse_0.insert(EncodedTextLen_71.getString());
  FIX::ExDestination ExDestination_9("EXCHANGE_1821023204");
  msg.set(ExDestination_9);
  QuoteResponse_0.insert(ExDestination_9.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_9('G');
  msg.set(ExDestinationIDSource_9);
  QuoteResponse_0.insert(ExDestinationIDSource_9.getString());
  FIX::IOIID IOIID_8("STRING_506684825");
  msg.set(IOIID_8);
  QuoteResponse_0.insert(IOIID_8.getString());
  FIX::MidPx MidPx_12;
  MidPx_12.setString("19095407");
  msg.set(MidPx_12);
  QuoteResponse_0.insert(MidPx_12.getString());
  FIX::MidYield MidYield_12;
  MidYield_12.setString("13.590000");
  msg.set(MidYield_12);
  QuoteResponse_0.insert(MidYield_12.getString());
  FIX::MinBidSize MinBidSize_1;
  MinBidSize_1.setString("20905249");
  msg.set(MinBidSize_1);
  QuoteResponse_0.insert(MinBidSize_1.getString());
  FIX::MinOfferSize MinOfferSize_1;
  MinOfferSize_1.setString("6601783");
  msg.set(MinOfferSize_1);
  QuoteResponse_0.insert(MinOfferSize_1.getString());
  FIX::MinQty MinQty_13;
  MinQty_13.setString("8496994");
  msg.set(MinQty_13);
  QuoteResponse_0.insert(MinQty_13.getString());
  FIX::MktBidPx MktBidPx_1;
  MktBidPx_1.setString("20335036");
  msg.set(MktBidPx_1);
  QuoteResponse_0.insert(MktBidPx_1.getString());
  FIX::MktOfferPx MktOfferPx_1;
  MktOfferPx_1.setString("13225110");
  msg.set(MktOfferPx_1);
  QuoteResponse_0.insert(MktOfferPx_1.getString());
  FIX::OfferForwardPoints OfferForwardPoints_12;
  OfferForwardPoints_12.setString("13224824");
  msg.set(OfferForwardPoints_12);
  QuoteResponse_0.insert(OfferForwardPoints_12.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_12;
  OfferForwardPoints2_12.setString("19734134");
  msg.set(OfferForwardPoints2_12);
  QuoteResponse_0.insert(OfferForwardPoints2_12.getString());
  FIX::OfferPx OfferPx_12;
  OfferPx_12.setString("4976200");
  msg.set(OfferPx_12);
  QuoteResponse_0.insert(OfferPx_12.getString());
  FIX::OfferSize OfferSize_12;
  OfferSize_12.setString("9345960");
  msg.set(OfferSize_12);
  QuoteResponse_0.insert(OfferSize_12.getString());
  FIX::OfferSpotRate OfferSpotRate_12;
  OfferSpotRate_12.setString("11940445");
  msg.set(OfferSpotRate_12);
  QuoteResponse_0.insert(OfferSpotRate_12.getString());
  FIX::OfferYield OfferYield_12;
  OfferYield_12.setString("69.990000");
  msg.set(OfferYield_12);
  QuoteResponse_0.insert(OfferYield_12.getString());
  FIX::OrdType OrdType_43('B');
  msg.set(OrdType_43);
  QuoteResponse_0.insert(OrdType_43.getString());
  FIX::OrderCapacity OrderCapacity_28('I');
  msg.set(OrderCapacity_28);
  QuoteResponse_0.insert(OrderCapacity_28.getString());
  FIX::OrderQty2 OrderQty2_21;
  OrderQty2_21.setString("8447098");
  msg.set(OrderQty2_21);
  QuoteResponse_0.insert(OrderQty2_21.getString());
  FIX::OrderRestrictions OrderRestrictions_26("MULTIPLECHARVALUE_E");
  msg.set(OrderRestrictions_26);
  QuoteResponse_0.insert(OrderRestrictions_26.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_12(false);
  msg.set(PreTradeAnonymity_12);
  QuoteResponse_0.insert(PreTradeAnonymity_12.getString());
  FIX::Price Price_22;
  Price_22.setString("11217363");
  msg.set(Price_22);
  QuoteResponse_0.insert(Price_22.getString());
  FIX::PriceType PriceType_34(3);
  msg.set(PriceType_34);
  QuoteResponse_0.insert(PriceType_34.getString());
  FIX::QuoteID QuoteID_11("STRING_778208779");
  msg.set(QuoteID_11);
  QuoteResponse_0.insert(QuoteID_11.getString());
  FIX::QuoteMsgID QuoteMsgID_2("STRING_1988182916");
  msg.set(QuoteMsgID_2);
  QuoteResponse_0.insert(QuoteMsgID_2.getString());
  FIX::QuoteRespID QuoteRespID_2("STRING_1398415947");
  msg.set(QuoteRespID_2);
  QuoteResponse_0.insert(QuoteRespID_2.getString());
  FIX::QuoteRespType QuoteRespType_0(6);
  msg.set(QuoteRespType_0);
  QuoteResponse_0.insert(QuoteRespType_0.getString());
  FIX::QuoteType QuoteType_10(0);
  msg.set(QuoteType_10);
  QuoteResponse_0.insert(QuoteType_10.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_1;
  SettlCurrBidFxRate_1.setString("18354321");
  msg.set(SettlCurrBidFxRate_1);
  QuoteResponse_0.insert(SettlCurrBidFxRate_1.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_9('M');
  msg.set(SettlCurrFxRateCalc_9);
  QuoteResponse_0.insert(SettlCurrFxRateCalc_9.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_1;
  SettlCurrOfferFxRate_1.setString("4304927");
  msg.set(SettlCurrOfferFxRate_1);
  QuoteResponse_0.insert(SettlCurrOfferFxRate_1.getString());
  FIX::SettlDate SettlDate_41("LOCALMKTDATE_1508971671");
  msg.set(SettlDate_41);
  QuoteResponse_0.insert(SettlDate_41.getString());
  FIX::SettlDate2 SettlDate2_21("LOCALMKTDATE_2087231706");
  msg.set(SettlDate2_21);
  QuoteResponse_0.insert(SettlDate2_21.getString());
  FIX::SettlType SettlType_24("STRING_3");
  msg.set(SettlType_24);
  QuoteResponse_0.insert(SettlType_24.getString());
  FIX::Side Side_39('9');
  msg.set(Side_39);
  QuoteResponse_0.insert(Side_39.getString());
  FIX::Text Text_71("STRING_1642459418");
  msg.set(Text_71);
  QuoteResponse_0.insert(Text_71.getString());
  FIX::TradingSessionID TradingSessionID_67("STRING_3");
  msg.set(TradingSessionID_67);
  QuoteResponse_0.insert(TradingSessionID_67.getString());
  FIX::TradingSessionSubID TradingSessionSubID_67("STRING_3");
  msg.set(TradingSessionSubID_67);
  QuoteResponse_0.insert(TradingSessionSubID_67.getString());
  FIX::TransactTime TransactTime_57(FIX::UTCTIMESTAMP(2, 53, 7, 21, 4, 2003));
  msg.set(TransactTime_57);
  QuoteResponse_0.insert(TransactTime_57.getString());
  FIX::ValidUntilTime ValidUntilTime_14(FIX::UTCTIMESTAMP(22, 20, 19, 20, 10, 2004));
  msg.set(ValidUntilTime_14);
  QuoteResponse_0.insert(ValidUntilTime_14.getString());
  all_values.push_back(QuoteResponse_0);

  // FinancingDetails
  multiset<string> FinancingDetails_24;
  FIX::AgreementCurrency AgreementCurrency_24("CAN");
  msg.set(AgreementCurrency_24);
  FinancingDetails_24.insert(AgreementCurrency_24.getString());
  FIX::AgreementDate AgreementDate_24("LOCALMKTDATE_1998804713");
  msg.set(AgreementDate_24);
  FinancingDetails_24.insert(AgreementDate_24.getString());
  FIX::AgreementDesc AgreementDesc_24("STRING_842599797");
  msg.set(AgreementDesc_24);
  FinancingDetails_24.insert(AgreementDesc_24.getString());
  FIX::AgreementID AgreementID_24("STRING_261071557");
  msg.set(AgreementID_24);
  FinancingDetails_24.insert(AgreementID_24.getString());
  FIX::DeliveryType DeliveryType_24(2);
  msg.set(DeliveryType_24);
  FinancingDetails_24.insert(DeliveryType_24.getString());
  FIX::EndDate EndDate_24("LOCALMKTDATE_261331653");
  msg.set(EndDate_24);
  FinancingDetails_24.insert(EndDate_24.getString());
  FIX::MarginRatio MarginRatio_24;
  MarginRatio_24.setString("36.720000");
  msg.set(MarginRatio_24);
  FinancingDetails_24.insert(MarginRatio_24.getString());
  FIX::StartDate StartDate_24("LOCALMKTDATE_1225338897");
  msg.set(StartDate_24);
  FinancingDetails_24.insert(StartDate_24.getString());
  FIX::TerminationType TerminationType_24(4);
  msg.set(TerminationType_24);
  FinancingDetails_24.insert(TerminationType_24.getString());
  all_values.push_back(FinancingDetails_24);

  // Instrument
  multiset<string> Instrument_73;
  FIX::AttachmentPoint AttachmentPoint_73;
  AttachmentPoint_73.setString("16.950000");
  msg.set(AttachmentPoint_73);
  Instrument_73.insert(AttachmentPoint_73.getString());
  FIX::CFICode CFICode_73("STRING_1165086955");
  msg.set(CFICode_73);
  Instrument_73.insert(CFICode_73.getString());
  FIX::CPProgram CPProgram_73(2);
  msg.set(CPProgram_73);
  Instrument_73.insert(CPProgram_73.getString());
  FIX::CPRegType CPRegType_73("STRING_581536807");
  msg.set(CPRegType_73);
  Instrument_73.insert(CPRegType_73.getString());
  FIX::CapPrice CapPrice_73;
  CapPrice_73.setString("6600627");
  msg.set(CapPrice_73);
  Instrument_73.insert(CapPrice_73.getString());
  FIX::ContractMultiplier ContractMultiplier_73;
  ContractMultiplier_73.setString("3617372");
  msg.set(ContractMultiplier_73);
  Instrument_73.insert(ContractMultiplier_73.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_73(2);
  msg.set(ContractMultiplierUnit_73);
  Instrument_73.insert(ContractMultiplierUnit_73.getString());
  FIX::ContractSettlMonth ContractSettlMonth_73("MONTHYEAR_1004737976");
  msg.set(ContractSettlMonth_73);
  Instrument_73.insert(ContractSettlMonth_73.getString());
  FIX::CountryOfIssue CountryOfIssue_73("COUNTRY_1127976187");
  msg.set(CountryOfIssue_73);
  Instrument_73.insert(CountryOfIssue_73.getString());
  FIX::CouponPaymentDate CouponPaymentDate_73("LOCALMKTDATE_1471494806");
  msg.set(CouponPaymentDate_73);
  Instrument_73.insert(CouponPaymentDate_73.getString());
  FIX::CouponRate CouponRate_73;
  CouponRate_73.setString("20.560000");
  msg.set(CouponRate_73);
  Instrument_73.insert(CouponRate_73.getString());
  FIX::CreditRating CreditRating_73("STRING_1720144876");
  msg.set(CreditRating_73);
  Instrument_73.insert(CreditRating_73.getString());
  FIX::DatedDate DatedDate_73("LOCALMKTDATE_927865749");
  msg.set(DatedDate_73);
  Instrument_73.insert(DatedDate_73.getString());
  FIX::DetachmentPoint DetachmentPoint_73;
  DetachmentPoint_73.setString("21.810000");
  msg.set(DetachmentPoint_73);
  Instrument_73.insert(DetachmentPoint_73.getString());
  FIX::EncodedIssuer EncodedIssuer_73("DATA_1358874465");
  msg.set(EncodedIssuer_73);
  Instrument_73.insert(EncodedIssuer_73.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_73(2110803691);
  msg.set(EncodedIssuerLen_73);
  Instrument_73.insert(EncodedIssuerLen_73.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_73("DATA_1493003341");
  msg.set(EncodedSecurityDesc_73);
  Instrument_73.insert(EncodedSecurityDesc_73.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_73(1650972125);
  msg.set(EncodedSecurityDescLen_73);
  Instrument_73.insert(EncodedSecurityDescLen_73.getString());
  FIX::ExerciseStyle ExerciseStyle_73(2);
  msg.set(ExerciseStyle_73);
  Instrument_73.insert(ExerciseStyle_73.getString());
  FIX::Factor Factor_73;
  Factor_73.setString("21170112");
  msg.set(Factor_73);
  Instrument_73.insert(Factor_73.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_73(false);
  msg.set(FlexProductEligibilityIndicator_73);
  Instrument_73.insert(FlexProductEligibilityIndicator_73.getString());
  FIX::FlexibleIndicator FlexibleIndicator_73(true);
  msg.set(FlexibleIndicator_73);
  Instrument_73.insert(FlexibleIndicator_73.getString());
  FIX::FloorPrice FloorPrice_73;
  FloorPrice_73.setString("9796669");
  msg.set(FloorPrice_73);
  Instrument_73.insert(FloorPrice_73.getString());
  FIX::FlowScheduleType FlowScheduleType_73(2);
  msg.set(FlowScheduleType_73);
  Instrument_73.insert(FlowScheduleType_73.getString());
  FIX::InstrRegistry InstrRegistry_73("STRING_1687984545");
  msg.set(InstrRegistry_73);
  Instrument_73.insert(InstrRegistry_73.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_73('1');
  msg.set(InstrmtAssignmentMethod_73);
  Instrument_73.insert(InstrmtAssignmentMethod_73.getString());
  FIX::InterestAccrualDate InterestAccrualDate_73("LOCALMKTDATE_1631295131");
  msg.set(InterestAccrualDate_73);
  Instrument_73.insert(InterestAccrualDate_73.getString());
  FIX::IssueDate IssueDate_73("LOCALMKTDATE_1949316198");
  msg.set(IssueDate_73);
  Instrument_73.insert(IssueDate_73.getString());
  FIX::Issuer Issuer_73("STRING_1189758485");
  msg.set(Issuer_73);
  Instrument_73.insert(Issuer_73.getString());
  FIX::ListMethod ListMethod_73(0);
  msg.set(ListMethod_73);
  Instrument_73.insert(ListMethod_73.getString());
  FIX::LocaleOfIssue LocaleOfIssue_73("STRING_493656977");
  msg.set(LocaleOfIssue_73);
  Instrument_73.insert(LocaleOfIssue_73.getString());
  FIX::MaturityDate MaturityDate_73("LOCALMKTDATE_500266532");
  msg.set(MaturityDate_73);
  Instrument_73.insert(MaturityDate_73.getString());
  FIX::MaturityMonthYear MaturityMonthYear_73("MONTHYEAR_1874237336");
  msg.set(MaturityMonthYear_73);
  Instrument_73.insert(MaturityMonthYear_73.getString());
  FIX::MaturityTime MaturityTime_73("TZTIMEONLY_2122659003");
  msg.set(MaturityTime_73);
  Instrument_73.insert(MaturityTime_73.getString());
  FIX::MinPriceIncrement MinPriceIncrement_73;
  MinPriceIncrement_73.setString("10818033");
  msg.set(MinPriceIncrement_73);
  Instrument_73.insert(MinPriceIncrement_73.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_73;
  MinPriceIncrementAmount_73.setString("3868164");
  msg.set(MinPriceIncrementAmount_73);
  Instrument_73.insert(MinPriceIncrementAmount_73.getString());
  FIX::NTPositionLimit NTPositionLimit_73(336912636);
  msg.set(NTPositionLimit_73);
  Instrument_73.insert(NTPositionLimit_73.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_73;
  NotionalPercentageOutstanding_73.setString("36.320000");
  msg.set(NotionalPercentageOutstanding_73);
  Instrument_73.insert(NotionalPercentageOutstanding_73.getString());
  FIX::OptAttribute OptAttribute_73('1');
  msg.set(OptAttribute_73);
  Instrument_73.insert(OptAttribute_73.getString());
  FIX::OptPayoutAmount OptPayoutAmount_73;
  OptPayoutAmount_73.setString("14648888");
  msg.set(OptPayoutAmount_73);
  Instrument_73.insert(OptPayoutAmount_73.getString());
  FIX::OptPayoutType OptPayoutType_73(1);
  msg.set(OptPayoutType_73);
  Instrument_73.insert(OptPayoutType_73.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_73;
  OriginalNotionalPercentageOutstanding_73.setString("64.460000");
  msg.set(OriginalNotionalPercentageOutstanding_73);
  Instrument_73.insert(OriginalNotionalPercentageOutstanding_73.getString());
  FIX::Pool Pool_73("STRING_1037550052");
  msg.set(Pool_73);
  Instrument_73.insert(Pool_73.getString());
  FIX::PositionLimit PositionLimit_73(1698940539);
  msg.set(PositionLimit_73);
  Instrument_73.insert(PositionLimit_73.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_73("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_73);
  Instrument_73.insert(PriceQuoteMethod_73.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_73("STRING_248940870");
  msg.set(PriceUnitOfMeasure_73);
  Instrument_73.insert(PriceUnitOfMeasure_73.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_73;
  PriceUnitOfMeasureQty_73.setString("16622605");
  msg.set(PriceUnitOfMeasureQty_73);
  Instrument_73.insert(PriceUnitOfMeasureQty_73.getString());
  FIX::Product Product_75(4);
  msg.set(Product_75);
  Instrument_73.insert(Product_75.getString());
  FIX::ProductComplex ProductComplex_73("STRING_1899912995");
  msg.set(ProductComplex_73);
  Instrument_73.insert(ProductComplex_73.getString());
  FIX::PutOrCall PutOrCall_73(0);
  msg.set(PutOrCall_73);
  Instrument_73.insert(PutOrCall_73.getString());
  FIX::RedemptionDate RedemptionDate_73("LOCALMKTDATE_62212319");
  msg.set(RedemptionDate_73);
  Instrument_73.insert(RedemptionDate_73.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_73("STRING_476513758");
  msg.set(RepoCollateralSecurityType_73);
  Instrument_73.insert(RepoCollateralSecurityType_73.getString());
  FIX::RepurchaseRate RepurchaseRate_73;
  RepurchaseRate_73.setString("59.020000");
  msg.set(RepurchaseRate_73);
  Instrument_73.insert(RepurchaseRate_73.getString());
  FIX::RepurchaseTerm RepurchaseTerm_73(1041879223);
  msg.set(RepurchaseTerm_73);
  Instrument_73.insert(RepurchaseTerm_73.getString());
  FIX::RestructuringType RestructuringType_73("STRING_XR");
  msg.set(RestructuringType_73);
  Instrument_73.insert(RestructuringType_73.getString());
  FIX::SecurityDesc SecurityDesc_73("STRING_1891630447");
  msg.set(SecurityDesc_73);
  Instrument_73.insert(SecurityDesc_73.getString());
  FIX::SecurityExchange SecurityExchange_73("EXCHANGE_135134036");
  msg.set(SecurityExchange_73);
  Instrument_73.insert(SecurityExchange_73.getString());
  FIX::SecurityGroup SecurityGroup_73("STRING_535730719");
  msg.set(SecurityGroup_73);
  Instrument_73.insert(SecurityGroup_73.getString());
  FIX::SecurityID SecurityID_73("STRING_1693462997");
  msg.set(SecurityID_73);
  Instrument_73.insert(SecurityID_73.getString());
  FIX::SecurityIDSource SecurityIDSource_73("STRING_8");
  msg.set(SecurityIDSource_73);
  Instrument_73.insert(SecurityIDSource_73.getString());
  FIX::SecurityStatus SecurityStatus_73("STRING_2");
  msg.set(SecurityStatus_73);
  Instrument_73.insert(SecurityStatus_73.getString());
  FIX::SecuritySubType SecuritySubType_74("STRING_39636326");
  msg.set(SecuritySubType_74);
  Instrument_73.insert(SecuritySubType_74.getString());
  FIX::SecurityType SecurityType_75("STRING_PN");
  msg.set(SecurityType_75);
  Instrument_73.insert(SecurityType_75.getString());
  FIX::Seniority Seniority_73("STRING_SR");
  msg.set(Seniority_73);
  Instrument_73.insert(Seniority_73.getString());
  FIX::SettlMethod SettlMethod_73('C');
  msg.set(SettlMethod_73);
  Instrument_73.insert(SettlMethod_73.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_73("STRING_759478746");
  msg.set(SettleOnOpenFlag_73);
  Instrument_73.insert(SettleOnOpenFlag_73.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_73("STRING_1358451201");
  msg.set(StateOrProvinceOfIssue_73);
  Instrument_73.insert(StateOrProvinceOfIssue_73.getString());
  FIX::StrikeCurrency StrikeCurrency_73("JPY");
  msg.set(StrikeCurrency_73);
  Instrument_73.insert(StrikeCurrency_73.getString());
  FIX::StrikeMultiplier StrikeMultiplier_73;
  StrikeMultiplier_73.setString("6025219");
  msg.set(StrikeMultiplier_73);
  Instrument_73.insert(StrikeMultiplier_73.getString());
  FIX::StrikePrice StrikePrice_73;
  StrikePrice_73.setString("18166131");
  msg.set(StrikePrice_73);
  Instrument_73.insert(StrikePrice_73.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_73(2);
  msg.set(StrikePriceBoundaryMethod_73);
  Instrument_73.insert(StrikePriceBoundaryMethod_73.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_73;
  StrikePriceBoundaryPrecision_73.setString("47.410000");
  msg.set(StrikePriceBoundaryPrecision_73);
  Instrument_73.insert(StrikePriceBoundaryPrecision_73.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_73(4);
  msg.set(StrikePriceDeterminationMethod_73);
  Instrument_73.insert(StrikePriceDeterminationMethod_73.getString());
  FIX::StrikeValue StrikeValue_73;
  StrikeValue_73.setString("3815904");
  msg.set(StrikeValue_73);
  Instrument_73.insert(StrikeValue_73.getString());
  FIX::Symbol Symbol_73("STRING_1118169720");
  msg.set(Symbol_73);
  Instrument_73.insert(Symbol_73.getString());
  FIX::SymbolSfx SymbolSfx_73("STRING_WI");
  msg.set(SymbolSfx_73);
  Instrument_73.insert(SymbolSfx_73.getString());
  FIX::TimeUnit TimeUnit_73("STRING_Wk");
  msg.set(TimeUnit_73);
  Instrument_73.insert(TimeUnit_73.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_73(2);
  msg.set(UnderlyingPriceDeterminationMethod_73);
  Instrument_73.insert(UnderlyingPriceDeterminationMethod_73.getString());
  FIX::UnitOfMeasure UnitOfMeasure_73("STRING_lbs");
  msg.set(UnitOfMeasure_73);
  Instrument_73.insert(UnitOfMeasure_73.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_73;
  UnitOfMeasureQty_73.setString("14021121");
  msg.set(UnitOfMeasureQty_73);
  Instrument_73.insert(UnitOfMeasureQty_73.getString());
  FIX::ValuationMethod ValuationMethod_73("STRING_CDS");
  msg.set(ValuationMethod_73);
  Instrument_73.insert(ValuationMethod_73.getString());
  all_values.push_back(Instrument_73);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_141;
    FIX::ComplexEventCondition ComplexEventCondition_141(1);
    noComplexEvents_0_0.set(ComplexEventCondition_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventCondition_141.getString());
    FIX::ComplexEventPrice ComplexEventPrice_141;
    ComplexEventPrice_141.setString("1674622");
    noComplexEvents_0_0.set(ComplexEventPrice_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPrice_141.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_141(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceBoundaryMethod_141.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_141;
    ComplexEventPriceBoundaryPrecision_141.setString("48.520000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceBoundaryPrecision_141.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_141(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventPriceTimeType_141.getString());
    FIX::ComplexEventType ComplexEventType_141(5);
    noComplexEvents_0_0.set(ComplexEventType_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexEventType_141.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_141;
    ComplexOptPayoutAmount_141.setString("8958842");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_141);
    ComplexEvents_NoComplexEvents_141.insert(ComplexOptPayoutAmount_141.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_141);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_289;
      FIX::ComplexEventEndDate ComplexEventEndDate_289(FIX::UTCTIMESTAMP(0, 32, 8, 2, 3, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_289);
      ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventEndDate_289.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_289(FIX::UTCTIMESTAMP(1, 44, 43, 14, 6, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_289);
      ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventStartDate_289.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_289);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_584;
        FIX::ComplexEventEndTime ComplexEventEndTime_584(FIX::UTCTIMEONLY(11, 42, 31));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_584);
        ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventEndTime_584.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_584(FIX::UTCTIMEONLY(0, 56, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_584);
        ComplexEventTimes_NoComplexEventTimes_584.insert(ComplexEventStartTime_584.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_584);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_585;
        FIX::ComplexEventEndTime ComplexEventEndTime_585(FIX::UTCTIMEONLY(4, 7, 40));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_585);
        ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventEndTime_585.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_585(FIX::UTCTIMEONLY(20, 2, 8));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_585);
        ComplexEventTimes_NoComplexEventTimes_585.insert(ComplexEventStartTime_585.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_585);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_142;
    FIX::ComplexEventCondition ComplexEventCondition_142(2);
    noComplexEvents_0_1.set(ComplexEventCondition_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventCondition_142.getString());
    FIX::ComplexEventPrice ComplexEventPrice_142;
    ComplexEventPrice_142.setString("8310382");
    noComplexEvents_0_1.set(ComplexEventPrice_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPrice_142.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_142(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceBoundaryMethod_142.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_142;
    ComplexEventPriceBoundaryPrecision_142.setString("2.650000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceBoundaryPrecision_142.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_142(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventPriceTimeType_142.getString());
    FIX::ComplexEventType ComplexEventType_142(9);
    noComplexEvents_0_1.set(ComplexEventType_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexEventType_142.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_142;
    ComplexOptPayoutAmount_142.setString("12654798");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_142);
    ComplexEvents_NoComplexEvents_142.insert(ComplexOptPayoutAmount_142.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_142);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_290;
      FIX::ComplexEventEndDate ComplexEventEndDate_290(FIX::UTCTIMESTAMP(10, 35, 14, 15, 2, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_290);
      ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventEndDate_290.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_290(FIX::UTCTIMESTAMP(0, 14, 35, 23, 3, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_290);
      ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventStartDate_290.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_290);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_586;
        FIX::ComplexEventEndTime ComplexEventEndTime_586(FIX::UTCTIMEONLY(0, 36, 47));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_586);
        ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventEndTime_586.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_586(FIX::UTCTIMEONLY(13, 41, 45));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_586);
        ComplexEventTimes_NoComplexEventTimes_586.insert(ComplexEventStartTime_586.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_586);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_587;
        FIX::ComplexEventEndTime ComplexEventEndTime_587(FIX::UTCTIMEONLY(23, 26, 19));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_587);
        ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventEndTime_587.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_587(FIX::UTCTIMEONLY(17, 45, 52));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_587);
        ComplexEventTimes_NoComplexEventTimes_587.insert(ComplexEventStartTime_587.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_587);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_588;
        FIX::ComplexEventEndTime ComplexEventEndTime_588(FIX::UTCTIMEONLY(11, 19, 19));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_588);
        ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventEndTime_588.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_588(FIX::UTCTIMEONLY(9, 59, 58));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_588);
        ComplexEventTimes_NoComplexEventTimes_588.insert(ComplexEventStartTime_588.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_588);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_291;
      FIX::ComplexEventEndDate ComplexEventEndDate_291(FIX::UTCTIMESTAMP(14, 26, 9, 16, 2, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_291);
      ComplexEventDates_NoComplexEventDates_291.insert(ComplexEventEndDate_291.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_291(FIX::UTCTIMESTAMP(5, 6, 39, 11, 8, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_291);
      ComplexEventDates_NoComplexEventDates_291.insert(ComplexEventStartDate_291.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_291);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_589;
        FIX::ComplexEventEndTime ComplexEventEndTime_589(FIX::UTCTIMEONLY(16, 58, 4));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_589);
        ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventEndTime_589.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_589(FIX::UTCTIMEONLY(7, 49, 19));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_589);
        ComplexEventTimes_NoComplexEventTimes_589.insert(ComplexEventStartTime_589.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_589);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_590;
        FIX::ComplexEventEndTime ComplexEventEndTime_590(FIX::UTCTIMEONLY(16, 39, 51));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_590);
        ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventEndTime_590.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_590(FIX::UTCTIMEONLY(16, 43, 13));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_590);
        ComplexEventTimes_NoComplexEventTimes_590.insert(ComplexEventStartTime_590.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_590);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_150;
    FIX::EventDate EventDate_150("LOCALMKTDATE_387910789");
    noEvents_0_0.set(EventDate_150);
    EvntGrp_NoEvents_150.insert(EventDate_150.getString());
    FIX::EventPx EventPx_150;
    EventPx_150.setString("11375681");
    noEvents_0_0.set(EventPx_150);
    EvntGrp_NoEvents_150.insert(EventPx_150.getString());
    FIX::EventText EventText_150("STRING_608751234");
    noEvents_0_0.set(EventText_150);
    EvntGrp_NoEvents_150.insert(EventText_150.getString());
    FIX::EventTime EventTime_150(FIX::UTCTIMESTAMP(8, 24, 25, 14, 8, 2014));
    noEvents_0_0.set(EventTime_150);
    EvntGrp_NoEvents_150.insert(EventTime_150.getString());
    FIX::EventType EventType_150(6);
    noEvents_0_0.set(EventType_150);
    EvntGrp_NoEvents_150.insert(EventType_150.getString());
    all_values.push_back(EvntGrp_NoEvents_150);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_152;
    FIX::InstrumentPartyID InstrumentPartyID_152("STRING_1078846148");
    noInstrumentParties_0_0.set(InstrumentPartyID_152);
    InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyID_152.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_152('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_152);
    InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyIDSource_152.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_152(98199040);
    noInstrumentParties_0_0.set(InstrumentPartyRole_152);
    InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyRole_152.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_152);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321;
      FIX::InstrumentPartySubID InstrumentPartySubID_321("STRING_1807274996");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_321);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321.insert(InstrumentPartySubID_321.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_321(374776724);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_321);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321.insert(InstrumentPartySubIDType_321.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_163;
    FIX::SecurityAltID SecurityAltID_163("STRING_159870547");
    noSecurityAltID_0_0.set(SecurityAltID_163);
    SecAltIDGrp_NoSecurityAltID_163.insert(SecurityAltID_163.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_163("STRING_2115811474");
    noSecurityAltID_0_0.set(SecurityAltIDSource_163);
    SecAltIDGrp_NoSecurityAltID_163.insert(SecurityAltIDSource_163.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_163);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_164;
    FIX::SecurityAltID SecurityAltID_164("STRING_1154279235");
    noSecurityAltID_0_1.set(SecurityAltID_164);
    SecAltIDGrp_NoSecurityAltID_164.insert(SecurityAltID_164.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_164("STRING_1091206600");
    noSecurityAltID_0_1.set(SecurityAltIDSource_164);
    SecAltIDGrp_NoSecurityAltID_164.insert(SecurityAltIDSource_164.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_164);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_165;
    FIX::SecurityAltID SecurityAltID_165("STRING_651583794");
    noSecurityAltID_0_2.set(SecurityAltID_165);
    SecAltIDGrp_NoSecurityAltID_165.insert(SecurityAltID_165.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_165("STRING_295013506");
    noSecurityAltID_0_2.set(SecurityAltIDSource_165);
    SecAltIDGrp_NoSecurityAltID_165.insert(SecurityAltIDSource_165.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_165);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_146;
  FIX::SecurityXML SecurityXML_147("XMLDATA_299169143");
  msg.set(SecurityXML_147);
  FIX::SecurityXMLLen SecurityXMLLen_73(780565089);
  msg.set(SecurityXMLLen_73);
  FIX::SecurityXMLSchema SecurityXMLSchema_73("STRING_1182695234");
  msg.set(SecurityXMLSchema_73);
  SecurityXML_146.insert(SecurityXMLSchema_73.getString());
  all_values.push_back(SecurityXML_146);

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_2;
    FIX::LegBidForwardPoints LegBidForwardPoints_2;
    LegBidForwardPoints_2.setString("7077181");
    noLegs_0_0.set(LegBidForwardPoints_2);
    LegQuotGrp_NoLegs_2.insert(LegBidForwardPoints_2.getString());
    FIX::LegBidPx LegBidPx_2;
    LegBidPx_2.setString("14458707");
    noLegs_0_0.set(LegBidPx_2);
    LegQuotGrp_NoLegs_2.insert(LegBidPx_2.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_2;
    LegOfferForwardPoints_2.setString("14999479");
    noLegs_0_0.set(LegOfferForwardPoints_2);
    LegQuotGrp_NoLegs_2.insert(LegOfferForwardPoints_2.getString());
    FIX::LegOfferPx LegOfferPx_2;
    LegOfferPx_2.setString("18452863");
    noLegs_0_0.set(LegOfferPx_2);
    LegQuotGrp_NoLegs_2.insert(LegOfferPx_2.getString());
    FIX::LegOrderQty LegOrderQty_20;
    LegOrderQty_20.setString("20546219");
    noLegs_0_0.set(LegOrderQty_20);
    LegQuotGrp_NoLegs_2.insert(LegOrderQty_20.getString());
    FIX::LegPriceType LegPriceType_2(1919460389);
    noLegs_0_0.set(LegPriceType_2);
    LegQuotGrp_NoLegs_2.insert(LegPriceType_2.getString());
    FIX::LegQty LegQty_20;
    LegQty_20.setString("14959253");
    noLegs_0_0.set(LegQty_20);
    LegQuotGrp_NoLegs_2.insert(LegQty_20.getString());
    FIX::LegRefID LegRefID_20("STRING_2062679299");
    noLegs_0_0.set(LegRefID_20);
    LegQuotGrp_NoLegs_2.insert(LegRefID_20.getString());
    FIX::LegSettlDate LegSettlDate_20("LOCALMKTDATE_476862046");
    noLegs_0_0.set(LegSettlDate_20);
    LegQuotGrp_NoLegs_2.insert(LegSettlDate_20.getString());
    FIX::LegSettlType LegSettlType_20('1');
    noLegs_0_0.set(LegSettlType_20);
    LegQuotGrp_NoLegs_2.insert(LegSettlType_20.getString());
    FIX::LegSwapType LegSwapType_20(4);
    noLegs_0_0.set(LegSwapType_20);
    LegQuotGrp_NoLegs_2.insert(LegSwapType_20.getString());
    all_values.push_back(LegQuotGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_114;
    FIX::EncodedLegIssuer EncodedLegIssuer_114("DATA_720524802");
    noLegs_0_0.set(EncodedLegIssuer_114);
    InstrumentLeg_114.insert(EncodedLegIssuer_114.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_114(498748064);
    noLegs_0_0.set(EncodedLegIssuerLen_114);
    InstrumentLeg_114.insert(EncodedLegIssuerLen_114.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_114("DATA_864502776");
    noLegs_0_0.set(EncodedLegSecurityDesc_114);
    InstrumentLeg_114.insert(EncodedLegSecurityDesc_114.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_114(1799370950);
    noLegs_0_0.set(EncodedLegSecurityDescLen_114);
    InstrumentLeg_114.insert(EncodedLegSecurityDescLen_114.getString());
    FIX::LegCFICode LegCFICode_114("STRING_903215382");
    noLegs_0_0.set(LegCFICode_114);
    InstrumentLeg_114.insert(LegCFICode_114.getString());
    FIX::LegContractMultiplier LegContractMultiplier_114;
    LegContractMultiplier_114.setString("9627018");
    noLegs_0_0.set(LegContractMultiplier_114);
    InstrumentLeg_114.insert(LegContractMultiplier_114.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_114(1545877339);
    noLegs_0_0.set(LegContractMultiplierUnit_114);
    InstrumentLeg_114.insert(LegContractMultiplierUnit_114.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_114("MONTHYEAR_563006730");
    noLegs_0_0.set(LegContractSettlMonth_114);
    InstrumentLeg_114.insert(LegContractSettlMonth_114.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_114("COUNTRY_1337478541");
    noLegs_0_0.set(LegCountryOfIssue_114);
    InstrumentLeg_114.insert(LegCountryOfIssue_114.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_114("LOCALMKTDATE_1721374875");
    noLegs_0_0.set(LegCouponPaymentDate_114);
    InstrumentLeg_114.insert(LegCouponPaymentDate_114.getString());
    FIX::LegCouponRate LegCouponRate_114;
    LegCouponRate_114.setString("72.770000");
    noLegs_0_0.set(LegCouponRate_114);
    InstrumentLeg_114.insert(LegCouponRate_114.getString());
    FIX::LegCreditRating LegCreditRating_114("STRING_1305806367");
    noLegs_0_0.set(LegCreditRating_114);
    InstrumentLeg_114.insert(LegCreditRating_114.getString());
    FIX::LegCurrency LegCurrency_114("CAN");
    noLegs_0_0.set(LegCurrency_114);
    InstrumentLeg_114.insert(LegCurrency_114.getString());
    FIX::LegDatedDate LegDatedDate_114("LOCALMKTDATE_1957390161");
    noLegs_0_0.set(LegDatedDate_114);
    InstrumentLeg_114.insert(LegDatedDate_114.getString());
    FIX::LegExerciseStyle LegExerciseStyle_114(1023183969);
    noLegs_0_0.set(LegExerciseStyle_114);
    InstrumentLeg_114.insert(LegExerciseStyle_114.getString());
    FIX::LegFactor LegFactor_114;
    LegFactor_114.setString("21132530");
    noLegs_0_0.set(LegFactor_114);
    InstrumentLeg_114.insert(LegFactor_114.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_114(590471602);
    noLegs_0_0.set(LegFlowScheduleType_114);
    InstrumentLeg_114.insert(LegFlowScheduleType_114.getString());
    FIX::LegInstrRegistry LegInstrRegistry_114("STRING_58395555");
    noLegs_0_0.set(LegInstrRegistry_114);
    InstrumentLeg_114.insert(LegInstrRegistry_114.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_114("LOCALMKTDATE_1077806499");
    noLegs_0_0.set(LegInterestAccrualDate_114);
    InstrumentLeg_114.insert(LegInterestAccrualDate_114.getString());
    FIX::LegIssueDate LegIssueDate_114("LOCALMKTDATE_1298189796");
    noLegs_0_0.set(LegIssueDate_114);
    InstrumentLeg_114.insert(LegIssueDate_114.getString());
    FIX::LegIssuer LegIssuer_114("STRING_1504266255");
    noLegs_0_0.set(LegIssuer_114);
    InstrumentLeg_114.insert(LegIssuer_114.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_114("STRING_430270767");
    noLegs_0_0.set(LegLocaleOfIssue_114);
    InstrumentLeg_114.insert(LegLocaleOfIssue_114.getString());
    FIX::LegMaturityDate LegMaturityDate_114("LOCALMKTDATE_995992513");
    noLegs_0_0.set(LegMaturityDate_114);
    InstrumentLeg_114.insert(LegMaturityDate_114.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_114("MONTHYEAR_1411404542");
    noLegs_0_0.set(LegMaturityMonthYear_114);
    InstrumentLeg_114.insert(LegMaturityMonthYear_114.getString());
    FIX::LegMaturityTime LegMaturityTime_114("TZTIMEONLY_202247508");
    noLegs_0_0.set(LegMaturityTime_114);
    InstrumentLeg_114.insert(LegMaturityTime_114.getString());
    FIX::LegOptAttribute LegOptAttribute_114('3');
    noLegs_0_0.set(LegOptAttribute_114);
    InstrumentLeg_114.insert(LegOptAttribute_114.getString());
    FIX::LegOptionRatio LegOptionRatio_114;
    LegOptionRatio_114.setString("13266001");
    noLegs_0_0.set(LegOptionRatio_114);
    InstrumentLeg_114.insert(LegOptionRatio_114.getString());
    FIX::LegPool LegPool_114("STRING_679109554");
    noLegs_0_0.set(LegPool_114);
    InstrumentLeg_114.insert(LegPool_114.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_114("STRING_1954534770");
    noLegs_0_0.set(LegPriceUnitOfMeasure_114);
    InstrumentLeg_114.insert(LegPriceUnitOfMeasure_114.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_114;
    LegPriceUnitOfMeasureQty_114.setString("230207");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_114);
    InstrumentLeg_114.insert(LegPriceUnitOfMeasureQty_114.getString());
    FIX::LegProduct LegProduct_114(1399634356);
    noLegs_0_0.set(LegProduct_114);
    InstrumentLeg_114.insert(LegProduct_114.getString());
    FIX::LegPutOrCall LegPutOrCall_114(305799187);
    noLegs_0_0.set(LegPutOrCall_114);
    InstrumentLeg_114.insert(LegPutOrCall_114.getString());
    FIX::LegRatioQty LegRatioQty_114;
    LegRatioQty_114.setString("8875235");
    noLegs_0_0.set(LegRatioQty_114);
    InstrumentLeg_114.insert(LegRatioQty_114.getString());
    FIX::LegRedemptionDate LegRedemptionDate_114("LOCALMKTDATE_1051521658");
    noLegs_0_0.set(LegRedemptionDate_114);
    InstrumentLeg_114.insert(LegRedemptionDate_114.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_114("STRING_1209014569");
    noLegs_0_0.set(LegRepoCollateralSecurityType_114);
    InstrumentLeg_114.insert(LegRepoCollateralSecurityType_114.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_114;
    LegRepurchaseRate_114.setString("53.800000");
    noLegs_0_0.set(LegRepurchaseRate_114);
    InstrumentLeg_114.insert(LegRepurchaseRate_114.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_114(449915349);
    noLegs_0_0.set(LegRepurchaseTerm_114);
    InstrumentLeg_114.insert(LegRepurchaseTerm_114.getString());
    FIX::LegSecurityDesc LegSecurityDesc_114("STRING_1772021299");
    noLegs_0_0.set(LegSecurityDesc_114);
    InstrumentLeg_114.insert(LegSecurityDesc_114.getString());
    FIX::LegSecurityExchange LegSecurityExchange_114("EXCHANGE_1040220273");
    noLegs_0_0.set(LegSecurityExchange_114);
    InstrumentLeg_114.insert(LegSecurityExchange_114.getString());
    FIX::LegSecurityID LegSecurityID_114("STRING_23806576");
    noLegs_0_0.set(LegSecurityID_114);
    InstrumentLeg_114.insert(LegSecurityID_114.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_114("STRING_347414928");
    noLegs_0_0.set(LegSecurityIDSource_114);
    InstrumentLeg_114.insert(LegSecurityIDSource_114.getString());
    FIX::LegSecuritySubType LegSecuritySubType_114("STRING_198542992");
    noLegs_0_0.set(LegSecuritySubType_114);
    InstrumentLeg_114.insert(LegSecuritySubType_114.getString());
    FIX::LegSecurityType LegSecurityType_114("STRING_751977039");
    noLegs_0_0.set(LegSecurityType_114);
    InstrumentLeg_114.insert(LegSecurityType_114.getString());
    FIX::LegSide LegSide_114('1');
    noLegs_0_0.set(LegSide_114);
    InstrumentLeg_114.insert(LegSide_114.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_114("STRING_8449505");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_114);
    InstrumentLeg_114.insert(LegStateOrProvinceOfIssue_114.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_114("CHF");
    noLegs_0_0.set(LegStrikeCurrency_114);
    InstrumentLeg_114.insert(LegStrikeCurrency_114.getString());
    FIX::LegStrikePrice LegStrikePrice_114;
    LegStrikePrice_114.setString("5989211");
    noLegs_0_0.set(LegStrikePrice_114);
    InstrumentLeg_114.insert(LegStrikePrice_114.getString());
    FIX::LegSymbol LegSymbol_114("STRING_1833556563");
    noLegs_0_0.set(LegSymbol_114);
    InstrumentLeg_114.insert(LegSymbol_114.getString());
    FIX::LegSymbolSfx LegSymbolSfx_114("STRING_1057591030");
    noLegs_0_0.set(LegSymbolSfx_114);
    InstrumentLeg_114.insert(LegSymbolSfx_114.getString());
    FIX::LegTimeUnit LegTimeUnit_114("STRING_1897110904");
    noLegs_0_0.set(LegTimeUnit_114);
    InstrumentLeg_114.insert(LegTimeUnit_114.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_114("STRING_1190339171");
    noLegs_0_0.set(LegUnitOfMeasure_114);
    InstrumentLeg_114.insert(LegUnitOfMeasure_114.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_114;
    LegUnitOfMeasureQty_114.setString("14878617");
    noLegs_0_0.set(LegUnitOfMeasureQty_114);
    InstrumentLeg_114.insert(LegUnitOfMeasureQty_114.getString());
    all_values.push_back(InstrumentLeg_114);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_221;
      FIX::LegSecurityAltID LegSecurityAltID_221("STRING_454260065");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_221);
      LegSecAltIDGrp_NoLegSecurityAltID_221.insert(LegSecurityAltID_221.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_221("STRING_1690109305");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_221);
      LegSecAltIDGrp_NoLegSecurityAltID_221.insert(LegSecurityAltIDSource_221.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_221);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_222;
      FIX::LegSecurityAltID LegSecurityAltID_222("STRING_1090054033");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_222);
      LegSecAltIDGrp_NoLegSecurityAltID_222.insert(LegSecurityAltID_222.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_222("STRING_1780860258");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_222);
      LegSecAltIDGrp_NoLegSecurityAltID_222.insert(LegSecurityAltIDSource_222.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_222);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_11;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_11("CAN");
    noLegs_0_0.set(LegBenchmarkCurveCurrency_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurveCurrency_11.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_11("STRING_1803881045");
    noLegs_0_0.set(LegBenchmarkCurveName_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurveName_11.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_11("STRING_1621369567");
    noLegs_0_0.set(LegBenchmarkCurvePoint_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurvePoint_11.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_11;
    LegBenchmarkPrice_11.setString("12029043");
    noLegs_0_0.set(LegBenchmarkPrice_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkPrice_11.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_11(543920960);
    noLegs_0_0.set(LegBenchmarkPriceType_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkPriceType_11.getString());
    all_values.push_back(LegBenchmarkCurveData_11);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_44;
      FIX::LegStipulationType LegStipulationType_44("STRING_264435263");
      noLegStipulations_0_1_0.set(LegStipulationType_44);
      LegStipulations_NoLegStipulations_44.insert(LegStipulationType_44.getString());
      FIX::LegStipulationValue LegStipulationValue_44("STRING_246662692");
      noLegStipulations_0_1_0.set(LegStipulationValue_44);
      LegStipulations_NoLegStipulations_44.insert(LegStipulationValue_44.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_44);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_45;
      FIX::LegStipulationType LegStipulationType_45("STRING_975322927");
      noLegStipulations_0_1_1.set(LegStipulationType_45);
      LegStipulations_NoLegStipulations_45.insert(LegStipulationType_45.getString());
      FIX::LegStipulationValue LegStipulationValue_45("STRING_2036456562");
      noLegStipulations_0_1_1.set(LegStipulationValue_45);
      LegStipulations_NoLegStipulations_45.insert(LegStipulationValue_45.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_45);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_113;
      FIX::NestedPartyID NestedPartyID_113("STRING_999129504");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_113);
      NestedParties_NoNestedPartyIDs_113.insert(NestedPartyID_113.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_113('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_113);
      NestedParties_NoNestedPartyIDs_113.insert(NestedPartyIDSource_113.getString());
      FIX::NestedPartyRole NestedPartyRole_113(1485425957);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_113);
      NestedParties_NoNestedPartyIDs_113.insert(NestedPartyRole_113.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_113);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_219;
        FIX::NestedPartySubID NestedPartySubID_219("STRING_250403001");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_219);
        NstdPtysSubGrp_NoNestedPartySubIDs_219.insert(NestedPartySubID_219.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_219(1493875463);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_219);
        NstdPtysSubGrp_NoNestedPartySubIDs_219.insert(NestedPartySubIDType_219.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_219);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_114;
      FIX::NestedPartyID NestedPartyID_114("STRING_1378783903");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_114);
      NestedParties_NoNestedPartyIDs_114.insert(NestedPartyID_114.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_114('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_114);
      NestedParties_NoNestedPartyIDs_114.insert(NestedPartyIDSource_114.getString());
      FIX::NestedPartyRole NestedPartyRole_114(2092796571);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_114);
      NestedParties_NoNestedPartyIDs_114.insert(NestedPartyRole_114.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_114);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_220;
        FIX::NestedPartySubID NestedPartySubID_220("STRING_1287778562");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_220);
        NstdPtysSubGrp_NoNestedPartySubIDs_220.insert(NestedPartySubID_220.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_220(1842423827);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_220);
        NstdPtysSubGrp_NoNestedPartySubIDs_220.insert(NestedPartySubIDType_220.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_220);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_221;
        FIX::NestedPartySubID NestedPartySubID_221("STRING_107712341");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_221);
        NstdPtysSubGrp_NoNestedPartySubIDs_221.insert(NestedPartySubID_221.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_221(628156712);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_221);
        NstdPtysSubGrp_NoNestedPartySubIDs_221.insert(NestedPartySubIDType_221.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_221);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_222;
        FIX::NestedPartySubID NestedPartySubID_222("STRING_440559949");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_222);
        NstdPtysSubGrp_NoNestedPartySubIDs_222.insert(NestedPartySubID_222.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_222(561972406);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_222);
        NstdPtysSubGrp_NoNestedPartySubIDs_222.insert(NestedPartySubIDType_222.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_222);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_21;
  FIX::CashOrderQty CashOrderQty_21;
  CashOrderQty_21.setString("1707823");
  msg.set(CashOrderQty_21);
  OrderQtyData_21.insert(CashOrderQty_21.getString());
  FIX::OrderPercent OrderPercent_21;
  OrderPercent_21.setString("39.820000");
  msg.set(OrderPercent_21);
  OrderQtyData_21.insert(OrderPercent_21.getString());
  FIX::OrderQty OrderQty_32;
  OrderQty_32.setString("1953490");
  msg.set(OrderQty_32);
  OrderQtyData_21.insert(OrderQty_32.getString());
  FIX::RoundingDirection RoundingDirection_21('2');
  msg.set(RoundingDirection_21);
  OrderQtyData_21.insert(RoundingDirection_21.getString());
  FIX::RoundingModulus RoundingModulus_21;
  RoundingModulus_21.setString("2802354");
  msg.set(RoundingModulus_21);
  OrderQtyData_21.insert(RoundingModulus_21.getString());
  all_values.push_back(OrderQtyData_21);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_108;
    FIX::PartyID PartyID_108("STRING_2013887148");
    noPartyIDs_0_0.set(PartyID_108);
    Parties_NoPartyIDs_108.insert(PartyID_108.getString());
    FIX::PartyIDSource PartyIDSource_108('2');
    noPartyIDs_0_0.set(PartyIDSource_108);
    Parties_NoPartyIDs_108.insert(PartyIDSource_108.getString());
    FIX::PartyRole PartyRole_108(76);
    noPartyIDs_0_0.set(PartyRole_108);
    Parties_NoPartyIDs_108.insert(PartyRole_108.getString());
    all_values.push_back(Parties_NoPartyIDs_108);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_225;
      FIX::PartySubID PartySubID_225("STRING_1747575096");
      noPartySubIDs_0_1_0.set(PartySubID_225);
      PtysSubGrp_NoPartySubIDs_225.insert(PartySubID_225.getString());
      FIX::PartySubIDType PartySubIDType_225(16);
      noPartySubIDs_0_1_0.set(PartySubIDType_225);
      PtysSubGrp_NoPartySubIDs_225.insert(PartySubIDType_225.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_225);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_226;
      FIX::PartySubID PartySubID_226("STRING_1367134006");
      noPartySubIDs_0_1_1.set(PartySubID_226);
      PtysSubGrp_NoPartySubIDs_226.insert(PartySubID_226.getString());
      FIX::PartySubIDType PartySubIDType_226(32);
      noPartySubIDs_0_1_1.set(PartySubIDType_226);
      PtysSubGrp_NoPartySubIDs_226.insert(PartySubIDType_226.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_226);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_227;
      FIX::PartySubID PartySubID_227("STRING_1929213032");
      noPartySubIDs_0_1_2.set(PartySubID_227);
      PtysSubGrp_NoPartySubIDs_227.insert(PartySubID_227.getString());
      FIX::PartySubIDType PartySubIDType_227(27);
      noPartySubIDs_0_1_2.set(PartySubIDType_227);
      PtysSubGrp_NoPartySubIDs_227.insert(PartySubIDType_227.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_227);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_109;
    FIX::PartyID PartyID_109("STRING_1872935853");
    noPartyIDs_0_1.set(PartyID_109);
    Parties_NoPartyIDs_109.insert(PartyID_109.getString());
    FIX::PartyIDSource PartyIDSource_109('H');
    noPartyIDs_0_1.set(PartyIDSource_109);
    Parties_NoPartyIDs_109.insert(PartyIDSource_109.getString());
    FIX::PartyRole PartyRole_109(55);
    noPartyIDs_0_1.set(PartyRole_109);
    Parties_NoPartyIDs_109.insert(PartyRole_109.getString());
    all_values.push_back(Parties_NoPartyIDs_109);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_228;
      FIX::PartySubID PartySubID_228("STRING_613547156");
      noPartySubIDs_1_1_0.set(PartySubID_228);
      PtysSubGrp_NoPartySubIDs_228.insert(PartySubID_228.getString());
      FIX::PartySubIDType PartySubIDType_228(26);
      noPartySubIDs_1_1_0.set(PartySubIDType_228);
      PtysSubGrp_NoPartySubIDs_228.insert(PartySubIDType_228.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_228);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_10;
    FIX::QuoteQualifier QuoteQualifier_10('5');
    noQuoteQualifiers_0_0.set(QuoteQualifier_10);
    QuotQualGrp_NoQuoteQualifiers_10.insert(QuoteQualifier_10.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_10);

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_11;
    FIX::QuoteQualifier QuoteQualifier_11('1');
    noQuoteQualifiers_0_1.set(QuoteQualifier_11);
    QuotQualGrp_NoQuoteQualifiers_11.insert(QuoteQualifier_11.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_11);

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_2;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_12;
    FIX::QuoteQualifier QuoteQualifier_12('1');
    noQuoteQualifiers_0_2.set(QuoteQualifier_12);
    QuotQualGrp_NoQuoteQualifiers_12.insert(QuoteQualifier_12.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_12);

    msg.addGroup(noQuoteQualifiers_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_24;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_24("JPY");
  msg.set(BenchmarkCurveCurrency_24);
  SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurveCurrency_24.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_24("STRING_EUREPO");
  msg.set(BenchmarkCurveName_24);
  SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurveName_24.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_24("STRING_694360208");
  msg.set(BenchmarkCurvePoint_24);
  SpreadOrBenchmarkCurveData_24.insert(BenchmarkCurvePoint_24.getString());
  FIX::BenchmarkPrice BenchmarkPrice_24;
  BenchmarkPrice_24.setString("7882445");
  msg.set(BenchmarkPrice_24);
  SpreadOrBenchmarkCurveData_24.insert(BenchmarkPrice_24.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_24(145276734);
  msg.set(BenchmarkPriceType_24);
  SpreadOrBenchmarkCurveData_24.insert(BenchmarkPriceType_24.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_24("STRING_77490543");
  msg.set(BenchmarkSecurityID_24);
  SpreadOrBenchmarkCurveData_24.insert(BenchmarkSecurityID_24.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_24("STRING_983593595");
  msg.set(BenchmarkSecurityIDSource_24);
  SpreadOrBenchmarkCurveData_24.insert(BenchmarkSecurityIDSource_24.getString());
  FIX::Spread Spread_24;
  Spread_24.setString("5377943");
  msg.set(Spread_24);
  SpreadOrBenchmarkCurveData_24.insert(Spread_24.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_24);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_38;
    FIX::StipulationType StipulationType_38("STRING_HAIRCUT");
    noStipulations_0_0.set(StipulationType_38);
    Stipulations_NoStipulations_38.insert(StipulationType_38.getString());
    FIX::StipulationValue StipulationValue_38("STRING_404197816");
    noStipulations_0_0.set(StipulationValue_38);
    Stipulations_NoStipulations_38.insert(StipulationValue_38.getString());
    all_values.push_back(Stipulations_NoStipulations_38);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_108;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_108("DATA_1231007382");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingIssuer_108.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_108(796008894);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingIssuerLen_108.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_108("DATA_1440957313");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingSecurityDesc_108.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_108(1873337449);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_108);
    UnderlyingInstrument_108.insert(EncodedUnderlyingSecurityDescLen_108.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_108;
    UnderlyingAdjustedQuantity_108.setString("156592");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_108);
    UnderlyingInstrument_108.insert(UnderlyingAdjustedQuantity_108.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_108;
    UnderlyingAllocationPercent_108.setString("16.760000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_108);
    UnderlyingInstrument_108.insert(UnderlyingAllocationPercent_108.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_108;
    UnderlyingAttachmentPoint_108.setString("68.330000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_108);
    UnderlyingInstrument_108.insert(UnderlyingAttachmentPoint_108.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_108("STRING_234439114");
    noUnderlyings_0_0.set(UnderlyingCFICode_108);
    UnderlyingInstrument_108.insert(UnderlyingCFICode_108.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_108("STRING_655473881");
    noUnderlyings_0_0.set(UnderlyingCPProgram_108);
    UnderlyingInstrument_108.insert(UnderlyingCPProgram_108.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_108("STRING_774738526");
    noUnderlyings_0_0.set(UnderlyingCPRegType_108);
    UnderlyingInstrument_108.insert(UnderlyingCPRegType_108.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_108;
    UnderlyingCapValue_108.setString("568418");
    noUnderlyings_0_0.set(UnderlyingCapValue_108);
    UnderlyingInstrument_108.insert(UnderlyingCapValue_108.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_108;
    UnderlyingCashAmount_108.setString("6313290");
    noUnderlyings_0_0.set(UnderlyingCashAmount_108);
    UnderlyingInstrument_108.insert(UnderlyingCashAmount_108.getString());
    FIX::UnderlyingCashType UnderlyingCashType_108("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_108);
    UnderlyingInstrument_108.insert(UnderlyingCashType_108.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_108;
    UnderlyingContractMultiplier_108.setString("12580285");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_108);
    UnderlyingInstrument_108.insert(UnderlyingContractMultiplier_108.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_108(837371826);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_108);
    UnderlyingInstrument_108.insert(UnderlyingContractMultiplierUnit_108.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_108("COUNTRY_1947145762");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingCountryOfIssue_108.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_108("LOCALMKTDATE_1376588362");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_108);
    UnderlyingInstrument_108.insert(UnderlyingCouponPaymentDate_108.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_108;
    UnderlyingCouponRate_108.setString("94.790000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_108);
    UnderlyingInstrument_108.insert(UnderlyingCouponRate_108.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_108("STRING_53462373");
    noUnderlyings_0_0.set(UnderlyingCreditRating_108);
    UnderlyingInstrument_108.insert(UnderlyingCreditRating_108.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_108("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_108);
    UnderlyingInstrument_108.insert(UnderlyingCurrency_108.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_108;
    UnderlyingCurrentValue_108.setString("7478225");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_108);
    UnderlyingInstrument_108.insert(UnderlyingCurrentValue_108.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_108;
    UnderlyingDetachmentPoint_108.setString("14.640000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_108);
    UnderlyingInstrument_108.insert(UnderlyingDetachmentPoint_108.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_108;
    UnderlyingDirtyPrice_108.setString("3034805");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_108);
    UnderlyingInstrument_108.insert(UnderlyingDirtyPrice_108.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_108;
    UnderlyingEndPrice_108.setString("8253131");
    noUnderlyings_0_0.set(UnderlyingEndPrice_108);
    UnderlyingInstrument_108.insert(UnderlyingEndPrice_108.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_108;
    UnderlyingEndValue_108.setString("12272150");
    noUnderlyings_0_0.set(UnderlyingEndValue_108);
    UnderlyingInstrument_108.insert(UnderlyingEndValue_108.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_108(841274894);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_108);
    UnderlyingInstrument_108.insert(UnderlyingExerciseStyle_108.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_108;
    UnderlyingFXRate_108.setString("11830391");
    noUnderlyings_0_0.set(UnderlyingFXRate_108);
    UnderlyingInstrument_108.insert(UnderlyingFXRate_108.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_108('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_108);
    UnderlyingInstrument_108.insert(UnderlyingFXRateCalc_108.getString());
    FIX::UnderlyingFactor UnderlyingFactor_108;
    UnderlyingFactor_108.setString("12454727");
    noUnderlyings_0_0.set(UnderlyingFactor_108);
    UnderlyingInstrument_108.insert(UnderlyingFactor_108.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_108(876421375);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_108);
    UnderlyingInstrument_108.insert(UnderlyingFlowScheduleType_108.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_108("STRING_1146078802");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_108);
    UnderlyingInstrument_108.insert(UnderlyingInstrRegistry_108.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_108("LOCALMKTDATE_2041481605");
    noUnderlyings_0_0.set(UnderlyingIssueDate_108);
    UnderlyingInstrument_108.insert(UnderlyingIssueDate_108.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_108("STRING_169895041");
    noUnderlyings_0_0.set(UnderlyingIssuer_108);
    UnderlyingInstrument_108.insert(UnderlyingIssuer_108.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_108("STRING_871932603");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingLocaleOfIssue_108.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_108("LOCALMKTDATE_2057140857");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityDate_108.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_108("MONTHYEAR_1099916717");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityMonthYear_108.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_108("TZTIMEONLY_379515788");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_108);
    UnderlyingInstrument_108.insert(UnderlyingMaturityTime_108.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_108;
    UnderlyingNotionalPercentageOutstanding_108.setString("63.240000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_108);
    UnderlyingInstrument_108.insert(UnderlyingNotionalPercentageOutstanding_108.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_108('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_108);
    UnderlyingInstrument_108.insert(UnderlyingOptAttribute_108.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_108;
    UnderlyingOriginalNotionalPercentageOutstanding_108.setString("43.150000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_108);
    UnderlyingInstrument_108.insert(UnderlyingOriginalNotionalPercentageOutstanding_108.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_108("STRING_200938195");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_108);
    UnderlyingInstrument_108.insert(UnderlyingPriceUnitOfMeasure_108.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_108;
    UnderlyingPriceUnitOfMeasureQty_108.setString("2392360");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_108);
    UnderlyingInstrument_108.insert(UnderlyingPriceUnitOfMeasureQty_108.getString());
    FIX::UnderlyingProduct UnderlyingProduct_108(395056350);
    noUnderlyings_0_0.set(UnderlyingProduct_108);
    UnderlyingInstrument_108.insert(UnderlyingProduct_108.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_108(1458966727);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_108);
    UnderlyingInstrument_108.insert(UnderlyingPutOrCall_108.getString());
    FIX::UnderlyingPx UnderlyingPx_108;
    UnderlyingPx_108.setString("10766078");
    noUnderlyings_0_0.set(UnderlyingPx_108);
    UnderlyingInstrument_108.insert(UnderlyingPx_108.getString());
    FIX::UnderlyingQty UnderlyingQty_108;
    UnderlyingQty_108.setString("1947184");
    noUnderlyings_0_0.set(UnderlyingQty_108);
    UnderlyingInstrument_108.insert(UnderlyingQty_108.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_108("LOCALMKTDATE_688071441");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_108);
    UnderlyingInstrument_108.insert(UnderlyingRedemptionDate_108.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_108("STRING_1260317344");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_108);
    UnderlyingInstrument_108.insert(UnderlyingRepoCollateralSecurityType_108.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_108;
    UnderlyingRepurchaseRate_108.setString("8.380000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_108);
    UnderlyingInstrument_108.insert(UnderlyingRepurchaseRate_108.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_108(143448327);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_108);
    UnderlyingInstrument_108.insert(UnderlyingRepurchaseTerm_108.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_108("STRING_1418521189");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_108);
    UnderlyingInstrument_108.insert(UnderlyingRestructuringType_108.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_108("STRING_996003420");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityDesc_108.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_108("EXCHANGE_387069791");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityExchange_108.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_108("STRING_1722001768");
    noUnderlyings_0_0.set(UnderlyingSecurityID_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityID_108.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_108("STRING_1821316545");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityIDSource_108.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_108("STRING_1614284851");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_108);
    UnderlyingInstrument_108.insert(UnderlyingSecuritySubType_108.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_108("STRING_415793014");
    noUnderlyings_0_0.set(UnderlyingSecurityType_108);
    UnderlyingInstrument_108.insert(UnderlyingSecurityType_108.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_108("STRING_856872055");
    noUnderlyings_0_0.set(UnderlyingSeniority_108);
    UnderlyingInstrument_108.insert(UnderlyingSeniority_108.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_108("STRING_1529356271");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_108);
    UnderlyingInstrument_108.insert(UnderlyingSettlMethod_108.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_108(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_108);
    UnderlyingInstrument_108.insert(UnderlyingSettlementType_108.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_108;
    UnderlyingStartValue_108.setString("17332934");
    noUnderlyings_0_0.set(UnderlyingStartValue_108);
    UnderlyingInstrument_108.insert(UnderlyingStartValue_108.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_108("STRING_527951425");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_108);
    UnderlyingInstrument_108.insert(UnderlyingStateOrProvinceOfIssue_108.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_108("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_108);
    UnderlyingInstrument_108.insert(UnderlyingStrikeCurrency_108.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_108;
    UnderlyingStrikePrice_108.setString("13998840");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_108);
    UnderlyingInstrument_108.insert(UnderlyingStrikePrice_108.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_108("STRING_1464920891");
    noUnderlyings_0_0.set(UnderlyingSymbol_108);
    UnderlyingInstrument_108.insert(UnderlyingSymbol_108.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_108("STRING_855621540");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_108);
    UnderlyingInstrument_108.insert(UnderlyingSymbolSfx_108.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_108("STRING_1779399817");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_108);
    UnderlyingInstrument_108.insert(UnderlyingTimeUnit_108.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_108("STRING_1609017215");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_108);
    UnderlyingInstrument_108.insert(UnderlyingUnitOfMeasure_108.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_108;
    UnderlyingUnitOfMeasureQty_108.setString("4635284");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_108);
    UnderlyingInstrument_108.insert(UnderlyingUnitOfMeasureQty_108.getString());
    all_values.push_back(UnderlyingInstrument_108);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_216;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_216("STRING_1809955411");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_216);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_216.insert(UnderlyingSecurityAltID_216.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_216("STRING_702764529");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_216);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_216.insert(UnderlyingSecurityAltIDSource_216.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_203;
      FIX::UnderlyingStipType UnderlyingStipType_203("STRING_1121438490");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_203);
      UnderlyingStipulations_NoUnderlyingStips_203.insert(UnderlyingStipType_203.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_203("STRING_1779372394");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_203);
      UnderlyingStipulations_NoUnderlyingStips_203.insert(UnderlyingStipValue_203.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_203);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_220;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_220("STRING_1809509931");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyID_220.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_220('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyIDSource_220.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_220(1624126137);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_220);
      UndlyInstrumentParties_NoUndlyInstrumentParties_220.insert(UnderlyingInstrumentPartyRole_220.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_220);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_414("STRING_163243632");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_414);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubID_414.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_414(472645909);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_414);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414.insert(UnderlyingInstrumentPartySubIDType_414.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_19;
  FIX::Yield Yield_19;
  Yield_19.setString("44.010000");
  msg.set(Yield_19);
  YieldData_19.insert(Yield_19.getString());
  FIX::YieldCalcDate YieldCalcDate_19("LOCALMKTDATE_1885245400");
  msg.set(YieldCalcDate_19);
  YieldData_19.insert(YieldCalcDate_19.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_19("LOCALMKTDATE_146478806");
  msg.set(YieldRedemptionDate_19);
  YieldData_19.insert(YieldRedemptionDate_19.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_19;
  YieldRedemptionPrice_19.setString("18068292");
  msg.set(YieldRedemptionPrice_19);
  YieldData_19.insert(YieldRedemptionPrice_19.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_19(153554766);
  msg.set(YieldRedemptionPriceType_19);
  YieldData_19.insert(YieldRedemptionPriceType_19.getString());
  FIX::YieldType YieldType_19("STRING_LASTMONTH");
  msg.set(YieldType_19);
  YieldData_19.insert(YieldType_19.getString());
  all_values.push_back(YieldData_19);


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
