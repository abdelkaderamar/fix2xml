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
  multiset<string> Quote_0;
  FIX::Account Account_27("STRING_1194762063");
  msg.set(Account_27);
  Quote_0.insert(Account_27.getString());
  FIX::AccountType AccountType_24(2);
  msg.set(AccountType_24);
  Quote_0.insert(AccountType_24.getString());
  FIX::AcctIDSource AcctIDSource_20(3);
  msg.set(AcctIDSource_20);
  Quote_0.insert(AcctIDSource_20.getString());
  FIX::BidForwardPoints BidForwardPoints_11;
  BidForwardPoints_11.setString("11099256");
  msg.set(BidForwardPoints_11);
  Quote_0.insert(BidForwardPoints_11.getString());
  FIX::BidForwardPoints2 BidForwardPoints2_11;
  BidForwardPoints2_11.setString("1616445");
  msg.set(BidForwardPoints2_11);
  Quote_0.insert(BidForwardPoints2_11.getString());
  FIX::BidPx BidPx_11;
  BidPx_11.setString("7735803");
  msg.set(BidPx_11);
  Quote_0.insert(BidPx_11.getString());
  FIX::BidSize BidSize_11;
  BidSize_11.setString("1818942");
  msg.set(BidSize_11);
  Quote_0.insert(BidSize_11.getString());
  FIX::BidSpotRate BidSpotRate_11;
  BidSpotRate_11.setString("1319346");
  msg.set(BidSpotRate_11);
  Quote_0.insert(BidSpotRate_11.getString());
  FIX::BidSwapPoints BidSwapPoints_0;
  BidSwapPoints_0.setString("8012202");
  msg.set(BidSwapPoints_0);
  Quote_0.insert(BidSwapPoints_0.getString());
  FIX::BidYield BidYield_11;
  BidYield_11.setString("63.340000");
  msg.set(BidYield_11);
  Quote_0.insert(BidYield_11.getString());
  FIX::BookingType BookingType_24(0);
  msg.set(BookingType_24);
  Quote_0.insert(BookingType_24.getString());
  FIX::CommType CommType_18('4');
  msg.set(CommType_18);
  Quote_0.insert(CommType_18.getString());
  FIX::Commission Commission_18;
  Commission_18.setString("13046710");
  msg.set(Commission_18);
  Quote_0.insert(Commission_18.getString());
  FIX::Currency Currency_50("CAN");
  msg.set(Currency_50);
  Quote_0.insert(Currency_50.getString());
  FIX::CustOrderCapacity CustOrderCapacity_13(1);
  msg.set(CustOrderCapacity_13);
  Quote_0.insert(CustOrderCapacity_13.getString());
  FIX::EncodedText EncodedText_68("DATA_712526994");
  msg.set(EncodedText_68);
  Quote_0.insert(EncodedText_68.getString());
  FIX::EncodedTextLen EncodedTextLen_68(948910735);
  msg.set(EncodedTextLen_68);
  Quote_0.insert(EncodedTextLen_68.getString());
  FIX::ExDestination ExDestination_8("EXCHANGE_305745614");
  msg.set(ExDestination_8);
  Quote_0.insert(ExDestination_8.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_8('D');
  msg.set(ExDestinationIDSource_8);
  Quote_0.insert(ExDestinationIDSource_8.getString());
  FIX::MidPx MidPx_11;
  MidPx_11.setString("17908771");
  msg.set(MidPx_11);
  Quote_0.insert(MidPx_11.getString());
  FIX::MidYield MidYield_11;
  MidYield_11.setString("90.940000");
  msg.set(MidYield_11);
  Quote_0.insert(MidYield_11.getString());
  FIX::MinBidSize MinBidSize_0;
  MinBidSize_0.setString("3509457");
  msg.set(MinBidSize_0);
  Quote_0.insert(MinBidSize_0.getString());
  FIX::MinOfferSize MinOfferSize_0;
  MinOfferSize_0.setString("18751535");
  msg.set(MinOfferSize_0);
  Quote_0.insert(MinOfferSize_0.getString());
  FIX::MinQty MinQty_11;
  MinQty_11.setString("15823987");
  msg.set(MinQty_11);
  Quote_0.insert(MinQty_11.getString());
  FIX::MktBidPx MktBidPx_0;
  MktBidPx_0.setString("9347234");
  msg.set(MktBidPx_0);
  Quote_0.insert(MktBidPx_0.getString());
  FIX::MktOfferPx MktOfferPx_0;
  MktOfferPx_0.setString("17848041");
  msg.set(MktOfferPx_0);
  Quote_0.insert(MktOfferPx_0.getString());
  FIX::OfferForwardPoints OfferForwardPoints_11;
  OfferForwardPoints_11.setString("9414518");
  msg.set(OfferForwardPoints_11);
  Quote_0.insert(OfferForwardPoints_11.getString());
  FIX::OfferForwardPoints2 OfferForwardPoints2_11;
  OfferForwardPoints2_11.setString("15345680");
  msg.set(OfferForwardPoints2_11);
  Quote_0.insert(OfferForwardPoints2_11.getString());
  FIX::OfferPx OfferPx_11;
  OfferPx_11.setString("3357887");
  msg.set(OfferPx_11);
  Quote_0.insert(OfferPx_11.getString());
  FIX::OfferSize OfferSize_11;
  OfferSize_11.setString("18714918");
  msg.set(OfferSize_11);
  Quote_0.insert(OfferSize_11.getString());
  FIX::OfferSpotRate OfferSpotRate_11;
  OfferSpotRate_11.setString("5818465");
  msg.set(OfferSpotRate_11);
  Quote_0.insert(OfferSpotRate_11.getString());
  FIX::OfferSwapPoints OfferSwapPoints_0;
  OfferSwapPoints_0.setString("1459665");
  msg.set(OfferSwapPoints_0);
  Quote_0.insert(OfferSwapPoints_0.getString());
  FIX::OfferYield OfferYield_11;
  OfferYield_11.setString("64.260000");
  msg.set(OfferYield_11);
  Quote_0.insert(OfferYield_11.getString());
  FIX::OrdType OrdType_38('M');
  msg.set(OrdType_38);
  Quote_0.insert(OrdType_38.getString());
  FIX::OrderCapacity OrderCapacity_26('W');
  msg.set(OrderCapacity_26);
  Quote_0.insert(OrderCapacity_26.getString());
  FIX::OrderQty2 OrderQty2_16;
  OrderQty2_16.setString("9109468");
  msg.set(OrderQty2_16);
  Quote_0.insert(OrderQty2_16.getString());
  FIX::OrderRestrictions OrderRestrictions_24("MULTIPLECHARVALUE_A");
  msg.set(OrderRestrictions_24);
  Quote_0.insert(OrderRestrictions_24.getString());
  FIX::PriceType PriceType_29(6);
  msg.set(PriceType_29);
  Quote_0.insert(PriceType_29.getString());
  FIX::PrivateQuote PrivateQuote_0(true);
  msg.set(PrivateQuote_0);
  Quote_0.insert(PrivateQuote_0.getString());
  FIX::QuoteID QuoteID_9("STRING_327319090");
  msg.set(QuoteID_9);
  Quote_0.insert(QuoteID_9.getString());
  FIX::QuoteMsgID QuoteMsgID_0("STRING_1978943378");
  msg.set(QuoteMsgID_0);
  Quote_0.insert(QuoteMsgID_0.getString());
  FIX::QuoteReqID QuoteReqID_2("STRING_375041567");
  msg.set(QuoteReqID_2);
  Quote_0.insert(QuoteReqID_2.getString());
  FIX::QuoteRespID QuoteRespID_1("STRING_1631990115");
  msg.set(QuoteRespID_1);
  Quote_0.insert(QuoteRespID_1.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_2(2);
  msg.set(QuoteResponseLevel_2);
  Quote_0.insert(QuoteResponseLevel_2.getString());
  FIX::QuoteType QuoteType_4(0);
  msg.set(QuoteType_4);
  Quote_0.insert(QuoteType_4.getString());
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_0;
  SettlCurrBidFxRate_0.setString("3768945");
  msg.set(SettlCurrBidFxRate_0);
  Quote_0.insert(SettlCurrBidFxRate_0.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_8('D');
  msg.set(SettlCurrFxRateCalc_8);
  Quote_0.insert(SettlCurrFxRateCalc_8.getString());
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_0;
  SettlCurrOfferFxRate_0.setString("13935704");
  msg.set(SettlCurrOfferFxRate_0);
  Quote_0.insert(SettlCurrOfferFxRate_0.getString());
  FIX::SettlCurrency SettlCurrency_22("CHF");
  msg.set(SettlCurrency_22);
  Quote_0.insert(SettlCurrency_22.getString());
  FIX::SettlDate SettlDate_36("LOCALMKTDATE_1036963952");
  msg.set(SettlDate_36);
  Quote_0.insert(SettlDate_36.getString());
  FIX::SettlDate2 SettlDate2_16("LOCALMKTDATE_252175595");
  msg.set(SettlDate2_16);
  Quote_0.insert(SettlDate2_16.getString());
  FIX::SettlType SettlType_19("STRING_3");
  msg.set(SettlType_19);
  Quote_0.insert(SettlType_19.getString());
  FIX::Side Side_34('G');
  msg.set(Side_34);
  Quote_0.insert(Side_34.getString());
  FIX::Text Text_68("STRING_1834574376");
  msg.set(Text_68);
  Quote_0.insert(Text_68.getString());
  FIX::TradingSessionID TradingSessionID_61("STRING_4");
  msg.set(TradingSessionID_61);
  Quote_0.insert(TradingSessionID_61.getString());
  FIX::TradingSessionSubID TradingSessionSubID_61("STRING_5");
  msg.set(TradingSessionSubID_61);
  Quote_0.insert(TradingSessionSubID_61.getString());
  FIX::TransactTime TransactTime_52(FIX::UTCTIMESTAMP(3, 1, 51, 10, 8, 2017));
  msg.set(TransactTime_52);
  Quote_0.insert(TransactTime_52.getString());
  FIX::ValidUntilTime ValidUntilTime_12(FIX::UTCTIMESTAMP(12, 7, 48, 1, 4, 2017));
  msg.set(ValidUntilTime_12);
  Quote_0.insert(ValidUntilTime_12.getString());
  all_values.push_back(Quote_0);

  // FinancingDetails
  multiset<string> FinancingDetails_16;
  FIX::AgreementCurrency AgreementCurrency_16("GBP");
  msg.set(AgreementCurrency_16);
  FinancingDetails_16.insert(AgreementCurrency_16.getString());
  FIX::AgreementDate AgreementDate_16("LOCALMKTDATE_240872946");
  msg.set(AgreementDate_16);
  FinancingDetails_16.insert(AgreementDate_16.getString());
  FIX::AgreementDesc AgreementDesc_16("STRING_1508545054");
  msg.set(AgreementDesc_16);
  FinancingDetails_16.insert(AgreementDesc_16.getString());
  FIX::AgreementID AgreementID_16("STRING_1785248730");
  msg.set(AgreementID_16);
  FinancingDetails_16.insert(AgreementID_16.getString());
  FIX::DeliveryType DeliveryType_16(1);
  msg.set(DeliveryType_16);
  FinancingDetails_16.insert(DeliveryType_16.getString());
  FIX::EndDate EndDate_16("LOCALMKTDATE_119807479");
  msg.set(EndDate_16);
  FinancingDetails_16.insert(EndDate_16.getString());
  FIX::MarginRatio MarginRatio_16;
  MarginRatio_16.setString("55.580000");
  msg.set(MarginRatio_16);
  FinancingDetails_16.insert(MarginRatio_16.getString());
  FIX::StartDate StartDate_16("LOCALMKTDATE_1300407631");
  msg.set(StartDate_16);
  FinancingDetails_16.insert(StartDate_16.getString());
  FIX::TerminationType TerminationType_16(1);
  msg.set(TerminationType_16);
  FinancingDetails_16.insert(TerminationType_16.getString());
  all_values.push_back(FinancingDetails_16);

  // Instrument
  multiset<string> Instrument_65;
  FIX::AttachmentPoint AttachmentPoint_65;
  AttachmentPoint_65.setString("95.100000");
  msg.set(AttachmentPoint_65);
  Instrument_65.insert(AttachmentPoint_65.getString());
  FIX::CFICode CFICode_65("STRING_1552583226");
  msg.set(CFICode_65);
  Instrument_65.insert(CFICode_65.getString());
  FIX::CPProgram CPProgram_65(99);
  msg.set(CPProgram_65);
  Instrument_65.insert(CPProgram_65.getString());
  FIX::CPRegType CPRegType_65("STRING_685449749");
  msg.set(CPRegType_65);
  Instrument_65.insert(CPRegType_65.getString());
  FIX::CapPrice CapPrice_65;
  CapPrice_65.setString("12396739");
  msg.set(CapPrice_65);
  Instrument_65.insert(CapPrice_65.getString());
  FIX::ContractMultiplier ContractMultiplier_65;
  ContractMultiplier_65.setString("14683503");
  msg.set(ContractMultiplier_65);
  Instrument_65.insert(ContractMultiplier_65.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_65(1);
  msg.set(ContractMultiplierUnit_65);
  Instrument_65.insert(ContractMultiplierUnit_65.getString());
  FIX::ContractSettlMonth ContractSettlMonth_65("MONTHYEAR_1868216534");
  msg.set(ContractSettlMonth_65);
  Instrument_65.insert(ContractSettlMonth_65.getString());
  FIX::CountryOfIssue CountryOfIssue_65("COUNTRY_2045079906");
  msg.set(CountryOfIssue_65);
  Instrument_65.insert(CountryOfIssue_65.getString());
  FIX::CouponPaymentDate CouponPaymentDate_65("LOCALMKTDATE_1825147206");
  msg.set(CouponPaymentDate_65);
  Instrument_65.insert(CouponPaymentDate_65.getString());
  FIX::CouponRate CouponRate_65;
  CouponRate_65.setString("36.370000");
  msg.set(CouponRate_65);
  Instrument_65.insert(CouponRate_65.getString());
  FIX::CreditRating CreditRating_65("STRING_1056172373");
  msg.set(CreditRating_65);
  Instrument_65.insert(CreditRating_65.getString());
  FIX::DatedDate DatedDate_65("LOCALMKTDATE_561373145");
  msg.set(DatedDate_65);
  Instrument_65.insert(DatedDate_65.getString());
  FIX::DetachmentPoint DetachmentPoint_65;
  DetachmentPoint_65.setString("8.150000");
  msg.set(DetachmentPoint_65);
  Instrument_65.insert(DetachmentPoint_65.getString());
  FIX::EncodedIssuer EncodedIssuer_65("DATA_1759037005");
  msg.set(EncodedIssuer_65);
  Instrument_65.insert(EncodedIssuer_65.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_65(1752693750);
  msg.set(EncodedIssuerLen_65);
  Instrument_65.insert(EncodedIssuerLen_65.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_65("DATA_1964064802");
  msg.set(EncodedSecurityDesc_65);
  Instrument_65.insert(EncodedSecurityDesc_65.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_65(40600745);
  msg.set(EncodedSecurityDescLen_65);
  Instrument_65.insert(EncodedSecurityDescLen_65.getString());
  FIX::ExerciseStyle ExerciseStyle_65(0);
  msg.set(ExerciseStyle_65);
  Instrument_65.insert(ExerciseStyle_65.getString());
  FIX::Factor Factor_65;
  Factor_65.setString("7821285");
  msg.set(Factor_65);
  Instrument_65.insert(Factor_65.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_65(true);
  msg.set(FlexProductEligibilityIndicator_65);
  Instrument_65.insert(FlexProductEligibilityIndicator_65.getString());
  FIX::FlexibleIndicator FlexibleIndicator_65(false);
  msg.set(FlexibleIndicator_65);
  Instrument_65.insert(FlexibleIndicator_65.getString());
  FIX::FloorPrice FloorPrice_65;
  FloorPrice_65.setString("21227175");
  msg.set(FloorPrice_65);
  Instrument_65.insert(FloorPrice_65.getString());
  FIX::FlowScheduleType FlowScheduleType_65(0);
  msg.set(FlowScheduleType_65);
  Instrument_65.insert(FlowScheduleType_65.getString());
  FIX::InstrRegistry InstrRegistry_65("STRING_2059463729");
  msg.set(InstrRegistry_65);
  Instrument_65.insert(InstrRegistry_65.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_65('1');
  msg.set(InstrmtAssignmentMethod_65);
  Instrument_65.insert(InstrmtAssignmentMethod_65.getString());
  FIX::InterestAccrualDate InterestAccrualDate_65("LOCALMKTDATE_1655607652");
  msg.set(InterestAccrualDate_65);
  Instrument_65.insert(InterestAccrualDate_65.getString());
  FIX::IssueDate IssueDate_65("LOCALMKTDATE_31787560");
  msg.set(IssueDate_65);
  Instrument_65.insert(IssueDate_65.getString());
  FIX::Issuer Issuer_65("STRING_644334561");
  msg.set(Issuer_65);
  Instrument_65.insert(Issuer_65.getString());
  FIX::ListMethod ListMethod_65(1);
  msg.set(ListMethod_65);
  Instrument_65.insert(ListMethod_65.getString());
  FIX::LocaleOfIssue LocaleOfIssue_65("STRING_55571016");
  msg.set(LocaleOfIssue_65);
  Instrument_65.insert(LocaleOfIssue_65.getString());
  FIX::MaturityDate MaturityDate_65("LOCALMKTDATE_565150423");
  msg.set(MaturityDate_65);
  Instrument_65.insert(MaturityDate_65.getString());
  FIX::MaturityMonthYear MaturityMonthYear_65("MONTHYEAR_213631213");
  msg.set(MaturityMonthYear_65);
  Instrument_65.insert(MaturityMonthYear_65.getString());
  FIX::MaturityTime MaturityTime_65("TZTIMEONLY_334276164");
  msg.set(MaturityTime_65);
  Instrument_65.insert(MaturityTime_65.getString());
  FIX::MinPriceIncrement MinPriceIncrement_65;
  MinPriceIncrement_65.setString("12506001");
  msg.set(MinPriceIncrement_65);
  Instrument_65.insert(MinPriceIncrement_65.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_65;
  MinPriceIncrementAmount_65.setString("14533051");
  msg.set(MinPriceIncrementAmount_65);
  Instrument_65.insert(MinPriceIncrementAmount_65.getString());
  FIX::NTPositionLimit NTPositionLimit_65(1802626467);
  msg.set(NTPositionLimit_65);
  Instrument_65.insert(NTPositionLimit_65.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_65;
  NotionalPercentageOutstanding_65.setString("6.480000");
  msg.set(NotionalPercentageOutstanding_65);
  Instrument_65.insert(NotionalPercentageOutstanding_65.getString());
  FIX::OptAttribute OptAttribute_65('1');
  msg.set(OptAttribute_65);
  Instrument_65.insert(OptAttribute_65.getString());
  FIX::OptPayoutAmount OptPayoutAmount_65;
  OptPayoutAmount_65.setString("17002227");
  msg.set(OptPayoutAmount_65);
  Instrument_65.insert(OptPayoutAmount_65.getString());
  FIX::OptPayoutType OptPayoutType_65(3);
  msg.set(OptPayoutType_65);
  Instrument_65.insert(OptPayoutType_65.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_65;
  OriginalNotionalPercentageOutstanding_65.setString("16.910000");
  msg.set(OriginalNotionalPercentageOutstanding_65);
  Instrument_65.insert(OriginalNotionalPercentageOutstanding_65.getString());
  FIX::Pool Pool_65("STRING_608911450");
  msg.set(Pool_65);
  Instrument_65.insert(Pool_65.getString());
  FIX::PositionLimit PositionLimit_65(429557352);
  msg.set(PositionLimit_65);
  Instrument_65.insert(PositionLimit_65.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_65("STRING_INT");
  msg.set(PriceQuoteMethod_65);
  Instrument_65.insert(PriceQuoteMethod_65.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_65("STRING_220464807");
  msg.set(PriceUnitOfMeasure_65);
  Instrument_65.insert(PriceUnitOfMeasure_65.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_65;
  PriceUnitOfMeasureQty_65.setString("347674");
  msg.set(PriceUnitOfMeasureQty_65);
  Instrument_65.insert(PriceUnitOfMeasureQty_65.getString());
  FIX::Product Product_67(2);
  msg.set(Product_67);
  Instrument_65.insert(Product_67.getString());
  FIX::ProductComplex ProductComplex_65("STRING_261065553");
  msg.set(ProductComplex_65);
  Instrument_65.insert(ProductComplex_65.getString());
  FIX::PutOrCall PutOrCall_65(1);
  msg.set(PutOrCall_65);
  Instrument_65.insert(PutOrCall_65.getString());
  FIX::RedemptionDate RedemptionDate_65("LOCALMKTDATE_261748591");
  msg.set(RedemptionDate_65);
  Instrument_65.insert(RedemptionDate_65.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_65("STRING_1058032777");
  msg.set(RepoCollateralSecurityType_65);
  Instrument_65.insert(RepoCollateralSecurityType_65.getString());
  FIX::RepurchaseRate RepurchaseRate_65;
  RepurchaseRate_65.setString("24.760000");
  msg.set(RepurchaseRate_65);
  Instrument_65.insert(RepurchaseRate_65.getString());
  FIX::RepurchaseTerm RepurchaseTerm_65(236982511);
  msg.set(RepurchaseTerm_65);
  Instrument_65.insert(RepurchaseTerm_65.getString());
  FIX::RestructuringType RestructuringType_65("STRING_FR");
  msg.set(RestructuringType_65);
  Instrument_65.insert(RestructuringType_65.getString());
  FIX::SecurityDesc SecurityDesc_65("STRING_1733742557");
  msg.set(SecurityDesc_65);
  Instrument_65.insert(SecurityDesc_65.getString());
  FIX::SecurityExchange SecurityExchange_65("EXCHANGE_1997465162");
  msg.set(SecurityExchange_65);
  Instrument_65.insert(SecurityExchange_65.getString());
  FIX::SecurityGroup SecurityGroup_65("STRING_1603996952");
  msg.set(SecurityGroup_65);
  Instrument_65.insert(SecurityGroup_65.getString());
  FIX::SecurityID SecurityID_65("STRING_1765530117");
  msg.set(SecurityID_65);
  Instrument_65.insert(SecurityID_65.getString());
  FIX::SecurityIDSource SecurityIDSource_65("STRING_C");
  msg.set(SecurityIDSource_65);
  Instrument_65.insert(SecurityIDSource_65.getString());
  FIX::SecurityStatus SecurityStatus_65("STRING_2");
  msg.set(SecurityStatus_65);
  Instrument_65.insert(SecurityStatus_65.getString());
  FIX::SecuritySubType SecuritySubType_66("STRING_1821101134");
  msg.set(SecuritySubType_66);
  Instrument_65.insert(SecuritySubType_66.getString());
  FIX::SecurityType SecurityType_67("STRING_TD");
  msg.set(SecurityType_67);
  Instrument_65.insert(SecurityType_67.getString());
  FIX::Seniority Seniority_65("STRING_SR");
  msg.set(Seniority_65);
  Instrument_65.insert(Seniority_65.getString());
  FIX::SettlMethod SettlMethod_65('C');
  msg.set(SettlMethod_65);
  Instrument_65.insert(SettlMethod_65.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_65("STRING_162583022");
  msg.set(SettleOnOpenFlag_65);
  Instrument_65.insert(SettleOnOpenFlag_65.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_65("STRING_1931981320");
  msg.set(StateOrProvinceOfIssue_65);
  Instrument_65.insert(StateOrProvinceOfIssue_65.getString());
  FIX::StrikeCurrency StrikeCurrency_65("CAN");
  msg.set(StrikeCurrency_65);
  Instrument_65.insert(StrikeCurrency_65.getString());
  FIX::StrikeMultiplier StrikeMultiplier_65;
  StrikeMultiplier_65.setString("9585357");
  msg.set(StrikeMultiplier_65);
  Instrument_65.insert(StrikeMultiplier_65.getString());
  FIX::StrikePrice StrikePrice_65;
  StrikePrice_65.setString("13632591");
  msg.set(StrikePrice_65);
  Instrument_65.insert(StrikePrice_65.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_65(3);
  msg.set(StrikePriceBoundaryMethod_65);
  Instrument_65.insert(StrikePriceBoundaryMethod_65.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_65;
  StrikePriceBoundaryPrecision_65.setString("37.700000");
  msg.set(StrikePriceBoundaryPrecision_65);
  Instrument_65.insert(StrikePriceBoundaryPrecision_65.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_65(2);
  msg.set(StrikePriceDeterminationMethod_65);
  Instrument_65.insert(StrikePriceDeterminationMethod_65.getString());
  FIX::StrikeValue StrikeValue_65;
  StrikeValue_65.setString("6508452");
  msg.set(StrikeValue_65);
  Instrument_65.insert(StrikeValue_65.getString());
  FIX::Symbol Symbol_65("STRING_1868896276");
  msg.set(Symbol_65);
  Instrument_65.insert(Symbol_65.getString());
  FIX::SymbolSfx SymbolSfx_65("STRING_CD");
  msg.set(SymbolSfx_65);
  Instrument_65.insert(SymbolSfx_65.getString());
  FIX::TimeUnit TimeUnit_65("STRING_H");
  msg.set(TimeUnit_65);
  Instrument_65.insert(TimeUnit_65.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_65(2);
  msg.set(UnderlyingPriceDeterminationMethod_65);
  Instrument_65.insert(UnderlyingPriceDeterminationMethod_65.getString());
  FIX::UnitOfMeasure UnitOfMeasure_65("STRING_Bbl");
  msg.set(UnitOfMeasure_65);
  Instrument_65.insert(UnitOfMeasure_65.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_65;
  UnitOfMeasureQty_65.setString("19564564");
  msg.set(UnitOfMeasureQty_65);
  Instrument_65.insert(UnitOfMeasureQty_65.getString());
  FIX::ValuationMethod ValuationMethod_65("STRING_EQTY");
  msg.set(ValuationMethod_65);
  Instrument_65.insert(ValuationMethod_65.getString());
  all_values.push_back(Instrument_65);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_127;
    FIX::ComplexEventCondition ComplexEventCondition_127(2);
    noComplexEvents_0_0.set(ComplexEventCondition_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventCondition_127.getString());
    FIX::ComplexEventPrice ComplexEventPrice_127;
    ComplexEventPrice_127.setString("18472473");
    noComplexEvents_0_0.set(ComplexEventPrice_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPrice_127.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_127(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceBoundaryMethod_127.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_127;
    ComplexEventPriceBoundaryPrecision_127.setString("42.230000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceBoundaryPrecision_127.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_127(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventPriceTimeType_127.getString());
    FIX::ComplexEventType ComplexEventType_127(5);
    noComplexEvents_0_0.set(ComplexEventType_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexEventType_127.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_127;
    ComplexOptPayoutAmount_127.setString("8350406");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_127);
    ComplexEvents_NoComplexEvents_127.insert(ComplexOptPayoutAmount_127.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_127);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_260;
      FIX::ComplexEventEndDate ComplexEventEndDate_260(FIX::UTCTIMESTAMP(18, 32, 50, 16, 12, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_260);
      ComplexEventDates_NoComplexEventDates_260.insert(ComplexEventEndDate_260.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_260(FIX::UTCTIMESTAMP(22, 41, 52, 19, 4, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_260);
      ComplexEventDates_NoComplexEventDates_260.insert(ComplexEventStartDate_260.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_260);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_519;
        FIX::ComplexEventEndTime ComplexEventEndTime_519(FIX::UTCTIMEONLY(21, 28, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_519);
        ComplexEventTimes_NoComplexEventTimes_519.insert(ComplexEventEndTime_519.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_519(FIX::UTCTIMEONLY(1, 22, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_519);
        ComplexEventTimes_NoComplexEventTimes_519.insert(ComplexEventStartTime_519.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_519);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_520;
        FIX::ComplexEventEndTime ComplexEventEndTime_520(FIX::UTCTIMEONLY(22, 5, 14));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_520);
        ComplexEventTimes_NoComplexEventTimes_520.insert(ComplexEventEndTime_520.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_520(FIX::UTCTIMEONLY(0, 58, 46));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_520);
        ComplexEventTimes_NoComplexEventTimes_520.insert(ComplexEventStartTime_520.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_520);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_261;
      FIX::ComplexEventEndDate ComplexEventEndDate_261(FIX::UTCTIMESTAMP(17, 11, 4, 9, 3, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_261);
      ComplexEventDates_NoComplexEventDates_261.insert(ComplexEventEndDate_261.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_261(FIX::UTCTIMESTAMP(12, 1, 27, 23, 5, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_261);
      ComplexEventDates_NoComplexEventDates_261.insert(ComplexEventStartDate_261.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_261);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_521;
        FIX::ComplexEventEndTime ComplexEventEndTime_521(FIX::UTCTIMEONLY(9, 5, 22));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_521);
        ComplexEventTimes_NoComplexEventTimes_521.insert(ComplexEventEndTime_521.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_521(FIX::UTCTIMEONLY(6, 36, 42));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_521);
        ComplexEventTimes_NoComplexEventTimes_521.insert(ComplexEventStartTime_521.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_521);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_522;
        FIX::ComplexEventEndTime ComplexEventEndTime_522(FIX::UTCTIMEONLY(22, 47, 47));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_522);
        ComplexEventTimes_NoComplexEventTimes_522.insert(ComplexEventEndTime_522.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_522(FIX::UTCTIMEONLY(3, 46, 5));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_522);
        ComplexEventTimes_NoComplexEventTimes_522.insert(ComplexEventStartTime_522.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_522);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_523;
        FIX::ComplexEventEndTime ComplexEventEndTime_523(FIX::UTCTIMEONLY(19, 16, 22));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_523);
        ComplexEventTimes_NoComplexEventTimes_523.insert(ComplexEventEndTime_523.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_523(FIX::UTCTIMEONLY(18, 33, 55));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_523);
        ComplexEventTimes_NoComplexEventTimes_523.insert(ComplexEventStartTime_523.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_523);

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
    multiset<string> EvntGrp_NoEvents_133;
    FIX::EventDate EventDate_133("LOCALMKTDATE_615670714");
    noEvents_0_0.set(EventDate_133);
    EvntGrp_NoEvents_133.insert(EventDate_133.getString());
    FIX::EventPx EventPx_133;
    EventPx_133.setString("14798091");
    noEvents_0_0.set(EventPx_133);
    EvntGrp_NoEvents_133.insert(EventPx_133.getString());
    FIX::EventText EventText_133("STRING_1091785821");
    noEvents_0_0.set(EventText_133);
    EvntGrp_NoEvents_133.insert(EventText_133.getString());
    FIX::EventTime EventTime_133(FIX::UTCTIMESTAMP(22, 58, 19, 8, 4, 2015));
    noEvents_0_0.set(EventTime_133);
    EvntGrp_NoEvents_133.insert(EventTime_133.getString());
    FIX::EventType EventType_133(9);
    noEvents_0_0.set(EventType_133);
    EvntGrp_NoEvents_133.insert(EventType_133.getString());
    all_values.push_back(EvntGrp_NoEvents_133);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::Quote::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_134;
    FIX::EventDate EventDate_134("LOCALMKTDATE_1013244505");
    noEvents_0_1.set(EventDate_134);
    EvntGrp_NoEvents_134.insert(EventDate_134.getString());
    FIX::EventPx EventPx_134;
    EventPx_134.setString("19369946");
    noEvents_0_1.set(EventPx_134);
    EvntGrp_NoEvents_134.insert(EventPx_134.getString());
    FIX::EventText EventText_134("STRING_1687272563");
    noEvents_0_1.set(EventText_134);
    EvntGrp_NoEvents_134.insert(EventText_134.getString());
    FIX::EventTime EventTime_134(FIX::UTCTIMESTAMP(23, 2, 46, 6, 11, 2012));
    noEvents_0_1.set(EventTime_134);
    EvntGrp_NoEvents_134.insert(EventTime_134.getString());
    FIX::EventType EventType_134(16);
    noEvents_0_1.set(EventType_134);
    EvntGrp_NoEvents_134.insert(EventType_134.getString());
    all_values.push_back(EvntGrp_NoEvents_134);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Quote::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_135;
    FIX::InstrumentPartyID InstrumentPartyID_135("STRING_1585739659");
    noInstrumentParties_0_0.set(InstrumentPartyID_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyID_135.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_135('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyIDSource_135.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_135(463529729);
    noInstrumentParties_0_0.set(InstrumentPartyRole_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyRole_135.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_135);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285;
      FIX::InstrumentPartySubID InstrumentPartySubID_285("STRING_1532820769");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_285);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubID_285.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_285(551322483);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_285);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubIDType_285.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286;
      FIX::InstrumentPartySubID InstrumentPartySubID_286("STRING_1461477987");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_286);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubID_286.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_286(1097140431);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_286);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubIDType_286.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287;
      FIX::InstrumentPartySubID InstrumentPartySubID_287("STRING_1166993197");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_287);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubID_287.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_287(793803462);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_287);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubIDType_287.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_144;
    FIX::SecurityAltID SecurityAltID_144("STRING_329855576");
    noSecurityAltID_0_0.set(SecurityAltID_144);
    SecAltIDGrp_NoSecurityAltID_144.insert(SecurityAltID_144.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_144("STRING_172594364");
    noSecurityAltID_0_0.set(SecurityAltIDSource_144);
    SecAltIDGrp_NoSecurityAltID_144.insert(SecurityAltIDSource_144.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_144);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_145;
    FIX::SecurityAltID SecurityAltID_145("STRING_857074922");
    noSecurityAltID_0_1.set(SecurityAltID_145);
    SecAltIDGrp_NoSecurityAltID_145.insert(SecurityAltID_145.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_145("STRING_75603248");
    noSecurityAltID_0_1.set(SecurityAltIDSource_145);
    SecAltIDGrp_NoSecurityAltID_145.insert(SecurityAltIDSource_145.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_145);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_130;
  FIX::SecurityXML SecurityXML_131("XMLDATA_1010536988");
  msg.set(SecurityXML_131);
  FIX::SecurityXMLLen SecurityXMLLen_65(278546757);
  msg.set(SecurityXMLLen_65);
  FIX::SecurityXMLSchema SecurityXMLSchema_65("STRING_1640962481");
  msg.set(SecurityXMLSchema_65);
  SecurityXML_130.insert(SecurityXMLSchema_65.getString());
  all_values.push_back(SecurityXML_130);

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::Quote::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_0;
    FIX::LegBidForwardPoints LegBidForwardPoints_0;
    LegBidForwardPoints_0.setString("12917912");
    noLegs_0_0.set(LegBidForwardPoints_0);
    LegQuotGrp_NoLegs_0.insert(LegBidForwardPoints_0.getString());
    FIX::LegBidPx LegBidPx_0;
    LegBidPx_0.setString("14304734");
    noLegs_0_0.set(LegBidPx_0);
    LegQuotGrp_NoLegs_0.insert(LegBidPx_0.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_0;
    LegOfferForwardPoints_0.setString("2713566");
    noLegs_0_0.set(LegOfferForwardPoints_0);
    LegQuotGrp_NoLegs_0.insert(LegOfferForwardPoints_0.getString());
    FIX::LegOfferPx LegOfferPx_0;
    LegOfferPx_0.setString("20710259");
    noLegs_0_0.set(LegOfferPx_0);
    LegQuotGrp_NoLegs_0.insert(LegOfferPx_0.getString());
    FIX::LegOrderQty LegOrderQty_9;
    LegOrderQty_9.setString("19908911");
    noLegs_0_0.set(LegOrderQty_9);
    LegQuotGrp_NoLegs_0.insert(LegOrderQty_9.getString());
    FIX::LegPriceType LegPriceType_0(1878213306);
    noLegs_0_0.set(LegPriceType_0);
    LegQuotGrp_NoLegs_0.insert(LegPriceType_0.getString());
    FIX::LegQty LegQty_9;
    LegQty_9.setString("20074626");
    noLegs_0_0.set(LegQty_9);
    LegQuotGrp_NoLegs_0.insert(LegQty_9.getString());
    FIX::LegRefID LegRefID_9("STRING_1123748328");
    noLegs_0_0.set(LegRefID_9);
    LegQuotGrp_NoLegs_0.insert(LegRefID_9.getString());
    FIX::LegSettlDate LegSettlDate_9("LOCALMKTDATE_2127149164");
    noLegs_0_0.set(LegSettlDate_9);
    LegQuotGrp_NoLegs_0.insert(LegSettlDate_9.getString());
    FIX::LegSettlType LegSettlType_9('1');
    noLegs_0_0.set(LegSettlType_9);
    LegQuotGrp_NoLegs_0.insert(LegSettlType_9.getString());
    FIX::LegSwapType LegSwapType_9(5);
    noLegs_0_0.set(LegSwapType_9);
    LegQuotGrp_NoLegs_0.insert(LegSwapType_9.getString());
    all_values.push_back(LegQuotGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_96;
    FIX::EncodedLegIssuer EncodedLegIssuer_96("DATA_774856872");
    noLegs_0_0.set(EncodedLegIssuer_96);
    InstrumentLeg_96.insert(EncodedLegIssuer_96.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_96(765609628);
    noLegs_0_0.set(EncodedLegIssuerLen_96);
    InstrumentLeg_96.insert(EncodedLegIssuerLen_96.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_96("DATA_477587730");
    noLegs_0_0.set(EncodedLegSecurityDesc_96);
    InstrumentLeg_96.insert(EncodedLegSecurityDesc_96.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_96(1238386601);
    noLegs_0_0.set(EncodedLegSecurityDescLen_96);
    InstrumentLeg_96.insert(EncodedLegSecurityDescLen_96.getString());
    FIX::LegCFICode LegCFICode_96("STRING_1573693080");
    noLegs_0_0.set(LegCFICode_96);
    InstrumentLeg_96.insert(LegCFICode_96.getString());
    FIX::LegContractMultiplier LegContractMultiplier_96;
    LegContractMultiplier_96.setString("20104084");
    noLegs_0_0.set(LegContractMultiplier_96);
    InstrumentLeg_96.insert(LegContractMultiplier_96.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_96(1789709084);
    noLegs_0_0.set(LegContractMultiplierUnit_96);
    InstrumentLeg_96.insert(LegContractMultiplierUnit_96.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_96("MONTHYEAR_887687420");
    noLegs_0_0.set(LegContractSettlMonth_96);
    InstrumentLeg_96.insert(LegContractSettlMonth_96.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_96("COUNTRY_960065282");
    noLegs_0_0.set(LegCountryOfIssue_96);
    InstrumentLeg_96.insert(LegCountryOfIssue_96.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_96("LOCALMKTDATE_809218634");
    noLegs_0_0.set(LegCouponPaymentDate_96);
    InstrumentLeg_96.insert(LegCouponPaymentDate_96.getString());
    FIX::LegCouponRate LegCouponRate_96;
    LegCouponRate_96.setString("8.820000");
    noLegs_0_0.set(LegCouponRate_96);
    InstrumentLeg_96.insert(LegCouponRate_96.getString());
    FIX::LegCreditRating LegCreditRating_96("STRING_1001507887");
    noLegs_0_0.set(LegCreditRating_96);
    InstrumentLeg_96.insert(LegCreditRating_96.getString());
    FIX::LegCurrency LegCurrency_96("JPY");
    noLegs_0_0.set(LegCurrency_96);
    InstrumentLeg_96.insert(LegCurrency_96.getString());
    FIX::LegDatedDate LegDatedDate_96("LOCALMKTDATE_1858582809");
    noLegs_0_0.set(LegDatedDate_96);
    InstrumentLeg_96.insert(LegDatedDate_96.getString());
    FIX::LegExerciseStyle LegExerciseStyle_96(1214677458);
    noLegs_0_0.set(LegExerciseStyle_96);
    InstrumentLeg_96.insert(LegExerciseStyle_96.getString());
    FIX::LegFactor LegFactor_96;
    LegFactor_96.setString("7171385");
    noLegs_0_0.set(LegFactor_96);
    InstrumentLeg_96.insert(LegFactor_96.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_96(2137129567);
    noLegs_0_0.set(LegFlowScheduleType_96);
    InstrumentLeg_96.insert(LegFlowScheduleType_96.getString());
    FIX::LegInstrRegistry LegInstrRegistry_96("STRING_708156292");
    noLegs_0_0.set(LegInstrRegistry_96);
    InstrumentLeg_96.insert(LegInstrRegistry_96.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_96("LOCALMKTDATE_1448706276");
    noLegs_0_0.set(LegInterestAccrualDate_96);
    InstrumentLeg_96.insert(LegInterestAccrualDate_96.getString());
    FIX::LegIssueDate LegIssueDate_96("LOCALMKTDATE_1281437182");
    noLegs_0_0.set(LegIssueDate_96);
    InstrumentLeg_96.insert(LegIssueDate_96.getString());
    FIX::LegIssuer LegIssuer_96("STRING_2138629775");
    noLegs_0_0.set(LegIssuer_96);
    InstrumentLeg_96.insert(LegIssuer_96.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_96("STRING_1720062880");
    noLegs_0_0.set(LegLocaleOfIssue_96);
    InstrumentLeg_96.insert(LegLocaleOfIssue_96.getString());
    FIX::LegMaturityDate LegMaturityDate_96("LOCALMKTDATE_1204979496");
    noLegs_0_0.set(LegMaturityDate_96);
    InstrumentLeg_96.insert(LegMaturityDate_96.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_96("MONTHYEAR_1982037273");
    noLegs_0_0.set(LegMaturityMonthYear_96);
    InstrumentLeg_96.insert(LegMaturityMonthYear_96.getString());
    FIX::LegMaturityTime LegMaturityTime_96("TZTIMEONLY_1450792538");
    noLegs_0_0.set(LegMaturityTime_96);
    InstrumentLeg_96.insert(LegMaturityTime_96.getString());
    FIX::LegOptAttribute LegOptAttribute_96('1');
    noLegs_0_0.set(LegOptAttribute_96);
    InstrumentLeg_96.insert(LegOptAttribute_96.getString());
    FIX::LegOptionRatio LegOptionRatio_96;
    LegOptionRatio_96.setString("9583019");
    noLegs_0_0.set(LegOptionRatio_96);
    InstrumentLeg_96.insert(LegOptionRatio_96.getString());
    FIX::LegPool LegPool_96("STRING_1430458055");
    noLegs_0_0.set(LegPool_96);
    InstrumentLeg_96.insert(LegPool_96.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_96("STRING_244828417");
    noLegs_0_0.set(LegPriceUnitOfMeasure_96);
    InstrumentLeg_96.insert(LegPriceUnitOfMeasure_96.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_96;
    LegPriceUnitOfMeasureQty_96.setString("19279084");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_96);
    InstrumentLeg_96.insert(LegPriceUnitOfMeasureQty_96.getString());
    FIX::LegProduct LegProduct_96(57831279);
    noLegs_0_0.set(LegProduct_96);
    InstrumentLeg_96.insert(LegProduct_96.getString());
    FIX::LegPutOrCall LegPutOrCall_96(1010438046);
    noLegs_0_0.set(LegPutOrCall_96);
    InstrumentLeg_96.insert(LegPutOrCall_96.getString());
    FIX::LegRatioQty LegRatioQty_96;
    LegRatioQty_96.setString("2580125");
    noLegs_0_0.set(LegRatioQty_96);
    InstrumentLeg_96.insert(LegRatioQty_96.getString());
    FIX::LegRedemptionDate LegRedemptionDate_96("LOCALMKTDATE_1296217880");
    noLegs_0_0.set(LegRedemptionDate_96);
    InstrumentLeg_96.insert(LegRedemptionDate_96.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_96("STRING_436647478");
    noLegs_0_0.set(LegRepoCollateralSecurityType_96);
    InstrumentLeg_96.insert(LegRepoCollateralSecurityType_96.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_96;
    LegRepurchaseRate_96.setString("74.030000");
    noLegs_0_0.set(LegRepurchaseRate_96);
    InstrumentLeg_96.insert(LegRepurchaseRate_96.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_96(938443317);
    noLegs_0_0.set(LegRepurchaseTerm_96);
    InstrumentLeg_96.insert(LegRepurchaseTerm_96.getString());
    FIX::LegSecurityDesc LegSecurityDesc_96("STRING_1324334898");
    noLegs_0_0.set(LegSecurityDesc_96);
    InstrumentLeg_96.insert(LegSecurityDesc_96.getString());
    FIX::LegSecurityExchange LegSecurityExchange_96("EXCHANGE_1081002686");
    noLegs_0_0.set(LegSecurityExchange_96);
    InstrumentLeg_96.insert(LegSecurityExchange_96.getString());
    FIX::LegSecurityID LegSecurityID_96("STRING_1747661951");
    noLegs_0_0.set(LegSecurityID_96);
    InstrumentLeg_96.insert(LegSecurityID_96.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_96("STRING_858342132");
    noLegs_0_0.set(LegSecurityIDSource_96);
    InstrumentLeg_96.insert(LegSecurityIDSource_96.getString());
    FIX::LegSecuritySubType LegSecuritySubType_96("STRING_2082510573");
    noLegs_0_0.set(LegSecuritySubType_96);
    InstrumentLeg_96.insert(LegSecuritySubType_96.getString());
    FIX::LegSecurityType LegSecurityType_96("STRING_739252513");
    noLegs_0_0.set(LegSecurityType_96);
    InstrumentLeg_96.insert(LegSecurityType_96.getString());
    FIX::LegSide LegSide_96('5');
    noLegs_0_0.set(LegSide_96);
    InstrumentLeg_96.insert(LegSide_96.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_96("STRING_1793609734");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_96);
    InstrumentLeg_96.insert(LegStateOrProvinceOfIssue_96.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_96("GBP");
    noLegs_0_0.set(LegStrikeCurrency_96);
    InstrumentLeg_96.insert(LegStrikeCurrency_96.getString());
    FIX::LegStrikePrice LegStrikePrice_96;
    LegStrikePrice_96.setString("17832556");
    noLegs_0_0.set(LegStrikePrice_96);
    InstrumentLeg_96.insert(LegStrikePrice_96.getString());
    FIX::LegSymbol LegSymbol_96("STRING_514602616");
    noLegs_0_0.set(LegSymbol_96);
    InstrumentLeg_96.insert(LegSymbol_96.getString());
    FIX::LegSymbolSfx LegSymbolSfx_96("STRING_583304946");
    noLegs_0_0.set(LegSymbolSfx_96);
    InstrumentLeg_96.insert(LegSymbolSfx_96.getString());
    FIX::LegTimeUnit LegTimeUnit_96("STRING_917209187");
    noLegs_0_0.set(LegTimeUnit_96);
    InstrumentLeg_96.insert(LegTimeUnit_96.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_96("STRING_505748743");
    noLegs_0_0.set(LegUnitOfMeasure_96);
    InstrumentLeg_96.insert(LegUnitOfMeasure_96.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_96;
    LegUnitOfMeasureQty_96.setString("1558841");
    noLegs_0_0.set(LegUnitOfMeasureQty_96);
    InstrumentLeg_96.insert(LegUnitOfMeasureQty_96.getString());
    all_values.push_back(InstrumentLeg_96);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_187;
      FIX::LegSecurityAltID LegSecurityAltID_187("STRING_340302368");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_187);
      LegSecAltIDGrp_NoLegSecurityAltID_187.insert(LegSecurityAltID_187.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_187("STRING_1606676716");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_187);
      LegSecAltIDGrp_NoLegSecurityAltID_187.insert(LegSecurityAltIDSource_187.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_187);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_188;
      FIX::LegSecurityAltID LegSecurityAltID_188("STRING_1039663484");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_188);
      LegSecAltIDGrp_NoLegSecurityAltID_188.insert(LegSecurityAltID_188.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_188("STRING_1298604322");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_188);
      LegSecAltIDGrp_NoLegSecurityAltID_188.insert(LegSecurityAltIDSource_188.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_188);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_189;
      FIX::LegSecurityAltID LegSecurityAltID_189("STRING_889651123");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_189);
      LegSecAltIDGrp_NoLegSecurityAltID_189.insert(LegSecurityAltID_189.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_189("STRING_1284491901");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_189);
      LegSecAltIDGrp_NoLegSecurityAltID_189.insert(LegSecurityAltIDSource_189.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_189);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_0;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_0("JPY");
    noLegs_0_0.set(LegBenchmarkCurveCurrency_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurveCurrency_0.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_0("STRING_147446299");
    noLegs_0_0.set(LegBenchmarkCurveName_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurveName_0.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_0("STRING_1337041696");
    noLegs_0_0.set(LegBenchmarkCurvePoint_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkCurvePoint_0.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_0;
    LegBenchmarkPrice_0.setString("962166");
    noLegs_0_0.set(LegBenchmarkPrice_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkPrice_0.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_0(584093778);
    noLegs_0_0.set(LegBenchmarkPriceType_0);
    LegBenchmarkCurveData_0.insert(LegBenchmarkPriceType_0.getString());
    all_values.push_back(LegBenchmarkCurveData_0);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_24;
      FIX::LegStipulationType LegStipulationType_24("STRING_1034659952");
      noLegStipulations_0_1_0.set(LegStipulationType_24);
      LegStipulations_NoLegStipulations_24.insert(LegStipulationType_24.getString());
      FIX::LegStipulationValue LegStipulationValue_24("STRING_1908428676");
      noLegStipulations_0_1_0.set(LegStipulationValue_24);
      LegStipulations_NoLegStipulations_24.insert(LegStipulationValue_24.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_24);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_94;
      FIX::NestedPartyID NestedPartyID_94("STRING_634838255");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyID_94.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_94('6');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyIDSource_94.getString());
      FIX::NestedPartyRole NestedPartyRole_94(326525062);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyRole_94.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_94);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_184;
        FIX::NestedPartySubID NestedPartySubID_184("STRING_1184230892");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_184);
        NstdPtysSubGrp_NoNestedPartySubIDs_184.insert(NestedPartySubID_184.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_184(2120134797);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_184);
        NstdPtysSubGrp_NoNestedPartySubIDs_184.insert(NestedPartySubIDType_184.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_184);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
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
    LegBidForwardPoints_1.setString("11805370");
    noLegs_0_1.set(LegBidForwardPoints_1);
    LegQuotGrp_NoLegs_1.insert(LegBidForwardPoints_1.getString());
    FIX::LegBidPx LegBidPx_1;
    LegBidPx_1.setString("3188295");
    noLegs_0_1.set(LegBidPx_1);
    LegQuotGrp_NoLegs_1.insert(LegBidPx_1.getString());
    FIX::LegOfferForwardPoints LegOfferForwardPoints_1;
    LegOfferForwardPoints_1.setString("17559068");
    noLegs_0_1.set(LegOfferForwardPoints_1);
    LegQuotGrp_NoLegs_1.insert(LegOfferForwardPoints_1.getString());
    FIX::LegOfferPx LegOfferPx_1;
    LegOfferPx_1.setString("16951397");
    noLegs_0_1.set(LegOfferPx_1);
    LegQuotGrp_NoLegs_1.insert(LegOfferPx_1.getString());
    FIX::LegOrderQty LegOrderQty_10;
    LegOrderQty_10.setString("9021345");
    noLegs_0_1.set(LegOrderQty_10);
    LegQuotGrp_NoLegs_1.insert(LegOrderQty_10.getString());
    FIX::LegPriceType LegPriceType_1(525632342);
    noLegs_0_1.set(LegPriceType_1);
    LegQuotGrp_NoLegs_1.insert(LegPriceType_1.getString());
    FIX::LegQty LegQty_10;
    LegQty_10.setString("534048");
    noLegs_0_1.set(LegQty_10);
    LegQuotGrp_NoLegs_1.insert(LegQty_10.getString());
    FIX::LegRefID LegRefID_10("STRING_1058018686");
    noLegs_0_1.set(LegRefID_10);
    LegQuotGrp_NoLegs_1.insert(LegRefID_10.getString());
    FIX::LegSettlDate LegSettlDate_10("LOCALMKTDATE_500337377");
    noLegs_0_1.set(LegSettlDate_10);
    LegQuotGrp_NoLegs_1.insert(LegSettlDate_10.getString());
    FIX::LegSettlType LegSettlType_10('3');
    noLegs_0_1.set(LegSettlType_10);
    LegQuotGrp_NoLegs_1.insert(LegSettlType_10.getString());
    FIX::LegSwapType LegSwapType_10(4);
    noLegs_0_1.set(LegSwapType_10);
    LegQuotGrp_NoLegs_1.insert(LegSwapType_10.getString());
    all_values.push_back(LegQuotGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_97;
    FIX::EncodedLegIssuer EncodedLegIssuer_97("DATA_1540000861");
    noLegs_0_1.set(EncodedLegIssuer_97);
    InstrumentLeg_97.insert(EncodedLegIssuer_97.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_97(1692311494);
    noLegs_0_1.set(EncodedLegIssuerLen_97);
    InstrumentLeg_97.insert(EncodedLegIssuerLen_97.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_97("DATA_1406862878");
    noLegs_0_1.set(EncodedLegSecurityDesc_97);
    InstrumentLeg_97.insert(EncodedLegSecurityDesc_97.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_97(677009115);
    noLegs_0_1.set(EncodedLegSecurityDescLen_97);
    InstrumentLeg_97.insert(EncodedLegSecurityDescLen_97.getString());
    FIX::LegCFICode LegCFICode_97("STRING_623856990");
    noLegs_0_1.set(LegCFICode_97);
    InstrumentLeg_97.insert(LegCFICode_97.getString());
    FIX::LegContractMultiplier LegContractMultiplier_97;
    LegContractMultiplier_97.setString("2068616");
    noLegs_0_1.set(LegContractMultiplier_97);
    InstrumentLeg_97.insert(LegContractMultiplier_97.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_97(824455414);
    noLegs_0_1.set(LegContractMultiplierUnit_97);
    InstrumentLeg_97.insert(LegContractMultiplierUnit_97.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_97("MONTHYEAR_1960898686");
    noLegs_0_1.set(LegContractSettlMonth_97);
    InstrumentLeg_97.insert(LegContractSettlMonth_97.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_97("COUNTRY_303078267");
    noLegs_0_1.set(LegCountryOfIssue_97);
    InstrumentLeg_97.insert(LegCountryOfIssue_97.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_97("LOCALMKTDATE_1408549192");
    noLegs_0_1.set(LegCouponPaymentDate_97);
    InstrumentLeg_97.insert(LegCouponPaymentDate_97.getString());
    FIX::LegCouponRate LegCouponRate_97;
    LegCouponRate_97.setString("41.380000");
    noLegs_0_1.set(LegCouponRate_97);
    InstrumentLeg_97.insert(LegCouponRate_97.getString());
    FIX::LegCreditRating LegCreditRating_97("STRING_1337738219");
    noLegs_0_1.set(LegCreditRating_97);
    InstrumentLeg_97.insert(LegCreditRating_97.getString());
    FIX::LegCurrency LegCurrency_97("CHF");
    noLegs_0_1.set(LegCurrency_97);
    InstrumentLeg_97.insert(LegCurrency_97.getString());
    FIX::LegDatedDate LegDatedDate_97("LOCALMKTDATE_1972576474");
    noLegs_0_1.set(LegDatedDate_97);
    InstrumentLeg_97.insert(LegDatedDate_97.getString());
    FIX::LegExerciseStyle LegExerciseStyle_97(1788781382);
    noLegs_0_1.set(LegExerciseStyle_97);
    InstrumentLeg_97.insert(LegExerciseStyle_97.getString());
    FIX::LegFactor LegFactor_97;
    LegFactor_97.setString("19894173");
    noLegs_0_1.set(LegFactor_97);
    InstrumentLeg_97.insert(LegFactor_97.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_97(1199183595);
    noLegs_0_1.set(LegFlowScheduleType_97);
    InstrumentLeg_97.insert(LegFlowScheduleType_97.getString());
    FIX::LegInstrRegistry LegInstrRegistry_97("STRING_825528626");
    noLegs_0_1.set(LegInstrRegistry_97);
    InstrumentLeg_97.insert(LegInstrRegistry_97.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_97("LOCALMKTDATE_1962068487");
    noLegs_0_1.set(LegInterestAccrualDate_97);
    InstrumentLeg_97.insert(LegInterestAccrualDate_97.getString());
    FIX::LegIssueDate LegIssueDate_97("LOCALMKTDATE_232237039");
    noLegs_0_1.set(LegIssueDate_97);
    InstrumentLeg_97.insert(LegIssueDate_97.getString());
    FIX::LegIssuer LegIssuer_97("STRING_1144358188");
    noLegs_0_1.set(LegIssuer_97);
    InstrumentLeg_97.insert(LegIssuer_97.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_97("STRING_1570491641");
    noLegs_0_1.set(LegLocaleOfIssue_97);
    InstrumentLeg_97.insert(LegLocaleOfIssue_97.getString());
    FIX::LegMaturityDate LegMaturityDate_97("LOCALMKTDATE_1927376748");
    noLegs_0_1.set(LegMaturityDate_97);
    InstrumentLeg_97.insert(LegMaturityDate_97.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_97("MONTHYEAR_2046492696");
    noLegs_0_1.set(LegMaturityMonthYear_97);
    InstrumentLeg_97.insert(LegMaturityMonthYear_97.getString());
    FIX::LegMaturityTime LegMaturityTime_97("TZTIMEONLY_2096123983");
    noLegs_0_1.set(LegMaturityTime_97);
    InstrumentLeg_97.insert(LegMaturityTime_97.getString());
    FIX::LegOptAttribute LegOptAttribute_97('1');
    noLegs_0_1.set(LegOptAttribute_97);
    InstrumentLeg_97.insert(LegOptAttribute_97.getString());
    FIX::LegOptionRatio LegOptionRatio_97;
    LegOptionRatio_97.setString("9570277");
    noLegs_0_1.set(LegOptionRatio_97);
    InstrumentLeg_97.insert(LegOptionRatio_97.getString());
    FIX::LegPool LegPool_97("STRING_448977713");
    noLegs_0_1.set(LegPool_97);
    InstrumentLeg_97.insert(LegPool_97.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_97("STRING_227005075");
    noLegs_0_1.set(LegPriceUnitOfMeasure_97);
    InstrumentLeg_97.insert(LegPriceUnitOfMeasure_97.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_97;
    LegPriceUnitOfMeasureQty_97.setString("14742394");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_97);
    InstrumentLeg_97.insert(LegPriceUnitOfMeasureQty_97.getString());
    FIX::LegProduct LegProduct_97(1988978574);
    noLegs_0_1.set(LegProduct_97);
    InstrumentLeg_97.insert(LegProduct_97.getString());
    FIX::LegPutOrCall LegPutOrCall_97(1919316570);
    noLegs_0_1.set(LegPutOrCall_97);
    InstrumentLeg_97.insert(LegPutOrCall_97.getString());
    FIX::LegRatioQty LegRatioQty_97;
    LegRatioQty_97.setString("7336187");
    noLegs_0_1.set(LegRatioQty_97);
    InstrumentLeg_97.insert(LegRatioQty_97.getString());
    FIX::LegRedemptionDate LegRedemptionDate_97("LOCALMKTDATE_518504041");
    noLegs_0_1.set(LegRedemptionDate_97);
    InstrumentLeg_97.insert(LegRedemptionDate_97.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_97("STRING_395689912");
    noLegs_0_1.set(LegRepoCollateralSecurityType_97);
    InstrumentLeg_97.insert(LegRepoCollateralSecurityType_97.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_97;
    LegRepurchaseRate_97.setString("3.510000");
    noLegs_0_1.set(LegRepurchaseRate_97);
    InstrumentLeg_97.insert(LegRepurchaseRate_97.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_97(1342959456);
    noLegs_0_1.set(LegRepurchaseTerm_97);
    InstrumentLeg_97.insert(LegRepurchaseTerm_97.getString());
    FIX::LegSecurityDesc LegSecurityDesc_97("STRING_209104951");
    noLegs_0_1.set(LegSecurityDesc_97);
    InstrumentLeg_97.insert(LegSecurityDesc_97.getString());
    FIX::LegSecurityExchange LegSecurityExchange_97("EXCHANGE_1243558618");
    noLegs_0_1.set(LegSecurityExchange_97);
    InstrumentLeg_97.insert(LegSecurityExchange_97.getString());
    FIX::LegSecurityID LegSecurityID_97("STRING_604025000");
    noLegs_0_1.set(LegSecurityID_97);
    InstrumentLeg_97.insert(LegSecurityID_97.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_97("STRING_1480499089");
    noLegs_0_1.set(LegSecurityIDSource_97);
    InstrumentLeg_97.insert(LegSecurityIDSource_97.getString());
    FIX::LegSecuritySubType LegSecuritySubType_97("STRING_433813190");
    noLegs_0_1.set(LegSecuritySubType_97);
    InstrumentLeg_97.insert(LegSecuritySubType_97.getString());
    FIX::LegSecurityType LegSecurityType_97("STRING_1773519221");
    noLegs_0_1.set(LegSecurityType_97);
    InstrumentLeg_97.insert(LegSecurityType_97.getString());
    FIX::LegSide LegSide_97('9');
    noLegs_0_1.set(LegSide_97);
    InstrumentLeg_97.insert(LegSide_97.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_97("STRING_258906016");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_97);
    InstrumentLeg_97.insert(LegStateOrProvinceOfIssue_97.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_97("GBP");
    noLegs_0_1.set(LegStrikeCurrency_97);
    InstrumentLeg_97.insert(LegStrikeCurrency_97.getString());
    FIX::LegStrikePrice LegStrikePrice_97;
    LegStrikePrice_97.setString("14580896");
    noLegs_0_1.set(LegStrikePrice_97);
    InstrumentLeg_97.insert(LegStrikePrice_97.getString());
    FIX::LegSymbol LegSymbol_97("STRING_92861933");
    noLegs_0_1.set(LegSymbol_97);
    InstrumentLeg_97.insert(LegSymbol_97.getString());
    FIX::LegSymbolSfx LegSymbolSfx_97("STRING_652426245");
    noLegs_0_1.set(LegSymbolSfx_97);
    InstrumentLeg_97.insert(LegSymbolSfx_97.getString());
    FIX::LegTimeUnit LegTimeUnit_97("STRING_1690326651");
    noLegs_0_1.set(LegTimeUnit_97);
    InstrumentLeg_97.insert(LegTimeUnit_97.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_97("STRING_1237220121");
    noLegs_0_1.set(LegUnitOfMeasure_97);
    InstrumentLeg_97.insert(LegUnitOfMeasure_97.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_97;
    LegUnitOfMeasureQty_97.setString("754342");
    noLegs_0_1.set(LegUnitOfMeasureQty_97);
    InstrumentLeg_97.insert(LegUnitOfMeasureQty_97.getString());
    all_values.push_back(InstrumentLeg_97);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_190;
      FIX::LegSecurityAltID LegSecurityAltID_190("STRING_1136229169");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_190);
      LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltID_190.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_190("STRING_24074574");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_190);
      LegSecAltIDGrp_NoLegSecurityAltID_190.insert(LegSecurityAltIDSource_190.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_190);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_191;
      FIX::LegSecurityAltID LegSecurityAltID_191("STRING_1303517654");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_191);
      LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltID_191.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_191("STRING_2093256903");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_191);
      LegSecAltIDGrp_NoLegSecurityAltID_191.insert(LegSecurityAltIDSource_191.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_191);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_1;
    FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_1("JPY");
    noLegs_0_1.set(LegBenchmarkCurveCurrency_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurveCurrency_1.getString());
    FIX::LegBenchmarkCurveName LegBenchmarkCurveName_1("STRING_1420012744");
    noLegs_0_1.set(LegBenchmarkCurveName_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurveName_1.getString());
    FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_1("STRING_314547214");
    noLegs_0_1.set(LegBenchmarkCurvePoint_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkCurvePoint_1.getString());
    FIX::LegBenchmarkPrice LegBenchmarkPrice_1;
    LegBenchmarkPrice_1.setString("13023556");
    noLegs_0_1.set(LegBenchmarkPrice_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkPrice_1.getString());
    FIX::LegBenchmarkPriceType LegBenchmarkPriceType_1(6147814);
    noLegs_0_1.set(LegBenchmarkPriceType_1);
    LegBenchmarkCurveData_1.insert(LegBenchmarkPriceType_1.getString());
    all_values.push_back(LegBenchmarkCurveData_1);

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_25;
      FIX::LegStipulationType LegStipulationType_25("STRING_1698045564");
      noLegStipulations_1_1_0.set(LegStipulationType_25);
      LegStipulations_NoLegStipulations_25.insert(LegStipulationType_25.getString());
      FIX::LegStipulationValue LegStipulationValue_25("STRING_946628165");
      noLegStipulations_1_1_0.set(LegStipulationValue_25);
      LegStipulations_NoLegStipulations_25.insert(LegStipulationValue_25.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_25);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_26;
      FIX::LegStipulationType LegStipulationType_26("STRING_28527063");
      noLegStipulations_1_1_1.set(LegStipulationType_26);
      LegStipulations_NoLegStipulations_26.insert(LegStipulationType_26.getString());
      FIX::LegStipulationValue LegStipulationValue_26("STRING_1907150515");
      noLegStipulations_1_1_1.set(LegStipulationValue_26);
      LegStipulations_NoLegStipulations_26.insert(LegStipulationValue_26.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_26);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_27;
      FIX::LegStipulationType LegStipulationType_27("STRING_42703136");
      noLegStipulations_1_1_2.set(LegStipulationType_27);
      LegStipulations_NoLegStipulations_27.insert(LegStipulationType_27.getString());
      FIX::LegStipulationValue LegStipulationValue_27("STRING_632552064");
      noLegStipulations_1_1_2.set(LegStipulationValue_27);
      LegStipulations_NoLegStipulations_27.insert(LegStipulationValue_27.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_27);

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_95;
      FIX::NestedPartyID NestedPartyID_95("STRING_476516326");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyID_95.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_95('2');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyIDSource_95.getString());
      FIX::NestedPartyRole NestedPartyRole_95(88590025);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyRole_95.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_95);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_185;
        FIX::NestedPartySubID NestedPartySubID_185("STRING_1673404593");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_185);
        NstdPtysSubGrp_NoNestedPartySubIDs_185.insert(NestedPartySubID_185.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_185(926431431);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_185);
        NstdPtysSubGrp_NoNestedPartySubIDs_185.insert(NestedPartySubIDType_185.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_185);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_186;
        FIX::NestedPartySubID NestedPartySubID_186("STRING_46028306");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_186);
        NstdPtysSubGrp_NoNestedPartySubIDs_186.insert(NestedPartySubID_186.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_186(1766266526);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_186);
        NstdPtysSubGrp_NoNestedPartySubIDs_186.insert(NestedPartySubIDType_186.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_186);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_187;
        FIX::NestedPartySubID NestedPartySubID_187("STRING_1578857677");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_187);
        NstdPtysSubGrp_NoNestedPartySubIDs_187.insert(NestedPartySubID_187.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_187(1736354957);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_187);
        NstdPtysSubGrp_NoNestedPartySubIDs_187.insert(NestedPartySubIDType_187.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_187);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_16;
  FIX::CashOrderQty CashOrderQty_16;
  CashOrderQty_16.setString("8560030");
  msg.set(CashOrderQty_16);
  OrderQtyData_16.insert(CashOrderQty_16.getString());
  FIX::OrderPercent OrderPercent_16;
  OrderPercent_16.setString("19.160000");
  msg.set(OrderPercent_16);
  OrderQtyData_16.insert(OrderPercent_16.getString());
  FIX::OrderQty OrderQty_27;
  OrderQty_27.setString("10590910");
  msg.set(OrderQty_27);
  OrderQtyData_16.insert(OrderQty_27.getString());
  FIX::RoundingDirection RoundingDirection_16('2');
  msg.set(RoundingDirection_16);
  OrderQtyData_16.insert(RoundingDirection_16.getString());
  FIX::RoundingModulus RoundingModulus_16;
  RoundingModulus_16.setString("16783664");
  msg.set(RoundingModulus_16);
  OrderQtyData_16.insert(RoundingModulus_16.getString());
  all_values.push_back(OrderQtyData_16);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_93;
    FIX::PartyID PartyID_93("STRING_1938005425");
    noPartyIDs_0_0.set(PartyID_93);
    Parties_NoPartyIDs_93.insert(PartyID_93.getString());
    FIX::PartyIDSource PartyIDSource_93('2');
    noPartyIDs_0_0.set(PartyIDSource_93);
    Parties_NoPartyIDs_93.insert(PartyIDSource_93.getString());
    FIX::PartyRole PartyRole_93(34);
    noPartyIDs_0_0.set(PartyRole_93);
    Parties_NoPartyIDs_93.insert(PartyRole_93.getString());
    all_values.push_back(Parties_NoPartyIDs_93);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_193;
      FIX::PartySubID PartySubID_193("STRING_318482344");
      noPartySubIDs_0_1_0.set(PartySubID_193);
      PtysSubGrp_NoPartySubIDs_193.insert(PartySubID_193.getString());
      FIX::PartySubIDType PartySubIDType_193(27);
      noPartySubIDs_0_1_0.set(PartySubIDType_193);
      PtysSubGrp_NoPartySubIDs_193.insert(PartySubIDType_193.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_193);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_94;
    FIX::PartyID PartyID_94("STRING_1216682335");
    noPartyIDs_0_1.set(PartyID_94);
    Parties_NoPartyIDs_94.insert(PartyID_94.getString());
    FIX::PartyIDSource PartyIDSource_94('F');
    noPartyIDs_0_1.set(PartyIDSource_94);
    Parties_NoPartyIDs_94.insert(PartyIDSource_94.getString());
    FIX::PartyRole PartyRole_94(39);
    noPartyIDs_0_1.set(PartyRole_94);
    Parties_NoPartyIDs_94.insert(PartyRole_94.getString());
    all_values.push_back(Parties_NoPartyIDs_94);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_194;
      FIX::PartySubID PartySubID_194("STRING_1180060663");
      noPartySubIDs_1_1_0.set(PartySubID_194);
      PtysSubGrp_NoPartySubIDs_194.insert(PartySubID_194.getString());
      FIX::PartySubIDType PartySubIDType_194(25);
      noPartySubIDs_1_1_0.set(PartySubIDType_194);
      PtysSubGrp_NoPartySubIDs_194.insert(PartySubIDType_194.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_194);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_195;
      FIX::PartySubID PartySubID_195("STRING_58529989");
      noPartySubIDs_1_1_1.set(PartySubID_195);
      PtysSubGrp_NoPartySubIDs_195.insert(PartySubID_195.getString());
      FIX::PartySubIDType PartySubIDType_195(14);
      noPartySubIDs_1_1_1.set(PartySubIDType_195);
      PtysSubGrp_NoPartySubIDs_195.insert(PartySubIDType_195.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_195);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_196;
      FIX::PartySubID PartySubID_196("STRING_1450914541");
      noPartySubIDs_1_1_2.set(PartySubID_196);
      PtysSubGrp_NoPartySubIDs_196.insert(PartySubID_196.getString());
      FIX::PartySubIDType PartySubIDType_196(24);
      noPartySubIDs_1_1_2.set(PartySubIDType_196);
      PtysSubGrp_NoPartySubIDs_196.insert(PartySubIDType_196.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_196);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
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
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_10;
    FIX::RateSource RateSource_16(1);
    noRateSources_0_0.set(RateSource_16);
    RateSource_NoRateSources_10.insert(RateSource_16.getString());
    FIX::RateSourceType RateSourceType_10(1);
    noRateSources_0_0.set(RateSourceType_10);
    RateSource_NoRateSources_10.insert(RateSourceType_10.getString());
    FIX::ReferencePage ReferencePage_10("STRING_1215904188");
    noRateSources_0_0.set(ReferencePage_10);
    RateSource_NoRateSources_10.insert(ReferencePage_10.getString());
    all_values.push_back(RateSource_NoRateSources_10);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_11;
    FIX::RateSource RateSource_17(2);
    noRateSources_0_1.set(RateSource_17);
    RateSource_NoRateSources_11.insert(RateSource_17.getString());
    FIX::RateSourceType RateSourceType_11(0);
    noRateSources_0_1.set(RateSourceType_11);
    RateSource_NoRateSources_11.insert(RateSourceType_11.getString());
    FIX::ReferencePage ReferencePage_11("STRING_2071907188");
    noRateSources_0_1.set(ReferencePage_11);
    RateSource_NoRateSources_11.insert(ReferencePage_11.getString());
    all_values.push_back(RateSource_NoRateSources_11);

    msg.addGroup(noRateSources_0_1);
  }
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_2;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_12;
    FIX::RateSource RateSource_18(2);
    noRateSources_0_2.set(RateSource_18);
    RateSource_NoRateSources_12.insert(RateSource_18.getString());
    FIX::RateSourceType RateSourceType_12(0);
    noRateSources_0_2.set(RateSourceType_12);
    RateSource_NoRateSources_12.insert(RateSourceType_12.getString());
    FIX::ReferencePage ReferencePage_12("STRING_1916655709");
    noRateSources_0_2.set(ReferencePage_12);
    RateSource_NoRateSources_12.insert(ReferencePage_12.getString());
    all_values.push_back(RateSource_NoRateSources_12);

    msg.addGroup(noRateSources_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_19;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_19("EUR");
  msg.set(BenchmarkCurveCurrency_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurveCurrency_19.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_19("STRING_MuniAAA");
  msg.set(BenchmarkCurveName_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurveName_19.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_19("STRING_938936267");
  msg.set(BenchmarkCurvePoint_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurvePoint_19.getString());
  FIX::BenchmarkPrice BenchmarkPrice_19;
  BenchmarkPrice_19.setString("17777485");
  msg.set(BenchmarkPrice_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkPrice_19.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_19(770228359);
  msg.set(BenchmarkPriceType_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkPriceType_19.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_19("STRING_1257418611");
  msg.set(BenchmarkSecurityID_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkSecurityID_19.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_19("STRING_530784700");
  msg.set(BenchmarkSecurityIDSource_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkSecurityIDSource_19.getString());
  FIX::Spread Spread_19;
  Spread_19.setString("19869106");
  msg.set(Spread_19);
  SpreadOrBenchmarkCurveData_19.insert(Spread_19.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_19);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_28;
    FIX::StipulationType StipulationType_28("STRING_MATURITY");
    noStipulations_0_0.set(StipulationType_28);
    Stipulations_NoStipulations_28.insert(StipulationType_28.getString());
    FIX::StipulationValue StipulationValue_28("STRING_2002737548");
    noStipulations_0_0.set(StipulationValue_28);
    Stipulations_NoStipulations_28.insert(StipulationValue_28.getString());
    all_values.push_back(Stipulations_NoStipulations_28);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_29;
    FIX::StipulationType StipulationType_29("STRING_PPL");
    noStipulations_0_1.set(StipulationType_29);
    Stipulations_NoStipulations_29.insert(StipulationType_29.getString());
    FIX::StipulationValue StipulationValue_29("STRING_1192615001");
    noStipulations_0_1.set(StipulationValue_29);
    Stipulations_NoStipulations_29.insert(StipulationValue_29.getString());
    all_values.push_back(Stipulations_NoStipulations_29);

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_91;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_91("DATA_1106658304");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_91);
    UnderlyingInstrument_91.insert(EncodedUnderlyingIssuer_91.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_91(496045894);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_91);
    UnderlyingInstrument_91.insert(EncodedUnderlyingIssuerLen_91.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_91("DATA_448830204");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_91);
    UnderlyingInstrument_91.insert(EncodedUnderlyingSecurityDesc_91.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_91(1030375021);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_91);
    UnderlyingInstrument_91.insert(EncodedUnderlyingSecurityDescLen_91.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_91;
    UnderlyingAdjustedQuantity_91.setString("20355504");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_91);
    UnderlyingInstrument_91.insert(UnderlyingAdjustedQuantity_91.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_91;
    UnderlyingAllocationPercent_91.setString("88.610000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_91);
    UnderlyingInstrument_91.insert(UnderlyingAllocationPercent_91.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_91;
    UnderlyingAttachmentPoint_91.setString("26.820000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_91);
    UnderlyingInstrument_91.insert(UnderlyingAttachmentPoint_91.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_91("STRING_206519162");
    noUnderlyings_0_0.set(UnderlyingCFICode_91);
    UnderlyingInstrument_91.insert(UnderlyingCFICode_91.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_91("STRING_888312177");
    noUnderlyings_0_0.set(UnderlyingCPProgram_91);
    UnderlyingInstrument_91.insert(UnderlyingCPProgram_91.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_91("STRING_1695916870");
    noUnderlyings_0_0.set(UnderlyingCPRegType_91);
    UnderlyingInstrument_91.insert(UnderlyingCPRegType_91.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_91;
    UnderlyingCapValue_91.setString("21038291");
    noUnderlyings_0_0.set(UnderlyingCapValue_91);
    UnderlyingInstrument_91.insert(UnderlyingCapValue_91.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_91;
    UnderlyingCashAmount_91.setString("17936804");
    noUnderlyings_0_0.set(UnderlyingCashAmount_91);
    UnderlyingInstrument_91.insert(UnderlyingCashAmount_91.getString());
    FIX::UnderlyingCashType UnderlyingCashType_91("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_91);
    UnderlyingInstrument_91.insert(UnderlyingCashType_91.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_91;
    UnderlyingContractMultiplier_91.setString("13604638");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_91);
    UnderlyingInstrument_91.insert(UnderlyingContractMultiplier_91.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_91(1610656134);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_91);
    UnderlyingInstrument_91.insert(UnderlyingContractMultiplierUnit_91.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_91("COUNTRY_1389512472");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_91);
    UnderlyingInstrument_91.insert(UnderlyingCountryOfIssue_91.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_91("LOCALMKTDATE_147981324");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_91);
    UnderlyingInstrument_91.insert(UnderlyingCouponPaymentDate_91.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_91;
    UnderlyingCouponRate_91.setString("68.850000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_91);
    UnderlyingInstrument_91.insert(UnderlyingCouponRate_91.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_91("STRING_949206310");
    noUnderlyings_0_0.set(UnderlyingCreditRating_91);
    UnderlyingInstrument_91.insert(UnderlyingCreditRating_91.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_91("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_91);
    UnderlyingInstrument_91.insert(UnderlyingCurrency_91.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_91;
    UnderlyingCurrentValue_91.setString("17194346");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_91);
    UnderlyingInstrument_91.insert(UnderlyingCurrentValue_91.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_91;
    UnderlyingDetachmentPoint_91.setString("25.540000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_91);
    UnderlyingInstrument_91.insert(UnderlyingDetachmentPoint_91.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_91;
    UnderlyingDirtyPrice_91.setString("18038064");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_91);
    UnderlyingInstrument_91.insert(UnderlyingDirtyPrice_91.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_91;
    UnderlyingEndPrice_91.setString("15588617");
    noUnderlyings_0_0.set(UnderlyingEndPrice_91);
    UnderlyingInstrument_91.insert(UnderlyingEndPrice_91.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_91;
    UnderlyingEndValue_91.setString("4583211");
    noUnderlyings_0_0.set(UnderlyingEndValue_91);
    UnderlyingInstrument_91.insert(UnderlyingEndValue_91.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_91(638189253);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_91);
    UnderlyingInstrument_91.insert(UnderlyingExerciseStyle_91.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_91;
    UnderlyingFXRate_91.setString("14141156");
    noUnderlyings_0_0.set(UnderlyingFXRate_91);
    UnderlyingInstrument_91.insert(UnderlyingFXRate_91.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_91('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_91);
    UnderlyingInstrument_91.insert(UnderlyingFXRateCalc_91.getString());
    FIX::UnderlyingFactor UnderlyingFactor_91;
    UnderlyingFactor_91.setString("18308042");
    noUnderlyings_0_0.set(UnderlyingFactor_91);
    UnderlyingInstrument_91.insert(UnderlyingFactor_91.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_91(1327899506);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_91);
    UnderlyingInstrument_91.insert(UnderlyingFlowScheduleType_91.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_91("STRING_859024998");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_91);
    UnderlyingInstrument_91.insert(UnderlyingInstrRegistry_91.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_91("LOCALMKTDATE_179366501");
    noUnderlyings_0_0.set(UnderlyingIssueDate_91);
    UnderlyingInstrument_91.insert(UnderlyingIssueDate_91.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_91("STRING_1776729710");
    noUnderlyings_0_0.set(UnderlyingIssuer_91);
    UnderlyingInstrument_91.insert(UnderlyingIssuer_91.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_91("STRING_1889400019");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_91);
    UnderlyingInstrument_91.insert(UnderlyingLocaleOfIssue_91.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_91("LOCALMKTDATE_67433314");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_91);
    UnderlyingInstrument_91.insert(UnderlyingMaturityDate_91.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_91("MONTHYEAR_1348544923");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_91);
    UnderlyingInstrument_91.insert(UnderlyingMaturityMonthYear_91.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_91("TZTIMEONLY_221929054");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_91);
    UnderlyingInstrument_91.insert(UnderlyingMaturityTime_91.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_91;
    UnderlyingNotionalPercentageOutstanding_91.setString("24.760000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_91);
    UnderlyingInstrument_91.insert(UnderlyingNotionalPercentageOutstanding_91.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_91('8');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_91);
    UnderlyingInstrument_91.insert(UnderlyingOptAttribute_91.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_91;
    UnderlyingOriginalNotionalPercentageOutstanding_91.setString("59.240000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_91);
    UnderlyingInstrument_91.insert(UnderlyingOriginalNotionalPercentageOutstanding_91.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_91("STRING_230298016");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_91);
    UnderlyingInstrument_91.insert(UnderlyingPriceUnitOfMeasure_91.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_91;
    UnderlyingPriceUnitOfMeasureQty_91.setString("18830539");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_91);
    UnderlyingInstrument_91.insert(UnderlyingPriceUnitOfMeasureQty_91.getString());
    FIX::UnderlyingProduct UnderlyingProduct_91(1390702687);
    noUnderlyings_0_0.set(UnderlyingProduct_91);
    UnderlyingInstrument_91.insert(UnderlyingProduct_91.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_91(1590761851);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_91);
    UnderlyingInstrument_91.insert(UnderlyingPutOrCall_91.getString());
    FIX::UnderlyingPx UnderlyingPx_91;
    UnderlyingPx_91.setString("13462263");
    noUnderlyings_0_0.set(UnderlyingPx_91);
    UnderlyingInstrument_91.insert(UnderlyingPx_91.getString());
    FIX::UnderlyingQty UnderlyingQty_91;
    UnderlyingQty_91.setString("6327315");
    noUnderlyings_0_0.set(UnderlyingQty_91);
    UnderlyingInstrument_91.insert(UnderlyingQty_91.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_91("LOCALMKTDATE_1738743175");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_91);
    UnderlyingInstrument_91.insert(UnderlyingRedemptionDate_91.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_91("STRING_841499625");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_91);
    UnderlyingInstrument_91.insert(UnderlyingRepoCollateralSecurityType_91.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_91;
    UnderlyingRepurchaseRate_91.setString("78.210000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_91);
    UnderlyingInstrument_91.insert(UnderlyingRepurchaseRate_91.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_91(678177118);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_91);
    UnderlyingInstrument_91.insert(UnderlyingRepurchaseTerm_91.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_91("STRING_2114521409");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_91);
    UnderlyingInstrument_91.insert(UnderlyingRestructuringType_91.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_91("STRING_1153888843");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityDesc_91.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_91("EXCHANGE_875029672");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityExchange_91.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_91("STRING_1770844246");
    noUnderlyings_0_0.set(UnderlyingSecurityID_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityID_91.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_91("STRING_565266912");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityIDSource_91.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_91("STRING_1333350789");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_91);
    UnderlyingInstrument_91.insert(UnderlyingSecuritySubType_91.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_91("STRING_261549851");
    noUnderlyings_0_0.set(UnderlyingSecurityType_91);
    UnderlyingInstrument_91.insert(UnderlyingSecurityType_91.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_91("STRING_1979382529");
    noUnderlyings_0_0.set(UnderlyingSeniority_91);
    UnderlyingInstrument_91.insert(UnderlyingSeniority_91.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_91("STRING_1085717483");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_91);
    UnderlyingInstrument_91.insert(UnderlyingSettlMethod_91.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_91(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_91);
    UnderlyingInstrument_91.insert(UnderlyingSettlementType_91.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_91;
    UnderlyingStartValue_91.setString("11597983");
    noUnderlyings_0_0.set(UnderlyingStartValue_91);
    UnderlyingInstrument_91.insert(UnderlyingStartValue_91.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_91("STRING_1944742481");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_91);
    UnderlyingInstrument_91.insert(UnderlyingStateOrProvinceOfIssue_91.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_91("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_91);
    UnderlyingInstrument_91.insert(UnderlyingStrikeCurrency_91.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_91;
    UnderlyingStrikePrice_91.setString("16866588");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_91);
    UnderlyingInstrument_91.insert(UnderlyingStrikePrice_91.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_91("STRING_191670274");
    noUnderlyings_0_0.set(UnderlyingSymbol_91);
    UnderlyingInstrument_91.insert(UnderlyingSymbol_91.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_91("STRING_2137589373");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_91);
    UnderlyingInstrument_91.insert(UnderlyingSymbolSfx_91.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_91("STRING_1908587907");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_91);
    UnderlyingInstrument_91.insert(UnderlyingTimeUnit_91.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_91("STRING_465622750");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_91);
    UnderlyingInstrument_91.insert(UnderlyingUnitOfMeasure_91.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_91;
    UnderlyingUnitOfMeasureQty_91.setString("794791");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_91);
    UnderlyingInstrument_91.insert(UnderlyingUnitOfMeasureQty_91.getString());
    all_values.push_back(UnderlyingInstrument_91);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_182;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_182("STRING_695920766");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_182);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_182.insert(UnderlyingSecurityAltID_182.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_182("STRING_1962533079");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_182);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_182.insert(UnderlyingSecurityAltIDSource_182.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_166;
      FIX::UnderlyingStipType UnderlyingStipType_166("STRING_139198970");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_166);
      UnderlyingStipulations_NoUnderlyingStips_166.insert(UnderlyingStipType_166.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_166("STRING_1161275819");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_166);
      UnderlyingStipulations_NoUnderlyingStips_166.insert(UnderlyingStipValue_166.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_166);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_167;
      FIX::UnderlyingStipType UnderlyingStipType_167("STRING_1554900733");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_167);
      UnderlyingStipulations_NoUnderlyingStips_167.insert(UnderlyingStipType_167.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_167("STRING_1877942145");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_167);
      UnderlyingStipulations_NoUnderlyingStips_167.insert(UnderlyingStipValue_167.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_167);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_168;
      FIX::UnderlyingStipType UnderlyingStipType_168("STRING_2002775444");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_168);
      UnderlyingStipulations_NoUnderlyingStips_168.insert(UnderlyingStipType_168.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_168("STRING_989354907");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_168);
      UnderlyingStipulations_NoUnderlyingStips_168.insert(UnderlyingStipValue_168.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_168);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_192;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_192("STRING_1969813206");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_192);
      UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyID_192.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_192('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_192);
      UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyIDSource_192.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_192(1283665288);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_192);
      UndlyInstrumentParties_NoUndlyInstrumentParties_192.insert(UnderlyingInstrumentPartyRole_192.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_192);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_367("STRING_561027015");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_367);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367.insert(UnderlyingInstrumentPartySubID_367.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_367(469532429);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_367);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367.insert(UnderlyingInstrumentPartySubIDType_367.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_368("STRING_1854723655");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_368);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368.insert(UnderlyingInstrumentPartySubID_368.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_368(392925896);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_368);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368.insert(UnderlyingInstrumentPartySubIDType_368.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_369("STRING_1555249912");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_369);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369.insert(UnderlyingInstrumentPartySubID_369.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_369(1799594114);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_369);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369.insert(UnderlyingInstrumentPartySubIDType_369.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_14;
  FIX::Yield Yield_14;
  Yield_14.setString("42.840000");
  msg.set(Yield_14);
  YieldData_14.insert(Yield_14.getString());
  FIX::YieldCalcDate YieldCalcDate_14("LOCALMKTDATE_1352508746");
  msg.set(YieldCalcDate_14);
  YieldData_14.insert(YieldCalcDate_14.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_14("LOCALMKTDATE_1923831074");
  msg.set(YieldRedemptionDate_14);
  YieldData_14.insert(YieldRedemptionDate_14.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_14;
  YieldRedemptionPrice_14.setString("1942850");
  msg.set(YieldRedemptionPrice_14);
  YieldData_14.insert(YieldRedemptionPrice_14.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_14(891683951);
  msg.set(YieldRedemptionPriceType_14);
  YieldData_14.insert(YieldRedemptionPriceType_14.getString());
  FIX::YieldType YieldType_14("STRING_TENDER");
  msg.set(YieldType_14);
  YieldData_14.insert(YieldType_14.getString());
  all_values.push_back(YieldData_14);


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
