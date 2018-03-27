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
  FIX::Account Account_31("STRING_1547892292");
  msg.set(Account_31);
  Quote_0.insert(Account_31.getString());
  FIX::AccountType AccountType_27(6);
  msg.set(AccountType_27);
  Quote_0.insert(AccountType_27.getString());
  FIX::AcctIDSource AcctIDSource_24(1);
  msg.set(AcctIDSource_24);
  Quote_0.insert(AcctIDSource_24.getString());
  FIX::BidForwardPoints BidForwardPoints_3;
  BidForwardPoints_3.setString("11199335");
  msg.set(BidForwardPoints_3);
  Quote_0.insert(BidForwardPoints_3.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_3;
  BidForwardPoints2_3.setString("15170243");
  msg.set(BidForwardPoints2_3);
  Quote_0.insert(BidForwardPoints2_3.getString());
  FIX::BidPx BidPx_3;
  BidPx_3.setString("2522099");
  msg.set(BidPx_3);
  Quote_0.insert(BidPx_3.getString());
  FIX::BidSize BidSize_3;
  BidSize_3.setString("13250885");
  msg.set(BidSize_3);
  Quote_0.insert(BidSize_3.getString());
  FIX::BidSpotRate BidSpotRate_3;
  BidSpotRate_3.setString("2291223");
  msg.set(BidSpotRate_3);
  Quote_0.insert(BidSpotRate_3.getString());
  FIX::BidSwapPoints BidSwapPoints_0;
  BidSwapPoints_0.setString("11212602");
  msg.set(BidSwapPoints_0);
  Quote_0.insert(BidSwapPoints_0.getString());
  FIX::BidYield BidYield_3;
  BidYield_3.setString("28.150000");
  msg.set(BidYield_3);
  Quote_0.insert(BidYield_3.getString());
  FIX::BookingType BookingType_19(2);
  msg.set(BookingType_19);
  Quote_0.insert(BookingType_19.getString());
  FIX::CommType CommType_20('2');
  msg.set(CommType_20);
  Quote_0.insert(CommType_20.getString());
  FIX::Commission Commission_20;
  Commission_20.setString("20319604");
  msg.set(Commission_20);
  Quote_0.insert(Commission_20.getString());
  FIX::Currency Currency_44("CAN");
  msg.set(Currency_44);
  Quote_0.insert(Currency_44.getString());
  FIX::CustOrderCapacity CustOrderCapacity_16(3);
  msg.set(CustOrderCapacity_16);
  Quote_0.insert(CustOrderCapacity_16.getString());
  FIX::EncodedText EncodedText_70("DATA_440542093");
  msg.set(EncodedText_70);
  Quote_0.insert(EncodedText_70.getString());
  FIX::EncodedTextLen EncodedTextLen_70(827852469);
  msg.set(EncodedTextLen_70);
  Quote_0.insert(EncodedTextLen_70.getString());
  FIX::ExDestination ExDestination_9("EXCHANGE_626324563");
  msg.set(ExDestination_9);
  Quote_0.insert(ExDestination_9.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_9('E');
  msg.set(ExDestinationIDSource_9);
  Quote_0.insert(ExDestinationIDSource_9.getString());
  FIX::MidPx MidPx_3;
  MidPx_3.setString("5106102");
  msg.set(MidPx_3);
  Quote_0.insert(MidPx_3.getString());
  FIX::MidYield MidYield_3;
  MidYield_3.setString("67.230000");
  msg.set(MidYield_3);
  Quote_0.insert(MidYield_3.getString());
  FIX::MinBidSize MinBidSize_0;
  MinBidSize_0.setString("8198619");
  msg.set(MinBidSize_0);
  Quote_0.insert(MinBidSize_0.getString());
  FIX::MinOfferSize MinOfferSize_0;
  MinOfferSize_0.setString("17529357");
  msg.set(MinOfferSize_0);
  Quote_0.insert(MinOfferSize_0.getString());
  FIX::MinQty MinQty_13;
  MinQty_13.setString("5202047");
  msg.set(MinQty_13);
  Quote_0.insert(MinQty_13.getString());
  FIX::MktBidPx MktBidPx_0;
  MktBidPx_0.setString("11475376");
  msg.set(MktBidPx_0);
  Quote_0.insert(MktBidPx_0.getString());
  FIX::MktOfferPx MktOfferPx_0;
  MktOfferPx_0.setString("4273957");
  msg.set(MktOfferPx_0);
  Quote_0.insert(MktOfferPx_0.getString());
  FIX::OfferForwardPoints OfferForwardPoints_3;
  OfferForwardPoints_3.setString("19213493");
  msg.set(OfferForwardPoints_3);
  Quote_0.insert(OfferForwardPoints_3.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_3;
  OfferForwardPoints2_3.setString("9593997");
  msg.set(OfferForwardPoints2_3);
  Quote_0.insert(OfferForwardPoints2_3.getString());
  FIX::OfferPx OfferPx_3;
  OfferPx_3.setString("19093205");
  msg.set(OfferPx_3);
  Quote_0.insert(OfferPx_3.getString());
  FIX::OfferSize OfferSize_3;
  OfferSize_3.setString("6347837");
  msg.set(OfferSize_3);
  Quote_0.insert(OfferSize_3.getString());
  FIX::OfferSpotRate OfferSpotRate_3;
  OfferSpotRate_3.setString("3598084");
  msg.set(OfferSpotRate_3);
  Quote_0.insert(OfferSpotRate_3.getString());
  FIX::OfferSwapPoints OfferSwapPoints_0;
  OfferSwapPoints_0.setString("5000274");
  msg.set(OfferSwapPoints_0);
  Quote_0.insert(OfferSwapPoints_0.getString());
  FIX::OfferYield OfferYield_3;
  OfferYield_3.setString("12.970000");
  msg.set(OfferYield_3);
  Quote_0.insert(OfferYield_3.getString());
  FIX::OrdType OrdType_46('I');
  msg.set(OrdType_46);
  Quote_0.insert(OrdType_46.getString());
  FIX::OrderCapacity OrderCapacity_22('G');
  msg.set(OrderCapacity_22);
  Quote_0.insert(OrderCapacity_22.getString());
  FIX::OrderQty2 OrderQty2_9;
  OrderQty2_9.setString("21304312");
  msg.set(OrderQty2_9);
  Quote_0.insert(OrderQty2_9.getString());
  FIX::OrderRestrictions OrderRestrictions_19("MULTIPLECHARVALUE_3");
  msg.set(OrderRestrictions_19);
  Quote_0.insert(OrderRestrictions_19.getString());
  FIX::PriceType PriceType_33(15);
  msg.set(PriceType_33);
  Quote_0.insert(PriceType_33.getString());
  FIX::PrivateQuote PrivateQuote_0(true);
  msg.set(PrivateQuote_0);
  Quote_0.insert(PrivateQuote_0.getString());
  FIX::QuoteID QuoteID_10("STRING_1321899708");
  msg.set(QuoteID_10);
  Quote_0.insert(QuoteID_10.getString());
  FIX::QuoteMsgID QuoteMsgID_0("STRING_513866379");
  msg.set(QuoteMsgID_0);
  Quote_0.insert(QuoteMsgID_0.getString());
  FIX::QuoteReqID QuoteReqID_2("STRING_186666683");
  msg.set(QuoteReqID_2);
  Quote_0.insert(QuoteReqID_2.getString());
  FIX::QuoteRespID QuoteRespID_1("STRING_1206376508");
  msg.set(QuoteRespID_1);
  Quote_0.insert(QuoteRespID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_2(3);
  msg.set(QuoteResponseLevel_2);
  Quote_0.insert(QuoteResponseLevel_2.getString());
  FIX::QuoteType QuoteType_4(3);
  msg.set(QuoteType_4);
  Quote_0.insert(QuoteType_4.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_0;
  SettlCurrBidFxRate_0.setString("14115681");
  msg.set(SettlCurrBidFxRate_0);
  Quote_0.insert(SettlCurrBidFxRate_0.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_7('M');
  msg.set(SettlCurrFxRateCalc_7);
  Quote_0.insert(SettlCurrFxRateCalc_7.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_0;
  SettlCurrOfferFxRate_0.setString("15611524");
  msg.set(SettlCurrOfferFxRate_0);
  Quote_0.insert(SettlCurrOfferFxRate_0.getString());
  FIX::SettlCurrency SettlCurrency_25("USD");
  msg.set(SettlCurrency_25);
  Quote_0.insert(SettlCurrency_25.getString());
  FIX::SettlDate SettlDate_31("LOCALMKTDATE_2071762651");
  msg.set(SettlDate_31);
  Quote_0.insert(SettlDate_31.getString());
  FIX::SettlDate2 SettlDate2_9("LOCALMKTDATE_1086765788");
  msg.set(SettlDate2_9);
  Quote_0.insert(SettlDate2_9.getString());
  FIX::SettlType SettlType_22("STRING_6");
  msg.set(SettlType_22);
  Quote_0.insert(SettlType_22.getString());
  FIX::Side Side_39('3');
  msg.set(Side_39);
  Quote_0.insert(Side_39.getString());
  FIX::Text Text_70("STRING_1606970533");
  msg.set(Text_70);
  Quote_0.insert(Text_70.getString());
  FIX::TradingSessionID TradingSessionID_60("STRING_3");
  msg.set(TradingSessionID_60);
  Quote_0.insert(TradingSessionID_60.getString());
  FIX::TradingSessionSubID TradingSessionSubID_60("STRING_6");
  msg.set(TradingSessionSubID_60);
  Quote_0.insert(TradingSessionSubID_60.getString());
  FIX::TransactTime TransactTime_45(FIX::UTCTIMESTAMP(2, 55, 37, 27, 52016));
  msg.set(TransactTime_45);
  Quote_0.insert(TransactTime_45.getString());
  FIX::ValidUntilTime ValidUntilTime_4(FIX::UTCTIMESTAMP(3, 57, 17, 0, 22003));
  msg.set(ValidUntilTime_4);
  Quote_0.insert(ValidUntilTime_4.getString());
  all_values.push_back(Quote_0);

  // FinancingDetails
  multiset<string> FinancingDetails_16;
  FIX::AgreementCurrency AgreementCurrency_16("EUR");
  msg.set(AgreementCurrency_16);
  FinancingDetails_16.insert(AgreementCurrency_16.getString());
  FIX::AgreementDate AgreementDate_16("LOCALMKTDATE_1875791885");
  msg.set(AgreementDate_16);
  FinancingDetails_16.insert(AgreementDate_16.getString());
  FIX::AgreementDesc AgreementDesc_16("STRING_363273882");
  msg.set(AgreementDesc_16);
  FinancingDetails_16.insert(AgreementDesc_16.getString());
  FIX::AgreementID AgreementID_16("STRING_1605995952");
  msg.set(AgreementID_16);
  FinancingDetails_16.insert(AgreementID_16.getString());
  FIX::DeliveryType DeliveryType_16(3);
  msg.set(DeliveryType_16);
  FinancingDetails_16.insert(DeliveryType_16.getString());
  FIX::EndDate EndDate_16("LOCALMKTDATE_465973422");
  msg.set(EndDate_16);
  FinancingDetails_16.insert(EndDate_16.getString());
  FIX::MarginRatio MarginRatio_16;
  MarginRatio_16.setString("47.080000");
  msg.set(MarginRatio_16);
  FinancingDetails_16.insert(MarginRatio_16.getString());
  FIX::StartDate StartDate_16("LOCALMKTDATE_1030285452");
  msg.set(StartDate_16);
  FinancingDetails_16.insert(StartDate_16.getString());
  FIX::TerminationType TerminationType_16(2);
  msg.set(TerminationType_16);
  FinancingDetails_16.insert(TerminationType_16.getString());
  all_values.push_back(FinancingDetails_16);

  // Instrument
  multiset<string> Instrument_56;
  FIX::AttachmentPoint AttachmentPoint_56;
  AttachmentPoint_56.setString("37.110000");
  msg.set(AttachmentPoint_56);
  Instrument_56.insert(AttachmentPoint_56.getString());
  FIX::CFICode CFICode_56("STRING_2117051240");
  msg.set(CFICode_56);
  Instrument_56.insert(CFICode_56.getString());
  FIX::CPProgram CPProgram_56(2);
  msg.set(CPProgram_56);
  Instrument_56.insert(CPProgram_56.getString());
  FIX::CPRegType CPRegType_56("STRING_473674802");
  msg.set(CPRegType_56);
  Instrument_56.insert(CPRegType_56.getString());
  FIX::CapPrice CapPrice_56;
  CapPrice_56.setString("15765381");
  msg.set(CapPrice_56);
  Instrument_56.insert(CapPrice_56.getString());
  FIX::ContractMultiplier ContractMultiplier_56;
  ContractMultiplier_56.setString("570774");
  msg.set(ContractMultiplier_56);
  Instrument_56.insert(ContractMultiplier_56.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_56(0);
  msg.set(ContractMultiplierUnit_56);
  Instrument_56.insert(ContractMultiplierUnit_56.getString());
  FIX::ContractSettlMonth ContractSettlMonth_56("MONTHYEAR_809890675");
  msg.set(ContractSettlMonth_56);
  Instrument_56.insert(ContractSettlMonth_56.getString());
  FIX::CountryOfIssue CountryOfIssue_56("COUNTRY_1202663115");
  msg.set(CountryOfIssue_56);
  Instrument_56.insert(CountryOfIssue_56.getString());
  FIX::CouponPaymentDate CouponPaymentDate_56("LOCALMKTDATE_149765339");
  msg.set(CouponPaymentDate_56);
  Instrument_56.insert(CouponPaymentDate_56.getString());
  FIX::CouponRate CouponRate_56;
  CouponRate_56.setString("69.640000");
  msg.set(CouponRate_56);
  Instrument_56.insert(CouponRate_56.getString());
  FIX::CreditRating CreditRating_56("STRING_560573538");
  msg.set(CreditRating_56);
  Instrument_56.insert(CreditRating_56.getString());
  FIX::DatedDate DatedDate_56("LOCALMKTDATE_368756535");
  msg.set(DatedDate_56);
  Instrument_56.insert(DatedDate_56.getString());
  FIX::DetachmentPoint DetachmentPoint_56;
  DetachmentPoint_56.setString("9.020000");
  msg.set(DetachmentPoint_56);
  Instrument_56.insert(DetachmentPoint_56.getString());
  FIX::EncodedIssuer EncodedIssuer_56("DATA_1398225963");
  msg.set(EncodedIssuer_56);
  Instrument_56.insert(EncodedIssuer_56.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_56(457315962);
  msg.set(EncodedIssuerLen_56);
  Instrument_56.insert(EncodedIssuerLen_56.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_56("DATA_2006206079");
  msg.set(EncodedSecurityDesc_56);
  Instrument_56.insert(EncodedSecurityDesc_56.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_56(745741632);
  msg.set(EncodedSecurityDescLen_56);
  Instrument_56.insert(EncodedSecurityDescLen_56.getString());
  FIX::ExerciseStyle ExerciseStyle_56(1);
  msg.set(ExerciseStyle_56);
  Instrument_56.insert(ExerciseStyle_56.getString());
  FIX::Factor Factor_56;
  Factor_56.setString("5447517");
  msg.set(Factor_56);
  Instrument_56.insert(Factor_56.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_56(false);
  msg.set(FlexProductEligibilityIndicator_56);
  Instrument_56.insert(FlexProductEligibilityIndicator_56.getString());
  FIX::FlexibleIndicator FlexibleIndicator_56(true);
  msg.set(FlexibleIndicator_56);
  Instrument_56.insert(FlexibleIndicator_56.getString());
  FIX::FloorPrice FloorPrice_56;
  FloorPrice_56.setString("14174477");
  msg.set(FloorPrice_56);
  Instrument_56.insert(FloorPrice_56.getString());
  FIX::FlowScheduleType FlowScheduleType_56(1);
  msg.set(FlowScheduleType_56);
  Instrument_56.insert(FlowScheduleType_56.getString());
  FIX::InstrRegistry InstrRegistry_56("STRING_1708956336");
  msg.set(InstrRegistry_56);
  Instrument_56.insert(InstrRegistry_56.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_56('8');
  msg.set(InstrmtAssignmentMethod_56);
  Instrument_56.insert(InstrmtAssignmentMethod_56.getString());
  FIX::InterestAccrualDate InterestAccrualDate_56("LOCALMKTDATE_135857985");
  msg.set(InterestAccrualDate_56);
  Instrument_56.insert(InterestAccrualDate_56.getString());
  FIX::IssueDate IssueDate_56("LOCALMKTDATE_27446111");
  msg.set(IssueDate_56);
  Instrument_56.insert(IssueDate_56.getString());
  FIX::Issuer Issuer_56("STRING_1895624794");
  msg.set(Issuer_56);
  Instrument_56.insert(Issuer_56.getString());
  FIX::ListMethod ListMethod_56(1);
  msg.set(ListMethod_56);
  Instrument_56.insert(ListMethod_56.getString());
  FIX::LocaleOfIssue LocaleOfIssue_56("STRING_859689492");
  msg.set(LocaleOfIssue_56);
  Instrument_56.insert(LocaleOfIssue_56.getString());
  FIX::MaturityDate MaturityDate_56("LOCALMKTDATE_692084857");
  msg.set(MaturityDate_56);
  Instrument_56.insert(MaturityDate_56.getString());
  FIX::MaturityMonthYear MaturityMonthYear_56("MONTHYEAR_1135711029");
  msg.set(MaturityMonthYear_56);
  Instrument_56.insert(MaturityMonthYear_56.getString());
  FIX::MaturityTime MaturityTime_56("TZTIMEONLY_730581107");
  msg.set(MaturityTime_56);
  Instrument_56.insert(MaturityTime_56.getString());
  FIX::MinPriceIncrement MinPriceIncrement_56;
  MinPriceIncrement_56.setString("11657596");
  msg.set(MinPriceIncrement_56);
  Instrument_56.insert(MinPriceIncrement_56.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_56;
  MinPriceIncrementAmount_56.setString("5647655");
  msg.set(MinPriceIncrementAmount_56);
  Instrument_56.insert(MinPriceIncrementAmount_56.getString());
  FIX::NTPositionLimit NTPositionLimit_56(787658580);
  msg.set(NTPositionLimit_56);
  Instrument_56.insert(NTPositionLimit_56.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_56;
  NotionalPercentageOutstanding_56.setString("12.910000");
  msg.set(NotionalPercentageOutstanding_56);
  Instrument_56.insert(NotionalPercentageOutstanding_56.getString());
  FIX::OptAttribute OptAttribute_56('1');
  msg.set(OptAttribute_56);
  Instrument_56.insert(OptAttribute_56.getString());
  FIX::OptPayoutAmount OptPayoutAmount_56;
  OptPayoutAmount_56.setString("19903216");
  msg.set(OptPayoutAmount_56);
  Instrument_56.insert(OptPayoutAmount_56.getString());
  FIX::OptPayoutType OptPayoutType_56(1);
  msg.set(OptPayoutType_56);
  Instrument_56.insert(OptPayoutType_56.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_56;
  OriginalNotionalPercentageOutstanding_56.setString("31.460000");
  msg.set(OriginalNotionalPercentageOutstanding_56);
  Instrument_56.insert(OriginalNotionalPercentageOutstanding_56.getString());
  FIX::Pool Pool_56("STRING_403411586");
  msg.set(Pool_56);
  Instrument_56.insert(Pool_56.getString());
  FIX::PositionLimit PositionLimit_56(2115083166);
  msg.set(PositionLimit_56);
  Instrument_56.insert(PositionLimit_56.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_56("STRING_STD");
  msg.set(PriceQuoteMethod_56);
  Instrument_56.insert(PriceQuoteMethod_56.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_56("STRING_1801637549");
  msg.set(PriceUnitOfMeasure_56);
  Instrument_56.insert(PriceUnitOfMeasure_56.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_56;
  PriceUnitOfMeasureQty_56.setString("4249154");
  msg.set(PriceUnitOfMeasureQty_56);
  Instrument_56.insert(PriceUnitOfMeasureQty_56.getString());
  FIX::Product Product_58(12);
  msg.set(Product_58);
  Instrument_56.insert(Product_58.getString());
  FIX::ProductComplex ProductComplex_56("STRING_399895533");
  msg.set(ProductComplex_56);
  Instrument_56.insert(ProductComplex_56.getString());
  FIX::PutOrCall PutOrCall_56(1);
  msg.set(PutOrCall_56);
  Instrument_56.insert(PutOrCall_56.getString());
  FIX::RedemptionDate RedemptionDate_56("LOCALMKTDATE_585574597");
  msg.set(RedemptionDate_56);
  Instrument_56.insert(RedemptionDate_56.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_56("STRING_1815052542");
  msg.set(RepoCollateralSecurityType_56);
  Instrument_56.insert(RepoCollateralSecurityType_56.getString());
  FIX::RepurchaseRate RepurchaseRate_56;
  RepurchaseRate_56.setString("3.050000");
  msg.set(RepurchaseRate_56);
  Instrument_56.insert(RepurchaseRate_56.getString());
  FIX::RepurchaseTerm RepurchaseTerm_56(2003022379);
  msg.set(RepurchaseTerm_56);
  Instrument_56.insert(RepurchaseTerm_56.getString());
  FIX::RestructuringType RestructuringType_56("STRING_FR");
  msg.set(RestructuringType_56);
  Instrument_56.insert(RestructuringType_56.getString());
  FIX::SecurityDesc SecurityDesc_56("STRING_1976636642");
  msg.set(SecurityDesc_56);
  Instrument_56.insert(SecurityDesc_56.getString());
  FIX::SecurityExchange SecurityExchange_56("EXCHANGE_731498817");
  msg.set(SecurityExchange_56);
  Instrument_56.insert(SecurityExchange_56.getString());
  FIX::SecurityGroup SecurityGroup_56("STRING_946892125");
  msg.set(SecurityGroup_56);
  Instrument_56.insert(SecurityGroup_56.getString());
  FIX::SecurityID SecurityID_56("STRING_2004082753");
  msg.set(SecurityID_56);
  Instrument_56.insert(SecurityID_56.getString());
  FIX::SecurityIDSource SecurityIDSource_56("STRING_C");
  msg.set(SecurityIDSource_56);
  Instrument_56.insert(SecurityIDSource_56.getString());
  FIX::SecurityStatus SecurityStatus_56("STRING_1");
  msg.set(SecurityStatus_56);
  Instrument_56.insert(SecurityStatus_56.getString());
  FIX::SecuritySubType SecuritySubType_57("STRING_716288597");
  msg.set(SecuritySubType_57);
  Instrument_56.insert(SecuritySubType_57.getString());
  FIX::SecurityType SecurityType_58("STRING_TCAL");
  msg.set(SecurityType_58);
  Instrument_56.insert(SecurityType_58.getString());
  FIX::Seniority Seniority_56("STRING_SB");
  msg.set(Seniority_56);
  Instrument_56.insert(Seniority_56.getString());
  FIX::SettlMethod SettlMethod_56('C');
  msg.set(SettlMethod_56);
  Instrument_56.insert(SettlMethod_56.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_56("STRING_190000832");
  msg.set(SettleOnOpenFlag_56);
  Instrument_56.insert(SettleOnOpenFlag_56.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_56("STRING_1666028450");
  msg.set(StateOrProvinceOfIssue_56);
  Instrument_56.insert(StateOrProvinceOfIssue_56.getString());
  FIX::StrikeCurrency StrikeCurrency_56("CAN");
  msg.set(StrikeCurrency_56);
  Instrument_56.insert(StrikeCurrency_56.getString());
  FIX::StrikeMultiplier StrikeMultiplier_56;
  StrikeMultiplier_56.setString("8932009");
  msg.set(StrikeMultiplier_56);
  Instrument_56.insert(StrikeMultiplier_56.getString());
  FIX::StrikePrice StrikePrice_56;
  StrikePrice_56.setString("20773663");
  msg.set(StrikePrice_56);
  Instrument_56.insert(StrikePrice_56.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_56(2);
  msg.set(StrikePriceBoundaryMethod_56);
  Instrument_56.insert(StrikePriceBoundaryMethod_56.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_56;
  StrikePriceBoundaryPrecision_56.setString("4.820000");
  msg.set(StrikePriceBoundaryPrecision_56);
  Instrument_56.insert(StrikePriceBoundaryPrecision_56.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_56(2);
  msg.set(StrikePriceDeterminationMethod_56);
  Instrument_56.insert(StrikePriceDeterminationMethod_56.getString());
  FIX::StrikeValue StrikeValue_56;
  StrikeValue_56.setString("13530046");
  msg.set(StrikeValue_56);
  Instrument_56.insert(StrikeValue_56.getString());
  FIX::Symbol Symbol_56("STRING_980500883");
  msg.set(Symbol_56);
  Instrument_56.insert(Symbol_56.getString());
  FIX::SymbolSfx SymbolSfx_56("STRING_CD");
  msg.set(SymbolSfx_56);
  Instrument_56.insert(SymbolSfx_56.getString());
  FIX::TimeUnit TimeUnit_56("STRING_Wk");
  msg.set(TimeUnit_56);
  Instrument_56.insert(TimeUnit_56.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_56(4);
  msg.set(UnderlyingPriceDeterminationMethod_56);
  Instrument_56.insert(UnderlyingPriceDeterminationMethod_56.getString());
  FIX::UnitOfMeasure UnitOfMeasure_56("STRING_lbs");
  msg.set(UnitOfMeasure_56);
  Instrument_56.insert(UnitOfMeasure_56.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_56;
  UnitOfMeasureQty_56.setString("6999179");
  msg.set(UnitOfMeasureQty_56);
  Instrument_56.insert(UnitOfMeasureQty_56.getString());
  FIX::ValuationMethod ValuationMethod_56("STRING_FUTDA");
  msg.set(ValuationMethod_56);
  Instrument_56.insert(ValuationMethod_56.getString());
  all_values.push_back(Instrument_56);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_108;
    FIX::ComplexEventCondition ComplexEventCondition_108(2);
    noComplexEvents_0_0.set(ComplexEventCondition_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventCondition_108.getString());
    FIX::ComplexEventPrice ComplexEventPrice_108;
    ComplexEventPrice_108.setString("14624370");
    noComplexEvents_0_0.set(ComplexEventPrice_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPrice_108.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_108(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceBoundaryMethod_108.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_108;
    ComplexEventPriceBoundaryPrecision_108.setString("12.570000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceBoundaryPrecision_108.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_108(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventPriceTimeType_108.getString());
    FIX::ComplexEventType ComplexEventType_108(3);
    noComplexEvents_0_0.set(ComplexEventType_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexEventType_108.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_108;
    ComplexOptPayoutAmount_108.setString("6533503");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_108);
    ComplexEvents_NoComplexEvents_108.insert(ComplexOptPayoutAmount_108.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_108);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_223;
      FIX::ComplexEventEndDate ComplexEventEndDate_223(FIX::UTCTIMESTAMP(23, 55, 32, 15, 42002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_223);
      ComplexEventDates_NoComplexEventDates_223.insert(ComplexEventEndDate_223.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_223(FIX::UTCTIMESTAMP(7, 19, 54, 1, 22006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_223);
      ComplexEventDates_NoComplexEventDates_223.insert(ComplexEventStartDate_223.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_223);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_441;
        FIX::ComplexEventEndTime ComplexEventEndTime_441(FIX::UTCTIMEONLY(14, 24, 11));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_441);
        ComplexEventTimes_NoComplexEventTimes_441.insert(ComplexEventEndTime_441.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_441(FIX::UTCTIMEONLY(10, 35, 35));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_441);
        ComplexEventTimes_NoComplexEventTimes_441.insert(ComplexEventStartTime_441.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_441);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_442;
        FIX::ComplexEventEndTime ComplexEventEndTime_442(FIX::UTCTIMEONLY(22, 5, 54));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_442);
        ComplexEventTimes_NoComplexEventTimes_442.insert(ComplexEventEndTime_442.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_442(FIX::UTCTIMEONLY(19, 28, 37));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_442);
        ComplexEventTimes_NoComplexEventTimes_442.insert(ComplexEventStartTime_442.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_442);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_224;
      FIX::ComplexEventEndDate ComplexEventEndDate_224(FIX::UTCTIMESTAMP(3, 25, 40, 2, 92012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_224);
      ComplexEventDates_NoComplexEventDates_224.insert(ComplexEventEndDate_224.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_224(FIX::UTCTIMESTAMP(15, 13, 59, 1, 82009));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_224);
      ComplexEventDates_NoComplexEventDates_224.insert(ComplexEventStartDate_224.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_224);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_443;
        FIX::ComplexEventEndTime ComplexEventEndTime_443(FIX::UTCTIMEONLY(6, 56, 27));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_443);
        ComplexEventTimes_NoComplexEventTimes_443.insert(ComplexEventEndTime_443.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_443(FIX::UTCTIMEONLY(18, 54, 27));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_443);
        ComplexEventTimes_NoComplexEventTimes_443.insert(ComplexEventStartTime_443.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_443);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
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
    multiset<string> EvntGrp_NoEvents_112;
    FIX::EventDate EventDate_112("LOCALMKTDATE_1489430885");
    noEvents_0_0.set(EventDate_112);
    EvntGrp_NoEvents_112.insert(EventDate_112.getString());
    FIX::EventPx EventPx_112;
    EventPx_112.setString("4980058");
    noEvents_0_0.set(EventPx_112);
    EvntGrp_NoEvents_112.insert(EventPx_112.getString());
    FIX::EventText EventText_112("STRING_1636125213");
    noEvents_0_0.set(EventText_112);
    EvntGrp_NoEvents_112.insert(EventText_112.getString());
    FIX::EventTime EventTime_112(FIX::UTCTIMESTAMP(8, 53, 17, 8, 92012));
    noEvents_0_0.set(EventTime_112);
    EvntGrp_NoEvents_112.insert(EventTime_112.getString());
    FIX::EventType EventType_112(9);
    noEvents_0_0.set(EventType_112);
    EvntGrp_NoEvents_112.insert(EventType_112.getString());
    all_values.push_back(EvntGrp_NoEvents_112);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::Quote::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_113;
    FIX::EventDate EventDate_113("LOCALMKTDATE_314705366");
    noEvents_0_1.set(EventDate_113);
    EvntGrp_NoEvents_113.insert(EventDate_113.getString());
    FIX::EventPx EventPx_113;
    EventPx_113.setString("836512");
    noEvents_0_1.set(EventPx_113);
    EvntGrp_NoEvents_113.insert(EventPx_113.getString());
    FIX::EventText EventText_113("STRING_436859774");
    noEvents_0_1.set(EventText_113);
    EvntGrp_NoEvents_113.insert(EventText_113.getString());
    FIX::EventTime EventTime_113(FIX::UTCTIMESTAMP(22, 28, 22, 7, 42008));
    noEvents_0_1.set(EventTime_113);
    EvntGrp_NoEvents_113.insert(EventTime_113.getString());
    FIX::EventType EventType_113(19);
    noEvents_0_1.set(EventType_113);
    EvntGrp_NoEvents_113.insert(EventType_113.getString());
    all_values.push_back(EvntGrp_NoEvents_113);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::Quote::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_114;
    FIX::EventDate EventDate_114("LOCALMKTDATE_1278323382");
    noEvents_0_2.set(EventDate_114);
    EvntGrp_NoEvents_114.insert(EventDate_114.getString());
    FIX::EventPx EventPx_114;
    EventPx_114.setString("17004532");
    noEvents_0_2.set(EventPx_114);
    EvntGrp_NoEvents_114.insert(EventPx_114.getString());
    FIX::EventText EventText_114("STRING_1174156874");
    noEvents_0_2.set(EventText_114);
    EvntGrp_NoEvents_114.insert(EventText_114.getString());
    FIX::EventTime EventTime_114(FIX::UTCTIMESTAMP(16, 44, 56, 11, 122017));
    noEvents_0_2.set(EventTime_114);
    EvntGrp_NoEvents_114.insert(EventTime_114.getString());
    FIX::EventType EventType_114(13);
    noEvents_0_2.set(EventType_114);
    EvntGrp_NoEvents_114.insert(EventType_114.getString());
    all_values.push_back(EvntGrp_NoEvents_114);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Quote::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_103;
    FIX::InstrumentPartyID InstrumentPartyID_103("STRING_1160434532");
    noInstrumentParties_0_0.set(InstrumentPartyID_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyID_103.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_103('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyIDSource_103.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_103(743706701);
    noInstrumentParties_0_0.set(InstrumentPartyRole_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyRole_103.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_103);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202;
      FIX::InstrumentPartySubID InstrumentPartySubID_202("STRING_1535918344");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_202);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202.insert(InstrumentPartySubID_202.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_202(596322353);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_202);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202.insert(InstrumentPartySubIDType_202.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203;
      FIX::InstrumentPartySubID InstrumentPartySubID_203("STRING_1912843043");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_203);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203.insert(InstrumentPartySubID_203.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_203(1526216664);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_203);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203.insert(InstrumentPartySubIDType_203.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204;
      FIX::InstrumentPartySubID InstrumentPartySubID_204("STRING_911027719");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_204);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204.insert(InstrumentPartySubID_204.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_204(1996494282);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_204);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204.insert(InstrumentPartySubIDType_204.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_111;
    FIX::SecurityAltID SecurityAltID_111("STRING_296408802");
    noSecurityAltID_0_0.set(SecurityAltID_111);
    SecAltIDGrp_NoSecurityAltID_111.insert(SecurityAltID_111.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_111("STRING_1893795440");
    noSecurityAltID_0_0.set(SecurityAltIDSource_111);
    SecAltIDGrp_NoSecurityAltID_111.insert(SecurityAltIDSource_111.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_111);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_112;
    FIX::SecurityAltID SecurityAltID_112("STRING_1842929878");
    noSecurityAltID_0_1.set(SecurityAltID_112);
    SecAltIDGrp_NoSecurityAltID_112.insert(SecurityAltID_112.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_112("STRING_1585901585");
    noSecurityAltID_0_1.set(SecurityAltIDSource_112);
    SecAltIDGrp_NoSecurityAltID_112.insert(SecurityAltIDSource_112.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_112);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_113;
    FIX::SecurityAltID SecurityAltID_113("STRING_222080631");
    noSecurityAltID_0_2.set(SecurityAltID_113);
    SecAltIDGrp_NoSecurityAltID_113.insert(SecurityAltID_113.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_113("STRING_960609677");
    noSecurityAltID_0_2.set(SecurityAltIDSource_113);
    SecAltIDGrp_NoSecurityAltID_113.insert(SecurityAltIDSource_113.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_113);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_112;
  FIX::SecurityXML SecurityXML_113("XMLDATA_1503785375");
  msg.set(SecurityXML_113);
  FIX::SecurityXMLLen SecurityXMLLen_56(1246655889);
  msg.set(SecurityXMLLen_56);
  FIX::SecurityXMLSchema SecurityXMLSchema_56("STRING_91449412");
  msg.set(SecurityXMLSchema_56);
  SecurityXML_112.insert(SecurityXMLSchema_56.getString());
  all_values.push_back(SecurityXML_112);

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::Quote::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_0;
    FIX::LegBidForwardPoints LegBidForwardPoints_0;
    LegBidForwardPoints_0.setString("2733291");
    noLegs_0_0.set(LegBidForwardPoints_0);
    LegQuotGrp_NoLegs_0.insert(LegBidForwardPoints_0.getString());
    FIX::LegBidPx LegBidPx_0;
    LegBidPx_0.setString("10321063");
    noLegs_0_0.set(LegBidPx_0);
    LegQuotGrp_NoLegs_0.insert(LegBidPx_0.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_0;
    LegOfferForwardPoints_0.setString("16388487");
    noLegs_0_0.set(LegOfferForwardPoints_0);
    LegQuotGrp_NoLegs_0.insert(LegOfferForwardPoints_0.getString());
    FIX::LegOfferPx LegOfferPx_0;
    LegOfferPx_0.setString("18977607");
    noLegs_0_0.set(LegOfferPx_0);
    LegQuotGrp_NoLegs_0.insert(LegOfferPx_0.getString());
    FIX::LegOrderQty LegOrderQty_5;
    LegOrderQty_5.setString("7436852");
    noLegs_0_0.set(LegOrderQty_5);
    LegQuotGrp_NoLegs_0.insert(LegOrderQty_5.getString());
    FIX::LegPriceType LegPriceType_0(404050650);
    noLegs_0_0.set(LegPriceType_0);
    LegQuotGrp_NoLegs_0.insert(LegPriceType_0.getString());
    FIX::LegQty LegQty_5;
    LegQty_5.setString("9457912");
    noLegs_0_0.set(LegQty_5);
    LegQuotGrp_NoLegs_0.insert(LegQty_5.getString());
    FIX::LegRefID LegRefID_5("STRING_1944694954");
    noLegs_0_0.set(LegRefID_5);
    LegQuotGrp_NoLegs_0.insert(LegRefID_5.getString());
    FIX::LegSettlDate LegSettlDate_5("LOCALMKTDATE_1814742022");
    noLegs_0_0.set(LegSettlDate_5);
    LegQuotGrp_NoLegs_0.insert(LegSettlDate_5.getString());
    FIX::LegSettlType LegSettlType_5('1');
    noLegs_0_0.set(LegSettlType_5);
    LegQuotGrp_NoLegs_0.insert(LegSettlType_5.getString());
    FIX::LegSwapType LegSwapType_5(5);
    noLegs_0_0.set(LegSwapType_5);
    LegQuotGrp_NoLegs_0.insert(LegSwapType_5.getString());
    all_values.push_back(LegQuotGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_70;
    FIX::EncodedLegIssuer EncodedLegIssuer_70("DATA_1408724978");
    noLegs_0_0.set(EncodedLegIssuer_70);
    InstrumentLeg_70.insert(EncodedLegIssuer_70.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_70(226170098);
    noLegs_0_0.set(EncodedLegIssuerLen_70);
    InstrumentLeg_70.insert(EncodedLegIssuerLen_70.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_70("DATA_1073591260");
    noLegs_0_0.set(EncodedLegSecurityDesc_70);
    InstrumentLeg_70.insert(EncodedLegSecurityDesc_70.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_70(797159674);
    noLegs_0_0.set(EncodedLegSecurityDescLen_70);
    InstrumentLeg_70.insert(EncodedLegSecurityDescLen_70.getString());
    FIX::LegCFICode LegCFICode_70("STRING_822492451");
    noLegs_0_0.set(LegCFICode_70);
    InstrumentLeg_70.insert(LegCFICode_70.getString());
    FIX::LegContractMultiplier LegContractMultiplier_70;
    LegContractMultiplier_70.setString("8389506");
    noLegs_0_0.set(LegContractMultiplier_70);
    InstrumentLeg_70.insert(LegContractMultiplier_70.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_70(175892690);
    noLegs_0_0.set(LegContractMultiplierUnit_70);
    InstrumentLeg_70.insert(LegContractMultiplierUnit_70.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_70("MONTHYEAR_1733520171");
    noLegs_0_0.set(LegContractSettlMonth_70);
    InstrumentLeg_70.insert(LegContractSettlMonth_70.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_70("COUNTRY_687961290");
    noLegs_0_0.set(LegCountryOfIssue_70);
    InstrumentLeg_70.insert(LegCountryOfIssue_70.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_70("LOCALMKTDATE_2138969129");
    noLegs_0_0.set(LegCouponPaymentDate_70);
    InstrumentLeg_70.insert(LegCouponPaymentDate_70.getString());
    FIX::LegCouponRate LegCouponRate_70;
    LegCouponRate_70.setString("89.730000");
    noLegs_0_0.set(LegCouponRate_70);
    InstrumentLeg_70.insert(LegCouponRate_70.getString());
    FIX::LegCreditRating LegCreditRating_70("STRING_434273082");
    noLegs_0_0.set(LegCreditRating_70);
    InstrumentLeg_70.insert(LegCreditRating_70.getString());
    FIX::LegCurrency LegCurrency_70("USD");
    noLegs_0_0.set(LegCurrency_70);
    InstrumentLeg_70.insert(LegCurrency_70.getString());
    FIX::LegDatedDate LegDatedDate_70("LOCALMKTDATE_656353713");
    noLegs_0_0.set(LegDatedDate_70);
    InstrumentLeg_70.insert(LegDatedDate_70.getString());
    FIX::LegExerciseStyle LegExerciseStyle_70(647541389);
    noLegs_0_0.set(LegExerciseStyle_70);
    InstrumentLeg_70.insert(LegExerciseStyle_70.getString());
    FIX::LegFactor LegFactor_70;
    LegFactor_70.setString("8246486");
    noLegs_0_0.set(LegFactor_70);
    InstrumentLeg_70.insert(LegFactor_70.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_70(1903009602);
    noLegs_0_0.set(LegFlowScheduleType_70);
    InstrumentLeg_70.insert(LegFlowScheduleType_70.getString());
    FIX::LegInstrRegistry LegInstrRegistry_70("STRING_738990801");
    noLegs_0_0.set(LegInstrRegistry_70);
    InstrumentLeg_70.insert(LegInstrRegistry_70.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_70("LOCALMKTDATE_1881403584");
    noLegs_0_0.set(LegInterestAccrualDate_70);
    InstrumentLeg_70.insert(LegInterestAccrualDate_70.getString());
    FIX::LegIssueDate LegIssueDate_70("LOCALMKTDATE_28855070");
    noLegs_0_0.set(LegIssueDate_70);
    InstrumentLeg_70.insert(LegIssueDate_70.getString());
    FIX::LegIssuer LegIssuer_70("STRING_1771097174");
    noLegs_0_0.set(LegIssuer_70);
    InstrumentLeg_70.insert(LegIssuer_70.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_70("STRING_1372768715");
    noLegs_0_0.set(LegLocaleOfIssue_70);
    InstrumentLeg_70.insert(LegLocaleOfIssue_70.getString());
    FIX::LegMaturityDate LegMaturityDate_70("LOCALMKTDATE_1926615831");
    noLegs_0_0.set(LegMaturityDate_70);
    InstrumentLeg_70.insert(LegMaturityDate_70.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_70("MONTHYEAR_367298748");
    noLegs_0_0.set(LegMaturityMonthYear_70);
    InstrumentLeg_70.insert(LegMaturityMonthYear_70.getString());
    FIX::LegMaturityTime LegMaturityTime_70("TZTIMEONLY_1776819366");
    noLegs_0_0.set(LegMaturityTime_70);
    InstrumentLeg_70.insert(LegMaturityTime_70.getString());
    FIX::LegOptAttribute LegOptAttribute_70('7');
    noLegs_0_0.set(LegOptAttribute_70);
    InstrumentLeg_70.insert(LegOptAttribute_70.getString());
    FIX::LegOptionRatio LegOptionRatio_70;
    LegOptionRatio_70.setString("1645100");
    noLegs_0_0.set(LegOptionRatio_70);
    InstrumentLeg_70.insert(LegOptionRatio_70.getString());
    FIX::LegPool LegPool_70("STRING_1444077740");
    noLegs_0_0.set(LegPool_70);
    InstrumentLeg_70.insert(LegPool_70.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_70("STRING_207386875");
    noLegs_0_0.set(LegPriceUnitOfMeasure_70);
    InstrumentLeg_70.insert(LegPriceUnitOfMeasure_70.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_70;
    LegPriceUnitOfMeasureQty_70.setString("11221558");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_70);
    InstrumentLeg_70.insert(LegPriceUnitOfMeasureQty_70.getString());
    FIX::LegProduct LegProduct_70(705319071);
    noLegs_0_0.set(LegProduct_70);
    InstrumentLeg_70.insert(LegProduct_70.getString());
    FIX::LegPutOrCall LegPutOrCall_70(433556973);
    noLegs_0_0.set(LegPutOrCall_70);
    InstrumentLeg_70.insert(LegPutOrCall_70.getString());
    FIX::LegRatioQty LegRatioQty_70;
    LegRatioQty_70.setString("482635");
    noLegs_0_0.set(LegRatioQty_70);
    InstrumentLeg_70.insert(LegRatioQty_70.getString());
    FIX::LegRedemptionDate LegRedemptionDate_70("LOCALMKTDATE_1502478745");
    noLegs_0_0.set(LegRedemptionDate_70);
    InstrumentLeg_70.insert(LegRedemptionDate_70.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_70("STRING_1256049425");
    noLegs_0_0.set(LegRepoCollateralSecurityType_70);
    InstrumentLeg_70.insert(LegRepoCollateralSecurityType_70.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_70;
    LegRepurchaseRate_70.setString("41.620000");
    noLegs_0_0.set(LegRepurchaseRate_70);
    InstrumentLeg_70.insert(LegRepurchaseRate_70.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_70(1678371436);
    noLegs_0_0.set(LegRepurchaseTerm_70);
    InstrumentLeg_70.insert(LegRepurchaseTerm_70.getString());
    FIX::LegSecurityDesc LegSecurityDesc_70("STRING_842085948");
    noLegs_0_0.set(LegSecurityDesc_70);
    InstrumentLeg_70.insert(LegSecurityDesc_70.getString());
    FIX::LegSecurityExchange LegSecurityExchange_70("EXCHANGE_1575175452");
    noLegs_0_0.set(LegSecurityExchange_70);
    InstrumentLeg_70.insert(LegSecurityExchange_70.getString());
    FIX::LegSecurityID LegSecurityID_70("STRING_1669856917");
    noLegs_0_0.set(LegSecurityID_70);
    InstrumentLeg_70.insert(LegSecurityID_70.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_70("STRING_724531273");
    noLegs_0_0.set(LegSecurityIDSource_70);
    InstrumentLeg_70.insert(LegSecurityIDSource_70.getString());
    FIX::LegSecuritySubType LegSecuritySubType_70("STRING_2009448534");
    noLegs_0_0.set(LegSecuritySubType_70);
    InstrumentLeg_70.insert(LegSecuritySubType_70.getString());
    FIX::LegSecurityType LegSecurityType_70("STRING_1356788628");
    noLegs_0_0.set(LegSecurityType_70);
    InstrumentLeg_70.insert(LegSecurityType_70.getString());
    FIX::LegSide LegSide_70('4');
    noLegs_0_0.set(LegSide_70);
    InstrumentLeg_70.insert(LegSide_70.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_70("STRING_518318599");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_70);
    InstrumentLeg_70.insert(LegStateOrProvinceOfIssue_70.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_70("CHF");
    noLegs_0_0.set(LegStrikeCurrency_70);
    InstrumentLeg_70.insert(LegStrikeCurrency_70.getString());
    FIX::LegStrikePrice LegStrikePrice_70;
    LegStrikePrice_70.setString("2738445");
    noLegs_0_0.set(LegStrikePrice_70);
    InstrumentLeg_70.insert(LegStrikePrice_70.getString());
    FIX::LegSymbol LegSymbol_70("STRING_595837170");
    noLegs_0_0.set(LegSymbol_70);
    InstrumentLeg_70.insert(LegSymbol_70.getString());
    FIX::LegSymbolSfx LegSymbolSfx_70("STRING_603963110");
    noLegs_0_0.set(LegSymbolSfx_70);
    InstrumentLeg_70.insert(LegSymbolSfx_70.getString());
    FIX::LegTimeUnit LegTimeUnit_70("STRING_302699624");
    noLegs_0_0.set(LegTimeUnit_70);
    InstrumentLeg_70.insert(LegTimeUnit_70.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_70("STRING_219450697");
    noLegs_0_0.set(LegUnitOfMeasure_70);
    InstrumentLeg_70.insert(LegUnitOfMeasure_70.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_70;
    LegUnitOfMeasureQty_70.setString("19767318");
    noLegs_0_0.set(LegUnitOfMeasureQty_70);
    InstrumentLeg_70.insert(LegUnitOfMeasureQty_70.getString());
    all_values.push_back(InstrumentLeg_70);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_124;
      FIX::LegSecurityAltID LegSecurityAltID_124("STRING_586749445");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_124);
      LegSecAltIDGrp_NoLegSecurityAltID_124.insert(LegSecurityAltID_124.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_124("STRING_1606067543");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_124);
      LegSecAltIDGrp_NoLegSecurityAltID_124.insert(LegSecurityAltIDSource_124.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_124);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_0;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_0("CHF");
    noLegs_0_0.set(LegBenchmarkCurveCurrency_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurveCurrency_0.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_0("STRING_902661636");
    noLegs_0_0.set(LegBenchmarkCurveName_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurveName_0.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_0("STRING_1014142161");
    noLegs_0_0.set(LegBenchmarkCurvePoint_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurvePoint_0.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_0;
    LegBenchmarkPrice_0.setString("18734153");
    noLegs_0_0.set(LegBenchmarkPrice_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkPrice_0.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_0(1607980707);
    noLegs_0_0.set(LegBenchmarkPriceType_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkPriceType_0.getString());
    all_values.push_back(LegBenchmarkCurveData_0);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_14;
      FIX::LegStipulationType LegStipulationType_14("STRING_1921678899");
      noLegStipulations_0_1_0.set(LegStipulationType_14);
      LegStipulations_NoLegStipulations_14.insert(LegStipulationType_14.getString());
      FIX::LegStipulationValue LegStipulationValue_14("STRING_962975804");
      noLegStipulations_0_1_0.set(LegStipulationValue_14);
      LegStipulations_NoLegStipulations_14.insert(LegStipulationValue_14.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_14);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_15;
      FIX::LegStipulationType LegStipulationType_15("STRING_556264912");
      noLegStipulations_0_1_1.set(LegStipulationType_15);
      LegStipulations_NoLegStipulations_15.insert(LegStipulationType_15.getString());
      FIX::LegStipulationValue LegStipulationValue_15("STRING_661409413");
      noLegStipulations_0_1_1.set(LegStipulationValue_15);
      LegStipulations_NoLegStipulations_15.insert(LegStipulationValue_15.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_15);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_96;
      FIX::NestedPartyID NestedPartyID_96("STRING_1398350860");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyID_96.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_96('8');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyIDSource_96.getString());
      FIX::NestedPartyRole NestedPartyRole_96(16236861);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_96);
      NestedParties_NoNestedPartyIDs_96.insert(NestedPartyRole_96.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_96);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_181;
        FIX::NestedPartySubID NestedPartySubID_181("STRING_2098549751");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_181);
        NstdPtysSubGrp_NoNestedPartySubIDs_181.insert(NestedPartySubID_181.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_181(1373025490);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_181);
        NstdPtysSubGrp_NoNestedPartySubIDs_181.insert(NestedPartySubIDType_181.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_181);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_182;
        FIX::NestedPartySubID NestedPartySubID_182("STRING_20793021");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_182);
        NstdPtysSubGrp_NoNestedPartySubIDs_182.insert(NestedPartySubID_182.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_182(469384702);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_182);
        NstdPtysSubGrp_NoNestedPartySubIDs_182.insert(NestedPartySubIDType_182.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_182);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_183;
        FIX::NestedPartySubID NestedPartySubID_183("STRING_1229871859");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_183);
        NstdPtysSubGrp_NoNestedPartySubIDs_183.insert(NestedPartySubID_183.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_183(890836195);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_183);
        NstdPtysSubGrp_NoNestedPartySubIDs_183.insert(NestedPartySubIDType_183.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_183);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_97;
      FIX::NestedPartyID NestedPartyID_97("STRING_743229255");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyID_97.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_97('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyIDSource_97.getString());
      FIX::NestedPartyRole NestedPartyRole_97(1494799305);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_97);
      NestedParties_NoNestedPartyIDs_97.insert(NestedPartyRole_97.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_97);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_184;
        FIX::NestedPartySubID NestedPartySubID_184("STRING_2045159727");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_184);
        NstdPtysSubGrp_NoNestedPartySubIDs_184.insert(NestedPartySubID_184.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_184(1324047482);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_184);
        NstdPtysSubGrp_NoNestedPartySubIDs_184.insert(NestedPartySubIDType_184.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_184);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_185;
        FIX::NestedPartySubID NestedPartySubID_185("STRING_1127760686");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_185);
        NstdPtysSubGrp_NoNestedPartySubIDs_185.insert(NestedPartySubID_185.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_185(484425524);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_185);
        NstdPtysSubGrp_NoNestedPartySubIDs_185.insert(NestedPartySubIDType_185.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_185);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_186;
        FIX::NestedPartySubID NestedPartySubID_186("STRING_782631378");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_186);
        NstdPtysSubGrp_NoNestedPartySubIDs_186.insert(NestedPartySubID_186.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_186(1934515972);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_186);
        NstdPtysSubGrp_NoNestedPartySubIDs_186.insert(NestedPartySubIDType_186.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_186);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_19;
  FIX::CashOrderQty CashOrderQty_19;
  CashOrderQty_19.setString("12356850");
  msg.set(CashOrderQty_19);
  OrderQtyData_19.insert(CashOrderQty_19.getString());
  FIX::OrderPercent OrderPercent_19;
  OrderPercent_19.setString("30.140000");
  msg.set(OrderPercent_19);
  OrderQtyData_19.insert(OrderPercent_19.getString());
  FIX::OrderQty OrderQty_28;
  OrderQty_28.setString("8011744");
  msg.set(OrderQty_28);
  OrderQtyData_19.insert(OrderQty_28.getString());
  FIX::RoundingDirection RoundingDirection_19('2');
  msg.set(RoundingDirection_19);
  OrderQtyData_19.insert(RoundingDirection_19.getString());
  FIX::RoundingModulus RoundingModulus_19;
  RoundingModulus_19.setString("11457900");
  msg.set(RoundingModulus_19);
  OrderQtyData_19.insert(RoundingModulus_19.getString());
  all_values.push_back(OrderQtyData_19);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_104;
    FIX::PartyID PartyID_104("STRING_735812019");
    noPartyIDs_0_0.set(PartyID_104);
    Parties_NoPartyIDs_104.insert(PartyID_104.getString());
    FIX::PartyIDSource PartyIDSource_104('F');
    noPartyIDs_0_0.set(PartyIDSource_104);
    Parties_NoPartyIDs_104.insert(PartyIDSource_104.getString());
    FIX::PartyRole PartyRole_104(71);
    noPartyIDs_0_0.set(PartyRole_104);
    Parties_NoPartyIDs_104.insert(PartyRole_104.getString());
    all_values.push_back(Parties_NoPartyIDs_104);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_202;
      FIX::PartySubID PartySubID_202("STRING_455145822");
      noPartySubIDs_0_1_0.set(PartySubID_202);
      PtysSubGrp_NoPartySubIDs_202.insert(PartySubID_202.getString());
      FIX::PartySubIDType PartySubIDType_202(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_202);
      PtysSubGrp_NoPartySubIDs_202.insert(PartySubIDType_202.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_202);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_203;
      FIX::PartySubID PartySubID_203("STRING_1486322649");
      noPartySubIDs_0_1_1.set(PartySubID_203);
      PtysSubGrp_NoPartySubIDs_203.insert(PartySubID_203.getString());
      FIX::PartySubIDType PartySubIDType_203(25);
      noPartySubIDs_0_1_1.set(PartySubIDType_203);
      PtysSubGrp_NoPartySubIDs_203.insert(PartySubIDType_203.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_203);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_105;
    FIX::PartyID PartyID_105("STRING_2031404230");
    noPartyIDs_0_1.set(PartyID_105);
    Parties_NoPartyIDs_105.insert(PartyID_105.getString());
    FIX::PartyIDSource PartyIDSource_105('C');
    noPartyIDs_0_1.set(PartyIDSource_105);
    Parties_NoPartyIDs_105.insert(PartyIDSource_105.getString());
    FIX::PartyRole PartyRole_105(14);
    noPartyIDs_0_1.set(PartyRole_105);
    Parties_NoPartyIDs_105.insert(PartyRole_105.getString());
    all_values.push_back(Parties_NoPartyIDs_105);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_204;
      FIX::PartySubID PartySubID_204("STRING_1906773454");
      noPartySubIDs_1_1_0.set(PartySubID_204);
      PtysSubGrp_NoPartySubIDs_204.insert(PartySubID_204.getString());
      FIX::PartySubIDType PartySubIDType_204(32);
      noPartySubIDs_1_1_0.set(PartySubIDType_204);
      PtysSubGrp_NoPartySubIDs_204.insert(PartySubIDType_204.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_204);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_205;
      FIX::PartySubID PartySubID_205("STRING_795549799");
      noPartySubIDs_1_1_1.set(PartySubID_205);
      PtysSubGrp_NoPartySubIDs_205.insert(PartySubID_205.getString());
      FIX::PartySubIDType PartySubIDType_205(13);
      noPartySubIDs_1_1_1.set(PartySubIDType_205);
      PtysSubGrp_NoPartySubIDs_205.insert(PartySubIDType_205.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_205);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_206;
      FIX::PartySubID PartySubID_206("STRING_605021767");
      noPartySubIDs_1_1_2.set(PartySubID_206);
      PtysSubGrp_NoPartySubIDs_206.insert(PartySubID_206.getString());
      FIX::PartySubIDType PartySubIDType_206(9);
      noPartySubIDs_1_1_2.set(PartySubIDType_206);
      PtysSubGrp_NoPartySubIDs_206.insert(PartySubIDType_206.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_206);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_106;
    FIX::PartyID PartyID_106("STRING_1548447941");
    noPartyIDs_0_2.set(PartyID_106);
    Parties_NoPartyIDs_106.insert(PartyID_106.getString());
    FIX::PartyIDSource PartyIDSource_106('8');
    noPartyIDs_0_2.set(PartyIDSource_106);
    Parties_NoPartyIDs_106.insert(PartyIDSource_106.getString());
    FIX::PartyRole PartyRole_106(24);
    noPartyIDs_0_2.set(PartyRole_106);
    Parties_NoPartyIDs_106.insert(PartyRole_106.getString());
    all_values.push_back(Parties_NoPartyIDs_106);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_207;
      FIX::PartySubID PartySubID_207("STRING_987123370");
      noPartySubIDs_2_1_0.set(PartySubID_207);
      PtysSubGrp_NoPartySubIDs_207.insert(PartySubID_207.getString());
      FIX::PartySubIDType PartySubIDType_207(18);
      noPartySubIDs_2_1_0.set(PartySubIDType_207);
      PtysSubGrp_NoPartySubIDs_207.insert(PartySubIDType_207.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_207);

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
    FIX::QuoteQualifier QuoteQualifier_0('7');
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
    multiset<string> RateSource_NoRateSources_12;
    FIX::RateSource RateSource_19(99);
    noRateSources_0_0.set(RateSource_19);
    RateSource_NoRateSources_12.insert(RateSource_19.getString());
    FIX::RateSourceType RateSourceType_12(1);
    noRateSources_0_0.set(RateSourceType_12);
    RateSource_NoRateSources_12.insert(RateSourceType_12.getString());
    FIX::ReferencePage ReferencePage_12("STRING_1772753533");
    noRateSources_0_0.set(ReferencePage_12);
    RateSource_NoRateSources_12.insert(ReferencePage_12.getString());
    all_values.push_back(RateSource_NoRateSources_12);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_13;
    FIX::RateSource RateSource_20(1);
    noRateSources_0_1.set(RateSource_20);
    RateSource_NoRateSources_13.insert(RateSource_20.getString());
    FIX::RateSourceType RateSourceType_13(0);
    noRateSources_0_1.set(RateSourceType_13);
    RateSource_NoRateSources_13.insert(RateSourceType_13.getString());
    FIX::ReferencePage ReferencePage_13("STRING_1022491318");
    noRateSources_0_1.set(ReferencePage_13);
    RateSource_NoRateSources_13.insert(ReferencePage_13.getString());
    all_values.push_back(RateSource_NoRateSources_13);

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_21;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_21("CHF");
  msg.set(BenchmarkCurveCurrency_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurveCurrency_21.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_21("STRING_Treasury");
  msg.set(BenchmarkCurveName_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurveName_21.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_21("STRING_1673470842");
  msg.set(BenchmarkCurvePoint_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkCurvePoint_21.getString());
  FIX::BenchmarkPrice BenchmarkPrice_21;
  BenchmarkPrice_21.setString("16684193");
  msg.set(BenchmarkPrice_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkPrice_21.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_21(1798719072);
  msg.set(BenchmarkPriceType_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkPriceType_21.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_21("STRING_1370395368");
  msg.set(BenchmarkSecurityID_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkSecurityID_21.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_21("STRING_1573132932");
  msg.set(BenchmarkSecurityIDSource_21);
  SpreadOrBenchmarkCurveData_21.insert(BenchmarkSecurityIDSource_21.getString());
  FIX::Spread Spread_21;
  Spread_21.setString("15580088");
  msg.set(Spread_21);
  SpreadOrBenchmarkCurveData_21.insert(Spread_21.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_21);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_35;
    FIX::StipulationType StipulationType_35("STRING_TRDVAR");
    noStipulations_0_0.set(StipulationType_35);
    Stipulations_NoStipulations_35.insert(StipulationType_35.getString());
    FIX::StipulationValue StipulationValue_35("STRING_2060527940");
    noStipulations_0_0.set(StipulationValue_35);
    Stipulations_NoStipulations_35.insert(StipulationValue_35.getString());
    all_values.push_back(Stipulations_NoStipulations_35);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_36;
    FIX::StipulationType StipulationType_36("STRING_PURPOSE");
    noStipulations_0_1.set(StipulationType_36);
    Stipulations_NoStipulations_36.insert(StipulationType_36.getString());
    FIX::StipulationValue StipulationValue_36("STRING_364064539");
    noStipulations_0_1.set(StipulationValue_36);
    Stipulations_NoStipulations_36.insert(StipulationValue_36.getString());
    all_values.push_back(Stipulations_NoStipulations_36);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_37;
    FIX::StipulationType StipulationType_37("STRING_HEP");
    noStipulations_0_2.set(StipulationType_37);
    Stipulations_NoStipulations_37.insert(StipulationType_37.getString());
    FIX::StipulationValue StipulationValue_37("STRING_1257427718");
    noStipulations_0_2.set(StipulationValue_37);
    Stipulations_NoStipulations_37.insert(StipulationValue_37.getString());
    all_values.push_back(Stipulations_NoStipulations_37);

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_85;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_85("DATA_1990217214");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingIssuer_85.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_85(97067440);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingIssuerLen_85.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_85("DATA_1933038146");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingSecurityDesc_85.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_85(158490870);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingSecurityDescLen_85.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_85;
    UnderlyingAdjustedQuantity_85.setString("1723921");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_85);
    UnderlyingInstrument_85.insert(UnderlyingAdjustedQuantity_85.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_85;
    UnderlyingAllocationPercent_85.setString("81.800000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_85);
    UnderlyingInstrument_85.insert(UnderlyingAllocationPercent_85.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_85;
    UnderlyingAttachmentPoint_85.setString("26.610000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_85);
    UnderlyingInstrument_85.insert(UnderlyingAttachmentPoint_85.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_85("STRING_1209333699");
    noUnderlyings_0_0.set(UnderlyingCFICode_85);
    UnderlyingInstrument_85.insert(UnderlyingCFICode_85.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_85("STRING_211084640");
    noUnderlyings_0_0.set(UnderlyingCPProgram_85);
    UnderlyingInstrument_85.insert(UnderlyingCPProgram_85.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_85("STRING_346260776");
    noUnderlyings_0_0.set(UnderlyingCPRegType_85);
    UnderlyingInstrument_85.insert(UnderlyingCPRegType_85.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_85;
    UnderlyingCapValue_85.setString("8346035");
    noUnderlyings_0_0.set(UnderlyingCapValue_85);
    UnderlyingInstrument_85.insert(UnderlyingCapValue_85.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_85;
    UnderlyingCashAmount_85.setString("9580269");
    noUnderlyings_0_0.set(UnderlyingCashAmount_85);
    UnderlyingInstrument_85.insert(UnderlyingCashAmount_85.getString());
    FIX::UnderlyingCashType UnderlyingCashType_85("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_85);
    UnderlyingInstrument_85.insert(UnderlyingCashType_85.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_85;
    UnderlyingContractMultiplier_85.setString("18570949");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_85);
    UnderlyingInstrument_85.insert(UnderlyingContractMultiplier_85.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_85(12631488);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_85);
    UnderlyingInstrument_85.insert(UnderlyingContractMultiplierUnit_85.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_85("COUNTRY_1859252522");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingCountryOfIssue_85.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_85("LOCALMKTDATE_70941574");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_85);
    UnderlyingInstrument_85.insert(UnderlyingCouponPaymentDate_85.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_85;
    UnderlyingCouponRate_85.setString("23.300000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_85);
    UnderlyingInstrument_85.insert(UnderlyingCouponRate_85.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_85("STRING_1380188202");
    noUnderlyings_0_0.set(UnderlyingCreditRating_85);
    UnderlyingInstrument_85.insert(UnderlyingCreditRating_85.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_85("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_85);
    UnderlyingInstrument_85.insert(UnderlyingCurrency_85.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_85;
    UnderlyingCurrentValue_85.setString("8058374");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_85);
    UnderlyingInstrument_85.insert(UnderlyingCurrentValue_85.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_85;
    UnderlyingDetachmentPoint_85.setString("58.770000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_85);
    UnderlyingInstrument_85.insert(UnderlyingDetachmentPoint_85.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_85;
    UnderlyingDirtyPrice_85.setString("10587221");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_85);
    UnderlyingInstrument_85.insert(UnderlyingDirtyPrice_85.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_85;
    UnderlyingEndPrice_85.setString("10270365");
    noUnderlyings_0_0.set(UnderlyingEndPrice_85);
    UnderlyingInstrument_85.insert(UnderlyingEndPrice_85.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_85;
    UnderlyingEndValue_85.setString("11932301");
    noUnderlyings_0_0.set(UnderlyingEndValue_85);
    UnderlyingInstrument_85.insert(UnderlyingEndValue_85.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_85(1813452027);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_85);
    UnderlyingInstrument_85.insert(UnderlyingExerciseStyle_85.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_85;
    UnderlyingFXRate_85.setString("13911011");
    noUnderlyings_0_0.set(UnderlyingFXRate_85);
    UnderlyingInstrument_85.insert(UnderlyingFXRate_85.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_85('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_85);
    UnderlyingInstrument_85.insert(UnderlyingFXRateCalc_85.getString());
    FIX::UnderlyingFactor UnderlyingFactor_85;
    UnderlyingFactor_85.setString("9233960");
    noUnderlyings_0_0.set(UnderlyingFactor_85);
    UnderlyingInstrument_85.insert(UnderlyingFactor_85.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_85(1074594938);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_85);
    UnderlyingInstrument_85.insert(UnderlyingFlowScheduleType_85.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_85("STRING_349972321");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_85);
    UnderlyingInstrument_85.insert(UnderlyingInstrRegistry_85.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_85("LOCALMKTDATE_1020463537");
    noUnderlyings_0_0.set(UnderlyingIssueDate_85);
    UnderlyingInstrument_85.insert(UnderlyingIssueDate_85.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_85("STRING_860149436");
    noUnderlyings_0_0.set(UnderlyingIssuer_85);
    UnderlyingInstrument_85.insert(UnderlyingIssuer_85.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_85("STRING_508463192");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingLocaleOfIssue_85.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_85("LOCALMKTDATE_1192855723");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityDate_85.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_85("MONTHYEAR_285573968");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityMonthYear_85.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_85("TZTIMEONLY_1783885853");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityTime_85.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_85;
    UnderlyingNotionalPercentageOutstanding_85.setString("57.740000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_85);
    UnderlyingInstrument_85.insert(UnderlyingNotionalPercentageOutstanding_85.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_85('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_85);
    UnderlyingInstrument_85.insert(UnderlyingOptAttribute_85.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_85;
    UnderlyingOriginalNotionalPercentageOutstanding_85.setString("66.290000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_85);
    UnderlyingInstrument_85.insert(UnderlyingOriginalNotionalPercentageOutstanding_85.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_85("STRING_1089309359");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_85);
    UnderlyingInstrument_85.insert(UnderlyingPriceUnitOfMeasure_85.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_85;
    UnderlyingPriceUnitOfMeasureQty_85.setString("14546855");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_85);
    UnderlyingInstrument_85.insert(UnderlyingPriceUnitOfMeasureQty_85.getString());
    FIX::UnderlyingProduct UnderlyingProduct_85(57416758);
    noUnderlyings_0_0.set(UnderlyingProduct_85);
    UnderlyingInstrument_85.insert(UnderlyingProduct_85.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_85(798920614);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_85);
    UnderlyingInstrument_85.insert(UnderlyingPutOrCall_85.getString());
    FIX::UnderlyingPx UnderlyingPx_85;
    UnderlyingPx_85.setString("14673170");
    noUnderlyings_0_0.set(UnderlyingPx_85);
    UnderlyingInstrument_85.insert(UnderlyingPx_85.getString());
    FIX::UnderlyingQty UnderlyingQty_85;
    UnderlyingQty_85.setString("19166692");
    noUnderlyings_0_0.set(UnderlyingQty_85);
    UnderlyingInstrument_85.insert(UnderlyingQty_85.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_85("LOCALMKTDATE_869862189");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_85);
    UnderlyingInstrument_85.insert(UnderlyingRedemptionDate_85.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_85("STRING_1005935756");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_85);
    UnderlyingInstrument_85.insert(UnderlyingRepoCollateralSecurityType_85.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_85;
    UnderlyingRepurchaseRate_85.setString("38.350000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_85);
    UnderlyingInstrument_85.insert(UnderlyingRepurchaseRate_85.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_85(592039187);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_85);
    UnderlyingInstrument_85.insert(UnderlyingRepurchaseTerm_85.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_85("STRING_1914949806");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_85);
    UnderlyingInstrument_85.insert(UnderlyingRestructuringType_85.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_85("STRING_1955211322");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityDesc_85.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_85("EXCHANGE_1872225064");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityExchange_85.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_85("STRING_826188314");
    noUnderlyings_0_0.set(UnderlyingSecurityID_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityID_85.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_85("STRING_834764243");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityIDSource_85.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_85("STRING_917971586");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_85);
    UnderlyingInstrument_85.insert(UnderlyingSecuritySubType_85.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_85("STRING_492156693");
    noUnderlyings_0_0.set(UnderlyingSecurityType_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityType_85.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_85("STRING_78381704");
    noUnderlyings_0_0.set(UnderlyingSeniority_85);
    UnderlyingInstrument_85.insert(UnderlyingSeniority_85.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_85("STRING_1425210341");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_85);
    UnderlyingInstrument_85.insert(UnderlyingSettlMethod_85.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_85(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_85);
    UnderlyingInstrument_85.insert(UnderlyingSettlementType_85.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_85;
    UnderlyingStartValue_85.setString("11529766");
    noUnderlyings_0_0.set(UnderlyingStartValue_85);
    UnderlyingInstrument_85.insert(UnderlyingStartValue_85.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_85("STRING_1775182663");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingStateOrProvinceOfIssue_85.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_85("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_85);
    UnderlyingInstrument_85.insert(UnderlyingStrikeCurrency_85.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_85;
    UnderlyingStrikePrice_85.setString("1361622");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_85);
    UnderlyingInstrument_85.insert(UnderlyingStrikePrice_85.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_85("STRING_1481388403");
    noUnderlyings_0_0.set(UnderlyingSymbol_85);
    UnderlyingInstrument_85.insert(UnderlyingSymbol_85.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_85("STRING_151216398");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_85);
    UnderlyingInstrument_85.insert(UnderlyingSymbolSfx_85.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_85("STRING_1920048060");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_85);
    UnderlyingInstrument_85.insert(UnderlyingTimeUnit_85.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_85("STRING_1736094178");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_85);
    UnderlyingInstrument_85.insert(UnderlyingUnitOfMeasure_85.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_85;
    UnderlyingUnitOfMeasureQty_85.setString("6478750");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_85);
    UnderlyingInstrument_85.insert(UnderlyingUnitOfMeasureQty_85.getString());
    all_values.push_back(UnderlyingInstrument_85);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_170;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_170("STRING_677919889");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_170);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_170.insert(UnderlyingSecurityAltID_170.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_170("STRING_2102560592");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_170);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_170.insert(UnderlyingSecurityAltIDSource_170.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_171;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_171("STRING_1960127800");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_171);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_171.insert(UnderlyingSecurityAltID_171.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_171("STRING_1476840504");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_171);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_171.insert(UnderlyingSecurityAltIDSource_171.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_172;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_172("STRING_1422394018");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_172);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_172.insert(UnderlyingSecurityAltID_172.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_172("STRING_1729313433");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_172);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_172.insert(UnderlyingSecurityAltIDSource_172.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_161;
      FIX::UnderlyingStipType UnderlyingStipType_161("STRING_280846126");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_161);
      UnderlyingStipulations_NoUnderlyingStips_161.insert(UnderlyingStipType_161.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_161("STRING_731203620");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_161);
      UnderlyingStipulations_NoUnderlyingStips_161.insert(UnderlyingStipValue_161.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_161);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_162;
      FIX::UnderlyingStipType UnderlyingStipType_162("STRING_791258232");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_162);
      UnderlyingStipulations_NoUnderlyingStips_162.insert(UnderlyingStipType_162.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_162("STRING_48312284");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_162);
      UnderlyingStipulations_NoUnderlyingStips_162.insert(UnderlyingStipValue_162.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_162);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_171;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_171("STRING_515999649");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyID_171.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_171('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyIDSource_171.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_171(1373695538);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_171);
      UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyRole_171.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_171);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_334("STRING_1366657292");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_334);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334.insert(UnderlyingInstrumentPartySubID_334.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_334(1452077242);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_334);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334.insert(UnderlyingInstrumentPartySubIDType_334.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_335("STRING_711697928");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_335);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335.insert(UnderlyingInstrumentPartySubID_335.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_335(634726435);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_335);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335.insert(UnderlyingInstrumentPartySubIDType_335.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_336("STRING_457570236");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_336);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336.insert(UnderlyingInstrumentPartySubID_336.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_336(339396943);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_336);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336.insert(UnderlyingInstrumentPartySubIDType_336.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_172;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_172("STRING_923259115");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyID_172.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_172('3');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyIDSource_172.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_172(475559150);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_172);
      UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyRole_172.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_172);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_337("STRING_474429064");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_337);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337.insert(UnderlyingInstrumentPartySubID_337.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_337(248123562);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_337);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337.insert(UnderlyingInstrumentPartySubIDType_337.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_338("STRING_1993258049");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_338);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338.insert(UnderlyingInstrumentPartySubID_338.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_338(1122304071);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_338);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338.insert(UnderlyingInstrumentPartySubIDType_338.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_173;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_173("STRING_3350956");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyID_173.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_173('5');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyIDSource_173.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_173(1077381016);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_173);
      UndlyInstrumentParties_NoUndlyInstrumentParties_173.insert(UnderlyingInstrumentPartyRole_173.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_173);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_339("STRING_2000534794");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_339);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339.insert(UnderlyingInstrumentPartySubID_339.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_339(352291386);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_339);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339.insert(UnderlyingInstrumentPartySubIDType_339.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_340("STRING_1545308541");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_340);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340.insert(UnderlyingInstrumentPartySubID_340.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_340(52270191);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_340);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340.insert(UnderlyingInstrumentPartySubIDType_340.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_341("STRING_633137512");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_341);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341.insert(UnderlyingInstrumentPartySubID_341.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_341(129028513);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_341);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341.insert(UnderlyingInstrumentPartySubIDType_341.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_86;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_86("DATA_843528424");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingIssuer_86.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_86(681449796);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingIssuerLen_86.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_86("DATA_667959808");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingSecurityDesc_86.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_86(1359528073);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingSecurityDescLen_86.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_86;
    UnderlyingAdjustedQuantity_86.setString("15559503");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_86);
    UnderlyingInstrument_86.insert(UnderlyingAdjustedQuantity_86.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_86;
    UnderlyingAllocationPercent_86.setString("53.460000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_86);
    UnderlyingInstrument_86.insert(UnderlyingAllocationPercent_86.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_86;
    UnderlyingAttachmentPoint_86.setString("56.600000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_86);
    UnderlyingInstrument_86.insert(UnderlyingAttachmentPoint_86.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_86("STRING_775124039");
    noUnderlyings_0_1.set(UnderlyingCFICode_86);
    UnderlyingInstrument_86.insert(UnderlyingCFICode_86.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_86("STRING_1346248940");
    noUnderlyings_0_1.set(UnderlyingCPProgram_86);
    UnderlyingInstrument_86.insert(UnderlyingCPProgram_86.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_86("STRING_1357713588");
    noUnderlyings_0_1.set(UnderlyingCPRegType_86);
    UnderlyingInstrument_86.insert(UnderlyingCPRegType_86.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_86;
    UnderlyingCapValue_86.setString("14098504");
    noUnderlyings_0_1.set(UnderlyingCapValue_86);
    UnderlyingInstrument_86.insert(UnderlyingCapValue_86.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_86;
    UnderlyingCashAmount_86.setString("18038191");
    noUnderlyings_0_1.set(UnderlyingCashAmount_86);
    UnderlyingInstrument_86.insert(UnderlyingCashAmount_86.getString());
    FIX::UnderlyingCashType UnderlyingCashType_86("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_86);
    UnderlyingInstrument_86.insert(UnderlyingCashType_86.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_86;
    UnderlyingContractMultiplier_86.setString("1856259");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_86);
    UnderlyingInstrument_86.insert(UnderlyingContractMultiplier_86.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_86(2127031842);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_86);
    UnderlyingInstrument_86.insert(UnderlyingContractMultiplierUnit_86.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_86("COUNTRY_25186034");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingCountryOfIssue_86.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_86("LOCALMKTDATE_442789812");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_86);
    UnderlyingInstrument_86.insert(UnderlyingCouponPaymentDate_86.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_86;
    UnderlyingCouponRate_86.setString("72.580000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_86);
    UnderlyingInstrument_86.insert(UnderlyingCouponRate_86.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_86("STRING_273309597");
    noUnderlyings_0_1.set(UnderlyingCreditRating_86);
    UnderlyingInstrument_86.insert(UnderlyingCreditRating_86.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_86("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_86);
    UnderlyingInstrument_86.insert(UnderlyingCurrency_86.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_86;
    UnderlyingCurrentValue_86.setString("2766605");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_86);
    UnderlyingInstrument_86.insert(UnderlyingCurrentValue_86.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_86;
    UnderlyingDetachmentPoint_86.setString("85.040000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_86);
    UnderlyingInstrument_86.insert(UnderlyingDetachmentPoint_86.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_86;
    UnderlyingDirtyPrice_86.setString("5061786");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_86);
    UnderlyingInstrument_86.insert(UnderlyingDirtyPrice_86.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_86;
    UnderlyingEndPrice_86.setString("926556");
    noUnderlyings_0_1.set(UnderlyingEndPrice_86);
    UnderlyingInstrument_86.insert(UnderlyingEndPrice_86.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_86;
    UnderlyingEndValue_86.setString("6653096");
    noUnderlyings_0_1.set(UnderlyingEndValue_86);
    UnderlyingInstrument_86.insert(UnderlyingEndValue_86.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_86(858470084);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_86);
    UnderlyingInstrument_86.insert(UnderlyingExerciseStyle_86.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_86;
    UnderlyingFXRate_86.setString("16379642");
    noUnderlyings_0_1.set(UnderlyingFXRate_86);
    UnderlyingInstrument_86.insert(UnderlyingFXRate_86.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_86('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_86);
    UnderlyingInstrument_86.insert(UnderlyingFXRateCalc_86.getString());
    FIX::UnderlyingFactor UnderlyingFactor_86;
    UnderlyingFactor_86.setString("14916075");
    noUnderlyings_0_1.set(UnderlyingFactor_86);
    UnderlyingInstrument_86.insert(UnderlyingFactor_86.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_86(1766992715);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_86);
    UnderlyingInstrument_86.insert(UnderlyingFlowScheduleType_86.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_86("STRING_1561108266");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_86);
    UnderlyingInstrument_86.insert(UnderlyingInstrRegistry_86.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_86("LOCALMKTDATE_25573744");
    noUnderlyings_0_1.set(UnderlyingIssueDate_86);
    UnderlyingInstrument_86.insert(UnderlyingIssueDate_86.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_86("STRING_287468875");
    noUnderlyings_0_1.set(UnderlyingIssuer_86);
    UnderlyingInstrument_86.insert(UnderlyingIssuer_86.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_86("STRING_773152691");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingLocaleOfIssue_86.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_86("LOCALMKTDATE_1581524139");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityDate_86.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_86("MONTHYEAR_181640573");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityMonthYear_86.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_86("TZTIMEONLY_1419168351");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityTime_86.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_86;
    UnderlyingNotionalPercentageOutstanding_86.setString("45.300000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_86);
    UnderlyingInstrument_86.insert(UnderlyingNotionalPercentageOutstanding_86.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_86('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_86);
    UnderlyingInstrument_86.insert(UnderlyingOptAttribute_86.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_86;
    UnderlyingOriginalNotionalPercentageOutstanding_86.setString("82.910000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_86);
    UnderlyingInstrument_86.insert(UnderlyingOriginalNotionalPercentageOutstanding_86.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_86("STRING_1619015004");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_86);
    UnderlyingInstrument_86.insert(UnderlyingPriceUnitOfMeasure_86.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_86;
    UnderlyingPriceUnitOfMeasureQty_86.setString("11842250");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_86);
    UnderlyingInstrument_86.insert(UnderlyingPriceUnitOfMeasureQty_86.getString());
    FIX::UnderlyingProduct UnderlyingProduct_86(179025175);
    noUnderlyings_0_1.set(UnderlyingProduct_86);
    UnderlyingInstrument_86.insert(UnderlyingProduct_86.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_86(1804640946);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_86);
    UnderlyingInstrument_86.insert(UnderlyingPutOrCall_86.getString());
    FIX::UnderlyingPx UnderlyingPx_86;
    UnderlyingPx_86.setString("11637732");
    noUnderlyings_0_1.set(UnderlyingPx_86);
    UnderlyingInstrument_86.insert(UnderlyingPx_86.getString());
    FIX::UnderlyingQty UnderlyingQty_86;
    UnderlyingQty_86.setString("2042112");
    noUnderlyings_0_1.set(UnderlyingQty_86);
    UnderlyingInstrument_86.insert(UnderlyingQty_86.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_86("LOCALMKTDATE_99947110");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_86);
    UnderlyingInstrument_86.insert(UnderlyingRedemptionDate_86.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_86("STRING_1617750494");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_86);
    UnderlyingInstrument_86.insert(UnderlyingRepoCollateralSecurityType_86.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_86;
    UnderlyingRepurchaseRate_86.setString("8.070000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_86);
    UnderlyingInstrument_86.insert(UnderlyingRepurchaseRate_86.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_86(388511324);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_86);
    UnderlyingInstrument_86.insert(UnderlyingRepurchaseTerm_86.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_86("STRING_1046548176");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_86);
    UnderlyingInstrument_86.insert(UnderlyingRestructuringType_86.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_86("STRING_754181360");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityDesc_86.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_86("EXCHANGE_1200769828");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityExchange_86.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_86("STRING_1552726874");
    noUnderlyings_0_1.set(UnderlyingSecurityID_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityID_86.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_86("STRING_846837021");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityIDSource_86.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_86("STRING_1866079478");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_86);
    UnderlyingInstrument_86.insert(UnderlyingSecuritySubType_86.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_86("STRING_263713310");
    noUnderlyings_0_1.set(UnderlyingSecurityType_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityType_86.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_86("STRING_337317575");
    noUnderlyings_0_1.set(UnderlyingSeniority_86);
    UnderlyingInstrument_86.insert(UnderlyingSeniority_86.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_86("STRING_436175672");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_86);
    UnderlyingInstrument_86.insert(UnderlyingSettlMethod_86.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_86(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_86);
    UnderlyingInstrument_86.insert(UnderlyingSettlementType_86.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_86;
    UnderlyingStartValue_86.setString("21043102");
    noUnderlyings_0_1.set(UnderlyingStartValue_86);
    UnderlyingInstrument_86.insert(UnderlyingStartValue_86.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_86("STRING_1997283938");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingStateOrProvinceOfIssue_86.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_86("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_86);
    UnderlyingInstrument_86.insert(UnderlyingStrikeCurrency_86.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_86;
    UnderlyingStrikePrice_86.setString("6229529");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_86);
    UnderlyingInstrument_86.insert(UnderlyingStrikePrice_86.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_86("STRING_1214935142");
    noUnderlyings_0_1.set(UnderlyingSymbol_86);
    UnderlyingInstrument_86.insert(UnderlyingSymbol_86.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_86("STRING_425936091");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_86);
    UnderlyingInstrument_86.insert(UnderlyingSymbolSfx_86.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_86("STRING_2042121332");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_86);
    UnderlyingInstrument_86.insert(UnderlyingTimeUnit_86.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_86("STRING_1424099672");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_86);
    UnderlyingInstrument_86.insert(UnderlyingUnitOfMeasure_86.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_86;
    UnderlyingUnitOfMeasureQty_86.setString("19538256");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_86);
    UnderlyingInstrument_86.insert(UnderlyingUnitOfMeasureQty_86.getString());
    all_values.push_back(UnderlyingInstrument_86);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_173;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_173("STRING_895631029");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_173);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_173.insert(UnderlyingSecurityAltID_173.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_173("STRING_990566998");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_173);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_173.insert(UnderlyingSecurityAltIDSource_173.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_174;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_174("STRING_703061151");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_174);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_174.insert(UnderlyingSecurityAltID_174.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_174("STRING_552788327");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_174);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_174.insert(UnderlyingSecurityAltIDSource_174.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_175;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_175("STRING_6856586");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_175);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_175.insert(UnderlyingSecurityAltID_175.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_175("STRING_907272361");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_175);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_175.insert(UnderlyingSecurityAltIDSource_175.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_163;
      FIX::UnderlyingStipType UnderlyingStipType_163("STRING_1624607080");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_163);
      UnderlyingStipulations_NoUnderlyingStips_163.insert(UnderlyingStipType_163.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_163("STRING_1384793168");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_163);
      UnderlyingStipulations_NoUnderlyingStips_163.insert(UnderlyingStipValue_163.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_163);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_174;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_174("STRING_523671608");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyID_174.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_174('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyIDSource_174.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_174(94532941);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_174);
      UndlyInstrumentParties_NoUndlyInstrumentParties_174.insert(UnderlyingInstrumentPartyRole_174.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_174);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_342("STRING_838327901");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_342);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342.insert(UnderlyingInstrumentPartySubID_342.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_342(1960612420);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_342);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342.insert(UnderlyingInstrumentPartySubIDType_342.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_343("STRING_192628144");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_343);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343.insert(UnderlyingInstrumentPartySubID_343.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_343(1175645476);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_343);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343.insert(UnderlyingInstrumentPartySubIDType_343.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_175;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_175("STRING_249304444");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyID_175.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_175('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyIDSource_175.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_175(1132472119);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_175);
      UndlyInstrumentParties_NoUndlyInstrumentParties_175.insert(UnderlyingInstrumentPartyRole_175.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_175);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_344("STRING_1581360052");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_344);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344.insert(UnderlyingInstrumentPartySubID_344.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_344(1376767637);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_344);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344.insert(UnderlyingInstrumentPartySubIDType_344.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_345("STRING_722057716");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_345);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345.insert(UnderlyingInstrumentPartySubID_345.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_345(648811546);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_345);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345.insert(UnderlyingInstrumentPartySubIDType_345.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_346("STRING_1802703728");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_346);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346.insert(UnderlyingInstrumentPartySubID_346.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_346(616695401);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_346);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346.insert(UnderlyingInstrumentPartySubIDType_346.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_176;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_176("STRING_2072911219");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyID_176.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_176('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyIDSource_176.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_176(1140731377);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_176);
      UndlyInstrumentParties_NoUndlyInstrumentParties_176.insert(UnderlyingInstrumentPartyRole_176.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_176);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_347("STRING_452129036");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_347);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347.insert(UnderlyingInstrumentPartySubID_347.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_347(1843792528);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_347);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347.insert(UnderlyingInstrumentPartySubIDType_347.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_87;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_87("DATA_1373846927");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingIssuer_87.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_87(458985622);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingIssuerLen_87.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_87("DATA_603581242");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingSecurityDesc_87.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_87(2026582364);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_87);
    UnderlyingInstrument_87.insert(EncodedUnderlyingSecurityDescLen_87.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_87;
    UnderlyingAdjustedQuantity_87.setString("20835927");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_87);
    UnderlyingInstrument_87.insert(UnderlyingAdjustedQuantity_87.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_87;
    UnderlyingAllocationPercent_87.setString("44.100000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_87);
    UnderlyingInstrument_87.insert(UnderlyingAllocationPercent_87.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_87;
    UnderlyingAttachmentPoint_87.setString("54.780000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_87);
    UnderlyingInstrument_87.insert(UnderlyingAttachmentPoint_87.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_87("STRING_459780662");
    noUnderlyings_0_2.set(UnderlyingCFICode_87);
    UnderlyingInstrument_87.insert(UnderlyingCFICode_87.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_87("STRING_1979865291");
    noUnderlyings_0_2.set(UnderlyingCPProgram_87);
    UnderlyingInstrument_87.insert(UnderlyingCPProgram_87.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_87("STRING_1014878419");
    noUnderlyings_0_2.set(UnderlyingCPRegType_87);
    UnderlyingInstrument_87.insert(UnderlyingCPRegType_87.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_87;
    UnderlyingCapValue_87.setString("3886954");
    noUnderlyings_0_2.set(UnderlyingCapValue_87);
    UnderlyingInstrument_87.insert(UnderlyingCapValue_87.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_87;
    UnderlyingCashAmount_87.setString("6707095");
    noUnderlyings_0_2.set(UnderlyingCashAmount_87);
    UnderlyingInstrument_87.insert(UnderlyingCashAmount_87.getString());
    FIX::UnderlyingCashType UnderlyingCashType_87("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_87);
    UnderlyingInstrument_87.insert(UnderlyingCashType_87.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_87;
    UnderlyingContractMultiplier_87.setString("5813236");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_87);
    UnderlyingInstrument_87.insert(UnderlyingContractMultiplier_87.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_87(1846355021);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_87);
    UnderlyingInstrument_87.insert(UnderlyingContractMultiplierUnit_87.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_87("COUNTRY_1077311636");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingCountryOfIssue_87.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_87("LOCALMKTDATE_381789042");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_87);
    UnderlyingInstrument_87.insert(UnderlyingCouponPaymentDate_87.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_87;
    UnderlyingCouponRate_87.setString("34.920000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_87);
    UnderlyingInstrument_87.insert(UnderlyingCouponRate_87.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_87("STRING_1176416371");
    noUnderlyings_0_2.set(UnderlyingCreditRating_87);
    UnderlyingInstrument_87.insert(UnderlyingCreditRating_87.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_87("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_87);
    UnderlyingInstrument_87.insert(UnderlyingCurrency_87.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_87;
    UnderlyingCurrentValue_87.setString("18984740");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_87);
    UnderlyingInstrument_87.insert(UnderlyingCurrentValue_87.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_87;
    UnderlyingDetachmentPoint_87.setString("69.930000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_87);
    UnderlyingInstrument_87.insert(UnderlyingDetachmentPoint_87.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_87;
    UnderlyingDirtyPrice_87.setString("18633312");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_87);
    UnderlyingInstrument_87.insert(UnderlyingDirtyPrice_87.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_87;
    UnderlyingEndPrice_87.setString("3676858");
    noUnderlyings_0_2.set(UnderlyingEndPrice_87);
    UnderlyingInstrument_87.insert(UnderlyingEndPrice_87.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_87;
    UnderlyingEndValue_87.setString("3899045");
    noUnderlyings_0_2.set(UnderlyingEndValue_87);
    UnderlyingInstrument_87.insert(UnderlyingEndValue_87.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_87(1324893247);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_87);
    UnderlyingInstrument_87.insert(UnderlyingExerciseStyle_87.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_87;
    UnderlyingFXRate_87.setString("15084172");
    noUnderlyings_0_2.set(UnderlyingFXRate_87);
    UnderlyingInstrument_87.insert(UnderlyingFXRate_87.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_87('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_87);
    UnderlyingInstrument_87.insert(UnderlyingFXRateCalc_87.getString());
    FIX::UnderlyingFactor UnderlyingFactor_87;
    UnderlyingFactor_87.setString("17770222");
    noUnderlyings_0_2.set(UnderlyingFactor_87);
    UnderlyingInstrument_87.insert(UnderlyingFactor_87.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_87(1204726098);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_87);
    UnderlyingInstrument_87.insert(UnderlyingFlowScheduleType_87.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_87("STRING_437326443");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_87);
    UnderlyingInstrument_87.insert(UnderlyingInstrRegistry_87.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_87("LOCALMKTDATE_88524257");
    noUnderlyings_0_2.set(UnderlyingIssueDate_87);
    UnderlyingInstrument_87.insert(UnderlyingIssueDate_87.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_87("STRING_1808307340");
    noUnderlyings_0_2.set(UnderlyingIssuer_87);
    UnderlyingInstrument_87.insert(UnderlyingIssuer_87.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_87("STRING_316425159");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingLocaleOfIssue_87.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_87("LOCALMKTDATE_24633311");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityDate_87.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_87("MONTHYEAR_1649198102");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityMonthYear_87.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_87("TZTIMEONLY_1236770637");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_87);
    UnderlyingInstrument_87.insert(UnderlyingMaturityTime_87.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_87;
    UnderlyingNotionalPercentageOutstanding_87.setString("39.730000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_87);
    UnderlyingInstrument_87.insert(UnderlyingNotionalPercentageOutstanding_87.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_87('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_87);
    UnderlyingInstrument_87.insert(UnderlyingOptAttribute_87.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_87;
    UnderlyingOriginalNotionalPercentageOutstanding_87.setString("54.090000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_87);
    UnderlyingInstrument_87.insert(UnderlyingOriginalNotionalPercentageOutstanding_87.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_87("STRING_873109469");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_87);
    UnderlyingInstrument_87.insert(UnderlyingPriceUnitOfMeasure_87.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_87;
    UnderlyingPriceUnitOfMeasureQty_87.setString("48056");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_87);
    UnderlyingInstrument_87.insert(UnderlyingPriceUnitOfMeasureQty_87.getString());
    FIX::UnderlyingProduct UnderlyingProduct_87(932172600);
    noUnderlyings_0_2.set(UnderlyingProduct_87);
    UnderlyingInstrument_87.insert(UnderlyingProduct_87.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_87(1454433109);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_87);
    UnderlyingInstrument_87.insert(UnderlyingPutOrCall_87.getString());
    FIX::UnderlyingPx UnderlyingPx_87;
    UnderlyingPx_87.setString("18511606");
    noUnderlyings_0_2.set(UnderlyingPx_87);
    UnderlyingInstrument_87.insert(UnderlyingPx_87.getString());
    FIX::UnderlyingQty UnderlyingQty_87;
    UnderlyingQty_87.setString("20094842");
    noUnderlyings_0_2.set(UnderlyingQty_87);
    UnderlyingInstrument_87.insert(UnderlyingQty_87.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_87("LOCALMKTDATE_1836222151");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_87);
    UnderlyingInstrument_87.insert(UnderlyingRedemptionDate_87.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_87("STRING_535020507");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_87);
    UnderlyingInstrument_87.insert(UnderlyingRepoCollateralSecurityType_87.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_87;
    UnderlyingRepurchaseRate_87.setString("69.590000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_87);
    UnderlyingInstrument_87.insert(UnderlyingRepurchaseRate_87.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_87(1651887597);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_87);
    UnderlyingInstrument_87.insert(UnderlyingRepurchaseTerm_87.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_87("STRING_595647988");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_87);
    UnderlyingInstrument_87.insert(UnderlyingRestructuringType_87.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_87("STRING_789407399");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityDesc_87.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_87("EXCHANGE_2116364590");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityExchange_87.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_87("STRING_311495549");
    noUnderlyings_0_2.set(UnderlyingSecurityID_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityID_87.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_87("STRING_1157093239");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityIDSource_87.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_87("STRING_358785506");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_87);
    UnderlyingInstrument_87.insert(UnderlyingSecuritySubType_87.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_87("STRING_1636388796");
    noUnderlyings_0_2.set(UnderlyingSecurityType_87);
    UnderlyingInstrument_87.insert(UnderlyingSecurityType_87.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_87("STRING_518026809");
    noUnderlyings_0_2.set(UnderlyingSeniority_87);
    UnderlyingInstrument_87.insert(UnderlyingSeniority_87.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_87("STRING_1569748670");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_87);
    UnderlyingInstrument_87.insert(UnderlyingSettlMethod_87.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_87(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_87);
    UnderlyingInstrument_87.insert(UnderlyingSettlementType_87.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_87;
    UnderlyingStartValue_87.setString("17227529");
    noUnderlyings_0_2.set(UnderlyingStartValue_87);
    UnderlyingInstrument_87.insert(UnderlyingStartValue_87.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_87("STRING_2007075113");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_87);
    UnderlyingInstrument_87.insert(UnderlyingStateOrProvinceOfIssue_87.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_87("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_87);
    UnderlyingInstrument_87.insert(UnderlyingStrikeCurrency_87.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_87;
    UnderlyingStrikePrice_87.setString("1760166");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_87);
    UnderlyingInstrument_87.insert(UnderlyingStrikePrice_87.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_87("STRING_1379084999");
    noUnderlyings_0_2.set(UnderlyingSymbol_87);
    UnderlyingInstrument_87.insert(UnderlyingSymbol_87.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_87("STRING_885291053");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_87);
    UnderlyingInstrument_87.insert(UnderlyingSymbolSfx_87.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_87("STRING_1412787262");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_87);
    UnderlyingInstrument_87.insert(UnderlyingTimeUnit_87.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_87("STRING_1863498972");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_87);
    UnderlyingInstrument_87.insert(UnderlyingUnitOfMeasure_87.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_87;
    UnderlyingUnitOfMeasureQty_87.setString("2193871");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_87);
    UnderlyingInstrument_87.insert(UnderlyingUnitOfMeasureQty_87.getString());
    all_values.push_back(UnderlyingInstrument_87);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_176;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_176("STRING_589124793");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_176);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_176.insert(UnderlyingSecurityAltID_176.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_176("STRING_224192793");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_176);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_176.insert(UnderlyingSecurityAltIDSource_176.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_176);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_177;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_177("STRING_301641624");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_177);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_177.insert(UnderlyingSecurityAltID_177.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_177("STRING_2043557902");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_177);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_177.insert(UnderlyingSecurityAltIDSource_177.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_177);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_164;
      FIX::UnderlyingStipType UnderlyingStipType_164("STRING_163642212");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_164);
      UnderlyingStipulations_NoUnderlyingStips_164.insert(UnderlyingStipType_164.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_164("STRING_1732296405");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_164);
      UnderlyingStipulations_NoUnderlyingStips_164.insert(UnderlyingStipValue_164.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_164);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_165;
      FIX::UnderlyingStipType UnderlyingStipType_165("STRING_462890315");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_165);
      UnderlyingStipulations_NoUnderlyingStips_165.insert(UnderlyingStipType_165.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_165("STRING_1202059172");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_165);
      UnderlyingStipulations_NoUnderlyingStips_165.insert(UnderlyingStipValue_165.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_165);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_177;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_177("STRING_1058538303");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyID_177.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_177('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyIDSource_177.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_177(1205581297);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_177);
      UndlyInstrumentParties_NoUndlyInstrumentParties_177.insert(UnderlyingInstrumentPartyRole_177.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_177);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_348("STRING_1001076162");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_348);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348.insert(UnderlyingInstrumentPartySubID_348.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_348(1564366804);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_348);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348.insert(UnderlyingInstrumentPartySubIDType_348.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_349("STRING_858939001");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_349);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349.insert(UnderlyingInstrumentPartySubID_349.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_349(1519102971);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_349);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349.insert(UnderlyingInstrumentPartySubIDType_349.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_350("STRING_986631826");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_350);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350.insert(UnderlyingInstrumentPartySubID_350.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_350(2124866432);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_350);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350.insert(UnderlyingInstrumentPartySubIDType_350.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_178;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_178("STRING_1094372230");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyID_178.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_178('8');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyIDSource_178.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_178(1331834473);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_178);
      UndlyInstrumentParties_NoUndlyInstrumentParties_178.insert(UnderlyingInstrumentPartyRole_178.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_178);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_351("STRING_1022239917");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_351);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351.insert(UnderlyingInstrumentPartySubID_351.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_351(563435824);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_351);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351.insert(UnderlyingInstrumentPartySubIDType_351.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_352("STRING_1215756235");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_352);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352.insert(UnderlyingInstrumentPartySubID_352.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_352(287543531);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_352);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352.insert(UnderlyingInstrumentPartySubIDType_352.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_179;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_179("STRING_279451149");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyID_179.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_179('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyIDSource_179.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_179(1804496203);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_179);
      UndlyInstrumentParties_NoUndlyInstrumentParties_179.insert(UnderlyingInstrumentPartyRole_179.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_179);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_353("STRING_1659336179");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_353);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353.insert(UnderlyingInstrumentPartySubID_353.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_353(2106137827);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_353);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353.insert(UnderlyingInstrumentPartySubIDType_353.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_16;
  FIX::Yield Yield_16;
  Yield_16.setString("1.970000");
  msg.set(Yield_16);
  YieldData_16.insert(Yield_16.getString());
  FIX::YieldCalcDate YieldCalcDate_16("LOCALMKTDATE_1587205987");
  msg.set(YieldCalcDate_16);
  YieldData_16.insert(YieldCalcDate_16.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_16("LOCALMKTDATE_122296391");
  msg.set(YieldRedemptionDate_16);
  YieldData_16.insert(YieldRedemptionDate_16.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_16;
  YieldRedemptionPrice_16.setString("3494629");
  msg.set(YieldRedemptionPrice_16);
  YieldData_16.insert(YieldRedemptionPrice_16.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_16(2050096302);
  msg.set(YieldRedemptionPriceType_16);
  YieldData_16.insert(YieldRedemptionPriceType_16.getString());
  FIX::YieldType YieldType_16("STRING_CLOSE");
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
