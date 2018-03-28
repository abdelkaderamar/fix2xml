#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListUpdateReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityListUpdateReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_23("LOCALMKTDATE_1267919882");
  msg.set(ClearingBusinessDate_23);
  SecurityListUpdateReport_0.insert(ClearingBusinessDate_23.getString());
  FIX::CorporateAction CorporateAction_9("MULTIPLECHARVALUE_N");
  msg.set(CorporateAction_9);
  SecurityListUpdateReport_0.insert(CorporateAction_9.getString());
  FIX::EncodedSecurityListDesc EncodedSecurityListDesc_1("DATA_1796124196");
  msg.set(EncodedSecurityListDesc_1);
  FIX::EncodedSecurityListDescLen EncodedSecurityListDescLen_1(913527972);
  msg.set(EncodedSecurityListDescLen_1);
  FIX::LastFragment LastFragment_15(true);
  msg.set(LastFragment_15);
  SecurityListUpdateReport_0.insert(LastFragment_15.getString());
  FIX::MarketID MarketID_18("EXCHANGE_2145707178");
  msg.set(MarketID_18);
  SecurityListUpdateReport_0.insert(MarketID_18.getString());
  FIX::MarketSegmentID MarketSegmentID_18("STRING_101029082");
  msg.set(MarketSegmentID_18);
  SecurityListUpdateReport_0.insert(MarketSegmentID_18.getString());
  FIX::SecurityListDesc SecurityListDesc_1("STRING_1147665826");
  msg.set(SecurityListDesc_1);
  SecurityListUpdateReport_0.insert(SecurityListDesc_1.getString());
  FIX::SecurityListID SecurityListID_2("STRING_400183223");
  msg.set(SecurityListID_2);
  SecurityListUpdateReport_0.insert(SecurityListID_2.getString());
  FIX::SecurityListRefID SecurityListRefID_1("STRING_904946729");
  msg.set(SecurityListRefID_1);
  SecurityListUpdateReport_0.insert(SecurityListRefID_1.getString());
  FIX::SecurityListType SecurityListType_2(1);
  msg.set(SecurityListType_2);
  SecurityListUpdateReport_0.insert(SecurityListType_2.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_2(2);
  msg.set(SecurityListTypeSource_2);
  SecurityListUpdateReport_0.insert(SecurityListTypeSource_2.getString());
  FIX::SecurityReportID SecurityReportID_4(805802296);
  msg.set(SecurityReportID_4);
  SecurityListUpdateReport_0.insert(SecurityReportID_4.getString());
  FIX::SecurityReqID SecurityReqID_8("STRING_1829847691");
  msg.set(SecurityReqID_8);
  SecurityListUpdateReport_0.insert(SecurityReqID_8.getString());
  FIX::SecurityRequestResult SecurityRequestResult_3(1);
  msg.set(SecurityRequestResult_3);
  SecurityListUpdateReport_0.insert(SecurityRequestResult_3.getString());
  FIX::SecurityResponseID SecurityResponseID_5("STRING_986526946");
  msg.set(SecurityResponseID_5);
  SecurityListUpdateReport_0.insert(SecurityResponseID_5.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_2('A');
  msg.set(SecurityUpdateAction_2);
  SecurityListUpdateReport_0.insert(SecurityUpdateAction_2.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_4(275432753);
  msg.set(TotNoRelatedSym_4);
  SecurityListUpdateReport_0.insert(TotNoRelatedSym_4.getString());
  FIX::TransactTime TransactTime_63(FIX::UTCTIMESTAMP(13, 5, 29, 15, 12, 2003));
  msg.set(TransactTime_63);
  SecurityListUpdateReport_0.insert(TransactTime_63.getString());
  all_values.push_back(SecurityListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_15;
  FIX::ApplID ApplID_15("STRING_515970597");
  msg.set(ApplID_15);
  ApplicationSequenceControl_15.insert(ApplID_15.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_15(389501771);
  msg.set(ApplLastSeqNum_15);
  ApplicationSequenceControl_15.insert(ApplLastSeqNum_15.getString());
  FIX::ApplResendFlag ApplResendFlag_15(true);
  msg.set(ApplResendFlag_15);
  ApplicationSequenceControl_15.insert(ApplResendFlag_15.getString());
  FIX::ApplSeqNum ApplSeqNum_15(1829726638);
  msg.set(ApplSeqNum_15);
  ApplicationSequenceControl_15.insert(ApplSeqNum_15.getString());
  all_values.push_back(ApplicationSequenceControl_15);

  // SecLstUpdRelSymGrp
  // Group SecLstUpdRelSymGrp.NoRelatedSym
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_0;
    FIX::Currency Currency_64("CAN");
    noRelatedSym_0_0.set(Currency_64);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(Currency_64.getString());
    FIX::EncodedText EncodedText_80("DATA_911172687");
    noRelatedSym_0_0.set(EncodedText_80);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(EncodedText_80.getString());
    FIX::EncodedTextLen EncodedTextLen_80(1948727251);
    noRelatedSym_0_0.set(EncodedTextLen_80);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(EncodedTextLen_80.getString());
    FIX::ListUpdateAction ListUpdateAction_2('1');
    noRelatedSym_0_0.set(ListUpdateAction_2);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(ListUpdateAction_2.getString());
    FIX::RelSymTransactTime RelSymTransactTime_6(FIX::UTCTIMESTAMP(5, 7, 41, 25, 6, 2015));
    noRelatedSym_0_0.set(RelSymTransactTime_6);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(RelSymTransactTime_6.getString());
    FIX::Text Text_80("STRING_43721480");
    noRelatedSym_0_0.set(Text_80);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(Text_80.getString());
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_29;
    FIX::AgreementCurrency AgreementCurrency_29("GBP");
    noRelatedSym_0_0.set(AgreementCurrency_29);
    FinancingDetails_29.insert(AgreementCurrency_29.getString());
    FIX::AgreementDate AgreementDate_29("LOCALMKTDATE_1122565845");
    noRelatedSym_0_0.set(AgreementDate_29);
    FinancingDetails_29.insert(AgreementDate_29.getString());
    FIX::AgreementDesc AgreementDesc_29("STRING_367028604");
    noRelatedSym_0_0.set(AgreementDesc_29);
    FinancingDetails_29.insert(AgreementDesc_29.getString());
    FIX::AgreementID AgreementID_29("STRING_911966805");
    noRelatedSym_0_0.set(AgreementID_29);
    FinancingDetails_29.insert(AgreementID_29.getString());
    FIX::DeliveryType DeliveryType_29(2);
    noRelatedSym_0_0.set(DeliveryType_29);
    FinancingDetails_29.insert(DeliveryType_29.getString());
    FIX::EndDate EndDate_29("LOCALMKTDATE_423244821");
    noRelatedSym_0_0.set(EndDate_29);
    FinancingDetails_29.insert(EndDate_29.getString());
    FIX::MarginRatio MarginRatio_29;
    MarginRatio_29.setString("34.980000");
    noRelatedSym_0_0.set(MarginRatio_29);
    FinancingDetails_29.insert(MarginRatio_29.getString());
    FIX::StartDate StartDate_29("LOCALMKTDATE_1804592203");
    noRelatedSym_0_0.set(StartDate_29);
    FinancingDetails_29.insert(StartDate_29.getString());
    FIX::TerminationType TerminationType_29(4);
    noRelatedSym_0_0.set(TerminationType_29);
    FinancingDetails_29.insert(TerminationType_29.getString());
    all_values.push_back(FinancingDetails_29);

    // Instrument
    multiset<string> Instrument_84;
    FIX::AttachmentPoint AttachmentPoint_84;
    AttachmentPoint_84.setString("6.970000");
    noRelatedSym_0_0.set(AttachmentPoint_84);
    Instrument_84.insert(AttachmentPoint_84.getString());
    FIX::CFICode CFICode_84("STRING_944927410");
    noRelatedSym_0_0.set(CFICode_84);
    Instrument_84.insert(CFICode_84.getString());
    FIX::CPProgram CPProgram_84(1);
    noRelatedSym_0_0.set(CPProgram_84);
    Instrument_84.insert(CPProgram_84.getString());
    FIX::CPRegType CPRegType_84("STRING_891021295");
    noRelatedSym_0_0.set(CPRegType_84);
    Instrument_84.insert(CPRegType_84.getString());
    FIX::CapPrice CapPrice_84;
    CapPrice_84.setString("13344291");
    noRelatedSym_0_0.set(CapPrice_84);
    Instrument_84.insert(CapPrice_84.getString());
    FIX::ContractMultiplier ContractMultiplier_84;
    ContractMultiplier_84.setString("7529612");
    noRelatedSym_0_0.set(ContractMultiplier_84);
    Instrument_84.insert(ContractMultiplier_84.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_84(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_84);
    Instrument_84.insert(ContractMultiplierUnit_84.getString());
    FIX::ContractSettlMonth ContractSettlMonth_84("MONTHYEAR_1182934419");
    noRelatedSym_0_0.set(ContractSettlMonth_84);
    Instrument_84.insert(ContractSettlMonth_84.getString());
    FIX::CountryOfIssue CountryOfIssue_84("COUNTRY_905564343");
    noRelatedSym_0_0.set(CountryOfIssue_84);
    Instrument_84.insert(CountryOfIssue_84.getString());
    FIX::CouponPaymentDate CouponPaymentDate_84("LOCALMKTDATE_1523427158");
    noRelatedSym_0_0.set(CouponPaymentDate_84);
    Instrument_84.insert(CouponPaymentDate_84.getString());
    FIX::CouponRate CouponRate_84;
    CouponRate_84.setString("71.060000");
    noRelatedSym_0_0.set(CouponRate_84);
    Instrument_84.insert(CouponRate_84.getString());
    FIX::CreditRating CreditRating_84("STRING_706807946");
    noRelatedSym_0_0.set(CreditRating_84);
    Instrument_84.insert(CreditRating_84.getString());
    FIX::DatedDate DatedDate_84("LOCALMKTDATE_1239634355");
    noRelatedSym_0_0.set(DatedDate_84);
    Instrument_84.insert(DatedDate_84.getString());
    FIX::DetachmentPoint DetachmentPoint_84;
    DetachmentPoint_84.setString("42.410000");
    noRelatedSym_0_0.set(DetachmentPoint_84);
    Instrument_84.insert(DetachmentPoint_84.getString());
    FIX::EncodedIssuer EncodedIssuer_84("DATA_506275079");
    noRelatedSym_0_0.set(EncodedIssuer_84);
    Instrument_84.insert(EncodedIssuer_84.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_84(1056870635);
    noRelatedSym_0_0.set(EncodedIssuerLen_84);
    Instrument_84.insert(EncodedIssuerLen_84.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_84("DATA_2070947202");
    noRelatedSym_0_0.set(EncodedSecurityDesc_84);
    Instrument_84.insert(EncodedSecurityDesc_84.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_84(705925436);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_84);
    Instrument_84.insert(EncodedSecurityDescLen_84.getString());
    FIX::ExerciseStyle ExerciseStyle_84(1);
    noRelatedSym_0_0.set(ExerciseStyle_84);
    Instrument_84.insert(ExerciseStyle_84.getString());
    FIX::Factor Factor_84;
    Factor_84.setString("11828824");
    noRelatedSym_0_0.set(Factor_84);
    Instrument_84.insert(Factor_84.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_84(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_84);
    Instrument_84.insert(FlexProductEligibilityIndicator_84.getString());
    FIX::FlexibleIndicator FlexibleIndicator_84(false);
    noRelatedSym_0_0.set(FlexibleIndicator_84);
    Instrument_84.insert(FlexibleIndicator_84.getString());
    FIX::FloorPrice FloorPrice_84;
    FloorPrice_84.setString("21246652");
    noRelatedSym_0_0.set(FloorPrice_84);
    Instrument_84.insert(FloorPrice_84.getString());
    FIX::FlowScheduleType FlowScheduleType_84(1);
    noRelatedSym_0_0.set(FlowScheduleType_84);
    Instrument_84.insert(FlowScheduleType_84.getString());
    FIX::InstrRegistry InstrRegistry_84("STRING_1526583905");
    noRelatedSym_0_0.set(InstrRegistry_84);
    Instrument_84.insert(InstrRegistry_84.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_84('8');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_84);
    Instrument_84.insert(InstrmtAssignmentMethod_84.getString());
    FIX::InterestAccrualDate InterestAccrualDate_84("LOCALMKTDATE_1122727711");
    noRelatedSym_0_0.set(InterestAccrualDate_84);
    Instrument_84.insert(InterestAccrualDate_84.getString());
    FIX::IssueDate IssueDate_84("LOCALMKTDATE_1949828727");
    noRelatedSym_0_0.set(IssueDate_84);
    Instrument_84.insert(IssueDate_84.getString());
    FIX::Issuer Issuer_84("STRING_381268303");
    noRelatedSym_0_0.set(Issuer_84);
    Instrument_84.insert(Issuer_84.getString());
    FIX::ListMethod ListMethod_84(0);
    noRelatedSym_0_0.set(ListMethod_84);
    Instrument_84.insert(ListMethod_84.getString());
    FIX::LocaleOfIssue LocaleOfIssue_84("STRING_1179970090");
    noRelatedSym_0_0.set(LocaleOfIssue_84);
    Instrument_84.insert(LocaleOfIssue_84.getString());
    FIX::MaturityDate MaturityDate_84("LOCALMKTDATE_756319001");
    noRelatedSym_0_0.set(MaturityDate_84);
    Instrument_84.insert(MaturityDate_84.getString());
    FIX::MaturityMonthYear MaturityMonthYear_84("MONTHYEAR_1724763677");
    noRelatedSym_0_0.set(MaturityMonthYear_84);
    Instrument_84.insert(MaturityMonthYear_84.getString());
    FIX::MaturityTime MaturityTime_84("TZTIMEONLY_629924684");
    noRelatedSym_0_0.set(MaturityTime_84);
    Instrument_84.insert(MaturityTime_84.getString());
    FIX::MinPriceIncrement MinPriceIncrement_84;
    MinPriceIncrement_84.setString("16473402");
    noRelatedSym_0_0.set(MinPriceIncrement_84);
    Instrument_84.insert(MinPriceIncrement_84.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_84;
    MinPriceIncrementAmount_84.setString("9117092");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_84);
    Instrument_84.insert(MinPriceIncrementAmount_84.getString());
    FIX::NTPositionLimit NTPositionLimit_84(1382885972);
    noRelatedSym_0_0.set(NTPositionLimit_84);
    Instrument_84.insert(NTPositionLimit_84.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_84;
    NotionalPercentageOutstanding_84.setString("9.330000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_84);
    Instrument_84.insert(NotionalPercentageOutstanding_84.getString());
    FIX::OptAttribute OptAttribute_84('2');
    noRelatedSym_0_0.set(OptAttribute_84);
    Instrument_84.insert(OptAttribute_84.getString());
    FIX::OptPayoutAmount OptPayoutAmount_84;
    OptPayoutAmount_84.setString("1409666");
    noRelatedSym_0_0.set(OptPayoutAmount_84);
    Instrument_84.insert(OptPayoutAmount_84.getString());
    FIX::OptPayoutType OptPayoutType_84(2);
    noRelatedSym_0_0.set(OptPayoutType_84);
    Instrument_84.insert(OptPayoutType_84.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_84;
    OriginalNotionalPercentageOutstanding_84.setString("70.870000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_84);
    Instrument_84.insert(OriginalNotionalPercentageOutstanding_84.getString());
    FIX::Pool Pool_84("STRING_847774613");
    noRelatedSym_0_0.set(Pool_84);
    Instrument_84.insert(Pool_84.getString());
    FIX::PositionLimit PositionLimit_84(688698799);
    noRelatedSym_0_0.set(PositionLimit_84);
    Instrument_84.insert(PositionLimit_84.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_84("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_84);
    Instrument_84.insert(PriceQuoteMethod_84.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_84("STRING_1354049692");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_84);
    Instrument_84.insert(PriceUnitOfMeasure_84.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_84;
    PriceUnitOfMeasureQty_84.setString("17455694");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_84);
    Instrument_84.insert(PriceUnitOfMeasureQty_84.getString());
    FIX::Product Product_86(8);
    noRelatedSym_0_0.set(Product_86);
    Instrument_84.insert(Product_86.getString());
    FIX::ProductComplex ProductComplex_84("STRING_2059975129");
    noRelatedSym_0_0.set(ProductComplex_84);
    Instrument_84.insert(ProductComplex_84.getString());
    FIX::PutOrCall PutOrCall_84(0);
    noRelatedSym_0_0.set(PutOrCall_84);
    Instrument_84.insert(PutOrCall_84.getString());
    FIX::RedemptionDate RedemptionDate_84("LOCALMKTDATE_361339989");
    noRelatedSym_0_0.set(RedemptionDate_84);
    Instrument_84.insert(RedemptionDate_84.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_84("STRING_662138397");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_84);
    Instrument_84.insert(RepoCollateralSecurityType_84.getString());
    FIX::RepurchaseRate RepurchaseRate_84;
    RepurchaseRate_84.setString("10.840000");
    noRelatedSym_0_0.set(RepurchaseRate_84);
    Instrument_84.insert(RepurchaseRate_84.getString());
    FIX::RepurchaseTerm RepurchaseTerm_84(338521637);
    noRelatedSym_0_0.set(RepurchaseTerm_84);
    Instrument_84.insert(RepurchaseTerm_84.getString());
    FIX::RestructuringType RestructuringType_84("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_84);
    Instrument_84.insert(RestructuringType_84.getString());
    FIX::SecurityDesc SecurityDesc_84("STRING_1915794989");
    noRelatedSym_0_0.set(SecurityDesc_84);
    Instrument_84.insert(SecurityDesc_84.getString());
    FIX::SecurityExchange SecurityExchange_84("EXCHANGE_1227670090");
    noRelatedSym_0_0.set(SecurityExchange_84);
    Instrument_84.insert(SecurityExchange_84.getString());
    FIX::SecurityGroup SecurityGroup_84("STRING_1509595222");
    noRelatedSym_0_0.set(SecurityGroup_84);
    Instrument_84.insert(SecurityGroup_84.getString());
    FIX::SecurityID SecurityID_84("STRING_1718140068");
    noRelatedSym_0_0.set(SecurityID_84);
    Instrument_84.insert(SecurityID_84.getString());
    FIX::SecurityIDSource SecurityIDSource_84("STRING_8");
    noRelatedSym_0_0.set(SecurityIDSource_84);
    Instrument_84.insert(SecurityIDSource_84.getString());
    FIX::SecurityStatus SecurityStatus_84("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_84);
    Instrument_84.insert(SecurityStatus_84.getString());
    FIX::SecuritySubType SecuritySubType_85("STRING_750626510");
    noRelatedSym_0_0.set(SecuritySubType_85);
    Instrument_84.insert(SecuritySubType_85.getString());
    FIX::SecurityType SecurityType_86("STRING_PS");
    noRelatedSym_0_0.set(SecurityType_86);
    Instrument_84.insert(SecurityType_86.getString());
    FIX::Seniority Seniority_84("STRING_SB");
    noRelatedSym_0_0.set(Seniority_84);
    Instrument_84.insert(Seniority_84.getString());
    FIX::SettlMethod SettlMethod_84('C');
    noRelatedSym_0_0.set(SettlMethod_84);
    Instrument_84.insert(SettlMethod_84.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_84("STRING_1865114042");
    noRelatedSym_0_0.set(SettleOnOpenFlag_84);
    Instrument_84.insert(SettleOnOpenFlag_84.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_84("STRING_630937080");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_84);
    Instrument_84.insert(StateOrProvinceOfIssue_84.getString());
    FIX::StrikeCurrency StrikeCurrency_84("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_84);
    Instrument_84.insert(StrikeCurrency_84.getString());
    FIX::StrikeMultiplier StrikeMultiplier_84;
    StrikeMultiplier_84.setString("5780970");
    noRelatedSym_0_0.set(StrikeMultiplier_84);
    Instrument_84.insert(StrikeMultiplier_84.getString());
    FIX::StrikePrice StrikePrice_84;
    StrikePrice_84.setString("7569201");
    noRelatedSym_0_0.set(StrikePrice_84);
    Instrument_84.insert(StrikePrice_84.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_84(1);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_84);
    Instrument_84.insert(StrikePriceBoundaryMethod_84.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_84;
    StrikePriceBoundaryPrecision_84.setString("5.010000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_84);
    Instrument_84.insert(StrikePriceBoundaryPrecision_84.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_84(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_84);
    Instrument_84.insert(StrikePriceDeterminationMethod_84.getString());
    FIX::StrikeValue StrikeValue_84;
    StrikeValue_84.setString("20759982");
    noRelatedSym_0_0.set(StrikeValue_84);
    Instrument_84.insert(StrikeValue_84.getString());
    FIX::Symbol Symbol_84("STRING_1874358182");
    noRelatedSym_0_0.set(Symbol_84);
    Instrument_84.insert(Symbol_84.getString());
    FIX::SymbolSfx SymbolSfx_84("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_84);
    Instrument_84.insert(SymbolSfx_84.getString());
    FIX::TimeUnit TimeUnit_84("STRING_H");
    noRelatedSym_0_0.set(TimeUnit_84);
    Instrument_84.insert(TimeUnit_84.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_84(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_84);
    Instrument_84.insert(UnderlyingPriceDeterminationMethod_84.getString());
    FIX::UnitOfMeasure UnitOfMeasure_84("STRING_t");
    noRelatedSym_0_0.set(UnitOfMeasure_84);
    Instrument_84.insert(UnitOfMeasure_84.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_84;
    UnitOfMeasureQty_84.setString("9037397");
    noRelatedSym_0_0.set(UnitOfMeasureQty_84);
    Instrument_84.insert(UnitOfMeasureQty_84.getString());
    FIX::ValuationMethod ValuationMethod_84("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_84);
    Instrument_84.insert(ValuationMethod_84.getString());
    all_values.push_back(Instrument_84);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_157;
      FIX::ComplexEventCondition ComplexEventCondition_157(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventCondition_157.getString());
      FIX::ComplexEventPrice ComplexEventPrice_157;
      ComplexEventPrice_157.setString("17526773");
      noComplexEvents_0_1_0.set(ComplexEventPrice_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventPrice_157.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_157(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceBoundaryMethod_157.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_157;
      ComplexEventPriceBoundaryPrecision_157.setString("22.140000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceBoundaryPrecision_157.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_157(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceTimeType_157.getString());
      FIX::ComplexEventType ComplexEventType_157(3);
      noComplexEvents_0_1_0.set(ComplexEventType_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventType_157.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_157;
      ComplexOptPayoutAmount_157.setString("6319186");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexOptPayoutAmount_157.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_157);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_319;
        FIX::ComplexEventEndDate ComplexEventEndDate_319(FIX::UTCTIMESTAMP(17, 9, 38, 15, 4, 2002));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_319);
        ComplexEventDates_NoComplexEventDates_319.insert(ComplexEventEndDate_319.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_319(FIX::UTCTIMESTAMP(11, 32, 55, 27, 11, 2006));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_319);
        ComplexEventDates_NoComplexEventDates_319.insert(ComplexEventStartDate_319.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_319);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_642;
          FIX::ComplexEventEndTime ComplexEventEndTime_642(FIX::UTCTIMEONLY(13, 21, 56));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_642);
          ComplexEventTimes_NoComplexEventTimes_642.insert(ComplexEventEndTime_642.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_642(FIX::UTCTIMEONLY(21, 26, 18));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_642);
          ComplexEventTimes_NoComplexEventTimes_642.insert(ComplexEventStartTime_642.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_642);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_643;
          FIX::ComplexEventEndTime ComplexEventEndTime_643(FIX::UTCTIMEONLY(1, 51, 48));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_643);
          ComplexEventTimes_NoComplexEventTimes_643.insert(ComplexEventEndTime_643.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_643(FIX::UTCTIMEONLY(18, 54, 53));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_643);
          ComplexEventTimes_NoComplexEventTimes_643.insert(ComplexEventStartTime_643.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_643);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_644;
          FIX::ComplexEventEndTime ComplexEventEndTime_644(FIX::UTCTIMEONLY(23, 2, 8));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_644);
          ComplexEventTimes_NoComplexEventTimes_644.insert(ComplexEventEndTime_644.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_644(FIX::UTCTIMEONLY(17, 38, 53));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_644);
          ComplexEventTimes_NoComplexEventTimes_644.insert(ComplexEventStartTime_644.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_644);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_158;
      FIX::ComplexEventCondition ComplexEventCondition_158(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventCondition_158.getString());
      FIX::ComplexEventPrice ComplexEventPrice_158;
      ComplexEventPrice_158.setString("4942530");
      noComplexEvents_0_1_1.set(ComplexEventPrice_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPrice_158.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_158(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceBoundaryMethod_158.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_158;
      ComplexEventPriceBoundaryPrecision_158.setString("40.200000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceBoundaryPrecision_158.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_158(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceTimeType_158.getString());
      FIX::ComplexEventType ComplexEventType_158(3);
      noComplexEvents_0_1_1.set(ComplexEventType_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventType_158.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_158;
      ComplexOptPayoutAmount_158.setString("5195984");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexOptPayoutAmount_158.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_158);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_320;
        FIX::ComplexEventEndDate ComplexEventEndDate_320(FIX::UTCTIMESTAMP(8, 1, 24, 14, 5, 2001));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_320);
        ComplexEventDates_NoComplexEventDates_320.insert(ComplexEventEndDate_320.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_320(FIX::UTCTIMESTAMP(5, 26, 52, 4, 1, 2002));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_320);
        ComplexEventDates_NoComplexEventDates_320.insert(ComplexEventStartDate_320.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_320);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_645;
          FIX::ComplexEventEndTime ComplexEventEndTime_645(FIX::UTCTIMEONLY(14, 31, 26));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_645);
          ComplexEventTimes_NoComplexEventTimes_645.insert(ComplexEventEndTime_645.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_645(FIX::UTCTIMEONLY(16, 4, 46));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_645);
          ComplexEventTimes_NoComplexEventTimes_645.insert(ComplexEventStartTime_645.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_645);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_646;
          FIX::ComplexEventEndTime ComplexEventEndTime_646(FIX::UTCTIMEONLY(3, 18, 50));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_646);
          ComplexEventTimes_NoComplexEventTimes_646.insert(ComplexEventEndTime_646.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_646(FIX::UTCTIMEONLY(9, 25, 5));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_646);
          ComplexEventTimes_NoComplexEventTimes_646.insert(ComplexEventStartTime_646.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_646);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_321;
        FIX::ComplexEventEndDate ComplexEventEndDate_321(FIX::UTCTIMESTAMP(10, 59, 53, 24, 4, 2010));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_321);
        ComplexEventDates_NoComplexEventDates_321.insert(ComplexEventEndDate_321.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_321(FIX::UTCTIMESTAMP(12, 46, 0, 12, 11, 2002));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_321);
        ComplexEventDates_NoComplexEventDates_321.insert(ComplexEventStartDate_321.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_321);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_647;
          FIX::ComplexEventEndTime ComplexEventEndTime_647(FIX::UTCTIMEONLY(16, 44, 18));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_647);
          ComplexEventTimes_NoComplexEventTimes_647.insert(ComplexEventEndTime_647.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_647(FIX::UTCTIMEONLY(1, 14, 47));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_647);
          ComplexEventTimes_NoComplexEventTimes_647.insert(ComplexEventStartTime_647.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_647);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_159;
      FIX::ComplexEventCondition ComplexEventCondition_159(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventCondition_159.getString());
      FIX::ComplexEventPrice ComplexEventPrice_159;
      ComplexEventPrice_159.setString("7188402");
      noComplexEvents_0_1_2.set(ComplexEventPrice_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPrice_159.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_159(4);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceBoundaryMethod_159.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_159;
      ComplexEventPriceBoundaryPrecision_159.setString("41.520000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceBoundaryPrecision_159.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_159(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceTimeType_159.getString());
      FIX::ComplexEventType ComplexEventType_159(8);
      noComplexEvents_0_1_2.set(ComplexEventType_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventType_159.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_159;
      ComplexOptPayoutAmount_159.setString("10825770");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexOptPayoutAmount_159.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_159);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_322;
        FIX::ComplexEventEndDate ComplexEventEndDate_322(FIX::UTCTIMESTAMP(12, 11, 8, 16, 7, 2004));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_322);
        ComplexEventDates_NoComplexEventDates_322.insert(ComplexEventEndDate_322.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_322(FIX::UTCTIMESTAMP(6, 14, 32, 19, 1, 2004));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_322);
        ComplexEventDates_NoComplexEventDates_322.insert(ComplexEventStartDate_322.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_322);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_648;
          FIX::ComplexEventEndTime ComplexEventEndTime_648(FIX::UTCTIMEONLY(7, 5, 50));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_648);
          ComplexEventTimes_NoComplexEventTimes_648.insert(ComplexEventEndTime_648.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_648(FIX::UTCTIMEONLY(18, 57, 8));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_648);
          ComplexEventTimes_NoComplexEventTimes_648.insert(ComplexEventStartTime_648.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_648);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_649;
          FIX::ComplexEventEndTime ComplexEventEndTime_649(FIX::UTCTIMEONLY(19, 58, 25));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_649);
          ComplexEventTimes_NoComplexEventTimes_649.insert(ComplexEventEndTime_649.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_649(FIX::UTCTIMEONLY(5, 23, 29));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_649);
          ComplexEventTimes_NoComplexEventTimes_649.insert(ComplexEventStartTime_649.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_649);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_167;
      FIX::EventDate EventDate_167("LOCALMKTDATE_759466287");
      noEvents_0_1_0.set(EventDate_167);
      EvntGrp_NoEvents_167.insert(EventDate_167.getString());
      FIX::EventPx EventPx_167;
      EventPx_167.setString("21004202");
      noEvents_0_1_0.set(EventPx_167);
      EvntGrp_NoEvents_167.insert(EventPx_167.getString());
      FIX::EventText EventText_167("STRING_1211103069");
      noEvents_0_1_0.set(EventText_167);
      EvntGrp_NoEvents_167.insert(EventText_167.getString());
      FIX::EventTime EventTime_167(FIX::UTCTIMESTAMP(2, 37, 15, 1, 9, 2017));
      noEvents_0_1_0.set(EventTime_167);
      EvntGrp_NoEvents_167.insert(EventTime_167.getString());
      FIX::EventType EventType_167(13);
      noEvents_0_1_0.set(EventType_167);
      EvntGrp_NoEvents_167.insert(EventType_167.getString());
      all_values.push_back(EvntGrp_NoEvents_167);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_168;
      FIX::EventDate EventDate_168("LOCALMKTDATE_811273104");
      noEvents_0_1_1.set(EventDate_168);
      EvntGrp_NoEvents_168.insert(EventDate_168.getString());
      FIX::EventPx EventPx_168;
      EventPx_168.setString("12737983");
      noEvents_0_1_1.set(EventPx_168);
      EvntGrp_NoEvents_168.insert(EventPx_168.getString());
      FIX::EventText EventText_168("STRING_2023438800");
      noEvents_0_1_1.set(EventText_168);
      EvntGrp_NoEvents_168.insert(EventText_168.getString());
      FIX::EventTime EventTime_168(FIX::UTCTIMESTAMP(4, 57, 39, 13, 8, 2006));
      noEvents_0_1_1.set(EventTime_168);
      EvntGrp_NoEvents_168.insert(EventTime_168.getString());
      FIX::EventType EventType_168(10);
      noEvents_0_1_1.set(EventType_168);
      EvntGrp_NoEvents_168.insert(EventType_168.getString());
      all_values.push_back(EvntGrp_NoEvents_168);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_169;
      FIX::EventDate EventDate_169("LOCALMKTDATE_661107060");
      noEvents_0_1_2.set(EventDate_169);
      EvntGrp_NoEvents_169.insert(EventDate_169.getString());
      FIX::EventPx EventPx_169;
      EventPx_169.setString("15019957");
      noEvents_0_1_2.set(EventPx_169);
      EvntGrp_NoEvents_169.insert(EventPx_169.getString());
      FIX::EventText EventText_169("STRING_301456347");
      noEvents_0_1_2.set(EventText_169);
      EvntGrp_NoEvents_169.insert(EventText_169.getString());
      FIX::EventTime EventTime_169(FIX::UTCTIMESTAMP(17, 12, 40, 6, 9, 2017));
      noEvents_0_1_2.set(EventTime_169);
      EvntGrp_NoEvents_169.insert(EventTime_169.getString());
      FIX::EventType EventType_169(8);
      noEvents_0_1_2.set(EventType_169);
      EvntGrp_NoEvents_169.insert(EventType_169.getString());
      all_values.push_back(EvntGrp_NoEvents_169);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_171;
      FIX::InstrumentPartyID InstrumentPartyID_171("STRING_387965802");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_171);
      InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyID_171.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_171('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_171);
      InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyIDSource_171.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_171(829112211);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_171);
      InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyRole_171.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_171);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361;
        FIX::InstrumentPartySubID InstrumentPartySubID_361("STRING_1966155634");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_361);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361.insert(InstrumentPartySubID_361.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_361(1883260115);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_361);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361.insert(InstrumentPartySubIDType_361.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_187;
      FIX::SecurityAltID SecurityAltID_187("STRING_85102378");
      noSecurityAltID_0_1_0.set(SecurityAltID_187);
      SecAltIDGrp_NoSecurityAltID_187.insert(SecurityAltID_187.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_187("STRING_547049571");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_187);
      SecAltIDGrp_NoSecurityAltID_187.insert(SecurityAltIDSource_187.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_187);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_188;
      FIX::SecurityAltID SecurityAltID_188("STRING_714376953");
      noSecurityAltID_0_1_1.set(SecurityAltID_188);
      SecAltIDGrp_NoSecurityAltID_188.insert(SecurityAltID_188.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_188("STRING_2108541179");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_188);
      SecAltIDGrp_NoSecurityAltID_188.insert(SecurityAltIDSource_188.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_188);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_189;
      FIX::SecurityAltID SecurityAltID_189("STRING_1782509088");
      noSecurityAltID_0_1_2.set(SecurityAltID_189);
      SecAltIDGrp_NoSecurityAltID_189.insert(SecurityAltID_189.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_189("STRING_325245342");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_189);
      SecAltIDGrp_NoSecurityAltID_189.insert(SecurityAltIDSource_189.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_189);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_168;
    FIX::SecurityXML SecurityXML_169("XMLDATA_226783068");
    noRelatedSym_0_0.set(SecurityXML_169);
    FIX::SecurityXMLLen SecurityXMLLen_84(807308720);
    noRelatedSym_0_0.set(SecurityXMLLen_84);
    FIX::SecurityXMLSchema SecurityXMLSchema_84("STRING_434129291");
    noRelatedSym_0_0.set(SecurityXMLSchema_84);
    SecurityXML_168.insert(SecurityXMLSchema_84.getString());
    all_values.push_back(SecurityXML_168);

    // InstrumentExtension
    multiset<string> InstrumentExtension_14;
    FIX::DeliveryForm DeliveryForm_14(1);
    noRelatedSym_0_0.set(DeliveryForm_14);
    InstrumentExtension_14.insert(DeliveryForm_14.getString());
    FIX::PctAtRisk PctAtRisk_14;
    PctAtRisk_14.setString("62.480000");
    noRelatedSym_0_0.set(PctAtRisk_14);
    InstrumentExtension_14.insert(PctAtRisk_14.getString());
    all_values.push_back(InstrumentExtension_14);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_28;
      FIX::InstrAttribType InstrAttribType_28(27);
      noInstrAttrib_0_1_0.set(InstrAttribType_28);
      AttrbGrp_NoInstrAttrib_28.insert(InstrAttribType_28.getString());
      FIX::InstrAttribValue InstrAttribValue_28("STRING_65798308");
      noInstrAttrib_0_1_0.set(InstrAttribValue_28);
      AttrbGrp_NoInstrAttrib_28.insert(InstrAttribValue_28.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_28);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_29;
      FIX::InstrAttribType InstrAttribType_29(8);
      noInstrAttrib_0_1_1.set(InstrAttribType_29);
      AttrbGrp_NoInstrAttrib_29.insert(InstrAttribType_29.getString());
      FIX::InstrAttribValue InstrAttribValue_29("STRING_570634753");
      noInstrAttrib_0_1_1.set(InstrAttribValue_29);
      AttrbGrp_NoInstrAttrib_29.insert(InstrAttribValue_29.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_29);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_0;
      FIX::LegSettlType LegSettlType_27('9');
      noLegs_0_1_0.set(LegSettlType_27);
      SecLstUpdRelSymsLegGrp_NoLegs_0.insert(LegSettlType_27.getString());
      FIX::LegSwapType LegSwapType_27(2);
      noLegs_0_1_0.set(LegSwapType_27);
      SecLstUpdRelSymsLegGrp_NoLegs_0.insert(LegSwapType_27.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_134;
      FIX::EncodedLegIssuer EncodedLegIssuer_134("DATA_987978787");
      noLegs_0_1_0.set(EncodedLegIssuer_134);
      InstrumentLeg_134.insert(EncodedLegIssuer_134.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_134(814448311);
      noLegs_0_1_0.set(EncodedLegIssuerLen_134);
      InstrumentLeg_134.insert(EncodedLegIssuerLen_134.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_134("DATA_2103937312");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_134);
      InstrumentLeg_134.insert(EncodedLegSecurityDesc_134.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_134(1538993354);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_134);
      InstrumentLeg_134.insert(EncodedLegSecurityDescLen_134.getString());
      FIX::LegCFICode LegCFICode_134("STRING_1862861993");
      noLegs_0_1_0.set(LegCFICode_134);
      InstrumentLeg_134.insert(LegCFICode_134.getString());
      FIX::LegContractMultiplier LegContractMultiplier_134;
      LegContractMultiplier_134.setString("3444194");
      noLegs_0_1_0.set(LegContractMultiplier_134);
      InstrumentLeg_134.insert(LegContractMultiplier_134.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_134(966601156);
      noLegs_0_1_0.set(LegContractMultiplierUnit_134);
      InstrumentLeg_134.insert(LegContractMultiplierUnit_134.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_134("MONTHYEAR_544490556");
      noLegs_0_1_0.set(LegContractSettlMonth_134);
      InstrumentLeg_134.insert(LegContractSettlMonth_134.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_134("COUNTRY_1181005943");
      noLegs_0_1_0.set(LegCountryOfIssue_134);
      InstrumentLeg_134.insert(LegCountryOfIssue_134.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_134("LOCALMKTDATE_785273142");
      noLegs_0_1_0.set(LegCouponPaymentDate_134);
      InstrumentLeg_134.insert(LegCouponPaymentDate_134.getString());
      FIX::LegCouponRate LegCouponRate_134;
      LegCouponRate_134.setString("70.230000");
      noLegs_0_1_0.set(LegCouponRate_134);
      InstrumentLeg_134.insert(LegCouponRate_134.getString());
      FIX::LegCreditRating LegCreditRating_134("STRING_621584579");
      noLegs_0_1_0.set(LegCreditRating_134);
      InstrumentLeg_134.insert(LegCreditRating_134.getString());
      FIX::LegCurrency LegCurrency_134("USD");
      noLegs_0_1_0.set(LegCurrency_134);
      InstrumentLeg_134.insert(LegCurrency_134.getString());
      FIX::LegDatedDate LegDatedDate_134("LOCALMKTDATE_1335961532");
      noLegs_0_1_0.set(LegDatedDate_134);
      InstrumentLeg_134.insert(LegDatedDate_134.getString());
      FIX::LegExerciseStyle LegExerciseStyle_134(831433052);
      noLegs_0_1_0.set(LegExerciseStyle_134);
      InstrumentLeg_134.insert(LegExerciseStyle_134.getString());
      FIX::LegFactor LegFactor_134;
      LegFactor_134.setString("4623420");
      noLegs_0_1_0.set(LegFactor_134);
      InstrumentLeg_134.insert(LegFactor_134.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_134(1661206874);
      noLegs_0_1_0.set(LegFlowScheduleType_134);
      InstrumentLeg_134.insert(LegFlowScheduleType_134.getString());
      FIX::LegInstrRegistry LegInstrRegistry_134("STRING_1058216120");
      noLegs_0_1_0.set(LegInstrRegistry_134);
      InstrumentLeg_134.insert(LegInstrRegistry_134.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_134("LOCALMKTDATE_1269650755");
      noLegs_0_1_0.set(LegInterestAccrualDate_134);
      InstrumentLeg_134.insert(LegInterestAccrualDate_134.getString());
      FIX::LegIssueDate LegIssueDate_134("LOCALMKTDATE_2095336165");
      noLegs_0_1_0.set(LegIssueDate_134);
      InstrumentLeg_134.insert(LegIssueDate_134.getString());
      FIX::LegIssuer LegIssuer_134("STRING_1521890656");
      noLegs_0_1_0.set(LegIssuer_134);
      InstrumentLeg_134.insert(LegIssuer_134.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_134("STRING_1980937003");
      noLegs_0_1_0.set(LegLocaleOfIssue_134);
      InstrumentLeg_134.insert(LegLocaleOfIssue_134.getString());
      FIX::LegMaturityDate LegMaturityDate_134("LOCALMKTDATE_446123157");
      noLegs_0_1_0.set(LegMaturityDate_134);
      InstrumentLeg_134.insert(LegMaturityDate_134.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_134("MONTHYEAR_499188604");
      noLegs_0_1_0.set(LegMaturityMonthYear_134);
      InstrumentLeg_134.insert(LegMaturityMonthYear_134.getString());
      FIX::LegMaturityTime LegMaturityTime_134("TZTIMEONLY_2046735311");
      noLegs_0_1_0.set(LegMaturityTime_134);
      InstrumentLeg_134.insert(LegMaturityTime_134.getString());
      FIX::LegOptAttribute LegOptAttribute_134('1');
      noLegs_0_1_0.set(LegOptAttribute_134);
      InstrumentLeg_134.insert(LegOptAttribute_134.getString());
      FIX::LegOptionRatio LegOptionRatio_134;
      LegOptionRatio_134.setString("10698233");
      noLegs_0_1_0.set(LegOptionRatio_134);
      InstrumentLeg_134.insert(LegOptionRatio_134.getString());
      FIX::LegPool LegPool_134("STRING_289152516");
      noLegs_0_1_0.set(LegPool_134);
      InstrumentLeg_134.insert(LegPool_134.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_134("STRING_75504195");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_134);
      InstrumentLeg_134.insert(LegPriceUnitOfMeasure_134.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_134;
      LegPriceUnitOfMeasureQty_134.setString("9536344");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_134);
      InstrumentLeg_134.insert(LegPriceUnitOfMeasureQty_134.getString());
      FIX::LegProduct LegProduct_134(1277131304);
      noLegs_0_1_0.set(LegProduct_134);
      InstrumentLeg_134.insert(LegProduct_134.getString());
      FIX::LegPutOrCall LegPutOrCall_134(889952507);
      noLegs_0_1_0.set(LegPutOrCall_134);
      InstrumentLeg_134.insert(LegPutOrCall_134.getString());
      FIX::LegRatioQty LegRatioQty_134;
      LegRatioQty_134.setString("9100880");
      noLegs_0_1_0.set(LegRatioQty_134);
      InstrumentLeg_134.insert(LegRatioQty_134.getString());
      FIX::LegRedemptionDate LegRedemptionDate_134("LOCALMKTDATE_668641010");
      noLegs_0_1_0.set(LegRedemptionDate_134);
      InstrumentLeg_134.insert(LegRedemptionDate_134.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_134("STRING_605330852");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_134);
      InstrumentLeg_134.insert(LegRepoCollateralSecurityType_134.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_134;
      LegRepurchaseRate_134.setString("75.520000");
      noLegs_0_1_0.set(LegRepurchaseRate_134);
      InstrumentLeg_134.insert(LegRepurchaseRate_134.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_134(1635242166);
      noLegs_0_1_0.set(LegRepurchaseTerm_134);
      InstrumentLeg_134.insert(LegRepurchaseTerm_134.getString());
      FIX::LegSecurityDesc LegSecurityDesc_134("STRING_1149821408");
      noLegs_0_1_0.set(LegSecurityDesc_134);
      InstrumentLeg_134.insert(LegSecurityDesc_134.getString());
      FIX::LegSecurityExchange LegSecurityExchange_134("EXCHANGE_288029847");
      noLegs_0_1_0.set(LegSecurityExchange_134);
      InstrumentLeg_134.insert(LegSecurityExchange_134.getString());
      FIX::LegSecurityID LegSecurityID_134("STRING_273031661");
      noLegs_0_1_0.set(LegSecurityID_134);
      InstrumentLeg_134.insert(LegSecurityID_134.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_134("STRING_1430088431");
      noLegs_0_1_0.set(LegSecurityIDSource_134);
      InstrumentLeg_134.insert(LegSecurityIDSource_134.getString());
      FIX::LegSecuritySubType LegSecuritySubType_134("STRING_909614426");
      noLegs_0_1_0.set(LegSecuritySubType_134);
      InstrumentLeg_134.insert(LegSecuritySubType_134.getString());
      FIX::LegSecurityType LegSecurityType_134("STRING_1143407182");
      noLegs_0_1_0.set(LegSecurityType_134);
      InstrumentLeg_134.insert(LegSecurityType_134.getString());
      FIX::LegSide LegSide_134('1');
      noLegs_0_1_0.set(LegSide_134);
      InstrumentLeg_134.insert(LegSide_134.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_134("STRING_98092311");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_134);
      InstrumentLeg_134.insert(LegStateOrProvinceOfIssue_134.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_134("GBP");
      noLegs_0_1_0.set(LegStrikeCurrency_134);
      InstrumentLeg_134.insert(LegStrikeCurrency_134.getString());
      FIX::LegStrikePrice LegStrikePrice_134;
      LegStrikePrice_134.setString("17592991");
      noLegs_0_1_0.set(LegStrikePrice_134);
      InstrumentLeg_134.insert(LegStrikePrice_134.getString());
      FIX::LegSymbol LegSymbol_134("STRING_885572706");
      noLegs_0_1_0.set(LegSymbol_134);
      InstrumentLeg_134.insert(LegSymbol_134.getString());
      FIX::LegSymbolSfx LegSymbolSfx_134("STRING_1841914167");
      noLegs_0_1_0.set(LegSymbolSfx_134);
      InstrumentLeg_134.insert(LegSymbolSfx_134.getString());
      FIX::LegTimeUnit LegTimeUnit_134("STRING_1707151703");
      noLegs_0_1_0.set(LegTimeUnit_134);
      InstrumentLeg_134.insert(LegTimeUnit_134.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_134("STRING_259979715");
      noLegs_0_1_0.set(LegUnitOfMeasure_134);
      InstrumentLeg_134.insert(LegUnitOfMeasure_134.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_134;
      LegUnitOfMeasureQty_134.setString("16753675");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_134);
      InstrumentLeg_134.insert(LegUnitOfMeasureQty_134.getString());
      all_values.push_back(InstrumentLeg_134);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_261;
        FIX::LegSecurityAltID LegSecurityAltID_261("STRING_759168319");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_261);
        LegSecAltIDGrp_NoLegSecurityAltID_261.insert(LegSecurityAltID_261.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_261("STRING_1574619186");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_261);
        LegSecAltIDGrp_NoLegSecurityAltID_261.insert(LegSecurityAltIDSource_261.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_261);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_15;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_15("EUR");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurveCurrency_15.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_15("STRING_1863771703");
      noLegs_0_1_0.set(LegBenchmarkCurveName_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurveName_15.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_15("STRING_1327145552");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurvePoint_15.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_15;
      LegBenchmarkPrice_15.setString("6351424");
      noLegs_0_1_0.set(LegBenchmarkPrice_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkPrice_15.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_15(993419359);
      noLegs_0_1_0.set(LegBenchmarkPriceType_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkPriceType_15.getString());
      all_values.push_back(LegBenchmarkCurveData_15);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_56;
        FIX::LegStipulationType LegStipulationType_56("STRING_1545230538");
        noLegStipulations_0_0_2_0.set(LegStipulationType_56);
        LegStipulations_NoLegStipulations_56.insert(LegStipulationType_56.getString());
        FIX::LegStipulationValue LegStipulationValue_56("STRING_1662060369");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_56);
        LegStipulations_NoLegStipulations_56.insert(LegStipulationValue_56.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_56);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_57;
        FIX::LegStipulationType LegStipulationType_57("STRING_674945263");
        noLegStipulations_0_0_2_1.set(LegStipulationType_57);
        LegStipulations_NoLegStipulations_57.insert(LegStipulationType_57.getString());
        FIX::LegStipulationValue LegStipulationValue_57("STRING_652254442");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_57);
        LegStipulations_NoLegStipulations_57.insert(LegStipulationValue_57.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_57);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_58;
        FIX::LegStipulationType LegStipulationType_58("STRING_1149818888");
        noLegStipulations_0_0_2_2.set(LegStipulationType_58);
        LegStipulations_NoLegStipulations_58.insert(LegStipulationType_58.getString());
        FIX::LegStipulationValue LegStipulationValue_58("STRING_1824766671");
        noLegStipulations_0_0_2_2.set(LegStipulationValue_58);
        LegStipulations_NoLegStipulations_58.insert(LegStipulationValue_58.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_58);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_9;
    FIX::ExpirationCycle ExpirationCycle_10(2);
    noRelatedSym_0_0.set(ExpirationCycle_10);
    BaseTradingRules_9.insert(ExpirationCycle_10.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_9(1);
    noRelatedSym_0_0.set(ImpliedMarketIndicator_9);
    BaseTradingRules_9.insert(ImpliedMarketIndicator_9.getString());
    FIX::MaxPriceVariation MaxPriceVariation_9;
    MaxPriceVariation_9.setString("11073714");
    noRelatedSym_0_0.set(MaxPriceVariation_9);
    BaseTradingRules_9.insert(MaxPriceVariation_9.getString());
    FIX::MaxTradeVol MaxTradeVol_9;
    MaxTradeVol_9.setString("18498987");
    noRelatedSym_0_0.set(MaxTradeVol_9);
    BaseTradingRules_9.insert(MaxTradeVol_9.getString());
    FIX::MinTradeVol MinTradeVol_9;
    MinTradeVol_9.setString("4187740");
    noRelatedSym_0_0.set(MinTradeVol_9);
    BaseTradingRules_9.insert(MinTradeVol_9.getString());
    FIX::MultilegModel MultilegModel_11(1);
    noRelatedSym_0_0.set(MultilegModel_11);
    BaseTradingRules_9.insert(MultilegModel_11.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_11(1);
    noRelatedSym_0_0.set(MultilegPriceMethod_11);
    BaseTradingRules_9.insert(MultilegPriceMethod_11.getString());
    FIX::PriceType PriceType_40(2);
    noRelatedSym_0_0.set(PriceType_40);
    BaseTradingRules_9.insert(PriceType_40.getString());
    FIX::RoundLot RoundLot_9;
    RoundLot_9.setString("17895562");
    noRelatedSym_0_0.set(RoundLot_9);
    BaseTradingRules_9.insert(RoundLot_9.getString());
    FIX::TradingCurrency TradingCurrency_9("EUR");
    noRelatedSym_0_0.set(TradingCurrency_9);
    BaseTradingRules_9.insert(TradingCurrency_9.getString());
    all_values.push_back(BaseTradingRules_9);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_17;
      FIX::LotType LotType_20('1');
      noLotTypeRules_0_1_0.set(LotType_20);
      LotTypeRules_NoLotTypeRules_17.insert(LotType_20.getString());
      FIX::MinLotSize MinLotSize_17;
      MinLotSize_17.setString("13916830");
      noLotTypeRules_0_1_0.set(MinLotSize_17);
      LotTypeRules_NoLotTypeRules_17.insert(MinLotSize_17.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_17);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_18;
      FIX::LotType LotType_21('4');
      noLotTypeRules_0_1_1.set(LotType_21);
      LotTypeRules_NoLotTypeRules_18.insert(LotType_21.getString());
      FIX::MinLotSize MinLotSize_18;
      MinLotSize_18.setString("11252658");
      noLotTypeRules_0_1_1.set(MinLotSize_18);
      LotTypeRules_NoLotTypeRules_18.insert(MinLotSize_18.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_18);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_19;
      FIX::LotType LotType_22('3');
      noLotTypeRules_0_1_2.set(LotType_22);
      LotTypeRules_NoLotTypeRules_19.insert(LotType_22.getString());
      FIX::MinLotSize MinLotSize_19;
      MinLotSize_19.setString("4390061");
      noLotTypeRules_0_1_2.set(MinLotSize_19);
      LotTypeRules_NoLotTypeRules_19.insert(MinLotSize_19.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_19);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_9;
    FIX::HighLimitPrice HighLimitPrice_9;
    HighLimitPrice_9.setString("2294235");
    noRelatedSym_0_0.set(HighLimitPrice_9);
    PriceLimits_9.insert(HighLimitPrice_9.getString());
    FIX::LowLimitPrice LowLimitPrice_9;
    LowLimitPrice_9.setString("18323594");
    noRelatedSym_0_0.set(LowLimitPrice_9);
    PriceLimits_9.insert(LowLimitPrice_9.getString());
    FIX::PriceLimitType PriceLimitType_9(0);
    noRelatedSym_0_0.set(PriceLimitType_9);
    PriceLimits_9.insert(PriceLimitType_9.getString());
    FIX::TradingReferencePrice TradingReferencePrice_9;
    TradingReferencePrice_9.setString("15565690");
    noRelatedSym_0_0.set(TradingReferencePrice_9);
    PriceLimits_9.insert(TradingReferencePrice_9.getString());
    all_values.push_back(PriceLimits_9);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_16;
      FIX::EndTickPriceRange EndTickPriceRange_16;
      EndTickPriceRange_16.setString("11487135");
      noTickRules_0_1_0.set(EndTickPriceRange_16);
      TickRules_NoTickRules_16.insert(EndTickPriceRange_16.getString());
      FIX::StartTickPriceRange StartTickPriceRange_16;
      StartTickPriceRange_16.setString("16261835");
      noTickRules_0_1_0.set(StartTickPriceRange_16);
      TickRules_NoTickRules_16.insert(StartTickPriceRange_16.getString());
      FIX::TickIncrement TickIncrement_16;
      TickIncrement_16.setString("18652487");
      noTickRules_0_1_0.set(TickIncrement_16);
      TickRules_NoTickRules_16.insert(TickIncrement_16.getString());
      FIX::TickRuleType TickRuleType_16(3);
      noTickRules_0_1_0.set(TickRuleType_16);
      TickRules_NoTickRules_16.insert(TickRuleType_16.getString());
      all_values.push_back(TickRules_NoTickRules_16);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_17;
      FIX::EndTickPriceRange EndTickPriceRange_17;
      EndTickPriceRange_17.setString("1536451");
      noTickRules_0_1_1.set(EndTickPriceRange_17);
      TickRules_NoTickRules_17.insert(EndTickPriceRange_17.getString());
      FIX::StartTickPriceRange StartTickPriceRange_17;
      StartTickPriceRange_17.setString("3700195");
      noTickRules_0_1_1.set(StartTickPriceRange_17);
      TickRules_NoTickRules_17.insert(StartTickPriceRange_17.getString());
      FIX::TickIncrement TickIncrement_17;
      TickIncrement_17.setString("18131092");
      noTickRules_0_1_1.set(TickIncrement_17);
      TickRules_NoTickRules_17.insert(TickIncrement_17.getString());
      FIX::TickRuleType TickRuleType_17(2);
      noTickRules_0_1_1.set(TickRuleType_17);
      TickRules_NoTickRules_17.insert(TickRuleType_17.getString());
      all_values.push_back(TickRules_NoTickRules_17);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_13;
      FIX::NestedInstrAttribType NestedInstrAttribType_13(1088476102);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_13);
      NestedInstrumentAttribute_NoNestedInstrAttrib_13.insert(NestedInstrAttribType_13.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_13("STRING_938299599");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_13);
      NestedInstrumentAttribute_NoNestedInstrAttrib_13.insert(NestedInstrAttribValue_13.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_13);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_13;
      FIX::TradingSessionID TradingSessionID_82("STRING_2");
      noTradingSessionRules_0_1_0.set(TradingSessionID_82);
      TradingSessionRulesGrp_NoTradingSessionRules_13.insert(TradingSessionID_82.getString());
      FIX::TradingSessionSubID TradingSessionSubID_82("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_82);
      TradingSessionRulesGrp_NoTradingSessionRules_13.insert(TradingSessionSubID_82.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_13);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_29;
        FIX::ExecInstValue ExecInstValue_29('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_29);
        ExecInstRules_NoExecInstRules_29.insert(ExecInstValue_29.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_29);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_30;
        FIX::ExecInstValue ExecInstValue_30('1');
        noExecInstRules_0_0_2_1.set(ExecInstValue_30);
        ExecInstRules_NoExecInstRules_30.insert(ExecInstValue_30.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_30);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_31;
        FIX::ExecInstValue ExecInstValue_31('2');
        noExecInstRules_0_0_2_2.set(ExecInstValue_31);
        ExecInstRules_NoExecInstRules_31.insert(ExecInstValue_31.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_31);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_27;
        FIX::MDBookType MDBookType_29(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_29);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MDBookType_29.getString());
        FIX::MDFeedType MDFeedType_29("STRING_1345023850");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_29);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MDFeedType_29.getString());
        FIX::MarketDepth MarketDepth_30(2129283672);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_30);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MarketDepth_30.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_27);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_28;
        FIX::MDBookType MDBookType_30(3);
        noMDFeedTypes_0_0_2_1.set(MDBookType_30);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MDBookType_30.getString());
        FIX::MDFeedType MDFeedType_30("STRING_322806034");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_30);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MDFeedType_30.getString());
        FIX::MarketDepth MarketDepth_31(2132651434);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_31);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MarketDepth_31.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_28);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_31;
        FIX::MatchAlgorithm MatchAlgorithm_31("STRING_552229576");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_31);
        MatchRules_NoMatchRules_31.insert(MatchAlgorithm_31.getString());
        FIX::MatchType MatchType_36("STRING_8");
        noMatchRules_0_0_2_0.set(MatchType_36);
        MatchRules_NoMatchRules_31.insert(MatchType_36.getString());
        all_values.push_back(MatchRules_NoMatchRules_31);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_32;
        FIX::MatchAlgorithm MatchAlgorithm_32("STRING_592855544");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_32);
        MatchRules_NoMatchRules_32.insert(MatchAlgorithm_32.getString());
        FIX::MatchType MatchType_37("STRING_5");
        noMatchRules_0_0_2_1.set(MatchType_37);
        MatchRules_NoMatchRules_32.insert(MatchType_37.getString());
        all_values.push_back(MatchRules_NoMatchRules_32);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_33;
        FIX::MatchAlgorithm MatchAlgorithm_33("STRING_2137545467");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_33);
        MatchRules_NoMatchRules_33.insert(MatchAlgorithm_33.getString());
        FIX::MatchType MatchType_38("STRING_M3");
        noMatchRules_0_0_2_2.set(MatchType_38);
        MatchRules_NoMatchRules_33.insert(MatchType_38.getString());
        all_values.push_back(MatchRules_NoMatchRules_33);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_34;
        FIX::OrdType OrdType_63('9');
        noOrdTypeRules_0_0_2_0.set(OrdType_63);
        OrdTypeRules_NoOrdTypeRules_34.insert(OrdType_63.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_34);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_35;
        FIX::OrdType OrdType_64('I');
        noOrdTypeRules_0_0_2_1.set(OrdType_64);
        OrdTypeRules_NoOrdTypeRules_35.insert(OrdType_64.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_35);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_36;
        FIX::OrdType OrdType_65('1');
        noOrdTypeRules_0_0_2_2.set(OrdType_65);
        OrdTypeRules_NoOrdTypeRules_36.insert(OrdType_65.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_36);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_28;
        FIX::TimeInForce TimeInForce_39('2');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_39);
        TimeInForceRules_NoTimeInForceRules_28.insert(TimeInForce_39.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_28);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_29;
        FIX::TimeInForce TimeInForce_40('3');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_40);
        TimeInForceRules_NoTimeInForceRules_29.insert(TimeInForce_40.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_29);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_14;
      FIX::TradingSessionID TradingSessionID_83("STRING_5");
      noTradingSessionRules_0_1_1.set(TradingSessionID_83);
      TradingSessionRulesGrp_NoTradingSessionRules_14.insert(TradingSessionID_83.getString());
      FIX::TradingSessionSubID TradingSessionSubID_83("STRING_4");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_83);
      TradingSessionRulesGrp_NoTradingSessionRules_14.insert(TradingSessionSubID_83.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_14);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_32;
        FIX::ExecInstValue ExecInstValue_32('2');
        noExecInstRules_0_1_2_0.set(ExecInstValue_32);
        ExecInstRules_NoExecInstRules_32.insert(ExecInstValue_32.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_32);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_33;
        FIX::ExecInstValue ExecInstValue_33('3');
        noExecInstRules_0_1_2_1.set(ExecInstValue_33);
        ExecInstRules_NoExecInstRules_33.insert(ExecInstValue_33.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_33);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_29;
        FIX::MDBookType MDBookType_31(1);
        noMDFeedTypes_0_1_2_0.set(MDBookType_31);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MDBookType_31.getString());
        FIX::MDFeedType MDFeedType_31("STRING_2124624847");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_31);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MDFeedType_31.getString());
        FIX::MarketDepth MarketDepth_32(21177906);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_32);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MarketDepth_32.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_29);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_34;
        FIX::MatchAlgorithm MatchAlgorithm_34("STRING_714741780");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_34);
        MatchRules_NoMatchRules_34.insert(MatchAlgorithm_34.getString());
        FIX::MatchType MatchType_39("STRING_A3");
        noMatchRules_0_1_2_0.set(MatchType_39);
        MatchRules_NoMatchRules_34.insert(MatchType_39.getString());
        all_values.push_back(MatchRules_NoMatchRules_34);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_35;
        FIX::MatchAlgorithm MatchAlgorithm_35("STRING_489701422");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_35);
        MatchRules_NoMatchRules_35.insert(MatchAlgorithm_35.getString());
        FIX::MatchType MatchType_40("STRING_M5");
        noMatchRules_0_1_2_1.set(MatchType_40);
        MatchRules_NoMatchRules_35.insert(MatchType_40.getString());
        all_values.push_back(MatchRules_NoMatchRules_35);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_36;
        FIX::MatchAlgorithm MatchAlgorithm_36("STRING_1153901184");
        noMatchRules_0_1_2_2.set(MatchAlgorithm_36);
        MatchRules_NoMatchRules_36.insert(MatchAlgorithm_36.getString());
        FIX::MatchType MatchType_41("STRING_S4");
        noMatchRules_0_1_2_2.set(MatchType_41);
        MatchRules_NoMatchRules_36.insert(MatchType_41.getString());
        all_values.push_back(MatchRules_NoMatchRules_36);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_37;
        FIX::OrdType OrdType_66('9');
        noOrdTypeRules_0_1_2_0.set(OrdType_66);
        OrdTypeRules_NoOrdTypeRules_37.insert(OrdType_66.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_37);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_30;
        FIX::TimeInForce TimeInForce_41('7');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_41);
        TimeInForceRules_NoTimeInForceRules_30.insert(TimeInForce_41.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_30);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_31;
        FIX::TimeInForce TimeInForce_42('3');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_42);
        TimeInForceRules_NoTimeInForceRules_31.insert(TimeInForce_42.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_31);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_15;
      FIX::TradingSessionID TradingSessionID_84("STRING_6");
      noTradingSessionRules_0_1_2.set(TradingSessionID_84);
      TradingSessionRulesGrp_NoTradingSessionRules_15.insert(TradingSessionID_84.getString());
      FIX::TradingSessionSubID TradingSessionSubID_84("STRING_4");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_84);
      TradingSessionRulesGrp_NoTradingSessionRules_15.insert(TradingSessionSubID_84.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_15);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_34;
        FIX::ExecInstValue ExecInstValue_34('7');
        noExecInstRules_0_2_2_0.set(ExecInstValue_34);
        ExecInstRules_NoExecInstRules_34.insert(ExecInstValue_34.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_34);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_35;
        FIX::ExecInstValue ExecInstValue_35('4');
        noExecInstRules_0_2_2_1.set(ExecInstValue_35);
        ExecInstRules_NoExecInstRules_35.insert(ExecInstValue_35.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_35);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_30;
        FIX::MDBookType MDBookType_32(2);
        noMDFeedTypes_0_2_2_0.set(MDBookType_32);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MDBookType_32.getString());
        FIX::MDFeedType MDFeedType_32("STRING_127488466");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_32);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MDFeedType_32.getString());
        FIX::MarketDepth MarketDepth_33(1958780684);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_33);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MarketDepth_33.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_30);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_37;
        FIX::MatchAlgorithm MatchAlgorithm_37("STRING_1515638858");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_37);
        MatchRules_NoMatchRules_37.insert(MatchAlgorithm_37.getString());
        FIX::MatchType MatchType_42("STRING_S3");
        noMatchRules_0_2_2_0.set(MatchType_42);
        MatchRules_NoMatchRules_37.insert(MatchType_42.getString());
        all_values.push_back(MatchRules_NoMatchRules_37);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_38;
        FIX::MatchAlgorithm MatchAlgorithm_38("STRING_147202824");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_38);
        MatchRules_NoMatchRules_38.insert(MatchAlgorithm_38.getString());
        FIX::MatchType MatchType_43("STRING_6");
        noMatchRules_0_2_2_1.set(MatchType_43);
        MatchRules_NoMatchRules_38.insert(MatchType_43.getString());
        all_values.push_back(MatchRules_NoMatchRules_38);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_38;
        FIX::OrdType OrdType_67('G');
        noOrdTypeRules_0_2_2_0.set(OrdType_67);
        OrdTypeRules_NoOrdTypeRules_38.insert(OrdType_67.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_38);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_39;
        FIX::OrdType OrdType_68('F');
        noOrdTypeRules_0_2_2_1.set(OrdType_68);
        OrdTypeRules_NoOrdTypeRules_39.insert(OrdType_68.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_39);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_40;
        FIX::OrdType OrdType_69('5');
        noOrdTypeRules_0_2_2_2.set(OrdType_69);
        OrdTypeRules_NoOrdTypeRules_40.insert(OrdType_69.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_40);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_32;
        FIX::TimeInForce TimeInForce_43('8');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_43);
        TimeInForceRules_NoTimeInForceRules_32.insert(TimeInForce_43.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_32);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_30;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_30("CHF");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurveCurrency_30.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_30("STRING_EUREPO");
    noRelatedSym_0_0.set(BenchmarkCurveName_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurveName_30.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_30("STRING_434959621");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurvePoint_30.getString());
    FIX::BenchmarkPrice BenchmarkPrice_30;
    BenchmarkPrice_30.setString("7011408");
    noRelatedSym_0_0.set(BenchmarkPrice_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkPrice_30.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_30(1135039330);
    noRelatedSym_0_0.set(BenchmarkPriceType_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkPriceType_30.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_30("STRING_1116669211");
    noRelatedSym_0_0.set(BenchmarkSecurityID_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkSecurityID_30.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_30("STRING_145119692");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkSecurityIDSource_30.getString());
    FIX::Spread Spread_30;
    Spread_30.setString("3522927");
    noRelatedSym_0_0.set(Spread_30);
    SpreadOrBenchmarkCurveData_30.insert(Spread_30.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_30);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_50;
      FIX::StipulationType StipulationType_50("STRING_CURRENCY");
      noStipulations_0_1_0.set(StipulationType_50);
      Stipulations_NoStipulations_50.insert(StipulationType_50.getString());
      FIX::StipulationValue StipulationValue_50("STRING_1678344770");
      noStipulations_0_1_0.set(StipulationValue_50);
      Stipulations_NoStipulations_50.insert(StipulationValue_50.getString());
      all_values.push_back(Stipulations_NoStipulations_50);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_51;
      FIX::StipulationType StipulationType_51("STRING_CUSTOMDATE");
      noStipulations_0_1_1.set(StipulationType_51);
      Stipulations_NoStipulations_51.insert(StipulationType_51.getString());
      FIX::StipulationValue StipulationValue_51("STRING_1960357614");
      noStipulations_0_1_1.set(StipulationValue_51);
      Stipulations_NoStipulations_51.insert(StipulationValue_51.getString());
      all_values.push_back(Stipulations_NoStipulations_51);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_14;
      FIX::EndStrikePxRange EndStrikePxRange_14;
      EndStrikePxRange_14.setString("18598793");
      noStrikeRules_0_1_0.set(EndStrikePxRange_14);
      StrikeRules_NoStrikeRules_14.insert(EndStrikePxRange_14.getString());
      FIX::StartStrikePxRange StartStrikePxRange_14;
      StartStrikePxRange_14.setString("18486532");
      noStrikeRules_0_1_0.set(StartStrikePxRange_14);
      StrikeRules_NoStrikeRules_14.insert(StartStrikePxRange_14.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_14(656654991);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeExerciseStyle_14.getString());
      FIX::StrikeIncrement StrikeIncrement_14;
      StrikeIncrement_14.setString("19873677");
      noStrikeRules_0_1_0.set(StrikeIncrement_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeIncrement_14.getString());
      FIX::StrikeRuleID StrikeRuleID_14("STRING_1659950332");
      noStrikeRules_0_1_0.set(StrikeRuleID_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeRuleID_14.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_14);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_27;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_27("MONTHYEAR_1355522981");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_27);
        MaturityRules_NoMaturityRules_27.insert(EndMaturityMonthYear_27.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_27(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearFormat_27.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_27(588172895);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearIncrement_27.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_27(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearIncrementUnits_27.getString());
        FIX::MaturityRuleID MaturityRuleID_27("STRING_1529259661");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityRuleID_27.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_27("MONTHYEAR_1106372246");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_27);
        MaturityRules_NoMaturityRules_27.insert(StartMaturityMonthYear_27.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_27);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_28;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_28("MONTHYEAR_1665216746");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_28);
        MaturityRules_NoMaturityRules_28.insert(EndMaturityMonthYear_28.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_28(0);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearFormat_28.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_28(1645749504);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearIncrement_28.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_28(1);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearIncrementUnits_28.getString());
        FIX::MaturityRuleID MaturityRuleID_28("STRING_291353514");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityRuleID_28.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_28("MONTHYEAR_1192989163");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_28);
        MaturityRules_NoMaturityRules_28.insert(StartMaturityMonthYear_28.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_28);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_29;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_29("MONTHYEAR_1820579070");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_29);
        MaturityRules_NoMaturityRules_29.insert(EndMaturityMonthYear_29.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_29(1);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearFormat_29.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_29(1894130007);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearIncrement_29.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_29(0);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearIncrementUnits_29.getString());
        FIX::MaturityRuleID MaturityRuleID_29("STRING_1842982346");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityRuleID_29.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_29("MONTHYEAR_2039249700");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_29);
        MaturityRules_NoMaturityRules_29.insert(StartMaturityMonthYear_29.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_29);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_15;
      FIX::EndStrikePxRange EndStrikePxRange_15;
      EndStrikePxRange_15.setString("11604274");
      noStrikeRules_0_1_1.set(EndStrikePxRange_15);
      StrikeRules_NoStrikeRules_15.insert(EndStrikePxRange_15.getString());
      FIX::StartStrikePxRange StartStrikePxRange_15;
      StartStrikePxRange_15.setString("11639210");
      noStrikeRules_0_1_1.set(StartStrikePxRange_15);
      StrikeRules_NoStrikeRules_15.insert(StartStrikePxRange_15.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_15(73720137);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeExerciseStyle_15.getString());
      FIX::StrikeIncrement StrikeIncrement_15;
      StrikeIncrement_15.setString("6912885");
      noStrikeRules_0_1_1.set(StrikeIncrement_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeIncrement_15.getString());
      FIX::StrikeRuleID StrikeRuleID_15("STRING_826674795");
      noStrikeRules_0_1_1.set(StrikeRuleID_15);
      StrikeRules_NoStrikeRules_15.insert(StrikeRuleID_15.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_15);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_30;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_30("MONTHYEAR_988216645");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_30);
        MaturityRules_NoMaturityRules_30.insert(EndMaturityMonthYear_30.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_30(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearFormat_30.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_30(1735247400);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearIncrement_30.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_30(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearIncrementUnits_30.getString());
        FIX::MaturityRuleID MaturityRuleID_30("STRING_378954575");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityRuleID_30.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_30("MONTHYEAR_1247714085");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_30);
        MaturityRules_NoMaturityRules_30.insert(StartMaturityMonthYear_30.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_30);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_31;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_31("MONTHYEAR_2085841708");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_31);
        MaturityRules_NoMaturityRules_31.insert(EndMaturityMonthYear_31.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_31(1);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearFormat_31.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_31(1582955261);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearIncrement_31.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_31(0);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearIncrementUnits_31.getString());
        FIX::MaturityRuleID MaturityRuleID_31("STRING_564057777");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityRuleID_31.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_31("MONTHYEAR_964731275");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_31);
        MaturityRules_NoMaturityRules_31.insert(StartMaturityMonthYear_31.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_31);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_16;
      FIX::EndStrikePxRange EndStrikePxRange_16;
      EndStrikePxRange_16.setString("16329032");
      noStrikeRules_0_1_2.set(EndStrikePxRange_16);
      StrikeRules_NoStrikeRules_16.insert(EndStrikePxRange_16.getString());
      FIX::StartStrikePxRange StartStrikePxRange_16;
      StartStrikePxRange_16.setString("817908");
      noStrikeRules_0_1_2.set(StartStrikePxRange_16);
      StrikeRules_NoStrikeRules_16.insert(StartStrikePxRange_16.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_16(1517666972);
      noStrikeRules_0_1_2.set(StrikeExerciseStyle_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeExerciseStyle_16.getString());
      FIX::StrikeIncrement StrikeIncrement_16;
      StrikeIncrement_16.setString("11311690");
      noStrikeRules_0_1_2.set(StrikeIncrement_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeIncrement_16.getString());
      FIX::StrikeRuleID StrikeRuleID_16("STRING_1579838072");
      noStrikeRules_0_1_2.set(StrikeRuleID_16);
      StrikeRules_NoStrikeRules_16.insert(StrikeRuleID_16.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_16);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_32;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_32("MONTHYEAR_176674574");
        noMaturityRules_0_2_2_0.set(EndMaturityMonthYear_32);
        MaturityRules_NoMaturityRules_32.insert(EndMaturityMonthYear_32.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_32(0);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearFormat_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearFormat_32.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_32(387849973);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrement_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearIncrement_32.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_32(1);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrementUnits_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearIncrementUnits_32.getString());
        FIX::MaturityRuleID MaturityRuleID_32("STRING_2061068246");
        noMaturityRules_0_2_2_0.set(MaturityRuleID_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityRuleID_32.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_32("MONTHYEAR_83348672");
        noMaturityRules_0_2_2_0.set(StartMaturityMonthYear_32);
        MaturityRules_NoMaturityRules_32.insert(StartMaturityMonthYear_32.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_32);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_33;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_33("MONTHYEAR_1962570633");
        noMaturityRules_0_2_2_1.set(EndMaturityMonthYear_33);
        MaturityRules_NoMaturityRules_33.insert(EndMaturityMonthYear_33.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_33(2);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearFormat_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearFormat_33.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_33(1247269749);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrement_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearIncrement_33.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_33(3);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrementUnits_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityMonthYearIncrementUnits_33.getString());
        FIX::MaturityRuleID MaturityRuleID_33("STRING_1765300654");
        noMaturityRules_0_2_2_1.set(MaturityRuleID_33);
        MaturityRules_NoMaturityRules_33.insert(MaturityRuleID_33.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_33("MONTHYEAR_2073944545");
        noMaturityRules_0_2_2_1.set(StartMaturityMonthYear_33);
        MaturityRules_NoMaturityRules_33.insert(StartMaturityMonthYear_33.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_33);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_34;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_34("MONTHYEAR_1922884875");
        noMaturityRules_0_2_2_2.set(EndMaturityMonthYear_34);
        MaturityRules_NoMaturityRules_34.insert(EndMaturityMonthYear_34.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_34(1);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearFormat_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearFormat_34.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_34(465531349);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrement_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearIncrement_34.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_34(3);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrementUnits_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityMonthYearIncrementUnits_34.getString());
        FIX::MaturityRuleID MaturityRuleID_34("STRING_103421641");
        noMaturityRules_0_2_2_2.set(MaturityRuleID_34);
        MaturityRules_NoMaturityRules_34.insert(MaturityRuleID_34.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_34("MONTHYEAR_844485925");
        noMaturityRules_0_2_2_2.set(StartMaturityMonthYear_34);
        MaturityRules_NoMaturityRules_34.insert(StartMaturityMonthYear_34.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_34);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_131;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_131("DATA_41779701");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_131);
      UnderlyingInstrument_131.insert(EncodedUnderlyingIssuer_131.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_131(431479833);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_131);
      UnderlyingInstrument_131.insert(EncodedUnderlyingIssuerLen_131.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_131("DATA_46350678");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_131);
      UnderlyingInstrument_131.insert(EncodedUnderlyingSecurityDesc_131.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_131(568310657);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_131);
      UnderlyingInstrument_131.insert(EncodedUnderlyingSecurityDescLen_131.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_131;
      UnderlyingAdjustedQuantity_131.setString("9955376");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_131);
      UnderlyingInstrument_131.insert(UnderlyingAdjustedQuantity_131.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_131;
      UnderlyingAllocationPercent_131.setString("19.530000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_131);
      UnderlyingInstrument_131.insert(UnderlyingAllocationPercent_131.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_131;
      UnderlyingAttachmentPoint_131.setString("2.120000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_131);
      UnderlyingInstrument_131.insert(UnderlyingAttachmentPoint_131.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_131("STRING_1077328486");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_131);
      UnderlyingInstrument_131.insert(UnderlyingCFICode_131.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_131("STRING_381265277");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_131);
      UnderlyingInstrument_131.insert(UnderlyingCPProgram_131.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_131("STRING_1184899270");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_131);
      UnderlyingInstrument_131.insert(UnderlyingCPRegType_131.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_131;
      UnderlyingCapValue_131.setString("5096829");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_131);
      UnderlyingInstrument_131.insert(UnderlyingCapValue_131.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_131;
      UnderlyingCashAmount_131.setString("428021");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_131);
      UnderlyingInstrument_131.insert(UnderlyingCashAmount_131.getString());
      FIX::UnderlyingCashType UnderlyingCashType_131("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_131);
      UnderlyingInstrument_131.insert(UnderlyingCashType_131.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_131;
      UnderlyingContractMultiplier_131.setString("17626164");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_131);
      UnderlyingInstrument_131.insert(UnderlyingContractMultiplier_131.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_131(430652089);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_131);
      UnderlyingInstrument_131.insert(UnderlyingContractMultiplierUnit_131.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_131("COUNTRY_1284894778");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_131);
      UnderlyingInstrument_131.insert(UnderlyingCountryOfIssue_131.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_131("LOCALMKTDATE_1676201003");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_131);
      UnderlyingInstrument_131.insert(UnderlyingCouponPaymentDate_131.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_131;
      UnderlyingCouponRate_131.setString("7.610000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_131);
      UnderlyingInstrument_131.insert(UnderlyingCouponRate_131.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_131("STRING_1099981763");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_131);
      UnderlyingInstrument_131.insert(UnderlyingCreditRating_131.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_131("EUR");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_131);
      UnderlyingInstrument_131.insert(UnderlyingCurrency_131.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_131;
      UnderlyingCurrentValue_131.setString("9887888");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_131);
      UnderlyingInstrument_131.insert(UnderlyingCurrentValue_131.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_131;
      UnderlyingDetachmentPoint_131.setString("64.270000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_131);
      UnderlyingInstrument_131.insert(UnderlyingDetachmentPoint_131.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_131;
      UnderlyingDirtyPrice_131.setString("16877314");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_131);
      UnderlyingInstrument_131.insert(UnderlyingDirtyPrice_131.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_131;
      UnderlyingEndPrice_131.setString("7641901");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_131);
      UnderlyingInstrument_131.insert(UnderlyingEndPrice_131.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_131;
      UnderlyingEndValue_131.setString("8265800");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_131);
      UnderlyingInstrument_131.insert(UnderlyingEndValue_131.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_131(5779109);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_131);
      UnderlyingInstrument_131.insert(UnderlyingExerciseStyle_131.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_131;
      UnderlyingFXRate_131.setString("1273550");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_131);
      UnderlyingInstrument_131.insert(UnderlyingFXRate_131.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_131('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_131);
      UnderlyingInstrument_131.insert(UnderlyingFXRateCalc_131.getString());
      FIX::UnderlyingFactor UnderlyingFactor_131;
      UnderlyingFactor_131.setString("8502650");
      noUnderlyings_0_1_0.set(UnderlyingFactor_131);
      UnderlyingInstrument_131.insert(UnderlyingFactor_131.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_131(738234157);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_131);
      UnderlyingInstrument_131.insert(UnderlyingFlowScheduleType_131.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_131("STRING_971781422");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_131);
      UnderlyingInstrument_131.insert(UnderlyingInstrRegistry_131.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_131("LOCALMKTDATE_1281744868");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_131);
      UnderlyingInstrument_131.insert(UnderlyingIssueDate_131.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_131("STRING_784584835");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_131);
      UnderlyingInstrument_131.insert(UnderlyingIssuer_131.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_131("STRING_1540092079");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_131);
      UnderlyingInstrument_131.insert(UnderlyingLocaleOfIssue_131.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_131("LOCALMKTDATE_129798830");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_131);
      UnderlyingInstrument_131.insert(UnderlyingMaturityDate_131.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_131("MONTHYEAR_1795666788");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_131);
      UnderlyingInstrument_131.insert(UnderlyingMaturityMonthYear_131.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_131("TZTIMEONLY_1593822291");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_131);
      UnderlyingInstrument_131.insert(UnderlyingMaturityTime_131.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_131;
      UnderlyingNotionalPercentageOutstanding_131.setString("73.160000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_131);
      UnderlyingInstrument_131.insert(UnderlyingNotionalPercentageOutstanding_131.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_131('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_131);
      UnderlyingInstrument_131.insert(UnderlyingOptAttribute_131.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_131;
      UnderlyingOriginalNotionalPercentageOutstanding_131.setString("79.140000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_131);
      UnderlyingInstrument_131.insert(UnderlyingOriginalNotionalPercentageOutstanding_131.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_131("STRING_1716810227");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_131);
      UnderlyingInstrument_131.insert(UnderlyingPriceUnitOfMeasure_131.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_131;
      UnderlyingPriceUnitOfMeasureQty_131.setString("722505");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_131);
      UnderlyingInstrument_131.insert(UnderlyingPriceUnitOfMeasureQty_131.getString());
      FIX::UnderlyingProduct UnderlyingProduct_131(1992811758);
      noUnderlyings_0_1_0.set(UnderlyingProduct_131);
      UnderlyingInstrument_131.insert(UnderlyingProduct_131.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_131(1331942984);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_131);
      UnderlyingInstrument_131.insert(UnderlyingPutOrCall_131.getString());
      FIX::UnderlyingPx UnderlyingPx_131;
      UnderlyingPx_131.setString("5029026");
      noUnderlyings_0_1_0.set(UnderlyingPx_131);
      UnderlyingInstrument_131.insert(UnderlyingPx_131.getString());
      FIX::UnderlyingQty UnderlyingQty_131;
      UnderlyingQty_131.setString("11302228");
      noUnderlyings_0_1_0.set(UnderlyingQty_131);
      UnderlyingInstrument_131.insert(UnderlyingQty_131.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_131("LOCALMKTDATE_860660339");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_131);
      UnderlyingInstrument_131.insert(UnderlyingRedemptionDate_131.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_131("STRING_1016903385");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_131);
      UnderlyingInstrument_131.insert(UnderlyingRepoCollateralSecurityType_131.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_131;
      UnderlyingRepurchaseRate_131.setString("10.040000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_131);
      UnderlyingInstrument_131.insert(UnderlyingRepurchaseRate_131.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_131(1463389760);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_131);
      UnderlyingInstrument_131.insert(UnderlyingRepurchaseTerm_131.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_131("STRING_630690248");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_131);
      UnderlyingInstrument_131.insert(UnderlyingRestructuringType_131.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_131("STRING_1071509890");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityDesc_131.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_131("EXCHANGE_1683936188");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityExchange_131.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_131("STRING_170938008");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityID_131.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_131("STRING_1835700004");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityIDSource_131.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_131("STRING_363032619");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_131);
      UnderlyingInstrument_131.insert(UnderlyingSecuritySubType_131.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_131("STRING_176717117");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityType_131.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_131("STRING_1963055097");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_131);
      UnderlyingInstrument_131.insert(UnderlyingSeniority_131.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_131("STRING_1293034340");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_131);
      UnderlyingInstrument_131.insert(UnderlyingSettlMethod_131.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_131(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_131);
      UnderlyingInstrument_131.insert(UnderlyingSettlementType_131.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_131;
      UnderlyingStartValue_131.setString("5538056");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_131);
      UnderlyingInstrument_131.insert(UnderlyingStartValue_131.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_131("STRING_117332114");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_131);
      UnderlyingInstrument_131.insert(UnderlyingStateOrProvinceOfIssue_131.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_131("JPY");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_131);
      UnderlyingInstrument_131.insert(UnderlyingStrikeCurrency_131.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_131;
      UnderlyingStrikePrice_131.setString("16574241");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_131);
      UnderlyingInstrument_131.insert(UnderlyingStrikePrice_131.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_131("STRING_291042202");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_131);
      UnderlyingInstrument_131.insert(UnderlyingSymbol_131.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_131("STRING_986573582");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_131);
      UnderlyingInstrument_131.insert(UnderlyingSymbolSfx_131.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_131("STRING_1103762837");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_131);
      UnderlyingInstrument_131.insert(UnderlyingTimeUnit_131.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_131("STRING_1498169519");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_131);
      UnderlyingInstrument_131.insert(UnderlyingUnitOfMeasure_131.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_131;
      UnderlyingUnitOfMeasureQty_131.setString("10160220");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_131);
      UnderlyingInstrument_131.insert(UnderlyingUnitOfMeasureQty_131.getString());
      all_values.push_back(UnderlyingInstrument_131);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_264;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_264("STRING_1067496098");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_264);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_264.insert(UnderlyingSecurityAltID_264.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_264("STRING_1088272534");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_264);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_264.insert(UnderlyingSecurityAltIDSource_264.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_265;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_265("STRING_1580328861");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_265);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_265.insert(UnderlyingSecurityAltID_265.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_265("STRING_251955434");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_265);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_265.insert(UnderlyingSecurityAltIDSource_265.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_266;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_266("STRING_1591175158");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_266);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_266.insert(UnderlyingSecurityAltID_266.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_266("STRING_563068102");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_266);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_266.insert(UnderlyingSecurityAltIDSource_266.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_248;
        FIX::UnderlyingStipType UnderlyingStipType_248("STRING_460594895");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_248);
        UnderlyingStipulations_NoUnderlyingStips_248.insert(UnderlyingStipType_248.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_248("STRING_645789106");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_248);
        UnderlyingStipulations_NoUnderlyingStips_248.insert(UnderlyingStipValue_248.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_248);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_249;
        FIX::UnderlyingStipType UnderlyingStipType_249("STRING_428521886");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_249);
        UnderlyingStipulations_NoUnderlyingStips_249.insert(UnderlyingStipType_249.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_249("STRING_1091285143");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_249);
        UnderlyingStipulations_NoUnderlyingStips_249.insert(UnderlyingStipValue_249.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_249);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_267;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_267("STRING_2112458074");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_267);
        UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyID_267.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_267('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_267);
        UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyIDSource_267.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_267(1405515352);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_267);
        UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyRole_267.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_267);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_500("STRING_1438940268");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_500);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500.insert(UnderlyingInstrumentPartySubID_500.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_500(1221086801);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_500);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500.insert(UnderlyingInstrumentPartySubIDType_500.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_501("STRING_1621041385");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_501);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501.insert(UnderlyingInstrumentPartySubID_501.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_501(318438772);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_501);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501.insert(UnderlyingInstrumentPartySubIDType_501.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_502("STRING_1774892408");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_502);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502.insert(UnderlyingInstrumentPartySubID_502.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_502(1738373499);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_502);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502.insert(UnderlyingInstrumentPartySubIDType_502.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_268;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_268("STRING_479682144");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyID_268.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_268('9');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyIDSource_268.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_268(1248314045);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyRole_268.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_268);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_503("STRING_1952372784");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_503);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503.insert(UnderlyingInstrumentPartySubID_503.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_503(204593234);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_503);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503.insert(UnderlyingInstrumentPartySubIDType_503.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_504("STRING_121410218");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_504);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504.insert(UnderlyingInstrumentPartySubID_504.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_504(820911137);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_504);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504.insert(UnderlyingInstrumentPartySubIDType_504.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_505("STRING_1939593985");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_505);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505.insert(UnderlyingInstrumentPartySubID_505.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_505(1188906316);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_505);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505.insert(UnderlyingInstrumentPartySubIDType_505.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_269;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_269("STRING_1909183671");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyID_269.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_269('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyIDSource_269.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_269(1440861750);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyRole_269.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_269);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_506("STRING_1935507300");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_506);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506.insert(UnderlyingInstrumentPartySubID_506.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_506(405993875);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_506);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506.insert(UnderlyingInstrumentPartySubIDType_506.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_507("STRING_1813470076");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_507);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507.insert(UnderlyingInstrumentPartySubID_507.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_507(433812758);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_507);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507.insert(UnderlyingInstrumentPartySubIDType_507.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_508("STRING_834515761");
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubID_508);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508.insert(UnderlyingInstrumentPartySubID_508.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_508(757271571);
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_508);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508.insert(UnderlyingInstrumentPartySubIDType_508.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_132;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_132("DATA_3628107");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_132);
      UnderlyingInstrument_132.insert(EncodedUnderlyingIssuer_132.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_132(799490187);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_132);
      UnderlyingInstrument_132.insert(EncodedUnderlyingIssuerLen_132.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_132("DATA_2019494722");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_132);
      UnderlyingInstrument_132.insert(EncodedUnderlyingSecurityDesc_132.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_132(1409143459);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_132);
      UnderlyingInstrument_132.insert(EncodedUnderlyingSecurityDescLen_132.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_132;
      UnderlyingAdjustedQuantity_132.setString("11274972");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_132);
      UnderlyingInstrument_132.insert(UnderlyingAdjustedQuantity_132.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_132;
      UnderlyingAllocationPercent_132.setString("13.430000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_132);
      UnderlyingInstrument_132.insert(UnderlyingAllocationPercent_132.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_132;
      UnderlyingAttachmentPoint_132.setString("66.130000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_132);
      UnderlyingInstrument_132.insert(UnderlyingAttachmentPoint_132.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_132("STRING_601054970");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_132);
      UnderlyingInstrument_132.insert(UnderlyingCFICode_132.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_132("STRING_1629390115");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_132);
      UnderlyingInstrument_132.insert(UnderlyingCPProgram_132.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_132("STRING_110155373");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_132);
      UnderlyingInstrument_132.insert(UnderlyingCPRegType_132.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_132;
      UnderlyingCapValue_132.setString("1919448");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_132);
      UnderlyingInstrument_132.insert(UnderlyingCapValue_132.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_132;
      UnderlyingCashAmount_132.setString("21090722");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_132);
      UnderlyingInstrument_132.insert(UnderlyingCashAmount_132.getString());
      FIX::UnderlyingCashType UnderlyingCashType_132("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_132);
      UnderlyingInstrument_132.insert(UnderlyingCashType_132.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_132;
      UnderlyingContractMultiplier_132.setString("14402588");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_132);
      UnderlyingInstrument_132.insert(UnderlyingContractMultiplier_132.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_132(732312959);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_132);
      UnderlyingInstrument_132.insert(UnderlyingContractMultiplierUnit_132.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_132("COUNTRY_880843711");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_132);
      UnderlyingInstrument_132.insert(UnderlyingCountryOfIssue_132.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_132("LOCALMKTDATE_1644852101");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_132);
      UnderlyingInstrument_132.insert(UnderlyingCouponPaymentDate_132.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_132;
      UnderlyingCouponRate_132.setString("31.770000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_132);
      UnderlyingInstrument_132.insert(UnderlyingCouponRate_132.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_132("STRING_1701754848");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_132);
      UnderlyingInstrument_132.insert(UnderlyingCreditRating_132.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_132("CAN");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_132);
      UnderlyingInstrument_132.insert(UnderlyingCurrency_132.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_132;
      UnderlyingCurrentValue_132.setString("14634548");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_132);
      UnderlyingInstrument_132.insert(UnderlyingCurrentValue_132.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_132;
      UnderlyingDetachmentPoint_132.setString("79.880000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_132);
      UnderlyingInstrument_132.insert(UnderlyingDetachmentPoint_132.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_132;
      UnderlyingDirtyPrice_132.setString("13360075");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_132);
      UnderlyingInstrument_132.insert(UnderlyingDirtyPrice_132.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_132;
      UnderlyingEndPrice_132.setString("6688464");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_132);
      UnderlyingInstrument_132.insert(UnderlyingEndPrice_132.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_132;
      UnderlyingEndValue_132.setString("4499416");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_132);
      UnderlyingInstrument_132.insert(UnderlyingEndValue_132.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_132(1742001470);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_132);
      UnderlyingInstrument_132.insert(UnderlyingExerciseStyle_132.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_132;
      UnderlyingFXRate_132.setString("3348328");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_132);
      UnderlyingInstrument_132.insert(UnderlyingFXRate_132.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_132('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_132);
      UnderlyingInstrument_132.insert(UnderlyingFXRateCalc_132.getString());
      FIX::UnderlyingFactor UnderlyingFactor_132;
      UnderlyingFactor_132.setString("4290335");
      noUnderlyings_0_1_1.set(UnderlyingFactor_132);
      UnderlyingInstrument_132.insert(UnderlyingFactor_132.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_132(1092104405);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_132);
      UnderlyingInstrument_132.insert(UnderlyingFlowScheduleType_132.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_132("STRING_887382506");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_132);
      UnderlyingInstrument_132.insert(UnderlyingInstrRegistry_132.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_132("LOCALMKTDATE_1228523771");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_132);
      UnderlyingInstrument_132.insert(UnderlyingIssueDate_132.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_132("STRING_964115480");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_132);
      UnderlyingInstrument_132.insert(UnderlyingIssuer_132.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_132("STRING_149042318");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_132);
      UnderlyingInstrument_132.insert(UnderlyingLocaleOfIssue_132.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_132("LOCALMKTDATE_208537356");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_132);
      UnderlyingInstrument_132.insert(UnderlyingMaturityDate_132.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_132("MONTHYEAR_127583175");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_132);
      UnderlyingInstrument_132.insert(UnderlyingMaturityMonthYear_132.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_132("TZTIMEONLY_631788931");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_132);
      UnderlyingInstrument_132.insert(UnderlyingMaturityTime_132.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_132;
      UnderlyingNotionalPercentageOutstanding_132.setString("23.270000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_132);
      UnderlyingInstrument_132.insert(UnderlyingNotionalPercentageOutstanding_132.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_132('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_132);
      UnderlyingInstrument_132.insert(UnderlyingOptAttribute_132.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_132;
      UnderlyingOriginalNotionalPercentageOutstanding_132.setString("43.040000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_132);
      UnderlyingInstrument_132.insert(UnderlyingOriginalNotionalPercentageOutstanding_132.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_132("STRING_1001537149");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_132);
      UnderlyingInstrument_132.insert(UnderlyingPriceUnitOfMeasure_132.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_132;
      UnderlyingPriceUnitOfMeasureQty_132.setString("17185619");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_132);
      UnderlyingInstrument_132.insert(UnderlyingPriceUnitOfMeasureQty_132.getString());
      FIX::UnderlyingProduct UnderlyingProduct_132(1817898879);
      noUnderlyings_0_1_1.set(UnderlyingProduct_132);
      UnderlyingInstrument_132.insert(UnderlyingProduct_132.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_132(294312368);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_132);
      UnderlyingInstrument_132.insert(UnderlyingPutOrCall_132.getString());
      FIX::UnderlyingPx UnderlyingPx_132;
      UnderlyingPx_132.setString("3033912");
      noUnderlyings_0_1_1.set(UnderlyingPx_132);
      UnderlyingInstrument_132.insert(UnderlyingPx_132.getString());
      FIX::UnderlyingQty UnderlyingQty_132;
      UnderlyingQty_132.setString("5512589");
      noUnderlyings_0_1_1.set(UnderlyingQty_132);
      UnderlyingInstrument_132.insert(UnderlyingQty_132.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_132("LOCALMKTDATE_1939164469");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_132);
      UnderlyingInstrument_132.insert(UnderlyingRedemptionDate_132.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_132("STRING_1157114390");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_132);
      UnderlyingInstrument_132.insert(UnderlyingRepoCollateralSecurityType_132.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_132;
      UnderlyingRepurchaseRate_132.setString("1.430000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_132);
      UnderlyingInstrument_132.insert(UnderlyingRepurchaseRate_132.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_132(1228643259);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_132);
      UnderlyingInstrument_132.insert(UnderlyingRepurchaseTerm_132.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_132("STRING_1052260235");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_132);
      UnderlyingInstrument_132.insert(UnderlyingRestructuringType_132.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_132("STRING_1568985015");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityDesc_132.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_132("EXCHANGE_1890561247");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityExchange_132.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_132("STRING_240784182");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityID_132.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_132("STRING_90347772");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityIDSource_132.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_132("STRING_193019240");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_132);
      UnderlyingInstrument_132.insert(UnderlyingSecuritySubType_132.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_132("STRING_1982785653");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityType_132.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_132("STRING_425180606");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_132);
      UnderlyingInstrument_132.insert(UnderlyingSeniority_132.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_132("STRING_1076773640");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_132);
      UnderlyingInstrument_132.insert(UnderlyingSettlMethod_132.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_132(2);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_132);
      UnderlyingInstrument_132.insert(UnderlyingSettlementType_132.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_132;
      UnderlyingStartValue_132.setString("15172850");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_132);
      UnderlyingInstrument_132.insert(UnderlyingStartValue_132.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_132("STRING_1964156146");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_132);
      UnderlyingInstrument_132.insert(UnderlyingStateOrProvinceOfIssue_132.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_132("GBP");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_132);
      UnderlyingInstrument_132.insert(UnderlyingStrikeCurrency_132.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_132;
      UnderlyingStrikePrice_132.setString("21131984");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_132);
      UnderlyingInstrument_132.insert(UnderlyingStrikePrice_132.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_132("STRING_1701396717");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_132);
      UnderlyingInstrument_132.insert(UnderlyingSymbol_132.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_132("STRING_461500019");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_132);
      UnderlyingInstrument_132.insert(UnderlyingSymbolSfx_132.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_132("STRING_597503747");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_132);
      UnderlyingInstrument_132.insert(UnderlyingTimeUnit_132.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_132("STRING_363505396");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_132);
      UnderlyingInstrument_132.insert(UnderlyingUnitOfMeasure_132.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_132;
      UnderlyingUnitOfMeasureQty_132.setString("709896");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_132);
      UnderlyingInstrument_132.insert(UnderlyingUnitOfMeasureQty_132.getString());
      all_values.push_back(UnderlyingInstrument_132);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_267;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_267("STRING_1365042545");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_267);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_267.insert(UnderlyingSecurityAltID_267.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_267("STRING_1789551564");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_267);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_267.insert(UnderlyingSecurityAltIDSource_267.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_267);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_268;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_268("STRING_1009863282");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_268);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_268.insert(UnderlyingSecurityAltID_268.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_268("STRING_1659354913");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_268);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_268.insert(UnderlyingSecurityAltIDSource_268.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_268);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_269;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_269("STRING_2092942777");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltID_269);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_269.insert(UnderlyingSecurityAltID_269.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_269("STRING_1561122225");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltIDSource_269);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_269.insert(UnderlyingSecurityAltIDSource_269.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_269);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_250;
        FIX::UnderlyingStipType UnderlyingStipType_250("STRING_1102573520");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_250);
        UnderlyingStipulations_NoUnderlyingStips_250.insert(UnderlyingStipType_250.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_250("STRING_1666652368");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_250);
        UnderlyingStipulations_NoUnderlyingStips_250.insert(UnderlyingStipValue_250.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_250);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_270;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_270("STRING_7350107");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyID_270.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_270('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyIDSource_270.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_270(275272944);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyRole_270.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_270);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_509("STRING_1178501507");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_509);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509.insert(UnderlyingInstrumentPartySubID_509.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_509(468292185);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_509);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509.insert(UnderlyingInstrumentPartySubIDType_509.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_271;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_271("STRING_83436295");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyID_271.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_271('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyIDSource_271.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_271(1545065825);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyRole_271.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_271);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_510("STRING_973483478");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_510);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510.insert(UnderlyingInstrumentPartySubID_510.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_510(1361738323);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_510);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510.insert(UnderlyingInstrumentPartySubIDType_510.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_511("STRING_1840631244");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_511);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511.insert(UnderlyingInstrumentPartySubID_511.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_511(1307400322);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_511);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511.insert(UnderlyingInstrumentPartySubIDType_511.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_133;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_133("DATA_1327453140");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingIssuer_133.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_133(1394544313);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingIssuerLen_133.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_133("DATA_1768900341");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingSecurityDesc_133.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_133(1924956887);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingSecurityDescLen_133.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_133;
      UnderlyingAdjustedQuantity_133.setString("17580497");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_133);
      UnderlyingInstrument_133.insert(UnderlyingAdjustedQuantity_133.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_133;
      UnderlyingAllocationPercent_133.setString("0.020000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_133);
      UnderlyingInstrument_133.insert(UnderlyingAllocationPercent_133.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_133;
      UnderlyingAttachmentPoint_133.setString("12.910000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_133);
      UnderlyingInstrument_133.insert(UnderlyingAttachmentPoint_133.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_133("STRING_975608606");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_133);
      UnderlyingInstrument_133.insert(UnderlyingCFICode_133.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_133("STRING_1481957918");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_133);
      UnderlyingInstrument_133.insert(UnderlyingCPProgram_133.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_133("STRING_2126784573");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_133);
      UnderlyingInstrument_133.insert(UnderlyingCPRegType_133.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_133;
      UnderlyingCapValue_133.setString("4874798");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_133);
      UnderlyingInstrument_133.insert(UnderlyingCapValue_133.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_133;
      UnderlyingCashAmount_133.setString("14274170");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_133);
      UnderlyingInstrument_133.insert(UnderlyingCashAmount_133.getString());
      FIX::UnderlyingCashType UnderlyingCashType_133("STRING_FIXED");
      noUnderlyings_0_1_2.set(UnderlyingCashType_133);
      UnderlyingInstrument_133.insert(UnderlyingCashType_133.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_133;
      UnderlyingContractMultiplier_133.setString("19385156");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_133);
      UnderlyingInstrument_133.insert(UnderlyingContractMultiplier_133.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_133(382506920);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_133);
      UnderlyingInstrument_133.insert(UnderlyingContractMultiplierUnit_133.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_133("COUNTRY_1059591870");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingCountryOfIssue_133.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_133("LOCALMKTDATE_323227302");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_133);
      UnderlyingInstrument_133.insert(UnderlyingCouponPaymentDate_133.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_133;
      UnderlyingCouponRate_133.setString("70.270000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_133);
      UnderlyingInstrument_133.insert(UnderlyingCouponRate_133.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_133("STRING_261957");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_133);
      UnderlyingInstrument_133.insert(UnderlyingCreditRating_133.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_133("EUR");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_133);
      UnderlyingInstrument_133.insert(UnderlyingCurrency_133.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_133;
      UnderlyingCurrentValue_133.setString("11787634");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_133);
      UnderlyingInstrument_133.insert(UnderlyingCurrentValue_133.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_133;
      UnderlyingDetachmentPoint_133.setString("24.320000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_133);
      UnderlyingInstrument_133.insert(UnderlyingDetachmentPoint_133.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_133;
      UnderlyingDirtyPrice_133.setString("7214276");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_133);
      UnderlyingInstrument_133.insert(UnderlyingDirtyPrice_133.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_133;
      UnderlyingEndPrice_133.setString("6349619");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_133);
      UnderlyingInstrument_133.insert(UnderlyingEndPrice_133.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_133;
      UnderlyingEndValue_133.setString("4643746");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_133);
      UnderlyingInstrument_133.insert(UnderlyingEndValue_133.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_133(1069199496);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_133);
      UnderlyingInstrument_133.insert(UnderlyingExerciseStyle_133.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_133;
      UnderlyingFXRate_133.setString("16084454");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_133);
      UnderlyingInstrument_133.insert(UnderlyingFXRate_133.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_133('D');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_133);
      UnderlyingInstrument_133.insert(UnderlyingFXRateCalc_133.getString());
      FIX::UnderlyingFactor UnderlyingFactor_133;
      UnderlyingFactor_133.setString("7623470");
      noUnderlyings_0_1_2.set(UnderlyingFactor_133);
      UnderlyingInstrument_133.insert(UnderlyingFactor_133.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_133(768362083);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_133);
      UnderlyingInstrument_133.insert(UnderlyingFlowScheduleType_133.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_133("STRING_1006082424");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_133);
      UnderlyingInstrument_133.insert(UnderlyingInstrRegistry_133.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_133("LOCALMKTDATE_9407758");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_133);
      UnderlyingInstrument_133.insert(UnderlyingIssueDate_133.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_133("STRING_389778776");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_133);
      UnderlyingInstrument_133.insert(UnderlyingIssuer_133.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_133("STRING_783555664");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingLocaleOfIssue_133.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_133("LOCALMKTDATE_1767457468");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityDate_133.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_133("MONTHYEAR_82185130");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityMonthYear_133.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_133("TZTIMEONLY_1900476955");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityTime_133.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_133;
      UnderlyingNotionalPercentageOutstanding_133.setString("24.260000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_133);
      UnderlyingInstrument_133.insert(UnderlyingNotionalPercentageOutstanding_133.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_133('1');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_133);
      UnderlyingInstrument_133.insert(UnderlyingOptAttribute_133.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_133;
      UnderlyingOriginalNotionalPercentageOutstanding_133.setString("78.800000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_133);
      UnderlyingInstrument_133.insert(UnderlyingOriginalNotionalPercentageOutstanding_133.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_133("STRING_1083062298");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_133);
      UnderlyingInstrument_133.insert(UnderlyingPriceUnitOfMeasure_133.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_133;
      UnderlyingPriceUnitOfMeasureQty_133.setString("8440764");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_133);
      UnderlyingInstrument_133.insert(UnderlyingPriceUnitOfMeasureQty_133.getString());
      FIX::UnderlyingProduct UnderlyingProduct_133(1272717383);
      noUnderlyings_0_1_2.set(UnderlyingProduct_133);
      UnderlyingInstrument_133.insert(UnderlyingProduct_133.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_133(874094255);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_133);
      UnderlyingInstrument_133.insert(UnderlyingPutOrCall_133.getString());
      FIX::UnderlyingPx UnderlyingPx_133;
      UnderlyingPx_133.setString("12265833");
      noUnderlyings_0_1_2.set(UnderlyingPx_133);
      UnderlyingInstrument_133.insert(UnderlyingPx_133.getString());
      FIX::UnderlyingQty UnderlyingQty_133;
      UnderlyingQty_133.setString("1848256");
      noUnderlyings_0_1_2.set(UnderlyingQty_133);
      UnderlyingInstrument_133.insert(UnderlyingQty_133.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_133("LOCALMKTDATE_1197321558");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_133);
      UnderlyingInstrument_133.insert(UnderlyingRedemptionDate_133.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_133("STRING_1616440396");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_133);
      UnderlyingInstrument_133.insert(UnderlyingRepoCollateralSecurityType_133.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_133;
      UnderlyingRepurchaseRate_133.setString("75.630000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_133);
      UnderlyingInstrument_133.insert(UnderlyingRepurchaseRate_133.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_133(1795821805);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_133);
      UnderlyingInstrument_133.insert(UnderlyingRepurchaseTerm_133.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_133("STRING_106948066");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_133);
      UnderlyingInstrument_133.insert(UnderlyingRestructuringType_133.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_133("STRING_1363851028");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityDesc_133.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_133("EXCHANGE_715130589");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityExchange_133.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_133("STRING_828375678");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityID_133.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_133("STRING_1998812959");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityIDSource_133.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_133("STRING_1179505198");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_133);
      UnderlyingInstrument_133.insert(UnderlyingSecuritySubType_133.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_133("STRING_1897575175");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityType_133.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_133("STRING_1459774720");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_133);
      UnderlyingInstrument_133.insert(UnderlyingSeniority_133.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_133("STRING_858134482");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_133);
      UnderlyingInstrument_133.insert(UnderlyingSettlMethod_133.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_133(4);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_133);
      UnderlyingInstrument_133.insert(UnderlyingSettlementType_133.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_133;
      UnderlyingStartValue_133.setString("806531");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_133);
      UnderlyingInstrument_133.insert(UnderlyingStartValue_133.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_133("STRING_1864216907");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingStateOrProvinceOfIssue_133.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_133("CAN");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_133);
      UnderlyingInstrument_133.insert(UnderlyingStrikeCurrency_133.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_133;
      UnderlyingStrikePrice_133.setString("5002889");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_133);
      UnderlyingInstrument_133.insert(UnderlyingStrikePrice_133.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_133("STRING_141820198");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_133);
      UnderlyingInstrument_133.insert(UnderlyingSymbol_133.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_133("STRING_552617061");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_133);
      UnderlyingInstrument_133.insert(UnderlyingSymbolSfx_133.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_133("STRING_253282230");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_133);
      UnderlyingInstrument_133.insert(UnderlyingTimeUnit_133.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_133("STRING_737402625");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_133);
      UnderlyingInstrument_133.insert(UnderlyingUnitOfMeasure_133.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_133;
      UnderlyingUnitOfMeasureQty_133.setString("21167601");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_133);
      UnderlyingInstrument_133.insert(UnderlyingUnitOfMeasureQty_133.getString());
      all_values.push_back(UnderlyingInstrument_133);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_270;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_270("STRING_1820464923");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_270);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_270.insert(UnderlyingSecurityAltID_270.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_270("STRING_813352911");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_270);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_270.insert(UnderlyingSecurityAltIDSource_270.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_270);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_271;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_271("STRING_1258293845");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltID_271);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_271.insert(UnderlyingSecurityAltID_271.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_271("STRING_547075530");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltIDSource_271);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_271.insert(UnderlyingSecurityAltIDSource_271.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_272;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_272("STRING_2039936280");
        noUnderlyingSecurityAltID_0_2_2_2.set(UnderlyingSecurityAltID_272);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_272.insert(UnderlyingSecurityAltID_272.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_272("STRING_1443119451");
        noUnderlyingSecurityAltID_0_2_2_2.set(UnderlyingSecurityAltIDSource_272);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_272.insert(UnderlyingSecurityAltIDSource_272.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_251;
        FIX::UnderlyingStipType UnderlyingStipType_251("STRING_1508893029");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_251);
        UnderlyingStipulations_NoUnderlyingStips_251.insert(UnderlyingStipType_251.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_251("STRING_1628207014");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_251);
        UnderlyingStipulations_NoUnderlyingStips_251.insert(UnderlyingStipValue_251.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_251);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_272;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_272("STRING_1615841095");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_272);
        UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyID_272.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_272('8');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_272);
        UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyIDSource_272.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_272(2107865834);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_272);
        UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyRole_272.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_272);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_512("STRING_695903705");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_512);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512.insert(UnderlyingInstrumentPartySubID_512.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_512(1139887384);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_512);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512.insert(UnderlyingInstrumentPartySubIDType_512.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_513("STRING_46824652");
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubID_513);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513.insert(UnderlyingInstrumentPartySubID_513.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_513(8194777);
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_513);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513.insert(UnderlyingInstrumentPartySubIDType_513.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_514("STRING_1998021867");
          noUndlyInstrumentPartySubIDs_0_2_0_3_2.set(UnderlyingInstrumentPartySubID_514);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514.insert(UnderlyingInstrumentPartySubID_514.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_514(559263272);
          noUndlyInstrumentPartySubIDs_0_2_0_3_2.set(UnderlyingInstrumentPartySubIDType_514);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514.insert(UnderlyingInstrumentPartySubIDType_514.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_2);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_273;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_273("STRING_88847932");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_273);
        UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyID_273.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_273('1');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_273);
        UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyIDSource_273.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_273(1081109651);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_273);
        UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyRole_273.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_273);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_515("STRING_67560401");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_515);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515.insert(UnderlyingInstrumentPartySubID_515.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_515(1222929849);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_515);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515.insert(UnderlyingInstrumentPartySubIDType_515.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_274;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_274("STRING_1111896924");
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyID_274);
        UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyID_274.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_274('3');
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyIDSource_274);
        UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyIDSource_274.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_274(1960332474);
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyRole_274);
        UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyRole_274.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_274);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_516("STRING_306419093");
          noUndlyInstrumentPartySubIDs_0_2_2_3_0.set(UnderlyingInstrumentPartySubID_516);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516.insert(UnderlyingInstrumentPartySubID_516.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_516(1633313749);
          noUndlyInstrumentPartySubIDs_0_2_2_3_0.set(UnderlyingInstrumentPartySubIDType_516);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516.insert(UnderlyingInstrumentPartySubIDType_516.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);

          noUndlyInstrumentParties_0_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_25;
    FIX::Yield Yield_25;
    Yield_25.setString("62.980000");
    noRelatedSym_0_0.set(Yield_25);
    YieldData_25.insert(Yield_25.getString());
    FIX::YieldCalcDate YieldCalcDate_25("LOCALMKTDATE_1564712939");
    noRelatedSym_0_0.set(YieldCalcDate_25);
    YieldData_25.insert(YieldCalcDate_25.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_25("LOCALMKTDATE_32905632");
    noRelatedSym_0_0.set(YieldRedemptionDate_25);
    YieldData_25.insert(YieldRedemptionDate_25.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_25;
    YieldRedemptionPrice_25.setString("17869789");
    noRelatedSym_0_0.set(YieldRedemptionPrice_25);
    YieldData_25.insert(YieldRedemptionPrice_25.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_25(860348742);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_25);
    YieldData_25.insert(YieldRedemptionPriceType_25.getString());
    FIX::YieldType YieldType_25("STRING_LASTCLOSE");
    noRelatedSym_0_0.set(YieldType_25);
    YieldData_25.insert(YieldType_25.getString());
    all_values.push_back(YieldData_25);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_1;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_1;
    FIX::Currency Currency_65("GBP");
    noRelatedSym_0_1.set(Currency_65);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(Currency_65.getString());
    FIX::EncodedText EncodedText_81("DATA_1022554318");
    noRelatedSym_0_1.set(EncodedText_81);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(EncodedText_81.getString());
    FIX::EncodedTextLen EncodedTextLen_81(616745759);
    noRelatedSym_0_1.set(EncodedTextLen_81);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(EncodedTextLen_81.getString());
    FIX::ListUpdateAction ListUpdateAction_3('1');
    noRelatedSym_0_1.set(ListUpdateAction_3);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(ListUpdateAction_3.getString());
    FIX::RelSymTransactTime RelSymTransactTime_7(FIX::UTCTIMESTAMP(4, 7, 9, 25, 9, 2004));
    noRelatedSym_0_1.set(RelSymTransactTime_7);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(RelSymTransactTime_7.getString());
    FIX::Text Text_81("STRING_1519566809");
    noRelatedSym_0_1.set(Text_81);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(Text_81.getString());
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_1);

    // FinancingDetails
    multiset<string> FinancingDetails_30;
    FIX::AgreementCurrency AgreementCurrency_30("GBP");
    noRelatedSym_0_1.set(AgreementCurrency_30);
    FinancingDetails_30.insert(AgreementCurrency_30.getString());
    FIX::AgreementDate AgreementDate_30("LOCALMKTDATE_453192812");
    noRelatedSym_0_1.set(AgreementDate_30);
    FinancingDetails_30.insert(AgreementDate_30.getString());
    FIX::AgreementDesc AgreementDesc_30("STRING_390389131");
    noRelatedSym_0_1.set(AgreementDesc_30);
    FinancingDetails_30.insert(AgreementDesc_30.getString());
    FIX::AgreementID AgreementID_30("STRING_1608193987");
    noRelatedSym_0_1.set(AgreementID_30);
    FinancingDetails_30.insert(AgreementID_30.getString());
    FIX::DeliveryType DeliveryType_30(2);
    noRelatedSym_0_1.set(DeliveryType_30);
    FinancingDetails_30.insert(DeliveryType_30.getString());
    FIX::EndDate EndDate_30("LOCALMKTDATE_1502286055");
    noRelatedSym_0_1.set(EndDate_30);
    FinancingDetails_30.insert(EndDate_30.getString());
    FIX::MarginRatio MarginRatio_30;
    MarginRatio_30.setString("66.180000");
    noRelatedSym_0_1.set(MarginRatio_30);
    FinancingDetails_30.insert(MarginRatio_30.getString());
    FIX::StartDate StartDate_30("LOCALMKTDATE_1488971488");
    noRelatedSym_0_1.set(StartDate_30);
    FinancingDetails_30.insert(StartDate_30.getString());
    FIX::TerminationType TerminationType_30(3);
    noRelatedSym_0_1.set(TerminationType_30);
    FinancingDetails_30.insert(TerminationType_30.getString());
    all_values.push_back(FinancingDetails_30);

    // Instrument
    multiset<string> Instrument_85;
    FIX::AttachmentPoint AttachmentPoint_85;
    AttachmentPoint_85.setString("20.630000");
    noRelatedSym_0_1.set(AttachmentPoint_85);
    Instrument_85.insert(AttachmentPoint_85.getString());
    FIX::CFICode CFICode_85("STRING_974801590");
    noRelatedSym_0_1.set(CFICode_85);
    Instrument_85.insert(CFICode_85.getString());
    FIX::CPProgram CPProgram_85(2);
    noRelatedSym_0_1.set(CPProgram_85);
    Instrument_85.insert(CPProgram_85.getString());
    FIX::CPRegType CPRegType_85("STRING_1652685002");
    noRelatedSym_0_1.set(CPRegType_85);
    Instrument_85.insert(CPRegType_85.getString());
    FIX::CapPrice CapPrice_85;
    CapPrice_85.setString("10077072");
    noRelatedSym_0_1.set(CapPrice_85);
    Instrument_85.insert(CapPrice_85.getString());
    FIX::ContractMultiplier ContractMultiplier_85;
    ContractMultiplier_85.setString("19699973");
    noRelatedSym_0_1.set(ContractMultiplier_85);
    Instrument_85.insert(ContractMultiplier_85.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_85(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_85);
    Instrument_85.insert(ContractMultiplierUnit_85.getString());
    FIX::ContractSettlMonth ContractSettlMonth_85("MONTHYEAR_637526294");
    noRelatedSym_0_1.set(ContractSettlMonth_85);
    Instrument_85.insert(ContractSettlMonth_85.getString());
    FIX::CountryOfIssue CountryOfIssue_85("COUNTRY_970902040");
    noRelatedSym_0_1.set(CountryOfIssue_85);
    Instrument_85.insert(CountryOfIssue_85.getString());
    FIX::CouponPaymentDate CouponPaymentDate_85("LOCALMKTDATE_706622204");
    noRelatedSym_0_1.set(CouponPaymentDate_85);
    Instrument_85.insert(CouponPaymentDate_85.getString());
    FIX::CouponRate CouponRate_85;
    CouponRate_85.setString("6.120000");
    noRelatedSym_0_1.set(CouponRate_85);
    Instrument_85.insert(CouponRate_85.getString());
    FIX::CreditRating CreditRating_85("STRING_1587647799");
    noRelatedSym_0_1.set(CreditRating_85);
    Instrument_85.insert(CreditRating_85.getString());
    FIX::DatedDate DatedDate_85("LOCALMKTDATE_1892268706");
    noRelatedSym_0_1.set(DatedDate_85);
    Instrument_85.insert(DatedDate_85.getString());
    FIX::DetachmentPoint DetachmentPoint_85;
    DetachmentPoint_85.setString("34.690000");
    noRelatedSym_0_1.set(DetachmentPoint_85);
    Instrument_85.insert(DetachmentPoint_85.getString());
    FIX::EncodedIssuer EncodedIssuer_85("DATA_353643035");
    noRelatedSym_0_1.set(EncodedIssuer_85);
    Instrument_85.insert(EncodedIssuer_85.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_85(1626335265);
    noRelatedSym_0_1.set(EncodedIssuerLen_85);
    Instrument_85.insert(EncodedIssuerLen_85.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_85("DATA_470873710");
    noRelatedSym_0_1.set(EncodedSecurityDesc_85);
    Instrument_85.insert(EncodedSecurityDesc_85.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_85(1313946572);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_85);
    Instrument_85.insert(EncodedSecurityDescLen_85.getString());
    FIX::ExerciseStyle ExerciseStyle_85(0);
    noRelatedSym_0_1.set(ExerciseStyle_85);
    Instrument_85.insert(ExerciseStyle_85.getString());
    FIX::Factor Factor_85;
    Factor_85.setString("2967521");
    noRelatedSym_0_1.set(Factor_85);
    Instrument_85.insert(Factor_85.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_85(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_85);
    Instrument_85.insert(FlexProductEligibilityIndicator_85.getString());
    FIX::FlexibleIndicator FlexibleIndicator_85(false);
    noRelatedSym_0_1.set(FlexibleIndicator_85);
    Instrument_85.insert(FlexibleIndicator_85.getString());
    FIX::FloorPrice FloorPrice_85;
    FloorPrice_85.setString("18373857");
    noRelatedSym_0_1.set(FloorPrice_85);
    Instrument_85.insert(FloorPrice_85.getString());
    FIX::FlowScheduleType FlowScheduleType_85(1);
    noRelatedSym_0_1.set(FlowScheduleType_85);
    Instrument_85.insert(FlowScheduleType_85.getString());
    FIX::InstrRegistry InstrRegistry_85("STRING_1590095000");
    noRelatedSym_0_1.set(InstrRegistry_85);
    Instrument_85.insert(InstrRegistry_85.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_85('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_85);
    Instrument_85.insert(InstrmtAssignmentMethod_85.getString());
    FIX::InterestAccrualDate InterestAccrualDate_85("LOCALMKTDATE_667861560");
    noRelatedSym_0_1.set(InterestAccrualDate_85);
    Instrument_85.insert(InterestAccrualDate_85.getString());
    FIX::IssueDate IssueDate_85("LOCALMKTDATE_944897408");
    noRelatedSym_0_1.set(IssueDate_85);
    Instrument_85.insert(IssueDate_85.getString());
    FIX::Issuer Issuer_85("STRING_1079649065");
    noRelatedSym_0_1.set(Issuer_85);
    Instrument_85.insert(Issuer_85.getString());
    FIX::ListMethod ListMethod_85(1);
    noRelatedSym_0_1.set(ListMethod_85);
    Instrument_85.insert(ListMethod_85.getString());
    FIX::LocaleOfIssue LocaleOfIssue_85("STRING_1380873202");
    noRelatedSym_0_1.set(LocaleOfIssue_85);
    Instrument_85.insert(LocaleOfIssue_85.getString());
    FIX::MaturityDate MaturityDate_85("LOCALMKTDATE_1167621128");
    noRelatedSym_0_1.set(MaturityDate_85);
    Instrument_85.insert(MaturityDate_85.getString());
    FIX::MaturityMonthYear MaturityMonthYear_85("MONTHYEAR_984150991");
    noRelatedSym_0_1.set(MaturityMonthYear_85);
    Instrument_85.insert(MaturityMonthYear_85.getString());
    FIX::MaturityTime MaturityTime_85("TZTIMEONLY_1563891647");
    noRelatedSym_0_1.set(MaturityTime_85);
    Instrument_85.insert(MaturityTime_85.getString());
    FIX::MinPriceIncrement MinPriceIncrement_85;
    MinPriceIncrement_85.setString("6728224");
    noRelatedSym_0_1.set(MinPriceIncrement_85);
    Instrument_85.insert(MinPriceIncrement_85.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_85;
    MinPriceIncrementAmount_85.setString("19918582");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_85);
    Instrument_85.insert(MinPriceIncrementAmount_85.getString());
    FIX::NTPositionLimit NTPositionLimit_85(1386405375);
    noRelatedSym_0_1.set(NTPositionLimit_85);
    Instrument_85.insert(NTPositionLimit_85.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_85;
    NotionalPercentageOutstanding_85.setString("25.790000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_85);
    Instrument_85.insert(NotionalPercentageOutstanding_85.getString());
    FIX::OptAttribute OptAttribute_85('4');
    noRelatedSym_0_1.set(OptAttribute_85);
    Instrument_85.insert(OptAttribute_85.getString());
    FIX::OptPayoutAmount OptPayoutAmount_85;
    OptPayoutAmount_85.setString("2098237");
    noRelatedSym_0_1.set(OptPayoutAmount_85);
    Instrument_85.insert(OptPayoutAmount_85.getString());
    FIX::OptPayoutType OptPayoutType_85(1);
    noRelatedSym_0_1.set(OptPayoutType_85);
    Instrument_85.insert(OptPayoutType_85.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_85;
    OriginalNotionalPercentageOutstanding_85.setString("14.720000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_85);
    Instrument_85.insert(OriginalNotionalPercentageOutstanding_85.getString());
    FIX::Pool Pool_85("STRING_1797471566");
    noRelatedSym_0_1.set(Pool_85);
    Instrument_85.insert(Pool_85.getString());
    FIX::PositionLimit PositionLimit_85(1489779842);
    noRelatedSym_0_1.set(PositionLimit_85);
    Instrument_85.insert(PositionLimit_85.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_85("STRING_INX");
    noRelatedSym_0_1.set(PriceQuoteMethod_85);
    Instrument_85.insert(PriceQuoteMethod_85.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_85("STRING_3630954");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_85);
    Instrument_85.insert(PriceUnitOfMeasure_85.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_85;
    PriceUnitOfMeasureQty_85.setString("9686314");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_85);
    Instrument_85.insert(PriceUnitOfMeasureQty_85.getString());
    FIX::Product Product_87(7);
    noRelatedSym_0_1.set(Product_87);
    Instrument_85.insert(Product_87.getString());
    FIX::ProductComplex ProductComplex_85("STRING_1317577526");
    noRelatedSym_0_1.set(ProductComplex_85);
    Instrument_85.insert(ProductComplex_85.getString());
    FIX::PutOrCall PutOrCall_85(1);
    noRelatedSym_0_1.set(PutOrCall_85);
    Instrument_85.insert(PutOrCall_85.getString());
    FIX::RedemptionDate RedemptionDate_85("LOCALMKTDATE_1257657173");
    noRelatedSym_0_1.set(RedemptionDate_85);
    Instrument_85.insert(RedemptionDate_85.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_85("STRING_2003607260");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_85);
    Instrument_85.insert(RepoCollateralSecurityType_85.getString());
    FIX::RepurchaseRate RepurchaseRate_85;
    RepurchaseRate_85.setString("2.830000");
    noRelatedSym_0_1.set(RepurchaseRate_85);
    Instrument_85.insert(RepurchaseRate_85.getString());
    FIX::RepurchaseTerm RepurchaseTerm_85(947559281);
    noRelatedSym_0_1.set(RepurchaseTerm_85);
    Instrument_85.insert(RepurchaseTerm_85.getString());
    FIX::RestructuringType RestructuringType_85("STRING_XR");
    noRelatedSym_0_1.set(RestructuringType_85);
    Instrument_85.insert(RestructuringType_85.getString());
    FIX::SecurityDesc SecurityDesc_85("STRING_832061635");
    noRelatedSym_0_1.set(SecurityDesc_85);
    Instrument_85.insert(SecurityDesc_85.getString());
    FIX::SecurityExchange SecurityExchange_85("EXCHANGE_98171728");
    noRelatedSym_0_1.set(SecurityExchange_85);
    Instrument_85.insert(SecurityExchange_85.getString());
    FIX::SecurityGroup SecurityGroup_85("STRING_1663207719");
    noRelatedSym_0_1.set(SecurityGroup_85);
    Instrument_85.insert(SecurityGroup_85.getString());
    FIX::SecurityID SecurityID_85("STRING_1776959043");
    noRelatedSym_0_1.set(SecurityID_85);
    Instrument_85.insert(SecurityID_85.getString());
    FIX::SecurityIDSource SecurityIDSource_85("STRING_I");
    noRelatedSym_0_1.set(SecurityIDSource_85);
    Instrument_85.insert(SecurityIDSource_85.getString());
    FIX::SecurityStatus SecurityStatus_85("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_85);
    Instrument_85.insert(SecurityStatus_85.getString());
    FIX::SecuritySubType SecuritySubType_86("STRING_1010348598");
    noRelatedSym_0_1.set(SecuritySubType_86);
    Instrument_85.insert(SecuritySubType_86.getString());
    FIX::SecurityType SecurityType_87("STRING_RETIRED");
    noRelatedSym_0_1.set(SecurityType_87);
    Instrument_85.insert(SecurityType_87.getString());
    FIX::Seniority Seniority_85("STRING_SB");
    noRelatedSym_0_1.set(Seniority_85);
    Instrument_85.insert(Seniority_85.getString());
    FIX::SettlMethod SettlMethod_85('P');
    noRelatedSym_0_1.set(SettlMethod_85);
    Instrument_85.insert(SettlMethod_85.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_85("STRING_870780756");
    noRelatedSym_0_1.set(SettleOnOpenFlag_85);
    Instrument_85.insert(SettleOnOpenFlag_85.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_85("STRING_353599028");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_85);
    Instrument_85.insert(StateOrProvinceOfIssue_85.getString());
    FIX::StrikeCurrency StrikeCurrency_85("JPY");
    noRelatedSym_0_1.set(StrikeCurrency_85);
    Instrument_85.insert(StrikeCurrency_85.getString());
    FIX::StrikeMultiplier StrikeMultiplier_85;
    StrikeMultiplier_85.setString("8354998");
    noRelatedSym_0_1.set(StrikeMultiplier_85);
    Instrument_85.insert(StrikeMultiplier_85.getString());
    FIX::StrikePrice StrikePrice_85;
    StrikePrice_85.setString("20229857");
    noRelatedSym_0_1.set(StrikePrice_85);
    Instrument_85.insert(StrikePrice_85.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_85(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_85);
    Instrument_85.insert(StrikePriceBoundaryMethod_85.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_85;
    StrikePriceBoundaryPrecision_85.setString("77.120000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_85);
    Instrument_85.insert(StrikePriceBoundaryPrecision_85.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_85(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_85);
    Instrument_85.insert(StrikePriceDeterminationMethod_85.getString());
    FIX::StrikeValue StrikeValue_85;
    StrikeValue_85.setString("8489606");
    noRelatedSym_0_1.set(StrikeValue_85);
    Instrument_85.insert(StrikeValue_85.getString());
    FIX::Symbol Symbol_85("STRING_1320029005");
    noRelatedSym_0_1.set(Symbol_85);
    Instrument_85.insert(Symbol_85.getString());
    FIX::SymbolSfx SymbolSfx_85("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_85);
    Instrument_85.insert(SymbolSfx_85.getString());
    FIX::TimeUnit TimeUnit_85("STRING_H");
    noRelatedSym_0_1.set(TimeUnit_85);
    Instrument_85.insert(TimeUnit_85.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_85(1);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_85);
    Instrument_85.insert(UnderlyingPriceDeterminationMethod_85.getString());
    FIX::UnitOfMeasure UnitOfMeasure_85("STRING_MMBtu");
    noRelatedSym_0_1.set(UnitOfMeasure_85);
    Instrument_85.insert(UnitOfMeasure_85.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_85;
    UnitOfMeasureQty_85.setString("20073365");
    noRelatedSym_0_1.set(UnitOfMeasureQty_85);
    Instrument_85.insert(UnitOfMeasureQty_85.getString());
    FIX::ValuationMethod ValuationMethod_85("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_85);
    Instrument_85.insert(ValuationMethod_85.getString());
    all_values.push_back(Instrument_85);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_160;
      FIX::ComplexEventCondition ComplexEventCondition_160(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventCondition_160.getString());
      FIX::ComplexEventPrice ComplexEventPrice_160;
      ComplexEventPrice_160.setString("1911831");
      noComplexEvents_1_1_0.set(ComplexEventPrice_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventPrice_160.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_160(4);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceBoundaryMethod_160.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_160;
      ComplexEventPriceBoundaryPrecision_160.setString("48.100000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceBoundaryPrecision_160.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_160(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceTimeType_160.getString());
      FIX::ComplexEventType ComplexEventType_160(1);
      noComplexEvents_1_1_0.set(ComplexEventType_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexEventType_160.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_160;
      ComplexOptPayoutAmount_160.setString("17108402");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_160);
      ComplexEvents_NoComplexEvents_160.insert(ComplexOptPayoutAmount_160.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_160);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_323;
        FIX::ComplexEventEndDate ComplexEventEndDate_323(FIX::UTCTIMESTAMP(12, 40, 10, 25, 10, 2007));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_323);
        ComplexEventDates_NoComplexEventDates_323.insert(ComplexEventEndDate_323.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_323(FIX::UTCTIMESTAMP(5, 19, 31, 21, 8, 2012));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_323);
        ComplexEventDates_NoComplexEventDates_323.insert(ComplexEventStartDate_323.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_323);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_650;
          FIX::ComplexEventEndTime ComplexEventEndTime_650(FIX::UTCTIMEONLY(19, 6, 28));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_650);
          ComplexEventTimes_NoComplexEventTimes_650.insert(ComplexEventEndTime_650.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_650(FIX::UTCTIMEONLY(18, 1, 2));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_650);
          ComplexEventTimes_NoComplexEventTimes_650.insert(ComplexEventStartTime_650.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_650);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_651;
          FIX::ComplexEventEndTime ComplexEventEndTime_651(FIX::UTCTIMEONLY(19, 17, 55));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_651);
          ComplexEventTimes_NoComplexEventTimes_651.insert(ComplexEventEndTime_651.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_651(FIX::UTCTIMEONLY(12, 13, 40));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_651);
          ComplexEventTimes_NoComplexEventTimes_651.insert(ComplexEventStartTime_651.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_651);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_324;
        FIX::ComplexEventEndDate ComplexEventEndDate_324(FIX::UTCTIMESTAMP(13, 12, 1, 3, 10, 2000));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_324);
        ComplexEventDates_NoComplexEventDates_324.insert(ComplexEventEndDate_324.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_324(FIX::UTCTIMESTAMP(2, 31, 24, 19, 7, 2012));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_324);
        ComplexEventDates_NoComplexEventDates_324.insert(ComplexEventStartDate_324.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_324);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_652;
          FIX::ComplexEventEndTime ComplexEventEndTime_652(FIX::UTCTIMEONLY(17, 33, 10));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_652);
          ComplexEventTimes_NoComplexEventTimes_652.insert(ComplexEventEndTime_652.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_652(FIX::UTCTIMEONLY(7, 3, 6));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_652);
          ComplexEventTimes_NoComplexEventTimes_652.insert(ComplexEventStartTime_652.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_652);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_161;
      FIX::ComplexEventCondition ComplexEventCondition_161(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_161);
      ComplexEvents_NoComplexEvents_161.insert(ComplexEventCondition_161.getString());
      FIX::ComplexEventPrice ComplexEventPrice_161;
      ComplexEventPrice_161.setString("7146303");
      noComplexEvents_1_1_1.set(ComplexEventPrice_161);
      ComplexEvents_NoComplexEvents_161.insert(ComplexEventPrice_161.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_161(5);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_161);
      ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceBoundaryMethod_161.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_161;
      ComplexEventPriceBoundaryPrecision_161.setString("80.110000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_161);
      ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceBoundaryPrecision_161.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_161(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_161);
      ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceTimeType_161.getString());
      FIX::ComplexEventType ComplexEventType_161(8);
      noComplexEvents_1_1_1.set(ComplexEventType_161);
      ComplexEvents_NoComplexEvents_161.insert(ComplexEventType_161.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_161;
      ComplexOptPayoutAmount_161.setString("60688");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_161);
      ComplexEvents_NoComplexEvents_161.insert(ComplexOptPayoutAmount_161.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_161);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_325;
        FIX::ComplexEventEndDate ComplexEventEndDate_325(FIX::UTCTIMESTAMP(10, 20, 12, 13, 10, 2007));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_325);
        ComplexEventDates_NoComplexEventDates_325.insert(ComplexEventEndDate_325.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_325(FIX::UTCTIMESTAMP(4, 48, 11, 3, 8, 2010));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_325);
        ComplexEventDates_NoComplexEventDates_325.insert(ComplexEventStartDate_325.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_325);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_653;
          FIX::ComplexEventEndTime ComplexEventEndTime_653(FIX::UTCTIMEONLY(15, 7, 28));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_653);
          ComplexEventTimes_NoComplexEventTimes_653.insert(ComplexEventEndTime_653.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_653(FIX::UTCTIMEONLY(14, 23, 14));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_653);
          ComplexEventTimes_NoComplexEventTimes_653.insert(ComplexEventStartTime_653.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_653);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_326;
        FIX::ComplexEventEndDate ComplexEventEndDate_326(FIX::UTCTIMESTAMP(2, 38, 18, 21, 11, 2003));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_326);
        ComplexEventDates_NoComplexEventDates_326.insert(ComplexEventEndDate_326.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_326(FIX::UTCTIMESTAMP(5, 53, 21, 25, 8, 2016));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_326);
        ComplexEventDates_NoComplexEventDates_326.insert(ComplexEventStartDate_326.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_326);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_654;
          FIX::ComplexEventEndTime ComplexEventEndTime_654(FIX::UTCTIMEONLY(2, 19, 45));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_654);
          ComplexEventTimes_NoComplexEventTimes_654.insert(ComplexEventEndTime_654.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_654(FIX::UTCTIMEONLY(14, 55, 48));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_654);
          ComplexEventTimes_NoComplexEventTimes_654.insert(ComplexEventStartTime_654.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_654);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_655;
          FIX::ComplexEventEndTime ComplexEventEndTime_655(FIX::UTCTIMEONLY(15, 56, 31));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_655);
          ComplexEventTimes_NoComplexEventTimes_655.insert(ComplexEventEndTime_655.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_655(FIX::UTCTIMEONLY(14, 55, 12));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_655);
          ComplexEventTimes_NoComplexEventTimes_655.insert(ComplexEventStartTime_655.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_655);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_656;
          FIX::ComplexEventEndTime ComplexEventEndTime_656(FIX::UTCTIMEONLY(21, 42, 3));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_656);
          ComplexEventTimes_NoComplexEventTimes_656.insert(ComplexEventEndTime_656.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_656(FIX::UTCTIMEONLY(16, 10, 15));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_656);
          ComplexEventTimes_NoComplexEventTimes_656.insert(ComplexEventStartTime_656.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_656);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_162;
      FIX::ComplexEventCondition ComplexEventCondition_162(2);
      noComplexEvents_1_1_2.set(ComplexEventCondition_162);
      ComplexEvents_NoComplexEvents_162.insert(ComplexEventCondition_162.getString());
      FIX::ComplexEventPrice ComplexEventPrice_162;
      ComplexEventPrice_162.setString("10020946");
      noComplexEvents_1_1_2.set(ComplexEventPrice_162);
      ComplexEvents_NoComplexEvents_162.insert(ComplexEventPrice_162.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_162(4);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_162);
      ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceBoundaryMethod_162.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_162;
      ComplexEventPriceBoundaryPrecision_162.setString("97.030000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_162);
      ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceBoundaryPrecision_162.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_162(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_162);
      ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceTimeType_162.getString());
      FIX::ComplexEventType ComplexEventType_162(4);
      noComplexEvents_1_1_2.set(ComplexEventType_162);
      ComplexEvents_NoComplexEvents_162.insert(ComplexEventType_162.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_162;
      ComplexOptPayoutAmount_162.setString("10380953");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_162);
      ComplexEvents_NoComplexEvents_162.insert(ComplexOptPayoutAmount_162.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_162);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_327;
        FIX::ComplexEventEndDate ComplexEventEndDate_327(FIX::UTCTIMESTAMP(12, 10, 3, 22, 10, 2016));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_327);
        ComplexEventDates_NoComplexEventDates_327.insert(ComplexEventEndDate_327.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_327(FIX::UTCTIMESTAMP(12, 40, 37, 11, 7, 2002));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_327);
        ComplexEventDates_NoComplexEventDates_327.insert(ComplexEventStartDate_327.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_327);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_657;
          FIX::ComplexEventEndTime ComplexEventEndTime_657(FIX::UTCTIMEONLY(9, 34, 54));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_657);
          ComplexEventTimes_NoComplexEventTimes_657.insert(ComplexEventEndTime_657.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_657(FIX::UTCTIMEONLY(6, 56, 59));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_657);
          ComplexEventTimes_NoComplexEventTimes_657.insert(ComplexEventStartTime_657.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_657);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_170;
      FIX::EventDate EventDate_170("LOCALMKTDATE_1160829360");
      noEvents_1_1_0.set(EventDate_170);
      EvntGrp_NoEvents_170.insert(EventDate_170.getString());
      FIX::EventPx EventPx_170;
      EventPx_170.setString("18598629");
      noEvents_1_1_0.set(EventPx_170);
      EvntGrp_NoEvents_170.insert(EventPx_170.getString());
      FIX::EventText EventText_170("STRING_1769797731");
      noEvents_1_1_0.set(EventText_170);
      EvntGrp_NoEvents_170.insert(EventText_170.getString());
      FIX::EventTime EventTime_170(FIX::UTCTIMESTAMP(23, 24, 7, 20, 2, 2017));
      noEvents_1_1_0.set(EventTime_170);
      EvntGrp_NoEvents_170.insert(EventTime_170.getString());
      FIX::EventType EventType_170(9);
      noEvents_1_1_0.set(EventType_170);
      EvntGrp_NoEvents_170.insert(EventType_170.getString());
      all_values.push_back(EvntGrp_NoEvents_170);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_172;
      FIX::InstrumentPartyID InstrumentPartyID_172("STRING_12533106");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_172);
      InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyID_172.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_172('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_172);
      InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyIDSource_172.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_172(2006109617);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_172);
      InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyRole_172.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_172);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362;
        FIX::InstrumentPartySubID InstrumentPartySubID_362("STRING_520262992");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_362);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362.insert(InstrumentPartySubID_362.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_362(1315258667);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_362);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362.insert(InstrumentPartySubIDType_362.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363;
        FIX::InstrumentPartySubID InstrumentPartySubID_363("STRING_1951348962");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_363);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363.insert(InstrumentPartySubID_363.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_363(475660310);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_363);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363.insert(InstrumentPartySubIDType_363.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_173;
      FIX::InstrumentPartyID InstrumentPartyID_173("STRING_1124039591");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_173);
      InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyID_173.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_173('5');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_173);
      InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyIDSource_173.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_173(1715714562);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_173);
      InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyRole_173.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_173);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364;
        FIX::InstrumentPartySubID InstrumentPartySubID_364("STRING_478685751");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_364);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364.insert(InstrumentPartySubID_364.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_364(1589869228);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_364);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364.insert(InstrumentPartySubIDType_364.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365;
        FIX::InstrumentPartySubID InstrumentPartySubID_365("STRING_1350875741");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_365);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365.insert(InstrumentPartySubID_365.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_365(202416110);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_365);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365.insert(InstrumentPartySubIDType_365.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_174;
      FIX::InstrumentPartyID InstrumentPartyID_174("STRING_1748603965");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_174);
      InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyID_174.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_174('1');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_174);
      InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyIDSource_174.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_174(1658114138);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_174);
      InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyRole_174.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_174);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366;
        FIX::InstrumentPartySubID InstrumentPartySubID_366("STRING_1593888900");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_366);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366.insert(InstrumentPartySubID_366.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_366(1280428221);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_366);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366.insert(InstrumentPartySubIDType_366.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367;
        FIX::InstrumentPartySubID InstrumentPartySubID_367("STRING_623367239");
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubID_367);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367.insert(InstrumentPartySubID_367.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_367(877737987);
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubIDType_367);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367.insert(InstrumentPartySubIDType_367.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368;
        FIX::InstrumentPartySubID InstrumentPartySubID_368("STRING_1940837625");
        noInstrumentPartySubIDs_1_2_2_2.set(InstrumentPartySubID_368);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368.insert(InstrumentPartySubID_368.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_368(1034864406);
        noInstrumentPartySubIDs_1_2_2_2.set(InstrumentPartySubIDType_368);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368.insert(InstrumentPartySubIDType_368.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_190;
      FIX::SecurityAltID SecurityAltID_190("STRING_1556884922");
      noSecurityAltID_1_1_0.set(SecurityAltID_190);
      SecAltIDGrp_NoSecurityAltID_190.insert(SecurityAltID_190.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_190("STRING_676205835");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_190);
      SecAltIDGrp_NoSecurityAltID_190.insert(SecurityAltIDSource_190.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_190);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_191;
      FIX::SecurityAltID SecurityAltID_191("STRING_606862700");
      noSecurityAltID_1_1_1.set(SecurityAltID_191);
      SecAltIDGrp_NoSecurityAltID_191.insert(SecurityAltID_191.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_191("STRING_1080846");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_191);
      SecAltIDGrp_NoSecurityAltID_191.insert(SecurityAltIDSource_191.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_191);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_170;
    FIX::SecurityXML SecurityXML_171("XMLDATA_688738942");
    noRelatedSym_0_1.set(SecurityXML_171);
    FIX::SecurityXMLLen SecurityXMLLen_85(183298892);
    noRelatedSym_0_1.set(SecurityXMLLen_85);
    FIX::SecurityXMLSchema SecurityXMLSchema_85("STRING_2007190463");
    noRelatedSym_0_1.set(SecurityXMLSchema_85);
    SecurityXML_170.insert(SecurityXMLSchema_85.getString());
    all_values.push_back(SecurityXML_170);

    // InstrumentExtension
    multiset<string> InstrumentExtension_15;
    FIX::DeliveryForm DeliveryForm_15(2);
    noRelatedSym_0_1.set(DeliveryForm_15);
    InstrumentExtension_15.insert(DeliveryForm_15.getString());
    FIX::PctAtRisk PctAtRisk_15;
    PctAtRisk_15.setString("18.840000");
    noRelatedSym_0_1.set(PctAtRisk_15);
    InstrumentExtension_15.insert(PctAtRisk_15.getString());
    all_values.push_back(InstrumentExtension_15);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_30;
      FIX::InstrAttribType InstrAttribType_30(22);
      noInstrAttrib_1_1_0.set(InstrAttribType_30);
      AttrbGrp_NoInstrAttrib_30.insert(InstrAttribType_30.getString());
      FIX::InstrAttribValue InstrAttribValue_30("STRING_1179222194");
      noInstrAttrib_1_1_0.set(InstrAttribValue_30);
      AttrbGrp_NoInstrAttrib_30.insert(InstrAttribValue_30.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_30);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_31;
      FIX::InstrAttribType InstrAttribType_31(7);
      noInstrAttrib_1_1_1.set(InstrAttribType_31);
      AttrbGrp_NoInstrAttrib_31.insert(InstrAttribType_31.getString());
      FIX::InstrAttribValue InstrAttribValue_31("STRING_1664245816");
      noInstrAttrib_1_1_1.set(InstrAttribValue_31);
      AttrbGrp_NoInstrAttrib_31.insert(InstrAttribValue_31.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_31);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_32;
      FIX::InstrAttribType InstrAttribType_32(19);
      noInstrAttrib_1_1_2.set(InstrAttribType_32);
      AttrbGrp_NoInstrAttrib_32.insert(InstrAttribType_32.getString());
      FIX::InstrAttribValue InstrAttribValue_32("STRING_608549755");
      noInstrAttrib_1_1_2.set(InstrAttribValue_32);
      AttrbGrp_NoInstrAttrib_32.insert(InstrAttribValue_32.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_32);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_2);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_1;
      FIX::LegSettlType LegSettlType_28('1');
      noLegs_1_1_0.set(LegSettlType_28);
      SecLstUpdRelSymsLegGrp_NoLegs_1.insert(LegSettlType_28.getString());
      FIX::LegSwapType LegSwapType_28(1);
      noLegs_1_1_0.set(LegSwapType_28);
      SecLstUpdRelSymsLegGrp_NoLegs_1.insert(LegSwapType_28.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_135;
      FIX::EncodedLegIssuer EncodedLegIssuer_135("DATA_197864030");
      noLegs_1_1_0.set(EncodedLegIssuer_135);
      InstrumentLeg_135.insert(EncodedLegIssuer_135.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_135(1938442654);
      noLegs_1_1_0.set(EncodedLegIssuerLen_135);
      InstrumentLeg_135.insert(EncodedLegIssuerLen_135.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_135("DATA_1693451468");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_135);
      InstrumentLeg_135.insert(EncodedLegSecurityDesc_135.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_135(1855978168);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_135);
      InstrumentLeg_135.insert(EncodedLegSecurityDescLen_135.getString());
      FIX::LegCFICode LegCFICode_135("STRING_552908683");
      noLegs_1_1_0.set(LegCFICode_135);
      InstrumentLeg_135.insert(LegCFICode_135.getString());
      FIX::LegContractMultiplier LegContractMultiplier_135;
      LegContractMultiplier_135.setString("11398567");
      noLegs_1_1_0.set(LegContractMultiplier_135);
      InstrumentLeg_135.insert(LegContractMultiplier_135.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_135(988922741);
      noLegs_1_1_0.set(LegContractMultiplierUnit_135);
      InstrumentLeg_135.insert(LegContractMultiplierUnit_135.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_135("MONTHYEAR_1176275922");
      noLegs_1_1_0.set(LegContractSettlMonth_135);
      InstrumentLeg_135.insert(LegContractSettlMonth_135.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_135("COUNTRY_2017594708");
      noLegs_1_1_0.set(LegCountryOfIssue_135);
      InstrumentLeg_135.insert(LegCountryOfIssue_135.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_135("LOCALMKTDATE_782276718");
      noLegs_1_1_0.set(LegCouponPaymentDate_135);
      InstrumentLeg_135.insert(LegCouponPaymentDate_135.getString());
      FIX::LegCouponRate LegCouponRate_135;
      LegCouponRate_135.setString("66.810000");
      noLegs_1_1_0.set(LegCouponRate_135);
      InstrumentLeg_135.insert(LegCouponRate_135.getString());
      FIX::LegCreditRating LegCreditRating_135("STRING_363492912");
      noLegs_1_1_0.set(LegCreditRating_135);
      InstrumentLeg_135.insert(LegCreditRating_135.getString());
      FIX::LegCurrency LegCurrency_135("GBP");
      noLegs_1_1_0.set(LegCurrency_135);
      InstrumentLeg_135.insert(LegCurrency_135.getString());
      FIX::LegDatedDate LegDatedDate_135("LOCALMKTDATE_970355612");
      noLegs_1_1_0.set(LegDatedDate_135);
      InstrumentLeg_135.insert(LegDatedDate_135.getString());
      FIX::LegExerciseStyle LegExerciseStyle_135(192758839);
      noLegs_1_1_0.set(LegExerciseStyle_135);
      InstrumentLeg_135.insert(LegExerciseStyle_135.getString());
      FIX::LegFactor LegFactor_135;
      LegFactor_135.setString("14286014");
      noLegs_1_1_0.set(LegFactor_135);
      InstrumentLeg_135.insert(LegFactor_135.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_135(1153654504);
      noLegs_1_1_0.set(LegFlowScheduleType_135);
      InstrumentLeg_135.insert(LegFlowScheduleType_135.getString());
      FIX::LegInstrRegistry LegInstrRegistry_135("STRING_52465654");
      noLegs_1_1_0.set(LegInstrRegistry_135);
      InstrumentLeg_135.insert(LegInstrRegistry_135.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_135("LOCALMKTDATE_594139767");
      noLegs_1_1_0.set(LegInterestAccrualDate_135);
      InstrumentLeg_135.insert(LegInterestAccrualDate_135.getString());
      FIX::LegIssueDate LegIssueDate_135("LOCALMKTDATE_1857216388");
      noLegs_1_1_0.set(LegIssueDate_135);
      InstrumentLeg_135.insert(LegIssueDate_135.getString());
      FIX::LegIssuer LegIssuer_135("STRING_1227431137");
      noLegs_1_1_0.set(LegIssuer_135);
      InstrumentLeg_135.insert(LegIssuer_135.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_135("STRING_1711027038");
      noLegs_1_1_0.set(LegLocaleOfIssue_135);
      InstrumentLeg_135.insert(LegLocaleOfIssue_135.getString());
      FIX::LegMaturityDate LegMaturityDate_135("LOCALMKTDATE_888954935");
      noLegs_1_1_0.set(LegMaturityDate_135);
      InstrumentLeg_135.insert(LegMaturityDate_135.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_135("MONTHYEAR_1378952563");
      noLegs_1_1_0.set(LegMaturityMonthYear_135);
      InstrumentLeg_135.insert(LegMaturityMonthYear_135.getString());
      FIX::LegMaturityTime LegMaturityTime_135("TZTIMEONLY_1227789207");
      noLegs_1_1_0.set(LegMaturityTime_135);
      InstrumentLeg_135.insert(LegMaturityTime_135.getString());
      FIX::LegOptAttribute LegOptAttribute_135('1');
      noLegs_1_1_0.set(LegOptAttribute_135);
      InstrumentLeg_135.insert(LegOptAttribute_135.getString());
      FIX::LegOptionRatio LegOptionRatio_135;
      LegOptionRatio_135.setString("19875023");
      noLegs_1_1_0.set(LegOptionRatio_135);
      InstrumentLeg_135.insert(LegOptionRatio_135.getString());
      FIX::LegPool LegPool_135("STRING_1223237127");
      noLegs_1_1_0.set(LegPool_135);
      InstrumentLeg_135.insert(LegPool_135.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_135("STRING_1826246732");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_135);
      InstrumentLeg_135.insert(LegPriceUnitOfMeasure_135.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_135;
      LegPriceUnitOfMeasureQty_135.setString("17994441");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_135);
      InstrumentLeg_135.insert(LegPriceUnitOfMeasureQty_135.getString());
      FIX::LegProduct LegProduct_135(1421101157);
      noLegs_1_1_0.set(LegProduct_135);
      InstrumentLeg_135.insert(LegProduct_135.getString());
      FIX::LegPutOrCall LegPutOrCall_135(1617205738);
      noLegs_1_1_0.set(LegPutOrCall_135);
      InstrumentLeg_135.insert(LegPutOrCall_135.getString());
      FIX::LegRatioQty LegRatioQty_135;
      LegRatioQty_135.setString("13454119");
      noLegs_1_1_0.set(LegRatioQty_135);
      InstrumentLeg_135.insert(LegRatioQty_135.getString());
      FIX::LegRedemptionDate LegRedemptionDate_135("LOCALMKTDATE_1129595677");
      noLegs_1_1_0.set(LegRedemptionDate_135);
      InstrumentLeg_135.insert(LegRedemptionDate_135.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_135("STRING_22630773");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_135);
      InstrumentLeg_135.insert(LegRepoCollateralSecurityType_135.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_135;
      LegRepurchaseRate_135.setString("50.590000");
      noLegs_1_1_0.set(LegRepurchaseRate_135);
      InstrumentLeg_135.insert(LegRepurchaseRate_135.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_135(2118518418);
      noLegs_1_1_0.set(LegRepurchaseTerm_135);
      InstrumentLeg_135.insert(LegRepurchaseTerm_135.getString());
      FIX::LegSecurityDesc LegSecurityDesc_135("STRING_1198906696");
      noLegs_1_1_0.set(LegSecurityDesc_135);
      InstrumentLeg_135.insert(LegSecurityDesc_135.getString());
      FIX::LegSecurityExchange LegSecurityExchange_135("EXCHANGE_207896120");
      noLegs_1_1_0.set(LegSecurityExchange_135);
      InstrumentLeg_135.insert(LegSecurityExchange_135.getString());
      FIX::LegSecurityID LegSecurityID_135("STRING_753311488");
      noLegs_1_1_0.set(LegSecurityID_135);
      InstrumentLeg_135.insert(LegSecurityID_135.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_135("STRING_1262563377");
      noLegs_1_1_0.set(LegSecurityIDSource_135);
      InstrumentLeg_135.insert(LegSecurityIDSource_135.getString());
      FIX::LegSecuritySubType LegSecuritySubType_135("STRING_571389032");
      noLegs_1_1_0.set(LegSecuritySubType_135);
      InstrumentLeg_135.insert(LegSecuritySubType_135.getString());
      FIX::LegSecurityType LegSecurityType_135("STRING_944989481");
      noLegs_1_1_0.set(LegSecurityType_135);
      InstrumentLeg_135.insert(LegSecurityType_135.getString());
      FIX::LegSide LegSide_135('2');
      noLegs_1_1_0.set(LegSide_135);
      InstrumentLeg_135.insert(LegSide_135.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_135("STRING_1541744645");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_135);
      InstrumentLeg_135.insert(LegStateOrProvinceOfIssue_135.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_135("JPY");
      noLegs_1_1_0.set(LegStrikeCurrency_135);
      InstrumentLeg_135.insert(LegStrikeCurrency_135.getString());
      FIX::LegStrikePrice LegStrikePrice_135;
      LegStrikePrice_135.setString("5479155");
      noLegs_1_1_0.set(LegStrikePrice_135);
      InstrumentLeg_135.insert(LegStrikePrice_135.getString());
      FIX::LegSymbol LegSymbol_135("STRING_1190213975");
      noLegs_1_1_0.set(LegSymbol_135);
      InstrumentLeg_135.insert(LegSymbol_135.getString());
      FIX::LegSymbolSfx LegSymbolSfx_135("STRING_1877683471");
      noLegs_1_1_0.set(LegSymbolSfx_135);
      InstrumentLeg_135.insert(LegSymbolSfx_135.getString());
      FIX::LegTimeUnit LegTimeUnit_135("STRING_257648242");
      noLegs_1_1_0.set(LegTimeUnit_135);
      InstrumentLeg_135.insert(LegTimeUnit_135.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_135("STRING_270161464");
      noLegs_1_1_0.set(LegUnitOfMeasure_135);
      InstrumentLeg_135.insert(LegUnitOfMeasure_135.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_135;
      LegUnitOfMeasureQty_135.setString("14412268");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_135);
      InstrumentLeg_135.insert(LegUnitOfMeasureQty_135.getString());
      all_values.push_back(InstrumentLeg_135);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_262;
        FIX::LegSecurityAltID LegSecurityAltID_262("STRING_1649114027");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_262);
        LegSecAltIDGrp_NoLegSecurityAltID_262.insert(LegSecurityAltID_262.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_262("STRING_521532421");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_262);
        LegSecAltIDGrp_NoLegSecurityAltID_262.insert(LegSecurityAltIDSource_262.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_262);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_16;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_16("CAN");
      noLegs_1_1_0.set(LegBenchmarkCurveCurrency_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurveCurrency_16.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_16("STRING_1744769548");
      noLegs_1_1_0.set(LegBenchmarkCurveName_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurveName_16.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_16("STRING_314290657");
      noLegs_1_1_0.set(LegBenchmarkCurvePoint_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurvePoint_16.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_16;
      LegBenchmarkPrice_16.setString("11410932");
      noLegs_1_1_0.set(LegBenchmarkPrice_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkPrice_16.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_16(1018387057);
      noLegs_1_1_0.set(LegBenchmarkPriceType_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkPriceType_16.getString());
      all_values.push_back(LegBenchmarkCurveData_16);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_59;
        FIX::LegStipulationType LegStipulationType_59("STRING_339021553");
        noLegStipulations_1_0_2_0.set(LegStipulationType_59);
        LegStipulations_NoLegStipulations_59.insert(LegStipulationType_59.getString());
        FIX::LegStipulationValue LegStipulationValue_59("STRING_499086");
        noLegStipulations_1_0_2_0.set(LegStipulationValue_59);
        LegStipulations_NoLegStipulations_59.insert(LegStipulationValue_59.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_59);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_60;
        FIX::LegStipulationType LegStipulationType_60("STRING_1954127169");
        noLegStipulations_1_0_2_1.set(LegStipulationType_60);
        LegStipulations_NoLegStipulations_60.insert(LegStipulationType_60.getString());
        FIX::LegStipulationValue LegStipulationValue_60("STRING_676806613");
        noLegStipulations_1_0_2_1.set(LegStipulationValue_60);
        LegStipulations_NoLegStipulations_60.insert(LegStipulationValue_60.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_60);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_61;
        FIX::LegStipulationType LegStipulationType_61("STRING_2119017504");
        noLegStipulations_1_0_2_2.set(LegStipulationType_61);
        LegStipulations_NoLegStipulations_61.insert(LegStipulationType_61.getString());
        FIX::LegStipulationValue LegStipulationValue_61("STRING_1005550217");
        noLegStipulations_1_0_2_2.set(LegStipulationValue_61);
        LegStipulations_NoLegStipulations_61.insert(LegStipulationValue_61.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_61);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_1;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_2;
      FIX::LegSettlType LegSettlType_29('8');
      noLegs_1_1_1.set(LegSettlType_29);
      SecLstUpdRelSymsLegGrp_NoLegs_2.insert(LegSettlType_29.getString());
      FIX::LegSwapType LegSwapType_29(1);
      noLegs_1_1_1.set(LegSwapType_29);
      SecLstUpdRelSymsLegGrp_NoLegs_2.insert(LegSwapType_29.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_2);

      // InstrumentLeg
      multiset<string> InstrumentLeg_136;
      FIX::EncodedLegIssuer EncodedLegIssuer_136("DATA_120629946");
      noLegs_1_1_1.set(EncodedLegIssuer_136);
      InstrumentLeg_136.insert(EncodedLegIssuer_136.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_136(1456091765);
      noLegs_1_1_1.set(EncodedLegIssuerLen_136);
      InstrumentLeg_136.insert(EncodedLegIssuerLen_136.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_136("DATA_1669834826");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_136);
      InstrumentLeg_136.insert(EncodedLegSecurityDesc_136.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_136(2123055839);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_136);
      InstrumentLeg_136.insert(EncodedLegSecurityDescLen_136.getString());
      FIX::LegCFICode LegCFICode_136("STRING_850352762");
      noLegs_1_1_1.set(LegCFICode_136);
      InstrumentLeg_136.insert(LegCFICode_136.getString());
      FIX::LegContractMultiplier LegContractMultiplier_136;
      LegContractMultiplier_136.setString("6600994");
      noLegs_1_1_1.set(LegContractMultiplier_136);
      InstrumentLeg_136.insert(LegContractMultiplier_136.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_136(1259115895);
      noLegs_1_1_1.set(LegContractMultiplierUnit_136);
      InstrumentLeg_136.insert(LegContractMultiplierUnit_136.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_136("MONTHYEAR_1398268264");
      noLegs_1_1_1.set(LegContractSettlMonth_136);
      InstrumentLeg_136.insert(LegContractSettlMonth_136.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_136("COUNTRY_1850313473");
      noLegs_1_1_1.set(LegCountryOfIssue_136);
      InstrumentLeg_136.insert(LegCountryOfIssue_136.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_136("LOCALMKTDATE_989315719");
      noLegs_1_1_1.set(LegCouponPaymentDate_136);
      InstrumentLeg_136.insert(LegCouponPaymentDate_136.getString());
      FIX::LegCouponRate LegCouponRate_136;
      LegCouponRate_136.setString("65.060000");
      noLegs_1_1_1.set(LegCouponRate_136);
      InstrumentLeg_136.insert(LegCouponRate_136.getString());
      FIX::LegCreditRating LegCreditRating_136("STRING_2120474937");
      noLegs_1_1_1.set(LegCreditRating_136);
      InstrumentLeg_136.insert(LegCreditRating_136.getString());
      FIX::LegCurrency LegCurrency_136("CHF");
      noLegs_1_1_1.set(LegCurrency_136);
      InstrumentLeg_136.insert(LegCurrency_136.getString());
      FIX::LegDatedDate LegDatedDate_136("LOCALMKTDATE_1622105316");
      noLegs_1_1_1.set(LegDatedDate_136);
      InstrumentLeg_136.insert(LegDatedDate_136.getString());
      FIX::LegExerciseStyle LegExerciseStyle_136(804591354);
      noLegs_1_1_1.set(LegExerciseStyle_136);
      InstrumentLeg_136.insert(LegExerciseStyle_136.getString());
      FIX::LegFactor LegFactor_136;
      LegFactor_136.setString("12905636");
      noLegs_1_1_1.set(LegFactor_136);
      InstrumentLeg_136.insert(LegFactor_136.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_136(963754365);
      noLegs_1_1_1.set(LegFlowScheduleType_136);
      InstrumentLeg_136.insert(LegFlowScheduleType_136.getString());
      FIX::LegInstrRegistry LegInstrRegistry_136("STRING_401877254");
      noLegs_1_1_1.set(LegInstrRegistry_136);
      InstrumentLeg_136.insert(LegInstrRegistry_136.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_136("LOCALMKTDATE_1604854264");
      noLegs_1_1_1.set(LegInterestAccrualDate_136);
      InstrumentLeg_136.insert(LegInterestAccrualDate_136.getString());
      FIX::LegIssueDate LegIssueDate_136("LOCALMKTDATE_2104847580");
      noLegs_1_1_1.set(LegIssueDate_136);
      InstrumentLeg_136.insert(LegIssueDate_136.getString());
      FIX::LegIssuer LegIssuer_136("STRING_1420264311");
      noLegs_1_1_1.set(LegIssuer_136);
      InstrumentLeg_136.insert(LegIssuer_136.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_136("STRING_1388867012");
      noLegs_1_1_1.set(LegLocaleOfIssue_136);
      InstrumentLeg_136.insert(LegLocaleOfIssue_136.getString());
      FIX::LegMaturityDate LegMaturityDate_136("LOCALMKTDATE_296385486");
      noLegs_1_1_1.set(LegMaturityDate_136);
      InstrumentLeg_136.insert(LegMaturityDate_136.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_136("MONTHYEAR_1420763397");
      noLegs_1_1_1.set(LegMaturityMonthYear_136);
      InstrumentLeg_136.insert(LegMaturityMonthYear_136.getString());
      FIX::LegMaturityTime LegMaturityTime_136("TZTIMEONLY_1195510533");
      noLegs_1_1_1.set(LegMaturityTime_136);
      InstrumentLeg_136.insert(LegMaturityTime_136.getString());
      FIX::LegOptAttribute LegOptAttribute_136('9');
      noLegs_1_1_1.set(LegOptAttribute_136);
      InstrumentLeg_136.insert(LegOptAttribute_136.getString());
      FIX::LegOptionRatio LegOptionRatio_136;
      LegOptionRatio_136.setString("13922972");
      noLegs_1_1_1.set(LegOptionRatio_136);
      InstrumentLeg_136.insert(LegOptionRatio_136.getString());
      FIX::LegPool LegPool_136("STRING_53577102");
      noLegs_1_1_1.set(LegPool_136);
      InstrumentLeg_136.insert(LegPool_136.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_136("STRING_1857894832");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_136);
      InstrumentLeg_136.insert(LegPriceUnitOfMeasure_136.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_136;
      LegPriceUnitOfMeasureQty_136.setString("21171425");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_136);
      InstrumentLeg_136.insert(LegPriceUnitOfMeasureQty_136.getString());
      FIX::LegProduct LegProduct_136(174207048);
      noLegs_1_1_1.set(LegProduct_136);
      InstrumentLeg_136.insert(LegProduct_136.getString());
      FIX::LegPutOrCall LegPutOrCall_136(1166502949);
      noLegs_1_1_1.set(LegPutOrCall_136);
      InstrumentLeg_136.insert(LegPutOrCall_136.getString());
      FIX::LegRatioQty LegRatioQty_136;
      LegRatioQty_136.setString("16394937");
      noLegs_1_1_1.set(LegRatioQty_136);
      InstrumentLeg_136.insert(LegRatioQty_136.getString());
      FIX::LegRedemptionDate LegRedemptionDate_136("LOCALMKTDATE_149779239");
      noLegs_1_1_1.set(LegRedemptionDate_136);
      InstrumentLeg_136.insert(LegRedemptionDate_136.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_136("STRING_2016855712");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_136);
      InstrumentLeg_136.insert(LegRepoCollateralSecurityType_136.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_136;
      LegRepurchaseRate_136.setString("96.260000");
      noLegs_1_1_1.set(LegRepurchaseRate_136);
      InstrumentLeg_136.insert(LegRepurchaseRate_136.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_136(1408895135);
      noLegs_1_1_1.set(LegRepurchaseTerm_136);
      InstrumentLeg_136.insert(LegRepurchaseTerm_136.getString());
      FIX::LegSecurityDesc LegSecurityDesc_136("STRING_1267640328");
      noLegs_1_1_1.set(LegSecurityDesc_136);
      InstrumentLeg_136.insert(LegSecurityDesc_136.getString());
      FIX::LegSecurityExchange LegSecurityExchange_136("EXCHANGE_2002423099");
      noLegs_1_1_1.set(LegSecurityExchange_136);
      InstrumentLeg_136.insert(LegSecurityExchange_136.getString());
      FIX::LegSecurityID LegSecurityID_136("STRING_250727206");
      noLegs_1_1_1.set(LegSecurityID_136);
      InstrumentLeg_136.insert(LegSecurityID_136.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_136("STRING_776073186");
      noLegs_1_1_1.set(LegSecurityIDSource_136);
      InstrumentLeg_136.insert(LegSecurityIDSource_136.getString());
      FIX::LegSecuritySubType LegSecuritySubType_136("STRING_1975414389");
      noLegs_1_1_1.set(LegSecuritySubType_136);
      InstrumentLeg_136.insert(LegSecuritySubType_136.getString());
      FIX::LegSecurityType LegSecurityType_136("STRING_533786139");
      noLegs_1_1_1.set(LegSecurityType_136);
      InstrumentLeg_136.insert(LegSecurityType_136.getString());
      FIX::LegSide LegSide_136('1');
      noLegs_1_1_1.set(LegSide_136);
      InstrumentLeg_136.insert(LegSide_136.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_136("STRING_1450036057");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_136);
      InstrumentLeg_136.insert(LegStateOrProvinceOfIssue_136.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_136("JPY");
      noLegs_1_1_1.set(LegStrikeCurrency_136);
      InstrumentLeg_136.insert(LegStrikeCurrency_136.getString());
      FIX::LegStrikePrice LegStrikePrice_136;
      LegStrikePrice_136.setString("2663067");
      noLegs_1_1_1.set(LegStrikePrice_136);
      InstrumentLeg_136.insert(LegStrikePrice_136.getString());
      FIX::LegSymbol LegSymbol_136("STRING_1740254747");
      noLegs_1_1_1.set(LegSymbol_136);
      InstrumentLeg_136.insert(LegSymbol_136.getString());
      FIX::LegSymbolSfx LegSymbolSfx_136("STRING_31559797");
      noLegs_1_1_1.set(LegSymbolSfx_136);
      InstrumentLeg_136.insert(LegSymbolSfx_136.getString());
      FIX::LegTimeUnit LegTimeUnit_136("STRING_223670707");
      noLegs_1_1_1.set(LegTimeUnit_136);
      InstrumentLeg_136.insert(LegTimeUnit_136.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_136("STRING_1013035410");
      noLegs_1_1_1.set(LegUnitOfMeasure_136);
      InstrumentLeg_136.insert(LegUnitOfMeasure_136.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_136;
      LegUnitOfMeasureQty_136.setString("14204268");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_136);
      InstrumentLeg_136.insert(LegUnitOfMeasureQty_136.getString());
      all_values.push_back(InstrumentLeg_136);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_263;
        FIX::LegSecurityAltID LegSecurityAltID_263("STRING_286315159");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_263);
        LegSecAltIDGrp_NoLegSecurityAltID_263.insert(LegSecurityAltID_263.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_263("STRING_468453694");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_263);
        LegSecAltIDGrp_NoLegSecurityAltID_263.insert(LegSecurityAltIDSource_263.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_263);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_264;
        FIX::LegSecurityAltID LegSecurityAltID_264("STRING_1493248292");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_264);
        LegSecAltIDGrp_NoLegSecurityAltID_264.insert(LegSecurityAltID_264.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_264("STRING_1678612412");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_264);
        LegSecAltIDGrp_NoLegSecurityAltID_264.insert(LegSecurityAltIDSource_264.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_264);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_17;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_17("JPY");
      noLegs_1_1_1.set(LegBenchmarkCurveCurrency_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurveCurrency_17.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_17("STRING_1648271361");
      noLegs_1_1_1.set(LegBenchmarkCurveName_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurveName_17.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_17("STRING_696237844");
      noLegs_1_1_1.set(LegBenchmarkCurvePoint_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurvePoint_17.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_17;
      LegBenchmarkPrice_17.setString("2226787");
      noLegs_1_1_1.set(LegBenchmarkPrice_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkPrice_17.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_17(1140281489);
      noLegs_1_1_1.set(LegBenchmarkPriceType_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkPriceType_17.getString());
      all_values.push_back(LegBenchmarkCurveData_17);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_62;
        FIX::LegStipulationType LegStipulationType_62("STRING_92050842");
        noLegStipulations_1_1_2_0.set(LegStipulationType_62);
        LegStipulations_NoLegStipulations_62.insert(LegStipulationType_62.getString());
        FIX::LegStipulationValue LegStipulationValue_62("STRING_1292391115");
        noLegStipulations_1_1_2_0.set(LegStipulationValue_62);
        LegStipulations_NoLegStipulations_62.insert(LegStipulationValue_62.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_62);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_63;
        FIX::LegStipulationType LegStipulationType_63("STRING_107428570");
        noLegStipulations_1_1_2_1.set(LegStipulationType_63);
        LegStipulations_NoLegStipulations_63.insert(LegStipulationType_63.getString());
        FIX::LegStipulationValue LegStipulationValue_63("STRING_1359691170");
        noLegStipulations_1_1_2_1.set(LegStipulationValue_63);
        LegStipulations_NoLegStipulations_63.insert(LegStipulationValue_63.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_63);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_2;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_3;
      FIX::LegSettlType LegSettlType_30('1');
      noLegs_1_1_2.set(LegSettlType_30);
      SecLstUpdRelSymsLegGrp_NoLegs_3.insert(LegSettlType_30.getString());
      FIX::LegSwapType LegSwapType_30(1);
      noLegs_1_1_2.set(LegSwapType_30);
      SecLstUpdRelSymsLegGrp_NoLegs_3.insert(LegSwapType_30.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_3);

      // InstrumentLeg
      multiset<string> InstrumentLeg_137;
      FIX::EncodedLegIssuer EncodedLegIssuer_137("DATA_2135764356");
      noLegs_1_1_2.set(EncodedLegIssuer_137);
      InstrumentLeg_137.insert(EncodedLegIssuer_137.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_137(975261307);
      noLegs_1_1_2.set(EncodedLegIssuerLen_137);
      InstrumentLeg_137.insert(EncodedLegIssuerLen_137.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_137("DATA_891941915");
      noLegs_1_1_2.set(EncodedLegSecurityDesc_137);
      InstrumentLeg_137.insert(EncodedLegSecurityDesc_137.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_137(1419389929);
      noLegs_1_1_2.set(EncodedLegSecurityDescLen_137);
      InstrumentLeg_137.insert(EncodedLegSecurityDescLen_137.getString());
      FIX::LegCFICode LegCFICode_137("STRING_277813717");
      noLegs_1_1_2.set(LegCFICode_137);
      InstrumentLeg_137.insert(LegCFICode_137.getString());
      FIX::LegContractMultiplier LegContractMultiplier_137;
      LegContractMultiplier_137.setString("828357");
      noLegs_1_1_2.set(LegContractMultiplier_137);
      InstrumentLeg_137.insert(LegContractMultiplier_137.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_137(1993579109);
      noLegs_1_1_2.set(LegContractMultiplierUnit_137);
      InstrumentLeg_137.insert(LegContractMultiplierUnit_137.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_137("MONTHYEAR_544120492");
      noLegs_1_1_2.set(LegContractSettlMonth_137);
      InstrumentLeg_137.insert(LegContractSettlMonth_137.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_137("COUNTRY_1823090507");
      noLegs_1_1_2.set(LegCountryOfIssue_137);
      InstrumentLeg_137.insert(LegCountryOfIssue_137.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_137("LOCALMKTDATE_2025138906");
      noLegs_1_1_2.set(LegCouponPaymentDate_137);
      InstrumentLeg_137.insert(LegCouponPaymentDate_137.getString());
      FIX::LegCouponRate LegCouponRate_137;
      LegCouponRate_137.setString("11.990000");
      noLegs_1_1_2.set(LegCouponRate_137);
      InstrumentLeg_137.insert(LegCouponRate_137.getString());
      FIX::LegCreditRating LegCreditRating_137("STRING_688642269");
      noLegs_1_1_2.set(LegCreditRating_137);
      InstrumentLeg_137.insert(LegCreditRating_137.getString());
      FIX::LegCurrency LegCurrency_137("EUR");
      noLegs_1_1_2.set(LegCurrency_137);
      InstrumentLeg_137.insert(LegCurrency_137.getString());
      FIX::LegDatedDate LegDatedDate_137("LOCALMKTDATE_974957428");
      noLegs_1_1_2.set(LegDatedDate_137);
      InstrumentLeg_137.insert(LegDatedDate_137.getString());
      FIX::LegExerciseStyle LegExerciseStyle_137(1766535761);
      noLegs_1_1_2.set(LegExerciseStyle_137);
      InstrumentLeg_137.insert(LegExerciseStyle_137.getString());
      FIX::LegFactor LegFactor_137;
      LegFactor_137.setString("6336120");
      noLegs_1_1_2.set(LegFactor_137);
      InstrumentLeg_137.insert(LegFactor_137.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_137(506086192);
      noLegs_1_1_2.set(LegFlowScheduleType_137);
      InstrumentLeg_137.insert(LegFlowScheduleType_137.getString());
      FIX::LegInstrRegistry LegInstrRegistry_137("STRING_141082909");
      noLegs_1_1_2.set(LegInstrRegistry_137);
      InstrumentLeg_137.insert(LegInstrRegistry_137.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_137("LOCALMKTDATE_1837271514");
      noLegs_1_1_2.set(LegInterestAccrualDate_137);
      InstrumentLeg_137.insert(LegInterestAccrualDate_137.getString());
      FIX::LegIssueDate LegIssueDate_137("LOCALMKTDATE_6873906");
      noLegs_1_1_2.set(LegIssueDate_137);
      InstrumentLeg_137.insert(LegIssueDate_137.getString());
      FIX::LegIssuer LegIssuer_137("STRING_837320753");
      noLegs_1_1_2.set(LegIssuer_137);
      InstrumentLeg_137.insert(LegIssuer_137.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_137("STRING_2059950292");
      noLegs_1_1_2.set(LegLocaleOfIssue_137);
      InstrumentLeg_137.insert(LegLocaleOfIssue_137.getString());
      FIX::LegMaturityDate LegMaturityDate_137("LOCALMKTDATE_1147155395");
      noLegs_1_1_2.set(LegMaturityDate_137);
      InstrumentLeg_137.insert(LegMaturityDate_137.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_137("MONTHYEAR_1683337837");
      noLegs_1_1_2.set(LegMaturityMonthYear_137);
      InstrumentLeg_137.insert(LegMaturityMonthYear_137.getString());
      FIX::LegMaturityTime LegMaturityTime_137("TZTIMEONLY_4517486");
      noLegs_1_1_2.set(LegMaturityTime_137);
      InstrumentLeg_137.insert(LegMaturityTime_137.getString());
      FIX::LegOptAttribute LegOptAttribute_137('2');
      noLegs_1_1_2.set(LegOptAttribute_137);
      InstrumentLeg_137.insert(LegOptAttribute_137.getString());
      FIX::LegOptionRatio LegOptionRatio_137;
      LegOptionRatio_137.setString("17907664");
      noLegs_1_1_2.set(LegOptionRatio_137);
      InstrumentLeg_137.insert(LegOptionRatio_137.getString());
      FIX::LegPool LegPool_137("STRING_1364208656");
      noLegs_1_1_2.set(LegPool_137);
      InstrumentLeg_137.insert(LegPool_137.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_137("STRING_1439393428");
      noLegs_1_1_2.set(LegPriceUnitOfMeasure_137);
      InstrumentLeg_137.insert(LegPriceUnitOfMeasure_137.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_137;
      LegPriceUnitOfMeasureQty_137.setString("14385");
      noLegs_1_1_2.set(LegPriceUnitOfMeasureQty_137);
      InstrumentLeg_137.insert(LegPriceUnitOfMeasureQty_137.getString());
      FIX::LegProduct LegProduct_137(1352489364);
      noLegs_1_1_2.set(LegProduct_137);
      InstrumentLeg_137.insert(LegProduct_137.getString());
      FIX::LegPutOrCall LegPutOrCall_137(267171088);
      noLegs_1_1_2.set(LegPutOrCall_137);
      InstrumentLeg_137.insert(LegPutOrCall_137.getString());
      FIX::LegRatioQty LegRatioQty_137;
      LegRatioQty_137.setString("8933804");
      noLegs_1_1_2.set(LegRatioQty_137);
      InstrumentLeg_137.insert(LegRatioQty_137.getString());
      FIX::LegRedemptionDate LegRedemptionDate_137("LOCALMKTDATE_624395645");
      noLegs_1_1_2.set(LegRedemptionDate_137);
      InstrumentLeg_137.insert(LegRedemptionDate_137.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_137("STRING_544984805");
      noLegs_1_1_2.set(LegRepoCollateralSecurityType_137);
      InstrumentLeg_137.insert(LegRepoCollateralSecurityType_137.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_137;
      LegRepurchaseRate_137.setString("62.120000");
      noLegs_1_1_2.set(LegRepurchaseRate_137);
      InstrumentLeg_137.insert(LegRepurchaseRate_137.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_137(470491106);
      noLegs_1_1_2.set(LegRepurchaseTerm_137);
      InstrumentLeg_137.insert(LegRepurchaseTerm_137.getString());
      FIX::LegSecurityDesc LegSecurityDesc_137("STRING_1089105297");
      noLegs_1_1_2.set(LegSecurityDesc_137);
      InstrumentLeg_137.insert(LegSecurityDesc_137.getString());
      FIX::LegSecurityExchange LegSecurityExchange_137("EXCHANGE_651823071");
      noLegs_1_1_2.set(LegSecurityExchange_137);
      InstrumentLeg_137.insert(LegSecurityExchange_137.getString());
      FIX::LegSecurityID LegSecurityID_137("STRING_348146365");
      noLegs_1_1_2.set(LegSecurityID_137);
      InstrumentLeg_137.insert(LegSecurityID_137.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_137("STRING_1856896496");
      noLegs_1_1_2.set(LegSecurityIDSource_137);
      InstrumentLeg_137.insert(LegSecurityIDSource_137.getString());
      FIX::LegSecuritySubType LegSecuritySubType_137("STRING_1340465341");
      noLegs_1_1_2.set(LegSecuritySubType_137);
      InstrumentLeg_137.insert(LegSecuritySubType_137.getString());
      FIX::LegSecurityType LegSecurityType_137("STRING_1646228432");
      noLegs_1_1_2.set(LegSecurityType_137);
      InstrumentLeg_137.insert(LegSecurityType_137.getString());
      FIX::LegSide LegSide_137('9');
      noLegs_1_1_2.set(LegSide_137);
      InstrumentLeg_137.insert(LegSide_137.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_137("STRING_167939121");
      noLegs_1_1_2.set(LegStateOrProvinceOfIssue_137);
      InstrumentLeg_137.insert(LegStateOrProvinceOfIssue_137.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_137("CHF");
      noLegs_1_1_2.set(LegStrikeCurrency_137);
      InstrumentLeg_137.insert(LegStrikeCurrency_137.getString());
      FIX::LegStrikePrice LegStrikePrice_137;
      LegStrikePrice_137.setString("6740253");
      noLegs_1_1_2.set(LegStrikePrice_137);
      InstrumentLeg_137.insert(LegStrikePrice_137.getString());
      FIX::LegSymbol LegSymbol_137("STRING_1406363455");
      noLegs_1_1_2.set(LegSymbol_137);
      InstrumentLeg_137.insert(LegSymbol_137.getString());
      FIX::LegSymbolSfx LegSymbolSfx_137("STRING_1320660145");
      noLegs_1_1_2.set(LegSymbolSfx_137);
      InstrumentLeg_137.insert(LegSymbolSfx_137.getString());
      FIX::LegTimeUnit LegTimeUnit_137("STRING_680899220");
      noLegs_1_1_2.set(LegTimeUnit_137);
      InstrumentLeg_137.insert(LegTimeUnit_137.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_137("STRING_96200561");
      noLegs_1_1_2.set(LegUnitOfMeasure_137);
      InstrumentLeg_137.insert(LegUnitOfMeasure_137.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_137;
      LegUnitOfMeasureQty_137.setString("12331267");
      noLegs_1_1_2.set(LegUnitOfMeasureQty_137);
      InstrumentLeg_137.insert(LegUnitOfMeasureQty_137.getString());
      all_values.push_back(InstrumentLeg_137);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_265;
        FIX::LegSecurityAltID LegSecurityAltID_265("STRING_1779538398");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltID_265);
        LegSecAltIDGrp_NoLegSecurityAltID_265.insert(LegSecurityAltID_265.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_265("STRING_1237644275");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltIDSource_265);
        LegSecAltIDGrp_NoLegSecurityAltID_265.insert(LegSecurityAltIDSource_265.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_265);

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_266;
        FIX::LegSecurityAltID LegSecurityAltID_266("STRING_2120117477");
        noLegSecurityAltID_1_2_2_1.set(LegSecurityAltID_266);
        LegSecAltIDGrp_NoLegSecurityAltID_266.insert(LegSecurityAltID_266.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_266("STRING_1422821157");
        noLegSecurityAltID_1_2_2_1.set(LegSecurityAltIDSource_266);
        LegSecAltIDGrp_NoLegSecurityAltID_266.insert(LegSecurityAltIDSource_266.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_266);

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_18;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_18("EUR");
      noLegs_1_1_2.set(LegBenchmarkCurveCurrency_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurveCurrency_18.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_18("STRING_1424259693");
      noLegs_1_1_2.set(LegBenchmarkCurveName_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurveName_18.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_18("STRING_1806858647");
      noLegs_1_1_2.set(LegBenchmarkCurvePoint_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurvePoint_18.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_18;
      LegBenchmarkPrice_18.setString("16791983");
      noLegs_1_1_2.set(LegBenchmarkPrice_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkPrice_18.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_18(170156497);
      noLegs_1_1_2.set(LegBenchmarkPriceType_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkPriceType_18.getString());
      all_values.push_back(LegBenchmarkCurveData_18);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_64;
        FIX::LegStipulationType LegStipulationType_64("STRING_76699502");
        noLegStipulations_1_2_2_0.set(LegStipulationType_64);
        LegStipulations_NoLegStipulations_64.insert(LegStipulationType_64.getString());
        FIX::LegStipulationValue LegStipulationValue_64("STRING_1146372709");
        noLegStipulations_1_2_2_0.set(LegStipulationValue_64);
        LegStipulations_NoLegStipulations_64.insert(LegStipulationValue_64.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_64);

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_65;
        FIX::LegStipulationType LegStipulationType_65("STRING_754261750");
        noLegStipulations_1_2_2_1.set(LegStipulationType_65);
        LegStipulations_NoLegStipulations_65.insert(LegStipulationType_65.getString());
        FIX::LegStipulationValue LegStipulationValue_65("STRING_1165804799");
        noLegStipulations_1_2_2_1.set(LegStipulationValue_65);
        LegStipulations_NoLegStipulations_65.insert(LegStipulationValue_65.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_65);

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_66;
        FIX::LegStipulationType LegStipulationType_66("STRING_1798195780");
        noLegStipulations_1_2_2_2.set(LegStipulationType_66);
        LegStipulations_NoLegStipulations_66.insert(LegStipulationType_66.getString());
        FIX::LegStipulationValue LegStipulationValue_66("STRING_1102408115");
        noLegStipulations_1_2_2_2.set(LegStipulationValue_66);
        LegStipulations_NoLegStipulations_66.insert(LegStipulationValue_66.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_66);

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_10;
    FIX::ExpirationCycle ExpirationCycle_11(0);
    noRelatedSym_0_1.set(ExpirationCycle_11);
    BaseTradingRules_10.insert(ExpirationCycle_11.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_10(1);
    noRelatedSym_0_1.set(ImpliedMarketIndicator_10);
    BaseTradingRules_10.insert(ImpliedMarketIndicator_10.getString());
    FIX::MaxPriceVariation MaxPriceVariation_10;
    MaxPriceVariation_10.setString("6011529");
    noRelatedSym_0_1.set(MaxPriceVariation_10);
    BaseTradingRules_10.insert(MaxPriceVariation_10.getString());
    FIX::MaxTradeVol MaxTradeVol_10;
    MaxTradeVol_10.setString("18724778");
    noRelatedSym_0_1.set(MaxTradeVol_10);
    BaseTradingRules_10.insert(MaxTradeVol_10.getString());
    FIX::MinTradeVol MinTradeVol_10;
    MinTradeVol_10.setString("11591165");
    noRelatedSym_0_1.set(MinTradeVol_10);
    BaseTradingRules_10.insert(MinTradeVol_10.getString());
    FIX::MultilegModel MultilegModel_12(0);
    noRelatedSym_0_1.set(MultilegModel_12);
    BaseTradingRules_10.insert(MultilegModel_12.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_12(2);
    noRelatedSym_0_1.set(MultilegPriceMethod_12);
    BaseTradingRules_10.insert(MultilegPriceMethod_12.getString());
    FIX::PriceType PriceType_41(4);
    noRelatedSym_0_1.set(PriceType_41);
    BaseTradingRules_10.insert(PriceType_41.getString());
    FIX::RoundLot RoundLot_10;
    RoundLot_10.setString("11253132");
    noRelatedSym_0_1.set(RoundLot_10);
    BaseTradingRules_10.insert(RoundLot_10.getString());
    FIX::TradingCurrency TradingCurrency_10("CHF");
    noRelatedSym_0_1.set(TradingCurrency_10);
    BaseTradingRules_10.insert(TradingCurrency_10.getString());
    all_values.push_back(BaseTradingRules_10);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_20;
      FIX::LotType LotType_23('3');
      noLotTypeRules_1_1_0.set(LotType_23);
      LotTypeRules_NoLotTypeRules_20.insert(LotType_23.getString());
      FIX::MinLotSize MinLotSize_20;
      MinLotSize_20.setString("471284");
      noLotTypeRules_1_1_0.set(MinLotSize_20);
      LotTypeRules_NoLotTypeRules_20.insert(MinLotSize_20.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_20);

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_21;
      FIX::LotType LotType_24('1');
      noLotTypeRules_1_1_1.set(LotType_24);
      LotTypeRules_NoLotTypeRules_21.insert(LotType_24.getString());
      FIX::MinLotSize MinLotSize_21;
      MinLotSize_21.setString("8523304");
      noLotTypeRules_1_1_1.set(MinLotSize_21);
      LotTypeRules_NoLotTypeRules_21.insert(MinLotSize_21.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_21);

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_10;
    FIX::HighLimitPrice HighLimitPrice_10;
    HighLimitPrice_10.setString("197622");
    noRelatedSym_0_1.set(HighLimitPrice_10);
    PriceLimits_10.insert(HighLimitPrice_10.getString());
    FIX::LowLimitPrice LowLimitPrice_10;
    LowLimitPrice_10.setString("1289060");
    noRelatedSym_0_1.set(LowLimitPrice_10);
    PriceLimits_10.insert(LowLimitPrice_10.getString());
    FIX::PriceLimitType PriceLimitType_10(0);
    noRelatedSym_0_1.set(PriceLimitType_10);
    PriceLimits_10.insert(PriceLimitType_10.getString());
    FIX::TradingReferencePrice TradingReferencePrice_10;
    TradingReferencePrice_10.setString("14317895");
    noRelatedSym_0_1.set(TradingReferencePrice_10);
    PriceLimits_10.insert(TradingReferencePrice_10.getString());
    all_values.push_back(PriceLimits_10);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_18;
      FIX::EndTickPriceRange EndTickPriceRange_18;
      EndTickPriceRange_18.setString("9660747");
      noTickRules_1_1_0.set(EndTickPriceRange_18);
      TickRules_NoTickRules_18.insert(EndTickPriceRange_18.getString());
      FIX::StartTickPriceRange StartTickPriceRange_18;
      StartTickPriceRange_18.setString("9635042");
      noTickRules_1_1_0.set(StartTickPriceRange_18);
      TickRules_NoTickRules_18.insert(StartTickPriceRange_18.getString());
      FIX::TickIncrement TickIncrement_18;
      TickIncrement_18.setString("17233222");
      noTickRules_1_1_0.set(TickIncrement_18);
      TickRules_NoTickRules_18.insert(TickIncrement_18.getString());
      FIX::TickRuleType TickRuleType_18(4);
      noTickRules_1_1_0.set(TickRuleType_18);
      TickRules_NoTickRules_18.insert(TickRuleType_18.getString());
      all_values.push_back(TickRules_NoTickRules_18);

      noRelatedSym_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_19;
      FIX::EndTickPriceRange EndTickPriceRange_19;
      EndTickPriceRange_19.setString("10402037");
      noTickRules_1_1_1.set(EndTickPriceRange_19);
      TickRules_NoTickRules_19.insert(EndTickPriceRange_19.getString());
      FIX::StartTickPriceRange StartTickPriceRange_19;
      StartTickPriceRange_19.setString("7222113");
      noTickRules_1_1_1.set(StartTickPriceRange_19);
      TickRules_NoTickRules_19.insert(StartTickPriceRange_19.getString());
      FIX::TickIncrement TickIncrement_19;
      TickIncrement_19.setString("20041071");
      noTickRules_1_1_1.set(TickIncrement_19);
      TickRules_NoTickRules_19.insert(TickIncrement_19.getString());
      FIX::TickRuleType TickRuleType_19(1);
      noTickRules_1_1_1.set(TickRuleType_19);
      TickRules_NoTickRules_19.insert(TickRuleType_19.getString());
      all_values.push_back(TickRules_NoTickRules_19);

      noRelatedSym_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_14;
      FIX::NestedInstrAttribType NestedInstrAttribType_14(959031577);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_14);
      NestedInstrumentAttribute_NoNestedInstrAttrib_14.insert(NestedInstrAttribType_14.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_14("STRING_933742534");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_14);
      NestedInstrumentAttribute_NoNestedInstrAttrib_14.insert(NestedInstrAttribValue_14.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_14);

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_15;
      FIX::NestedInstrAttribType NestedInstrAttribType_15(1364100931);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_15);
      NestedInstrumentAttribute_NoNestedInstrAttrib_15.insert(NestedInstrAttribType_15.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_15("STRING_1560184477");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_15);
      NestedInstrumentAttribute_NoNestedInstrAttrib_15.insert(NestedInstrAttribValue_15.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_15);

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_16;
      FIX::TradingSessionID TradingSessionID_85("STRING_1");
      noTradingSessionRules_1_1_0.set(TradingSessionID_85);
      TradingSessionRulesGrp_NoTradingSessionRules_16.insert(TradingSessionID_85.getString());
      FIX::TradingSessionSubID TradingSessionSubID_85("STRING_7");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_85);
      TradingSessionRulesGrp_NoTradingSessionRules_16.insert(TradingSessionSubID_85.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_16);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_36;
        FIX::ExecInstValue ExecInstValue_36('6');
        noExecInstRules_1_0_2_0.set(ExecInstValue_36);
        ExecInstRules_NoExecInstRules_36.insert(ExecInstValue_36.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_36);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_31;
        FIX::MDBookType MDBookType_33(3);
        noMDFeedTypes_1_0_2_0.set(MDBookType_33);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MDBookType_33.getString());
        FIX::MDFeedType MDFeedType_33("STRING_427949620");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_33);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MDFeedType_33.getString());
        FIX::MarketDepth MarketDepth_34(1478477695);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_34);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MarketDepth_34.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_31);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_39;
        FIX::MatchAlgorithm MatchAlgorithm_39("STRING_475078068");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_39);
        MatchRules_NoMatchRules_39.insert(MatchAlgorithm_39.getString());
        FIX::MatchType MatchType_44("STRING_1");
        noMatchRules_1_0_2_0.set(MatchType_44);
        MatchRules_NoMatchRules_39.insert(MatchType_44.getString());
        all_values.push_back(MatchRules_NoMatchRules_39);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_40;
        FIX::MatchAlgorithm MatchAlgorithm_40("STRING_863179257");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_40);
        MatchRules_NoMatchRules_40.insert(MatchAlgorithm_40.getString());
        FIX::MatchType MatchType_45("STRING_MT");
        noMatchRules_1_0_2_1.set(MatchType_45);
        MatchRules_NoMatchRules_40.insert(MatchType_45.getString());
        all_values.push_back(MatchRules_NoMatchRules_40);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_41;
        FIX::MatchAlgorithm MatchAlgorithm_41("STRING_313468686");
        noMatchRules_1_0_2_2.set(MatchAlgorithm_41);
        MatchRules_NoMatchRules_41.insert(MatchAlgorithm_41.getString());
        FIX::MatchType MatchType_46("STRING_S1");
        noMatchRules_1_0_2_2.set(MatchType_46);
        MatchRules_NoMatchRules_41.insert(MatchType_46.getString());
        all_values.push_back(MatchRules_NoMatchRules_41);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_41;
        FIX::OrdType OrdType_70('E');
        noOrdTypeRules_1_0_2_0.set(OrdType_70);
        OrdTypeRules_NoOrdTypeRules_41.insert(OrdType_70.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_41);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_33;
        FIX::TimeInForce TimeInForce_44('4');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_44);
        TimeInForceRules_NoTimeInForceRules_33.insert(TimeInForce_44.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_33);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_34;
        FIX::TimeInForce TimeInForce_45('0');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_45);
        TimeInForceRules_NoTimeInForceRules_34.insert(TimeInForce_45.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_34);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_35;
        FIX::TimeInForce TimeInForce_46('3');
        noTimeInForceRules_1_0_2_2.set(TimeInForce_46);
        TimeInForceRules_NoTimeInForceRules_35.insert(TimeInForce_46.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_35);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_31;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_31("EUR");
    noRelatedSym_0_1.set(BenchmarkCurveCurrency_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurveCurrency_31.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_31("STRING_OTHER");
    noRelatedSym_0_1.set(BenchmarkCurveName_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurveName_31.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_31("STRING_1841379084");
    noRelatedSym_0_1.set(BenchmarkCurvePoint_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurvePoint_31.getString());
    FIX::BenchmarkPrice BenchmarkPrice_31;
    BenchmarkPrice_31.setString("3901242");
    noRelatedSym_0_1.set(BenchmarkPrice_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkPrice_31.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_31(906486792);
    noRelatedSym_0_1.set(BenchmarkPriceType_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkPriceType_31.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_31("STRING_627637970");
    noRelatedSym_0_1.set(BenchmarkSecurityID_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkSecurityID_31.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_31("STRING_1754225137");
    noRelatedSym_0_1.set(BenchmarkSecurityIDSource_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkSecurityIDSource_31.getString());
    FIX::Spread Spread_31;
    Spread_31.setString("3191876");
    noRelatedSym_0_1.set(Spread_31);
    SpreadOrBenchmarkCurveData_31.insert(Spread_31.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_31);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_52;
      FIX::StipulationType StipulationType_52("STRING_REFTRADE");
      noStipulations_1_1_0.set(StipulationType_52);
      Stipulations_NoStipulations_52.insert(StipulationType_52.getString());
      FIX::StipulationValue StipulationValue_52("STRING_1598321897");
      noStipulations_1_1_0.set(StipulationValue_52);
      Stipulations_NoStipulations_52.insert(StipulationValue_52.getString());
      all_values.push_back(Stipulations_NoStipulations_52);

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_17;
      FIX::EndStrikePxRange EndStrikePxRange_17;
      EndStrikePxRange_17.setString("438675");
      noStrikeRules_1_1_0.set(EndStrikePxRange_17);
      StrikeRules_NoStrikeRules_17.insert(EndStrikePxRange_17.getString());
      FIX::StartStrikePxRange StartStrikePxRange_17;
      StartStrikePxRange_17.setString("18552857");
      noStrikeRules_1_1_0.set(StartStrikePxRange_17);
      StrikeRules_NoStrikeRules_17.insert(StartStrikePxRange_17.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_17(1549657059);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeExerciseStyle_17.getString());
      FIX::StrikeIncrement StrikeIncrement_17;
      StrikeIncrement_17.setString("4718171");
      noStrikeRules_1_1_0.set(StrikeIncrement_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeIncrement_17.getString());
      FIX::StrikeRuleID StrikeRuleID_17("STRING_1186279826");
      noStrikeRules_1_1_0.set(StrikeRuleID_17);
      StrikeRules_NoStrikeRules_17.insert(StrikeRuleID_17.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_17);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_35;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_35("MONTHYEAR_946895196");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_35);
        MaturityRules_NoMaturityRules_35.insert(EndMaturityMonthYear_35.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_35(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearFormat_35.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_35(276201493);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearIncrement_35.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_35(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityMonthYearIncrementUnits_35.getString());
        FIX::MaturityRuleID MaturityRuleID_35("STRING_1684311124");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_35);
        MaturityRules_NoMaturityRules_35.insert(MaturityRuleID_35.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_35("MONTHYEAR_298596819");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_35);
        MaturityRules_NoMaturityRules_35.insert(StartMaturityMonthYear_35.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_35);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_36;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_36("MONTHYEAR_1220881773");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_36);
        MaturityRules_NoMaturityRules_36.insert(EndMaturityMonthYear_36.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_36(0);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearFormat_36.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_36(1287066860);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearIncrement_36.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_36(1);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityMonthYearIncrementUnits_36.getString());
        FIX::MaturityRuleID MaturityRuleID_36("STRING_698451351");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_36);
        MaturityRules_NoMaturityRules_36.insert(MaturityRuleID_36.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_36("MONTHYEAR_1377898613");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_36);
        MaturityRules_NoMaturityRules_36.insert(StartMaturityMonthYear_36.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_36);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_37;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_37("MONTHYEAR_1598902788");
        noMaturityRules_1_0_2_2.set(EndMaturityMonthYear_37);
        MaturityRules_NoMaturityRules_37.insert(EndMaturityMonthYear_37.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_37(2);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearFormat_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearFormat_37.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_37(1325353828);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrement_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearIncrement_37.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_37(0);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrementUnits_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityMonthYearIncrementUnits_37.getString());
        FIX::MaturityRuleID MaturityRuleID_37("STRING_1105776304");
        noMaturityRules_1_0_2_2.set(MaturityRuleID_37);
        MaturityRules_NoMaturityRules_37.insert(MaturityRuleID_37.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_37("MONTHYEAR_84356973");
        noMaturityRules_1_0_2_2.set(StartMaturityMonthYear_37);
        MaturityRules_NoMaturityRules_37.insert(StartMaturityMonthYear_37.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_37);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_18;
      FIX::EndStrikePxRange EndStrikePxRange_18;
      EndStrikePxRange_18.setString("19204361");
      noStrikeRules_1_1_1.set(EndStrikePxRange_18);
      StrikeRules_NoStrikeRules_18.insert(EndStrikePxRange_18.getString());
      FIX::StartStrikePxRange StartStrikePxRange_18;
      StartStrikePxRange_18.setString("7125177");
      noStrikeRules_1_1_1.set(StartStrikePxRange_18);
      StrikeRules_NoStrikeRules_18.insert(StartStrikePxRange_18.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_18(403544595);
      noStrikeRules_1_1_1.set(StrikeExerciseStyle_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeExerciseStyle_18.getString());
      FIX::StrikeIncrement StrikeIncrement_18;
      StrikeIncrement_18.setString("10593272");
      noStrikeRules_1_1_1.set(StrikeIncrement_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeIncrement_18.getString());
      FIX::StrikeRuleID StrikeRuleID_18("STRING_694993161");
      noStrikeRules_1_1_1.set(StrikeRuleID_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeRuleID_18.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_18);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_38;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_38("MONTHYEAR_65338039");
        noMaturityRules_1_1_2_0.set(EndMaturityMonthYear_38);
        MaturityRules_NoMaturityRules_38.insert(EndMaturityMonthYear_38.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_38(1);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearFormat_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearFormat_38.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_38(1709668623);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrement_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearIncrement_38.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_38(2);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrementUnits_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearIncrementUnits_38.getString());
        FIX::MaturityRuleID MaturityRuleID_38("STRING_1210677795");
        noMaturityRules_1_1_2_0.set(MaturityRuleID_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityRuleID_38.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_38("MONTHYEAR_748464801");
        noMaturityRules_1_1_2_0.set(StartMaturityMonthYear_38);
        MaturityRules_NoMaturityRules_38.insert(StartMaturityMonthYear_38.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_38);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_39;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_39("MONTHYEAR_1028017334");
        noMaturityRules_1_1_2_1.set(EndMaturityMonthYear_39);
        MaturityRules_NoMaturityRules_39.insert(EndMaturityMonthYear_39.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_39(1);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearFormat_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearFormat_39.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_39(2119307239);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearIncrement_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearIncrement_39.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_39(3);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearIncrementUnits_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearIncrementUnits_39.getString());
        FIX::MaturityRuleID MaturityRuleID_39("STRING_1451824885");
        noMaturityRules_1_1_2_1.set(MaturityRuleID_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityRuleID_39.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_39("MONTHYEAR_1656134715");
        noMaturityRules_1_1_2_1.set(StartMaturityMonthYear_39);
        MaturityRules_NoMaturityRules_39.insert(StartMaturityMonthYear_39.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_39);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_40;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_40("MONTHYEAR_1602815646");
        noMaturityRules_1_1_2_2.set(EndMaturityMonthYear_40);
        MaturityRules_NoMaturityRules_40.insert(EndMaturityMonthYear_40.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_40(2);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearFormat_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearFormat_40.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_40(912112996);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearIncrement_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearIncrement_40.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_40(2);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearIncrementUnits_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearIncrementUnits_40.getString());
        FIX::MaturityRuleID MaturityRuleID_40("STRING_341271600");
        noMaturityRules_1_1_2_2.set(MaturityRuleID_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityRuleID_40.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_40("MONTHYEAR_1610564348");
        noMaturityRules_1_1_2_2.set(StartMaturityMonthYear_40);
        MaturityRules_NoMaturityRules_40.insert(StartMaturityMonthYear_40.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_40);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_134;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_134("DATA_1940174388");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingIssuer_134.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_134(178732799);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingIssuerLen_134.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_134("DATA_1298167652");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingSecurityDesc_134.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_134(1085488964);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingSecurityDescLen_134.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_134;
      UnderlyingAdjustedQuantity_134.setString("12845091");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_134);
      UnderlyingInstrument_134.insert(UnderlyingAdjustedQuantity_134.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_134;
      UnderlyingAllocationPercent_134.setString("46.250000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_134);
      UnderlyingInstrument_134.insert(UnderlyingAllocationPercent_134.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_134;
      UnderlyingAttachmentPoint_134.setString("15.110000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_134);
      UnderlyingInstrument_134.insert(UnderlyingAttachmentPoint_134.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_134("STRING_1997026897");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_134);
      UnderlyingInstrument_134.insert(UnderlyingCFICode_134.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_134("STRING_1786069220");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_134);
      UnderlyingInstrument_134.insert(UnderlyingCPProgram_134.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_134("STRING_1917768804");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_134);
      UnderlyingInstrument_134.insert(UnderlyingCPRegType_134.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_134;
      UnderlyingCapValue_134.setString("5445364");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_134);
      UnderlyingInstrument_134.insert(UnderlyingCapValue_134.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_134;
      UnderlyingCashAmount_134.setString("16404520");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_134);
      UnderlyingInstrument_134.insert(UnderlyingCashAmount_134.getString());
      FIX::UnderlyingCashType UnderlyingCashType_134("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_134);
      UnderlyingInstrument_134.insert(UnderlyingCashType_134.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_134;
      UnderlyingContractMultiplier_134.setString("12833970");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_134);
      UnderlyingInstrument_134.insert(UnderlyingContractMultiplier_134.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_134(1202637040);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_134);
      UnderlyingInstrument_134.insert(UnderlyingContractMultiplierUnit_134.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_134("COUNTRY_1450618294");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingCountryOfIssue_134.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_134("LOCALMKTDATE_346591225");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_134);
      UnderlyingInstrument_134.insert(UnderlyingCouponPaymentDate_134.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_134;
      UnderlyingCouponRate_134.setString("18.410000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_134);
      UnderlyingInstrument_134.insert(UnderlyingCouponRate_134.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_134("STRING_331151980");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_134);
      UnderlyingInstrument_134.insert(UnderlyingCreditRating_134.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_134("USD");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_134);
      UnderlyingInstrument_134.insert(UnderlyingCurrency_134.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_134;
      UnderlyingCurrentValue_134.setString("16353708");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_134);
      UnderlyingInstrument_134.insert(UnderlyingCurrentValue_134.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_134;
      UnderlyingDetachmentPoint_134.setString("54.540000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_134);
      UnderlyingInstrument_134.insert(UnderlyingDetachmentPoint_134.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_134;
      UnderlyingDirtyPrice_134.setString("14315764");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_134);
      UnderlyingInstrument_134.insert(UnderlyingDirtyPrice_134.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_134;
      UnderlyingEndPrice_134.setString("10907028");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_134);
      UnderlyingInstrument_134.insert(UnderlyingEndPrice_134.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_134;
      UnderlyingEndValue_134.setString("1862448");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_134);
      UnderlyingInstrument_134.insert(UnderlyingEndValue_134.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_134(196205847);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_134);
      UnderlyingInstrument_134.insert(UnderlyingExerciseStyle_134.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_134;
      UnderlyingFXRate_134.setString("18331016");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_134);
      UnderlyingInstrument_134.insert(UnderlyingFXRate_134.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_134('D');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_134);
      UnderlyingInstrument_134.insert(UnderlyingFXRateCalc_134.getString());
      FIX::UnderlyingFactor UnderlyingFactor_134;
      UnderlyingFactor_134.setString("18067701");
      noUnderlyings_1_1_0.set(UnderlyingFactor_134);
      UnderlyingInstrument_134.insert(UnderlyingFactor_134.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_134(1805915487);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_134);
      UnderlyingInstrument_134.insert(UnderlyingFlowScheduleType_134.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_134("STRING_320207156");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_134);
      UnderlyingInstrument_134.insert(UnderlyingInstrRegistry_134.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_134("LOCALMKTDATE_1985502994");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_134);
      UnderlyingInstrument_134.insert(UnderlyingIssueDate_134.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_134("STRING_956599492");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_134);
      UnderlyingInstrument_134.insert(UnderlyingIssuer_134.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_134("STRING_1405696121");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingLocaleOfIssue_134.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_134("LOCALMKTDATE_1122528450");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityDate_134.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_134("MONTHYEAR_191640469");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityMonthYear_134.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_134("TZTIMEONLY_116653984");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityTime_134.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_134;
      UnderlyingNotionalPercentageOutstanding_134.setString("16.990000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_134);
      UnderlyingInstrument_134.insert(UnderlyingNotionalPercentageOutstanding_134.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_134('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_134);
      UnderlyingInstrument_134.insert(UnderlyingOptAttribute_134.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_134;
      UnderlyingOriginalNotionalPercentageOutstanding_134.setString("27.890000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_134);
      UnderlyingInstrument_134.insert(UnderlyingOriginalNotionalPercentageOutstanding_134.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_134("STRING_1516608109");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_134);
      UnderlyingInstrument_134.insert(UnderlyingPriceUnitOfMeasure_134.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_134;
      UnderlyingPriceUnitOfMeasureQty_134.setString("14706781");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_134);
      UnderlyingInstrument_134.insert(UnderlyingPriceUnitOfMeasureQty_134.getString());
      FIX::UnderlyingProduct UnderlyingProduct_134(1870045984);
      noUnderlyings_1_1_0.set(UnderlyingProduct_134);
      UnderlyingInstrument_134.insert(UnderlyingProduct_134.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_134(652521539);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_134);
      UnderlyingInstrument_134.insert(UnderlyingPutOrCall_134.getString());
      FIX::UnderlyingPx UnderlyingPx_134;
      UnderlyingPx_134.setString("5258314");
      noUnderlyings_1_1_0.set(UnderlyingPx_134);
      UnderlyingInstrument_134.insert(UnderlyingPx_134.getString());
      FIX::UnderlyingQty UnderlyingQty_134;
      UnderlyingQty_134.setString("11731806");
      noUnderlyings_1_1_0.set(UnderlyingQty_134);
      UnderlyingInstrument_134.insert(UnderlyingQty_134.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_134("LOCALMKTDATE_999112764");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_134);
      UnderlyingInstrument_134.insert(UnderlyingRedemptionDate_134.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_134("STRING_329449692");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_134);
      UnderlyingInstrument_134.insert(UnderlyingRepoCollateralSecurityType_134.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_134;
      UnderlyingRepurchaseRate_134.setString("26.100000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_134);
      UnderlyingInstrument_134.insert(UnderlyingRepurchaseRate_134.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_134(1355793333);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_134);
      UnderlyingInstrument_134.insert(UnderlyingRepurchaseTerm_134.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_134("STRING_104891476");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_134);
      UnderlyingInstrument_134.insert(UnderlyingRestructuringType_134.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_134("STRING_992219769");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityDesc_134.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_134("EXCHANGE_1016815139");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityExchange_134.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_134("STRING_1536467975");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityID_134.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_134("STRING_2082922574");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityIDSource_134.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_134("STRING_1203059956");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_134);
      UnderlyingInstrument_134.insert(UnderlyingSecuritySubType_134.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_134("STRING_1732673822");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityType_134.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_134("STRING_1768540590");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_134);
      UnderlyingInstrument_134.insert(UnderlyingSeniority_134.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_134("STRING_1730576372");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_134);
      UnderlyingInstrument_134.insert(UnderlyingSettlMethod_134.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_134(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_134);
      UnderlyingInstrument_134.insert(UnderlyingSettlementType_134.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_134;
      UnderlyingStartValue_134.setString("14269724");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_134);
      UnderlyingInstrument_134.insert(UnderlyingStartValue_134.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_134("STRING_2050783529");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingStateOrProvinceOfIssue_134.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_134("CHF");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_134);
      UnderlyingInstrument_134.insert(UnderlyingStrikeCurrency_134.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_134;
      UnderlyingStrikePrice_134.setString("13089960");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_134);
      UnderlyingInstrument_134.insert(UnderlyingStrikePrice_134.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_134("STRING_205024518");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_134);
      UnderlyingInstrument_134.insert(UnderlyingSymbol_134.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_134("STRING_427728743");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_134);
      UnderlyingInstrument_134.insert(UnderlyingSymbolSfx_134.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_134("STRING_1425649986");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_134);
      UnderlyingInstrument_134.insert(UnderlyingTimeUnit_134.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_134("STRING_1177096217");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_134);
      UnderlyingInstrument_134.insert(UnderlyingUnitOfMeasure_134.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_134;
      UnderlyingUnitOfMeasureQty_134.setString("2579547");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_134);
      UnderlyingInstrument_134.insert(UnderlyingUnitOfMeasureQty_134.getString());
      all_values.push_back(UnderlyingInstrument_134);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_273;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_273("STRING_546220678");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_273);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_273.insert(UnderlyingSecurityAltID_273.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_273("STRING_1728632892");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_273);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_273.insert(UnderlyingSecurityAltIDSource_273.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_252;
        FIX::UnderlyingStipType UnderlyingStipType_252("STRING_1198742217");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_252);
        UnderlyingStipulations_NoUnderlyingStips_252.insert(UnderlyingStipType_252.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_252("STRING_106980743");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_252);
        UnderlyingStipulations_NoUnderlyingStips_252.insert(UnderlyingStipValue_252.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_252);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_275;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_275("STRING_50371334");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_275);
        UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyID_275.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_275('4');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_275);
        UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyIDSource_275.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_275(1565181057);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_275);
        UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyRole_275.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_275);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_517("STRING_541321911");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_517);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517.insert(UnderlyingInstrumentPartySubID_517.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_517(409917178);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_517);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517.insert(UnderlyingInstrumentPartySubIDType_517.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_518("STRING_275496159");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_518);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518.insert(UnderlyingInstrumentPartySubID_518.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_518(2077789886);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_518);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518.insert(UnderlyingInstrumentPartySubIDType_518.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_519("STRING_345356105");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_519);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519.insert(UnderlyingInstrumentPartySubID_519.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_519(1478556115);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_519);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519.insert(UnderlyingInstrumentPartySubIDType_519.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_276;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_276("STRING_1662980060");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_276);
        UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyID_276.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_276('2');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_276);
        UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyIDSource_276.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_276(1061648839);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_276);
        UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyRole_276.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_276);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_520("STRING_1393385476");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_520);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520.insert(UnderlyingInstrumentPartySubID_520.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_520(964948720);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_520);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520.insert(UnderlyingInstrumentPartySubIDType_520.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    // YieldData
    multiset<string> YieldData_26;
    FIX::Yield Yield_26;
    Yield_26.setString("64.990000");
    noRelatedSym_0_1.set(Yield_26);
    YieldData_26.insert(Yield_26.getString());
    FIX::YieldCalcDate YieldCalcDate_26("LOCALMKTDATE_1629473750");
    noRelatedSym_0_1.set(YieldCalcDate_26);
    YieldData_26.insert(YieldCalcDate_26.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_26("LOCALMKTDATE_126461074");
    noRelatedSym_0_1.set(YieldRedemptionDate_26);
    YieldData_26.insert(YieldRedemptionDate_26.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_26;
    YieldRedemptionPrice_26.setString("1949773");
    noRelatedSym_0_1.set(YieldRedemptionPrice_26);
    YieldData_26.insert(YieldRedemptionPrice_26.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_26(2057202493);
    noRelatedSym_0_1.set(YieldRedemptionPriceType_26);
    YieldData_26.insert(YieldRedemptionPriceType_26.getString());
    FIX::YieldType YieldType_26("STRING_GROSS");
    noRelatedSym_0_1.set(YieldType_26);
    YieldData_26.insert(YieldType_26.getString());
    all_values.push_back(YieldData_26);

    msg.addGroup(noRelatedSym_0_1);
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
