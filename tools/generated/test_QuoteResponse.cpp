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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteResponse msg;

  list<multiset<string>> all_values;
  multiset<string> QuoteResponse_0;
  FIX::Account Account_35("STRING_1228158775");
  msg.set(Account_35);
  QuoteResponse_0.insert(Account_35.getString());
  FIX::AccountType AccountType_30(8);
  msg.set(AccountType_30);
  QuoteResponse_0.insert(AccountType_30.getString());
  FIX::AcctIDSource AcctIDSource_28(99);
  msg.set(AcctIDSource_28);
  QuoteResponse_0.insert(AcctIDSource_28.getString());
  FIX::BidForwardPoints BidForwardPoints_8;
  BidForwardPoints_8.setString("19579405");
  msg.set(BidForwardPoints_8);
  QuoteResponse_0.insert(BidForwardPoints_8.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_8;
  BidForwardPoints2_8.setString("6253025");
  msg.set(BidForwardPoints2_8);
  QuoteResponse_0.insert(BidForwardPoints2_8.getString());
  FIX::BidPx BidPx_8;
  BidPx_8.setString("3427211");
  msg.set(BidPx_8);
  QuoteResponse_0.insert(BidPx_8.getString());
  FIX::BidSize BidSize_8;
  BidSize_8.setString("17855608");
  msg.set(BidSize_8);
  QuoteResponse_0.insert(BidSize_8.getString());
  FIX::BidSpotRate BidSpotRate_8;
  BidSpotRate_8.setString("9716212");
  msg.set(BidSpotRate_8);
  QuoteResponse_0.insert(BidSpotRate_8.getString());
  FIX::BidYield BidYield_8;
  BidYield_8.setString("71.920000");
  msg.set(BidYield_8);
  QuoteResponse_0.insert(BidYield_8.getString());
  FIX::ClOrdID ClOrdID_43("STRING_913335377");
  msg.set(ClOrdID_43);
  QuoteResponse_0.insert(ClOrdID_43.getString());
  FIX::CommType CommType_21('4');
  msg.set(CommType_21);
  QuoteResponse_0.insert(CommType_21.getString());
  FIX::Commission Commission_21;
  Commission_21.setString("7885895");
  msg.set(Commission_21);
  QuoteResponse_0.insert(Commission_21.getString());
  FIX::Currency Currency_53("CHF");
  msg.set(Currency_53);
  QuoteResponse_0.insert(Currency_53.getString());
  FIX::CustOrderCapacity CustOrderCapacity_15(2);
  msg.set(CustOrderCapacity_15);
  QuoteResponse_0.insert(CustOrderCapacity_15.getString());
  FIX::EncodedText EncodedText_82("DATA_874121018");
  msg.set(EncodedText_82);
  QuoteResponse_0.insert(EncodedText_82.getString());
  FIX::EncodedTextLen EncodedTextLen_82(1070800963);
  msg.set(EncodedTextLen_82);
  QuoteResponse_0.insert(EncodedTextLen_82.getString());
  FIX::ExDestination ExDestination_8("EXCHANGE_552053029");
  msg.set(ExDestination_8);
  QuoteResponse_0.insert(ExDestination_8.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_8('C');
  msg.set(ExDestinationIDSource_8);
  QuoteResponse_0.insert(ExDestinationIDSource_8.getString());
  FIX::IOIID IOIID_7("STRING_729606132");
  msg.set(IOIID_7);
  QuoteResponse_0.insert(IOIID_7.getString());
  FIX::MidPx MidPx_8;
  MidPx_8.setString("4010420");
  msg.set(MidPx_8);
  QuoteResponse_0.insert(MidPx_8.getString());
  FIX::MidYield MidYield_8;
  MidYield_8.setString("89.910000");
  msg.set(MidYield_8);
  QuoteResponse_0.insert(MidYield_8.getString());
  FIX::MinBidSize MinBidSize_1;
  MinBidSize_1.setString("14773436");
  msg.set(MinBidSize_1);
  QuoteResponse_0.insert(MinBidSize_1.getString());
  FIX::MinOfferSize MinOfferSize_1;
  MinOfferSize_1.setString("13121972");
  msg.set(MinOfferSize_1);
  QuoteResponse_0.insert(MinOfferSize_1.getString());
  FIX::MinQty MinQty_16;
  MinQty_16.setString("19312823");
  msg.set(MinQty_16);
  QuoteResponse_0.insert(MinQty_16.getString());
  FIX::MktBidPx MktBidPx_1;
  MktBidPx_1.setString("8962617");
  msg.set(MktBidPx_1);
  QuoteResponse_0.insert(MktBidPx_1.getString());
  FIX::MktOfferPx MktOfferPx_1;
  MktOfferPx_1.setString("11014476");
  msg.set(MktOfferPx_1);
  QuoteResponse_0.insert(MktOfferPx_1.getString());
  FIX::OfferForwardPoints OfferForwardPoints_8;
  OfferForwardPoints_8.setString("11072668");
  msg.set(OfferForwardPoints_8);
  QuoteResponse_0.insert(OfferForwardPoints_8.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_8;
  OfferForwardPoints2_8.setString("18650631");
  msg.set(OfferForwardPoints2_8);
  QuoteResponse_0.insert(OfferForwardPoints2_8.getString());
  FIX::OfferPx OfferPx_8;
  OfferPx_8.setString("21100749");
  msg.set(OfferPx_8);
  QuoteResponse_0.insert(OfferPx_8.getString());
  FIX::OfferSize OfferSize_8;
  OfferSize_8.setString("7987330");
  msg.set(OfferSize_8);
  QuoteResponse_0.insert(OfferSize_8.getString());
  FIX::OfferSpotRate OfferSpotRate_8;
  OfferSpotRate_8.setString("9457382");
  msg.set(OfferSpotRate_8);
  QuoteResponse_0.insert(OfferSpotRate_8.getString());
  FIX::OfferYield OfferYield_8;
  OfferYield_8.setString("51.970000");
  msg.set(OfferYield_8);
  QuoteResponse_0.insert(OfferYield_8.getString());
  FIX::OrdType OrdType_50('C');
  msg.set(OrdType_50);
  QuoteResponse_0.insert(OrdType_50.getString());
  FIX::OrderCapacity OrderCapacity_26('I');
  msg.set(OrderCapacity_26);
  QuoteResponse_0.insert(OrderCapacity_26.getString());
  FIX::OrderQty2 OrderQty2_15;
  OrderQty2_15.setString("12388477");
  msg.set(OrderQty2_15);
  QuoteResponse_0.insert(OrderQty2_15.getString());
  FIX::OrderRestrictions OrderRestrictions_21("MULTIPLECHARVALUE_9");
  msg.set(OrderRestrictions_21);
  QuoteResponse_0.insert(OrderRestrictions_21.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_13(false);
  msg.set(PreTradeAnonymity_13);
  QuoteResponse_0.insert(PreTradeAnonymity_13.getString());
  FIX::Price Price_23;
  Price_23.setString("629853");
  msg.set(Price_23);
  QuoteResponse_0.insert(Price_23.getString());
  FIX::PriceType PriceType_39(16);
  msg.set(PriceType_39);
  QuoteResponse_0.insert(PriceType_39.getString());
  FIX::QuoteID QuoteID_10("STRING_1307607750");
  msg.set(QuoteID_10);
  QuoteResponse_0.insert(QuoteID_10.getString());
  FIX::QuoteMsgID QuoteMsgID_2("STRING_200178369");
  msg.set(QuoteMsgID_2);
  QuoteResponse_0.insert(QuoteMsgID_2.getString());
  FIX::QuoteRespID QuoteRespID_2("STRING_1191366621");
  msg.set(QuoteRespID_2);
  QuoteResponse_0.insert(QuoteRespID_2.getString());
  FIX::QuoteRespType QuoteRespType_0(4);
  msg.set(QuoteRespType_0);
  QuoteResponse_0.insert(QuoteRespType_0.getString());
  FIX::QuoteType QuoteType_9(2);
  msg.set(QuoteType_9);
  QuoteResponse_0.insert(QuoteType_9.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_1;
  SettlCurrBidFxRate_1.setString("13626720");
  msg.set(SettlCurrBidFxRate_1);
  QuoteResponse_0.insert(SettlCurrBidFxRate_1.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_8('D');
  msg.set(SettlCurrFxRateCalc_8);
  QuoteResponse_0.insert(SettlCurrFxRateCalc_8.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_1;
  SettlCurrOfferFxRate_1.setString("8828774");
  msg.set(SettlCurrOfferFxRate_1);
  QuoteResponse_0.insert(SettlCurrOfferFxRate_1.getString());
  FIX::SettlDate SettlDate_42("LOCALMKTDATE_1914725104");
  msg.set(SettlDate_42);
  QuoteResponse_0.insert(SettlDate_42.getString());
  FIX::SettlDate2 SettlDate2_15("LOCALMKTDATE_1043829381");
  msg.set(SettlDate2_15);
  QuoteResponse_0.insert(SettlDate2_15.getString());
  FIX::SettlType SettlType_29("STRING_5");
  msg.set(SettlType_29);
  QuoteResponse_0.insert(SettlType_29.getString());
  FIX::Side Side_45('F');
  msg.set(Side_45);
  QuoteResponse_0.insert(Side_45.getString());
  FIX::Text Text_82("STRING_1574728372");
  msg.set(Text_82);
  QuoteResponse_0.insert(Text_82.getString());
  FIX::TradingSessionID TradingSessionID_69("STRING_4");
  msg.set(TradingSessionID_69);
  QuoteResponse_0.insert(TradingSessionID_69.getString());
  FIX::TradingSessionSubID TradingSessionSubID_69("STRING_1");
  msg.set(TradingSessionSubID_69);
  QuoteResponse_0.insert(TradingSessionSubID_69.getString());
  FIX::TransactTime TransactTime_52(FIX::UTCTIMESTAMP(23, 55, 47, 3, 2, 2005));
  msg.set(TransactTime_52);
  QuoteResponse_0.insert(TransactTime_52.getString());
  FIX::ValidUntilTime ValidUntilTime_11(FIX::UTCTIMESTAMP(6, 33, 45, 5, 6, 2016));
  msg.set(ValidUntilTime_11);
  QuoteResponse_0.insert(ValidUntilTime_11.getString());
  all_values.push_back(QuoteResponse_0);

  // FinancingDetails
  multiset<string> FinancingDetails_21;
  FIX::AgreementCurrency AgreementCurrency_21("USD");
  msg.set(AgreementCurrency_21);
  FinancingDetails_21.insert(AgreementCurrency_21.getString());
  FIX::AgreementDate AgreementDate_21("LOCALMKTDATE_665031020");
  msg.set(AgreementDate_21);
  FinancingDetails_21.insert(AgreementDate_21.getString());
  FIX::AgreementDesc AgreementDesc_21("STRING_365109130");
  msg.set(AgreementDesc_21);
  FinancingDetails_21.insert(AgreementDesc_21.getString());
  FIX::AgreementID AgreementID_21("STRING_1472025567");
  msg.set(AgreementID_21);
  FinancingDetails_21.insert(AgreementID_21.getString());
  FIX::DeliveryType DeliveryType_21(3);
  msg.set(DeliveryType_21);
  FinancingDetails_21.insert(DeliveryType_21.getString());
  FIX::EndDate EndDate_21("LOCALMKTDATE_177185576");
  msg.set(EndDate_21);
  FinancingDetails_21.insert(EndDate_21.getString());
  FIX::MarginRatio MarginRatio_21;
  MarginRatio_21.setString("39.930000");
  msg.set(MarginRatio_21);
  FinancingDetails_21.insert(MarginRatio_21.getString());
  FIX::StartDate StartDate_21("LOCALMKTDATE_1146311229");
  msg.set(StartDate_21);
  FinancingDetails_21.insert(StartDate_21.getString());
  FIX::TerminationType TerminationType_21(3);
  msg.set(TerminationType_21);
  FinancingDetails_21.insert(TerminationType_21.getString());
  all_values.push_back(FinancingDetails_21);

  // Instrument
  multiset<string> Instrument_65;
  FIX::AttachmentPoint AttachmentPoint_65;
  AttachmentPoint_65.setString("54.490000");
  msg.set(AttachmentPoint_65);
  Instrument_65.insert(AttachmentPoint_65.getString());
  FIX::CFICode CFICode_65("STRING_42656962");
  msg.set(CFICode_65);
  Instrument_65.insert(CFICode_65.getString());
  FIX::CPProgram CPProgram_65(99);
  msg.set(CPProgram_65);
  Instrument_65.insert(CPProgram_65.getString());
  FIX::CPRegType CPRegType_65("STRING_622738999");
  msg.set(CPRegType_65);
  Instrument_65.insert(CPRegType_65.getString());
  FIX::CapPrice CapPrice_65;
  CapPrice_65.setString("16173853");
  msg.set(CapPrice_65);
  Instrument_65.insert(CapPrice_65.getString());
  FIX::ContractMultiplier ContractMultiplier_65;
  ContractMultiplier_65.setString("14674064");
  msg.set(ContractMultiplier_65);
  Instrument_65.insert(ContractMultiplier_65.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_65(1);
  msg.set(ContractMultiplierUnit_65);
  Instrument_65.insert(ContractMultiplierUnit_65.getString());
  FIX::ContractSettlMonth ContractSettlMonth_65("MONTHYEAR_828428777");
  msg.set(ContractSettlMonth_65);
  Instrument_65.insert(ContractSettlMonth_65.getString());
  FIX::CountryOfIssue CountryOfIssue_65("COUNTRY_1158528042");
  msg.set(CountryOfIssue_65);
  Instrument_65.insert(CountryOfIssue_65.getString());
  FIX::CouponPaymentDate CouponPaymentDate_65("LOCALMKTDATE_390180987");
  msg.set(CouponPaymentDate_65);
  Instrument_65.insert(CouponPaymentDate_65.getString());
  FIX::CouponRate CouponRate_65;
  CouponRate_65.setString("90.840000");
  msg.set(CouponRate_65);
  Instrument_65.insert(CouponRate_65.getString());
  FIX::CreditRating CreditRating_65("STRING_567229153");
  msg.set(CreditRating_65);
  Instrument_65.insert(CreditRating_65.getString());
  FIX::DatedDate DatedDate_65("LOCALMKTDATE_787217116");
  msg.set(DatedDate_65);
  Instrument_65.insert(DatedDate_65.getString());
  FIX::DetachmentPoint DetachmentPoint_65;
  DetachmentPoint_65.setString("87.940000");
  msg.set(DetachmentPoint_65);
  Instrument_65.insert(DetachmentPoint_65.getString());
  FIX::EncodedIssuer EncodedIssuer_65("DATA_921668528");
  msg.set(EncodedIssuer_65);
  Instrument_65.insert(EncodedIssuer_65.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_65(1797798442);
  msg.set(EncodedIssuerLen_65);
  Instrument_65.insert(EncodedIssuerLen_65.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_65("DATA_442400867");
  msg.set(EncodedSecurityDesc_65);
  Instrument_65.insert(EncodedSecurityDesc_65.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_65(2032303074);
  msg.set(EncodedSecurityDescLen_65);
  Instrument_65.insert(EncodedSecurityDescLen_65.getString());
  FIX::ExerciseStyle ExerciseStyle_65(0);
  msg.set(ExerciseStyle_65);
  Instrument_65.insert(ExerciseStyle_65.getString());
  FIX::Factor Factor_65;
  Factor_65.setString("3202827");
  msg.set(Factor_65);
  Instrument_65.insert(Factor_65.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_65(true);
  msg.set(FlexProductEligibilityIndicator_65);
  Instrument_65.insert(FlexProductEligibilityIndicator_65.getString());
  FIX::FlexibleIndicator FlexibleIndicator_65(false);
  msg.set(FlexibleIndicator_65);
  Instrument_65.insert(FlexibleIndicator_65.getString());
  FIX::FloorPrice FloorPrice_65;
  FloorPrice_65.setString("6009417");
  msg.set(FloorPrice_65);
  Instrument_65.insert(FloorPrice_65.getString());
  FIX::FlowScheduleType FlowScheduleType_65(0);
  msg.set(FlowScheduleType_65);
  Instrument_65.insert(FlowScheduleType_65.getString());
  FIX::InstrRegistry InstrRegistry_65("STRING_282300087");
  msg.set(InstrRegistry_65);
  Instrument_65.insert(InstrRegistry_65.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_65('2');
  msg.set(InstrmtAssignmentMethod_65);
  Instrument_65.insert(InstrmtAssignmentMethod_65.getString());
  FIX::InterestAccrualDate InterestAccrualDate_65("LOCALMKTDATE_1449626156");
  msg.set(InterestAccrualDate_65);
  Instrument_65.insert(InterestAccrualDate_65.getString());
  FIX::IssueDate IssueDate_65("LOCALMKTDATE_459485663");
  msg.set(IssueDate_65);
  Instrument_65.insert(IssueDate_65.getString());
  FIX::Issuer Issuer_65("STRING_612697639");
  msg.set(Issuer_65);
  Instrument_65.insert(Issuer_65.getString());
  FIX::ListMethod ListMethod_65(1);
  msg.set(ListMethod_65);
  Instrument_65.insert(ListMethod_65.getString());
  FIX::LocaleOfIssue LocaleOfIssue_65("STRING_1519548649");
  msg.set(LocaleOfIssue_65);
  Instrument_65.insert(LocaleOfIssue_65.getString());
  FIX::MaturityDate MaturityDate_65("LOCALMKTDATE_1067153088");
  msg.set(MaturityDate_65);
  Instrument_65.insert(MaturityDate_65.getString());
  FIX::MaturityMonthYear MaturityMonthYear_65("MONTHYEAR_491110699");
  msg.set(MaturityMonthYear_65);
  Instrument_65.insert(MaturityMonthYear_65.getString());
  FIX::MaturityTime MaturityTime_65("TZTIMEONLY_2044611529");
  msg.set(MaturityTime_65);
  Instrument_65.insert(MaturityTime_65.getString());
  FIX::MinPriceIncrement MinPriceIncrement_65;
  MinPriceIncrement_65.setString("16898920");
  msg.set(MinPriceIncrement_65);
  Instrument_65.insert(MinPriceIncrement_65.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_65;
  MinPriceIncrementAmount_65.setString("21084960");
  msg.set(MinPriceIncrementAmount_65);
  Instrument_65.insert(MinPriceIncrementAmount_65.getString());
  FIX::NTPositionLimit NTPositionLimit_65(1364534299);
  msg.set(NTPositionLimit_65);
  Instrument_65.insert(NTPositionLimit_65.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_65;
  NotionalPercentageOutstanding_65.setString("82.600000");
  msg.set(NotionalPercentageOutstanding_65);
  Instrument_65.insert(NotionalPercentageOutstanding_65.getString());
  FIX::OptAttribute OptAttribute_65('7');
  msg.set(OptAttribute_65);
  Instrument_65.insert(OptAttribute_65.getString());
  FIX::OptPayoutAmount OptPayoutAmount_65;
  OptPayoutAmount_65.setString("3755786");
  msg.set(OptPayoutAmount_65);
  Instrument_65.insert(OptPayoutAmount_65.getString());
  FIX::OptPayoutType OptPayoutType_65(2);
  msg.set(OptPayoutType_65);
  Instrument_65.insert(OptPayoutType_65.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_65;
  OriginalNotionalPercentageOutstanding_65.setString("2.470000");
  msg.set(OriginalNotionalPercentageOutstanding_65);
  Instrument_65.insert(OriginalNotionalPercentageOutstanding_65.getString());
  FIX::Pool Pool_65("STRING_942807847");
  msg.set(Pool_65);
  Instrument_65.insert(Pool_65.getString());
  FIX::PositionLimit PositionLimit_65(675542716);
  msg.set(PositionLimit_65);
  Instrument_65.insert(PositionLimit_65.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_65("STRING_INX");
  msg.set(PriceQuoteMethod_65);
  Instrument_65.insert(PriceQuoteMethod_65.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_65("STRING_1864476375");
  msg.set(PriceUnitOfMeasure_65);
  Instrument_65.insert(PriceUnitOfMeasure_65.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_65;
  PriceUnitOfMeasureQty_65.setString("3258575");
  msg.set(PriceUnitOfMeasureQty_65);
  Instrument_65.insert(PriceUnitOfMeasureQty_65.getString());
  FIX::Product Product_67(4);
  msg.set(Product_67);
  Instrument_65.insert(Product_67.getString());
  FIX::ProductComplex ProductComplex_65("STRING_1749295801");
  msg.set(ProductComplex_65);
  Instrument_65.insert(ProductComplex_65.getString());
  FIX::PutOrCall PutOrCall_65(0);
  msg.set(PutOrCall_65);
  Instrument_65.insert(PutOrCall_65.getString());
  FIX::RedemptionDate RedemptionDate_65("LOCALMKTDATE_667679041");
  msg.set(RedemptionDate_65);
  Instrument_65.insert(RedemptionDate_65.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_65("STRING_991538498");
  msg.set(RepoCollateralSecurityType_65);
  Instrument_65.insert(RepoCollateralSecurityType_65.getString());
  FIX::RepurchaseRate RepurchaseRate_65;
  RepurchaseRate_65.setString("23.110000");
  msg.set(RepurchaseRate_65);
  Instrument_65.insert(RepurchaseRate_65.getString());
  FIX::RepurchaseTerm RepurchaseTerm_65(1268620767);
  msg.set(RepurchaseTerm_65);
  Instrument_65.insert(RepurchaseTerm_65.getString());
  FIX::RestructuringType RestructuringType_65("STRING_XR");
  msg.set(RestructuringType_65);
  Instrument_65.insert(RestructuringType_65.getString());
  FIX::SecurityDesc SecurityDesc_65("STRING_277608750");
  msg.set(SecurityDesc_65);
  Instrument_65.insert(SecurityDesc_65.getString());
  FIX::SecurityExchange SecurityExchange_65("EXCHANGE_1194104413");
  msg.set(SecurityExchange_65);
  Instrument_65.insert(SecurityExchange_65.getString());
  FIX::SecurityGroup SecurityGroup_65("STRING_200954723");
  msg.set(SecurityGroup_65);
  Instrument_65.insert(SecurityGroup_65.getString());
  FIX::SecurityID SecurityID_65("STRING_737094414");
  msg.set(SecurityID_65);
  Instrument_65.insert(SecurityID_65.getString());
  FIX::SecurityIDSource SecurityIDSource_65("STRING_1");
  msg.set(SecurityIDSource_65);
  Instrument_65.insert(SecurityIDSource_65.getString());
  FIX::SecurityStatus SecurityStatus_65("STRING_2");
  msg.set(SecurityStatus_65);
  Instrument_65.insert(SecurityStatus_65.getString());
  FIX::SecuritySubType SecuritySubType_66("STRING_109159415");
  msg.set(SecuritySubType_66);
  Instrument_65.insert(SecuritySubType_66.getString());
  FIX::SecurityType SecurityType_67("STRING_CPP");
  msg.set(SecurityType_67);
  Instrument_65.insert(SecurityType_67.getString());
  FIX::Seniority Seniority_65("STRING_SR");
  msg.set(Seniority_65);
  Instrument_65.insert(Seniority_65.getString());
  FIX::SettlMethod SettlMethod_65('C');
  msg.set(SettlMethod_65);
  Instrument_65.insert(SettlMethod_65.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_65("STRING_268879932");
  msg.set(SettleOnOpenFlag_65);
  Instrument_65.insert(SettleOnOpenFlag_65.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_65("STRING_1101531546");
  msg.set(StateOrProvinceOfIssue_65);
  Instrument_65.insert(StateOrProvinceOfIssue_65.getString());
  FIX::StrikeCurrency StrikeCurrency_65("JPY");
  msg.set(StrikeCurrency_65);
  Instrument_65.insert(StrikeCurrency_65.getString());
  FIX::StrikeMultiplier StrikeMultiplier_65;
  StrikeMultiplier_65.setString("18909727");
  msg.set(StrikeMultiplier_65);
  Instrument_65.insert(StrikeMultiplier_65.getString());
  FIX::StrikePrice StrikePrice_65;
  StrikePrice_65.setString("17464002");
  msg.set(StrikePrice_65);
  Instrument_65.insert(StrikePrice_65.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_65(3);
  msg.set(StrikePriceBoundaryMethod_65);
  Instrument_65.insert(StrikePriceBoundaryMethod_65.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_65;
  StrikePriceBoundaryPrecision_65.setString("93.080000");
  msg.set(StrikePriceBoundaryPrecision_65);
  Instrument_65.insert(StrikePriceBoundaryPrecision_65.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_65(1);
  msg.set(StrikePriceDeterminationMethod_65);
  Instrument_65.insert(StrikePriceDeterminationMethod_65.getString());
  FIX::StrikeValue StrikeValue_65;
  StrikeValue_65.setString("3308928");
  msg.set(StrikeValue_65);
  Instrument_65.insert(StrikeValue_65.getString());
  FIX::Symbol Symbol_65("STRING_1584664702");
  msg.set(Symbol_65);
  Instrument_65.insert(Symbol_65.getString());
  FIX::SymbolSfx SymbolSfx_65("STRING_CD");
  msg.set(SymbolSfx_65);
  Instrument_65.insert(SymbolSfx_65.getString());
  FIX::TimeUnit TimeUnit_65("STRING_D");
  msg.set(TimeUnit_65);
  Instrument_65.insert(TimeUnit_65.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_65(3);
  msg.set(UnderlyingPriceDeterminationMethod_65);
  Instrument_65.insert(UnderlyingPriceDeterminationMethod_65.getString());
  FIX::UnitOfMeasure UnitOfMeasure_65("STRING_tn");
  msg.set(UnitOfMeasure_65);
  Instrument_65.insert(UnitOfMeasure_65.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_65;
  UnitOfMeasureQty_65.setString("7348680");
  msg.set(UnitOfMeasureQty_65);
  Instrument_65.insert(UnitOfMeasureQty_65.getString());
  FIX::ValuationMethod ValuationMethod_65("STRING_EQTY");
  msg.set(ValuationMethod_65);
  Instrument_65.insert(ValuationMethod_65.getString());
  all_values.push_back(Instrument_65);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_126;
    FIX::ComplexEventCondition ComplexEventCondition_126(1);
    noComplexEvents_0_0.set(ComplexEventCondition_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventCondition_126.getString());
    FIX::ComplexEventPrice ComplexEventPrice_126;
    ComplexEventPrice_126.setString("17208771");
    noComplexEvents_0_0.set(ComplexEventPrice_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPrice_126.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_126(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceBoundaryMethod_126.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_126;
    ComplexEventPriceBoundaryPrecision_126.setString("54.910000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceBoundaryPrecision_126.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_126(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventPriceTimeType_126.getString());
    FIX::ComplexEventType ComplexEventType_126(1);
    noComplexEvents_0_0.set(ComplexEventType_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexEventType_126.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_126;
    ComplexOptPayoutAmount_126.setString("17448799");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_126);
    ComplexEvents_NoComplexEvents_126.insert(ComplexOptPayoutAmount_126.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_126);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_260;
      FIX::ComplexEventEndDate ComplexEventEndDate_260(FIX::UTCTIMESTAMP(8, 4, 59, 9, 6, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_260);
      ComplexEventDates_NoComplexEventDates_260.insert(ComplexEventEndDate_260.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_260(FIX::UTCTIMESTAMP(13, 38, 26, 21, 8, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_260);
      ComplexEventDates_NoComplexEventDates_260.insert(ComplexEventStartDate_260.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_260);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_531;
        FIX::ComplexEventEndTime ComplexEventEndTime_531(FIX::UTCTIMEONLY(7, 16, 15));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_531);
        ComplexEventTimes_NoComplexEventTimes_531.insert(ComplexEventEndTime_531.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_531(FIX::UTCTIMEONLY(1, 11, 0));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_531);
        ComplexEventTimes_NoComplexEventTimes_531.insert(ComplexEventStartTime_531.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_531);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_261;
      FIX::ComplexEventEndDate ComplexEventEndDate_261(FIX::UTCTIMESTAMP(14, 42, 28, 14, 5, 2013));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_261);
      ComplexEventDates_NoComplexEventDates_261.insert(ComplexEventEndDate_261.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_261(FIX::UTCTIMESTAMP(23, 26, 42, 15, 8, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_261);
      ComplexEventDates_NoComplexEventDates_261.insert(ComplexEventStartDate_261.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_261);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_532;
        FIX::ComplexEventEndTime ComplexEventEndTime_532(FIX::UTCTIMEONLY(5, 19, 18));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_532);
        ComplexEventTimes_NoComplexEventTimes_532.insert(ComplexEventEndTime_532.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_532(FIX::UTCTIMEONLY(18, 13, 16));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_532);
        ComplexEventTimes_NoComplexEventTimes_532.insert(ComplexEventStartTime_532.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_532);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_127;
    FIX::ComplexEventCondition ComplexEventCondition_127(2);
    noComplexEvents_0_1.set(ComplexEventCondition_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventCondition_127.getString());
    FIX::ComplexEventPrice ComplexEventPrice_127;
    ComplexEventPrice_127.setString("13529342");
    noComplexEvents_0_1.set(ComplexEventPrice_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPrice_127.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_127(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceBoundaryMethod_127.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_127;
    ComplexEventPriceBoundaryPrecision_127.setString("85.260000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceBoundaryPrecision_127.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_127(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceTimeType_127.getString());
    FIX::ComplexEventType ComplexEventType_127(8);
    noComplexEvents_0_1.set(ComplexEventType_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventType_127.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_127;
    ComplexOptPayoutAmount_127.setString("21205082");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexOptPayoutAmount_127.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_127);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_262;
      FIX::ComplexEventEndDate ComplexEventEndDate_262(FIX::UTCTIMESTAMP(15, 3, 55, 5, 9, 2012));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_262);
      ComplexEventDates_NoComplexEventDates_262.insert(ComplexEventEndDate_262.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_262(FIX::UTCTIMESTAMP(11, 26, 14, 10, 2, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_262);
      ComplexEventDates_NoComplexEventDates_262.insert(ComplexEventStartDate_262.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_262);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_533;
        FIX::ComplexEventEndTime ComplexEventEndTime_533(FIX::UTCTIMEONLY(14, 18, 24));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_533);
        ComplexEventTimes_NoComplexEventTimes_533.insert(ComplexEventEndTime_533.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_533(FIX::UTCTIMEONLY(12, 29, 29));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_533);
        ComplexEventTimes_NoComplexEventTimes_533.insert(ComplexEventStartTime_533.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_533);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_534;
        FIX::ComplexEventEndTime ComplexEventEndTime_534(FIX::UTCTIMEONLY(22, 45, 53));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_534);
        ComplexEventTimes_NoComplexEventTimes_534.insert(ComplexEventEndTime_534.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_534(FIX::UTCTIMEONLY(14, 43, 56));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_534);
        ComplexEventTimes_NoComplexEventTimes_534.insert(ComplexEventStartTime_534.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_534);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_535;
        FIX::ComplexEventEndTime ComplexEventEndTime_535(FIX::UTCTIMEONLY(2, 51, 47));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_535);
        ComplexEventTimes_NoComplexEventTimes_535.insert(ComplexEventEndTime_535.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_535(FIX::UTCTIMEONLY(23, 40, 23));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_535);
        ComplexEventTimes_NoComplexEventTimes_535.insert(ComplexEventStartTime_535.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_535);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_263;
      FIX::ComplexEventEndDate ComplexEventEndDate_263(FIX::UTCTIMESTAMP(22, 37, 13, 20, 8, 2012));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_263);
      ComplexEventDates_NoComplexEventDates_263.insert(ComplexEventEndDate_263.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_263(FIX::UTCTIMESTAMP(1, 22, 33, 14, 11, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_263);
      ComplexEventDates_NoComplexEventDates_263.insert(ComplexEventStartDate_263.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_263);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_536;
        FIX::ComplexEventEndTime ComplexEventEndTime_536(FIX::UTCTIMEONLY(21, 52, 51));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_536);
        ComplexEventTimes_NoComplexEventTimes_536.insert(ComplexEventEndTime_536.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_536(FIX::UTCTIMEONLY(10, 26, 0));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_536);
        ComplexEventTimes_NoComplexEventTimes_536.insert(ComplexEventStartTime_536.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_536);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_537;
        FIX::ComplexEventEndTime ComplexEventEndTime_537(FIX::UTCTIMEONLY(16, 51, 42));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_537);
        ComplexEventTimes_NoComplexEventTimes_537.insert(ComplexEventEndTime_537.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_537(FIX::UTCTIMEONLY(7, 22, 32));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_537);
        ComplexEventTimes_NoComplexEventTimes_537.insert(ComplexEventStartTime_537.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_537);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_264;
      FIX::ComplexEventEndDate ComplexEventEndDate_264(FIX::UTCTIMESTAMP(21, 1, 27, 13, 9, 2008));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_264);
      ComplexEventDates_NoComplexEventDates_264.insert(ComplexEventEndDate_264.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_264(FIX::UTCTIMESTAMP(14, 54, 8, 20, 10, 2001));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_264);
      ComplexEventDates_NoComplexEventDates_264.insert(ComplexEventStartDate_264.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_264);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_538;
        FIX::ComplexEventEndTime ComplexEventEndTime_538(FIX::UTCTIMEONLY(4, 24, 25));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_538);
        ComplexEventTimes_NoComplexEventTimes_538.insert(ComplexEventEndTime_538.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_538(FIX::UTCTIMEONLY(23, 51, 36));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_538);
        ComplexEventTimes_NoComplexEventTimes_538.insert(ComplexEventStartTime_538.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_538);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_539;
        FIX::ComplexEventEndTime ComplexEventEndTime_539(FIX::UTCTIMEONLY(8, 19, 20));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_539);
        ComplexEventTimes_NoComplexEventTimes_539.insert(ComplexEventEndTime_539.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_539(FIX::UTCTIMEONLY(14, 35, 32));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_539);
        ComplexEventTimes_NoComplexEventTimes_539.insert(ComplexEventStartTime_539.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_539);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_125;
    FIX::EventDate EventDate_125("LOCALMKTDATE_82954668");
    noEvents_0_0.set(EventDate_125);
    EvntGrp_NoEvents_125.insert(EventDate_125.getString());
    FIX::EventPx EventPx_125;
    EventPx_125.setString("1667378");
    noEvents_0_0.set(EventPx_125);
    EvntGrp_NoEvents_125.insert(EventPx_125.getString());
    FIX::EventText EventText_125("STRING_616314724");
    noEvents_0_0.set(EventText_125);
    EvntGrp_NoEvents_125.insert(EventText_125.getString());
    FIX::EventTime EventTime_125(FIX::UTCTIMESTAMP(22, 36, 47, 8, 11, 2001));
    noEvents_0_0.set(EventTime_125);
    EvntGrp_NoEvents_125.insert(EventTime_125.getString());
    FIX::EventType EventType_125(14);
    noEvents_0_0.set(EventType_125);
    EvntGrp_NoEvents_125.insert(EventType_125.getString());
    all_values.push_back(EvntGrp_NoEvents_125);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_126;
    FIX::EventDate EventDate_126("LOCALMKTDATE_1777781459");
    noEvents_0_1.set(EventDate_126);
    EvntGrp_NoEvents_126.insert(EventDate_126.getString());
    FIX::EventPx EventPx_126;
    EventPx_126.setString("7212369");
    noEvents_0_1.set(EventPx_126);
    EvntGrp_NoEvents_126.insert(EventPx_126.getString());
    FIX::EventText EventText_126("STRING_204986845");
    noEvents_0_1.set(EventText_126);
    EvntGrp_NoEvents_126.insert(EventText_126.getString());
    FIX::EventTime EventTime_126(FIX::UTCTIMESTAMP(10, 49, 51, 10, 1, 2005));
    noEvents_0_1.set(EventTime_126);
    EvntGrp_NoEvents_126.insert(EventTime_126.getString());
    FIX::EventType EventType_126(15);
    noEvents_0_1.set(EventType_126);
    EvntGrp_NoEvents_126.insert(EventType_126.getString());
    all_values.push_back(EvntGrp_NoEvents_126);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_127;
    FIX::EventDate EventDate_127("LOCALMKTDATE_2003830982");
    noEvents_0_2.set(EventDate_127);
    EvntGrp_NoEvents_127.insert(EventDate_127.getString());
    FIX::EventPx EventPx_127;
    EventPx_127.setString("3679675");
    noEvents_0_2.set(EventPx_127);
    EvntGrp_NoEvents_127.insert(EventPx_127.getString());
    FIX::EventText EventText_127("STRING_977817174");
    noEvents_0_2.set(EventText_127);
    EvntGrp_NoEvents_127.insert(EventText_127.getString());
    FIX::EventTime EventTime_127(FIX::UTCTIMESTAMP(19, 24, 42, 24, 10, 2000));
    noEvents_0_2.set(EventTime_127);
    EvntGrp_NoEvents_127.insert(EventTime_127.getString());
    FIX::EventType EventType_127(11);
    noEvents_0_2.set(EventType_127);
    EvntGrp_NoEvents_127.insert(EventType_127.getString());
    all_values.push_back(EvntGrp_NoEvents_127);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_128;
    FIX::InstrumentPartyID InstrumentPartyID_128("STRING_1119758143");
    noInstrumentParties_0_0.set(InstrumentPartyID_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyID_128.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_128('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyIDSource_128.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_128(1949392721);
    noInstrumentParties_0_0.set(InstrumentPartyRole_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyRole_128.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_128);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265;
      FIX::InstrumentPartySubID InstrumentPartySubID_265("STRING_319769345");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_265);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265.insert(InstrumentPartySubID_265.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_265(1787535175);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_265);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265.insert(InstrumentPartySubIDType_265.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_129;
    FIX::InstrumentPartyID InstrumentPartyID_129("STRING_850065078");
    noInstrumentParties_0_1.set(InstrumentPartyID_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyID_129.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_129('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyIDSource_129.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_129(1417832987);
    noInstrumentParties_0_1.set(InstrumentPartyRole_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyRole_129.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_129);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266;
      FIX::InstrumentPartySubID InstrumentPartySubID_266("STRING_307528395");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_266);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266.insert(InstrumentPartySubID_266.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_266(1180453813);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_266);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266.insert(InstrumentPartySubIDType_266.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_141;
    FIX::SecurityAltID SecurityAltID_141("STRING_753248764");
    noSecurityAltID_0_0.set(SecurityAltID_141);
    SecAltIDGrp_NoSecurityAltID_141.insert(SecurityAltID_141.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_141("STRING_264907376");
    noSecurityAltID_0_0.set(SecurityAltIDSource_141);
    SecAltIDGrp_NoSecurityAltID_141.insert(SecurityAltIDSource_141.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_141);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_130;
  FIX::SecurityXML SecurityXML_131("XMLDATA_2039122093");
  msg.set(SecurityXML_131);
  FIX::SecurityXMLLen SecurityXMLLen_65(1448013989);
  msg.set(SecurityXMLLen_65);
  FIX::SecurityXMLSchema SecurityXMLSchema_65("STRING_978037411");
  msg.set(SecurityXMLSchema_65);
  SecurityXML_130.insert(SecurityXMLSchema_65.getString());
  all_values.push_back(SecurityXML_130);

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_3;
    FIX::LegBidForwardPoints LegBidForwardPoints_3;
    LegBidForwardPoints_3.setString("13043613");
    noLegs_0_0.set(LegBidForwardPoints_3);
    LegQuotGrp_NoLegs_3.insert(LegBidForwardPoints_3.getString());
    FIX::LegBidPx LegBidPx_3;
    LegBidPx_3.setString("13460049");
    noLegs_0_0.set(LegBidPx_3);
    LegQuotGrp_NoLegs_3.insert(LegBidPx_3.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_3;
    LegOfferForwardPoints_3.setString("18289706");
    noLegs_0_0.set(LegOfferForwardPoints_3);
    LegQuotGrp_NoLegs_3.insert(LegOfferForwardPoints_3.getString());
    FIX::LegOfferPx LegOfferPx_3;
    LegOfferPx_3.setString("11585033");
    noLegs_0_0.set(LegOfferPx_3);
    LegQuotGrp_NoLegs_3.insert(LegOfferPx_3.getString());
    FIX::LegOrderQty LegOrderQty_19;
    LegOrderQty_19.setString("4400810");
    noLegs_0_0.set(LegOrderQty_19);
    LegQuotGrp_NoLegs_3.insert(LegOrderQty_19.getString());
    FIX::LegPriceType LegPriceType_3(275622950);
    noLegs_0_0.set(LegPriceType_3);
    LegQuotGrp_NoLegs_3.insert(LegPriceType_3.getString());
    FIX::LegQty LegQty_19;
    LegQty_19.setString("21022551");
    noLegs_0_0.set(LegQty_19);
    LegQuotGrp_NoLegs_3.insert(LegQty_19.getString());
    FIX::LegRefID LegRefID_19("STRING_1820679598");
    noLegs_0_0.set(LegRefID_19);
    LegQuotGrp_NoLegs_3.insert(LegRefID_19.getString());
    FIX::LegSettlDate LegSettlDate_19("LOCALMKTDATE_1744363379");
    noLegs_0_0.set(LegSettlDate_19);
    LegQuotGrp_NoLegs_3.insert(LegSettlDate_19.getString());
    FIX::LegSettlType LegSettlType_19('9');
    noLegs_0_0.set(LegSettlType_19);
    LegQuotGrp_NoLegs_3.insert(LegSettlType_19.getString());
    FIX::LegSwapType LegSwapType_19(1);
    noLegs_0_0.set(LegSwapType_19);
    LegQuotGrp_NoLegs_3.insert(LegSwapType_19.getString());
    all_values.push_back(LegQuotGrp_NoLegs_3);

    // InstrumentLeg
    multiset<string> InstrumentLeg_102;
    FIX::EncodedLegIssuer EncodedLegIssuer_102("DATA_1681934884");
    noLegs_0_0.set(EncodedLegIssuer_102);
    InstrumentLeg_102.insert(EncodedLegIssuer_102.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_102(2101236017);
    noLegs_0_0.set(EncodedLegIssuerLen_102);
    InstrumentLeg_102.insert(EncodedLegIssuerLen_102.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_102("DATA_691363712");
    noLegs_0_0.set(EncodedLegSecurityDesc_102);
    InstrumentLeg_102.insert(EncodedLegSecurityDesc_102.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_102(1483843957);
    noLegs_0_0.set(EncodedLegSecurityDescLen_102);
    InstrumentLeg_102.insert(EncodedLegSecurityDescLen_102.getString());
    FIX::LegCFICode LegCFICode_102("STRING_1124174320");
    noLegs_0_0.set(LegCFICode_102);
    InstrumentLeg_102.insert(LegCFICode_102.getString());
    FIX::LegContractMultiplier LegContractMultiplier_102;
    LegContractMultiplier_102.setString("10111330");
    noLegs_0_0.set(LegContractMultiplier_102);
    InstrumentLeg_102.insert(LegContractMultiplier_102.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_102(1123895485);
    noLegs_0_0.set(LegContractMultiplierUnit_102);
    InstrumentLeg_102.insert(LegContractMultiplierUnit_102.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_102("MONTHYEAR_1974239398");
    noLegs_0_0.set(LegContractSettlMonth_102);
    InstrumentLeg_102.insert(LegContractSettlMonth_102.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_102("COUNTRY_1113674607");
    noLegs_0_0.set(LegCountryOfIssue_102);
    InstrumentLeg_102.insert(LegCountryOfIssue_102.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_102("LOCALMKTDATE_394244824");
    noLegs_0_0.set(LegCouponPaymentDate_102);
    InstrumentLeg_102.insert(LegCouponPaymentDate_102.getString());
    FIX::LegCouponRate LegCouponRate_102;
    LegCouponRate_102.setString("77.700000");
    noLegs_0_0.set(LegCouponRate_102);
    InstrumentLeg_102.insert(LegCouponRate_102.getString());
    FIX::LegCreditRating LegCreditRating_102("STRING_1421203002");
    noLegs_0_0.set(LegCreditRating_102);
    InstrumentLeg_102.insert(LegCreditRating_102.getString());
    FIX::LegCurrency LegCurrency_102("CHF");
    noLegs_0_0.set(LegCurrency_102);
    InstrumentLeg_102.insert(LegCurrency_102.getString());
    FIX::LegDatedDate LegDatedDate_102("LOCALMKTDATE_26968119");
    noLegs_0_0.set(LegDatedDate_102);
    InstrumentLeg_102.insert(LegDatedDate_102.getString());
    FIX::LegExerciseStyle LegExerciseStyle_102(1839606013);
    noLegs_0_0.set(LegExerciseStyle_102);
    InstrumentLeg_102.insert(LegExerciseStyle_102.getString());
    FIX::LegFactor LegFactor_102;
    LegFactor_102.setString("5406904");
    noLegs_0_0.set(LegFactor_102);
    InstrumentLeg_102.insert(LegFactor_102.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_102(1474982108);
    noLegs_0_0.set(LegFlowScheduleType_102);
    InstrumentLeg_102.insert(LegFlowScheduleType_102.getString());
    FIX::LegInstrRegistry LegInstrRegistry_102("STRING_670159777");
    noLegs_0_0.set(LegInstrRegistry_102);
    InstrumentLeg_102.insert(LegInstrRegistry_102.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_102("LOCALMKTDATE_1391843923");
    noLegs_0_0.set(LegInterestAccrualDate_102);
    InstrumentLeg_102.insert(LegInterestAccrualDate_102.getString());
    FIX::LegIssueDate LegIssueDate_102("LOCALMKTDATE_631859783");
    noLegs_0_0.set(LegIssueDate_102);
    InstrumentLeg_102.insert(LegIssueDate_102.getString());
    FIX::LegIssuer LegIssuer_102("STRING_2016164743");
    noLegs_0_0.set(LegIssuer_102);
    InstrumentLeg_102.insert(LegIssuer_102.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_102("STRING_1073330949");
    noLegs_0_0.set(LegLocaleOfIssue_102);
    InstrumentLeg_102.insert(LegLocaleOfIssue_102.getString());
    FIX::LegMaturityDate LegMaturityDate_102("LOCALMKTDATE_1790363154");
    noLegs_0_0.set(LegMaturityDate_102);
    InstrumentLeg_102.insert(LegMaturityDate_102.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_102("MONTHYEAR_308762177");
    noLegs_0_0.set(LegMaturityMonthYear_102);
    InstrumentLeg_102.insert(LegMaturityMonthYear_102.getString());
    FIX::LegMaturityTime LegMaturityTime_102("TZTIMEONLY_1348953899");
    noLegs_0_0.set(LegMaturityTime_102);
    InstrumentLeg_102.insert(LegMaturityTime_102.getString());
    FIX::LegOptAttribute LegOptAttribute_102('1');
    noLegs_0_0.set(LegOptAttribute_102);
    InstrumentLeg_102.insert(LegOptAttribute_102.getString());
    FIX::LegOptionRatio LegOptionRatio_102;
    LegOptionRatio_102.setString("21294417");
    noLegs_0_0.set(LegOptionRatio_102);
    InstrumentLeg_102.insert(LegOptionRatio_102.getString());
    FIX::LegPool LegPool_102("STRING_945833631");
    noLegs_0_0.set(LegPool_102);
    InstrumentLeg_102.insert(LegPool_102.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_102("STRING_579128845");
    noLegs_0_0.set(LegPriceUnitOfMeasure_102);
    InstrumentLeg_102.insert(LegPriceUnitOfMeasure_102.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_102;
    LegPriceUnitOfMeasureQty_102.setString("12024904");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_102);
    InstrumentLeg_102.insert(LegPriceUnitOfMeasureQty_102.getString());
    FIX::LegProduct LegProduct_102(480284867);
    noLegs_0_0.set(LegProduct_102);
    InstrumentLeg_102.insert(LegProduct_102.getString());
    FIX::LegPutOrCall LegPutOrCall_102(532881214);
    noLegs_0_0.set(LegPutOrCall_102);
    InstrumentLeg_102.insert(LegPutOrCall_102.getString());
    FIX::LegRatioQty LegRatioQty_102;
    LegRatioQty_102.setString("18938541");
    noLegs_0_0.set(LegRatioQty_102);
    InstrumentLeg_102.insert(LegRatioQty_102.getString());
    FIX::LegRedemptionDate LegRedemptionDate_102("LOCALMKTDATE_1964128825");
    noLegs_0_0.set(LegRedemptionDate_102);
    InstrumentLeg_102.insert(LegRedemptionDate_102.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_102("STRING_1657055534");
    noLegs_0_0.set(LegRepoCollateralSecurityType_102);
    InstrumentLeg_102.insert(LegRepoCollateralSecurityType_102.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_102;
    LegRepurchaseRate_102.setString("35.890000");
    noLegs_0_0.set(LegRepurchaseRate_102);
    InstrumentLeg_102.insert(LegRepurchaseRate_102.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_102(940540662);
    noLegs_0_0.set(LegRepurchaseTerm_102);
    InstrumentLeg_102.insert(LegRepurchaseTerm_102.getString());
    FIX::LegSecurityDesc LegSecurityDesc_102("STRING_1483811284");
    noLegs_0_0.set(LegSecurityDesc_102);
    InstrumentLeg_102.insert(LegSecurityDesc_102.getString());
    FIX::LegSecurityExchange LegSecurityExchange_102("EXCHANGE_1871178197");
    noLegs_0_0.set(LegSecurityExchange_102);
    InstrumentLeg_102.insert(LegSecurityExchange_102.getString());
    FIX::LegSecurityID LegSecurityID_102("STRING_1334785486");
    noLegs_0_0.set(LegSecurityID_102);
    InstrumentLeg_102.insert(LegSecurityID_102.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_102("STRING_734385407");
    noLegs_0_0.set(LegSecurityIDSource_102);
    InstrumentLeg_102.insert(LegSecurityIDSource_102.getString());
    FIX::LegSecuritySubType LegSecuritySubType_102("STRING_1144897551");
    noLegs_0_0.set(LegSecuritySubType_102);
    InstrumentLeg_102.insert(LegSecuritySubType_102.getString());
    FIX::LegSecurityType LegSecurityType_102("STRING_762000475");
    noLegs_0_0.set(LegSecurityType_102);
    InstrumentLeg_102.insert(LegSecurityType_102.getString());
    FIX::LegSide LegSide_102('1');
    noLegs_0_0.set(LegSide_102);
    InstrumentLeg_102.insert(LegSide_102.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_102("STRING_1171865670");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_102);
    InstrumentLeg_102.insert(LegStateOrProvinceOfIssue_102.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_102("CAN");
    noLegs_0_0.set(LegStrikeCurrency_102);
    InstrumentLeg_102.insert(LegStrikeCurrency_102.getString());
    FIX::LegStrikePrice LegStrikePrice_102;
    LegStrikePrice_102.setString("4993641");
    noLegs_0_0.set(LegStrikePrice_102);
    InstrumentLeg_102.insert(LegStrikePrice_102.getString());
    FIX::LegSymbol LegSymbol_102("STRING_1124282617");
    noLegs_0_0.set(LegSymbol_102);
    InstrumentLeg_102.insert(LegSymbol_102.getString());
    FIX::LegSymbolSfx LegSymbolSfx_102("STRING_1168488082");
    noLegs_0_0.set(LegSymbolSfx_102);
    InstrumentLeg_102.insert(LegSymbolSfx_102.getString());
    FIX::LegTimeUnit LegTimeUnit_102("STRING_1131223914");
    noLegs_0_0.set(LegTimeUnit_102);
    InstrumentLeg_102.insert(LegTimeUnit_102.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_102("STRING_992963713");
    noLegs_0_0.set(LegUnitOfMeasure_102);
    InstrumentLeg_102.insert(LegUnitOfMeasure_102.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_102;
    LegUnitOfMeasureQty_102.setString("943353");
    noLegs_0_0.set(LegUnitOfMeasureQty_102);
    InstrumentLeg_102.insert(LegUnitOfMeasureQty_102.getString());
    all_values.push_back(InstrumentLeg_102);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_203;
      FIX::LegSecurityAltID LegSecurityAltID_203("STRING_1301725890");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_203);
      LegSecAltIDGrp_NoLegSecurityAltID_203.insert(LegSecurityAltID_203.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_203("STRING_1443289283");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_203);
      LegSecAltIDGrp_NoLegSecurityAltID_203.insert(LegSecurityAltIDSource_203.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_203);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_204;
      FIX::LegSecurityAltID LegSecurityAltID_204("STRING_371754390");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_204);
      LegSecAltIDGrp_NoLegSecurityAltID_204.insert(LegSecurityAltID_204.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_204("STRING_1283684018");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_204);
      LegSecAltIDGrp_NoLegSecurityAltID_204.insert(LegSecurityAltIDSource_204.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_204);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_11;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_11("EUR");
    noLegs_0_0.set(LegBenchmarkCurveCurrency_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurveCurrency_11.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_11("STRING_338690837");
    noLegs_0_0.set(LegBenchmarkCurveName_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurveName_11.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_11("STRING_721924133");
    noLegs_0_0.set(LegBenchmarkCurvePoint_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkCurvePoint_11.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_11;
    LegBenchmarkPrice_11.setString("14837644");
    noLegs_0_0.set(LegBenchmarkPrice_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkPrice_11.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_11(85061369);
    noLegs_0_0.set(LegBenchmarkPriceType_11);
    LegBenchmarkCurveData_11.insert(LegBenchmarkPriceType_11.getString());
    all_values.push_back(LegBenchmarkCurveData_11);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_38;
      FIX::LegStipulationType LegStipulationType_38("STRING_993336336");
      noLegStipulations_0_1_0.set(LegStipulationType_38);
      LegStipulations_NoLegStipulations_38.insert(LegStipulationType_38.getString());
      FIX::LegStipulationValue LegStipulationValue_38("STRING_842564959");
      noLegStipulations_0_1_0.set(LegStipulationValue_38);
      LegStipulations_NoLegStipulations_38.insert(LegStipulationValue_38.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_38);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_39;
      FIX::LegStipulationType LegStipulationType_39("STRING_1479109972");
      noLegStipulations_0_1_1.set(LegStipulationType_39);
      LegStipulations_NoLegStipulations_39.insert(LegStipulationType_39.getString());
      FIX::LegStipulationValue LegStipulationValue_39("STRING_329663973");
      noLegStipulations_0_1_1.set(LegStipulationValue_39);
      LegStipulations_NoLegStipulations_39.insert(LegStipulationValue_39.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_39);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_120;
      FIX::NestedPartyID NestedPartyID_120("STRING_666411810");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyID_120.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_120('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyIDSource_120.getString());
      FIX::NestedPartyRole NestedPartyRole_120(1711157059);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyRole_120.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_120);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_239;
        FIX::NestedPartySubID NestedPartySubID_239("STRING_300003116");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_239);
        NstdPtysSubGrp_NoNestedPartySubIDs_239.insert(NestedPartySubID_239.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_239(735539082);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_239);
        NstdPtysSubGrp_NoNestedPartySubIDs_239.insert(NestedPartySubIDType_239.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_239);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_240;
        FIX::NestedPartySubID NestedPartySubID_240("STRING_1882535126");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_240);
        NstdPtysSubGrp_NoNestedPartySubIDs_240.insert(NestedPartySubID_240.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_240(76647276);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_240);
        NstdPtysSubGrp_NoNestedPartySubIDs_240.insert(NestedPartySubIDType_240.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_240);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_121;
      FIX::NestedPartyID NestedPartyID_121("STRING_1234903212");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyID_121.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_121('8');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyIDSource_121.getString());
      FIX::NestedPartyRole NestedPartyRole_121(1245135358);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyRole_121.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_121);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_241;
        FIX::NestedPartySubID NestedPartySubID_241("STRING_1852297808");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_241);
        NstdPtysSubGrp_NoNestedPartySubIDs_241.insert(NestedPartySubID_241.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_241(1339470742);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_241);
        NstdPtysSubGrp_NoNestedPartySubIDs_241.insert(NestedPartySubIDType_241.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_241);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_242;
        FIX::NestedPartySubID NestedPartySubID_242("STRING_992746898");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_242);
        NstdPtysSubGrp_NoNestedPartySubIDs_242.insert(NestedPartySubID_242.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_242(1006540051);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_242);
        NstdPtysSubGrp_NoNestedPartySubIDs_242.insert(NestedPartySubIDType_242.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_242);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_1;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_4;
    FIX::LegBidForwardPoints LegBidForwardPoints_4;
    LegBidForwardPoints_4.setString("6352763");
    noLegs_0_1.set(LegBidForwardPoints_4);
    LegQuotGrp_NoLegs_4.insert(LegBidForwardPoints_4.getString());
    FIX::LegBidPx LegBidPx_4;
    LegBidPx_4.setString("13645012");
    noLegs_0_1.set(LegBidPx_4);
    LegQuotGrp_NoLegs_4.insert(LegBidPx_4.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_4;
    LegOfferForwardPoints_4.setString("1427404");
    noLegs_0_1.set(LegOfferForwardPoints_4);
    LegQuotGrp_NoLegs_4.insert(LegOfferForwardPoints_4.getString());
    FIX::LegOfferPx LegOfferPx_4;
    LegOfferPx_4.setString("8769156");
    noLegs_0_1.set(LegOfferPx_4);
    LegQuotGrp_NoLegs_4.insert(LegOfferPx_4.getString());
    FIX::LegOrderQty LegOrderQty_20;
    LegOrderQty_20.setString("1679008");
    noLegs_0_1.set(LegOrderQty_20);
    LegQuotGrp_NoLegs_4.insert(LegOrderQty_20.getString());
    FIX::LegPriceType LegPriceType_4(481431258);
    noLegs_0_1.set(LegPriceType_4);
    LegQuotGrp_NoLegs_4.insert(LegPriceType_4.getString());
    FIX::LegQty LegQty_20;
    LegQty_20.setString("15988397");
    noLegs_0_1.set(LegQty_20);
    LegQuotGrp_NoLegs_4.insert(LegQty_20.getString());
    FIX::LegRefID LegRefID_20("STRING_1651665326");
    noLegs_0_1.set(LegRefID_20);
    LegQuotGrp_NoLegs_4.insert(LegRefID_20.getString());
    FIX::LegSettlDate LegSettlDate_20("LOCALMKTDATE_566492628");
    noLegs_0_1.set(LegSettlDate_20);
    LegQuotGrp_NoLegs_4.insert(LegSettlDate_20.getString());
    FIX::LegSettlType LegSettlType_20('2');
    noLegs_0_1.set(LegSettlType_20);
    LegQuotGrp_NoLegs_4.insert(LegSettlType_20.getString());
    FIX::LegSwapType LegSwapType_20(5);
    noLegs_0_1.set(LegSwapType_20);
    LegQuotGrp_NoLegs_4.insert(LegSwapType_20.getString());
    all_values.push_back(LegQuotGrp_NoLegs_4);

    // InstrumentLeg
    multiset<string> InstrumentLeg_103;
    FIX::EncodedLegIssuer EncodedLegIssuer_103("DATA_1409057587");
    noLegs_0_1.set(EncodedLegIssuer_103);
    InstrumentLeg_103.insert(EncodedLegIssuer_103.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_103(1469035411);
    noLegs_0_1.set(EncodedLegIssuerLen_103);
    InstrumentLeg_103.insert(EncodedLegIssuerLen_103.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_103("DATA_827181988");
    noLegs_0_1.set(EncodedLegSecurityDesc_103);
    InstrumentLeg_103.insert(EncodedLegSecurityDesc_103.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_103(1975317095);
    noLegs_0_1.set(EncodedLegSecurityDescLen_103);
    InstrumentLeg_103.insert(EncodedLegSecurityDescLen_103.getString());
    FIX::LegCFICode LegCFICode_103("STRING_2135447222");
    noLegs_0_1.set(LegCFICode_103);
    InstrumentLeg_103.insert(LegCFICode_103.getString());
    FIX::LegContractMultiplier LegContractMultiplier_103;
    LegContractMultiplier_103.setString("18912313");
    noLegs_0_1.set(LegContractMultiplier_103);
    InstrumentLeg_103.insert(LegContractMultiplier_103.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_103(1538990506);
    noLegs_0_1.set(LegContractMultiplierUnit_103);
    InstrumentLeg_103.insert(LegContractMultiplierUnit_103.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_103("MONTHYEAR_1416375859");
    noLegs_0_1.set(LegContractSettlMonth_103);
    InstrumentLeg_103.insert(LegContractSettlMonth_103.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_103("COUNTRY_43750836");
    noLegs_0_1.set(LegCountryOfIssue_103);
    InstrumentLeg_103.insert(LegCountryOfIssue_103.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_103("LOCALMKTDATE_127045940");
    noLegs_0_1.set(LegCouponPaymentDate_103);
    InstrumentLeg_103.insert(LegCouponPaymentDate_103.getString());
    FIX::LegCouponRate LegCouponRate_103;
    LegCouponRate_103.setString("73.370000");
    noLegs_0_1.set(LegCouponRate_103);
    InstrumentLeg_103.insert(LegCouponRate_103.getString());
    FIX::LegCreditRating LegCreditRating_103("STRING_120398112");
    noLegs_0_1.set(LegCreditRating_103);
    InstrumentLeg_103.insert(LegCreditRating_103.getString());
    FIX::LegCurrency LegCurrency_103("CHF");
    noLegs_0_1.set(LegCurrency_103);
    InstrumentLeg_103.insert(LegCurrency_103.getString());
    FIX::LegDatedDate LegDatedDate_103("LOCALMKTDATE_1365533471");
    noLegs_0_1.set(LegDatedDate_103);
    InstrumentLeg_103.insert(LegDatedDate_103.getString());
    FIX::LegExerciseStyle LegExerciseStyle_103(1580592631);
    noLegs_0_1.set(LegExerciseStyle_103);
    InstrumentLeg_103.insert(LegExerciseStyle_103.getString());
    FIX::LegFactor LegFactor_103;
    LegFactor_103.setString("17155755");
    noLegs_0_1.set(LegFactor_103);
    InstrumentLeg_103.insert(LegFactor_103.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_103(557520565);
    noLegs_0_1.set(LegFlowScheduleType_103);
    InstrumentLeg_103.insert(LegFlowScheduleType_103.getString());
    FIX::LegInstrRegistry LegInstrRegistry_103("STRING_425855882");
    noLegs_0_1.set(LegInstrRegistry_103);
    InstrumentLeg_103.insert(LegInstrRegistry_103.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_103("LOCALMKTDATE_574631996");
    noLegs_0_1.set(LegInterestAccrualDate_103);
    InstrumentLeg_103.insert(LegInterestAccrualDate_103.getString());
    FIX::LegIssueDate LegIssueDate_103("LOCALMKTDATE_1192796942");
    noLegs_0_1.set(LegIssueDate_103);
    InstrumentLeg_103.insert(LegIssueDate_103.getString());
    FIX::LegIssuer LegIssuer_103("STRING_1790357171");
    noLegs_0_1.set(LegIssuer_103);
    InstrumentLeg_103.insert(LegIssuer_103.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_103("STRING_717372417");
    noLegs_0_1.set(LegLocaleOfIssue_103);
    InstrumentLeg_103.insert(LegLocaleOfIssue_103.getString());
    FIX::LegMaturityDate LegMaturityDate_103("LOCALMKTDATE_2069712585");
    noLegs_0_1.set(LegMaturityDate_103);
    InstrumentLeg_103.insert(LegMaturityDate_103.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_103("MONTHYEAR_1958258047");
    noLegs_0_1.set(LegMaturityMonthYear_103);
    InstrumentLeg_103.insert(LegMaturityMonthYear_103.getString());
    FIX::LegMaturityTime LegMaturityTime_103("TZTIMEONLY_1198803676");
    noLegs_0_1.set(LegMaturityTime_103);
    InstrumentLeg_103.insert(LegMaturityTime_103.getString());
    FIX::LegOptAttribute LegOptAttribute_103('1');
    noLegs_0_1.set(LegOptAttribute_103);
    InstrumentLeg_103.insert(LegOptAttribute_103.getString());
    FIX::LegOptionRatio LegOptionRatio_103;
    LegOptionRatio_103.setString("14624397");
    noLegs_0_1.set(LegOptionRatio_103);
    InstrumentLeg_103.insert(LegOptionRatio_103.getString());
    FIX::LegPool LegPool_103("STRING_1765296304");
    noLegs_0_1.set(LegPool_103);
    InstrumentLeg_103.insert(LegPool_103.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_103("STRING_1510994152");
    noLegs_0_1.set(LegPriceUnitOfMeasure_103);
    InstrumentLeg_103.insert(LegPriceUnitOfMeasure_103.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_103;
    LegPriceUnitOfMeasureQty_103.setString("19599577");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_103);
    InstrumentLeg_103.insert(LegPriceUnitOfMeasureQty_103.getString());
    FIX::LegProduct LegProduct_103(1026870243);
    noLegs_0_1.set(LegProduct_103);
    InstrumentLeg_103.insert(LegProduct_103.getString());
    FIX::LegPutOrCall LegPutOrCall_103(832545916);
    noLegs_0_1.set(LegPutOrCall_103);
    InstrumentLeg_103.insert(LegPutOrCall_103.getString());
    FIX::LegRatioQty LegRatioQty_103;
    LegRatioQty_103.setString("6396560");
    noLegs_0_1.set(LegRatioQty_103);
    InstrumentLeg_103.insert(LegRatioQty_103.getString());
    FIX::LegRedemptionDate LegRedemptionDate_103("LOCALMKTDATE_854703690");
    noLegs_0_1.set(LegRedemptionDate_103);
    InstrumentLeg_103.insert(LegRedemptionDate_103.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_103("STRING_820509490");
    noLegs_0_1.set(LegRepoCollateralSecurityType_103);
    InstrumentLeg_103.insert(LegRepoCollateralSecurityType_103.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_103;
    LegRepurchaseRate_103.setString("38.010000");
    noLegs_0_1.set(LegRepurchaseRate_103);
    InstrumentLeg_103.insert(LegRepurchaseRate_103.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_103(246210548);
    noLegs_0_1.set(LegRepurchaseTerm_103);
    InstrumentLeg_103.insert(LegRepurchaseTerm_103.getString());
    FIX::LegSecurityDesc LegSecurityDesc_103("STRING_89401701");
    noLegs_0_1.set(LegSecurityDesc_103);
    InstrumentLeg_103.insert(LegSecurityDesc_103.getString());
    FIX::LegSecurityExchange LegSecurityExchange_103("EXCHANGE_427154637");
    noLegs_0_1.set(LegSecurityExchange_103);
    InstrumentLeg_103.insert(LegSecurityExchange_103.getString());
    FIX::LegSecurityID LegSecurityID_103("STRING_373256489");
    noLegs_0_1.set(LegSecurityID_103);
    InstrumentLeg_103.insert(LegSecurityID_103.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_103("STRING_1240829039");
    noLegs_0_1.set(LegSecurityIDSource_103);
    InstrumentLeg_103.insert(LegSecurityIDSource_103.getString());
    FIX::LegSecuritySubType LegSecuritySubType_103("STRING_547552750");
    noLegs_0_1.set(LegSecuritySubType_103);
    InstrumentLeg_103.insert(LegSecuritySubType_103.getString());
    FIX::LegSecurityType LegSecurityType_103("STRING_1735205642");
    noLegs_0_1.set(LegSecurityType_103);
    InstrumentLeg_103.insert(LegSecurityType_103.getString());
    FIX::LegSide LegSide_103('1');
    noLegs_0_1.set(LegSide_103);
    InstrumentLeg_103.insert(LegSide_103.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_103("STRING_1913086221");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_103);
    InstrumentLeg_103.insert(LegStateOrProvinceOfIssue_103.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_103("EUR");
    noLegs_0_1.set(LegStrikeCurrency_103);
    InstrumentLeg_103.insert(LegStrikeCurrency_103.getString());
    FIX::LegStrikePrice LegStrikePrice_103;
    LegStrikePrice_103.setString("3231231");
    noLegs_0_1.set(LegStrikePrice_103);
    InstrumentLeg_103.insert(LegStrikePrice_103.getString());
    FIX::LegSymbol LegSymbol_103("STRING_1594170507");
    noLegs_0_1.set(LegSymbol_103);
    InstrumentLeg_103.insert(LegSymbol_103.getString());
    FIX::LegSymbolSfx LegSymbolSfx_103("STRING_1246830766");
    noLegs_0_1.set(LegSymbolSfx_103);
    InstrumentLeg_103.insert(LegSymbolSfx_103.getString());
    FIX::LegTimeUnit LegTimeUnit_103("STRING_1515920080");
    noLegs_0_1.set(LegTimeUnit_103);
    InstrumentLeg_103.insert(LegTimeUnit_103.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_103("STRING_1237044030");
    noLegs_0_1.set(LegUnitOfMeasure_103);
    InstrumentLeg_103.insert(LegUnitOfMeasure_103.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_103;
    LegUnitOfMeasureQty_103.setString("19642031");
    noLegs_0_1.set(LegUnitOfMeasureQty_103);
    InstrumentLeg_103.insert(LegUnitOfMeasureQty_103.getString());
    all_values.push_back(InstrumentLeg_103);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_205;
      FIX::LegSecurityAltID LegSecurityAltID_205("STRING_1047818430");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_205);
      LegSecAltIDGrp_NoLegSecurityAltID_205.insert(LegSecurityAltID_205.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_205("STRING_1015523211");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_205);
      LegSecAltIDGrp_NoLegSecurityAltID_205.insert(LegSecurityAltIDSource_205.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_205);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_206;
      FIX::LegSecurityAltID LegSecurityAltID_206("STRING_811734082");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_206);
      LegSecAltIDGrp_NoLegSecurityAltID_206.insert(LegSecurityAltID_206.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_206("STRING_362774508");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_206);
      LegSecAltIDGrp_NoLegSecurityAltID_206.insert(LegSecurityAltIDSource_206.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_206);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_207;
      FIX::LegSecurityAltID LegSecurityAltID_207("STRING_633335867");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_207);
      LegSecAltIDGrp_NoLegSecurityAltID_207.insert(LegSecurityAltID_207.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_207("STRING_175244587");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_207);
      LegSecAltIDGrp_NoLegSecurityAltID_207.insert(LegSecurityAltIDSource_207.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_207);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_12;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_12("GBP");
    noLegs_0_1.set(LegBenchmarkCurveCurrency_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkCurveCurrency_12.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_12("STRING_1007790503");
    noLegs_0_1.set(LegBenchmarkCurveName_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkCurveName_12.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_12("STRING_814904682");
    noLegs_0_1.set(LegBenchmarkCurvePoint_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkCurvePoint_12.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_12;
    LegBenchmarkPrice_12.setString("3674261");
    noLegs_0_1.set(LegBenchmarkPrice_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkPrice_12.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_12(1828299993);
    noLegs_0_1.set(LegBenchmarkPriceType_12);
    LegBenchmarkCurveData_12.insert(LegBenchmarkPriceType_12.getString());
    all_values.push_back(LegBenchmarkCurveData_12);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_40;
      FIX::LegStipulationType LegStipulationType_40("STRING_613636701");
      noLegStipulations_1_1_0.set(LegStipulationType_40);
      LegStipulations_NoLegStipulations_40.insert(LegStipulationType_40.getString());
      FIX::LegStipulationValue LegStipulationValue_40("STRING_1917701694");
      noLegStipulations_1_1_0.set(LegStipulationValue_40);
      LegStipulations_NoLegStipulations_40.insert(LegStipulationValue_40.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_40);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_122;
      FIX::NestedPartyID NestedPartyID_122("STRING_986893190");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyID_122.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_122('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyIDSource_122.getString());
      FIX::NestedPartyRole NestedPartyRole_122(25532222);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyRole_122.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_122);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_243;
        FIX::NestedPartySubID NestedPartySubID_243("STRING_2115153909");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_243);
        NstdPtysSubGrp_NoNestedPartySubIDs_243.insert(NestedPartySubID_243.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_243(1938618443);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_243);
        NstdPtysSubGrp_NoNestedPartySubIDs_243.insert(NestedPartySubIDType_243.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_243);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_244;
        FIX::NestedPartySubID NestedPartySubID_244("STRING_1742929809");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_244);
        NstdPtysSubGrp_NoNestedPartySubIDs_244.insert(NestedPartySubID_244.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_244(639869031);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_244);
        NstdPtysSubGrp_NoNestedPartySubIDs_244.insert(NestedPartySubIDType_244.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_244);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_245;
        FIX::NestedPartySubID NestedPartySubID_245("STRING_114257933");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_245);
        NstdPtysSubGrp_NoNestedPartySubIDs_245.insert(NestedPartySubID_245.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_245(1189616669);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_245);
        NstdPtysSubGrp_NoNestedPartySubIDs_245.insert(NestedPartySubIDType_245.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_245);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_22;
  FIX::CashOrderQty CashOrderQty_22;
  CashOrderQty_22.setString("18866997");
  msg.set(CashOrderQty_22);
  OrderQtyData_22.insert(CashOrderQty_22.getString());
  FIX::OrderPercent OrderPercent_22;
  OrderPercent_22.setString("80.130000");
  msg.set(OrderPercent_22);
  OrderQtyData_22.insert(OrderPercent_22.getString());
  FIX::OrderQty OrderQty_30;
  OrderQty_30.setString("2791770");
  msg.set(OrderQty_30);
  OrderQtyData_22.insert(OrderQty_30.getString());
  FIX::RoundingDirection RoundingDirection_22('0');
  msg.set(RoundingDirection_22);
  OrderQtyData_22.insert(RoundingDirection_22.getString());
  FIX::RoundingModulus RoundingModulus_22;
  RoundingModulus_22.setString("9208433");
  msg.set(RoundingModulus_22);
  OrderQtyData_22.insert(RoundingModulus_22.getString());
  all_values.push_back(OrderQtyData_22);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_116;
    FIX::PartyID PartyID_116("STRING_571458896");
    noPartyIDs_0_0.set(PartyID_116);
    Parties_NoPartyIDs_116.insert(PartyID_116.getString());
    FIX::PartyIDSource PartyIDSource_116('B');
    noPartyIDs_0_0.set(PartyIDSource_116);
    Parties_NoPartyIDs_116.insert(PartyIDSource_116.getString());
    FIX::PartyRole PartyRole_116(35);
    noPartyIDs_0_0.set(PartyRole_116);
    Parties_NoPartyIDs_116.insert(PartyRole_116.getString());
    all_values.push_back(Parties_NoPartyIDs_116);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_231;
      FIX::PartySubID PartySubID_231("STRING_1907822052");
      noPartySubIDs_0_1_0.set(PartySubID_231);
      PtysSubGrp_NoPartySubIDs_231.insert(PartySubID_231.getString());
      FIX::PartySubIDType PartySubIDType_231(29);
      noPartySubIDs_0_1_0.set(PartySubIDType_231);
      PtysSubGrp_NoPartySubIDs_231.insert(PartySubIDType_231.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_231);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_232;
      FIX::PartySubID PartySubID_232("STRING_717517226");
      noPartySubIDs_0_1_1.set(PartySubID_232);
      PtysSubGrp_NoPartySubIDs_232.insert(PartySubID_232.getString());
      FIX::PartySubIDType PartySubIDType_232(19);
      noPartySubIDs_0_1_1.set(PartySubIDType_232);
      PtysSubGrp_NoPartySubIDs_232.insert(PartySubIDType_232.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_232);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_7;
    FIX::QuoteQualifier QuoteQualifier_7('1');
    noQuoteQualifiers_0_0.set(QuoteQualifier_7);
    QuotQualGrp_NoQuoteQualifiers_7.insert(QuoteQualifier_7.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_7);

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_8;
    FIX::QuoteQualifier QuoteQualifier_8('4');
    noQuoteQualifiers_0_1.set(QuoteQualifier_8);
    QuotQualGrp_NoQuoteQualifiers_8.insert(QuoteQualifier_8.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_8);

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_2;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_9;
    FIX::QuoteQualifier QuoteQualifier_9('1');
    noQuoteQualifiers_0_2.set(QuoteQualifier_9);
    QuotQualGrp_NoQuoteQualifiers_9.insert(QuoteQualifier_9.getString());
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_9);

    msg.addGroup(noQuoteQualifiers_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_25;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_25("GBP");
  msg.set(BenchmarkCurveCurrency_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurveCurrency_25.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_25("STRING_LIBID");
  msg.set(BenchmarkCurveName_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurveName_25.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_25("STRING_537989621");
  msg.set(BenchmarkCurvePoint_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkCurvePoint_25.getString());
  FIX::BenchmarkPrice BenchmarkPrice_25;
  BenchmarkPrice_25.setString("12302103");
  msg.set(BenchmarkPrice_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkPrice_25.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_25(1234259802);
  msg.set(BenchmarkPriceType_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkPriceType_25.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_25("STRING_1112604805");
  msg.set(BenchmarkSecurityID_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkSecurityID_25.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_25("STRING_1197880645");
  msg.set(BenchmarkSecurityIDSource_25);
  SpreadOrBenchmarkCurveData_25.insert(BenchmarkSecurityIDSource_25.getString());
  FIX::Spread Spread_25;
  Spread_25.setString("10253945");
  msg.set(Spread_25);
  SpreadOrBenchmarkCurveData_25.insert(Spread_25.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_25);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_35;
    FIX::StipulationType StipulationType_35("STRING_MPR");
    noStipulations_0_0.set(StipulationType_35);
    Stipulations_NoStipulations_35.insert(StipulationType_35.getString());
    FIX::StipulationValue StipulationValue_35("STRING_1139652531");
    noStipulations_0_0.set(StipulationValue_35);
    Stipulations_NoStipulations_35.insert(StipulationValue_35.getString());
    all_values.push_back(Stipulations_NoStipulations_35);

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_97;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_97("DATA_1576965825");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_97);
    UnderlyingInstrument_97.insert(EncodedUnderlyingIssuer_97.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_97(622346897);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_97);
    UnderlyingInstrument_97.insert(EncodedUnderlyingIssuerLen_97.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_97("DATA_29361039");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_97);
    UnderlyingInstrument_97.insert(EncodedUnderlyingSecurityDesc_97.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_97(1132901510);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_97);
    UnderlyingInstrument_97.insert(EncodedUnderlyingSecurityDescLen_97.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_97;
    UnderlyingAdjustedQuantity_97.setString("15431902");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_97);
    UnderlyingInstrument_97.insert(UnderlyingAdjustedQuantity_97.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_97;
    UnderlyingAllocationPercent_97.setString("65.210000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_97);
    UnderlyingInstrument_97.insert(UnderlyingAllocationPercent_97.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_97;
    UnderlyingAttachmentPoint_97.setString("4.060000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_97);
    UnderlyingInstrument_97.insert(UnderlyingAttachmentPoint_97.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_97("STRING_1128284096");
    noUnderlyings_0_0.set(UnderlyingCFICode_97);
    UnderlyingInstrument_97.insert(UnderlyingCFICode_97.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_97("STRING_898642862");
    noUnderlyings_0_0.set(UnderlyingCPProgram_97);
    UnderlyingInstrument_97.insert(UnderlyingCPProgram_97.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_97("STRING_761671521");
    noUnderlyings_0_0.set(UnderlyingCPRegType_97);
    UnderlyingInstrument_97.insert(UnderlyingCPRegType_97.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_97;
    UnderlyingCapValue_97.setString("8886225");
    noUnderlyings_0_0.set(UnderlyingCapValue_97);
    UnderlyingInstrument_97.insert(UnderlyingCapValue_97.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_97;
    UnderlyingCashAmount_97.setString("6161778");
    noUnderlyings_0_0.set(UnderlyingCashAmount_97);
    UnderlyingInstrument_97.insert(UnderlyingCashAmount_97.getString());
    FIX::UnderlyingCashType UnderlyingCashType_97("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_97);
    UnderlyingInstrument_97.insert(UnderlyingCashType_97.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_97;
    UnderlyingContractMultiplier_97.setString("16567514");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_97);
    UnderlyingInstrument_97.insert(UnderlyingContractMultiplier_97.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_97(1148617429);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_97);
    UnderlyingInstrument_97.insert(UnderlyingContractMultiplierUnit_97.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_97("COUNTRY_416648478");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_97);
    UnderlyingInstrument_97.insert(UnderlyingCountryOfIssue_97.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_97("LOCALMKTDATE_2105696659");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_97);
    UnderlyingInstrument_97.insert(UnderlyingCouponPaymentDate_97.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_97;
    UnderlyingCouponRate_97.setString("18.890000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_97);
    UnderlyingInstrument_97.insert(UnderlyingCouponRate_97.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_97("STRING_2115228557");
    noUnderlyings_0_0.set(UnderlyingCreditRating_97);
    UnderlyingInstrument_97.insert(UnderlyingCreditRating_97.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_97("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_97);
    UnderlyingInstrument_97.insert(UnderlyingCurrency_97.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_97;
    UnderlyingCurrentValue_97.setString("5057345");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_97);
    UnderlyingInstrument_97.insert(UnderlyingCurrentValue_97.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_97;
    UnderlyingDetachmentPoint_97.setString("66.940000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_97);
    UnderlyingInstrument_97.insert(UnderlyingDetachmentPoint_97.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_97;
    UnderlyingDirtyPrice_97.setString("10273856");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_97);
    UnderlyingInstrument_97.insert(UnderlyingDirtyPrice_97.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_97;
    UnderlyingEndPrice_97.setString("16183393");
    noUnderlyings_0_0.set(UnderlyingEndPrice_97);
    UnderlyingInstrument_97.insert(UnderlyingEndPrice_97.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_97;
    UnderlyingEndValue_97.setString("4579836");
    noUnderlyings_0_0.set(UnderlyingEndValue_97);
    UnderlyingInstrument_97.insert(UnderlyingEndValue_97.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_97(2052780221);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_97);
    UnderlyingInstrument_97.insert(UnderlyingExerciseStyle_97.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_97;
    UnderlyingFXRate_97.setString("1789066");
    noUnderlyings_0_0.set(UnderlyingFXRate_97);
    UnderlyingInstrument_97.insert(UnderlyingFXRate_97.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_97('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_97);
    UnderlyingInstrument_97.insert(UnderlyingFXRateCalc_97.getString());
    FIX::UnderlyingFactor UnderlyingFactor_97;
    UnderlyingFactor_97.setString("10449491");
    noUnderlyings_0_0.set(UnderlyingFactor_97);
    UnderlyingInstrument_97.insert(UnderlyingFactor_97.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_97(2076574291);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_97);
    UnderlyingInstrument_97.insert(UnderlyingFlowScheduleType_97.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_97("STRING_1725215545");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_97);
    UnderlyingInstrument_97.insert(UnderlyingInstrRegistry_97.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_97("LOCALMKTDATE_1667296002");
    noUnderlyings_0_0.set(UnderlyingIssueDate_97);
    UnderlyingInstrument_97.insert(UnderlyingIssueDate_97.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_97("STRING_2105935331");
    noUnderlyings_0_0.set(UnderlyingIssuer_97);
    UnderlyingInstrument_97.insert(UnderlyingIssuer_97.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_97("STRING_710633407");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_97);
    UnderlyingInstrument_97.insert(UnderlyingLocaleOfIssue_97.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_97("LOCALMKTDATE_1063002633");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_97);
    UnderlyingInstrument_97.insert(UnderlyingMaturityDate_97.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_97("MONTHYEAR_1314808204");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_97);
    UnderlyingInstrument_97.insert(UnderlyingMaturityMonthYear_97.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_97("TZTIMEONLY_267510165");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_97);
    UnderlyingInstrument_97.insert(UnderlyingMaturityTime_97.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_97;
    UnderlyingNotionalPercentageOutstanding_97.setString("30.820000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_97);
    UnderlyingInstrument_97.insert(UnderlyingNotionalPercentageOutstanding_97.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_97('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_97);
    UnderlyingInstrument_97.insert(UnderlyingOptAttribute_97.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_97;
    UnderlyingOriginalNotionalPercentageOutstanding_97.setString("16.870000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_97);
    UnderlyingInstrument_97.insert(UnderlyingOriginalNotionalPercentageOutstanding_97.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_97("STRING_932425582");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_97);
    UnderlyingInstrument_97.insert(UnderlyingPriceUnitOfMeasure_97.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_97;
    UnderlyingPriceUnitOfMeasureQty_97.setString("6821452");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_97);
    UnderlyingInstrument_97.insert(UnderlyingPriceUnitOfMeasureQty_97.getString());
    FIX::UnderlyingProduct UnderlyingProduct_97(360886786);
    noUnderlyings_0_0.set(UnderlyingProduct_97);
    UnderlyingInstrument_97.insert(UnderlyingProduct_97.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_97(441693342);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_97);
    UnderlyingInstrument_97.insert(UnderlyingPutOrCall_97.getString());
    FIX::UnderlyingPx UnderlyingPx_97;
    UnderlyingPx_97.setString("18307626");
    noUnderlyings_0_0.set(UnderlyingPx_97);
    UnderlyingInstrument_97.insert(UnderlyingPx_97.getString());
    FIX::UnderlyingQty UnderlyingQty_97;
    UnderlyingQty_97.setString("7775352");
    noUnderlyings_0_0.set(UnderlyingQty_97);
    UnderlyingInstrument_97.insert(UnderlyingQty_97.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_97("LOCALMKTDATE_399906353");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_97);
    UnderlyingInstrument_97.insert(UnderlyingRedemptionDate_97.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_97("STRING_415160894");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_97);
    UnderlyingInstrument_97.insert(UnderlyingRepoCollateralSecurityType_97.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_97;
    UnderlyingRepurchaseRate_97.setString("1.740000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_97);
    UnderlyingInstrument_97.insert(UnderlyingRepurchaseRate_97.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_97(577282663);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_97);
    UnderlyingInstrument_97.insert(UnderlyingRepurchaseTerm_97.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_97("STRING_208286715");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_97);
    UnderlyingInstrument_97.insert(UnderlyingRestructuringType_97.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_97("STRING_1251014705");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_97);
    UnderlyingInstrument_97.insert(UnderlyingSecurityDesc_97.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_97("EXCHANGE_1984869357");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_97);
    UnderlyingInstrument_97.insert(UnderlyingSecurityExchange_97.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_97("STRING_1235672338");
    noUnderlyings_0_0.set(UnderlyingSecurityID_97);
    UnderlyingInstrument_97.insert(UnderlyingSecurityID_97.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_97("STRING_721870393");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_97);
    UnderlyingInstrument_97.insert(UnderlyingSecurityIDSource_97.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_97("STRING_295369401");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_97);
    UnderlyingInstrument_97.insert(UnderlyingSecuritySubType_97.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_97("STRING_1140968912");
    noUnderlyings_0_0.set(UnderlyingSecurityType_97);
    UnderlyingInstrument_97.insert(UnderlyingSecurityType_97.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_97("STRING_900777049");
    noUnderlyings_0_0.set(UnderlyingSeniority_97);
    UnderlyingInstrument_97.insert(UnderlyingSeniority_97.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_97("STRING_443619121");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_97);
    UnderlyingInstrument_97.insert(UnderlyingSettlMethod_97.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_97(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_97);
    UnderlyingInstrument_97.insert(UnderlyingSettlementType_97.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_97;
    UnderlyingStartValue_97.setString("8298676");
    noUnderlyings_0_0.set(UnderlyingStartValue_97);
    UnderlyingInstrument_97.insert(UnderlyingStartValue_97.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_97("STRING_21351018");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_97);
    UnderlyingInstrument_97.insert(UnderlyingStateOrProvinceOfIssue_97.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_97("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_97);
    UnderlyingInstrument_97.insert(UnderlyingStrikeCurrency_97.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_97;
    UnderlyingStrikePrice_97.setString("7319844");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_97);
    UnderlyingInstrument_97.insert(UnderlyingStrikePrice_97.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_97("STRING_621249356");
    noUnderlyings_0_0.set(UnderlyingSymbol_97);
    UnderlyingInstrument_97.insert(UnderlyingSymbol_97.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_97("STRING_2103127579");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_97);
    UnderlyingInstrument_97.insert(UnderlyingSymbolSfx_97.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_97("STRING_999494591");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_97);
    UnderlyingInstrument_97.insert(UnderlyingTimeUnit_97.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_97("STRING_665052438");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_97);
    UnderlyingInstrument_97.insert(UnderlyingUnitOfMeasure_97.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_97;
    UnderlyingUnitOfMeasureQty_97.setString("216113");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_97);
    UnderlyingInstrument_97.insert(UnderlyingUnitOfMeasureQty_97.getString());
    all_values.push_back(UnderlyingInstrument_97);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_201;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_201("STRING_1597478021");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_201);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltID_201.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_201("STRING_703756573");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_201);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_201.insert(UnderlyingSecurityAltIDSource_201.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_189;
      FIX::UnderlyingStipType UnderlyingStipType_189("STRING_2039171363");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_189);
      UnderlyingStipulations_NoUnderlyingStips_189.insert(UnderlyingStipType_189.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_189("STRING_387035578");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_189);
      UnderlyingStipulations_NoUnderlyingStips_189.insert(UnderlyingStipValue_189.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_189);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_190;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_190("STRING_291594068");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_190);
      UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyID_190.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_190('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_190);
      UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyIDSource_190.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_190(1764894855);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_190);
      UndlyInstrumentParties_NoUndlyInstrumentParties_190.insert(UnderlyingInstrumentPartyRole_190.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_190);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_379("STRING_1010483187");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_379);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379.insert(UnderlyingInstrumentPartySubID_379.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_379(868425912);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_379);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379.insert(UnderlyingInstrumentPartySubIDType_379.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_380("STRING_706262441");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_380);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380.insert(UnderlyingInstrumentPartySubID_380.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_380(98671878);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_380);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380.insert(UnderlyingInstrumentPartySubIDType_380.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_191;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_191("STRING_1590296306");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_191);
      UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyID_191.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_191('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_191);
      UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyIDSource_191.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_191(1239640790);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_191);
      UndlyInstrumentParties_NoUndlyInstrumentParties_191.insert(UnderlyingInstrumentPartyRole_191.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_191);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_381("STRING_1445250963");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_381);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381.insert(UnderlyingInstrumentPartySubID_381.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_381(1278075159);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_381);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381.insert(UnderlyingInstrumentPartySubIDType_381.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_382("STRING_1173457399");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_382);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382.insert(UnderlyingInstrumentPartySubID_382.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_382(1466601982);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_382);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382.insert(UnderlyingInstrumentPartySubIDType_382.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_98;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_98("DATA_836321882");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_98);
    UnderlyingInstrument_98.insert(EncodedUnderlyingIssuer_98.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_98(1961776775);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_98);
    UnderlyingInstrument_98.insert(EncodedUnderlyingIssuerLen_98.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_98("DATA_51102760");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_98);
    UnderlyingInstrument_98.insert(EncodedUnderlyingSecurityDesc_98.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_98(1457571238);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_98);
    UnderlyingInstrument_98.insert(EncodedUnderlyingSecurityDescLen_98.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_98;
    UnderlyingAdjustedQuantity_98.setString("19174207");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_98);
    UnderlyingInstrument_98.insert(UnderlyingAdjustedQuantity_98.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_98;
    UnderlyingAllocationPercent_98.setString("73.510000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_98);
    UnderlyingInstrument_98.insert(UnderlyingAllocationPercent_98.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_98;
    UnderlyingAttachmentPoint_98.setString("36.770000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_98);
    UnderlyingInstrument_98.insert(UnderlyingAttachmentPoint_98.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_98("STRING_1939032056");
    noUnderlyings_0_1.set(UnderlyingCFICode_98);
    UnderlyingInstrument_98.insert(UnderlyingCFICode_98.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_98("STRING_931789982");
    noUnderlyings_0_1.set(UnderlyingCPProgram_98);
    UnderlyingInstrument_98.insert(UnderlyingCPProgram_98.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_98("STRING_1572618050");
    noUnderlyings_0_1.set(UnderlyingCPRegType_98);
    UnderlyingInstrument_98.insert(UnderlyingCPRegType_98.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_98;
    UnderlyingCapValue_98.setString("4953049");
    noUnderlyings_0_1.set(UnderlyingCapValue_98);
    UnderlyingInstrument_98.insert(UnderlyingCapValue_98.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_98;
    UnderlyingCashAmount_98.setString("11738693");
    noUnderlyings_0_1.set(UnderlyingCashAmount_98);
    UnderlyingInstrument_98.insert(UnderlyingCashAmount_98.getString());
    FIX::UnderlyingCashType UnderlyingCashType_98("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_98);
    UnderlyingInstrument_98.insert(UnderlyingCashType_98.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_98;
    UnderlyingContractMultiplier_98.setString("8823405");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_98);
    UnderlyingInstrument_98.insert(UnderlyingContractMultiplier_98.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_98(46000432);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_98);
    UnderlyingInstrument_98.insert(UnderlyingContractMultiplierUnit_98.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_98("COUNTRY_1755899833");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_98);
    UnderlyingInstrument_98.insert(UnderlyingCountryOfIssue_98.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_98("LOCALMKTDATE_1684537033");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_98);
    UnderlyingInstrument_98.insert(UnderlyingCouponPaymentDate_98.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_98;
    UnderlyingCouponRate_98.setString("52.880000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_98);
    UnderlyingInstrument_98.insert(UnderlyingCouponRate_98.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_98("STRING_477292917");
    noUnderlyings_0_1.set(UnderlyingCreditRating_98);
    UnderlyingInstrument_98.insert(UnderlyingCreditRating_98.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_98("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_98);
    UnderlyingInstrument_98.insert(UnderlyingCurrency_98.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_98;
    UnderlyingCurrentValue_98.setString("11835553");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_98);
    UnderlyingInstrument_98.insert(UnderlyingCurrentValue_98.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_98;
    UnderlyingDetachmentPoint_98.setString("84.500000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_98);
    UnderlyingInstrument_98.insert(UnderlyingDetachmentPoint_98.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_98;
    UnderlyingDirtyPrice_98.setString("21221338");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_98);
    UnderlyingInstrument_98.insert(UnderlyingDirtyPrice_98.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_98;
    UnderlyingEndPrice_98.setString("377035");
    noUnderlyings_0_1.set(UnderlyingEndPrice_98);
    UnderlyingInstrument_98.insert(UnderlyingEndPrice_98.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_98;
    UnderlyingEndValue_98.setString("18858492");
    noUnderlyings_0_1.set(UnderlyingEndValue_98);
    UnderlyingInstrument_98.insert(UnderlyingEndValue_98.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_98(318239917);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_98);
    UnderlyingInstrument_98.insert(UnderlyingExerciseStyle_98.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_98;
    UnderlyingFXRate_98.setString("14829545");
    noUnderlyings_0_1.set(UnderlyingFXRate_98);
    UnderlyingInstrument_98.insert(UnderlyingFXRate_98.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_98('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_98);
    UnderlyingInstrument_98.insert(UnderlyingFXRateCalc_98.getString());
    FIX::UnderlyingFactor UnderlyingFactor_98;
    UnderlyingFactor_98.setString("14916973");
    noUnderlyings_0_1.set(UnderlyingFactor_98);
    UnderlyingInstrument_98.insert(UnderlyingFactor_98.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_98(802072851);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_98);
    UnderlyingInstrument_98.insert(UnderlyingFlowScheduleType_98.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_98("STRING_1852762633");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_98);
    UnderlyingInstrument_98.insert(UnderlyingInstrRegistry_98.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_98("LOCALMKTDATE_1305990444");
    noUnderlyings_0_1.set(UnderlyingIssueDate_98);
    UnderlyingInstrument_98.insert(UnderlyingIssueDate_98.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_98("STRING_853175611");
    noUnderlyings_0_1.set(UnderlyingIssuer_98);
    UnderlyingInstrument_98.insert(UnderlyingIssuer_98.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_98("STRING_1162850224");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_98);
    UnderlyingInstrument_98.insert(UnderlyingLocaleOfIssue_98.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_98("LOCALMKTDATE_1075927502");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_98);
    UnderlyingInstrument_98.insert(UnderlyingMaturityDate_98.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_98("MONTHYEAR_1903772962");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_98);
    UnderlyingInstrument_98.insert(UnderlyingMaturityMonthYear_98.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_98("TZTIMEONLY_1137990253");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_98);
    UnderlyingInstrument_98.insert(UnderlyingMaturityTime_98.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_98;
    UnderlyingNotionalPercentageOutstanding_98.setString("59.110000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_98);
    UnderlyingInstrument_98.insert(UnderlyingNotionalPercentageOutstanding_98.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_98('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_98);
    UnderlyingInstrument_98.insert(UnderlyingOptAttribute_98.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_98;
    UnderlyingOriginalNotionalPercentageOutstanding_98.setString("46.550000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_98);
    UnderlyingInstrument_98.insert(UnderlyingOriginalNotionalPercentageOutstanding_98.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_98("STRING_1362780893");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_98);
    UnderlyingInstrument_98.insert(UnderlyingPriceUnitOfMeasure_98.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_98;
    UnderlyingPriceUnitOfMeasureQty_98.setString("18619486");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_98);
    UnderlyingInstrument_98.insert(UnderlyingPriceUnitOfMeasureQty_98.getString());
    FIX::UnderlyingProduct UnderlyingProduct_98(2027430420);
    noUnderlyings_0_1.set(UnderlyingProduct_98);
    UnderlyingInstrument_98.insert(UnderlyingProduct_98.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_98(97637805);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_98);
    UnderlyingInstrument_98.insert(UnderlyingPutOrCall_98.getString());
    FIX::UnderlyingPx UnderlyingPx_98;
    UnderlyingPx_98.setString("19079491");
    noUnderlyings_0_1.set(UnderlyingPx_98);
    UnderlyingInstrument_98.insert(UnderlyingPx_98.getString());
    FIX::UnderlyingQty UnderlyingQty_98;
    UnderlyingQty_98.setString("16358466");
    noUnderlyings_0_1.set(UnderlyingQty_98);
    UnderlyingInstrument_98.insert(UnderlyingQty_98.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_98("LOCALMKTDATE_1782174838");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_98);
    UnderlyingInstrument_98.insert(UnderlyingRedemptionDate_98.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_98("STRING_1571360768");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_98);
    UnderlyingInstrument_98.insert(UnderlyingRepoCollateralSecurityType_98.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_98;
    UnderlyingRepurchaseRate_98.setString("95.230000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_98);
    UnderlyingInstrument_98.insert(UnderlyingRepurchaseRate_98.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_98(182227763);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_98);
    UnderlyingInstrument_98.insert(UnderlyingRepurchaseTerm_98.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_98("STRING_2103198320");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_98);
    UnderlyingInstrument_98.insert(UnderlyingRestructuringType_98.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_98("STRING_1149211234");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_98);
    UnderlyingInstrument_98.insert(UnderlyingSecurityDesc_98.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_98("EXCHANGE_828436213");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_98);
    UnderlyingInstrument_98.insert(UnderlyingSecurityExchange_98.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_98("STRING_2077848531");
    noUnderlyings_0_1.set(UnderlyingSecurityID_98);
    UnderlyingInstrument_98.insert(UnderlyingSecurityID_98.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_98("STRING_1186914787");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_98);
    UnderlyingInstrument_98.insert(UnderlyingSecurityIDSource_98.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_98("STRING_566801806");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_98);
    UnderlyingInstrument_98.insert(UnderlyingSecuritySubType_98.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_98("STRING_248604800");
    noUnderlyings_0_1.set(UnderlyingSecurityType_98);
    UnderlyingInstrument_98.insert(UnderlyingSecurityType_98.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_98("STRING_522385656");
    noUnderlyings_0_1.set(UnderlyingSeniority_98);
    UnderlyingInstrument_98.insert(UnderlyingSeniority_98.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_98("STRING_1583242557");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_98);
    UnderlyingInstrument_98.insert(UnderlyingSettlMethod_98.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_98(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_98);
    UnderlyingInstrument_98.insert(UnderlyingSettlementType_98.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_98;
    UnderlyingStartValue_98.setString("13244585");
    noUnderlyings_0_1.set(UnderlyingStartValue_98);
    UnderlyingInstrument_98.insert(UnderlyingStartValue_98.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_98("STRING_1288521543");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_98);
    UnderlyingInstrument_98.insert(UnderlyingStateOrProvinceOfIssue_98.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_98("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_98);
    UnderlyingInstrument_98.insert(UnderlyingStrikeCurrency_98.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_98;
    UnderlyingStrikePrice_98.setString("3038881");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_98);
    UnderlyingInstrument_98.insert(UnderlyingStrikePrice_98.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_98("STRING_1974736416");
    noUnderlyings_0_1.set(UnderlyingSymbol_98);
    UnderlyingInstrument_98.insert(UnderlyingSymbol_98.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_98("STRING_1933923433");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_98);
    UnderlyingInstrument_98.insert(UnderlyingSymbolSfx_98.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_98("STRING_1441878372");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_98);
    UnderlyingInstrument_98.insert(UnderlyingTimeUnit_98.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_98("STRING_694728679");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_98);
    UnderlyingInstrument_98.insert(UnderlyingUnitOfMeasure_98.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_98;
    UnderlyingUnitOfMeasureQty_98.setString("4745190");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_98);
    UnderlyingInstrument_98.insert(UnderlyingUnitOfMeasureQty_98.getString());
    all_values.push_back(UnderlyingInstrument_98);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_202;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_202("STRING_2057509572");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_202);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltID_202.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_202("STRING_188984129");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_202);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_202.insert(UnderlyingSecurityAltIDSource_202.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_203;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_203("STRING_1884949799");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_203);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltID_203.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_203("STRING_7663729");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_203);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_203.insert(UnderlyingSecurityAltIDSource_203.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_190;
      FIX::UnderlyingStipType UnderlyingStipType_190("STRING_1373312756");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_190);
      UnderlyingStipulations_NoUnderlyingStips_190.insert(UnderlyingStipType_190.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_190("STRING_1789838568");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_190);
      UnderlyingStipulations_NoUnderlyingStips_190.insert(UnderlyingStipValue_190.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_190);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_191;
      FIX::UnderlyingStipType UnderlyingStipType_191("STRING_1520810377");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_191);
      UnderlyingStipulations_NoUnderlyingStips_191.insert(UnderlyingStipType_191.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_191("STRING_1338968631");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_191);
      UnderlyingStipulations_NoUnderlyingStips_191.insert(UnderlyingStipValue_191.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_191);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_192;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_192("STRING_1476525049");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_192);
      UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyID_192.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_192('3');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_192);
      UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyIDSource_192.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_192(653018896);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_192);
      UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyRole_192.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_192);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_383("STRING_1527611005");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_383);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383.insert(UnderlyingInstrumentPartySubID_383.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_383(1219820702);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_383);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383.insert(UnderlyingInstrumentPartySubIDType_383.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_384("STRING_1655494733");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_384);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384.insert(UnderlyingInstrumentPartySubID_384.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_384(2049996661);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_384);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384.insert(UnderlyingInstrumentPartySubIDType_384.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_385("STRING_655579612");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_385);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385.insert(UnderlyingInstrumentPartySubID_385.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_385(1248313202);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_385);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385.insert(UnderlyingInstrumentPartySubIDType_385.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_193;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_193("STRING_1226971521");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_193);
      UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyID_193.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_193('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_193);
      UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyIDSource_193.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_193(2147122116);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_193);
      UndlyInstrumentParties_NoUndlyInstrumentParties_193.insert(UnderlyingInstrumentPartyRole_193.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_193);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_386("STRING_100505626");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_386);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386.insert(UnderlyingInstrumentPartySubID_386.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_386(1974374884);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_386);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386.insert(UnderlyingInstrumentPartySubIDType_386.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_387("STRING_1043561776");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_387);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387.insert(UnderlyingInstrumentPartySubID_387.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_387(1542383998);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_387);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387.insert(UnderlyingInstrumentPartySubIDType_387.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_388("STRING_521619915");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_388);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388.insert(UnderlyingInstrumentPartySubID_388.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_388(1518080858);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_388);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388.insert(UnderlyingInstrumentPartySubIDType_388.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_194;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_194("STRING_1399903377");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_194);
      UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyID_194.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_194('4');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_194);
      UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyIDSource_194.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_194(1707064987);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_194);
      UndlyInstrumentParties_NoUndlyInstrumentParties_194.insert(UnderlyingInstrumentPartyRole_194.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_194);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_389("STRING_439309568");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_389);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389.insert(UnderlyingInstrumentPartySubID_389.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_389(1656514596);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_389);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389.insert(UnderlyingInstrumentPartySubIDType_389.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_99;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_99("DATA_363198636");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_99);
    UnderlyingInstrument_99.insert(EncodedUnderlyingIssuer_99.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_99(81664488);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_99);
    UnderlyingInstrument_99.insert(EncodedUnderlyingIssuerLen_99.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_99("DATA_1029841325");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_99);
    UnderlyingInstrument_99.insert(EncodedUnderlyingSecurityDesc_99.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_99(1702167268);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_99);
    UnderlyingInstrument_99.insert(EncodedUnderlyingSecurityDescLen_99.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_99;
    UnderlyingAdjustedQuantity_99.setString("20537308");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_99);
    UnderlyingInstrument_99.insert(UnderlyingAdjustedQuantity_99.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_99;
    UnderlyingAllocationPercent_99.setString("27.260000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_99);
    UnderlyingInstrument_99.insert(UnderlyingAllocationPercent_99.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_99;
    UnderlyingAttachmentPoint_99.setString("34.850000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_99);
    UnderlyingInstrument_99.insert(UnderlyingAttachmentPoint_99.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_99("STRING_559266068");
    noUnderlyings_0_2.set(UnderlyingCFICode_99);
    UnderlyingInstrument_99.insert(UnderlyingCFICode_99.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_99("STRING_1765772659");
    noUnderlyings_0_2.set(UnderlyingCPProgram_99);
    UnderlyingInstrument_99.insert(UnderlyingCPProgram_99.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_99("STRING_1422990842");
    noUnderlyings_0_2.set(UnderlyingCPRegType_99);
    UnderlyingInstrument_99.insert(UnderlyingCPRegType_99.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_99;
    UnderlyingCapValue_99.setString("17790867");
    noUnderlyings_0_2.set(UnderlyingCapValue_99);
    UnderlyingInstrument_99.insert(UnderlyingCapValue_99.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_99;
    UnderlyingCashAmount_99.setString("12737837");
    noUnderlyings_0_2.set(UnderlyingCashAmount_99);
    UnderlyingInstrument_99.insert(UnderlyingCashAmount_99.getString());
    FIX::UnderlyingCashType UnderlyingCashType_99("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_99);
    UnderlyingInstrument_99.insert(UnderlyingCashType_99.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_99;
    UnderlyingContractMultiplier_99.setString("2871827");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_99);
    UnderlyingInstrument_99.insert(UnderlyingContractMultiplier_99.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_99(374613298);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_99);
    UnderlyingInstrument_99.insert(UnderlyingContractMultiplierUnit_99.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_99("COUNTRY_404991729");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_99);
    UnderlyingInstrument_99.insert(UnderlyingCountryOfIssue_99.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_99("LOCALMKTDATE_83800241");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_99);
    UnderlyingInstrument_99.insert(UnderlyingCouponPaymentDate_99.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_99;
    UnderlyingCouponRate_99.setString("17.660000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_99);
    UnderlyingInstrument_99.insert(UnderlyingCouponRate_99.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_99("STRING_1662113720");
    noUnderlyings_0_2.set(UnderlyingCreditRating_99);
    UnderlyingInstrument_99.insert(UnderlyingCreditRating_99.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_99("JPY");
    noUnderlyings_0_2.set(UnderlyingCurrency_99);
    UnderlyingInstrument_99.insert(UnderlyingCurrency_99.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_99;
    UnderlyingCurrentValue_99.setString("5581918");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_99);
    UnderlyingInstrument_99.insert(UnderlyingCurrentValue_99.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_99;
    UnderlyingDetachmentPoint_99.setString("98.650000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_99);
    UnderlyingInstrument_99.insert(UnderlyingDetachmentPoint_99.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_99;
    UnderlyingDirtyPrice_99.setString("7227629");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_99);
    UnderlyingInstrument_99.insert(UnderlyingDirtyPrice_99.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_99;
    UnderlyingEndPrice_99.setString("20762727");
    noUnderlyings_0_2.set(UnderlyingEndPrice_99);
    UnderlyingInstrument_99.insert(UnderlyingEndPrice_99.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_99;
    UnderlyingEndValue_99.setString("9791095");
    noUnderlyings_0_2.set(UnderlyingEndValue_99);
    UnderlyingInstrument_99.insert(UnderlyingEndValue_99.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_99(1154408756);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_99);
    UnderlyingInstrument_99.insert(UnderlyingExerciseStyle_99.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_99;
    UnderlyingFXRate_99.setString("16358540");
    noUnderlyings_0_2.set(UnderlyingFXRate_99);
    UnderlyingInstrument_99.insert(UnderlyingFXRate_99.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_99('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_99);
    UnderlyingInstrument_99.insert(UnderlyingFXRateCalc_99.getString());
    FIX::UnderlyingFactor UnderlyingFactor_99;
    UnderlyingFactor_99.setString("15937183");
    noUnderlyings_0_2.set(UnderlyingFactor_99);
    UnderlyingInstrument_99.insert(UnderlyingFactor_99.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_99(1144884994);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_99);
    UnderlyingInstrument_99.insert(UnderlyingFlowScheduleType_99.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_99("STRING_332194111");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_99);
    UnderlyingInstrument_99.insert(UnderlyingInstrRegistry_99.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_99("LOCALMKTDATE_1675382813");
    noUnderlyings_0_2.set(UnderlyingIssueDate_99);
    UnderlyingInstrument_99.insert(UnderlyingIssueDate_99.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_99("STRING_27242671");
    noUnderlyings_0_2.set(UnderlyingIssuer_99);
    UnderlyingInstrument_99.insert(UnderlyingIssuer_99.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_99("STRING_2034361379");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_99);
    UnderlyingInstrument_99.insert(UnderlyingLocaleOfIssue_99.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_99("LOCALMKTDATE_1581629985");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_99);
    UnderlyingInstrument_99.insert(UnderlyingMaturityDate_99.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_99("MONTHYEAR_386125397");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_99);
    UnderlyingInstrument_99.insert(UnderlyingMaturityMonthYear_99.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_99("TZTIMEONLY_1929741216");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_99);
    UnderlyingInstrument_99.insert(UnderlyingMaturityTime_99.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_99;
    UnderlyingNotionalPercentageOutstanding_99.setString("60.530000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_99);
    UnderlyingInstrument_99.insert(UnderlyingNotionalPercentageOutstanding_99.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_99('4');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_99);
    UnderlyingInstrument_99.insert(UnderlyingOptAttribute_99.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_99;
    UnderlyingOriginalNotionalPercentageOutstanding_99.setString("84.110000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_99);
    UnderlyingInstrument_99.insert(UnderlyingOriginalNotionalPercentageOutstanding_99.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_99("STRING_1772499175");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_99);
    UnderlyingInstrument_99.insert(UnderlyingPriceUnitOfMeasure_99.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_99;
    UnderlyingPriceUnitOfMeasureQty_99.setString("12781981");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_99);
    UnderlyingInstrument_99.insert(UnderlyingPriceUnitOfMeasureQty_99.getString());
    FIX::UnderlyingProduct UnderlyingProduct_99(383268619);
    noUnderlyings_0_2.set(UnderlyingProduct_99);
    UnderlyingInstrument_99.insert(UnderlyingProduct_99.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_99(2059681910);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_99);
    UnderlyingInstrument_99.insert(UnderlyingPutOrCall_99.getString());
    FIX::UnderlyingPx UnderlyingPx_99;
    UnderlyingPx_99.setString("16528114");
    noUnderlyings_0_2.set(UnderlyingPx_99);
    UnderlyingInstrument_99.insert(UnderlyingPx_99.getString());
    FIX::UnderlyingQty UnderlyingQty_99;
    UnderlyingQty_99.setString("7882603");
    noUnderlyings_0_2.set(UnderlyingQty_99);
    UnderlyingInstrument_99.insert(UnderlyingQty_99.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_99("LOCALMKTDATE_2143482151");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_99);
    UnderlyingInstrument_99.insert(UnderlyingRedemptionDate_99.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_99("STRING_2027063217");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_99);
    UnderlyingInstrument_99.insert(UnderlyingRepoCollateralSecurityType_99.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_99;
    UnderlyingRepurchaseRate_99.setString("4.200000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_99);
    UnderlyingInstrument_99.insert(UnderlyingRepurchaseRate_99.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_99(180304371);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_99);
    UnderlyingInstrument_99.insert(UnderlyingRepurchaseTerm_99.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_99("STRING_80722572");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_99);
    UnderlyingInstrument_99.insert(UnderlyingRestructuringType_99.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_99("STRING_861082269");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_99);
    UnderlyingInstrument_99.insert(UnderlyingSecurityDesc_99.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_99("EXCHANGE_1906994236");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_99);
    UnderlyingInstrument_99.insert(UnderlyingSecurityExchange_99.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_99("STRING_803485489");
    noUnderlyings_0_2.set(UnderlyingSecurityID_99);
    UnderlyingInstrument_99.insert(UnderlyingSecurityID_99.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_99("STRING_789871328");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_99);
    UnderlyingInstrument_99.insert(UnderlyingSecurityIDSource_99.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_99("STRING_738620183");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_99);
    UnderlyingInstrument_99.insert(UnderlyingSecuritySubType_99.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_99("STRING_1957894246");
    noUnderlyings_0_2.set(UnderlyingSecurityType_99);
    UnderlyingInstrument_99.insert(UnderlyingSecurityType_99.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_99("STRING_278241726");
    noUnderlyings_0_2.set(UnderlyingSeniority_99);
    UnderlyingInstrument_99.insert(UnderlyingSeniority_99.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_99("STRING_707615657");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_99);
    UnderlyingInstrument_99.insert(UnderlyingSettlMethod_99.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_99(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_99);
    UnderlyingInstrument_99.insert(UnderlyingSettlementType_99.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_99;
    UnderlyingStartValue_99.setString("14231267");
    noUnderlyings_0_2.set(UnderlyingStartValue_99);
    UnderlyingInstrument_99.insert(UnderlyingStartValue_99.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_99("STRING_1039809768");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_99);
    UnderlyingInstrument_99.insert(UnderlyingStateOrProvinceOfIssue_99.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_99("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_99);
    UnderlyingInstrument_99.insert(UnderlyingStrikeCurrency_99.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_99;
    UnderlyingStrikePrice_99.setString("9266874");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_99);
    UnderlyingInstrument_99.insert(UnderlyingStrikePrice_99.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_99("STRING_366174425");
    noUnderlyings_0_2.set(UnderlyingSymbol_99);
    UnderlyingInstrument_99.insert(UnderlyingSymbol_99.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_99("STRING_1836494789");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_99);
    UnderlyingInstrument_99.insert(UnderlyingSymbolSfx_99.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_99("STRING_708945068");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_99);
    UnderlyingInstrument_99.insert(UnderlyingTimeUnit_99.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_99("STRING_359586830");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_99);
    UnderlyingInstrument_99.insert(UnderlyingUnitOfMeasure_99.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_99;
    UnderlyingUnitOfMeasureQty_99.setString("18409091");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_99);
    UnderlyingInstrument_99.insert(UnderlyingUnitOfMeasureQty_99.getString());
    all_values.push_back(UnderlyingInstrument_99);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_204;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_204("STRING_2132086006");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_204);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltID_204.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_204("STRING_971623702");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_204);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_204.insert(UnderlyingSecurityAltIDSource_204.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_192;
      FIX::UnderlyingStipType UnderlyingStipType_192("STRING_2044284268");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_192);
      UnderlyingStipulations_NoUnderlyingStips_192.insert(UnderlyingStipType_192.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_192("STRING_476951505");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_192);
      UnderlyingStipulations_NoUnderlyingStips_192.insert(UnderlyingStipValue_192.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_192);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_193;
      FIX::UnderlyingStipType UnderlyingStipType_193("STRING_938238798");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_193);
      UnderlyingStipulations_NoUnderlyingStips_193.insert(UnderlyingStipType_193.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_193("STRING_2040282771");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_193);
      UnderlyingStipulations_NoUnderlyingStips_193.insert(UnderlyingStipValue_193.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_193);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_194;
      FIX::UnderlyingStipType UnderlyingStipType_194("STRING_356531074");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_194);
      UnderlyingStipulations_NoUnderlyingStips_194.insert(UnderlyingStipType_194.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_194("STRING_1241129218");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_194);
      UnderlyingStipulations_NoUnderlyingStips_194.insert(UnderlyingStipValue_194.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_194);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_195;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_195("STRING_437253646");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_195);
      UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyID_195.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_195('2');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_195);
      UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyIDSource_195.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_195(1980097731);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_195);
      UndlyInstrumentParties_NoUndlyInstrumentParties_195.insert(UnderlyingInstrumentPartyRole_195.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_195);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_390("STRING_744599168");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_390);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390.insert(UnderlyingInstrumentPartySubID_390.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_390(571234266);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_390);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390.insert(UnderlyingInstrumentPartySubIDType_390.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_196;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_196("STRING_1051149734");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_196);
      UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyID_196.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_196('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_196);
      UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyIDSource_196.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_196(1278849923);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_196);
      UndlyInstrumentParties_NoUndlyInstrumentParties_196.insert(UnderlyingInstrumentPartyRole_196.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_196);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_391("STRING_298483967");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_391);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391.insert(UnderlyingInstrumentPartySubID_391.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_391(171176044);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_391);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391.insert(UnderlyingInstrumentPartySubIDType_391.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_392("STRING_1239823097");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_392);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392.insert(UnderlyingInstrumentPartySubID_392.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_392(1748853359);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_392);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392.insert(UnderlyingInstrumentPartySubIDType_392.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_20;
  FIX::Yield Yield_20;
  Yield_20.setString("35.430000");
  msg.set(Yield_20);
  YieldData_20.insert(Yield_20.getString());
  FIX::YieldCalcDate YieldCalcDate_20("LOCALMKTDATE_1605997523");
  msg.set(YieldCalcDate_20);
  YieldData_20.insert(YieldCalcDate_20.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_20("LOCALMKTDATE_1437864500");
  msg.set(YieldRedemptionDate_20);
  YieldData_20.insert(YieldRedemptionDate_20.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_20;
  YieldRedemptionPrice_20.setString("18068086");
  msg.set(YieldRedemptionPrice_20);
  YieldData_20.insert(YieldRedemptionPrice_20.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_20(1965584353);
  msg.set(YieldRedemptionPriceType_20);
  YieldData_20.insert(YieldRedemptionPriceType_20.getString());
  FIX::YieldType YieldType_20("STRING_PUT");
  msg.set(YieldType_20);
  YieldData_20.insert(YieldType_20.getString());
  all_values.push_back(YieldData_20);


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
