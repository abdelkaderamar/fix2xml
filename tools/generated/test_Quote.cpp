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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Quote msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Quote_0;
  FIX::Account Account_33("STRING_795705149");
  msg.set(Account_33);
  Quote_0.insert(Account_33.getString());
  FIX::AccountType AccountType_28(7);
  msg.set(AccountType_28);
  Quote_0.insert(AccountType_28.getString());
  FIX::AcctIDSource AcctIDSource_26(4);
  msg.set(AcctIDSource_26);
  Quote_0.insert(AcctIDSource_26.getString());
  FIX::BidForwardPoints BidForwardPoints_14;
  BidForwardPoints_14.setString("8114262");
  msg.set(BidForwardPoints_14);
  Quote_0.insert(BidForwardPoints_14.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_14;
  BidForwardPoints2_14.setString("2505317");
  msg.set(BidForwardPoints2_14);
  Quote_0.insert(BidForwardPoints2_14.getString());
  FIX::BidPx BidPx_14;
  BidPx_14.setString("14258510");
  msg.set(BidPx_14);
  Quote_0.insert(BidPx_14.getString());
  FIX::BidSize BidSize_14;
  BidSize_14.setString("3371784");
  msg.set(BidSize_14);
  Quote_0.insert(BidSize_14.getString());
  FIX::BidSpotRate BidSpotRate_14;
  BidSpotRate_14.setString("1437460");
  msg.set(BidSpotRate_14);
  Quote_0.insert(BidSpotRate_14.getString());
  FIX::BidSwapPoints BidSwapPoints_0;
  BidSwapPoints_0.setString("16161462");
  msg.set(BidSwapPoints_0);
  Quote_0.insert(BidSwapPoints_0.getString());
  FIX::BidYield BidYield_14;
  BidYield_14.setString("56.850000");
  msg.set(BidYield_14);
  Quote_0.insert(BidYield_14.getString());
  FIX::BookingType BookingType_31(2);
  msg.set(BookingType_31);
  Quote_0.insert(BookingType_31.getString());
  FIX::CommType CommType_22('1');
  msg.set(CommType_22);
  Quote_0.insert(CommType_22.getString());
  FIX::Commission Commission_22;
  Commission_22.setString("14119660");
  msg.set(Commission_22);
  Quote_0.insert(Commission_22.getString());
  FIX::Currency Currency_55("CAN");
  msg.set(Currency_55);
  Quote_0.insert(Currency_55.getString());
  FIX::CustOrderCapacity CustOrderCapacity_17(2);
  msg.set(CustOrderCapacity_17);
  Quote_0.insert(CustOrderCapacity_17.getString());
  FIX::EncodedText EncodedText_75("DATA_1850233199");
  msg.set(EncodedText_75);
  Quote_0.insert(EncodedText_75.getString());
  FIX::EncodedTextLen EncodedTextLen_75(1223182647);
  msg.set(EncodedTextLen_75);
  Quote_0.insert(EncodedTextLen_75.getString());
  FIX::ExDestination ExDestination_9("EXCHANGE_114256517");
  msg.set(ExDestination_9);
  Quote_0.insert(ExDestination_9.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_9('G');
  msg.set(ExDestinationIDSource_9);
  Quote_0.insert(ExDestinationIDSource_9.getString());
  FIX::MidPx MidPx_14;
  MidPx_14.setString("8748561");
  msg.set(MidPx_14);
  Quote_0.insert(MidPx_14.getString());
  FIX::MidYield MidYield_14;
  MidYield_14.setString("19.290000");
  msg.set(MidYield_14);
  Quote_0.insert(MidYield_14.getString());
  FIX::MinBidSize MinBidSize_0;
  MinBidSize_0.setString("17261129");
  msg.set(MinBidSize_0);
  Quote_0.insert(MinBidSize_0.getString());
  FIX::MinOfferSize MinOfferSize_0;
  MinOfferSize_0.setString("893911");
  msg.set(MinOfferSize_0);
  Quote_0.insert(MinOfferSize_0.getString());
  FIX::MinQty MinQty_13;
  MinQty_13.setString("8851506");
  msg.set(MinQty_13);
  Quote_0.insert(MinQty_13.getString());
  FIX::MktBidPx MktBidPx_0;
  MktBidPx_0.setString("20137281");
  msg.set(MktBidPx_0);
  Quote_0.insert(MktBidPx_0.getString());
  FIX::MktOfferPx MktOfferPx_0;
  MktOfferPx_0.setString("1231573");
  msg.set(MktOfferPx_0);
  Quote_0.insert(MktOfferPx_0.getString());
  FIX::OfferForwardPoints OfferForwardPoints_14;
  OfferForwardPoints_14.setString("5371210");
  msg.set(OfferForwardPoints_14);
  Quote_0.insert(OfferForwardPoints_14.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_14;
  OfferForwardPoints2_14.setString("6768798");
  msg.set(OfferForwardPoints2_14);
  Quote_0.insert(OfferForwardPoints2_14.getString());
  FIX::OfferPx OfferPx_14;
  OfferPx_14.setString("20275103");
  msg.set(OfferPx_14);
  Quote_0.insert(OfferPx_14.getString());
  FIX::OfferSize OfferSize_14;
  OfferSize_14.setString("2455564");
  msg.set(OfferSize_14);
  Quote_0.insert(OfferSize_14.getString());
  FIX::OfferSpotRate OfferSpotRate_14;
  OfferSpotRate_14.setString("14725850");
  msg.set(OfferSpotRate_14);
  Quote_0.insert(OfferSpotRate_14.getString());
  FIX::OfferSwapPoints OfferSwapPoints_0;
  OfferSwapPoints_0.setString("14413790");
  msg.set(OfferSwapPoints_0);
  Quote_0.insert(OfferSwapPoints_0.getString());
  FIX::OfferYield OfferYield_14;
  OfferYield_14.setString("67.530000");
  msg.set(OfferYield_14);
  Quote_0.insert(OfferYield_14.getString());
  FIX::OrdType OrdType_55('5');
  msg.set(OrdType_55);
  Quote_0.insert(OrdType_55.getString());
  FIX::OrderCapacity OrderCapacity_32('R');
  msg.set(OrderCapacity_32);
  Quote_0.insert(OrderCapacity_32.getString());
  FIX::OrderQty2 OrderQty2_20;
  OrderQty2_20.setString("1241741");
  msg.set(OrderQty2_20);
  Quote_0.insert(OrderQty2_20.getString());
  FIX::OrderRestrictions OrderRestrictions_29("MULTIPLECHARVALUE_A");
  msg.set(OrderRestrictions_29);
  Quote_0.insert(OrderRestrictions_29.getString());
  FIX::PriceType PriceType_36(11);
  msg.set(PriceType_36);
  Quote_0.insert(PriceType_36.getString());
  FIX::PrivateQuote PrivateQuote_0(false);
  msg.set(PrivateQuote_0);
  Quote_0.insert(PrivateQuote_0.getString());
  FIX::QuoteID QuoteID_10("STRING_1038321799");
  msg.set(QuoteID_10);
  Quote_0.insert(QuoteID_10.getString());
  FIX::QuoteMsgID QuoteMsgID_0("STRING_1757753797");
  msg.set(QuoteMsgID_0);
  Quote_0.insert(QuoteMsgID_0.getString());
  FIX::QuoteReqID QuoteReqID_2("STRING_1017914927");
  msg.set(QuoteReqID_2);
  Quote_0.insert(QuoteReqID_2.getString());
  FIX::QuoteRespID QuoteRespID_1("STRING_302804237");
  msg.set(QuoteRespID_1);
  Quote_0.insert(QuoteRespID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_2(1);
  msg.set(QuoteResponseLevel_2);
  Quote_0.insert(QuoteResponseLevel_2.getString());
  FIX::QuoteType QuoteType_4(2);
  msg.set(QuoteType_4);
  Quote_0.insert(QuoteType_4.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_0;
  SettlCurrBidFxRate_0.setString("798648");
  msg.set(SettlCurrBidFxRate_0);
  Quote_0.insert(SettlCurrBidFxRate_0.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_6('D');
  msg.set(SettlCurrFxRateCalc_6);
  Quote_0.insert(SettlCurrFxRateCalc_6.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_0;
  SettlCurrOfferFxRate_0.setString("4204449");
  msg.set(SettlCurrOfferFxRate_0);
  Quote_0.insert(SettlCurrOfferFxRate_0.getString());
  FIX::SettlCurrency SettlCurrency_25("CAN");
  msg.set(SettlCurrency_25);
  Quote_0.insert(SettlCurrency_25.getString());
  FIX::SettlDate SettlDate_45("LOCALMKTDATE_1295301059");
  msg.set(SettlDate_45);
  Quote_0.insert(SettlDate_45.getString());
  FIX::SettlDate2 SettlDate2_20("LOCALMKTDATE_123759617");
  msg.set(SettlDate2_20);
  Quote_0.insert(SettlDate2_20.getString());
  FIX::SettlType SettlType_25("STRING_1");
  msg.set(SettlType_25);
  Quote_0.insert(SettlType_25.getString());
  FIX::Side Side_41('A');
  msg.set(Side_41);
  Quote_0.insert(Side_41.getString());
  FIX::Text Text_75("STRING_1008910306");
  msg.set(Text_75);
  Quote_0.insert(Text_75.getString());
  FIX::TradingSessionID TradingSessionID_80("STRING_4");
  msg.set(TradingSessionID_80);
  Quote_0.insert(TradingSessionID_80.getString());
  FIX::TradingSessionSubID TradingSessionSubID_80("STRING_6");
  msg.set(TradingSessionSubID_80);
  Quote_0.insert(TradingSessionSubID_80.getString());
  FIX::TransactTime TransactTime_56(FIX::UTCTIMESTAMP(6, 36, 14, 14, 6, 2008));
  msg.set(TransactTime_56);
  Quote_0.insert(TransactTime_56.getString());
  FIX::ValidUntilTime ValidUntilTime_15(FIX::UTCTIMESTAMP(19, 11, 48, 5, 11, 2014));
  msg.set(ValidUntilTime_15);
  Quote_0.insert(ValidUntilTime_15.getString());
  all_values.push_back(Quote_0);

  all_compo_names.insert("Quote");

  // FinancingDetails
  multiset<string> FinancingDetails_16;
  FIX::AgreementCurrency AgreementCurrency_16("CHF");
  msg.set(AgreementCurrency_16);
  FinancingDetails_16.insert(AgreementCurrency_16.getString());
  FIX::AgreementDate AgreementDate_16("LOCALMKTDATE_1676695705");
  msg.set(AgreementDate_16);
  FinancingDetails_16.insert(AgreementDate_16.getString());
  FIX::AgreementDesc AgreementDesc_16("STRING_229994364");
  msg.set(AgreementDesc_16);
  FinancingDetails_16.insert(AgreementDesc_16.getString());
  FIX::AgreementID AgreementID_16("STRING_422099075");
  msg.set(AgreementID_16);
  FinancingDetails_16.insert(AgreementID_16.getString());
  FIX::DeliveryType DeliveryType_16(0);
  msg.set(DeliveryType_16);
  FinancingDetails_16.insert(DeliveryType_16.getString());
  FIX::EndDate EndDate_16("LOCALMKTDATE_638095921");
  msg.set(EndDate_16);
  FinancingDetails_16.insert(EndDate_16.getString());
  FIX::MarginRatio MarginRatio_16;
  MarginRatio_16.setString("39.930000");
  msg.set(MarginRatio_16);
  FinancingDetails_16.insert(MarginRatio_16.getString());
  FIX::StartDate StartDate_16("LOCALMKTDATE_1950681859");
  msg.set(StartDate_16);
  FinancingDetails_16.insert(StartDate_16.getString());
  FIX::TerminationType TerminationType_16(2);
  msg.set(TerminationType_16);
  FinancingDetails_16.insert(TerminationType_16.getString());
  all_values.push_back(FinancingDetails_16);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_66;
  FIX::AttachmentPoint AttachmentPoint_66;
  AttachmentPoint_66.setString("50.520000");
  msg.set(AttachmentPoint_66);
  Instrument_66.insert(AttachmentPoint_66.getString());
  FIX::CFICode CFICode_66("STRING_2074441476");
  msg.set(CFICode_66);
  Instrument_66.insert(CFICode_66.getString());
  FIX::CPProgram CPProgram_66(1);
  msg.set(CPProgram_66);
  Instrument_66.insert(CPProgram_66.getString());
  FIX::CPRegType CPRegType_66("STRING_1375053621");
  msg.set(CPRegType_66);
  Instrument_66.insert(CPRegType_66.getString());
  FIX::CapPrice CapPrice_66;
  CapPrice_66.setString("9358681");
  msg.set(CapPrice_66);
  Instrument_66.insert(CapPrice_66.getString());
  FIX::ContractMultiplier ContractMultiplier_66;
  ContractMultiplier_66.setString("4970416");
  msg.set(ContractMultiplier_66);
  Instrument_66.insert(ContractMultiplier_66.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_66(0);
  msg.set(ContractMultiplierUnit_66);
  Instrument_66.insert(ContractMultiplierUnit_66.getString());
  FIX::ContractSettlMonth ContractSettlMonth_66("MONTHYEAR_334415891");
  msg.set(ContractSettlMonth_66);
  Instrument_66.insert(ContractSettlMonth_66.getString());
  FIX::CountryOfIssue CountryOfIssue_66("COUNTRY_897276175");
  msg.set(CountryOfIssue_66);
  Instrument_66.insert(CountryOfIssue_66.getString());
  FIX::CouponPaymentDate CouponPaymentDate_66("LOCALMKTDATE_2123295834");
  msg.set(CouponPaymentDate_66);
  Instrument_66.insert(CouponPaymentDate_66.getString());
  FIX::CouponRate CouponRate_66;
  CouponRate_66.setString("37.250000");
  msg.set(CouponRate_66);
  Instrument_66.insert(CouponRate_66.getString());
  FIX::CreditRating CreditRating_66("STRING_622612077");
  msg.set(CreditRating_66);
  Instrument_66.insert(CreditRating_66.getString());
  FIX::DatedDate DatedDate_66("LOCALMKTDATE_657583924");
  msg.set(DatedDate_66);
  Instrument_66.insert(DatedDate_66.getString());
  FIX::DetachmentPoint DetachmentPoint_66;
  DetachmentPoint_66.setString("10.170000");
  msg.set(DetachmentPoint_66);
  Instrument_66.insert(DetachmentPoint_66.getString());
  FIX::EncodedIssuer EncodedIssuer_66("DATA_484475631");
  msg.set(EncodedIssuer_66);
  Instrument_66.insert(EncodedIssuer_66.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_66(883782887);
  msg.set(EncodedIssuerLen_66);
  Instrument_66.insert(EncodedIssuerLen_66.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_66("DATA_1082516148");
  msg.set(EncodedSecurityDesc_66);
  Instrument_66.insert(EncodedSecurityDesc_66.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_66(820045299);
  msg.set(EncodedSecurityDescLen_66);
  Instrument_66.insert(EncodedSecurityDescLen_66.getString());
  FIX::ExerciseStyle ExerciseStyle_66(0);
  msg.set(ExerciseStyle_66);
  Instrument_66.insert(ExerciseStyle_66.getString());
  FIX::Factor Factor_66;
  Factor_66.setString("12894380");
  msg.set(Factor_66);
  Instrument_66.insert(Factor_66.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_66(false);
  msg.set(FlexProductEligibilityIndicator_66);
  Instrument_66.insert(FlexProductEligibilityIndicator_66.getString());
  FIX::FlexibleIndicator FlexibleIndicator_66(true);
  msg.set(FlexibleIndicator_66);
  Instrument_66.insert(FlexibleIndicator_66.getString());
  FIX::FloorPrice FloorPrice_66;
  FloorPrice_66.setString("3667911");
  msg.set(FloorPrice_66);
  Instrument_66.insert(FloorPrice_66.getString());
  FIX::FlowScheduleType FlowScheduleType_66(0);
  msg.set(FlowScheduleType_66);
  Instrument_66.insert(FlowScheduleType_66.getString());
  FIX::InstrRegistry InstrRegistry_66("STRING_552791820");
  msg.set(InstrRegistry_66);
  Instrument_66.insert(InstrRegistry_66.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_66('7');
  msg.set(InstrmtAssignmentMethod_66);
  Instrument_66.insert(InstrmtAssignmentMethod_66.getString());
  FIX::InterestAccrualDate InterestAccrualDate_66("LOCALMKTDATE_1332225701");
  msg.set(InterestAccrualDate_66);
  Instrument_66.insert(InterestAccrualDate_66.getString());
  FIX::IssueDate IssueDate_66("LOCALMKTDATE_1190887742");
  msg.set(IssueDate_66);
  Instrument_66.insert(IssueDate_66.getString());
  FIX::Issuer Issuer_66("STRING_1631434252");
  msg.set(Issuer_66);
  Instrument_66.insert(Issuer_66.getString());
  FIX::ListMethod ListMethod_66(0);
  msg.set(ListMethod_66);
  Instrument_66.insert(ListMethod_66.getString());
  FIX::LocaleOfIssue LocaleOfIssue_66("STRING_2107464507");
  msg.set(LocaleOfIssue_66);
  Instrument_66.insert(LocaleOfIssue_66.getString());
  FIX::MaturityDate MaturityDate_66("LOCALMKTDATE_1621795656");
  msg.set(MaturityDate_66);
  Instrument_66.insert(MaturityDate_66.getString());
  FIX::MaturityMonthYear MaturityMonthYear_66("MONTHYEAR_1062381741");
  msg.set(MaturityMonthYear_66);
  Instrument_66.insert(MaturityMonthYear_66.getString());
  FIX::MaturityTime MaturityTime_66("TZTIMEONLY_733667809");
  msg.set(MaturityTime_66);
  Instrument_66.insert(MaturityTime_66.getString());
  FIX::MinPriceIncrement MinPriceIncrement_66;
  MinPriceIncrement_66.setString("8493656");
  msg.set(MinPriceIncrement_66);
  Instrument_66.insert(MinPriceIncrement_66.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_66;
  MinPriceIncrementAmount_66.setString("19982498");
  msg.set(MinPriceIncrementAmount_66);
  Instrument_66.insert(MinPriceIncrementAmount_66.getString());
  FIX::NTPositionLimit NTPositionLimit_66(1230709442);
  msg.set(NTPositionLimit_66);
  Instrument_66.insert(NTPositionLimit_66.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_66;
  NotionalPercentageOutstanding_66.setString("51.670000");
  msg.set(NotionalPercentageOutstanding_66);
  Instrument_66.insert(NotionalPercentageOutstanding_66.getString());
  FIX::OptAttribute OptAttribute_66('1');
  msg.set(OptAttribute_66);
  Instrument_66.insert(OptAttribute_66.getString());
  FIX::OptPayoutAmount OptPayoutAmount_66;
  OptPayoutAmount_66.setString("21279856");
  msg.set(OptPayoutAmount_66);
  Instrument_66.insert(OptPayoutAmount_66.getString());
  FIX::OptPayoutType OptPayoutType_66(3);
  msg.set(OptPayoutType_66);
  Instrument_66.insert(OptPayoutType_66.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_66;
  OriginalNotionalPercentageOutstanding_66.setString("21.960000");
  msg.set(OriginalNotionalPercentageOutstanding_66);
  Instrument_66.insert(OriginalNotionalPercentageOutstanding_66.getString());
  FIX::Pool Pool_66("STRING_603114046");
  msg.set(Pool_66);
  Instrument_66.insert(Pool_66.getString());
  FIX::PositionLimit PositionLimit_66(70697629);
  msg.set(PositionLimit_66);
  Instrument_66.insert(PositionLimit_66.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_66("STRING_INT");
  msg.set(PriceQuoteMethod_66);
  Instrument_66.insert(PriceQuoteMethod_66.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_66("STRING_1087589677");
  msg.set(PriceUnitOfMeasure_66);
  Instrument_66.insert(PriceUnitOfMeasure_66.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_66;
  PriceUnitOfMeasureQty_66.setString("9544805");
  msg.set(PriceUnitOfMeasureQty_66);
  Instrument_66.insert(PriceUnitOfMeasureQty_66.getString());
  FIX::Product Product_68(11);
  msg.set(Product_68);
  Instrument_66.insert(Product_68.getString());
  FIX::ProductComplex ProductComplex_66("STRING_1907634976");
  msg.set(ProductComplex_66);
  Instrument_66.insert(ProductComplex_66.getString());
  FIX::PutOrCall PutOrCall_66(0);
  msg.set(PutOrCall_66);
  Instrument_66.insert(PutOrCall_66.getString());
  FIX::RedemptionDate RedemptionDate_66("LOCALMKTDATE_856603741");
  msg.set(RedemptionDate_66);
  Instrument_66.insert(RedemptionDate_66.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_66("STRING_1954088096");
  msg.set(RepoCollateralSecurityType_66);
  Instrument_66.insert(RepoCollateralSecurityType_66.getString());
  FIX::RepurchaseRate RepurchaseRate_66;
  RepurchaseRate_66.setString("30.700000");
  msg.set(RepurchaseRate_66);
  Instrument_66.insert(RepurchaseRate_66.getString());
  FIX::RepurchaseTerm RepurchaseTerm_66(1223394924);
  msg.set(RepurchaseTerm_66);
  Instrument_66.insert(RepurchaseTerm_66.getString());
  FIX::RestructuringType RestructuringType_66("STRING_MR");
  msg.set(RestructuringType_66);
  Instrument_66.insert(RestructuringType_66.getString());
  FIX::SecurityDesc SecurityDesc_66("STRING_480741242");
  msg.set(SecurityDesc_66);
  Instrument_66.insert(SecurityDesc_66.getString());
  FIX::SecurityExchange SecurityExchange_66("EXCHANGE_2012285183");
  msg.set(SecurityExchange_66);
  Instrument_66.insert(SecurityExchange_66.getString());
  FIX::SecurityGroup SecurityGroup_66("STRING_714495326");
  msg.set(SecurityGroup_66);
  Instrument_66.insert(SecurityGroup_66.getString());
  FIX::SecurityID SecurityID_66("STRING_1671628984");
  msg.set(SecurityID_66);
  Instrument_66.insert(SecurityID_66.getString());
  FIX::SecurityIDSource SecurityIDSource_66("STRING_E");
  msg.set(SecurityIDSource_66);
  Instrument_66.insert(SecurityIDSource_66.getString());
  FIX::SecurityStatus SecurityStatus_66("STRING_1");
  msg.set(SecurityStatus_66);
  Instrument_66.insert(SecurityStatus_66.getString());
  FIX::SecuritySubType SecuritySubType_67("STRING_1631609843");
  msg.set(SecuritySubType_67);
  Instrument_66.insert(SecuritySubType_67.getString());
  FIX::SecurityType SecurityType_68("STRING_TB");
  msg.set(SecurityType_68);
  Instrument_66.insert(SecurityType_68.getString());
  FIX::Seniority Seniority_66("STRING_SR");
  msg.set(Seniority_66);
  Instrument_66.insert(Seniority_66.getString());
  FIX::SettlMethod SettlMethod_66('C');
  msg.set(SettlMethod_66);
  Instrument_66.insert(SettlMethod_66.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_66("STRING_1819913424");
  msg.set(SettleOnOpenFlag_66);
  Instrument_66.insert(SettleOnOpenFlag_66.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_66("STRING_615583559");
  msg.set(StateOrProvinceOfIssue_66);
  Instrument_66.insert(StateOrProvinceOfIssue_66.getString());
  FIX::StrikeCurrency StrikeCurrency_66("CAN");
  msg.set(StrikeCurrency_66);
  Instrument_66.insert(StrikeCurrency_66.getString());
  FIX::StrikeMultiplier StrikeMultiplier_66;
  StrikeMultiplier_66.setString("8007656");
  msg.set(StrikeMultiplier_66);
  Instrument_66.insert(StrikeMultiplier_66.getString());
  FIX::StrikePrice StrikePrice_66;
  StrikePrice_66.setString("14290054");
  msg.set(StrikePrice_66);
  Instrument_66.insert(StrikePrice_66.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_66(5);
  msg.set(StrikePriceBoundaryMethod_66);
  Instrument_66.insert(StrikePriceBoundaryMethod_66.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_66;
  StrikePriceBoundaryPrecision_66.setString("78.750000");
  msg.set(StrikePriceBoundaryPrecision_66);
  Instrument_66.insert(StrikePriceBoundaryPrecision_66.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_66(2);
  msg.set(StrikePriceDeterminationMethod_66);
  Instrument_66.insert(StrikePriceDeterminationMethod_66.getString());
  FIX::StrikeValue StrikeValue_66;
  StrikeValue_66.setString("7410262");
  msg.set(StrikeValue_66);
  Instrument_66.insert(StrikeValue_66.getString());
  FIX::Symbol Symbol_66("STRING_1596601089");
  msg.set(Symbol_66);
  Instrument_66.insert(Symbol_66.getString());
  FIX::SymbolSfx SymbolSfx_66("STRING_CD");
  msg.set(SymbolSfx_66);
  Instrument_66.insert(SymbolSfx_66.getString());
  FIX::TimeUnit TimeUnit_66("STRING_D");
  msg.set(TimeUnit_66);
  Instrument_66.insert(TimeUnit_66.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_66(4);
  msg.set(UnderlyingPriceDeterminationMethod_66);
  Instrument_66.insert(UnderlyingPriceDeterminationMethod_66.getString());
  FIX::UnitOfMeasure UnitOfMeasure_66("STRING_Bu");
  msg.set(UnitOfMeasure_66);
  Instrument_66.insert(UnitOfMeasure_66.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_66;
  UnitOfMeasureQty_66.setString("13006587");
  msg.set(UnitOfMeasureQty_66);
  Instrument_66.insert(UnitOfMeasureQty_66.getString());
  FIX::ValuationMethod ValuationMethod_66("STRING_CDSD");
  msg.set(ValuationMethod_66);
  Instrument_66.insert(ValuationMethod_66.getString());
  all_values.push_back(Instrument_66);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_137;
    FIX::ComplexEventCondition ComplexEventCondition_137(2);
    noComplexEvents_0_0.set(ComplexEventCondition_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventCondition_137.getString());
    FIX::ComplexEventPrice ComplexEventPrice_137;
    ComplexEventPrice_137.setString("10962818");
    noComplexEvents_0_0.set(ComplexEventPrice_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPrice_137.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_137(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceBoundaryMethod_137.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_137;
    ComplexEventPriceBoundaryPrecision_137.setString("94.260000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceBoundaryPrecision_137.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_137(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventPriceTimeType_137.getString());
    FIX::ComplexEventType ComplexEventType_137(7);
    noComplexEvents_0_0.set(ComplexEventType_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexEventType_137.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_137;
    ComplexOptPayoutAmount_137.setString("12334947");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_137);
    ComplexEvents_NoComplexEvents_137.insert(ComplexOptPayoutAmount_137.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_137);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_279;
      FIX::ComplexEventEndDate ComplexEventEndDate_279(FIX::UTCTIMESTAMP(6, 31, 0, 6, 1, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_279);
      ComplexEventDates_NoComplexEventDates_279.insert(ComplexEventEndDate_279.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_279(FIX::UTCTIMESTAMP(3, 30, 16, 4, 6, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_279);
      ComplexEventDates_NoComplexEventDates_279.insert(ComplexEventStartDate_279.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_279);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_565;
        FIX::ComplexEventEndTime ComplexEventEndTime_565(FIX::UTCTIMEONLY(16, 38, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_565);
        ComplexEventTimes_NoComplexEventTimes_565.insert(ComplexEventEndTime_565.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_565(FIX::UTCTIMEONLY(8, 46, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_565);
        ComplexEventTimes_NoComplexEventTimes_565.insert(ComplexEventStartTime_565.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_565);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_566;
        FIX::ComplexEventEndTime ComplexEventEndTime_566(FIX::UTCTIMEONLY(7, 10, 33));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_566);
        ComplexEventTimes_NoComplexEventTimes_566.insert(ComplexEventEndTime_566.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_566(FIX::UTCTIMEONLY(20, 28, 11));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_566);
        ComplexEventTimes_NoComplexEventTimes_566.insert(ComplexEventStartTime_566.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_566);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_567;
        FIX::ComplexEventEndTime ComplexEventEndTime_567(FIX::UTCTIMEONLY(10, 35, 49));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_567);
        ComplexEventTimes_NoComplexEventTimes_567.insert(ComplexEventEndTime_567.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_567(FIX::UTCTIMEONLY(11, 40, 29));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_567);
        ComplexEventTimes_NoComplexEventTimes_567.insert(ComplexEventStartTime_567.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_567);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_280;
      FIX::ComplexEventEndDate ComplexEventEndDate_280(FIX::UTCTIMESTAMP(22, 38, 31, 19, 9, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_280);
      ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventEndDate_280.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_280(FIX::UTCTIMESTAMP(12, 12, 35, 4, 9, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_280);
      ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventStartDate_280.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_280);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_568;
        FIX::ComplexEventEndTime ComplexEventEndTime_568(FIX::UTCTIMEONLY(20, 37, 45));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_568);
        ComplexEventTimes_NoComplexEventTimes_568.insert(ComplexEventEndTime_568.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_568(FIX::UTCTIMEONLY(21, 13, 43));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_568);
        ComplexEventTimes_NoComplexEventTimes_568.insert(ComplexEventStartTime_568.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_568);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_569;
        FIX::ComplexEventEndTime ComplexEventEndTime_569(FIX::UTCTIMEONLY(3, 10, 27));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_569);
        ComplexEventTimes_NoComplexEventTimes_569.insert(ComplexEventEndTime_569.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_569(FIX::UTCTIMEONLY(13, 8, 21));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_569);
        ComplexEventTimes_NoComplexEventTimes_569.insert(ComplexEventStartTime_569.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_569);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_281;
      FIX::ComplexEventEndDate ComplexEventEndDate_281(FIX::UTCTIMESTAMP(22, 51, 14, 22, 12, 2006));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_281);
      ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventEndDate_281.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_281(FIX::UTCTIMESTAMP(4, 53, 50, 4, 2, 2015));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_281);
      ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventStartDate_281.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_281);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_570;
        FIX::ComplexEventEndTime ComplexEventEndTime_570(FIX::UTCTIMEONLY(15, 35, 27));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_570);
        ComplexEventTimes_NoComplexEventTimes_570.insert(ComplexEventEndTime_570.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_570(FIX::UTCTIMEONLY(1, 32, 42));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_570);
        ComplexEventTimes_NoComplexEventTimes_570.insert(ComplexEventStartTime_570.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_570);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_571;
        FIX::ComplexEventEndTime ComplexEventEndTime_571(FIX::UTCTIMEONLY(12, 52, 31));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_571);
        ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventEndTime_571.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_571(FIX::UTCTIMEONLY(17, 31, 29));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_571);
        ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventStartTime_571.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_571);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_138;
    FIX::ComplexEventCondition ComplexEventCondition_138(1);
    noComplexEvents_0_1.set(ComplexEventCondition_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventCondition_138.getString());
    FIX::ComplexEventPrice ComplexEventPrice_138;
    ComplexEventPrice_138.setString("11591531");
    noComplexEvents_0_1.set(ComplexEventPrice_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventPrice_138.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_138(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceBoundaryMethod_138.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_138;
    ComplexEventPriceBoundaryPrecision_138.setString("37.470000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceBoundaryPrecision_138.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_138(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceTimeType_138.getString());
    FIX::ComplexEventType ComplexEventType_138(1);
    noComplexEvents_0_1.set(ComplexEventType_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexEventType_138.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_138;
    ComplexOptPayoutAmount_138.setString("14188916");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_138);
    ComplexEvents_NoComplexEvents_138.insert(ComplexOptPayoutAmount_138.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_138);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_282;
      FIX::ComplexEventEndDate ComplexEventEndDate_282(FIX::UTCTIMESTAMP(0, 49, 4, 26, 6, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_282);
      ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventEndDate_282.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_282(FIX::UTCTIMESTAMP(12, 30, 26, 15, 12, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_282);
      ComplexEventDates_NoComplexEventDates_282.insert(ComplexEventStartDate_282.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_282);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_572;
        FIX::ComplexEventEndTime ComplexEventEndTime_572(FIX::UTCTIMEONLY(3, 37, 14));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_572);
        ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventEndTime_572.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_572(FIX::UTCTIMEONLY(18, 37, 0));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_572);
        ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventStartTime_572.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_572);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_573;
        FIX::ComplexEventEndTime ComplexEventEndTime_573(FIX::UTCTIMEONLY(2, 13, 54));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_573);
        ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventEndTime_573.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_573(FIX::UTCTIMEONLY(2, 41, 45));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_573);
        ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventStartTime_573.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_573);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_574;
        FIX::ComplexEventEndTime ComplexEventEndTime_574(FIX::UTCTIMEONLY(10, 34, 7));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_574);
        ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventEndTime_574.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_574(FIX::UTCTIMEONLY(19, 10, 39));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_574);
        ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventStartTime_574.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_574);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_283;
      FIX::ComplexEventEndDate ComplexEventEndDate_283(FIX::UTCTIMESTAMP(8, 58, 35, 12, 2, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_283);
      ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventEndDate_283.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_283(FIX::UTCTIMESTAMP(16, 58, 9, 15, 10, 2002));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_283);
      ComplexEventDates_NoComplexEventDates_283.insert(ComplexEventStartDate_283.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_283);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_575;
        FIX::ComplexEventEndTime ComplexEventEndTime_575(FIX::UTCTIMEONLY(16, 25, 18));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_575);
        ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventEndTime_575.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_575(FIX::UTCTIMEONLY(7, 59, 3));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_575);
        ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventStartTime_575.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_575);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_576;
        FIX::ComplexEventEndTime ComplexEventEndTime_576(FIX::UTCTIMEONLY(9, 30, 12));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_576);
        ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventEndTime_576.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_576(FIX::UTCTIMEONLY(17, 14, 33));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_576);
        ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventStartTime_576.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_576);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_284;
      FIX::ComplexEventEndDate ComplexEventEndDate_284(FIX::UTCTIMESTAMP(15, 23, 41, 23, 1, 2008));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_284);
      ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventEndDate_284.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_284(FIX::UTCTIMESTAMP(20, 0, 47, 27, 10, 2001));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_284);
      ComplexEventDates_NoComplexEventDates_284.insert(ComplexEventStartDate_284.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_284);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_577;
        FIX::ComplexEventEndTime ComplexEventEndTime_577(FIX::UTCTIMEONLY(5, 3, 27));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_577);
        ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventEndTime_577.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_577(FIX::UTCTIMEONLY(22, 19, 27));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_577);
        ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventStartTime_577.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_577);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_578;
        FIX::ComplexEventEndTime ComplexEventEndTime_578(FIX::UTCTIMEONLY(8, 57, 0));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_578);
        ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventEndTime_578.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_578(FIX::UTCTIMEONLY(15, 15, 51));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_578);
        ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventStartTime_578.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_578);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_579;
        FIX::ComplexEventEndTime ComplexEventEndTime_579(FIX::UTCTIMEONLY(22, 14, 17));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_579);
        ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventEndTime_579.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_579(FIX::UTCTIMEONLY(6, 19, 15));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_579);
        ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventStartTime_579.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_579);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Quote::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_131;
    FIX::EventDate EventDate_131("LOCALMKTDATE_1247032452");
    noEvents_0_0.set(EventDate_131);
    EvntGrp_NoEvents_131.insert(EventDate_131.getString());
    FIX::EventPx EventPx_131;
    EventPx_131.setString("20017320");
    noEvents_0_0.set(EventPx_131);
    EvntGrp_NoEvents_131.insert(EventPx_131.getString());
    FIX::EventText EventText_131("STRING_13359885");
    noEvents_0_0.set(EventText_131);
    EvntGrp_NoEvents_131.insert(EventText_131.getString());
    FIX::EventTime EventTime_131(FIX::UTCTIMESTAMP(19, 23, 59, 16, 4, 2000));
    noEvents_0_0.set(EventTime_131);
    EvntGrp_NoEvents_131.insert(EventTime_131.getString());
    FIX::EventType EventType_131(9);
    noEvents_0_0.set(EventType_131);
    EvntGrp_NoEvents_131.insert(EventType_131.getString());
    all_values.push_back(EvntGrp_NoEvents_131);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::Quote::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_132;
    FIX::EventDate EventDate_132("LOCALMKTDATE_1427329285");
    noEvents_0_1.set(EventDate_132);
    EvntGrp_NoEvents_132.insert(EventDate_132.getString());
    FIX::EventPx EventPx_132;
    EventPx_132.setString("16682973");
    noEvents_0_1.set(EventPx_132);
    EvntGrp_NoEvents_132.insert(EventPx_132.getString());
    FIX::EventText EventText_132("STRING_1010551936");
    noEvents_0_1.set(EventText_132);
    EvntGrp_NoEvents_132.insert(EventText_132.getString());
    FIX::EventTime EventTime_132(FIX::UTCTIMESTAMP(2, 5, 22, 24, 9, 2005));
    noEvents_0_1.set(EventTime_132);
    EvntGrp_NoEvents_132.insert(EventTime_132.getString());
    FIX::EventType EventType_132(99);
    noEvents_0_1.set(EventType_132);
    EvntGrp_NoEvents_132.insert(EventType_132.getString());
    all_values.push_back(EvntGrp_NoEvents_132);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::Quote::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_133;
    FIX::EventDate EventDate_133("LOCALMKTDATE_1412802741");
    noEvents_0_2.set(EventDate_133);
    EvntGrp_NoEvents_133.insert(EventDate_133.getString());
    FIX::EventPx EventPx_133;
    EventPx_133.setString("6546448");
    noEvents_0_2.set(EventPx_133);
    EvntGrp_NoEvents_133.insert(EventPx_133.getString());
    FIX::EventText EventText_133("STRING_550937905");
    noEvents_0_2.set(EventText_133);
    EvntGrp_NoEvents_133.insert(EventText_133.getString());
    FIX::EventTime EventTime_133(FIX::UTCTIMESTAMP(12, 43, 42, 15, 10, 2012));
    noEvents_0_2.set(EventTime_133);
    EvntGrp_NoEvents_133.insert(EventTime_133.getString());
    FIX::EventType EventType_133(18);
    noEvents_0_2.set(EventType_133);
    EvntGrp_NoEvents_133.insert(EventType_133.getString());
    all_values.push_back(EvntGrp_NoEvents_133);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Quote::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_135;
    FIX::InstrumentPartyID InstrumentPartyID_135("STRING_1915420363");
    noInstrumentParties_0_0.set(InstrumentPartyID_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyID_135.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_135('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyIDSource_135.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_135(25752429);
    noInstrumentParties_0_0.set(InstrumentPartyRole_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyRole_135.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_135);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257;
      FIX::InstrumentPartySubID InstrumentPartySubID_257("STRING_1530558260");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_257);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257.insert(InstrumentPartySubID_257.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_257(797051436);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_257);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257.insert(InstrumentPartySubIDType_257.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258;
      FIX::InstrumentPartySubID InstrumentPartySubID_258("STRING_1834519433");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_258);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258.insert(InstrumentPartySubID_258.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_258(1989478509);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_258);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258.insert(InstrumentPartySubIDType_258.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_122;
    FIX::SecurityAltID SecurityAltID_122("STRING_1355333122");
    noSecurityAltID_0_0.set(SecurityAltID_122);
    SecAltIDGrp_NoSecurityAltID_122.insert(SecurityAltID_122.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_122("STRING_852546797");
    noSecurityAltID_0_0.set(SecurityAltIDSource_122);
    SecAltIDGrp_NoSecurityAltID_122.insert(SecurityAltIDSource_122.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_122);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_132;
  FIX::SecurityXML SecurityXML_133("XMLDATA_1719671895");
  msg.set(SecurityXML_133);
  FIX::SecurityXMLLen SecurityXMLLen_66(1475488524);
  msg.set(SecurityXMLLen_66);
  FIX::SecurityXMLSchema SecurityXMLSchema_66("STRING_915747802");
  msg.set(SecurityXMLSchema_66);
  SecurityXML_132.insert(SecurityXMLSchema_66.getString());
  all_values.push_back(SecurityXML_132);
  all_compo_names.insert("SecurityXML");

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::Quote::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_0;
    FIX::LegBidForwardPoints LegBidForwardPoints_0;
    LegBidForwardPoints_0.setString("5079709");
    noLegs_0_0.set(LegBidForwardPoints_0);
    LegQuotGrp_NoLegs_0.insert(LegBidForwardPoints_0.getString());
    FIX::LegBidPx LegBidPx_0;
    LegBidPx_0.setString("3343463");
    noLegs_0_0.set(LegBidPx_0);
    LegQuotGrp_NoLegs_0.insert(LegBidPx_0.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_0;
    LegOfferForwardPoints_0.setString("7756794");
    noLegs_0_0.set(LegOfferForwardPoints_0);
    LegQuotGrp_NoLegs_0.insert(LegOfferForwardPoints_0.getString());
    FIX::LegOfferPx LegOfferPx_0;
    LegOfferPx_0.setString("1452862");
    noLegs_0_0.set(LegOfferPx_0);
    LegQuotGrp_NoLegs_0.insert(LegOfferPx_0.getString());
    FIX::LegOrderQty LegOrderQty_4;
    LegOrderQty_4.setString("17471491");
    noLegs_0_0.set(LegOrderQty_4);
    LegQuotGrp_NoLegs_0.insert(LegOrderQty_4.getString());
    FIX::LegPriceType LegPriceType_0(1430324277);
    noLegs_0_0.set(LegPriceType_0);
    LegQuotGrp_NoLegs_0.insert(LegPriceType_0.getString());
    FIX::LegQty LegQty_4;
    LegQty_4.setString("6962241");
    noLegs_0_0.set(LegQty_4);
    LegQuotGrp_NoLegs_0.insert(LegQty_4.getString());
    FIX::LegRefID LegRefID_4("STRING_1961442710");
    noLegs_0_0.set(LegRefID_4);
    LegQuotGrp_NoLegs_0.insert(LegRefID_4.getString());
    FIX::LegSettlDate LegSettlDate_4("LOCALMKTDATE_515304505");
    noLegs_0_0.set(LegSettlDate_4);
    LegQuotGrp_NoLegs_0.insert(LegSettlDate_4.getString());
    FIX::LegSettlType LegSettlType_4('1');
    noLegs_0_0.set(LegSettlType_4);
    LegQuotGrp_NoLegs_0.insert(LegSettlType_4.getString());
    FIX::LegSwapType LegSwapType_4(1);
    noLegs_0_0.set(LegSwapType_4);
    LegQuotGrp_NoLegs_0.insert(LegSwapType_4.getString());
    all_values.push_back(LegQuotGrp_NoLegs_0);
    all_compo_names.insert("LegQuotGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_99;
    FIX::EncodedLegIssuer EncodedLegIssuer_99("DATA_1413400628");
    noLegs_0_0.set(EncodedLegIssuer_99);
    InstrumentLeg_99.insert(EncodedLegIssuer_99.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_99(1110634984);
    noLegs_0_0.set(EncodedLegIssuerLen_99);
    InstrumentLeg_99.insert(EncodedLegIssuerLen_99.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_99("DATA_1125190278");
    noLegs_0_0.set(EncodedLegSecurityDesc_99);
    InstrumentLeg_99.insert(EncodedLegSecurityDesc_99.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_99(18261517);
    noLegs_0_0.set(EncodedLegSecurityDescLen_99);
    InstrumentLeg_99.insert(EncodedLegSecurityDescLen_99.getString());
    FIX::LegCFICode LegCFICode_99("STRING_921225950");
    noLegs_0_0.set(LegCFICode_99);
    InstrumentLeg_99.insert(LegCFICode_99.getString());
    FIX::LegContractMultiplier LegContractMultiplier_99;
    LegContractMultiplier_99.setString("8931269");
    noLegs_0_0.set(LegContractMultiplier_99);
    InstrumentLeg_99.insert(LegContractMultiplier_99.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_99(902574273);
    noLegs_0_0.set(LegContractMultiplierUnit_99);
    InstrumentLeg_99.insert(LegContractMultiplierUnit_99.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_99("MONTHYEAR_946978380");
    noLegs_0_0.set(LegContractSettlMonth_99);
    InstrumentLeg_99.insert(LegContractSettlMonth_99.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_99("COUNTRY_2022065128");
    noLegs_0_0.set(LegCountryOfIssue_99);
    InstrumentLeg_99.insert(LegCountryOfIssue_99.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_99("LOCALMKTDATE_285648886");
    noLegs_0_0.set(LegCouponPaymentDate_99);
    InstrumentLeg_99.insert(LegCouponPaymentDate_99.getString());
    FIX::LegCouponRate LegCouponRate_99;
    LegCouponRate_99.setString("98.160000");
    noLegs_0_0.set(LegCouponRate_99);
    InstrumentLeg_99.insert(LegCouponRate_99.getString());
    FIX::LegCreditRating LegCreditRating_99("STRING_1709100913");
    noLegs_0_0.set(LegCreditRating_99);
    InstrumentLeg_99.insert(LegCreditRating_99.getString());
    FIX::LegCurrency LegCurrency_99("USD");
    noLegs_0_0.set(LegCurrency_99);
    InstrumentLeg_99.insert(LegCurrency_99.getString());
    FIX::LegDatedDate LegDatedDate_99("LOCALMKTDATE_916950388");
    noLegs_0_0.set(LegDatedDate_99);
    InstrumentLeg_99.insert(LegDatedDate_99.getString());
    FIX::LegExerciseStyle LegExerciseStyle_99(980190544);
    noLegs_0_0.set(LegExerciseStyle_99);
    InstrumentLeg_99.insert(LegExerciseStyle_99.getString());
    FIX::LegFactor LegFactor_99;
    LegFactor_99.setString("13931151");
    noLegs_0_0.set(LegFactor_99);
    InstrumentLeg_99.insert(LegFactor_99.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_99(244955264);
    noLegs_0_0.set(LegFlowScheduleType_99);
    InstrumentLeg_99.insert(LegFlowScheduleType_99.getString());
    FIX::LegInstrRegistry LegInstrRegistry_99("STRING_1895938346");
    noLegs_0_0.set(LegInstrRegistry_99);
    InstrumentLeg_99.insert(LegInstrRegistry_99.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_99("LOCALMKTDATE_559326599");
    noLegs_0_0.set(LegInterestAccrualDate_99);
    InstrumentLeg_99.insert(LegInterestAccrualDate_99.getString());
    FIX::LegIssueDate LegIssueDate_99("LOCALMKTDATE_752926169");
    noLegs_0_0.set(LegIssueDate_99);
    InstrumentLeg_99.insert(LegIssueDate_99.getString());
    FIX::LegIssuer LegIssuer_99("STRING_82801097");
    noLegs_0_0.set(LegIssuer_99);
    InstrumentLeg_99.insert(LegIssuer_99.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_99("STRING_1335006050");
    noLegs_0_0.set(LegLocaleOfIssue_99);
    InstrumentLeg_99.insert(LegLocaleOfIssue_99.getString());
    FIX::LegMaturityDate LegMaturityDate_99("LOCALMKTDATE_898212384");
    noLegs_0_0.set(LegMaturityDate_99);
    InstrumentLeg_99.insert(LegMaturityDate_99.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_99("MONTHYEAR_1829950237");
    noLegs_0_0.set(LegMaturityMonthYear_99);
    InstrumentLeg_99.insert(LegMaturityMonthYear_99.getString());
    FIX::LegMaturityTime LegMaturityTime_99("TZTIMEONLY_617846679");
    noLegs_0_0.set(LegMaturityTime_99);
    InstrumentLeg_99.insert(LegMaturityTime_99.getString());
    FIX::LegOptAttribute LegOptAttribute_99('1');
    noLegs_0_0.set(LegOptAttribute_99);
    InstrumentLeg_99.insert(LegOptAttribute_99.getString());
    FIX::LegOptionRatio LegOptionRatio_99;
    LegOptionRatio_99.setString("16439093");
    noLegs_0_0.set(LegOptionRatio_99);
    InstrumentLeg_99.insert(LegOptionRatio_99.getString());
    FIX::LegPool LegPool_99("STRING_1133151185");
    noLegs_0_0.set(LegPool_99);
    InstrumentLeg_99.insert(LegPool_99.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_99("STRING_760356760");
    noLegs_0_0.set(LegPriceUnitOfMeasure_99);
    InstrumentLeg_99.insert(LegPriceUnitOfMeasure_99.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_99;
    LegPriceUnitOfMeasureQty_99.setString("14899677");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_99);
    InstrumentLeg_99.insert(LegPriceUnitOfMeasureQty_99.getString());
    FIX::LegProduct LegProduct_99(399068165);
    noLegs_0_0.set(LegProduct_99);
    InstrumentLeg_99.insert(LegProduct_99.getString());
    FIX::LegPutOrCall LegPutOrCall_99(1870991745);
    noLegs_0_0.set(LegPutOrCall_99);
    InstrumentLeg_99.insert(LegPutOrCall_99.getString());
    FIX::LegRatioQty LegRatioQty_99;
    LegRatioQty_99.setString("4676743");
    noLegs_0_0.set(LegRatioQty_99);
    InstrumentLeg_99.insert(LegRatioQty_99.getString());
    FIX::LegRedemptionDate LegRedemptionDate_99("LOCALMKTDATE_417329683");
    noLegs_0_0.set(LegRedemptionDate_99);
    InstrumentLeg_99.insert(LegRedemptionDate_99.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_99("STRING_644734047");
    noLegs_0_0.set(LegRepoCollateralSecurityType_99);
    InstrumentLeg_99.insert(LegRepoCollateralSecurityType_99.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_99;
    LegRepurchaseRate_99.setString("13.690000");
    noLegs_0_0.set(LegRepurchaseRate_99);
    InstrumentLeg_99.insert(LegRepurchaseRate_99.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_99(1319903956);
    noLegs_0_0.set(LegRepurchaseTerm_99);
    InstrumentLeg_99.insert(LegRepurchaseTerm_99.getString());
    FIX::LegSecurityDesc LegSecurityDesc_99("STRING_1591712427");
    noLegs_0_0.set(LegSecurityDesc_99);
    InstrumentLeg_99.insert(LegSecurityDesc_99.getString());
    FIX::LegSecurityExchange LegSecurityExchange_99("EXCHANGE_1235382849");
    noLegs_0_0.set(LegSecurityExchange_99);
    InstrumentLeg_99.insert(LegSecurityExchange_99.getString());
    FIX::LegSecurityID LegSecurityID_99("STRING_1605552842");
    noLegs_0_0.set(LegSecurityID_99);
    InstrumentLeg_99.insert(LegSecurityID_99.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_99("STRING_1188258596");
    noLegs_0_0.set(LegSecurityIDSource_99);
    InstrumentLeg_99.insert(LegSecurityIDSource_99.getString());
    FIX::LegSecuritySubType LegSecuritySubType_99("STRING_797000115");
    noLegs_0_0.set(LegSecuritySubType_99);
    InstrumentLeg_99.insert(LegSecuritySubType_99.getString());
    FIX::LegSecurityType LegSecurityType_99("STRING_1733196589");
    noLegs_0_0.set(LegSecurityType_99);
    InstrumentLeg_99.insert(LegSecurityType_99.getString());
    FIX::LegSide LegSide_99('8');
    noLegs_0_0.set(LegSide_99);
    InstrumentLeg_99.insert(LegSide_99.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_99("STRING_1713950503");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_99);
    InstrumentLeg_99.insert(LegStateOrProvinceOfIssue_99.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_99("USD");
    noLegs_0_0.set(LegStrikeCurrency_99);
    InstrumentLeg_99.insert(LegStrikeCurrency_99.getString());
    FIX::LegStrikePrice LegStrikePrice_99;
    LegStrikePrice_99.setString("19589057");
    noLegs_0_0.set(LegStrikePrice_99);
    InstrumentLeg_99.insert(LegStrikePrice_99.getString());
    FIX::LegSymbol LegSymbol_99("STRING_314358184");
    noLegs_0_0.set(LegSymbol_99);
    InstrumentLeg_99.insert(LegSymbol_99.getString());
    FIX::LegSymbolSfx LegSymbolSfx_99("STRING_666659928");
    noLegs_0_0.set(LegSymbolSfx_99);
    InstrumentLeg_99.insert(LegSymbolSfx_99.getString());
    FIX::LegTimeUnit LegTimeUnit_99("STRING_564348288");
    noLegs_0_0.set(LegTimeUnit_99);
    InstrumentLeg_99.insert(LegTimeUnit_99.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_99("STRING_397159281");
    noLegs_0_0.set(LegUnitOfMeasure_99);
    InstrumentLeg_99.insert(LegUnitOfMeasure_99.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_99;
    LegUnitOfMeasureQty_99.setString("20016659");
    noLegs_0_0.set(LegUnitOfMeasureQty_99);
    InstrumentLeg_99.insert(LegUnitOfMeasureQty_99.getString());
    all_values.push_back(InstrumentLeg_99);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_205;
      FIX::LegSecurityAltID LegSecurityAltID_205("STRING_79625871");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_205);
      LegSecAltIDGrp_NoLegSecurityAltID_205.insert(LegSecurityAltID_205.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_205("STRING_472029009");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_205);
      LegSecAltIDGrp_NoLegSecurityAltID_205.insert(LegSecurityAltIDSource_205.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_205);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_206;
      FIX::LegSecurityAltID LegSecurityAltID_206("STRING_909513530");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_206);
      LegSecAltIDGrp_NoLegSecurityAltID_206.insert(LegSecurityAltID_206.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_206("STRING_1723535171");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_206);
      LegSecAltIDGrp_NoLegSecurityAltID_206.insert(LegSecurityAltIDSource_206.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_206);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_0;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_0("USD");
    noLegs_0_0.set(LegBenchmarkCurveCurrency_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurveCurrency_0.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_0("STRING_1066019267");
    noLegs_0_0.set(LegBenchmarkCurveName_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurveName_0.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_0("STRING_2004248360");
    noLegs_0_0.set(LegBenchmarkCurvePoint_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurvePoint_0.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_0;
    LegBenchmarkPrice_0.setString("13933783");
    noLegs_0_0.set(LegBenchmarkPrice_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkPrice_0.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_0(1533693642);
    noLegs_0_0.set(LegBenchmarkPriceType_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkPriceType_0.getString());
    all_values.push_back(LegBenchmarkCurveData_0);
    all_compo_names.insert("LegBenchmarkCurveData");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_10;
      FIX::LegStipulationType LegStipulationType_10("STRING_2038112435");
      noLegStipulations_0_1_0.set(LegStipulationType_10);
      LegStipulations_NoLegStipulations_10.insert(LegStipulationType_10.getString());
      FIX::LegStipulationValue LegStipulationValue_10("STRING_747011363");
      noLegStipulations_0_1_0.set(LegStipulationValue_10);
      LegStipulations_NoLegStipulations_10.insert(LegStipulationValue_10.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_10);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_11;
      FIX::LegStipulationType LegStipulationType_11("STRING_1593998351");
      noLegStipulations_0_1_1.set(LegStipulationType_11);
      LegStipulations_NoLegStipulations_11.insert(LegStipulationType_11.getString());
      FIX::LegStipulationValue LegStipulationValue_11("STRING_1482341214");
      noLegStipulations_0_1_1.set(LegStipulationValue_11);
      LegStipulations_NoLegStipulations_11.insert(LegStipulationValue_11.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_11);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_98;
      FIX::NestedPartyID NestedPartyID_98("STRING_1052067546");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_98);
      NestedParties_NoNestedPartyIDs_98.insert(NestedPartyID_98.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_98('5');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_98);
      NestedParties_NoNestedPartyIDs_98.insert(NestedPartyIDSource_98.getString());
      FIX::NestedPartyRole NestedPartyRole_98(631910680);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_98);
      NestedParties_NoNestedPartyIDs_98.insert(NestedPartyRole_98.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_98);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_208;
        FIX::NestedPartySubID NestedPartySubID_208("STRING_1384818001");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_208);
        NstdPtysSubGrp_NoNestedPartySubIDs_208.insert(NestedPartySubID_208.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_208(198377535);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_208);
        NstdPtysSubGrp_NoNestedPartySubIDs_208.insert(NestedPartySubIDType_208.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_208);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_209;
        FIX::NestedPartySubID NestedPartySubID_209("STRING_1203683973");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_209);
        NstdPtysSubGrp_NoNestedPartySubIDs_209.insert(NestedPartySubID_209.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_209(1492151329);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_209);
        NstdPtysSubGrp_NoNestedPartySubIDs_209.insert(NestedPartySubIDType_209.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_209);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_210;
        FIX::NestedPartySubID NestedPartySubID_210("STRING_9799654");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_210);
        NstdPtysSubGrp_NoNestedPartySubIDs_210.insert(NestedPartySubID_210.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_210(1518042157);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_210);
        NstdPtysSubGrp_NoNestedPartySubIDs_210.insert(NestedPartySubIDType_210.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_210);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Quote::NoLegs noLegs_0_1;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_1;
    FIX::LegBidForwardPoints LegBidForwardPoints_1;
    LegBidForwardPoints_1.setString("113276");
    noLegs_0_1.set(LegBidForwardPoints_1);
    LegQuotGrp_NoLegs_1.insert(LegBidForwardPoints_1.getString());
    FIX::LegBidPx LegBidPx_1;
    LegBidPx_1.setString("5741479");
    noLegs_0_1.set(LegBidPx_1);
    LegQuotGrp_NoLegs_1.insert(LegBidPx_1.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_1;
    LegOfferForwardPoints_1.setString("19152014");
    noLegs_0_1.set(LegOfferForwardPoints_1);
    LegQuotGrp_NoLegs_1.insert(LegOfferForwardPoints_1.getString());
    FIX::LegOfferPx LegOfferPx_1;
    LegOfferPx_1.setString("20129935");
    noLegs_0_1.set(LegOfferPx_1);
    LegQuotGrp_NoLegs_1.insert(LegOfferPx_1.getString());
    FIX::LegOrderQty LegOrderQty_5;
    LegOrderQty_5.setString("20367086");
    noLegs_0_1.set(LegOrderQty_5);
    LegQuotGrp_NoLegs_1.insert(LegOrderQty_5.getString());
    FIX::LegPriceType LegPriceType_1(1994827309);
    noLegs_0_1.set(LegPriceType_1);
    LegQuotGrp_NoLegs_1.insert(LegPriceType_1.getString());
    FIX::LegQty LegQty_5;
    LegQty_5.setString("3375389");
    noLegs_0_1.set(LegQty_5);
    LegQuotGrp_NoLegs_1.insert(LegQty_5.getString());
    FIX::LegRefID LegRefID_5("STRING_798738498");
    noLegs_0_1.set(LegRefID_5);
    LegQuotGrp_NoLegs_1.insert(LegRefID_5.getString());
    FIX::LegSettlDate LegSettlDate_5("LOCALMKTDATE_1570878832");
    noLegs_0_1.set(LegSettlDate_5);
    LegQuotGrp_NoLegs_1.insert(LegSettlDate_5.getString());
    FIX::LegSettlType LegSettlType_5('1');
    noLegs_0_1.set(LegSettlType_5);
    LegQuotGrp_NoLegs_1.insert(LegSettlType_5.getString());
    FIX::LegSwapType LegSwapType_5(1);
    noLegs_0_1.set(LegSwapType_5);
    LegQuotGrp_NoLegs_1.insert(LegSwapType_5.getString());
    all_values.push_back(LegQuotGrp_NoLegs_1);
    all_compo_names.insert("LegQuotGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_100;
    FIX::EncodedLegIssuer EncodedLegIssuer_100("DATA_489414452");
    noLegs_0_1.set(EncodedLegIssuer_100);
    InstrumentLeg_100.insert(EncodedLegIssuer_100.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_100(1799483855);
    noLegs_0_1.set(EncodedLegIssuerLen_100);
    InstrumentLeg_100.insert(EncodedLegIssuerLen_100.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_100("DATA_1714503528");
    noLegs_0_1.set(EncodedLegSecurityDesc_100);
    InstrumentLeg_100.insert(EncodedLegSecurityDesc_100.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_100(2023108094);
    noLegs_0_1.set(EncodedLegSecurityDescLen_100);
    InstrumentLeg_100.insert(EncodedLegSecurityDescLen_100.getString());
    FIX::LegCFICode LegCFICode_100("STRING_2073578250");
    noLegs_0_1.set(LegCFICode_100);
    InstrumentLeg_100.insert(LegCFICode_100.getString());
    FIX::LegContractMultiplier LegContractMultiplier_100;
    LegContractMultiplier_100.setString("16051323");
    noLegs_0_1.set(LegContractMultiplier_100);
    InstrumentLeg_100.insert(LegContractMultiplier_100.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_100(622635810);
    noLegs_0_1.set(LegContractMultiplierUnit_100);
    InstrumentLeg_100.insert(LegContractMultiplierUnit_100.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_100("MONTHYEAR_1520092954");
    noLegs_0_1.set(LegContractSettlMonth_100);
    InstrumentLeg_100.insert(LegContractSettlMonth_100.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_100("COUNTRY_939989881");
    noLegs_0_1.set(LegCountryOfIssue_100);
    InstrumentLeg_100.insert(LegCountryOfIssue_100.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_100("LOCALMKTDATE_457546375");
    noLegs_0_1.set(LegCouponPaymentDate_100);
    InstrumentLeg_100.insert(LegCouponPaymentDate_100.getString());
    FIX::LegCouponRate LegCouponRate_100;
    LegCouponRate_100.setString("68.520000");
    noLegs_0_1.set(LegCouponRate_100);
    InstrumentLeg_100.insert(LegCouponRate_100.getString());
    FIX::LegCreditRating LegCreditRating_100("STRING_1463106044");
    noLegs_0_1.set(LegCreditRating_100);
    InstrumentLeg_100.insert(LegCreditRating_100.getString());
    FIX::LegCurrency LegCurrency_100("EUR");
    noLegs_0_1.set(LegCurrency_100);
    InstrumentLeg_100.insert(LegCurrency_100.getString());
    FIX::LegDatedDate LegDatedDate_100("LOCALMKTDATE_700440397");
    noLegs_0_1.set(LegDatedDate_100);
    InstrumentLeg_100.insert(LegDatedDate_100.getString());
    FIX::LegExerciseStyle LegExerciseStyle_100(1287834590);
    noLegs_0_1.set(LegExerciseStyle_100);
    InstrumentLeg_100.insert(LegExerciseStyle_100.getString());
    FIX::LegFactor LegFactor_100;
    LegFactor_100.setString("1186576");
    noLegs_0_1.set(LegFactor_100);
    InstrumentLeg_100.insert(LegFactor_100.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_100(45108078);
    noLegs_0_1.set(LegFlowScheduleType_100);
    InstrumentLeg_100.insert(LegFlowScheduleType_100.getString());
    FIX::LegInstrRegistry LegInstrRegistry_100("STRING_1297634244");
    noLegs_0_1.set(LegInstrRegistry_100);
    InstrumentLeg_100.insert(LegInstrRegistry_100.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_100("LOCALMKTDATE_1636699821");
    noLegs_0_1.set(LegInterestAccrualDate_100);
    InstrumentLeg_100.insert(LegInterestAccrualDate_100.getString());
    FIX::LegIssueDate LegIssueDate_100("LOCALMKTDATE_56435688");
    noLegs_0_1.set(LegIssueDate_100);
    InstrumentLeg_100.insert(LegIssueDate_100.getString());
    FIX::LegIssuer LegIssuer_100("STRING_1871782187");
    noLegs_0_1.set(LegIssuer_100);
    InstrumentLeg_100.insert(LegIssuer_100.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_100("STRING_1404417612");
    noLegs_0_1.set(LegLocaleOfIssue_100);
    InstrumentLeg_100.insert(LegLocaleOfIssue_100.getString());
    FIX::LegMaturityDate LegMaturityDate_100("LOCALMKTDATE_2069429275");
    noLegs_0_1.set(LegMaturityDate_100);
    InstrumentLeg_100.insert(LegMaturityDate_100.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_100("MONTHYEAR_1761007155");
    noLegs_0_1.set(LegMaturityMonthYear_100);
    InstrumentLeg_100.insert(LegMaturityMonthYear_100.getString());
    FIX::LegMaturityTime LegMaturityTime_100("TZTIMEONLY_1251761273");
    noLegs_0_1.set(LegMaturityTime_100);
    InstrumentLeg_100.insert(LegMaturityTime_100.getString());
    FIX::LegOptAttribute LegOptAttribute_100('2');
    noLegs_0_1.set(LegOptAttribute_100);
    InstrumentLeg_100.insert(LegOptAttribute_100.getString());
    FIX::LegOptionRatio LegOptionRatio_100;
    LegOptionRatio_100.setString("4122620");
    noLegs_0_1.set(LegOptionRatio_100);
    InstrumentLeg_100.insert(LegOptionRatio_100.getString());
    FIX::LegPool LegPool_100("STRING_675156458");
    noLegs_0_1.set(LegPool_100);
    InstrumentLeg_100.insert(LegPool_100.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_100("STRING_54720072");
    noLegs_0_1.set(LegPriceUnitOfMeasure_100);
    InstrumentLeg_100.insert(LegPriceUnitOfMeasure_100.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_100;
    LegPriceUnitOfMeasureQty_100.setString("7333871");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_100);
    InstrumentLeg_100.insert(LegPriceUnitOfMeasureQty_100.getString());
    FIX::LegProduct LegProduct_100(1164570910);
    noLegs_0_1.set(LegProduct_100);
    InstrumentLeg_100.insert(LegProduct_100.getString());
    FIX::LegPutOrCall LegPutOrCall_100(1854203927);
    noLegs_0_1.set(LegPutOrCall_100);
    InstrumentLeg_100.insert(LegPutOrCall_100.getString());
    FIX::LegRatioQty LegRatioQty_100;
    LegRatioQty_100.setString("3004070");
    noLegs_0_1.set(LegRatioQty_100);
    InstrumentLeg_100.insert(LegRatioQty_100.getString());
    FIX::LegRedemptionDate LegRedemptionDate_100("LOCALMKTDATE_1040195356");
    noLegs_0_1.set(LegRedemptionDate_100);
    InstrumentLeg_100.insert(LegRedemptionDate_100.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_100("STRING_1780298530");
    noLegs_0_1.set(LegRepoCollateralSecurityType_100);
    InstrumentLeg_100.insert(LegRepoCollateralSecurityType_100.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_100;
    LegRepurchaseRate_100.setString("93.410000");
    noLegs_0_1.set(LegRepurchaseRate_100);
    InstrumentLeg_100.insert(LegRepurchaseRate_100.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_100(1662831166);
    noLegs_0_1.set(LegRepurchaseTerm_100);
    InstrumentLeg_100.insert(LegRepurchaseTerm_100.getString());
    FIX::LegSecurityDesc LegSecurityDesc_100("STRING_1152907836");
    noLegs_0_1.set(LegSecurityDesc_100);
    InstrumentLeg_100.insert(LegSecurityDesc_100.getString());
    FIX::LegSecurityExchange LegSecurityExchange_100("EXCHANGE_698045574");
    noLegs_0_1.set(LegSecurityExchange_100);
    InstrumentLeg_100.insert(LegSecurityExchange_100.getString());
    FIX::LegSecurityID LegSecurityID_100("STRING_2120377541");
    noLegs_0_1.set(LegSecurityID_100);
    InstrumentLeg_100.insert(LegSecurityID_100.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_100("STRING_1577584688");
    noLegs_0_1.set(LegSecurityIDSource_100);
    InstrumentLeg_100.insert(LegSecurityIDSource_100.getString());
    FIX::LegSecuritySubType LegSecuritySubType_100("STRING_13667970");
    noLegs_0_1.set(LegSecuritySubType_100);
    InstrumentLeg_100.insert(LegSecuritySubType_100.getString());
    FIX::LegSecurityType LegSecurityType_100("STRING_1062350948");
    noLegs_0_1.set(LegSecurityType_100);
    InstrumentLeg_100.insert(LegSecurityType_100.getString());
    FIX::LegSide LegSide_100('4');
    noLegs_0_1.set(LegSide_100);
    InstrumentLeg_100.insert(LegSide_100.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_100("STRING_714108367");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_100);
    InstrumentLeg_100.insert(LegStateOrProvinceOfIssue_100.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_100("JPY");
    noLegs_0_1.set(LegStrikeCurrency_100);
    InstrumentLeg_100.insert(LegStrikeCurrency_100.getString());
    FIX::LegStrikePrice LegStrikePrice_100;
    LegStrikePrice_100.setString("7592164");
    noLegs_0_1.set(LegStrikePrice_100);
    InstrumentLeg_100.insert(LegStrikePrice_100.getString());
    FIX::LegSymbol LegSymbol_100("STRING_1500336135");
    noLegs_0_1.set(LegSymbol_100);
    InstrumentLeg_100.insert(LegSymbol_100.getString());
    FIX::LegSymbolSfx LegSymbolSfx_100("STRING_100432217");
    noLegs_0_1.set(LegSymbolSfx_100);
    InstrumentLeg_100.insert(LegSymbolSfx_100.getString());
    FIX::LegTimeUnit LegTimeUnit_100("STRING_815652134");
    noLegs_0_1.set(LegTimeUnit_100);
    InstrumentLeg_100.insert(LegTimeUnit_100.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_100("STRING_1224634674");
    noLegs_0_1.set(LegUnitOfMeasure_100);
    InstrumentLeg_100.insert(LegUnitOfMeasure_100.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_100;
    LegUnitOfMeasureQty_100.setString("15048498");
    noLegs_0_1.set(LegUnitOfMeasureQty_100);
    InstrumentLeg_100.insert(LegUnitOfMeasureQty_100.getString());
    all_values.push_back(InstrumentLeg_100);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_207;
      FIX::LegSecurityAltID LegSecurityAltID_207("STRING_838158182");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_207);
      LegSecAltIDGrp_NoLegSecurityAltID_207.insert(LegSecurityAltID_207.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_207("STRING_609127455");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_207);
      LegSecAltIDGrp_NoLegSecurityAltID_207.insert(LegSecurityAltIDSource_207.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_207);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_208;
      FIX::LegSecurityAltID LegSecurityAltID_208("STRING_997082338");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_208);
      LegSecAltIDGrp_NoLegSecurityAltID_208.insert(LegSecurityAltID_208.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_208("STRING_1250420187");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_208);
      LegSecAltIDGrp_NoLegSecurityAltID_208.insert(LegSecurityAltIDSource_208.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_208);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_1;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_1("JPY");
    noLegs_0_1.set(LegBenchmarkCurveCurrency_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurveCurrency_1.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_1("STRING_1983807333");
    noLegs_0_1.set(LegBenchmarkCurveName_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurveName_1.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_1("STRING_301371175");
    noLegs_0_1.set(LegBenchmarkCurvePoint_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurvePoint_1.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_1;
    LegBenchmarkPrice_1.setString("7585226");
    noLegs_0_1.set(LegBenchmarkPrice_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkPrice_1.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_1(136730711);
    noLegs_0_1.set(LegBenchmarkPriceType_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkPriceType_1.getString());
    all_values.push_back(LegBenchmarkCurveData_1);
    all_compo_names.insert("LegBenchmarkCurveData");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_12;
      FIX::LegStipulationType LegStipulationType_12("STRING_391337571");
      noLegStipulations_1_1_0.set(LegStipulationType_12);
      LegStipulations_NoLegStipulations_12.insert(LegStipulationType_12.getString());
      FIX::LegStipulationValue LegStipulationValue_12("STRING_2042270052");
      noLegStipulations_1_1_0.set(LegStipulationValue_12);
      LegStipulations_NoLegStipulations_12.insert(LegStipulationValue_12.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_12);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_13;
      FIX::LegStipulationType LegStipulationType_13("STRING_856914050");
      noLegStipulations_1_1_1.set(LegStipulationType_13);
      LegStipulations_NoLegStipulations_13.insert(LegStipulationType_13.getString());
      FIX::LegStipulationValue LegStipulationValue_13("STRING_1544245407");
      noLegStipulations_1_1_1.set(LegStipulationValue_13);
      LegStipulations_NoLegStipulations_13.insert(LegStipulationValue_13.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_13);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_14;
      FIX::LegStipulationType LegStipulationType_14("STRING_592831979");
      noLegStipulations_1_1_2.set(LegStipulationType_14);
      LegStipulations_NoLegStipulations_14.insert(LegStipulationType_14.getString());
      FIX::LegStipulationValue LegStipulationValue_14("STRING_829807943");
      noLegStipulations_1_1_2.set(LegStipulationValue_14);
      LegStipulations_NoLegStipulations_14.insert(LegStipulationValue_14.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_14);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_99;
      FIX::NestedPartyID NestedPartyID_99("STRING_606499949");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_99);
      NestedParties_NoNestedPartyIDs_99.insert(NestedPartyID_99.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_99('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_99);
      NestedParties_NoNestedPartyIDs_99.insert(NestedPartyIDSource_99.getString());
      FIX::NestedPartyRole NestedPartyRole_99(1466904827);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_99);
      NestedParties_NoNestedPartyIDs_99.insert(NestedPartyRole_99.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_99);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_211;
        FIX::NestedPartySubID NestedPartySubID_211("STRING_2094860782");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_211);
        NstdPtysSubGrp_NoNestedPartySubIDs_211.insert(NestedPartySubID_211.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_211(2078120871);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_211);
        NstdPtysSubGrp_NoNestedPartySubIDs_211.insert(NestedPartySubIDType_211.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_211);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_212;
        FIX::NestedPartySubID NestedPartySubID_212("STRING_2079824763");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_212);
        NstdPtysSubGrp_NoNestedPartySubIDs_212.insert(NestedPartySubID_212.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_212(1447713269);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_212);
        NstdPtysSubGrp_NoNestedPartySubIDs_212.insert(NestedPartySubIDType_212.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_212);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Quote::NoLegs noLegs_0_2;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_2;
    FIX::LegBidForwardPoints LegBidForwardPoints_2;
    LegBidForwardPoints_2.setString("310694");
    noLegs_0_2.set(LegBidForwardPoints_2);
    LegQuotGrp_NoLegs_2.insert(LegBidForwardPoints_2.getString());
    FIX::LegBidPx LegBidPx_2;
    LegBidPx_2.setString("7479932");
    noLegs_0_2.set(LegBidPx_2);
    LegQuotGrp_NoLegs_2.insert(LegBidPx_2.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_2;
    LegOfferForwardPoints_2.setString("5248642");
    noLegs_0_2.set(LegOfferForwardPoints_2);
    LegQuotGrp_NoLegs_2.insert(LegOfferForwardPoints_2.getString());
    FIX::LegOfferPx LegOfferPx_2;
    LegOfferPx_2.setString("15359192");
    noLegs_0_2.set(LegOfferPx_2);
    LegQuotGrp_NoLegs_2.insert(LegOfferPx_2.getString());
    FIX::LegOrderQty LegOrderQty_6;
    LegOrderQty_6.setString("14855910");
    noLegs_0_2.set(LegOrderQty_6);
    LegQuotGrp_NoLegs_2.insert(LegOrderQty_6.getString());
    FIX::LegPriceType LegPriceType_2(1363022478);
    noLegs_0_2.set(LegPriceType_2);
    LegQuotGrp_NoLegs_2.insert(LegPriceType_2.getString());
    FIX::LegQty LegQty_6;
    LegQty_6.setString("21450467");
    noLegs_0_2.set(LegQty_6);
    LegQuotGrp_NoLegs_2.insert(LegQty_6.getString());
    FIX::LegRefID LegRefID_6("STRING_335189700");
    noLegs_0_2.set(LegRefID_6);
    LegQuotGrp_NoLegs_2.insert(LegRefID_6.getString());
    FIX::LegSettlDate LegSettlDate_6("LOCALMKTDATE_465959017");
    noLegs_0_2.set(LegSettlDate_6);
    LegQuotGrp_NoLegs_2.insert(LegSettlDate_6.getString());
    FIX::LegSettlType LegSettlType_6('1');
    noLegs_0_2.set(LegSettlType_6);
    LegQuotGrp_NoLegs_2.insert(LegSettlType_6.getString());
    FIX::LegSwapType LegSwapType_6(4);
    noLegs_0_2.set(LegSwapType_6);
    LegQuotGrp_NoLegs_2.insert(LegSwapType_6.getString());
    all_values.push_back(LegQuotGrp_NoLegs_2);
    all_compo_names.insert("LegQuotGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_101;
    FIX::EncodedLegIssuer EncodedLegIssuer_101("DATA_302282703");
    noLegs_0_2.set(EncodedLegIssuer_101);
    InstrumentLeg_101.insert(EncodedLegIssuer_101.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_101(1583218165);
    noLegs_0_2.set(EncodedLegIssuerLen_101);
    InstrumentLeg_101.insert(EncodedLegIssuerLen_101.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_101("DATA_2145514800");
    noLegs_0_2.set(EncodedLegSecurityDesc_101);
    InstrumentLeg_101.insert(EncodedLegSecurityDesc_101.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_101(439013414);
    noLegs_0_2.set(EncodedLegSecurityDescLen_101);
    InstrumentLeg_101.insert(EncodedLegSecurityDescLen_101.getString());
    FIX::LegCFICode LegCFICode_101("STRING_777301048");
    noLegs_0_2.set(LegCFICode_101);
    InstrumentLeg_101.insert(LegCFICode_101.getString());
    FIX::LegContractMultiplier LegContractMultiplier_101;
    LegContractMultiplier_101.setString("3893687");
    noLegs_0_2.set(LegContractMultiplier_101);
    InstrumentLeg_101.insert(LegContractMultiplier_101.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_101(333799819);
    noLegs_0_2.set(LegContractMultiplierUnit_101);
    InstrumentLeg_101.insert(LegContractMultiplierUnit_101.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_101("MONTHYEAR_1634215098");
    noLegs_0_2.set(LegContractSettlMonth_101);
    InstrumentLeg_101.insert(LegContractSettlMonth_101.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_101("COUNTRY_1933614131");
    noLegs_0_2.set(LegCountryOfIssue_101);
    InstrumentLeg_101.insert(LegCountryOfIssue_101.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_101("LOCALMKTDATE_926631798");
    noLegs_0_2.set(LegCouponPaymentDate_101);
    InstrumentLeg_101.insert(LegCouponPaymentDate_101.getString());
    FIX::LegCouponRate LegCouponRate_101;
    LegCouponRate_101.setString("93.940000");
    noLegs_0_2.set(LegCouponRate_101);
    InstrumentLeg_101.insert(LegCouponRate_101.getString());
    FIX::LegCreditRating LegCreditRating_101("STRING_760476930");
    noLegs_0_2.set(LegCreditRating_101);
    InstrumentLeg_101.insert(LegCreditRating_101.getString());
    FIX::LegCurrency LegCurrency_101("JPY");
    noLegs_0_2.set(LegCurrency_101);
    InstrumentLeg_101.insert(LegCurrency_101.getString());
    FIX::LegDatedDate LegDatedDate_101("LOCALMKTDATE_79898109");
    noLegs_0_2.set(LegDatedDate_101);
    InstrumentLeg_101.insert(LegDatedDate_101.getString());
    FIX::LegExerciseStyle LegExerciseStyle_101(706256416);
    noLegs_0_2.set(LegExerciseStyle_101);
    InstrumentLeg_101.insert(LegExerciseStyle_101.getString());
    FIX::LegFactor LegFactor_101;
    LegFactor_101.setString("85917");
    noLegs_0_2.set(LegFactor_101);
    InstrumentLeg_101.insert(LegFactor_101.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_101(10535332);
    noLegs_0_2.set(LegFlowScheduleType_101);
    InstrumentLeg_101.insert(LegFlowScheduleType_101.getString());
    FIX::LegInstrRegistry LegInstrRegistry_101("STRING_638597531");
    noLegs_0_2.set(LegInstrRegistry_101);
    InstrumentLeg_101.insert(LegInstrRegistry_101.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_101("LOCALMKTDATE_1456305042");
    noLegs_0_2.set(LegInterestAccrualDate_101);
    InstrumentLeg_101.insert(LegInterestAccrualDate_101.getString());
    FIX::LegIssueDate LegIssueDate_101("LOCALMKTDATE_41604773");
    noLegs_0_2.set(LegIssueDate_101);
    InstrumentLeg_101.insert(LegIssueDate_101.getString());
    FIX::LegIssuer LegIssuer_101("STRING_1386590780");
    noLegs_0_2.set(LegIssuer_101);
    InstrumentLeg_101.insert(LegIssuer_101.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_101("STRING_1981169338");
    noLegs_0_2.set(LegLocaleOfIssue_101);
    InstrumentLeg_101.insert(LegLocaleOfIssue_101.getString());
    FIX::LegMaturityDate LegMaturityDate_101("LOCALMKTDATE_1577524043");
    noLegs_0_2.set(LegMaturityDate_101);
    InstrumentLeg_101.insert(LegMaturityDate_101.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_101("MONTHYEAR_724698143");
    noLegs_0_2.set(LegMaturityMonthYear_101);
    InstrumentLeg_101.insert(LegMaturityMonthYear_101.getString());
    FIX::LegMaturityTime LegMaturityTime_101("TZTIMEONLY_1196708168");
    noLegs_0_2.set(LegMaturityTime_101);
    InstrumentLeg_101.insert(LegMaturityTime_101.getString());
    FIX::LegOptAttribute LegOptAttribute_101('1');
    noLegs_0_2.set(LegOptAttribute_101);
    InstrumentLeg_101.insert(LegOptAttribute_101.getString());
    FIX::LegOptionRatio LegOptionRatio_101;
    LegOptionRatio_101.setString("10598878");
    noLegs_0_2.set(LegOptionRatio_101);
    InstrumentLeg_101.insert(LegOptionRatio_101.getString());
    FIX::LegPool LegPool_101("STRING_1662667185");
    noLegs_0_2.set(LegPool_101);
    InstrumentLeg_101.insert(LegPool_101.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_101("STRING_709450462");
    noLegs_0_2.set(LegPriceUnitOfMeasure_101);
    InstrumentLeg_101.insert(LegPriceUnitOfMeasure_101.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_101;
    LegPriceUnitOfMeasureQty_101.setString("2993963");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_101);
    InstrumentLeg_101.insert(LegPriceUnitOfMeasureQty_101.getString());
    FIX::LegProduct LegProduct_101(1964949888);
    noLegs_0_2.set(LegProduct_101);
    InstrumentLeg_101.insert(LegProduct_101.getString());
    FIX::LegPutOrCall LegPutOrCall_101(145184979);
    noLegs_0_2.set(LegPutOrCall_101);
    InstrumentLeg_101.insert(LegPutOrCall_101.getString());
    FIX::LegRatioQty LegRatioQty_101;
    LegRatioQty_101.setString("2974274");
    noLegs_0_2.set(LegRatioQty_101);
    InstrumentLeg_101.insert(LegRatioQty_101.getString());
    FIX::LegRedemptionDate LegRedemptionDate_101("LOCALMKTDATE_256479655");
    noLegs_0_2.set(LegRedemptionDate_101);
    InstrumentLeg_101.insert(LegRedemptionDate_101.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_101("STRING_922486027");
    noLegs_0_2.set(LegRepoCollateralSecurityType_101);
    InstrumentLeg_101.insert(LegRepoCollateralSecurityType_101.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_101;
    LegRepurchaseRate_101.setString("61.810000");
    noLegs_0_2.set(LegRepurchaseRate_101);
    InstrumentLeg_101.insert(LegRepurchaseRate_101.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_101(590279474);
    noLegs_0_2.set(LegRepurchaseTerm_101);
    InstrumentLeg_101.insert(LegRepurchaseTerm_101.getString());
    FIX::LegSecurityDesc LegSecurityDesc_101("STRING_409217478");
    noLegs_0_2.set(LegSecurityDesc_101);
    InstrumentLeg_101.insert(LegSecurityDesc_101.getString());
    FIX::LegSecurityExchange LegSecurityExchange_101("EXCHANGE_472926664");
    noLegs_0_2.set(LegSecurityExchange_101);
    InstrumentLeg_101.insert(LegSecurityExchange_101.getString());
    FIX::LegSecurityID LegSecurityID_101("STRING_1516911272");
    noLegs_0_2.set(LegSecurityID_101);
    InstrumentLeg_101.insert(LegSecurityID_101.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_101("STRING_725756872");
    noLegs_0_2.set(LegSecurityIDSource_101);
    InstrumentLeg_101.insert(LegSecurityIDSource_101.getString());
    FIX::LegSecuritySubType LegSecuritySubType_101("STRING_1233403595");
    noLegs_0_2.set(LegSecuritySubType_101);
    InstrumentLeg_101.insert(LegSecuritySubType_101.getString());
    FIX::LegSecurityType LegSecurityType_101("STRING_902559371");
    noLegs_0_2.set(LegSecurityType_101);
    InstrumentLeg_101.insert(LegSecurityType_101.getString());
    FIX::LegSide LegSide_101('7');
    noLegs_0_2.set(LegSide_101);
    InstrumentLeg_101.insert(LegSide_101.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_101("STRING_1313301704");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_101);
    InstrumentLeg_101.insert(LegStateOrProvinceOfIssue_101.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_101("GBP");
    noLegs_0_2.set(LegStrikeCurrency_101);
    InstrumentLeg_101.insert(LegStrikeCurrency_101.getString());
    FIX::LegStrikePrice LegStrikePrice_101;
    LegStrikePrice_101.setString("13238370");
    noLegs_0_2.set(LegStrikePrice_101);
    InstrumentLeg_101.insert(LegStrikePrice_101.getString());
    FIX::LegSymbol LegSymbol_101("STRING_99929671");
    noLegs_0_2.set(LegSymbol_101);
    InstrumentLeg_101.insert(LegSymbol_101.getString());
    FIX::LegSymbolSfx LegSymbolSfx_101("STRING_104384676");
    noLegs_0_2.set(LegSymbolSfx_101);
    InstrumentLeg_101.insert(LegSymbolSfx_101.getString());
    FIX::LegTimeUnit LegTimeUnit_101("STRING_1365441810");
    noLegs_0_2.set(LegTimeUnit_101);
    InstrumentLeg_101.insert(LegTimeUnit_101.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_101("STRING_1486520452");
    noLegs_0_2.set(LegUnitOfMeasure_101);
    InstrumentLeg_101.insert(LegUnitOfMeasure_101.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_101;
    LegUnitOfMeasureQty_101.setString("20855540");
    noLegs_0_2.set(LegUnitOfMeasureQty_101);
    InstrumentLeg_101.insert(LegUnitOfMeasureQty_101.getString());
    all_values.push_back(InstrumentLeg_101);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_209;
      FIX::LegSecurityAltID LegSecurityAltID_209("STRING_63734947");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_209);
      LegSecAltIDGrp_NoLegSecurityAltID_209.insert(LegSecurityAltID_209.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_209("STRING_1134778534");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_209);
      LegSecAltIDGrp_NoLegSecurityAltID_209.insert(LegSecurityAltIDSource_209.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_209);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_2;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_2("USD");
    noLegs_0_2.set(LegBenchmarkCurveCurrency_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkCurveCurrency_2.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_2("STRING_649962072");
    noLegs_0_2.set(LegBenchmarkCurveName_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkCurveName_2.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_2("STRING_932536139");
    noLegs_0_2.set(LegBenchmarkCurvePoint_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkCurvePoint_2.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_2;
    LegBenchmarkPrice_2.setString("14230190");
    noLegs_0_2.set(LegBenchmarkPrice_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkPrice_2.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_2(467428312);
    noLegs_0_2.set(LegBenchmarkPriceType_2);
    LegBenchmarkCurveData_2.insert(LegBenchmarkPriceType_2.getString());
    all_values.push_back(LegBenchmarkCurveData_2);
    all_compo_names.insert("LegBenchmarkCurveData");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_15;
      FIX::LegStipulationType LegStipulationType_15("STRING_1720446554");
      noLegStipulations_2_1_0.set(LegStipulationType_15);
      LegStipulations_NoLegStipulations_15.insert(LegStipulationType_15.getString());
      FIX::LegStipulationValue LegStipulationValue_15("STRING_723907967");
      noLegStipulations_2_1_0.set(LegStipulationValue_15);
      LegStipulations_NoLegStipulations_15.insert(LegStipulationValue_15.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_15);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_16;
      FIX::LegStipulationType LegStipulationType_16("STRING_2000207145");
      noLegStipulations_2_1_1.set(LegStipulationType_16);
      LegStipulations_NoLegStipulations_16.insert(LegStipulationType_16.getString());
      FIX::LegStipulationValue LegStipulationValue_16("STRING_259759088");
      noLegStipulations_2_1_1.set(LegStipulationValue_16);
      LegStipulations_NoLegStipulations_16.insert(LegStipulationValue_16.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_16);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_2_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_17;
      FIX::LegStipulationType LegStipulationType_17("STRING_1314187441");
      noLegStipulations_2_1_2.set(LegStipulationType_17);
      LegStipulations_NoLegStipulations_17.insert(LegStipulationType_17.getString());
      FIX::LegStipulationValue LegStipulationValue_17("STRING_261940975");
      noLegStipulations_2_1_2.set(LegStipulationValue_17);
      LegStipulations_NoLegStipulations_17.insert(LegStipulationValue_17.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_17);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_100;
      FIX::NestedPartyID NestedPartyID_100("STRING_683615065");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_100);
      NestedParties_NoNestedPartyIDs_100.insert(NestedPartyID_100.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_100('9');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_100);
      NestedParties_NoNestedPartyIDs_100.insert(NestedPartyIDSource_100.getString());
      FIX::NestedPartyRole NestedPartyRole_100(1966089347);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_100);
      NestedParties_NoNestedPartyIDs_100.insert(NestedPartyRole_100.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_100);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_213;
        FIX::NestedPartySubID NestedPartySubID_213("STRING_1774669357");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_213);
        NstdPtysSubGrp_NoNestedPartySubIDs_213.insert(NestedPartySubID_213.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_213(1131907404);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_213);
        NstdPtysSubGrp_NoNestedPartySubIDs_213.insert(NestedPartySubIDType_213.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_213);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_214;
        FIX::NestedPartySubID NestedPartySubID_214("STRING_1047506577");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_214);
        NstdPtysSubGrp_NoNestedPartySubIDs_214.insert(NestedPartySubID_214.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_214(422748992);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_214);
        NstdPtysSubGrp_NoNestedPartySubIDs_214.insert(NestedPartySubIDType_214.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_214);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_19;
  FIX::CashOrderQty CashOrderQty_19;
  CashOrderQty_19.setString("3082607");
  msg.set(CashOrderQty_19);
  OrderQtyData_19.insert(CashOrderQty_19.getString());
  FIX::OrderPercent OrderPercent_19;
  OrderPercent_19.setString("62.480000");
  msg.set(OrderPercent_19);
  OrderQtyData_19.insert(OrderPercent_19.getString());
  FIX::OrderQty OrderQty_29;
  OrderQty_29.setString("5271336");
  msg.set(OrderQty_29);
  OrderQtyData_19.insert(OrderQty_29.getString());
  FIX::RoundingDirection RoundingDirection_19('2');
  msg.set(RoundingDirection_19);
  OrderQtyData_19.insert(RoundingDirection_19.getString());
  FIX::RoundingModulus RoundingModulus_19;
  RoundingModulus_19.setString("4864730");
  msg.set(RoundingModulus_19);
  OrderQtyData_19.insert(RoundingModulus_19.getString());
  all_values.push_back(OrderQtyData_19);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_100;
    FIX::PartyID PartyID_100("STRING_321701160");
    noPartyIDs_0_0.set(PartyID_100);
    Parties_NoPartyIDs_100.insert(PartyID_100.getString());
    FIX::PartyIDSource PartyIDSource_100('7');
    noPartyIDs_0_0.set(PartyIDSource_100);
    Parties_NoPartyIDs_100.insert(PartyIDSource_100.getString());
    FIX::PartyRole PartyRole_100(47);
    noPartyIDs_0_0.set(PartyRole_100);
    Parties_NoPartyIDs_100.insert(PartyRole_100.getString());
    all_values.push_back(Parties_NoPartyIDs_100);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_221;
      FIX::PartySubID PartySubID_221("STRING_1673830790");
      noPartySubIDs_0_1_0.set(PartySubID_221);
      PtysSubGrp_NoPartySubIDs_221.insert(PartySubID_221.getString());
      FIX::PartySubIDType PartySubIDType_221(20);
      noPartySubIDs_0_1_0.set(PartySubIDType_221);
      PtysSubGrp_NoPartySubIDs_221.insert(PartySubIDType_221.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_221);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_222;
      FIX::PartySubID PartySubID_222("STRING_1477322976");
      noPartySubIDs_0_1_1.set(PartySubID_222);
      PtysSubGrp_NoPartySubIDs_222.insert(PartySubID_222.getString());
      FIX::PartySubIDType PartySubIDType_222(30);
      noPartySubIDs_0_1_1.set(PartySubIDType_222);
      PtysSubGrp_NoPartySubIDs_222.insert(PartySubIDType_222.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_222);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_101;
    FIX::PartyID PartyID_101("STRING_569889306");
    noPartyIDs_0_1.set(PartyID_101);
    Parties_NoPartyIDs_101.insert(PartyID_101.getString());
    FIX::PartyIDSource PartyIDSource_101('6');
    noPartyIDs_0_1.set(PartyIDSource_101);
    Parties_NoPartyIDs_101.insert(PartyIDSource_101.getString());
    FIX::PartyRole PartyRole_101(10);
    noPartyIDs_0_1.set(PartyRole_101);
    Parties_NoPartyIDs_101.insert(PartyRole_101.getString());
    all_values.push_back(Parties_NoPartyIDs_101);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_223;
      FIX::PartySubID PartySubID_223("STRING_260283943");
      noPartySubIDs_1_1_0.set(PartySubID_223);
      PtysSubGrp_NoPartySubIDs_223.insert(PartySubID_223.getString());
      FIX::PartySubIDType PartySubIDType_223(15);
      noPartySubIDs_1_1_0.set(PartySubIDType_223);
      PtysSubGrp_NoPartySubIDs_223.insert(PartySubIDType_223.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_223);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_224;
      FIX::PartySubID PartySubID_224("STRING_460501067");
      noPartySubIDs_1_1_1.set(PartySubID_224);
      PtysSubGrp_NoPartySubIDs_224.insert(PartySubID_224.getString());
      FIX::PartySubIDType PartySubIDType_224(19);
      noPartySubIDs_1_1_1.set(PartySubIDType_224);
      PtysSubGrp_NoPartySubIDs_224.insert(PartySubIDType_224.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_224);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_225;
      FIX::PartySubID PartySubID_225("STRING_1514773985");
      noPartySubIDs_1_1_2.set(PartySubID_225);
      PtysSubGrp_NoPartySubIDs_225.insert(PartySubID_225.getString());
      FIX::PartySubIDType PartySubIDType_225(28);
      noPartySubIDs_1_1_2.set(PartySubIDType_225);
      PtysSubGrp_NoPartySubIDs_225.insert(PartySubIDType_225.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_225);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_102;
    FIX::PartyID PartyID_102("STRING_1509922766");
    noPartyIDs_0_2.set(PartyID_102);
    Parties_NoPartyIDs_102.insert(PartyID_102.getString());
    FIX::PartyIDSource PartyIDSource_102('9');
    noPartyIDs_0_2.set(PartyIDSource_102);
    Parties_NoPartyIDs_102.insert(PartyIDSource_102.getString());
    FIX::PartyRole PartyRole_102(55);
    noPartyIDs_0_2.set(PartyRole_102);
    Parties_NoPartyIDs_102.insert(PartyRole_102.getString());
    all_values.push_back(Parties_NoPartyIDs_102);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_226;
      FIX::PartySubID PartySubID_226("STRING_317803441");
      noPartySubIDs_2_1_0.set(PartySubID_226);
      PtysSubGrp_NoPartySubIDs_226.insert(PartySubID_226.getString());
      FIX::PartySubIDType PartySubIDType_226(12);
      noPartySubIDs_2_1_0.set(PartySubIDType_226);
      PtysSubGrp_NoPartySubIDs_226.insert(PartySubIDType_226.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_226);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_227;
      FIX::PartySubID PartySubID_227("STRING_1559857468");
      noPartySubIDs_2_1_1.set(PartySubID_227);
      PtysSubGrp_NoPartySubIDs_227.insert(PartySubID_227.getString());
      FIX::PartySubIDType PartySubIDType_227(16);
      noPartySubIDs_2_1_1.set(PartySubIDType_227);
      PtysSubGrp_NoPartySubIDs_227.insert(PartySubIDType_227.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_227);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_228;
      FIX::PartySubID PartySubID_228("STRING_630266099");
      noPartySubIDs_2_1_2.set(PartySubID_228);
      PtysSubGrp_NoPartySubIDs_228.insert(PartySubID_228.getString());
      FIX::PartySubIDType PartySubIDType_228(22);
      noPartySubIDs_2_1_2.set(PartySubIDType_228);
      PtysSubGrp_NoPartySubIDs_228.insert(PartySubIDType_228.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_228);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
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
    all_compo_names.insert("QuotQualGrp.NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_14;
    FIX::RateSource RateSource_21(1);
    noRateSources_0_0.set(RateSource_21);
    RateSource_NoRateSources_14.insert(RateSource_21.getString());
    FIX::RateSourceType RateSourceType_14(1);
    noRateSources_0_0.set(RateSourceType_14);
    RateSource_NoRateSources_14.insert(RateSourceType_14.getString());
    FIX::ReferencePage ReferencePage_14("STRING_2004694093");
    noRateSources_0_0.set(ReferencePage_14);
    RateSource_NoRateSources_14.insert(ReferencePage_14.getString());
    all_values.push_back(RateSource_NoRateSources_14);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_21;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_21("EUR");
  msg.set(BenchmarkCurveCurrency_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurveCurrency_21.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_21("STRING_Euribor");
  msg.set(BenchmarkCurveName_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurveName_21.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_21("STRING_348610514");
  msg.set(BenchmarkCurvePoint_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurvePoint_21.getString());
  FIX::BenchmarkPrice BenchmarkPrice_21;
  BenchmarkPrice_21.setString("21426605");
  msg.set(BenchmarkPrice_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkPrice_21.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_21(529560744);
  msg.set(BenchmarkPriceType_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkPriceType_21.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_21("STRING_756170960");
  msg.set(BenchmarkSecurityID_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkSecurityID_21.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_21("STRING_517506028");
  msg.set(BenchmarkSecurityIDSource_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkSecurityIDSource_21.getString());
  FIX::Spread Spread_21;
  Spread_21.setString("18233580");
  msg.set(Spread_21);
  SpreadOrBenchmarkCurveData_21.insert(Spread_21.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_21);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_33;
    FIX::StipulationType StipulationType_33("STRING_MINQTY");
    noStipulations_0_0.set(StipulationType_33);
    Stipulations_NoStipulations_33.insert(StipulationType_33.getString());
    FIX::StipulationValue StipulationValue_33("STRING_136375437");
    noStipulations_0_0.set(StipulationValue_33);
    Stipulations_NoStipulations_33.insert(StipulationValue_33.getString());
    all_values.push_back(Stipulations_NoStipulations_33);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_96;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_96("DATA_666884599");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_96);
    UnderlyingInstrument_96.insert(EncodedUnderlyingIssuer_96.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_96(1280491569);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_96);
    UnderlyingInstrument_96.insert(EncodedUnderlyingIssuerLen_96.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_96("DATA_901118941");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_96);
    UnderlyingInstrument_96.insert(EncodedUnderlyingSecurityDesc_96.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_96(2000264284);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_96);
    UnderlyingInstrument_96.insert(EncodedUnderlyingSecurityDescLen_96.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_96;
    UnderlyingAdjustedQuantity_96.setString("18632984");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_96);
    UnderlyingInstrument_96.insert(UnderlyingAdjustedQuantity_96.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_96;
    UnderlyingAllocationPercent_96.setString("74.170000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_96);
    UnderlyingInstrument_96.insert(UnderlyingAllocationPercent_96.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_96;
    UnderlyingAttachmentPoint_96.setString("40.770000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_96);
    UnderlyingInstrument_96.insert(UnderlyingAttachmentPoint_96.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_96("STRING_1346128341");
    noUnderlyings_0_0.set(UnderlyingCFICode_96);
    UnderlyingInstrument_96.insert(UnderlyingCFICode_96.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_96("STRING_1450601237");
    noUnderlyings_0_0.set(UnderlyingCPProgram_96);
    UnderlyingInstrument_96.insert(UnderlyingCPProgram_96.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_96("STRING_796648311");
    noUnderlyings_0_0.set(UnderlyingCPRegType_96);
    UnderlyingInstrument_96.insert(UnderlyingCPRegType_96.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_96;
    UnderlyingCapValue_96.setString("19763944");
    noUnderlyings_0_0.set(UnderlyingCapValue_96);
    UnderlyingInstrument_96.insert(UnderlyingCapValue_96.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_96;
    UnderlyingCashAmount_96.setString("13901087");
    noUnderlyings_0_0.set(UnderlyingCashAmount_96);
    UnderlyingInstrument_96.insert(UnderlyingCashAmount_96.getString());
    FIX::UnderlyingCashType UnderlyingCashType_96("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_96);
    UnderlyingInstrument_96.insert(UnderlyingCashType_96.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_96;
    UnderlyingContractMultiplier_96.setString("9456499");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_96);
    UnderlyingInstrument_96.insert(UnderlyingContractMultiplier_96.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_96(1794820249);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_96);
    UnderlyingInstrument_96.insert(UnderlyingContractMultiplierUnit_96.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_96("COUNTRY_1422915849");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_96);
    UnderlyingInstrument_96.insert(UnderlyingCountryOfIssue_96.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_96("LOCALMKTDATE_465113447");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_96);
    UnderlyingInstrument_96.insert(UnderlyingCouponPaymentDate_96.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_96;
    UnderlyingCouponRate_96.setString("6.940000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_96);
    UnderlyingInstrument_96.insert(UnderlyingCouponRate_96.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_96("STRING_294203387");
    noUnderlyings_0_0.set(UnderlyingCreditRating_96);
    UnderlyingInstrument_96.insert(UnderlyingCreditRating_96.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_96("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_96);
    UnderlyingInstrument_96.insert(UnderlyingCurrency_96.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_96;
    UnderlyingCurrentValue_96.setString("6428139");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_96);
    UnderlyingInstrument_96.insert(UnderlyingCurrentValue_96.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_96;
    UnderlyingDetachmentPoint_96.setString("46.230000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_96);
    UnderlyingInstrument_96.insert(UnderlyingDetachmentPoint_96.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_96;
    UnderlyingDirtyPrice_96.setString("21412628");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_96);
    UnderlyingInstrument_96.insert(UnderlyingDirtyPrice_96.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_96;
    UnderlyingEndPrice_96.setString("13989848");
    noUnderlyings_0_0.set(UnderlyingEndPrice_96);
    UnderlyingInstrument_96.insert(UnderlyingEndPrice_96.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_96;
    UnderlyingEndValue_96.setString("236070");
    noUnderlyings_0_0.set(UnderlyingEndValue_96);
    UnderlyingInstrument_96.insert(UnderlyingEndValue_96.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_96(1817137247);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_96);
    UnderlyingInstrument_96.insert(UnderlyingExerciseStyle_96.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_96;
    UnderlyingFXRate_96.setString("2679561");
    noUnderlyings_0_0.set(UnderlyingFXRate_96);
    UnderlyingInstrument_96.insert(UnderlyingFXRate_96.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_96('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_96);
    UnderlyingInstrument_96.insert(UnderlyingFXRateCalc_96.getString());
    FIX::UnderlyingFactor UnderlyingFactor_96;
    UnderlyingFactor_96.setString("19535126");
    noUnderlyings_0_0.set(UnderlyingFactor_96);
    UnderlyingInstrument_96.insert(UnderlyingFactor_96.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_96(1806635939);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_96);
    UnderlyingInstrument_96.insert(UnderlyingFlowScheduleType_96.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_96("STRING_1990085864");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_96);
    UnderlyingInstrument_96.insert(UnderlyingInstrRegistry_96.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_96("LOCALMKTDATE_1086520605");
    noUnderlyings_0_0.set(UnderlyingIssueDate_96);
    UnderlyingInstrument_96.insert(UnderlyingIssueDate_96.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_96("STRING_560271232");
    noUnderlyings_0_0.set(UnderlyingIssuer_96);
    UnderlyingInstrument_96.insert(UnderlyingIssuer_96.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_96("STRING_1842866500");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_96);
    UnderlyingInstrument_96.insert(UnderlyingLocaleOfIssue_96.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_96("LOCALMKTDATE_802335448");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_96);
    UnderlyingInstrument_96.insert(UnderlyingMaturityDate_96.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_96("MONTHYEAR_451015001");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_96);
    UnderlyingInstrument_96.insert(UnderlyingMaturityMonthYear_96.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_96("TZTIMEONLY_2013450577");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_96);
    UnderlyingInstrument_96.insert(UnderlyingMaturityTime_96.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_96;
    UnderlyingNotionalPercentageOutstanding_96.setString("1.420000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_96);
    UnderlyingInstrument_96.insert(UnderlyingNotionalPercentageOutstanding_96.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_96('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_96);
    UnderlyingInstrument_96.insert(UnderlyingOptAttribute_96.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_96;
    UnderlyingOriginalNotionalPercentageOutstanding_96.setString("52.400000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_96);
    UnderlyingInstrument_96.insert(UnderlyingOriginalNotionalPercentageOutstanding_96.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_96("STRING_1977374582");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_96);
    UnderlyingInstrument_96.insert(UnderlyingPriceUnitOfMeasure_96.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_96;
    UnderlyingPriceUnitOfMeasureQty_96.setString("11442413");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_96);
    UnderlyingInstrument_96.insert(UnderlyingPriceUnitOfMeasureQty_96.getString());
    FIX::UnderlyingProduct UnderlyingProduct_96(1611546740);
    noUnderlyings_0_0.set(UnderlyingProduct_96);
    UnderlyingInstrument_96.insert(UnderlyingProduct_96.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_96(775540878);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_96);
    UnderlyingInstrument_96.insert(UnderlyingPutOrCall_96.getString());
    FIX::UnderlyingPx UnderlyingPx_96;
    UnderlyingPx_96.setString("7915779");
    noUnderlyings_0_0.set(UnderlyingPx_96);
    UnderlyingInstrument_96.insert(UnderlyingPx_96.getString());
    FIX::UnderlyingQty UnderlyingQty_96;
    UnderlyingQty_96.setString("8869789");
    noUnderlyings_0_0.set(UnderlyingQty_96);
    UnderlyingInstrument_96.insert(UnderlyingQty_96.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_96("LOCALMKTDATE_1240654325");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_96);
    UnderlyingInstrument_96.insert(UnderlyingRedemptionDate_96.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_96("STRING_296124962");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_96);
    UnderlyingInstrument_96.insert(UnderlyingRepoCollateralSecurityType_96.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_96;
    UnderlyingRepurchaseRate_96.setString("23.280000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_96);
    UnderlyingInstrument_96.insert(UnderlyingRepurchaseRate_96.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_96(751578417);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_96);
    UnderlyingInstrument_96.insert(UnderlyingRepurchaseTerm_96.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_96("STRING_1907827095");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_96);
    UnderlyingInstrument_96.insert(UnderlyingRestructuringType_96.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_96("STRING_1823996229");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_96);
    UnderlyingInstrument_96.insert(UnderlyingSecurityDesc_96.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_96("EXCHANGE_257679393");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_96);
    UnderlyingInstrument_96.insert(UnderlyingSecurityExchange_96.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_96("STRING_1901606324");
    noUnderlyings_0_0.set(UnderlyingSecurityID_96);
    UnderlyingInstrument_96.insert(UnderlyingSecurityID_96.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_96("STRING_1075497442");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_96);
    UnderlyingInstrument_96.insert(UnderlyingSecurityIDSource_96.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_96("STRING_281286397");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_96);
    UnderlyingInstrument_96.insert(UnderlyingSecuritySubType_96.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_96("STRING_1571259923");
    noUnderlyings_0_0.set(UnderlyingSecurityType_96);
    UnderlyingInstrument_96.insert(UnderlyingSecurityType_96.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_96("STRING_1343453559");
    noUnderlyings_0_0.set(UnderlyingSeniority_96);
    UnderlyingInstrument_96.insert(UnderlyingSeniority_96.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_96("STRING_1604487662");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_96);
    UnderlyingInstrument_96.insert(UnderlyingSettlMethod_96.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_96(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_96);
    UnderlyingInstrument_96.insert(UnderlyingSettlementType_96.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_96;
    UnderlyingStartValue_96.setString("10026058");
    noUnderlyings_0_0.set(UnderlyingStartValue_96);
    UnderlyingInstrument_96.insert(UnderlyingStartValue_96.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_96("STRING_1447089879");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_96);
    UnderlyingInstrument_96.insert(UnderlyingStateOrProvinceOfIssue_96.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_96("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_96);
    UnderlyingInstrument_96.insert(UnderlyingStrikeCurrency_96.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_96;
    UnderlyingStrikePrice_96.setString("11424727");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_96);
    UnderlyingInstrument_96.insert(UnderlyingStrikePrice_96.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_96("STRING_1118661365");
    noUnderlyings_0_0.set(UnderlyingSymbol_96);
    UnderlyingInstrument_96.insert(UnderlyingSymbol_96.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_96("STRING_2013892083");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_96);
    UnderlyingInstrument_96.insert(UnderlyingSymbolSfx_96.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_96("STRING_1008439661");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_96);
    UnderlyingInstrument_96.insert(UnderlyingTimeUnit_96.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_96("STRING_1119641507");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_96);
    UnderlyingInstrument_96.insert(UnderlyingUnitOfMeasure_96.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_96;
    UnderlyingUnitOfMeasureQty_96.setString("17680246");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_96);
    UnderlyingInstrument_96.insert(UnderlyingUnitOfMeasureQty_96.getString());
    all_values.push_back(UnderlyingInstrument_96);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_192;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_192("STRING_949532441");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_192);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_192.insert(UnderlyingSecurityAltID_192.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_192("STRING_764782340");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_192);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_192.insert(UnderlyingSecurityAltIDSource_192.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_193;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_193("STRING_1135117994");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_193);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_193.insert(UnderlyingSecurityAltID_193.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_193("STRING_1725073320");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_193);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_193.insert(UnderlyingSecurityAltIDSource_193.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_193;
      FIX::UnderlyingStipType UnderlyingStipType_193("STRING_2022096935");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_193);
      UnderlyingStipulations_NoUnderlyingStips_193.insert(UnderlyingStipType_193.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_193("STRING_818243997");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_193);
      UnderlyingStipulations_NoUnderlyingStips_193.insert(UnderlyingStipValue_193.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_193);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_194;
      FIX::UnderlyingStipType UnderlyingStipType_194("STRING_1852485219");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_194);
      UnderlyingStipulations_NoUnderlyingStips_194.insert(UnderlyingStipType_194.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_194("STRING_1055795616");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_194);
      UnderlyingStipulations_NoUnderlyingStips_194.insert(UnderlyingStipValue_194.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_194);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_178;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_178("STRING_1612828666");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyID_178.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_178('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyIDSource_178.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_178(1827501808);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyRole_178.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_178);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_355("STRING_1807805640");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_355);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355.insert(UnderlyingInstrumentPartySubID_355.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_355(2108788205);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_355);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355.insert(UnderlyingInstrumentPartySubIDType_355.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_356("STRING_790727617");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_356);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356.insert(UnderlyingInstrumentPartySubID_356.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_356(1003775551);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_356);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356.insert(UnderlyingInstrumentPartySubIDType_356.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_179;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_179("STRING_1565792219");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyID_179.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_179('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyIDSource_179.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_179(2006381401);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyRole_179.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_179);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_357("STRING_336858845");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_357);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357.insert(UnderlyingInstrumentPartySubID_357.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_357(1421774835);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_357);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357.insert(UnderlyingInstrumentPartySubIDType_357.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_16;
  FIX::Yield Yield_16;
  Yield_16.setString("11.820000");
  msg.set(Yield_16);
  YieldData_16.insert(Yield_16.getString());
  FIX::YieldCalcDate YieldCalcDate_16("LOCALMKTDATE_1455520210");
  msg.set(YieldCalcDate_16);
  YieldData_16.insert(YieldCalcDate_16.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_16("LOCALMKTDATE_1288183270");
  msg.set(YieldRedemptionDate_16);
  YieldData_16.insert(YieldRedemptionDate_16.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_16;
  YieldRedemptionPrice_16.setString("8688271");
  msg.set(YieldRedemptionPrice_16);
  YieldData_16.insert(YieldRedemptionPrice_16.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_16(427678069);
  msg.set(YieldRedemptionPriceType_16);
  YieldData_16.insert(YieldRedemptionPriceType_16.getString());
  FIX::YieldType YieldType_16("STRING_CALL");
  msg.set(YieldType_16);
  YieldData_16.insert(YieldType_16.getString());
  all_values.push_back(YieldData_16);
  all_compo_names.insert("YieldData");


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
