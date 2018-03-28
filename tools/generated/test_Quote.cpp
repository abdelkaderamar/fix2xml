#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/Quote.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Quote, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Quote msg;

  list<multiset<string>> all_values;
  multiset<string> Quote_0;
  FIX::Account Account_30("STRING_691566520");
  msg.set(Account_30);
  Quote_0.insert(Account_30.getString());
  FIX::AccountType AccountType_25(8);
  msg.set(AccountType_25);
  Quote_0.insert(AccountType_25.getString());
  FIX::AcctIDSource AcctIDSource_23(4);
  msg.set(AcctIDSource_23);
  Quote_0.insert(AcctIDSource_23.getString());
  FIX::BidForwardPoints BidForwardPoints_7;
  BidForwardPoints_7.setString("6227302");
  msg.set(BidForwardPoints_7);
  Quote_0.insert(BidForwardPoints_7.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_7;
  BidForwardPoints2_7.setString("3575620");
  msg.set(BidForwardPoints2_7);
  Quote_0.insert(BidForwardPoints2_7.getString());
  FIX::BidPx BidPx_7;
  BidPx_7.setString("4676214");
  msg.set(BidPx_7);
  Quote_0.insert(BidPx_7.getString());
  FIX::BidSize BidSize_7;
  BidSize_7.setString("1326232");
  msg.set(BidSize_7);
  Quote_0.insert(BidSize_7.getString());
  FIX::BidSpotRate BidSpotRate_7;
  BidSpotRate_7.setString("10566813");
  msg.set(BidSpotRate_7);
  Quote_0.insert(BidSpotRate_7.getString());
  FIX::BidSwapPoints BidSwapPoints_0;
  BidSwapPoints_0.setString("11176953");
  msg.set(BidSwapPoints_0);
  Quote_0.insert(BidSwapPoints_0.getString());
  FIX::BidYield BidYield_7;
  BidYield_7.setString("34.980000");
  msg.set(BidYield_7);
  Quote_0.insert(BidYield_7.getString());
  FIX::BookingType BookingType_21(1);
  msg.set(BookingType_21);
  Quote_0.insert(BookingType_21.getString());
  FIX::CommType CommType_20('2');
  msg.set(CommType_20);
  Quote_0.insert(CommType_20.getString());
  FIX::Commission Commission_20;
  Commission_20.setString("2298536");
  msg.set(Commission_20);
  Quote_0.insert(Commission_20.getString());
  FIX::Currency Currency_49("USD");
  msg.set(Currency_49);
  Quote_0.insert(Currency_49.getString());
  FIX::CustOrderCapacity CustOrderCapacity_14(4);
  msg.set(CustOrderCapacity_14);
  Quote_0.insert(CustOrderCapacity_14.getString());
  FIX::EncodedText EncodedText_79("DATA_1960029498");
  msg.set(EncodedText_79);
  Quote_0.insert(EncodedText_79.getString());
  FIX::EncodedTextLen EncodedTextLen_79(289819400);
  msg.set(EncodedTextLen_79);
  Quote_0.insert(EncodedTextLen_79.getString());
  FIX::ExDestination ExDestination_7("EXCHANGE_1734419412");
  msg.set(ExDestination_7);
  Quote_0.insert(ExDestination_7.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_7('E');
  msg.set(ExDestinationIDSource_7);
  Quote_0.insert(ExDestinationIDSource_7.getString());
  FIX::MidPx MidPx_7;
  MidPx_7.setString("11967739");
  msg.set(MidPx_7);
  Quote_0.insert(MidPx_7.getString());
  FIX::MidYield MidYield_7;
  MidYield_7.setString("84.050000");
  msg.set(MidYield_7);
  Quote_0.insert(MidYield_7.getString());
  FIX::MinBidSize MinBidSize_0;
  MinBidSize_0.setString("12758996");
  msg.set(MinBidSize_0);
  Quote_0.insert(MinBidSize_0.getString());
  FIX::MinOfferSize MinOfferSize_0;
  MinOfferSize_0.setString("13639391");
  msg.set(MinOfferSize_0);
  Quote_0.insert(MinOfferSize_0.getString());
  FIX::MinQty MinQty_13;
  MinQty_13.setString("16604058");
  msg.set(MinQty_13);
  Quote_0.insert(MinQty_13.getString());
  FIX::MktBidPx MktBidPx_0;
  MktBidPx_0.setString("3559721");
  msg.set(MktBidPx_0);
  Quote_0.insert(MktBidPx_0.getString());
  FIX::MktOfferPx MktOfferPx_0;
  MktOfferPx_0.setString("2787904");
  msg.set(MktOfferPx_0);
  Quote_0.insert(MktOfferPx_0.getString());
  FIX::OfferForwardPoints OfferForwardPoints_7;
  OfferForwardPoints_7.setString("7977084");
  msg.set(OfferForwardPoints_7);
  Quote_0.insert(OfferForwardPoints_7.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_7;
  OfferForwardPoints2_7.setString("14848462");
  msg.set(OfferForwardPoints2_7);
  Quote_0.insert(OfferForwardPoints2_7.getString());
  FIX::OfferPx OfferPx_7;
  OfferPx_7.setString("2374510");
  msg.set(OfferPx_7);
  Quote_0.insert(OfferPx_7.getString());
  FIX::OfferSize OfferSize_7;
  OfferSize_7.setString("15388543");
  msg.set(OfferSize_7);
  Quote_0.insert(OfferSize_7.getString());
  FIX::OfferSpotRate OfferSpotRate_7;
  OfferSpotRate_7.setString("289290");
  msg.set(OfferSpotRate_7);
  Quote_0.insert(OfferSpotRate_7.getString());
  FIX::OfferSwapPoints OfferSwapPoints_0;
  OfferSwapPoints_0.setString("4255230");
  msg.set(OfferSwapPoints_0);
  Quote_0.insert(OfferSwapPoints_0.getString());
  FIX::OfferYield OfferYield_7;
  OfferYield_7.setString("4.890000");
  msg.set(OfferYield_7);
  Quote_0.insert(OfferYield_7.getString());
  FIX::OrdType OrdType_46('M');
  msg.set(OrdType_46);
  Quote_0.insert(OrdType_46.getString());
  FIX::OrderCapacity OrderCapacity_24('A');
  msg.set(OrderCapacity_24);
  Quote_0.insert(OrderCapacity_24.getString());
  FIX::OrderQty2 OrderQty2_11;
  OrderQty2_11.setString("16711619");
  msg.set(OrderQty2_11);
  Quote_0.insert(OrderQty2_11.getString());
  FIX::OrderRestrictions OrderRestrictions_19("MULTIPLECHARVALUE_2");
  msg.set(OrderRestrictions_19);
  Quote_0.insert(OrderRestrictions_19.getString());
  FIX::PriceType PriceType_35(6);
  msg.set(PriceType_35);
  Quote_0.insert(PriceType_35.getString());
  FIX::PrivateQuote PrivateQuote_0(true);
  msg.set(PrivateQuote_0);
  Quote_0.insert(PrivateQuote_0.getString());
  FIX::QuoteID QuoteID_8("STRING_988416029");
  msg.set(QuoteID_8);
  Quote_0.insert(QuoteID_8.getString());
  FIX::QuoteMsgID QuoteMsgID_0("STRING_864162577");
  msg.set(QuoteMsgID_0);
  Quote_0.insert(QuoteMsgID_0.getString());
  FIX::QuoteReqID QuoteReqID_2("STRING_1625222278");
  msg.set(QuoteReqID_2);
  Quote_0.insert(QuoteReqID_2.getString());
  FIX::QuoteRespID QuoteRespID_1("STRING_1218269639");
  msg.set(QuoteRespID_1);
  Quote_0.insert(QuoteRespID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_2(2);
  msg.set(QuoteResponseLevel_2);
  Quote_0.insert(QuoteResponseLevel_2.getString());
  FIX::QuoteType QuoteType_4(0);
  msg.set(QuoteType_4);
  Quote_0.insert(QuoteType_4.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_0;
  SettlCurrBidFxRate_0.setString("14657356");
  msg.set(SettlCurrBidFxRate_0);
  Quote_0.insert(SettlCurrBidFxRate_0.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_7('M');
  msg.set(SettlCurrFxRateCalc_7);
  Quote_0.insert(SettlCurrFxRateCalc_7.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_0;
  SettlCurrOfferFxRate_0.setString("7868242");
  msg.set(SettlCurrOfferFxRate_0);
  Quote_0.insert(SettlCurrOfferFxRate_0.getString());
  FIX::SettlCurrency SettlCurrency_25("JPY");
  msg.set(SettlCurrency_25);
  Quote_0.insert(SettlCurrency_25.getString());
  FIX::SettlDate SettlDate_38("LOCALMKTDATE_1983598239");
  msg.set(SettlDate_38);
  Quote_0.insert(SettlDate_38.getString());
  FIX::SettlDate2 SettlDate2_11("LOCALMKTDATE_1290329848");
  msg.set(SettlDate2_11);
  Quote_0.insert(SettlDate2_11.getString());
  FIX::SettlType SettlType_25("STRING_1");
  msg.set(SettlType_25);
  Quote_0.insert(SettlType_25.getString());
  FIX::Side Side_41('F');
  msg.set(Side_41);
  Quote_0.insert(Side_41.getString());
  FIX::Text Text_79("STRING_803252096");
  msg.set(Text_79);
  Quote_0.insert(Text_79.getString());
  FIX::TradingSessionID TradingSessionID_64("STRING_4");
  msg.set(TradingSessionID_64);
  Quote_0.insert(TradingSessionID_64.getString());
  FIX::TradingSessionSubID TradingSessionSubID_64("STRING_6");
  msg.set(TradingSessionSubID_64);
  Quote_0.insert(TradingSessionSubID_64.getString());
  FIX::TransactTime TransactTime_48(FIX::UTCTIMESTAMP(14, 48, 52, 23, 10, 2005));
  msg.set(TransactTime_48);
  Quote_0.insert(TransactTime_48.getString());
  FIX::ValidUntilTime ValidUntilTime_8(FIX::UTCTIMESTAMP(13, 36, 39, 8, 7, 2006));
  msg.set(ValidUntilTime_8);
  Quote_0.insert(ValidUntilTime_8.getString());
  all_values.push_back(Quote_0);

  // FinancingDetails
  multiset<string> FinancingDetails_16;
  FIX::AgreementCurrency AgreementCurrency_16("JPY");
  msg.set(AgreementCurrency_16);
  FinancingDetails_16.insert(AgreementCurrency_16.getString());
  FIX::AgreementDate AgreementDate_16("LOCALMKTDATE_2061046079");
  msg.set(AgreementDate_16);
  FinancingDetails_16.insert(AgreementDate_16.getString());
  FIX::AgreementDesc AgreementDesc_16("STRING_1183514976");
  msg.set(AgreementDesc_16);
  FinancingDetails_16.insert(AgreementDesc_16.getString());
  FIX::AgreementID AgreementID_16("STRING_188183597");
  msg.set(AgreementID_16);
  FinancingDetails_16.insert(AgreementID_16.getString());
  FIX::DeliveryType DeliveryType_16(2);
  msg.set(DeliveryType_16);
  FinancingDetails_16.insert(DeliveryType_16.getString());
  FIX::EndDate EndDate_16("LOCALMKTDATE_845710696");
  msg.set(EndDate_16);
  FinancingDetails_16.insert(EndDate_16.getString());
  FIX::MarginRatio MarginRatio_16;
  MarginRatio_16.setString("78.570000");
  msg.set(MarginRatio_16);
  FinancingDetails_16.insert(MarginRatio_16.getString());
  FIX::StartDate StartDate_16("LOCALMKTDATE_284485905");
  msg.set(StartDate_16);
  FinancingDetails_16.insert(StartDate_16.getString());
  FIX::TerminationType TerminationType_16(4);
  msg.set(TerminationType_16);
  FinancingDetails_16.insert(TerminationType_16.getString());
  all_values.push_back(FinancingDetails_16);

  // Instrument
  multiset<string> Instrument_60;
  FIX::AttachmentPoint AttachmentPoint_60;
  AttachmentPoint_60.setString("24.480000");
  msg.set(AttachmentPoint_60);
  Instrument_60.insert(AttachmentPoint_60.getString());
  FIX::CFICode CFICode_60("STRING_1574815753");
  msg.set(CFICode_60);
  Instrument_60.insert(CFICode_60.getString());
  FIX::CPProgram CPProgram_60(99);
  msg.set(CPProgram_60);
  Instrument_60.insert(CPProgram_60.getString());
  FIX::CPRegType CPRegType_60("STRING_2011176206");
  msg.set(CPRegType_60);
  Instrument_60.insert(CPRegType_60.getString());
  FIX::CapPrice CapPrice_60;
  CapPrice_60.setString("2305842");
  msg.set(CapPrice_60);
  Instrument_60.insert(CapPrice_60.getString());
  FIX::ContractMultiplier ContractMultiplier_60;
  ContractMultiplier_60.setString("3092146");
  msg.set(ContractMultiplier_60);
  Instrument_60.insert(ContractMultiplier_60.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_60(2);
  msg.set(ContractMultiplierUnit_60);
  Instrument_60.insert(ContractMultiplierUnit_60.getString());
  FIX::ContractSettlMonth ContractSettlMonth_60("MONTHYEAR_1831544754");
  msg.set(ContractSettlMonth_60);
  Instrument_60.insert(ContractSettlMonth_60.getString());
  FIX::CountryOfIssue CountryOfIssue_60("COUNTRY_846187823");
  msg.set(CountryOfIssue_60);
  Instrument_60.insert(CountryOfIssue_60.getString());
  FIX::CouponPaymentDate CouponPaymentDate_60("LOCALMKTDATE_911348398");
  msg.set(CouponPaymentDate_60);
  Instrument_60.insert(CouponPaymentDate_60.getString());
  FIX::CouponRate CouponRate_60;
  CouponRate_60.setString("23.380000");
  msg.set(CouponRate_60);
  Instrument_60.insert(CouponRate_60.getString());
  FIX::CreditRating CreditRating_60("STRING_1412090050");
  msg.set(CreditRating_60);
  Instrument_60.insert(CreditRating_60.getString());
  FIX::DatedDate DatedDate_60("LOCALMKTDATE_905683031");
  msg.set(DatedDate_60);
  Instrument_60.insert(DatedDate_60.getString());
  FIX::DetachmentPoint DetachmentPoint_60;
  DetachmentPoint_60.setString("4.110000");
  msg.set(DetachmentPoint_60);
  Instrument_60.insert(DetachmentPoint_60.getString());
  FIX::EncodedIssuer EncodedIssuer_60("DATA_482167930");
  msg.set(EncodedIssuer_60);
  Instrument_60.insert(EncodedIssuer_60.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_60(1683102756);
  msg.set(EncodedIssuerLen_60);
  Instrument_60.insert(EncodedIssuerLen_60.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_60("DATA_296846819");
  msg.set(EncodedSecurityDesc_60);
  Instrument_60.insert(EncodedSecurityDesc_60.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_60(336528341);
  msg.set(EncodedSecurityDescLen_60);
  Instrument_60.insert(EncodedSecurityDescLen_60.getString());
  FIX::ExerciseStyle ExerciseStyle_60(2);
  msg.set(ExerciseStyle_60);
  Instrument_60.insert(ExerciseStyle_60.getString());
  FIX::Factor Factor_60;
  Factor_60.setString("5102869");
  msg.set(Factor_60);
  Instrument_60.insert(Factor_60.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_60(false);
  msg.set(FlexProductEligibilityIndicator_60);
  Instrument_60.insert(FlexProductEligibilityIndicator_60.getString());
  FIX::FlexibleIndicator FlexibleIndicator_60(true);
  msg.set(FlexibleIndicator_60);
  Instrument_60.insert(FlexibleIndicator_60.getString());
  FIX::FloorPrice FloorPrice_60;
  FloorPrice_60.setString("2014656");
  msg.set(FloorPrice_60);
  Instrument_60.insert(FloorPrice_60.getString());
  FIX::FlowScheduleType FlowScheduleType_60(3);
  msg.set(FlowScheduleType_60);
  Instrument_60.insert(FlowScheduleType_60.getString());
  FIX::InstrRegistry InstrRegistry_60("STRING_375218070");
  msg.set(InstrRegistry_60);
  Instrument_60.insert(InstrRegistry_60.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_60('3');
  msg.set(InstrmtAssignmentMethod_60);
  Instrument_60.insert(InstrmtAssignmentMethod_60.getString());
  FIX::InterestAccrualDate InterestAccrualDate_60("LOCALMKTDATE_324681675");
  msg.set(InterestAccrualDate_60);
  Instrument_60.insert(InterestAccrualDate_60.getString());
  FIX::IssueDate IssueDate_60("LOCALMKTDATE_1220928767");
  msg.set(IssueDate_60);
  Instrument_60.insert(IssueDate_60.getString());
  FIX::Issuer Issuer_60("STRING_1364657116");
  msg.set(Issuer_60);
  Instrument_60.insert(Issuer_60.getString());
  FIX::ListMethod ListMethod_60(0);
  msg.set(ListMethod_60);
  Instrument_60.insert(ListMethod_60.getString());
  FIX::LocaleOfIssue LocaleOfIssue_60("STRING_1634378154");
  msg.set(LocaleOfIssue_60);
  Instrument_60.insert(LocaleOfIssue_60.getString());
  FIX::MaturityDate MaturityDate_60("LOCALMKTDATE_28295917");
  msg.set(MaturityDate_60);
  Instrument_60.insert(MaturityDate_60.getString());
  FIX::MaturityMonthYear MaturityMonthYear_60("MONTHYEAR_36499685");
  msg.set(MaturityMonthYear_60);
  Instrument_60.insert(MaturityMonthYear_60.getString());
  FIX::MaturityTime MaturityTime_60("TZTIMEONLY_743982282");
  msg.set(MaturityTime_60);
  Instrument_60.insert(MaturityTime_60.getString());
  FIX::MinPriceIncrement MinPriceIncrement_60;
  MinPriceIncrement_60.setString("20394721");
  msg.set(MinPriceIncrement_60);
  Instrument_60.insert(MinPriceIncrement_60.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_60;
  MinPriceIncrementAmount_60.setString("2670838");
  msg.set(MinPriceIncrementAmount_60);
  Instrument_60.insert(MinPriceIncrementAmount_60.getString());
  FIX::NTPositionLimit NTPositionLimit_60(1053196971);
  msg.set(NTPositionLimit_60);
  Instrument_60.insert(NTPositionLimit_60.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_60;
  NotionalPercentageOutstanding_60.setString("52.730000");
  msg.set(NotionalPercentageOutstanding_60);
  Instrument_60.insert(NotionalPercentageOutstanding_60.getString());
  FIX::OptAttribute OptAttribute_60('2');
  msg.set(OptAttribute_60);
  Instrument_60.insert(OptAttribute_60.getString());
  FIX::OptPayoutAmount OptPayoutAmount_60;
  OptPayoutAmount_60.setString("18993847");
  msg.set(OptPayoutAmount_60);
  Instrument_60.insert(OptPayoutAmount_60.getString());
  FIX::OptPayoutType OptPayoutType_60(3);
  msg.set(OptPayoutType_60);
  Instrument_60.insert(OptPayoutType_60.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_60;
  OriginalNotionalPercentageOutstanding_60.setString("73.300000");
  msg.set(OriginalNotionalPercentageOutstanding_60);
  Instrument_60.insert(OriginalNotionalPercentageOutstanding_60.getString());
  FIX::Pool Pool_60("STRING_1163991196");
  msg.set(Pool_60);
  Instrument_60.insert(Pool_60.getString());
  FIX::PositionLimit PositionLimit_60(904073054);
  msg.set(PositionLimit_60);
  Instrument_60.insert(PositionLimit_60.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_60("STRING_INX");
  msg.set(PriceQuoteMethod_60);
  Instrument_60.insert(PriceQuoteMethod_60.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_60("STRING_1646159126");
  msg.set(PriceUnitOfMeasure_60);
  Instrument_60.insert(PriceUnitOfMeasure_60.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_60;
  PriceUnitOfMeasureQty_60.setString("4396921");
  msg.set(PriceUnitOfMeasureQty_60);
  Instrument_60.insert(PriceUnitOfMeasureQty_60.getString());
  FIX::Product Product_62(5);
  msg.set(Product_62);
  Instrument_60.insert(Product_62.getString());
  FIX::ProductComplex ProductComplex_60("STRING_1982687467");
  msg.set(ProductComplex_60);
  Instrument_60.insert(ProductComplex_60.getString());
  FIX::PutOrCall PutOrCall_60(0);
  msg.set(PutOrCall_60);
  Instrument_60.insert(PutOrCall_60.getString());
  FIX::RedemptionDate RedemptionDate_60("LOCALMKTDATE_11967838");
  msg.set(RedemptionDate_60);
  Instrument_60.insert(RedemptionDate_60.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_60("STRING_1014508600");
  msg.set(RepoCollateralSecurityType_60);
  Instrument_60.insert(RepoCollateralSecurityType_60.getString());
  FIX::RepurchaseRate RepurchaseRate_60;
  RepurchaseRate_60.setString("5.410000");
  msg.set(RepurchaseRate_60);
  Instrument_60.insert(RepurchaseRate_60.getString());
  FIX::RepurchaseTerm RepurchaseTerm_60(213433500);
  msg.set(RepurchaseTerm_60);
  Instrument_60.insert(RepurchaseTerm_60.getString());
  FIX::RestructuringType RestructuringType_60("STRING_MR");
  msg.set(RestructuringType_60);
  Instrument_60.insert(RestructuringType_60.getString());
  FIX::SecurityDesc SecurityDesc_60("STRING_11934963");
  msg.set(SecurityDesc_60);
  Instrument_60.insert(SecurityDesc_60.getString());
  FIX::SecurityExchange SecurityExchange_60("EXCHANGE_603082759");
  msg.set(SecurityExchange_60);
  Instrument_60.insert(SecurityExchange_60.getString());
  FIX::SecurityGroup SecurityGroup_60("STRING_284573840");
  msg.set(SecurityGroup_60);
  Instrument_60.insert(SecurityGroup_60.getString());
  FIX::SecurityID SecurityID_60("STRING_1232863730");
  msg.set(SecurityID_60);
  Instrument_60.insert(SecurityID_60.getString());
  FIX::SecurityIDSource SecurityIDSource_60("STRING_E");
  msg.set(SecurityIDSource_60);
  Instrument_60.insert(SecurityIDSource_60.getString());
  FIX::SecurityStatus SecurityStatus_60("STRING_1");
  msg.set(SecurityStatus_60);
  Instrument_60.insert(SecurityStatus_60.getString());
  FIX::SecuritySubType SecuritySubType_61("STRING_719758236");
  msg.set(SecuritySubType_61);
  Instrument_60.insert(SecuritySubType_61.getString());
  FIX::SecurityType SecurityType_62("STRING_DN");
  msg.set(SecurityType_62);
  Instrument_60.insert(SecurityType_62.getString());
  FIX::Seniority Seniority_60("STRING_SR");
  msg.set(Seniority_60);
  Instrument_60.insert(Seniority_60.getString());
  FIX::SettlMethod SettlMethod_60('C');
  msg.set(SettlMethod_60);
  Instrument_60.insert(SettlMethod_60.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_60("STRING_1888024268");
  msg.set(SettleOnOpenFlag_60);
  Instrument_60.insert(SettleOnOpenFlag_60.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_60("STRING_1197324992");
  msg.set(StateOrProvinceOfIssue_60);
  Instrument_60.insert(StateOrProvinceOfIssue_60.getString());
  FIX::StrikeCurrency StrikeCurrency_60("EUR");
  msg.set(StrikeCurrency_60);
  Instrument_60.insert(StrikeCurrency_60.getString());
  FIX::StrikeMultiplier StrikeMultiplier_60;
  StrikeMultiplier_60.setString("11484699");
  msg.set(StrikeMultiplier_60);
  Instrument_60.insert(StrikeMultiplier_60.getString());
  FIX::StrikePrice StrikePrice_60;
  StrikePrice_60.setString("1213549");
  msg.set(StrikePrice_60);
  Instrument_60.insert(StrikePrice_60.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_60(2);
  msg.set(StrikePriceBoundaryMethod_60);
  Instrument_60.insert(StrikePriceBoundaryMethod_60.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_60;
  StrikePriceBoundaryPrecision_60.setString("73.150000");
  msg.set(StrikePriceBoundaryPrecision_60);
  Instrument_60.insert(StrikePriceBoundaryPrecision_60.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_60(4);
  msg.set(StrikePriceDeterminationMethod_60);
  Instrument_60.insert(StrikePriceDeterminationMethod_60.getString());
  FIX::StrikeValue StrikeValue_60;
  StrikeValue_60.setString("18775289");
  msg.set(StrikeValue_60);
  Instrument_60.insert(StrikeValue_60.getString());
  FIX::Symbol Symbol_60("STRING_980841408");
  msg.set(Symbol_60);
  Instrument_60.insert(Symbol_60.getString());
  FIX::SymbolSfx SymbolSfx_60("STRING_WI");
  msg.set(SymbolSfx_60);
  Instrument_60.insert(SymbolSfx_60.getString());
  FIX::TimeUnit TimeUnit_60("STRING_H");
  msg.set(TimeUnit_60);
  Instrument_60.insert(TimeUnit_60.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_60(2);
  msg.set(UnderlyingPriceDeterminationMethod_60);
  Instrument_60.insert(UnderlyingPriceDeterminationMethod_60.getString());
  FIX::UnitOfMeasure UnitOfMeasure_60("STRING_MWh");
  msg.set(UnitOfMeasure_60);
  Instrument_60.insert(UnitOfMeasure_60.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_60;
  UnitOfMeasureQty_60.setString("6147512");
  msg.set(UnitOfMeasureQty_60);
  Instrument_60.insert(UnitOfMeasureQty_60.getString());
  FIX::ValuationMethod ValuationMethod_60("STRING_CDSD");
  msg.set(ValuationMethod_60);
  Instrument_60.insert(ValuationMethod_60.getString());
  all_values.push_back(Instrument_60);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_118;
    FIX::ComplexEventCondition ComplexEventCondition_118(2);
    noComplexEvents_0_0.set(ComplexEventCondition_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventCondition_118.getString());
    FIX::ComplexEventPrice ComplexEventPrice_118;
    ComplexEventPrice_118.setString("7079236");
    noComplexEvents_0_0.set(ComplexEventPrice_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPrice_118.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_118(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceBoundaryMethod_118.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_118;
    ComplexEventPriceBoundaryPrecision_118.setString("31.390000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceBoundaryPrecision_118.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_118(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceTimeType_118.getString());
    FIX::ComplexEventType ComplexEventType_118(6);
    noComplexEvents_0_0.set(ComplexEventType_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventType_118.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_118;
    ComplexOptPayoutAmount_118.setString("14962668");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexOptPayoutAmount_118.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_118);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_244;
      FIX::ComplexEventEndDate ComplexEventEndDate_244(FIX::UTCTIMESTAMP(2, 30, 25, 8, 7, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_244);
      ComplexEventDates_NoComplexEventDates_244.insert(ComplexEventEndDate_244.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_244(FIX::UTCTIMESTAMP(7, 13, 5, 27, 1, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_244);
      ComplexEventDates_NoComplexEventDates_244.insert(ComplexEventStartDate_244.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_244);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_496;
        FIX::ComplexEventEndTime ComplexEventEndTime_496(FIX::UTCTIMEONLY(2, 17, 22));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_496);
        ComplexEventTimes_NoComplexEventTimes_496.insert(ComplexEventEndTime_496.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_496(FIX::UTCTIMEONLY(11, 1, 56));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_496);
        ComplexEventTimes_NoComplexEventTimes_496.insert(ComplexEventStartTime_496.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_496);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_497;
        FIX::ComplexEventEndTime ComplexEventEndTime_497(FIX::UTCTIMEONLY(4, 14, 34));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_497);
        ComplexEventTimes_NoComplexEventTimes_497.insert(ComplexEventEndTime_497.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_497(FIX::UTCTIMEONLY(17, 35, 47));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_497);
        ComplexEventTimes_NoComplexEventTimes_497.insert(ComplexEventStartTime_497.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_497);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_245;
      FIX::ComplexEventEndDate ComplexEventEndDate_245(FIX::UTCTIMESTAMP(13, 17, 10, 14, 12, 2017));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_245);
      ComplexEventDates_NoComplexEventDates_245.insert(ComplexEventEndDate_245.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_245(FIX::UTCTIMESTAMP(10, 4, 57, 13, 10, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_245);
      ComplexEventDates_NoComplexEventDates_245.insert(ComplexEventStartDate_245.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_245);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_498;
        FIX::ComplexEventEndTime ComplexEventEndTime_498(FIX::UTCTIMEONLY(5, 35, 0));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_498);
        ComplexEventTimes_NoComplexEventTimes_498.insert(ComplexEventEndTime_498.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_498(FIX::UTCTIMEONLY(23, 53, 28));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_498);
        ComplexEventTimes_NoComplexEventTimes_498.insert(ComplexEventStartTime_498.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_498);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_499;
        FIX::ComplexEventEndTime ComplexEventEndTime_499(FIX::UTCTIMEONLY(13, 34, 16));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_499);
        ComplexEventTimes_NoComplexEventTimes_499.insert(ComplexEventEndTime_499.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_499(FIX::UTCTIMEONLY(16, 43, 42));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_499);
        ComplexEventTimes_NoComplexEventTimes_499.insert(ComplexEventStartTime_499.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_499);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_500;
        FIX::ComplexEventEndTime ComplexEventEndTime_500(FIX::UTCTIMEONLY(9, 52, 15));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_500);
        ComplexEventTimes_NoComplexEventTimes_500.insert(ComplexEventEndTime_500.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_500(FIX::UTCTIMEONLY(19, 6, 43));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_500);
        ComplexEventTimes_NoComplexEventTimes_500.insert(ComplexEventStartTime_500.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_500);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Quote::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_116;
    FIX::EventDate EventDate_116("LOCALMKTDATE_1838203450");
    noEvents_0_0.set(EventDate_116);
    EvntGrp_NoEvents_116.insert(EventDate_116.getString());
    FIX::EventPx EventPx_116;
    EventPx_116.setString("840174");
    noEvents_0_0.set(EventPx_116);
    EvntGrp_NoEvents_116.insert(EventPx_116.getString());
    FIX::EventText EventText_116("STRING_966313019");
    noEvents_0_0.set(EventText_116);
    EvntGrp_NoEvents_116.insert(EventText_116.getString());
    FIX::EventTime EventTime_116(FIX::UTCTIMESTAMP(7, 18, 37, 20, 6, 2011));
    noEvents_0_0.set(EventTime_116);
    EvntGrp_NoEvents_116.insert(EventTime_116.getString());
    FIX::EventType EventType_116(1);
    noEvents_0_0.set(EventType_116);
    EvntGrp_NoEvents_116.insert(EventType_116.getString());
    all_values.push_back(EvntGrp_NoEvents_116);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Quote::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_115;
    FIX::InstrumentPartyID InstrumentPartyID_115("STRING_1439561542");
    noInstrumentParties_0_0.set(InstrumentPartyID_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyID_115.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_115('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyIDSource_115.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_115(976471202);
    noInstrumentParties_0_0.set(InstrumentPartyRole_115);
    InstrumentParties_NoInstrumentParties_115.insert(InstrumentPartyRole_115.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_115);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243;
      FIX::InstrumentPartySubID InstrumentPartySubID_243("STRING_1102883774");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_243);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243.insert(InstrumentPartySubID_243.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_243(897389050);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_243);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243.insert(InstrumentPartySubIDType_243.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244;
      FIX::InstrumentPartySubID InstrumentPartySubID_244("STRING_1179770374");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_244);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244.insert(InstrumentPartySubID_244.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_244(792730054);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_244);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244.insert(InstrumentPartySubIDType_244.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245;
      FIX::InstrumentPartySubID InstrumentPartySubID_245("STRING_1717889094");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_245);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245.insert(InstrumentPartySubID_245.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_245(554937909);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_245);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245.insert(InstrumentPartySubIDType_245.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::Quote::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_116;
    FIX::InstrumentPartyID InstrumentPartyID_116("STRING_186860499");
    noInstrumentParties_0_1.set(InstrumentPartyID_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyID_116.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_116('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyIDSource_116.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_116(957049861);
    noInstrumentParties_0_1.set(InstrumentPartyRole_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyRole_116.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_116);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246;
      FIX::InstrumentPartySubID InstrumentPartySubID_246("STRING_1353091174");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_246);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246.insert(InstrumentPartySubID_246.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_246(958977992);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_246);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246.insert(InstrumentPartySubIDType_246.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::Quote::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_117;
    FIX::InstrumentPartyID InstrumentPartyID_117("STRING_1209127440");
    noInstrumentParties_0_2.set(InstrumentPartyID_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyID_117.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_117('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyIDSource_117.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_117(108659958);
    noInstrumentParties_0_2.set(InstrumentPartyRole_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyRole_117.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_117);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247;
      FIX::InstrumentPartySubID InstrumentPartySubID_247("STRING_1538344849");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_247);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247.insert(InstrumentPartySubID_247.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_247(1074972978);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_247);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247.insert(InstrumentPartySubIDType_247.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_131;
    FIX::SecurityAltID SecurityAltID_131("STRING_618613344");
    noSecurityAltID_0_0.set(SecurityAltID_131);
    SecAltIDGrp_NoSecurityAltID_131.insert(SecurityAltID_131.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_131("STRING_1961872296");
    noSecurityAltID_0_0.set(SecurityAltIDSource_131);
    SecAltIDGrp_NoSecurityAltID_131.insert(SecurityAltIDSource_131.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_131);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_132;
    FIX::SecurityAltID SecurityAltID_132("STRING_457996112");
    noSecurityAltID_0_1.set(SecurityAltID_132);
    SecAltIDGrp_NoSecurityAltID_132.insert(SecurityAltID_132.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_132("STRING_640107844");
    noSecurityAltID_0_1.set(SecurityAltIDSource_132);
    SecAltIDGrp_NoSecurityAltID_132.insert(SecurityAltIDSource_132.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_132);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_133;
    FIX::SecurityAltID SecurityAltID_133("STRING_1043050641");
    noSecurityAltID_0_2.set(SecurityAltID_133);
    SecAltIDGrp_NoSecurityAltID_133.insert(SecurityAltID_133.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_133("STRING_1237730941");
    noSecurityAltID_0_2.set(SecurityAltIDSource_133);
    SecAltIDGrp_NoSecurityAltID_133.insert(SecurityAltIDSource_133.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_133);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_120;
  FIX::SecurityXML SecurityXML_121("XMLDATA_2019545184");
  msg.set(SecurityXML_121);
  FIX::SecurityXMLLen SecurityXMLLen_60(1501919322);
  msg.set(SecurityXMLLen_60);
  FIX::SecurityXMLSchema SecurityXMLSchema_60("STRING_529808836");
  msg.set(SecurityXMLSchema_60);
  SecurityXML_120.insert(SecurityXMLSchema_60.getString());
  all_values.push_back(SecurityXML_120);

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::Quote::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_0;
    FIX::LegBidForwardPoints LegBidForwardPoints_0;
    LegBidForwardPoints_0.setString("3309068");
    noLegs_0_0.set(LegBidForwardPoints_0);
    LegQuotGrp_NoLegs_0.insert(LegBidForwardPoints_0.getString());
    FIX::LegBidPx LegBidPx_0;
    LegBidPx_0.setString("2340576");
    noLegs_0_0.set(LegBidPx_0);
    LegQuotGrp_NoLegs_0.insert(LegBidPx_0.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_0;
    LegOfferForwardPoints_0.setString("14678091");
    noLegs_0_0.set(LegOfferForwardPoints_0);
    LegQuotGrp_NoLegs_0.insert(LegOfferForwardPoints_0.getString());
    FIX::LegOfferPx LegOfferPx_0;
    LegOfferPx_0.setString("12282959");
    noLegs_0_0.set(LegOfferPx_0);
    LegQuotGrp_NoLegs_0.insert(LegOfferPx_0.getString());
    FIX::LegOrderQty LegOrderQty_8;
    LegOrderQty_8.setString("14138280");
    noLegs_0_0.set(LegOrderQty_8);
    LegQuotGrp_NoLegs_0.insert(LegOrderQty_8.getString());
    FIX::LegPriceType LegPriceType_0(113055517);
    noLegs_0_0.set(LegPriceType_0);
    LegQuotGrp_NoLegs_0.insert(LegPriceType_0.getString());
    FIX::LegQty LegQty_8;
    LegQty_8.setString("7987013");
    noLegs_0_0.set(LegQty_8);
    LegQuotGrp_NoLegs_0.insert(LegQty_8.getString());
    FIX::LegRefID LegRefID_8("STRING_1968765939");
    noLegs_0_0.set(LegRefID_8);
    LegQuotGrp_NoLegs_0.insert(LegRefID_8.getString());
    FIX::LegSettlDate LegSettlDate_8("LOCALMKTDATE_299916017");
    noLegs_0_0.set(LegSettlDate_8);
    LegQuotGrp_NoLegs_0.insert(LegSettlDate_8.getString());
    FIX::LegSettlType LegSettlType_8('1');
    noLegs_0_0.set(LegSettlType_8);
    LegQuotGrp_NoLegs_0.insert(LegSettlType_8.getString());
    FIX::LegSwapType LegSwapType_8(1);
    noLegs_0_0.set(LegSwapType_8);
    LegQuotGrp_NoLegs_0.insert(LegSwapType_8.getString());
    all_values.push_back(LegQuotGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_88;
    FIX::EncodedLegIssuer EncodedLegIssuer_88("DATA_1139890091");
    noLegs_0_0.set(EncodedLegIssuer_88);
    InstrumentLeg_88.insert(EncodedLegIssuer_88.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_88(1363338042);
    noLegs_0_0.set(EncodedLegIssuerLen_88);
    InstrumentLeg_88.insert(EncodedLegIssuerLen_88.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_88("DATA_1737310144");
    noLegs_0_0.set(EncodedLegSecurityDesc_88);
    InstrumentLeg_88.insert(EncodedLegSecurityDesc_88.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_88(201533884);
    noLegs_0_0.set(EncodedLegSecurityDescLen_88);
    InstrumentLeg_88.insert(EncodedLegSecurityDescLen_88.getString());
    FIX::LegCFICode LegCFICode_88("STRING_670181751");
    noLegs_0_0.set(LegCFICode_88);
    InstrumentLeg_88.insert(LegCFICode_88.getString());
    FIX::LegContractMultiplier LegContractMultiplier_88;
    LegContractMultiplier_88.setString("18459701");
    noLegs_0_0.set(LegContractMultiplier_88);
    InstrumentLeg_88.insert(LegContractMultiplier_88.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_88(1101381127);
    noLegs_0_0.set(LegContractMultiplierUnit_88);
    InstrumentLeg_88.insert(LegContractMultiplierUnit_88.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_88("MONTHYEAR_61042952");
    noLegs_0_0.set(LegContractSettlMonth_88);
    InstrumentLeg_88.insert(LegContractSettlMonth_88.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_88("COUNTRY_773459433");
    noLegs_0_0.set(LegCountryOfIssue_88);
    InstrumentLeg_88.insert(LegCountryOfIssue_88.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_88("LOCALMKTDATE_247564921");
    noLegs_0_0.set(LegCouponPaymentDate_88);
    InstrumentLeg_88.insert(LegCouponPaymentDate_88.getString());
    FIX::LegCouponRate LegCouponRate_88;
    LegCouponRate_88.setString("62.970000");
    noLegs_0_0.set(LegCouponRate_88);
    InstrumentLeg_88.insert(LegCouponRate_88.getString());
    FIX::LegCreditRating LegCreditRating_88("STRING_587848081");
    noLegs_0_0.set(LegCreditRating_88);
    InstrumentLeg_88.insert(LegCreditRating_88.getString());
    FIX::LegCurrency LegCurrency_88("EUR");
    noLegs_0_0.set(LegCurrency_88);
    InstrumentLeg_88.insert(LegCurrency_88.getString());
    FIX::LegDatedDate LegDatedDate_88("LOCALMKTDATE_1630898722");
    noLegs_0_0.set(LegDatedDate_88);
    InstrumentLeg_88.insert(LegDatedDate_88.getString());
    FIX::LegExerciseStyle LegExerciseStyle_88(1943291975);
    noLegs_0_0.set(LegExerciseStyle_88);
    InstrumentLeg_88.insert(LegExerciseStyle_88.getString());
    FIX::LegFactor LegFactor_88;
    LegFactor_88.setString("11918256");
    noLegs_0_0.set(LegFactor_88);
    InstrumentLeg_88.insert(LegFactor_88.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_88(985334396);
    noLegs_0_0.set(LegFlowScheduleType_88);
    InstrumentLeg_88.insert(LegFlowScheduleType_88.getString());
    FIX::LegInstrRegistry LegInstrRegistry_88("STRING_325617163");
    noLegs_0_0.set(LegInstrRegistry_88);
    InstrumentLeg_88.insert(LegInstrRegistry_88.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_88("LOCALMKTDATE_1556751014");
    noLegs_0_0.set(LegInterestAccrualDate_88);
    InstrumentLeg_88.insert(LegInterestAccrualDate_88.getString());
    FIX::LegIssueDate LegIssueDate_88("LOCALMKTDATE_1316241273");
    noLegs_0_0.set(LegIssueDate_88);
    InstrumentLeg_88.insert(LegIssueDate_88.getString());
    FIX::LegIssuer LegIssuer_88("STRING_559674818");
    noLegs_0_0.set(LegIssuer_88);
    InstrumentLeg_88.insert(LegIssuer_88.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_88("STRING_877076477");
    noLegs_0_0.set(LegLocaleOfIssue_88);
    InstrumentLeg_88.insert(LegLocaleOfIssue_88.getString());
    FIX::LegMaturityDate LegMaturityDate_88("LOCALMKTDATE_397053552");
    noLegs_0_0.set(LegMaturityDate_88);
    InstrumentLeg_88.insert(LegMaturityDate_88.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_88("MONTHYEAR_1973502848");
    noLegs_0_0.set(LegMaturityMonthYear_88);
    InstrumentLeg_88.insert(LegMaturityMonthYear_88.getString());
    FIX::LegMaturityTime LegMaturityTime_88("TZTIMEONLY_990131995");
    noLegs_0_0.set(LegMaturityTime_88);
    InstrumentLeg_88.insert(LegMaturityTime_88.getString());
    FIX::LegOptAttribute LegOptAttribute_88('1');
    noLegs_0_0.set(LegOptAttribute_88);
    InstrumentLeg_88.insert(LegOptAttribute_88.getString());
    FIX::LegOptionRatio LegOptionRatio_88;
    LegOptionRatio_88.setString("17947851");
    noLegs_0_0.set(LegOptionRatio_88);
    InstrumentLeg_88.insert(LegOptionRatio_88.getString());
    FIX::LegPool LegPool_88("STRING_1290048012");
    noLegs_0_0.set(LegPool_88);
    InstrumentLeg_88.insert(LegPool_88.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_88("STRING_1206001793");
    noLegs_0_0.set(LegPriceUnitOfMeasure_88);
    InstrumentLeg_88.insert(LegPriceUnitOfMeasure_88.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_88;
    LegPriceUnitOfMeasureQty_88.setString("4256336");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_88);
    InstrumentLeg_88.insert(LegPriceUnitOfMeasureQty_88.getString());
    FIX::LegProduct LegProduct_88(282454455);
    noLegs_0_0.set(LegProduct_88);
    InstrumentLeg_88.insert(LegProduct_88.getString());
    FIX::LegPutOrCall LegPutOrCall_88(421856187);
    noLegs_0_0.set(LegPutOrCall_88);
    InstrumentLeg_88.insert(LegPutOrCall_88.getString());
    FIX::LegRatioQty LegRatioQty_88;
    LegRatioQty_88.setString("154601");
    noLegs_0_0.set(LegRatioQty_88);
    InstrumentLeg_88.insert(LegRatioQty_88.getString());
    FIX::LegRedemptionDate LegRedemptionDate_88("LOCALMKTDATE_483988339");
    noLegs_0_0.set(LegRedemptionDate_88);
    InstrumentLeg_88.insert(LegRedemptionDate_88.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_88("STRING_1092037938");
    noLegs_0_0.set(LegRepoCollateralSecurityType_88);
    InstrumentLeg_88.insert(LegRepoCollateralSecurityType_88.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_88;
    LegRepurchaseRate_88.setString("2.430000");
    noLegs_0_0.set(LegRepurchaseRate_88);
    InstrumentLeg_88.insert(LegRepurchaseRate_88.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_88(1585369466);
    noLegs_0_0.set(LegRepurchaseTerm_88);
    InstrumentLeg_88.insert(LegRepurchaseTerm_88.getString());
    FIX::LegSecurityDesc LegSecurityDesc_88("STRING_1153080890");
    noLegs_0_0.set(LegSecurityDesc_88);
    InstrumentLeg_88.insert(LegSecurityDesc_88.getString());
    FIX::LegSecurityExchange LegSecurityExchange_88("EXCHANGE_487406028");
    noLegs_0_0.set(LegSecurityExchange_88);
    InstrumentLeg_88.insert(LegSecurityExchange_88.getString());
    FIX::LegSecurityID LegSecurityID_88("STRING_1832934388");
    noLegs_0_0.set(LegSecurityID_88);
    InstrumentLeg_88.insert(LegSecurityID_88.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_88("STRING_1832737187");
    noLegs_0_0.set(LegSecurityIDSource_88);
    InstrumentLeg_88.insert(LegSecurityIDSource_88.getString());
    FIX::LegSecuritySubType LegSecuritySubType_88("STRING_1075254109");
    noLegs_0_0.set(LegSecuritySubType_88);
    InstrumentLeg_88.insert(LegSecuritySubType_88.getString());
    FIX::LegSecurityType LegSecurityType_88("STRING_391011773");
    noLegs_0_0.set(LegSecurityType_88);
    InstrumentLeg_88.insert(LegSecurityType_88.getString());
    FIX::LegSide LegSide_88('1');
    noLegs_0_0.set(LegSide_88);
    InstrumentLeg_88.insert(LegSide_88.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_88("STRING_558669183");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_88);
    InstrumentLeg_88.insert(LegStateOrProvinceOfIssue_88.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_88("CHF");
    noLegs_0_0.set(LegStrikeCurrency_88);
    InstrumentLeg_88.insert(LegStrikeCurrency_88.getString());
    FIX::LegStrikePrice LegStrikePrice_88;
    LegStrikePrice_88.setString("15440035");
    noLegs_0_0.set(LegStrikePrice_88);
    InstrumentLeg_88.insert(LegStrikePrice_88.getString());
    FIX::LegSymbol LegSymbol_88("STRING_512437263");
    noLegs_0_0.set(LegSymbol_88);
    InstrumentLeg_88.insert(LegSymbol_88.getString());
    FIX::LegSymbolSfx LegSymbolSfx_88("STRING_1606110725");
    noLegs_0_0.set(LegSymbolSfx_88);
    InstrumentLeg_88.insert(LegSymbolSfx_88.getString());
    FIX::LegTimeUnit LegTimeUnit_88("STRING_712761205");
    noLegs_0_0.set(LegTimeUnit_88);
    InstrumentLeg_88.insert(LegTimeUnit_88.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_88("STRING_1072112082");
    noLegs_0_0.set(LegUnitOfMeasure_88);
    InstrumentLeg_88.insert(LegUnitOfMeasure_88.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_88;
    LegUnitOfMeasureQty_88.setString("3357035");
    noLegs_0_0.set(LegUnitOfMeasureQty_88);
    InstrumentLeg_88.insert(LegUnitOfMeasureQty_88.getString());
    all_values.push_back(InstrumentLeg_88);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_178;
      FIX::LegSecurityAltID LegSecurityAltID_178("STRING_898131282");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_178);
      LegSecAltIDGrp_NoLegSecurityAltID_178.insert(LegSecurityAltID_178.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_178("STRING_1325835550");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_178);
      LegSecAltIDGrp_NoLegSecurityAltID_178.insert(LegSecurityAltIDSource_178.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_178);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_179;
      FIX::LegSecurityAltID LegSecurityAltID_179("STRING_158086034");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_179);
      LegSecAltIDGrp_NoLegSecurityAltID_179.insert(LegSecurityAltID_179.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_179("STRING_545432774");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_179);
      LegSecAltIDGrp_NoLegSecurityAltID_179.insert(LegSecurityAltIDSource_179.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_179);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_0;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_0("EUR");
    noLegs_0_0.set(LegBenchmarkCurveCurrency_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurveCurrency_0.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_0("STRING_971066417");
    noLegs_0_0.set(LegBenchmarkCurveName_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurveName_0.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_0("STRING_750854369");
    noLegs_0_0.set(LegBenchmarkCurvePoint_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurvePoint_0.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_0;
    LegBenchmarkPrice_0.setString("17859440");
    noLegs_0_0.set(LegBenchmarkPrice_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkPrice_0.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_0(986526557);
    noLegs_0_0.set(LegBenchmarkPriceType_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkPriceType_0.getString());
    all_values.push_back(LegBenchmarkCurveData_0);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_18;
      FIX::LegStipulationType LegStipulationType_18("STRING_730498304");
      noLegStipulations_0_1_0.set(LegStipulationType_18);
      LegStipulations_NoLegStipulations_18.insert(LegStipulationType_18.getString());
      FIX::LegStipulationValue LegStipulationValue_18("STRING_700473152");
      noLegStipulations_0_1_0.set(LegStipulationValue_18);
      LegStipulations_NoLegStipulations_18.insert(LegStipulationValue_18.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_18);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_19;
      FIX::LegStipulationType LegStipulationType_19("STRING_672728527");
      noLegStipulations_0_1_1.set(LegStipulationType_19);
      LegStipulations_NoLegStipulations_19.insert(LegStipulationType_19.getString());
      FIX::LegStipulationValue LegStipulationValue_19("STRING_1883579194");
      noLegStipulations_0_1_1.set(LegStipulationValue_19);
      LegStipulations_NoLegStipulations_19.insert(LegStipulationValue_19.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_19);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_98;
      FIX::NestedPartyID NestedPartyID_98("STRING_358179267");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_98);
      NestedParties_NoNestedPartyIDs_98.insert(NestedPartyID_98.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_98('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_98);
      NestedParties_NoNestedPartyIDs_98.insert(NestedPartyIDSource_98.getString());
      FIX::NestedPartyRole NestedPartyRole_98(115649641);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_98);
      NestedParties_NoNestedPartyIDs_98.insert(NestedPartyRole_98.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_98);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_197;
        FIX::NestedPartySubID NestedPartySubID_197("STRING_426366767");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_197);
        NstdPtysSubGrp_NoNestedPartySubIDs_197.insert(NestedPartySubID_197.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_197(674318825);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_197);
        NstdPtysSubGrp_NoNestedPartySubIDs_197.insert(NestedPartySubIDType_197.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_197);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_99;
      FIX::NestedPartyID NestedPartyID_99("STRING_936011141");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_99);
      NestedParties_NoNestedPartyIDs_99.insert(NestedPartyID_99.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_99('4');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_99);
      NestedParties_NoNestedPartyIDs_99.insert(NestedPartyIDSource_99.getString());
      FIX::NestedPartyRole NestedPartyRole_99(70838757);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_99);
      NestedParties_NoNestedPartyIDs_99.insert(NestedPartyRole_99.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_99);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_198;
        FIX::NestedPartySubID NestedPartySubID_198("STRING_2081837203");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_198);
        NstdPtysSubGrp_NoNestedPartySubIDs_198.insert(NestedPartySubID_198.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_198(783599962);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_198);
        NstdPtysSubGrp_NoNestedPartySubIDs_198.insert(NestedPartySubIDType_198.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_198);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_100;
      FIX::NestedPartyID NestedPartyID_100("STRING_373076839");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_100);
      NestedParties_NoNestedPartyIDs_100.insert(NestedPartyID_100.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_100('2');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_100);
      NestedParties_NoNestedPartyIDs_100.insert(NestedPartyIDSource_100.getString());
      FIX::NestedPartyRole NestedPartyRole_100(1893414719);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_100);
      NestedParties_NoNestedPartyIDs_100.insert(NestedPartyRole_100.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_100);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_199;
        FIX::NestedPartySubID NestedPartySubID_199("STRING_1595892660");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_199);
        NstdPtysSubGrp_NoNestedPartySubIDs_199.insert(NestedPartySubID_199.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_199(2051500753);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_199);
        NstdPtysSubGrp_NoNestedPartySubIDs_199.insert(NestedPartySubIDType_199.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_199);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_200;
        FIX::NestedPartySubID NestedPartySubID_200("STRING_1816640895");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_200);
        NstdPtysSubGrp_NoNestedPartySubIDs_200.insert(NestedPartySubID_200.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_200(2064292574);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_200);
        NstdPtysSubGrp_NoNestedPartySubIDs_200.insert(NestedPartySubIDType_200.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_200);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Quote::NoLegs noLegs_0_1;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_1;
    FIX::LegBidForwardPoints LegBidForwardPoints_1;
    LegBidForwardPoints_1.setString("12681049");
    noLegs_0_1.set(LegBidForwardPoints_1);
    LegQuotGrp_NoLegs_1.insert(LegBidForwardPoints_1.getString());
    FIX::LegBidPx LegBidPx_1;
    LegBidPx_1.setString("6402236");
    noLegs_0_1.set(LegBidPx_1);
    LegQuotGrp_NoLegs_1.insert(LegBidPx_1.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_1;
    LegOfferForwardPoints_1.setString("6676632");
    noLegs_0_1.set(LegOfferForwardPoints_1);
    LegQuotGrp_NoLegs_1.insert(LegOfferForwardPoints_1.getString());
    FIX::LegOfferPx LegOfferPx_1;
    LegOfferPx_1.setString("9065652");
    noLegs_0_1.set(LegOfferPx_1);
    LegQuotGrp_NoLegs_1.insert(LegOfferPx_1.getString());
    FIX::LegOrderQty LegOrderQty_9;
    LegOrderQty_9.setString("16267502");
    noLegs_0_1.set(LegOrderQty_9);
    LegQuotGrp_NoLegs_1.insert(LegOrderQty_9.getString());
    FIX::LegPriceType LegPriceType_1(1902506005);
    noLegs_0_1.set(LegPriceType_1);
    LegQuotGrp_NoLegs_1.insert(LegPriceType_1.getString());
    FIX::LegQty LegQty_9;
    LegQty_9.setString("16370636");
    noLegs_0_1.set(LegQty_9);
    LegQuotGrp_NoLegs_1.insert(LegQty_9.getString());
    FIX::LegRefID LegRefID_9("STRING_179739727");
    noLegs_0_1.set(LegRefID_9);
    LegQuotGrp_NoLegs_1.insert(LegRefID_9.getString());
    FIX::LegSettlDate LegSettlDate_9("LOCALMKTDATE_427750884");
    noLegs_0_1.set(LegSettlDate_9);
    LegQuotGrp_NoLegs_1.insert(LegSettlDate_9.getString());
    FIX::LegSettlType LegSettlType_9('1');
    noLegs_0_1.set(LegSettlType_9);
    LegQuotGrp_NoLegs_1.insert(LegSettlType_9.getString());
    FIX::LegSwapType LegSwapType_9(5);
    noLegs_0_1.set(LegSwapType_9);
    LegQuotGrp_NoLegs_1.insert(LegSwapType_9.getString());
    all_values.push_back(LegQuotGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_89;
    FIX::EncodedLegIssuer EncodedLegIssuer_89("DATA_785930152");
    noLegs_0_1.set(EncodedLegIssuer_89);
    InstrumentLeg_89.insert(EncodedLegIssuer_89.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_89(794508234);
    noLegs_0_1.set(EncodedLegIssuerLen_89);
    InstrumentLeg_89.insert(EncodedLegIssuerLen_89.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_89("DATA_1483268549");
    noLegs_0_1.set(EncodedLegSecurityDesc_89);
    InstrumentLeg_89.insert(EncodedLegSecurityDesc_89.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_89(1535121193);
    noLegs_0_1.set(EncodedLegSecurityDescLen_89);
    InstrumentLeg_89.insert(EncodedLegSecurityDescLen_89.getString());
    FIX::LegCFICode LegCFICode_89("STRING_1220875001");
    noLegs_0_1.set(LegCFICode_89);
    InstrumentLeg_89.insert(LegCFICode_89.getString());
    FIX::LegContractMultiplier LegContractMultiplier_89;
    LegContractMultiplier_89.setString("101037");
    noLegs_0_1.set(LegContractMultiplier_89);
    InstrumentLeg_89.insert(LegContractMultiplier_89.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_89(323648686);
    noLegs_0_1.set(LegContractMultiplierUnit_89);
    InstrumentLeg_89.insert(LegContractMultiplierUnit_89.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_89("MONTHYEAR_1696601479");
    noLegs_0_1.set(LegContractSettlMonth_89);
    InstrumentLeg_89.insert(LegContractSettlMonth_89.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_89("COUNTRY_80942483");
    noLegs_0_1.set(LegCountryOfIssue_89);
    InstrumentLeg_89.insert(LegCountryOfIssue_89.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_89("LOCALMKTDATE_1772097091");
    noLegs_0_1.set(LegCouponPaymentDate_89);
    InstrumentLeg_89.insert(LegCouponPaymentDate_89.getString());
    FIX::LegCouponRate LegCouponRate_89;
    LegCouponRate_89.setString("50.350000");
    noLegs_0_1.set(LegCouponRate_89);
    InstrumentLeg_89.insert(LegCouponRate_89.getString());
    FIX::LegCreditRating LegCreditRating_89("STRING_864542445");
    noLegs_0_1.set(LegCreditRating_89);
    InstrumentLeg_89.insert(LegCreditRating_89.getString());
    FIX::LegCurrency LegCurrency_89("CHF");
    noLegs_0_1.set(LegCurrency_89);
    InstrumentLeg_89.insert(LegCurrency_89.getString());
    FIX::LegDatedDate LegDatedDate_89("LOCALMKTDATE_610473516");
    noLegs_0_1.set(LegDatedDate_89);
    InstrumentLeg_89.insert(LegDatedDate_89.getString());
    FIX::LegExerciseStyle LegExerciseStyle_89(1268898404);
    noLegs_0_1.set(LegExerciseStyle_89);
    InstrumentLeg_89.insert(LegExerciseStyle_89.getString());
    FIX::LegFactor LegFactor_89;
    LegFactor_89.setString("13494211");
    noLegs_0_1.set(LegFactor_89);
    InstrumentLeg_89.insert(LegFactor_89.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_89(514490621);
    noLegs_0_1.set(LegFlowScheduleType_89);
    InstrumentLeg_89.insert(LegFlowScheduleType_89.getString());
    FIX::LegInstrRegistry LegInstrRegistry_89("STRING_938055651");
    noLegs_0_1.set(LegInstrRegistry_89);
    InstrumentLeg_89.insert(LegInstrRegistry_89.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_89("LOCALMKTDATE_1266230084");
    noLegs_0_1.set(LegInterestAccrualDate_89);
    InstrumentLeg_89.insert(LegInterestAccrualDate_89.getString());
    FIX::LegIssueDate LegIssueDate_89("LOCALMKTDATE_1782595553");
    noLegs_0_1.set(LegIssueDate_89);
    InstrumentLeg_89.insert(LegIssueDate_89.getString());
    FIX::LegIssuer LegIssuer_89("STRING_1578279316");
    noLegs_0_1.set(LegIssuer_89);
    InstrumentLeg_89.insert(LegIssuer_89.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_89("STRING_1933893380");
    noLegs_0_1.set(LegLocaleOfIssue_89);
    InstrumentLeg_89.insert(LegLocaleOfIssue_89.getString());
    FIX::LegMaturityDate LegMaturityDate_89("LOCALMKTDATE_541677203");
    noLegs_0_1.set(LegMaturityDate_89);
    InstrumentLeg_89.insert(LegMaturityDate_89.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_89("MONTHYEAR_1057545891");
    noLegs_0_1.set(LegMaturityMonthYear_89);
    InstrumentLeg_89.insert(LegMaturityMonthYear_89.getString());
    FIX::LegMaturityTime LegMaturityTime_89("TZTIMEONLY_1688915737");
    noLegs_0_1.set(LegMaturityTime_89);
    InstrumentLeg_89.insert(LegMaturityTime_89.getString());
    FIX::LegOptAttribute LegOptAttribute_89('3');
    noLegs_0_1.set(LegOptAttribute_89);
    InstrumentLeg_89.insert(LegOptAttribute_89.getString());
    FIX::LegOptionRatio LegOptionRatio_89;
    LegOptionRatio_89.setString("12372856");
    noLegs_0_1.set(LegOptionRatio_89);
    InstrumentLeg_89.insert(LegOptionRatio_89.getString());
    FIX::LegPool LegPool_89("STRING_2116666622");
    noLegs_0_1.set(LegPool_89);
    InstrumentLeg_89.insert(LegPool_89.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_89("STRING_1404416305");
    noLegs_0_1.set(LegPriceUnitOfMeasure_89);
    InstrumentLeg_89.insert(LegPriceUnitOfMeasure_89.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_89;
    LegPriceUnitOfMeasureQty_89.setString("4574208");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_89);
    InstrumentLeg_89.insert(LegPriceUnitOfMeasureQty_89.getString());
    FIX::LegProduct LegProduct_89(755113126);
    noLegs_0_1.set(LegProduct_89);
    InstrumentLeg_89.insert(LegProduct_89.getString());
    FIX::LegPutOrCall LegPutOrCall_89(51440892);
    noLegs_0_1.set(LegPutOrCall_89);
    InstrumentLeg_89.insert(LegPutOrCall_89.getString());
    FIX::LegRatioQty LegRatioQty_89;
    LegRatioQty_89.setString("19406894");
    noLegs_0_1.set(LegRatioQty_89);
    InstrumentLeg_89.insert(LegRatioQty_89.getString());
    FIX::LegRedemptionDate LegRedemptionDate_89("LOCALMKTDATE_142750671");
    noLegs_0_1.set(LegRedemptionDate_89);
    InstrumentLeg_89.insert(LegRedemptionDate_89.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_89("STRING_1272315893");
    noLegs_0_1.set(LegRepoCollateralSecurityType_89);
    InstrumentLeg_89.insert(LegRepoCollateralSecurityType_89.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_89;
    LegRepurchaseRate_89.setString("31.520000");
    noLegs_0_1.set(LegRepurchaseRate_89);
    InstrumentLeg_89.insert(LegRepurchaseRate_89.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_89(466399357);
    noLegs_0_1.set(LegRepurchaseTerm_89);
    InstrumentLeg_89.insert(LegRepurchaseTerm_89.getString());
    FIX::LegSecurityDesc LegSecurityDesc_89("STRING_821433725");
    noLegs_0_1.set(LegSecurityDesc_89);
    InstrumentLeg_89.insert(LegSecurityDesc_89.getString());
    FIX::LegSecurityExchange LegSecurityExchange_89("EXCHANGE_2031735635");
    noLegs_0_1.set(LegSecurityExchange_89);
    InstrumentLeg_89.insert(LegSecurityExchange_89.getString());
    FIX::LegSecurityID LegSecurityID_89("STRING_91012801");
    noLegs_0_1.set(LegSecurityID_89);
    InstrumentLeg_89.insert(LegSecurityID_89.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_89("STRING_304905112");
    noLegs_0_1.set(LegSecurityIDSource_89);
    InstrumentLeg_89.insert(LegSecurityIDSource_89.getString());
    FIX::LegSecuritySubType LegSecuritySubType_89("STRING_748794432");
    noLegs_0_1.set(LegSecuritySubType_89);
    InstrumentLeg_89.insert(LegSecuritySubType_89.getString());
    FIX::LegSecurityType LegSecurityType_89("STRING_88703083");
    noLegs_0_1.set(LegSecurityType_89);
    InstrumentLeg_89.insert(LegSecurityType_89.getString());
    FIX::LegSide LegSide_89('5');
    noLegs_0_1.set(LegSide_89);
    InstrumentLeg_89.insert(LegSide_89.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_89("STRING_1359267948");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_89);
    InstrumentLeg_89.insert(LegStateOrProvinceOfIssue_89.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_89("EUR");
    noLegs_0_1.set(LegStrikeCurrency_89);
    InstrumentLeg_89.insert(LegStrikeCurrency_89.getString());
    FIX::LegStrikePrice LegStrikePrice_89;
    LegStrikePrice_89.setString("18737585");
    noLegs_0_1.set(LegStrikePrice_89);
    InstrumentLeg_89.insert(LegStrikePrice_89.getString());
    FIX::LegSymbol LegSymbol_89("STRING_148173491");
    noLegs_0_1.set(LegSymbol_89);
    InstrumentLeg_89.insert(LegSymbol_89.getString());
    FIX::LegSymbolSfx LegSymbolSfx_89("STRING_526601204");
    noLegs_0_1.set(LegSymbolSfx_89);
    InstrumentLeg_89.insert(LegSymbolSfx_89.getString());
    FIX::LegTimeUnit LegTimeUnit_89("STRING_1508870474");
    noLegs_0_1.set(LegTimeUnit_89);
    InstrumentLeg_89.insert(LegTimeUnit_89.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_89("STRING_1726452807");
    noLegs_0_1.set(LegUnitOfMeasure_89);
    InstrumentLeg_89.insert(LegUnitOfMeasure_89.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_89;
    LegUnitOfMeasureQty_89.setString("3130109");
    noLegs_0_1.set(LegUnitOfMeasureQty_89);
    InstrumentLeg_89.insert(LegUnitOfMeasureQty_89.getString());
    all_values.push_back(InstrumentLeg_89);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_180;
      FIX::LegSecurityAltID LegSecurityAltID_180("STRING_636515050");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_180);
      LegSecAltIDGrp_NoLegSecurityAltID_180.insert(LegSecurityAltID_180.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_180("STRING_2001926674");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_180);
      LegSecAltIDGrp_NoLegSecurityAltID_180.insert(LegSecurityAltIDSource_180.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_180);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_181;
      FIX::LegSecurityAltID LegSecurityAltID_181("STRING_2081804834");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_181);
      LegSecAltIDGrp_NoLegSecurityAltID_181.insert(LegSecurityAltID_181.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_181("STRING_1873800668");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_181);
      LegSecAltIDGrp_NoLegSecurityAltID_181.insert(LegSecurityAltIDSource_181.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_181);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_1;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_1("GBP");
    noLegs_0_1.set(LegBenchmarkCurveCurrency_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurveCurrency_1.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_1("STRING_183737898");
    noLegs_0_1.set(LegBenchmarkCurveName_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurveName_1.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_1("STRING_578739126");
    noLegs_0_1.set(LegBenchmarkCurvePoint_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurvePoint_1.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_1;
    LegBenchmarkPrice_1.setString("13901783");
    noLegs_0_1.set(LegBenchmarkPrice_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkPrice_1.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_1(2124427324);
    noLegs_0_1.set(LegBenchmarkPriceType_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkPriceType_1.getString());
    all_values.push_back(LegBenchmarkCurveData_1);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_20;
      FIX::LegStipulationType LegStipulationType_20("STRING_515010629");
      noLegStipulations_1_1_0.set(LegStipulationType_20);
      LegStipulations_NoLegStipulations_20.insert(LegStipulationType_20.getString());
      FIX::LegStipulationValue LegStipulationValue_20("STRING_1927736829");
      noLegStipulations_1_1_0.set(LegStipulationValue_20);
      LegStipulations_NoLegStipulations_20.insert(LegStipulationValue_20.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_20);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_101;
      FIX::NestedPartyID NestedPartyID_101("STRING_1336444354");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_101);
      NestedParties_NoNestedPartyIDs_101.insert(NestedPartyID_101.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_101('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_101);
      NestedParties_NoNestedPartyIDs_101.insert(NestedPartyIDSource_101.getString());
      FIX::NestedPartyRole NestedPartyRole_101(1278901955);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_101);
      NestedParties_NoNestedPartyIDs_101.insert(NestedPartyRole_101.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_101);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_201;
        FIX::NestedPartySubID NestedPartySubID_201("STRING_413299601");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_201);
        NstdPtysSubGrp_NoNestedPartySubIDs_201.insert(NestedPartySubID_201.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_201(1367605039);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_201);
        NstdPtysSubGrp_NoNestedPartySubIDs_201.insert(NestedPartySubIDType_201.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_201);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_202;
        FIX::NestedPartySubID NestedPartySubID_202("STRING_1699783076");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_202);
        NstdPtysSubGrp_NoNestedPartySubIDs_202.insert(NestedPartySubID_202.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_202(1772567549);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_202);
        NstdPtysSubGrp_NoNestedPartySubIDs_202.insert(NestedPartySubIDType_202.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_202);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_203;
        FIX::NestedPartySubID NestedPartySubID_203("STRING_577722878");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_203);
        NstdPtysSubGrp_NoNestedPartySubIDs_203.insert(NestedPartySubID_203.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_203(960154195);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_203);
        NstdPtysSubGrp_NoNestedPartySubIDs_203.insert(NestedPartySubIDType_203.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_203);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_102;
      FIX::NestedPartyID NestedPartyID_102("STRING_1498842471");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_102);
      NestedParties_NoNestedPartyIDs_102.insert(NestedPartyID_102.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_102('7');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_102);
      NestedParties_NoNestedPartyIDs_102.insert(NestedPartyIDSource_102.getString());
      FIX::NestedPartyRole NestedPartyRole_102(1486755399);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_102);
      NestedParties_NoNestedPartyIDs_102.insert(NestedPartyRole_102.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_102);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_204;
        FIX::NestedPartySubID NestedPartySubID_204("STRING_304865529");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_204);
        NstdPtysSubGrp_NoNestedPartySubIDs_204.insert(NestedPartySubID_204.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_204(1799766336);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_204);
        NstdPtysSubGrp_NoNestedPartySubIDs_204.insert(NestedPartySubIDType_204.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_204);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Quote::NoLegs noLegs_0_2;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_2;
    FIX::LegBidForwardPoints LegBidForwardPoints_2;
    LegBidForwardPoints_2.setString("7632933");
    noLegs_0_2.set(LegBidForwardPoints_2);
    LegQuotGrp_NoLegs_2.insert(LegBidForwardPoints_2.getString());
    FIX::LegBidPx LegBidPx_2;
    LegBidPx_2.setString("9413805");
    noLegs_0_2.set(LegBidPx_2);
    LegQuotGrp_NoLegs_2.insert(LegBidPx_2.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_2;
    LegOfferForwardPoints_2.setString("16542093");
    noLegs_0_2.set(LegOfferForwardPoints_2);
    LegQuotGrp_NoLegs_2.insert(LegOfferForwardPoints_2.getString());
    FIX::LegOfferPx LegOfferPx_2;
    LegOfferPx_2.setString("6976145");
    noLegs_0_2.set(LegOfferPx_2);
    LegQuotGrp_NoLegs_2.insert(LegOfferPx_2.getString());
    FIX::LegOrderQty LegOrderQty_10;
    LegOrderQty_10.setString("6676976");
    noLegs_0_2.set(LegOrderQty_10);
    LegQuotGrp_NoLegs_2.insert(LegOrderQty_10.getString());
    FIX::LegPriceType LegPriceType_2(1477835362);
    noLegs_0_2.set(LegPriceType_2);
    LegQuotGrp_NoLegs_2.insert(LegPriceType_2.getString());
    FIX::LegQty LegQty_10;
    LegQty_10.setString("20363520");
    noLegs_0_2.set(LegQty_10);
    LegQuotGrp_NoLegs_2.insert(LegQty_10.getString());
    FIX::LegRefID LegRefID_10("STRING_851435498");
    noLegs_0_2.set(LegRefID_10);
    LegQuotGrp_NoLegs_2.insert(LegRefID_10.getString());
    FIX::LegSettlDate LegSettlDate_10("LOCALMKTDATE_2056574488");
    noLegs_0_2.set(LegSettlDate_10);
    LegQuotGrp_NoLegs_2.insert(LegSettlDate_10.getString());
    FIX::LegSettlType LegSettlType_10('1');
    noLegs_0_2.set(LegSettlType_10);
    LegQuotGrp_NoLegs_2.insert(LegSettlType_10.getString());
    FIX::LegSwapType LegSwapType_10(4);
    noLegs_0_2.set(LegSwapType_10);
    LegQuotGrp_NoLegs_2.insert(LegSwapType_10.getString());
    all_values.push_back(LegQuotGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_90;
    FIX::EncodedLegIssuer EncodedLegIssuer_90("DATA_630580637");
    noLegs_0_2.set(EncodedLegIssuer_90);
    InstrumentLeg_90.insert(EncodedLegIssuer_90.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_90(1794057371);
    noLegs_0_2.set(EncodedLegIssuerLen_90);
    InstrumentLeg_90.insert(EncodedLegIssuerLen_90.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_90("DATA_608632355");
    noLegs_0_2.set(EncodedLegSecurityDesc_90);
    InstrumentLeg_90.insert(EncodedLegSecurityDesc_90.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_90(1818469791);
    noLegs_0_2.set(EncodedLegSecurityDescLen_90);
    InstrumentLeg_90.insert(EncodedLegSecurityDescLen_90.getString());
    FIX::LegCFICode LegCFICode_90("STRING_983018077");
    noLegs_0_2.set(LegCFICode_90);
    InstrumentLeg_90.insert(LegCFICode_90.getString());
    FIX::LegContractMultiplier LegContractMultiplier_90;
    LegContractMultiplier_90.setString("2731375");
    noLegs_0_2.set(LegContractMultiplier_90);
    InstrumentLeg_90.insert(LegContractMultiplier_90.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_90(949888099);
    noLegs_0_2.set(LegContractMultiplierUnit_90);
    InstrumentLeg_90.insert(LegContractMultiplierUnit_90.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_90("MONTHYEAR_476883896");
    noLegs_0_2.set(LegContractSettlMonth_90);
    InstrumentLeg_90.insert(LegContractSettlMonth_90.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_90("COUNTRY_686437125");
    noLegs_0_2.set(LegCountryOfIssue_90);
    InstrumentLeg_90.insert(LegCountryOfIssue_90.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_90("LOCALMKTDATE_170009490");
    noLegs_0_2.set(LegCouponPaymentDate_90);
    InstrumentLeg_90.insert(LegCouponPaymentDate_90.getString());
    FIX::LegCouponRate LegCouponRate_90;
    LegCouponRate_90.setString("33.240000");
    noLegs_0_2.set(LegCouponRate_90);
    InstrumentLeg_90.insert(LegCouponRate_90.getString());
    FIX::LegCreditRating LegCreditRating_90("STRING_311521026");
    noLegs_0_2.set(LegCreditRating_90);
    InstrumentLeg_90.insert(LegCreditRating_90.getString());
    FIX::LegCurrency LegCurrency_90("CHF");
    noLegs_0_2.set(LegCurrency_90);
    InstrumentLeg_90.insert(LegCurrency_90.getString());
    FIX::LegDatedDate LegDatedDate_90("LOCALMKTDATE_1810363497");
    noLegs_0_2.set(LegDatedDate_90);
    InstrumentLeg_90.insert(LegDatedDate_90.getString());
    FIX::LegExerciseStyle LegExerciseStyle_90(1473628738);
    noLegs_0_2.set(LegExerciseStyle_90);
    InstrumentLeg_90.insert(LegExerciseStyle_90.getString());
    FIX::LegFactor LegFactor_90;
    LegFactor_90.setString("3286092");
    noLegs_0_2.set(LegFactor_90);
    InstrumentLeg_90.insert(LegFactor_90.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_90(523109147);
    noLegs_0_2.set(LegFlowScheduleType_90);
    InstrumentLeg_90.insert(LegFlowScheduleType_90.getString());
    FIX::LegInstrRegistry LegInstrRegistry_90("STRING_1778494267");
    noLegs_0_2.set(LegInstrRegistry_90);
    InstrumentLeg_90.insert(LegInstrRegistry_90.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_90("LOCALMKTDATE_2128375607");
    noLegs_0_2.set(LegInterestAccrualDate_90);
    InstrumentLeg_90.insert(LegInterestAccrualDate_90.getString());
    FIX::LegIssueDate LegIssueDate_90("LOCALMKTDATE_1286402474");
    noLegs_0_2.set(LegIssueDate_90);
    InstrumentLeg_90.insert(LegIssueDate_90.getString());
    FIX::LegIssuer LegIssuer_90("STRING_572391198");
    noLegs_0_2.set(LegIssuer_90);
    InstrumentLeg_90.insert(LegIssuer_90.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_90("STRING_1635101321");
    noLegs_0_2.set(LegLocaleOfIssue_90);
    InstrumentLeg_90.insert(LegLocaleOfIssue_90.getString());
    FIX::LegMaturityDate LegMaturityDate_90("LOCALMKTDATE_1984016987");
    noLegs_0_2.set(LegMaturityDate_90);
    InstrumentLeg_90.insert(LegMaturityDate_90.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_90("MONTHYEAR_1240088798");
    noLegs_0_2.set(LegMaturityMonthYear_90);
    InstrumentLeg_90.insert(LegMaturityMonthYear_90.getString());
    FIX::LegMaturityTime LegMaturityTime_90("TZTIMEONLY_965453035");
    noLegs_0_2.set(LegMaturityTime_90);
    InstrumentLeg_90.insert(LegMaturityTime_90.getString());
    FIX::LegOptAttribute LegOptAttribute_90('1');
    noLegs_0_2.set(LegOptAttribute_90);
    InstrumentLeg_90.insert(LegOptAttribute_90.getString());
    FIX::LegOptionRatio LegOptionRatio_90;
    LegOptionRatio_90.setString("20915242");
    noLegs_0_2.set(LegOptionRatio_90);
    InstrumentLeg_90.insert(LegOptionRatio_90.getString());
    FIX::LegPool LegPool_90("STRING_874543875");
    noLegs_0_2.set(LegPool_90);
    InstrumentLeg_90.insert(LegPool_90.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_90("STRING_1004448438");
    noLegs_0_2.set(LegPriceUnitOfMeasure_90);
    InstrumentLeg_90.insert(LegPriceUnitOfMeasure_90.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_90;
    LegPriceUnitOfMeasureQty_90.setString("7724198");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_90);
    InstrumentLeg_90.insert(LegPriceUnitOfMeasureQty_90.getString());
    FIX::LegProduct LegProduct_90(1505124512);
    noLegs_0_2.set(LegProduct_90);
    InstrumentLeg_90.insert(LegProduct_90.getString());
    FIX::LegPutOrCall LegPutOrCall_90(651022161);
    noLegs_0_2.set(LegPutOrCall_90);
    InstrumentLeg_90.insert(LegPutOrCall_90.getString());
    FIX::LegRatioQty LegRatioQty_90;
    LegRatioQty_90.setString("13810521");
    noLegs_0_2.set(LegRatioQty_90);
    InstrumentLeg_90.insert(LegRatioQty_90.getString());
    FIX::LegRedemptionDate LegRedemptionDate_90("LOCALMKTDATE_1176110655");
    noLegs_0_2.set(LegRedemptionDate_90);
    InstrumentLeg_90.insert(LegRedemptionDate_90.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_90("STRING_1634040239");
    noLegs_0_2.set(LegRepoCollateralSecurityType_90);
    InstrumentLeg_90.insert(LegRepoCollateralSecurityType_90.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_90;
    LegRepurchaseRate_90.setString("97.020000");
    noLegs_0_2.set(LegRepurchaseRate_90);
    InstrumentLeg_90.insert(LegRepurchaseRate_90.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_90(2125998754);
    noLegs_0_2.set(LegRepurchaseTerm_90);
    InstrumentLeg_90.insert(LegRepurchaseTerm_90.getString());
    FIX::LegSecurityDesc LegSecurityDesc_90("STRING_2110924135");
    noLegs_0_2.set(LegSecurityDesc_90);
    InstrumentLeg_90.insert(LegSecurityDesc_90.getString());
    FIX::LegSecurityExchange LegSecurityExchange_90("EXCHANGE_193143179");
    noLegs_0_2.set(LegSecurityExchange_90);
    InstrumentLeg_90.insert(LegSecurityExchange_90.getString());
    FIX::LegSecurityID LegSecurityID_90("STRING_148524596");
    noLegs_0_2.set(LegSecurityID_90);
    InstrumentLeg_90.insert(LegSecurityID_90.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_90("STRING_2140107459");
    noLegs_0_2.set(LegSecurityIDSource_90);
    InstrumentLeg_90.insert(LegSecurityIDSource_90.getString());
    FIX::LegSecuritySubType LegSecuritySubType_90("STRING_504664206");
    noLegs_0_2.set(LegSecuritySubType_90);
    InstrumentLeg_90.insert(LegSecuritySubType_90.getString());
    FIX::LegSecurityType LegSecurityType_90("STRING_896256965");
    noLegs_0_2.set(LegSecurityType_90);
    InstrumentLeg_90.insert(LegSecurityType_90.getString());
    FIX::LegSide LegSide_90('9');
    noLegs_0_2.set(LegSide_90);
    InstrumentLeg_90.insert(LegSide_90.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_90("STRING_167544055");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_90);
    InstrumentLeg_90.insert(LegStateOrProvinceOfIssue_90.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_90("CHF");
    noLegs_0_2.set(LegStrikeCurrency_90);
    InstrumentLeg_90.insert(LegStrikeCurrency_90.getString());
    FIX::LegStrikePrice LegStrikePrice_90;
    LegStrikePrice_90.setString("6906532");
    noLegs_0_2.set(LegStrikePrice_90);
    InstrumentLeg_90.insert(LegStrikePrice_90.getString());
    FIX::LegSymbol LegSymbol_90("STRING_2000896322");
    noLegs_0_2.set(LegSymbol_90);
    InstrumentLeg_90.insert(LegSymbol_90.getString());
    FIX::LegSymbolSfx LegSymbolSfx_90("STRING_1291462560");
    noLegs_0_2.set(LegSymbolSfx_90);
    InstrumentLeg_90.insert(LegSymbolSfx_90.getString());
    FIX::LegTimeUnit LegTimeUnit_90("STRING_1977055676");
    noLegs_0_2.set(LegTimeUnit_90);
    InstrumentLeg_90.insert(LegTimeUnit_90.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_90("STRING_425803872");
    noLegs_0_2.set(LegUnitOfMeasure_90);
    InstrumentLeg_90.insert(LegUnitOfMeasure_90.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_90;
    LegUnitOfMeasureQty_90.setString("7790802");
    noLegs_0_2.set(LegUnitOfMeasureQty_90);
    InstrumentLeg_90.insert(LegUnitOfMeasureQty_90.getString());
    all_values.push_back(InstrumentLeg_90);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_182;
      FIX::LegSecurityAltID LegSecurityAltID_182("STRING_1665892671");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_182);
      LegSecAltIDGrp_NoLegSecurityAltID_182.insert(LegSecurityAltID_182.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_182("STRING_1744533268");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_182);
      LegSecAltIDGrp_NoLegSecurityAltID_182.insert(LegSecurityAltIDSource_182.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_182);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_2;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_2("CAN");
    noLegs_0_2.set(LegBenchmarkCurveCurrency_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkCurveCurrency_2.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_2("STRING_471593495");
    noLegs_0_2.set(LegBenchmarkCurveName_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkCurveName_2.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_2("STRING_395955503");
    noLegs_0_2.set(LegBenchmarkCurvePoint_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkCurvePoint_2.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_2;
    LegBenchmarkPrice_2.setString("2348694");
    noLegs_0_2.set(LegBenchmarkPrice_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkPrice_2.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_2(1976718007);
    noLegs_0_2.set(LegBenchmarkPriceType_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkPriceType_2.getString());
    all_values.push_back(LegBenchmarkCurveData_2);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_21;
      FIX::LegStipulationType LegStipulationType_21("STRING_1615921673");
      noLegStipulations_2_1_0.set(LegStipulationType_21);
      LegStipulations_NoLegStipulations_21.insert(LegStipulationType_21.getString());
      FIX::LegStipulationValue LegStipulationValue_21("STRING_1005345015");
      noLegStipulations_2_1_0.set(LegStipulationValue_21);
      LegStipulations_NoLegStipulations_21.insert(LegStipulationValue_21.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_21);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_103;
      FIX::NestedPartyID NestedPartyID_103("STRING_1122627727");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_103);
      NestedParties_NoNestedPartyIDs_103.insert(NestedPartyID_103.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_103('9');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_103);
      NestedParties_NoNestedPartyIDs_103.insert(NestedPartyIDSource_103.getString());
      FIX::NestedPartyRole NestedPartyRole_103(496974743);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_103);
      NestedParties_NoNestedPartyIDs_103.insert(NestedPartyRole_103.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_103);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_205;
        FIX::NestedPartySubID NestedPartySubID_205("STRING_1132384718");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_205);
        NstdPtysSubGrp_NoNestedPartySubIDs_205.insert(NestedPartySubID_205.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_205(489598554);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_205);
        NstdPtysSubGrp_NoNestedPartySubIDs_205.insert(NestedPartySubIDType_205.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_205);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_206;
        FIX::NestedPartySubID NestedPartySubID_206("STRING_1820435113");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_206);
        NstdPtysSubGrp_NoNestedPartySubIDs_206.insert(NestedPartySubID_206.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_206(2028641683);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_206);
        NstdPtysSubGrp_NoNestedPartySubIDs_206.insert(NestedPartySubIDType_206.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_206);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_18;
  FIX::CashOrderQty CashOrderQty_18;
  CashOrderQty_18.setString("14715598");
  msg.set(CashOrderQty_18);
  OrderQtyData_18.insert(CashOrderQty_18.getString());
  FIX::OrderPercent OrderPercent_18;
  OrderPercent_18.setString("91.680000");
  msg.set(OrderPercent_18);
  OrderQtyData_18.insert(OrderPercent_18.getString());
  FIX::OrderQty OrderQty_26;
  OrderQty_26.setString("1035600");
  msg.set(OrderQty_26);
  OrderQtyData_18.insert(OrderQty_26.getString());
  FIX::RoundingDirection RoundingDirection_18('0');
  msg.set(RoundingDirection_18);
  OrderQtyData_18.insert(RoundingDirection_18.getString());
  FIX::RoundingModulus RoundingModulus_18;
  RoundingModulus_18.setString("5311487");
  msg.set(RoundingModulus_18);
  OrderQtyData_18.insert(RoundingModulus_18.getString());
  all_values.push_back(OrderQtyData_18);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_106;
    FIX::PartyID PartyID_106("STRING_1926109398");
    noPartyIDs_0_0.set(PartyID_106);
    Parties_NoPartyIDs_106.insert(PartyID_106.getString());
    FIX::PartyIDSource PartyIDSource_106('D');
    noPartyIDs_0_0.set(PartyIDSource_106);
    Parties_NoPartyIDs_106.insert(PartyIDSource_106.getString());
    FIX::PartyRole PartyRole_106(62);
    noPartyIDs_0_0.set(PartyRole_106);
    Parties_NoPartyIDs_106.insert(PartyRole_106.getString());
    all_values.push_back(Parties_NoPartyIDs_106);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_213;
      FIX::PartySubID PartySubID_213("STRING_26826119");
      noPartySubIDs_0_1_0.set(PartySubID_213);
      PtysSubGrp_NoPartySubIDs_213.insert(PartySubID_213.getString());
      FIX::PartySubIDType PartySubIDType_213(4);
      noPartySubIDs_0_1_0.set(PartySubIDType_213);
      PtysSubGrp_NoPartySubIDs_213.insert(PartySubIDType_213.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_213);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_214;
      FIX::PartySubID PartySubID_214("STRING_154755604");
      noPartySubIDs_0_1_1.set(PartySubID_214);
      PtysSubGrp_NoPartySubIDs_214.insert(PartySubID_214.getString());
      FIX::PartySubIDType PartySubIDType_214(31);
      noPartySubIDs_0_1_1.set(PartySubIDType_214);
      PtysSubGrp_NoPartySubIDs_214.insert(PartySubIDType_214.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_214);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_215;
      FIX::PartySubID PartySubID_215("STRING_1511118979");
      noPartySubIDs_0_1_2.set(PartySubID_215);
      PtysSubGrp_NoPartySubIDs_215.insert(PartySubID_215.getString());
      FIX::PartySubIDType PartySubIDType_215(26);
      noPartySubIDs_0_1_2.set(PartySubIDType_215);
      PtysSubGrp_NoPartySubIDs_215.insert(PartySubIDType_215.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_215);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_107;
    FIX::PartyID PartyID_107("STRING_1961772336");
    noPartyIDs_0_1.set(PartyID_107);
    Parties_NoPartyIDs_107.insert(PartyID_107.getString());
    FIX::PartyIDSource PartyIDSource_107('B');
    noPartyIDs_0_1.set(PartyIDSource_107);
    Parties_NoPartyIDs_107.insert(PartyIDSource_107.getString());
    FIX::PartyRole PartyRole_107(53);
    noPartyIDs_0_1.set(PartyRole_107);
    Parties_NoPartyIDs_107.insert(PartyRole_107.getString());
    all_values.push_back(Parties_NoPartyIDs_107);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_216;
      FIX::PartySubID PartySubID_216("STRING_1214426498");
      noPartySubIDs_1_1_0.set(PartySubID_216);
      PtysSubGrp_NoPartySubIDs_216.insert(PartySubID_216.getString());
      FIX::PartySubIDType PartySubIDType_216(28);
      noPartySubIDs_1_1_0.set(PartySubIDType_216);
      PtysSubGrp_NoPartySubIDs_216.insert(PartySubIDType_216.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_216);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_217;
      FIX::PartySubID PartySubID_217("STRING_1394800609");
      noPartySubIDs_1_1_1.set(PartySubID_217);
      PtysSubGrp_NoPartySubIDs_217.insert(PartySubID_217.getString());
      FIX::PartySubIDType PartySubIDType_217(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_217);
      PtysSubGrp_NoPartySubIDs_217.insert(PartySubIDType_217.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_217);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_108;
    FIX::PartyID PartyID_108("STRING_297304948");
    noPartyIDs_0_2.set(PartyID_108);
    Parties_NoPartyIDs_108.insert(PartyID_108.getString());
    FIX::PartyIDSource PartyIDSource_108('C');
    noPartyIDs_0_2.set(PartyIDSource_108);
    Parties_NoPartyIDs_108.insert(PartyIDSource_108.getString());
    FIX::PartyRole PartyRole_108(83);
    noPartyIDs_0_2.set(PartyRole_108);
    Parties_NoPartyIDs_108.insert(PartyRole_108.getString());
    all_values.push_back(Parties_NoPartyIDs_108);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_218;
      FIX::PartySubID PartySubID_218("STRING_233890258");
      noPartySubIDs_2_1_0.set(PartySubID_218);
      PtysSubGrp_NoPartySubIDs_218.insert(PartySubID_218.getString());
      FIX::PartySubIDType PartySubIDType_218(33);
      noPartySubIDs_2_1_0.set(PartySubIDType_218);
      PtysSubGrp_NoPartySubIDs_218.insert(PartySubIDType_218.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_218);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::Quote::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_0;
    FIX::QuoteQualifier QuoteQualifier_0('1');
    noQuoteQualifiers_0_0.set(QuoteQualifier_0);
    QuotQualGrp_NoQuoteQualifiers_0.insert(QuoteQualifier_0.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_0);

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::Quote::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_1;
    FIX::QuoteQualifier QuoteQualifier_1('1');
    noQuoteQualifiers_0_1.set(QuoteQualifier_1);
    QuotQualGrp_NoQuoteQualifiers_1.insert(QuoteQualifier_1.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_1);

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  {
    FIX50SP2::Quote::NoQuoteQualifiers noQuoteQualifiers_0_2;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_2;
    FIX::QuoteQualifier QuoteQualifier_2('1');
    noQuoteQualifiers_0_2.set(QuoteQualifier_2);
    QuotQualGrp_NoQuoteQualifiers_2.insert(QuoteQualifier_2.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_2);

    msg.addGroup(noQuoteQualifiers_0_2);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_16;
    FIX::RateSource RateSource_25(1);
    noRateSources_0_0.set(RateSource_25);
    RateSource_NoRateSources_16.insert(RateSource_25.getString());
    FIX::RateSourceType RateSourceType_16(1);
    noRateSources_0_0.set(RateSourceType_16);
    RateSource_NoRateSources_16.insert(RateSourceType_16.getString());
    FIX::ReferencePage ReferencePage_16("STRING_2118722731");
    noRateSources_0_0.set(ReferencePage_16);
    RateSource_NoRateSources_16.insert(ReferencePage_16.getString());
    all_values.push_back(RateSource_NoRateSources_16);

    msg.addGroup(noRateSources_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_21;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_21("CAN");
  msg.set(BenchmarkCurveCurrency_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurveCurrency_21.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_21("STRING_OTHER");
  msg.set(BenchmarkCurveName_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurveName_21.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_21("STRING_1937484064");
  msg.set(BenchmarkCurvePoint_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurvePoint_21.getString());
  FIX::BenchmarkPrice BenchmarkPrice_21;
  BenchmarkPrice_21.setString("16553428");
  msg.set(BenchmarkPrice_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkPrice_21.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_21(683700671);
  msg.set(BenchmarkPriceType_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkPriceType_21.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_21("STRING_1355817249");
  msg.set(BenchmarkSecurityID_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkSecurityID_21.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_21("STRING_1018978182");
  msg.set(BenchmarkSecurityIDSource_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkSecurityIDSource_21.getString());
  FIX::Spread Spread_21;
  Spread_21.setString("13100497");
  msg.set(Spread_21);
  SpreadOrBenchmarkCurveData_21.insert(Spread_21.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_21);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_29;
    FIX::StipulationType StipulationType_29("STRING_WAM");
    noStipulations_0_0.set(StipulationType_29);
    Stipulations_NoStipulations_29.insert(StipulationType_29.getString());
    FIX::StipulationValue StipulationValue_29("STRING_1765633231");
    noStipulations_0_0.set(StipulationValue_29);
    Stipulations_NoStipulations_29.insert(StipulationValue_29.getString());
    all_values.push_back(Stipulations_NoStipulations_29);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_30;
    FIX::StipulationType StipulationType_30("STRING_AVFICO");
    noStipulations_0_1.set(StipulationType_30);
    Stipulations_NoStipulations_30.insert(StipulationType_30.getString());
    FIX::StipulationValue StipulationValue_30("STRING_1831909506");
    noStipulations_0_1.set(StipulationValue_30);
    Stipulations_NoStipulations_30.insert(StipulationValue_30.getString());
    all_values.push_back(Stipulations_NoStipulations_30);

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_88;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_88("DATA_1278689251");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingIssuer_88.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_88(2021480084);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingIssuerLen_88.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_88("DATA_1376383005");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingSecurityDesc_88.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_88(1022980955);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_88);
    UnderlyingInstrument_88.insert(EncodedUnderlyingSecurityDescLen_88.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_88;
    UnderlyingAdjustedQuantity_88.setString("13793379");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_88);
    UnderlyingInstrument_88.insert(UnderlyingAdjustedQuantity_88.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_88;
    UnderlyingAllocationPercent_88.setString("90.230000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_88);
    UnderlyingInstrument_88.insert(UnderlyingAllocationPercent_88.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_88;
    UnderlyingAttachmentPoint_88.setString("12.130000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_88);
    UnderlyingInstrument_88.insert(UnderlyingAttachmentPoint_88.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_88("STRING_410147223");
    noUnderlyings_0_0.set(UnderlyingCFICode_88);
    UnderlyingInstrument_88.insert(UnderlyingCFICode_88.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_88("STRING_1969436724");
    noUnderlyings_0_0.set(UnderlyingCPProgram_88);
    UnderlyingInstrument_88.insert(UnderlyingCPProgram_88.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_88("STRING_814837707");
    noUnderlyings_0_0.set(UnderlyingCPRegType_88);
    UnderlyingInstrument_88.insert(UnderlyingCPRegType_88.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_88;
    UnderlyingCapValue_88.setString("14289356");
    noUnderlyings_0_0.set(UnderlyingCapValue_88);
    UnderlyingInstrument_88.insert(UnderlyingCapValue_88.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_88;
    UnderlyingCashAmount_88.setString("12363608");
    noUnderlyings_0_0.set(UnderlyingCashAmount_88);
    UnderlyingInstrument_88.insert(UnderlyingCashAmount_88.getString());
    FIX::UnderlyingCashType UnderlyingCashType_88("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_88);
    UnderlyingInstrument_88.insert(UnderlyingCashType_88.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_88;
    UnderlyingContractMultiplier_88.setString("8313892");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_88);
    UnderlyingInstrument_88.insert(UnderlyingContractMultiplier_88.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_88(460257774);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_88);
    UnderlyingInstrument_88.insert(UnderlyingContractMultiplierUnit_88.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_88("COUNTRY_978690123");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingCountryOfIssue_88.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_88("LOCALMKTDATE_594563536");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_88);
    UnderlyingInstrument_88.insert(UnderlyingCouponPaymentDate_88.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_88;
    UnderlyingCouponRate_88.setString("13.180000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_88);
    UnderlyingInstrument_88.insert(UnderlyingCouponRate_88.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_88("STRING_1507635190");
    noUnderlyings_0_0.set(UnderlyingCreditRating_88);
    UnderlyingInstrument_88.insert(UnderlyingCreditRating_88.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_88("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_88);
    UnderlyingInstrument_88.insert(UnderlyingCurrency_88.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_88;
    UnderlyingCurrentValue_88.setString("438522");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_88);
    UnderlyingInstrument_88.insert(UnderlyingCurrentValue_88.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_88;
    UnderlyingDetachmentPoint_88.setString("12.010000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_88);
    UnderlyingInstrument_88.insert(UnderlyingDetachmentPoint_88.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_88;
    UnderlyingDirtyPrice_88.setString("5937687");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_88);
    UnderlyingInstrument_88.insert(UnderlyingDirtyPrice_88.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_88;
    UnderlyingEndPrice_88.setString("13539019");
    noUnderlyings_0_0.set(UnderlyingEndPrice_88);
    UnderlyingInstrument_88.insert(UnderlyingEndPrice_88.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_88;
    UnderlyingEndValue_88.setString("7630034");
    noUnderlyings_0_0.set(UnderlyingEndValue_88);
    UnderlyingInstrument_88.insert(UnderlyingEndValue_88.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_88(1211251710);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_88);
    UnderlyingInstrument_88.insert(UnderlyingExerciseStyle_88.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_88;
    UnderlyingFXRate_88.setString("9720515");
    noUnderlyings_0_0.set(UnderlyingFXRate_88);
    UnderlyingInstrument_88.insert(UnderlyingFXRate_88.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_88('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_88);
    UnderlyingInstrument_88.insert(UnderlyingFXRateCalc_88.getString());
    FIX::UnderlyingFactor UnderlyingFactor_88;
    UnderlyingFactor_88.setString("8956775");
    noUnderlyings_0_0.set(UnderlyingFactor_88);
    UnderlyingInstrument_88.insert(UnderlyingFactor_88.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_88(2051129625);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_88);
    UnderlyingInstrument_88.insert(UnderlyingFlowScheduleType_88.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_88("STRING_1925581383");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_88);
    UnderlyingInstrument_88.insert(UnderlyingInstrRegistry_88.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_88("LOCALMKTDATE_769674004");
    noUnderlyings_0_0.set(UnderlyingIssueDate_88);
    UnderlyingInstrument_88.insert(UnderlyingIssueDate_88.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_88("STRING_1280028983");
    noUnderlyings_0_0.set(UnderlyingIssuer_88);
    UnderlyingInstrument_88.insert(UnderlyingIssuer_88.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_88("STRING_801078690");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingLocaleOfIssue_88.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_88("LOCALMKTDATE_1528277");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityDate_88.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_88("MONTHYEAR_1938618006");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityMonthYear_88.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_88("TZTIMEONLY_2057949903");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_88);
    UnderlyingInstrument_88.insert(UnderlyingMaturityTime_88.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_88;
    UnderlyingNotionalPercentageOutstanding_88.setString("55.000000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_88);
    UnderlyingInstrument_88.insert(UnderlyingNotionalPercentageOutstanding_88.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_88('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_88);
    UnderlyingInstrument_88.insert(UnderlyingOptAttribute_88.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_88;
    UnderlyingOriginalNotionalPercentageOutstanding_88.setString("39.630000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_88);
    UnderlyingInstrument_88.insert(UnderlyingOriginalNotionalPercentageOutstanding_88.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_88("STRING_1840611194");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_88);
    UnderlyingInstrument_88.insert(UnderlyingPriceUnitOfMeasure_88.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_88;
    UnderlyingPriceUnitOfMeasureQty_88.setString("8494483");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_88);
    UnderlyingInstrument_88.insert(UnderlyingPriceUnitOfMeasureQty_88.getString());
    FIX::UnderlyingProduct UnderlyingProduct_88(1732755003);
    noUnderlyings_0_0.set(UnderlyingProduct_88);
    UnderlyingInstrument_88.insert(UnderlyingProduct_88.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_88(524516785);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_88);
    UnderlyingInstrument_88.insert(UnderlyingPutOrCall_88.getString());
    FIX::UnderlyingPx UnderlyingPx_88;
    UnderlyingPx_88.setString("13097060");
    noUnderlyings_0_0.set(UnderlyingPx_88);
    UnderlyingInstrument_88.insert(UnderlyingPx_88.getString());
    FIX::UnderlyingQty UnderlyingQty_88;
    UnderlyingQty_88.setString("5639614");
    noUnderlyings_0_0.set(UnderlyingQty_88);
    UnderlyingInstrument_88.insert(UnderlyingQty_88.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_88("LOCALMKTDATE_1119080321");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_88);
    UnderlyingInstrument_88.insert(UnderlyingRedemptionDate_88.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_88("STRING_1376637395");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_88);
    UnderlyingInstrument_88.insert(UnderlyingRepoCollateralSecurityType_88.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_88;
    UnderlyingRepurchaseRate_88.setString("66.680000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_88);
    UnderlyingInstrument_88.insert(UnderlyingRepurchaseRate_88.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_88(1503644273);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_88);
    UnderlyingInstrument_88.insert(UnderlyingRepurchaseTerm_88.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_88("STRING_951427916");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_88);
    UnderlyingInstrument_88.insert(UnderlyingRestructuringType_88.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_88("STRING_2115448881");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityDesc_88.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_88("EXCHANGE_1096541827");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityExchange_88.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_88("STRING_1545196619");
    noUnderlyings_0_0.set(UnderlyingSecurityID_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityID_88.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_88("STRING_1321867218");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityIDSource_88.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_88("STRING_1859545317");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_88);
    UnderlyingInstrument_88.insert(UnderlyingSecuritySubType_88.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_88("STRING_608964681");
    noUnderlyings_0_0.set(UnderlyingSecurityType_88);
    UnderlyingInstrument_88.insert(UnderlyingSecurityType_88.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_88("STRING_146435138");
    noUnderlyings_0_0.set(UnderlyingSeniority_88);
    UnderlyingInstrument_88.insert(UnderlyingSeniority_88.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_88("STRING_358953802");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_88);
    UnderlyingInstrument_88.insert(UnderlyingSettlMethod_88.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_88(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_88);
    UnderlyingInstrument_88.insert(UnderlyingSettlementType_88.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_88;
    UnderlyingStartValue_88.setString("500811");
    noUnderlyings_0_0.set(UnderlyingStartValue_88);
    UnderlyingInstrument_88.insert(UnderlyingStartValue_88.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_88("STRING_137051537");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_88);
    UnderlyingInstrument_88.insert(UnderlyingStateOrProvinceOfIssue_88.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_88("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_88);
    UnderlyingInstrument_88.insert(UnderlyingStrikeCurrency_88.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_88;
    UnderlyingStrikePrice_88.setString("9381302");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_88);
    UnderlyingInstrument_88.insert(UnderlyingStrikePrice_88.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_88("STRING_128360884");
    noUnderlyings_0_0.set(UnderlyingSymbol_88);
    UnderlyingInstrument_88.insert(UnderlyingSymbol_88.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_88("STRING_1121244457");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_88);
    UnderlyingInstrument_88.insert(UnderlyingSymbolSfx_88.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_88("STRING_848596483");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_88);
    UnderlyingInstrument_88.insert(UnderlyingTimeUnit_88.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_88("STRING_540036384");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_88);
    UnderlyingInstrument_88.insert(UnderlyingUnitOfMeasure_88.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_88;
    UnderlyingUnitOfMeasureQty_88.setString("7343318");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_88);
    UnderlyingInstrument_88.insert(UnderlyingUnitOfMeasureQty_88.getString());
    all_values.push_back(UnderlyingInstrument_88);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_185;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_185("STRING_233163930");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_185);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_185.insert(UnderlyingSecurityAltID_185.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_185("STRING_1583780195");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_185);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_185.insert(UnderlyingSecurityAltIDSource_185.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_171;
      FIX::UnderlyingStipType UnderlyingStipType_171("STRING_757680715");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_171);
      UnderlyingStipulations_NoUnderlyingStips_171.insert(UnderlyingStipType_171.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_171("STRING_746002624");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_171);
      UnderlyingStipulations_NoUnderlyingStips_171.insert(UnderlyingStipValue_171.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_171);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_172;
      FIX::UnderlyingStipType UnderlyingStipType_172("STRING_1723133279");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_172);
      UnderlyingStipulations_NoUnderlyingStips_172.insert(UnderlyingStipType_172.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_172("STRING_1876761036");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_172);
      UnderlyingStipulations_NoUnderlyingStips_172.insert(UnderlyingStipValue_172.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_172);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_178;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_178("STRING_1647246299");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyID_178.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_178('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyIDSource_178.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_178(926584287);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyRole_178.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_178);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_360("STRING_181979841");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_360);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360.insert(UnderlyingInstrumentPartySubID_360.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_360(324297258);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_360);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360.insert(UnderlyingInstrumentPartySubIDType_360.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_361("STRING_789595103");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_361);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361.insert(UnderlyingInstrumentPartySubID_361.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_361(2041525158);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_361);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361.insert(UnderlyingInstrumentPartySubIDType_361.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_89;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_89("DATA_933261939");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingIssuer_89.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_89(936030242);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingIssuerLen_89.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_89("DATA_252995312");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingSecurityDesc_89.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_89(290420541);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_89);
    UnderlyingInstrument_89.insert(EncodedUnderlyingSecurityDescLen_89.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_89;
    UnderlyingAdjustedQuantity_89.setString("9861113");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_89);
    UnderlyingInstrument_89.insert(UnderlyingAdjustedQuantity_89.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_89;
    UnderlyingAllocationPercent_89.setString("68.500000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_89);
    UnderlyingInstrument_89.insert(UnderlyingAllocationPercent_89.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_89;
    UnderlyingAttachmentPoint_89.setString("31.480000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_89);
    UnderlyingInstrument_89.insert(UnderlyingAttachmentPoint_89.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_89("STRING_168737809");
    noUnderlyings_0_1.set(UnderlyingCFICode_89);
    UnderlyingInstrument_89.insert(UnderlyingCFICode_89.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_89("STRING_1328177078");
    noUnderlyings_0_1.set(UnderlyingCPProgram_89);
    UnderlyingInstrument_89.insert(UnderlyingCPProgram_89.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_89("STRING_545614032");
    noUnderlyings_0_1.set(UnderlyingCPRegType_89);
    UnderlyingInstrument_89.insert(UnderlyingCPRegType_89.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_89;
    UnderlyingCapValue_89.setString("12899822");
    noUnderlyings_0_1.set(UnderlyingCapValue_89);
    UnderlyingInstrument_89.insert(UnderlyingCapValue_89.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_89;
    UnderlyingCashAmount_89.setString("292899");
    noUnderlyings_0_1.set(UnderlyingCashAmount_89);
    UnderlyingInstrument_89.insert(UnderlyingCashAmount_89.getString());
    FIX::UnderlyingCashType UnderlyingCashType_89("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_89);
    UnderlyingInstrument_89.insert(UnderlyingCashType_89.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_89;
    UnderlyingContractMultiplier_89.setString("20243141");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_89);
    UnderlyingInstrument_89.insert(UnderlyingContractMultiplier_89.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_89(1603190360);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_89);
    UnderlyingInstrument_89.insert(UnderlyingContractMultiplierUnit_89.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_89("COUNTRY_1318814347");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingCountryOfIssue_89.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_89("LOCALMKTDATE_1460610706");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_89);
    UnderlyingInstrument_89.insert(UnderlyingCouponPaymentDate_89.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_89;
    UnderlyingCouponRate_89.setString("85.130000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_89);
    UnderlyingInstrument_89.insert(UnderlyingCouponRate_89.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_89("STRING_2076495062");
    noUnderlyings_0_1.set(UnderlyingCreditRating_89);
    UnderlyingInstrument_89.insert(UnderlyingCreditRating_89.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_89("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_89);
    UnderlyingInstrument_89.insert(UnderlyingCurrency_89.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_89;
    UnderlyingCurrentValue_89.setString("18057724");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_89);
    UnderlyingInstrument_89.insert(UnderlyingCurrentValue_89.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_89;
    UnderlyingDetachmentPoint_89.setString("60.530000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_89);
    UnderlyingInstrument_89.insert(UnderlyingDetachmentPoint_89.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_89;
    UnderlyingDirtyPrice_89.setString("18377744");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_89);
    UnderlyingInstrument_89.insert(UnderlyingDirtyPrice_89.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_89;
    UnderlyingEndPrice_89.setString("8912104");
    noUnderlyings_0_1.set(UnderlyingEndPrice_89);
    UnderlyingInstrument_89.insert(UnderlyingEndPrice_89.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_89;
    UnderlyingEndValue_89.setString("9608703");
    noUnderlyings_0_1.set(UnderlyingEndValue_89);
    UnderlyingInstrument_89.insert(UnderlyingEndValue_89.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_89(1305502329);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_89);
    UnderlyingInstrument_89.insert(UnderlyingExerciseStyle_89.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_89;
    UnderlyingFXRate_89.setString("10731903");
    noUnderlyings_0_1.set(UnderlyingFXRate_89);
    UnderlyingInstrument_89.insert(UnderlyingFXRate_89.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_89('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_89);
    UnderlyingInstrument_89.insert(UnderlyingFXRateCalc_89.getString());
    FIX::UnderlyingFactor UnderlyingFactor_89;
    UnderlyingFactor_89.setString("20950974");
    noUnderlyings_0_1.set(UnderlyingFactor_89);
    UnderlyingInstrument_89.insert(UnderlyingFactor_89.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_89(967231816);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_89);
    UnderlyingInstrument_89.insert(UnderlyingFlowScheduleType_89.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_89("STRING_70945889");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_89);
    UnderlyingInstrument_89.insert(UnderlyingInstrRegistry_89.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_89("LOCALMKTDATE_883644027");
    noUnderlyings_0_1.set(UnderlyingIssueDate_89);
    UnderlyingInstrument_89.insert(UnderlyingIssueDate_89.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_89("STRING_1220227129");
    noUnderlyings_0_1.set(UnderlyingIssuer_89);
    UnderlyingInstrument_89.insert(UnderlyingIssuer_89.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_89("STRING_361366431");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingLocaleOfIssue_89.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_89("LOCALMKTDATE_1869755385");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityDate_89.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_89("MONTHYEAR_1610273979");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityMonthYear_89.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_89("TZTIMEONLY_778619579");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_89);
    UnderlyingInstrument_89.insert(UnderlyingMaturityTime_89.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_89;
    UnderlyingNotionalPercentageOutstanding_89.setString("31.940000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_89);
    UnderlyingInstrument_89.insert(UnderlyingNotionalPercentageOutstanding_89.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_89('7');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_89);
    UnderlyingInstrument_89.insert(UnderlyingOptAttribute_89.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_89;
    UnderlyingOriginalNotionalPercentageOutstanding_89.setString("36.110000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_89);
    UnderlyingInstrument_89.insert(UnderlyingOriginalNotionalPercentageOutstanding_89.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_89("STRING_1180991812");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_89);
    UnderlyingInstrument_89.insert(UnderlyingPriceUnitOfMeasure_89.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_89;
    UnderlyingPriceUnitOfMeasureQty_89.setString("8202573");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_89);
    UnderlyingInstrument_89.insert(UnderlyingPriceUnitOfMeasureQty_89.getString());
    FIX::UnderlyingProduct UnderlyingProduct_89(262400379);
    noUnderlyings_0_1.set(UnderlyingProduct_89);
    UnderlyingInstrument_89.insert(UnderlyingProduct_89.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_89(1057822323);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_89);
    UnderlyingInstrument_89.insert(UnderlyingPutOrCall_89.getString());
    FIX::UnderlyingPx UnderlyingPx_89;
    UnderlyingPx_89.setString("2759640");
    noUnderlyings_0_1.set(UnderlyingPx_89);
    UnderlyingInstrument_89.insert(UnderlyingPx_89.getString());
    FIX::UnderlyingQty UnderlyingQty_89;
    UnderlyingQty_89.setString("15812147");
    noUnderlyings_0_1.set(UnderlyingQty_89);
    UnderlyingInstrument_89.insert(UnderlyingQty_89.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_89("LOCALMKTDATE_370949381");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_89);
    UnderlyingInstrument_89.insert(UnderlyingRedemptionDate_89.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_89("STRING_890842548");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_89);
    UnderlyingInstrument_89.insert(UnderlyingRepoCollateralSecurityType_89.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_89;
    UnderlyingRepurchaseRate_89.setString("61.410000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_89);
    UnderlyingInstrument_89.insert(UnderlyingRepurchaseRate_89.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_89(430079063);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_89);
    UnderlyingInstrument_89.insert(UnderlyingRepurchaseTerm_89.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_89("STRING_1081370693");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_89);
    UnderlyingInstrument_89.insert(UnderlyingRestructuringType_89.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_89("STRING_1168514944");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityDesc_89.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_89("EXCHANGE_464365116");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityExchange_89.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_89("STRING_771661489");
    noUnderlyings_0_1.set(UnderlyingSecurityID_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityID_89.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_89("STRING_2059725409");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityIDSource_89.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_89("STRING_1425235456");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_89);
    UnderlyingInstrument_89.insert(UnderlyingSecuritySubType_89.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_89("STRING_2077163819");
    noUnderlyings_0_1.set(UnderlyingSecurityType_89);
    UnderlyingInstrument_89.insert(UnderlyingSecurityType_89.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_89("STRING_985432067");
    noUnderlyings_0_1.set(UnderlyingSeniority_89);
    UnderlyingInstrument_89.insert(UnderlyingSeniority_89.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_89("STRING_562919406");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_89);
    UnderlyingInstrument_89.insert(UnderlyingSettlMethod_89.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_89(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_89);
    UnderlyingInstrument_89.insert(UnderlyingSettlementType_89.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_89;
    UnderlyingStartValue_89.setString("19526638");
    noUnderlyings_0_1.set(UnderlyingStartValue_89);
    UnderlyingInstrument_89.insert(UnderlyingStartValue_89.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_89("STRING_633865296");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_89);
    UnderlyingInstrument_89.insert(UnderlyingStateOrProvinceOfIssue_89.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_89("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_89);
    UnderlyingInstrument_89.insert(UnderlyingStrikeCurrency_89.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_89;
    UnderlyingStrikePrice_89.setString("9952317");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_89);
    UnderlyingInstrument_89.insert(UnderlyingStrikePrice_89.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_89("STRING_483209720");
    noUnderlyings_0_1.set(UnderlyingSymbol_89);
    UnderlyingInstrument_89.insert(UnderlyingSymbol_89.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_89("STRING_488197695");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_89);
    UnderlyingInstrument_89.insert(UnderlyingSymbolSfx_89.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_89("STRING_1773851306");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_89);
    UnderlyingInstrument_89.insert(UnderlyingTimeUnit_89.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_89("STRING_374219266");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_89);
    UnderlyingInstrument_89.insert(UnderlyingUnitOfMeasure_89.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_89;
    UnderlyingUnitOfMeasureQty_89.setString("12791651");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_89);
    UnderlyingInstrument_89.insert(UnderlyingUnitOfMeasureQty_89.getString());
    all_values.push_back(UnderlyingInstrument_89);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_186;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_186("STRING_1555211078");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_186);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_186.insert(UnderlyingSecurityAltID_186.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_186("STRING_2099422427");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_186);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_186.insert(UnderlyingSecurityAltIDSource_186.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_186);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_187;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_187("STRING_1213001648");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_187);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_187.insert(UnderlyingSecurityAltID_187.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_187("STRING_465549754");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_187);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_187.insert(UnderlyingSecurityAltIDSource_187.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_187);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_188;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_188("STRING_227902813");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_188);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_188.insert(UnderlyingSecurityAltID_188.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_188("STRING_646732727");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_188);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_188.insert(UnderlyingSecurityAltIDSource_188.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_188);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_173;
      FIX::UnderlyingStipType UnderlyingStipType_173("STRING_1118745361");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_173);
      UnderlyingStipulations_NoUnderlyingStips_173.insert(UnderlyingStipType_173.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_173("STRING_9475220");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_173);
      UnderlyingStipulations_NoUnderlyingStips_173.insert(UnderlyingStipValue_173.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_173);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_179;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_179("STRING_52632406");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyID_179.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_179('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyIDSource_179.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_179(1730943315);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyRole_179.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_179);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_362("STRING_1090231925");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_362);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362.insert(UnderlyingInstrumentPartySubID_362.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_362(1008695124);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_362);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362.insert(UnderlyingInstrumentPartySubIDType_362.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_90;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_90("DATA_753974067");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingIssuer_90.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_90(2075663992);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingIssuerLen_90.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_90("DATA_1571614530");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingSecurityDesc_90.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_90(631268023);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_90);
    UnderlyingInstrument_90.insert(EncodedUnderlyingSecurityDescLen_90.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_90;
    UnderlyingAdjustedQuantity_90.setString("18808442");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_90);
    UnderlyingInstrument_90.insert(UnderlyingAdjustedQuantity_90.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_90;
    UnderlyingAllocationPercent_90.setString("61.780000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_90);
    UnderlyingInstrument_90.insert(UnderlyingAllocationPercent_90.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_90;
    UnderlyingAttachmentPoint_90.setString("60.060000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_90);
    UnderlyingInstrument_90.insert(UnderlyingAttachmentPoint_90.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_90("STRING_758767944");
    noUnderlyings_0_2.set(UnderlyingCFICode_90);
    UnderlyingInstrument_90.insert(UnderlyingCFICode_90.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_90("STRING_1053227905");
    noUnderlyings_0_2.set(UnderlyingCPProgram_90);
    UnderlyingInstrument_90.insert(UnderlyingCPProgram_90.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_90("STRING_1875415726");
    noUnderlyings_0_2.set(UnderlyingCPRegType_90);
    UnderlyingInstrument_90.insert(UnderlyingCPRegType_90.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_90;
    UnderlyingCapValue_90.setString("12469656");
    noUnderlyings_0_2.set(UnderlyingCapValue_90);
    UnderlyingInstrument_90.insert(UnderlyingCapValue_90.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_90;
    UnderlyingCashAmount_90.setString("6795955");
    noUnderlyings_0_2.set(UnderlyingCashAmount_90);
    UnderlyingInstrument_90.insert(UnderlyingCashAmount_90.getString());
    FIX::UnderlyingCashType UnderlyingCashType_90("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_90);
    UnderlyingInstrument_90.insert(UnderlyingCashType_90.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_90;
    UnderlyingContractMultiplier_90.setString("3786470");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_90);
    UnderlyingInstrument_90.insert(UnderlyingContractMultiplier_90.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_90(1630196832);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_90);
    UnderlyingInstrument_90.insert(UnderlyingContractMultiplierUnit_90.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_90("COUNTRY_1657362422");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingCountryOfIssue_90.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_90("LOCALMKTDATE_330585875");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_90);
    UnderlyingInstrument_90.insert(UnderlyingCouponPaymentDate_90.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_90;
    UnderlyingCouponRate_90.setString("48.330000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_90);
    UnderlyingInstrument_90.insert(UnderlyingCouponRate_90.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_90("STRING_2122912176");
    noUnderlyings_0_2.set(UnderlyingCreditRating_90);
    UnderlyingInstrument_90.insert(UnderlyingCreditRating_90.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_90("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_90);
    UnderlyingInstrument_90.insert(UnderlyingCurrency_90.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_90;
    UnderlyingCurrentValue_90.setString("8119276");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_90);
    UnderlyingInstrument_90.insert(UnderlyingCurrentValue_90.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_90;
    UnderlyingDetachmentPoint_90.setString("40.500000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_90);
    UnderlyingInstrument_90.insert(UnderlyingDetachmentPoint_90.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_90;
    UnderlyingDirtyPrice_90.setString("13519227");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_90);
    UnderlyingInstrument_90.insert(UnderlyingDirtyPrice_90.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_90;
    UnderlyingEndPrice_90.setString("20785058");
    noUnderlyings_0_2.set(UnderlyingEndPrice_90);
    UnderlyingInstrument_90.insert(UnderlyingEndPrice_90.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_90;
    UnderlyingEndValue_90.setString("17298664");
    noUnderlyings_0_2.set(UnderlyingEndValue_90);
    UnderlyingInstrument_90.insert(UnderlyingEndValue_90.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_90(382429296);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_90);
    UnderlyingInstrument_90.insert(UnderlyingExerciseStyle_90.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_90;
    UnderlyingFXRate_90.setString("16619655");
    noUnderlyings_0_2.set(UnderlyingFXRate_90);
    UnderlyingInstrument_90.insert(UnderlyingFXRate_90.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_90('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_90);
    UnderlyingInstrument_90.insert(UnderlyingFXRateCalc_90.getString());
    FIX::UnderlyingFactor UnderlyingFactor_90;
    UnderlyingFactor_90.setString("14726612");
    noUnderlyings_0_2.set(UnderlyingFactor_90);
    UnderlyingInstrument_90.insert(UnderlyingFactor_90.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_90(523177006);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_90);
    UnderlyingInstrument_90.insert(UnderlyingFlowScheduleType_90.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_90("STRING_1160650771");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_90);
    UnderlyingInstrument_90.insert(UnderlyingInstrRegistry_90.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_90("LOCALMKTDATE_1400841565");
    noUnderlyings_0_2.set(UnderlyingIssueDate_90);
    UnderlyingInstrument_90.insert(UnderlyingIssueDate_90.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_90("STRING_2094791537");
    noUnderlyings_0_2.set(UnderlyingIssuer_90);
    UnderlyingInstrument_90.insert(UnderlyingIssuer_90.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_90("STRING_1791918794");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingLocaleOfIssue_90.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_90("LOCALMKTDATE_1134202144");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityDate_90.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_90("MONTHYEAR_5304067");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityMonthYear_90.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_90("TZTIMEONLY_1036641152");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_90);
    UnderlyingInstrument_90.insert(UnderlyingMaturityTime_90.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_90;
    UnderlyingNotionalPercentageOutstanding_90.setString("0.880000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_90);
    UnderlyingInstrument_90.insert(UnderlyingNotionalPercentageOutstanding_90.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_90('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_90);
    UnderlyingInstrument_90.insert(UnderlyingOptAttribute_90.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_90;
    UnderlyingOriginalNotionalPercentageOutstanding_90.setString("32.300000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_90);
    UnderlyingInstrument_90.insert(UnderlyingOriginalNotionalPercentageOutstanding_90.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_90("STRING_992452080");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_90);
    UnderlyingInstrument_90.insert(UnderlyingPriceUnitOfMeasure_90.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_90;
    UnderlyingPriceUnitOfMeasureQty_90.setString("17381275");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_90);
    UnderlyingInstrument_90.insert(UnderlyingPriceUnitOfMeasureQty_90.getString());
    FIX::UnderlyingProduct UnderlyingProduct_90(866724574);
    noUnderlyings_0_2.set(UnderlyingProduct_90);
    UnderlyingInstrument_90.insert(UnderlyingProduct_90.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_90(1371099176);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_90);
    UnderlyingInstrument_90.insert(UnderlyingPutOrCall_90.getString());
    FIX::UnderlyingPx UnderlyingPx_90;
    UnderlyingPx_90.setString("12208407");
    noUnderlyings_0_2.set(UnderlyingPx_90);
    UnderlyingInstrument_90.insert(UnderlyingPx_90.getString());
    FIX::UnderlyingQty UnderlyingQty_90;
    UnderlyingQty_90.setString("3766033");
    noUnderlyings_0_2.set(UnderlyingQty_90);
    UnderlyingInstrument_90.insert(UnderlyingQty_90.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_90("LOCALMKTDATE_1701685051");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_90);
    UnderlyingInstrument_90.insert(UnderlyingRedemptionDate_90.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_90("STRING_1916555554");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_90);
    UnderlyingInstrument_90.insert(UnderlyingRepoCollateralSecurityType_90.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_90;
    UnderlyingRepurchaseRate_90.setString("18.770000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_90);
    UnderlyingInstrument_90.insert(UnderlyingRepurchaseRate_90.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_90(112690091);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_90);
    UnderlyingInstrument_90.insert(UnderlyingRepurchaseTerm_90.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_90("STRING_1111519466");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_90);
    UnderlyingInstrument_90.insert(UnderlyingRestructuringType_90.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_90("STRING_1163959541");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityDesc_90.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_90("EXCHANGE_1789924141");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityExchange_90.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_90("STRING_315958598");
    noUnderlyings_0_2.set(UnderlyingSecurityID_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityID_90.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_90("STRING_1094981756");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityIDSource_90.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_90("STRING_1372306950");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_90);
    UnderlyingInstrument_90.insert(UnderlyingSecuritySubType_90.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_90("STRING_698387894");
    noUnderlyings_0_2.set(UnderlyingSecurityType_90);
    UnderlyingInstrument_90.insert(UnderlyingSecurityType_90.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_90("STRING_609463639");
    noUnderlyings_0_2.set(UnderlyingSeniority_90);
    UnderlyingInstrument_90.insert(UnderlyingSeniority_90.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_90("STRING_1778983654");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_90);
    UnderlyingInstrument_90.insert(UnderlyingSettlMethod_90.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_90(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_90);
    UnderlyingInstrument_90.insert(UnderlyingSettlementType_90.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_90;
    UnderlyingStartValue_90.setString("11326406");
    noUnderlyings_0_2.set(UnderlyingStartValue_90);
    UnderlyingInstrument_90.insert(UnderlyingStartValue_90.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_90("STRING_792150778");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_90);
    UnderlyingInstrument_90.insert(UnderlyingStateOrProvinceOfIssue_90.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_90("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_90);
    UnderlyingInstrument_90.insert(UnderlyingStrikeCurrency_90.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_90;
    UnderlyingStrikePrice_90.setString("4365859");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_90);
    UnderlyingInstrument_90.insert(UnderlyingStrikePrice_90.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_90("STRING_411125528");
    noUnderlyings_0_2.set(UnderlyingSymbol_90);
    UnderlyingInstrument_90.insert(UnderlyingSymbol_90.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_90("STRING_1085252602");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_90);
    UnderlyingInstrument_90.insert(UnderlyingSymbolSfx_90.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_90("STRING_1473227077");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_90);
    UnderlyingInstrument_90.insert(UnderlyingTimeUnit_90.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_90("STRING_156611969");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_90);
    UnderlyingInstrument_90.insert(UnderlyingUnitOfMeasure_90.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_90;
    UnderlyingUnitOfMeasureQty_90.setString("21437845");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_90);
    UnderlyingInstrument_90.insert(UnderlyingUnitOfMeasureQty_90.getString());
    all_values.push_back(UnderlyingInstrument_90);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_189;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_189("STRING_1149064049");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_189);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_189.insert(UnderlyingSecurityAltID_189.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_189("STRING_1734428463");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_189);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_189.insert(UnderlyingSecurityAltIDSource_189.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_174;
      FIX::UnderlyingStipType UnderlyingStipType_174("STRING_372679577");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_174);
      UnderlyingStipulations_NoUnderlyingStips_174.insert(UnderlyingStipType_174.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_174("STRING_807785536");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_174);
      UnderlyingStipulations_NoUnderlyingStips_174.insert(UnderlyingStipValue_174.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_174);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_175;
      FIX::UnderlyingStipType UnderlyingStipType_175("STRING_1333644583");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_175);
      UnderlyingStipulations_NoUnderlyingStips_175.insert(UnderlyingStipType_175.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_175("STRING_2074364628");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_175);
      UnderlyingStipulations_NoUnderlyingStips_175.insert(UnderlyingStipValue_175.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_175);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_176;
      FIX::UnderlyingStipType UnderlyingStipType_176("STRING_576857442");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_176);
      UnderlyingStipulations_NoUnderlyingStips_176.insert(UnderlyingStipType_176.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_176("STRING_1685676460");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_176);
      UnderlyingStipulations_NoUnderlyingStips_176.insert(UnderlyingStipValue_176.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_176);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_180;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_180("STRING_1688376908");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_180);
      UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyID_180.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_180('7');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_180);
      UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyIDSource_180.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_180(1829495213);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_180);
      UndlyInstrumentParties_NoUndlyInstrumentParties_180.insert(UnderlyingInstrumentPartyRole_180.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_180);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_363("STRING_1797134110");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_363);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363.insert(UnderlyingInstrumentPartySubID_363.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_363(1054318515);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_363);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363.insert(UnderlyingInstrumentPartySubIDType_363.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_364("STRING_555239752");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_364);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364.insert(UnderlyingInstrumentPartySubID_364.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_364(259114101);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_364);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364.insert(UnderlyingInstrumentPartySubIDType_364.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_16;
  FIX::Yield Yield_16;
  Yield_16.setString("85.210000");
  msg.set(Yield_16);
  YieldData_16.insert(Yield_16.getString());
  FIX::YieldCalcDate YieldCalcDate_16("LOCALMKTDATE_578805219");
  msg.set(YieldCalcDate_16);
  YieldData_16.insert(YieldCalcDate_16.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_16("LOCALMKTDATE_1391754747");
  msg.set(YieldRedemptionDate_16);
  YieldData_16.insert(YieldRedemptionDate_16.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_16;
  YieldRedemptionPrice_16.setString("14779692");
  msg.set(YieldRedemptionPrice_16);
  YieldData_16.insert(YieldRedemptionPrice_16.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_16(2003212251);
  msg.set(YieldRedemptionPriceType_16);
  YieldData_16.insert(YieldRedemptionPriceType_16.getString());
  FIX::YieldType YieldType_16("STRING_MARK");
  msg.set(YieldType_16);
  YieldData_16.insert(YieldType_16.getString());
  all_values.push_back(YieldData_16);


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
