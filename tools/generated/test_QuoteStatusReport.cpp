#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/QuoteStatusReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteStatusReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusReport_0;
  FIX::Account Account_39("STRING_68259866");
  msg.set(Account_39);
  QuoteStatusReport_0.insert(Account_39.getString());
  FIX::AccountType AccountType_34(1);
  msg.set(AccountType_34);
  QuoteStatusReport_0.insert(AccountType_34.getString());
  FIX::AcctIDSource AcctIDSource_32(99);
  msg.set(AcctIDSource_32);
  QuoteStatusReport_0.insert(AcctIDSource_32.getString());
  FIX::BidForwardPoints BidForwardPoints_16;
  BidForwardPoints_16.setString("12054452");
  msg.set(BidForwardPoints_16);
  QuoteStatusReport_0.insert(BidForwardPoints_16.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_16;
  BidForwardPoints2_16.setString("15189478");
  msg.set(BidForwardPoints2_16);
  QuoteStatusReport_0.insert(BidForwardPoints2_16.getString());
  FIX::BidPx BidPx_16;
  BidPx_16.setString("12257729");
  msg.set(BidPx_16);
  QuoteStatusReport_0.insert(BidPx_16.getString());
  FIX::BidSize BidSize_16;
  BidSize_16.setString("21250238");
  msg.set(BidSize_16);
  QuoteStatusReport_0.insert(BidSize_16.getString());
  FIX::BidSpotRate BidSpotRate_16;
  BidSpotRate_16.setString("12971691");
  msg.set(BidSpotRate_16);
  QuoteStatusReport_0.insert(BidSpotRate_16.getString());
  FIX::BidYield BidYield_16;
  BidYield_16.setString("82.320000");
  msg.set(BidYield_16);
  QuoteStatusReport_0.insert(BidYield_16.getString());
  FIX::BookingType BookingType_33(1);
  msg.set(BookingType_33);
  QuoteStatusReport_0.insert(BookingType_33.getString());
  FIX::CommType CommType_24('1');
  msg.set(CommType_24);
  QuoteStatusReport_0.insert(CommType_24.getString());
  FIX::Commission Commission_24;
  Commission_24.setString("9331423");
  msg.set(Commission_24);
  QuoteStatusReport_0.insert(Commission_24.getString());
  FIX::Currency Currency_60("USD");
  msg.set(Currency_60);
  QuoteStatusReport_0.insert(Currency_60.getString());
  FIX::CustOrderCapacity CustOrderCapacity_19(3);
  msg.set(CustOrderCapacity_19);
  QuoteStatusReport_0.insert(CustOrderCapacity_19.getString());
  FIX::EncodedText EncodedText_79("DATA_147434914");
  msg.set(EncodedText_79);
  QuoteStatusReport_0.insert(EncodedText_79.getString());
  FIX::EncodedTextLen EncodedTextLen_79(1189453661);
  msg.set(EncodedTextLen_79);
  QuoteStatusReport_0.insert(EncodedTextLen_79.getString());
  FIX::ExDestination ExDestination_11("EXCHANGE_739463456");
  msg.set(ExDestination_11);
  QuoteStatusReport_0.insert(ExDestination_11.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_11('B');
  msg.set(ExDestinationIDSource_11);
  QuoteStatusReport_0.insert(ExDestinationIDSource_11.getString());
  FIX::ExpireTime ExpireTime_18(FIX::UTCTIMESTAMP(16, 9, 25, 2, 3, 2006));
  msg.set(ExpireTime_18);
  QuoteStatusReport_0.insert(ExpireTime_18.getString());
  FIX::MidPx MidPx_16;
  MidPx_16.setString("16600507");
  msg.set(MidPx_16);
  QuoteStatusReport_0.insert(MidPx_16.getString());
  FIX::MidYield MidYield_16;
  MidYield_16.setString("79.490000");
  msg.set(MidYield_16);
  QuoteStatusReport_0.insert(MidYield_16.getString());
  FIX::MinBidSize MinBidSize_2;
  MinBidSize_2.setString("8316373");
  msg.set(MinBidSize_2);
  QuoteStatusReport_0.insert(MinBidSize_2.getString());
  FIX::MinOfferSize MinOfferSize_2;
  MinOfferSize_2.setString("19242026");
  msg.set(MinOfferSize_2);
  QuoteStatusReport_0.insert(MinOfferSize_2.getString());
  FIX::MinQty MinQty_17;
  MinQty_17.setString("5940222");
  msg.set(MinQty_17);
  QuoteStatusReport_0.insert(MinQty_17.getString());
  FIX::MktBidPx MktBidPx_2;
  MktBidPx_2.setString("8998972");
  msg.set(MktBidPx_2);
  QuoteStatusReport_0.insert(MktBidPx_2.getString());
  FIX::MktOfferPx MktOfferPx_2;
  MktOfferPx_2.setString("8719595");
  msg.set(MktOfferPx_2);
  QuoteStatusReport_0.insert(MktOfferPx_2.getString());
  FIX::OfferForwardPoints OfferForwardPoints_16;
  OfferForwardPoints_16.setString("386309");
  msg.set(OfferForwardPoints_16);
  QuoteStatusReport_0.insert(OfferForwardPoints_16.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_16;
  OfferForwardPoints2_16.setString("21053424");
  msg.set(OfferForwardPoints2_16);
  QuoteStatusReport_0.insert(OfferForwardPoints2_16.getString());
  FIX::OfferPx OfferPx_16;
  OfferPx_16.setString("2434238");
  msg.set(OfferPx_16);
  QuoteStatusReport_0.insert(OfferPx_16.getString());
  FIX::OfferSize OfferSize_16;
  OfferSize_16.setString("12644038");
  msg.set(OfferSize_16);
  QuoteStatusReport_0.insert(OfferSize_16.getString());
  FIX::OfferSpotRate OfferSpotRate_16;
  OfferSpotRate_16.setString("20828826");
  msg.set(OfferSpotRate_16);
  QuoteStatusReport_0.insert(OfferSpotRate_16.getString());
  FIX::OfferYield OfferYield_16;
  OfferYield_16.setString("29.720000");
  msg.set(OfferYield_16);
  QuoteStatusReport_0.insert(OfferYield_16.getString());
  FIX::OrdType OrdType_60('M');
  msg.set(OrdType_60);
  QuoteStatusReport_0.insert(OrdType_60.getString());
  FIX::OrderCapacity OrderCapacity_35('W');
  msg.set(OrderCapacity_35);
  QuoteStatusReport_0.insert(OrderCapacity_35.getString());
  FIX::OrderQty2 OrderQty2_25;
  OrderQty2_25.setString("18681793");
  msg.set(OrderQty2_25);
  QuoteStatusReport_0.insert(OrderQty2_25.getString());
  FIX::OrderRestrictions OrderRestrictions_32("MULTIPLECHARVALUE_8");
  msg.set(OrderRestrictions_32);
  QuoteStatusReport_0.insert(OrderRestrictions_32.getString());
  FIX::Price Price_25;
  Price_25.setString("12547041");
  msg.set(Price_25);
  QuoteStatusReport_0.insert(Price_25.getString());
  FIX::PriceType PriceType_41(14);
  msg.set(PriceType_41);
  QuoteStatusReport_0.insert(PriceType_41.getString());
  FIX::QuoteCancelType QuoteCancelType_2(8);
  msg.set(QuoteCancelType_2);
  QuoteStatusReport_0.insert(QuoteCancelType_2.getString());
  FIX::QuoteID QuoteID_13("STRING_1402139065");
  msg.set(QuoteID_13);
  QuoteStatusReport_0.insert(QuoteID_13.getString());
  FIX::QuoteMsgID QuoteMsgID_3("STRING_141101127");
  msg.set(QuoteMsgID_3);
  QuoteStatusReport_0.insert(QuoteMsgID_3.getString());
  FIX::QuoteRejectReason QuoteRejectReason_1(4);
  msg.set(QuoteRejectReason_1);
  QuoteStatusReport_0.insert(QuoteRejectReason_1.getString());
  FIX::QuoteReqID QuoteReqID_6("STRING_1101508652");
  msg.set(QuoteReqID_6);
  QuoteStatusReport_0.insert(QuoteReqID_6.getString());
  FIX::QuoteRespID QuoteRespID_3("STRING_1780729407");
  msg.set(QuoteRespID_3);
  QuoteStatusReport_0.insert(QuoteRespID_3.getString());
  FIX::QuoteStatus QuoteStatus_1(6);
  msg.set(QuoteStatus_1);
  QuoteStatusReport_0.insert(QuoteStatus_1.getString());
  FIX::QuoteStatusReqID QuoteStatusReqID_0("STRING_2076936702");
  msg.set(QuoteStatusReqID_0);
  QuoteStatusReport_0.insert(QuoteStatusReqID_0.getString());
  FIX::QuoteType QuoteType_10(0);
  msg.set(QuoteType_10);
  QuoteStatusReport_0.insert(QuoteType_10.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_2;
  SettlCurrBidFxRate_2.setString("14027299");
  msg.set(SettlCurrBidFxRate_2);
  QuoteStatusReport_0.insert(SettlCurrBidFxRate_2.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_8('M');
  msg.set(SettlCurrFxRateCalc_8);
  QuoteStatusReport_0.insert(SettlCurrFxRateCalc_8.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_2;
  SettlCurrOfferFxRate_2.setString("3052719");
  msg.set(SettlCurrOfferFxRate_2);
  QuoteStatusReport_0.insert(SettlCurrOfferFxRate_2.getString());
  FIX::SettlDate SettlDate_50("LOCALMKTDATE_915297067");
  msg.set(SettlDate_50);
  QuoteStatusReport_0.insert(SettlDate_50.getString());
  FIX::SettlDate2 SettlDate2_25("LOCALMKTDATE_264147473");
  msg.set(SettlDate2_25);
  QuoteStatusReport_0.insert(SettlDate2_25.getString());
  FIX::SettlType SettlType_30("STRING_5");
  msg.set(SettlType_30);
  QuoteStatusReport_0.insert(SettlType_30.getString());
  FIX::Side Side_46('C');
  msg.set(Side_46);
  QuoteStatusReport_0.insert(Side_46.getString());
  FIX::Text Text_79("STRING_858169761");
  msg.set(Text_79);
  QuoteStatusReport_0.insert(Text_79.getString());
  FIX::TradingSessionID TradingSessionID_86("STRING_6");
  msg.set(TradingSessionID_86);
  QuoteStatusReport_0.insert(TradingSessionID_86.getString());
  FIX::TradingSessionSubID TradingSessionSubID_86("STRING_7");
  msg.set(TradingSessionSubID_86);
  QuoteStatusReport_0.insert(TradingSessionSubID_86.getString());
  FIX::TransactTime TransactTime_61(FIX::UTCTIMESTAMP(0, 44, 40, 6, 9, 2013));
  msg.set(TransactTime_61);
  QuoteStatusReport_0.insert(TransactTime_61.getString());
  FIX::ValidUntilTime ValidUntilTime_19(FIX::UTCTIMESTAMP(14, 51, 17, 8, 11, 2017));
  msg.set(ValidUntilTime_19);
  QuoteStatusReport_0.insert(ValidUntilTime_19.getString());
  all_values.push_back(QuoteStatusReport_0);

  all_compo_names.insert("QuoteStatusReport");

  // FinancingDetails
  multiset<string> FinancingDetails_23;
  FIX::AgreementCurrency AgreementCurrency_23("USD");
  msg.set(AgreementCurrency_23);
  FinancingDetails_23.insert(AgreementCurrency_23.getString());
  FIX::AgreementDate AgreementDate_23("LOCALMKTDATE_1996885747");
  msg.set(AgreementDate_23);
  FinancingDetails_23.insert(AgreementDate_23.getString());
  FIX::AgreementDesc AgreementDesc_23("STRING_1794682471");
  msg.set(AgreementDesc_23);
  FinancingDetails_23.insert(AgreementDesc_23.getString());
  FIX::AgreementID AgreementID_23("STRING_1543231410");
  msg.set(AgreementID_23);
  FinancingDetails_23.insert(AgreementID_23.getString());
  FIX::DeliveryType DeliveryType_23(1);
  msg.set(DeliveryType_23);
  FinancingDetails_23.insert(DeliveryType_23.getString());
  FIX::EndDate EndDate_23("LOCALMKTDATE_599517367");
  msg.set(EndDate_23);
  FinancingDetails_23.insert(EndDate_23.getString());
  FIX::MarginRatio MarginRatio_23;
  MarginRatio_23.setString("77.000000");
  msg.set(MarginRatio_23);
  FinancingDetails_23.insert(MarginRatio_23.getString());
  FIX::StartDate StartDate_23("LOCALMKTDATE_7954677");
  msg.set(StartDate_23);
  FinancingDetails_23.insert(StartDate_23.getString());
  FIX::TerminationType TerminationType_23(1);
  msg.set(TerminationType_23);
  FinancingDetails_23.insert(TerminationType_23.getString());
  all_values.push_back(FinancingDetails_23);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_73;
  FIX::AttachmentPoint AttachmentPoint_73;
  AttachmentPoint_73.setString("47.670000");
  msg.set(AttachmentPoint_73);
  Instrument_73.insert(AttachmentPoint_73.getString());
  FIX::CFICode CFICode_73("STRING_272102150");
  msg.set(CFICode_73);
  Instrument_73.insert(CFICode_73.getString());
  FIX::CPProgram CPProgram_73(2);
  msg.set(CPProgram_73);
  Instrument_73.insert(CPProgram_73.getString());
  FIX::CPRegType CPRegType_73("STRING_258307195");
  msg.set(CPRegType_73);
  Instrument_73.insert(CPRegType_73.getString());
  FIX::CapPrice CapPrice_73;
  CapPrice_73.setString("11302719");
  msg.set(CapPrice_73);
  Instrument_73.insert(CapPrice_73.getString());
  FIX::ContractMultiplier ContractMultiplier_73;
  ContractMultiplier_73.setString("19310215");
  msg.set(ContractMultiplier_73);
  Instrument_73.insert(ContractMultiplier_73.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_73(2);
  msg.set(ContractMultiplierUnit_73);
  Instrument_73.insert(ContractMultiplierUnit_73.getString());
  FIX::ContractSettlMonth ContractSettlMonth_73("MONTHYEAR_2027072578");
  msg.set(ContractSettlMonth_73);
  Instrument_73.insert(ContractSettlMonth_73.getString());
  FIX::CountryOfIssue CountryOfIssue_73("COUNTRY_1778203329");
  msg.set(CountryOfIssue_73);
  Instrument_73.insert(CountryOfIssue_73.getString());
  FIX::CouponPaymentDate CouponPaymentDate_73("LOCALMKTDATE_1482198696");
  msg.set(CouponPaymentDate_73);
  Instrument_73.insert(CouponPaymentDate_73.getString());
  FIX::CouponRate CouponRate_73;
  CouponRate_73.setString("34.180000");
  msg.set(CouponRate_73);
  Instrument_73.insert(CouponRate_73.getString());
  FIX::CreditRating CreditRating_73("STRING_1560784104");
  msg.set(CreditRating_73);
  Instrument_73.insert(CreditRating_73.getString());
  FIX::DatedDate DatedDate_73("LOCALMKTDATE_535223856");
  msg.set(DatedDate_73);
  Instrument_73.insert(DatedDate_73.getString());
  FIX::DetachmentPoint DetachmentPoint_73;
  DetachmentPoint_73.setString("26.630000");
  msg.set(DetachmentPoint_73);
  Instrument_73.insert(DetachmentPoint_73.getString());
  FIX::EncodedIssuer EncodedIssuer_73("DATA_1946801630");
  msg.set(EncodedIssuer_73);
  Instrument_73.insert(EncodedIssuer_73.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_73(1456428327);
  msg.set(EncodedIssuerLen_73);
  Instrument_73.insert(EncodedIssuerLen_73.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_73("DATA_527002706");
  msg.set(EncodedSecurityDesc_73);
  Instrument_73.insert(EncodedSecurityDesc_73.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_73(1440039659);
  msg.set(EncodedSecurityDescLen_73);
  Instrument_73.insert(EncodedSecurityDescLen_73.getString());
  FIX::ExerciseStyle ExerciseStyle_73(0);
  msg.set(ExerciseStyle_73);
  Instrument_73.insert(ExerciseStyle_73.getString());
  FIX::Factor Factor_73;
  Factor_73.setString("1717121");
  msg.set(Factor_73);
  Instrument_73.insert(Factor_73.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_73(true);
  msg.set(FlexProductEligibilityIndicator_73);
  Instrument_73.insert(FlexProductEligibilityIndicator_73.getString());
  FIX::FlexibleIndicator FlexibleIndicator_73(false);
  msg.set(FlexibleIndicator_73);
  Instrument_73.insert(FlexibleIndicator_73.getString());
  FIX::FloorPrice FloorPrice_73;
  FloorPrice_73.setString("9033145");
  msg.set(FloorPrice_73);
  Instrument_73.insert(FloorPrice_73.getString());
  FIX::FlowScheduleType FlowScheduleType_73(1);
  msg.set(FlowScheduleType_73);
  Instrument_73.insert(FlowScheduleType_73.getString());
  FIX::InstrRegistry InstrRegistry_73("STRING_990432150");
  msg.set(InstrRegistry_73);
  Instrument_73.insert(InstrRegistry_73.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_73('2');
  msg.set(InstrmtAssignmentMethod_73);
  Instrument_73.insert(InstrmtAssignmentMethod_73.getString());
  FIX::InterestAccrualDate InterestAccrualDate_73("LOCALMKTDATE_1963674007");
  msg.set(InterestAccrualDate_73);
  Instrument_73.insert(InterestAccrualDate_73.getString());
  FIX::IssueDate IssueDate_73("LOCALMKTDATE_1589949518");
  msg.set(IssueDate_73);
  Instrument_73.insert(IssueDate_73.getString());
  FIX::Issuer Issuer_73("STRING_1097540005");
  msg.set(Issuer_73);
  Instrument_73.insert(Issuer_73.getString());
  FIX::ListMethod ListMethod_73(1);
  msg.set(ListMethod_73);
  Instrument_73.insert(ListMethod_73.getString());
  FIX::LocaleOfIssue LocaleOfIssue_73("STRING_347255210");
  msg.set(LocaleOfIssue_73);
  Instrument_73.insert(LocaleOfIssue_73.getString());
  FIX::MaturityDate MaturityDate_73("LOCALMKTDATE_663831125");
  msg.set(MaturityDate_73);
  Instrument_73.insert(MaturityDate_73.getString());
  FIX::MaturityMonthYear MaturityMonthYear_73("MONTHYEAR_96247187");
  msg.set(MaturityMonthYear_73);
  Instrument_73.insert(MaturityMonthYear_73.getString());
  FIX::MaturityTime MaturityTime_73("TZTIMEONLY_241470236");
  msg.set(MaturityTime_73);
  Instrument_73.insert(MaturityTime_73.getString());
  FIX::MinPriceIncrement MinPriceIncrement_73;
  MinPriceIncrement_73.setString("9221383");
  msg.set(MinPriceIncrement_73);
  Instrument_73.insert(MinPriceIncrement_73.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_73;
  MinPriceIncrementAmount_73.setString("12265190");
  msg.set(MinPriceIncrementAmount_73);
  Instrument_73.insert(MinPriceIncrementAmount_73.getString());
  FIX::NTPositionLimit NTPositionLimit_73(25008173);
  msg.set(NTPositionLimit_73);
  Instrument_73.insert(NTPositionLimit_73.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_73;
  NotionalPercentageOutstanding_73.setString("75.310000");
  msg.set(NotionalPercentageOutstanding_73);
  Instrument_73.insert(NotionalPercentageOutstanding_73.getString());
  FIX::OptAttribute OptAttribute_73('1');
  msg.set(OptAttribute_73);
  Instrument_73.insert(OptAttribute_73.getString());
  FIX::OptPayoutAmount OptPayoutAmount_73;
  OptPayoutAmount_73.setString("18032115");
  msg.set(OptPayoutAmount_73);
  Instrument_73.insert(OptPayoutAmount_73.getString());
  FIX::OptPayoutType OptPayoutType_73(1);
  msg.set(OptPayoutType_73);
  Instrument_73.insert(OptPayoutType_73.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_73;
  OriginalNotionalPercentageOutstanding_73.setString("77.990000");
  msg.set(OriginalNotionalPercentageOutstanding_73);
  Instrument_73.insert(OriginalNotionalPercentageOutstanding_73.getString());
  FIX::Pool Pool_73("STRING_1216511958");
  msg.set(Pool_73);
  Instrument_73.insert(Pool_73.getString());
  FIX::PositionLimit PositionLimit_73(466876436);
  msg.set(PositionLimit_73);
  Instrument_73.insert(PositionLimit_73.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_73("STRING_INT");
  msg.set(PriceQuoteMethod_73);
  Instrument_73.insert(PriceQuoteMethod_73.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_73("STRING_1015829940");
  msg.set(PriceUnitOfMeasure_73);
  Instrument_73.insert(PriceUnitOfMeasure_73.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_73;
  PriceUnitOfMeasureQty_73.setString("19233047");
  msg.set(PriceUnitOfMeasureQty_73);
  Instrument_73.insert(PriceUnitOfMeasureQty_73.getString());
  FIX::Product Product_75(3);
  msg.set(Product_75);
  Instrument_73.insert(Product_75.getString());
  FIX::ProductComplex ProductComplex_73("STRING_308385952");
  msg.set(ProductComplex_73);
  Instrument_73.insert(ProductComplex_73.getString());
  FIX::PutOrCall PutOrCall_73(0);
  msg.set(PutOrCall_73);
  Instrument_73.insert(PutOrCall_73.getString());
  FIX::RedemptionDate RedemptionDate_73("LOCALMKTDATE_780371702");
  msg.set(RedemptionDate_73);
  Instrument_73.insert(RedemptionDate_73.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_73("STRING_496319058");
  msg.set(RepoCollateralSecurityType_73);
  Instrument_73.insert(RepoCollateralSecurityType_73.getString());
  FIX::RepurchaseRate RepurchaseRate_73;
  RepurchaseRate_73.setString("10.580000");
  msg.set(RepurchaseRate_73);
  Instrument_73.insert(RepurchaseRate_73.getString());
  FIX::RepurchaseTerm RepurchaseTerm_73(1683686245);
  msg.set(RepurchaseTerm_73);
  Instrument_73.insert(RepurchaseTerm_73.getString());
  FIX::RestructuringType RestructuringType_73("STRING_FR");
  msg.set(RestructuringType_73);
  Instrument_73.insert(RestructuringType_73.getString());
  FIX::SecurityDesc SecurityDesc_73("STRING_1291283208");
  msg.set(SecurityDesc_73);
  Instrument_73.insert(SecurityDesc_73.getString());
  FIX::SecurityExchange SecurityExchange_73("EXCHANGE_1982748550");
  msg.set(SecurityExchange_73);
  Instrument_73.insert(SecurityExchange_73.getString());
  FIX::SecurityGroup SecurityGroup_73("STRING_349844624");
  msg.set(SecurityGroup_73);
  Instrument_73.insert(SecurityGroup_73.getString());
  FIX::SecurityID SecurityID_73("STRING_733749078");
  msg.set(SecurityID_73);
  Instrument_73.insert(SecurityID_73.getString());
  FIX::SecurityIDSource SecurityIDSource_73("STRING_2");
  msg.set(SecurityIDSource_73);
  Instrument_73.insert(SecurityIDSource_73.getString());
  FIX::SecurityStatus SecurityStatus_73("STRING_2");
  msg.set(SecurityStatus_73);
  Instrument_73.insert(SecurityStatus_73.getString());
  FIX::SecuritySubType SecuritySubType_74("STRING_1081004289");
  msg.set(SecuritySubType_74);
  Instrument_73.insert(SecuritySubType_74.getString());
  FIX::SecurityType SecurityType_75("STRING_REV");
  msg.set(SecurityType_75);
  Instrument_73.insert(SecurityType_75.getString());
  FIX::Seniority Seniority_73("STRING_SR");
  msg.set(Seniority_73);
  Instrument_73.insert(Seniority_73.getString());
  FIX::SettlMethod SettlMethod_73('P');
  msg.set(SettlMethod_73);
  Instrument_73.insert(SettlMethod_73.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_73("STRING_371290704");
  msg.set(SettleOnOpenFlag_73);
  Instrument_73.insert(SettleOnOpenFlag_73.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_73("STRING_1496755947");
  msg.set(StateOrProvinceOfIssue_73);
  Instrument_73.insert(StateOrProvinceOfIssue_73.getString());
  FIX::StrikeCurrency StrikeCurrency_73("JPY");
  msg.set(StrikeCurrency_73);
  Instrument_73.insert(StrikeCurrency_73.getString());
  FIX::StrikeMultiplier StrikeMultiplier_73;
  StrikeMultiplier_73.setString("4553803");
  msg.set(StrikeMultiplier_73);
  Instrument_73.insert(StrikeMultiplier_73.getString());
  FIX::StrikePrice StrikePrice_73;
  StrikePrice_73.setString("10032105");
  msg.set(StrikePrice_73);
  Instrument_73.insert(StrikePrice_73.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_73(1);
  msg.set(StrikePriceBoundaryMethod_73);
  Instrument_73.insert(StrikePriceBoundaryMethod_73.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_73;
  StrikePriceBoundaryPrecision_73.setString("81.270000");
  msg.set(StrikePriceBoundaryPrecision_73);
  Instrument_73.insert(StrikePriceBoundaryPrecision_73.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_73(4);
  msg.set(StrikePriceDeterminationMethod_73);
  Instrument_73.insert(StrikePriceDeterminationMethod_73.getString());
  FIX::StrikeValue StrikeValue_73;
  StrikeValue_73.setString("13667572");
  msg.set(StrikeValue_73);
  Instrument_73.insert(StrikeValue_73.getString());
  FIX::Symbol Symbol_73("STRING_1536454942");
  msg.set(Symbol_73);
  Instrument_73.insert(Symbol_73.getString());
  FIX::SymbolSfx SymbolSfx_73("STRING_WI");
  msg.set(SymbolSfx_73);
  Instrument_73.insert(SymbolSfx_73.getString());
  FIX::TimeUnit TimeUnit_73("STRING_Yr");
  msg.set(TimeUnit_73);
  Instrument_73.insert(TimeUnit_73.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_73(4);
  msg.set(UnderlyingPriceDeterminationMethod_73);
  Instrument_73.insert(UnderlyingPriceDeterminationMethod_73.getString());
  FIX::UnitOfMeasure UnitOfMeasure_73("STRING_Gal");
  msg.set(UnitOfMeasure_73);
  Instrument_73.insert(UnitOfMeasure_73.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_73;
  UnitOfMeasureQty_73.setString("1001960");
  msg.set(UnitOfMeasureQty_73);
  Instrument_73.insert(UnitOfMeasureQty_73.getString());
  FIX::ValuationMethod ValuationMethod_73("STRING_FUTDA");
  msg.set(ValuationMethod_73);
  Instrument_73.insert(ValuationMethod_73.getString());
  all_values.push_back(Instrument_73);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_152;
    FIX::ComplexEventCondition ComplexEventCondition_152(2);
    noComplexEvents_0_0.set(ComplexEventCondition_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventCondition_152.getString());
    FIX::ComplexEventPrice ComplexEventPrice_152;
    ComplexEventPrice_152.setString("3142051");
    noComplexEvents_0_0.set(ComplexEventPrice_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPrice_152.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_152(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceBoundaryMethod_152.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_152;
    ComplexEventPriceBoundaryPrecision_152.setString("3.630000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceBoundaryPrecision_152.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_152(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceTimeType_152.getString());
    FIX::ComplexEventType ComplexEventType_152(5);
    noComplexEvents_0_0.set(ComplexEventType_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexEventType_152.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_152;
    ComplexOptPayoutAmount_152.setString("2785957");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_152);
    ComplexEvents_NoComplexEvents_152.insert(ComplexOptPayoutAmount_152.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_152);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_309;
      FIX::ComplexEventEndDate ComplexEventEndDate_309(FIX::UTCTIMESTAMP(11, 48, 44, 8, 1, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_309);
      ComplexEventDates_NoComplexEventDates_309.insert(ComplexEventEndDate_309.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_309(FIX::UTCTIMESTAMP(16, 12, 2, 24, 8, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_309);
      ComplexEventDates_NoComplexEventDates_309.insert(ComplexEventStartDate_309.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_309);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_628;
        FIX::ComplexEventEndTime ComplexEventEndTime_628(FIX::UTCTIMEONLY(21, 6, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_628);
        ComplexEventTimes_NoComplexEventTimes_628.insert(ComplexEventEndTime_628.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_628(FIX::UTCTIMEONLY(3, 57, 2));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_628);
        ComplexEventTimes_NoComplexEventTimes_628.insert(ComplexEventStartTime_628.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_628);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_310;
      FIX::ComplexEventEndDate ComplexEventEndDate_310(FIX::UTCTIMESTAMP(3, 53, 13, 19, 4, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_310);
      ComplexEventDates_NoComplexEventDates_310.insert(ComplexEventEndDate_310.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_310(FIX::UTCTIMESTAMP(23, 42, 51, 19, 3, 2009));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_310);
      ComplexEventDates_NoComplexEventDates_310.insert(ComplexEventStartDate_310.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_310);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_629;
        FIX::ComplexEventEndTime ComplexEventEndTime_629(FIX::UTCTIMEONLY(0, 26, 15));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_629);
        ComplexEventTimes_NoComplexEventTimes_629.insert(ComplexEventEndTime_629.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_629(FIX::UTCTIMEONLY(10, 12, 39));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_629);
        ComplexEventTimes_NoComplexEventTimes_629.insert(ComplexEventStartTime_629.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_629);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_630;
        FIX::ComplexEventEndTime ComplexEventEndTime_630(FIX::UTCTIMEONLY(9, 37, 4));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_630);
        ComplexEventTimes_NoComplexEventTimes_630.insert(ComplexEventEndTime_630.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_630(FIX::UTCTIMEONLY(16, 1, 12));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_630);
        ComplexEventTimes_NoComplexEventTimes_630.insert(ComplexEventStartTime_630.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_630);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_311;
      FIX::ComplexEventEndDate ComplexEventEndDate_311(FIX::UTCTIMESTAMP(17, 57, 4, 24, 6, 2017));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_311);
      ComplexEventDates_NoComplexEventDates_311.insert(ComplexEventEndDate_311.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_311(FIX::UTCTIMESTAMP(16, 6, 34, 15, 1, 2006));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_311);
      ComplexEventDates_NoComplexEventDates_311.insert(ComplexEventStartDate_311.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_311);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_631;
        FIX::ComplexEventEndTime ComplexEventEndTime_631(FIX::UTCTIMEONLY(6, 44, 20));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_631);
        ComplexEventTimes_NoComplexEventTimes_631.insert(ComplexEventEndTime_631.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_631(FIX::UTCTIMEONLY(18, 32, 37));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_631);
        ComplexEventTimes_NoComplexEventTimes_631.insert(ComplexEventStartTime_631.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_631);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_632;
        FIX::ComplexEventEndTime ComplexEventEndTime_632(FIX::UTCTIMEONLY(10, 15, 21));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_632);
        ComplexEventTimes_NoComplexEventTimes_632.insert(ComplexEventEndTime_632.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_632(FIX::UTCTIMEONLY(7, 23, 0));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_632);
        ComplexEventTimes_NoComplexEventTimes_632.insert(ComplexEventStartTime_632.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_632);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_633;
        FIX::ComplexEventEndTime ComplexEventEndTime_633(FIX::UTCTIMEONLY(4, 50, 42));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_633);
        ComplexEventTimes_NoComplexEventTimes_633.insert(ComplexEventEndTime_633.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_633(FIX::UTCTIMEONLY(19, 57, 24));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_633);
        ComplexEventTimes_NoComplexEventTimes_633.insert(ComplexEventStartTime_633.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_633);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_153;
    FIX::ComplexEventCondition ComplexEventCondition_153(2);
    noComplexEvents_0_1.set(ComplexEventCondition_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventCondition_153.getString());
    FIX::ComplexEventPrice ComplexEventPrice_153;
    ComplexEventPrice_153.setString("20960826");
    noComplexEvents_0_1.set(ComplexEventPrice_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventPrice_153.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_153(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceBoundaryMethod_153.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_153;
    ComplexEventPriceBoundaryPrecision_153.setString("86.540000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceBoundaryPrecision_153.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_153(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceTimeType_153.getString());
    FIX::ComplexEventType ComplexEventType_153(3);
    noComplexEvents_0_1.set(ComplexEventType_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventType_153.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_153;
    ComplexOptPayoutAmount_153.setString("7621724");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexOptPayoutAmount_153.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_153);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_312;
      FIX::ComplexEventEndDate ComplexEventEndDate_312(FIX::UTCTIMESTAMP(19, 29, 12, 13, 6, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_312);
      ComplexEventDates_NoComplexEventDates_312.insert(ComplexEventEndDate_312.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_312(FIX::UTCTIMESTAMP(3, 57, 8, 15, 9, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_312);
      ComplexEventDates_NoComplexEventDates_312.insert(ComplexEventStartDate_312.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_312);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_634;
        FIX::ComplexEventEndTime ComplexEventEndTime_634(FIX::UTCTIMEONLY(3, 18, 56));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_634);
        ComplexEventTimes_NoComplexEventTimes_634.insert(ComplexEventEndTime_634.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_634(FIX::UTCTIMEONLY(17, 54, 44));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_634);
        ComplexEventTimes_NoComplexEventTimes_634.insert(ComplexEventStartTime_634.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_634);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_635;
        FIX::ComplexEventEndTime ComplexEventEndTime_635(FIX::UTCTIMEONLY(13, 34, 2));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_635);
        ComplexEventTimes_NoComplexEventTimes_635.insert(ComplexEventEndTime_635.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_635(FIX::UTCTIMEONLY(11, 13, 46));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_635);
        ComplexEventTimes_NoComplexEventTimes_635.insert(ComplexEventStartTime_635.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_635);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_154;
    FIX::ComplexEventCondition ComplexEventCondition_154(2);
    noComplexEvents_0_2.set(ComplexEventCondition_154);
    ComplexEvents_NoComplexEvents_154.insert(ComplexEventCondition_154.getString());
    FIX::ComplexEventPrice ComplexEventPrice_154;
    ComplexEventPrice_154.setString("17156413");
    noComplexEvents_0_2.set(ComplexEventPrice_154);
    ComplexEvents_NoComplexEvents_154.insert(ComplexEventPrice_154.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_154(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_154);
    ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceBoundaryMethod_154.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_154;
    ComplexEventPriceBoundaryPrecision_154.setString("62.780000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_154);
    ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceBoundaryPrecision_154.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_154(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_154);
    ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceTimeType_154.getString());
    FIX::ComplexEventType ComplexEventType_154(5);
    noComplexEvents_0_2.set(ComplexEventType_154);
    ComplexEvents_NoComplexEvents_154.insert(ComplexEventType_154.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_154;
    ComplexOptPayoutAmount_154.setString("370331");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_154);
    ComplexEvents_NoComplexEvents_154.insert(ComplexOptPayoutAmount_154.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_154);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_313;
      FIX::ComplexEventEndDate ComplexEventEndDate_313(FIX::UTCTIMESTAMP(17, 2, 8, 9, 2, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_313);
      ComplexEventDates_NoComplexEventDates_313.insert(ComplexEventEndDate_313.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_313(FIX::UTCTIMESTAMP(5, 38, 24, 9, 12, 2004));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_313);
      ComplexEventDates_NoComplexEventDates_313.insert(ComplexEventStartDate_313.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_313);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_636;
        FIX::ComplexEventEndTime ComplexEventEndTime_636(FIX::UTCTIMEONLY(16, 27, 49));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_636);
        ComplexEventTimes_NoComplexEventTimes_636.insert(ComplexEventEndTime_636.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_636(FIX::UTCTIMEONLY(14, 54, 8));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_636);
        ComplexEventTimes_NoComplexEventTimes_636.insert(ComplexEventStartTime_636.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_636);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_637;
        FIX::ComplexEventEndTime ComplexEventEndTime_637(FIX::UTCTIMEONLY(19, 15, 50));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_637);
        ComplexEventTimes_NoComplexEventTimes_637.insert(ComplexEventEndTime_637.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_637(FIX::UTCTIMEONLY(16, 22, 11));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_637);
        ComplexEventTimes_NoComplexEventTimes_637.insert(ComplexEventStartTime_637.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_637);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_314;
      FIX::ComplexEventEndDate ComplexEventEndDate_314(FIX::UTCTIMESTAMP(19, 13, 49, 4, 4, 2011));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_314);
      ComplexEventDates_NoComplexEventDates_314.insert(ComplexEventEndDate_314.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_314(FIX::UTCTIMESTAMP(0, 47, 33, 21, 11, 2017));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_314);
      ComplexEventDates_NoComplexEventDates_314.insert(ComplexEventStartDate_314.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_314);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_638;
        FIX::ComplexEventEndTime ComplexEventEndTime_638(FIX::UTCTIMEONLY(3, 13, 10));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_638);
        ComplexEventTimes_NoComplexEventTimes_638.insert(ComplexEventEndTime_638.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_638(FIX::UTCTIMEONLY(20, 4, 57));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_638);
        ComplexEventTimes_NoComplexEventTimes_638.insert(ComplexEventStartTime_638.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_638);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_639;
        FIX::ComplexEventEndTime ComplexEventEndTime_639(FIX::UTCTIMEONLY(12, 12, 54));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_639);
        ComplexEventTimes_NoComplexEventTimes_639.insert(ComplexEventEndTime_639.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_639(FIX::UTCTIMEONLY(21, 16, 13));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_639);
        ComplexEventTimes_NoComplexEventTimes_639.insert(ComplexEventStartTime_639.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_639);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_148;
    FIX::EventDate EventDate_148("LOCALMKTDATE_112303431");
    noEvents_0_0.set(EventDate_148);
    EvntGrp_NoEvents_148.insert(EventDate_148.getString());
    FIX::EventPx EventPx_148;
    EventPx_148.setString("8438550");
    noEvents_0_0.set(EventPx_148);
    EvntGrp_NoEvents_148.insert(EventPx_148.getString());
    FIX::EventText EventText_148("STRING_468870051");
    noEvents_0_0.set(EventText_148);
    EvntGrp_NoEvents_148.insert(EventText_148.getString());
    FIX::EventTime EventTime_148(FIX::UTCTIMESTAMP(10, 0, 56, 22, 12, 2005));
    noEvents_0_0.set(EventTime_148);
    EvntGrp_NoEvents_148.insert(EventTime_148.getString());
    FIX::EventType EventType_148(99);
    noEvents_0_0.set(EventType_148);
    EvntGrp_NoEvents_148.insert(EventType_148.getString());
    all_values.push_back(EvntGrp_NoEvents_148);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_149;
    FIX::EventDate EventDate_149("LOCALMKTDATE_472008913");
    noEvents_0_1.set(EventDate_149);
    EvntGrp_NoEvents_149.insert(EventDate_149.getString());
    FIX::EventPx EventPx_149;
    EventPx_149.setString("19165492");
    noEvents_0_1.set(EventPx_149);
    EvntGrp_NoEvents_149.insert(EventPx_149.getString());
    FIX::EventText EventText_149("STRING_182352957");
    noEvents_0_1.set(EventText_149);
    EvntGrp_NoEvents_149.insert(EventText_149.getString());
    FIX::EventTime EventTime_149(FIX::UTCTIMESTAMP(0, 10, 44, 5, 11, 2000));
    noEvents_0_1.set(EventTime_149);
    EvntGrp_NoEvents_149.insert(EventTime_149.getString());
    FIX::EventType EventType_149(3);
    noEvents_0_1.set(EventType_149);
    EvntGrp_NoEvents_149.insert(EventType_149.getString());
    all_values.push_back(EvntGrp_NoEvents_149);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_151;
    FIX::InstrumentPartyID InstrumentPartyID_151("STRING_860123500");
    noInstrumentParties_0_0.set(InstrumentPartyID_151);
    InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyID_151.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_151('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_151);
    InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyIDSource_151.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_151(1050052580);
    noInstrumentParties_0_0.set(InstrumentPartyRole_151);
    InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyRole_151.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_151);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295;
      FIX::InstrumentPartySubID InstrumentPartySubID_295("STRING_746426427");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_295);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295.insert(InstrumentPartySubID_295.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_295(833339368);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_295);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295.insert(InstrumentPartySubIDType_295.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_152;
    FIX::InstrumentPartyID InstrumentPartyID_152("STRING_1249694808");
    noInstrumentParties_0_1.set(InstrumentPartyID_152);
    InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyID_152.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_152('5');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_152);
    InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyIDSource_152.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_152(945642799);
    noInstrumentParties_0_1.set(InstrumentPartyRole_152);
    InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyRole_152.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_152);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296;
      FIX::InstrumentPartySubID InstrumentPartySubID_296("STRING_1042789400");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_296);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296.insert(InstrumentPartySubID_296.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_296(1069759799);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_296);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296.insert(InstrumentPartySubIDType_296.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297;
      FIX::InstrumentPartySubID InstrumentPartySubID_297("STRING_2032153737");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_297);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297.insert(InstrumentPartySubID_297.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_297(1360036460);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_297);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297.insert(InstrumentPartySubIDType_297.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_153;
    FIX::InstrumentPartyID InstrumentPartyID_153("STRING_2071086055");
    noInstrumentParties_0_2.set(InstrumentPartyID_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyID_153.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_153('6');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyIDSource_153.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_153(653988959);
    noInstrumentParties_0_2.set(InstrumentPartyRole_153);
    InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyRole_153.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_153);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298;
      FIX::InstrumentPartySubID InstrumentPartySubID_298("STRING_282369566");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_298);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298.insert(InstrumentPartySubID_298.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_298(1125997872);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_298);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298.insert(InstrumentPartySubIDType_298.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299;
      FIX::InstrumentPartySubID InstrumentPartySubID_299("STRING_1391073132");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_299);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299.insert(InstrumentPartySubID_299.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_299(464722523);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_299);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299.insert(InstrumentPartySubIDType_299.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_135;
    FIX::SecurityAltID SecurityAltID_135("STRING_549143068");
    noSecurityAltID_0_0.set(SecurityAltID_135);
    SecAltIDGrp_NoSecurityAltID_135.insert(SecurityAltID_135.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_135("STRING_232584445");
    noSecurityAltID_0_0.set(SecurityAltIDSource_135);
    SecAltIDGrp_NoSecurityAltID_135.insert(SecurityAltIDSource_135.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_135);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_136;
    FIX::SecurityAltID SecurityAltID_136("STRING_25412602");
    noSecurityAltID_0_1.set(SecurityAltID_136);
    SecAltIDGrp_NoSecurityAltID_136.insert(SecurityAltID_136.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_136("STRING_271420353");
    noSecurityAltID_0_1.set(SecurityAltIDSource_136);
    SecAltIDGrp_NoSecurityAltID_136.insert(SecurityAltIDSource_136.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_136);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_146;
  FIX::SecurityXML SecurityXML_147("XMLDATA_1664888028");
  msg.set(SecurityXML_147);
  FIX::SecurityXMLLen SecurityXMLLen_73(900072131);
  msg.set(SecurityXMLLen_73);
  FIX::SecurityXMLSchema SecurityXMLSchema_73("STRING_699192395");
  msg.set(SecurityXMLSchema_73);
  SecurityXML_146.insert(SecurityXMLSchema_73.getString());
  all_values.push_back(SecurityXML_146);
  all_compo_names.insert("SecurityXML");

  // LegQuotStatGrp
  // Group LegQuotStatGrp.NoLegs
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_0;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_0;
    FIX::LegOrderQty LegOrderQty_17;
    LegOrderQty_17.setString("17601956");
    noLegs_0_0.set(LegOrderQty_17);
    LegQuotStatGrp_NoLegs_0.insert(LegOrderQty_17.getString());
    FIX::LegQty LegQty_17;
    LegQty_17.setString("4801956");
    noLegs_0_0.set(LegQty_17);
    LegQuotStatGrp_NoLegs_0.insert(LegQty_17.getString());
    FIX::LegSettlDate LegSettlDate_17("LOCALMKTDATE_1113680787");
    noLegs_0_0.set(LegSettlDate_17);
    LegQuotStatGrp_NoLegs_0.insert(LegSettlDate_17.getString());
    FIX::LegSettlType LegSettlType_17('1');
    noLegs_0_0.set(LegSettlType_17);
    LegQuotStatGrp_NoLegs_0.insert(LegSettlType_17.getString());
    FIX::LegSwapType LegSwapType_17(2);
    noLegs_0_0.set(LegSwapType_17);
    LegQuotStatGrp_NoLegs_0.insert(LegSwapType_17.getString());
    all_values.push_back(LegQuotStatGrp_NoLegs_0);
    all_compo_names.insert("LegQuotStatGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_116;
    FIX::EncodedLegIssuer EncodedLegIssuer_116("DATA_1947020155");
    noLegs_0_0.set(EncodedLegIssuer_116);
    InstrumentLeg_116.insert(EncodedLegIssuer_116.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_116(271737666);
    noLegs_0_0.set(EncodedLegIssuerLen_116);
    InstrumentLeg_116.insert(EncodedLegIssuerLen_116.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_116("DATA_1800541419");
    noLegs_0_0.set(EncodedLegSecurityDesc_116);
    InstrumentLeg_116.insert(EncodedLegSecurityDesc_116.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_116(745179307);
    noLegs_0_0.set(EncodedLegSecurityDescLen_116);
    InstrumentLeg_116.insert(EncodedLegSecurityDescLen_116.getString());
    FIX::LegCFICode LegCFICode_116("STRING_217803905");
    noLegs_0_0.set(LegCFICode_116);
    InstrumentLeg_116.insert(LegCFICode_116.getString());
    FIX::LegContractMultiplier LegContractMultiplier_116;
    LegContractMultiplier_116.setString("6958471");
    noLegs_0_0.set(LegContractMultiplier_116);
    InstrumentLeg_116.insert(LegContractMultiplier_116.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_116(1814939106);
    noLegs_0_0.set(LegContractMultiplierUnit_116);
    InstrumentLeg_116.insert(LegContractMultiplierUnit_116.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_116("MONTHYEAR_102473994");
    noLegs_0_0.set(LegContractSettlMonth_116);
    InstrumentLeg_116.insert(LegContractSettlMonth_116.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_116("COUNTRY_2055883632");
    noLegs_0_0.set(LegCountryOfIssue_116);
    InstrumentLeg_116.insert(LegCountryOfIssue_116.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_116("LOCALMKTDATE_1738541513");
    noLegs_0_0.set(LegCouponPaymentDate_116);
    InstrumentLeg_116.insert(LegCouponPaymentDate_116.getString());
    FIX::LegCouponRate LegCouponRate_116;
    LegCouponRate_116.setString("69.490000");
    noLegs_0_0.set(LegCouponRate_116);
    InstrumentLeg_116.insert(LegCouponRate_116.getString());
    FIX::LegCreditRating LegCreditRating_116("STRING_562388943");
    noLegs_0_0.set(LegCreditRating_116);
    InstrumentLeg_116.insert(LegCreditRating_116.getString());
    FIX::LegCurrency LegCurrency_116("CAN");
    noLegs_0_0.set(LegCurrency_116);
    InstrumentLeg_116.insert(LegCurrency_116.getString());
    FIX::LegDatedDate LegDatedDate_116("LOCALMKTDATE_1688386816");
    noLegs_0_0.set(LegDatedDate_116);
    InstrumentLeg_116.insert(LegDatedDate_116.getString());
    FIX::LegExerciseStyle LegExerciseStyle_116(456654845);
    noLegs_0_0.set(LegExerciseStyle_116);
    InstrumentLeg_116.insert(LegExerciseStyle_116.getString());
    FIX::LegFactor LegFactor_116;
    LegFactor_116.setString("14766890");
    noLegs_0_0.set(LegFactor_116);
    InstrumentLeg_116.insert(LegFactor_116.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_116(1119071634);
    noLegs_0_0.set(LegFlowScheduleType_116);
    InstrumentLeg_116.insert(LegFlowScheduleType_116.getString());
    FIX::LegInstrRegistry LegInstrRegistry_116("STRING_1005797914");
    noLegs_0_0.set(LegInstrRegistry_116);
    InstrumentLeg_116.insert(LegInstrRegistry_116.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_116("LOCALMKTDATE_1709273483");
    noLegs_0_0.set(LegInterestAccrualDate_116);
    InstrumentLeg_116.insert(LegInterestAccrualDate_116.getString());
    FIX::LegIssueDate LegIssueDate_116("LOCALMKTDATE_1144484237");
    noLegs_0_0.set(LegIssueDate_116);
    InstrumentLeg_116.insert(LegIssueDate_116.getString());
    FIX::LegIssuer LegIssuer_116("STRING_1277218267");
    noLegs_0_0.set(LegIssuer_116);
    InstrumentLeg_116.insert(LegIssuer_116.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_116("STRING_1226677863");
    noLegs_0_0.set(LegLocaleOfIssue_116);
    InstrumentLeg_116.insert(LegLocaleOfIssue_116.getString());
    FIX::LegMaturityDate LegMaturityDate_116("LOCALMKTDATE_2044556368");
    noLegs_0_0.set(LegMaturityDate_116);
    InstrumentLeg_116.insert(LegMaturityDate_116.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_116("MONTHYEAR_1976410663");
    noLegs_0_0.set(LegMaturityMonthYear_116);
    InstrumentLeg_116.insert(LegMaturityMonthYear_116.getString());
    FIX::LegMaturityTime LegMaturityTime_116("TZTIMEONLY_1290306070");
    noLegs_0_0.set(LegMaturityTime_116);
    InstrumentLeg_116.insert(LegMaturityTime_116.getString());
    FIX::LegOptAttribute LegOptAttribute_116('1');
    noLegs_0_0.set(LegOptAttribute_116);
    InstrumentLeg_116.insert(LegOptAttribute_116.getString());
    FIX::LegOptionRatio LegOptionRatio_116;
    LegOptionRatio_116.setString("3091226");
    noLegs_0_0.set(LegOptionRatio_116);
    InstrumentLeg_116.insert(LegOptionRatio_116.getString());
    FIX::LegPool LegPool_116("STRING_256503209");
    noLegs_0_0.set(LegPool_116);
    InstrumentLeg_116.insert(LegPool_116.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_116("STRING_679311209");
    noLegs_0_0.set(LegPriceUnitOfMeasure_116);
    InstrumentLeg_116.insert(LegPriceUnitOfMeasure_116.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_116;
    LegPriceUnitOfMeasureQty_116.setString("15357447");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_116);
    InstrumentLeg_116.insert(LegPriceUnitOfMeasureQty_116.getString());
    FIX::LegProduct LegProduct_116(56039716);
    noLegs_0_0.set(LegProduct_116);
    InstrumentLeg_116.insert(LegProduct_116.getString());
    FIX::LegPutOrCall LegPutOrCall_116(951048875);
    noLegs_0_0.set(LegPutOrCall_116);
    InstrumentLeg_116.insert(LegPutOrCall_116.getString());
    FIX::LegRatioQty LegRatioQty_116;
    LegRatioQty_116.setString("11888024");
    noLegs_0_0.set(LegRatioQty_116);
    InstrumentLeg_116.insert(LegRatioQty_116.getString());
    FIX::LegRedemptionDate LegRedemptionDate_116("LOCALMKTDATE_801219023");
    noLegs_0_0.set(LegRedemptionDate_116);
    InstrumentLeg_116.insert(LegRedemptionDate_116.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_116("STRING_1168852780");
    noLegs_0_0.set(LegRepoCollateralSecurityType_116);
    InstrumentLeg_116.insert(LegRepoCollateralSecurityType_116.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_116;
    LegRepurchaseRate_116.setString("96.690000");
    noLegs_0_0.set(LegRepurchaseRate_116);
    InstrumentLeg_116.insert(LegRepurchaseRate_116.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_116(468674481);
    noLegs_0_0.set(LegRepurchaseTerm_116);
    InstrumentLeg_116.insert(LegRepurchaseTerm_116.getString());
    FIX::LegSecurityDesc LegSecurityDesc_116("STRING_1271326774");
    noLegs_0_0.set(LegSecurityDesc_116);
    InstrumentLeg_116.insert(LegSecurityDesc_116.getString());
    FIX::LegSecurityExchange LegSecurityExchange_116("EXCHANGE_1793049653");
    noLegs_0_0.set(LegSecurityExchange_116);
    InstrumentLeg_116.insert(LegSecurityExchange_116.getString());
    FIX::LegSecurityID LegSecurityID_116("STRING_59732346");
    noLegs_0_0.set(LegSecurityID_116);
    InstrumentLeg_116.insert(LegSecurityID_116.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_116("STRING_2000923723");
    noLegs_0_0.set(LegSecurityIDSource_116);
    InstrumentLeg_116.insert(LegSecurityIDSource_116.getString());
    FIX::LegSecuritySubType LegSecuritySubType_116("STRING_207954948");
    noLegs_0_0.set(LegSecuritySubType_116);
    InstrumentLeg_116.insert(LegSecuritySubType_116.getString());
    FIX::LegSecurityType LegSecurityType_116("STRING_1272797707");
    noLegs_0_0.set(LegSecurityType_116);
    InstrumentLeg_116.insert(LegSecurityType_116.getString());
    FIX::LegSide LegSide_116('8');
    noLegs_0_0.set(LegSide_116);
    InstrumentLeg_116.insert(LegSide_116.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_116("STRING_1896341764");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_116);
    InstrumentLeg_116.insert(LegStateOrProvinceOfIssue_116.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_116("USD");
    noLegs_0_0.set(LegStrikeCurrency_116);
    InstrumentLeg_116.insert(LegStrikeCurrency_116.getString());
    FIX::LegStrikePrice LegStrikePrice_116;
    LegStrikePrice_116.setString("8679297");
    noLegs_0_0.set(LegStrikePrice_116);
    InstrumentLeg_116.insert(LegStrikePrice_116.getString());
    FIX::LegSymbol LegSymbol_116("STRING_587766819");
    noLegs_0_0.set(LegSymbol_116);
    InstrumentLeg_116.insert(LegSymbol_116.getString());
    FIX::LegSymbolSfx LegSymbolSfx_116("STRING_1903885464");
    noLegs_0_0.set(LegSymbolSfx_116);
    InstrumentLeg_116.insert(LegSymbolSfx_116.getString());
    FIX::LegTimeUnit LegTimeUnit_116("STRING_2012413988");
    noLegs_0_0.set(LegTimeUnit_116);
    InstrumentLeg_116.insert(LegTimeUnit_116.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_116("STRING_1864985086");
    noLegs_0_0.set(LegUnitOfMeasure_116);
    InstrumentLeg_116.insert(LegUnitOfMeasure_116.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_116;
    LegUnitOfMeasureQty_116.setString("9830796");
    noLegs_0_0.set(LegUnitOfMeasureQty_116);
    InstrumentLeg_116.insert(LegUnitOfMeasureQty_116.getString());
    all_values.push_back(InstrumentLeg_116);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_235;
      FIX::LegSecurityAltID LegSecurityAltID_235("STRING_1693912101");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_235);
      LegSecAltIDGrp_NoLegSecurityAltID_235.insert(LegSecurityAltID_235.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_235("STRING_125902101");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_235);
      LegSecAltIDGrp_NoLegSecurityAltID_235.insert(LegSecurityAltIDSource_235.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_235);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_236;
      FIX::LegSecurityAltID LegSecurityAltID_236("STRING_1419271411");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_236);
      LegSecAltIDGrp_NoLegSecurityAltID_236.insert(LegSecurityAltID_236.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_236("STRING_2003034758");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_236);
      LegSecAltIDGrp_NoLegSecurityAltID_236.insert(LegSecurityAltIDSource_236.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_236);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_41;
      FIX::LegStipulationType LegStipulationType_41("STRING_2098582621");
      noLegStipulations_0_1_0.set(LegStipulationType_41);
      LegStipulations_NoLegStipulations_41.insert(LegStipulationType_41.getString());
      FIX::LegStipulationValue LegStipulationValue_41("STRING_1391295837");
      noLegStipulations_0_1_0.set(LegStipulationValue_41);
      LegStipulations_NoLegStipulations_41.insert(LegStipulationValue_41.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_41);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_42;
      FIX::LegStipulationType LegStipulationType_42("STRING_438445027");
      noLegStipulations_0_1_1.set(LegStipulationType_42);
      LegStipulations_NoLegStipulations_42.insert(LegStipulationType_42.getString());
      FIX::LegStipulationValue LegStipulationValue_42("STRING_902147848");
      noLegStipulations_0_1_1.set(LegStipulationValue_42);
      LegStipulations_NoLegStipulations_42.insert(LegStipulationValue_42.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_42);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_43;
      FIX::LegStipulationType LegStipulationType_43("STRING_432614686");
      noLegStipulations_0_1_2.set(LegStipulationType_43);
      LegStipulations_NoLegStipulations_43.insert(LegStipulationType_43.getString());
      FIX::LegStipulationValue LegStipulationValue_43("STRING_1239664050");
      noLegStipulations_0_1_2.set(LegStipulationValue_43);
      LegStipulations_NoLegStipulations_43.insert(LegStipulationValue_43.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_43);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_122;
      FIX::NestedPartyID NestedPartyID_122("STRING_169780707");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyID_122.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_122('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyIDSource_122.getString());
      FIX::NestedPartyRole NestedPartyRole_122(1194843755);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyRole_122.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_122);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_262;
        FIX::NestedPartySubID NestedPartySubID_262("STRING_1768070878");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_262);
        NstdPtysSubGrp_NoNestedPartySubIDs_262.insert(NestedPartySubID_262.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_262(1048283831);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_262);
        NstdPtysSubGrp_NoNestedPartySubIDs_262.insert(NestedPartySubIDType_262.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_262);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_263;
        FIX::NestedPartySubID NestedPartySubID_263("STRING_23301661");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_263);
        NstdPtysSubGrp_NoNestedPartySubIDs_263.insert(NestedPartySubID_263.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_263(893384938);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_263);
        NstdPtysSubGrp_NoNestedPartySubIDs_263.insert(NestedPartySubIDType_263.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_263);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_264;
        FIX::NestedPartySubID NestedPartySubID_264("STRING_1913690421");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_264);
        NstdPtysSubGrp_NoNestedPartySubIDs_264.insert(NestedPartySubID_264.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_264(1919643425);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_264);
        NstdPtysSubGrp_NoNestedPartySubIDs_264.insert(NestedPartySubIDType_264.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_264);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_24;
  FIX::CashOrderQty CashOrderQty_24;
  CashOrderQty_24.setString("4753538");
  msg.set(CashOrderQty_24);
  OrderQtyData_24.insert(CashOrderQty_24.getString());
  FIX::OrderPercent OrderPercent_24;
  OrderPercent_24.setString("24.020000");
  msg.set(OrderPercent_24);
  OrderQtyData_24.insert(OrderPercent_24.getString());
  FIX::OrderQty OrderQty_34;
  OrderQty_34.setString("6400895");
  msg.set(OrderQty_34);
  OrderQtyData_24.insert(OrderQty_34.getString());
  FIX::RoundingDirection RoundingDirection_24('0');
  msg.set(RoundingDirection_24);
  OrderQtyData_24.insert(RoundingDirection_24.getString());
  FIX::RoundingModulus RoundingModulus_24;
  RoundingModulus_24.setString("18647042");
  msg.set(RoundingModulus_24);
  OrderQtyData_24.insert(RoundingModulus_24.getString());
  all_values.push_back(OrderQtyData_24);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_116;
    FIX::PartyID PartyID_116("STRING_780622100");
    noPartyIDs_0_0.set(PartyID_116);
    Parties_NoPartyIDs_116.insert(PartyID_116.getString());
    FIX::PartyIDSource PartyIDSource_116('3');
    noPartyIDs_0_0.set(PartyIDSource_116);
    Parties_NoPartyIDs_116.insert(PartyIDSource_116.getString());
    FIX::PartyRole PartyRole_116(34);
    noPartyIDs_0_0.set(PartyRole_116);
    Parties_NoPartyIDs_116.insert(PartyRole_116.getString());
    all_values.push_back(Parties_NoPartyIDs_116);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_256;
      FIX::PartySubID PartySubID_256("STRING_826202351");
      noPartySubIDs_0_1_0.set(PartySubID_256);
      PtysSubGrp_NoPartySubIDs_256.insert(PartySubID_256.getString());
      FIX::PartySubIDType PartySubIDType_256(17);
      noPartySubIDs_0_1_0.set(PartySubIDType_256);
      PtysSubGrp_NoPartySubIDs_256.insert(PartySubIDType_256.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_256);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_257;
      FIX::PartySubID PartySubID_257("STRING_182601664");
      noPartySubIDs_0_1_1.set(PartySubID_257);
      PtysSubGrp_NoPartySubIDs_257.insert(PartySubID_257.getString());
      FIX::PartySubIDType PartySubIDType_257(20);
      noPartySubIDs_0_1_1.set(PartySubIDType_257);
      PtysSubGrp_NoPartySubIDs_257.insert(PartySubIDType_257.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_257);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_6;
    FIX::QuoteQualifier QuoteQualifier_6('1');
    noQuoteQualifiers_0_0.set(QuoteQualifier_6);
    QuotQualGrp_NoQuoteQualifiers_6.insert(QuoteQualifier_6.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_6);
    all_compo_names.insert("QuotQualGrp.NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_26;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_26("CAN");
  msg.set(BenchmarkCurveCurrency_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurveCurrency_26.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_26("STRING_EONIA");
  msg.set(BenchmarkCurveName_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurveName_26.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_26("STRING_739233091");
  msg.set(BenchmarkCurvePoint_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkCurvePoint_26.getString());
  FIX::BenchmarkPrice BenchmarkPrice_26;
  BenchmarkPrice_26.setString("3155744");
  msg.set(BenchmarkPrice_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkPrice_26.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_26(28809247);
  msg.set(BenchmarkPriceType_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkPriceType_26.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_26("STRING_300087975");
  msg.set(BenchmarkSecurityID_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkSecurityID_26.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_26("STRING_1510418250");
  msg.set(BenchmarkSecurityIDSource_26);
  SpreadOrBenchmarkCurveData_26.insert(BenchmarkSecurityIDSource_26.getString());
  FIX::Spread Spread_26;
  Spread_26.setString("19916396");
  msg.set(Spread_26);
  SpreadOrBenchmarkCurveData_26.insert(Spread_26.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_26);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_44;
    FIX::StipulationType StipulationType_44("STRING_PXSOURCE");
    noStipulations_0_0.set(StipulationType_44);
    Stipulations_NoStipulations_44.insert(StipulationType_44.getString());
    FIX::StipulationValue StipulationValue_44("STRING_2014941269");
    noStipulations_0_0.set(StipulationValue_44);
    Stipulations_NoStipulations_44.insert(StipulationValue_44.getString());
    all_values.push_back(Stipulations_NoStipulations_44);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_45;
    FIX::StipulationType StipulationType_45("STRING_MAXORDQTY");
    noStipulations_0_1.set(StipulationType_45);
    Stipulations_NoStipulations_45.insert(StipulationType_45.getString());
    FIX::StipulationValue StipulationValue_45("STRING_177425206");
    noStipulations_0_1.set(StipulationValue_45);
    Stipulations_NoStipulations_45.insert(StipulationValue_45.getString());
    all_values.push_back(Stipulations_NoStipulations_45);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_16;
    FIX::TargetPartyID TargetPartyID_16("STRING_1289413986");
    noTargetPartyIDs_0_0.set(TargetPartyID_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyID_16.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_16('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyIDSource_16.getString());
    FIX::TargetPartyRole TargetPartyRole_16(279706927);
    noTargetPartyIDs_0_0.set(TargetPartyRole_16);
    TargetParties_NoTargetPartyIDs_16.insert(TargetPartyRole_16.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_16);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_17;
    FIX::TargetPartyID TargetPartyID_17("STRING_205051000");
    noTargetPartyIDs_0_1.set(TargetPartyID_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyID_17.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_17('2');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyIDSource_17.getString());
    FIX::TargetPartyRole TargetPartyRole_17(784726795);
    noTargetPartyIDs_0_1.set(TargetPartyRole_17);
    TargetParties_NoTargetPartyIDs_17.insert(TargetPartyRole_17.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_17);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_18;
    FIX::TargetPartyID TargetPartyID_18("STRING_985673101");
    noTargetPartyIDs_0_2.set(TargetPartyID_18);
    TargetParties_NoTargetPartyIDs_18.insert(TargetPartyID_18.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_18('5');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_18);
    TargetParties_NoTargetPartyIDs_18.insert(TargetPartyIDSource_18.getString());
    FIX::TargetPartyRole TargetPartyRole_18(1051749724);
    noTargetPartyIDs_0_2.set(TargetPartyRole_18);
    TargetParties_NoTargetPartyIDs_18.insert(TargetPartyRole_18.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_18);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_109;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_109("DATA_1381967131");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingIssuer_109.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_109(590560416);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingIssuerLen_109.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_109("DATA_1495325319");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingSecurityDesc_109.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_109(443091144);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_109);
    UnderlyingInstrument_109.insert(EncodedUnderlyingSecurityDescLen_109.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_109;
    UnderlyingAdjustedQuantity_109.setString("804700");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_109);
    UnderlyingInstrument_109.insert(UnderlyingAdjustedQuantity_109.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_109;
    UnderlyingAllocationPercent_109.setString("91.730000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_109);
    UnderlyingInstrument_109.insert(UnderlyingAllocationPercent_109.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_109;
    UnderlyingAttachmentPoint_109.setString("38.330000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_109);
    UnderlyingInstrument_109.insert(UnderlyingAttachmentPoint_109.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_109("STRING_472527594");
    noUnderlyings_0_0.set(UnderlyingCFICode_109);
    UnderlyingInstrument_109.insert(UnderlyingCFICode_109.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_109("STRING_780767713");
    noUnderlyings_0_0.set(UnderlyingCPProgram_109);
    UnderlyingInstrument_109.insert(UnderlyingCPProgram_109.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_109("STRING_681893276");
    noUnderlyings_0_0.set(UnderlyingCPRegType_109);
    UnderlyingInstrument_109.insert(UnderlyingCPRegType_109.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_109;
    UnderlyingCapValue_109.setString("7881020");
    noUnderlyings_0_0.set(UnderlyingCapValue_109);
    UnderlyingInstrument_109.insert(UnderlyingCapValue_109.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_109;
    UnderlyingCashAmount_109.setString("8095769");
    noUnderlyings_0_0.set(UnderlyingCashAmount_109);
    UnderlyingInstrument_109.insert(UnderlyingCashAmount_109.getString());
    FIX::UnderlyingCashType UnderlyingCashType_109("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_109);
    UnderlyingInstrument_109.insert(UnderlyingCashType_109.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_109;
    UnderlyingContractMultiplier_109.setString("1510366");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_109);
    UnderlyingInstrument_109.insert(UnderlyingContractMultiplier_109.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_109(653732920);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_109);
    UnderlyingInstrument_109.insert(UnderlyingContractMultiplierUnit_109.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_109("COUNTRY_902656456");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingCountryOfIssue_109.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_109("LOCALMKTDATE_562255124");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_109);
    UnderlyingInstrument_109.insert(UnderlyingCouponPaymentDate_109.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_109;
    UnderlyingCouponRate_109.setString("5.410000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_109);
    UnderlyingInstrument_109.insert(UnderlyingCouponRate_109.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_109("STRING_1716716600");
    noUnderlyings_0_0.set(UnderlyingCreditRating_109);
    UnderlyingInstrument_109.insert(UnderlyingCreditRating_109.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_109("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_109);
    UnderlyingInstrument_109.insert(UnderlyingCurrency_109.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_109;
    UnderlyingCurrentValue_109.setString("8586469");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_109);
    UnderlyingInstrument_109.insert(UnderlyingCurrentValue_109.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_109;
    UnderlyingDetachmentPoint_109.setString("42.910000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_109);
    UnderlyingInstrument_109.insert(UnderlyingDetachmentPoint_109.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_109;
    UnderlyingDirtyPrice_109.setString("4405148");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_109);
    UnderlyingInstrument_109.insert(UnderlyingDirtyPrice_109.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_109;
    UnderlyingEndPrice_109.setString("10636979");
    noUnderlyings_0_0.set(UnderlyingEndPrice_109);
    UnderlyingInstrument_109.insert(UnderlyingEndPrice_109.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_109;
    UnderlyingEndValue_109.setString("7333888");
    noUnderlyings_0_0.set(UnderlyingEndValue_109);
    UnderlyingInstrument_109.insert(UnderlyingEndValue_109.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_109(1225241662);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_109);
    UnderlyingInstrument_109.insert(UnderlyingExerciseStyle_109.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_109;
    UnderlyingFXRate_109.setString("20493710");
    noUnderlyings_0_0.set(UnderlyingFXRate_109);
    UnderlyingInstrument_109.insert(UnderlyingFXRate_109.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_109('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_109);
    UnderlyingInstrument_109.insert(UnderlyingFXRateCalc_109.getString());
    FIX::UnderlyingFactor UnderlyingFactor_109;
    UnderlyingFactor_109.setString("1295077");
    noUnderlyings_0_0.set(UnderlyingFactor_109);
    UnderlyingInstrument_109.insert(UnderlyingFactor_109.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_109(1214611047);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_109);
    UnderlyingInstrument_109.insert(UnderlyingFlowScheduleType_109.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_109("STRING_523637084");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_109);
    UnderlyingInstrument_109.insert(UnderlyingInstrRegistry_109.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_109("LOCALMKTDATE_720068154");
    noUnderlyings_0_0.set(UnderlyingIssueDate_109);
    UnderlyingInstrument_109.insert(UnderlyingIssueDate_109.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_109("STRING_562452718");
    noUnderlyings_0_0.set(UnderlyingIssuer_109);
    UnderlyingInstrument_109.insert(UnderlyingIssuer_109.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_109("STRING_966728229");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingLocaleOfIssue_109.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_109("LOCALMKTDATE_800538235");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityDate_109.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_109("MONTHYEAR_1484191891");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityMonthYear_109.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_109("TZTIMEONLY_909388414");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_109);
    UnderlyingInstrument_109.insert(UnderlyingMaturityTime_109.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_109;
    UnderlyingNotionalPercentageOutstanding_109.setString("58.300000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_109);
    UnderlyingInstrument_109.insert(UnderlyingNotionalPercentageOutstanding_109.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_109('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_109);
    UnderlyingInstrument_109.insert(UnderlyingOptAttribute_109.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_109;
    UnderlyingOriginalNotionalPercentageOutstanding_109.setString("16.900000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_109);
    UnderlyingInstrument_109.insert(UnderlyingOriginalNotionalPercentageOutstanding_109.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_109("STRING_2061167919");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_109);
    UnderlyingInstrument_109.insert(UnderlyingPriceUnitOfMeasure_109.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_109;
    UnderlyingPriceUnitOfMeasureQty_109.setString("9270529");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_109);
    UnderlyingInstrument_109.insert(UnderlyingPriceUnitOfMeasureQty_109.getString());
    FIX::UnderlyingProduct UnderlyingProduct_109(425779293);
    noUnderlyings_0_0.set(UnderlyingProduct_109);
    UnderlyingInstrument_109.insert(UnderlyingProduct_109.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_109(64720962);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_109);
    UnderlyingInstrument_109.insert(UnderlyingPutOrCall_109.getString());
    FIX::UnderlyingPx UnderlyingPx_109;
    UnderlyingPx_109.setString("15807858");
    noUnderlyings_0_0.set(UnderlyingPx_109);
    UnderlyingInstrument_109.insert(UnderlyingPx_109.getString());
    FIX::UnderlyingQty UnderlyingQty_109;
    UnderlyingQty_109.setString("13284357");
    noUnderlyings_0_0.set(UnderlyingQty_109);
    UnderlyingInstrument_109.insert(UnderlyingQty_109.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_109("LOCALMKTDATE_626976086");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_109);
    UnderlyingInstrument_109.insert(UnderlyingRedemptionDate_109.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_109("STRING_2101976379");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_109);
    UnderlyingInstrument_109.insert(UnderlyingRepoCollateralSecurityType_109.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_109;
    UnderlyingRepurchaseRate_109.setString("87.010000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_109);
    UnderlyingInstrument_109.insert(UnderlyingRepurchaseRate_109.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_109(1366656416);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_109);
    UnderlyingInstrument_109.insert(UnderlyingRepurchaseTerm_109.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_109("STRING_115300671");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_109);
    UnderlyingInstrument_109.insert(UnderlyingRestructuringType_109.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_109("STRING_1756315640");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityDesc_109.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_109("EXCHANGE_97097059");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityExchange_109.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_109("STRING_555815538");
    noUnderlyings_0_0.set(UnderlyingSecurityID_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityID_109.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_109("STRING_672529931");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityIDSource_109.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_109("STRING_830485881");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_109);
    UnderlyingInstrument_109.insert(UnderlyingSecuritySubType_109.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_109("STRING_1781057200");
    noUnderlyings_0_0.set(UnderlyingSecurityType_109);
    UnderlyingInstrument_109.insert(UnderlyingSecurityType_109.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_109("STRING_574417323");
    noUnderlyings_0_0.set(UnderlyingSeniority_109);
    UnderlyingInstrument_109.insert(UnderlyingSeniority_109.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_109("STRING_2119639482");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_109);
    UnderlyingInstrument_109.insert(UnderlyingSettlMethod_109.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_109(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_109);
    UnderlyingInstrument_109.insert(UnderlyingSettlementType_109.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_109;
    UnderlyingStartValue_109.setString("17890283");
    noUnderlyings_0_0.set(UnderlyingStartValue_109);
    UnderlyingInstrument_109.insert(UnderlyingStartValue_109.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_109("STRING_495792919");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_109);
    UnderlyingInstrument_109.insert(UnderlyingStateOrProvinceOfIssue_109.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_109("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_109);
    UnderlyingInstrument_109.insert(UnderlyingStrikeCurrency_109.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_109;
    UnderlyingStrikePrice_109.setString("14625211");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_109);
    UnderlyingInstrument_109.insert(UnderlyingStrikePrice_109.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_109("STRING_1283687681");
    noUnderlyings_0_0.set(UnderlyingSymbol_109);
    UnderlyingInstrument_109.insert(UnderlyingSymbol_109.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_109("STRING_1688189332");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_109);
    UnderlyingInstrument_109.insert(UnderlyingSymbolSfx_109.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_109("STRING_224425914");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_109);
    UnderlyingInstrument_109.insert(UnderlyingTimeUnit_109.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_109("STRING_409269863");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_109);
    UnderlyingInstrument_109.insert(UnderlyingUnitOfMeasure_109.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_109;
    UnderlyingUnitOfMeasureQty_109.setString("18056652");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_109);
    UnderlyingInstrument_109.insert(UnderlyingUnitOfMeasureQty_109.getString());
    all_values.push_back(UnderlyingInstrument_109);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_216;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_216("STRING_322954134");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_216);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_216.insert(UnderlyingSecurityAltID_216.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_216("STRING_585234557");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_216);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_216.insert(UnderlyingSecurityAltIDSource_216.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_215;
      FIX::UnderlyingStipType UnderlyingStipType_215("STRING_387675096");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_215);
      UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipType_215.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_215("STRING_18536747");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_215);
      UnderlyingStipulations_NoUnderlyingStips_215.insert(UnderlyingStipValue_215.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_215);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_216;
      FIX::UnderlyingStipType UnderlyingStipType_216("STRING_1422438998");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_216);
      UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipType_216.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_216("STRING_1014651182");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_216);
      UnderlyingStipulations_NoUnderlyingStips_216.insert(UnderlyingStipValue_216.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_216);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_209;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_209("STRING_172624052");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_209);
      UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyID_209.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_209('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_209);
      UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyIDSource_209.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_209(88330149);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_209);
      UndlyInstrumentParties_NoUndlyInstrumentParties_209.insert(UnderlyingInstrumentPartyRole_209.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_209);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_418("STRING_330921010");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_418);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubID_418.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_418(644145687);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_418);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418.insert(UnderlyingInstrumentPartySubIDType_418.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_419("STRING_453985975");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_419);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubID_419.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_419(1161406891);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_419);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419.insert(UnderlyingInstrumentPartySubIDType_419.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_210;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_210("STRING_277719239");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_210);
      UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyID_210.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_210('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_210);
      UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyIDSource_210.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_210(1133562725);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_210);
      UndlyInstrumentParties_NoUndlyInstrumentParties_210.insert(UnderlyingInstrumentPartyRole_210.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_210);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_420("STRING_669948020");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_420);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubID_420.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_420(1629355644);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_420);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420.insert(UnderlyingInstrumentPartySubIDType_420.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_421("STRING_523949976");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_421);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubID_421.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_421(873945460);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_421);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421.insert(UnderlyingInstrumentPartySubIDType_421.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_422("STRING_944393144");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_422);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubID_422.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_422(1807637657);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_422);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422.insert(UnderlyingInstrumentPartySubIDType_422.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_211;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_211("STRING_414651144");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_211);
      UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyID_211.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_211('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_211);
      UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyIDSource_211.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_211(69423872);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_211);
      UndlyInstrumentParties_NoUndlyInstrumentParties_211.insert(UnderlyingInstrumentPartyRole_211.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_211);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_423("STRING_837043014");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_423);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubID_423.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_423(392378006);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_423);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423.insert(UnderlyingInstrumentPartySubIDType_423.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_110;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_110("DATA_658067342");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingIssuer_110.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_110(931046263);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingIssuerLen_110.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_110("DATA_780053102");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingSecurityDesc_110.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_110(676604089);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_110);
    UnderlyingInstrument_110.insert(EncodedUnderlyingSecurityDescLen_110.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_110;
    UnderlyingAdjustedQuantity_110.setString("2060016");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_110);
    UnderlyingInstrument_110.insert(UnderlyingAdjustedQuantity_110.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_110;
    UnderlyingAllocationPercent_110.setString("42.840000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_110);
    UnderlyingInstrument_110.insert(UnderlyingAllocationPercent_110.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_110;
    UnderlyingAttachmentPoint_110.setString("35.670000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_110);
    UnderlyingInstrument_110.insert(UnderlyingAttachmentPoint_110.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_110("STRING_378625666");
    noUnderlyings_0_1.set(UnderlyingCFICode_110);
    UnderlyingInstrument_110.insert(UnderlyingCFICode_110.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_110("STRING_2028528234");
    noUnderlyings_0_1.set(UnderlyingCPProgram_110);
    UnderlyingInstrument_110.insert(UnderlyingCPProgram_110.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_110("STRING_737963716");
    noUnderlyings_0_1.set(UnderlyingCPRegType_110);
    UnderlyingInstrument_110.insert(UnderlyingCPRegType_110.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_110;
    UnderlyingCapValue_110.setString("1600817");
    noUnderlyings_0_1.set(UnderlyingCapValue_110);
    UnderlyingInstrument_110.insert(UnderlyingCapValue_110.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_110;
    UnderlyingCashAmount_110.setString("2119655");
    noUnderlyings_0_1.set(UnderlyingCashAmount_110);
    UnderlyingInstrument_110.insert(UnderlyingCashAmount_110.getString());
    FIX::UnderlyingCashType UnderlyingCashType_110("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_110);
    UnderlyingInstrument_110.insert(UnderlyingCashType_110.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_110;
    UnderlyingContractMultiplier_110.setString("6140676");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_110);
    UnderlyingInstrument_110.insert(UnderlyingContractMultiplier_110.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_110(1373372487);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_110);
    UnderlyingInstrument_110.insert(UnderlyingContractMultiplierUnit_110.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_110("COUNTRY_1659828643");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingCountryOfIssue_110.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_110("LOCALMKTDATE_1642470983");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_110);
    UnderlyingInstrument_110.insert(UnderlyingCouponPaymentDate_110.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_110;
    UnderlyingCouponRate_110.setString("15.650000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_110);
    UnderlyingInstrument_110.insert(UnderlyingCouponRate_110.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_110("STRING_1700629173");
    noUnderlyings_0_1.set(UnderlyingCreditRating_110);
    UnderlyingInstrument_110.insert(UnderlyingCreditRating_110.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_110("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_110);
    UnderlyingInstrument_110.insert(UnderlyingCurrency_110.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_110;
    UnderlyingCurrentValue_110.setString("770955");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_110);
    UnderlyingInstrument_110.insert(UnderlyingCurrentValue_110.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_110;
    UnderlyingDetachmentPoint_110.setString("8.150000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_110);
    UnderlyingInstrument_110.insert(UnderlyingDetachmentPoint_110.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_110;
    UnderlyingDirtyPrice_110.setString("7857167");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_110);
    UnderlyingInstrument_110.insert(UnderlyingDirtyPrice_110.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_110;
    UnderlyingEndPrice_110.setString("18847331");
    noUnderlyings_0_1.set(UnderlyingEndPrice_110);
    UnderlyingInstrument_110.insert(UnderlyingEndPrice_110.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_110;
    UnderlyingEndValue_110.setString("14535319");
    noUnderlyings_0_1.set(UnderlyingEndValue_110);
    UnderlyingInstrument_110.insert(UnderlyingEndValue_110.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_110(1954535764);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_110);
    UnderlyingInstrument_110.insert(UnderlyingExerciseStyle_110.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_110;
    UnderlyingFXRate_110.setString("19541570");
    noUnderlyings_0_1.set(UnderlyingFXRate_110);
    UnderlyingInstrument_110.insert(UnderlyingFXRate_110.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_110('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_110);
    UnderlyingInstrument_110.insert(UnderlyingFXRateCalc_110.getString());
    FIX::UnderlyingFactor UnderlyingFactor_110;
    UnderlyingFactor_110.setString("6440951");
    noUnderlyings_0_1.set(UnderlyingFactor_110);
    UnderlyingInstrument_110.insert(UnderlyingFactor_110.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_110(199051388);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_110);
    UnderlyingInstrument_110.insert(UnderlyingFlowScheduleType_110.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_110("STRING_36948439");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_110);
    UnderlyingInstrument_110.insert(UnderlyingInstrRegistry_110.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_110("LOCALMKTDATE_1575141394");
    noUnderlyings_0_1.set(UnderlyingIssueDate_110);
    UnderlyingInstrument_110.insert(UnderlyingIssueDate_110.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_110("STRING_979104490");
    noUnderlyings_0_1.set(UnderlyingIssuer_110);
    UnderlyingInstrument_110.insert(UnderlyingIssuer_110.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_110("STRING_713552529");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingLocaleOfIssue_110.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_110("LOCALMKTDATE_1781143008");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityDate_110.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_110("MONTHYEAR_626325126");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityMonthYear_110.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_110("TZTIMEONLY_1363186096");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_110);
    UnderlyingInstrument_110.insert(UnderlyingMaturityTime_110.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_110;
    UnderlyingNotionalPercentageOutstanding_110.setString("50.260000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_110);
    UnderlyingInstrument_110.insert(UnderlyingNotionalPercentageOutstanding_110.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_110('5');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_110);
    UnderlyingInstrument_110.insert(UnderlyingOptAttribute_110.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_110;
    UnderlyingOriginalNotionalPercentageOutstanding_110.setString("98.130000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_110);
    UnderlyingInstrument_110.insert(UnderlyingOriginalNotionalPercentageOutstanding_110.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_110("STRING_172366736");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_110);
    UnderlyingInstrument_110.insert(UnderlyingPriceUnitOfMeasure_110.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_110;
    UnderlyingPriceUnitOfMeasureQty_110.setString("7193353");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_110);
    UnderlyingInstrument_110.insert(UnderlyingPriceUnitOfMeasureQty_110.getString());
    FIX::UnderlyingProduct UnderlyingProduct_110(1335775568);
    noUnderlyings_0_1.set(UnderlyingProduct_110);
    UnderlyingInstrument_110.insert(UnderlyingProduct_110.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_110(786434421);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_110);
    UnderlyingInstrument_110.insert(UnderlyingPutOrCall_110.getString());
    FIX::UnderlyingPx UnderlyingPx_110;
    UnderlyingPx_110.setString("20927077");
    noUnderlyings_0_1.set(UnderlyingPx_110);
    UnderlyingInstrument_110.insert(UnderlyingPx_110.getString());
    FIX::UnderlyingQty UnderlyingQty_110;
    UnderlyingQty_110.setString("8481205");
    noUnderlyings_0_1.set(UnderlyingQty_110);
    UnderlyingInstrument_110.insert(UnderlyingQty_110.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_110("LOCALMKTDATE_281421756");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_110);
    UnderlyingInstrument_110.insert(UnderlyingRedemptionDate_110.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_110("STRING_304675714");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_110);
    UnderlyingInstrument_110.insert(UnderlyingRepoCollateralSecurityType_110.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_110;
    UnderlyingRepurchaseRate_110.setString("60.890000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_110);
    UnderlyingInstrument_110.insert(UnderlyingRepurchaseRate_110.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_110(446357111);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_110);
    UnderlyingInstrument_110.insert(UnderlyingRepurchaseTerm_110.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_110("STRING_145999275");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_110);
    UnderlyingInstrument_110.insert(UnderlyingRestructuringType_110.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_110("STRING_478361590");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityDesc_110.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_110("EXCHANGE_1485237927");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityExchange_110.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_110("STRING_931715981");
    noUnderlyings_0_1.set(UnderlyingSecurityID_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityID_110.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_110("STRING_215611101");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityIDSource_110.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_110("STRING_791286239");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_110);
    UnderlyingInstrument_110.insert(UnderlyingSecuritySubType_110.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_110("STRING_738768098");
    noUnderlyings_0_1.set(UnderlyingSecurityType_110);
    UnderlyingInstrument_110.insert(UnderlyingSecurityType_110.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_110("STRING_22284483");
    noUnderlyings_0_1.set(UnderlyingSeniority_110);
    UnderlyingInstrument_110.insert(UnderlyingSeniority_110.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_110("STRING_170167336");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_110);
    UnderlyingInstrument_110.insert(UnderlyingSettlMethod_110.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_110(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_110);
    UnderlyingInstrument_110.insert(UnderlyingSettlementType_110.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_110;
    UnderlyingStartValue_110.setString("2213358");
    noUnderlyings_0_1.set(UnderlyingStartValue_110);
    UnderlyingInstrument_110.insert(UnderlyingStartValue_110.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_110("STRING_207115775");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_110);
    UnderlyingInstrument_110.insert(UnderlyingStateOrProvinceOfIssue_110.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_110("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_110);
    UnderlyingInstrument_110.insert(UnderlyingStrikeCurrency_110.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_110;
    UnderlyingStrikePrice_110.setString("9206683");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_110);
    UnderlyingInstrument_110.insert(UnderlyingStrikePrice_110.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_110("STRING_444180336");
    noUnderlyings_0_1.set(UnderlyingSymbol_110);
    UnderlyingInstrument_110.insert(UnderlyingSymbol_110.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_110("STRING_1826765489");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_110);
    UnderlyingInstrument_110.insert(UnderlyingSymbolSfx_110.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_110("STRING_136370753");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_110);
    UnderlyingInstrument_110.insert(UnderlyingTimeUnit_110.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_110("STRING_456465362");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_110);
    UnderlyingInstrument_110.insert(UnderlyingUnitOfMeasure_110.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_110;
    UnderlyingUnitOfMeasureQty_110.setString("1866515");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_110);
    UnderlyingInstrument_110.insert(UnderlyingUnitOfMeasureQty_110.getString());
    all_values.push_back(UnderlyingInstrument_110);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_217;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_217("STRING_628832099");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_217);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_217.insert(UnderlyingSecurityAltID_217.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_217("STRING_905986863");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_217);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_217.insert(UnderlyingSecurityAltIDSource_217.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_217;
      FIX::UnderlyingStipType UnderlyingStipType_217("STRING_1415266520");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_217);
      UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipType_217.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_217("STRING_851211012");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_217);
      UnderlyingStipulations_NoUnderlyingStips_217.insert(UnderlyingStipValue_217.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_217);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_218;
      FIX::UnderlyingStipType UnderlyingStipType_218("STRING_126449402");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_218);
      UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipType_218.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_218("STRING_1696688277");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_218);
      UnderlyingStipulations_NoUnderlyingStips_218.insert(UnderlyingStipValue_218.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_218);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_219;
      FIX::UnderlyingStipType UnderlyingStipType_219("STRING_1155886726");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_219);
      UnderlyingStipulations_NoUnderlyingStips_219.insert(UnderlyingStipType_219.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_219("STRING_527715491");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_219);
      UnderlyingStipulations_NoUnderlyingStips_219.insert(UnderlyingStipValue_219.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_219);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_212;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_212("STRING_1301886002");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_212);
      UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyID_212.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_212('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_212);
      UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyIDSource_212.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_212(1480799667);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_212);
      UndlyInstrumentParties_NoUndlyInstrumentParties_212.insert(UnderlyingInstrumentPartyRole_212.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_212);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_424("STRING_1221688182");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_424);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubID_424.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_424(124602258);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_424);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424.insert(UnderlyingInstrumentPartySubIDType_424.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_425("STRING_824886433");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_425);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubID_425.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_425(1243972666);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_425);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425.insert(UnderlyingInstrumentPartySubIDType_425.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_426("STRING_294769594");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_426);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubID_426.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_426(60266014);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_426);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426.insert(UnderlyingInstrumentPartySubIDType_426.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_213;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_213("STRING_1465308538");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_213);
      UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyID_213.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_213('5');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_213);
      UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyIDSource_213.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_213(870786990);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_213);
      UndlyInstrumentParties_NoUndlyInstrumentParties_213.insert(UnderlyingInstrumentPartyRole_213.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_213);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_427("STRING_1422553674");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_427);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubID_427.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_427(1314967326);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_427);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427.insert(UnderlyingInstrumentPartySubIDType_427.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_214;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_214("STRING_197547093");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyID_214.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_214('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyIDSource_214.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_214(1771432688);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_214);
      UndlyInstrumentParties_NoUndlyInstrumentParties_214.insert(UnderlyingInstrumentPartyRole_214.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_214);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_428("STRING_1648961345");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_428);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubID_428.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_428(252781139);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_428);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428.insert(UnderlyingInstrumentPartySubIDType_428.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_429("STRING_1290185511");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_429);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubID_429.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_429(927290184);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_429);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429.insert(UnderlyingInstrumentPartySubIDType_429.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_430("STRING_1668047660");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_430);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubID_430.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_430(2141396523);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_430);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430.insert(UnderlyingInstrumentPartySubIDType_430.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_111;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_111("DATA_1053739586");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingIssuer_111.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_111(1217252289);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingIssuerLen_111.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_111("DATA_1149799602");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingSecurityDesc_111.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_111(1581455077);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_111);
    UnderlyingInstrument_111.insert(EncodedUnderlyingSecurityDescLen_111.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_111;
    UnderlyingAdjustedQuantity_111.setString("12128140");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_111);
    UnderlyingInstrument_111.insert(UnderlyingAdjustedQuantity_111.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_111;
    UnderlyingAllocationPercent_111.setString("19.560000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_111);
    UnderlyingInstrument_111.insert(UnderlyingAllocationPercent_111.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_111;
    UnderlyingAttachmentPoint_111.setString("85.100000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_111);
    UnderlyingInstrument_111.insert(UnderlyingAttachmentPoint_111.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_111("STRING_546130049");
    noUnderlyings_0_2.set(UnderlyingCFICode_111);
    UnderlyingInstrument_111.insert(UnderlyingCFICode_111.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_111("STRING_390320291");
    noUnderlyings_0_2.set(UnderlyingCPProgram_111);
    UnderlyingInstrument_111.insert(UnderlyingCPProgram_111.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_111("STRING_1661736693");
    noUnderlyings_0_2.set(UnderlyingCPRegType_111);
    UnderlyingInstrument_111.insert(UnderlyingCPRegType_111.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_111;
    UnderlyingCapValue_111.setString("6707323");
    noUnderlyings_0_2.set(UnderlyingCapValue_111);
    UnderlyingInstrument_111.insert(UnderlyingCapValue_111.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_111;
    UnderlyingCashAmount_111.setString("12152067");
    noUnderlyings_0_2.set(UnderlyingCashAmount_111);
    UnderlyingInstrument_111.insert(UnderlyingCashAmount_111.getString());
    FIX::UnderlyingCashType UnderlyingCashType_111("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_111);
    UnderlyingInstrument_111.insert(UnderlyingCashType_111.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_111;
    UnderlyingContractMultiplier_111.setString("9655019");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_111);
    UnderlyingInstrument_111.insert(UnderlyingContractMultiplier_111.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_111(1275472739);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_111);
    UnderlyingInstrument_111.insert(UnderlyingContractMultiplierUnit_111.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_111("COUNTRY_76050601");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingCountryOfIssue_111.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_111("LOCALMKTDATE_1467387272");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_111);
    UnderlyingInstrument_111.insert(UnderlyingCouponPaymentDate_111.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_111;
    UnderlyingCouponRate_111.setString("97.290000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_111);
    UnderlyingInstrument_111.insert(UnderlyingCouponRate_111.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_111("STRING_594315853");
    noUnderlyings_0_2.set(UnderlyingCreditRating_111);
    UnderlyingInstrument_111.insert(UnderlyingCreditRating_111.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_111("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_111);
    UnderlyingInstrument_111.insert(UnderlyingCurrency_111.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_111;
    UnderlyingCurrentValue_111.setString("7918629");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_111);
    UnderlyingInstrument_111.insert(UnderlyingCurrentValue_111.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_111;
    UnderlyingDetachmentPoint_111.setString("80.780000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_111);
    UnderlyingInstrument_111.insert(UnderlyingDetachmentPoint_111.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_111;
    UnderlyingDirtyPrice_111.setString("9376924");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_111);
    UnderlyingInstrument_111.insert(UnderlyingDirtyPrice_111.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_111;
    UnderlyingEndPrice_111.setString("11760615");
    noUnderlyings_0_2.set(UnderlyingEndPrice_111);
    UnderlyingInstrument_111.insert(UnderlyingEndPrice_111.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_111;
    UnderlyingEndValue_111.setString("18028594");
    noUnderlyings_0_2.set(UnderlyingEndValue_111);
    UnderlyingInstrument_111.insert(UnderlyingEndValue_111.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_111(1190473587);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_111);
    UnderlyingInstrument_111.insert(UnderlyingExerciseStyle_111.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_111;
    UnderlyingFXRate_111.setString("3187634");
    noUnderlyings_0_2.set(UnderlyingFXRate_111);
    UnderlyingInstrument_111.insert(UnderlyingFXRate_111.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_111('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_111);
    UnderlyingInstrument_111.insert(UnderlyingFXRateCalc_111.getString());
    FIX::UnderlyingFactor UnderlyingFactor_111;
    UnderlyingFactor_111.setString("7110375");
    noUnderlyings_0_2.set(UnderlyingFactor_111);
    UnderlyingInstrument_111.insert(UnderlyingFactor_111.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_111(312676333);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_111);
    UnderlyingInstrument_111.insert(UnderlyingFlowScheduleType_111.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_111("STRING_1636405545");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_111);
    UnderlyingInstrument_111.insert(UnderlyingInstrRegistry_111.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_111("LOCALMKTDATE_1928289888");
    noUnderlyings_0_2.set(UnderlyingIssueDate_111);
    UnderlyingInstrument_111.insert(UnderlyingIssueDate_111.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_111("STRING_1462475935");
    noUnderlyings_0_2.set(UnderlyingIssuer_111);
    UnderlyingInstrument_111.insert(UnderlyingIssuer_111.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_111("STRING_1070376974");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingLocaleOfIssue_111.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_111("LOCALMKTDATE_993620270");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityDate_111.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_111("MONTHYEAR_1766677891");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityMonthYear_111.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_111("TZTIMEONLY_1510425485");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_111);
    UnderlyingInstrument_111.insert(UnderlyingMaturityTime_111.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_111;
    UnderlyingNotionalPercentageOutstanding_111.setString("3.190000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_111);
    UnderlyingInstrument_111.insert(UnderlyingNotionalPercentageOutstanding_111.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_111('9');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_111);
    UnderlyingInstrument_111.insert(UnderlyingOptAttribute_111.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_111;
    UnderlyingOriginalNotionalPercentageOutstanding_111.setString("85.300000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_111);
    UnderlyingInstrument_111.insert(UnderlyingOriginalNotionalPercentageOutstanding_111.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_111("STRING_62998978");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_111);
    UnderlyingInstrument_111.insert(UnderlyingPriceUnitOfMeasure_111.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_111;
    UnderlyingPriceUnitOfMeasureQty_111.setString("12247212");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_111);
    UnderlyingInstrument_111.insert(UnderlyingPriceUnitOfMeasureQty_111.getString());
    FIX::UnderlyingProduct UnderlyingProduct_111(1782904241);
    noUnderlyings_0_2.set(UnderlyingProduct_111);
    UnderlyingInstrument_111.insert(UnderlyingProduct_111.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_111(1028500880);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_111);
    UnderlyingInstrument_111.insert(UnderlyingPutOrCall_111.getString());
    FIX::UnderlyingPx UnderlyingPx_111;
    UnderlyingPx_111.setString("3527103");
    noUnderlyings_0_2.set(UnderlyingPx_111);
    UnderlyingInstrument_111.insert(UnderlyingPx_111.getString());
    FIX::UnderlyingQty UnderlyingQty_111;
    UnderlyingQty_111.setString("18589548");
    noUnderlyings_0_2.set(UnderlyingQty_111);
    UnderlyingInstrument_111.insert(UnderlyingQty_111.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_111("LOCALMKTDATE_348404504");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_111);
    UnderlyingInstrument_111.insert(UnderlyingRedemptionDate_111.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_111("STRING_351486432");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_111);
    UnderlyingInstrument_111.insert(UnderlyingRepoCollateralSecurityType_111.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_111;
    UnderlyingRepurchaseRate_111.setString("70.470000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_111);
    UnderlyingInstrument_111.insert(UnderlyingRepurchaseRate_111.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_111(1090861803);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_111);
    UnderlyingInstrument_111.insert(UnderlyingRepurchaseTerm_111.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_111("STRING_1665229840");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_111);
    UnderlyingInstrument_111.insert(UnderlyingRestructuringType_111.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_111("STRING_1097649994");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityDesc_111.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_111("EXCHANGE_1244759881");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityExchange_111.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_111("STRING_455438640");
    noUnderlyings_0_2.set(UnderlyingSecurityID_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityID_111.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_111("STRING_126227941");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityIDSource_111.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_111("STRING_900135656");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_111);
    UnderlyingInstrument_111.insert(UnderlyingSecuritySubType_111.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_111("STRING_1645912227");
    noUnderlyings_0_2.set(UnderlyingSecurityType_111);
    UnderlyingInstrument_111.insert(UnderlyingSecurityType_111.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_111("STRING_444991398");
    noUnderlyings_0_2.set(UnderlyingSeniority_111);
    UnderlyingInstrument_111.insert(UnderlyingSeniority_111.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_111("STRING_1482801616");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_111);
    UnderlyingInstrument_111.insert(UnderlyingSettlMethod_111.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_111(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_111);
    UnderlyingInstrument_111.insert(UnderlyingSettlementType_111.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_111;
    UnderlyingStartValue_111.setString("7576677");
    noUnderlyings_0_2.set(UnderlyingStartValue_111);
    UnderlyingInstrument_111.insert(UnderlyingStartValue_111.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_111("STRING_971723513");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_111);
    UnderlyingInstrument_111.insert(UnderlyingStateOrProvinceOfIssue_111.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_111("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_111);
    UnderlyingInstrument_111.insert(UnderlyingStrikeCurrency_111.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_111;
    UnderlyingStrikePrice_111.setString("20421004");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_111);
    UnderlyingInstrument_111.insert(UnderlyingStrikePrice_111.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_111("STRING_983892689");
    noUnderlyings_0_2.set(UnderlyingSymbol_111);
    UnderlyingInstrument_111.insert(UnderlyingSymbol_111.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_111("STRING_1839337909");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_111);
    UnderlyingInstrument_111.insert(UnderlyingSymbolSfx_111.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_111("STRING_1405042325");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_111);
    UnderlyingInstrument_111.insert(UnderlyingTimeUnit_111.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_111("STRING_376159360");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_111);
    UnderlyingInstrument_111.insert(UnderlyingUnitOfMeasure_111.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_111;
    UnderlyingUnitOfMeasureQty_111.setString("18488524");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_111);
    UnderlyingInstrument_111.insert(UnderlyingUnitOfMeasureQty_111.getString());
    all_values.push_back(UnderlyingInstrument_111);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_218;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_218("STRING_439158339");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_218);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_218.insert(UnderlyingSecurityAltID_218.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_218("STRING_926090055");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_218);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_218.insert(UnderlyingSecurityAltIDSource_218.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_220;
      FIX::UnderlyingStipType UnderlyingStipType_220("STRING_1467659219");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_220);
      UnderlyingStipulations_NoUnderlyingStips_220.insert(UnderlyingStipType_220.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_220("STRING_1278800406");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_220);
      UnderlyingStipulations_NoUnderlyingStips_220.insert(UnderlyingStipValue_220.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_220);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_221;
      FIX::UnderlyingStipType UnderlyingStipType_221("STRING_1776612642");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_221);
      UnderlyingStipulations_NoUnderlyingStips_221.insert(UnderlyingStipType_221.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_221("STRING_1816063724");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_221);
      UnderlyingStipulations_NoUnderlyingStips_221.insert(UnderlyingStipValue_221.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_221);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_222;
      FIX::UnderlyingStipType UnderlyingStipType_222("STRING_1630286839");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_222);
      UnderlyingStipulations_NoUnderlyingStips_222.insert(UnderlyingStipType_222.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_222("STRING_2082399689");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_222);
      UnderlyingStipulations_NoUnderlyingStips_222.insert(UnderlyingStipValue_222.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_222);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_215;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_215("STRING_1148033031");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyID_215.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_215('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyIDSource_215.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_215(2004201760);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_215);
      UndlyInstrumentParties_NoUndlyInstrumentParties_215.insert(UnderlyingInstrumentPartyRole_215.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_215);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_431("STRING_1158793977");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_431);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431.insert(UnderlyingInstrumentPartySubID_431.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_431(756853768);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_431);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431.insert(UnderlyingInstrumentPartySubIDType_431.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_21;
  FIX::Yield Yield_21;
  Yield_21.setString("2.500000");
  msg.set(Yield_21);
  YieldData_21.insert(Yield_21.getString());
  FIX::YieldCalcDate YieldCalcDate_21("LOCALMKTDATE_1603785375");
  msg.set(YieldCalcDate_21);
  YieldData_21.insert(YieldCalcDate_21.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_21("LOCALMKTDATE_92171736");
  msg.set(YieldRedemptionDate_21);
  YieldData_21.insert(YieldRedemptionDate_21.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_21;
  YieldRedemptionPrice_21.setString("13113664");
  msg.set(YieldRedemptionPrice_21);
  YieldData_21.insert(YieldRedemptionPrice_21.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_21(213969459);
  msg.set(YieldRedemptionPriceType_21);
  YieldData_21.insert(YieldRedemptionPriceType_21.getString());
  FIX::YieldType YieldType_21("STRING_SEMIANNUAL");
  msg.set(YieldType_21);
  YieldData_21.insert(YieldType_21.getString());
  all_values.push_back(YieldData_21);
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
